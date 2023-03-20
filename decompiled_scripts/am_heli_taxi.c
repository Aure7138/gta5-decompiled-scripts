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
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_114 = 0;
	bool bLocal_115 = 0;
	bool bLocal_116 = 0;
	var uLocal_117[5] = { 0, 0, 0, 0, 0 };
	int iLocal_123 = 0;
	var uLocal_124 = 0;
	struct<10> Local_125 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<30> Local_135 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 } ;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	bool bLocal_167 = 0;
	struct<3> Local_168[32];
	int iLocal_265 = 0;
	var uLocal_266 = 0;
	int iLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 12;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
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
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
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
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
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
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 1065353216;
	int iLocal_961 = 0;
	int iLocal_962 = 0;
	int iLocal_963 = 0;
	int iLocal_964 = 0;
	int iLocal_965 = 0;
	int iLocal_966 = 0;
	var uLocal_967 = 16;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	int iLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	int iLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	bool bLocal_1158 = 0;
	int iLocal_1159 = 0;
	int iLocal_1160 = 0;
	var uLocal_1161 = 0;
	int iLocal_1162 = 0;
	int iLocal_1163 = 0;
	int iLocal_1164 = 0;
	struct<3> Local_1165 = { 0, 0, 0 } ;
	struct<3> Local_1168[1];
	var uLocal_1172[1] = { 0 };
	var uLocal_1174[1] = { 0 };
	int iLocal_1176 = 0;
	int iLocal_1177 = 0;
	int iLocal_1178 = 0;
	int iLocal_1179 = 0;
	int iLocal_1180 = 0;
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
	iLocal_267 = 6;
	iLocal_1149 = 10000;
	func_422();
	if (unk_0x1995B52453EF6537())
	{
		if (!func_418(ScriptParam_0))
		{
			if (unk_0x04DE35D10A718EEF())
			{
				Local_135.f_24 = 8;
			}
			func_412(1);
		}
	}
	while (true)
	{
		func_411();
		if (func_401())
		{
			if (unk_0x1995B52453EF6537())
			{
				if (unk_0x04DE35D10A718EEF())
				{
					Local_135.f_24 = 8;
				}
			}
			func_412(1);
		}
		if (unk_0xF5C5C10402E12CCB() != iLocal_961 && !unk_0x04DE35D10A718EEF())
		{
			if (unk_0x04DE35D10A718EEF())
			{
				Local_135.f_24 = 8;
			}
			func_412(1);
		}
		if (unk_0x28B48C55342F6368(unk_0xD38B43D04B11A59A()) != Local_135.f_5)
		{
			if (unk_0x04DE35D10A718EEF())
			{
				Local_135.f_24 = 8;
			}
			func_412(1);
		}
		unk_0x4E2CA5164656EED0();
		iLocal_1179 = 0;
		iLocal_1180 = 0;
		switch (func_400(unk_0x1E7FB1CA38C403F6()))
		{
			case 0:
				if (func_399() == 1)
				{
					func_398();
					func_397();
					Local_168[unk_0x1E7FB1CA38C403F6() /*3*/] = 1;
				}
				else if (func_399() == 5)
				{
					Local_168[unk_0x1E7FB1CA38C403F6() /*3*/] = 3;
				}
				break;
			
			case 1:
				func_381();
				if (func_399() == 1)
				{
					func_263();
				}
				else if (func_399() == 5)
				{
					Local_168[unk_0x1E7FB1CA38C403F6() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_262(&(Local_135.f_25));
				if (func_261(&(Local_135.f_25)))
				{
					Local_168[unk_0x1E7FB1CA38C403F6() /*3*/] = 5;
				}
				break;
			
			case 2:
				Local_168[unk_0x1E7FB1CA38C403F6() /*3*/] = 5;
			
			case 5:
				func_412(1);
				break;
		}
		func_260();
		if (func_259())
		{
			func_251();
		}
		if (unk_0x04DE35D10A718EEF())
		{
			switch (func_399())
			{
				case 0:
					if (func_228())
					{
						func_398();
						Local_135.f_0 = 1;
					}
					break;
				
				case 1:
					func_208();
					func_202();
					func_146();
					if (func_138())
					{
						Local_135.f_0 = 5;
					}
					break;
				
				case 4:
					func_1();
					break;
				
				case 5:
					break;
				}
		}
	}
}

void func_1()
{
	func_131();
	if (func_130(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
	{
		if (unk_0xF44A5E894FE76438(iLocal_265, 6) && !unk_0xF44A5E894FE76438(iLocal_265, 7))
		{
			if (!func_129(0))
			{
				if (!func_259())
				{
					func_127(13);
					func_111(func_124(13), 6, 2, 1);
				}
				else
				{
					func_127(44);
					func_111(func_124(44), 6, 2, 1);
				}
				unk_0xB8A73E7DA87B2968(&iLocal_265, 7);
				Local_135.f_0 = 5;
			}
		}
		if (unk_0xF44A5E894FE76438(iLocal_265, 5) && !unk_0xF44A5E894FE76438(iLocal_265, 6))
		{
			if (func_129(0))
			{
				unk_0xB8A73E7DA87B2968(&iLocal_265, 6);
			}
		}
		if (!unk_0xF44A5E894FE76438(iLocal_265, 5))
		{
			if (func_109(&uLocal_1134, 5000, 0))
			{
				if (!func_259())
				{
					func_108(&uLocal_967, 3, 0, "FM_MERRYWEATHER", 0, 1);
					if (func_12(&uLocal_967, 85, "CT_AUD", "MPCT_9", 0, 0))
					{
						unk_0xB8A73E7DA87B2968(&iLocal_265, 5);
					}
				}
				else
				{
					func_11(1);
					if (func_6(1))
					{
						func_108(&uLocal_967, 3, 0, "EXECPA_MALE", 0, 1);
						if (func_12(&uLocal_967, func_2(1), "EXCALAU", "EXCAL_HPROBM", 0, 0))
						{
							unk_0xB8A73E7DA87B2968(&iLocal_265, 5);
						}
					}
					else
					{
						func_108(&uLocal_967, 2, 0, "EXECPA_FEMALE", 0, 1);
						if (func_12(&uLocal_967, func_2(1), "EXCALAU", "EXCAL_HPROBF", 0, 0))
						{
							unk_0xB8A73E7DA87B2968(&iLocal_265, 5);
						}
					}
				}
			}
		}
	}
}

int func_2(bool bParam0)
{
	if (func_6(bParam0))
	{
		if (bParam0 && func_3())
		{
			Global_101652.f_26993[22 /*29*/].f_24[Global_14443] = 1;
			return 22;
		}
		else
		{
			return 75;
		}
	}
	if (bParam0 && func_3())
	{
		Global_101652.f_26993[22 /*29*/].f_24[Global_14443] = 1;
		return 22;
	}
	return 74;
}

int func_3()
{
	int iVar0;
	
	iVar0 = func_5(unk_0xFB6B3EEFAB2DD12C());
	if (((iVar0 != unk_0xFB6B3EEFAB2DD12C() && iVar0 != func_4()) && unk_0x1E0256D6F1052B31(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

int func_4()
{
	return -1;
}

int func_5(int iParam0)
{
	if (iParam0 != func_4())
	{
		return Global_1618089[iParam0 /*390*/].f_11;
	}
	return func_4();
}

bool func_6(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		iVar0 = func_5(unk_0xFB6B3EEFAB2DD12C());
		if (func_3())
		{
			if (func_10(iVar0))
			{
				return 1;
			}
			return 0;
		}
	}
	return func_7(3204, -1, 0) != 0;
}

int func_7(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2503773[iParam0 /*3*/][func_8(iParam1)];
	if (unk_0x5BC7B5709E38CBE0(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_8(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_9();
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

int func_9()
{
	return Global_1312731;
}

bool func_10(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_257.f_13, 29);
}

void func_11(bool bParam0)
{
	if (bParam0)
	{
		Global_1573336 = 1;
	}
	else
	{
		Global_1573336 = 0;
	}
}

int func_12(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_106())
	{
		return 0;
	}
	if (func_105())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_13(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_13(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xC55B9553B3EDADE9(sParam2))
	{
		return 0;
	}
	if (unk_0x502AC248EEE98C95(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0xC55B9553B3EDADE9(sParam3))
	{
		return 0;
	}
	if (unk_0x502AC248EEE98C95(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0x6D9FF4C899CD785F(unk_0x0FBCE11007AF301F());
	iVar1 = func_104(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0xC55B9553B3EDADE9(sParam7))
	{
		iVar2 = unk_0x6D9FF4C899CD785F(sParam7);
	}
	if (func_103(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_98(iParam6))
	{
		return 0;
	}
	if (func_95(iVar0, iVar1, iVar2))
	{
		if (func_94())
		{
			return 0;
		}
		func_93();
		return func_20(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, iParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_19(iParam4))
	{
		return 0;
	}
	func_14(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, iParam6);
	return 0;
}

void func_14(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	Global_1346465.f_40.f_1 = iParam0;
	Global_1346465.f_40.f_2 = iParam1;
	Global_1346465.f_40.f_3 = iParam2;
	StringCopy(&(Global_1346465.f_40.f_4), sParam3, 16);
	Global_1346465.f_40.f_8 = iParam4;
	Global_1346465.f_40.f_9 = iParam5;
	Global_1346465.f_40.f_14 = iParam6;
	func_15(iParam4);
	func_93();
	Global_1346465.f_40.f_13 = unk_0x3647F58C23A6E46A(unk_0x7414B386C0020BEC(), 7000);
}

void func_15(int iParam0)
{
	if (func_18(iParam0))
	{
		func_17();
		return;
	}
	func_16();
}

void func_16()
{
	Global_1346465.f_40.f_10 = 0;
}

void func_17()
{
	Global_1346465.f_40.f_10 = 1;
}

int func_18(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_19(int iParam0)
{
	return iParam0 > Global_1346465.f_40.f_8;
}

int func_20(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_92();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_89(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_86(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_89(uParam0, sParam3, sParam4);
		}
		return func_69(uParam0, iParam1, sParam3, sParam4, iParam7);
	}
	if (iParam5 == 5)
	{
		return func_68(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_58(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_57(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_21(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_21(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_56();
	bVar0 = true;
	if (func_23(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_22(120000);
		return 1;
	}
	return 0;
}

void func_22(int iParam0)
{
	Global_1346465.f_40.f_11 = unk_0x3647F58C23A6E46A(unk_0x7414B386C0020BEC(), iParam0);
	Global_1346465.f_40.f_12 = 1;
}

int func_23(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_4();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x7746E8ACE891BFA4(iVar0);
		iVar1 = func_50(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x8D6C526020C84E23(unk_0x7414B386C0020BEC(), Global_1346465.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_49(sParam5, bParam6, &iVar3);
	uVar5 = func_47(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xC55B9553B3EDADE9(sParam8))
	{
		iVar6++;
		if (!unk_0xC55B9553B3EDADE9(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0xCC257DA11A122B5F(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (unk_0xF44A5E894FE76438(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xF44A5E894FE76438(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xC55B9553B3EDADE9(sVar2))
	{
		bVar12 = func_46(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_27(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0xF44A5E894FE76438(iParam4, 0))
	{
		func_26();
	}
	func_56();
	func_25();
	func_24();
	return 1;
}

void func_24()
{
	Global_1346465.f_57 = 0;
	Global_1346465.f_57.f_1 = 0;
}

void func_25()
{
	Global_1346465.f_40 = 3;
}

void func_26()
{
	unk_0xB8A73E7DA87B2968(&Global_2313, 8);
}

int func_27(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_28(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3020 = iParam6;
			unk_0xB8A73E7DA87B2968(&Global_2595258, 0);
		}
		return 1;
	}
	return 0;
}

int func_28(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0xCC257DA11A122B5F(sParam14, sParam15))
	{
	}
	func_40();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14443 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14443 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14443 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
		{
			if (unk_0x2C278D8A0121A8DE(unk_0xD5A676B97920D126()))
			{
				return 0;
			}
		}
		if (Global_2595243 == 1)
		{
			return 0;
		}
		if (unk_0xAB964FCFAC3C767A(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0xAB964FCFAC3C767A(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_39() == 0)
	{
		func_37();
		return 0;
	}
	func_36(Global_2595242);
	StringCopy(&(Global_2593993[Global_2595242 /*104*/]), sParam1, 64);
	Global_2593993[Global_2595242 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_2593993[Global_2595242 /*104*/].f_24 = iParam2;
	}
	Global_2593993[Global_2595242 /*104*/].f_25 = iParam7;
	Global_2593993[Global_2595242 /*104*/].f_26 = uParam8;
	Global_2593993[Global_2595242 /*104*/].f_29 = uParam9;
	Global_2593993[Global_2595242 /*104*/].f_30 = uParam12;
	Global_2593993[Global_2595242 /*104*/].f_31 = uParam11;
	Global_2593993[Global_2595242 /*104*/].f_28 = 0;
	Global_2593993[Global_2595242 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_2593993[Global_2595242 /*104*/].f_33), sParam4, 64);
	Global_2593993[Global_2595242 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_2593993[Global_2595242 /*104*/].f_50), sParam5, 64);
	Global_2593993[Global_2595242 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_2593993[Global_2595242 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_2593993[Global_2595242 /*104*/].f_83), sParam15, 64);
	func_40();
	switch (iParam16)
	{
		case 3:
			Global_2593993[Global_2595242 /*104*/].f_99[Global_14443] = 1;
			break;
		
		case 0:
			Global_2593993[Global_2595242 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_2593993[Global_2595242 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_2593993[Global_2595242 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_14443)
		{
			case 0:
				func_35(0);
				break;
			
			case 1:
				func_35(1);
				break;
			
			case 2:
				func_35(2);
				break;
			
			case 3:
				func_35(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_2595243 = 1;
				break;
			
			case 0:
				Global_2595243 = 1;
				break;
			
			case 2:
				Global_2595243 = 1;
				break;
			
			case 1:
				Global_2595243 = 1;
				break;
			}
	}
	Global_16814[Global_2595242] = 0;
	if (bParam10)
	{
		func_40();
		if (Global_14386)
		{
			StringCopy(&Global_14432, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14443)
			{
				case 0:
					StringCopy(&Global_14432, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14432, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14432, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14432, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_34())
			{
				unk_0xA93E75A5493862BD(-1, "Text_Arrive_Tone", &Global_14432, 1);
			}
		}
	}
	if (!Global_14605)
	{
		if (Global_14443.f_1 == 6)
		{
			func_33(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_29(1);
			func_33(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14423), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_16813 = 0;
	Global_2918 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2882[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_32(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2320[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2320[iVar1 /*15*/].f_4)
					{
						if (Global_2882[iVar0] == 0)
						{
							Global_2846[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xF44A5E894FE76438(Global_2314, 3))
								{
									iVar2 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14608 = 0;
								}
								unk_0x3B6EF6403E3F1CAC(Global_14424, "SET_DATA_SLOT");
								unk_0x1B215CC37BF52E79(1);
								unk_0x1B215CC37BF52E79(iVar0);
								unk_0x1B215CC37BF52E79(Global_2320[iVar1 /*15*/].f_10);
								unk_0x1B215CC37BF52E79(0);
								func_31(&(Global_2320[iVar1 /*15*/]));
								unk_0x1B215CC37BF52E79(iVar2);
								unk_0xBBAAC5B2437ACF2A();
							}
							if (Global_2452475)
							{
								if (iVar1 == 14)
								{
									func_30(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2882[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2320[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2320[iVar1 /*15*/].f_4)
					{
						if (Global_2882[iVar0] == 0)
						{
							Global_2846[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_101652.f_13084[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_101652.f_13084[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_101652.f_13084[iVar3 /*104*/].f_99[Global_14443] == 1)
											{
												Global_16813++;
											}
										}
									}
									iVar3++;
								}
								func_30(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16813), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69697)
								{
									iVar4 = 0;
									iVar4 = Global_2593992;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_2593993[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_2593993[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_2593993[iVar5 /*104*/].f_99[Global_14443] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_30(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14443)
									{
										case 0:
											iVar6 = Global_36913;
											break;
										
										case 1:
											iVar6 = Global_36914;
											break;
										
										case 2:
											iVar6 = Global_36915;
											break;
										
										default:
											break;
									}
									func_30(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_30(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x3B6EF6403E3F1CAC(Global_14424, "SET_DATA_SLOT");
								unk_0x1B215CC37BF52E79(1);
								unk_0x1B215CC37BF52E79(iVar0);
								unk_0x1B215CC37BF52E79(Global_2320[iVar1 /*15*/].f_10);
								unk_0x1B215CC37BF52E79(0);
								func_31(&(Global_2320[iVar1 /*15*/]));
								unk_0x1B215CC37BF52E79(Global_2319);
								unk_0xBBAAC5B2437ACF2A();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xF44A5E894FE76438(Global_2314, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x3B6EF6403E3F1CAC(Global_14424, "SET_DATA_SLOT");
								unk_0x1B215CC37BF52E79(1);
								unk_0x1B215CC37BF52E79(iVar0);
								unk_0x1B215CC37BF52E79(Global_2320[iVar1 /*15*/].f_10);
								unk_0x1B215CC37BF52E79(0);
								func_31(&(Global_2320[iVar1 /*15*/]));
								unk_0x1B215CC37BF52E79(iVar7);
								unk_0xBBAAC5B2437ACF2A();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xF44A5E894FE76438(Global_2314, 3))
								{
									iVar8 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14608 = 0;
								}
								unk_0x3B6EF6403E3F1CAC(Global_14424, "SET_DATA_SLOT");
								unk_0x1B215CC37BF52E79(1);
								unk_0x1B215CC37BF52E79(iVar0);
								unk_0x1B215CC37BF52E79(Global_2320[iVar1 /*15*/].f_10);
								unk_0x1B215CC37BF52E79(0);
								func_31(&(Global_2320[iVar1 /*15*/]));
								unk_0x1B215CC37BF52E79(iVar8);
								unk_0xBBAAC5B2437ACF2A();
							}
							else if (iVar1 == 8)
							{
								unk_0x3B6EF6403E3F1CAC(Global_14424, "SET_DATA_SLOT");
								unk_0x1B215CC37BF52E79(1);
								unk_0x1B215CC37BF52E79(iVar0);
								unk_0x1B215CC37BF52E79(Global_2320[iVar1 /*15*/].f_10);
								unk_0x1B215CC37BF52E79(0);
								func_31(&(Global_2320[iVar1 /*15*/]));
								unk_0x1B215CC37BF52E79(42);
								unk_0xBBAAC5B2437ACF2A();
							}
							else if ((iVar1 == 23 && unk_0xCC257DA11A122B5F(&(Global_2320[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xF44A5E894FE76438(Global_2314, 6))
							{
								unk_0x3B6EF6403E3F1CAC(Global_14424, "SET_DATA_SLOT");
								unk_0x1B215CC37BF52E79(1);
								unk_0x1B215CC37BF52E79(iVar0);
								unk_0x1B215CC37BF52E79(Global_2320[iVar1 /*15*/].f_10);
								unk_0x1B215CC37BF52E79(0);
								func_31(&(Global_2320[iVar1 /*15*/]));
								unk_0x1B215CC37BF52E79(42);
								unk_0xBBAAC5B2437ACF2A();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1616829.f_1;
								func_30(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_30(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2882[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_30(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x3B6EF6403E3F1CAC(uParam0, sParam1);
	unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xC55B9553B3EDADE9(sParam7))
	{
		func_31(sParam7);
	}
	if (!unk_0xC55B9553B3EDADE9(sParam8))
	{
		func_31(sParam8);
	}
	if (!unk_0xC55B9553B3EDADE9(sParam9))
	{
		func_31(sParam9);
	}
	if (!unk_0xC55B9553B3EDADE9(sParam10))
	{
		func_31(sParam10);
	}
	if (!unk_0xC55B9553B3EDADE9(sParam11))
	{
		func_31(sParam11);
	}
	unk_0xBBAAC5B2437ACF2A();
}

void func_31(char* sParam0)
{
	unk_0x0BBDB952BE56A9DF(sParam0);
	unk_0xCB329F559FA7DCD0();
}

bool func_32(int iParam0)
{
	return Global_35777 == iParam0;
}

void func_33(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x3B6EF6403E3F1CAC(uParam0, sParam1);
	unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xBBAAC5B2437ACF2A();
}

bool func_34()
{
	return Global_1315229;
}

void func_35(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_101652.f_12994[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_36(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xABA05E2C283C3D5F();
	uVar1 = unk_0xF72CA3D5BA977203();
	uVar2 = unk_0x83D6515EE2CBF18C();
	uVar3 = unk_0x3D13C79BF80EB767();
	uVar4 = unk_0xA93FEF8677A8AF58() + 1;
	uVar5 = unk_0xAC9128C6933DA69B();
	Global_2593993[iParam0 /*104*/].f_18 = uVar0;
	Global_2593993[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_2593993[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_2593993[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_2593993[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_2593993[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_37()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_2595242 = 11;
	Global_2593993[Global_2595242 /*104*/].f_18 = -1;
	Global_2593993[Global_2595242 /*104*/].f_18.f_1 = 0;
	Global_2593993[Global_2595242 /*104*/].f_18.f_2 = 0;
	Global_2593993[Global_2595242 /*104*/].f_18.f_3 = 0;
	Global_2593993[Global_2595242 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_38(Global_2593993[iVar2 /*104*/].f_18, Global_2593993[Global_2595242 /*104*/].f_18))
		{
			Global_2595242 = iVar2;
		}
		iVar2++;
	}
	Global_2593993[Global_2595242 /*104*/].f_24 = 1;
}

int func_38(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_39()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_2593993[iVar2 /*104*/].f_24 == 0)
		{
			Global_2595242 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_2595242 = 11;
	Global_2593993[Global_2595242 /*104*/].f_18 = -1;
	Global_2593993[Global_2595242 /*104*/].f_18.f_1 = 0;
	Global_2593993[Global_2595242 /*104*/].f_18.f_2 = 0;
	Global_2593993[Global_2595242 /*104*/].f_18.f_3 = 0;
	Global_2593993[Global_2595242 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_2593993[iVar2 /*104*/].f_24 == 0 || Global_2593993[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_38(Global_2593993[iVar2 /*104*/].f_18, Global_2593993[Global_2595242 /*104*/].f_18))
			{
				Global_2595242 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_2595242 == 11)
	{
		return 0;
	}
	Global_2593993[Global_2595242 /*104*/].f_99[0] = 0;
	Global_2593993[Global_2595242 /*104*/].f_99[1] = 0;
	Global_2593993[Global_2595242 /*104*/].f_99[2] = 0;
	return 1;
}

void func_40()
{
	if (func_32(14))
	{
		if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
		{
			if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[2 /*29*/])
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
		Global_14443 = func_41();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69697)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

var func_41()
{
	func_42();
	return Global_101652.f_2079.f_539.f_3549;
}

void func_42()
{
	int iVar0;
	
	if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
	{
		if (func_45(Global_101652.f_2079.f_539.f_3549) != unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()))
		{
			iVar0 = func_44(unk_0xD5A676B97920D126());
			if (func_43(iVar0) && (!func_32(14) || Global_100604))
			{
				if (Global_101652.f_2079.f_539.f_3549 != iVar0 && func_43(Global_101652.f_2079.f_539.f_3549))
				{
					Global_101652.f_2079.f_539.f_3550 = Global_101652.f_2079.f_539.f_3549;
				}
				Global_101652.f_2079.f_539.f_3551 = iVar0;
				Global_101652.f_2079.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101652.f_2079.f_539.f_3549 != 145)
			{
				Global_101652.f_2079.f_539.f_3551 = Global_101652.f_2079.f_539.f_3549;
			}
			return;
		}
	}
	Global_101652.f_2079.f_539.f_3549 = 145;
}

bool func_43(int iParam0)
{
	return iParam0 < 3;
}

int func_44(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7887B64A08364778(iParam0))
	{
		iVar1 = unk_0xA0A4DA31DEDFAC4F(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_45(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_45(int iParam0)
{
	if (func_43(iParam0))
	{
		return Global_101652.f_26993[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_46(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_28(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3020 = iParam10;
			unk_0xB8A73E7DA87B2968(&Global_2595258, 0);
		}
		return 1;
	}
	return 0;
}

int func_47(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_48(2, iParam1);
	return iParam0;
}

void func_48(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

var func_49(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0xC55B9553B3EDADE9(sParam0))
	{
		return sLocal_18;
	}
	if (unk_0xCC257DA11A122B5F(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_48(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0xBC2999B1C8F62EDD(sParam0);
}

int func_50(int iParam0)
{
	int iVar0;
	
	iVar0 = func_53(iParam0);
	if (iVar0 == -1)
	{
		func_51(iParam0, 1);
		return 0;
	}
	Global_1363247[iVar0 /*5*/].f_4 = 1;
	return Global_1363247[iVar0 /*5*/].f_2;
}

void func_51(int iParam0, bool bParam1)
{
	if (!func_130(iParam0, 0, 1))
	{
		return;
	}
	if (func_53(iParam0) != -1)
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
	if (func_52(iParam0))
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

int func_52(int iParam0)
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

int func_53(int iParam0)
{
	int iVar0;
	
	if (!func_130(iParam0, 0, 1))
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
			func_54(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_54(int iParam0)
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
	func_55(&(Global_1363247[iVar32 /*5*/]));
	Global_1363408 = (Global_1363408 - 1);
}

void func_55(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_4();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x1995B52453EF6537())
	{
		uParam0->f_3 = unk_0x7414B386C0020BEC();
	}
}

void func_56()
{
	Global_1346465.f_40.f_9 = 4;
}

int func_57(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_56();
	bVar0 = false;
	return func_23(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_58(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_59(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_59(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_4();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x7746E8ACE891BFA4(iVar0);
		iVar1 = func_50(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x8D6C526020C84E23(unk_0x7414B386C0020BEC(), Global_1346465.f_40.f_13))
			{
				return 0;
			}
		}
		Global_16806 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_49(sParam5, bParam6, &iVar3);
	uVar5 = func_47(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xC55B9553B3EDADE9(sParam8))
	{
		iVar6++;
		if (!unk_0xC55B9553B3EDADE9(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0xCC257DA11A122B5F(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (unk_0xF44A5E894FE76438(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xF44A5E894FE76438(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xC55B9553B3EDADE9(sVar2))
	{
		bVar12 = func_67(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_61(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0xF44A5E894FE76438(iParam4, 0))
	{
		func_26();
	}
	func_60();
	func_25();
	func_24();
	return 1;
}

void func_60()
{
	Global_1346465.f_40.f_9 = 3;
}

int func_61(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x4EA098C870B73AB7(&Global_2313, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_62(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3020 = iParam6;
			Global_2923[3 /*6*/] = { Global_101652.f_26993[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			unk_0xB8A73E7DA87B2968(&Global_2313, 1);
			unk_0xB8A73E7DA87B2968(&Global_2313, 7);
		}
		return 1;
	}
	return 0;
}

int func_62(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0xCC257DA11A122B5F(sParam14, sParam15))
	{
	}
	func_40();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14443 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14443 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14443 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
		{
			if (unk_0x2C278D8A0121A8DE(unk_0xD5A676B97920D126()))
			{
				return 0;
			}
		}
		if (Global_101652.f_12994[Global_14443 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0xAB964FCFAC3C767A(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0xAB964FCFAC3C767A(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_66() == 0)
	{
		func_64();
		return 0;
	}
	func_63(Global_16812);
	StringCopy(&(Global_101652.f_13084[Global_16812 /*104*/]), sParam1, 64);
	Global_101652.f_13084[Global_16812 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_101652.f_13084[Global_16812 /*104*/].f_24 = iParam2;
	}
	Global_101652.f_13084[Global_16812 /*104*/].f_25 = iParam7;
	Global_101652.f_13084[Global_16812 /*104*/].f_26 = uParam8;
	Global_101652.f_13084[Global_16812 /*104*/].f_29 = uParam9;
	Global_101652.f_13084[Global_16812 /*104*/].f_30 = uParam12;
	Global_101652.f_13084[Global_16812 /*104*/].f_31 = uParam11;
	Global_101652.f_13084[Global_16812 /*104*/].f_28 = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_101652.f_13084[Global_16812 /*104*/].f_33), sParam4, 64);
	Global_101652.f_13084[Global_16812 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_101652.f_13084[Global_16812 /*104*/].f_50), sParam5, 64);
	Global_101652.f_13084[Global_16812 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_101652.f_13084[Global_16812 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_101652.f_13084[Global_16812 /*104*/].f_83), sParam15, 64);
	if (unk_0xF44A5E894FE76438(Global_2313, 10))
	{
		Global_101652.f_13084[Global_16812 /*104*/].f_99[0] = 1;
		Global_101652.f_13084[Global_16812 /*104*/].f_99[1] = 1;
		Global_101652.f_13084[Global_16812 /*104*/].f_99[2] = 1;
		Global_3019 = 4;
		func_35(0);
		func_35(2);
		func_35(1);
	}
	else
	{
		func_40();
		switch (iParam16)
		{
			case 3:
				Global_101652.f_13084[Global_16812 /*104*/].f_99[Global_14443] = 1;
				break;
			
			case 0:
				Global_101652.f_13084[Global_16812 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_101652.f_13084[Global_16812 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_101652.f_13084[Global_16812 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14443)
			{
				case 0:
					func_35(0);
					Global_3019 = 0;
					break;
				
				case 1:
					func_35(1);
					Global_3019 = 1;
					break;
				
				case 2:
					func_35(2);
					Global_3019 = 2;
					break;
				
				case 3:
					func_35(3);
					Global_3019 = 3;
					break;
				
				default:
					Global_3019 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0xF44A5E894FE76438(Global_2313, 10))
		{
			Global_101652.f_12994[0 /*20*/].f_17 = 1;
			Global_101652.f_12994[1 /*20*/].f_17 = 1;
			Global_101652.f_12994[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_101652.f_12994[Global_14443 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_101652.f_12994[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_101652.f_12994[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_101652.f_12994[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16814[Global_16812] = 0;
	if (bParam10)
	{
		func_40();
		if (Global_14386)
		{
			StringCopy(&Global_14432, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14443)
			{
				case 0:
					StringCopy(&Global_14432, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14432, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14432, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14432, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_34())
			{
				unk_0xA93E75A5493862BD(-1, "Text_Arrive_Tone", &Global_14432, 1);
			}
		}
	}
	if (!Global_14605)
	{
		if (Global_14443.f_1 == 6)
		{
			func_33(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_29(1);
			func_33(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14423), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_63(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xABA05E2C283C3D5F();
	uVar1 = unk_0xF72CA3D5BA977203();
	uVar2 = unk_0x83D6515EE2CBF18C();
	uVar3 = unk_0x3D13C79BF80EB767();
	uVar4 = unk_0xA93FEF8677A8AF58() + 1;
	uVar5 = unk_0xAC9128C6933DA69B();
	Global_101652.f_13084[iParam0 /*104*/].f_18 = uVar0;
	Global_101652.f_13084[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_101652.f_13084[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_101652.f_13084[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_101652.f_13084[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_101652.f_13084[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_64()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69697)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_16812 = 34;
	Global_101652.f_13084[Global_16812 /*104*/].f_18 = -1;
	Global_101652.f_13084[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_65(Global_101652.f_13084[iVar2 /*104*/].f_18, Global_101652.f_13084[Global_16812 /*104*/].f_18))
		{
			Global_16812 = iVar2;
		}
		iVar2++;
	}
	Global_101652.f_13084[Global_16812 /*104*/].f_24 = 1;
}

int func_65(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_66()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69697)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_101652.f_13084[iVar2 /*104*/].f_24 == 0)
		{
			Global_16812 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16812 = 34;
	Global_101652.f_13084[Global_16812 /*104*/].f_18 = -1;
	Global_101652.f_13084[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_101652.f_13084[iVar2 /*104*/].f_24 == 0 || Global_101652.f_13084[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_65(Global_101652.f_13084[iVar2 /*104*/].f_18, Global_101652.f_13084[Global_16812 /*104*/].f_18))
			{
				Global_16812 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_16812 == 34)
	{
		return 0;
	}
	Global_101652.f_13084[Global_16812 /*104*/].f_99[0] = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_99[1] = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_99[2] = 0;
	return 1;
}

int func_67(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	unk_0x4EA098C870B73AB7(&Global_2313, 10);
	iVar0 = 3;
	if (func_62(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3020 = iParam10;
			Global_2923[3 /*6*/] = { Global_101652.f_26993[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			StringCopy(&Global_3001, sParam5, 64);
			unk_0xB8A73E7DA87B2968(&Global_2313, 1);
			unk_0xB8A73E7DA87B2968(&Global_2313, 7);
		}
		return 1;
	}
	return 0;
}

int func_68(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
	}
	if (unk_0x7F86121C9448A9C2(unk_0xD5A676B97920D126()))
	{
		return 0;
	}
	func_60();
	bVar0 = true;
	if (func_59(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_22(120000);
		return 1;
	}
	return 0;
}

int func_69(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
		if (unk_0x7F86121C9448A9C2(unk_0xD5A676B97920D126()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0xF44A5E894FE76438(iParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0xF44A5E894FE76438(iParam4, 4))
	{
		bVar0 = func_85(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_75(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0xF44A5E894FE76438(iParam4, 3))
		{
			func_74(1);
		}
		if (unk_0xF44A5E894FE76438(iParam4, 5))
		{
			func_73(1);
		}
		func_72();
		func_25();
		func_71();
		func_70();
		return 1;
	}
	return 0;
}

void func_70()
{
	Global_2501918 = 0;
}

void func_71()
{
	Global_1346465.f_57 = 1;
	Global_1346465.f_57.f_1 = 0;
}

void func_72()
{
	Global_1346465.f_40.f_9 = 1;
}

void func_73(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xB8A73E7DA87B2968(&Global_2315, 0);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&Global_2315, 0);
	}
}

void func_74(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xB8A73E7DA87B2968(&Global_2313, 20);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&Global_2313, 20);
	}
}

int func_75(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_84(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15793 = 0;
	Global_15752 = 1;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_15750 = 0;
	Global_15797 = 0;
	Global_15799 = 0;
	Global_2621441 = 0;
	return func_76(sParam3, iParam4, bParam7);
}

int func_76(char* sParam0, int iParam1, bool bParam2)
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
					unk_0x73998CD31AEFA620(0);
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
					func_83();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x33688D334D224255())
		{
			return 0;
		}
		if (func_82(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_81();
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
			unk_0x4EA098C870B73AB7(&Global_2313, 20);
			unk_0x4EA098C870B73AB7(&Global_2314, 17);
			unk_0x4EA098C870B73AB7(&Global_2315, 0);
			if (bParam2)
			{
				func_40();
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
			if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
			{
				if (unk_0x534EC97E12C7FCD5(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (func_80())
				{
					return 0;
				}
				if (unk_0x7F86121C9448A9C2(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0x4FF49E77780A0047(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0xC3B01B2627F47C9C(unk_0xD5A676B97920D126(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69697)
				{
					if (unk_0x3ACA21A90E0A949C(unk_0xD5A676B97920D126()))
					{
						return 0;
					}
					if (unk_0xB7FE4CCB71F0CA65(unk_0xFB6B3EEFAB2DD12C()))
					{
						return 0;
					}
					if (unk_0xCF3CEB67F1DDCB15(unk_0xD5A676B97920D126()))
					{
						return 0;
					}
					if (unk_0x6E0061F15FB0EC61(unk_0xFB6B3EEFAB2DD12C()))
					{
						return 0;
					}
				}
			}
			if (func_79())
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
				if (unk_0xF44A5E894FE76438(Global_2313, 9))
				{
					return 0;
				}
			}
			func_78();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_77();
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
		func_83();
	}
	return 0;
}

void func_77()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x73998CD31AEFA620(0);
	Global_15745 = 1;
}

void func_78()
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
	unk_0x4EA098C870B73AB7(&Global_2314, 16);
}

int func_79()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_80()
{
	int iVar0;
	int iVar1;
	
	if (Global_69697)
	{
		iVar0 = 0;
		unk_0x2F29BEC857E6C0AC(unk_0xD5A676B97920D126(), &iVar1, 1);
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x8D80E88CDF0930A8() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (unk_0x59701A6EECDD5EEA(unk_0xD5A676B97920D126(), 78, 1))
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

void func_81()
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

bool func_82(int iParam0, int iParam1)
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

void func_83()
{
	unk_0xB6A622037A2FE913();
	Global_16756 = 0;
	if ((unk_0x982007D3EB9D85D2() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x73998CD31AEFA620(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x33688D334D224255())
	{
		unk_0x73998CD31AEFA620(1);
		Global_15745 = 6;
		return;
	}
}

void func_84(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_85(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_84(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15793 = 1;
	Global_15752 = 1;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_15750 = 0;
	Global_15797 = 0;
	Global_15799 = 0;
	Global_2621441 = 0;
	return func_76(sParam3, iParam4, bParam7);
}

int func_86(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
	}
	if (unk_0x7F86121C9448A9C2(unk_0xD5A676B97920D126()))
	{
		return 0;
	}
	if (func_88(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_87();
		func_72();
		func_25();
		func_71();
		func_70();
		return 1;
	}
	return 0;
}

void func_87()
{
	Global_16763 = 0;
}

bool func_88(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_84(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15793 = 0;
	Global_15752 = 1;
	Global_15759 = 0;
	Global_15754 = 1;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_15750 = 0;
	Global_15797 = 1;
	Global_15799 = 0;
	StringCopy(&Global_15893, sParam5, 24);
	Global_2621441 = 0;
	return func_76(sParam3, iParam4, bParam8);
}

int func_89(var uParam0, char* sParam1, char* sParam2)
{
	if (func_91(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_90();
		func_25();
		func_71();
		return 1;
	}
	return 0;
}

void func_90()
{
	Global_1346465.f_40.f_9 = 2;
}

bool func_91(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_84(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_76(sParam2, iParam3, 0);
}

void func_92()
{
	Global_1346465.f_55 = Global_1346465.f_40.f_1;
	Global_1346465.f_55.f_1 = Global_1346465.f_40.f_10;
}

void func_93()
{
	Global_1346465.f_40 = 1;
}

bool func_94()
{
	return Global_1346465.f_40 == 1;
}

int func_95(int iParam0, int iParam1, int iParam2)
{
	if (!func_96(iParam0))
	{
		return 0;
	}
	if (Global_1346465.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1346465.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_96(int iParam0)
{
	if (!func_97())
	{
		return 0;
	}
	if (!Global_1346465.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_97()
{
	if (Global_1346465.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_98(int iParam0)
{
	if (func_102())
	{
		return 0;
	}
	if (func_101())
	{
		return 0;
	}
	if (func_129(0))
	{
		return 0;
	}
	if (Global_1312462.f_18 != 0)
	{
		return 0;
	}
	if (Global_1747153 || func_100())
	{
		return 0;
	}
	if (!unk_0xF44A5E894FE76438(iParam0, 6))
	{
		if (func_99())
		{
			return 0;
		}
	}
	return 1;
}

bool func_99()
{
	return unk_0x8D6C526020C84E23(unk_0x7414B386C0020BEC(), Global_1362144);
}

int func_100()
{
	if (Global_2583825.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_101()
{
	return Global_1346465.f_40 == 3;
}

bool func_102()
{
	return func_79();
}

int func_103(int iParam0, int iParam1, int iParam2)
{
	if (!func_101())
	{
		return 0;
	}
	return func_95(iParam0, iParam1, iParam2);
}

int func_104(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x6D9FF4C899CD785F(&cVar0);
}

bool func_105()
{
	return Global_2499487.f_1;
}

int func_106()
{
	if (Global_1346653.f_2)
	{
		return 1;
	}
	return func_107();
}

bool func_107()
{
	return func_102();
}

void func_108(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69697)
	{
		if (!unk_0x00B5B0B68211D89B(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xF2B008953E08940C(iParam2, 0);
			}
			else
			{
				unk_0xF2B008953E08940C(iParam2, 1);
			}
		}
		if (!unk_0x00B5B0B68211D89B(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x59E3D56D355C62DB(iParam2, 0);
			}
			else
			{
				unk_0x59E3D56D355C62DB(iParam2, 1);
			}
		}
	}
}

int func_109(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_110(uParam0, bParam2, 0);
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

void func_110(var uParam0, bool bParam1, bool bParam2)
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

void func_111(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<4> Var0;
	struct<4> Var4;
	int iVar8;
	int iVar9;
	
	StringCopy(&Var0, func_123(iParam1), 16);
	StringCopy(&Var4, func_122(iParam2), 16);
	switch (iParam1)
	{
		case 0:
			iVar8 = 1287308202;
			break;
		
		case 1:
			iVar8 = 691372038;
			break;
		
		case 2:
			iVar8 = 1480707108;
			break;
		
		case 3:
			iVar8 = 1512499951;
			break;
		
		case 4:
			iVar8 = 562283735;
			break;
		
		case 5:
			iVar8 = -154732333;
			break;
		
		case 6:
			iVar8 = -1362660491;
			break;
		
		case 7:
			iVar8 = 645708827;
			break;
		
		case 8:
			iVar8 = 767907967;
			break;
		
		case 9:
			iVar8 = -1970151306;
			break;
		
		case 10:
			iVar8 = 718859568;
			break;
		
		case 11:
			iVar8 = -1955564771;
			break;
		
		case 12:
			iVar8 = 892388724;
			break;
		
		case 13:
			iVar8 = -1426920838;
			break;
	}
	if (func_121())
	{
		func_112(iVar8, iParam0, &iVar9, bParam3, bParam3, 0);
		Global_2590199[iVar9 /*76*/].f_8.f_43 = { Var0 };
		Global_2590199[iVar9 /*76*/].f_8.f_47 = { Var4 };
	}
	else
	{
		unk_0x0D3EB854436C5E3F(iParam0, &Var0, &Var4, bParam3);
	}
}

void func_112(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_121())
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
				func_113(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_113(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_113(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_121())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x92433FA8528BEA6E(func_9()) || unk_0x65C1BCEE262A67BB())
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
			*uParam0 = func_120(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
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
			func_119(1, iParam4);
			Global_2590708 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_114(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_114(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xB8A73E7DA87B2968(&(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_125.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_115(iParam0);
	}
}

void func_115(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_121())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_118(iParam0))
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
		func_116(&(Global_2590199[iParam0 /*76*/]));
	}
}

void func_116(var uParam0)
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
	func_117(&(uParam0->f_8.f_3));
	func_117(&(uParam0->f_8.f_16));
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

void func_117(var uParam0)
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

int func_118(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2590199[iParam0 /*76*/].f_5 == 1;
	}
	return 0;
}

void func_119(int iParam0, var uParam1)
{
	Global_2454792 = uParam1;
	Global_2454791 = iParam0;
}

int func_120(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2590199[iVar0 /*76*/].f_2 == 0)
		{
			if (!func_121())
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

int func_121()
{
	if (unk_0x2D337DD29A7ABD30())
	{
		return 1;
	}
	return 0;
}

char* func_122(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NOTREACHTARGET";
			break;
		
		case 1:
			return "TARGET_ESCAPE";
			break;
		
		case 2:
			return "DELIVERY_FAIL";
			break;
		
		case 3:
			return "NOT_USED";
			break;
		
		case 4:
			return "TEAM_QUIT";
			break;
		
		case 5:
			return "SERVER_ERROR";
			break;
		
		case 6:
			return "RECEIVE_LJ_L";
			break;
		
		case 8:
			return "CHALLENGE_PLAYER_LEFT";
			break;
	}
	return "DEFAULT";
}

char* func_123(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BACKUP_VAGOS";
		
		case 1:
			return "BACKUP_LOST";
		
		case 2:
			return "BACKUP_FAMILIES";
		
		case 3:
			return "HIRE_MUGGER";
		
		case 4:
			return "HIRE_MERCENARY";
		
		case 5:
			return "BUY_CARDROPOFF";
		
		case 6:
			return "HELI_PICKUP";
		
		case 7:
			return "BOAT_PICKUP";
		
		case 8:
			return "CLEAR_WANTED";
		
		case 9:
			return "HEAD_2_HEAD";
		
		case 10:
			return "CHALLENGE";
		
		case 11:
			return "SHARE_LAST_JOB";
		
		case 13:
			return "REFUNDAPPEA";
		
		default:
	}
	return "DEFAULT";
}

int func_124(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_126(iParam0) >= 0)
	{
		iVar0 = func_126(iParam0);
	}
	else
	{
		iVar0 = func_125(iParam0);
	}
	return iVar0;
}

int func_125(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1000;
			break;
		
		case 10:
			return 5000;
			break;
		
		case 11:
			return 8000;
			break;
		
		case 8:
			return 1000;
			break;
		
		case 0:
			return 500;
			break;
		
		case 9:
			return 250;
			break;
		
		case 13:
			return 1000;
			break;
		
		case 12:
			return 7500;
			break;
		
		case 2:
			return 1000;
			break;
		
		case 14:
			return 500;
			break;
		
		case 20:
			if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) == 1)
			{
				return 200;
			}
			else if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) == 2)
			{
				return 400;
			}
			else if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) == 3)
			{
				return 600;
			}
			else if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) == 4)
			{
				return 800;
			}
			else if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) == 5)
			{
				return 1000;
			}
			break;
		
		case 6:
			return 500;
			break;
		
		case 22:
			return 200;
			break;
		
		case 23:
			return 400;
			break;
		
		case 24:
			return 700;
			break;
		
		case 25:
			return 100;
			break;
		
		case 26:
			return 1000;
			break;
		
		case 35:
			return 5000;
			break;
		
		case 15:
			return 0;
			break;
		
		case 17:
			return 0;
			break;
		
		case 18:
			return 0;
			break;
		
		case 19:
			return 0;
			break;
		
		case 21:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 39:
			return 200;
			break;
		
		case 40:
			return 1000;
		
		case 41:
			return 750;
		
		case 42:
			return 0;
	}
	return 0;
}

int func_126(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_5477;
			break;
		
		case 10:
			return Global_262145.f_4115;
			break;
		
		case 11:
			return Global_262145.f_4116;
			break;
		
		case 8:
			return Global_262145.f_4113;
			break;
		
		case 0:
			return Global_262145.f_4099;
			break;
		
		case 9:
			return Global_262145.f_4114;
			break;
		
		case 13:
			return Global_262145.f_4118;
			break;
		
		case 12:
			return Global_262145.f_4117;
			break;
		
		case 2:
			return Global_262145.f_4109;
			break;
		
		case 14:
			return Global_262145.f_4119;
			break;
		
		case 20:
			if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) == 1)
			{
				return Global_262145.f_5484;
			}
			else if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) == 2)
			{
				return Global_262145.f_5485;
			}
			else if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) == 3)
			{
				return Global_262145.f_5486;
			}
			else if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) == 4)
			{
				return Global_262145.f_5487;
			}
			else if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) == 5)
			{
				return Global_262145.f_5488;
			}
			break;
		
		case 6:
			return Global_262145.f_4112;
			break;
		
		case 22:
			return Global_262145.f_4125;
			break;
		
		case 23:
			return Global_262145.f_4126;
			break;
		
		case 24:
			return Global_262145.f_4127;
			break;
		
		case 25:
			return Global_262145.f_4128;
			break;
		
		case 26:
			return Global_262145.f_4129;
			break;
		
		case 35:
			return Global_262145.f_6053;
			break;
		
		case 15:
			return Global_262145.f_5478;
			break;
		
		case 17:
			return Global_262145.f_5478;
			break;
		
		case 18:
			return Global_262145.f_5478;
			break;
		
		case 19:
			return Global_262145.f_5478;
			break;
		
		case 21:
			return Global_262145.f_5478;
			break;
		
		case 36:
			return Global_262145.f_6518;
			break;
		
		case 39:
			return -1;
			break;
		
		case 40:
			return Global_262145.f_11371;
			break;
		
		case 41:
			return Global_262145.f_11372;
			break;
		
		case 42:
			return Global_262145.f_11373;
			break;
		
		case 43:
			return Global_262145.f_13428;
			break;
		
		case 44:
			return Global_262145.f_13430;
			break;
	}
	return 0;
}

void func_127(int iParam0)
{
	func_128(&(Global_2443860.f_4192.f_140[iParam0 /*2*/]));
}

void func_128(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_129(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xF44A5E894FE76438(Global_2313, 14))
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
	if (unk_0xAB964FCFAC3C767A(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_130(int iParam0, bool bParam1, bool bParam2)
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

void func_131()
{
	int iVar0;
	int iVar1;
	
	if (((unk_0x7887B64A08364778(iLocal_1176) && !func_137(iLocal_1176)) && !func_136(Local_135.f_4)) && unk_0x04D83291EB9DE51D(unk_0x9E9133ACB2BCC1D5(Local_135.f_4), iLocal_1176, 0))
	{
		if (!func_134(iLocal_1176, 1, 1, 0, 0, 0, 1, 0))
		{
			iVar0 = 0;
			while (iVar0 < 32)
			{
				iVar1 = unk_0x7A4693BB354F3CD3(iVar0);
				if (func_130(iVar1, 0, 1))
				{
					if (unk_0x04D83291EB9DE51D(unk_0x4572B13EE70C8F52(iVar1), iLocal_1176, 0))
					{
						func_132(func_133(iVar1), 0, 0f, 0, 0, 0);
					}
				}
				iVar0++;
			}
		}
		else if (!iLocal_1162)
		{
			if (!unk_0x4A478FA962FF575A(iLocal_1176))
			{
				unk_0xF78A199036560454(iLocal_1176);
			}
			else
			{
				unk_0xAFC3B32426D08964(iLocal_1176, 2);
				iLocal_1162 = 1;
			}
		}
	}
}

void func_132(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	struct<7> Var0;
	
	Var0.f_0 = 59;
	Var0.f_1 = unk_0xFB6B3EEFAB2DD12C();
	Var0.f_4 = iParam1;
	Var0.f_5 = iParam4;
	Var0.f_2 = fParam2;
	Var0.f_3 = iParam3;
	Var0.f_6 = iParam5;
	if (!iParam0 == 0)
	{
		unk_0xA56AA396FE05B9EC(1, &Var0, 7, iParam0);
	}
}

int func_133(int iParam0)
{
	var uVar0;
	
	unk_0xB8A73E7DA87B2968(&uVar0, iParam0);
	return uVar0;
}

int func_134(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0x7D44D16B4A9E941E(iParam0) + 1;
	if (iParam4 || !unk_0xB529B2A4B7C64D6D(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_135(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0x7887B64A08364778(iVar2))
			{
				if (iParam3 && iVar2 == unk_0xD5A676B97920D126())
				{
				}
				else if (bParam2)
				{
					if (!unk_0x00B5B0B68211D89B(iVar2))
					{
						if (unk_0xBEC34BF6B72C417A(iVar2))
						{
							if (unk_0xAA5B10AEB58EAA13(unk_0x61263E0F7C8C9996(iVar2)) == 0)
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
				else if (!unk_0x00B5B0B68211D89B(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_135(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (!unk_0x06F2E112EBC0C4FB(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0x98BE504E8B389665(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0x7887B64A08364778(iVar0) && !unk_0xB529B2A4B7C64D6D(iParam0, 0))
		{
			iVar0 = unk_0x517A852AA8FDFD63(iParam0, iParam1);
			if (!unk_0xB529B2A4B7C64D6D(iVar0, 0))
			{
				if (unk_0x1774A68441553185(iVar0, 451360105) == 1 || unk_0x1774A68441553185(iVar0, -828834893) == 1)
				{
					if (unk_0x2A488C176D52CCA5(unk_0xC086F8D75730FA3A(iParam0, 0), unk_0xC086F8D75730FA3A(iVar0, 0)) < 10f)
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

int func_136(var uParam0)
{
	if (unk_0xF6A32456BABBBA74(uParam0))
	{
		return unk_0x00B5B0B68211D89B(unk_0x9E9133ACB2BCC1D5(uParam0));
	}
	return 1;
}

int func_137(int iParam0)
{
	if (unk_0x7887B64A08364778(iParam0))
	{
		if (unk_0xB529B2A4B7C64D6D(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xA4DB44DF73EF4FE5(iParam0, 0))
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

int func_138()
{
	if (func_139())
	{
		return 1;
	}
	return 0;
}

int func_139()
{
	var uVar0;
	var uVar1;
	
	if ((Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/] == 2 || Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/] == 1) || Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/] == 3)
	{
		return 1;
	}
	if (!func_130(unk_0xFB6B3EEFAB2DD12C(), 1, 1) && !func_259())
	{
		return 1;
	}
	if (func_145())
	{
		if (Local_135.f_23 >= 0 || Local_135.f_23 <= 3)
		{
			if (!func_259())
			{
				func_111(func_124(13), 6, 3, 1);
			}
			else
			{
				func_111(func_124(44), 6, 3, 1);
			}
		}
		return 1;
	}
	if ((Local_135.f_23 >= 0 || Local_135.f_23 <= 3) && Local_135.f_23 != 4)
	{
		if (func_137(iLocal_1176))
		{
			if (unk_0xF6A32456BABBBA74(Local_135.f_3))
			{
				if (unk_0xF15EBC61ACCF20ED(Local_135.f_3, &uVar0) == unk_0xFB6B3EEFAB2DD12C())
				{
					if (func_144())
					{
						func_143(1, 600000);
					}
					else
					{
						Global_2494149.f_5299 = unk_0x7414B386C0020BEC();
					}
				}
			}
			return 1;
		}
		else
		{
			if (func_136(Local_135.f_4))
			{
				if (unk_0xF6A32456BABBBA74(Local_135.f_4))
				{
					if (unk_0xF15EBC61ACCF20ED(Local_135.f_4, &uVar1) == unk_0xFB6B3EEFAB2DD12C())
					{
						if (func_144())
						{
							func_143(1, 600000);
						}
						else
						{
							Global_2494149.f_5299 = unk_0x7414B386C0020BEC();
						}
					}
				}
				return 1;
			}
			else if (!unk_0x04D83291EB9DE51D(unk_0x9E9133ACB2BCC1D5(Local_135.f_4), iLocal_1176, 0))
			{
				return 1;
			}
			else if (Local_168[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 >= 1)
			{
				if (!unk_0x1AAFFE4111587B35(unk_0xD5A676B97920D126(), unk_0xC086F8D75730FA3A(iLocal_1176, 1), func_142(), func_142(), func_142(), 0, 1, 0))
				{
					return 1;
				}
			}
			if (func_141(unk_0xFB6B3EEFAB2DD12C(), 0))
			{
				return 1;
			}
			if (func_141(unk_0xFB6B3EEFAB2DD12C(), 7))
			{
				return 1;
			}
			if (Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/] == 13)
			{
				return 1;
			}
			if (Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/] == 14)
			{
				return 1;
			}
			if (Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/] == 15)
			{
				return 1;
			}
			if (Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/] == 12)
			{
				return 1;
			}
			if (Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/] == 11)
			{
				return 1;
			}
			if (unk_0xF5C5C10402E12CCB() != iLocal_961)
			{
				return 1;
			}
		}
	}
	if (Local_135.f_23 == 4)
	{
		if (unk_0x7887B64A08364778(iLocal_1176))
		{
			if (unk_0x2FAE1B1A2FF430A6(iLocal_1176) <= 0 || !func_140(unk_0x4572B13EE70C8F52(Local_135.f_5), iLocal_1176, 0))
			{
				unk_0xAFC3B32426D08964(iLocal_1176, 1);
				return 1;
			}
		}
		if (unk_0x7887B64A08364778(iLocal_1176))
		{
			if (func_137(iLocal_1176))
			{
				unk_0xAFC3B32426D08964(iLocal_1176, 1);
				return 1;
			}
		}
		if (unk_0x7887B64A08364778(iLocal_1176))
		{
			if (func_136(Local_135.f_4) && !Global_2452510.f_26)
			{
				unk_0xAFC3B32426D08964(iLocal_1176, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_140(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x7887B64A08364778(iParam0) && !unk_0xB529B2A4B7C64D6D(iParam0, 0))
	{
		if (unk_0x7887B64A08364778(iParam1) && !unk_0xB529B2A4B7C64D6D(iParam1, 0))
		{
			if (unk_0x04D83291EB9DE51D(iParam0, iParam1, iParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_141(int iParam0, int iParam1)
{
	return unk_0xF44A5E894FE76438(Global_2421621[iParam0 /*358*/].f_211, iParam1);
}

float func_142()
{
	float fVar0;
	
	fVar0 = 200f;
	if (func_259())
	{
		fVar0 = (200f + 600f);
	}
	return fVar0;
}

void func_143(int iParam0, int iParam1)
{
	if (Global_2433082.f_3349[iParam0] < iParam1)
	{
		Global_2433082.f_3349[iParam0] = iParam1;
	}
	unk_0xB8A73E7DA87B2968(&(Global_2433082.f_3348), iParam0);
}

int func_144()
{
	if (func_259())
	{
		return 0;
	}
	return 1;
}

bool func_145()
{
	return Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_187 != 0;
}

void func_146()
{
	int iVar0;
	var uVar1;
	
	if (!unk_0x04DE35D10A718EEF())
	{
		return;
	}
	if (Local_135.f_24 != 8 && Local_135.f_24 != 5)
	{
		if (func_136(Local_135.f_4) || func_137(iLocal_1176))
		{
			Local_135.f_24 = 8;
		}
		else if (!unk_0x04D83291EB9DE51D(unk_0x9E9133ACB2BCC1D5(Local_135.f_4), iLocal_1176, 0))
		{
			Local_135.f_24 = 8;
		}
	}
	if (Local_135.f_24 != 4)
	{
		if (unk_0xF44A5E894FE76438(Local_135.f_1, 14))
		{
			unk_0x4EA098C870B73AB7(&(Local_135.f_1), 14);
		}
		if (func_201(&uLocal_1141))
		{
			func_128(&uLocal_1141);
		}
		if (func_201(&uLocal_1143))
		{
			func_128(&uLocal_1143);
		}
	}
	if (Local_135.f_24 != 7)
	{
		if (func_201(&uLocal_1145))
		{
			func_128(&uLocal_1145);
		}
	}
	if (!func_136(Local_135.f_4) && !func_137(iLocal_1176))
	{
		if (Local_135.f_24 != 8)
		{
			if ((Local_135.f_23 == 0 || Local_135.f_23 == 1) || Local_135.f_23 == 2)
			{
				if (unk_0x1F72B125B26A6238(iLocal_1176) || unk_0x1F72B125B26A6238(unk_0x9E9133ACB2BCC1D5(Local_135.f_4)))
				{
					if ((unk_0xB38A470B669AC00B(iLocal_1176) <= 500 || unk_0xB38A470B669AC00B(unk_0x9E9133ACB2BCC1D5(Local_135.f_4)) <= 150) || unk_0x713BB3880CDCDF9D(iLocal_1176, 1, 1, 1))
					{
						Local_135.f_24 = 8;
					}
				}
			}
		}
		switch (Local_135.f_24)
		{
			case 1:
				if (Local_135.f_23 == 3)
				{
					if (!unk_0xF44A5E894FE76438(Local_135.f_2, 2))
					{
						if (func_197())
						{
							if (func_144())
							{
								func_108(&uLocal_967, 3, unk_0x9E9133ACB2BCC1D5(Local_135.f_4), "FM_Pilot", 0, 1);
								func_196(&uLocal_967, "CT_AUD", "MPCT_HPgo", 12, 0, 0, 1);
							}
							else
							{
								func_11(1);
								func_108(&uLocal_967, 2, unk_0x9E9133ACB2BCC1D5(Local_135.f_4), "EXEC_PILOT", 0, 1);
								func_91(&uLocal_967, "EXHELAU", "EXHEL_CUSTOM", 12, 0, 0, 1);
							}
							unk_0xB8A73E7DA87B2968(&(Local_135.f_2), 2);
						}
					}
					func_194();
					Local_135.f_24 = 2;
				}
				else if (Local_135.f_23 == 6)
				{
					Local_135.f_24 = 8;
				}
				else if (func_193() == 0 && !func_192())
				{
					func_194();
					Local_135.f_24 = 4;
				}
				else if (unk_0x2FAE1B1A2FF430A6(iLocal_1176) > 0)
				{
					func_194();
					Local_135.f_24 = 4;
				}
				else if (unk_0xF44A5E894FE76438(Local_135.f_1, 9))
				{
					func_194();
					Local_135.f_24 = 2;
				}
				else if (unk_0xF44A5E894FE76438(iLocal_265, 4) && func_193())
				{
					if (unk_0x108650178993C477(unk_0xD5A676B97920D126(), iLocal_1176, (func_142() / 2f), (func_142() / 2f), func_142(), 0, 1, 0))
					{
						if (func_191(iLocal_1176))
						{
							if (unk_0xC45451970BBD7C54(iLocal_1176))
							{
								if (func_109(&uLocal_1136, func_190(), 0))
								{
									iLocal_963 = 0;
									iLocal_964 = 0;
									iLocal_965 = 0;
									unk_0x4EA098C870B73AB7(&iLocal_265, 4);
									if (!unk_0xF44A5E894FE76438(iLocal_265, 18))
									{
										uLocal_1140 = unk_0x7414B386C0020BEC();
									}
									unk_0xB8A73E7DA87B2968(&iLocal_265, 18);
								}
							}
							else if (func_201(&uLocal_1136))
							{
								func_128(&uLocal_1136);
							}
						}
					}
				}
				else if (!unk_0xF44A5E894FE76438(iLocal_265, 4))
				{
					if (func_161(&uVar1))
					{
						func_158(Local_135.f_6);
						func_157();
					}
				}
				if (unk_0xF44A5E894FE76438(iLocal_265, 18) && Local_135.f_24 == 1)
				{
					iVar0 = unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), uLocal_1140));
					if (iVar0 > 60000)
					{
						Local_135.f_0 = 4;
					}
				}
				if (!unk_0xF44A5E894FE76438(Local_135.f_2, 0))
				{
					if (func_197())
					{
						if (unk_0x1AAFFE4111587B35(iLocal_1176, Local_135.f_6, 20f, 20f, 20f, 0, 1, 0))
						{
							if (func_144())
							{
								func_108(&uLocal_967, 3, unk_0x9E9133ACB2BCC1D5(Local_135.f_4), "FM_Pilot", 0, 1);
								func_196(&uLocal_967, "CT_AUD", "MPCT_HParr", 12, 0, 0, 1);
							}
							else
							{
								func_11(1);
								func_108(&uLocal_967, 2, unk_0x9E9133ACB2BCC1D5(Local_135.f_4), "EXEC_PILOT", 0, 1);
								func_91(&uLocal_967, "EXHELAU", "EXHEL_APPR", 12, 0, 0, 1);
							}
							unk_0xB8A73E7DA87B2968(&(Local_135.f_2), 0);
						}
					}
				}
				break;
			
			case 2:
				if (unk_0x2FAE1B1A2FF430A6(iLocal_1176) <= 0)
				{
					Local_135.f_24 = 4;
				}
				else if (unk_0x1AAFFE4111587B35(unk_0x9E9133ACB2BCC1D5(Local_135.f_4), Local_135.f_10, 7.5f, 7.5f, 9999.9f, 0, 1, 0))
				{
					unk_0x439103CA23139196();
					Local_135.f_24 = 3;
					bLocal_167 = true;
					func_128(&uLocal_1152);
					func_128(&uLocal_1150);
					unk_0x4EA098C870B73AB7(&(Local_135.f_1), 14);
				}
				else if (!unk_0xF9886D14CA8B2197() || func_156(0))
				{
					if (!unk_0xF44A5E894FE76438(Local_135.f_2, 4) && func_197())
					{
						if (func_144())
						{
							func_108(&uLocal_967, 3, unk_0x9E9133ACB2BCC1D5(Local_135.f_4), "FM_Pilot", 0, 1);
							func_196(&uLocal_967, "CT_AUD", "MPCT_HPcha", 12, 0, 0, 1);
						}
						else
						{
							func_11(1);
							func_108(&uLocal_967, 2, unk_0x9E9133ACB2BCC1D5(Local_135.f_4), "EXEC_PILOT", 0, 1);
							func_91(&uLocal_967, "EXHELAU", "EXHEL_CHANGE", 12, 0, 0, 1);
						}
						unk_0xB8A73E7DA87B2968(&(Local_135.f_2), 4);
					}
					unk_0x4EA098C870B73AB7(&(Local_135.f_1), 9);
					unk_0xB8A73E7DA87B2968(&(Local_135.f_1), 12);
					Local_135.f_24 = 4;
				}
				if (!unk_0xF44A5E894FE76438(Local_135.f_2, 6) && func_197())
				{
					if (unk_0x1AAFFE4111587B35(unk_0x9E9133ACB2BCC1D5(Local_135.f_4), Local_135.f_10, (7.5f + 75f), (7.5f + 75f), ((10f * 2f) + 75f), 0, 1, 0))
					{
						if (func_144())
						{
							func_108(&uLocal_967, 3, unk_0x9E9133ACB2BCC1D5(Local_135.f_4), "FM_Pilot", 0, 1);
							func_196(&uLocal_967, "CT_AUD", "MPCT_HPnear", 12, 0, 0, 1);
						}
						unk_0xB8A73E7DA87B2968(&(Local_135.f_2), 6);
					}
				}
				func_152();
				if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) <= 0)
				{
					if (func_109(&uLocal_1147, iLocal_1149, 0))
					{
						if (func_197())
						{
							if (func_144())
							{
								func_108(&uLocal_967, 3, unk_0x9E9133ACB2BCC1D5(Local_135.f_4), "FM_Pilot", 0, 1);
								func_196(&uLocal_967, "CT_AUD", "MPCT_HPfly", 12, 0, 0, 1);
							}
							else
							{
								func_11(1);
								func_108(&uLocal_967, 2, unk_0x9E9133ACB2BCC1D5(Local_135.f_4), "EXEC_PILOT", 0, 1);
								func_91(&uLocal_967, "EXHELAU", "EXHEL_CHAT", 12, 0, 0, 1);
							}
							iLocal_1149 = unk_0x7BC26452241AC7C9(15000, 30000);
							func_128(&uLocal_1147);
						}
					}
				}
				break;
			
			case 5:
				if (unk_0x2FAE1B1A2FF430A6(iLocal_1176) <= 0 || !func_140(unk_0x4572B13EE70C8F52(Local_135.f_5), iLocal_1176, 0))
				{
					Local_135.f_24 = 8;
					break;
				}
				if (!unk_0xF44A5E894FE76438(Local_135.f_1, 15))
				{
					unk_0xB8A73E7DA87B2968(&(Local_135.f_1), 15);
				}
				break;
			
			case 3:
				if (iLocal_962 != 3)
				{
					iLocal_962 = 3;
				}
				if (unk_0x2FAE1B1A2FF430A6(iLocal_1176) <= 0 && !unk_0x6C6EB009F103061C(iLocal_1176))
				{
					if (!unk_0xF44A5E894FE76438(Local_135.f_2, 9))
					{
						if (func_197())
						{
							if (unk_0x6C6EB009F103061C(iLocal_1176))
							{
								if (func_144())
								{
									func_108(&uLocal_967, 3, unk_0x9E9133ACB2BCC1D5(Local_135.f_4), "FM_Pilot", 0, 1);
									func_196(&uLocal_967, "CT_AUD", "MPCT_HPleav", 12, 0, 0, 1);
								}
								else
								{
									func_11(1);
									func_108(&uLocal_967, 2, unk_0x9E9133ACB2BCC1D5(Local_135.f_4), "EXEC_PILOT", 0, 1);
									func_91(&uLocal_967, "EXHELAU", "EXHEL_GENBYE", 12, 0, 0, 1);
								}
								unk_0xB8A73E7DA87B2968(&(Local_135.f_2), 9);
							}
						}
					}
					Local_135.f_24 = 8;
				}
				else if (!unk_0xF9886D14CA8B2197() || func_156(0))
				{
					unk_0x4EA098C870B73AB7(&(Local_135.f_1), 9);
					unk_0xB8A73E7DA87B2968(&(Local_135.f_1), 12);
					Local_135.f_24 = 4;
				}
				if (!unk_0xF44A5E894FE76438(Local_135.f_2, 8))
				{
					if (unk_0x6C6EB009F103061C(iLocal_1176))
					{
						if (func_197())
						{
							if (func_144())
							{
								func_108(&uLocal_967, 3, unk_0x9E9133ACB2BCC1D5(Local_135.f_4), "FM_Pilot", 0, 1);
								func_196(&uLocal_967, "CT_AUD", "MPCT_HPrap", 12, 0, 0, 1);
							}
							else
							{
								func_11(1);
								func_108(&uLocal_967, 2, unk_0x9E9133ACB2BCC1D5(Local_135.f_4), "EXEC_PILOT", 0, 1);
								func_91(&uLocal_967, "EXHELAU", "EXHEL_FLIES", 12, 0, 0, 1);
							}
							unk_0xB8A73E7DA87B2968(&(Local_135.f_2), 8);
						}
					}
				}
				break;
			
			case 4:
				if (bLocal_167)
				{
					if (func_197())
					{
						if (!unk_0xF44A5E894FE76438(Local_135.f_2, 5))
						{
							if (func_144())
							{
								func_108(&uLocal_967, 3, unk_0x9E9133ACB2BCC1D5(Local_135.f_4), "FM_Pilot", 0, 1);
								func_196(&uLocal_967, "CT_AUD", "MPCT_HPdrop", 12, 0, 0, 1);
							}
							else
							{
								func_11(1);
								func_108(&uLocal_967, 2, unk_0x9E9133ACB2BCC1D5(Local_135.f_4), "EXEC_PILOT", 0, 1);
								func_91(&uLocal_967, "EXHELAU", "EXHEL_ARRIVE", 12, 0, 0, 1);
							}
							unk_0xB8A73E7DA87B2968(&(Local_135.f_2), 5);
						}
						else if (!func_144())
						{
							if (!unk_0xF44A5E894FE76438(Local_135.f_2, 21))
							{
								if (unk_0x8E18E47D6CD6AB43(iLocal_1176) > 10f)
								{
									func_11(1);
									func_108(&uLocal_967, 2, unk_0x9E9133ACB2BCC1D5(Local_135.f_4), "EXEC_PILOT", 0, 1);
									func_91(&uLocal_967, "EXHELAU", "EXHEL_CANJUM", 12, 0, 0, 1);
								}
								unk_0xB8A73E7DA87B2968(&(Local_135.f_2), 21);
							}
						}
					}
				}
				if (unk_0xF44A5E894FE76438(Local_135.f_1, 12))
				{
					if (!unk_0x6C6EB009F103061C(iLocal_1176))
					{
						if (unk_0xF9886D14CA8B2197())
						{
							if (!unk_0xF44A5E894FE76438(Local_135.f_2, 2))
							{
								if (func_197())
								{
									if (func_144())
									{
										func_108(&uLocal_967, 3, unk_0x9E9133ACB2BCC1D5(Local_135.f_4), "FM_Pilot", 0, 1);
										func_196(&uLocal_967, "CT_AUD", "MPCT_HPgo", 12, 0, 0, 1);
									}
									else
									{
										func_11(1);
										func_108(&uLocal_967, 2, unk_0x9E9133ACB2BCC1D5(Local_135.f_4), "EXEC_PILOT", 0, 1);
										func_91(&uLocal_967, "EXHELAU", "EXHEL_GENPOS", 12, 0, 0, 1);
									}
									unk_0xB8A73E7DA87B2968(&(Local_135.f_2), 2);
								}
							}
							func_194();
							if (!func_151(Local_135.f_10, Local_135.f_13, 0))
							{
								Local_135.f_13 = { Local_135.f_10 };
								Local_135.f_24 = 2;
							}
						}
						else if (unk_0x2FAE1B1A2FF430A6(iLocal_1176) <= 0)
						{
							Local_135.f_24 = 8;
						}
					}
				}
				else if (unk_0xF44A5E894FE76438(Local_135.f_1, 9))
				{
					if (!unk_0xF44A5E894FE76438(Local_135.f_2, 2))
					{
						if (func_197())
						{
							if (func_144())
							{
								func_108(&uLocal_967, 3, unk_0x9E9133ACB2BCC1D5(Local_135.f_4), "FM_Pilot", 0, 1);
								func_196(&uLocal_967, "CT_AUD", "MPCT_HPgo", 12, 0, 0, 1);
							}
							else
							{
								func_11(1);
								func_108(&uLocal_967, 2, unk_0x9E9133ACB2BCC1D5(Local_135.f_4), "EXEC_PILOT", 0, 1);
								func_91(&uLocal_967, "EXHELAU", "EXHEL_CUSTOM", 12, 0, 0, 1);
							}
							unk_0xB8A73E7DA87B2968(&(Local_135.f_2), 2);
						}
					}
					func_194();
					if (!func_151(Local_135.f_10, Local_135.f_13, 0))
					{
						Local_135.f_13 = { Local_135.f_10 };
						unk_0xB8A73E7DA87B2968(&(Local_135.f_1), 13);
						Local_135.f_24 = 2;
					}
				}
				else if (unk_0xF44A5E894FE76438(Local_135.f_1, 13))
				{
					if (unk_0x2FAE1B1A2FF430A6(iLocal_1176) <= 0)
					{
						Local_135.f_24 = 8;
					}
				}
				func_152();
				if (func_197())
				{
					if (!unk_0xF44A5E894FE76438(Local_135.f_2, 1))
					{
						if (unk_0x2FAE1B1A2FF430A6(iLocal_1176) > 0)
						{
							if (func_201(&uLocal_1143))
							{
								func_128(&uLocal_1143);
							}
							if (func_144())
							{
								func_108(&uLocal_967, 3, unk_0x9E9133ACB2BCC1D5(Local_135.f_4), "FM_Pilot", 0, 1);
								func_196(&uLocal_967, "CT_AUD", "MPCT_HPnoW", 12, 0, 0, 1);
							}
							else
							{
								func_11(1);
								func_108(&uLocal_967, 2, unk_0x9E9133ACB2BCC1D5(Local_135.f_4), "EXEC_PILOT", 0, 1);
								func_91(&uLocal_967, "EXHELAU", "EXHEL_WHERE", 12, 0, 0, 1);
							}
							unk_0xB8A73E7DA87B2968(&(Local_135.f_2), 1);
						}
					}
					else if (!unk_0xF44A5E894FE76438(Local_135.f_2, 2))
					{
						if (!unk_0xF44A5E894FE76438(Local_135.f_2, 3) && !unk_0xF44A5E894FE76438(Local_135.f_1, 12))
						{
							if (unk_0x2FAE1B1A2FF430A6(iLocal_1176) <= 0)
							{
								if (func_144())
								{
									func_108(&uLocal_967, 3, unk_0x9E9133ACB2BCC1D5(Local_135.f_4), "FM_Pilot", 0, 1);
									func_196(&uLocal_967, "CT_AUD", "MPCT_HPex", 12, 0, 0, 1);
								}
								unk_0xB8A73E7DA87B2968(&(Local_135.f_2), 3);
							}
						}
					}
					else if (!unk_0xF44A5E894FE76438(Local_135.f_2, 16))
					{
						if (unk_0x2FAE1B1A2FF430A6(iLocal_1176) <= 0)
						{
							if (func_144())
							{
								func_108(&uLocal_967, 3, unk_0x9E9133ACB2BCC1D5(Local_135.f_4), "FM_Pilot", 0, 1);
								func_196(&uLocal_967, "CT_AUD", "MPCT_HPbail", 12, 0, 0, 1);
							}
							else
							{
								func_11(1);
								func_108(&uLocal_967, 2, unk_0x9E9133ACB2BCC1D5(Local_135.f_4), "EXEC_PILOT", 0, 1);
								func_91(&uLocal_967, "EXHELAU", "EXHEL_GENBYE", 12, 0, 0, 1);
							}
							unk_0xB8A73E7DA87B2968(&(Local_135.f_2), 16);
						}
					}
				}
				if (Local_135.f_24 == 4)
				{
					if (!unk_0xF44A5E894FE76438(Local_135.f_1, 14))
					{
						if (!bLocal_167)
						{
							if (func_109(&uLocal_1141, 120000, 0))
							{
								unk_0xB8A73E7DA87B2968(&(Local_135.f_1), 14);
							}
						}
						else if (func_109(&uLocal_1150, 20000, 0))
						{
							unk_0xB8A73E7DA87B2968(&(Local_135.f_1), 14);
						}
					}
					else if (!bLocal_167)
					{
						if (func_109(&uLocal_1143, 60000, 0))
						{
							Local_135.f_24 = 7;
						}
					}
					else if (func_109(&uLocal_1152, 30000, 0))
					{
						Local_135.f_24 = 7;
					}
				}
				break;
			
			case 7:
				if (func_109(&uLocal_1145, 4000, 0))
				{
					Local_135.f_24 = 8;
					if (func_150())
					{
						func_149();
					}
				}
				break;
			
			case 8:
				func_148(0);
				break;
		}
		func_147();
		if (!unk_0xF44A5E894FE76438(Local_135.f_2, 10))
		{
			if (func_197())
			{
				if (func_130(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
				{
					if (unk_0x7D720C677145C91C(iLocal_1176, unk_0xD5A676B97920D126(), 1))
					{
						if (func_144())
						{
							func_108(&uLocal_967, 3, unk_0x9E9133ACB2BCC1D5(Local_135.f_4), "FM_Pilot", 0, 1);
							func_196(&uLocal_967, "CT_AUD", "MPCT_HPdam", 12, 0, 0, 1);
						}
						else
						{
							func_11(1);
							func_108(&uLocal_967, 2, unk_0x9E9133ACB2BCC1D5(Local_135.f_4), "EXEC_PILOT", 0, 1);
							func_91(&uLocal_967, "EXHELAU", "EXHEL_DAMAGE", 12, 0, 0, 1);
						}
						unk_0xB8A73E7DA87B2968(&(Local_135.f_2), 10);
					}
				}
			}
		}
		if (!func_144())
		{
			if (!unk_0xF44A5E894FE76438(Local_135.f_2, 26))
			{
				if (func_197())
				{
					if (unk_0xF84188B3D9E24D81(unk_0xFB6B3EEFAB2DD12C(), unk_0x9E9133ACB2BCC1D5(Local_135.f_4)) || unk_0x982AB85BDD884D31(unk_0xFB6B3EEFAB2DD12C(), unk_0x9E9133ACB2BCC1D5(Local_135.f_4)))
					{
						func_11(1);
						func_108(&uLocal_967, 2, unk_0x9E9133ACB2BCC1D5(Local_135.f_4), "EXEC_PILOT", 0, 1);
						func_91(&uLocal_967, "EXHELAU", "EXHEL_AIM", 12, 0, 0, 1);
						unk_0xB8A73E7DA87B2968(&(Local_135.f_2), 26);
					}
				}
			}
			else if (!unk_0xF84188B3D9E24D81(unk_0xFB6B3EEFAB2DD12C(), unk_0x9E9133ACB2BCC1D5(Local_135.f_4)) && !unk_0x982AB85BDD884D31(unk_0xFB6B3EEFAB2DD12C(), unk_0x9E9133ACB2BCC1D5(Local_135.f_4)))
			{
				unk_0x4EA098C870B73AB7(&(Local_135.f_2), 26);
			}
		}
	}
}

void func_147()
{
	if (!iLocal_1163)
	{
		if (Local_135.f_24 == 2)
		{
			if (unk_0xF6A32456BABBBA74(Local_135.f_3))
			{
				if (unk_0x50CED8EEAE806923(Local_135.f_3))
				{
					unk_0x05AFD0789813B376(iLocal_1176, 1f);
					iLocal_1163 = 1;
				}
				else
				{
					unk_0x370543697500755D(Local_135.f_3);
				}
			}
		}
	}
}

void func_148(bool bParam0)
{
	bLocal_1158 = bParam0;
}

void func_149()
{
	Global_68130 = 1;
}

bool func_150()
{
	return Global_68127;
}

bool func_151(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_152()
{
	if (!func_144())
	{
		if (!unk_0xF44A5E894FE76438(Local_135.f_2, 18))
		{
			if (func_197())
			{
				if (unk_0x2FAE1B1A2FF430A6(iLocal_1176) > 0)
				{
					func_11(1);
					func_108(&uLocal_967, 2, unk_0x9E9133ACB2BCC1D5(Local_135.f_4), "EXEC_PILOT", 0, 1);
					func_91(&uLocal_967, "EXHELAU", "EXHEL_GREET", 12, 0, 0, 1);
					unk_0xB8A73E7DA87B2968(&(Local_135.f_2), 18);
				}
			}
		}
		else
		{
			if (func_197())
			{
				if (unk_0x2FAE1B1A2FF430A6(iLocal_1176) > 0)
				{
					if (unk_0x2FAE1B1A2FF430A6(iLocal_1176) < iLocal_966 && unk_0x8E18E47D6CD6AB43(iLocal_1176) > 10f)
					{
						func_11(1);
						func_108(&uLocal_967, 2, unk_0x9E9133ACB2BCC1D5(Local_135.f_4), "EXEC_PILOT", 0, 1);
						func_91(&uLocal_967, "EXHELAU", "EXHEL_JUMP", 12, 0, 0, 1);
					}
					else if (!unk_0xF44A5E894FE76438(Local_135.f_2, 22) && iLocal_1160)
					{
						func_11(1);
						func_108(&uLocal_967, 2, unk_0x9E9133ACB2BCC1D5(Local_135.f_4), "EXEC_PILOT", 0, 1);
						func_91(&uLocal_967, "EXHELAU", "EXHEL_GENGRE", 12, 0, 0, 1);
						unk_0xB8A73E7DA87B2968(&(Local_135.f_2), 22);
						unk_0x4EA098C870B73AB7(&(Local_135.f_2), 23);
					}
					if (!unk_0x2FAE1B1A2FF430A6(iLocal_1176) == iLocal_966)
					{
						iLocal_966 = unk_0x2FAE1B1A2FF430A6(iLocal_1176);
					}
				}
				else if (!unk_0xF44A5E894FE76438(Local_135.f_2, 23))
				{
					if (unk_0x8E18E47D6CD6AB43(iLocal_1176) > 10f)
					{
						func_11(1);
						func_108(&uLocal_967, 2, unk_0x9E9133ACB2BCC1D5(Local_135.f_4), "EXEC_PILOT", 0, 1);
						func_91(&uLocal_967, "EXHELAU", "EXHEL_JUMP", 12, 0, 0, 1);
						unk_0xB8A73E7DA87B2968(&(Local_135.f_2), 23);
						unk_0x4EA098C870B73AB7(&(Local_135.f_2), 22);
					}
					else
					{
						func_11(1);
						func_108(&uLocal_967, 2, unk_0x9E9133ACB2BCC1D5(Local_135.f_4), "EXEC_PILOT", 0, 1);
						func_91(&uLocal_967, "EXHELAU", "EXHEL_GENBYE", 12, 0, 0, 1);
						unk_0xB8A73E7DA87B2968(&(Local_135.f_2), 23);
						unk_0x4EA098C870B73AB7(&(Local_135.f_2), 22);
					}
				}
			}
			if (!iLocal_1160)
			{
				if (unk_0x2FAE1B1A2FF430A6(iLocal_1176) == 0)
				{
					iLocal_1160 = 1;
				}
			}
		}
		if (func_197())
		{
			if (!unk_0xF44A5E894FE76438(Local_135.f_2, 20))
			{
				if (!func_137(iLocal_1176))
				{
					if (unk_0x90ECBE0170FFB977(iLocal_1176) == 2)
					{
						func_11(1);
						func_108(&uLocal_967, 2, unk_0x9E9133ACB2BCC1D5(Local_135.f_4), "EXEC_PILOT", 0, 1);
						func_91(&uLocal_967, "EXHELAU", "EXHEL_LOCKS", 12, 0, 0, 1);
						unk_0xB8A73E7DA87B2968(&(Local_135.f_2), 20);
					}
				}
			}
			else if (!func_137(iLocal_1176))
			{
				if (unk_0x90ECBE0170FFB977(iLocal_1176) != 2)
				{
					unk_0x4EA098C870B73AB7(&(Local_135.f_2), 20);
				}
			}
		}
		if (!unk_0xF44A5E894FE76438(Local_135.f_2, 24))
		{
			if (func_197())
			{
				if (func_153(unk_0xD5A676B97920D126()) >= 5)
				{
					func_11(1);
					func_108(&uLocal_967, 2, unk_0x9E9133ACB2BCC1D5(Local_135.f_4), "EXEC_PILOT", 0, 1);
					func_91(&uLocal_967, "EXHELAU", "EXHEL_DRINKS", 12, 0, 0, 1);
					unk_0xB8A73E7DA87B2968(&(Local_135.f_2), 24);
				}
			}
		}
		if (!unk_0xF44A5E894FE76438(Local_135.f_2, 25))
		{
			if (func_197())
			{
				if (!func_137(iLocal_1176))
				{
					if (!unk_0x06F2E112EBC0C4FB(iLocal_1176, 2, 0) || !unk_0x06F2E112EBC0C4FB(iLocal_1176, 1, 0))
					{
						func_11(1);
						func_108(&uLocal_967, 2, unk_0x9E9133ACB2BCC1D5(Local_135.f_4), "EXEC_PILOT", 0, 1);
						func_91(&uLocal_967, "EXHELAU", "EXHEL_CHAMP", 12, 0, 0, 1);
						unk_0xB8A73E7DA87B2968(&(Local_135.f_2), 25);
					}
				}
			}
		}
		if (!unk_0xF44A5E894FE76438(Local_135.f_2, 19))
		{
			if (func_197())
			{
				if (unk_0x515E262CBF491958(unk_0xD5A676B97920D126()))
				{
					func_11(1);
					func_108(&uLocal_967, 2, unk_0x9E9133ACB2BCC1D5(Local_135.f_4), "EXEC_PILOT", 0, 1);
					func_91(&uLocal_967, "EXHELAU", "EXHEL_FIRE", 12, 0, 0, 1);
					unk_0xB8A73E7DA87B2968(&(Local_135.f_2), 19);
				}
			}
		}
	}
}

int func_153(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x7887B64A08364778(iParam0))
	{
		return 0;
	}
	iVar0 = func_155(iParam0);
	iVar1 = func_154(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36711[iVar1 /*5*/].f_3;
}

int func_154(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36711[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_155(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_36711[iVar0 /*5*/].f_1)
		{
			return Global_36711[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

bool func_156(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_2494149.f_268, iParam0);
}

void func_157()
{
	if (!func_136(Local_135.f_4))
	{
		unk_0x37338B7B7C4982DC(unk_0x9E9133ACB2BCC1D5(Local_135.f_4));
	}
}

void func_158(struct<3> Param0)
{
	Local_135.f_17 = { func_159(Param0) };
}

Vector3 func_159(struct<3> Param0)
{
	struct<3> Var0;
	
	switch (func_160(Param0))
	{
		case 0:
			Var0 = { -Param0.f_0, -5000f, Param0.f_2 };
			break;
		
		case 1:
			Var0 = { -5000f, -Param0.f_1, Param0.f_2 };
			break;
		
		case 2:
			Var0 = { -Param0.f_0, 8000f, Param0.f_2 };
			break;
		
		case 3:
			Var0 = { 5000f, -Param0.f_1, Param0.f_2 };
			break;
	}
	return Var0;
}

int func_160(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 >= 0f && Param0.f_0 >= 0f)
	{
		return 0;
	}
	else if (Param0.f_1 < 0f && Param0.f_0 >= 0f)
	{
		return 1;
	}
	else if (Param0.f_1 < 0f && Param0.f_0 < 0f)
	{
		return 2;
	}
	else if (Param0.f_1 >= 0f && Param0.f_0 < 0f)
	{
		return 3;
	}
	return -1;
}

bool func_161(var uParam0)
{
	var uVar0;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<3> Var9;
	
	*uParam0 = 0;
	if (!unk_0xF44A5E894FE76438(iLocal_265, 4) && func_130(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
	{
		if (func_189(unk_0xFB6B3EEFAB2DD12C()) && !unk_0xF44A5E894FE76438(iLocal_265, 18))
		{
			Local_135.f_6 = { func_183(func_185(func_186(unk_0xFB6B3EEFAB2DD12C()))) };
			unk_0xB8A73E7DA87B2968(&iLocal_265, 4);
			*uParam0 = 1;
		}
		else if (func_168(150f, &iVar4, &iVar5) && !unk_0xF44A5E894FE76438(iLocal_265, 18))
		{
			func_167(iVar4, iVar5, &(Local_135.f_6), &(Local_135.f_9));
			*uParam0 = 1;
			unk_0xB8A73E7DA87B2968(&iLocal_265, 4);
		}
		else if ((func_259() && func_163(600f)) && !unk_0xF44A5E894FE76438(iLocal_265, 18))
		{
			Local_135.f_6 = { Local_1168[0 /*3*/] };
			Local_135.f_9 = uLocal_1172[0];
			*uParam0 = 1;
			unk_0xB8A73E7DA87B2968(&iLocal_265, 4);
		}
		else if (iLocal_963 == 0)
		{
			if (iLocal_965 == 0)
			{
				Local_135.f_6 = { unk_0x7E140C583F91AE2B(unk_0xD5A676B97920D126(), 0f, (15f / 2f), 1.3f) };
				unk_0x87AA1B4BA52B1360(Local_135.f_6, &(Local_135.f_6.f_2), 0);
				Local_135.f_6.f_2 = (Local_135.f_6.f_2 + 1.3f);
			}
			else if (iLocal_965 == 1)
			{
				Local_135.f_6 = { unk_0x7E140C583F91AE2B(unk_0xD5A676B97920D126(), (15f / 2f), 0f, 1.3f) };
				unk_0x87AA1B4BA52B1360(Local_135.f_6, &(Local_135.f_6.f_2), 0);
				Local_135.f_6.f_2 = (Local_135.f_6.f_2 + 1.3f);
			}
			else if (iLocal_965 == 2)
			{
				Local_135.f_6 = { unk_0x7E140C583F91AE2B(unk_0xD5A676B97920D126(), (-15f / 2f), 0f, 1.3f) };
				unk_0x87AA1B4BA52B1360(Local_135.f_6, &(Local_135.f_6.f_2), 0);
				Local_135.f_6.f_2 = (Local_135.f_6.f_2 + 1.3f);
			}
			else if (iLocal_965 == 3)
			{
				Local_135.f_6 = { unk_0x7E140C583F91AE2B(unk_0xD5A676B97920D126(), 0f, (-15f / 2f), 1.3f) };
				unk_0x87AA1B4BA52B1360(Local_135.f_6, &(Local_135.f_6.f_2), 0);
				Local_135.f_6.f_2 = (Local_135.f_6.f_2 + 1.3f);
			}
			else if (iLocal_965 == 4)
			{
				unk_0xADEB62009E7345BF(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), &(Local_135.f_6), 1, 1077936128, 0);
				Local_135.f_6.f_2 = (Local_135.f_6.f_2 + 1.3f);
				if (!unk_0x1AAFFE4111587B35(unk_0xD5A676B97920D126(), Local_135.f_6, 75f, 75f, 75f, 0, 1, 0))
				{
					Local_135.f_0 = 4;
				}
			}
			else if (iLocal_965 == 5)
			{
				unk_0x3A6A7A8FACA42CE3(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), 3, &(Local_135.f_6), 1, 1077936128, 0);
				Local_135.f_6.f_2 = (Local_135.f_6.f_2 + 1.3f);
				if (!unk_0x1AAFFE4111587B35(unk_0xD5A676B97920D126(), Local_135.f_6, 75f, 75f, 75f, 0, 1, 0))
				{
					Local_135.f_0 = 4;
				}
			}
			else if (iLocal_965 == 6)
			{
				unk_0x3A6A7A8FACA42CE3(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), 6, &(Local_135.f_6), 1, 1077936128, 0);
				Local_135.f_6.f_2 = (Local_135.f_6.f_2 + 1.3f);
				if (!unk_0x1AAFFE4111587B35(unk_0xD5A676B97920D126(), Local_135.f_6, 75f, 75f, 75f, 0, 1, 0))
				{
					Local_135.f_0 = 4;
				}
			}
			else if (iLocal_965 == 7)
			{
				unk_0x3A6A7A8FACA42CE3(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), 10, &(Local_135.f_6), 1, 1077936128, 0);
				Local_135.f_6.f_2 = (Local_135.f_6.f_2 + 1.3f);
				if (!unk_0x1AAFFE4111587B35(unk_0xD5A676B97920D126(), Local_135.f_6, 75f, 75f, 75f, 0, 1, 0))
				{
					Local_135.f_0 = 4;
				}
			}
			else if (iLocal_965 == 8)
			{
				unk_0x3A6A7A8FACA42CE3(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), 15, &(Local_135.f_6), 1, 1077936128, 0);
				Local_135.f_6.f_2 = (Local_135.f_6.f_2 + 1.3f);
				if (!unk_0x1AAFFE4111587B35(unk_0xD5A676B97920D126(), Local_135.f_6, 75f, 75f, 75f, 0, 1, 0))
				{
					Local_135.f_0 = 4;
				}
			}
			else if (iLocal_965 == 9)
			{
				unk_0x3A6A7A8FACA42CE3(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), 20, &(Local_135.f_6), 1, 1077936128, 0);
				Local_135.f_6.f_2 = (Local_135.f_6.f_2 + 1.3f);
			}
			else if (func_163(100f) && !unk_0xF44A5E894FE76438(iLocal_265, 18))
			{
				Local_135.f_6 = { Local_1168[0 /*3*/] };
				Local_135.f_9 = uLocal_1172[0];
				*uParam0 = 1;
				unk_0xB8A73E7DA87B2968(&iLocal_265, 4);
				return 1;
			}
			else
			{
				Local_135.f_0 = 4;
			}
			if (!unk_0x1AAFFE4111587B35(unk_0xD5A676B97920D126(), Local_135.f_6, 75f, 75f, 5f, 0, 1, 0) || unk_0x3B486413FC922BCC(Local_135.f_6 + Vector(2f, 0f, 0f), Local_135.f_6 - Vector(5f, 0f, 0f), &uVar6))
			{
				iLocal_963 = 0;
				iLocal_964 = 0;
				iLocal_965++;
				return 0;
			}
			Var9 = { Local_135.f_6 + Vector((50f / 2f), 0f, 0f) };
			iLocal_963 = unk_0xDB895465068AE7F2(Var9, 15f, 15f, 50f, 0f, 0f, -1f, 2, 131, unk_0xD5A676B97920D126(), 4);
			if (iLocal_963 == 0)
			{
				return 0;
			}
		}
		else if (unk_0xEE7715D6C4A7B1F2(iLocal_963, &iLocal_964, &uVar0, &uVar0, &uVar3) == 2)
		{
			iLocal_963 = 0;
			if (iLocal_964 == 0 && !func_162(Local_135.f_6, 3, 0, 0))
			{
				unk_0xB8A73E7DA87B2968(&iLocal_265, 4);
			}
			else
			{
				iLocal_964 = 0;
				iLocal_965++;
			}
		}
		else if (unk_0xEE7715D6C4A7B1F2(iLocal_963, &iLocal_964, &uVar0, &uVar0, &uVar3) == 0)
		{
			iLocal_963 = 0;
		}
	}
	return unk_0xF44A5E894FE76438(iLocal_265, 4);
}

int func_162(struct<3> Param0, int iParam3, int iParam4, bool bParam5)
{
	struct<3> Var0[15];
	struct<3> Var46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	
	iVar110 = 0;
	switch (iParam3)
	{
		case 1:
			Var0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			Var46[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar92[0] = 171.25f;
			Var0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			Var46[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar92[1] = 132f;
			Var0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			Var46[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar92[2] = 132f;
			iVar108 = 3;
			break;
		
		case 2:
			Var0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			Var46[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 247f;
			Var0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			Var46[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 149f;
			Var0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			Var46[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 185.5f;
			Var0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			Var46[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 250f;
			Var0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			Var46[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 193.5f;
			Var0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			Var46[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 234.5f;
			Var0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			Var46[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar92[6] = 16f;
			Var0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			Var46[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 80f;
			Var0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			Var46[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 142f;
			Var0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			Var46[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam4)) };
			fVar92[9] = 30.75f;
			Var0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			Var46[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam4)) };
			fVar92[10] = 150f;
			Var0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			Var46[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam4)) };
			fVar92[11] = 29.25f;
			Var0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			Var46[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam4)) };
			fVar92[12] = 43f;
			iVar108 = 13;
			break;
		
		case 3:
			Var0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			Var46[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 250f;
			Var0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			Var46[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 180f;
			Var0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			Var46[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 200f;
			Var0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			Var46[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 86.25f;
			Var0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			Var46[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 140.5f;
			Var0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			Var46[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 140.5f;
			Var0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			Var46[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam4)) };
			fVar92[6] = 90f;
			Var0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			Var46[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 100f;
			Var0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			Var46[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 248.75f;
			Var0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			Var46[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar92[9] = 128f;
			Var0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			Var46[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar92[10] = 127.25f;
			Var0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			Var46[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar92[11] = 16f;
			Var0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			Var46[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar92[12] = 214.25f;
			Var0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			Var46[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar92[13] = 65.75f;
			if (bParam5)
			{
				iVar111 = iParam4;
			}
			else
			{
				iVar111 = 0;
			}
			Var46[9 /*3*/].f_2 = (Var46[9 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[10 /*3*/].f_2 = (Var46[10 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[11 /*3*/].f_2 = (Var46[11 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[12 /*3*/].f_2 = (Var46[12 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[13 /*3*/].f_2 = (Var46[13 /*3*/].f_2 + IntToFloat(iVar111));
			iVar108 = 14;
			break;
		
		case 4:
			Var0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			Var46[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam4)) };
			fVar92[0] = 114f;
			Var0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			Var46[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam4)) };
			fVar92[1] = 88.5f;
			Var0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			Var46[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam4)) };
			fVar92[2] = 133.25f;
			Var0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			Var46[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam4)) };
			fVar92[3] = 104.5f;
			Var0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			Var46[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam4)) };
			fVar92[4] = 121.75f;
			Var0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			Var46[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam4)) };
			fVar92[5] = 84.5f;
			Var0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			Var46[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam4)) };
			fVar92[6] = 103.75f;
			Var0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			Var46[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam4)) };
			fVar92[7] = 104.25f;
			Var0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			Var46[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam4)) };
			fVar92[8] = 91f;
			Var0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			Var46[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam4)) };
			fVar92[9] = 51.25f;
			iVar108 = 10;
			break;
		
		case 5:
			Var0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			Var46[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam4)) };
			fVar92[0] = 45.75f;
			Var0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			Var46[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam4)) };
			fVar92[1] = 99f;
			Var0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			Var46[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam4)) };
			fVar92[2] = 81.5f;
			iVar108 = 3;
			break;
		
		case 6:
			Var0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			Var46[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam4)) };
			fVar92[0] = 120f;
			Var0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			Var46[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar92[1] = 170f;
			Var0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			Var46[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar92[2] = 12.5f;
			Var0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			Var46[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar92[3] = 9.75f;
			iVar108 = 4;
			break;
		
		case 7:
			Var0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			Var46[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam4)) };
			fVar92[0] = 162f;
			Var0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			Var46[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam4)) };
			fVar92[1] = 124f;
			Var0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			Var46[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam4)) };
			fVar92[2] = 55f;
			Var0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			Var46[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam4)) };
			fVar92[3] = 142f;
			iVar108 = 4;
			break;
		
		case 8:
			Var0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			Var46[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar92[0] = 7.75f;
			Var0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			Var46[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar92[1] = 14.75f;
			Var0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			Var46[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar92[2] = 31.5f;
			Var0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			Var46[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar92[3] = 30.5f;
			Var0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			Var46[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar92[4] = 6.75f;
			iVar108 = 5;
			break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (unk_0x1FA2886237245376(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], iVar110, 1))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

int func_163(float fParam0)
{
	int iVar0;
	
	func_164(func_166(unk_0xFB6B3EEFAB2DD12C()), &Local_1168, &uLocal_1172, &uLocal_1174);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (uLocal_1174[iVar0] < fParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_164(struct<3> Param0, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	float fVar1;
	struct<3> Var2[1];
	var uVar6[1];
	float fVar8[1];
	int iVar10;
	
	if (unk_0x2A488C176D52CCA5(Local_1165, Param0) < 20f)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		fVar8[iVar0] = 1E+07f;
		iVar0++;
	}
	iVar10 = 0;
	while (iVar10 < 299)
	{
		fVar1 = unk_0x2A488C176D52CCA5(Param0, Global_2411315[iVar10 /*3*/]);
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (fVar1 < fVar8[iVar0])
			{
				func_165(Global_2411315[iVar10 /*3*/], Global_2412213[iVar10], fVar1, iVar0, &Var2, &uVar6, &fVar8);
				iVar0 = 2;
			}
			iVar0++;
		}
		iVar10++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (unk_0x652D2EEEF1D3E62C(Var2[iVar0 /*3*/]) > 0f)
		{
			*(uParam3[iVar0 /*3*/]) = { Var2[iVar0 /*3*/] };
			(*uParam4)[iVar0] = uVar6[iVar0];
			(*uParam5)[iVar0] = fVar8[iVar0];
		}
		iVar0++;
	}
	Local_1165 = { Param0 };
}

void func_165(struct<3> Param0, var uParam3, float fParam4, int iParam5, var uParam6, var uParam7, float fParam8)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	
	if (iParam5 < *uParam6)
	{
		Var0 = { *(uParam6[iParam5 /*3*/]) };
		uVar3 = (*uParam7)[iParam5];
		uVar4 = (*fParam8)[iParam5];
		*(uParam6[iParam5 /*3*/]) = { Param0 };
		(*uParam7)[iParam5] = uParam3;
		(*fParam8)[iParam5] = fParam4;
		func_165(Var0, uVar3, uVar4, iParam5 + 1, uParam6, uParam7, fParam8);
	}
}

Vector3 func_166(int iParam0)
{
	return unk_0xC086F8D75730FA3A(unk_0x4572B13EE70C8F52(iParam0), 0);
}

void func_167(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 87:
					*uParam2 = { -1691.356f, -599.7728f, 32.3863f };
					*uParam3 = 142.5853f;
					break;
				
				case 88:
					*uParam2 = { -1370.252f, -520.0326f, 29.6825f };
					*uParam3 = 125.7171f;
					break;
				
				case 89:
					*uParam2 = { -23.9063f, -566.7811f, 36.7451f };
					*uParam3 = 261.5803f;
					break;
				
				case 90:
					*uParam2 = { -8.8891f, -801.2603f, 43.4313f };
					*uParam3 = 337.4736f;
					break;
				
				default:
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 62.9658f, -2526.362f, 5.0021f };
					*uParam3 = 312.1262f;
					break;
				
				case 2:
					*uParam2 = { -1011.097f, -1324.951f, 4.7239f };
					*uParam3 = 82.0646f;
					break;
				
				case 3:
					*uParam2 = { 891.2814f, -1038.218f, 38.9808f };
					*uParam3 = 179.4713f;
					break;
				
				case 4:
					*uParam2 = { 238.2009f, -1979.512f, 19.9838f };
					*uParam3 = 229.0376f;
					break;
				
				case 5:
					*uParam2 = { -445.2993f, 159.6719f, 77.0803f };
					*uParam3 = 177.4463f;
					break;
				
				case 6:
					*uParam2 = { -1003.048f, -2074.005f, 11.4279f };
					*uParam3 = 312.3971f;
					break;
				
				case 7:
					*uParam2 = { -1302.906f, -790.8793f, 16.5494f };
					*uParam3 = 218.4739f;
					break;
				
				case 8:
					*uParam2 = { -839.7902f, -2694.595f, 12.8121f };
					*uParam3 = 262.2745f;
					break;
				
				case 9:
					*uParam2 = { 242.0532f, -2957.304f, 4.8795f };
					*uParam3 = 206.7359f;
					break;
				
				case 10:
					*uParam2 = { 1519.096f, -2198.799f, 76.0507f };
					*uParam3 = 276.3806f;
					break;
				
				case 11:
					*uParam2 = { -293.2805f, -2718.856f, 5.0003f };
					*uParam3 = 314.7322f;
					break;
				
				case 12:
					*uParam2 = { 517.1236f, -596.8082f, 23.7995f };
					*uParam3 = 196.9468f;
					break;
				
				case 13:
					*uParam2 = { -488.2077f, -1801.373f, 20.2465f };
					*uParam3 = 44.8509f;
					break;
				
				case 14:
					*uParam2 = { -345.6657f, -1351.348f, 30.2847f };
					*uParam3 = 146.9459f;
					break;
				
				case 15:
					*uParam2 = { 292.9702f, 371.4247f, 104.3915f };
					*uParam3 = 75.7126f;
					break;
				
				case 16:
					*uParam2 = { 905.4782f, -1560.715f, 29.7175f };
					*uParam3 = 290.4099f;
					break;
				
				case 17:
					*uParam2 = { 711.2572f, -911.7263f, 22.7077f };
					*uParam3 = 316.5199f;
					break;
				
				case 18:
					*uParam2 = { 1091.211f, -2194.509f, 30.1066f };
					*uParam3 = 20.739f;
					break;
				
				case 19:
					*uParam2 = { 989.2725f, -2531.751f, 27.302f };
					*uParam3 = 319.7745f;
					break;
				
				case 20:
					*uParam2 = { -245.9971f, 108.1838f, 68.557f };
					*uParam3 = 28.2604f;
					break;
				
				case 21:
					*uParam2 = { 562.0646f, -1949.79f, 23.9592f };
					*uParam3 = 6.5821f;
					break;
				
				case 22:
					*uParam2 = { 76.4564f, -2200.17f, 0.6006f };
					*uParam3 = 183.6653f;
					break;
				
				default:
					break;
			}
			break;
	}
}

int func_168(float fParam0, var uParam1, var uParam2)
{
	float fVar0;
	
	if (func_259())
	{
		func_169(uParam1, &fVar0, uParam2);
		if (*uParam1 > -1)
		{
			if (fVar0 < fParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_169(var uParam0, var uParam1, var uParam2)
{
	int iVar0[2];
	var uVar3[2];
	int iVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	
	func_180(&(iVar0[0]), &(uVar3[0]));
	func_170(&(iVar0[1]), &(uVar3[1]));
	iVar6 = -1;
	fVar7 = 999999.9f;
	iVar8 = -1;
	iVar9 = 0;
	while (iVar9 < iVar0)
	{
		if (uVar3[iVar9] < fVar7)
		{
			fVar7 = uVar3[iVar9];
			iVar6 = iVar0[iVar9];
			iVar8 = iVar9;
		}
		iVar9++;
	}
	*uParam0 = iVar6;
	*uParam1 = fVar7;
	*uParam2 = iVar8;
}

void func_170(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	int iVar9;
	
	iVar0 = -1;
	fVar1 = 1E+07f;
	Var2 = { func_174(unk_0xFB6B3EEFAB2DD12C()) };
	Var2.f_2 = 0f;
	iVar9 = 0;
	while (iVar9 < 23)
	{
		if (iVar9 > 0)
		{
			if (func_173(iVar9))
			{
				Var5 = { func_171(iVar9) };
				Var5.f_2 = 0f;
				fVar8 = unk_0x2A488C176D52CCA5(Var2, Var5);
				if (fVar8 < fVar1)
				{
					fVar1 = fVar8;
					iVar0 = iVar9;
				}
			}
		}
		iVar9++;
	}
	*uParam0 = iVar0;
	*uParam1 = fVar1;
}

Vector3 func_171(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	if (!func_172(iParam0))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 1:
			Var0 = { 50.9205f, -2560.01f, 6f };
			break;
		
		case 2:
			Var0 = { -1074.852f, -1257.452f, 5.6938f };
			break;
		
		case 3:
			Var0 = { 901.936f, -1019.425f, 34.9666f };
			break;
		
		case 4:
			Var0 = { 253.9006f, -1955.933f, 22.9477f };
			break;
		
		case 5:
			Var0 = { -426.279f, 180.9043f, 80.6855f };
			break;
		
		case 6:
			Var0 = { -1050.36f, -2023.939f, 12.1616f };
			break;
		
		case 7:
			Var0 = { -1275.378f, -815.4295f, 17.1148f };
			break;
		
		case 8:
			Var0 = { -883.2906f, -2730.542f, 12.8285f };
			break;
		
		case 9:
			Var0 = { 269.6765f, -3016.279f, 5.7176f };
			break;
		
		case 10:
			Var0 = { 1561.402f, -2138.697f, 77.5275f };
			break;
		
		case 11:
			Var0 = { -303.7892f, -2698.39f, 6.0003f };
			break;
		
		case 12:
			Var0 = { 507.2061f, -649.5859f, 24.7512f };
			break;
		
		case 13:
			Var0 = { -525.8206f, -1775.87f, 21.3501f };
			break;
		
		case 14:
			Var0 = { -291.6372f, -1352.556f, 31.3146f };
			break;
		
		case 15:
			Var0 = { 348.6436f, 324.428f, 104.3185f };
			break;
		
		case 16:
			Var0 = { 922.0838f, -1561.299f, 29.7475f };
			break;
		
		case 17:
			Var0 = { 763.7448f, -885.2086f, 25.0869f };
			break;
		
		case 18:
			Var0 = { 1043.884f, -2172.603f, 30.471f };
			break;
		
		case 19:
			Var0 = { 1001.659f, -2511.88f, 28.302f };
			break;
		
		case 20:
			Var0 = { -263.138f, 194.3424f, 85.184f };
			break;
		
		case 21:
			Var0 = { 547.8112f, -1942.514f, 23.9851f };
			break;
		
		case 22:
			Var0 = { 88.9678f, -2216.882f, 6.0613f };
			break;
	}
	return Var0;
}

int func_172(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_173(int iParam0)
{
	int iVar0;
	
	if (func_172(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_80[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

Vector3 func_174(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x6901135DDCC4904D(Global_2414704[iParam0]))
	{
		Var0 = { unk_0xAEB3F4D3AF0E0C0B(Global_2414704[iParam0]) };
	}
	else if (unk_0x6901135DDCC4904D(Global_2414704.f_33[iParam0]) && !iParam0 == Global_2433082)
	{
		Var0 = { unk_0xAEB3F4D3AF0E0C0B(Global_2414704.f_33[iParam0]) };
	}
	if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
	{
		return Var0;
	}
	return func_175(iParam0);
}

Vector3 func_175(int iParam0)
{
	int iVar0;
	
	if (Global_1589933[iParam0 /*601*/].f_257.f_15 > 0)
	{
		return func_179(func_185(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_15));
	}
	else
	{
		func_177(func_166(iParam0), &iVar0);
		if (iVar0 > 0)
		{
			return func_179(func_185(iVar0));
		}
	}
	if (func_176(iParam0))
	{
		return Global_1760739.f_20[Global_2421621[iParam0 /*358*/].f_312.f_1 /*3*/];
	}
	return func_166(iParam0);
}

int func_176(int iParam0)
{
	if (iParam0 != func_4())
	{
		if (func_130(iParam0, 1, 1))
		{
			return Global_2421621[iParam0 /*358*/].f_312.f_1 != -1;
		}
	}
	return 0;
}

void func_177(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 7;
	while (iVar0 <= iVar1)
	{
		if (func_178(Param0, iVar0))
		{
			*uParam3 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 34;
	iVar1 = 43;
	while (iVar0 <= iVar1)
	{
		if (func_178(Param0, iVar0))
		{
			*uParam3 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 61;
	iVar1 = 65;
	while (iVar0 <= iVar1)
	{
		if (func_178(Param0, iVar0))
		{
			*uParam3 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 8;
	if (func_178(Param0, iVar0))
	{
		if (Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_15 > 0)
		{
			*uParam3 = Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_15;
		}
		else if (Global_2404580.f_1 > 0)
		{
			*uParam3 = Global_2404580.f_1;
		}
		else
		{
			*uParam3 = iVar0;
		}
		return;
	}
	iVar0 = 17;
	if (func_178(Param0, iVar0))
	{
		if (Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_15 > 0)
		{
			*uParam3 = Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_15;
		}
		else if (Global_2404580.f_1 > 0)
		{
			*uParam3 = Global_2404580.f_1;
		}
		else
		{
			*uParam3 = iVar0;
		}
		return;
	}
}

int func_178(struct<3> Param0, int iParam3)
{
	int iVar0;
	
	if (iParam3 != 999)
	{
		if ((unk_0x1FA2886237245376(Param0, Global_1049427[iParam3 /*1942*/].f_146.f_57[0 /*8*/], Global_1049427[iParam3 /*1942*/].f_146.f_57[0 /*8*/].f_3, Global_1049427[iParam3 /*1942*/].f_146.f_57[0 /*8*/].f_6, 0, 1) || (Global_1049427[iParam3 /*1942*/].f_146.f_57[1 /*8*/].f_6 != 0f && unk_0x1FA2886237245376(Param0, Global_1049427[iParam3 /*1942*/].f_146.f_57[1 /*8*/], Global_1049427[iParam3 /*1942*/].f_146.f_57[1 /*8*/].f_3, Global_1049427[iParam3 /*1942*/].f_146.f_57[1 /*8*/].f_6, 0, 1))) || (Global_1049427[iParam3 /*1942*/].f_146.f_57[2 /*8*/].f_6 != 0f && unk_0x1FA2886237245376(Param0, Global_1049427[iParam3 /*1942*/].f_146.f_57[2 /*8*/], Global_1049427[iParam3 /*1942*/].f_146.f_57[2 /*8*/].f_3, Global_1049427[iParam3 /*1942*/].f_146.f_57[2 /*8*/].f_6, 0, 1)))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 1;
		while (iVar0 <= 7)
		{
			if (func_178(Param0, iVar0))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 34;
		while (iVar0 <= 43)
		{
			if (func_178(Param0, iVar0))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 61;
		while (iVar0 <= 65)
		{
			if (func_178(Param0, iVar0))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 73;
		while (iVar0 <= 76)
		{
			if (func_178(Param0, iVar0))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 77;
		while (iVar0 <= 82)
		{
			if (func_178(Param0, iVar0))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 83;
		while (iVar0 <= 85)
		{
			if (func_178(Param0, iVar0))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 87;
		while (iVar0 <= 90)
		{
			if (func_178(Param0, iVar0))
			{
				return 1;
			}
			iVar0++;
		}
		if (func_178(Param0, 8))
		{
			return 1;
		}
		if (func_178(Param0, 17))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_179(int iParam0)
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 1:
			Var0 = { -773.4775f, 310.6321f, 84.6981f };
			break;
		
		case 2:
			Var0 = { -252.5713f, -949.9199f, 30.221f };
			break;
		
		case 3:
			Var0 = { -1443.094f, -544.7684f, 33.7424f };
			break;
		
		case 4:
			Var0 = { -913.85f, -455.1392f, 38.5999f };
			break;
		
		case 5:
			Var0 = { -47.3145f, -585.9766f, 36.9593f };
			break;
		
		case 6:
			Var0 = { -932.7474f, -383.9246f, 37.9613f };
			break;
		
		case 7:
			Var0 = { -619.1315f, 37.8841f, 42.5883f };
			break;
		
		case 8:
			Var0 = { 284.9614f, -159.9891f, 63.6221f };
			break;
		
		case 9:
			Var0 = { 2.8889f, 35.7762f, 70.5349f };
			break;
		
		case 10:
			Var0 = { 9.74f, 84.6906f, 77.3975f };
			break;
		
		case 11:
			Var0 = { -512.1465f, 111.2223f, 62.351f };
			break;
		
		case 12:
			Var0 = { -197.3405f, 88.1053f, 68.7422f };
			break;
		
		case 13:
			Var0 = { -628.3212f, 165.8364f, 60.1651f };
			break;
		
		case 14:
			Var0 = { -973.3757f, -1429.425f, 6.6791f };
			break;
		
		case 15:
			Var0 = { -829.1362f, -855.0104f, 18.6297f };
			break;
		
		case 16:
			Var0 = { -757.5739f, -755.5591f, 25.5697f };
			break;
		
		case 17:
			Var0 = { -45.1289f, -57.0925f, 62.2531f };
			break;
		
		case 18:
			Var0 = { -206.7293f, 184.142f, 79.3279f };
			break;
		
		case 19:
			Var0 = { -811.7045f, -984.1961f, 13.1538f };
			break;
		
		case 20:
			Var0 = { -664.0032f, -853.6744f, 23.4325f };
			break;
		
		case 21:
			Var0 = { -1534.025f, -324.5247f, 46.5237f };
			break;
		
		case 22:
			Var0 = { -1561.381f, -412.1974f, 41.389f };
			break;
		
		case 23:
			Var0 = { -1608.851f, -429.184f, 39.439f };
			break;
		
		case 24:
			Var0 = { 964.3583f, -1034.199f, 39.8303f };
			break;
		
		case 25:
			Var0 = { 894.2868f, -885.5679f, 26.1212f };
			break;
		
		case 26:
			Var0 = { 821.1741f, -924.1658f, 25.1998f };
			break;
		
		case 27:
			Var0 = { 759.7933f, -759.8209f, 25.759f };
			break;
		
		case 28:
			Var0 = { 844.7289f, -1164.1f, 24.2681f };
			break;
		
		case 29:
			Var0 = { 526.2521f, -1604.613f, 28.2625f };
			break;
		
		case 30:
			Var0 = { 572.0462f, -1570.736f, 27.4904f };
			break;
		
		case 31:
			Var0 = { 722.2852f, -1190.617f, 23.282f };
			break;
		
		case 32:
			Var0 = { 497.6212f, -1494.084f, 28.2893f };
			break;
		
		case 33:
			Var0 = { 480.3127f, -1549.937f, 28.2828f };
			break;
		
		case 34:
			Var0 = { -68.702f, 6426.148f, 30.439f };
			break;
		
		case 35:
			Var0 = { -247.4374f, 6240.294f, 30.4892f };
			break;
		
		case 36:
			Var0 = { 2554.165f, 4668.059f, 33.0233f };
			break;
		
		case 37:
			Var0 = { 2461.22f, 1589.255f, 32.0443f };
			break;
		
		case 38:
			Var0 = { -2203.335f, 4244.427f, 47.3305f };
			break;
		
		case 39:
			Var0 = { 218.0665f, 2601.817f, 44.7668f };
			break;
		
		case 40:
			Var0 = { 186.1719f, 2786.343f, 45.0144f };
			break;
		
		case 41:
			Var0 = { 642.0746f, 2791.729f, 40.9795f };
			break;
		
		case 42:
			Var0 = { -1130.938f, 2701.133f, 17.8004f };
			break;
		
		case 43:
			Var0 = { -10.944f, -1646.76f, 28.3125f };
			break;
		
		case 44:
			Var0 = { 1024.263f, -2398.404f, 29.1261f };
			break;
		
		case 45:
			Var0 = { 870.8577f, -2232.323f, 29.5508f };
			break;
		
		case 46:
			Var0 = { -663.8541f, -2380.389f, 12.9446f };
			break;
		
		case 47:
			Var0 = { -1088.616f, -2235.098f, 12.2182f };
			break;
		
		case 48:
			Var0 = { -342.5126f, -1468.675f, 29.6107f };
			break;
		
		case 49:
			Var0 = { -1241.54f, -259.8841f, 37.9445f };
			break;
		
		case 50:
			Var0 = { 899.8448f, -147.528f, 75.5674f };
			break;
		
		case 51:
			Var0 = { -1405.411f, 526.8572f, 122.8361f };
			break;
		
		case 52:
			Var0 = { 1341.552f, -1578.037f, 53.4443f };
			break;
		
		case 53:
			Var0 = { -105.7029f, 6528.539f, 29.1719f };
			break;
		
		case 54:
			Var0 = { -302.3985f, 6327.434f, 31.8918f };
			break;
		
		case 55:
			Var0 = { -15.258f, 6557.378f, 32.2454f };
			break;
		
		case 56:
			Var0 = { 1899.673f, 3773.178f, 31.8829f };
			break;
		
		case 57:
			Var0 = { 1662.121f, 4776.317f, 41.0075f };
			break;
		
		case 58:
			Var0 = { -178.2278f, 490.886f, 134.0466f };
			break;
		
		case 59:
			Var0 = { 339.5743f, 439.7083f, 145.5896f };
			break;
		
		case 60:
			Var0 = { -764.6163f, 618.3144f, 137.5536f };
			break;
		
		case 61:
			Var0 = { -679.5461f, 592.5162f, 139.693f };
			break;
		
		case 62:
			Var0 = { 124.4571f, 551.8877f, 181.658f };
			break;
		
		case 63:
			Var0 = { -563.7349f, 689.099f, 151.6596f };
			break;
		
		case 64:
			Var0 = { -743.0927f, 590.0371f, 140.9221f };
			break;
		
		case 65:
			Var0 = { -861.252f, 684.8923f, 146.2643f };
			break;
		
		case 66:
			Var0 = { -1292.456f, 440.9454f, 93.7572f };
			break;
		
		case 67:
			Var0 = { 369.5891f, 417.4813f, 136.8344f };
			break;
		
		case 68:
			Var0 = { -1581.501f, -558.2578f, 33.9528f };
			break;
		
		case 69:
			Var0 = { -1379.546f, -499.1783f, 32.1574f };
			break;
		
		case 70:
			Var0 = { -117.5296f, -605.7157f, 35.2857f };
			break;
		
		case 71:
			Var0 = { -67.0943f, -802.4415f, 43.2273f };
			break;
		
		case 72:
			Var0 = { 254.1892f, -1809.183f, 26.1805f };
			break;
		
		case 73:
			Var0 = { -1472.278f, -920.0677f, 8.9683f };
			break;
		
		case 74:
			Var0 = { 38.9478f, -1026.629f, 28.6354f };
			break;
		
		case 75:
			Var0 = { 46.903f, 2789.825f, 57.1124f };
			break;
		
		case 76:
			Var0 = { -342.3246f, 6065.316f, 30.4895f };
			break;
		
		case 77:
			Var0 = { 1737.878f, 3709.088f, 33.1348f };
			break;
		
		case 78:
			Var0 = { 939.7161f, -1459.204f, 30.467f };
			break;
		
		case joaat("mpsv_lp0_31"):
			Var0 = { 189.7624f, 309.7488f, 104.4714f };
			break;
		
		case 80:
			Var0 = { -21.9593f, -191.3618f, 51.5599f };
			break;
		
		case 81:
			Var0 = { 2472.22f, 4110.493f, 36.9629f };
			break;
		
		case 82:
			Var0 = { -39.3286f, 6420.603f, 30.7017f };
			break;
		
		case 83:
			Var0 = { -1134.762f, -1568.848f, 3.4077f };
			break;
	}
	return Var0;
}

void func_180(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	int iVar9;
	
	iVar0 = -1;
	fVar1 = 1E+07f;
	Var2 = { func_174(unk_0xFB6B3EEFAB2DD12C()) };
	Var2.f_2 = 0f;
	iVar9 = -1;
	iVar9 = 87;
	while (iVar9 <= 90)
	{
		if (func_181(iVar9))
		{
			Var5 = { Global_1049427[iVar9 /*1942*/].f_3[0 /*3*/] };
			Var5.f_2 = 0f;
			fVar8 = unk_0x2A488C176D52CCA5(Var2, Var5);
			if (fVar8 < fVar1)
			{
				fVar1 = fVar8;
				iVar0 = iVar9;
			}
		}
		iVar9++;
	}
	*uParam0 = iVar0;
	*uParam1 = fVar1;
}

int func_181(int iParam0)
{
	int iVar0;
	
	if (iParam0 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (func_182(iVar0, -1) == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
		if (iParam0 == func_182(99, -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_182(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_9();
	}
	if (iParam0 == 7 && !Global_262145.f_14977)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		return Global_1362455[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2524295[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 12)
		{
			return 0;
		}
		return Global_2524224[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

Vector3 func_183(int iParam0)
{
	if (func_184(iParam0))
	{
		switch (iParam0)
		{
			case 68:
				return -1582.094f, -569.5358f, 115.3326f;
				break;
			
			case 69:
				return -1391.652f, -477.7002f, 90.25584f;
				break;
			
			case 70:
				return -144.5361f, -593.3737f, 210.7752f;
				break;
			
			case 71:
				return -75.06329f, -818.9553f, 325.1753f;
				break;
			}
	}
	return 0f, 0f, -1000f;
}

int func_184(int iParam0)
{
	if (((iParam0 == 68 || iParam0 == 69) || iParam0 == 70) || iParam0 == 71)
	{
		return 1;
	}
	return 0;
}

int func_185(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 61:
		case 83:
		case 84:
		case 85:
			return 1;
			break;
		
		case 5:
		case 6:
			return 2;
			break;
		
		case 7:
		case 34:
		case 62:
			return 3;
			break;
		
		case 35:
		case 36:
		case 37:
			return 4;
			break;
		
		case 38:
		case 39:
		case 65:
			return 5;
			break;
		
		case 40:
		case 41:
		case 63:
			return 6;
			break;
		
		case 42:
		case 43:
		case 64:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 11:
			return 11;
			break;
		
		case 12:
			return 12;
			break;
		
		case 13:
			return 13;
			break;
		
		case 14:
			return 14;
			break;
		
		case 15:
			return 15;
			break;
		
		case 16:
			return 16;
			break;
		
		case 17:
			return 17;
			break;
		
		case 18:
			return 18;
			break;
		
		case 19:
			return 19;
			break;
		
		case 20:
			return 20;
			break;
		
		case 21:
			return 21;
			break;
		
		case 22:
			return 22;
			break;
		
		case 23:
			return 23;
			break;
		
		case 24:
			return 24;
			break;
		
		case 25:
			return 25;
			break;
		
		case 26:
			return 26;
			break;
		
		case 27:
			return 27;
			break;
		
		case 28:
			return 28;
			break;
		
		case 29:
			return 29;
			break;
		
		case 30:
			return 30;
			break;
		
		case 31:
			return 31;
			break;
		
		case 32:
			return 32;
			break;
		
		case 33:
			return 33;
			break;
		
		case 44:
			return 34;
			break;
		
		case 45:
			return 35;
			break;
		
		case 46:
			return 36;
			break;
		
		case 47:
			return 37;
			break;
		
		case 48:
			return 38;
			break;
		
		case 49:
			return 39;
			break;
		
		case 50:
			return 40;
			break;
		
		case 51:
			return 41;
			break;
		
		case 52:
			return 42;
			break;
		
		case 53:
			return 43;
			break;
		
		case 54:
			return 44;
			break;
		
		case 55:
			return 45;
			break;
		
		case 56:
			return 46;
			break;
		
		case 57:
			return 47;
			break;
		
		case 58:
			return 48;
			break;
		
		case 59:
			return 49;
			break;
		
		case 60:
			return 50;
			break;
		
		case 66:
			return 51;
			break;
		
		case 67:
			return 52;
			break;
		
		case 68:
			return 53;
			break;
		
		case 69:
			return 54;
			break;
		
		case 70:
			return 55;
			break;
		
		case 71:
			return 56;
			break;
		
		case 72:
			return 57;
			break;
		
		case 73:
			return 58;
			break;
		
		case 74:
			return 59;
			break;
		
		case 75:
			return 60;
			break;
		
		case 76:
			return 61;
			break;
		
		case 77:
			return 62;
			break;
		
		case 78:
			return 63;
			break;
		
		case joaat("mpsv_lp0_31"):
			return 64;
			break;
		
		case 80:
			return 65;
			break;
		
		case 81:
			return 66;
			break;
		
		case 82:
			return 67;
			break;
		
		case 87:
		case 103:
		case 104:
		case 105:
			return 68;
			break;
		
		case 88:
		case 106:
		case 107:
		case 108:
			return 69;
			break;
		
		case 89:
		case 109:
		case 110:
		case 111:
			return 70;
			break;
		
		case 90:
		case 112:
		case 113:
		case 114:
			return 71;
			break;
		
		case 91:
			return 72;
			break;
		
		case 92:
			return 73;
			break;
		
		case 93:
			return 74;
			break;
		
		case 94:
			return 75;
			break;
		
		case 95:
			return 76;
			break;
		
		case 96:
			return 77;
			break;
		
		case 97:
			return 78;
			break;
		
		case 98:
			return 79;
			break;
		
		case 99:
			return 80;
			break;
		
		case 100:
			return 81;
			break;
		
		case 101:
			return 82;
			break;
		
		case 102:
			return 83;
			break;
	}
	return 0;
}

int func_186(int iParam0)
{
	if (func_130(iParam0, 0, 1))
	{
		return func_187(func_166(iParam0));
	}
	return -1;
}

int func_187(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 87;
	while (iVar0 <= 90)
	{
		if (func_188(Param0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_188(struct<3> Param0, int iParam3)
{
	switch (iParam3)
	{
		case 87:
			if (unk_0x1FA2886237245376(Param0, -1588.118f, -581.678f, 109.549f, -1556.568f, -559.578f, 127.049f, 38.1f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 88:
			if (unk_0x1FA2886237245376(Param0, -1411.432f, -480.399f, 80.276f, -1348.382f, -473.199f, 98.801f, 37.65f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 89:
			if (unk_0x1FA2886237245376(Param0, -183.232f, -625.231f, 164.81f, -92.457f, -555.531f, 221.735f, 117.125f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 90:
			if (unk_0x1FA2886237245376(Param0, -97.577f, -810.65f, 290.012f, -51.802f, -827.175f, 331.587f, 44.15f, 0, 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_189(int iParam0)
{
	int iVar0;
	
	iVar0 = func_186(iParam0);
	if (iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

int func_190()
{
	int iVar0;
	
	iVar0 = 5000;
	if (func_259())
	{
		iVar0 = 3000;
	}
	return iVar0;
}

int func_191(int iParam0)
{
	if (unk_0x7887B64A08364778(iParam0))
	{
		if (unk_0xDB6162AABEF41D01(iParam0))
		{
			unk_0xF78A199036560454(iParam0);
			return unk_0x4A478FA962FF575A(iParam0);
		}
	}
	return 0;
}

int func_192()
{
	struct<3> Var0;
	float fVar3;
	
	if (!unk_0xB529B2A4B7C64D6D(iLocal_1176, 0))
	{
		Var0 = { unk_0xC086F8D75730FA3A(iLocal_1176, 1) };
		fVar3 = (Var0.f_2 - Local_135.f_6.f_2);
		if (fVar3 > 2f)
		{
			return 1;
		}
	}
	return 0;
}

int func_193()
{
	int iVar0;
	
	if (iLocal_1138)
	{
		if (unk_0x7887B64A08364778(iLocal_1176))
		{
			if (!unk_0x7C4BC3264552091A(iLocal_1176))
			{
				if (unk_0xE8112E973BED9DEF(iLocal_1176))
				{
					iVar0 = unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), uLocal_1139));
					if (iVar0 > 500)
					{
						return 0;
					}
					return 1;
				}
			}
		}
	}
	else
	{
		iLocal_1138 = 1;
	}
	uLocal_1139 = unk_0x7414B386C0020BEC();
	return 1;
}

void func_194()
{
	float fVar0;
	
	if (unk_0xF9886D14CA8B2197())
	{
		Local_135.f_10 = { unk_0x23E1E937A3AC89F4(unk_0x98C64CB794F48B4D(unk_0x321E776DB596AB12())) };
		Local_135.f_10.f_2 = unk_0xD4B787C023B137CD((Local_135.f_10 - 25f), (Local_135.f_10.f_1 - 25f), (Local_135.f_10 + 25f), (Local_135.f_10.f_1 + 25f));
		fVar0 = unk_0xD4E3F2D45EDB5835((Local_135.f_10 - 25f), (Local_135.f_10.f_1 - 25f), (Local_135.f_10 + 25f), (Local_135.f_10.f_1 + 25f));
		if ((Local_135.f_10.f_2 - fVar0) < 20f)
		{
			Local_135.f_10.f_2 = (Local_135.f_10.f_2 + 10f);
		}
		else if ((Local_135.f_10.f_2 - fVar0) > 30f && (Local_135.f_10.f_2 - fVar0) < 70f)
		{
			Local_135.f_10.f_2 = (Local_135.f_10.f_2 + 40f);
		}
		func_195(0);
		func_158(Local_135.f_10);
	}
}

void func_195(int iParam0)
{
	unk_0x4EA098C870B73AB7(&(Global_2494149.f_268), iParam0);
}

int func_196(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_84(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_2621441 = 1;
	return func_76(sParam2, iParam3, 0);
}

int func_197()
{
	struct<3> Var0;
	
	if (!func_200())
	{
		if (unk_0x7887B64A08364778(unk_0x9E9133ACB2BCC1D5(Local_135.f_4)))
		{
			if (!unk_0xB529B2A4B7C64D6D(unk_0x9E9133ACB2BCC1D5(Local_135.f_4), 0))
			{
				Var0 = { unk_0xC086F8D75730FA3A(unk_0x9E9133ACB2BCC1D5(Local_135.f_4), 0) };
				if (unk_0x1AAFFE4111587B35(unk_0xD5A676B97920D126(), Var0, 50f, 50f, 150f, 0, 1, 0) && !func_198(unk_0xFB6B3EEFAB2DD12C()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_198(int iParam0)
{
	if (func_199(Global_1589933[iParam0 /*601*/].f_257.f_15))
	{
		return 1;
	}
	return 0;
}

int func_199(int iParam0)
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

int func_200()
{
	if (Global_15745 != 0 || unk_0x33688D334D224255())
	{
		return 1;
	}
	return 0;
}

bool func_201(var uParam0)
{
	return uParam0->f_1;
}

void func_202()
{
	switch (Local_135.f_23)
	{
		case 0:
			if (unk_0xF44A5E894FE76438(Local_135.f_1, 8) || (!func_137(iLocal_1176) && unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_1176, 0)))
			{
				func_205();
				Local_135.f_23 = 1;
			}
			break;
		
		case 1:
			if (!func_137(iLocal_1176))
			{
				if (unk_0x2FAE1B1A2FF430A6(iLocal_1176) > 0)
				{
					Local_135.f_23 = 2;
				}
			}
			break;
		
		case 2:
			if (unk_0xF44A5E894FE76438(Local_135.f_1, 12))
			{
				if (unk_0xF9886D14CA8B2197())
				{
					Local_135.f_23 = 3;
					func_110(&uLocal_1156, 0, 0);
				}
			}
			else if (unk_0xF44A5E894FE76438(Local_135.f_1, 9))
			{
				Local_135.f_23 = 3;
				func_110(&uLocal_1156, 0, 0);
			}
			else if (unk_0xF44A5E894FE76438(Local_135.f_1, 10))
			{
				Local_135.f_23 = 5;
			}
			break;
		
		case 3:
			if (!func_137(iLocal_1176))
			{
				if (unk_0x2FAE1B1A2FF430A6(iLocal_1176) <= 0)
				{
					Local_135.f_23 = 1;
				}
				else if (unk_0xF44A5E894FE76438(Local_135.f_1, 10))
				{
					Local_135.f_23 = 5;
				}
				else if (!unk_0xF9886D14CA8B2197() || func_156(0))
				{
					Local_135.f_10 = { 0f, 0f, 0f };
					unk_0x4EA098C870B73AB7(&(Local_135.f_1), 10);
					unk_0x4EA098C870B73AB7(&(Local_135.f_1), 9);
					Local_135.f_23 = 2;
				}
			}
			break;
		
		case 4:
			if (Global_2452510.f_26)
			{
				if (func_203())
				{
					func_412(0);
				}
			}
			break;
		
		case 5:
			if (!func_137(iLocal_1176))
			{
				if (unk_0x2FAE1B1A2FF430A6(iLocal_1176) <= 0 && !unk_0x6C6EB009F103061C(iLocal_1176))
				{
					if (func_130(Local_135.f_5, 1, 1) && !unk_0x7C4BC3264552091A(unk_0x4572B13EE70C8F52(Local_135.f_5)))
					{
						if (unk_0x1774A68441553185(unk_0x4572B13EE70C8F52(Local_135.f_5), -275944640) != 1 && unk_0x1774A68441553185(unk_0x4572B13EE70C8F52(Local_135.f_5), -275944640) != 0)
						{
							Local_135.f_23 = 6;
						}
					}
				}
				else if (!unk_0xF9886D14CA8B2197() || func_156(0))
				{
					Local_135.f_10 = { 0f, 0f, 0f };
					unk_0x4EA098C870B73AB7(&(Local_135.f_1), 10);
					unk_0x4EA098C870B73AB7(&(Local_135.f_1), 9);
					Local_135.f_23 = 2;
				}
			}
			break;
		
		case 6:
			break;
	}
}

int func_203()
{
	int iVar0;
	
	if (!unk_0x04DE35D10A718EEF())
	{
		return 1;
	}
	if (unk_0xF6A32456BABBBA74(Local_135.f_4))
	{
		if (!unk_0x50CED8EEAE806923(Local_135.f_4))
		{
			unk_0x370543697500755D(Local_135.f_4);
		}
		else
		{
			func_204(&(Local_135.f_4));
			iVar0 = 1;
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_204(var uParam0)
{
	var uVar0;
	
	if (unk_0xF6A32456BABBBA74(*uParam0))
	{
		if (!unk_0x50CED8EEAE806923(*uParam0))
		{
		}
	}
	if (unk_0x1B982A8B37108B3C(*uParam0))
	{
		uVar0 = unk_0x0DE80E23B2BD02BD(*uParam0);
		unk_0x334B78DD05E664AF(&uVar0);
	}
}

void func_205()
{
	int iVar0;
	
	if (unk_0x04DE35D10A718EEF() && !unk_0xA14FC57CB26C2B67())
	{
		iVar0 = func_7(1185, -1, 0);
		if (!unk_0xF44A5E894FE76438(iVar0, 16))
		{
			if (!func_137(iLocal_1176) && !func_136(Local_135.f_4))
			{
				if (unk_0x04D83291EB9DE51D(unk_0x9E9133ACB2BCC1D5(Local_135.f_4), iLocal_1176, 0) && !unk_0x63F7D2743457E11D(unk_0x9E9133ACB2BCC1D5(Local_135.f_4)))
				{
					unk_0xA97D81951B964419("HTX_HELPN");
					if (func_207())
					{
						unk_0xF5640E619D8FCD5B(13);
						unk_0xB1953EBEF4D6BD85("GB_HELI_BLIP");
					}
					else
					{
						unk_0xF5640E619D8FCD5B(iLocal_267);
						unk_0xB1953EBEF4D6BD85("HTX_HELPB");
					}
					unk_0x6F67ABEECD80675B(0, 0, 1, -1);
					unk_0xB8A73E7DA87B2968(&iVar0, 16);
					func_206(1185, iVar0, -1, 1, 0);
				}
			}
		}
	}
}

void func_206(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2503773[iParam0 /*3*/][func_8(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, iParam1, iParam3);
	}
}

int func_207()
{
	if (iLocal_1176 == Global_2494149.f_280 || iLocal_1176 == Global_2494149.f_5295)
	{
		return 1;
	}
	return 0;
}

void func_208()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x4EA098C870B73AB7(&(Local_135.f_1), 9);
	iVar0 = 0;
	while (iVar0 < unk_0x11B9E7FF50B2F4CC())
	{
		if (unk_0x28E01BEA13B73DF2(unk_0x1C2C3C236D3FE99A(iVar0)))
		{
			iVar1 = unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(iVar0));
			if (func_130(iVar1, 1, 1))
			{
				if (!func_137(iLocal_1176))
				{
					if (!unk_0xF44A5E894FE76438(Local_135.f_1, 8))
					{
						if (unk_0x1AAFFE4111587B35(iLocal_1176, Local_135.f_6, (7.5f * 1.5f), (7.5f * 1.5f), (7.5f * 1.5f), 0, 1, 0) && !func_193())
						{
							unk_0xB8A73E7DA87B2968(&(Local_135.f_1), 8);
						}
					}
					if (!unk_0xF44A5E894FE76438(Local_135.f_1, 10))
					{
						if (unk_0x1AAFFE4111587B35(iLocal_1176, Local_135.f_10, (7.5f * 1.5f), (7.5f * 1.5f), (10f * 2f), 0, 1, 0))
						{
							unk_0xB8A73E7DA87B2968(&(Local_135.f_1), 10);
						}
					}
					if (!unk_0xF44A5E894FE76438(Local_135.f_1, 9))
					{
						if (unk_0xF44A5E894FE76438(Local_168[iVar0 /*3*/].f_1, 6))
						{
							unk_0xB8A73E7DA87B2968(&(Local_135.f_1), 9);
							unk_0x4EA098C870B73AB7(&(Local_168[iVar0 /*3*/].f_1), 6);
						}
					}
					if (Local_135.f_24 != 4)
					{
						if (unk_0xF44A5E894FE76438(Local_168[iVar0 /*3*/].f_1, 5))
						{
							Local_135.f_24 = 4;
							Local_135.f_13 = { 100000f, 100000f, 100000f };
							unk_0x4EA098C870B73AB7(&(Local_168[iVar0 /*3*/].f_1), 5);
						}
					}
					if (Local_135.f_24 != 5)
					{
						if (unk_0xF44A5E894FE76438(Local_168[iVar0 /*3*/].f_1, 8))
						{
							if (func_227(iVar1) && func_213(iVar1))
							{
								if (iLocal_107 == -1)
								{
									iVar2 = func_185(Global_1589933[iVar1 /*601*/].f_257[5]);
									Local_135.f_29 = { func_183(iVar2) + Vector(15f, 0f, 0f) };
								}
								else
								{
									iVar3 = iLocal_107;
									func_210(func_211(iVar3), &(Local_135.f_29));
									Local_135.f_29 = { Local_135.f_29 + Vector(40f, 0f, 0f) };
								}
								Local_135.f_24 = 5;
								Local_135.f_23 = 4;
								Local_135.f_28 = iVar1;
								func_158(Local_135.f_29);
							}
							else if (!unk_0xB529B2A4B7C64D6D(iLocal_1176, 0) && !unk_0x4A478FA962FF575A(iLocal_1176))
							{
								unk_0xF78A199036560454(iLocal_1176);
							}
							else
							{
								func_209();
								Local_135.f_23 = 2;
								Local_135.f_24 = 1;
								func_157();
								unk_0x4EA098C870B73AB7(&(Local_135.f_1), 9);
								unk_0x4EA098C870B73AB7(&(Local_135.f_1), 10);
								unk_0x4EA098C870B73AB7(&(Local_135.f_1), 12);
								if (unk_0xF9886D14CA8B2197())
								{
									unk_0x439103CA23139196();
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_209()
{
	int iVar0;
	
	iVar0 = iLocal_1176;
	if (unk_0xB529B2A4B7C64D6D(iVar0, 0))
	{
		return;
	}
	if (unk_0x4A478FA962FF575A(iVar0))
	{
		unk_0xAFC3B32426D08964(iVar0, 1);
	}
}

void func_210(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 54.191f, -2569.248f, 5.0046f };
			break;
		
		case 1:
			*uParam1 = { -1083.054f, -1261.893f, 4.534f };
			break;
		
		case 2:
			*uParam1 = { 896.3665f, -1035.749f, 34.1096f };
			break;
		
		case 3:
			*uParam1 = { 247.473f, -1956.943f, 22.1908f };
			break;
		
		case 4:
			*uParam1 = { -424.828f, 185.825f, 79.775f };
			break;
		
		case 5:
			*uParam1 = { -1042.482f, -2023.516f, 12.1616f };
			break;
		
		case 6:
			*uParam1 = { -1268.119f, -812.2741f, 16.1075f };
			break;
		
		case 7:
			*uParam1 = { -873.65f, -2735.948f, 12.9438f };
			break;
		
		case 8:
			*uParam1 = { 274.5224f, -3015.413f, 4.6993f };
			break;
		
		case 9:
			*uParam1 = { 1569.69f, -2129.792f, 77.3351f };
			break;
		
		case 10:
			*uParam1 = { -315.551f, -2698.654f, 6.5495f };
			break;
		
		case 11:
			*uParam1 = { 499.81f, -651.982f, 23.909f };
			break;
		
		case 12:
			*uParam1 = { -528.5296f, -1784.573f, 20.5853f };
			break;
		
		case 13:
			*uParam1 = { -295.8596f, -1353.238f, 30.3138f };
			break;
		
		case 14:
			*uParam1 = { 349.839f, 328.889f, 103.272f };
			break;
		
		case 15:
			*uParam1 = { 926.2818f, -1560.311f, 29.7404f };
			break;
		
		case 16:
			*uParam1 = { 759.566f, -909.466f, 24.244f };
			break;
		
		case 17:
			*uParam1 = { 1037.813f, -2173.062f, 30.5334f };
			break;
		
		case 18:
			*uParam1 = { 1019.116f, -2511.69f, 27.302f };
			break;
		
		case 19:
			*uParam1 = { -245.3405f, 203.3286f, 82.818f };
			break;
		
		case 20:
			*uParam1 = { 539.346f, -1945.682f, 23.984f };
			break;
		
		case 21:
			*uParam1 = { 96.1538f, -2216.4f, 5.1712f };
			break;
	}
}

int func_211(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 67)
	{
		if (func_212(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_212(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 3;
			break;
		
		case 3:
			return 4;
			break;
		
		case 4:
			return 5;
			break;
		
		case 5:
			return 6;
			break;
		
		case 6:
			return 7;
			break;
		
		case 7:
			return 8;
			break;
		
		case 8:
			return 9;
			break;
		
		case 9:
			return 10;
			break;
		
		case 10:
			return 11;
			break;
		
		case 11:
			return 12;
			break;
		
		case 12:
			return 13;
			break;
		
		case 13:
			return 14;
			break;
		
		case 14:
			return 15;
			break;
		
		case 15:
			return 16;
			break;
		
		case 16:
			return 17;
			break;
		
		case 17:
			return 18;
			break;
		
		case 18:
			return 19;
			break;
		
		case 19:
			return 20;
			break;
		
		case 20:
			return 21;
			break;
		
		case 21:
			return 22;
			break;
	}
	return 0;
}

int func_213(int iParam0)
{
	if ((!func_222(iParam0, 1) && !func_218(iParam0)) && func_214(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_214(int iParam0)
{
	if (iParam0 != func_4())
	{
		if (func_130(iParam0, 1, 1))
		{
			if (!unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_352, 6))
			{
				return 0;
			}
			if (func_218(iParam0) && !func_215(iParam0))
			{
				return 0;
			}
			if (func_141(iParam0, 21))
			{
				return 0;
			}
			if (unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_257.f_13, 4))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_215(int iParam0)
{
	if (((func_216(iParam0) == 167 || func_216(iParam0) == 168) || func_216(iParam0) == 190) || func_216(iParam0) == 178)
	{
		return 1;
	}
	return 0;
}

int func_216(int iParam0)
{
	if (func_217(iParam0, 0))
	{
		return Global_1618089[iParam0 /*390*/].f_11.f_32;
	}
	return -1;
}

int func_217(int iParam0, int iParam1)
{
	if (Global_1618089[iParam0 /*390*/].f_11.f_32 != -1 || (iParam1 && Global_1618089[iParam0 /*390*/].f_11.f_31 != -1))
	{
		return 1;
	}
	return 0;
}

int func_218(int iParam0)
{
	if (func_221(iParam0))
	{
		return 1;
	}
	if (func_219(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_219(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_220(iParam0, 9);
	}
	return 0;
}

bool func_220(int iParam0, int iParam1)
{
	return unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_11.f_4, iParam1);
}

int func_221(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return unk_0xF44A5E894FE76438(Global_1618089[iVar0 /*390*/].f_1, 0);
	}
	return 0;
}

bool func_222(int iParam0, bool bParam1)
{
	if (Global_1312443 != 0)
	{
		return func_226(iParam0) != 0;
	}
	return func_223(iParam0, bParam1);
}

int func_223(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_224(iParam0))
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

bool func_224(int iParam0)
{
	return func_225(iParam0);
}

bool func_225(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_13.f_1, 0);
}

int func_226(int iParam0)
{
	if (func_130(iParam0, 0, 1))
	{
		return Global_2421621[iParam0 /*358*/].f_1;
	}
	return 0;
}

bool func_227(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_257.f_13, 26);
}

int func_228()
{
	bool bVar0;
	
	if (func_109(&uLocal_1132, 5000, 0))
	{
		if (unk_0xDAA10C24602AFD31(1, 1, 0, 0))
		{
			if (func_249(func_250()) && func_249(func_248()))
			{
				if (func_161(&bVar0))
				{
					if (func_231(bVar0) && func_229())
					{
						func_195(0);
						func_158(Local_135.f_6);
						Local_135.f_13 = { 100000f, 100000f, 100000f };
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_229()
{
	if ((!unk_0xF6A32456BABBBA74(Local_135.f_4) && func_249(func_248())) && unk_0xF6A32456BABBBA74(Local_135.f_3))
	{
		if (!func_137(iLocal_1176))
		{
			if (func_230(&(Local_135.f_4), Local_135.f_3, 22, func_248(), -1, 1, 1, 1))
			{
				unk_0x5457695C257D1470(unk_0x9E9133ACB2BCC1D5(Local_135.f_4), 1);
				unk_0xD6E6C197BF8B123B(unk_0x9E9133ACB2BCC1D5(Local_135.f_4), 0);
				unk_0x7D99F00F48D15ADB(unk_0x9E9133ACB2BCC1D5(Local_135.f_4), 1);
				unk_0x77E24C0B92B4FC24(unk_0x9E9133ACB2BCC1D5(Local_135.f_4), 17, 1);
				unk_0x77E24C0B92B4FC24(unk_0x9E9133ACB2BCC1D5(Local_135.f_4), 5, 0);
				unk_0x738326127C161284(unk_0x9E9133ACB2BCC1D5(Local_135.f_4), 2, 1);
				unk_0x738326127C161284(unk_0x9E9133ACB2BCC1D5(Local_135.f_4), 1024, 1);
				unk_0x738326127C161284(unk_0x9E9133ACB2BCC1D5(Local_135.f_4), 2048, 1);
				unk_0x738326127C161284(unk_0x9E9133ACB2BCC1D5(Local_135.f_4), 32768, 0);
				unk_0x237B0CFB6EEBD3BA(unk_0x9E9133ACB2BCC1D5(Local_135.f_4), 251, 1);
				unk_0x91AAF5BB8226AB32(unk_0x9E9133ACB2BCC1D5(Local_135.f_4), 0);
				unk_0xE81D470B804DC69A(unk_0x9E9133ACB2BCC1D5(Local_135.f_4), unk_0xF2DB717A73826179((200f * Global_262145.f_151)));
				if (func_144())
				{
					func_108(&uLocal_967, 3, unk_0x9E9133ACB2BCC1D5(Local_135.f_4), "FM_Pilot", 0, 1);
				}
				else
				{
					func_11(1);
					func_108(&uLocal_967, 2, unk_0x9E9133ACB2BCC1D5(Local_135.f_4), "EXEC_PILOT", 0, 1);
				}
			}
		}
	}
	if (!unk_0xF6A32456BABBBA74(Local_135.f_4))
	{
		return 0;
	}
	unk_0x8188DB74546FF484(func_248());
	return 1;
}

int func_230(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x4EA5429144EA2576(1))
	{
		return 0;
	}
	if (!unk_0xF6A32456BABBBA74(uParam1))
	{
		return 0;
	}
	if (!unk_0xA4DB44DF73EF4FE5(unk_0xE95C934718B1A4FF(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x3EE3A80A2D8115F8(unk_0x0BD2D83BDCAED6E6(unk_0xE95C934718B1A4FF(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0xF6A32456BABBBA74(*uParam0))
	{
		unk_0x0BD3F78CDD5346A8(unk_0x9E9133ACB2BCC1D5(*uParam0), iParam7);
		if (unk_0xDB6162AABEF41D01(unk_0x9E9133ACB2BCC1D5(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x8D7D9565420EE4B0(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_231(bool bParam0)
{
	struct<3> Var0;
	var uVar3;
	
	if (!unk_0xF6A32456BABBBA74(Local_135.f_3))
	{
		if (func_249(func_250()))
		{
			func_245(&Var0, &uVar3, bParam0);
			if (func_235(Var0, 6f, 1f, 1f, 10f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0) || bParam0)
			{
				if (Local_135.f_9 > -1f)
				{
					uVar3 = Local_135.f_9;
				}
				if (func_234(&(Local_135.f_3), func_250(), Var0, uVar3, 1, 1, 1, 0, 1, 1, 0))
				{
					iLocal_1176 = unk_0xE95C934718B1A4FF(Local_135.f_3);
					unk_0x09AB636BA0F9BE90(iLocal_1176, 1, 1, 0);
					if (!bParam0)
					{
						unk_0x9773EF10686D53C8(iLocal_1176, 30f);
					}
					unk_0x26D544204410CB38(iLocal_1176);
					unk_0x7C67F12EBF1640E8(iLocal_1176, 0);
					unk_0x9170305A9FF2AF18(iLocal_1176, 1);
					unk_0x05AFD0789813B376(iLocal_1176, 0f);
					if (unk_0xFACD5AD331C52454("HeliTaxi", 2))
					{
						unk_0x91B68C4ADBDEB5CC(iLocal_1176, "HeliTaxi", 1);
					}
					func_148(1);
					func_232();
					if (func_259())
					{
					}
				}
			}
		}
	}
	if (!unk_0xF6A32456BABBBA74(Local_135.f_3))
	{
		return 0;
	}
	unk_0x8188DB74546FF484(func_250());
	return 1;
}

void func_232()
{
	func_233(Global_2494149.f_789, iLocal_1176);
}

void func_233(int iParam0, int iParam1)
{
	if (unk_0xF72C45DFDBF9121C(iParam1) > 0)
	{
		unk_0x01DF175C46BF059E(iParam1, 0);
		if (iParam0 == 0)
		{
		}
	}
}

int func_234(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12)
{
	int iVar0;
	
	if (!unk_0x66A05E630CEC173C(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0xBCDF9E3086B4229C(Param2, 1f, 0, 0, 1, 1, 1);
	}
	iVar0 = unk_0xDE8A46A23FDCBBFE(iParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0xC4BDEBE5421586E5(iVar0);
	if (unk_0xF6A32456BABBBA74(*uParam0))
	{
		unk_0x0BD3F78CDD5346A8(iVar0, iParam10);
		if (unk_0xDB6162AABEF41D01(iVar0))
		{
			if (bParam8)
			{
				unk_0x8D7D9565420EE4B0(*uParam0, 1);
			}
			else
			{
				unk_0x8D7D9565420EE4B0(*uParam0, 0);
			}
		}
		unk_0xC5D75F3BE926D48A(iVar0, iParam9);
		unk_0xB2E0C0D6922D31F2(iVar0, true);
		if (bParam12)
		{
			unk_0xDE6C40B8B4A86A0A(iVar0);
			unk_0x12C2DF66EA2F61B3(iVar0, 5, 5, 1f);
		}
		return 1;
	}
	return 0;
}

int func_235(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2404994.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x9B85F36406C920C4(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x4FC351BF8E970FDA(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x4FC351BF8E970FDA(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x8341BF4B03057509(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2404994.f_2++;
	if (bParam13)
	{
		if (unk_0x844703FC62D7378B(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404994.f_2++;
	if (fParam14 > 0f)
	{
		if (func_240(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404994.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_236(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404994.f_2++;
	return 1;
}

int func_236(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_130(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
		{
			if (!unk_0x7E3640C27B17457C())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x8E92CDAEB8357ABD(func_166(unk_0xFB6B3EEFAB2DD12C()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0xBB36CABE30AE5FC4(Param0, fParam3))
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
		if (func_130(iVar1, 1, 1))
		{
			if (!func_238(iVar1, 0) && unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xFB6B3EEFAB2DD12C()))
				{
					if ((func_237(iVar1) || !bParam10) && !Global_2421621[iVar1 /*358*/].f_262)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x2A7336F1C6B39623(iVar1) == -1)
							{
								if (unk_0x2A7336F1C6B39623(iVar1) == unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x2A7336F1C6B39623(iVar1) != unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()))) || unk_0x2A7336F1C6B39623(iVar1) == -1)
							{
								if (unk_0x8E92CDAEB8357ABD(func_166(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x7E6D5A2E3BDED445(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x2A7336F1C6B39623(iVar1) != iParam8 || unk_0x2A7336F1C6B39623(iVar1) == -1)
						{
							if (unk_0x8E92CDAEB8357ABD(func_166(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x7E6D5A2E3BDED445(iVar1, Param0, fParam3))
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

int func_237(int iParam0)
{
	if (unk_0x9D404C556EC6ABF6(unk_0x4572B13EE70C8F52(iParam0)) || Global_2421621[iParam0 /*358*/].f_248)
	{
		return 1;
	}
	return 0;
}

bool func_238(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
	{
		bVar0 = func_239(-1, 0) == 8;
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

int func_239(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_9();
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

int func_240(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0xFB6B3EEFAB2DD12C() != iVar1) || iParam8 == 0)
		{
			if (func_130(iVar1, bParam4, bParam5))
			{
				if (unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iVar1))
				{
					if (!bParam7 || (!unk_0x00B5B0B68211D89B(unk_0x4572B13EE70C8F52(iVar1)) && func_237(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) != unk_0x2A7336F1C6B39623(iVar1))) || unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) == -1)
						{
							if (((unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) == -1 && uParam9) && bParam6) && func_241(iVar1))
							{
							}
							else if (unk_0x7887B64A08364778(unk_0x4572B13EE70C8F52(iVar1)))
							{
								if (unk_0x8E92CDAEB8357ABD(func_166(iVar1), Param0, 1) < fParam3)
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

int func_241(int iParam0)
{
	if (func_244(unk_0xFB6B3EEFAB2DD12C(), iParam0))
	{
		return 1;
	}
	Global_2482005 = { func_243(iParam0) };
	if (unk_0xBB38DDB2E1AE0498(&Global_2482005))
	{
		return 1;
	}
	if (func_242(unk_0xFB6B3EEFAB2DD12C(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_242(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_5(iParam0);
	if (!iVar0 == func_4())
	{
		if (iVar0 == func_5(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_243(int iParam0)
{
	struct<13> Var0;
	
	unk_0x81C63D2370ED33C5(iParam0, &Var0, 13);
	return Var0;
}

int func_244(int iParam0, int iParam1)
{
	if (unk_0x527DE7DC62A1D335())
	{
		Global_2482005 = { func_243(iParam0) };
		Global_2482018 = { func_243(iParam1) };
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

void func_245(var uParam0, var uParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	
	if (bParam2)
	{
		*uParam0 = { Local_135.f_6 };
		*uParam1 = Local_135.f_9;
		fVar0 = unk_0xD4B787C023B137CD(*uParam0, uParam0->f_1, *uParam0, uParam0->f_1);
		if (fVar0 < (Local_135.f_6.f_2 + 100f))
		{
			fVar0 = (Local_135.f_6.f_2 + 100f);
		}
		uParam0->f_2 = fVar0;
	}
	else
	{
		*uParam0 = { func_246(Local_135.f_6, 140f, 180f, (200f / 2f)) };
		*uParam1 = unk_0x1467106C5D2966B9((Local_135.f_6 - *uParam0), (Local_135.f_6.f_1 - uParam0->f_1));
		fVar1 = unk_0xD4B787C023B137CD((*uParam0 - 180f), (uParam0->f_1 - 180f), (*uParam0 + 180f), (uParam0->f_1 + 180f));
		if (fVar1 < (Local_135.f_6.f_2 + 100f))
		{
			fVar1 = (Local_135.f_6.f_2 + 100f);
		}
		uParam0->f_2 = fVar1;
	}
}

Vector3 func_246(struct<3> Param0, float fParam3, float fParam4, float fParam5)
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { unk_0xB5FEA1F26F05B9F5(-1f, 1f), unk_0xB5FEA1F26F05B9F5(-1f, 1f), 0f };
	fVar3 = (fParam5 / 2f);
	Var0 = { func_247(Var0, unk_0xB5FEA1F26F05B9F5(fParam3, fParam4)) };
	Var0.f_2 = unk_0xB5FEA1F26F05B9F5(-fVar3, fVar3);
	return Param0 + Var0;
}

Vector3 func_247(struct<3> Param0, float fParam3)
{
	float fVar0;
	
	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		return Param0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

int func_248()
{
	if (func_259())
	{
		return joaat("mp_f_helistaff_01");
	}
	return joaat("s_m_y_pilot_01");
}

int func_249(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x4ACD1E4CBA159ED1(iParam0);
	return unk_0x7AD0E9452821C95D(iParam0);
}

int func_250()
{
	if (func_259())
	{
		return joaat("supervolito");
	}
	return joaat("maverick");
}

void func_251()
{
	if (unk_0x6901135DDCC4904D(uLocal_266))
	{
		if (func_254(iLocal_1176, uLocal_266, 1))
		{
			unk_0x2EDAF851B28036F0(uLocal_266, "HTX_BLIP");
			iLocal_267 = 1;
			func_252(&uLocal_266, iLocal_267);
		}
	}
}

void func_252(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0x6901135DDCC4904D(*uParam0))
	{
		uVar0 = func_253(iParam1);
		unk_0x4F095059F1C175D5(*uParam0, uVar0);
	}
}

int func_253(int iParam0)
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

int func_254(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x9DE1E8EC06D38FE1(uParam1);
	if (func_258(iParam0, bParam2))
	{
		if (!iVar0 == func_257(iVar0))
		{
			unk_0xD6507DB77BCBD904(uParam1, func_257(iVar0));
			return 1;
		}
		else if (func_256() && iVar0 == func_257(iVar0))
		{
			return 1;
		}
	}
	else if (!iVar0 == func_255(iVar0))
	{
		unk_0xD6507DB77BCBD904(uParam1, func_255(iVar0));
		return 1;
	}
	else if (func_256() && iVar0 == func_255(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_255(int iParam0)
{
	switch (iParam0)
	{
		case 64:
			return 422;
			break;
		
		case 528:
			return 528;
			break;
		
		case 529:
			return 529;
			break;
		
		case 530:
			return 530;
			break;
		
		case 531:
			return 531;
			break;
		
		case 532:
			return 532;
			break;
		
		case 533:
			return 533;
			break;
		
		case 534:
			return 534;
			break;
		
		case 512:
			return 512;
			break;
	}
	return iParam0;
}

var func_256()
{
	return Global_2443089.f_12;
}

int func_257(int iParam0)
{
	switch (iParam0)
	{
		case 422:
			return 64;
			break;
		
		case 528:
			return 528;
			break;
		
		case 529:
			return 529;
			break;
		
		case 530:
			return 530;
			break;
		
		case 531:
			return 531;
			break;
		
		case 532:
			return 532;
			break;
		
		case 533:
			return 533;
			break;
		
		case 534:
			return 534;
			break;
		
		case 512:
			return 512;
			break;
	}
	return iParam0;
}

int func_258(int iParam0, bool bParam1)
{
	if (((!unk_0xB529B2A4B7C64D6D(iParam0, 0) && (!unk_0x7C4BC3264552091A(iParam0) && unk_0xE8112E973BED9DEF(iParam0))) && unk_0x652D2EEEF1D3E62C(unk_0x9C0A225C3A240597(iParam0)) < 0.5f) && func_134(iParam0, bParam1, bParam1, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_259()
{
	if (Global_2494149.f_789 > -1)
	{
		return 1;
	}
	return 0;
}

void func_260()
{
	if (bLocal_1158)
	{
		if (!iLocal_1159)
		{
			if (func_191(iLocal_1176))
			{
				unk_0x490BF4D8A55D8ECA(iLocal_1176, 0, 0, 0, 1, 0, 0, 0, 0);
				iLocal_1159 = 1;
			}
		}
	}
	else if (iLocal_1159)
	{
		if (func_191(iLocal_1176))
		{
			unk_0x490BF4D8A55D8ECA(iLocal_1176, 0, 0, 0, 0, 0, 0, 0, 0);
			iLocal_1159 = 0;
		}
	}
}

int func_261(var uParam0)
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

void func_262(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x04DE35D10A718EEF())
		{
			func_110(uParam0, 0, 0);
		}
	}
}

void func_263()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (Local_135.f_23 == 6)
	{
		Local_168[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 = 6;
	}
	iVar0 = 0;
	bVar1 = false;
	iLocal_104 = 0;
	switch (Local_168[unk_0x1E7FB1CA38C403F6() /*3*/].f_2)
	{
		case 0:
			if (Local_135.f_23 > 0)
			{
				Local_168[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (!func_137(iLocal_1176))
			{
				func_397();
				func_379();
				func_378();
				if (func_130(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
				{
					if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_1176, 0))
					{
						unk_0x33E4179F57B9F232(0);
						func_377();
						unk_0x9A786A618DB6198F(unk_0xD5A676B97920D126(), joaat("gadget_parachute"), 1, 0);
						unk_0xB3440023FF3AA0E0();
						Local_168[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 = 2;
						unk_0x4EA098C870B73AB7(&(Local_168[unk_0x1E7FB1CA38C403F6() /*3*/].f_1), 0);
					}
				}
			}
			break;
		
		case 2:
			if (!func_137(iLocal_1176))
			{
				if (func_130(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
				{
					if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_1176, 0))
					{
						func_376();
						func_375();
						unk_0xB3440023FF3AA0E0();
						if (unk_0x04DE35D10A718EEF() && func_374(1, 1))
						{
							if (unk_0xF9886D14CA8B2197())
							{
								if (unk_0xDC1EFAABB6EF8F7F(0))
								{
									if (unk_0x3CEEA45E4779F6BD(0, 21))
									{
										iVar0 = 1;
									}
								}
								else if (unk_0x3CEEA45E4779F6BD(2, 201))
								{
									iVar0 = 1;
								}
								if (iVar0 || unk_0xF44A5E894FE76438(Local_135.f_1, 12))
								{
									unk_0x4EA098C870B73AB7(&(Local_135.f_1), 12);
									unk_0x4EA098C870B73AB7(&(Local_135.f_2), 4);
									Local_168[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 = 3;
									unk_0x4EA098C870B73AB7(&(Local_168[unk_0x1E7FB1CA38C403F6() /*3*/].f_1), 5);
									unk_0xB8A73E7DA87B2968(&(Local_168[unk_0x1E7FB1CA38C403F6() /*3*/].f_1), 6);
								}
							}
							if (unk_0xF44A5E894FE76438(iLocal_1177, 7) && iLocal_99 == 0)
							{
								if (unk_0xDC1EFAABB6EF8F7F(0))
								{
									if (unk_0x3CEEA45E4779F6BD(0, 101))
									{
										iLocal_104 = 1;
									}
								}
								else if (unk_0x3CEEA45E4779F6BD(2, 209))
								{
									iLocal_104 = 1;
								}
							}
						}
						if (Local_135.f_23 >= 5)
						{
							Local_168[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 = 5;
						}
						if (Local_135.f_23 == 4)
						{
							Local_168[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 = 4;
						}
					}
					else
					{
						Local_168[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 = 1;
					}
				}
			}
			break;
		
		case 3:
			if (!func_137(iLocal_1176))
			{
				if (func_130(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
				{
					if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_1176, 0))
					{
						func_376();
						unk_0xB3440023FF3AA0E0();
						if ((unk_0x04DE35D10A718EEF() && func_374(1, 1)) && unk_0x1774A68441553185(unk_0xD5A676B97920D126(), 1785177548) != 1)
						{
							if (unk_0xDC1EFAABB6EF8F7F(0))
							{
								if (unk_0x3CEEA45E4779F6BD(0, 36))
								{
									bVar1 = true;
								}
							}
							else if (unk_0x3CEEA45E4779F6BD(2, 202))
							{
								bVar1 = true;
							}
							if (bVar1)
							{
								Local_168[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 = 2;
								unk_0xB8A73E7DA87B2968(&(Local_168[unk_0x1E7FB1CA38C403F6() /*3*/].f_1), 5);
							}
							if (unk_0xDC1EFAABB6EF8F7F(0))
							{
								if (unk_0x3CEEA45E4779F6BD(0, 101))
								{
									iLocal_104 = 1;
								}
							}
							else if (unk_0x3CEEA45E4779F6BD(2, 209))
							{
								iLocal_104 = 1;
							}
						}
						if (Local_135.f_23 >= 5)
						{
							Local_168[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 = 5;
						}
						else if (Local_135.f_23 == 2)
						{
							unk_0x4EA098C870B73AB7(&(Local_135.f_1), 9);
							Local_168[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 = 2;
						}
						else if (Local_135.f_23 == 4)
						{
							Local_168[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 = 4;
						}
					}
					else
					{
						Local_168[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 = 1;
					}
				}
			}
			break;
		
		case 4:
			if ((((((func_373("POD_CHAM_CIGAR") || func_373("POD_CHAM_WEB")) || func_373("POD_UNKNOWN")) || func_373("POD_CIGAR")) || func_373("POD_WEB")) || func_373("LUX_VEH_ACT_1ST")) || func_373("LUX_ACT_1ST_SW"))
			{
				unk_0x04890EB0282525A5(1);
			}
			if (unk_0xF44A5E894FE76438(Local_168[unk_0x1E7FB1CA38C403F6() /*3*/].f_1, 8))
			{
				unk_0x4EA098C870B73AB7(&(Local_168[unk_0x1E7FB1CA38C403F6() /*3*/].f_1), 8);
			}
			if (!func_144())
			{
				if (!unk_0xF44A5E894FE76438(Local_135.f_2, 17))
				{
					if (func_197())
					{
						func_11(1);
						func_108(&uLocal_967, 2, unk_0x9E9133ACB2BCC1D5(Local_135.f_4), "EXEC_PILOT", 0, 1);
						if (iLocal_107 == -1)
						{
							func_91(&uLocal_967, "EXHELAU", "EXHEL_OFFICE", 12, 0, 0, 1);
						}
						else
						{
							func_91(&uLocal_967, "EXHELAU", "EXHEL_CUSTOM", 12, 0, 0, 1);
						}
						unk_0xB8A73E7DA87B2968(&(Local_135.f_2), 17);
					}
				}
			}
			if ((Local_135.f_28 == unk_0xFB6B3EEFAB2DD12C() && func_372()) && Local_135.f_27)
			{
				if (!unk_0xF44A5E894FE76438(iLocal_265, 16))
				{
					if (!func_137(iLocal_1176))
					{
						if (func_130(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
						{
							if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_1176, 0))
							{
								if (!func_371())
								{
									if (unk_0xF44A5E894FE76438(Local_135.f_1, 15))
									{
										iVar2 = func_370(1);
										if (iVar2 > 0)
										{
											if (iLocal_107 == -1)
											{
												func_369(iVar2, unk_0xFB6B3EEFAB2DD12C(), 0, Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257[5]);
											}
											else
											{
												func_369(iVar2, unk_0xFB6B3EEFAB2DD12C(), 1, iLocal_107);
											}
											unk_0xB8A73E7DA87B2968(&iLocal_265, 16);
										}
									}
								}
							}
						}
					}
				}
			}
			else if (!unk_0x04DE35D10A718EEF())
			{
				func_412(0);
			}
			if (Local_135.f_23 == 2)
			{
				Local_168[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 = 2;
				if (unk_0xF44A5E894FE76438(Local_168[unk_0x1E7FB1CA38C403F6() /*3*/].f_1, 8))
				{
					unk_0x4EA098C870B73AB7(&(Local_168[unk_0x1E7FB1CA38C403F6() /*3*/].f_1), 8);
				}
			}
			break;
		
		case 5:
			if (!func_137(iLocal_1176))
			{
				if (func_130(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
				{
					func_367();
					func_375();
					unk_0xB3440023FF3AA0E0();
					if (Local_135.f_23 == 2)
					{
						unk_0x4EA098C870B73AB7(&(Local_135.f_1), 9);
						Local_168[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 = 2;
					}
				}
			}
			break;
		
		case 6:
			func_412(1);
			break;
	}
	if (((Local_168[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 != 4 && iLocal_105) && unk_0x04DE35D10A718EEF()) && func_363())
	{
		if (iLocal_107 > -2)
		{
		}
		if (!unk_0x4A478FA962FF575A(iLocal_1176))
		{
			unk_0xF78A199036560454(iLocal_1176);
		}
		unk_0xB8A73E7DA87B2968(&iLocal_265, 15);
		func_362();
		Local_168[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 = 4;
		unk_0x4EA098C870B73AB7(&(Local_168[unk_0x1E7FB1CA38C403F6() /*3*/].f_1), 5);
		unk_0x4EA098C870B73AB7(&(Local_168[unk_0x1E7FB1CA38C403F6() /*3*/].f_1), 6);
		unk_0xB8A73E7DA87B2968(&(Local_168[unk_0x1E7FB1CA38C403F6() /*3*/].f_1), 8);
		iLocal_105 = 0;
	}
	else if (unk_0xF44A5E894FE76438(iLocal_1177, 7))
	{
		unk_0x4EA098C870B73AB7(&iLocal_1177, 7);
	}
	func_287();
	func_264();
}

void func_264()
{
	int iVar0;
	int iVar1;
	struct<9> Var2;
	
	iVar1 = 1;
	if (func_130(unk_0xFB6B3EEFAB2DD12C(), 1, 1) && !func_137(iLocal_1176))
	{
		if (unk_0xE4133A0C3C6C74A7(unk_0xD5A676B97920D126(), iLocal_1176) && !func_286(unk_0xD5A676B97920D126(), iLocal_1176, -1))
		{
			unk_0x7FE30C99EA3439F7(7);
			unk_0x7FE30C99EA3439F7(9);
			unk_0x7FE30C99EA3439F7(6);
			unk_0x7FE30C99EA3439F7(8);
			unk_0x2A29D86854DC4BC0(0, 80, 1);
		}
		if (unk_0x52622CA85B1C304B(uLocal_273))
		{
			if (func_285() || func_129(0))
			{
				if (!unk_0xF44A5E894FE76438(iLocal_265, 11))
				{
					unk_0xB8A73E7DA87B2968(&iLocal_265, 11);
				}
			}
			else if (unk_0xF44A5E894FE76438(iLocal_265, 11))
			{
				iLocal_1178 = 0;
				unk_0x4EA098C870B73AB7(&iLocal_265, 11);
			}
			if (func_374(1, 1))
			{
				if ((((Local_168[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 == 1 && unk_0xF44A5E894FE76438(iLocal_265, 2)) || Local_168[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 == 2) || Local_168[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 == 3) || Local_168[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 == 5)
				{
					iLocal_1177 = 0;
					Var2 = { func_284() };
					if (Local_168[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 == 1)
					{
						if ((!func_193() && !unk_0xF44A5E894FE76438(Local_168[unk_0x1E7FB1CA38C403F6() /*3*/].f_1, 0)) && !unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
						{
							unk_0xB8A73E7DA87B2968(&iLocal_1177, 0);
						}
						else
						{
							iVar1 = 0;
						}
					}
					else if (Local_168[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 == 2)
					{
						if (unk_0x04DE35D10A718EEF())
						{
							if (unk_0xF9886D14CA8B2197())
							{
								unk_0xB8A73E7DA87B2968(&iLocal_1177, 1);
							}
							else
							{
								unk_0xB8A73E7DA87B2968(&iLocal_1177, 2);
							}
							if (func_363())
							{
								unk_0xB8A73E7DA87B2968(&iLocal_1177, 7);
							}
						}
						if (unk_0x8E18E47D6CD6AB43(iLocal_1176) < 10f)
						{
							unk_0xB8A73E7DA87B2968(&iLocal_1177, 3);
						}
						else if (unk_0x1774A68441553185(unk_0xD5A676B97920D126(), -275944640) != 1 && unk_0x1774A68441553185(unk_0xD5A676B97920D126(), -275944640) != 0)
						{
							unk_0xB8A73E7DA87B2968(&iLocal_1177, 4);
							if (unk_0x98BE504E8B389665(iLocal_1176, 0, 0) != unk_0xD5A676B97920D126() && unk_0x8E18E47D6CD6AB43(iLocal_1176) < 40f)
							{
								if (func_283())
								{
									unk_0xB8A73E7DA87B2968(&iLocal_1177, 5);
									iVar0 = 1;
								}
							}
						}
						else
						{
							iVar1 = 0;
						}
					}
					else if (Local_168[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 == 3)
					{
						if (unk_0x04DE35D10A718EEF())
						{
							unk_0xB8A73E7DA87B2968(&iLocal_1177, 6);
							if (func_363())
							{
								unk_0xB8A73E7DA87B2968(&iLocal_1177, 7);
							}
						}
						unk_0xB8A73E7DA87B2968(&iLocal_1177, 4);
					}
					else if (Local_168[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 == 5)
					{
						if (unk_0x8E18E47D6CD6AB43(iLocal_1176) < 10f)
						{
							unk_0xB8A73E7DA87B2968(&iLocal_1177, 3);
						}
						else if (unk_0x1774A68441553185(unk_0xD5A676B97920D126(), -275944640) != 1 && unk_0x1774A68441553185(unk_0xD5A676B97920D126(), -275944640) != 0)
						{
							unk_0xB8A73E7DA87B2968(&iLocal_1177, 4);
							if (unk_0x98BE504E8B389665(iLocal_1176, 0, 0) != unk_0xD5A676B97920D126() && unk_0x8E18E47D6CD6AB43(iLocal_1176) < 40f)
							{
								if (func_283())
								{
									unk_0xB8A73E7DA87B2968(&iLocal_1177, 5);
									iVar0 = 1;
								}
							}
						}
						else
						{
							iVar1 = 0;
						}
					}
					else
					{
						iVar1 = 0;
					}
					if (func_282())
					{
						iVar1 = 0;
					}
					if (iVar1 == 1)
					{
						func_281();
						func_280(1);
						func_278(1);
						if (unk_0x1774A68441553185(unk_0xD5A676B97920D126(), 1785177548) != 1)
						{
							if ((iLocal_1177 != iLocal_1178 || unk_0x02F62AA408F2D854(2)) || Global_55807)
							{
								Global_55807 = 0;
								func_276(&uLocal_274);
								if (unk_0xF44A5E894FE76438(iLocal_1177, 0))
								{
									func_275(unk_0xE78ECEC3BC74DC0C(0, 23, 1), "HTX_ENTER", &uLocal_274, 0);
								}
								if (unk_0xF44A5E894FE76438(iLocal_1177, 1))
								{
									if (unk_0xDC1EFAABB6EF8F7F(0))
									{
										func_275(unk_0xE78ECEC3BC74DC0C(0, 21, 1), "HTX_START", &uLocal_274, 0);
									}
									else
									{
										func_275(unk_0xE78ECEC3BC74DC0C(2, 201, 1), "HTX_START", &uLocal_274, 0);
									}
								}
								if (unk_0xF44A5E894FE76438(iLocal_1177, 2))
								{
									func_275(unk_0xE78ECEC3BC74DC0C(2, 199, 1), "HTX_WAYP", &uLocal_274, 0);
								}
								if (unk_0xF44A5E894FE76438(iLocal_1177, 3))
								{
									func_275(unk_0xE78ECEC3BC74DC0C(0, 75, 1), "HTX_EXIT1", &uLocal_274, 0);
								}
								if (unk_0xF44A5E894FE76438(iLocal_1177, 4))
								{
									func_275(unk_0xE78ECEC3BC74DC0C(0, 75, 1), "HTX_EXIT2", &uLocal_274, 0);
								}
								if (unk_0xF44A5E894FE76438(iLocal_1177, 5))
								{
									if (unk_0xDC1EFAABB6EF8F7F(0))
									{
										func_275(unk_0xE78ECEC3BC74DC0C(0, 22, 1), "HTX_EXIT3", &uLocal_274, 0);
									}
									else
									{
										func_275(unk_0xE78ECEC3BC74DC0C(0, 99, 1), "HTX_EXIT3", &uLocal_274, 0);
									}
								}
								if (unk_0xF44A5E894FE76438(iLocal_1177, 6))
								{
									if (unk_0xDC1EFAABB6EF8F7F(0))
									{
										func_275(unk_0xE78ECEC3BC74DC0C(0, 36, 1), "HTX_STOP", &uLocal_274, 0);
									}
									else
									{
										func_275(unk_0xE78ECEC3BC74DC0C(2, 202, 1), "HTX_STOP", &uLocal_274, 0);
									}
								}
								if (unk_0xF44A5E894FE76438(iLocal_1177, 7))
								{
									if (func_274() || func_272(unk_0xFB6B3EEFAB2DD12C()))
									{
										if (unk_0xDC1EFAABB6EF8F7F(0))
										{
											func_275(unk_0xE78ECEC3BC74DC0C(2, 101, 1), "HTX_QT_WARP", &uLocal_274, 0);
										}
										else
										{
											func_275(unk_0xE78ECEC3BC74DC0C(2, 209, 1), "HTX_QT_WARP", &uLocal_274, 0);
										}
									}
									else if (unk_0xDC1EFAABB6EF8F7F(0))
									{
										func_275(unk_0xE78ECEC3BC74DC0C(2, 101, 1), "HTX_OFF_WARP", &uLocal_274, 0);
									}
									else
									{
										func_275(unk_0xE78ECEC3BC74DC0C(2, 209, 1), "HTX_OFF_WARP", &uLocal_274, 0);
									}
								}
							}
							func_265(&uLocal_273, &Var2, &uLocal_274, func_271(&uLocal_274));
							iLocal_1178 = iLocal_1177;
						}
					}
				}
			}
		}
		else
		{
			uLocal_273 = unk_0x542F16A736FAC9A6("instructional_buttons");
		}
		if (iVar0 == 1)
		{
			unk_0x2A29D86854DC4BC0(0, 99, 1);
			unk_0x2A29D86854DC4BC0(0, 100, 1);
		}
	}
	Global_2494149.f_255 = iVar1;
}

void func_265(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	
	if (iParam3 == 1 || unk_0x02F62AA408F2D854(2))
	{
		*uParam2 = 0;
		if (unk_0x52622CA85B1C304B(*uParam0))
		{
			if (unk_0x2D337DD29A7ABD30())
			{
				unk_0x3B6EF6403E3F1CAC(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x2C310F11D2096992(0);
				unk_0xBBAAC5B2437ACF2A();
			}
			unk_0x3B6EF6403E3F1CAC(*uParam0, "CLEAR_ALL");
			unk_0xBBAAC5B2437ACF2A();
		}
		func_270(uParam2);
	}
	if (Global_1318067 < 2)
	{
		func_269(1);
	}
	if (*uParam2 == 0)
	{
		if (!unk_0x52622CA85B1C304B(*uParam0))
		{
			*uParam0 = unk_0x542F16A736FAC9A6("instructional_buttons");
		}
		if (unk_0x52622CA85B1C304B(*uParam0))
		{
			unk_0x0D251BD4049F77DE(*uParam0, "CLEAR_ALL");
			if (unk_0x2D337DD29A7ABD30())
			{
				unk_0x3B6EF6403E3F1CAC(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x2C310F11D2096992(1);
				unk_0xBBAAC5B2437ACF2A();
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < uParam2->f_680)
			{
				if (unk_0xF44A5E894FE76438(uParam2->f_676, iVar0))
				{
					unk_0x3B6EF6403E3F1CAC(*uParam0, "SET_DATA_SLOT");
					unk_0x1B215CC37BF52E79(iVar0);
					if (!unk_0xF44A5E894FE76438(uParam2->f_677, iVar0))
					{
						iVar1 = uParam2->f_1[iVar0 /*56*/].f_53;
						iVar2 = uParam2->f_1[iVar0 /*56*/].f_54;
						iVar3 = uParam2->f_1[iVar0 /*56*/].f_55;
						func_268(unk_0xE78ECEC3BC74DC0C(iVar1, iVar2, 1));
						if (iVar3 < 353)
						{
							func_268(unk_0xE78ECEC3BC74DC0C(iVar1, iVar3, 1));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[iVar0 /*56*/].f_53;
						uVar5 = uParam2->f_1[iVar0 /*56*/].f_54;
						func_268(unk_0x02B7665B289F7C66(iVar4, uVar5, 1));
					}
					if (unk_0xF44A5E894FE76438(uParam2->f_674, iVar0))
					{
						unk_0x0BBDB952BE56A9DF(&(uParam2->f_1[iVar0 /*56*/].f_32));
						if (uParam2->f_681 == iVar0)
						{
							unk_0x3672BC158A73A76A(uParam2->f_1[iVar0 /*56*/].f_36, 70);
						}
						else
						{
							unk_0xF99222307D7150A9(uParam2->f_1[iVar0 /*56*/].f_36);
						}
						unk_0xCB329F559FA7DCD0();
					}
					else if (unk_0xF44A5E894FE76438(uParam2->f_675, iVar0))
					{
						unk_0x0BBDB952BE56A9DF(&(uParam2->f_1[iVar0 /*56*/].f_32));
						unk_0x4C51E4FBCD1D8830(&(uParam2->f_1[iVar0 /*56*/].f_37));
						unk_0xCB329F559FA7DCD0();
					}
					else
					{
						func_31(&(uParam2->f_1[iVar0 /*56*/].f_32));
					}
					if (unk_0x2D337DD29A7ABD30())
					{
						if (unk_0xF44A5E894FE76438(uParam2->f_678, iVar0))
						{
							unk_0x2C310F11D2096992(1);
							unk_0x1B215CC37BF52E79(uParam2->f_1[iVar0 /*56*/].f_54);
						}
						else
						{
							unk_0x2C310F11D2096992(0);
							unk_0x1B215CC37BF52E79(353);
						}
					}
					unk_0xBBAAC5B2437ACF2A();
				}
				else
				{
					unk_0x3B6EF6403E3F1CAC(*uParam0, "SET_DATA_SLOT");
					unk_0x1B215CC37BF52E79(iVar0);
					func_268(&(uParam2->f_1[iVar0 /*56*/]));
					if (!unk_0xC55B9553B3EDADE9(&(uParam2->f_1[iVar0 /*56*/].f_16)))
					{
						func_268(&(uParam2->f_1[iVar0 /*56*/].f_16));
					}
					if (unk_0xF44A5E894FE76438(uParam2->f_674, iVar0))
					{
						unk_0x0BBDB952BE56A9DF(&(uParam2->f_1[iVar0 /*56*/].f_32));
						if (uParam2->f_681 == iVar0)
						{
							unk_0x3672BC158A73A76A(uParam2->f_1[iVar0 /*56*/].f_36, 70);
						}
						else
						{
							unk_0xF99222307D7150A9(uParam2->f_1[iVar0 /*56*/].f_36);
						}
						unk_0xCB329F559FA7DCD0();
					}
					else if (unk_0xF44A5E894FE76438(uParam2->f_675, iVar0))
					{
						unk_0x0BBDB952BE56A9DF(&(uParam2->f_1[iVar0 /*56*/].f_32));
						unk_0x4C51E4FBCD1D8830(&(uParam2->f_1[iVar0 /*56*/].f_37));
						unk_0xCB329F559FA7DCD0();
					}
					else
					{
						func_31(&(uParam2->f_1[iVar0 /*56*/].f_32));
					}
					if (unk_0x2D337DD29A7ABD30())
					{
						unk_0x2C310F11D2096992(0);
						unk_0x1B215CC37BF52E79(353);
					}
					unk_0xBBAAC5B2437ACF2A();
				}
				iVar0++;
			}
			unk_0x3B6EF6403E3F1CAC(*uParam0, "SET_MAX_WIDTH");
			unk_0x573CAEB6F4A4E750(uParam2->f_686);
			unk_0xBBAAC5B2437ACF2A();
			unk_0x3B6EF6403E3F1CAC(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x1B215CC37BF52E79(0);
			unk_0xBBAAC5B2437ACF2A();
			*uParam2 = 1;
		}
	}
	uParam2->f_682 = 0.05f;
	uParam2->f_683 = 0.045f;
	uParam2->f_684 = 0f;
	uParam2->f_685 = 0f;
	if (*uParam2 == 1)
	{
		func_267(*uParam0, uParam1);
	}
	func_266();
}

void func_266()
{
	unk_0x7FE30C99EA3439F7(7);
	unk_0x7FE30C99EA3439F7(6);
	unk_0x7FE30C99EA3439F7(8);
	unk_0x7FE30C99EA3439F7(9);
}

void func_267(var uParam0, var uParam1)
{
	unk_0x131F832AD6923854(uParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_268(char* sParam0)
{
	unk_0xDC0269D08B29626C(sParam0);
}

void func_269(int iParam0)
{
	Global_1318067 = iParam0;
}

void func_270(var uParam0)
{
	uParam0->f_679 = 0;
}

int func_271(var uParam0)
{
	return uParam0->f_679;
}

bool func_272(int iParam0)
{
	return func_273(iParam0) != 0;
}

int func_273(int iParam0)
{
	if (iParam0 == func_4())
	{
		return 0;
	}
	return Global_1589933[iParam0 /*601*/].f_257.f_103;
}

int func_274()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_80[iVar0 /*3*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_275(char* sParam0, char* sParam1, var uParam2, char* sParam3)
{
	int iVar0;
	
	if (uParam2->f_680 >= 12)
	{
		return;
	}
	iVar0 = uParam2->f_680;
	StringCopy(&(uParam2->f_1[iVar0 /*56*/]), sParam0, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*56*/].f_16), sParam3, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*56*/].f_32), sParam1, 16);
	uParam2->f_680++;
}

void func_276(var uParam0)
{
	func_277(uParam0);
	uParam0->f_679 = 1;
}

void func_277(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*56*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*56*/].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*56*/].f_32), "", 16);
		uParam0->f_1[iVar0 /*56*/].f_36 = 0;
		StringCopy(&(uParam0->f_1[iVar0 /*56*/].f_37), "", 64);
		uParam0->f_1[iVar0 /*56*/].f_53 = 2;
		uParam0->f_1[iVar0 /*56*/].f_54 = 353;
		uParam0->f_1[iVar0 /*56*/].f_55 = 353;
		iVar0++;
	}
	uParam0->f_674 = 0;
	uParam0->f_675 = 0;
	uParam0->f_676 = 0;
	uParam0->f_678 = 0;
	uParam0->f_677 = 0;
	uParam0->f_679 = 0;
	uParam0->f_680 = 0;
	uParam0->f_682 = 0f;
	uParam0->f_683 = 0f;
	uParam0->f_684 = 0f;
	uParam0->f_685 = 0f;
	uParam0->f_686 = 1f;
}

void func_278(bool bParam0)
{
	if (bParam0)
	{
		if (func_279())
		{
			Global_2443089.f_27 = 1;
		}
	}
	else
	{
		Global_2443089.f_27 = 0;
	}
}

bool func_279()
{
	return unk_0xF44A5E894FE76438(Global_2443089.f_2, 11);
}

void func_280(int iParam0)
{
	Global_1354290.f_932 = iParam0;
}

void func_281()
{
	Global_2503486.f_258 = 1;
}

int func_282()
{
	if (iLocal_99 > 0 || iLocal_105 == 1)
	{
		return 1;
	}
	return 0;
}

int func_283()
{
	if (unk_0x6503A79548964E4E(iLocal_1176) && !func_259())
	{
		return 1;
	}
	return 0;
}

struct<9> func_284()
{
	struct<9> Var0;
	
	Var0.f_0 = 0.5f;
	Var0.f_1 = 0.5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

bool func_285()
{
	return unk_0x84A97C70FFDEC0C8() <= Global_17290.f_5745 + 100;
}

int func_286(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0xB529B2A4B7C64D6D(iParam0, 0) && !unk_0xB529B2A4B7C64D6D(iParam1, 0))
	{
		if (unk_0xE4133A0C3C6C74A7(iParam0, iParam1))
		{
			if (unk_0x98BE504E8B389665(iParam1, iParam2, 0) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_287()
{
	if (iLocal_99 == 0)
	{
		if (iLocal_104)
		{
			if (func_274() || func_272(unk_0xFB6B3EEFAB2DD12C()))
			{
				iLocal_103 = 1;
				iLocal_99 = 1;
			}
			else
			{
				iLocal_105 = 1;
				iLocal_107 = -1;
				iLocal_106 = 1;
			}
		}
	}
	if (iLocal_99 == 1)
	{
		if (func_363())
		{
			func_291();
		}
		else
		{
			iLocal_106 = 1;
		}
	}
	if (iLocal_106)
	{
		func_288(1, -1);
		iLocal_99 = 0;
		iLocal_101 = 0;
		iLocal_106 = 0;
		iLocal_104 = 0;
	}
}

void func_288(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_290(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17290.f_7894)
	{
		unk_0x252BF044E85EB455(15);
		Global_17290.f_7894 = 0;
	}
	unk_0x2B153364D0958759(0f);
	if (Global_17290.f_5498[iVar0])
	{
		unk_0x16CE7E4DDB18D2F8(9, 0);
		Global_17290.f_5498[iVar0] = 0;
	}
	if (Global_17290.f_5484[iVar0])
	{
		unk_0x500F58A641B1CB9F("CommonMenu");
		Global_17290.f_5484[iVar0] = 0;
	}
	if (Global_17290.f_5491[iVar0])
	{
		unk_0x500F58A641B1CB9F("MPShopSale");
		Global_17290.f_5491[iVar0] = 0;
	}
	if (bParam0)
	{
		func_289(&(Global_17290.f_5530[iVar0 /*10*/]));
		Global_17290.f_5591[iVar0] = 0;
	}
	else
	{
		Global_17290.f_5591[iVar0] = 0;
	}
}

void func_289(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x52622CA85B1C304B(*uParam0))
		{
			unk_0x4292FC2ED4EC4212(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_290(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0x1995B52453EF6537() && unk_0x5C565D8FF913FF0D())
		{
			iParam2 = unk_0xA4DD5D3334BAA91C();
		}
	}
	StringCopy(&cVar0, unk_0x0FBCE11007AF301F(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x6D9FF4C899CD785F(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17290.f_5591[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17290.f_5591[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17290.f_5591[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_291()
{
	int iVar0;
	
	func_352(&Local_125);
	if (func_350(0, -1, 0))
	{
		if (iLocal_103)
		{
			func_335();
			iLocal_103 = 0;
		}
		else
		{
			func_334(iLocal_101, 1, 1);
		}
		func_332();
		func_330();
		func_303(1, -1, 1, 0, 1, -1082130432, 0, 0);
		if (!bLocal_114)
		{
			if (func_302())
			{
				iLocal_103 = 1;
			}
		}
		else if (!func_302())
		{
			iLocal_103 = 1;
		}
		if (!bLocal_115)
		{
			if (func_297())
			{
				iLocal_103 = 1;
			}
		}
		else if (!func_297())
		{
			iLocal_103 = 1;
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (!uLocal_117[iVar0])
			{
				if (func_296(iLocal_108[iVar0]))
				{
					iLocal_103 = 1;
				}
			}
			else if (!func_296(iLocal_108[iVar0]))
			{
				iLocal_103 = 1;
			}
			iVar0++;
		}
		if (!bLocal_116)
		{
			if (func_292())
			{
				iLocal_103 = 1;
			}
		}
		else if (!func_292())
		{
			iLocal_103 = 1;
		}
	}
}

int func_292()
{
	if (func_272(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (unk_0x2A488C176D52CCA5(func_166(unk_0xFB6B3EEFAB2DD12C()), Global_1760739.f_20[func_293(func_273(unk_0xFB6B3EEFAB2DD12C())) /*3*/]) > 100f)
		{
			return 1;
		}
	}
	return 0;
}

int func_293(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 67)
	{
		if (func_295(iVar0) == 1)
		{
			if (func_294(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_294(int iParam0)
{
	switch (iParam0)
	{
		case 57:
			return 1;
		
		case 58:
			return 2;
		
		case 59:
			return 3;
		
		case 60:
			return 4;
		
		case 61:
			return 5;
		
		case 62:
			return 6;
		
		case 63:
			return 7;
		
		case 64:
			return 8;
		
		case 65:
			return 9;
		
		case 66:
			return 10;
		
		default:
	}
	return 0;
}

int func_295(int iParam0)
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

int func_296(int iParam0)
{
	if (iParam0 > 0)
	{
		if (unk_0x2A488C176D52CCA5(func_166(unk_0xFB6B3EEFAB2DD12C()), func_171(iParam0)) > 100f)
		{
			return 1;
		}
	}
	return 0;
}

int func_297()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = iLocal_1176;
	if (unk_0xB529B2A4B7C64D6D(iVar0, 0))
	{
		return 0;
	}
	iVar1 = unk_0xB84CC33D90EA2EDD(unk_0xA0A4DA31DEDFAC4F(iVar0));
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar5 = (iVar2 - 1);
		if (!unk_0x06F2E112EBC0C4FB(iVar0, iVar5, 0))
		{
			iVar4 = unk_0x98BE504E8B389665(iVar0, iVar5, 0);
			if (!unk_0xB529B2A4B7C64D6D(iVar4, 0) && unk_0xBEC34BF6B72C417A(iVar4))
			{
				if (!func_300())
				{
					iVar3 = unk_0x61263E0F7C8C9996(iVar4);
					if (iVar3 != unk_0xFB6B3EEFAB2DD12C())
					{
						return 0;
					}
				}
				else
				{
					iVar3 = unk_0x61263E0F7C8C9996(iVar4);
					if (iVar3 != func_4() && func_130(iVar3, 1, 1))
					{
						if (!func_298(iVar3, func_5(unk_0xFB6B3EEFAB2DD12C()), 1))
						{
							return 0;
						}
					}
				}
			}
		}
		iVar2++;
	}
	if (iLocal_123)
	{
		if (!func_371())
		{
			iLocal_123 = 0;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_298(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_4())
	{
		if (!bParam2)
		{
			if (func_299(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1618089[iParam0 /*390*/].f_11 != func_4())
		{
			return iParam1 == Global_1618089[iParam0 /*390*/].f_11;
		}
	}
	return 0;
}

int func_299(int iParam0, int iParam1)
{
	if (iParam1 != func_4())
	{
		if (iParam0 != func_4())
		{
			if (Global_1618089[iParam0 /*390*/].f_11 != func_4())
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

bool func_300()
{
	return func_301(unk_0xFB6B3EEFAB2DD12C());
}

int func_301(int iParam0)
{
	if (iParam0 != func_4())
	{
		if (Global_1618089[iParam0 /*390*/].f_11 != func_4())
		{
			return Global_1618089[iParam0 /*390*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_302()
{
	if (unk_0x2A488C176D52CCA5(func_166(unk_0xFB6B3EEFAB2DD12C()), func_183(func_185(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257[5]))) > 200f)
	{
		return 1;
	}
	return 0;
}

void func_303(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	int iVar0;
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
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	bool bVar31;
	bool bVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	bool bVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	int iVar53;
	bool bVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	int iVar59;
	int iVar60;
	float fVar61;
	float fVar62;
	float fVar63;
	char cVar64[64];
	char cVar80[64];
	float fVar96;
	int iVar97;
	float fVar98;
	float fVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	
	if (!func_290(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_328(0, bParam6))
	{
		return;
	}
	unk_0x8C8A1913314B5A90(76, 84);
	unk_0x296FDBBCECD446ED(-0.05f, -0.05f, 0f, 0f);
	fVar56 = 0f;
	fVar57 = 0f;
	if (Global_17290)
	{
		if (func_326(29, 1, 1, &fVar35, &fVar36, bParam7))
		{
			fVar56 = fVar36;
			fVar57 = fVar35;
			fVar56 = (fVar56 + 0f);
		}
		else
		{
			Global_17290 = 0;
		}
	}
	if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_1)) == unk_0x6D9FF4C899CD785F("HIDE"))
	{
		fVar58 = Global_17288;
	}
	else
	{
		fVar58 = (((Global_17288 + fVar56) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17289;
	}
	fVar61 = 1f;
	if (bParam7)
	{
		unk_0xBC8A4E0C71749580(&iVar59, &iVar60);
		fVar62 = unk_0x194EA65BE0B4C26F(0);
		if (func_325())
		{
			iVar59 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar60) * fVar62));
		}
		fVar63 = (unk_0xBBDA792448DB5A89(iVar59) / unk_0xBBDA792448DB5A89(iVar60));
		fVar61 = (fVar63 / fVar62);
		if (func_325())
		{
			fVar61 = 1f;
		}
		iVar59 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar59) / fVar61));
		iVar60 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar60) / fVar61));
	}
	else
	{
		unk_0x05ABC29E253518F8(&iVar59, &iVar60);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17290.f_5598)
		{
			if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_1)) == unk_0x6D9FF4C899CD785F("HIDE"))
			{
				fVar49 = Global_17288;
			}
			else
			{
				if (Global_17290)
				{
					StringCopy(&cVar64, func_324(29), 64);
					StringCopy(&cVar80, func_322(29, 1), 64);
					if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_6703[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_321(Global_17287, Global_17288, fParam5, (fVar56 - 0f), 0, 0, 0, 255);
						unk_0xDBC7B721B137659C(&cVar64, &cVar80, (Global_17287 + (fParam5 * 0.5f)), (Global_17288 + ((fVar56 - 0f) * 0.5f)), fVar57, (fVar56 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0xDBC7B721B137659C(&cVar64, &cVar80, (Global_17287 + (fParam5 * 0.5f)), (Global_17288 + ((fVar56 - 0f) * 0.5f)), fParam5, (fVar56 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_17290.f_7864)
				{
					iVar1 = Global_17290.f_7860;
					iVar2 = Global_17290.f_7861;
					iVar3 = Global_17290.f_7862;
					iVar4 = Global_17290.f_7863;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_321(Global_17287, (Global_17288 + fVar56), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17288 + fVar56) + 0.034722f) + 0f);
				if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_1)) != 0)
				{
					func_320();
					unk_0x7C12F16D6CF17166(&(Global_17290.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17290.f_68)
					{
						if (Global_17290.f_5[iVar14] == 2)
						{
							unk_0xF99222307D7150A9(Global_17290.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17290.f_5[iVar14] == 3)
						{
							unk_0x67B2488BFC4BE526(Global_17290.f_14[iVar16], Global_17290.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17290.f_5[iVar14] == 1)
						{
							unk_0xB1953EBEF4D6BD85(&(Global_17290.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17290.f_5[iVar14] == 8)
						{
							unk_0xB1953EBEF4D6BD85(&(Global_17290.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17290.f_5[iVar14] == 5)
						{
							unk_0x4C51E4FBCD1D8830(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 6)
						{
							unk_0xB1953EBEF4D6BD85(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 7)
						{
							unk_0x4C51E4FBCD1D8830(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 9)
						{
							unk_0x4C51E4FBCD1D8830(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x7E3D5998E914CAD3((Global_17287 + 0.00390625f), ((Global_17288 + fVar56) + 0.00416664f), 0);
				}
				if (Global_17290.f_5601 > Global_17290.f_5095)
				{
					if (Global_17290.f_5604 != 0)
					{
						func_320();
						func_318((((Global_17287 + fParam5) - 0.00390625f) - func_319("CM_ITEM_COUNT", Global_17290.f_5604, Global_17290.f_5603)), ((Global_17288 + fVar56) + 0.00416664f), "CM_ITEM_COUNT", Global_17290.f_5604, Global_17290.f_5603);
					}
				}
			}
			iVar6 = Global_17290.f_5605;
			iVar9 = 0;
			fVar96 = fVar49;
			if (Global_17290.f_7874)
			{
				iVar1 = Global_17290.f_7870;
				iVar2 = Global_17290.f_7871;
				iVar3 = Global_17290.f_7872;
				iVar4 = Global_17290.f_7873;
			}
			else
			{
				unk_0xC163336F8C5EA891(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17290.f_5095 && iVar6 <= Global_17290.f_5088)
			{
				if (iVar6 >= 0)
				{
					if (Global_17290.f_5355[iVar6])
					{
						if (Global_17290.f_5226[iVar6] && iVar6 != Global_17290.f_5605)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar55 = 0.034722f;
						if (Global_17290.f_5612[iVar6] != 0f)
						{
							fVar55 = Global_17290.f_5612[iVar6];
						}
						fVar49 = (fVar49 + fVar55);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar55 = 0.034722f;
					fVar49 = (fVar49 + fVar55);
					iVar9++;
					if (Global_17290.f_5088 <= 1)
					{
						Global_17290.f_5088++;
					}
					iVar53 = 1;
				}
			}
			unk_0xDBC7B721B137659C("CommonMenu", "Gradient_Bgd", (Global_17287 + (fParam5 * 0.5f)), ((fVar96 + ((fVar49 - fVar96) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar96), 0f, 255, 255, 255, 255, 0);
			if (Global_17290.f_5601 > Global_17290.f_5095)
			{
				if (Global_17290.f_7879)
				{
					iVar1 = Global_17290.f_7875;
					iVar2 = Global_17290.f_7876;
					iVar3 = Global_17290.f_7877;
					iVar4 = Global_17290.f_7878;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_321(Global_17287, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var37 = { unk_0x6CE755343658C0DB("CommonMenu", "shop_arrows_upANDdown") };
				Var37.f_0 = (Var37.f_0 * (0.5f / fVar61));
				Var37.f_1 = (Var37.f_1 * (0.5f / fVar61));
				if (Global_17290.f_7892)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0xC163336F8C5EA891(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xDBC7B721B137659C("CommonMenu", "shop_arrows_upANDdown", (Global_17287 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((Var37.f_0 / 1280f) * fVar61), ((Var37.f_1 / 720f) * fVar61), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_4562)) != 0 && Global_17290.f_4636 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17287 + 0.0046875f);
				if (Global_17290.f_4638 != 0)
				{
					func_326(Global_17290.f_4638, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17287 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_317(fVar41);
				unk_0x90AAFEAE10E31F3A(&(Global_17290.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17290.f_4632)
				{
					if (Global_17290.f_4566[iVar14] == 2)
					{
						unk_0xF99222307D7150A9(Global_17290.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17290.f_4566[iVar14] == 3)
					{
						unk_0x67B2488BFC4BE526(Global_17290.f_4575[iVar16], Global_17290.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17290.f_4566[iVar14] == 1)
					{
						unk_0xB1953EBEF4D6BD85(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 5)
					{
						unk_0x4C51E4FBCD1D8830(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 6)
					{
						unk_0xB1953EBEF4D6BD85(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 7)
					{
						unk_0x4C51E4FBCD1D8830(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 9)
					{
						unk_0x4C51E4FBCD1D8830(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xEA812CEBCB2C6B1F(fVar41, (fVar49 + 0.00277776f));
				unk_0xC163336F8C5EA891(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_321(Global_17287, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17290.f_7884)
				{
					iVar1 = Global_17290.f_7880;
					iVar2 = Global_17290.f_7881;
					iVar3 = Global_17290.f_7882;
					iVar4 = Global_17290.f_7883;
				}
				else
				{
					unk_0xC163336F8C5EA891(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xDBC7B721B137659C("CommonMenu", "Gradient_Bgd", (Global_17287 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0xFBBB5045CB727AD7(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xFBBB5045CB727AD7(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_317(fVar41);
				unk_0x7C12F16D6CF17166(&(Global_17290.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17290.f_4632)
				{
					if (Global_17290.f_4566[iVar14] == 2)
					{
						unk_0xF99222307D7150A9(Global_17290.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17290.f_4566[iVar14] == 3)
					{
						unk_0x67B2488BFC4BE526(Global_17290.f_4575[iVar16], Global_17290.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17290.f_4566[iVar14] == 1)
					{
						unk_0xB1953EBEF4D6BD85(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 5)
					{
						unk_0x4C51E4FBCD1D8830(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 6)
					{
						unk_0xB1953EBEF4D6BD85(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 7)
					{
						unk_0x4C51E4FBCD1D8830(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 9)
					{
						unk_0x4C51E4FBCD1D8830(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 8)
					{
						unk_0xB1953EBEF4D6BD85(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x7E3D5998E914CAD3(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_17290.f_4638 != 0)
				{
					func_326(Global_17290.f_4638, 1, 1, &fVar35, &fVar36, bParam7);
					func_316(Global_17290.f_4638, 1, &iVar46, &iVar47, &iVar48);
					unk_0xDBC7B721B137659C(func_324(Global_17290.f_4638), func_322(Global_17290.f_4638, 1), ((Global_17287 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0xFBBB5045CB727AD7(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17290.f_4636 > 0)
				{
					if ((unk_0x84A97C70FFDEC0C8() - Global_17290.f_4637) > Global_17290.f_4636)
					{
						StringCopy(&(Global_17290.f_4562), "", 16);
						Global_17290.f_4636 = -1;
					}
				}
			}
			if (unk_0x6D9FF4C899CD785F(&(Global_2593914.f_21)) != 0 && Global_2593914.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17287 + 0.0046875f);
				if (Global_2593914.f_67 != 0)
				{
					func_326(Global_2593914.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17287 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_317(fVar41);
				unk_0x90AAFEAE10E31F3A(&(Global_2593914.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2593914.f_61)
				{
					if (Global_2593914.f_25[iVar14] == 2)
					{
						unk_0xF99222307D7150A9(Global_2593914.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2593914.f_25[iVar14] == 3)
					{
						unk_0x67B2488BFC4BE526(Global_2593914.f_34[iVar16], Global_2593914.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2593914.f_25[iVar14] == 1)
					{
						unk_0xB1953EBEF4D6BD85(&(Global_2593914.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2593914.f_25[iVar14] == 5)
					{
						unk_0x4C51E4FBCD1D8830(&(Global_2593914.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2593914.f_25[iVar14] == 6)
					{
						unk_0xB1953EBEF4D6BD85(&(Global_2593914.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2593914.f_25[iVar14] == 7)
					{
						unk_0x4C51E4FBCD1D8830(&(Global_2593914.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2593914.f_25[iVar14] == 9)
					{
						unk_0x4C51E4FBCD1D8830(&(Global_2593914.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2593914.f_25[iVar14] == 8)
					{
						unk_0xB1953EBEF4D6BD85(&(Global_2593914.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xEA812CEBCB2C6B1F(fVar41, (fVar49 + 0.00277776f));
				unk_0xC163336F8C5EA891(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_321(Global_17287, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17290.f_7884)
				{
					iVar1 = Global_17290.f_7880;
					iVar2 = Global_17290.f_7881;
					iVar3 = Global_17290.f_7882;
					iVar4 = Global_17290.f_7883;
				}
				else
				{
					unk_0xC163336F8C5EA891(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xDBC7B721B137659C("CommonMenu", "Gradient_Bgd", (Global_17287 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0xFBBB5045CB727AD7(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xFBBB5045CB727AD7(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_317(fVar41);
				unk_0x7C12F16D6CF17166(&(Global_2593914.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2593914.f_61)
				{
					if (Global_2593914.f_25[iVar14] == 2)
					{
						unk_0xF99222307D7150A9(Global_2593914.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2593914.f_25[iVar14] == 3)
					{
						unk_0x67B2488BFC4BE526(Global_2593914.f_34[iVar16], Global_2593914.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2593914.f_25[iVar14] == 1)
					{
						unk_0xB1953EBEF4D6BD85(&(Global_2593914.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2593914.f_25[iVar14] == 8)
					{
						unk_0xB1953EBEF4D6BD85(&(Global_2593914.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2593914.f_25[iVar14] == 5)
					{
						unk_0x4C51E4FBCD1D8830(&(Global_2593914.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2593914.f_25[iVar14] == 6)
					{
						unk_0xB1953EBEF4D6BD85(&(Global_2593914.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2593914.f_25[iVar14] == 7)
					{
						unk_0x4C51E4FBCD1D8830(&(Global_2593914.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2593914.f_25[iVar14] == 9)
					{
						unk_0x4C51E4FBCD1D8830(&(Global_2593914.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x7E3D5998E914CAD3(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_2593914.f_67 != 0)
				{
					func_326(Global_2593914.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					func_316(Global_2593914.f_67, 1, &iVar46, &iVar47, &iVar48);
					unk_0xDBC7B721B137659C(func_324(Global_2593914.f_67), func_322(Global_2593914.f_67, 1), ((Global_17287 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0xFBBB5045CB727AD7(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_2593914.f_65 > 0)
				{
					if ((unk_0x84A97C70FFDEC0C8() - Global_2593914.f_66) > Global_2593914.f_65)
					{
						StringCopy(&(Global_2593914.f_21), "", 16);
						Global_2593914.f_65 = -1;
					}
				}
			}
			func_313(iVar59, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0x8C8A1913314B5A90(76, 84);
			unk_0x296FDBBCECD446ED(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17290.f_5598)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar97 = Global_17290.f_5088;
			if (Global_17290.f_5599)
			{
				iVar97 = (Global_17290.f_5602 - 1);
			}
			fVar98 = 0f;
			fVar99 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar97)
			{
				fVar55 = 0.034722f;
				if (Global_17290.f_5612[iVar6] != 0f)
				{
					fVar55 = Global_17290.f_5612[iVar6];
				}
				if (Global_17290.f_5599)
				{
					iVar6 = Global_17290.f_7520[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar32 = false;
				if (iVar6 >= Global_17290.f_5605 && iVar9 < Global_17290.f_5095)
				{
					bVar32 = true;
					if (Global_17290.f_5606 == iVar6)
					{
						fVar99 = fVar98;
					}
					if (Global_17290.f_5226[iVar6])
					{
						iVar12++;
					}
					fVar34 = (((fVar58 + fVar98) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17290.f_5746[iVar6] = fVar34;
				fVar33 = (Global_17287 + 0.0046875f);
				bVar40 = false;
				bVar31 = Global_17290.f_5606 == iVar6;
				if ((bVar31 && iVar5 == 1) && bVar32)
				{
					iVar100 = 255;
					iVar101 = 255;
					iVar102 = 255;
					iVar103 = 255;
					if (Global_17290.f_7886)
					{
						unk_0xC163336F8C5EA891(Global_17290.f_7885, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					else
					{
						unk_0xC163336F8C5EA891(1, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					unk_0xDBC7B721B137659C("CommonMenu", "Gradient_Nav", (Global_17287 + (fParam5 * 0.5f)), (((fVar58 + fVar99) + (0.00277776f * IntToFloat(iVar12))) + (fVar55 * 0.5f)), fParam5, fVar55, 0f, iVar100, iVar101, iVar102, iVar103, 0);
					Global_17290.f_5744 = fVar34;
				}
				if (iVar53 && iVar7 == iVar97)
				{
					func_311(bVar31, 1, 0, 0, 0, 0, 0);
					unk_0x7C12F16D6CF17166("DFLT_MNU_OPT");
					unk_0x7E3D5998E914CAD3(fVar33, fVar34, 0);
					bVar40 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17290.f_5096)
					{
						if (unk_0xF44A5E894FE76438(Global_17290.f_4959[iVar6], iVar8) || Global_17290.f_4926[iVar8] == 5)
						{
							if (Global_17290.f_5599)
							{
								iVar19 = Global_17290.f_7531[((iVar9 * Global_17290.f_5096) + iVar8)];
								iVar20 = Global_17290.f_7572[((iVar9 * Global_17290.f_5096) + iVar8)];
								iVar21 = Global_17290.f_7613[((iVar9 * Global_17290.f_5096) + iVar8)];
								iVar22 = Global_17290.f_7654[((iVar9 * Global_17290.f_5096) + iVar8)];
								iVar23 = Global_17290.f_7695[((iVar9 * Global_17290.f_5096) + iVar8)];
							}
							else
							{
								Global_17290.f_7531[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar19;
								Global_17290.f_7572[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar20;
								Global_17290.f_7613[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar21;
								Global_17290.f_7654[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar22;
								Global_17290.f_7695[((iVar9 * Global_17290.f_5096) + iVar8)] = iVar23;
							}
							iVar104 = 0;
							bVar54 = false;
							if (Global_17290.f_5878[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17290.f_5875[0])
								{
									bVar54 = true;
									iVar104 = 0;
								}
							}
							if (Global_17290.f_5878[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17290.f_5875[1])
								{
									bVar54 = true;
									iVar104 = 1;
								}
							}
							if (Global_17290.f_4932[iVar8] != -1f)
							{
								fVar33 = ((Global_17287 + 0.0046875f) + Global_17290.f_4932[iVar8]);
							}
							if ((iVar8 < 4 && Global_17290.f_4932[iVar8 + 1] != -1f) && fVar33 < Global_17290.f_4932[iVar8 + 1])
							{
								fVar45 = (Global_17290.f_4932[iVar8 + 1] - fVar33);
							}
							else
							{
								fVar45 = (((Global_17287 + Global_17289) - 0.0046875f) - fVar33);
							}
							if ((Global_17290.f_4945[iVar8] && Global_17290.f_5741) && bVar31)
							{
								bVar52 = true;
							}
							else
							{
								bVar52 = false;
							}
							switch (Global_17290.f_4926[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17290.f_5599)
										{
											fVar42 = 0f;
											fVar43 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
											{
												bVar50 = false;
												bVar51 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
													{
														bVar51 = true;
													}
													else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
													{
														bVar50 = true;
													}
													iVar14++;
												}
												func_311(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, iVar104, bVar51, bVar50);
												unk_0x57D442E6F2D68C36(&(Global_17290.f_73[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xB1953EBEF4D6BD85(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xB1953EBEF4D6BD85(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x4C51E4FBCD1D8830(&(Global_2453012[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xB1953EBEF4D6BD85(&(Global_2453012[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x4C51E4FBCD1D8830(&(Global_2453012[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x4C51E4FBCD1D8830(&(Global_2453012[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xF99222307D7150A9(Global_17290.f_3918[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x67B2488BFC4BE526(Global_17290.f_4175[(iVar21 + iVar27)], Global_17290.f_4304[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
											{
												fVar42 = unk_0xC7F85398EB0970A0(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_326(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar43 = (fVar43 + fVar35);
														if (iVar14 > 0)
														{
															fVar43 = (fVar43 - (0.00078125f * 4f));
														}
														if (Global_17290.f_4433[(iVar22 + iVar14)] == 2 || Global_17290.f_4433[(iVar22 + iVar14)] == 48)
														{
															fVar43 = (fVar43 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar41 = 0f;
											if (Global_17290.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - (fVar42 + fVar43)) + (0.00078125f * 1f)));
											}
											else if (Global_17290.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - ((fVar42 + fVar43) * 0.5f)));
											}
											Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar41;
											Global_17290.f_7777[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar42;
											Global_17290.f_7818[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar43;
										}
										else
										{
											fVar41 = Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)];
											fVar42 = Global_17290.f_7777[((iVar9 * Global_17290.f_5096) + iVar8)];
											fVar43 = Global_17290.f_7818[((iVar9 * Global_17290.f_5096) + iVar8)];
										}
										if (bVar52)
										{
											if (func_326(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17290.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_326(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_316(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xDBC7B721B137659C(func_324(26), func_322(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_326(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_326(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_316(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xDBC7B721B137659C(func_324(27), func_322(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_311(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, 0, bVar51, bVar50);
											if (Global_17290.f_7890 && Global_17290.f_7891 == iVar6)
											{
												func_310(bVar31);
											}
											unk_0x7C12F16D6CF17166(&(Global_17290.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xB1953EBEF4D6BD85(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 1;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xB1953EBEF4D6BD85(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 8;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x4C51E4FBCD1D8830(&(Global_2453012[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xB1953EBEF4D6BD85(&(Global_2453012[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x4C51E4FBCD1D8830(&(Global_2453012[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 7;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x4C51E4FBCD1D8830(&(Global_2453012[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 9;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xF99222307D7150A9(Global_17290.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x67B2488BFC4BE526(Global_17290.f_4175[(iVar21 + iVar27)], Global_17290.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar30 = 3;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17290.f_4433[(iVar22 + iVar28)] == 2 || Global_17290.f_4433[(iVar22 + iVar28)] == 48)
												{
													if (func_326(Global_17290.f_4433[(iVar22 + iVar28)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_326(Global_17290.f_4433[(iVar22 + iVar28)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_316(Global_17290.f_4433[(iVar22 + iVar28)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17290.f_4953[iVar8] == 2)
															{
																unk_0xDBC7B721B137659C(func_324(Global_17290.f_4433[(iVar22 + iVar28)]), func_322(Global_17290.f_4433[(iVar22 + iVar28)], bVar31), (((fVar33 + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0xDBC7B721B137659C(func_324(Global_17290.f_4433[(iVar22 + iVar28)]), func_322(Global_17290.f_4433[(iVar22 + iVar28)], bVar31), ((fVar33 + fVar41) - (0.00078125f * 8f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															fVar41 = (fVar41 + (0.00078125f * 3f));
														}
													}
												}
												iVar28++;
												iVar30 = 4;
											}
											iVar14++;
										}
										if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
										{
											if (iVar30 == 4 && Global_17290.f_4953[iVar8] == 2)
											{
												unk_0x7E3D5998E914CAD3(((fVar33 + fVar41) + (0.00078125f * 7f)), fVar34, 0);
											}
											else
											{
												unk_0x7E3D5998E914CAD3((fVar33 + fVar41), fVar34, 0);
											}
										}
										if (iVar28 > 0)
										{
											fVar41 = (fVar41 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_17290.f_4433[(iVar22 + iVar14)] != 2 && Global_17290.f_4433[(iVar22 + iVar14)] != 48)
												{
													if (func_326(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_326(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_316(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17290.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0xDBC7B721B137659C(func_324(Global_17290.f_4433[(iVar22 + iVar14)]), func_322(Global_17290.f_4433[(iVar22 + iVar14)], bVar31), (Global_17287 + (fVar35 * 0.5f)), (((fVar34 + 0.00277776f) + (fVar36 * 0.5f)) - (0.00078125f * 11f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else if (Global_17290.f_4953[iVar8] == 2)
															{
																unk_0xDBC7B721B137659C(func_324(Global_17290.f_4433[(iVar22 + iVar14)]), func_322(Global_17290.f_4433[(iVar22 + iVar14)], bVar31), ((((fVar33 + fVar41) + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0xDBC7B721B137659C(func_324(Global_17290.f_4433[(iVar22 + iVar14)]), func_322(Global_17290.f_4433[(iVar22 + iVar14)], bVar31), (((fVar33 + fVar41) + fVar42) - (0.00078125f * 12f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
														}
														fVar41 = (fVar41 + (12f * 0.00078125f));
													}
												}
												iVar14++;
											}
										}
									}
									bVar40 = true;
									iVar19++;
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17290.f_5599)
										{
											func_311(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, 0, 0, 0);
											if (Global_17290.f_7890 && Global_17290.f_7891 == iVar6)
											{
												func_310(bVar31);
											}
											unk_0x57D442E6F2D68C36("NUMBER");
											unk_0xF99222307D7150A9(Global_17290.f_3918[iVar20]);
											fVar42 = unk_0xC7F85398EB0970A0(1);
											fVar41 = 0f;
											if (Global_17290.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17290.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar41;
											Global_17290.f_7777[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)];
											fVar42 = Global_17290.f_7777[((iVar9 * Global_17290.f_5096) + iVar8)];
										}
										if (bVar52)
										{
											if (func_326(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17290.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_326(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_316(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xDBC7B721B137659C(func_324(26), func_322(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_326(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_326(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_316(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xDBC7B721B137659C(func_324(27), func_322(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_311(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, 0, 0, 0);
										func_309((fVar33 + fVar41), fVar34, "NUMBER", Global_17290.f_3918[iVar20], 0);
									}
									bVar40 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17290.f_5599)
										{
											func_311(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, 0, 0, 0);
											if (Global_17290.f_7890 && Global_17290.f_7891 == iVar6)
											{
												func_310(bVar31);
											}
											unk_0x57D442E6F2D68C36("NUMBER");
											unk_0x67B2488BFC4BE526(Global_17290.f_4175[iVar21], Global_17290.f_4304[iVar21]);
											fVar42 = unk_0xC7F85398EB0970A0(1);
											fVar41 = 0f;
											if (Global_17290.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17290.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar41;
											Global_17290.f_7777[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)];
											fVar42 = Global_17290.f_7777[((iVar9 * Global_17290.f_5096) + iVar8)];
										}
										if (bVar52)
										{
											if (func_326(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_17290.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_326(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_316(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xDBC7B721B137659C(func_324(26), func_322(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_326(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_326(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_316(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xDBC7B721B137659C(func_324(27), func_322(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_311(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, 0, 0, 0);
										func_308((fVar33 + fVar41), fVar34, "NUMBER", Global_17290.f_4175[iVar21], Global_17290.f_4304[iVar21]);
									}
									bVar40 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar32)
									{
										if (func_326(Global_17290.f_4433[iVar22], bVar31, 0, &fVar35, &fVar36, bParam7))
										{
											if (!Global_17290.f_5599)
											{
												fVar43 = fVar35;
												fVar41 = 0f;
												if (Global_17290.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 + ((fVar45 - fVar43) + (0.00078125f * 1f)));
												}
												else if (Global_17290.f_4953[iVar8] == 0)
												{
													fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar43 * 0.5f)));
												}
												Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar41;
												Global_17290.f_7818[((iVar9 * Global_17290.f_5096) + iVar8)] = fVar43;
											}
											else
											{
												fVar41 = Global_17290.f_7736[((iVar9 * Global_17290.f_5096) + iVar8)];
												fVar43 = Global_17290.f_7818[((iVar9 * Global_17290.f_5096) + iVar8)];
											}
											if (bVar52)
											{
												if (func_326(26, 1, 0, &fVar35, &fVar36, bParam7))
												{
													if (Global_17290.f_4953[iVar8] == 2)
													{
														fVar41 = (fVar41 - (fVar35 * 2f));
													}
													fVar44 = (fVar35 * 0.5f);
													if (func_326(26, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_316(26, 1, &iVar46, &iVar47, &iVar48);
														unk_0xDBC7B721B137659C(func_324(26), func_322(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
												if (func_326(27, 1, 0, &fVar35, &fVar36, bParam7))
												{
													fVar41 = (fVar41 + fVar35);
													fVar44 = (fVar35 * 0.5f);
													if (func_326(27, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_316(27, 1, &iVar46, &iVar47, &iVar48);
														unk_0xDBC7B721B137659C(func_324(27), func_322(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
											}
											if (func_326(Global_17290.f_4433[iVar22], bVar31, 1, &fVar35, &fVar36, bParam7))
											{
												func_316(Global_17290.f_4433[iVar22], bVar31, &iVar46, &iVar47, &iVar48);
												unk_0xDBC7B721B137659C(func_324(Global_17290.f_4433[iVar22]), func_322(Global_17290.f_4433[iVar22], bVar31), ((fVar33 + fVar41) + (fVar35 * 0.5f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), (fVar35 * func_307(Global_17290.f_4433[iVar22])), (fVar36 * func_307(Global_17290.f_4433[iVar22])), 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
									}
									bVar40 = true;
									iVar22++;
									break;
								
								case 5:
									bVar40 = true;
									break;
							}
							if (Global_17290.f_4926[iVar8] == 5)
							{
								if (Global_17290.f_4938[iVar8] > 0.05f)
								{
									fVar33 = (fVar33 + Global_17290.f_4938[iVar8]);
								}
								else
								{
									fVar33 = (fVar33 + 0.05f);
								}
							}
							else
							{
								fVar33 = (fVar33 + Global_17290.f_4938[iVar8]);
								if (Global_17290.f_4945[iVar8])
								{
									if (func_326(26, 1, 1, &fVar35, &fVar36, bParam7))
									{
										fVar33 = (fVar33 - fVar35);
									}
								}
							}
						}
						else
						{
							fVar33 = (fVar33 + Global_17290.f_4938[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar40)
				{
					if (bVar32)
					{
						Global_17290.f_7520[iVar9] = iVar6;
						Global_17290.f_5607 = iVar6;
						iVar9++;
						if (Global_17290.f_5226[iVar6])
						{
							iVar13++;
						}
						if (Global_17290.f_5612[iVar6] != 0f)
						{
							fVar98 = (fVar98 + Global_17290.f_5612[iVar6]);
						}
						else
						{
							fVar98 = (fVar98 + 0.034722f);
						}
					}
					if (!Global_17290.f_5598)
					{
						Global_17290.f_5355[iVar6] = 1;
						if (Global_17290.f_5097[iVar6])
						{
							if (bVar31)
							{
								Global_17290.f_5604 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar31)
							{
								Global_17290.f_5604 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17290.f_5598)
			{
				Global_17290.f_5600 = ((fVar58 + fVar98) + (0.00277776f * IntToFloat(iVar12)));
				Global_17290.f_5603 = iVar11;
				Global_17290.f_5601 = iVar10;
				Global_17290.f_5598 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17290.f_5599)
	{
		Global_17290.f_5602 = iVar9;
		Global_17290.f_5599 = 1;
	}
	Global_17290.f_5743 = fVar49;
	Global_17290.f_5745 = unk_0x84A97C70FFDEC0C8();
	unk_0x2B153364D0958759(Global_17290.f_5743);
	if (!Global_17290.f_7859)
	{
		func_304();
	}
	Global_17290.f_7859 = 0;
	if (bParam2)
	{
		unk_0x7FE30C99EA3439F7(10);
	}
	unk_0x7FE30C99EA3439F7(6);
	unk_0x7FE30C99EA3439F7(7);
	unk_0x7FE30C99EA3439F7(9);
	unk_0x7FE30C99EA3439F7(8);
	if (bParam0)
	{
		func_280(1);
	}
	unk_0xCEC227FFDAB08FF3();
}

void func_304()
{
	if (!Global_14443.f_1 == 1)
	{
		if (func_129(0))
		{
			func_305(0);
		}
		unk_0xB8A73E7DA87B2968(&Global_2314, 2);
	}
}

void func_305(int iParam0)
{
	if (Global_14604)
	{
		func_306(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xB8A73E7DA87B2968(&Global_2314, 16);
	}
	if (unk_0x982007D3EB9D85D2())
	{
		unk_0x73998CD31AEFA620(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xB8A73E7DA87B2968(&Global_2313, 30);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&Global_2313, 30);
	}
	if (!func_79())
	{
		Global_14443.f_1 = 3;
	}
}

void func_306(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_129(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x74432D08D4A512AA(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x91DA9180A91C7947(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x91DA9180A91C7947(Global_14380);
		}
		else
		{
			unk_0x91DA9180A91C7947(Global_14371);
		}
	}
}

float func_307(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 50:
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_308(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	unk_0x7C12F16D6CF17166(sParam2);
	unk_0x67B2488BFC4BE526(uParam3, uParam4);
	unk_0x7E3D5998E914CAD3(fParam0, fParam1, 0);
}

void func_309(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x7C12F16D6CF17166(sParam2);
	unk_0xF99222307D7150A9(iParam3);
	unk_0x7E3D5998E914CAD3(fParam0, fParam1, iParam4);
}

void func_310(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0xC163336F8C5EA891(Global_17290.f_7887[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0xC163336F8C5EA891(Global_17290.f_7887[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0xDABBD2E6CAD829E1(iVar0, iVar1, iVar2, 255);
}

void func_311(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_312(Global_17290.f_5878[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0xC163336F8C5EA891(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			unk_0xDABBD2E6CAD829E1(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0xC163336F8C5EA891(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xDABBD2E6CAD829E1(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0xC163336F8C5EA891(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xDABBD2E6CAD829E1(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0xDABBD2E6CAD829E1(155, 155, 155, 255);
		}
		else
		{
			unk_0xDABBD2E6CAD829E1(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0xDABBD2E6CAD829E1(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0xC163336F8C5EA891(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0xDABBD2E6CAD829E1(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0xDABBD2E6CAD829E1(155, 155, 155, 255);
	}
	else
	{
		unk_0xDABBD2E6CAD829E1(155, 155, 155, 255);
	}
	unk_0x3B71612DD3973D97(0f, 0.35f);
	unk_0x97C2DEC6BACFB889(1);
	if (bParam5)
	{
		unk_0x3B71612DD3973D97(0f, 0.425f);
		unk_0x79459927BB08805E(4);
	}
	else if (bParam6)
	{
		unk_0x3B71612DD3973D97(0f, 0.425f);
		unk_0x79459927BB08805E(6);
	}
	else
	{
		unk_0x79459927BB08805E(0);
	}
	unk_0x286B7C12CAFE210E(0f, 1f);
	unk_0x5A7D9AB610934030(0);
	unk_0x39E2EB59CAADDAE8(0, 0, 0, 0, 0);
	unk_0x80BD9BFFFA680716(0, 0, 0, 0, 0);
}

void func_312(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_313(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_290(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_328(bParam4, bParam8))
	{
		return;
	}
	if (func_314())
	{
		return;
	}
	if (unk_0x976A3E0B7A766593())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_238(unk_0xFB6B3EEFAB2DD12C(), 0))
		{
			return;
		}
	}
	if (unk_0x2D337DD29A7ABD30())
	{
		if (unk_0x9CCF717E34C78F05() == 0 || unk_0x976A3E0B7A766593())
		{
			return;
		}
	}
	if (Global_17290.f_4639 != 0)
	{
		if (unk_0x02F62AA408F2D854(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17290.f_4639)
			{
				if (Global_17290.f_4896[iVar1] != 353)
				{
					StringCopy(&(Global_17290.f_4641[iVar1 /*16*/]), unk_0xE78ECEC3BC74DC0C(2, Global_17290.f_4896[iVar1], 1), 64);
				}
				else if (Global_17290.f_4909[iVar1] != 32)
				{
					StringCopy(&(Global_17290.f_4641[iVar1 /*16*/]), unk_0x02B7665B289F7C66(2, Global_17290.f_4909[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_17290.f_4640 = 0;
		}
		if (!Global_17290.f_4640)
		{
			unk_0x3B6EF6403E3F1CAC(Global_17290.f_5530[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xBBAAC5B2437ACF2A();
			unk_0x3B6EF6403E3F1CAC(Global_17290.f_5530[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x573CAEB6F4A4E750((1f - (Global_17290.f_4951 / 100f)));
			unk_0xBBAAC5B2437ACF2A();
			if (unk_0x2D337DD29A7ABD30())
			{
				unk_0x3B6EF6403E3F1CAC(Global_17290.f_5530[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x2C310F11D2096992(1);
				unk_0xBBAAC5B2437ACF2A();
			}
			iVar1 = 0;
			while (iVar1 < Global_17290.f_4639)
			{
				if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_4834[iVar1 /*4*/])) != unk_0x6D9FF4C899CD785F("PREV"))
				{
					unk_0x3B6EF6403E3F1CAC(Global_17290.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x1B215CC37BF52E79(iVar1);
					func_268(&(Global_17290.f_4641[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x6D9FF4C899CD785F(&(Global_17290.f_4834[iVar2 /*4*/])) == unk_0x6D9FF4C899CD785F("PREV"))
					{
						func_268(&(Global_17290.f_4641[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17290.f_4883[iVar1] == -1)
					{
						func_31(&(Global_17290.f_4834[iVar1 /*4*/]));
					}
					else
					{
						unk_0x0BBDB952BE56A9DF(&(Global_17290.f_4834[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x3672BC158A73A76A(iParam2, 70);
						}
						else
						{
							unk_0xF99222307D7150A9(iParam2);
						}
						unk_0xCB329F559FA7DCD0();
					}
					if (unk_0x2D337DD29A7ABD30())
					{
						if (Global_17290.f_4896[iVar1] != 353 && unk_0xF44A5E894FE76438(Global_17290.f_4922, iVar1))
						{
							unk_0x2C310F11D2096992(1);
							unk_0x1B215CC37BF52E79(Global_17290.f_4896[iVar1]);
						}
						else
						{
							unk_0x2C310F11D2096992(0);
							unk_0x1B215CC37BF52E79(353);
						}
					}
					unk_0xBBAAC5B2437ACF2A();
				}
				iVar1++;
			}
			if (unk_0x6D9FF4C899CD785F(&(Global_2593914.f_16)) != unk_0x6D9FF4C899CD785F(""))
			{
				unk_0x3B6EF6403E3F1CAC(Global_17290.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x1B215CC37BF52E79(Global_17290.f_4639);
				func_268(&Global_2593914);
				if (Global_2593914.f_20 == -1)
				{
					func_31(&(Global_2593914.f_16));
				}
				else
				{
					unk_0x0BBDB952BE56A9DF(&(Global_2593914.f_16));
					if (bParam5)
					{
						unk_0x3672BC158A73A76A(iParam2, 70);
					}
					else
					{
						unk_0xF99222307D7150A9(iParam2);
					}
					unk_0xCB329F559FA7DCD0();
				}
				unk_0xBBAAC5B2437ACF2A();
			}
			unk_0x3B6EF6403E3F1CAC(Global_17290.f_5530[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x1B215CC37BF52E79(0);
			unk_0x1B215CC37BF52E79(0);
			unk_0x1B215CC37BF52E79(0);
			unk_0x1B215CC37BF52E79(80);
			unk_0xBBAAC5B2437ACF2A();
			unk_0x3B6EF6403E3F1CAC(Global_17290.f_5530[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17290.f_4952)
			{
				unk_0x1B215CC37BF52E79(1);
			}
			else
			{
				unk_0x1B215CC37BF52E79(0);
			}
			unk_0xBBAAC5B2437ACF2A();
			Global_17290.f_4640 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17290.f_4639)
		{
			if (Global_17290.f_4883[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x3B6EF6403E3F1CAC(Global_17290.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x1B215CC37BF52E79(iVar1);
					unk_0x0BBDB952BE56A9DF(&(Global_17290.f_4834[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x3672BC158A73A76A(iParam2, 70);
					}
					else
					{
						unk_0xF99222307D7150A9(iParam2);
					}
					unk_0xCB329F559FA7DCD0();
					unk_0xBBAAC5B2437ACF2A();
				}
			}
			iVar1++;
		}
		if (Global_2593914.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x3B6EF6403E3F1CAC(Global_17290.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x1B215CC37BF52E79(iVar1);
				unk_0x0BBDB952BE56A9DF(&(Global_2593914.f_16));
				if (bParam5)
				{
					unk_0x3672BC158A73A76A(iParam2, 70);
				}
				else
				{
					unk_0xF99222307D7150A9(iParam2);
				}
				unk_0xCB329F559FA7DCD0();
				unk_0xBBAAC5B2437ACF2A();
			}
		}
		unk_0x8C8A1913314B5A90(76, 66);
		unk_0x296FDBBCECD446ED(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17290.f_7894)
			{
				unk_0xEEA4569186F59D9E(15, 0f, -0.0375f);
				Global_17290.f_7894 = 1;
			}
		}
		else if (Global_17290.f_7894)
		{
			unk_0x252BF044E85EB455(15);
			Global_17290.f_7894 = 0;
		}
		unk_0xCEC227FFDAB08FF3();
		if (Global_17290.f_4925)
		{
			unk_0x8C8A1913314B5A90(82, 66);
			unk_0x296FDBBCECD446ED(0f, 0f, 0f, 0f);
			unk_0x733D2C5CCB2A212B(Global_17290.f_5530[iVar0 /*10*/], Global_17290.f_4923, Global_17290.f_4924, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0xCEC227FFDAB08FF3();
		}
		else
		{
			unk_0x131F832AD6923854(Global_17290.f_5530[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

int func_314()
{
	struct<3> Var0;
	
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	if (func_315())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x74432D08D4A512AA(&Var0);
		if (Global_14388 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_315()
{
	if (unk_0xAB964FCFAC3C767A(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_316(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	
	unk_0xC163336F8C5EA891(1, iParam2, iParam3, iParam4, &uVar0);
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 50:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
		case 49:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
	}
}

void func_317(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xC163336F8C5EA891(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x79459927BB08805E(0);
	unk_0x3B71612DD3973D97(0f, 0.35f);
	unk_0x8B5BC9543431B932(2);
	unk_0xDABBD2E6CAD829E1(iVar0, iVar1, iVar2, iVar3);
	unk_0x286B7C12CAFE210E(fParam0, ((Global_17287 + Global_17289) - 0.0046875f));
	unk_0x5A7D9AB610934030(0);
	unk_0x39E2EB59CAADDAE8(0, 0, 0, 0, 0);
	unk_0x80BD9BFFFA680716(0, 0, 0, 0, 0);
}

void func_318(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x7C12F16D6CF17166(sParam2);
	unk_0xF99222307D7150A9(uParam3);
	unk_0xF99222307D7150A9(uParam4);
	unk_0x7E3D5998E914CAD3(fParam0, fParam1, 0);
}

float func_319(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x1C079483C9D16F36(sParam0))
	{
		if (unk_0x6D9FF4C899CD785F(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_320();
	unk_0x57D442E6F2D68C36(sParam0);
	unk_0xF99222307D7150A9(uParam1);
	unk_0xF99222307D7150A9(uParam2);
	return unk_0xC7F85398EB0970A0(1);
}

void func_320()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xC163336F8C5EA891(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17290.f_7869)
	{
		iVar0 = Global_17290.f_7865;
		iVar1 = Global_17290.f_7866;
		iVar2 = Global_17290.f_7867;
		iVar3 = Global_17290.f_7868;
	}
	unk_0x79459927BB08805E(0);
	unk_0x3B71612DD3973D97(0f, 0.35f);
	unk_0xDABBD2E6CAD829E1(iVar0, iVar1, iVar2, iVar3);
	unk_0x286B7C12CAFE210E((Global_17287 + 0.0046875f), ((Global_17287 + Global_17289) - 0.0046875f));
	unk_0x5A7D9AB610934030(0);
	unk_0x39E2EB59CAADDAE8(0, 0, 0, 0, 0);
	unk_0x80BD9BFFFA680716(0, 0, 0, 0, 0);
}

void func_321(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xED5C6BE1E2C9B186((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_322(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!unk_0xC55B9553B3EDADE9(&(Global_17290.f_6703[iParam0 /*16*/])))
	{
		if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_6703[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_243(unk_0xFB6B3EEFAB2DD12C()) };
			if (unk_0x23F5E0B2D6F39CA8(&Var19, &uVar3))
			{
				return func_323(&uVar3);
			}
		}
		else
		{
			return func_323(&(Global_17290.f_6703[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 48:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 49:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_323(var uParam0)
{
	return uParam0;
}

char* func_324(int iParam0)
{
	var uVar0;
	struct<13> Var16;
	
	if (!unk_0xC55B9553B3EDADE9(&(Global_17290.f_5886[iParam0 /*16*/])))
	{
		if (unk_0x6D9FF4C899CD785F(&(Global_17290.f_5886[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_243(unk_0xFB6B3EEFAB2DD12C()) };
			unk_0x23F5E0B2D6F39CA8(&Var16, &uVar0);
			return func_323(&uVar0);
		}
		else
		{
			return func_323(&(Global_17290.f_5886[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_325()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0xBC8A4E0C71749580(&iVar0, &iVar1);
	fVar2 = (unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_326(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	
	StringCopy(&cVar0, func_324(iParam0), 64);
	StringCopy(&cVar16, func_322(iParam0, bParam1), 64);
	if (unk_0x6D9FF4C899CD785F(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			unk_0xBC8A4E0C71749580(&iVar32, &iVar33);
			fVar35 = unk_0x194EA65BE0B4C26F(0);
			if (func_325())
			{
				iVar32 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar33) * fVar35));
			}
			fVar36 = (unk_0xBBDA792448DB5A89(iVar32) / unk_0xBBDA792448DB5A89(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_325())
			{
				fVar34 = 1f;
			}
			if (unk_0xAB964FCFAC3C767A(joaat("director_mode")) > 0)
			{
				unk_0x05ABC29E253518F8(&iVar32, &iVar33);
			}
			iVar32 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar32) / fVar34));
			iVar33 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar33) / fVar34));
		}
		else
		{
			unk_0x05ABC29E253518F8(&iVar32, &iVar33);
		}
		Var37 = { unk_0x6CE755343658C0DB(&cVar0, &cVar16) };
		Var37.f_0 = (Var37.f_0 * (func_327(iParam0) / fVar34));
		Var37.f_1 = (Var37.f_1 * (func_327(iParam0) / fVar34));
		if (!bParam2)
		{
			Var37.f_0 = (Var37.f_0 - 2f);
			Var37.f_1 = (Var37.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var37.f_0 = 288f;
			Var37.f_1 = 106f;
		}
		if (iParam0 == 29 && unk_0x6D9FF4C899CD785F(&(Global_17290.f_6703[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var37.f_0 = 106f;
			Var37.f_1 = 106f;
		}
		*fParam3 = ((Var37.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var37.f_1 / IntToFloat(iVar33)) / (Var37.f_0 / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x93456A81D92B9712() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17289)
			{
				*fParam4 = (*fParam4 * (Global_17289 / *fParam3));
				*fParam3 = Global_17289;
			}
		}
		return 1;
	}
	return 0;
}

float func_327(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 49:
			return 0.5f;
			break;
	}
	return 1f;
}

int func_328(bool bParam0, bool bParam1)
{
	if (Global_2433082.f_1385.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x8AFBC859AA63D3D7() || (func_82(8, -1) && func_329() != 64)) || (unk_0xDEC2120B859399ED() != 0 && !bParam1)) || (unk_0xB0D174BA6F10DF7B() && !bParam0)) || unk_0xC4E9166C7DEB5B34()) || Global_69957) || Global_17290.f_7893) || unk_0xF35D072F1A7DC0A4()) || Global_91538.f_1361)
	{
		return 0;
	}
	return 1;
}

int func_329()
{
	return Global_1315164;
}

void func_330()
{
	if (iLocal_101 == 0)
	{
		if (!bLocal_114)
		{
			func_331("PAH_QUICK_D1", 0, 0);
		}
	}
	else if (iLocal_101 == iLocal_102)
	{
		if (!bLocal_115)
		{
			func_331("PAH_QUICK_D2", 0, 0);
		}
		else if (!bLocal_116)
		{
			func_331("PAH_QUICK_D3", 0, 0);
		}
	}
	else if (!bLocal_115)
	{
		func_331("PAH_QUICK_D2", 0, 0);
	}
	else if (!uLocal_117[(iLocal_101 - 1)])
	{
		func_331("PAH_QUICK_D3", 0, 0);
	}
}

void func_331(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_17290.f_4562), sParam0, 16);
	Global_17290.f_4632 = 0;
	Global_17290.f_4633 = 0;
	Global_17290.f_4634 = 0;
	Global_17290.f_4635 = 0;
	Global_17290.f_4636 = iParam1;
	Global_17290.f_4637 = unk_0x84A97C70FFDEC0C8();
	Global_17290.f_4638 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17290.f_4566[iVar0] = 0;
		iVar0++;
	}
}

void func_332()
{
	bool bVar0;
	
	bVar0 = true;
	if ((((unk_0x6AAF285DC78E0304() || unk_0x1BDA0BA180A0719B()) || unk_0xF35D072F1A7DC0A4()) || unk_0x976A3E0B7A766593()) || Global_91538.f_1361)
	{
		bVar0 = false;
	}
	if ((bVar0 && unk_0x3CEEA45E4779F6BD(2, 201)) || (bVar0 && Local_125.f_6))
	{
		if (!func_371())
		{
			if (iLocal_101 == 0)
			{
				if (func_302())
				{
					iLocal_107 = -1;
					iLocal_106 = 1;
					iLocal_105 = 1;
				}
			}
			else if (iLocal_101 == iLocal_102)
			{
				if (func_297())
				{
					if (func_292())
					{
						iLocal_107 = 50;
						iLocal_106 = 1;
						iLocal_105 = 1;
					}
				}
			}
			else if (func_297())
			{
				if (func_296(iLocal_108[(iLocal_101 - 1)]))
				{
					iLocal_106 = 1;
					iLocal_105 = 1;
					iLocal_107 = iLocal_108[(iLocal_101 - 1)];
				}
			}
		}
		else
		{
			iLocal_123 = 1;
		}
	}
	else if (!bVar0)
	{
	}
	else if (unk_0x3CEEA45E4779F6BD(2, 202) || Local_125.f_7)
	{
		iLocal_106 = 1;
	}
	else if ((unk_0x3CEEA45E4779F6BD(2, 188) && func_333(&uLocal_124, &(Local_125.f_4), 1)) || (Local_125.f_8 && func_333(&uLocal_124, &(Local_125.f_4), 1)))
	{
		if (Local_125.f_4 > 0)
		{
			iLocal_101 = (iLocal_101 - 1);
			if (iLocal_101 < 0)
			{
				iLocal_101 = (iLocal_100 - 1);
			}
			func_334(iLocal_101, 1, 1);
		}
	}
	else if ((unk_0x3CEEA45E4779F6BD(2, 187) && func_333(&uLocal_124, &(Local_125.f_4), 1)) || (Local_125.f_9 && func_333(&uLocal_124, &(Local_125.f_4), 1)))
	{
		if (Local_125.f_4 < 0)
		{
			iLocal_101++;
			if (iLocal_101 > (iLocal_100 - 1))
			{
				iLocal_101 = 0;
			}
			func_334(iLocal_101, 1, 1);
		}
	}
	unk_0x7FE30C99EA3439F7(7);
	unk_0x7FE30C99EA3439F7(8);
	unk_0x7FE30C99EA3439F7(9);
}

int func_333(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 150;
	if (bParam2)
	{
		if (((unk_0xD464BA52FA359903(2, 188) || unk_0x49A01EDAEB73491F(2, 219) < -0.3f) || unk_0xD464BA52FA359903(2, 241)) || unk_0x3CEEA45E4779F6BD(2, 188))
		{
			if (unk_0xD464BA52FA359903(2, 241))
			{
				iVar1 = 100;
			}
			if (unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(*uParam0, unk_0x7414B386C0020BEC())) > iVar1)
			{
				*uParam0 = unk_0x7414B386C0020BEC();
				iVar0 = 1;
				*uParam1 = 1;
			}
		}
		if (((unk_0xD464BA52FA359903(2, 187) || unk_0x49A01EDAEB73491F(2, 219) > 0.3f) || unk_0xD464BA52FA359903(2, 242)) || unk_0x3CEEA45E4779F6BD(2, 187))
		{
			if (unk_0xD464BA52FA359903(2, 242))
			{
				iVar1 = 100;
			}
			if (unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(*uParam0, unk_0x7414B386C0020BEC())) > iVar1)
			{
				*uParam0 = unk_0x7414B386C0020BEC();
				iVar0 = 1;
				*uParam1 = -1;
			}
		}
	}
	else
	{
		if ((unk_0xD464BA52FA359903(2, 190) || unk_0x49A01EDAEB73491F(2, 218) > 0.3f) || unk_0x4A7B4687474BFAAE(2, 201))
		{
			if (unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(*uParam0, unk_0x7414B386C0020BEC())) > iVar1)
			{
				*uParam0 = unk_0x7414B386C0020BEC();
				iVar0 = 1;
				*uParam1 = 1;
			}
		}
		if (unk_0xD464BA52FA359903(2, 189) || unk_0x49A01EDAEB73491F(2, 218) < -0.3f)
		{
			if (unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(*uParam0, unk_0x7414B386C0020BEC())) > iVar1)
			{
				*uParam0 = unk_0x7414B386C0020BEC();
				iVar0 = 1;
				*uParam1 = -1;
			}
		}
	}
	return iVar0;
}

void func_334(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17290.f_5606 = iParam0;
	Global_17290.f_5741 = iParam2;
	if (Global_17290.f_5606 < Global_17290.f_5605)
	{
		Global_17290.f_5605 = Global_17290.f_5606;
	}
	else if ((Global_17290.f_5599 && Global_17290.f_5606 > Global_17290.f_5607) || (!Global_17290.f_5599 && Global_17290.f_5606 >= (Global_17290.f_5605 + Global_17290.f_5095)))
	{
		iVar0 = Global_17290.f_5605;
		while (iVar0 <= Global_17290.f_5606)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_17290.f_4959[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17290.f_5095 && Global_17290.f_5605 < 128)
		{
			Global_17290.f_5605++;
			iVar1 = 0;
			iVar0 = Global_17290.f_5605;
			while (iVar0 <= Global_17290.f_5606)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_17290.f_4959[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17290.f_5598 = 0;
	Global_17290.f_5599 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17290.f_4562), "", 16);
		StringCopy(&(Global_2593914.f_21), "", 16);
	}
}

void func_335()
{
	struct<4> Var0;
	char* sVar4;
	int iVar5;
	bool bVar6;
	
	func_349(0);
	func_348("PAH_QUICK_1");
	func_347(1, 2, 1, 1, 1);
	func_346(1, 1, 0, 0, 0);
	iLocal_100 = 0;
	Var0 = { func_345(func_182(5, -1)) };
	sVar4 = func_344(&Var0);
	bLocal_114 = func_302();
	bLocal_115 = func_297();
	func_340(iLocal_100, sVar4, 0, bLocal_114, 0, 0);
	iLocal_100++;
	iVar5 = 0;
	while (iVar5 < 5)
	{
		if (func_339(iVar5) > 0)
		{
			if (func_173(func_339(iVar5)))
			{
				iLocal_108[iVar5] = func_339(iVar5);
				uLocal_117[iVar5] = func_296(iLocal_108[iVar5]);
				if (bLocal_115)
				{
					bVar6 = uLocal_117[iVar5];
				}
				else
				{
					bVar6 = false;
				}
				func_340(iLocal_100, func_338(iLocal_108[iVar5]), 0, bVar6, 0, 0);
				iLocal_100++;
			}
		}
		iVar5++;
	}
	bLocal_116 = (func_292() && bLocal_115);
	if (func_272(unk_0xFB6B3EEFAB2DD12C()))
	{
		func_340(iLocal_100, func_337(func_273(unk_0xFB6B3EEFAB2DD12C())), 0, bLocal_116, 0, 0);
		iLocal_102 = iLocal_100;
		iLocal_100++;
	}
	func_336(201, "ITEM_SELECT", -1, 0);
	func_336(202, "ITEM_BACK", -1, 0);
	func_334(iLocal_101, 1, 1);
}

void func_336(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0xE78ECEC3BC74DC0C(2, iParam0, 1);
	if (Global_17290.f_4639 >= 12)
	{
		StringCopy(&Global_2593914, sVar0, 64);
		StringCopy(&(Global_2593914.f_16), sParam1, 16);
		Global_2593914.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0xB8A73E7DA87B2968(&(Global_17290.f_4922), Global_17290.f_4639);
	}
	StringCopy(&(Global_17290.f_4641[Global_17290.f_4639 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17290.f_4834[Global_17290.f_4639 /*4*/]), sParam1, 16);
	Global_17290.f_4883[Global_17290.f_4639] = iParam2;
	Global_17290.f_4896[Global_17290.f_4639] = iParam0;
	Global_17290.f_4909[Global_17290.f_4639] = 32;
	Global_17290.f_4639++;
}

char* func_337(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MP_WAREHOUSE_1";
		
		case 2:
			return "MP_WAREHOUSE_2";
		
		case 3:
			return "MP_WAREHOUSE_3";
		
		case 4:
			return "MP_WAREHOUSE_4";
		
		case 5:
			return "MP_WAREHOUSE_5";
		
		case 6:
			return "MP_WAREHOUSE_6";
		
		case 7:
			return "MP_WAREHOUSE_7";
		
		case 8:
			return "MP_WAREHOUSE_8";
		
		case 9:
			return "MP_WAREHOUSE_9";
		
		case 10:
			return "MP_WAREHOUSE_10";
		
		default:
	}
	return "";
}

char* func_338(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MP_WHOUSE_0";
			break;
		
		case 2:
			return "MP_WHOUSE_1";
			break;
		
		case 3:
			return "MP_WHOUSE_2";
			break;
		
		case 4:
			return "MP_WHOUSE_3";
			break;
		
		case 5:
			return "MP_WHOUSE_4";
			break;
		
		case 6:
			return "MP_WHOUSE_5";
			break;
		
		case 7:
			return "MP_WHOUSE_6";
			break;
		
		case 8:
			return "MP_WHOUSE_7";
			break;
		
		case 9:
			return "MP_WHOUSE_8";
			break;
		
		case 10:
			return "MP_WHOUSE_9";
			break;
		
		case 11:
			return "MP_WHOUSE_10";
			break;
		
		case 12:
			return "MP_WHOUSE_11";
			break;
		
		case 13:
			return "MP_WHOUSE_12";
			break;
		
		case 14:
			return "MP_WHOUSE_13";
			break;
		
		case 15:
			return "MP_WHOUSE_14";
			break;
		
		case 16:
			return "MP_WHOUSE_15";
			break;
		
		case 17:
			return "MP_WHOUSE_16";
			break;
		
		case 18:
			return "MP_WHOUSE_17";
			break;
		
		case 19:
			return "MP_WHOUSE_18";
			break;
		
		case 20:
			return "MP_WHOUSE_19";
			break;
		
		case 21:
			return "MP_WHOUSE_20";
			break;
		
		case 22:
			return "MP_WHOUSE_21";
			break;
	}
	return "";
}

int func_339(int iParam0)
{
	if (Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_80[iParam0 /*3*/] != 0)
	{
		return Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_80[iParam0 /*3*/];
	}
	return 0;
}

void func_340(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17290.f_5088 > iParam0)
	{
		return;
	}
	if (Global_17290.f_5088 >= 128)
	{
		return;
	}
	if (Global_17290.f_5090 >= 256)
	{
		return;
	}
	if (Global_17290.f_5610 < Global_17290.f_5608)
	{
		return;
	}
	if (Global_17290.f_5088 != iParam0)
	{
		Global_17290.f_5088 = iParam0;
		Global_17290.f_5089 = 0;
	}
	iVar0 = Global_17290.f_4926[Global_17290.f_5089];
	if (iVar0 != 1)
	{
		while (Global_17290.f_5089 < 4 && iVar0 != 1)
		{
			Global_17290.f_5089++;
			iVar0 = Global_17290.f_4926[Global_17290.f_5089];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17290.f_73[Global_17290.f_5090 /*6*/]), sParam1, 24);
	if (!unk_0xC55B9553B3EDADE9(sParam1) && !unk_0xA6AD4206830E160C(sParam1))
	{
	}
	Global_17290.f_1610[Global_17290.f_5090] = bParam3;
	Global_17290.f_1867[Global_17290.f_5090] = iParam4;
	Global_17290.f_5090++;
	if (!bParam3)
	{
		func_343(Global_17290.f_5088, 1);
	}
	else
	{
		func_343(Global_17290.f_5088, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_342(&(Global_17290.f_73[Global_17290.f_5090 /*6*/]));
		if (Global_17290.f_4945[Global_17290.f_5089])
		{
			func_326(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17290.f_4938[Global_17290.f_5089])
		{
			Global_17290.f_4938[Global_17290.f_5089] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_341(&(Global_17290.f_73[Global_17290.f_5090 /*6*/]));
			if (fVar4 > Global_17290.f_5612[iParam0])
			{
				Global_17290.f_5612[iParam0] = fVar4;
			}
		}
	}
	unk_0xB8A73E7DA87B2968(&(Global_17290.f_4959[iParam0]), Global_17290.f_5089);
	Global_17290.f_5089++;
	Global_17290.f_5611 = 1;
	Global_17290.f_5609 = (Global_17290.f_5090 - 1);
	Global_17290.f_5610 = 0;
	Global_17290.f_5608 = iParam2;
}

float func_341(char* sParam0)
{
	if (!unk_0xA6AD4206830E160C(sParam0))
	{
	}
	return unk_0xFBBB5045CB727AD7(0.35f, 0);
}

float func_342(char* sParam0)
{
	if (!unk_0x1C079483C9D16F36(uParam0))
	{
		if (unk_0x6D9FF4C899CD785F(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_311(0, 1, 0, 0, 0, 0, 0);
	unk_0x57D442E6F2D68C36(sParam0);
	return unk_0xC7F85398EB0970A0(1);
}

void func_343(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 32f));
	if (bParam1)
	{
		unk_0xB8A73E7DA87B2968(&(Global_17290.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0x4EA098C870B73AB7(&(Global_17290.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
}

var func_344(var uParam0)
{
	return uParam0;
}

struct<4> func_345(int iParam0)
{
	struct<4> Var0;
	
	switch (iParam0)
	{
		case 1:
			StringCopy(&Var0, "MP_PROP_1", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "MP_PROP_2", 16);
			break;
		
		case 3:
			StringCopy(&Var0, "MP_PROP_3", 16);
			break;
		
		case 4:
			StringCopy(&Var0, "MP_PROP_4", 16);
			break;
		
		case 5:
			StringCopy(&Var0, "MP_PROP_5", 16);
			break;
		
		case 6:
			StringCopy(&Var0, "MP_PROP_6", 16);
			break;
		
		case 7:
			StringCopy(&Var0, "MP_PROP_7", 16);
			break;
		
		case 8:
			StringCopy(&Var0, "MP_PROP_8", 16);
			break;
		
		case 9:
			StringCopy(&Var0, "MP_PROP_9", 16);
			break;
		
		case 10:
			StringCopy(&Var0, "MP_PROP_10", 16);
			break;
		
		case 11:
			StringCopy(&Var0, "MP_PROP_11", 16);
			break;
		
		case 12:
			StringCopy(&Var0, "MP_PROP_12", 16);
			break;
		
		case 13:
			StringCopy(&Var0, "MP_PROP_13", 16);
			break;
		
		case 14:
			StringCopy(&Var0, "MP_PROP_14", 16);
			break;
		
		case 15:
			StringCopy(&Var0, "MP_PROP_15", 16);
			break;
		
		case 16:
			StringCopy(&Var0, "MP_PROP_16", 16);
			break;
		
		case 17:
			StringCopy(&Var0, "MP_PROP_17", 16);
			break;
		
		case 18:
			StringCopy(&Var0, "MP_PROP_18", 16);
			break;
		
		case 19:
			StringCopy(&Var0, "MP_PROP_19", 16);
			break;
		
		case 20:
			StringCopy(&Var0, "MP_PROP_20", 16);
			break;
		
		case 21:
			StringCopy(&Var0, "MP_PROP_21", 16);
			break;
		
		case 22:
			StringCopy(&Var0, "MP_PROP_22", 16);
			break;
		
		case 23:
			StringCopy(&Var0, "MP_PROP_23", 16);
			break;
		
		case 24:
			StringCopy(&Var0, "MP_PROP_24", 16);
			break;
		
		case 25:
			StringCopy(&Var0, "MP_PROP_25", 16);
			break;
		
		case 26:
			StringCopy(&Var0, "MP_PROP_26", 16);
			break;
		
		case 27:
			StringCopy(&Var0, "MP_PROP_27", 16);
			break;
		
		case 28:
			StringCopy(&Var0, "MP_PROP_28", 16);
			break;
		
		case 29:
			StringCopy(&Var0, "MP_PROP_29", 16);
			break;
		
		case 30:
			StringCopy(&Var0, "MP_PROP_30", 16);
			break;
		
		case 31:
			StringCopy(&Var0, "MP_PROP_31", 16);
			break;
		
		case 32:
			StringCopy(&Var0, "MP_PROP_32", 16);
			break;
		
		case 33:
			StringCopy(&Var0, "MP_PROP_33", 16);
			break;
		
		case 34:
			StringCopy(&Var0, "MP_PROP_34", 16);
			break;
		
		case 35:
			StringCopy(&Var0, "MP_PROP_35", 16);
			break;
		
		case 36:
			StringCopy(&Var0, "MP_PROP_36", 16);
			break;
		
		case 37:
			StringCopy(&Var0, "MP_PROP_37", 16);
			break;
		
		case 38:
			StringCopy(&Var0, "MP_PROP_38", 16);
			break;
		
		case 39:
			StringCopy(&Var0, "MP_PROP_39", 16);
			break;
		
		case 40:
			StringCopy(&Var0, "MP_PROP_40", 16);
			break;
		
		case 41:
			StringCopy(&Var0, "MP_PROP_41", 16);
			break;
		
		case 42:
			StringCopy(&Var0, "MP_PROP_42", 16);
			break;
		
		case 43:
			StringCopy(&Var0, "MP_PROP_43", 16);
			break;
		
		case 44:
			StringCopy(&Var0, "MP_PROP_44", 16);
			break;
		
		case 45:
			StringCopy(&Var0, "MP_PROP_45", 16);
			break;
		
		case 46:
			StringCopy(&Var0, "MP_PROP_46", 16);
			break;
		
		case 47:
			StringCopy(&Var0, "MP_PROP_48", 16);
			break;
		
		case 48:
			StringCopy(&Var0, "MP_PROP_49", 16);
			break;
		
		case 49:
			StringCopy(&Var0, "MP_PROP_50", 16);
			break;
		
		case 50:
			StringCopy(&Var0, "MP_PROP_51", 16);
			break;
		
		case 51:
			StringCopy(&Var0, "MP_PROP_52", 16);
			break;
		
		case 52:
			StringCopy(&Var0, "MP_PROP_57", 16);
			break;
		
		case 53:
			StringCopy(&Var0, "MP_PROP_59", 16);
			break;
		
		case 54:
			StringCopy(&Var0, "MP_PROP_60", 16);
			break;
		
		case 55:
			StringCopy(&Var0, "MP_PROP_61", 16);
			break;
		
		case 56:
			StringCopy(&Var0, "MP_PROP_62", 16);
			break;
		
		case 57:
			StringCopy(&Var0, "MP_PROP_63", 16);
			break;
		
		case 58:
			StringCopy(&Var0, "MP_PROP_64", 16);
			break;
		
		case 59:
			StringCopy(&Var0, "MP_PROP_65", 16);
			break;
		
		case 60:
			StringCopy(&Var0, "MP_PROP_66", 16);
			break;
		
		case 61:
			StringCopy(&Var0, "MP_PROP_67", 16);
			break;
		
		case 62:
			StringCopy(&Var0, "MP_PROP_68", 16);
			break;
		
		case 63:
			StringCopy(&Var0, "MP_PROP_69", 16);
			break;
		
		case 64:
			StringCopy(&Var0, "MP_PROP_70", 16);
			break;
		
		case 65:
			StringCopy(&Var0, "MP_PROP_71", 16);
			break;
		
		case 66:
			StringCopy(&Var0, "MP_PROP_72", 16);
			break;
		
		case 67:
			StringCopy(&Var0, "MP_PROP_73", 16);
			break;
		
		case 68:
			StringCopy(&Var0, "MP_PROP_74", 16);
			break;
		
		case 69:
			StringCopy(&Var0, "MP_PROP_75", 16);
			break;
		
		case 70:
			StringCopy(&Var0, "MP_PROP_76", 16);
			break;
		
		case 71:
			StringCopy(&Var0, "MP_PROP_77", 16);
			break;
		
		case 72:
			StringCopy(&Var0, "MP_PROP_78", 16);
			break;
		
		case 83:
			StringCopy(&Var0, "MP_PROP_79", 16);
			break;
		
		case 84:
			StringCopy(&Var0, "MP_PROP_80", 16);
			break;
		
		case 85:
			StringCopy(&Var0, "MP_PROP_81", 16);
			break;
		
		case 73:
			StringCopy(&Var0, "MP_PROP_83", 16);
			break;
		
		case 74:
			StringCopy(&Var0, "MP_PROP_84", 16);
			break;
		
		case 75:
			StringCopy(&Var0, "MP_PROP_85", 16);
			break;
		
		case 76:
			StringCopy(&Var0, "MP_PROP_86", 16);
			break;
		
		case 77:
			StringCopy(&Var0, "MP_PROP_87", 16);
			break;
		
		case 78:
			StringCopy(&Var0, "MP_PROP_89", 16);
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var0, "MP_PROP_90", 16);
			break;
		
		case 80:
			StringCopy(&Var0, "MP_PROP_92", 16);
			break;
		
		case 81:
			StringCopy(&Var0, "MP_PROP_94", 16);
			break;
		
		case 82:
			StringCopy(&Var0, "MP_PROP_95", 16);
			break;
		
		case 86:
			StringCopy(&Var0, "PM_SPAWN_Y", 16);
			break;
		
		case 87:
			StringCopy(&Var0, "MP_PROP_OFF1", 16);
			break;
		
		case 88:
			StringCopy(&Var0, "MP_PROP_OFF2", 16);
			break;
		
		case 89:
			StringCopy(&Var0, "MP_PROP_OFF3", 16);
			break;
		
		case 90:
			StringCopy(&Var0, "MP_PROP_OFF4", 16);
			break;
		
		case 91:
			StringCopy(&Var0, "MP_PROP_CLUBH1", 16);
			break;
		
		case 92:
			StringCopy(&Var0, "MP_PROP_CLUBH2", 16);
			break;
		
		case 93:
			StringCopy(&Var0, "MP_PROP_CLUBH3", 16);
			break;
		
		case 94:
			StringCopy(&Var0, "MP_PROP_CLUBH4", 16);
			break;
		
		case 95:
			StringCopy(&Var0, "MP_PROP_CLUBH5", 16);
			break;
		
		case 96:
			StringCopy(&Var0, "MP_PROP_CLUBH6", 16);
			break;
		
		case 97:
			StringCopy(&Var0, "MP_PROP_CLUBH7", 16);
			break;
		
		case 98:
			StringCopy(&Var0, "MP_PROP_CLUBH8", 16);
			break;
		
		case 99:
			StringCopy(&Var0, "MP_PROP_CLUBH9", 16);
			break;
		
		case 100:
			StringCopy(&Var0, "MP_PROP_CLUBH10", 16);
			break;
		
		case 101:
			StringCopy(&Var0, "MP_PROP_CLUBH11", 16);
			break;
		
		case 102:
			StringCopy(&Var0, "MP_PROP_CLUBH12", 16);
			break;
		
		case 103:
		case 106:
		case 109:
		case 112:
			StringCopy(&Var0, "MP_PROP_OFFG1", 16);
			break;
		
		case 104:
		case 107:
		case 110:
		case 113:
			StringCopy(&Var0, "MP_PROP_OFFG2", 16);
			break;
		
		case 105:
		case 108:
		case 111:
		case 114:
			StringCopy(&Var0, "MP_PROP_OFFG3", 16);
			break;
		
		case 115:
			StringCopy(&Var0, "IE_WARE_1", 16);
			break;
	}
	return Var0;
}

void func_346(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17290.f_4926[0] = iParam0;
	Global_17290.f_4926[1] = iParam1;
	Global_17290.f_4926[2] = iParam2;
	Global_17290.f_4926[3] = iParam3;
	Global_17290.f_4926[4] = iParam4;
	Global_17290.f_5096 = 0;
	if (iParam0 != 0)
	{
		Global_17290.f_5096++;
	}
	if (iParam1 != 0)
	{
		Global_17290.f_5096++;
	}
	if (iParam2 != 0)
	{
		Global_17290.f_5096++;
	}
	if (iParam3 != 0)
	{
		Global_17290.f_5096++;
	}
	if (iParam4 != 0)
	{
		Global_17290.f_5096++;
	}
}

void func_347(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17290.f_4953[0] = iParam0;
	Global_17290.f_4953[1] = iParam1;
	Global_17290.f_4953[2] = iParam2;
	Global_17290.f_4953[3] = iParam3;
	Global_17290.f_4953[4] = iParam4;
}

void func_348(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_17290.f_1), sParam0, 16);
	Global_17290.f_68 = 0;
	Global_17290.f_69 = 0;
	Global_17290.f_70 = 0;
	Global_17290.f_71 = 0;
	Global_17290.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17290.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_349(bool bParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_17290.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17290.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2453012[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_17290.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17290.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17290.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17290.f_4959[iVar0] = 0;
		Global_17290.f_5097[iVar0] = 0;
		Global_17290.f_5226[iVar0] = 0;
		Global_17290.f_5746[iVar0] = 0f;
		Global_17290.f_5355[iVar0] = 0;
		Global_17290.f_5612[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17290.f_4926[iVar0] = 0;
		Global_17290.f_4938[iVar0] = 0f;
		Global_17290.f_4932[iVar0] = -1f;
		Global_17290.f_4945[iVar0] = 0;
		Global_17290.f_4953[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17290.f_4834[iVar0 /*4*/]), "", 16);
		Global_17290.f_4883[iVar0] = -1;
		Global_17290.f_4896[iVar0] = 353;
		Global_17290.f_4909[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 51)
	{
		StringCopy(&(Global_17290.f_5886[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17290.f_6703[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_2593914.f_16), "", 16);
	Global_2593914.f_20 = -1;
	Global_17290 = 0;
	Global_17290.f_5088 = 0;
	Global_17290.f_5089 = 0;
	Global_17290.f_5090 = 0;
	Global_17290.f_5092 = 0;
	Global_17290.f_5093 = 0;
	Global_17290.f_5094 = 0;
	Global_17290.f_5091 = 0;
	Global_17290.f_5741 = 0;
	Global_17290.f_5606 = 0;
	Global_17290.f_5605 = 0;
	Global_17290.f_5607 = 0;
	StringCopy(&(Global_17290.f_4562), "", 16);
	Global_17290.f_4632 = 0;
	Global_17290.f_4633 = 0;
	Global_17290.f_4634 = 0;
	Global_17290.f_4635 = 0;
	Global_17290.f_4636 = 0;
	Global_17290.f_4637 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17290.f_4566[iVar0] = 0;
		iVar0++;
	}
	Global_17290.f_4638 = 0;
	StringCopy(&(Global_2593914.f_21), "", 16);
	Global_2593914.f_61 = 0;
	Global_2593914.f_62 = 0;
	Global_2593914.f_63 = 0;
	Global_2593914.f_64 = 0;
	Global_2593914.f_65 = 0;
	Global_2593914.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_2593914.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_2593914.f_67 = 0;
	StringCopy(&(Global_17290.f_1), "", 16);
	Global_17290.f_4944 = 0f;
	Global_17290.f_68 = 0;
	Global_17290.f_69 = 0;
	Global_17290.f_70 = 0;
	Global_17290.f_71 = 0;
	Global_17290.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17290.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17290.f_5611 = 0;
	Global_17290.f_5610 = 0;
	Global_17290.f_5608 = 0;
	Global_17290.f_5609 = 0;
	Global_17290.f_4639 = 0;
	Global_17290.f_4640 = 0;
	Global_17290.f_5095 = 10;
	Global_17290.f_5096 = 0;
	Global_17290.f_5743 = 0f;
	Global_17290.f_5744 = 0f;
	Global_17290.f_5598 = 0;
	Global_17290.f_5599 = 0;
	Global_17290.f_5600 = 0f;
	Global_17290.f_5601 = 0;
	Global_17290.f_5603 = 0;
	Global_17290.f_5602 = 0;
	Global_17290.f_5604 = 0;
	Global_17290.f_7890 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17290.f_5875[iVar0] = -1;
		Global_17290.f_5878[iVar0] = -1;
		iVar0++;
	}
	Global_17290.f_4951 = 0f;
	Global_17290.f_4922 = 0;
	Global_17290.f_4952 = 0;
	iVar0 = 0;
	while (iVar0 < Global_17290.f_5881)
	{
		Global_17290.f_5881[iVar0] = 0;
		iVar0++;
	}
	Global_17290.f_7869 = 0;
	Global_17290.f_7864 = 0;
	Global_17290.f_7874 = 0;
	Global_17290.f_7879 = 0;
	Global_17290.f_7884 = 0;
	Global_17290.f_7886 = 0;
	Global_17290.f_7892 = 0;
	Global_17287 = 0.05f;
	Global_17288 = 0.05f;
	Global_17289 = 0.225f;
	fVar2 = unk_0x194EA65BE0B4C26F(0);
	if (bParam0)
	{
		Global_17289 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_17289 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_17289 = 0.225f;
	}
}

bool func_350(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_290(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17290.f_5505[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xC55B9553B3EDADE9(&(Global_17290.f_5505[iVar0 /*4*/])))
	{
		unk_0x68A99AC5778ED123(&(Global_17290.f_5505[iVar0 /*4*/]), 9);
		Global_17290.f_5498[iVar0] = 1;
		if (!unk_0xA4B9C538A4CD7B0F(&(Global_17290.f_5505[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xCB5E0E0EB67B3ECE("CommonMenu", 0);
	Global_17290.f_5484[iVar0] = 1;
	if (!unk_0xB3BFE702989F8358("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0xCB5E0E0EB67B3ECE("MPShopSale", 0);
		Global_17290.f_5491[iVar0] = 1;
		if (!unk_0xB3BFE702989F8358("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_17290.f_5530[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_351(&(Global_17290.f_5530[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_351(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x52622CA85B1C304B(*uParam0))
			{
				*uParam0 = unk_0x542F16A736FAC9A6(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x52622CA85B1C304B(*uParam0))
					{
						uParam0->f_8 = unk_0x84A97C70FFDEC0C8();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x84A97C70FFDEC0C8();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x52622CA85B1C304B(*uParam0))
			{
				uParam0->f_8 = unk_0x84A97C70FFDEC0C8();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x52622CA85B1C304B(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_352(var uParam0)
{
	func_361(uParam0, &(uParam0->f_1), &(uParam0->f_2), &(uParam0->f_3), 0);
	uParam0->f_6 = (unk_0x3CEEA45E4779F6BD(2, 201) || unk_0x55EB9D945CFDA4D8(2, 201));
	uParam0->f_7 = (unk_0x3CEEA45E4779F6BD(2, 202) || unk_0x55EB9D945CFDA4D8(2, 202));
	uParam0->f_8 = (uParam0->f_1 < -64 || unk_0x3CEEA45E4779F6BD(2, 188));
	uParam0->f_9 = (uParam0->f_1 > 64 || unk_0x3CEEA45E4779F6BD(2, 187));
	if (((((func_350(0, -1, 0) && unk_0xDEC2120B859399ED() == 0) && !unk_0x1BDA0BA180A0719B()) && !unk_0xF35D072F1A7DC0A4()) && !unk_0x976A3E0B7A766593()) && !Global_91538.f_1361)
	{
		if (unk_0x2D337DD29A7ABD30() && !unk_0x976A3E0B7A766593())
		{
			if (unk_0xB2AF9490CEB47B3B(2))
			{
				unk_0x2A29D86854DC4BC0(0, 1, 1);
				unk_0x2A29D86854DC4BC0(0, 2, 1);
				unk_0x2A29D86854DC4BC0(2, 200, 1);
				unk_0x10D6B14E90725B6D(0, 237, 1);
				unk_0x10D6B14E90725B6D(0, 238, 1);
				unk_0x10D6B14E90725B6D(0, 241, 1);
				unk_0x10D6B14E90725B6D(0, 242, 1);
				if ((Global_2593990 == -1 || Global_2593990 == -4) || Global_2593990 == -6)
				{
					unk_0x10D6B14E90725B6D(1, 1, 1);
					unk_0x10D6B14E90725B6D(1, 2, 1);
				}
				else
				{
					unk_0x2A29D86854DC4BC0(1, 1, 1);
					unk_0x2A29D86854DC4BC0(1, 2, 1);
				}
				func_358(0, 0, 0, 1);
				func_357(0, -1, 1);
			}
			if (func_356())
			{
				if (Global_2593990 == iLocal_101)
				{
					uParam0->f_6 = 1;
				}
				else
				{
					iLocal_101 = Global_2593990;
					func_334(iLocal_101, 1, 1);
				}
			}
			if (func_355())
			{
				uParam0->f_7 = 1;
			}
			if (func_354(0, 0, 0))
			{
				uParam0->f_8 = 1;
			}
			if (func_353(0, 0, 0))
			{
				uParam0->f_9 = 1;
			}
		}
	}
}

int func_353(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xDC1EFAABB6EF8F7F(2))
	{
		if (Global_2593990 == -3)
		{
			if ((unk_0xF334707DE9C8DE80(2, 237) && iParam0) || unk_0x3CEEA45E4779F6BD(2, 237))
			{
				return 1;
			}
		}
		if (iParam2 == 0)
		{
			if (unk_0xF334707DE9C8DE80(2, 242) || (unk_0xD464BA52FA359903(2, 242) && iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_354(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xDC1EFAABB6EF8F7F(2))
	{
		if (Global_2593990 == -2)
		{
			if ((unk_0xF334707DE9C8DE80(2, 237) && iParam0) || unk_0x3CEEA45E4779F6BD(2, 237))
			{
				return 1;
			}
		}
		if (iParam2 == 0)
		{
			if (unk_0xF334707DE9C8DE80(2, 241) || (unk_0xD464BA52FA359903(2, 241) && iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_355()
{
	if (unk_0xDC1EFAABB6EF8F7F(2))
	{
		if (unk_0x3CEEA45E4779F6BD(2, 238))
		{
			return 1;
		}
	}
	return 0;
}

int func_356()
{
	if (unk_0xDC1EFAABB6EF8F7F(2))
	{
		if (Global_2593990 > -1)
		{
			if (unk_0x3CEEA45E4779F6BD(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_357(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0xDC1EFAABB6EF8F7F(2))
	{
		return 0;
	}
	if (unk_0x6AAF285DC78E0304() || unk_0xF35D072F1A7DC0A4())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0x3FCD624098F3BEED();
	}
	if (Global_2593990 == -6)
	{
		unk_0x6AFF68FA662160F0(4);
		if (iParam0 && unk_0xF334707DE9C8DE80(2, 237))
		{
			return 1;
		}
		else
		{
			Global_2593990 = -1;
			return 0;
		}
	}
	if (((Global_2593990 > -1 || Global_2593990 == -3) || Global_2593990 == -2) || unk_0x6B0CA192CBB0448D())
	{
		unk_0x6AFF68FA662160F0(1);
		return 0;
	}
	if (Global_2593990 == -1 && iParam0)
	{
		if (unk_0xF334707DE9C8DE80(2, 237))
		{
			unk_0x6AFF68FA662160F0(4);
			Global_2593990 = -6;
			return 1;
		}
		else
		{
			unk_0x6AFF68FA662160F0(3);
			return 0;
		}
	}
	unk_0x6AFF68FA662160F0(1);
	return 0;
}

void func_358(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!unk_0xDC1EFAABB6EF8F7F(2))
	{
		Global_2593990 = -1;
		return;
	}
	unk_0x88DE74AEE27B9226(1);
	fVar0 = Global_17287;
	fVar2 = (fVar0 + Global_17289);
	fVar3 = Global_17290.f_5600;
	fVar1 = (Global_17290.f_5600 - (IntToFloat(Global_17290.f_5602) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_17290.f_5602 < 1)
	{
		fVar1 = (Global_17290.f_5600 - 0.034722f);
	}
	unk_0x8C8A1913314B5A90(76, 84);
	unk_0x296FDBBCECD446ED(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0x15AEB7AC36092E93(fVar0, fVar1, &fVar0, &fVar1);
	unk_0x15AEB7AC36092E93(fVar2, fVar3, &fVar2, &fVar3);
	unk_0xCEC227FFDAB08FF3();
	func_360();
	if (Global_2593990 == -6)
	{
		return;
	}
	Global_2593990 = -1;
	fVar7 = Global_2593984;
	fVar8 = Global_2593985;
	if (Global_17290.f_5603 > Global_17290.f_5602)
	{
		if (((Global_2593984 >= fVar0 && Global_2593984 <= fVar2) && Global_2593985 >= fVar3) && Global_2593985 < (fVar3 + fVar6))
		{
			Global_2593990 = -2;
			if (bParam3)
			{
				func_359(0);
			}
			return;
		}
		if (((Global_2593984 >= fVar0 && Global_2593984 <= fVar2) && Global_2593985 >= (fVar3 + fVar6)) && Global_2593985 < (fVar3 + 0.034722f))
		{
			Global_2593990 = -3;
			if (bParam3)
			{
				func_359(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = unk_0xF34EE736CF047844((fVar9 / 0.034722f));
		if (Global_17290.f_5603 == -1)
		{
			Global_2593990 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_17290.f_5602);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0x8C8A1913314B5A90(76, 84);
				unk_0x296FDBBCECD446ED(-0.05f, -0.05f, 0f, 0f);
				func_321(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_17289, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0xCEC227FFDAB08FF3();
			}
		}
		Global_2593990 = Global_17290.f_7520[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_2593990 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_2593990 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_2593990 = -4;
		return;
	}
	Global_2593990 = -1;
}

void func_359(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_17287;
	fVar1 = Global_17290.f_5600;
	unk_0x8C8A1913314B5A90(76, 84);
	unk_0x296FDBBCECD446ED(-0.05f, -0.05f, 0f, 0f);
	if (Global_2593990 == -2)
	{
		func_321(fVar0, fVar1, Global_17289, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_2593990 == -3)
	{
		func_321(fVar0, (fVar1 + fVar2), Global_17289, fVar2, 255, 255, 255, iVar3);
	}
	unk_0xCEC227FFDAB08FF3();
}

void func_360()
{
	Global_2593986 = Global_2593984;
	Global_2593987 = Global_2593985;
	Global_2593984 = unk_0x18E93C7ABCA08D6C(2, 239);
	Global_2593985 = unk_0x18E93C7ABCA08D6C(2, 240);
	Global_2593988 = (Global_2593984 - Global_2593986);
	Global_2593989 = (Global_2593985 - Global_2593987);
}

void func_361(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x49A01EDAEB73491F(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x49A01EDAEB73491F(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x49A01EDAEB73491F(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x49A01EDAEB73491F(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x18E93C7ABCA08D6C(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0x18E93C7ABCA08D6C(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x18E93C7ABCA08D6C(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0x18E93C7ABCA08D6C(2, 221) * 127f));
		}
	}
}

void func_362()
{
	int iVar0;
	
	iVar0 = iLocal_1176;
	if (unk_0xB529B2A4B7C64D6D(iVar0, 0))
	{
		return;
	}
	if (unk_0x4A478FA962FF575A(iVar0))
	{
		unk_0xB536593BB07E0624(iVar0, 0);
		unk_0x9B43E8C10DA34371(iVar0, 1);
		unk_0xAFC3B32426D08964(iVar0, 4);
		if (unk_0xF7E41E4E5E67E2CB(iVar0) != 0 && unk_0xF7E41E4E5E67E2CB(iVar0) != 1)
		{
			unk_0x4EA098C870B73AB7(&iLocal_265, 15);
		}
	}
}

int func_363()
{
	if (((((Local_135.f_27 && func_372()) && (!func_365(1) || func_300())) && ((func_274() || func_272(unk_0xFB6B3EEFAB2DD12C())) || func_302())) && func_364()) && (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0) && unk_0x1774A68441553185(unk_0xD5A676B97920D126(), 1785177548) != 1))
	{
		return 1;
	}
	return 0;
}

int func_364()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	float fVar9;
	
	if (iLocal_1179)
	{
		return iLocal_1180;
	}
	if (unk_0x7887B64A08364778(iLocal_1176) && !unk_0xB529B2A4B7C64D6D(iLocal_1176, 0))
	{
		iVar1 = unk_0x7D44D16B4A9E941E(iLocal_1176) + 1;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!unk_0x06F2E112EBC0C4FB(iLocal_1176, (iVar0 - 1), 0))
			{
				iVar2 = unk_0x98BE504E8B389665(iLocal_1176, (iVar0 - 1), 0);
				if (!unk_0x00B5B0B68211D89B(iVar2))
				{
					if (unk_0xBEC34BF6B72C417A(iVar2))
					{
						if (!func_213(unk_0x61263E0F7C8C9996(iVar2)))
						{
							iLocal_1180 = 0;
							iLocal_1179 = 1;
							return 0;
						}
					}
					else if (unk_0x2A29BF08180E7ADF(iVar2))
					{
						if (!unk_0x67F42C4B7B64C593(iVar2, 1))
						{
							return 0;
						}
					}
				}
			}
			iVar0++;
		}
		iVar3 = 0;
		while (iVar3 < 32)
		{
			iVar4 = iVar3;
			if (!iVar4 == unk_0xFB6B3EEFAB2DD12C())
			{
				if (func_130(iVar4, 1, 1))
				{
					iVar5 = unk_0x4572B13EE70C8F52(iVar4);
					if (unk_0x7887B64A08364778(iVar5) && !unk_0xB529B2A4B7C64D6D(iVar5, 0))
					{
						Var6 = { func_166(iVar4) };
						fVar9 = unk_0x2A488C176D52CCA5(Var6, unk_0xC086F8D75730FA3A(iLocal_1176, 1));
						if (fVar9 < 20f)
						{
							if (unk_0x19912132A3CBAD3C(iVar5) == iLocal_1176)
							{
								if (!func_213(iVar4))
								{
									iLocal_1180 = 0;
									iLocal_1179 = 1;
									return 0;
								}
							}
						}
					}
				}
			}
			iVar3++;
		}
	}
	iLocal_1180 = 1;
	iLocal_1179 = 1;
	return 1;
}

bool func_365(bool bParam0)
{
	return func_366(unk_0xFB6B3EEFAB2DD12C(), bParam0);
}

bool func_366(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_301(iParam0))
		{
			return 0;
		}
	}
	return Global_1618089[iParam0 /*390*/].f_11 != func_4();
}

void func_367()
{
	var uVar0;
	
	if (!unk_0xF44A5E894FE76438(iLocal_265, 13))
	{
		if (!unk_0xA14FC57CB26C2B67())
		{
			uVar0 = func_7(1185, -1, 0);
			if (!unk_0xF44A5E894FE76438(uVar0, 22) || !unk_0xF44A5E894FE76438(iVar0, 23))
			{
				func_368("HTX_HELP2", -1);
				if (!unk_0xF44A5E894FE76438(iVar0, 22))
				{
					unk_0xB8A73E7DA87B2968(&iVar0, 22);
				}
				else
				{
					unk_0xB8A73E7DA87B2968(&iVar0, 23);
				}
				func_206(1185, iVar0, -1, 1, 0);
				unk_0xB8A73E7DA87B2968(&iLocal_265, 13);
			}
			else
			{
				unk_0xB8A73E7DA87B2968(&iLocal_265, 13);
			}
		}
	}
}

void func_368(char* sParam0, int iParam1)
{
	unk_0xA97D81951B964419(sParam0);
	unk_0x6F67ABEECD80675B(0, 0, 1, iParam1);
}

void func_369(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<6> Var0;
	
	Var0.f_0 = 515;
	Var0.f_1 = unk_0xFB6B3EEFAB2DD12C();
	Var0.f_2 = iParam1;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam0;
	Var0.f_3 = iParam2;
	if (!iParam0 == 0)
	{
		unk_0xA56AA396FE05B9EC(1, &Var0, 6, iParam0);
	}
}

int func_370(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar1 = iLocal_1176;
	if (unk_0xB529B2A4B7C64D6D(iVar1, 0))
	{
		return 0;
	}
	iVar2 = unk_0xB84CC33D90EA2EDD(unk_0xA0A4DA31DEDFAC4F(iVar1));
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		iVar5 = (iVar3 - 1);
		if (!unk_0x06F2E112EBC0C4FB(iVar1, iVar5, 0))
		{
			iVar4 = unk_0x61263E0F7C8C9996(unk_0x98BE504E8B389665(iVar1, iVar5, 0));
			if (iVar4 != func_4() && func_130(iVar4, 1, 1))
			{
				if (!Local_135.f_28 == iVar4 || iParam0)
				{
					unk_0xB8A73E7DA87B2968(&uVar0, iVar4);
				}
			}
		}
		iVar3++;
	}
	return uVar0;
}

int func_371()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var7;
	
	iVar3 = iLocal_1176;
	if (unk_0xB529B2A4B7C64D6D(iVar3, 0))
	{
		return 0;
	}
	Var4 = { unk_0xC086F8D75730FA3A(iVar3, 1) };
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = unk_0x7A4693BB354F3CD3(iVar2);
		if (func_130(iVar0, 1, 1))
		{
			iVar1 = unk_0x4572B13EE70C8F52(iVar0);
			if (!unk_0xB529B2A4B7C64D6D(iVar1, 0))
			{
				Var7 = { unk_0xC086F8D75730FA3A(iVar1, 1) };
				if (unk_0x2A488C176D52CCA5(Var7, Var4) < 30f)
				{
					if (unk_0x04D83291EB9DE51D(iVar1, iVar3, 1))
					{
						if (!unk_0xE4133A0C3C6C74A7(iVar1, iVar3))
						{
							return 1;
						}
					}
				}
			}
		}
		iVar2++;
	}
	return 0;
}

bool func_372()
{
	return func_182(5, -1) > 0;
}

var func_373(char* sParam0)
{
	unk_0xB57C4257E4B22B1A(sParam0);
	return unk_0x39EEBD00DF395566(0);
}

int func_374(int iParam0, int iParam1)
{
	if (unk_0x6AAF285DC78E0304())
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (func_285())
		{
			return 0;
		}
	}
	if (func_145())
	{
		return 0;
	}
	if (iParam1 == 1)
	{
		if (func_129(0))
		{
			return 0;
		}
	}
	if (func_82(8, -1))
	{
		return 0;
	}
	if (unk_0x1BDA0BA180A0719B())
	{
		return 0;
	}
	if (func_34())
	{
		return 0;
	}
	if (Global_52999)
	{
		return 0;
	}
	if (Global_68127)
	{
		return 0;
	}
	if (unk_0xF35D072F1A7DC0A4())
	{
		return 0;
	}
	if (Global_1315157)
	{
		return 0;
	}
	if (Global_1574109)
	{
		return 0;
	}
	return 1;
}

void func_375()
{
	bool bVar0;
	
	if (!unk_0xF44A5E894FE76438(Local_168[unk_0x1E7FB1CA38C403F6() /*3*/].f_1, 7))
	{
		bVar0 = false;
		if (unk_0xDC1EFAABB6EF8F7F(0))
		{
			if (unk_0xD464BA52FA359903(0, 22))
			{
				bVar0 = true;
			}
		}
		else if (unk_0xD464BA52FA359903(0, 99) || unk_0xD464BA52FA359903(0, 100))
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (!func_283())
			{
				bVar0 = false;
			}
		}
		if (bVar0)
		{
			if (((((((!func_137(iLocal_1176) && unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_1176, 0)) && unk_0x98BE504E8B389665(iLocal_1176, 0, 0) != unk_0xD5A676B97920D126()) && unk_0x78D3CDB884C74FEB(iLocal_1176) < 10f) && unk_0x1774A68441553185(unk_0xD5A676B97920D126(), -275944640) != 1) && unk_0x1774A68441553185(unk_0xD5A676B97920D126(), -275944640) != 0) && func_374(1, 1)) && unk_0x8E18E47D6CD6AB43(iLocal_1176) < 40f)
			{
				if (func_109(&uLocal_1154, 275, 0))
				{
					unk_0x37338B7B7C4982DC(unk_0xD5A676B97920D126());
					unk_0x32A1C5733ECAEEED(unk_0xD5A676B97920D126(), 1092616192);
					unk_0xB8A73E7DA87B2968(&(Local_168[unk_0x1E7FB1CA38C403F6() /*3*/].f_1), 7);
				}
			}
			else if (func_201(&uLocal_1154))
			{
				func_128(&uLocal_1154);
			}
		}
		else if (func_201(&uLocal_1154))
		{
			func_128(&uLocal_1154);
		}
	}
}

void func_376()
{
	if (!unk_0xF44A5E894FE76438(iLocal_265, 12))
	{
		Global_1573902 = 1;
		unk_0xB8A73E7DA87B2968(&iLocal_265, 12);
	}
}

void func_377()
{
	if (unk_0x6901135DDCC4904D(uLocal_266))
	{
		unk_0x8A3D7569826A325D(&uLocal_266);
	}
}

void func_378()
{
	if (unk_0xF44A5E894FE76438(iLocal_265, 12))
	{
		Global_1573902 = 0;
		unk_0x4EA098C870B73AB7(&iLocal_265, 12);
	}
}

void func_379()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (((((func_130(unk_0xFB6B3EEFAB2DD12C(), 1, 1) && unk_0x108650178993C477(unk_0xD5A676B97920D126(), iLocal_1176, 15f, 15f, 5f, 0, 1, 0)) && !unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1)) && unk_0x78D3CDB884C74FEB(iLocal_1176) < 5f) && !func_380(iLocal_1176, 0)) && func_374(1, 0))
	{
		unk_0xB8A73E7DA87B2968(&iLocal_265, 2);
		if (unk_0xF44A5E894FE76438(Local_168[unk_0x1E7FB1CA38C403F6() /*3*/].f_1, 0))
		{
			func_361(&iVar0, &iVar1, &uVar2, &uVar3, 0);
			if (((iVar1 > 28 || iVar1 < -28) || iVar0 > 28) || iVar0 < -28)
			{
				if (iLocal_271 == 0)
				{
					unk_0xC1B1E9A034A63A62(0);
					iLocal_271 = 1;
				}
			}
			else
			{
				iLocal_271 = 0;
			}
			if (iLocal_271 == 1)
			{
				if (unk_0x83666F9FB8FEBD4B() > 275)
				{
					if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
					{
						unk_0x37338B7B7C4982DC(unk_0xD5A676B97920D126());
						unk_0x4EA098C870B73AB7(&(Local_168[unk_0x1E7FB1CA38C403F6() /*3*/].f_1), 0);
						iLocal_271 = 0;
					}
				}
			}
		}
		else
		{
			unk_0xB8A73E7DA87B2968(&iLocal_265, 2);
		}
	}
	else
	{
		unk_0x4EA098C870B73AB7(&iLocal_265, 2);
		if (unk_0xF44A5E894FE76438(Local_168[unk_0x1E7FB1CA38C403F6() /*3*/].f_1, 0))
		{
			if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
			{
				unk_0x37338B7B7C4982DC(unk_0xD5A676B97920D126());
				iLocal_271 = 0;
			}
			unk_0x4EA098C870B73AB7(&(Local_168[unk_0x1E7FB1CA38C403F6() /*3*/].f_1), 0);
		}
	}
}

int func_380(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0xB529B2A4B7C64D6D(iParam0, 0))
	{
		iVar1 = unk_0x7D44D16B4A9E941E(iParam0) + 1;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (unk_0x06F2E112EBC0C4FB(iParam0, (iVar0 - 1), 0))
			{
				return 0;
			}
			else if (!bParam1)
			{
				iVar2 = unk_0x98BE504E8B389665(iParam0, (iVar0 - 1), 0);
				if (unk_0x00B5B0B68211D89B(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

void func_381()
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Local_135.f_24 != 4)
	{
		if (unk_0xF44A5E894FE76438(iLocal_265, 8))
		{
			unk_0x4EA098C870B73AB7(&iLocal_265, 8);
		}
	}
	if (!func_136(Local_135.f_4) && !func_137(iLocal_1176))
	{
		if (unk_0x50CED8EEAE806923(Local_135.f_4) || (!unk_0x7577EA45D81AA1C8(Local_135.f_4) && unk_0x04DE35D10A718EEF()))
		{
			func_396();
			func_395();
			switch (Local_135.f_24)
			{
				case 0:
					break;
				
				case 1:
					if (unk_0x1774A68441553185(unk_0x9E9133ACB2BCC1D5(Local_135.f_4), -1273030092) != 1 && unk_0x1774A68441553185(unk_0x9E9133ACB2BCC1D5(Local_135.f_4), -1273030092) != 0)
					{
						if (unk_0xF44A5E894FE76438(iLocal_265, 4))
						{
							unk_0x03B9FE5FECB7D9B3(unk_0x9E9133ACB2BCC1D5(Local_135.f_4), iLocal_1176, 0, 0, Local_135.f_6, 19, 30f, 7.5f, Local_135.f_9, unk_0xF2DB717A73826179(10f), unk_0xF2DB717A73826179(10f), -1082130432, 8225);
							unk_0x4EA098C870B73AB7(&iLocal_265, 17);
						}
					}
					else if (!unk_0xF44A5E894FE76438(iLocal_265, 4))
					{
						func_157();
					}
					else if (unk_0x1774A68441553185(unk_0x9E9133ACB2BCC1D5(Local_135.f_4), -1273030092) == 1)
					{
						if (Local_135.f_9 > -1f)
						{
							if (unk_0x1AAFFE4111587B35(unk_0x9E9133ACB2BCC1D5(Local_135.f_4), Local_135.f_6, (7.5f + 5f), (7.5f + 5f), 50f, 0, 1, 0))
							{
								fVar0 = unk_0x714F015B4D2DE1DC(unk_0x9E9133ACB2BCC1D5(Local_135.f_4));
								fVar1 = (fVar0 - Local_135.f_9);
								if (fVar1 < 0f)
								{
									fVar1 = (fVar1 + 360f);
								}
								if (fVar1 > 180f)
								{
									fVar1 = (360f - fVar1);
								}
							}
						}
					}
					break;
				
				case 2:
					if (iLocal_962 != 2)
					{
						func_157();
						iLocal_962 = 2;
					}
					if (unk_0x1774A68441553185(unk_0x9E9133ACB2BCC1D5(Local_135.f_4), -1273030092) != 1 && unk_0x1774A68441553185(unk_0x9E9133ACB2BCC1D5(Local_135.f_4), -1273030092) != 0)
					{
						unk_0x03B9FE5FECB7D9B3(unk_0x9E9133ACB2BCC1D5(Local_135.f_4), iLocal_1176, 0, 0, Local_135.f_10, 4, 30f, 7.5f, -1f, 40, 40, -1082130432, 0);
					}
					break;
				
				case 3:
					break;
				
				case 4:
					if (iLocal_962 != 4)
					{
						if (iLocal_962 != 3)
						{
							func_157();
						}
						if (iLocal_962 == 3)
						{
							Local_135.f_20 = { unk_0xC086F8D75730FA3A(iLocal_1176, 1) };
						}
						else
						{
							Local_135.f_20 = { 0f, 0f, 0f };
						}
						iLocal_962 = 4;
					}
					else if (unk_0x652D2EEEF1D3E62C(Local_135.f_20) > 0f)
					{
						if (unk_0x2A488C176D52CCA5(unk_0xC086F8D75730FA3A(iLocal_1176, 1), Local_135.f_20) > 10f)
						{
							if (unk_0x1774A68441553185(unk_0x9E9133ACB2BCC1D5(Local_135.f_4), -1273030092) != 1 && unk_0x1774A68441553185(unk_0x9E9133ACB2BCC1D5(Local_135.f_4), -1273030092) != 0)
							{
								unk_0x03B9FE5FECB7D9B3(unk_0x9E9133ACB2BCC1D5(Local_135.f_4), iLocal_1176, 0, 0, Local_135.f_20, 4, 30f, 7.5f, -1f, 40, 40, -1082130432, 0);
							}
						}
					}
					if (!unk_0xF44A5E894FE76438(iLocal_265, 8) && unk_0xF44A5E894FE76438(Local_135.f_1, 14))
					{
						if (func_197())
						{
							if (func_144())
							{
								func_108(&uLocal_967, 3, unk_0x9E9133ACB2BCC1D5(Local_135.f_4), "FM_Pilot", 0, 1);
								if (!bLocal_167)
								{
									func_196(&uLocal_967, "CT_AUD", "MPCT_HPidle", 12, 0, 0, 1);
								}
								else
								{
									func_394(&uLocal_967, "CT_AUD", "MPCT_HPidle", "MPCT_HPidle_06", 12, 0, 0);
								}
							}
							else
							{
								func_11(1);
								func_108(&uLocal_967, 2, unk_0x9E9133ACB2BCC1D5(Local_135.f_4), "EXEC_PILOT", 0, 1);
								if (!bLocal_167)
								{
									func_91(&uLocal_967, "EXHELAU", "EXHEL_IDLE", 12, 0, 0, 1);
								}
								else
								{
									func_393(&uLocal_967, "EXHELAU", "EXHEL_IDLE", "EXHEL_IDLE_02", 12, 0, 0);
								}
							}
							unk_0xB8A73E7DA87B2968(&iLocal_265, 8);
						}
					}
					break;
				
				case 5:
					if (!unk_0x4A478FA962FF575A(iLocal_1176))
					{
						unk_0xF78A199036560454(iLocal_1176);
					}
					if (unk_0xF44A5E894FE76438(iLocal_265, 15))
					{
						func_362();
					}
					if (!unk_0xF44A5E894FE76438(iLocal_265, 14))
					{
						if (iLocal_962 != 5)
						{
							func_157();
							iLocal_962 = 5;
						}
						if (unk_0x1774A68441553185(unk_0x9E9133ACB2BCC1D5(Local_135.f_4), -1273030092) != 1 && unk_0x1774A68441553185(unk_0x9E9133ACB2BCC1D5(Local_135.f_4), -1273030092) != 0)
						{
							unk_0x03B9FE5FECB7D9B3(unk_0x9E9133ACB2BCC1D5(Local_135.f_4), iLocal_1176, 0, 0, Local_135.f_29, 4, 30f, 7.5f, -1f, 40, 40, -1082130432, 0);
						}
						if (func_392() && unk_0xF44A5E894FE76438(Local_135.f_1, 15))
						{
							if (unk_0x4A478FA962FF575A(iLocal_1176))
							{
								unk_0xBBAF4B768DDB7572(iLocal_1176, 1);
								func_157();
								if (iLocal_107 == -1)
								{
									if (unk_0xF44A5E894FE76438(iLocal_265, 19))
									{
										iVar2 = unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), uLocal_1161);
										if (iVar2 > 10000)
										{
											unk_0xC66C0C38B6CD9B78();
											uLocal_1161 = unk_0x7414B386C0020BEC();
										}
									}
									else
									{
										uLocal_1161 = unk_0x7414B386C0020BEC();
										unk_0xB8A73E7DA87B2968(&iLocal_265, 19);
									}
									if (func_384(Local_135.f_29, 0f, 1, 0, 0, 0, 1, 0, 1, 0))
									{
										unk_0xB8A73E7DA87B2968(&iLocal_265, 14);
										unk_0x4EA098C870B73AB7(&iLocal_265, 19);
										if (iLocal_107 == -1 && !func_214(Local_135.f_5))
										{
											unk_0xBBAF4B768DDB7572(iLocal_1176, 0);
											unk_0x01976E3C7B2E5437(iLocal_1176, 1, 0);
											unk_0xAFC3B32426D08964(iLocal_1176, 1);
											Local_135.f_23 = 5;
											func_157();
										}
									}
								}
								else if (iLocal_107 > -1)
								{
									unk_0xBBAF4B768DDB7572(iLocal_1176, 0);
									unk_0x01976E3C7B2E5437(iLocal_1176, 1, 0);
									unk_0xAFC3B32426D08964(iLocal_1176, 1);
									Local_135.f_23 = 5;
									func_157();
								}
							}
						}
					}
					break;
				
				case 7:
					func_131();
					if (!unk_0xF44A5E894FE76438(iLocal_265, 9))
					{
						if (func_197())
						{
							if (func_144())
							{
								func_108(&uLocal_967, 3, unk_0x9E9133ACB2BCC1D5(Local_135.f_4), "FM_Pilot", 0, 1);
								func_196(&uLocal_967, "CT_AUD", "MPCT_HPwrn2", 12, 0, 0, 1);
							}
							else
							{
								func_108(&uLocal_967, 2, unk_0x9E9133ACB2BCC1D5(Local_135.f_4), "EXEC_PILOT", 0, 1);
								func_91(&uLocal_967, "EXHELAU", "EXHEL_FORCED", 12, 0, 0, 1);
							}
							unk_0xAFC3B32426D08964(iLocal_1176, 2);
							unk_0xB8A73E7DA87B2968(&iLocal_265, 9);
						}
					}
					break;
				
				case 8:
					if (!unk_0x6C6EB009F103061C(iLocal_1176))
					{
						func_131();
						if (unk_0x2FAE1B1A2FF430A6(iLocal_1176) > 0)
						{
							if (!func_136(Local_135.f_4))
							{
								if (!unk_0xB529B2A4B7C64D6D(iLocal_1176, 0))
								{
									if (!func_193())
									{
										unk_0x8B06B801B92CEC2D(unk_0x9E9133ACB2BCC1D5(Local_135.f_4), uLocal_268);
										if (unk_0xF6A32456BABBBA74(Local_135.f_3))
										{
											func_383(&(Local_135.f_3));
										}
										if (func_207())
										{
											func_382();
										}
										if (unk_0xF6A32456BABBBA74(Local_135.f_4))
										{
											func_383(&(Local_135.f_4));
										}
									}
								}
							}
						}
						else if (!func_136(Local_135.f_4))
						{
							if (!unk_0xB529B2A4B7C64D6D(iLocal_1176, 0))
							{
								unk_0x8B06B801B92CEC2D(unk_0x9E9133ACB2BCC1D5(Local_135.f_4), uLocal_269);
								unk_0x5457695C257D1470(unk_0x9E9133ACB2BCC1D5(Local_135.f_4), 1);
								if (unk_0xF6A32456BABBBA74(Local_135.f_3))
								{
									func_383(&(Local_135.f_3));
								}
								if (func_207())
								{
									func_382();
								}
								if (unk_0xF6A32456BABBBA74(Local_135.f_4))
								{
									func_383(&(Local_135.f_4));
								}
							}
						}
					}
					return;
				}
		}
		if (func_130(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
		{
			if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_1176, 0))
			{
				switch (Local_135.f_24)
				{
					case 7:
						if (!unk_0xF44A5E894FE76438(iLocal_265, 10))
						{
							iVar3 = 0;
							while (iVar3 < unk_0x7D44D16B4A9E941E(iLocal_1176) + 1)
							{
								iVar4 = unk_0x98BE504E8B389665(iLocal_1176, (iVar3 - 1), 0);
								if (iVar4 != 0)
								{
									if (!unk_0x00B5B0B68211D89B(iVar4))
									{
										if (unk_0xBEC34BF6B72C417A(iVar4))
										{
											func_132(func_133(unk_0x61263E0F7C8C9996(iVar4)), 0, 0f, 0, 0, 0);
										}
									}
								}
								iVar3++;
							}
							unk_0xB8A73E7DA87B2968(&iLocal_265, 10);
						}
						break;
					}
				}
			}
	}
}

void func_382()
{
	if (unk_0x7887B64A08364778(Global_2494149.f_280))
	{
		Global_2494149.f_5296 = 1;
	}
}

void func_383(var uParam0)
{
	var uVar0;
	
	if (unk_0x1B982A8B37108B3C(*uParam0))
	{
		uVar0 = unk_0x0DE80E23B2BD02BD(*uParam0);
		unk_0x9E5138EA66A3E119(&uVar0);
	}
}

int func_384(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11)
{
	struct<3> Var0;
	float fVar3;
	var uVar4;
	
	Global_17151.f_6 = 1;
	if (unk_0xB0D174BA6F10DF7B() && !bParam9)
	{
		if (Global_2433082.f_731)
		{
			func_389(0, bParam9);
		}
		return 0;
	}
	if ((unk_0xC9C30ADF21E89D79() && !bParam9) && !unk_0x5F40DE47EB21A061())
	{
		return 0;
	}
	if (!func_388())
	{
		if (func_387(unk_0xFB6B3EEFAB2DD12C(), 1, 0))
		{
			if (((bParam9 && func_130(unk_0xFB6B3EEFAB2DD12C(), 1, 0)) && unk_0xB0D174BA6F10DF7B()) && Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_225 == 1)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = (fParam3 + 360f);
	}
	if (fParam3 >= 360f)
	{
		fParam3 = (fParam3 + -360f);
	}
	if (!Global_2433082.f_731 && !bParam11)
	{
		Var0 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0) };
		if ((unk_0xC3D3EC28F0EB3C6D((Var0.f_0 - Param0.f_0)) < 0.2f && unk_0xC3D3EC28F0EB3C6D((Var0.f_1 - Param0.f_1)) < 0.2f) && unk_0xC3D3EC28F0EB3C6D((Var0.f_2 - Param0.f_2)) < 1.2f)
		{
			fVar3 = (fParam3 - unk_0x714F015B4D2DE1DC(unk_0xD5A676B97920D126()));
			if (fVar3 > 180f)
			{
				fVar3 = (fVar3 + -360f);
			}
			if (fVar3 < -180f)
			{
				fVar3 = (fVar3 + 360f);
			}
			if (unk_0xC3D3EC28F0EB3C6D(fVar3) < 1f)
			{
				Global_2433082.f_731 = 0;
				Global_2433082.f_732 = 0;
				if (unk_0x5F40DE47EB21A061())
				{
					unk_0xC66C0C38B6CD9B78();
				}
				return 1;
			}
		}
	}
	if (((!Param0.f_0 == Global_2433082.f_733 || !Param0.f_1 == Global_2433082.f_733.f_1) || !Param0.f_2 == Global_2433082.f_733.f_2) || !fParam3 == Global_2433082.f_736)
	{
		if (Global_2433082.f_731 == 1)
		{
			if (unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), Global_2433082.f_737) < func_386(0))
			{
				return 0;
			}
			unk_0xC66C0C38B6CD9B78();
			Global_2433082.f_732 = 1;
		}
		else
		{
			Global_2433082.f_732 = 0;
		}
		Global_2433082.f_733 = { Param0 };
		Global_2433082.f_736 = fParam3;
		Global_2433082.f_731 = 0;
	}
	if (!Global_2433082.f_731 && !unk_0x5F40DE47EB21A061())
	{
		if (bParam4)
		{
			bParam5 = false;
		}
		bParam7 = bParam7;
		if (bParam7)
		{
		}
		if (bParam5)
		{
		}
		if (bParam8)
		{
		}
		if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
		{
			if (!unk_0xF44A5E894FE76438(Global_91538.f_1308[44], 16))
			{
				func_385();
			}
			if (!unk_0x3DB2F294758DC408(unk_0xD5A676B97920D126(), &(Global_2404994.f_485)))
			{
				Global_2404994.f_485 = 0;
			}
		}
		if (bParam9)
		{
			if (bParam4)
			{
				if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
				{
					uVar4 = unk_0x19912132A3CBAD3C(unk_0xD5A676B97920D126());
					unk_0xBB9A2DB94A862D7A(uVar4, Param0, 0, 1, 1, 1);
					unk_0x99569FEC2425586D(iVar4, fParam3);
				}
				else
				{
					unk_0xBB9A2DB94A862D7A(unk_0xD5A676B97920D126(), Param0, 0, 0, 0, 1);
					unk_0x99569FEC2425586D(unk_0xD5A676B97920D126(), fParam3);
				}
			}
			else
			{
				unk_0xBB9A2DB94A862D7A(unk_0xD5A676B97920D126(), Param0, 0, 0, 0, 1);
				unk_0x99569FEC2425586D(unk_0xD5A676B97920D126(), fParam3);
			}
			func_389(bParam6, bParam9);
			return 1;
		}
		else
		{
			unk_0xEE62B429234DD4AC();
			unk_0x13FE3BE59121FBD3(unk_0xFB6B3EEFAB2DD12C(), Param0, fParam3, bParam4, iParam10, 0);
		}
		Global_2433082.f_737 = unk_0x7414B386C0020BEC();
		Global_2433082.f_731 = 1;
	}
	if (Global_2433082.f_731)
	{
		Global_17151.f_6 = 1;
		Global_2433082.f_737 = unk_0x7414B386C0020BEC();
		if (bParam9)
		{
			if (unk_0x2A488C176D52CCA5(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0), Global_2433082.f_733) < 2f)
			{
				if (unk_0x5F40DE47EB21A061())
				{
					unk_0xC66C0C38B6CD9B78();
				}
				func_389(bParam6, bParam9);
				return 1;
			}
		}
		if (!unk_0x5F40DE47EB21A061())
		{
			func_389(bParam6, bParam9);
			return 1;
		}
	}
	return 0;
}

void func_385()
{
	int iVar0;
	
	iVar0 = unk_0xFDD9C8C921B18ACC();
	if (unk_0x60487D28A8746002() && Global_2404994.f_2214 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2404994.f_2213)
	{
		if (!unk_0x8AAC0F5C88B4585D())
		{
			Global_2404994.f_2213 = iVar0;
		}
	}
}

int func_386(bool bParam0)
{
	if (unk_0x7E3640C27B17457C())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_387(int iParam0, bool bParam1, int iParam2)
{
	if (Global_2421621[iParam0 /*358*/].f_225 == 99)
	{
		if ((iParam2 && Global_2421621[iParam0 /*358*/].f_228 == 0) || iParam2 == 0)
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (Global_2421621[iParam0 /*358*/].f_225 == 13)
		{
			return 0;
		}
	}
	return 1;
}

bool func_388()
{
	return Global_1315206;
}

void func_389(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		unk_0xCA3B54980FA9D86F(0f, 1065353216);
		unk_0xB6AE7C18ADC0F901(0f);
	}
	if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
	{
		unk_0xC521961CC9DBD0D1(unk_0xD5A676B97920D126());
	}
	if (!bParam1)
	{
		unk_0xEE62B429234DD4AC();
	}
	if (unk_0x5F40DE47EB21A061())
	{
		unk_0xC66C0C38B6CD9B78();
	}
	func_391();
	if (!unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 14))
	{
		func_390();
	}
}

void func_390()
{
	Global_2501629.f_80 = 1;
}

void func_391()
{
	struct<2> Var0;
	
	Global_2433082.f_731 = 0;
	Global_2433082.f_732 = 0;
	Global_2433082.f_733 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2404994.f_2215 = { Var0 };
}

int func_392()
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	if (!(Global_2452510.f_10 || unk_0xF44A5E894FE76438(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_352, 4)))
	{
		return 0;
	}
	uVar1 = Global_2452510.f_21;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0xF44A5E894FE76438(uVar1, iVar0))
		{
			iVar2 = unk_0x7A4693BB354F3CD3(iVar0);
			if (func_130(iVar2, 1, 1))
			{
				if (!unk_0xF44A5E894FE76438(Global_1618089[iVar0 /*390*/].f_352, 4))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_393(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_84(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	Global_16736 = 1;
	Global_16738 = 0;
	Global_16742 = 0;
	StringCopy(&Global_16749, sParam3, 24);
	Global_2621441 = 0;
	return func_76(sParam2, iParam4, 0);
}

int func_394(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_84(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	Global_16736 = 1;
	Global_16738 = 0;
	Global_16742 = 0;
	StringCopy(&Global_16749, sParam3, 24);
	Global_2621441 = 1;
	return func_76(sParam2, iParam4, 0);
}

void func_395()
{
	if (iLocal_272 == 0)
	{
		iLocal_272 = 1;
	}
}

void func_396()
{
	unk_0xFA320609400AECAE("MobileRadioInGame", 0);
	if (!func_259())
	{
		if (func_130(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
		{
			if (unk_0xE4133A0C3C6C74A7(unk_0xD5A676B97920D126(), iLocal_1176) && !func_286(unk_0xD5A676B97920D126(), iLocal_1176, -1))
			{
				unk_0xFA320609400AECAE("MobileRadioInGame", 1);
			}
		}
	}
}

void func_397()
{
	if (func_207())
	{
		return;
	}
	if (unk_0x04DE35D10A718EEF())
	{
		if (!unk_0x6901135DDCC4904D(uLocal_266))
		{
			if (!func_137(iLocal_1176))
			{
				uLocal_266 = unk_0x890C68C377CE0CA4(iLocal_1176);
				if (unk_0x6901135DDCC4904D(uLocal_266))
				{
					unk_0xD6507DB77BCBD904(uLocal_266, 422);
					unk_0x576211BDE434AC9A(uLocal_266, 0);
					unk_0x2EDAF851B28036F0(uLocal_266, "HTX_BLIP");
					iLocal_267 = 1;
					func_252(&uLocal_266, iLocal_267);
				}
			}
		}
	}
}

void func_398()
{
	int iVar0;
	
	iVar0 = unk_0xF2DB717A73826179(10f);
	if (!func_137(iLocal_1176))
	{
		unk_0x456121A0AAC868D4(&uLocal_270);
		unk_0x03B9FE5FECB7D9B3(0, iLocal_1176, 0, 0, Local_135.f_10, 9, 30f, 7.5f, -1f, iVar0, iVar0, -1082130432, 0);
		unk_0xCFE67FBB69F1C410(uLocal_270);
		unk_0x456121A0AAC868D4(&uLocal_269);
		unk_0x03B9FE5FECB7D9B3(0, iLocal_1176, 0, 0, Local_135.f_17, 9, 30f, 0f, -1f, iVar0 * 2, iVar0 * 2, -1082130432, 0);
		unk_0xCFE67FBB69F1C410(uLocal_269);
		unk_0x456121A0AAC868D4(&uLocal_268);
		unk_0xE9148EE8AA200B60(0, 0, 64);
		if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
		{
			unk_0xBB8F1D58B7578137(0, unk_0xD5A676B97920D126(), 300f, -1, 0, 0);
		}
		else
		{
			unk_0xEBF1276539CCAA92(0, 1193033728, 0);
		}
		unk_0xCFE67FBB69F1C410(uLocal_268);
	}
}

int func_399()
{
	return Local_135.f_0;
}

int func_400(int iParam0)
{
	return Local_168[iParam0 /*3*/];
}

int func_401()
{
	bool bVar0;
	var uVar1;
	
	func_408(&bVar0, &uVar1);
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
	if (func_407())
	{
		return 1;
	}
	if (Global_2454699)
	{
		return 1;
	}
	if (func_406())
	{
		return 1;
	}
	if (func_405(157))
	{
		if (!func_404())
		{
			return 1;
		}
	}
	if (func_405(155))
	{
		return 1;
	}
	if (!unk_0xA4B4423421E91E97())
	{
		return 1;
	}
	if (func_402() != 0)
	{
		if (unk_0xAB964FCFAC3C767A(func_402()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_402()
{
	switch (func_403())
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

int func_403()
{
	return Global_25185;
}

bool func_404()
{
	return Global_2443089.f_577;
}

int func_405(int iParam0)
{
	if (unk_0x74E31F78B0F9A13E(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_406()
{
	return Global_2452479;
}

bool func_407()
{
	return Global_2443089.f_572;
}

void func_408(var uParam0, var uParam1)
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
					func_409(iVar0);
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

void func_409(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x49897615E4CA227C(1, iParam0, &Var0, 3))
	{
		if (func_130(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x4572B13EE70C8F52(Var0.f_1);
			if (unk_0x7887B64A08364778(uVar3))
			{
				if (unk_0x6A0583ECFCCECC9B(iVar3, 0))
				{
					uVar4 = unk_0x0DBD8FE531FD620D(iVar3, 0);
					if (unk_0xCC5C4B9DB5D0FF42(uVar4, Var0.f_2) && unk_0x5C565D8FF913FF0D())
					{
						if (func_410(uVar4, &bVar5))
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

int func_410(int iParam0, var uParam1)
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

void func_411()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_412(bool bParam0)
{
	var uVar0;
	var uVar1;
	
	if (func_150())
	{
		func_149();
	}
	if (bParam0)
	{
		func_377();
	}
	func_378();
	func_195(0);
	if (func_207())
	{
		if (func_417("HTX_HELPN", "GB_HELI_BLIP"))
		{
			unk_0x04890EB0282525A5(1);
			uVar0 = func_7(1185, -1, 0);
			unk_0x4EA098C870B73AB7(&uVar0, 16);
			func_206(1185, uVar0, -1, 1, 0);
		}
		func_11(0);
	}
	else if (func_417("HTX_HELPN", "HTX_HELPB"))
	{
		unk_0x04890EB0282525A5(1);
		uVar1 = func_7(1185, -1, 0);
		unk_0x4EA098C870B73AB7(&uVar1, 16);
		func_206(1185, uVar1, -1, 1, 0);
	}
	if (bParam0)
	{
		if (unk_0xF6A32456BABBBA74(Local_135.f_4) && unk_0x50CED8EEAE806923(Local_135.f_4))
		{
			if (func_207())
			{
				if (!unk_0xB529B2A4B7C64D6D(unk_0x9E9133ACB2BCC1D5(Local_135.f_4), 0))
				{
					if (!unk_0x04D83291EB9DE51D(unk_0x9E9133ACB2BCC1D5(Local_135.f_4), iLocal_1176, 0))
					{
						func_204(&(Local_135.f_4));
					}
				}
			}
			if (!func_137(iLocal_1176))
			{
				if (!func_136(Local_135.f_4))
				{
					func_398();
					unk_0x8B06B801B92CEC2D(unk_0x9E9133ACB2BCC1D5(Local_135.f_4), uLocal_269);
				}
			}
		}
	}
	if (unk_0x1995B52453EF6537())
	{
		if (bParam0)
		{
			if (unk_0xF6A32456BABBBA74(Local_135.f_3))
			{
				if (unk_0x50CED8EEAE806923(Local_135.f_3))
				{
					if (!func_137(iLocal_1176))
					{
						unk_0xAFC3B32426D08964(iLocal_1176, 1);
					}
					func_383(&(Local_135.f_3));
				}
			}
			if (func_207())
			{
			}
			if (unk_0xF6A32456BABBBA74(Local_135.f_4))
			{
				if (unk_0x50CED8EEAE806923(Local_135.f_4))
				{
					if (!func_136(Local_135.f_4))
					{
						unk_0x237B0CFB6EEBD3BA(unk_0x9E9133ACB2BCC1D5(Local_135.f_4), 251, 0);
					}
					func_383(&(Local_135.f_4));
				}
			}
		}
		if (!func_259())
		{
			func_415(func_416(1, 1), 13, func_4());
		}
		else
		{
			func_415(func_416(1, 1), 44, func_4());
		}
	}
	func_414();
	if (iLocal_272 == 1)
	{
		iLocal_272 = 0;
	}
	unk_0x4292FC2ED4EC4212(&uLocal_273);
	unk_0x33E4179F57B9F232(1);
	unk_0x4EA098C870B73AB7(&(Global_2494149.f_783), 0);
	Global_2494149.f_255 = 0;
	func_413();
}

void func_413()
{
	unk_0x01DFCA3621B68C4A();
}

void func_414()
{
	unk_0x873418BFBF9A6780(&uLocal_268);
	unk_0x873418BFBF9A6780(&uLocal_269);
	unk_0x873418BFBF9A6780(&uLocal_270);
}

void func_415(int iParam0, int iParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = 352;
	Var0.f_1 = unk_0xFB6B3EEFAB2DD12C();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		unk_0xA56AA396FE05B9EC(1, &Var0, 6, iParam0);
	}
}

int func_416(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x7A4693BB354F3CD3(iVar1);
		if (func_130(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xFB6B3EEFAB2DD12C() || iParam0)
			{
				if (bParam1)
				{
					unk_0xB8A73E7DA87B2968(&uVar0, iVar1);
				}
				else if (!func_238(iVar2, 0))
				{
					unk_0xB8A73E7DA87B2968(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_417(char* sParam0, char* sParam1)
{
	unk_0xB57C4257E4B22B1A(sParam0);
	unk_0xB1953EBEF4D6BD85(sParam1);
	return unk_0x39EEBD00DF395566(0);
}

int func_418(struct<20> Param0)
{
	func_421(32, Param0);
	unk_0xAC4AA684E16779D5(1);
	unk_0xF5116E26EBA83CA9(1);
	func_420(0, -1, 0);
	unk_0x1CB2FF4BC0AF8B2C(&Local_135, 32);
	unk_0x47DDB3A546F48091(&Local_168, 97);
	if (!func_419())
	{
		return 0;
	}
	unk_0x7E85CEE862B85A74(0);
	if (unk_0x04DE35D10A718EEF())
	{
		Local_135.f_5 = unk_0xFB6B3EEFAB2DD12C();
		Local_135.f_6 = { unk_0x7E140C583F91AE2B(unk_0xD5A676B97920D126(), 0f, 15f, 0f) };
		Local_135.f_10 = { -346.4007f, 1151.507f, 324.7254f };
		Local_135.f_27 = func_259();
		Local_135.f_28 = func_4();
		unk_0xB8A73E7DA87B2968(&(Global_2494149.f_783), 0);
	}
	Global_2452510.f_26 = 0;
	Global_2452510.f_25 = 0;
	unk_0x4EA098C870B73AB7(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_352), 4);
	iLocal_961 = unk_0xF5C5C10402E12CCB();
	Local_168[unk_0x1E7FB1CA38C403F6() /*3*/] = 0;
	return 1;
}

int func_419()
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
		if (func_407())
		{
			return 0;
		}
		if (func_405(155))
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

int func_420(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x1E6D5854F5CCAE3F();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_413();
			}
			else
			{
				return 0;
			}
		}
		if (!func_388())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x1995B52453EF6537())
				{
					if (!bParam2)
					{
						func_413();
					}
					else
					{
						return 0;
					}
				}
				if (func_407())
				{
					if (!bParam2)
					{
						func_413();
					}
					else
					{
						return 0;
					}
				}
				if (func_405(155))
				{
					if (!bParam2)
					{
						func_413();
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
					func_413();
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
				func_413();
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
			func_413();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_421(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x1995B52453EF6537())
	{
		func_413();
	}
	unk_0x6AFFC4188D3C82E8(iParam0, 0, Param1.f_16);
}

void func_422()
{
	iLocal_1164 = 0;
	func_423(-243.828f, -1461.281f, 30.99f, 279.3385f);
	func_423(139.284f, 311.0571f, 111.1386f, 45.1942f);
	func_423(634.8535f, 141.8226f, 94.2749f, 26.968f);
	func_423(383.2168f, 16.5927f, 90.2992f, 40.5093f);
	func_423(67.2551f, 51.4397f, 72.5151f, 38.4162f);
	func_423(294.1833f, 575.2105f, 152.623f, 304.9259f);
	func_423(933.0354f, 492.7919f, 120.4651f, 3.1259f);
	func_423(-336.8088f, 454.2572f, 110.9638f, 58.2889f);
	func_423(-135.9225f, 615.1293f, 204.3637f, 240.0636f);
	func_423(139.3762f, -250.2123f, 50.426f, 276.1187f);
	func_423(-139.5668f, -443.9992f, 33.1041f, 112.657f);
	func_423(-491.7431f, -144.9858f, 37.8309f, 98.1814f);
	func_423(-645.7263f, 406.0965f, 100.2678f, 272.8684f);
	func_423(-957.0592f, 295.3116f, 68.9958f, 58.8505f);
	func_423(-820.9876f, 876.1653f, 202.1549f, 196.4736f);
	func_423(-1443.188f, 455.4925f, 110.7514f, 296.894f);
	func_423(-1481.404f, 863.1016f, 181.577f, 38.349f);
	func_423(-1646.419f, -195.0848f, 54.2692f, 160.7423f);
	func_423(-1099.93f, -192.9011f, 37.3214f, 299.6116f);
	func_423(-604.6443f, -599.9016f, 33.6806f, 270.5396f);
	func_423(-1471.802f, -853.1879f, 13.2503f, 302.8094f);
	func_423(-2011.161f, -526.2204f, 10.7096f, 28.1469f);
	func_423(-2212.737f, 537.3901f, 164.4195f, 348.0596f);
	func_423(-3025.405f, 338.3629f, 13.6245f, 14.9527f);
	func_423(-1054.36f, -1398.452f, 5.3278f, 253.1757f);
	func_423(-567.387f, -1258.005f, 12.8623f, 8.386f);
	func_423(-964.4938f, -727.4775f, 18.794f, 344.527f);
	func_423(-2429.193f, 1045.141f, 193.7864f, 263.1876f);
	func_423(-3136.545f, 1191.168f, 19.0974f, 220.8899f);
	func_423(-2692.456f, -62.2375f, 15.234f, 39.5592f);
	func_423(-355.8293f, -990.3766f, 28.4949f, 125.2948f);
	func_423(243.7049f, -881.4253f, 29.4921f, 297.8129f);
	func_423(453.4193f, -380.5279f, 45.6676f, 357.5639f);
	func_423(936.8099f, -553.545f, 58.3693f, 263.5811f);
	func_423(770.1622f, -233.1951f, 65.1145f, 243.3845f);
	func_423(1134.113f, 353.7328f, 90.4476f, 351.5361f);
	func_423(1864.741f, 259.8708f, 162.1022f, 225.713f);
	func_423(1558.889f, 879.5532f, 76.4596f, 359.376f);
	func_423(337.4946f, 985.814f, 209.7682f, 69.9473f);
	func_423(870.984f, 968.8524f, 238.3209f, 35.1108f);
	func_423(2599.014f, 415.1773f, 107.7289f, 186.8054f);
	func_423(2547.611f, -579.5625f, 64.2137f, 161.9321f);
	func_423(1886.246f, -741.1049f, 82.6813f, 287.8844f);
	func_423(1455.893f, -1498.703f, 63.6557f, 173.4564f);
	func_423(1161.785f, -1076.126f, 40.4823f, 247.4221f);
	func_423(1394.804f, -734.3683f, 66.2226f, 115.9829f);
	func_423(1167.93f, -150.3837f, 55.5932f, 167.958f);
	func_423(2455.5f, 1014.216f, 83.1307f, 14.3078f);
	func_423(2530.339f, 1633.237f, 28.3235f, 234.752f);
	func_423(1951.904f, 1645.648f, 71.2406f, 260.0168f);
	func_423(2806.778f, -815.1143f, 5.7198f, 81.9638f);
	func_423(1806.947f, -1290.593f, 95.0351f, 331.8087f);
	func_423(1678.681f, -1952.281f, 111.666f, 80.8951f);
	func_423(1292.103f, -3186.505f, 4.9064f, 359.7118f);
	func_423(740.4905f, -3028.477f, 7.562f, 312.5958f);
	func_423(559.4196f, -2593.408f, 5.0368f, 291.8598f);
	func_423(877.3129f, -2437.455f, 27.3458f, 83.4984f);
	func_423(1212.66f, -2098.225f, 43.5962f, 332.4854f);
	func_423(797.2423f, -1599.807f, 30.2847f, 164.9429f);
	func_423(827.6533f, -1980.338f, 28.299f, 10.749f);
	func_423(373.2801f, -2133.071f, 15.2922f, 150.4032f);
	func_423(617.6802f, -1064.3f, 9.3075f, 179.8157f);
	func_423(296.5454f, -1341.473f, 42.7533f, 230.0817f);
	func_423(-174.3653f, -2548.709f, 5.0163f, 198.7499f);
	func_423(215.9285f, -2903.652f, 6.6886f, 151.951f);
	func_423(314.6187f, -1679.352f, 28.1261f, 72.5752f);
	func_423(1408.015f, -2623.801f, 45.1502f, 312.7456f);
	func_423(-379.9112f, -1774.544f, 20.0649f, 13.9162f);
	func_423(96.5893f, -2001.965f, 18.844f, 147.396f);
	func_423(-729.8096f, -1777.493f, 28.0263f, 61.8742f);
	func_423(-971.1151f, -1868.092f, 18.9378f, 33.2574f);
	func_423(-720.1935f, -2557.545f, 12.9387f, 18.6712f);
	func_423(-1335.482f, -2677.121f, 12.9449f, 187.4991f);
	func_423(-878.3446f, -2968.556f, 12.9471f, 331.5428f);
	func_423(-1005.327f, -2232.398f, 8.0032f, 92.8891f);
	func_423(-401.2441f, -2284.453f, 6.6082f, 2.3971f);
	func_423(-1454.813f, -1471.849f, 1.1336f, 242.0199f);
	func_423(821.5599f, 1298.328f, 362.9729f, 262.7468f);
	func_423(-449.7726f, 1586.159f, 358.0207f, 239.931f);
	func_423(-348.6263f, 1156.363f, 324.5158f, 54.5644f);
	func_423(-827.162f, 1686.859f, 194.2108f, 236.4414f);
	func_423(-184.5484f, 1923.192f, 196.6049f, 206.5246f);
	func_423(296.1962f, 1771.646f, 227.0542f, 310.265f);
	func_423(1052.903f, 1495.316f, 174.8349f, 205.154f);
	func_423(-1532.131f, 1396.502f, 122.7763f, 352.1764f);
	func_423(-2604.194f, 1675.818f, 138.9021f, 166.6577f);
	func_423(-1513.824f, 2166.168f, 54.0724f, 251.5786f);
	func_423(-1697.408f, 2456.897f, 29.418f, 101.049f);
	func_423(-2819.858f, 2253.055f, 28.6358f, 169.9338f);
	func_423(-3043.554f, 1477.634f, 27.3241f, 179.9691f);
	func_423(-2381.452f, 2830.405f, 2.372f, 76.3996f);
	func_423(-2993.669f, 3335.124f, 9.2207f, 46.6226f);
	func_423(-1789.875f, 2675.004f, 2.4478f, 318.05f);
	func_423(-1596.024f, 2950.032f, 32.0914f, 221.481f);
	func_423(-1099.969f, 2850.755f, 12.8854f, 317.9454f);
	func_423(55.8239f, 3338.571f, 35.6469f, 165.2648f);
	func_423(173.2043f, 2293.298f, 92.1495f, 208.7343f);
	func_423(-468.6477f, 2994.032f, 26.1288f, 96.4423f);
	func_423(-1212.968f, 2599.15f, 14.572f, 277.3627f);
	func_423(-177.6004f, 2945.426f, 29.6345f, 344.5758f);
	func_423(-270.1975f, 2661.462f, 59.8035f, 190.3861f);
	func_423(-767.441f, 2284.18f, 76.413f, 331.6507f);
	func_423(578.2679f, 2798.182f, 41.1427f, 308.8694f);
	func_423(388.2008f, 3525.706f, 32.9f, 242.16f);
	func_423(1228.046f, 3612.758f, 32.4634f, 303.8293f);
	func_423(1060.165f, 3042.599f, 40.6158f, 329.9008f);
	func_423(845.1221f, 2207.164f, 49.9157f, 40.9634f);
	func_423(1281.185f, 2665.227f, 36.6537f, 44.0714f);
	func_423(2137.185f, 2961.237f, 45.9129f, 273.7183f);
	func_423(2052.815f, 3319.029f, 44.7859f, 127.0919f);
	func_423(1959.709f, 3775.369f, 31.2029f, 88.7083f);
	func_423(2500.937f, 4153.028f, 37.2878f, 204.7804f);
	func_423(2730.682f, 3415.967f, 55.7151f, 278.4684f);
	func_423(2936.23f, 4437.92f, 47.4218f, 323.2516f);
	func_423(3636.311f, 3765.969f, 27.5157f, 51.549f);
	func_423(2532.664f, 2686.917f, 40.7205f, 249.7434f);
	func_423(2157.111f, 1974.473f, 93.7061f, 22.0171f);
	func_423(1499.479f, 1827.166f, 106.4998f, 42.618f);
	func_423(2895.405f, 3888.189f, 52.0109f, 213.3904f);
	func_423(1639.252f, 3852.798f, 33.7036f, 277.8739f);
	func_423(16.3756f, 3623.829f, 39.0889f, 138.8624f);
	func_423(-202.3551f, 4176.263f, 42.1762f, 357.9106f);
	func_423(378.6819f, 4405.726f, 61.3992f, 2.2521f);
	func_423(763.3045f, 4180.816f, 39.6263f, 313.7911f);
	func_423(1410.916f, 4363.65f, 41.6243f, 351.9106f);
	func_423(2474.189f, 4460.482f, 34.2448f, 338.6556f);
	func_423(2787.091f, 4896.004f, 35.5118f, 346.5345f);
	func_423(3787.385f, 4446.902f, 3.6951f, 322.4305f);
	func_423(3283.627f, 5161.83f, 17.7122f, 120.0761f);
	func_423(2444.642f, 5016.759f, 45.2854f, 256.7558f);
	func_423(2071.367f, 4807.796f, 40.6377f, 147.898f);
	func_423(2012.781f, 5129.742f, 44.5825f, 92.6079f);
	func_423(1710.641f, 4657.467f, 42.4848f, 108.8281f);
	func_423(2498.991f, 5641.692f, 45.6963f, 48.9642f);
	func_423(2250.176f, 5968.912f, 49.0116f, 15.0599f);
	func_423(1853.773f, 6404.851f, 45.2075f, 116.4965f);
	func_423(866.8867f, 6512.98f, 20.7883f, 248.893f);
	func_423(205.2754f, 7012.687f, 1.0453f, 196.8449f);
	func_423(-212.0001f, 6565.548f, 9.8635f, 152.7291f);
	func_423(-573.4517f, 6167.307f, 5.3904f, 302.589f);
	func_423(206.7901f, 6402.567f, 30.3805f, 81.5939f);
	func_423(-731.3629f, 5800.728f, 16.5887f, 196.4081f);
	func_423(-664.7944f, 5460.415f, 49.6868f, 157.5173f);
	func_423(-601.0768f, 5294.568f, 69.2145f, 27.8272f);
	func_423(-532.1605f, 4971.026f, 146.1112f, 172.7688f);
	func_423(-1546.969f, 5010.706f, 64.4016f, 255.285f);
	func_423(-2170.899f, 4459.51f, 61.8337f, 141.4564f);
	func_423(-2504.334f, 3627.644f, 12.7211f, 175.0945f);
	func_423(-1216.204f, 4457.368f, 29.5562f, 16.7363f);
	func_423(797.6583f, 5704.728f, 697.4423f, 102.9245f);
	func_423(159.5193f, 5212.952f, 572.7617f, 303.589f);
	func_423(2867.312f, 5944.487f, 356.7372f, 56.172f);
	func_423(10.6515f, 6334.516f, 30.2366f, 336.7196f);
	func_423(1472.189f, 6359.462f, 22.7034f, 289.4279f);
	func_423(-618.1378f, 3993.369f, 120.0915f, 212.0991f);
	func_423(-885.1862f, 4428.847f, 19.9719f, 90.7754f);
	func_423(215.323f, 7381.881f, 13.4278f, 203.1559f);
	func_423(3635.046f, 5669.953f, 7.7871f, 32.6794f);
	func_423(3646.407f, 4997.506f, 11.2006f, 19.0908f);
	func_423(3546.356f, 2523.698f, 5.4951f, 29.0676f);
	func_423(2193.448f, 5574.355f, 52.7895f, 268.6339f);
	func_423(-2165.357f, 5170.346f, 13.5525f, 39.8589f);
	func_423(-1606.75f, 4742.162f, 52.9203f, 53.6989f);
	func_423(-945.4f, 4611.085f, 237.932f, 276.5363f);
	func_423(-2415.631f, 4221.8f, 8.7558f, 303.5893f);
	func_423(809.2775f, 3227.627f, 37.6705f, 234.2991f);
	func_423(1101.399f, 3436.295f, 32.8756f, 310.4154f);
	func_423(1691.926f, 3486.635f, 35.8127f, 339.3695f);
	func_423(2407.986f, 3537.302f, 72.5395f, 355.4901f);
	func_423(3051.449f, 2725.313f, 62.3978f, 331.4178f);
	func_423(2527.302f, 2009.074f, 18.9235f, 346.0563f);
	func_423(1840.181f, 2499.208f, 44.7693f, 301.6813f);
	func_423(1787.824f, 3067.684f, 61.2278f, 70.872f);
	func_423(1382.367f, 3003.334f, 39.7661f, 340.408f);
	func_423(244.4017f, 2637.836f, 44.6054f, 240.1419f);
	func_423(-251.8209f, 2205.487f, 128.884f, 195.6026f);
	func_423(-541.051f, 2005.346f, 202.3307f, 274.6922f);
	func_423(-2039.825f, 1960.994f, 187.7879f, 312.9809f);
	func_423(-1603.197f, 237.8279f, 58.3225f, 263.857f);
	func_423(-1724.508f, -2970.292f, 13.1465f, 4.1473f);
	func_423(1192.917f, 1839.359f, 77.4385f, 170.34f);
	func_423(3300.137f, -99.0274f, 11.6522f, 185.3741f);
	func_423(2849.717f, -1461.166f, 12.5068f, 52.3716f);
	func_423(2306.17f, -2118.141f, 2.322f, 18.5464f);
	func_423(2163.642f, 135.7375f, 226.6112f, 117.1583f);
	func_423(2527.796f, -90.4654f, 93.1274f, 110.8862f);
	func_423(1774.983f, 1676.629f, 78.209f, 142.8201f);
	func_423(1623.241f, 1265.085f, 86.7423f, 134.636f);
	func_423(1732.167f, 2169.269f, 82.2189f, 350.0135f);
	func_423(2167.046f, 1339.68f, 74.7227f, 32.7734f);
	func_423(712.9243f, 1727.998f, 182.7801f, 68.4225f);
	func_423(151.0186f, 1429.878f, 259.7057f, 36.1885f);
	func_423(-1662.585f, 4284.667f, 80.2819f, 23.3258f);
	func_423(-1323.416f, 5349.778f, 2.3383f, 79.3172f);
	func_423(-2294.521f, 2342.52f, 0.2262f, 44.7661f);
	func_423(-892.6975f, 5271.815f, 84.9171f, 112.4479f);
	func_423(470.1919f, 3115.264f, 40.5447f, 77.6964f);
	func_423(-2673.124f, 2957.395f, 7.3939f, 285.1781f);
	func_423(-3192.201f, 815.0291f, 2.7957f, 260.1565f);
	func_423(945.9874f, -3277.793f, 4.8982f, 266.6732f);
	func_423(126.3235f, -1658.512f, 32.9414f, 28.4566f);
	func_423(1144.835f, -1688.646f, 35.1291f, 6.0452f);
	func_423(944.4474f, -1369.549f, 12.3266f, 314.3879f);
	func_423(937.8714f, -896.6146f, 49.0496f, 179.602f);
	func_423(-50.8218f, -894.3738f, 40.4824f, 157.0664f);
	func_423(-1159.234f, -1111.134f, 8.7345f, 300.7512f);
	func_423(-1729.466f, -972.845f, 5.2263f, 14.1883f);
	func_423(-251.1976f, 310.9189f, 96.5312f, 177.6596f);
	func_423(-261.0635f, 192.8841f, 84.9561f, 104.3934f);
	func_423(-769.5164f, -1996.682f, 7.8903f, 136.2945f);
	func_423(-1345.348f, -2123.383f, 12.9441f, 145.1976f);
	func_423(576.7401f, -657.0758f, 12.5207f, 347.7486f);
	func_423(2640.831f, 3200.896f, 52.1493f, 273.1668f);
	func_423(1995.588f, -925.1763f, 78.0824f, 77.8221f);
	func_423(-500.2817f, -2111.103f, 8.9576f, 132.9903f);
	func_423(-725.0269f, -2355.187f, 14.8438f, 227.8691f);
	func_423(-980.7766f, -2488.198f, 14.0523f, 150.2897f);
	func_423(-1127.178f, -1696.759f, 4.2742f, 29.4122f);
	func_423(-1212.316f, -1338.762f, 4.4687f, 109.8316f);
	func_423(-1373.831f, -1274.4f, 4.6296f, 28.0177f);
	func_423(-1531.726f, -1037.846f, 5.8012f, 226.8082f);
	func_423(-1243.753f, -963.8779f, 3.2555f, 82.051f);
	func_423(-1161.864f, -725.671f, 20.534f, 37.0823f);
	func_423(-1071.658f, -863.8865f, 4.7704f, 302.8431f);
	func_423(-869.8373f, -894.2067f, 15.7782f, 195.2182f);
	func_423(-847.3995f, -1198.361f, 5.8987f, 224.6693f);
	func_423(-59.1982f, 1031.608f, 233.5404f, 342.8009f);
	func_423(-498.3894f, -950.4281f, 23.8303f, 170.6251f);
	func_423(-668.458f, -451.6636f, 35.9803f, 263.7879f);
	func_423(-538.0801f, -255.6042f, 36.4835f, 28.044f);
	func_423(-674.919f, -35.9837f, 39.1f, 107.0653f);
	func_423(-957.8153f, -347.7798f, 38.5257f, 296.3945f);
	func_423(-1399.278f, 122.7592f, 54.9624f, 179.943f);
	func_423(-1259.903f, 600.5897f, 139.911f, 307.5361f);
	func_423(-1161.234f, 931.7809f, 198.3958f, 312.1524f);
	func_423(-929.2317f, 1127.948f, 220.3745f, 192.5778f);
	func_423(-625.6737f, 979.0534f, 241.17f, 105.5179f);
	func_423(-281.6504f, 736.922f, 208.7457f, 201.0901f);
	func_423(-799.7258f, 575.9078f, 125.8626f, 200.7426f);
	func_423(-111.9565f, 1361.998f, 311.2291f, 309.7981f);
	func_423(161.9947f, 742.2007f, 207.3627f, 24.4887f);
	func_423(-591.4622f, -1443.56f, 11.0649f, 55.8083f);
	func_423(48.3094f, -1466.97f, 34.0209f, 46.3598f);
	func_423(573.138f, -903.282f, 10.653f, 359.9055f);
	func_423(444.6478f, -584.4781f, 28.4022f, 263.8702f);
	func_423(590.5396f, -128.7431f, 72.7058f, 324.8725f);
	func_423(633.0765f, -1477.419f, 9.6378f, 13.7451f);
	func_423(567.5936f, -2316.353f, 5.8157f, 358.2805f);
	func_423(154.683f, -2406.677f, 5.9026f, 356.73f);
	func_423(-407.8167f, -2742.427f, 6.6763f, 192.47f);
	func_423(77.3055f, -2723.974f, 5.9071f, 269.1819f);
	func_423(664.1844f, -2986.192f, 5.9477f, 169.3143f);
	func_423(1015.701f, -2310.8f, 30.4119f, 351.451f);
	func_423(1105.497f, -1903.685f, 37.37f, 141.7318f);
	func_423(1397.402f, -2375.49f, 63.0531f, 356.6557f);
	func_423(1675.434f, -1547.791f, 112.5916f, 343.2593f);
	func_423(1454.21f, -1000.43f, 48.8159f, 85.0815f);
	func_423(2183.739f, -582.2708f, 96.7788f, 309.7693f);
	func_423(2543.149f, 142.0665f, 99.4934f, 165.3156f);
	func_423(2596.192f, 751.3882f, 91.457f, 196.0535f);
	func_423(2603.688f, 1235.993f, 44.3592f, 176.2542f);
	func_423(2122.656f, 2778.532f, 50.0208f, 309.4357f);
	func_423(2396.602f, 3264.547f, 48.7285f, 214.5686f);
	func_423(2322.511f, 3893.286f, 34.9455f, 312.4513f);
	func_423(581.2474f, 778.2208f, 201.9709f, 228.6589f);
	func_423(1118.769f, 790.2458f, 149.7879f, 327.737f);
	func_423(1312.517f, 1248.61f, 106.7748f, 356.9769f);
	func_423(1309.661f, 1537.113f, 96.2337f, 6.4865f);
	func_423(1062.127f, 2084.489f, 52.5033f, 26.2563f);
	func_423(1521.927f, 2010.445f, 99.3948f, 355.0577f);
	func_423(1370.713f, 2313.501f, 79.9254f, 33.3623f);
	func_423(907.667f, 2678.261f, 40.7875f, 261.5676f);
	func_423(699.3987f, 2441.128f, 61.3254f, 209.2828f);
	func_423(436.9572f, 2382.852f, 50.022f, 322.7864f);
	func_423(439.7385f, 2086.472f, 100.9622f, 336.0373f);
	func_423(-628.1458f, 2815.875f, 36.9998f, 300.3421f);
	func_423(-1374.838f, 2402.95f, 30.041f, 288.2213f);
	func_423(-1845.524f, -708.1555f, 9.1302f, 227.8206f);
	func_423(-2441.261f, -319.8737f, 3.6674f, 231.7609f);
	func_423(-2994.104f, 21.4889f, 7.8942f, 241.8965f);
	func_423(-2825.43f, 1423.209f, 100.6655f, 175.2131f);
	func_423(-3091.066f, 1757.376f, 35.0735f, 174.5508f);
	func_423(-3007.828f, 2099.017f, 40.1434f, 332.562f);
	func_423(-1966.473f, 2473.978f, 1.1161f, 204.7869f);
	func_423(-2281.606f, 3412.213f, 32.0105f, 341.204f);
	func_423(456.3445f, 6699.446f, 7.8774f, 230.5219f);
	func_423(1191.518f, 6560.621f, 2.9303f, 86.2098f);
	func_423(2595.129f, 5402.892f, 41.7871f, 10.6124f);
	func_423(644.2881f, -1840.464f, 9.0907f, 354.3967f);
	func_423(-679.2219f, -1828.494f, 27.7167f, 242.8403f);
	func_423(1054.276f, -1785.81f, 34.5576f, 331.6062f);
	func_423(-86.9453f, -1710.444f, 28.4542f, 178.6759f);
	func_423(81.025f, -1283.182f, 28.2867f, 109.4532f);
	func_423(1276.439f, -1275.396f, 41.116f, 130.9274f);
	func_423(716.5391f, -2255.983f, 28.2272f, 277.8256f);
	func_423(1719.191f, -1655.754f, 111.5146f, 219.6488f);
	func_423(121.7027f, -2965.721f, 6.0714f, 214.9908f);
	func_423(-500.846f, -2111.083f, 8.0609f, 188.9715f);
	func_423(-1196.347f, -2169.974f, 12.195f, 192.0654f);
}

void func_423(struct<3> Param0, float fParam3)
{
	Global_2411315[iLocal_1164 /*3*/] = { Param0 };
	Global_2412213[iLocal_1164] = fParam3;
	iLocal_1164++;
}

