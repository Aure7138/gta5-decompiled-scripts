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
	var uLocal_60 = 0;
	var uLocal_61 = 10;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 2;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 8;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 8;
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
	var uLocal_97 = 0;
	var uLocal_98 = 37;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_165 = 0;
	bool bLocal_166 = 0;
	bool bLocal_167 = 0;
	var uLocal_168[5] = { 0, 0, 0, 0, 0 };
	int iLocal_174 = 0;
	var uLocal_175 = 0;
	struct<10> Local_176 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<30> Local_186 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 } ;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	bool bLocal_218 = 0;
	struct<3> Local_219[32];
	int iLocal_316 = 0;
	var uLocal_317 = 0;
	int iLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 12;
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
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
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
	var uLocal_1011 = 1065353216;
	int iLocal_1012 = 0;
	int iLocal_1013 = 0;
	int iLocal_1014 = 0;
	int iLocal_1015 = 0;
	int iLocal_1016 = 0;
	int iLocal_1017 = 0;
	var uLocal_1018 = 16;
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
	var uLocal_1138 = 0;
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
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	int iLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	int iLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	bool bLocal_1209 = 0;
	int iLocal_1210 = 0;
	int iLocal_1211 = 0;
	var uLocal_1212 = 0;
	int iLocal_1213 = 0;
	int iLocal_1214 = 0;
	int iLocal_1215 = 0;
	struct<3> Local_1216 = { 0, 0, 0 } ;
	struct<3> Local_1219[1];
	var uLocal_1223[1] = { 0 };
	var uLocal_1225[1] = { 0 };
	int iLocal_1227 = 0;
	int iLocal_1228 = 0;
	int iLocal_1229 = 0;
	int iLocal_1230 = 0;
	int iLocal_1231 = 0;
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
	iLocal_318 = 6;
	iLocal_1200 = 10000;
	func_460();
	if (unk_0x3A711520F83BAE98())
	{
		if (!func_456(ScriptParam_0))
		{
			if (unk_0x8E1421E2A2A2FBD4())
			{
				Local_186.f_24 = 8;
			}
			func_450(1);
		}
	}
	while (true)
	{
		func_449();
		if (func_439())
		{
			if (unk_0x3A711520F83BAE98())
			{
				if (unk_0x8E1421E2A2A2FBD4())
				{
					Local_186.f_24 = 8;
				}
			}
			func_450(1);
		}
		if (unk_0xB01117EF93F91860() != iLocal_1012 && !unk_0x8E1421E2A2A2FBD4())
		{
			if (unk_0x8E1421E2A2A2FBD4())
			{
				Local_186.f_24 = 8;
			}
			func_450(1);
		}
		if (unk_0x43E1A43A1AA9E0BE(unk_0x3DE13AF8F787AC71()) != Local_186.f_5)
		{
			if (unk_0x8E1421E2A2A2FBD4())
			{
				Local_186.f_24 = 8;
			}
			func_450(1);
		}
		unk_0x938EE52364C18007();
		iLocal_1230 = 0;
		iLocal_1231 = 0;
		switch (func_438(unk_0x622FF3AE4B1D07C3()))
		{
			case 0:
				if (func_437() == 1)
				{
					func_436();
					func_435();
					Local_219[unk_0x622FF3AE4B1D07C3() /*3*/] = 1;
				}
				else if (func_437() == 5)
				{
					Local_219[unk_0x622FF3AE4B1D07C3() /*3*/] = 3;
				}
				break;
			
			case 1:
				func_418();
				if (func_437() == 1)
				{
					func_298();
				}
				else if (func_437() == 5)
				{
					Local_219[unk_0x622FF3AE4B1D07C3() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_297(&(Local_186.f_25));
				if (func_296(&(Local_186.f_25)))
				{
					Local_219[unk_0x622FF3AE4B1D07C3() /*3*/] = 5;
				}
				break;
			
			case 2:
				Local_219[unk_0x622FF3AE4B1D07C3() /*3*/] = 5;
			
			case 5:
				func_450(1);
				break;
		}
		func_295();
		if (func_294())
		{
			func_284();
		}
		if (unk_0x8E1421E2A2A2FBD4())
		{
			switch (func_437())
			{
				case 0:
					if (func_258())
					{
						func_436();
						Local_186.f_0 = 1;
					}
					break;
				
				case 1:
					func_238();
					func_232();
					func_147();
					if (func_139())
					{
						Local_186.f_0 = 5;
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
	func_132();
	if (func_131(unk_0x9EB17624F44A8DA4(), 1, 1))
	{
		if (unk_0xC80D31E4B587871C(iLocal_316, 6) && !unk_0xC80D31E4B587871C(iLocal_316, 7))
		{
			if (!func_130(0))
			{
				if (!func_294())
				{
					func_128(13);
					func_111(func_124(13), 6, 2, 1);
				}
				else
				{
					func_128(44);
					func_111(func_124(44), 6, 2, 1);
				}
				unk_0x872F1C1F8587CCC7(&iLocal_316, 7);
				Local_186.f_0 = 5;
			}
		}
		if (unk_0xC80D31E4B587871C(iLocal_316, 5) && !unk_0xC80D31E4B587871C(iLocal_316, 6))
		{
			if (func_130(0))
			{
				unk_0x872F1C1F8587CCC7(&iLocal_316, 6);
			}
		}
		if (!unk_0xC80D31E4B587871C(iLocal_316, 5))
		{
			if (func_109(&uLocal_1185, 5000, 0))
			{
				if (!func_294())
				{
					func_108(&uLocal_1018, 3, 0, "FM_MERRYWEATHER", 0, 1);
					if (func_12(&uLocal_1018, 85, "CT_AUD", "MPCT_9", 0, 0))
					{
						unk_0x872F1C1F8587CCC7(&iLocal_316, 5);
					}
				}
				else
				{
					func_11(1);
					if (func_6(1))
					{
						func_108(&uLocal_1018, 3, 0, "EXECPA_MALE", 0, 1);
						if (func_12(&uLocal_1018, func_2(1), "EXCALAU", "EXCAL_HPROBM", 0, 0))
						{
							unk_0x872F1C1F8587CCC7(&iLocal_316, 5);
						}
					}
					else
					{
						func_108(&uLocal_1018, 2, 0, "EXECPA_FEMALE", 0, 1);
						if (func_12(&uLocal_1018, func_2(1), "EXCALAU", "EXCAL_HPROBF", 0, 0))
						{
							unk_0x872F1C1F8587CCC7(&iLocal_316, 5);
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
			Global_104555.f_28020[22 /*29*/].f_24[Global_14453] = 1;
			return 22;
		}
		else
		{
			return 75;
		}
	}
	if (bParam0 && func_3())
	{
		Global_104555.f_28020[22 /*29*/].f_24[Global_14453] = 1;
		return 22;
	}
	return 74;
}

int func_3()
{
	int iVar0;
	
	iVar0 = func_5(unk_0x9EB17624F44A8DA4());
	if (((iVar0 != unk_0x9EB17624F44A8DA4() && iVar0 != func_4()) && unk_0x552F39AE86E07792(iVar0)) && iVar0 != -1)
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
		return Global_1627537[iParam0 /*532*/].f_11;
	}
	return func_4();
}

bool func_6(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		iVar0 = func_5(unk_0x9EB17624F44A8DA4());
		if (func_3())
		{
			if (func_10(iVar0))
			{
				return 1;
			}
			return 0;
		}
	}
	return func_7(3211, -1, 0) != 0;
}

int func_7(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2523060[iParam0 /*3*/][func_8(iParam1)];
	if (unk_0xFA3CE529DBB66C85(uVar0, &uVar1, -1))
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
			Global_2522773 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2522773 = 1;
		}
	}
	return iVar0;
}

int func_9()
{
	return Global_1312736;
}

bool func_10(int iParam0)
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 29);
}

void func_11(bool bParam0)
{
	if (bParam0)
	{
		Global_1573344 = 1;
	}
	else
	{
		Global_1573344 = 0;
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
	
	if (unk_0xAB019B170BF1309C(sParam2))
	{
		return 0;
	}
	if (unk_0xFDD8E897FECD2912(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0xAB019B170BF1309C(sParam3))
	{
		return 0;
	}
	if (unk_0xFDD8E897FECD2912(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0x8B948C59217A295D(unk_0x436287B7DB306165());
	iVar1 = func_104(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0xAB019B170BF1309C(sParam7))
	{
		iVar2 = unk_0x8B948C59217A295D(sParam7);
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
	Global_1351013.f_40.f_1 = iParam0;
	Global_1351013.f_40.f_2 = iParam1;
	Global_1351013.f_40.f_3 = iParam2;
	StringCopy(&(Global_1351013.f_40.f_4), sParam3, 16);
	Global_1351013.f_40.f_8 = iParam4;
	Global_1351013.f_40.f_9 = iParam5;
	Global_1351013.f_40.f_14 = iParam6;
	func_15(iParam4);
	func_93();
	Global_1351013.f_40.f_13 = unk_0x1B4120BD20115C5C(unk_0xD1952A425B78FFC0(), 7000);
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
	Global_1351013.f_40.f_10 = 0;
}

void func_17()
{
	Global_1351013.f_40.f_10 = 1;
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
	return iParam0 > Global_1351013.f_40.f_8;
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
	Global_1351013.f_40.f_11 = unk_0x1B4120BD20115C5C(unk_0xD1952A425B78FFC0(), iParam0);
	Global_1351013.f_40.f_12 = 1;
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
		sVar2 = unk_0xDE2D3B9654C31EB3(iVar0);
		iVar1 = func_50(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x8E0AF3533D0F22BA(unk_0xD1952A425B78FFC0(), Global_1351013.f_40.f_13))
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
	if (!unk_0xAB019B170BF1309C(sParam8))
	{
		iVar6++;
		if (!unk_0xAB019B170BF1309C(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x74C475EB8E73D398(sVar4, " "))
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
		if (unk_0xC80D31E4B587871C(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xC80D31E4B587871C(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xAB019B170BF1309C(sVar2))
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
	if (unk_0xC80D31E4B587871C(iParam4, 0))
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
	Global_1351013.f_57 = 0;
	Global_1351013.f_57.f_1 = 0;
}

void func_25()
{
	Global_1351013.f_40 = 3;
}

void func_26()
{
	unk_0x872F1C1F8587CCC7(&Global_2323, 8);
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
			Global_3030 = iParam6;
			unk_0x872F1C1F8587CCC7(&Global_4267143, 0);
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
	if (unk_0x74C475EB8E73D398(sParam14, sParam15))
	{
	}
	func_40();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14453 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14453 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14453 == 1)
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
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			if (unk_0x40EC3CE69D3499EA(unk_0xFC1458A37D98B502()))
			{
				return 0;
			}
		}
		if (Global_4267128 == 1)
		{
			return 0;
		}
		if (unk_0x8F38E94BBF3404CD(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0x8F38E94BBF3404CD(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_39() == 0)
	{
		func_37();
		return 0;
	}
	func_36(Global_4267127);
	StringCopy(&(Global_4265878[Global_4267127 /*104*/]), sParam1, 64);
	Global_4265878[Global_4267127 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4265878[Global_4267127 /*104*/].f_24 = iParam2;
	}
	Global_4265878[Global_4267127 /*104*/].f_25 = iParam7;
	Global_4265878[Global_4267127 /*104*/].f_26 = uParam8;
	Global_4265878[Global_4267127 /*104*/].f_29 = uParam9;
	Global_4265878[Global_4267127 /*104*/].f_30 = uParam12;
	Global_4265878[Global_4267127 /*104*/].f_31 = uParam11;
	Global_4265878[Global_4267127 /*104*/].f_28 = 0;
	Global_4265878[Global_4267127 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4265878[Global_4267127 /*104*/].f_33), sParam4, 64);
	Global_4265878[Global_4267127 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4265878[Global_4267127 /*104*/].f_50), sParam5, 64);
	Global_4265878[Global_4267127 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4265878[Global_4267127 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4265878[Global_4267127 /*104*/].f_83), sParam15, 64);
	func_40();
	switch (iParam16)
	{
		case 3:
			Global_4265878[Global_4267127 /*104*/].f_99[Global_14453] = 1;
			break;
		
		case 0:
			Global_4265878[Global_4267127 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_4265878[Global_4267127 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_4265878[Global_4267127 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_14453)
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
				Global_4267128 = 1;
				break;
			
			case 0:
				Global_4267128 = 1;
				break;
			
			case 2:
				Global_4267128 = 1;
				break;
			
			case 1:
				Global_4267128 = 1;
				break;
			}
	}
	Global_16825[Global_4267127] = 0;
	if (bParam10)
	{
		func_40();
		if (Global_14396)
		{
			StringCopy(&Global_14442, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14453)
			{
				case 0:
					StringCopy(&Global_14442, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14442, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14442, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14442, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_34())
			{
				unk_0x4AFBCBFDE748D4E0(-1, "Text_Arrive_Tone", &Global_14442, 1);
			}
		}
	}
	if (!Global_14616)
	{
		if (Global_14453.f_1 == 6)
		{
			func_33(Global_14434, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_29(1);
			func_33(Global_14434, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14433), -1082130432, -1082130432, -1082130432);
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
	
	Global_16824 = 0;
	Global_2928 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2892[iVar0] = 0;
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
				if (iParam0 == Global_2330[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2330[iVar1 /*15*/].f_4)
					{
						if (Global_2892[iVar0] == 0)
						{
							Global_2856[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xC80D31E4B587871C(Global_2324, 3))
								{
									iVar2 = 42;
									Global_14619 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14619 = 0;
								}
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_31(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(iVar2);
								unk_0x271AA5469AF471B3();
							}
							if (Global_2456825)
							{
								if (iVar1 == 14)
								{
									func_30(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16819), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2892[iVar0] = 1;
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
				if (iParam0 == Global_2330[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2330[iVar1 /*15*/].f_4)
					{
						if (Global_2892[iVar0] == 0)
						{
							Global_2856[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_104555.f_14111[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_104555.f_14111[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_104555.f_14111[iVar3 /*104*/].f_99[Global_14453] == 1)
											{
												Global_16824++;
											}
										}
									}
									iVar3++;
								}
								func_30(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16824), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_70856)
								{
									iVar4 = 0;
									iVar4 = Global_4265877;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4265878[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4265878[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4265878[iVar5 /*104*/].f_99[Global_14453] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_30(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14453)
									{
										case 0:
											iVar6 = Global_36998;
											break;
										
										case 1:
											iVar6 = Global_36999;
											break;
										
										case 2:
											iVar6 = Global_37000;
											break;
										
										default:
											break;
									}
									func_30(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_30(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16819), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_31(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(Global_2329);
								unk_0x271AA5469AF471B3();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xC80D31E4B587871C(Global_2324, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_31(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(iVar7);
								unk_0x271AA5469AF471B3();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xC80D31E4B587871C(Global_2324, 3))
								{
									iVar8 = 42;
									Global_14619 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14619 = 0;
								}
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_31(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(iVar8);
								unk_0x271AA5469AF471B3();
							}
							else if (iVar1 == 8)
							{
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_31(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(42);
								unk_0x271AA5469AF471B3();
							}
							else if ((iVar1 == 23 && unk_0x74C475EB8E73D398(&(Global_2330[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xC80D31E4B587871C(Global_2324, 6))
							{
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_31(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(42);
								unk_0x271AA5469AF471B3();
							}
							else if (Global_2330[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626277.f_1;
								func_30(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_30(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2892[iVar0] = 1;
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
	unk_0x008F3E3CC076EA0E(uParam0, sParam1);
	unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xAB019B170BF1309C(sParam7))
	{
		func_31(sParam7);
	}
	if (!unk_0xAB019B170BF1309C(sParam8))
	{
		func_31(sParam8);
	}
	if (!unk_0xAB019B170BF1309C(sParam9))
	{
		func_31(sParam9);
	}
	if (!unk_0xAB019B170BF1309C(sParam10))
	{
		func_31(sParam10);
	}
	if (!unk_0xAB019B170BF1309C(sParam11))
	{
		func_31(sParam11);
	}
	unk_0x271AA5469AF471B3();
}

void func_31(char* sParam0)
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

bool func_32(int iParam0)
{
	return Global_35861 == iParam0;
}

void func_33(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x008F3E3CC076EA0E(uParam0, sParam1);
	unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x271AA5469AF471B3();
}

bool func_34()
{
	return Global_1312854;
}

void func_35(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_104555.f_14021[iParam0 /*20*/].f_8;
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
	
	uVar0 = unk_0x2F31FD7674CB6CD3();
	uVar1 = unk_0x95327550F0F2BE7C();
	uVar2 = unk_0x674C9438180770FE();
	uVar3 = unk_0xD3ECC7A5C90D3AA4();
	uVar4 = unk_0xEAF455949B108589() + 1;
	uVar5 = unk_0x93F322D6E98835CC();
	Global_4265878[iParam0 /*104*/].f_18 = uVar0;
	Global_4265878[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_4265878[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_4265878[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_4265878[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4265878[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_37()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4267127 = 11;
	Global_4265878[Global_4267127 /*104*/].f_18 = -1;
	Global_4265878[Global_4267127 /*104*/].f_18.f_1 = 0;
	Global_4265878[Global_4267127 /*104*/].f_18.f_2 = 0;
	Global_4265878[Global_4267127 /*104*/].f_18.f_3 = 0;
	Global_4265878[Global_4267127 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_38(Global_4265878[iVar2 /*104*/].f_18, Global_4265878[Global_4267127 /*104*/].f_18))
		{
			Global_4267127 = iVar2;
		}
		iVar2++;
	}
	Global_4265878[Global_4267127 /*104*/].f_24 = 1;
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
		if (Global_4265878[iVar2 /*104*/].f_24 == 0)
		{
			Global_4267127 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4267127 = 11;
	Global_4265878[Global_4267127 /*104*/].f_18 = -1;
	Global_4265878[Global_4267127 /*104*/].f_18.f_1 = 0;
	Global_4265878[Global_4267127 /*104*/].f_18.f_2 = 0;
	Global_4265878[Global_4267127 /*104*/].f_18.f_3 = 0;
	Global_4265878[Global_4267127 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4265878[iVar2 /*104*/].f_24 == 0 || Global_4265878[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_38(Global_4265878[iVar2 /*104*/].f_18, Global_4265878[Global_4267127 /*104*/].f_18))
			{
				Global_4267127 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4267127 == 11)
	{
		return 0;
	}
	Global_4265878[Global_4267127 /*104*/].f_99[0] = 0;
	Global_4265878[Global_4267127 /*104*/].f_99[1] = 0;
	Global_4265878[Global_4267127 /*104*/].f_99[2] = 0;
	return 1;
}

void func_40()
{
	if (func_32(14))
	{
		if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[0 /*29*/])
			{
				Global_14453 = 0;
			}
			else if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[1 /*29*/])
			{
				Global_14453 = 1;
			}
			else if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[2 /*29*/])
			{
				Global_14453 = 2;
			}
			else
			{
				Global_14453 = 0;
			}
		}
	}
	else
	{
		Global_14453 = func_41();
		if (Global_14453 == 145)
		{
			Global_14453 = 3;
		}
		if (Global_70856)
		{
			Global_14453 = 3;
		}
		if (Global_14453 > 3)
		{
			Global_14453 = 3;
		}
	}
}

var func_41()
{
	func_42();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_42()
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_45(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_44(unk_0xFC1458A37D98B502());
			if (func_43(iVar0) && (!func_32(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_43(Global_104555.f_2353.f_539.f_4301))
				{
					Global_104555.f_2353.f_539.f_4302 = Global_104555.f_2353.f_539.f_4301;
				}
				Global_104555.f_2353.f_539.f_4303 = iVar0;
				Global_104555.f_2353.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104555.f_2353.f_539.f_4301 != 145)
			{
				Global_104555.f_2353.f_539.f_4303 = Global_104555.f_2353.f_539.f_4301;
			}
			return;
		}
	}
	Global_104555.f_2353.f_539.f_4301 = 145;
}

bool func_43(int iParam0)
{
	return iParam0 < 3;
}

int func_44(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
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
		return Global_104555.f_28020[iParam0 /*29*/];
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
			Global_3030 = iParam10;
			unk_0x872F1C1F8587CCC7(&Global_4267143, 0);
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
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return sLocal_18;
	}
	if (unk_0x74C475EB8E73D398(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_48(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0xB2E1B414DD88808E(sParam0);
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
	Global_1369176[iVar0 /*5*/].f_4 = 1;
	return Global_1369176[iVar0 /*5*/].f_2;
}

void func_51(int iParam0, bool bParam1)
{
	if (!func_131(iParam0, 0, 1))
	{
		return;
	}
	if (func_53(iParam0) != -1)
	{
		return;
	}
	if (Global_1369339)
	{
		if (iParam0 == Global_1369339.f_1)
		{
			return;
		}
	}
	if (func_52(iParam0))
	{
		return;
	}
	if (Global_1369377 >= 32)
	{
		return;
	}
	Global_1369344[Global_1369377] = iParam0;
	Global_1369377++;
	if (bParam1)
	{
	}
}

int func_52(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1369377)
	{
		if (Global_1369344[iVar0] == iParam0)
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
	
	if (!func_131(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1369337 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1369337)
	{
		if (Global_1369176[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xEDC03FCCDC79D2A6(Global_1369176[iVar0 /*5*/].f_2) && unk_0xF99EC32C605D76B8(Global_1369176[iVar0 /*5*/].f_2))
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
	
	if (iParam0 >= Global_1369337)
	{
		return;
	}
	if (unk_0xEDC03FCCDC79D2A6(Global_1369176[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1369176[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xF85532D53BDB3017(Global_1369176[iParam0 /*5*/].f_2), 64);
			unk_0x08F615DD464377C8(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x2B7B6B25A8998411(Global_1369176[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1369337)
	{
		Global_1369176[iVar32 /*5*/] = { Global_1369176[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_55(&(Global_1369176[iVar32 /*5*/]));
	Global_1369337 = (Global_1369337 - 1);
}

void func_55(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_4();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x3A711520F83BAE98())
	{
		uParam0->f_3 = unk_0xD1952A425B78FFC0();
	}
}

void func_56()
{
	Global_1351013.f_40.f_9 = 4;
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
		sVar2 = unk_0xDE2D3B9654C31EB3(iVar0);
		iVar1 = func_50(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x8E0AF3533D0F22BA(unk_0xD1952A425B78FFC0(), Global_1351013.f_40.f_13))
			{
				return 0;
			}
		}
		Global_16817 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_49(sParam5, bParam6, &iVar3);
	uVar5 = func_47(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xAB019B170BF1309C(sParam8))
	{
		iVar6++;
		if (!unk_0xAB019B170BF1309C(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x74C475EB8E73D398(sVar4, " "))
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
		if (unk_0xC80D31E4B587871C(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xC80D31E4B587871C(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xAB019B170BF1309C(sVar2))
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
	if (unk_0xC80D31E4B587871C(iParam4, 0))
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
	Global_1351013.f_40.f_9 = 3;
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
	
	unk_0x0EE72DB1CD8A3B86(&Global_2323, 10);
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
			Global_3030 = iParam6;
			Global_2933[3 /*6*/] = { Global_104555.f_28020[iParam0 /*29*/].f_3 };
			Global_3010 = iParam0;
			unk_0x872F1C1F8587CCC7(&Global_2323, 1);
			unk_0x872F1C1F8587CCC7(&Global_2323, 7);
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
	if (unk_0x74C475EB8E73D398(sParam14, sParam15))
	{
	}
	func_40();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14453 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14453 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14453 == 1)
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
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			if (unk_0x40EC3CE69D3499EA(unk_0xFC1458A37D98B502()))
			{
				return 0;
			}
		}
		if (Global_104555.f_14021[Global_14453 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x8F38E94BBF3404CD(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x8F38E94BBF3404CD(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_66() == 0)
	{
		func_64();
		return 0;
	}
	func_63(Global_16823);
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/]), sParam1, 64);
	Global_104555.f_14111[Global_16823 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_104555.f_14111[Global_16823 /*104*/].f_24 = iParam2;
	}
	Global_104555.f_14111[Global_16823 /*104*/].f_25 = iParam7;
	Global_104555.f_14111[Global_16823 /*104*/].f_26 = uParam8;
	Global_104555.f_14111[Global_16823 /*104*/].f_29 = uParam9;
	Global_104555.f_14111[Global_16823 /*104*/].f_30 = uParam12;
	Global_104555.f_14111[Global_16823 /*104*/].f_31 = uParam11;
	Global_104555.f_14111[Global_16823 /*104*/].f_28 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/].f_33), sParam4, 64);
	Global_104555.f_14111[Global_16823 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/].f_50), sParam5, 64);
	Global_104555.f_14111[Global_16823 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/].f_83), sParam15, 64);
	if (unk_0xC80D31E4B587871C(Global_2323, 10))
	{
		Global_104555.f_14111[Global_16823 /*104*/].f_99[0] = 1;
		Global_104555.f_14111[Global_16823 /*104*/].f_99[1] = 1;
		Global_104555.f_14111[Global_16823 /*104*/].f_99[2] = 1;
		Global_3029 = 4;
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
				Global_104555.f_14111[Global_16823 /*104*/].f_99[Global_14453] = 1;
				break;
			
			case 0:
				Global_104555.f_14111[Global_16823 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_104555.f_14111[Global_16823 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_104555.f_14111[Global_16823 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14453)
			{
				case 0:
					func_35(0);
					Global_3029 = 0;
					break;
				
				case 1:
					func_35(1);
					Global_3029 = 1;
					break;
				
				case 2:
					func_35(2);
					Global_3029 = 2;
					break;
				
				case 3:
					func_35(3);
					Global_3029 = 3;
					break;
				
				default:
					Global_3029 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0xC80D31E4B587871C(Global_2323, 10))
		{
			Global_104555.f_14021[0 /*20*/].f_17 = 1;
			Global_104555.f_14021[1 /*20*/].f_17 = 1;
			Global_104555.f_14021[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_104555.f_14021[Global_14453 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_104555.f_14021[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_104555.f_14021[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_104555.f_14021[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16825[Global_16823] = 0;
	if (bParam10)
	{
		func_40();
		if (Global_14396)
		{
			StringCopy(&Global_14442, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14453)
			{
				case 0:
					StringCopy(&Global_14442, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14442, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14442, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14442, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_34())
			{
				unk_0x4AFBCBFDE748D4E0(-1, "Text_Arrive_Tone", &Global_14442, 1);
			}
		}
	}
	if (!Global_14616)
	{
		if (Global_14453.f_1 == 6)
		{
			func_33(Global_14434, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_29(1);
			func_33(Global_14434, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14433), -1082130432, -1082130432, -1082130432);
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
	
	uVar0 = unk_0x2F31FD7674CB6CD3();
	uVar1 = unk_0x95327550F0F2BE7C();
	uVar2 = unk_0x674C9438180770FE();
	uVar3 = unk_0xD3ECC7A5C90D3AA4();
	uVar4 = unk_0xEAF455949B108589() + 1;
	uVar5 = unk_0x93F322D6E98835CC();
	Global_104555.f_14111[iParam0 /*104*/].f_18 = uVar0;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_64()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70856)
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
	Global_16823 = 34;
	Global_104555.f_14111[Global_16823 /*104*/].f_18 = -1;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_1 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_2 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_3 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_65(Global_104555.f_14111[iVar2 /*104*/].f_18, Global_104555.f_14111[Global_16823 /*104*/].f_18))
		{
			Global_16823 = iVar2;
		}
		iVar2++;
	}
	Global_104555.f_14111[Global_16823 /*104*/].f_24 = 1;
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
	
	if (Global_70856)
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
		if (Global_104555.f_14111[iVar2 /*104*/].f_24 == 0)
		{
			Global_16823 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16823 = 34;
	Global_104555.f_14111[Global_16823 /*104*/].f_18 = -1;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_1 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_2 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_3 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_104555.f_14111[iVar2 /*104*/].f_24 == 0 || Global_104555.f_14111[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_65(Global_104555.f_14111[iVar2 /*104*/].f_18, Global_104555.f_14111[Global_16823 /*104*/].f_18))
			{
				Global_16823 = iVar2;
			}
		}
		if (Global_104555.f_14111[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_16823 == 34)
	{
		return 0;
	}
	Global_104555.f_14111[Global_16823 /*104*/].f_99[0] = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_99[1] = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_99[2] = 0;
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
	unk_0x0EE72DB1CD8A3B86(&Global_2323, 10);
	iVar0 = 3;
	if (func_62(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3030 = iParam10;
			Global_2933[3 /*6*/] = { Global_104555.f_28020[iParam0 /*29*/].f_3 };
			Global_3010 = iParam0;
			StringCopy(&Global_3011, sParam5, 64);
			unk_0x872F1C1F8587CCC7(&Global_2323, 1);
			unk_0x872F1C1F8587CCC7(&Global_2323, 7);
		}
		return 1;
	}
	return 0;
}

int func_68(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
	}
	if (unk_0xCA87B182A4F3C252(unk_0xFC1458A37D98B502()))
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
	
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (unk_0xCA87B182A4F3C252(unk_0xFC1458A37D98B502()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0xC80D31E4B587871C(iParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0xC80D31E4B587871C(iParam4, 4))
	{
		bVar0 = func_85(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_75(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0xC80D31E4B587871C(iParam4, 3))
		{
			func_74(1);
		}
		if (unk_0xC80D31E4B587871C(iParam4, 5))
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
	Global_2521200 = 0;
}

void func_71()
{
	Global_1351013.f_57 = 1;
	Global_1351013.f_57.f_1 = 0;
}

void func_72()
{
	Global_1351013.f_40.f_9 = 1;
}

void func_73(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x872F1C1F8587CCC7(&Global_2325, 0);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&Global_2325, 0);
	}
}

void func_74(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x872F1C1F8587CCC7(&Global_2323, 20);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&Global_2323, 20);
	}
}

int func_75(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_84(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15804 = 0;
	Global_15763 = 1;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_15761 = 0;
	Global_15808 = 0;
	Global_15810 = 0;
	Global_2621441 = 0;
	return func_76(sParam3, iParam4, bParam7);
}

int func_76(char* sParam0, int iParam1, bool bParam2)
{
	Global_15757 = 0;
	if (Global_15756 == 0 || Global_15758 == 2)
	{
		if (Global_15756 != 0)
		{
			if (iParam1 > Global_15758)
			{
				if (Global_15763 == 0)
				{
					unk_0xB31CEFB00C146C91(0);
					Global_14453.f_1 = 3;
					Global_15756 = 0;
					Global_15757 = 1;
					Global_15809 = 0;
					Global_15752 = 0;
					Global_15753 = 0;
					Global_15767 = 0;
					Global_15766 = 0;
					Global_14452 = 0;
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
		if (unk_0x42111BD51D233AAB())
		{
			return 0;
		}
		if (func_82(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_81();
		Global_15045 = { Global_15210 };
		Global_15762 = Global_15763;
		Global_15769 = Global_15770;
		Global_2621442 = Global_2621441;
		Global_15771 = { Global_15787 };
		Global_15764 = Global_15765;
		Global_16746 = Global_16747;
		Global_16754 = { Global_16760 };
		Global_16748 = Global_16749;
		Global_16750 = Global_16751;
		Global_16752 = Global_16753;
		Global_15375.f_370 = Global_16745;
		Global_15375.f_368 = Global_16743;
		Global_15375.f_369 = Global_16744;
		Global_15752 = Global_15753;
		if (Global_15762)
		{
			unk_0x0EE72DB1CD8A3B86(&Global_2323, 20);
			unk_0x0EE72DB1CD8A3B86(&Global_2324, 17);
			unk_0x0EE72DB1CD8A3B86(&Global_2325, 0);
			if (bParam2)
			{
				func_40();
				if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14453.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14419 == 1)
			{
				return 0;
			}
			if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
			{
				if (unk_0x596A22C5FEBABAC1(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (func_80())
				{
					return 0;
				}
				if (unk_0xCA87B182A4F3C252(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (unk_0xA9287933382DAD33(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (unk_0x63D4520BD966ECD5(unk_0xFC1458A37D98B502(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70856)
				{
					if (unk_0x0BA31FF7931F3DD3(unk_0xFC1458A37D98B502()))
					{
						return 0;
					}
					if (unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4()))
					{
						return 0;
					}
					if (unk_0x0A1D4A2F0A088C25(unk_0xFC1458A37D98B502()))
					{
						return 0;
					}
					if (unk_0x8E1DC2E7000CD6A1(unk_0x9EB17624F44A8DA4()))
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
				switch (Global_14453.f_1)
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
				if (unk_0xC80D31E4B587871C(Global_2323, 9))
				{
					return 0;
				}
			}
			func_78();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_77();
		return 1;
	}
	if (Global_15756 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15758 || iParam1 == Global_15758)
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
		StringCopy(&(Global_14624[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xB31CEFB00C146C91(0);
	Global_15756 = 1;
}

void func_78()
{
	Global_15809 = Global_15808;
	Global_15803 = Global_15804;
	Global_15850 = { Global_15838 };
	Global_15856 = { Global_15844 };
	Global_15811 = Global_15810;
	Global_15880 = { Global_15862 };
	Global_15886 = { Global_15868 };
	Global_15892 = { Global_15874 };
	Global_15898 = { Global_15904 };
	Global_1638 = Global_1639;
	Global_1640 = Global_1641;
	Global_15767 = Global_15768;
	Global_15769 = Global_15770;
	Global_15771 = { Global_15787 };
	Global_15760 = Global_15761;
	Global_16772 = 0;
	Global_15805 = 0;
	Global_15806 = 0;
	unk_0x0EE72DB1CD8A3B86(&Global_2324, 16);
}

int func_79()
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_80()
{
	int iVar0;
	int iVar1;
	
	if (Global_70856)
	{
		iVar0 = 0;
		unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar1, 1);
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x689303135DD1F2F5() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0xBAEC0BAAC7E135C7(unk_0xFC1458A37D98B502(), 78, 1))
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
		Global_15045[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15045[iVar0 /*10*/].f_1), "", 24);
		Global_15045[iVar0 /*10*/].f_7 = 0;
		Global_15045[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15045.f_161 = -99;
	Global_15045.f_162 = { 0f, 0f, 0f };
}

bool func_82(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1357530.f_203[iParam1];
			}
			break;
	}
	return unk_0xC80D31E4B587871C(Global_1357530.f_1048, iParam0);
}

void func_83()
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if ((unk_0x0DBDCC9C5537E157() || Global_14453.f_1 == 9) || Global_14452 == 1)
	{
		unk_0xB31CEFB00C146C91(0);
		Global_15756 = 6;
		Global_14453.f_1 = 3;
		return;
	}
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(1);
		Global_15756 = 6;
		return;
	}
}

void func_84(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15210 = { *uParam0 };
	Global_1639 = iParam1;
	StringCopy(&Global_15826, sParam2, 24);
	Global_16745 = iParam5;
	if (iParam3 == 0)
	{
		Global_16743 = 1;
		Global_16741 = 0;
	}
	else
	{
		Global_16743 = 0;
		Global_16741 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16744 = 1;
		Global_16742 = 0;
	}
	else
	{
		Global_16744 = 0;
		Global_16742 = 1;
	}
}

int func_85(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_84(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15804 = 1;
	Global_15763 = 1;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_15761 = 0;
	Global_15808 = 0;
	Global_15810 = 0;
	Global_2621441 = 0;
	return func_76(sParam3, iParam4, bParam7);
}

int func_86(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
	}
	if (unk_0xCA87B182A4F3C252(unk_0xFC1458A37D98B502()))
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
	Global_16774 = 0;
}

bool func_88(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_84(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15804 = 0;
	Global_15763 = 1;
	Global_15770 = 0;
	Global_15765 = 1;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_15761 = 0;
	Global_15808 = 1;
	Global_15810 = 0;
	StringCopy(&Global_15904, sParam5, 24);
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
	Global_1351013.f_40.f_9 = 2;
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
	Global_15763 = 0;
	Global_15765 = 0;
	Global_15770 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_2621441 = 0;
	return func_76(sParam2, iParam3, 0);
}

void func_92()
{
	Global_1351013.f_55 = Global_1351013.f_40.f_1;
	Global_1351013.f_55.f_1 = Global_1351013.f_40.f_10;
}

void func_93()
{
	Global_1351013.f_40 = 1;
}

bool func_94()
{
	return Global_1351013.f_40 == 1;
}

int func_95(int iParam0, int iParam1, int iParam2)
{
	if (!func_96(iParam0))
	{
		return 0;
	}
	if (Global_1351013.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1351013.f_40.f_3 != iParam2)
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
	if (!Global_1351013.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_97()
{
	if (Global_1351013.f_40 == 0)
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
	if (func_130(0))
	{
		return 0;
	}
	if (Global_1312466.f_18 != 0)
	{
		return 0;
	}
	if (Global_1655673 || func_100())
	{
		return 0;
	}
	if (!unk_0xC80D31E4B587871C(iParam0, 6))
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
	return unk_0x8E0AF3533D0F22BA(unk_0xD1952A425B78FFC0(), Global_1367897);
}

int func_100()
{
	if (Global_4253357.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_101()
{
	return Global_1351013.f_40 == 3;
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
	return unk_0x8B948C59217A295D(&cVar0);
}

bool func_105()
{
	return Global_2518688.f_1;
}

int func_106()
{
	if (Global_1351201.f_2)
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
	if (!Global_70856)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x4ACB9D202CFF8727(iParam2, 0);
			}
			else
			{
				unk_0x4ACB9D202CFF8727(iParam2, 1);
			}
		}
		if (!unk_0x3AB6A1A9084FB0A4(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xC672DBF4ABE19DFB(iParam2, 0);
			}
			else
			{
				unk_0xC672DBF4ABE19DFB(iParam2, 1);
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
	if (unk_0x3A711520F83BAE98() && !bParam2)
	{
		if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0x53C562FD2B9E3AB0(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_110(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x3A711520F83BAE98() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xD1952A425B78FFC0();
			}
			else
			{
				*uParam0 = unk_0xEBD55014C579F626();
			}
		}
		else
		{
			*uParam0 = unk_0x53C562FD2B9E3AB0();
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
		
		case 14:
			iVar8 = -664597565;
			break;
		
		case 15:
			iVar8 = 1864522104;
			break;
		
		case 16:
			iVar8 = 215608230;
			break;
	}
	if (func_121())
	{
		func_112(iVar8, iParam0, &iVar9, bParam3, bParam3, 0);
		Global_4261865[iVar9 /*80*/].f_8.f_43 = { Var0 };
		Global_4261865[iVar9 /*80*/].f_8.f_47 = { Var4 };
	}
	else
	{
		unk_0xB55903868EC9248F(iParam0, &Var0, &Var4, bParam3);
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
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
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
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
			func_113(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_113(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_121())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x02404400A68A3D5B(func_9()) || unk_0xD7D895B4B5395982())
		{
			Global_4262415 = 1;
			return 0;
		}
		if (Global_2457985)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4262416 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4261865[iVar2 /*80*/].f_2 == 0)
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
	if ((bVar0 || iVar1) || unk_0xE51E15AF85DFE75E(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0xC972A21EB39CE12F(iVar4))
		{
			*uParam0 = func_120(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4261865[*uParam0 /*80*/].f_69 = 1;
					Global_4261865[*uParam0 /*80*/].f_73 = 1;
				}
			}
			Global_4262402 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4262414 = 1;
			Global_4262417 = iParam4;
			Global_4262419 = iParam3;
			Global_4262420 = 1;
			Global_4262418 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4262417 = iParam4;
			Global_4262419 = iParam3;
			Global_4262420 = 1;
			Global_4262418 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_119(1, iParam4);
			Global_4262414 = 0;
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
			unk_0x872F1C1F8587CCC7(&(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_137.f_71), 0);
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
				unk_0x166C543410DE9A3F();
			}
		}
		else if (!bVar0)
		{
			unk_0x45B51A422AE852A9(Global_4261865[iParam0 /*80*/]);
		}
		func_116(&(Global_4261865[iParam0 /*80*/]));
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
	uParam0->f_74 = 0;
	uParam0->f_73 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	uParam0->f_77 = 0;
	uParam0->f_79 = 0;
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
		return Global_4261865[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

void func_119(int iParam0, var uParam1)
{
	Global_2459156 = uParam1;
	Global_2459155 = iParam0;
}

int func_120(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4261865[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_121())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4261865[iVar0 /*80*/].f_2 = 1;
			Global_4261865[iVar0 /*80*/].f_1 = uParam5;
			Global_4261865[iVar0 /*80*/].f_3 = uParam1;
			Global_4261865[iVar0 /*80*/].f_4 = uParam2;
			Global_4261865[iVar0 /*80*/].f_7 = uParam3;
			Global_4261865[iVar0 /*80*/].f_5 = 0;
			Global_4261865[iVar0 /*80*/] = iParam0;
			Global_4261865[iVar0 /*80*/].f_6 = iParam4;
			Global_4261865[iVar0 /*80*/].f_72 = uParam8;
			Global_4261865[iVar0 /*80*/].f_71 = uParam7;
			Global_4261865[iVar0 /*80*/].f_74 = iParam9;
			Global_4261865[iVar0 /*80*/].f_73 = 0;
			Global_4261865[iVar0 /*80*/].f_75 = unk_0x4B64A8D052027742();
			Global_4261865[iVar0 /*80*/].f_79 = 0;
			Global_4262402 = 0;
			if (bParam6)
			{
				Global_4261865[iVar0 /*80*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_121()
{
	if (unk_0xB9D80B12FE4456A5())
	{
		return unk_0xE0E46A90C7BC7510();
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
		
		case 14:
			return "AMMO_DROP_REF";
		
		case 15:
			return "ORBITAL_MANUAL";
		
		case 16:
			return "ORBITAL_AUTO";
		
		default:
	}
	return "DEFAULT";
}

int func_124(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_127(iParam0) >= 0)
	{
		iVar0 = func_127(iParam0);
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
			if (func_126())
			{
				return 0;
			}
			if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 1)
			{
				return 200;
			}
			else if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 2)
			{
				return 400;
			}
			else if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 3)
			{
				return 600;
			}
			else if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 4)
			{
				return 800;
			}
			else if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 5)
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

bool func_126()
{
	return unk_0xC80D31E4B587871C(func_7(6407, -1, 0), 19);
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_6036;
			break;
		
		case 10:
			return Global_262145.f_4117;
			break;
		
		case 11:
			return Global_262145.f_4118;
			break;
		
		case 8:
			return Global_262145.f_4115;
			break;
		
		case 0:
			return Global_262145.f_4101;
			break;
		
		case 9:
			return Global_262145.f_4116;
			break;
		
		case 13:
			return Global_262145.f_4120;
			break;
		
		case 12:
			return Global_262145.f_4119;
			break;
		
		case 2:
			return Global_262145.f_4111;
			break;
		
		case 14:
			return Global_262145.f_4121;
			break;
		
		case 20:
			if (func_126())
			{
				return 0;
			}
			if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 1)
			{
				return Global_262145.f_6043;
			}
			else if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 2)
			{
				return Global_262145.f_6044;
			}
			else if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 3)
			{
				return Global_262145.f_6045;
			}
			else if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 4)
			{
				return Global_262145.f_6046;
			}
			else if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) == 5)
			{
				return Global_262145.f_6047;
			}
			break;
		
		case 6:
			return Global_262145.f_4114;
			break;
		
		case 22:
			return Global_262145.f_4127;
			break;
		
		case 23:
			return Global_262145.f_4128;
			break;
		
		case 24:
			return Global_262145.f_4129;
			break;
		
		case 25:
			return Global_262145.f_4130;
			break;
		
		case 26:
			return Global_262145.f_4131;
			break;
		
		case 35:
			return Global_262145.f_6612;
			break;
		
		case 15:
			return Global_262145.f_6037;
			break;
		
		case 17:
			return Global_262145.f_6037;
			break;
		
		case 18:
			return Global_262145.f_6037;
			break;
		
		case 19:
			return Global_262145.f_6037;
			break;
		
		case 21:
			return Global_262145.f_6037;
			break;
		
		case 36:
			return Global_262145.f_7077;
			break;
		
		case 39:
			return -1;
			break;
		
		case 40:
			return Global_262145.f_12212;
			break;
		
		case 41:
			return Global_262145.f_12213;
			break;
		
		case 42:
			return Global_262145.f_12214;
			break;
		
		case 43:
			return Global_262145.f_14755;
			break;
		
		case 44:
			return Global_262145.f_14757;
			break;
	}
	return 0;
}

void func_128(int iParam0)
{
	func_129(&(Global_2447954.f_4261.f_158[iParam0 /*2*/]));
}

void func_129(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_130(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14453.f_1 > 3)
		{
			if (unk_0xC80D31E4B587871C(Global_2323, 14))
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
	if (unk_0x8F38E94BBF3404CD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_131(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x552F39AE86E07792(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x5BEF7A5AB8F17255(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2436181.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_132()
{
	int iVar0;
	int iVar1;
	
	if (((unk_0x6ADD12BF4D6D2587(iLocal_1227) && !func_138(iLocal_1227)) && !func_137(Local_186.f_4)) && unk_0xA8D0477084E86A92(unk_0x47BA76CE3C825A08(Local_186.f_4), iLocal_1227, 0))
	{
		if (!func_135(iLocal_1227, 1, 1, 0, 0, 0, 1, 0))
		{
			iVar0 = 0;
			while (iVar0 < 32)
			{
				iVar1 = unk_0xF6A72924028F588B(iVar0);
				if (func_131(iVar1, 0, 1))
				{
					if (unk_0xA8D0477084E86A92(unk_0x25D049AAC4603E65(iVar1), iLocal_1227, 0))
					{
						func_133(func_134(iVar1), 0, 0f, 0, 0, 0, -1);
					}
				}
				iVar0++;
			}
		}
		else if (!iLocal_1213)
		{
			if (!unk_0xA0BF73C5030D3F60(iLocal_1227))
			{
				unk_0xC8DAB4CEBB9AB263(iLocal_1227);
			}
			else
			{
				unk_0x4BEFCD5DAE410A90(iLocal_1227, 2);
				iLocal_1213 = 1;
			}
		}
	}
}

void func_133(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<9> Var0;
	
	Var0.f_0 = -1526880801;
	Var0.f_1 = unk_0x9EB17624F44A8DA4();
	Var0.f_7 = iParam6;
	Var0.f_4 = iParam1;
	Var0.f_5 = iParam4;
	Var0.f_2 = fParam2;
	Var0.f_3 = iParam3;
	Var0.f_6 = iParam5;
	Var0.f_8 = unk_0x4B64A8D052027742();
	if (!iParam0 == 0)
	{
		unk_0x5A26F0BDEE9F8260(1, &Var0, 9, iParam0);
	}
}

int func_134(int iParam0)
{
	var uVar0;
	
	unk_0x872F1C1F8587CCC7(&uVar0, iParam0);
	return uVar0;
}

int func_135(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0x95EC8AE7E4F33F6E(iParam0) + 1;
	if (iParam4 || !unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_136(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0x6ADD12BF4D6D2587(iVar2))
			{
				if (iParam3 && iVar2 == unk_0xFC1458A37D98B502())
				{
				}
				else if (bParam2)
				{
					if (!unk_0x3AB6A1A9084FB0A4(iVar2))
					{
						if (unk_0x1417A5CC924DE120(iVar2))
						{
							if (unk_0xF5D0CBECCA41314A(unk_0xDF35170AEEFB473B(iVar2)) == 0)
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
				else if (!unk_0x3AB6A1A9084FB0A4(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_136(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (!unk_0x8EE3A848975DDF21(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0x317536BCEA8FA6B0(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0x6ADD12BF4D6D2587(iVar0) && !unk_0x191BE1BC8F26F3C1(iParam0, 0))
		{
			iVar0 = unk_0x96D3C6B7ED86BE3A(iParam0, iParam1);
			if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
			{
				if (unk_0x78F50AA8F955BEFC(iVar0, 451360105) == 1 || unk_0x78F50AA8F955BEFC(iVar0, -828834893) == 1)
				{
					if (unk_0x2A488C176D52CCA5(unk_0xB3328BA8976B416C(iParam0, 0), unk_0xB3328BA8976B416C(iVar0, 0)) < 10f)
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

int func_137(var uParam0)
{
	if (unk_0x93C304998B457C45(uParam0))
	{
		return unk_0x3AB6A1A9084FB0A4(unk_0x47BA76CE3C825A08(uParam0));
	}
	return 1;
}

int func_138(int iParam0)
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (unk_0x191BE1BC8F26F3C1(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xB8DE76287EDC4957(iParam0, 0))
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

int func_139()
{
	if (func_140())
	{
		return 1;
	}
	return 0;
}

int func_140()
{
	var uVar0;
	var uVar1;
	
	if ((Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 2 || Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 1) || Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 3)
	{
		return 1;
	}
	if (!func_131(unk_0x9EB17624F44A8DA4(), 1, 1) && !func_294())
	{
		return 1;
	}
	if (func_146())
	{
		if (Local_186.f_23 >= 0 || Local_186.f_23 <= 3)
		{
			if (!func_294())
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
	if ((Local_186.f_23 >= 0 || Local_186.f_23 <= 3) && Local_186.f_23 != 4)
	{
		if (func_138(iLocal_1227))
		{
			if (unk_0x93C304998B457C45(Local_186.f_3))
			{
				if (unk_0xDFB139FC1B23446B(Local_186.f_3, &uVar0) == unk_0x9EB17624F44A8DA4())
				{
					if (func_145())
					{
						func_144(1, 600000);
					}
					else
					{
						Global_2512808.f_5471 = unk_0xD1952A425B78FFC0();
					}
				}
			}
			return 1;
		}
		else
		{
			if (func_137(Local_186.f_4))
			{
				if (unk_0x93C304998B457C45(Local_186.f_4))
				{
					if (unk_0xDFB139FC1B23446B(Local_186.f_4, &uVar1) == unk_0x9EB17624F44A8DA4())
					{
						if (func_145())
						{
							func_144(1, 600000);
						}
						else
						{
							Global_2512808.f_5471 = unk_0xD1952A425B78FFC0();
						}
					}
				}
				return 1;
			}
			else if (!unk_0xA8D0477084E86A92(unk_0x47BA76CE3C825A08(Local_186.f_4), iLocal_1227, 0))
			{
				return 1;
			}
			else if (Local_219[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 >= 1)
			{
				if (!unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), unk_0xB3328BA8976B416C(iLocal_1227, 1), func_143(), func_143(), func_143(), 0, 1, 0))
				{
					return 1;
				}
			}
			if (func_142(unk_0x9EB17624F44A8DA4(), 0))
			{
				return 1;
			}
			if (func_142(unk_0x9EB17624F44A8DA4(), 7))
			{
				return 1;
			}
			if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 13)
			{
				return 1;
			}
			if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 14)
			{
				return 1;
			}
			if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 15)
			{
				return 1;
			}
			if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 12)
			{
				return 1;
			}
			if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 11)
			{
				return 1;
			}
			if (unk_0xB01117EF93F91860() != iLocal_1012)
			{
				return 1;
			}
		}
	}
	if (Local_186.f_23 == 4)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_1227))
		{
			if (unk_0x1635D2AD9D560E95(iLocal_1227) <= 0 || !func_141(unk_0x25D049AAC4603E65(Local_186.f_5), iLocal_1227, 0))
			{
				unk_0x4BEFCD5DAE410A90(iLocal_1227, 1);
				return 1;
			}
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_1227))
		{
			if (func_138(iLocal_1227))
			{
				unk_0x4BEFCD5DAE410A90(iLocal_1227, 1);
				return 1;
			}
		}
		if (unk_0x6ADD12BF4D6D2587(iLocal_1227))
		{
			if (func_137(Local_186.f_4) && !Global_2456862.f_26)
			{
				unk_0x4BEFCD5DAE410A90(iLocal_1227, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_141(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x6ADD12BF4D6D2587(iParam0) && !unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		if (unk_0x6ADD12BF4D6D2587(iParam1) && !unk_0x191BE1BC8F26F3C1(iParam1, 0))
		{
			if (unk_0xA8D0477084E86A92(iParam0, iParam1, iParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_142(int iParam0, int iParam1)
{
	return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_223, iParam1);
}

float func_143()
{
	float fVar0;
	
	fVar0 = 200f;
	if (func_294())
	{
		fVar0 = (200f + 600f);
	}
	return fVar0;
}

void func_144(int iParam0, int iParam1)
{
	if (Global_2436181.f_3756[iParam0] < iParam1)
	{
		Global_2436181.f_3756[iParam0] = iParam1;
	}
	unk_0x872F1C1F8587CCC7(&(Global_2436181.f_3755), iParam0);
}

int func_145()
{
	if (func_294())
	{
		return 0;
	}
	return 1;
}

bool func_146()
{
	return Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_196 != 0;
}

void func_147()
{
	int iVar0;
	var uVar1;
	
	if (!unk_0x8E1421E2A2A2FBD4())
	{
		return;
	}
	if (Local_186.f_24 != 8 && Local_186.f_24 != 5)
	{
		if (func_137(Local_186.f_4) || func_138(iLocal_1227))
		{
			Local_186.f_24 = 8;
		}
		else if (!unk_0xA8D0477084E86A92(unk_0x47BA76CE3C825A08(Local_186.f_4), iLocal_1227, 0))
		{
			Local_186.f_24 = 8;
		}
	}
	if (Local_186.f_24 != 4)
	{
		if (unk_0xC80D31E4B587871C(Local_186.f_1, 14))
		{
			unk_0x0EE72DB1CD8A3B86(&(Local_186.f_1), 14);
		}
		if (func_231(&uLocal_1192))
		{
			func_129(&uLocal_1192);
		}
		if (func_231(&uLocal_1194))
		{
			func_129(&uLocal_1194);
		}
	}
	if (Local_186.f_24 != 7)
	{
		if (func_231(&uLocal_1196))
		{
			func_129(&uLocal_1196);
		}
	}
	if (!func_137(Local_186.f_4) && !func_138(iLocal_1227))
	{
		if (Local_186.f_24 != 8)
		{
			if ((Local_186.f_23 == 0 || Local_186.f_23 == 1) || Local_186.f_23 == 2)
			{
				if (unk_0x9479D23F28CA059C(iLocal_1227) || unk_0x9479D23F28CA059C(unk_0x47BA76CE3C825A08(Local_186.f_4)))
				{
					if ((unk_0xDE523AF6F7B269AB(iLocal_1227) <= 500 || unk_0xDE523AF6F7B269AB(unk_0x47BA76CE3C825A08(Local_186.f_4)) <= 150) || unk_0xFCE41B8198B48F94(iLocal_1227, 1, 1, 1))
					{
						Local_186.f_24 = 8;
					}
				}
			}
		}
		switch (Local_186.f_24)
		{
			case 1:
				if (Local_186.f_23 == 3)
				{
					if (!unk_0xC80D31E4B587871C(Local_186.f_2, 2))
					{
						if (func_227())
						{
							if (func_145())
							{
								func_108(&uLocal_1018, 3, unk_0x47BA76CE3C825A08(Local_186.f_4), "FM_Pilot", 0, 1);
								func_226(&uLocal_1018, "CT_AUD", "MPCT_HPgo", 12, 0, 0, 1);
							}
							else
							{
								func_11(1);
								func_108(&uLocal_1018, 2, unk_0x47BA76CE3C825A08(Local_186.f_4), "EXEC_PILOT", 0, 1);
								func_91(&uLocal_1018, "EXHELAU", "EXHEL_CUSTOM", 12, 0, 0, 1);
							}
							unk_0x872F1C1F8587CCC7(&(Local_186.f_2), 2);
						}
					}
					func_224();
					Local_186.f_24 = 2;
				}
				else if (Local_186.f_23 == 6)
				{
					Local_186.f_24 = 8;
				}
				else if (func_223() == 0 && !func_222())
				{
					func_224();
					Local_186.f_24 = 4;
				}
				else if (unk_0x1635D2AD9D560E95(iLocal_1227) > 0)
				{
					func_224();
					Local_186.f_24 = 4;
				}
				else if (unk_0xC80D31E4B587871C(Local_186.f_1, 9))
				{
					func_224();
					Local_186.f_24 = 2;
				}
				else if (unk_0xC80D31E4B587871C(iLocal_316, 4) && func_223())
				{
					if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_1227, (func_143() / 2f), (func_143() / 2f), func_143(), 0, 1, 0))
					{
						if (func_221(iLocal_1227))
						{
							if (unk_0x40012A13FD4AFE14(iLocal_1227))
							{
								if (func_109(&uLocal_1187, func_220(), 0))
								{
									iLocal_1014 = 0;
									iLocal_1015 = 0;
									iLocal_1016 = 0;
									unk_0x0EE72DB1CD8A3B86(&iLocal_316, 4);
									if (!unk_0xC80D31E4B587871C(iLocal_316, 18))
									{
										uLocal_1191 = unk_0xD1952A425B78FFC0();
									}
									unk_0x872F1C1F8587CCC7(&iLocal_316, 18);
								}
							}
							else if (func_231(&uLocal_1187))
							{
								func_129(&uLocal_1187);
							}
						}
					}
				}
				else if (!unk_0xC80D31E4B587871C(iLocal_316, 4))
				{
					if (func_162(&uVar1))
					{
						func_159(Local_186.f_6);
						func_158();
					}
				}
				if (unk_0xC80D31E4B587871C(iLocal_316, 18) && Local_186.f_24 == 1)
				{
					iVar0 = unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), uLocal_1191));
					if (iVar0 > 60000)
					{
						Local_186.f_0 = 4;
					}
				}
				if (!unk_0xC80D31E4B587871C(Local_186.f_2, 0))
				{
					if (func_227())
					{
						if (unk_0x0C88267282FD588F(iLocal_1227, Local_186.f_6, 20f, 20f, 20f, 0, 1, 0))
						{
							if (func_145())
							{
								func_108(&uLocal_1018, 3, unk_0x47BA76CE3C825A08(Local_186.f_4), "FM_Pilot", 0, 1);
								func_226(&uLocal_1018, "CT_AUD", "MPCT_HParr", 12, 0, 0, 1);
							}
							else
							{
								func_11(1);
								func_108(&uLocal_1018, 2, unk_0x47BA76CE3C825A08(Local_186.f_4), "EXEC_PILOT", 0, 1);
								func_91(&uLocal_1018, "EXHELAU", "EXHEL_APPR", 12, 0, 0, 1);
							}
							unk_0x872F1C1F8587CCC7(&(Local_186.f_2), 0);
						}
					}
				}
				break;
			
			case 2:
				if (unk_0x1635D2AD9D560E95(iLocal_1227) <= 0)
				{
					Local_186.f_24 = 4;
				}
				else if (unk_0x0C88267282FD588F(unk_0x47BA76CE3C825A08(Local_186.f_4), Local_186.f_10, 7.5f, 7.5f, 9999.9f, 0, 1, 0))
				{
					unk_0x53F2F2E038A0AAFC();
					Local_186.f_24 = 3;
					bLocal_218 = true;
					func_129(&uLocal_1203);
					func_129(&uLocal_1201);
					unk_0x0EE72DB1CD8A3B86(&(Local_186.f_1), 14);
				}
				else if (!unk_0x8C58BAD90C34FEA0() || func_157(0))
				{
					if (!unk_0xC80D31E4B587871C(Local_186.f_2, 4) && func_227())
					{
						if (func_145())
						{
							func_108(&uLocal_1018, 3, unk_0x47BA76CE3C825A08(Local_186.f_4), "FM_Pilot", 0, 1);
							func_226(&uLocal_1018, "CT_AUD", "MPCT_HPcha", 12, 0, 0, 1);
						}
						else
						{
							func_11(1);
							func_108(&uLocal_1018, 2, unk_0x47BA76CE3C825A08(Local_186.f_4), "EXEC_PILOT", 0, 1);
							func_91(&uLocal_1018, "EXHELAU", "EXHEL_CHANGE", 12, 0, 0, 1);
						}
						unk_0x872F1C1F8587CCC7(&(Local_186.f_2), 4);
					}
					unk_0x0EE72DB1CD8A3B86(&(Local_186.f_1), 9);
					unk_0x872F1C1F8587CCC7(&(Local_186.f_1), 12);
					Local_186.f_24 = 4;
				}
				if (!unk_0xC80D31E4B587871C(Local_186.f_2, 6) && func_227())
				{
					if (unk_0x0C88267282FD588F(unk_0x47BA76CE3C825A08(Local_186.f_4), Local_186.f_10, (7.5f + 75f), (7.5f + 75f), ((10f * 2f) + 75f), 0, 1, 0))
					{
						if (func_145())
						{
							func_108(&uLocal_1018, 3, unk_0x47BA76CE3C825A08(Local_186.f_4), "FM_Pilot", 0, 1);
							func_226(&uLocal_1018, "CT_AUD", "MPCT_HPnear", 12, 0, 0, 1);
						}
						unk_0x872F1C1F8587CCC7(&(Local_186.f_2), 6);
					}
				}
				func_153();
				if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) <= 0)
				{
					if (func_109(&uLocal_1198, iLocal_1200, 0))
					{
						if (func_227())
						{
							if (func_145())
							{
								func_108(&uLocal_1018, 3, unk_0x47BA76CE3C825A08(Local_186.f_4), "FM_Pilot", 0, 1);
								func_226(&uLocal_1018, "CT_AUD", "MPCT_HPfly", 12, 0, 0, 1);
							}
							else
							{
								func_11(1);
								func_108(&uLocal_1018, 2, unk_0x47BA76CE3C825A08(Local_186.f_4), "EXEC_PILOT", 0, 1);
								func_91(&uLocal_1018, "EXHELAU", "EXHEL_CHAT", 12, 0, 0, 1);
							}
							iLocal_1200 = unk_0x63A6486593EC7EC3(15000, 30000);
							func_129(&uLocal_1198);
						}
					}
				}
				break;
			
			case 5:
				if (unk_0x1635D2AD9D560E95(iLocal_1227) <= 0 || !func_141(unk_0x25D049AAC4603E65(Local_186.f_5), iLocal_1227, 0))
				{
					Local_186.f_24 = 8;
					break;
				}
				if (!unk_0xC80D31E4B587871C(Local_186.f_1, 15))
				{
					unk_0x872F1C1F8587CCC7(&(Local_186.f_1), 15);
				}
				break;
			
			case 3:
				if (iLocal_1013 != 3)
				{
					iLocal_1013 = 3;
				}
				if (unk_0x1635D2AD9D560E95(iLocal_1227) <= 0 && !unk_0x05B9D55619AF5BF2(iLocal_1227))
				{
					if (!unk_0xC80D31E4B587871C(Local_186.f_2, 9))
					{
						if (func_227())
						{
							if (unk_0x05B9D55619AF5BF2(iLocal_1227))
							{
								if (func_145())
								{
									func_108(&uLocal_1018, 3, unk_0x47BA76CE3C825A08(Local_186.f_4), "FM_Pilot", 0, 1);
									func_226(&uLocal_1018, "CT_AUD", "MPCT_HPleav", 12, 0, 0, 1);
								}
								else
								{
									func_11(1);
									func_108(&uLocal_1018, 2, unk_0x47BA76CE3C825A08(Local_186.f_4), "EXEC_PILOT", 0, 1);
									func_91(&uLocal_1018, "EXHELAU", "EXHEL_GENBYE", 12, 0, 0, 1);
								}
								unk_0x872F1C1F8587CCC7(&(Local_186.f_2), 9);
							}
						}
					}
					Local_186.f_24 = 8;
				}
				else if (!unk_0x8C58BAD90C34FEA0() || func_157(0))
				{
					unk_0x0EE72DB1CD8A3B86(&(Local_186.f_1), 9);
					unk_0x872F1C1F8587CCC7(&(Local_186.f_1), 12);
					Local_186.f_24 = 4;
				}
				if (!unk_0xC80D31E4B587871C(Local_186.f_2, 8))
				{
					if (unk_0x05B9D55619AF5BF2(iLocal_1227))
					{
						if (func_227())
						{
							if (func_145())
							{
								func_108(&uLocal_1018, 3, unk_0x47BA76CE3C825A08(Local_186.f_4), "FM_Pilot", 0, 1);
								func_226(&uLocal_1018, "CT_AUD", "MPCT_HPrap", 12, 0, 0, 1);
							}
							else
							{
								func_11(1);
								func_108(&uLocal_1018, 2, unk_0x47BA76CE3C825A08(Local_186.f_4), "EXEC_PILOT", 0, 1);
								func_91(&uLocal_1018, "EXHELAU", "EXHEL_FLIES", 12, 0, 0, 1);
							}
							unk_0x872F1C1F8587CCC7(&(Local_186.f_2), 8);
						}
					}
				}
				break;
			
			case 4:
				if (bLocal_218)
				{
					if (func_227())
					{
						if (!unk_0xC80D31E4B587871C(Local_186.f_2, 5))
						{
							if (func_145())
							{
								func_108(&uLocal_1018, 3, unk_0x47BA76CE3C825A08(Local_186.f_4), "FM_Pilot", 0, 1);
								func_226(&uLocal_1018, "CT_AUD", "MPCT_HPdrop", 12, 0, 0, 1);
							}
							else
							{
								func_11(1);
								func_108(&uLocal_1018, 2, unk_0x47BA76CE3C825A08(Local_186.f_4), "EXEC_PILOT", 0, 1);
								func_91(&uLocal_1018, "EXHELAU", "EXHEL_ARRIVE", 12, 0, 0, 1);
							}
							unk_0x872F1C1F8587CCC7(&(Local_186.f_2), 5);
						}
						else if (!func_145())
						{
							if (!unk_0xC80D31E4B587871C(Local_186.f_2, 21))
							{
								if (unk_0x20D66D71CF476CDB(iLocal_1227) > 10f)
								{
									func_11(1);
									func_108(&uLocal_1018, 2, unk_0x47BA76CE3C825A08(Local_186.f_4), "EXEC_PILOT", 0, 1);
									func_91(&uLocal_1018, "EXHELAU", "EXHEL_CANJUM", 12, 0, 0, 1);
								}
								unk_0x872F1C1F8587CCC7(&(Local_186.f_2), 21);
							}
						}
					}
				}
				if (unk_0xC80D31E4B587871C(Local_186.f_1, 12))
				{
					if (!unk_0x05B9D55619AF5BF2(iLocal_1227))
					{
						if (unk_0x8C58BAD90C34FEA0())
						{
							if (!unk_0xC80D31E4B587871C(Local_186.f_2, 2))
							{
								if (func_227())
								{
									if (func_145())
									{
										func_108(&uLocal_1018, 3, unk_0x47BA76CE3C825A08(Local_186.f_4), "FM_Pilot", 0, 1);
										func_226(&uLocal_1018, "CT_AUD", "MPCT_HPgo", 12, 0, 0, 1);
									}
									else
									{
										func_11(1);
										func_108(&uLocal_1018, 2, unk_0x47BA76CE3C825A08(Local_186.f_4), "EXEC_PILOT", 0, 1);
										func_91(&uLocal_1018, "EXHELAU", "EXHEL_GENPOS", 12, 0, 0, 1);
									}
									unk_0x872F1C1F8587CCC7(&(Local_186.f_2), 2);
								}
							}
							func_224();
							if (!func_152(Local_186.f_10, Local_186.f_13, 0))
							{
								Local_186.f_13 = { Local_186.f_10 };
								Local_186.f_24 = 2;
							}
						}
						else if (unk_0x1635D2AD9D560E95(iLocal_1227) <= 0)
						{
							Local_186.f_24 = 8;
						}
					}
				}
				else if (unk_0xC80D31E4B587871C(Local_186.f_1, 9))
				{
					if (!unk_0xC80D31E4B587871C(Local_186.f_2, 2))
					{
						if (func_227())
						{
							if (func_145())
							{
								func_108(&uLocal_1018, 3, unk_0x47BA76CE3C825A08(Local_186.f_4), "FM_Pilot", 0, 1);
								func_226(&uLocal_1018, "CT_AUD", "MPCT_HPgo", 12, 0, 0, 1);
							}
							else
							{
								func_11(1);
								func_108(&uLocal_1018, 2, unk_0x47BA76CE3C825A08(Local_186.f_4), "EXEC_PILOT", 0, 1);
								func_91(&uLocal_1018, "EXHELAU", "EXHEL_CUSTOM", 12, 0, 0, 1);
							}
							unk_0x872F1C1F8587CCC7(&(Local_186.f_2), 2);
						}
					}
					func_224();
					if (!func_152(Local_186.f_10, Local_186.f_13, 0))
					{
						Local_186.f_13 = { Local_186.f_10 };
						unk_0x872F1C1F8587CCC7(&(Local_186.f_1), 13);
						Local_186.f_24 = 2;
					}
				}
				else if (unk_0xC80D31E4B587871C(Local_186.f_1, 13))
				{
					if (unk_0x1635D2AD9D560E95(iLocal_1227) <= 0)
					{
						Local_186.f_24 = 8;
					}
				}
				func_153();
				if (func_227())
				{
					if (!unk_0xC80D31E4B587871C(Local_186.f_2, 1))
					{
						if (unk_0x1635D2AD9D560E95(iLocal_1227) > 0)
						{
							if (func_231(&uLocal_1194))
							{
								func_129(&uLocal_1194);
							}
							if (func_145())
							{
								func_108(&uLocal_1018, 3, unk_0x47BA76CE3C825A08(Local_186.f_4), "FM_Pilot", 0, 1);
								func_226(&uLocal_1018, "CT_AUD", "MPCT_HPnoW", 12, 0, 0, 1);
							}
							else
							{
								func_11(1);
								func_108(&uLocal_1018, 2, unk_0x47BA76CE3C825A08(Local_186.f_4), "EXEC_PILOT", 0, 1);
								func_91(&uLocal_1018, "EXHELAU", "EXHEL_WHERE", 12, 0, 0, 1);
							}
							unk_0x872F1C1F8587CCC7(&(Local_186.f_2), 1);
						}
					}
					else if (!unk_0xC80D31E4B587871C(Local_186.f_2, 2))
					{
						if (!unk_0xC80D31E4B587871C(Local_186.f_2, 3) && !unk_0xC80D31E4B587871C(Local_186.f_1, 12))
						{
							if (unk_0x1635D2AD9D560E95(iLocal_1227) <= 0)
							{
								if (func_145())
								{
									func_108(&uLocal_1018, 3, unk_0x47BA76CE3C825A08(Local_186.f_4), "FM_Pilot", 0, 1);
									func_226(&uLocal_1018, "CT_AUD", "MPCT_HPex", 12, 0, 0, 1);
								}
								unk_0x872F1C1F8587CCC7(&(Local_186.f_2), 3);
							}
						}
					}
					else if (!unk_0xC80D31E4B587871C(Local_186.f_2, 16))
					{
						if (unk_0x1635D2AD9D560E95(iLocal_1227) <= 0)
						{
							if (func_145())
							{
								func_108(&uLocal_1018, 3, unk_0x47BA76CE3C825A08(Local_186.f_4), "FM_Pilot", 0, 1);
								func_226(&uLocal_1018, "CT_AUD", "MPCT_HPbail", 12, 0, 0, 1);
							}
							else
							{
								func_11(1);
								func_108(&uLocal_1018, 2, unk_0x47BA76CE3C825A08(Local_186.f_4), "EXEC_PILOT", 0, 1);
								func_91(&uLocal_1018, "EXHELAU", "EXHEL_GENBYE", 12, 0, 0, 1);
							}
							unk_0x872F1C1F8587CCC7(&(Local_186.f_2), 16);
						}
					}
				}
				if (Local_186.f_24 == 4)
				{
					if (!unk_0xC80D31E4B587871C(Local_186.f_1, 14))
					{
						if (!bLocal_218)
						{
							if (func_109(&uLocal_1192, 120000, 0))
							{
								unk_0x872F1C1F8587CCC7(&(Local_186.f_1), 14);
							}
						}
						else if (func_109(&uLocal_1201, 20000, 0))
						{
							unk_0x872F1C1F8587CCC7(&(Local_186.f_1), 14);
						}
					}
					else if (!bLocal_218)
					{
						if (func_109(&uLocal_1194, 60000, 0))
						{
							Local_186.f_24 = 7;
						}
					}
					else if (func_109(&uLocal_1203, 30000, 0))
					{
						Local_186.f_24 = 7;
					}
				}
				break;
			
			case 7:
				if (func_109(&uLocal_1196, 4000, 0))
				{
					Local_186.f_24 = 8;
					if (func_151())
					{
						func_150();
					}
				}
				break;
			
			case 8:
				func_149(0);
				break;
		}
		func_148();
		if (!unk_0xC80D31E4B587871C(Local_186.f_2, 10))
		{
			if (func_227())
			{
				if (func_131(unk_0x9EB17624F44A8DA4(), 1, 1))
				{
					if (unk_0xEBE499597C718EB8(iLocal_1227, unk_0xFC1458A37D98B502(), 1))
					{
						if (func_145())
						{
							func_108(&uLocal_1018, 3, unk_0x47BA76CE3C825A08(Local_186.f_4), "FM_Pilot", 0, 1);
							func_226(&uLocal_1018, "CT_AUD", "MPCT_HPdam", 12, 0, 0, 1);
						}
						else
						{
							func_11(1);
							func_108(&uLocal_1018, 2, unk_0x47BA76CE3C825A08(Local_186.f_4), "EXEC_PILOT", 0, 1);
							func_91(&uLocal_1018, "EXHELAU", "EXHEL_DAMAGE", 12, 0, 0, 1);
						}
						unk_0x872F1C1F8587CCC7(&(Local_186.f_2), 10);
					}
				}
			}
		}
		if (!func_145())
		{
			if (!unk_0xC80D31E4B587871C(Local_186.f_2, 26))
			{
				if (func_227())
				{
					if (unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), unk_0x47BA76CE3C825A08(Local_186.f_4)) || unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), unk_0x47BA76CE3C825A08(Local_186.f_4)))
					{
						func_11(1);
						func_108(&uLocal_1018, 2, unk_0x47BA76CE3C825A08(Local_186.f_4), "EXEC_PILOT", 0, 1);
						func_91(&uLocal_1018, "EXHELAU", "EXHEL_AIM", 12, 0, 0, 1);
						unk_0x872F1C1F8587CCC7(&(Local_186.f_2), 26);
					}
				}
			}
			else if (!unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), unk_0x47BA76CE3C825A08(Local_186.f_4)) && !unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), unk_0x47BA76CE3C825A08(Local_186.f_4)))
			{
				unk_0x0EE72DB1CD8A3B86(&(Local_186.f_2), 26);
			}
		}
	}
}

void func_148()
{
	if (!iLocal_1214)
	{
		if (Local_186.f_24 == 2)
		{
			if (unk_0x93C304998B457C45(Local_186.f_3))
			{
				if (unk_0xE53FD7AF7F25C0A8(Local_186.f_3))
				{
					unk_0x0B732DEC0BE82676(iLocal_1227, 1f);
					iLocal_1214 = 1;
				}
				else
				{
					unk_0x04092215B40E1262(Local_186.f_3);
				}
			}
		}
	}
}

void func_149(bool bParam0)
{
	bLocal_1209 = bParam0;
}

void func_150()
{
	Global_68218 = 1;
}

bool func_151()
{
	return Global_68215;
}

bool func_152(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_153()
{
	if (!func_145())
	{
		if (!unk_0xC80D31E4B587871C(Local_186.f_2, 18))
		{
			if (func_227())
			{
				if (unk_0x1635D2AD9D560E95(iLocal_1227) > 0)
				{
					func_11(1);
					func_108(&uLocal_1018, 2, unk_0x47BA76CE3C825A08(Local_186.f_4), "EXEC_PILOT", 0, 1);
					func_91(&uLocal_1018, "EXHELAU", "EXHEL_GREET", 12, 0, 0, 1);
					unk_0x872F1C1F8587CCC7(&(Local_186.f_2), 18);
				}
			}
		}
		else
		{
			if (func_227())
			{
				if (unk_0x1635D2AD9D560E95(iLocal_1227) > 0)
				{
					if (unk_0x1635D2AD9D560E95(iLocal_1227) < iLocal_1017 && unk_0x20D66D71CF476CDB(iLocal_1227) > 10f)
					{
						func_11(1);
						func_108(&uLocal_1018, 2, unk_0x47BA76CE3C825A08(Local_186.f_4), "EXEC_PILOT", 0, 1);
						func_91(&uLocal_1018, "EXHELAU", "EXHEL_JUMP", 12, 0, 0, 1);
					}
					else if (!unk_0xC80D31E4B587871C(Local_186.f_2, 22) && iLocal_1211)
					{
						func_11(1);
						func_108(&uLocal_1018, 2, unk_0x47BA76CE3C825A08(Local_186.f_4), "EXEC_PILOT", 0, 1);
						func_91(&uLocal_1018, "EXHELAU", "EXHEL_GENGRE", 12, 0, 0, 1);
						unk_0x872F1C1F8587CCC7(&(Local_186.f_2), 22);
						unk_0x0EE72DB1CD8A3B86(&(Local_186.f_2), 23);
					}
					if (!unk_0x1635D2AD9D560E95(iLocal_1227) == iLocal_1017)
					{
						iLocal_1017 = unk_0x1635D2AD9D560E95(iLocal_1227);
					}
				}
				else if (!unk_0xC80D31E4B587871C(Local_186.f_2, 23))
				{
					if (unk_0x20D66D71CF476CDB(iLocal_1227) > 10f)
					{
						func_11(1);
						func_108(&uLocal_1018, 2, unk_0x47BA76CE3C825A08(Local_186.f_4), "EXEC_PILOT", 0, 1);
						func_91(&uLocal_1018, "EXHELAU", "EXHEL_JUMP", 12, 0, 0, 1);
						unk_0x872F1C1F8587CCC7(&(Local_186.f_2), 23);
						unk_0x0EE72DB1CD8A3B86(&(Local_186.f_2), 22);
					}
					else
					{
						func_11(1);
						func_108(&uLocal_1018, 2, unk_0x47BA76CE3C825A08(Local_186.f_4), "EXEC_PILOT", 0, 1);
						func_91(&uLocal_1018, "EXHELAU", "EXHEL_GENBYE", 12, 0, 0, 1);
						unk_0x872F1C1F8587CCC7(&(Local_186.f_2), 23);
						unk_0x0EE72DB1CD8A3B86(&(Local_186.f_2), 22);
					}
				}
			}
			if (!iLocal_1211)
			{
				if (unk_0x1635D2AD9D560E95(iLocal_1227) == 0)
				{
					iLocal_1211 = 1;
				}
			}
		}
		if (func_227())
		{
			if (!unk_0xC80D31E4B587871C(Local_186.f_2, 20))
			{
				if (!func_138(iLocal_1227))
				{
					if (unk_0x031F476C37018C3B(iLocal_1227) == 2)
					{
						func_11(1);
						func_108(&uLocal_1018, 2, unk_0x47BA76CE3C825A08(Local_186.f_4), "EXEC_PILOT", 0, 1);
						func_91(&uLocal_1018, "EXHELAU", "EXHEL_LOCKS", 12, 0, 0, 1);
						unk_0x872F1C1F8587CCC7(&(Local_186.f_2), 20);
					}
				}
			}
			else if (!func_138(iLocal_1227))
			{
				if (unk_0x031F476C37018C3B(iLocal_1227) != 2)
				{
					unk_0x0EE72DB1CD8A3B86(&(Local_186.f_2), 20);
				}
			}
		}
		if (!unk_0xC80D31E4B587871C(Local_186.f_2, 24))
		{
			if (func_227())
			{
				if (func_154(unk_0xFC1458A37D98B502()) >= 5)
				{
					func_11(1);
					func_108(&uLocal_1018, 2, unk_0x47BA76CE3C825A08(Local_186.f_4), "EXEC_PILOT", 0, 1);
					func_91(&uLocal_1018, "EXHELAU", "EXHEL_DRINKS", 12, 0, 0, 1);
					unk_0x872F1C1F8587CCC7(&(Local_186.f_2), 24);
				}
			}
		}
		if (!unk_0xC80D31E4B587871C(Local_186.f_2, 25))
		{
			if (func_227())
			{
				if (!func_138(iLocal_1227))
				{
					if (!unk_0x8EE3A848975DDF21(iLocal_1227, 2, 0) || !unk_0x8EE3A848975DDF21(iLocal_1227, 1, 0))
					{
						func_11(1);
						func_108(&uLocal_1018, 2, unk_0x47BA76CE3C825A08(Local_186.f_4), "EXEC_PILOT", 0, 1);
						func_91(&uLocal_1018, "EXHELAU", "EXHEL_CHAMP", 12, 0, 0, 1);
						unk_0x872F1C1F8587CCC7(&(Local_186.f_2), 25);
					}
				}
			}
		}
		if (!unk_0xC80D31E4B587871C(Local_186.f_2, 19))
		{
			if (func_227())
			{
				if (unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502()))
				{
					func_11(1);
					func_108(&uLocal_1018, 2, unk_0x47BA76CE3C825A08(Local_186.f_4), "EXEC_PILOT", 0, 1);
					func_91(&uLocal_1018, "EXHELAU", "EXHEL_FIRE", 12, 0, 0, 1);
					unk_0x872F1C1F8587CCC7(&(Local_186.f_2), 19);
				}
			}
		}
	}
}

int func_154(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	iVar0 = func_156(iParam0);
	iVar1 = func_155(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36796[iVar1 /*5*/].f_3;
}

int func_155(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36796[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_156(int iParam0)
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
		if (iParam0 == Global_36796[iVar0 /*5*/].f_1)
		{
			return Global_36796[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

bool func_157(int iParam0)
{
	return unk_0xC80D31E4B587871C(Global_2512808.f_271, iParam0);
}

void func_158()
{
	if (!func_137(Local_186.f_4))
	{
		unk_0xB8E08BD5B184DF4E(unk_0x47BA76CE3C825A08(Local_186.f_4));
	}
}

void func_159(struct<3> Param0)
{
	Local_186.f_17 = { func_160(Param0) };
}

Vector3 func_160(struct<3> Param0)
{
	struct<3> Var0;
	
	switch (func_161(Param0))
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

int func_161(struct<2> Param0, var uParam2)
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

bool func_162(var uParam0)
{
	var uVar0;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<3> Var9;
	
	*uParam0 = 0;
	if (!unk_0xC80D31E4B587871C(iLocal_316, 4) && func_131(unk_0x9EB17624F44A8DA4(), 1, 1))
	{
		if (func_219(unk_0x9EB17624F44A8DA4()) && !unk_0xC80D31E4B587871C(iLocal_316, 18))
		{
			Local_186.f_6 = { func_213(func_215(func_216(unk_0x9EB17624F44A8DA4()))) };
			unk_0x872F1C1F8587CCC7(&iLocal_316, 4);
			*uParam0 = 1;
		}
		else if (func_169(150f, &iVar4, &iVar5) && !unk_0xC80D31E4B587871C(iLocal_316, 18))
		{
			func_168(iVar4, iVar5, &(Local_186.f_6), &(Local_186.f_9));
			*uParam0 = 1;
			unk_0x872F1C1F8587CCC7(&iLocal_316, 4);
		}
		else if ((func_294() && func_164(600f)) && !unk_0xC80D31E4B587871C(iLocal_316, 18))
		{
			Local_186.f_6 = { Local_1219[0 /*3*/] };
			Local_186.f_9 = uLocal_1223[0];
			*uParam0 = 1;
			unk_0x872F1C1F8587CCC7(&iLocal_316, 4);
		}
		else if (iLocal_1014 == 0)
		{
			if (iLocal_1016 == 0)
			{
				Local_186.f_6 = { unk_0x3F90543934DCD7E6(unk_0xFC1458A37D98B502(), 0f, (15f / 2f), 1.3f) };
				unk_0x7367FB97975F1E29(Local_186.f_6, &(Local_186.f_6.f_2), 0, 0);
				Local_186.f_6.f_2 = (Local_186.f_6.f_2 + 1.3f);
			}
			else if (iLocal_1016 == 1)
			{
				Local_186.f_6 = { unk_0x3F90543934DCD7E6(unk_0xFC1458A37D98B502(), (15f / 2f), 0f, 1.3f) };
				unk_0x7367FB97975F1E29(Local_186.f_6, &(Local_186.f_6.f_2), 0, 0);
				Local_186.f_6.f_2 = (Local_186.f_6.f_2 + 1.3f);
			}
			else if (iLocal_1016 == 2)
			{
				Local_186.f_6 = { unk_0x3F90543934DCD7E6(unk_0xFC1458A37D98B502(), (-15f / 2f), 0f, 1.3f) };
				unk_0x7367FB97975F1E29(Local_186.f_6, &(Local_186.f_6.f_2), 0, 0);
				Local_186.f_6.f_2 = (Local_186.f_6.f_2 + 1.3f);
			}
			else if (iLocal_1016 == 3)
			{
				Local_186.f_6 = { unk_0x3F90543934DCD7E6(unk_0xFC1458A37D98B502(), 0f, (-15f / 2f), 1.3f) };
				unk_0x7367FB97975F1E29(Local_186.f_6, &(Local_186.f_6.f_2), 0, 0);
				Local_186.f_6.f_2 = (Local_186.f_6.f_2 + 1.3f);
			}
			else if (iLocal_1016 == 4)
			{
				unk_0xC036F7DE6A42457A(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), &(Local_186.f_6), 1, 1077936128, 0);
				Local_186.f_6.f_2 = (Local_186.f_6.f_2 + 1.3f);
				if (!unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), Local_186.f_6, 75f, 75f, 75f, 0, 1, 0))
				{
					Local_186.f_0 = 4;
				}
			}
			else if (iLocal_1016 == 5)
			{
				unk_0x49A7AD0000D6AF17(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 3, &(Local_186.f_6), 1, 1077936128, 0);
				Local_186.f_6.f_2 = (Local_186.f_6.f_2 + 1.3f);
				if (!unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), Local_186.f_6, 75f, 75f, 75f, 0, 1, 0))
				{
					Local_186.f_0 = 4;
				}
			}
			else if (iLocal_1016 == 6)
			{
				unk_0x49A7AD0000D6AF17(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 6, &(Local_186.f_6), 1, 1077936128, 0);
				Local_186.f_6.f_2 = (Local_186.f_6.f_2 + 1.3f);
				if (!unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), Local_186.f_6, 75f, 75f, 75f, 0, 1, 0))
				{
					Local_186.f_0 = 4;
				}
			}
			else if (iLocal_1016 == 7)
			{
				unk_0x49A7AD0000D6AF17(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 10, &(Local_186.f_6), 1, 1077936128, 0);
				Local_186.f_6.f_2 = (Local_186.f_6.f_2 + 1.3f);
				if (!unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), Local_186.f_6, 75f, 75f, 75f, 0, 1, 0))
				{
					Local_186.f_0 = 4;
				}
			}
			else if (iLocal_1016 == 8)
			{
				unk_0x49A7AD0000D6AF17(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 15, &(Local_186.f_6), 1, 1077936128, 0);
				Local_186.f_6.f_2 = (Local_186.f_6.f_2 + 1.3f);
				if (!unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), Local_186.f_6, 75f, 75f, 75f, 0, 1, 0))
				{
					Local_186.f_0 = 4;
				}
			}
			else if (iLocal_1016 == 9)
			{
				unk_0x49A7AD0000D6AF17(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 20, &(Local_186.f_6), 1, 1077936128, 0);
				Local_186.f_6.f_2 = (Local_186.f_6.f_2 + 1.3f);
			}
			else if (func_164(100f) && !unk_0xC80D31E4B587871C(iLocal_316, 18))
			{
				Local_186.f_6 = { Local_1219[0 /*3*/] };
				Local_186.f_9 = uLocal_1223[0];
				*uParam0 = 1;
				unk_0x872F1C1F8587CCC7(&iLocal_316, 4);
				return 1;
			}
			else
			{
				Local_186.f_0 = 4;
			}
			if (!unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), Local_186.f_6, 75f, 75f, 5f, 0, 1, 0) || unk_0xA275371ED0902FCB(Local_186.f_6 + Vector(2f, 0f, 0f), Local_186.f_6 - Vector(5f, 0f, 0f), &uVar6))
			{
				iLocal_1014 = 0;
				iLocal_1015 = 0;
				iLocal_1016++;
				return 0;
			}
			Var9 = { Local_186.f_6 + Vector((50f / 2f), 0f, 0f) };
			iLocal_1014 = unk_0x17A93AB091FDD6BE(Var9, 15f, 15f, 50f, 0f, 0f, -1f, 2, 131, unk_0xFC1458A37D98B502(), 4);
			if (iLocal_1014 == 0)
			{
				return 0;
			}
		}
		else if (unk_0x16ACABF450EB00B4(iLocal_1014, &iLocal_1015, &uVar0, &uVar0, &uVar3) == 2)
		{
			iLocal_1014 = 0;
			if (iLocal_1015 == 0 && !func_163(Local_186.f_6, 3, 0, 0))
			{
				unk_0x872F1C1F8587CCC7(&iLocal_316, 4);
			}
			else
			{
				iLocal_1015 = 0;
				iLocal_1016++;
			}
		}
		else if (unk_0x16ACABF450EB00B4(iLocal_1014, &iLocal_1015, &uVar0, &uVar0, &uVar3) == 0)
		{
			iLocal_1014 = 0;
		}
	}
	return unk_0xC80D31E4B587871C(iLocal_316, 4);
}

int func_163(struct<3> Param0, int iParam3, int iParam4, bool bParam5)
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
			fVar92[0] = 255f;
			Var0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			Var46[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 180f;
			Var0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			Var46[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 205f;
			Var0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			Var46[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 86.25f;
			Var0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			Var46[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 150.5f;
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
		if (unk_0x8AE9E5E8F6DC40C9(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], iVar110, 1))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

int func_164(float fParam0)
{
	int iVar0;
	
	func_165(func_167(unk_0x9EB17624F44A8DA4()), &Local_1219, &uLocal_1223, &uLocal_1225);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (uLocal_1225[iVar0] < fParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_165(struct<3> Param0, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	float fVar1;
	struct<3> Var2[1];
	var uVar6[1];
	float fVar8[1];
	int iVar10;
	
	if (unk_0x2A488C176D52CCA5(Local_1216, Param0) < 20f)
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
		fVar1 = unk_0x2A488C176D52CCA5(Param0, Global_2412214[iVar10 /*3*/]);
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (fVar1 < fVar8[iVar0])
			{
				func_166(Global_2412214[iVar10 /*3*/], Global_2413112[iVar10], fVar1, iVar0, &Var2, &uVar6, &fVar8);
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
	Local_1216 = { Param0 };
}

void func_166(struct<3> Param0, var uParam3, float fParam4, int iParam5, var uParam6, var uParam7, float fParam8)
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
		func_166(Var0, uVar3, uVar4, iParam5 + 1, uParam6, uParam7, fParam8);
	}
}

Vector3 func_167(int iParam0)
{
	return unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iParam0), 0);
}

void func_168(int iParam0, int iParam1, var uParam2, var uParam3)
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

int func_169(float fParam0, var uParam1, var uParam2)
{
	float fVar0;
	
	if (func_294())
	{
		func_170(uParam1, &fVar0, uParam2);
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

void func_170(var uParam0, var uParam1, var uParam2)
{
	int iVar0[2];
	var uVar3[2];
	int iVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	
	func_209(&(iVar0[0]), &(uVar3[0]));
	func_171(&(iVar0[1]), &(uVar3[1]));
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

void func_171(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	int iVar9;
	
	iVar0 = -1;
	fVar1 = 1E+07f;
	Var2 = { func_175(unk_0x9EB17624F44A8DA4()) };
	Var2.f_2 = 0f;
	iVar9 = 0;
	while (iVar9 < 23)
	{
		if (iVar9 > 0)
		{
			if (func_174(iVar9))
			{
				Var5 = { func_172(iVar9) };
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

Vector3 func_172(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	if (!func_173(iParam0))
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

int func_173(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_174(int iParam0)
{
	int iVar0;
	
	if (func_173(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_84[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

Vector3 func_175(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0xA6DECE14FC9A8C51(Global_2415606[iParam0]))
	{
		Var0 = { unk_0x67247AA13B7486A3(Global_2415606[iParam0]) };
	}
	else if (unk_0xA6DECE14FC9A8C51(Global_2415606.f_33[iParam0]) && !iParam0 == Global_2436181)
	{
		Var0 = { unk_0x67247AA13B7486A3(Global_2415606.f_33[iParam0]) };
	}
	if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
	{
		return Var0;
	}
	return func_176(iParam0);
}

Vector3 func_176(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	if (Global_1595693[iParam0 /*680*/].f_266.f_17 > 0)
	{
		Var1 = { func_208(func_215(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_17)) };
		if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
		{
			return Var1;
		}
	}
	else
	{
		func_206(func_167(iParam0), &iVar0);
		if (iVar0 > 0)
		{
			Var1 = { func_208(func_215(iVar0)) };
			if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
			{
				return Var1;
			}
		}
	}
	if (func_205(iParam0))
	{
		Var1 = { func_181(iParam0) };
		if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
		{
			return Var1;
		}
	}
	if (func_180(iParam0))
	{
		iVar4 = func_179(iParam0);
		if (iVar4 > -1)
		{
			Var1 = { Global_1669535.f_42[iVar4 /*3*/] };
			if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
			{
				return Var1;
			}
		}
	}
	if (func_178(iParam0))
	{
		Var1 = { func_177(iParam0) };
		if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
		{
			return Var1;
		}
	}
	return func_167(iParam0);
}

Vector3 func_177(int iParam0)
{
	return Global_2422736[iParam0 /*420*/].f_77.f_7;
}

int func_178(int iParam0)
{
	if (Global_2422736[iParam0 /*420*/].f_77.f_6 != -1)
	{
		return 1;
	}
	return 0;
}

int func_179(int iParam0)
{
	if (iParam0 != func_4())
	{
		return Global_2422736[iParam0 /*420*/].f_324.f_11;
	}
	return -1;
}

int func_180(int iParam0)
{
	bool bVar0;
	
	if (iParam0 != func_4() && (func_131(iParam0, 1, 1) || Global_2405047.f_2640))
	{
		bVar0 = unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_324, 1);
		return bVar0;
	}
	return 0;
}

Vector3 func_181(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (iParam0 == func_4())
	{
	}
	if (func_204(iParam0))
	{
		iVar0 = func_203(iParam0);
		if (iVar0 != func_4())
		{
			if (!func_202(iVar0))
			{
				if (unk_0x6ADD12BF4D6D2587(Global_2436181.f_644[iVar0 /*3*/][1]))
				{
					return unk_0xB3328BA8976B416C(Global_2436181.f_644[iVar0 /*3*/][1], 0);
				}
				else
				{
					return Global_2422736[func_203(iParam0) /*420*/].f_324.f_5;
				}
			}
			else
			{
				iVar1 = func_198(iVar0);
				if (!iVar1 == -1)
				{
					return Global_1669535.f_42[iVar1 /*3*/];
				}
			}
		}
	}
	else if (func_197(iParam0))
	{
		if (unk_0x6ADD12BF4D6D2587(Global_2512808.f_293))
		{
			return unk_0xB3328BA8976B416C(Global_2512808.f_293, 0);
		}
	}
	else if (func_196(iParam0) && !func_195(iParam0))
	{
		iVar2 = Global_2422736[iParam0 /*420*/].f_324.f_4;
		if (iVar2 != func_4())
		{
			iVar3 = func_198(iVar2);
			if (!iVar3 == -1)
			{
				return Global_1669535.f_42[iVar3 /*3*/];
			}
		}
	}
	else if (func_194(iParam0) && !func_193(iParam0))
	{
		if (func_205(iParam0) && func_192())
		{
			return Global_1669535.f_42[Global_2422736[iParam0 /*420*/].f_324.f_1 /*3*/];
		}
		iVar4 = Global_2422736[iParam0 /*420*/].f_324.f_4;
		if (iVar4 != func_4())
		{
			if (func_191(iVar4))
			{
				iVar5 = func_187(iVar4);
				if (iVar5 != -1)
				{
					return Global_1669535.f_42[iVar5 /*3*/];
				}
			}
		}
	}
	else if (func_186(iParam0))
	{
		iVar6 = func_185(iParam0);
		if (iVar6 != func_4())
		{
			if (!func_184(iVar6))
			{
				if (unk_0x6ADD12BF4D6D2587(Global_2436181.f_741[iVar6]))
				{
					return unk_0xB3328BA8976B416C(Global_2436181.f_741[iVar6], 0);
				}
				else
				{
					return Global_2422736[func_185(iParam0) /*420*/].f_324.f_14;
				}
			}
			else
			{
				iVar7 = func_187(iVar6);
				if (!iVar7 == -1)
				{
					return Global_1669535.f_42[iVar7 /*3*/];
				}
			}
		}
	}
	else if (func_182(iParam0))
	{
		if (unk_0x6ADD12BF4D6D2587(Global_2512808.f_295))
		{
			return unk_0xB3328BA8976B416C(Global_2512808.f_295, 0);
		}
	}
	return Global_1669535.f_42[Global_2422736[iParam0 /*420*/].f_324.f_1 /*3*/];
}

int func_182(int iParam0)
{
	if (iParam0 != func_4())
	{
		if (func_131(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_183(Global_2422736[iParam0 /*420*/].f_324.f_1) == 10;
			}
		}
	}
	return 0;
}

int func_183(int iParam0)
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
		case 98:
		case 99:
		case 100:
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
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
	}
	return -1;
}

int func_184(int iParam0)
{
	if (iParam0 != func_4())
	{
		return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_324.f_10, 6);
	}
	return 0;
}

int func_185(int iParam0)
{
	if (iParam0 == func_4())
	{
		return iParam0;
	}
	return Global_2422736[iParam0 /*420*/].f_324.f_4;
}

int func_186(int iParam0)
{
	if (iParam0 != func_4())
	{
		if (func_131(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1 && Global_2422736[iParam0 /*420*/].f_324.f_4 != func_4())
			{
				return func_183(Global_2422736[iParam0 /*420*/].f_324.f_1) == 8;
			}
		}
	}
	return 0;
}

int func_187(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_4())
	{
		return -1;
	}
	iVar0 = func_190(iParam0);
	if (!iVar0 == 0)
	{
		return func_188(iVar0);
	}
	return -1;
}

int func_188(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 102)
	{
		if (func_183(iVar0) == 9)
		{
			if (func_189(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_189(int iParam0)
{
	switch (iParam0)
	{
		case 89:
			return 1;
		
		case 90:
			return 2;
		
		case 91:
			return 3;
		
		case 92:
			return 4;
		
		case 93:
			return 5;
		
		case 94:
			return 6;
		
		case 95:
			return 7;
		
		case 96:
			return 8;
		
		case 97:
			return 9;
		
		default:
	}
	return 0;
}

int func_190(int iParam0)
{
	if (iParam0 == func_4())
	{
		return 0;
	}
	return Global_1595693[iParam0 /*680*/].f_266.f_248;
}

int func_191(int iParam0)
{
	if (iParam0 != func_4())
	{
		return Global_1595693[iParam0 /*680*/].f_266.f_248 != 0;
	}
	return 0;
}

int func_192()
{
	if (unk_0xC80D31E4B587871C(Global_1669535.f_2916, 13) || Global_1669535.f_1815)
	{
		return 1;
	}
	return 0;
}

int func_193(int iParam0)
{
	if (iParam0 == func_4())
	{
		return 0;
	}
	if (func_194(iParam0) && Global_2422736[iParam0 /*420*/].f_324.f_4 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_194(int iParam0)
{
	if (iParam0 != func_4())
	{
		if (func_131(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_183(Global_2422736[iParam0 /*420*/].f_324.f_1) == 9;
			}
		}
	}
	return 0;
}

int func_195(int iParam0)
{
	if (iParam0 == func_4())
	{
		return 0;
	}
	if (func_196(iParam0) && Global_2422736[iParam0 /*420*/].f_324.f_4 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_196(int iParam0)
{
	if (iParam0 != func_4())
	{
		if (func_131(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_183(Global_2422736[iParam0 /*420*/].f_324.f_1) == 4;
			}
		}
	}
	return 0;
}

int func_197(int iParam0)
{
	if (iParam0 != func_4())
	{
		if (func_131(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_183(Global_2422736[iParam0 /*420*/].f_324.f_1) == 6;
			}
		}
	}
	return 0;
}

int func_198(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_4())
	{
		return -1;
	}
	iVar0 = func_201(iParam0);
	if (!iVar0 == 0)
	{
		return func_199(iVar0);
	}
	return -1;
}

int func_199(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 102)
	{
		if (func_200(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_200(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 1;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 3;
			break;
		
		case 25:
			return 4;
			break;
		
		case 26:
			return 5;
			break;
		
		case 27:
			return 6;
			break;
		
		case 28:
			return 7;
			break;
		
		case 29:
			return 8;
			break;
		
		case 30:
			return 9;
			break;
		
		case 31:
			return 10;
			break;
		
		case 32:
			return 11;
			break;
		
		case 33:
			return 12;
			break;
		
		case 34:
			return 13;
			break;
		
		case 35:
			return 14;
			break;
		
		case 36:
			return 15;
			break;
		
		case 37:
			return 16;
			break;
		
		case 38:
			return 17;
			break;
		
		case 39:
			return 18;
			break;
		
		case 40:
			return 19;
			break;
		
		case 41:
			return 20;
			break;
		
		case 70:
			return 21;
		
		case 71:
			return 22;
		
		case 72:
			return 23;
		
		case 73:
			return 24;
		
		case 74:
			return 25;
		
		case 75:
			return 26;
		
		case 76:
			return 27;
		
		case 77:
			return 28;
		
		case 78:
			return 29;
		
		case joaat("mpsv_lp0_31"):
			return 30;
		
		case 80:
			return 31;
	}
	return 0;
}

int func_201(int iParam0)
{
	if (iParam0 == func_4())
	{
		return 0;
	}
	return Global_1595693[iParam0 /*680*/].f_266.f_160[5 /*12*/];
}

int func_202(int iParam0)
{
	if (iParam0 != func_4())
	{
		return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_324, 6);
	}
	return 0;
}

int func_203(int iParam0)
{
	if (iParam0 == func_4())
	{
		return iParam0;
	}
	return Global_2422736[iParam0 /*420*/].f_324.f_4;
}

int func_204(int iParam0)
{
	if (iParam0 != func_4())
	{
		if (func_131(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1 && Global_2422736[iParam0 /*420*/].f_324.f_4 != func_4())
			{
				return func_183(Global_2422736[iParam0 /*420*/].f_324.f_1) == 5;
			}
		}
	}
	return 0;
}

int func_205(int iParam0)
{
	if (iParam0 != func_4())
	{
		if (func_131(iParam0, 1, 1))
		{
			return Global_2422736[iParam0 /*420*/].f_324.f_1 != -1;
		}
		else if ((Global_1312854 && iParam0 == unk_0x9EB17624F44A8DA4()) && func_131(iParam0, 1, 0))
		{
			return Global_2422736[iParam0 /*420*/].f_324.f_1 != -1;
		}
	}
	return 0;
}

void func_206(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 7;
	while (iVar0 <= iVar1)
	{
		if (func_207(Param0, iVar0, 0))
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
		if (func_207(Param0, iVar0, 0))
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
		if (func_207(Param0, iVar0, 0))
		{
			*uParam3 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 8;
	if (func_207(Param0, iVar0, 0))
	{
		if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_17 > 0)
		{
			*uParam3 = Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_17;
		}
		else if (Global_2404633.f_1 > 0)
		{
			*uParam3 = Global_2404633.f_1;
		}
		else
		{
			*uParam3 = iVar0;
		}
		return;
	}
	iVar0 = 17;
	if (func_207(Param0, iVar0, 0))
	{
		if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_17 > 0)
		{
			*uParam3 = Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_17;
		}
		else if (Global_2404633.f_1 > 0)
		{
			*uParam3 = Global_2404633.f_1;
		}
		else
		{
			*uParam3 = iVar0;
		}
		return;
	}
}

int func_207(struct<3> Param0, int iParam3, float fParam4)
{
	int iVar0;
	struct<3> Var1[3];
	struct<3> Var11[3];
	int iVar21;
	
	if (iParam3 != 999)
	{
		iVar21 = 0;
		while (iVar21 < 3)
		{
			if (Global_1049531[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/].f_2 > Global_1049531[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/].f_3.f_2)
			{
				Var1[iVar21 /*3*/] = { Global_1049531[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/] };
				Var11[iVar21 /*3*/] = { Global_1049531[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/].f_3 };
			}
			else
			{
				Var1[iVar21 /*3*/] = { Global_1049531[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/].f_3 };
				Var11[iVar21 /*3*/] = { Global_1049531[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/] };
			}
			Var1[iVar21 /*3*/].f_2 = (Var1[iVar21 /*3*/].f_2 + fParam4);
			Var11[iVar21 /*3*/].f_2 = (Var11[iVar21 /*3*/].f_2 - fParam4);
			iVar21++;
		}
		if ((unk_0x8AE9E5E8F6DC40C9(Param0, Var11[0 /*3*/], Var1[0 /*3*/], Global_1049531[iParam3 /*1951*/].f_146.f_57[0 /*8*/].f_6, 0, 1) || (Global_1049531[iParam3 /*1951*/].f_146.f_57[1 /*8*/].f_6 != 0f && unk_0x8AE9E5E8F6DC40C9(Param0, Var11[1 /*3*/], Var1[1 /*3*/], Global_1049531[iParam3 /*1951*/].f_146.f_57[1 /*8*/].f_6, 0, 1))) || (Global_1049531[iParam3 /*1951*/].f_146.f_57[2 /*8*/].f_6 != 0f && unk_0x8AE9E5E8F6DC40C9(Param0, Var11[2 /*3*/], Var1[2 /*3*/], Global_1049531[iParam3 /*1951*/].f_146.f_57[2 /*8*/].f_6, 0, 1)))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 1;
		while (iVar0 <= 7)
		{
			if (func_207(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 34;
		while (iVar0 <= 43)
		{
			if (func_207(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 61;
		while (iVar0 <= 65)
		{
			if (func_207(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 73;
		while (iVar0 <= 76)
		{
			if (func_207(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 77;
		while (iVar0 <= 82)
		{
			if (func_207(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 83;
		while (iVar0 <= 85)
		{
			if (func_207(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 87;
		while (iVar0 <= 90)
		{
			if (func_207(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 91;
		while (iVar0 <= 102)
		{
			if (func_207(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 103;
		while (iVar0 <= 113)
		{
			if (func_207(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		if (func_207(Param0, 8, fParam4))
		{
			return 1;
		}
		if (func_207(Param0, 17, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_208(int iParam0)
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

void func_209(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	int iVar9;
	
	iVar0 = -1;
	fVar1 = 1E+07f;
	Var2 = { func_175(unk_0x9EB17624F44A8DA4()) };
	Var2.f_2 = 0f;
	iVar9 = -1;
	iVar9 = 87;
	while (iVar9 <= 90)
	{
		if (func_210(iVar9))
		{
			Var5 = { Global_1049531[iVar9 /*1951*/].f_3[0 /*3*/] };
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

int func_210(int iParam0)
{
	int iVar0;
	
	if (iParam0 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 14)
		{
			if (func_211(iVar0, -1) == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
		if (iParam0 == func_211(99, -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_211(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_9();
	}
	if (iParam0 == 7 && !Global_262145.f_16308)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_212(iParam0);
		if (iVar1 == 0 && func_7(5376, iParam1, 0) != 0)
		{
			return 1234;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1368219[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2549282[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 14)
		{
			return 0;
		}
		return Global_2549199[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

int func_212(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 1)
	{
		return iParam0;
	}
	return -1;
}

Vector3 func_213(int iParam0)
{
	if (func_214(iParam0))
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

int func_214(int iParam0)
{
	if (((iParam0 == 68 || iParam0 == 69) || iParam0 == 70) || iParam0 == 71)
	{
		return 1;
	}
	return 0;
}

int func_215(int iParam0)
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

int func_216(int iParam0)
{
	if (func_131(iParam0, 0, 1))
	{
		return func_217(func_167(iParam0));
	}
	return -1;
}

int func_217(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 87;
	while (iVar0 <= 90)
	{
		if (func_218(Param0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_218(struct<3> Param0, int iParam3)
{
	switch (iParam3)
	{
		case 87:
			if (unk_0x8AE9E5E8F6DC40C9(Param0, -1588.118f, -581.678f, 109.549f, -1556.568f, -559.578f, 127.049f, 38.1f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 88:
			if (unk_0x8AE9E5E8F6DC40C9(Param0, -1411.432f, -480.399f, 80.276f, -1348.382f, -473.199f, 98.801f, 37.65f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 89:
			if (unk_0x8AE9E5E8F6DC40C9(Param0, -183.232f, -625.231f, 164.81f, -92.457f, -555.531f, 221.735f, 117.125f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 90:
			if (unk_0x8AE9E5E8F6DC40C9(Param0, -97.577f, -810.65f, 290.012f, -51.802f, -827.175f, 331.587f, 44.15f, 0, 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_219(int iParam0)
{
	int iVar0;
	
	iVar0 = func_216(iParam0);
	if (iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

int func_220()
{
	int iVar0;
	
	iVar0 = 5000;
	if (func_294())
	{
		iVar0 = 3000;
	}
	return iVar0;
}

int func_221(int iParam0)
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (unk_0x0D4BF24EE51A419A(iParam0))
		{
			unk_0xC8DAB4CEBB9AB263(iParam0);
			return unk_0xA0BF73C5030D3F60(iParam0);
		}
	}
	return 0;
}

int func_222()
{
	struct<3> Var0;
	float fVar3;
	
	if (!unk_0x191BE1BC8F26F3C1(iLocal_1227, 0))
	{
		Var0 = { unk_0xB3328BA8976B416C(iLocal_1227, 1) };
		fVar3 = (Var0.f_2 - Local_186.f_6.f_2);
		if (fVar3 > 2f)
		{
			return 1;
		}
	}
	return 0;
}

int func_223()
{
	int iVar0;
	
	if (iLocal_1189)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_1227))
		{
			if (!unk_0x0ACC2116170FA204(iLocal_1227))
			{
				if (unk_0x5E0BEAAD15B888F3(iLocal_1227))
				{
					iVar0 = unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), uLocal_1190));
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
		iLocal_1189 = 1;
	}
	uLocal_1190 = unk_0xD1952A425B78FFC0();
	return 1;
}

void func_224()
{
	float fVar0;
	
	if (unk_0x8C58BAD90C34FEA0())
	{
		Local_186.f_10 = { unk_0x2EC078E897E7EF54(unk_0x8B85A9204085F2E4(unk_0x526A9A6B1B39C5F0())) };
		Local_186.f_10.f_2 = unk_0x357310BDD94111AA((Local_186.f_10 - 25f), (Local_186.f_10.f_1 - 25f), (Local_186.f_10 + 25f), (Local_186.f_10.f_1 + 25f));
		fVar0 = unk_0x9FE23158C615DB0D((Local_186.f_10 - 25f), (Local_186.f_10.f_1 - 25f), (Local_186.f_10 + 25f), (Local_186.f_10.f_1 + 25f));
		if ((Local_186.f_10.f_2 - fVar0) < 20f)
		{
			Local_186.f_10.f_2 = (Local_186.f_10.f_2 + 10f);
		}
		else if ((Local_186.f_10.f_2 - fVar0) > 30f && (Local_186.f_10.f_2 - fVar0) < 70f)
		{
			Local_186.f_10.f_2 = (Local_186.f_10.f_2 + 40f);
		}
		func_225(0);
		func_159(Local_186.f_10);
	}
}

void func_225(int iParam0)
{
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_271), iParam0);
}

int func_226(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_84(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15763 = 0;
	Global_15765 = 0;
	Global_15770 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_2621441 = 1;
	return func_76(sParam2, iParam3, 0);
}

int func_227()
{
	struct<3> Var0;
	
	if (!func_230())
	{
		if (unk_0x6ADD12BF4D6D2587(unk_0x47BA76CE3C825A08(Local_186.f_4)))
		{
			if (!unk_0x191BE1BC8F26F3C1(unk_0x47BA76CE3C825A08(Local_186.f_4), 0))
			{
				Var0 = { unk_0xB3328BA8976B416C(unk_0x47BA76CE3C825A08(Local_186.f_4), 0) };
				if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), Var0, 50f, 50f, 150f, 0, 1, 0) && !func_228(unk_0x9EB17624F44A8DA4()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_228(int iParam0)
{
	if (func_229(Global_1595693[iParam0 /*680*/].f_266.f_17))
	{
		return 1;
	}
	return 0;
}

int func_229(int iParam0)
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

int func_230()
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

bool func_231(var uParam0)
{
	return uParam0->f_1;
}

void func_232()
{
	switch (Local_186.f_23)
	{
		case 0:
			if (unk_0xC80D31E4B587871C(Local_186.f_1, 8) || (!func_138(iLocal_1227) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_1227, 0)))
			{
				func_235();
				Local_186.f_23 = 1;
			}
			break;
		
		case 1:
			if (!func_138(iLocal_1227))
			{
				if (unk_0x1635D2AD9D560E95(iLocal_1227) > 0)
				{
					Local_186.f_23 = 2;
				}
			}
			break;
		
		case 2:
			if (unk_0xC80D31E4B587871C(Local_186.f_1, 12))
			{
				if (unk_0x8C58BAD90C34FEA0())
				{
					Local_186.f_23 = 3;
					func_110(&uLocal_1207, 0, 0);
				}
			}
			else if (unk_0xC80D31E4B587871C(Local_186.f_1, 9))
			{
				Local_186.f_23 = 3;
				func_110(&uLocal_1207, 0, 0);
			}
			else if (unk_0xC80D31E4B587871C(Local_186.f_1, 10))
			{
				Local_186.f_23 = 5;
			}
			break;
		
		case 3:
			if (!func_138(iLocal_1227))
			{
				if (unk_0x1635D2AD9D560E95(iLocal_1227) <= 0)
				{
					Local_186.f_23 = 1;
				}
				else if (unk_0xC80D31E4B587871C(Local_186.f_1, 10))
				{
					Local_186.f_23 = 5;
				}
				else if (!unk_0x8C58BAD90C34FEA0() || func_157(0))
				{
					Local_186.f_10 = { 0f, 0f, 0f };
					unk_0x0EE72DB1CD8A3B86(&(Local_186.f_1), 10);
					unk_0x0EE72DB1CD8A3B86(&(Local_186.f_1), 9);
					Local_186.f_23 = 2;
				}
			}
			break;
		
		case 4:
			if (Global_2456862.f_26)
			{
				if (func_233())
				{
					func_450(0);
				}
			}
			break;
		
		case 5:
			if (!func_138(iLocal_1227))
			{
				if (unk_0x1635D2AD9D560E95(iLocal_1227) <= 0 && !unk_0x05B9D55619AF5BF2(iLocal_1227))
				{
					if (func_131(Local_186.f_5, 1, 1) && !unk_0x0ACC2116170FA204(unk_0x25D049AAC4603E65(Local_186.f_5)))
					{
						if (unk_0x78F50AA8F955BEFC(unk_0x25D049AAC4603E65(Local_186.f_5), -275944640) != 1 && unk_0x78F50AA8F955BEFC(unk_0x25D049AAC4603E65(Local_186.f_5), -275944640) != 0)
						{
							Local_186.f_23 = 6;
						}
					}
				}
				else if (!unk_0x8C58BAD90C34FEA0() || func_157(0))
				{
					Local_186.f_10 = { 0f, 0f, 0f };
					unk_0x0EE72DB1CD8A3B86(&(Local_186.f_1), 10);
					unk_0x0EE72DB1CD8A3B86(&(Local_186.f_1), 9);
					Local_186.f_23 = 2;
				}
			}
			break;
		
		case 6:
			break;
	}
}

int func_233()
{
	int iVar0;
	
	if (!unk_0x8E1421E2A2A2FBD4())
	{
		return 1;
	}
	if (unk_0x93C304998B457C45(Local_186.f_4))
	{
		if (!unk_0xE53FD7AF7F25C0A8(Local_186.f_4))
		{
			unk_0x04092215B40E1262(Local_186.f_4);
		}
		else
		{
			func_234(&(Local_186.f_4));
			iVar0 = 1;
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_234(var uParam0)
{
	var uVar0;
	
	if (unk_0x93C304998B457C45(*uParam0))
	{
		if (!unk_0xE53FD7AF7F25C0A8(*uParam0))
		{
		}
	}
	if (unk_0x918CA1BFFAA03556(*uParam0))
	{
		uVar0 = unk_0x29AB7D6D0DE18055(*uParam0);
		unk_0xFA8AA9E856FCF99B(&uVar0);
	}
}

void func_235()
{
	int iVar0;
	
	if (unk_0x8E1421E2A2A2FBD4() && !unk_0xF491DD47B88AA84E())
	{
		iVar0 = func_7(1187, -1, 0);
		if (!unk_0xC80D31E4B587871C(iVar0, 16))
		{
			if (!func_138(iLocal_1227) && !func_137(Local_186.f_4))
			{
				if (unk_0xA8D0477084E86A92(unk_0x47BA76CE3C825A08(Local_186.f_4), iLocal_1227, 0) && !unk_0x27C8A4034A05DC21(unk_0x47BA76CE3C825A08(Local_186.f_4)))
				{
					unk_0x67129637F30DEB3F("HTX_HELPN");
					if (func_237())
					{
						unk_0xF92B835A141C6BDD(13);
						unk_0xA6D2B267C377D7B2("GB_HELI_BLIP");
					}
					else
					{
						unk_0xF92B835A141C6BDD(iLocal_318);
						unk_0xA6D2B267C377D7B2("HTX_HELPB");
					}
					unk_0x376CFA11DE0FE521(0, 0, 1, -1);
					unk_0x872F1C1F8587CCC7(&iVar0, 16);
					func_236(1187, iVar0, -1, 1, 0);
				}
			}
		}
	}
}

void func_236(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_8(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
}

int func_237()
{
	if (iLocal_1227 == Global_2512808.f_289 || iLocal_1227 == Global_2512808.f_5458)
	{
		return 1;
	}
	return 0;
}

void func_238()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x0EE72DB1CD8A3B86(&(Local_186.f_1), 9);
	iVar0 = 0;
	while (iVar0 < unk_0xB72D370CB7ABC3EF())
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)))
		{
			iVar1 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar0));
			if (func_131(iVar1, 1, 1))
			{
				if (!func_138(iLocal_1227))
				{
					if (!unk_0xC80D31E4B587871C(Local_186.f_1, 8))
					{
						if (unk_0x0C88267282FD588F(iLocal_1227, Local_186.f_6, (7.5f * 1.5f), (7.5f * 1.5f), (7.5f * 1.5f), 0, 1, 0) && !func_223())
						{
							unk_0x872F1C1F8587CCC7(&(Local_186.f_1), 8);
						}
					}
					if (!unk_0xC80D31E4B587871C(Local_186.f_1, 10))
					{
						if (unk_0x0C88267282FD588F(iLocal_1227, Local_186.f_10, (7.5f * 1.5f), (7.5f * 1.5f), (10f * 2f), 0, 1, 0))
						{
							unk_0x872F1C1F8587CCC7(&(Local_186.f_1), 10);
						}
					}
					if (!unk_0xC80D31E4B587871C(Local_186.f_1, 9))
					{
						if (unk_0xC80D31E4B587871C(Local_219[iVar0 /*3*/].f_1, 6))
						{
							unk_0x872F1C1F8587CCC7(&(Local_186.f_1), 9);
							unk_0x0EE72DB1CD8A3B86(&(Local_219[iVar0 /*3*/].f_1), 6);
						}
					}
					if (Local_186.f_24 != 4)
					{
						if (unk_0xC80D31E4B587871C(Local_219[iVar0 /*3*/].f_1, 5))
						{
							Local_186.f_24 = 4;
							Local_186.f_13 = { 100000f, 100000f, 100000f };
							unk_0x0EE72DB1CD8A3B86(&(Local_219[iVar0 /*3*/].f_1), 5);
						}
					}
					if (Local_186.f_24 != 5)
					{
						if (unk_0xC80D31E4B587871C(Local_219[iVar0 /*3*/].f_1, 8))
						{
							if (func_257(iVar1) && func_243(iVar1))
							{
								if (iLocal_158 == -1)
								{
									iVar2 = func_215(Global_1595693[iVar1 /*680*/].f_266[5]);
									Local_186.f_29 = { func_213(iVar2) + Vector(15f, 0f, 0f) };
								}
								else
								{
									iVar3 = iLocal_158;
									func_240(func_241(iVar3), &(Local_186.f_29));
									Local_186.f_29 = { Local_186.f_29 + Vector(40f, 0f, 0f) };
								}
								Local_186.f_24 = 5;
								Local_186.f_23 = 4;
								Local_186.f_28 = iVar1;
								func_159(Local_186.f_29);
							}
							else if (!unk_0x191BE1BC8F26F3C1(iLocal_1227, 0) && !unk_0xA0BF73C5030D3F60(iLocal_1227))
							{
								unk_0xC8DAB4CEBB9AB263(iLocal_1227);
							}
							else
							{
								func_239();
								Local_186.f_23 = 2;
								Local_186.f_24 = 1;
								func_158();
								unk_0x0EE72DB1CD8A3B86(&(Local_186.f_1), 9);
								unk_0x0EE72DB1CD8A3B86(&(Local_186.f_1), 10);
								unk_0x0EE72DB1CD8A3B86(&(Local_186.f_1), 12);
								if (unk_0x8C58BAD90C34FEA0())
								{
									unk_0x53F2F2E038A0AAFC();
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

void func_239()
{
	int iVar0;
	
	iVar0 = iLocal_1227;
	if (unk_0x191BE1BC8F26F3C1(iVar0, 0))
	{
		return;
	}
	if (unk_0xA0BF73C5030D3F60(iVar0))
	{
		unk_0x4BEFCD5DAE410A90(iVar0, 1);
	}
}

void func_240(int iParam0, var uParam1)
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

int func_241(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 102)
	{
		if (func_242(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_242(int iParam0)
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

int func_243(int iParam0)
{
	if ((!func_252(iParam0, 1) && !func_248(iParam0)) && func_244(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_244(int iParam0)
{
	if (iParam0 != func_4())
	{
		if (func_131(iParam0, 1, 1))
		{
			if (!unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_472, 6))
			{
				return 0;
			}
			if (func_248(iParam0) && !func_245(iParam0))
			{
				return 0;
			}
			if (func_142(iParam0, 21))
			{
				return 0;
			}
			if (unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 4))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_245(int iParam0)
{
	if (((func_246(iParam0) == 167 || func_246(iParam0) == 168) || func_246(iParam0) == 190) || func_246(iParam0) == 178)
	{
		return 1;
	}
	return 0;
}

int func_246(int iParam0)
{
	if (func_247(iParam0, 0))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_33;
	}
	return -1;
}

int func_247(int iParam0, int iParam1)
{
	if (Global_1627537[iParam0 /*532*/].f_11.f_33 != -1 || (iParam1 && Global_1627537[iParam0 /*532*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_248(int iParam0)
{
	if (func_251(iParam0))
	{
		return 1;
	}
	if (func_249(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_249(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_250(iParam0, 9);
	}
	return 0;
}

bool func_250(int iParam0, int iParam1)
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_11.f_4, iParam1);
}

int func_251(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_1627537[iVar0 /*532*/].f_1, 0);
	}
	return 0;
}

bool func_252(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_256(iParam0) != 0;
	}
	return func_253(iParam0, bParam1);
}

int func_253(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_254(iParam0))
		{
			return 1;
		}
	}
	if (Global_1595693[iParam0 /*680*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_254(int iParam0)
{
	return func_255(iParam0);
}

bool func_255(int iParam0)
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_13.f_1, 0);
}

int func_256(int iParam0)
{
	if (func_131(iParam0, 0, 1))
	{
		return Global_2422736[iParam0 /*420*/].f_1;
	}
	return 0;
}

bool func_257(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 26);
}

int func_258()
{
	bool bVar0;
	
	if (func_109(&uLocal_1183, 5000, 0))
	{
		if (unk_0xF51EA69EE19061E6(1, 1, 0, 0))
		{
			if (func_282(func_283()) && func_282(func_281()))
			{
				if (func_162(&bVar0))
				{
					if (func_261(bVar0) && func_259())
					{
						func_225(0);
						func_159(Local_186.f_6);
						Local_186.f_13 = { 100000f, 100000f, 100000f };
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_259()
{
	if ((!unk_0x93C304998B457C45(Local_186.f_4) && func_282(func_281())) && unk_0x93C304998B457C45(Local_186.f_3))
	{
		if (!func_138(iLocal_1227))
		{
			if (func_260(&(Local_186.f_4), Local_186.f_3, 22, func_281(), -1, 1, 1, 1))
			{
				unk_0x771A86309E0CA47B(unk_0x47BA76CE3C825A08(Local_186.f_4), 1);
				unk_0x230697B667C63948(unk_0x47BA76CE3C825A08(Local_186.f_4), 0);
				unk_0xE9B3D12A64CC7C1A(unk_0x47BA76CE3C825A08(Local_186.f_4), 1);
				unk_0xAE6EBBBBD8B9FB30(unk_0x47BA76CE3C825A08(Local_186.f_4), 17, 1);
				unk_0xAE6EBBBBD8B9FB30(unk_0x47BA76CE3C825A08(Local_186.f_4), 5, 0);
				unk_0xE17958D3FD0F9EE9(unk_0x47BA76CE3C825A08(Local_186.f_4), 2, 1);
				unk_0xE17958D3FD0F9EE9(unk_0x47BA76CE3C825A08(Local_186.f_4), 1024, 1);
				unk_0xE17958D3FD0F9EE9(unk_0x47BA76CE3C825A08(Local_186.f_4), 2048, 1);
				unk_0xE17958D3FD0F9EE9(unk_0x47BA76CE3C825A08(Local_186.f_4), 32768, 0);
				unk_0xAE01EF4BC84AFE7C(unk_0x47BA76CE3C825A08(Local_186.f_4), 251, 1);
				unk_0xC854D7A2E956B946(unk_0x47BA76CE3C825A08(Local_186.f_4), 0);
				unk_0xE01CE1EBCD7EE551(unk_0x47BA76CE3C825A08(Local_186.f_4), unk_0xF2DB717A73826179((200f * Global_262145.f_153)), 0);
				if (func_145())
				{
					func_108(&uLocal_1018, 3, unk_0x47BA76CE3C825A08(Local_186.f_4), "FM_Pilot", 0, 1);
				}
				else
				{
					func_11(1);
					func_108(&uLocal_1018, 2, unk_0x47BA76CE3C825A08(Local_186.f_4), "EXEC_PILOT", 0, 1);
				}
			}
		}
	}
	if (!unk_0x93C304998B457C45(Local_186.f_4))
	{
		return 0;
	}
	unk_0x14776E43F90DD454(func_281());
	return 1;
}

int func_260(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x7A419CA188B4A665(1))
	{
		return 0;
	}
	if (!unk_0x93C304998B457C45(uParam1))
	{
		return 0;
	}
	if (!unk_0xB8DE76287EDC4957(unk_0xF32FBF2453AC1753(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xABF6E3937F555048(unk_0x00D1A9572426E8DD(unk_0xF32FBF2453AC1753(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0x93C304998B457C45(*uParam0))
	{
		unk_0xFBA991D3A851E195(unk_0x47BA76CE3C825A08(*uParam0), iParam7);
		if (unk_0x0D4BF24EE51A419A(unk_0x47BA76CE3C825A08(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x9CE66BFF230839CE(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_261(bool bParam0)
{
	struct<3> Var0;
	var uVar3;
	
	if (!unk_0x93C304998B457C45(Local_186.f_3))
	{
		if (func_282(func_283()))
		{
			func_278(&Var0, &uVar3, bParam0);
			if (func_265(Var0, 6f, 1f, 1f, 10f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0) || bParam0)
			{
				if (Local_186.f_9 > -1f)
				{
					uVar3 = Local_186.f_9;
				}
				if (func_264(&(Local_186.f_3), func_283(), Var0, uVar3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
				{
					iLocal_1227 = unk_0xF32FBF2453AC1753(Local_186.f_3);
					unk_0xA15269351F50F113(iLocal_1227, 1, 1, 0);
					if (!bParam0)
					{
						unk_0xFB2E9855F95E3BD3(iLocal_1227, 30f);
					}
					unk_0xFDAFE1354D61AE41(iLocal_1227);
					unk_0x8C224CD34D64FA01(iLocal_1227, 0);
					unk_0xC7ED915AB706A5D8(iLocal_1227, 1);
					unk_0x0B732DEC0BE82676(iLocal_1227, 0f);
					if (unk_0x6C5223DB5E5CFD9B("HeliTaxi", 2))
					{
						unk_0x592E07F996BB4B89(iLocal_1227, "HeliTaxi", 1);
					}
					func_149(1);
					func_262();
					if (func_294())
					{
					}
				}
			}
		}
	}
	if (!unk_0x93C304998B457C45(Local_186.f_3))
	{
		return 0;
	}
	unk_0x14776E43F90DD454(func_283());
	return 1;
}

void func_262()
{
	func_263(Global_2512808.f_825, iLocal_1227);
}

void func_263(int iParam0, int iParam1)
{
	if (unk_0xAFB4F670EC043D01(iParam1) > 0)
	{
		unk_0xC7BF27112709A906(iParam1, 0);
		if (iParam0 == 0)
		{
		}
	}
}

int func_264(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x3B0047CED068C463(iParam1))
	{
		return 0;
	}
	if (!unk_0x49DB840E3FC89FEE(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam11)
	{
		unk_0x9B8406983378711E(Param2, fVar0, 0, 0, 0, 0, 0, 0);
	}
	iVar1 = unk_0xEA60F3B426BB095B(iParam1, Param2, uParam5, iParam7, iParam6, iParam14);
	if (unk_0x6ADD12BF4D6D2587(iVar1))
	{
		*uParam0 = unk_0x278BFDB9CDC5B182(iVar1);
		Global_2512808.f_5827 = iVar1;
		if (unk_0x93C304998B457C45(*uParam0))
		{
			if (bParam15)
			{
				unk_0xB2CBFA871D3387B6(iVar1, 1);
			}
			unk_0xFBA991D3A851E195(iVar1, iParam10);
			if (unk_0x0D4BF24EE51A419A(iVar1))
			{
				if (bParam8)
				{
					unk_0x9CE66BFF230839CE(*uParam0, 1);
				}
				else
				{
					unk_0x9CE66BFF230839CE(*uParam0, 0);
				}
				if (bParam13)
				{
					unk_0xB8D999BCBD1CD195(*uParam0, unk_0x9EB17624F44A8DA4(), 1);
				}
			}
			unk_0xD2557AC67FBCFB9D(iVar1, iParam9);
			unk_0xB2B20F580CFB38F4(iVar1, 1);
			if (bParam12)
			{
				unk_0x27344352C09F0519(iVar1);
				unk_0x30C37143C720F2AA(iVar1, 5, 5, 1f);
			}
			return 1;
		}
	}
	return 0;
}

int func_265(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2405047.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x717FFCE23DE4C8C8(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x0D3330EAF6340496(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x0D3330EAF6340496(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x83A4DE08E23A2F1F(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (bParam13)
	{
		if (unk_0xAA0BDFF32B6BC02A(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (fParam14 > 0f)
	{
		if (func_273(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_266(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405047.f_2++;
	return 1;
}

int func_266(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_131(unk_0x9EB17624F44A8DA4(), 1, 1))
		{
			if (!unk_0x3E9CABD07B829173())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0xBE3C4023003180FC(func_270(unk_0x9EB17624F44A8DA4()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x9E06F0EE20F58CED(Param0, fParam3))
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
		if (func_131(iVar1, 1, 1))
		{
			if (!func_268(iVar1, 0) && unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x9EB17624F44A8DA4()))
				{
					if ((func_267(iVar1) || !bParam10) && !Global_2422736[iVar1 /*420*/].f_274)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x917EE18109C5ACEA(iVar1) == -1)
							{
								if (unk_0x917EE18109C5ACEA(iVar1) == unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x917EE18109C5ACEA(iVar1) != unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()))) || unk_0x917EE18109C5ACEA(iVar1) == -1)
							{
								if (unk_0xBE3C4023003180FC(func_270(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x10D876445A75F2DC(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x917EE18109C5ACEA(iVar1) != iParam8 || unk_0x917EE18109C5ACEA(iVar1) == -1)
						{
							if (unk_0xBE3C4023003180FC(func_270(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x10D876445A75F2DC(iVar1, Param0, fParam3))
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

int func_267(int iParam0)
{
	if (unk_0xCF308053A6212001(unk_0x25D049AAC4603E65(iParam0)) || Global_2422736[iParam0 /*420*/].f_260)
	{
		return 1;
	}
	return 0;
}

bool func_268(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_269(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1595693[iParam0 /*680*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x552F39AE86E07792(iParam0))
		{
			bVar0 = unk_0x917EE18109C5ACEA(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_269(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_9();
	}
	if (Global_1312834[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

Vector3 func_270(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_272() && Global_1595693[iVar0 /*680*/].f_673) && !func_271(Global_1595693[iVar0 /*680*/].f_674))
	{
		return Global_1595693[iVar0 /*680*/].f_674;
	}
	return func_167(iParam0);
}

int func_271(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_272()
{
	return Global_2447174.f_16;
}

int func_273(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x9EB17624F44A8DA4() != iVar1) || iParam8 == 0)
		{
			if (func_131(iVar1, bParam4, bParam5))
			{
				if (unk_0xEF6677A51D3956A4(unk_0x9EB17624F44A8DA4(), iVar1))
				{
					if (!bParam7 || (!unk_0x3AB6A1A9084FB0A4(unk_0x25D049AAC4603E65(iVar1)) && func_267(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) != unk_0x917EE18109C5ACEA(iVar1))) || unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1)
						{
							if (((unk_0x917EE18109C5ACEA(unk_0x9EB17624F44A8DA4()) == -1 && uParam9) && bParam6) && func_274(iVar1))
							{
							}
							else if (unk_0x6ADD12BF4D6D2587(unk_0x25D049AAC4603E65(iVar1)))
							{
								if (unk_0xBE3C4023003180FC(func_167(iVar1), Param0, 1) < fParam3)
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

int func_274(int iParam0)
{
	if (func_277(unk_0x9EB17624F44A8DA4(), iParam0))
	{
		return 1;
	}
	Global_2492157 = { func_276(iParam0) };
	if (unk_0xFFE9B6D8F03AC353(&Global_2492157))
	{
		return 1;
	}
	if (func_275(unk_0x9EB17624F44A8DA4(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_275(int iParam0, int iParam1)
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

struct<13> func_276(int iParam0)
{
	struct<13> Var0;
	
	unk_0x1D52B46CB20A5CF3(iParam0, &Var0, 13);
	return Var0;
}

int func_277(int iParam0, int iParam1)
{
	if (unk_0x15DBBAF9E2085C7A())
	{
		Global_2492157 = { func_276(iParam0) };
		Global_2492170 = { func_276(iParam1) };
		if (unk_0xA84F967541249268(&Global_2492157))
		{
			if (unk_0xA84F967541249268(&Global_2492170))
			{
				unk_0x5CF21D71A8C4CFA6(&Global_2492087, 35, &Global_2492157);
				unk_0x5CF21D71A8C4CFA6(&Global_2492122, 35, &Global_2492170);
				if (Global_2492087 == Global_2492122)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_278(var uParam0, var uParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	
	if (bParam2)
	{
		*uParam0 = { Local_186.f_6 };
		*uParam1 = Local_186.f_9;
		fVar0 = unk_0x357310BDD94111AA(*uParam0, uParam0->f_1, *uParam0, uParam0->f_1);
		if (fVar0 < (Local_186.f_6.f_2 + 100f))
		{
			fVar0 = (Local_186.f_6.f_2 + 100f);
		}
		uParam0->f_2 = fVar0;
	}
	else
	{
		*uParam0 = { func_279(Local_186.f_6, 140f, 180f, (200f / 2f)) };
		*uParam1 = unk_0xA67DD8488EBA5F6D((Local_186.f_6 - *uParam0), (Local_186.f_6.f_1 - uParam0->f_1));
		fVar1 = unk_0x357310BDD94111AA((*uParam0 - 180f), (uParam0->f_1 - 180f), (*uParam0 + 180f), (uParam0->f_1 + 180f));
		if (fVar1 < (Local_186.f_6.f_2 + 100f))
		{
			fVar1 = (Local_186.f_6.f_2 + 100f);
		}
		uParam0->f_2 = fVar1;
	}
}

Vector3 func_279(struct<3> Param0, float fParam3, float fParam4, float fParam5)
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { unk_0x5B811202FCBE9E9D(-1f, 1f), unk_0x5B811202FCBE9E9D(-1f, 1f), 0f };
	fVar3 = (fParam5 / 2f);
	Var0 = { func_280(Var0, unk_0x5B811202FCBE9E9D(fParam3, fParam4)) };
	Var0.f_2 = unk_0x5B811202FCBE9E9D(-fVar3, fVar3);
	return Param0 + Var0;
}

Vector3 func_280(struct<3> Param0, float fParam3)
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

int func_281()
{
	if (func_294())
	{
		return joaat("mp_f_helistaff_01");
	}
	return joaat("s_m_y_pilot_01");
}

int func_282(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x6FF834D85E2DD4C6(iParam0);
	return unk_0x9A0B2ED5055D3F0B(iParam0);
}

int func_283()
{
	if (func_294())
	{
		return joaat("supervolito");
	}
	return joaat("maverick");
}

void func_284()
{
	if (unk_0xA6DECE14FC9A8C51(uLocal_317))
	{
		if (func_287(iLocal_1227, uLocal_317, 1))
		{
			unk_0x62BD54E491535B76(uLocal_317, "HTX_BLIP");
			iLocal_318 = 1;
			func_285(&uLocal_317, iLocal_318);
		}
	}
}

void func_285(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0xA6DECE14FC9A8C51(*uParam0))
	{
		uVar0 = func_286(iParam1);
		unk_0x0C71C8E276E3EC54(*uParam0, uVar0);
	}
}

int func_286(int iParam0)
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
	unk_0x31758B9A51671C43(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

int func_287(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xD946FA1B9E94071E(uParam1);
	if (func_293(iParam0, bParam2))
	{
		if (!iVar0 == func_292(iVar0))
		{
			unk_0x4B4040A0EC7DBA81(uParam1, func_292(iVar0));
			return 1;
		}
		else if (func_289(1) && iVar0 == func_292(iVar0))
		{
			return 1;
		}
	}
	else if (!iVar0 == func_288(iVar0))
	{
		unk_0x4B4040A0EC7DBA81(uParam1, func_288(iVar0));
		return 1;
	}
	else if (func_289(1) && iVar0 == func_288(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_288(int iParam0)
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
		
		case 558:
			return 558;
			break;
		
		case 559:
			return 559;
			break;
		
		case 560:
			return 560;
			break;
		
		case 561:
			return 561;
			break;
		
		case 562:
			return 562;
			break;
		
		case 563:
			return 563;
			break;
		
		case 595:
			return 595;
			break;
		
		case 596:
			return 596;
			break;
		
		case 597:
			return 597;
			break;
		
		case 598:
			return 598;
			break;
		
		case 599:
			return 599;
			break;
		
		case 600:
			return 600;
			break;
		
		case 601:
			return 601;
			break;
		
		case 602:
			return 602;
			break;
		
		case 603:
			return 603;
			break;
		
		case 589:
			return 589;
			break;
	}
	return iParam0;
}

int func_289(int iParam0)
{
	if ((func_291() || func_290()) || (func_272() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_290()
{
	return Global_2447174.f_15;
}

var func_291()
{
	return Global_2447174.f_14;
}

int func_292(int iParam0)
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
		
		case 558:
			return 558;
			break;
		
		case 559:
			return 559;
			break;
		
		case 560:
			return 560;
			break;
		
		case 561:
			return 561;
			break;
		
		case 562:
			return 562;
			break;
		
		case 563:
			return 563;
			break;
		
		case 595:
			return 595;
			break;
		
		case 596:
			return 596;
			break;
		
		case 597:
			return 597;
			break;
		
		case 598:
			return 598;
			break;
		
		case 599:
			return 599;
			break;
		
		case 600:
			return 600;
			break;
		
		case 601:
			return 601;
			break;
		
		case 602:
			return 602;
			break;
		
		case 603:
			return 603;
			break;
		
		case 589:
			return 589;
			break;
	}
	return iParam0;
}

int func_293(int iParam0, bool bParam1)
{
	if (((!unk_0x191BE1BC8F26F3C1(iParam0, 0) && (!unk_0x0ACC2116170FA204(iParam0) && unk_0x5E0BEAAD15B888F3(iParam0))) && unk_0x652D2EEEF1D3E62C(unk_0x8FD9FCCB6E4BD999(iParam0)) < 0.5f) && func_135(iParam0, bParam1, bParam1, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_294()
{
	if (Global_2512808.f_825 > -1)
	{
		return 1;
	}
	return 0;
}

void func_295()
{
	if (bLocal_1209)
	{
		if (!iLocal_1210)
		{
			if (func_221(iLocal_1227))
			{
				unk_0xD38F266C132F2897(iLocal_1227, 0, 0, 0, 1, 0, 0, 0, 0);
				iLocal_1210 = 1;
			}
		}
	}
	else if (iLocal_1210)
	{
		if (func_221(iLocal_1227))
		{
			unk_0xD38F266C132F2897(iLocal_1227, 0, 0, 0, 0, 0, 0, 0, 0);
			iLocal_1210 = 0;
		}
	}
}

int func_296(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_297(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x8E1421E2A2A2FBD4())
		{
			func_110(uParam0, 0, 0);
		}
	}
}

void func_298()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (Local_186.f_23 == 6)
	{
		Local_219[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 = 6;
	}
	iVar0 = 0;
	bVar1 = false;
	iLocal_155 = 0;
	switch (Local_219[unk_0x622FF3AE4B1D07C3() /*3*/].f_2)
	{
		case 0:
			if (Local_186.f_23 > 0)
			{
				Local_219[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (!func_138(iLocal_1227))
			{
				func_435();
				func_416();
				func_415();
				if (func_131(unk_0x9EB17624F44A8DA4(), 1, 1))
				{
					if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_1227, 0))
					{
						unk_0xBC3B7443617858A0(0);
						func_414();
						unk_0x8135E0D869A8ECFC(unk_0xFC1458A37D98B502(), joaat("gadget_parachute"), 1, 0);
						unk_0xDC88A09174E45B28();
						Local_219[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 = 2;
						unk_0x0EE72DB1CD8A3B86(&(Local_219[unk_0x622FF3AE4B1D07C3() /*3*/].f_1), 0);
					}
				}
			}
			break;
		
		case 2:
			if (!func_138(iLocal_1227))
			{
				if (func_131(unk_0x9EB17624F44A8DA4(), 1, 1))
				{
					if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_1227, 0))
					{
						func_413();
						func_412();
						unk_0xDC88A09174E45B28();
						if (unk_0x8E1421E2A2A2FBD4() && func_411(1, 1))
						{
							if (unk_0x8C58BAD90C34FEA0())
							{
								if (unk_0x4C4813CAAD70E814(0))
								{
									if (unk_0xE8C126B7ADBB9D63(0, 21))
									{
										iVar0 = 1;
									}
								}
								else if (unk_0xE8C126B7ADBB9D63(2, 201))
								{
									iVar0 = 1;
								}
								if (iVar0 || unk_0xC80D31E4B587871C(Local_186.f_1, 12))
								{
									unk_0x0EE72DB1CD8A3B86(&(Local_186.f_1), 12);
									unk_0x0EE72DB1CD8A3B86(&(Local_186.f_2), 4);
									Local_219[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 = 3;
									unk_0x0EE72DB1CD8A3B86(&(Local_219[unk_0x622FF3AE4B1D07C3() /*3*/].f_1), 5);
									unk_0x872F1C1F8587CCC7(&(Local_219[unk_0x622FF3AE4B1D07C3() /*3*/].f_1), 6);
								}
							}
							if (unk_0xC80D31E4B587871C(iLocal_1228, 7) && iLocal_150 == 0)
							{
								if (unk_0x4C4813CAAD70E814(0))
								{
									if (unk_0xE8C126B7ADBB9D63(0, 101))
									{
										iLocal_155 = 1;
									}
								}
								else if (unk_0xE8C126B7ADBB9D63(2, 209))
								{
									iLocal_155 = 1;
								}
							}
						}
						if (Local_186.f_23 >= 5)
						{
							Local_219[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 = 5;
						}
						if (Local_186.f_23 == 4)
						{
							Local_219[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 = 4;
						}
					}
					else
					{
						Local_219[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 = 1;
					}
				}
			}
			break;
		
		case 3:
			if (!func_138(iLocal_1227))
			{
				if (func_131(unk_0x9EB17624F44A8DA4(), 1, 1))
				{
					if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_1227, 0))
					{
						func_413();
						unk_0xDC88A09174E45B28();
						if ((unk_0x8E1421E2A2A2FBD4() && func_411(1, 1)) && unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), 1785177548) != 1)
						{
							if (unk_0x4C4813CAAD70E814(0))
							{
								if (unk_0xE8C126B7ADBB9D63(0, 36))
								{
									bVar1 = true;
								}
							}
							else if (unk_0xE8C126B7ADBB9D63(2, 202))
							{
								bVar1 = true;
							}
							if (bVar1)
							{
								Local_219[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 = 2;
								unk_0x872F1C1F8587CCC7(&(Local_219[unk_0x622FF3AE4B1D07C3() /*3*/].f_1), 5);
							}
							if (unk_0x4C4813CAAD70E814(0))
							{
								if (unk_0xE8C126B7ADBB9D63(0, 101))
								{
									iLocal_155 = 1;
								}
							}
							else if (unk_0xE8C126B7ADBB9D63(2, 209))
							{
								iLocal_155 = 1;
							}
						}
						if (Local_186.f_23 >= 5)
						{
							Local_219[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 = 5;
						}
						else if (Local_186.f_23 == 2)
						{
							unk_0x0EE72DB1CD8A3B86(&(Local_186.f_1), 9);
							Local_219[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 = 2;
						}
						else if (Local_186.f_23 == 4)
						{
							Local_219[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 = 4;
						}
					}
					else
					{
						Local_219[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 = 1;
					}
				}
			}
			break;
		
		case 4:
			if ((((((func_410("POD_CHAM_CIGAR") || func_410("POD_CHAM_WEB")) || func_410("POD_UNKNOWN")) || func_410("POD_CIGAR")) || func_410("POD_WEB")) || func_410("LUX_VEH_ACT_1ST")) || func_410("LUX_ACT_1ST_SW"))
			{
				unk_0x3E80C2F7BC665259(1);
			}
			if (unk_0xC80D31E4B587871C(Local_219[unk_0x622FF3AE4B1D07C3() /*3*/].f_1, 8))
			{
				unk_0x0EE72DB1CD8A3B86(&(Local_219[unk_0x622FF3AE4B1D07C3() /*3*/].f_1), 8);
			}
			if (!func_145())
			{
				if (!unk_0xC80D31E4B587871C(Local_186.f_2, 17))
				{
					if (func_227())
					{
						func_11(1);
						func_108(&uLocal_1018, 2, unk_0x47BA76CE3C825A08(Local_186.f_4), "EXEC_PILOT", 0, 1);
						if (iLocal_158 == -1)
						{
							func_91(&uLocal_1018, "EXHELAU", "EXHEL_OFFICE", 12, 0, 0, 1);
						}
						else
						{
							func_91(&uLocal_1018, "EXHELAU", "EXHEL_CUSTOM", 12, 0, 0, 1);
						}
						unk_0x872F1C1F8587CCC7(&(Local_186.f_2), 17);
					}
				}
			}
			if ((Local_186.f_28 == unk_0x9EB17624F44A8DA4() && func_409()) && Local_186.f_27)
			{
				if (!unk_0xC80D31E4B587871C(iLocal_316, 16))
				{
					if (!func_138(iLocal_1227))
					{
						if (func_131(unk_0x9EB17624F44A8DA4(), 1, 1))
						{
							if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_1227, 0))
							{
								if (!func_408())
								{
									if (unk_0xC80D31E4B587871C(Local_186.f_1, 15))
									{
										iVar2 = func_407(1);
										if (iVar2 > 0)
										{
											if (iLocal_158 == -1)
											{
												func_406(iVar2, unk_0x9EB17624F44A8DA4(), 0, Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266[5]);
											}
											else
											{
												func_406(iVar2, unk_0x9EB17624F44A8DA4(), 1, iLocal_158);
											}
											unk_0x872F1C1F8587CCC7(&iLocal_316, 16);
										}
									}
								}
							}
						}
					}
				}
			}
			else if (!unk_0x8E1421E2A2A2FBD4())
			{
				func_450(0);
			}
			if (Local_186.f_23 == 2)
			{
				Local_219[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 = 2;
				if (unk_0xC80D31E4B587871C(Local_219[unk_0x622FF3AE4B1D07C3() /*3*/].f_1, 8))
				{
					unk_0x0EE72DB1CD8A3B86(&(Local_219[unk_0x622FF3AE4B1D07C3() /*3*/].f_1), 8);
				}
			}
			break;
		
		case 5:
			if (!func_138(iLocal_1227))
			{
				if (func_131(unk_0x9EB17624F44A8DA4(), 1, 1))
				{
					func_404();
					func_412();
					unk_0xDC88A09174E45B28();
					if (Local_186.f_23 == 2)
					{
						unk_0x0EE72DB1CD8A3B86(&(Local_186.f_1), 9);
						Local_219[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 = 2;
					}
				}
			}
			break;
		
		case 6:
			func_450(1);
			break;
	}
	if (((Local_219[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 != 4 && iLocal_156) && unk_0x8E1421E2A2A2FBD4()) && func_400())
	{
		if (iLocal_158 > -2)
		{
		}
		if (!unk_0xA0BF73C5030D3F60(iLocal_1227))
		{
			unk_0xC8DAB4CEBB9AB263(iLocal_1227);
		}
		unk_0x872F1C1F8587CCC7(&iLocal_316, 15);
		func_399();
		Local_219[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 = 4;
		unk_0x0EE72DB1CD8A3B86(&(Local_219[unk_0x622FF3AE4B1D07C3() /*3*/].f_1), 5);
		unk_0x0EE72DB1CD8A3B86(&(Local_219[unk_0x622FF3AE4B1D07C3() /*3*/].f_1), 6);
		unk_0x872F1C1F8587CCC7(&(Local_219[unk_0x622FF3AE4B1D07C3() /*3*/].f_1), 8);
		iLocal_156 = 0;
	}
	else if (unk_0xC80D31E4B587871C(iLocal_1228, 7))
	{
		unk_0x0EE72DB1CD8A3B86(&iLocal_1228, 7);
	}
	func_324();
	func_299();
}

void func_299()
{
	int iVar0;
	int iVar1;
	struct<9> Var2;
	
	iVar1 = 1;
	if (func_131(unk_0x9EB17624F44A8DA4(), 1, 1) && !func_138(iLocal_1227))
	{
		if (unk_0xAAA8D20859E2D36D(unk_0xFC1458A37D98B502(), iLocal_1227) && !func_323(unk_0xFC1458A37D98B502(), iLocal_1227, -1))
		{
			unk_0x553231E7FC3C570D(7);
			unk_0x553231E7FC3C570D(9);
			unk_0x553231E7FC3C570D(6);
			unk_0x553231E7FC3C570D(8);
			unk_0x4FB260623DD93924(0, 80, 1);
		}
		if (unk_0x34D11AB5BA7922C2(uLocal_324))
		{
			if (func_322() || func_130(0))
			{
				if (!unk_0xC80D31E4B587871C(iLocal_316, 11))
				{
					unk_0x872F1C1F8587CCC7(&iLocal_316, 11);
				}
			}
			else if (unk_0xC80D31E4B587871C(iLocal_316, 11))
			{
				iLocal_1229 = 0;
				unk_0x0EE72DB1CD8A3B86(&iLocal_316, 11);
			}
			if (func_411(1, 1))
			{
				if ((((Local_219[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 == 1 && unk_0xC80D31E4B587871C(iLocal_316, 2)) || Local_219[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 == 2) || Local_219[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 == 3) || Local_219[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 == 5)
				{
					iLocal_1228 = 0;
					Var2 = { func_321() };
					if (Local_219[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 == 1)
					{
						if (((!func_223() && !unk_0xC80D31E4B587871C(Local_219[unk_0x622FF3AE4B1D07C3() /*3*/].f_1, 0)) && !unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1)) && !func_319(unk_0x9EB17624F44A8DA4()))
						{
							unk_0x872F1C1F8587CCC7(&iLocal_1228, 0);
						}
						else
						{
							iVar1 = 0;
						}
					}
					else if (Local_219[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 == 2)
					{
						if (unk_0x8E1421E2A2A2FBD4())
						{
							if (unk_0x8C58BAD90C34FEA0())
							{
								unk_0x872F1C1F8587CCC7(&iLocal_1228, 1);
							}
							else
							{
								unk_0x872F1C1F8587CCC7(&iLocal_1228, 2);
							}
							if (func_400())
							{
								unk_0x872F1C1F8587CCC7(&iLocal_1228, 7);
							}
						}
						if (unk_0x20D66D71CF476CDB(iLocal_1227) < 10f)
						{
							unk_0x872F1C1F8587CCC7(&iLocal_1228, 3);
						}
						else if (unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), -275944640) != 1 && unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), -275944640) != 0)
						{
							unk_0x872F1C1F8587CCC7(&iLocal_1228, 4);
							if (unk_0x317536BCEA8FA6B0(iLocal_1227, 0, 0) != unk_0xFC1458A37D98B502() && unk_0x20D66D71CF476CDB(iLocal_1227) < 40f)
							{
								if (func_318())
								{
									unk_0x872F1C1F8587CCC7(&iLocal_1228, 5);
									iVar0 = 1;
								}
							}
						}
						else
						{
							iVar1 = 0;
						}
					}
					else if (Local_219[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 == 3)
					{
						if (unk_0x8E1421E2A2A2FBD4())
						{
							unk_0x872F1C1F8587CCC7(&iLocal_1228, 6);
							if (func_400())
							{
								unk_0x872F1C1F8587CCC7(&iLocal_1228, 7);
							}
						}
						unk_0x872F1C1F8587CCC7(&iLocal_1228, 4);
					}
					else if (Local_219[unk_0x622FF3AE4B1D07C3() /*3*/].f_2 == 5)
					{
						if (unk_0x20D66D71CF476CDB(iLocal_1227) < 10f)
						{
							unk_0x872F1C1F8587CCC7(&iLocal_1228, 3);
						}
						else if (unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), -275944640) != 1 && unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), -275944640) != 0)
						{
							unk_0x872F1C1F8587CCC7(&iLocal_1228, 4);
							if (unk_0x317536BCEA8FA6B0(iLocal_1227, 0, 0) != unk_0xFC1458A37D98B502() && unk_0x20D66D71CF476CDB(iLocal_1227) < 40f)
							{
								if (func_318())
								{
									unk_0x872F1C1F8587CCC7(&iLocal_1228, 5);
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
					if (func_317())
					{
						iVar1 = 0;
					}
					if (iVar1 == 1)
					{
						func_316();
						func_315(1);
						func_313(1);
						if (unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), 1785177548) != 1)
						{
							if ((iLocal_1228 != iLocal_1229 || unk_0x8CFF76532FEF34D4(2)) || Global_55892)
							{
								Global_55892 = 0;
								func_311(&uLocal_325);
								if (unk_0xC80D31E4B587871C(iLocal_1228, 0))
								{
									func_310(unk_0xC9C4B2A22DE54C69(0, 23, 1), "HTX_ENTER", &uLocal_325, 0);
								}
								if (unk_0xC80D31E4B587871C(iLocal_1228, 1))
								{
									if (unk_0x4C4813CAAD70E814(0))
									{
										func_310(unk_0xC9C4B2A22DE54C69(0, 21, 1), "HTX_START", &uLocal_325, 0);
									}
									else
									{
										func_310(unk_0xC9C4B2A22DE54C69(2, 201, 1), "HTX_START", &uLocal_325, 0);
									}
								}
								if (unk_0xC80D31E4B587871C(iLocal_1228, 2))
								{
									func_310(unk_0xC9C4B2A22DE54C69(2, 199, 1), "HTX_WAYP", &uLocal_325, 0);
								}
								if (unk_0xC80D31E4B587871C(iLocal_1228, 3))
								{
									func_310(unk_0xC9C4B2A22DE54C69(0, 75, 1), "HTX_EXIT1", &uLocal_325, 0);
								}
								if (unk_0xC80D31E4B587871C(iLocal_1228, 4))
								{
									func_310(unk_0xC9C4B2A22DE54C69(0, 75, 1), "HTX_EXIT2", &uLocal_325, 0);
								}
								if (unk_0xC80D31E4B587871C(iLocal_1228, 5))
								{
									if (unk_0x4C4813CAAD70E814(0))
									{
										func_310(unk_0xC9C4B2A22DE54C69(0, 22, 1), "HTX_EXIT3", &uLocal_325, 0);
									}
									else
									{
										func_310(unk_0xC9C4B2A22DE54C69(0, 99, 1), "HTX_EXIT3", &uLocal_325, 0);
									}
								}
								if (unk_0xC80D31E4B587871C(iLocal_1228, 6))
								{
									if (unk_0x4C4813CAAD70E814(0))
									{
										func_310(unk_0xC9C4B2A22DE54C69(0, 36, 1), "HTX_STOP", &uLocal_325, 0);
									}
									else
									{
										func_310(unk_0xC9C4B2A22DE54C69(2, 202, 1), "HTX_STOP", &uLocal_325, 0);
									}
								}
								if (unk_0xC80D31E4B587871C(iLocal_1228, 7))
								{
									if (func_309() || func_307(unk_0x9EB17624F44A8DA4()))
									{
										if (unk_0x4C4813CAAD70E814(0))
										{
											func_310(unk_0xC9C4B2A22DE54C69(2, 101, 1), "HTX_QT_WARP", &uLocal_325, 0);
										}
										else
										{
											func_310(unk_0xC9C4B2A22DE54C69(2, 209, 1), "HTX_QT_WARP", &uLocal_325, 0);
										}
									}
									else if (unk_0x4C4813CAAD70E814(0))
									{
										func_310(unk_0xC9C4B2A22DE54C69(2, 101, 1), "HTX_OFF_WARP", &uLocal_325, 0);
									}
									else
									{
										func_310(unk_0xC9C4B2A22DE54C69(2, 209, 1), "HTX_OFF_WARP", &uLocal_325, 0);
									}
								}
							}
							func_300(&uLocal_324, &Var2, &uLocal_325, func_306(&uLocal_325));
							iLocal_1229 = iLocal_1228;
						}
					}
				}
			}
		}
		else
		{
			uLocal_324 = unk_0xD704C81492296A37("instructional_buttons");
		}
		if (iVar0 == 1)
		{
			unk_0x4FB260623DD93924(0, 99, 1);
			unk_0x4FB260623DD93924(0, 100, 1);
		}
	}
	Global_2512808.f_258 = iVar1;
}

void func_300(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	
	if (iParam3 == 1 || unk_0x8CFF76532FEF34D4(2))
	{
		*uParam2 = 0;
		if (unk_0x34D11AB5BA7922C2(*uParam0))
		{
			if (unk_0xB9D80B12FE4456A5())
			{
				unk_0x008F3E3CC076EA0E(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x1869584A8A72FEDD(0);
				unk_0x271AA5469AF471B3();
			}
			unk_0x008F3E3CC076EA0E(*uParam0, "CLEAR_ALL");
			unk_0x271AA5469AF471B3();
		}
		func_305(uParam2);
	}
	if (Global_1315692 < 2)
	{
		func_304(1);
	}
	if (*uParam2 == 0)
	{
		if (!unk_0x34D11AB5BA7922C2(*uParam0))
		{
			*uParam0 = unk_0xD704C81492296A37("instructional_buttons");
		}
		if (unk_0x34D11AB5BA7922C2(*uParam0))
		{
			unk_0x050CFBB64D7E937F(*uParam0, "CLEAR_ALL");
			if (unk_0xB9D80B12FE4456A5())
			{
				unk_0x008F3E3CC076EA0E(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x1869584A8A72FEDD(1);
				unk_0x271AA5469AF471B3();
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < uParam2->f_680)
			{
				if (unk_0xC80D31E4B587871C(uParam2->f_676, iVar0))
				{
					unk_0x008F3E3CC076EA0E(*uParam0, "SET_DATA_SLOT");
					unk_0xD07D5CD276368D36(iVar0);
					if (!unk_0xC80D31E4B587871C(uParam2->f_677, iVar0))
					{
						iVar1 = uParam2->f_1[iVar0 /*56*/].f_53;
						iVar2 = uParam2->f_1[iVar0 /*56*/].f_54;
						iVar3 = uParam2->f_1[iVar0 /*56*/].f_55;
						func_303(unk_0xC9C4B2A22DE54C69(iVar1, iVar2, 1));
						if (iVar3 < 358)
						{
							func_303(unk_0xC9C4B2A22DE54C69(iVar1, iVar3, 1));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[iVar0 /*56*/].f_53;
						uVar5 = uParam2->f_1[iVar0 /*56*/].f_54;
						func_303(unk_0x715308393E136EA8(iVar4, uVar5, 1));
					}
					if (unk_0xC80D31E4B587871C(uParam2->f_674, iVar0))
					{
						unk_0x7E099EB35339C80D(&(uParam2->f_1[iVar0 /*56*/].f_32));
						if (uParam2->f_681 == iVar0)
						{
							unk_0xFD1DB5DD208735A3(uParam2->f_1[iVar0 /*56*/].f_36, 70);
						}
						else
						{
							unk_0x6223D539BCD39E76(uParam2->f_1[iVar0 /*56*/].f_36);
						}
						unk_0x9748595E4799A2CF();
					}
					else if (unk_0xC80D31E4B587871C(uParam2->f_675, iVar0))
					{
						unk_0x7E099EB35339C80D(&(uParam2->f_1[iVar0 /*56*/].f_32));
						unk_0x854FACC4E5F40C82(&(uParam2->f_1[iVar0 /*56*/].f_37));
						unk_0x9748595E4799A2CF();
					}
					else
					{
						func_31(&(uParam2->f_1[iVar0 /*56*/].f_32));
					}
					if (unk_0xB9D80B12FE4456A5())
					{
						if (unk_0xC80D31E4B587871C(uParam2->f_678, iVar0))
						{
							unk_0x1869584A8A72FEDD(1);
							unk_0xD07D5CD276368D36(uParam2->f_1[iVar0 /*56*/].f_54);
						}
						else
						{
							unk_0x1869584A8A72FEDD(0);
							unk_0xD07D5CD276368D36(358);
						}
					}
					unk_0x271AA5469AF471B3();
				}
				else
				{
					unk_0x008F3E3CC076EA0E(*uParam0, "SET_DATA_SLOT");
					unk_0xD07D5CD276368D36(iVar0);
					func_303(&(uParam2->f_1[iVar0 /*56*/]));
					if (!unk_0xAB019B170BF1309C(&(uParam2->f_1[iVar0 /*56*/].f_16)))
					{
						func_303(&(uParam2->f_1[iVar0 /*56*/].f_16));
					}
					if (unk_0xC80D31E4B587871C(uParam2->f_674, iVar0))
					{
						unk_0x7E099EB35339C80D(&(uParam2->f_1[iVar0 /*56*/].f_32));
						if (uParam2->f_681 == iVar0)
						{
							unk_0xFD1DB5DD208735A3(uParam2->f_1[iVar0 /*56*/].f_36, 70);
						}
						else
						{
							unk_0x6223D539BCD39E76(uParam2->f_1[iVar0 /*56*/].f_36);
						}
						unk_0x9748595E4799A2CF();
					}
					else if (unk_0xC80D31E4B587871C(uParam2->f_675, iVar0))
					{
						unk_0x7E099EB35339C80D(&(uParam2->f_1[iVar0 /*56*/].f_32));
						unk_0x854FACC4E5F40C82(&(uParam2->f_1[iVar0 /*56*/].f_37));
						unk_0x9748595E4799A2CF();
					}
					else
					{
						func_31(&(uParam2->f_1[iVar0 /*56*/].f_32));
					}
					if (unk_0xB9D80B12FE4456A5())
					{
						unk_0x1869584A8A72FEDD(0);
						unk_0xD07D5CD276368D36(358);
					}
					unk_0x271AA5469AF471B3();
				}
				iVar0++;
			}
			unk_0x008F3E3CC076EA0E(*uParam0, "SET_MAX_WIDTH");
			unk_0x9499D7329FB840A2(uParam2->f_686);
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xD07D5CD276368D36(0);
			unk_0x271AA5469AF471B3();
			*uParam2 = 1;
		}
	}
	uParam2->f_682 = 0.05f;
	uParam2->f_683 = 0.045f;
	uParam2->f_684 = 0f;
	uParam2->f_685 = 0f;
	if (*uParam2 == 1)
	{
		func_302(*uParam0, uParam1);
	}
	func_301();
}

void func_301()
{
	unk_0x553231E7FC3C570D(7);
	unk_0x553231E7FC3C570D(6);
	unk_0x553231E7FC3C570D(8);
	unk_0x553231E7FC3C570D(9);
}

void func_302(var uParam0, var uParam1)
{
	unk_0x28E092B1E386EB67(uParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_303(char* sParam0)
{
	unk_0x8686005F83E832AE(sParam0);
}

void func_304(int iParam0)
{
	Global_1315692 = iParam0;
}

void func_305(var uParam0)
{
	uParam0->f_679 = 0;
}

int func_306(var uParam0)
{
	return uParam0->f_679;
}

bool func_307(int iParam0)
{
	return func_308(iParam0) != 0;
}

int func_308(int iParam0)
{
	if (iParam0 == func_4())
	{
		return 0;
	}
	return Global_1595693[iParam0 /*680*/].f_266.f_111;
}

int func_309()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_84[iVar0 /*3*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_310(char* sParam0, char* sParam1, var uParam2, char* sParam3)
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

void func_311(var uParam0)
{
	func_312(uParam0);
	uParam0->f_679 = 1;
}

void func_312(var uParam0)
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
		uParam0->f_1[iVar0 /*56*/].f_54 = 358;
		uParam0->f_1[iVar0 /*56*/].f_55 = 358;
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

void func_313(bool bParam0)
{
	if (bParam0)
	{
		if (func_314())
		{
			Global_2447174.f_33 = 1;
		}
	}
	else
	{
		Global_2447174.f_33 = 0;
	}
}

bool func_314()
{
	return unk_0xC80D31E4B587871C(Global_2447174.f_2, 11);
}

void func_315(int iParam0)
{
	Global_1359035.f_1079 = iParam0;
}

void func_316()
{
	Global_2522773.f_258 = 1;
}

int func_317()
{
	if (iLocal_150 > 0 || iLocal_156 == 1)
	{
		return 1;
	}
	return 0;
}

int func_318()
{
	if (unk_0x72375F3B1A183031(iLocal_1227) && !func_294())
	{
		return 1;
	}
	return 0;
}

bool func_319(int iParam0)
{
	return func_320(iParam0) == joaat("weapon_minigun");
}

int func_320(int iParam0)
{
	return Global_1627537[iParam0 /*532*/].f_522;
}

struct<9> func_321()
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

bool func_322()
{
	return unk_0x53C562FD2B9E3AB0() <= Global_17301.f_5745 + 100;
}

int func_323(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0) && !unk_0x191BE1BC8F26F3C1(iParam1, 0))
	{
		if (unk_0xAAA8D20859E2D36D(iParam0, iParam1))
		{
			if (unk_0x317536BCEA8FA6B0(iParam1, iParam2, 0) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_324()
{
	if (iLocal_150 == 0)
	{
		if (iLocal_155)
		{
			if (func_309() || func_307(unk_0x9EB17624F44A8DA4()))
			{
				iLocal_154 = 1;
				iLocal_150 = 1;
			}
			else
			{
				iLocal_156 = 1;
				iLocal_158 = -1;
				iLocal_157 = 1;
			}
		}
	}
	if (iLocal_150 == 1)
	{
		if (func_400())
		{
			func_328();
		}
		else
		{
			iLocal_157 = 1;
		}
	}
	if (iLocal_157)
	{
		func_325(1, -1);
		iLocal_150 = 0;
		iLocal_152 = 0;
		iLocal_157 = 0;
		iLocal_155 = 0;
	}
}

void func_325(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_327(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17301.f_7931)
	{
		unk_0x3B235F54BDEDFCB5(15);
		Global_17301.f_7931 = 0;
	}
	unk_0xA3E8E2D0F73E92C5(0f);
	if (Global_17301.f_5498[iVar0])
	{
		unk_0xF40900F61CC88931(9, 0);
		Global_17301.f_5498[iVar0] = 0;
	}
	if (Global_17301.f_5484[iVar0])
	{
		unk_0x137FC8E0F58D9E0B("CommonMenu");
		Global_17301.f_5484[iVar0] = 0;
	}
	if (Global_17301.f_5491[iVar0])
	{
		unk_0x137FC8E0F58D9E0B("MPShopSale");
		Global_17301.f_5491[iVar0] = 0;
	}
	if (bParam0)
	{
		func_326(&(Global_17301.f_5530[iVar0 /*10*/]));
		Global_17301.f_5591[iVar0] = 0;
	}
	else
	{
		Global_17301.f_5591[iVar0] = 0;
	}
}

void func_326(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x34D11AB5BA7922C2(*uParam0))
		{
			unk_0xA68F7B004463AB6F(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_327(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0x3A711520F83BAE98() && unk_0x8C504A60C2F379BD())
		{
			iParam2 = unk_0x4362A980E5B3780B();
		}
	}
	StringCopy(&cVar0, unk_0x436287B7DB306165(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x8B948C59217A295D(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17301.f_5591[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17301.f_5591[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17301.f_5591[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_328()
{
	int iVar0;
	
	func_389(&Local_176);
	if (func_387(0, -1, 0))
	{
		if (iLocal_154)
		{
			func_372();
			iLocal_154 = 0;
		}
		else
		{
			func_371(iLocal_152, 1, 1);
		}
		func_369();
		func_367();
		func_339(1, -1, 1, 0, 1, -1082130432, 0, 0);
		if (!bLocal_165)
		{
			if (func_338())
			{
				iLocal_154 = 1;
			}
		}
		else if (!func_338())
		{
			iLocal_154 = 1;
		}
		if (!bLocal_166)
		{
			if (func_333())
			{
				iLocal_154 = 1;
			}
		}
		else if (!func_333())
		{
			iLocal_154 = 1;
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (!uLocal_168[iVar0])
			{
				if (func_332(iLocal_159[iVar0]))
				{
					iLocal_154 = 1;
				}
			}
			else if (!func_332(iLocal_159[iVar0]))
			{
				iLocal_154 = 1;
			}
			iVar0++;
		}
		if (!bLocal_167)
		{
			if (func_329())
			{
				iLocal_154 = 1;
			}
		}
		else if (!func_329())
		{
			iLocal_154 = 1;
		}
	}
}

int func_329()
{
	if (func_307(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0x2A488C176D52CCA5(func_167(unk_0x9EB17624F44A8DA4()), Global_1669535.f_42[func_330(func_308(unk_0x9EB17624F44A8DA4())) /*3*/]) > 100f)
		{
			return 1;
		}
	}
	return 0;
}

int func_330(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 102)
	{
		if (func_183(iVar0) == 1)
		{
			if (func_331(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_331(int iParam0)
{
	switch (iParam0)
	{
		case 60:
			return 1;
		
		case 61:
			return 2;
		
		case 62:
			return 3;
		
		case 63:
			return 4;
		
		case 64:
			return 5;
		
		case 65:
			return 6;
		
		case 66:
			return 7;
		
		case 67:
			return 8;
		
		case 68:
			return 9;
		
		case 69:
			return 10;
		
		default:
	}
	return 0;
}

int func_332(int iParam0)
{
	if (iParam0 > 0)
	{
		if (unk_0x2A488C176D52CCA5(func_167(unk_0x9EB17624F44A8DA4()), func_172(iParam0)) > 100f)
		{
			return 1;
		}
	}
	return 0;
}

int func_333()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = iLocal_1227;
	if (unk_0x191BE1BC8F26F3C1(iVar0, 0))
	{
		return 0;
	}
	iVar1 = unk_0xF82225DEA5272C6B(unk_0x82FF3DFBC3965CC0(iVar0));
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar5 = (iVar2 - 1);
		if (!unk_0x8EE3A848975DDF21(iVar0, iVar5, 0))
		{
			iVar4 = unk_0x317536BCEA8FA6B0(iVar0, iVar5, 0);
			if (!unk_0x191BE1BC8F26F3C1(iVar4, 0) && unk_0x1417A5CC924DE120(iVar4))
			{
				if (!func_336())
				{
					iVar3 = unk_0xDF35170AEEFB473B(iVar4);
					if (iVar3 != unk_0x9EB17624F44A8DA4())
					{
						return 0;
					}
				}
				else
				{
					iVar3 = unk_0xDF35170AEEFB473B(iVar4);
					if (iVar3 != func_4() && func_131(iVar3, 1, 1))
					{
						if (!func_334(iVar3, func_5(unk_0x9EB17624F44A8DA4()), 1))
						{
							return 0;
						}
					}
				}
			}
		}
		iVar2++;
	}
	if (iLocal_174)
	{
		if (!func_408())
		{
			iLocal_174 = 0;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_334(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_4())
	{
		if (!bParam2)
		{
			if (func_335(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1627537[iParam0 /*532*/].f_11 != func_4())
		{
			return iParam1 == Global_1627537[iParam0 /*532*/].f_11;
		}
	}
	return 0;
}

int func_335(int iParam0, int iParam1)
{
	if (iParam1 != func_4())
	{
		if (iParam0 != func_4())
		{
			if (Global_1627537[iParam0 /*532*/].f_11 != func_4())
			{
				if (Global_1627537[iParam0 /*532*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_336()
{
	return func_337(unk_0x9EB17624F44A8DA4());
}

int func_337(int iParam0)
{
	if (iParam0 != func_4())
	{
		if (Global_1627537[iParam0 /*532*/].f_11 != func_4())
		{
			return Global_1627537[iParam0 /*532*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_338()
{
	if (unk_0x2A488C176D52CCA5(func_167(unk_0x9EB17624F44A8DA4()), func_213(func_215(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266[5]))) > 200f)
	{
		return 1;
	}
	return 0;
}

void func_339(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
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
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	struct<3> Var38;
	bool bVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	float fVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	float fVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	int iVar55;
	bool bVar56;
	float fVar57;
	float fVar58;
	float fVar59;
	float fVar60;
	int iVar61;
	int iVar62;
	float fVar63;
	float fVar64;
	float fVar65;
	char cVar66[64];
	char cVar82[64];
	float fVar98;
	int iVar99;
	float fVar100;
	float fVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	char cVar107[16];
	float fVar111;
	float fVar112;
	float fVar113;
	float fVar114;
	float fVar115;
	
	if (!func_327(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_365(0, bParam6))
	{
		return;
	}
	unk_0x73509F6FDA1DB386(76, 84);
	unk_0xE7C11B6F2CF973B6(-0.05f, -0.05f, 0f, 0f);
	fVar58 = 0f;
	fVar59 = 0f;
	if (Global_17301)
	{
		if (func_363(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar58 = fVar37;
			fVar59 = fVar36;
			fVar58 = (fVar58 + 0f);
		}
		else
		{
			Global_17301 = 0;
		}
	}
	if (unk_0x8B948C59217A295D(&(Global_17301.f_1)) == unk_0x8B948C59217A295D("HIDE"))
	{
		fVar60 = Global_17299;
	}
	else
	{
		fVar60 = (((Global_17299 + fVar58) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17300;
	}
	fVar63 = 1f;
	if (bParam7)
	{
		unk_0x5113D2C928A121B2(&iVar61, &iVar62);
		fVar64 = unk_0xB6936205ED728A9D(0);
		if (func_362())
		{
			iVar61 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar62) * fVar64));
		}
		fVar65 = (unk_0xBBDA792448DB5A89(iVar61) / unk_0xBBDA792448DB5A89(iVar62));
		fVar63 = (fVar65 / fVar64);
		if (func_362())
		{
			fVar63 = 1f;
		}
		iVar61 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar61) / fVar63));
		iVar62 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar62) / fVar63));
	}
	else
	{
		unk_0x9A72C8F89A53C2D1(&iVar61, &iVar62);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17301.f_5598)
		{
			if (unk_0x8B948C59217A295D(&(Global_17301.f_1)) == unk_0x8B948C59217A295D("HIDE"))
			{
				fVar51 = Global_17299;
			}
			else
			{
				if (Global_17301)
				{
					StringCopy(&cVar66, func_361(29), 64);
					StringCopy(&cVar82, func_359(29, 1), 64);
					if (unk_0x8B948C59217A295D(&(Global_17301.f_6719[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_358(Global_17298, Global_17299, fParam5, (fVar58 - 0f), 0, 0, 0, 255);
						unk_0xEFB3EC0CDCC33841(&cVar66, &cVar82, (Global_17298 + (fParam5 * 0.5f)), (Global_17299 + ((fVar58 - 0f) * 0.5f)), fVar59, (fVar58 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0xEFB3EC0CDCC33841(&cVar66, &cVar82, (Global_17298 + (fParam5 * 0.5f)), (Global_17299 + ((fVar58 - 0f) * 0.5f)), fParam5, (fVar58 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_17301.f_7901)
				{
					iVar1 = Global_17301.f_7897;
					iVar2 = Global_17301.f_7898;
					iVar3 = Global_17301.f_7899;
					iVar4 = Global_17301.f_7900;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_358(Global_17298, (Global_17299 + fVar58), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_17299 + fVar58) + 0.034722f) + 0f);
				if (unk_0x8B948C59217A295D(&(Global_17301.f_1)) != 0)
				{
					func_357();
					unk_0x76CCD673085CBF57(&(Global_17301.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17301.f_68)
					{
						if (Global_17301.f_5[iVar14] == 2)
						{
							unk_0x6223D539BCD39E76(Global_17301.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17301.f_5[iVar14] == 3)
						{
							unk_0x32AD2F36F6EF5A1F(Global_17301.f_14[iVar16], Global_17301.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17301.f_5[iVar14] == 1)
						{
							unk_0xA6D2B267C377D7B2(&(Global_17301.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17301.f_5[iVar14] == 8)
						{
							unk_0xA6D2B267C377D7B2(&(Global_17301.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17301.f_5[iVar14] == 5)
						{
							unk_0x854FACC4E5F40C82(&(Global_17301.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17301.f_5[iVar14] == 6)
						{
							unk_0xA6D2B267C377D7B2(&(Global_17301.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17301.f_5[iVar14] == 7)
						{
							unk_0x854FACC4E5F40C82(&(Global_17301.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17301.f_5[iVar14] == 9)
						{
							unk_0x854FACC4E5F40C82(&(Global_17301.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0xD3DA9EADE295C3C5((Global_17298 + 0.00390625f), ((Global_17299 + fVar58) + 0.00416664f), 0);
				}
				if (Global_17301.f_5601 > Global_17301.f_5095)
				{
					if (Global_17301.f_5604 != 0)
					{
						func_357();
						func_355((((Global_17298 + fParam5) - 0.00390625f) - func_356("CM_ITEM_COUNT", Global_17301.f_5604, Global_17301.f_5603)), ((Global_17299 + fVar58) + 0.00416664f), "CM_ITEM_COUNT", Global_17301.f_5604, Global_17301.f_5603);
					}
				}
			}
			iVar6 = Global_17301.f_5605;
			iVar9 = 0;
			fVar98 = fVar51;
			if (Global_17301.f_7911)
			{
				iVar1 = Global_17301.f_7907;
				iVar2 = Global_17301.f_7908;
				iVar3 = Global_17301.f_7909;
				iVar4 = Global_17301.f_7910;
			}
			else
			{
				unk_0x31758B9A51671C43(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17301.f_5095 && iVar6 <= Global_17301.f_5088)
			{
				if (iVar6 >= 0)
				{
					if (Global_17301.f_5355[iVar6])
					{
						if (Global_17301.f_5226[iVar6] && iVar6 != Global_17301.f_5605)
						{
							fVar51 = (fVar51 + 0.00277776f);
						}
						fVar57 = 0.034722f;
						if (Global_17301.f_5612[iVar6] != 0f)
						{
							fVar57 = Global_17301.f_5612[iVar6];
						}
						fVar51 = (fVar51 + fVar57);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar57 = 0.034722f;
					fVar51 = (fVar51 + fVar57);
					iVar9++;
					if (Global_17301.f_5088 <= 1)
					{
						Global_17301.f_5088++;
					}
					iVar55 = 1;
				}
			}
			unk_0xEFB3EC0CDCC33841("CommonMenu", "Gradient_Bgd", (Global_17298 + (fParam5 * 0.5f)), ((fVar98 + ((fVar51 - fVar98) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar98), 0f, 255, 255, 255, 255, 0);
			if (Global_17301.f_5601 > Global_17301.f_5095)
			{
				if (Global_17301.f_7916)
				{
					iVar1 = Global_17301.f_7912;
					iVar2 = Global_17301.f_7913;
					iVar3 = Global_17301.f_7914;
					iVar4 = Global_17301.f_7915;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_358(Global_17298, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { unk_0x62415D7FD7ADB9EE("CommonMenu", "shop_arrows_upANDdown") };
				Var38.f_0 = (Var38.f_0 * (0.5f / fVar63));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar63));
				if (Global_17301.f_7929)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0x31758B9A51671C43(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xEFB3EC0CDCC33841("CommonMenu", "shop_arrows_upANDdown", (Global_17298 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((Var38.f_0 / 1280f) * fVar63), ((Var38.f_1 / 720f) * fVar63), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar51 = (fVar51 + (0f + 0.034722f));
			}
			if (unk_0x8B948C59217A295D(&(Global_17301.f_4562)) != 0 && Global_17301.f_4636 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_17298 + 0.0046875f);
				if (Global_17301.f_4638 != 0)
				{
					func_363(Global_17301.f_4638, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_17298 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_354(fVar42);
				unk_0x359D94A1D62654F7(&(Global_17301.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17301.f_4632)
				{
					if (Global_17301.f_4566[iVar14] == 2)
					{
						unk_0x6223D539BCD39E76(Global_17301.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17301.f_4566[iVar14] == 3)
					{
						unk_0x32AD2F36F6EF5A1F(Global_17301.f_4575[iVar16], Global_17301.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17301.f_4566[iVar14] == 1)
					{
						unk_0xA6D2B267C377D7B2(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 5)
					{
						unk_0x854FACC4E5F40C82(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 6)
					{
						unk_0xA6D2B267C377D7B2(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 7)
					{
						unk_0x854FACC4E5F40C82(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 9)
					{
						unk_0x854FACC4E5F40C82(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x019EBC578ADE3C09(fVar42, (fVar51 + 0.00277776f));
				unk_0x31758B9A51671C43(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_358(Global_17298, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17301.f_7921)
				{
					iVar1 = Global_17301.f_7917;
					iVar2 = Global_17301.f_7918;
					iVar3 = Global_17301.f_7919;
					iVar4 = Global_17301.f_7920;
				}
				else
				{
					unk_0x31758B9A51671C43(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xEFB3EC0CDCC33841("CommonMenu", "Gradient_Bgd", (Global_17298 + (fParam5 * 0.5f)), ((fVar51 + ((((unk_0xAF6F79C616D36B6E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xAF6F79C616D36B6E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_354(fVar42);
				unk_0x76CCD673085CBF57(&(Global_17301.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17301.f_4632)
				{
					if (Global_17301.f_4566[iVar14] == 2)
					{
						unk_0x6223D539BCD39E76(Global_17301.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17301.f_4566[iVar14] == 3)
					{
						unk_0x32AD2F36F6EF5A1F(Global_17301.f_4575[iVar16], Global_17301.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17301.f_4566[iVar14] == 1)
					{
						unk_0xA6D2B267C377D7B2(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 5)
					{
						unk_0x854FACC4E5F40C82(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 6)
					{
						unk_0xA6D2B267C377D7B2(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 7)
					{
						unk_0x854FACC4E5F40C82(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 9)
					{
						unk_0x854FACC4E5F40C82(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 8)
					{
						unk_0xA6D2B267C377D7B2(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xD3DA9EADE295C3C5(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_17301.f_4638 != 0)
				{
					func_363(Global_17301.f_4638, 1, 1, &fVar36, &fVar37, bParam7);
					func_353(Global_17301.f_4638, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					unk_0xEFB3EC0CDCC33841(func_361(Global_17301.f_4638), func_359(Global_17301.f_4638, 1), ((Global_17298 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
				}
				fVar51 = (fVar51 + (((unk_0xAF6F79C616D36B6E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17301.f_4636 > 0)
				{
					if ((unk_0x53C562FD2B9E3AB0() - Global_17301.f_4637) > Global_17301.f_4636)
					{
						StringCopy(&(Global_17301.f_4562), "", 16);
						Global_17301.f_4636 = -1;
					}
				}
			}
			if (unk_0x8B948C59217A295D(&(Global_4265799.f_21)) != 0 && Global_4265799.f_65 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_17298 + 0.0046875f);
				if (Global_4265799.f_67 != 0)
				{
					func_363(Global_4265799.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_17298 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_354(fVar42);
				unk_0x359D94A1D62654F7(&(Global_4265799.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4265799.f_61)
				{
					if (Global_4265799.f_25[iVar14] == 2)
					{
						unk_0x6223D539BCD39E76(Global_4265799.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4265799.f_25[iVar14] == 3)
					{
						unk_0x32AD2F36F6EF5A1F(Global_4265799.f_34[iVar16], Global_4265799.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4265799.f_25[iVar14] == 1)
					{
						unk_0xA6D2B267C377D7B2(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 5)
					{
						unk_0x854FACC4E5F40C82(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 6)
					{
						unk_0xA6D2B267C377D7B2(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 7)
					{
						unk_0x854FACC4E5F40C82(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 9)
					{
						unk_0x854FACC4E5F40C82(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 8)
					{
						unk_0xA6D2B267C377D7B2(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x019EBC578ADE3C09(fVar42, (fVar51 + 0.00277776f));
				unk_0x31758B9A51671C43(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_358(Global_17298, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17301.f_7921)
				{
					iVar1 = Global_17301.f_7917;
					iVar2 = Global_17301.f_7918;
					iVar3 = Global_17301.f_7919;
					iVar4 = Global_17301.f_7920;
				}
				else
				{
					unk_0x31758B9A51671C43(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xEFB3EC0CDCC33841("CommonMenu", "Gradient_Bgd", (Global_17298 + (fParam5 * 0.5f)), ((fVar51 + ((((unk_0xAF6F79C616D36B6E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xAF6F79C616D36B6E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_354(fVar42);
				unk_0x76CCD673085CBF57(&(Global_4265799.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4265799.f_61)
				{
					if (Global_4265799.f_25[iVar14] == 2)
					{
						unk_0x6223D539BCD39E76(Global_4265799.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4265799.f_25[iVar14] == 3)
					{
						unk_0x32AD2F36F6EF5A1F(Global_4265799.f_34[iVar16], Global_4265799.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4265799.f_25[iVar14] == 1)
					{
						unk_0xA6D2B267C377D7B2(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 8)
					{
						unk_0xA6D2B267C377D7B2(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 5)
					{
						unk_0x854FACC4E5F40C82(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 6)
					{
						unk_0xA6D2B267C377D7B2(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 7)
					{
						unk_0x854FACC4E5F40C82(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 9)
					{
						unk_0x854FACC4E5F40C82(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xD3DA9EADE295C3C5(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_4265799.f_67 != 0)
				{
					func_363(Global_4265799.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_353(Global_4265799.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					unk_0xEFB3EC0CDCC33841(func_361(Global_4265799.f_67), func_359(Global_4265799.f_67, 1), ((Global_17298 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
				}
				fVar51 = (fVar51 + (((unk_0xAF6F79C616D36B6E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4265799.f_65 > 0)
				{
					if ((unk_0x53C562FD2B9E3AB0() - Global_4265799.f_66) > Global_4265799.f_65)
					{
						StringCopy(&(Global_4265799.f_21), "", 16);
						Global_4265799.f_65 = -1;
					}
				}
			}
			func_350(iVar61, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0x73509F6FDA1DB386(76, 84);
			unk_0xE7C11B6F2CF973B6(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17301.f_5598)
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
			iVar99 = Global_17301.f_5088;
			if (Global_17301.f_5599)
			{
				iVar99 = (Global_17301.f_5602 - 1);
			}
			fVar100 = 0f;
			fVar101 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar99)
			{
				fVar57 = 0.034722f;
				if (Global_17301.f_5612[iVar6] != 0f)
				{
					fVar57 = Global_17301.f_5612[iVar6];
				}
				if (Global_17301.f_5599)
				{
					iVar6 = Global_17301.f_7552[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_17301.f_5605 && iVar9 < Global_17301.f_5095)
				{
					bVar33 = true;
					if (Global_17301.f_5606 == iVar6)
					{
						fVar101 = fVar100;
					}
					if (Global_17301.f_5226[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar60 + fVar100) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17301.f_5746[iVar6] = fVar35;
				fVar34 = (Global_17298 + 0.0046875f);
				bVar41 = false;
				bVar32 = Global_17301.f_5606 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar102 = 255;
					iVar103 = 255;
					iVar104 = 255;
					iVar105 = 255;
					if (Global_17301.f_7923)
					{
						unk_0x31758B9A51671C43(Global_17301.f_7922, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					else
					{
						unk_0x31758B9A51671C43(1, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					unk_0xEFB3EC0CDCC33841("CommonMenu", "Gradient_Nav", (Global_17298 + (fParam5 * 0.5f)), (((fVar60 + fVar101) + (0.00277776f * IntToFloat(iVar12))) + (fVar57 * 0.5f)), fParam5, fVar57, 0f, iVar102, iVar103, iVar104, iVar105, 0);
					Global_17301.f_5744 = fVar35;
				}
				if (iVar55 && iVar7 == iVar99)
				{
					func_348(bVar32, 1, 0, 0, 0, 0, 0);
					unk_0x76CCD673085CBF57("DFLT_MNU_OPT");
					unk_0xD3DA9EADE295C3C5(fVar34, fVar35, 0);
					bVar41 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17301.f_5096)
					{
						if (unk_0xC80D31E4B587871C(Global_17301.f_4959[iVar6], iVar8) || Global_17301.f_4926[iVar8] == 5)
						{
							if (Global_17301.f_5599)
							{
								iVar19 = Global_17301.f_7568[((iVar9 * Global_17301.f_5096) + iVar8)];
								iVar20 = Global_17301.f_7609[((iVar9 * Global_17301.f_5096) + iVar8)];
								iVar21 = Global_17301.f_7650[((iVar9 * Global_17301.f_5096) + iVar8)];
								iVar22 = Global_17301.f_7691[((iVar9 * Global_17301.f_5096) + iVar8)];
								iVar23 = Global_17301.f_7732[((iVar9 * Global_17301.f_5096) + iVar8)];
							}
							else
							{
								Global_17301.f_7568[((iVar9 * Global_17301.f_5096) + iVar8)] = iVar19;
								Global_17301.f_7609[((iVar9 * Global_17301.f_5096) + iVar8)] = iVar20;
								Global_17301.f_7650[((iVar9 * Global_17301.f_5096) + iVar8)] = iVar21;
								Global_17301.f_7691[((iVar9 * Global_17301.f_5096) + iVar8)] = iVar22;
								Global_17301.f_7732[((iVar9 * Global_17301.f_5096) + iVar8)] = iVar23;
							}
							iVar106 = 0;
							bVar56 = false;
							if (Global_17301.f_5878[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17301.f_5875[0])
								{
									bVar56 = true;
									iVar106 = 0;
								}
							}
							if (Global_17301.f_5878[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17301.f_5875[1])
								{
									bVar56 = true;
									iVar106 = 1;
								}
							}
							if (Global_17301.f_4932[iVar8] != -1f)
							{
								fVar34 = ((Global_17298 + 0.0046875f) + Global_17301.f_4932[iVar8]);
							}
							if ((iVar8 < 4 && Global_17301.f_4932[iVar8 + 1] != -1f) && fVar34 < Global_17301.f_4932[iVar8 + 1])
							{
								fVar46 = (Global_17301.f_4932[iVar8 + 1] - fVar34);
							}
							else
							{
								fVar46 = (((Global_17298 + Global_17300) - 0.0046875f) - fVar34);
							}
							if ((Global_17301.f_4945[iVar8] && Global_17301.f_5741) && bVar32)
							{
								bVar54 = true;
							}
							else
							{
								bVar54 = false;
							}
							switch (Global_17301.f_4926[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_17301.f_5599)
										{
											fVar43 = 0f;
											fVar44 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
											{
												bVar52 = false;
												bVar53 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17301.f_2124[iVar24 /*5*/][iVar14] == 8)
													{
														bVar53 = true;
													}
													else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 9)
													{
														bVar52 = true;
													}
													iVar14++;
												}
												func_348(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar56, iVar106, bVar53, bVar52);
												unk_0x0792909D8327DAEA(&(Global_17301.f_73[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xA6D2B267C377D7B2(&(Global_17301.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xA6D2B267C377D7B2(&(Global_17301.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x854FACC4E5F40C82(&(Global_2457366[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xA6D2B267C377D7B2(&(Global_2457366[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x854FACC4E5F40C82(&(Global_2457366[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x854FACC4E5F40C82(&(Global_2457366[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x6223D539BCD39E76(Global_17301.f_3918[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x32AD2F36F6EF5A1F(Global_17301.f_4175[(iVar21 + iVar27)], Global_17301.f_4304[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
											{
												fVar43 = unk_0xF2A1AF58CC57C564(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_363(Global_17301.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar44 = (fVar44 + fVar36);
														if (iVar14 > 0)
														{
															fVar44 = (fVar44 - (0.00078125f * 4f));
														}
														if (Global_17301.f_4433[(iVar22 + iVar14)] == 2 || Global_17301.f_4433[(iVar22 + iVar14)] == 48)
														{
															fVar44 = (fVar44 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar42 = 0f;
											if (Global_17301.f_4953[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
											}
											else if (Global_17301.f_4953[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
											}
											Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar42;
											Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar43;
											Global_17301.f_7855[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)];
											fVar43 = Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)];
											fVar44 = Global_17301.f_7855[((iVar9 * Global_17301.f_5096) + iVar8)];
										}
										if (bVar54)
										{
											if (func_363(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_17301.f_4953[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_363(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_353(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													unk_0xEFB3EC0CDCC33841(func_361(26), func_359(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
											if (func_363(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_363(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_353(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													unk_0xEFB3EC0CDCC33841(func_361(27), func_359(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar31 = 0;
										if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17301.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											func_348(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar56, 0, bVar53, bVar52);
											if (Global_17301.f_7927 && Global_17301.f_7928 == iVar6)
											{
												func_347(bVar32);
											}
											unk_0x76CCD673085CBF57(&(Global_17301.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xA6D2B267C377D7B2(&(Global_17301.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar31 = 1;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xA6D2B267C377D7B2(&(Global_17301.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar31 = 8;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x854FACC4E5F40C82(&(Global_2457366[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 5;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xA6D2B267C377D7B2(&(Global_2457366[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 6;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x854FACC4E5F40C82(&(Global_2457366[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 7;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x854FACC4E5F40C82(&(Global_2457366[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 9;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x6223D539BCD39E76(Global_17301.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar31 = 2;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x32AD2F36F6EF5A1F(Global_17301.f_4175[(iVar21 + iVar27)], Global_17301.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar31 = 3;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17301.f_4433[(iVar22 + iVar28)] == 2 || Global_17301.f_4433[(iVar22 + iVar28)] == 48)
												{
													if (func_363(Global_17301.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar42 = (fVar42 + (fVar36 * 0.5f));
														if (func_363(Global_17301.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_353(Global_17301.f_4433[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_17301.f_4953[iVar8] == 2)
															{
																unk_0xEFB3EC0CDCC33841(func_361(Global_17301.f_4433[(iVar22 + iVar28)]), func_359(Global_17301.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else
															{
																unk_0xEFB3EC0CDCC33841(func_361(Global_17301.f_4433[(iVar22 + iVar28)]), func_359(Global_17301.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															fVar42 = (fVar42 + (0.00078125f * 3f));
														}
													}
												}
												iVar28++;
												iVar31 = 4;
											}
											iVar14++;
										}
										if (unk_0x8B948C59217A295D(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
										{
											if (iVar31 == 4 && Global_17301.f_4953[iVar8] == 2)
											{
												unk_0xD3DA9EADE295C3C5(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
											}
											else
											{
												unk_0xD3DA9EADE295C3C5((fVar34 + fVar42), fVar35, 0);
												if (func_346() && unk_0x8F38E94BBF3404CD(joaat("fm_mission_creator")) > 0)
												{
													if (iVar8 == 0)
													{
														func_348(0, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar56, 0, bVar53, bVar52);
														StringCopy(&cVar107, "TEST_LABEL", 16);
														fVar111 = 0f;
														fVar112 = 55f;
														fVar113 = 0.0185f;
														fVar114 = 0.004f;
														fVar115 = 0.02f;
														unk_0x8D95497078BC0E3B(0f, (0.35f * 0.7f));
														unk_0xA54B8BFDEBB2AF89(255, 255, 255, 150);
														unk_0x09C2CBFA4CD804AC((fVar34 - (fVar115 * 0.6f)), (fVar35 + (fVar113 * 0.75f)), 0.0175f, 0.035f, unk_0xF34EE736CF047844(fVar111), unk_0xF34EE736CF047844(fVar111), unk_0xF34EE736CF047844(fVar111), unk_0xF34EE736CF047844(fVar112), 0);
														unk_0x76CCD673085CBF57(&cVar107);
														unk_0x6223D539BCD39E76((Global_17301.f_5605 + iVar30));
														unk_0xD3DA9EADE295C3C5((fVar34 - fVar115), (fVar35 + fVar114), 0);
														iVar30++;
													}
												}
											}
										}
										if (iVar28 > 0)
										{
											fVar42 = (fVar42 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_17301.f_4433[(iVar22 + iVar14)] != 2 && Global_17301.f_4433[(iVar22 + iVar14)] != 48)
												{
													if (func_363(Global_17301.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar42 = (fVar42 + (fVar36 * 0.5f));
														if (func_363(Global_17301.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_353(Global_17301.f_4433[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_17301.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0xEFB3EC0CDCC33841(func_361(Global_17301.f_4433[(iVar22 + iVar14)]), func_359(Global_17301.f_4433[(iVar22 + iVar14)], bVar32), (Global_17298 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else if (Global_17301.f_4953[iVar8] == 2)
															{
																unk_0xEFB3EC0CDCC33841(func_361(Global_17301.f_4433[(iVar22 + iVar14)]), func_359(Global_17301.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else
															{
																unk_0xEFB3EC0CDCC33841(func_361(Global_17301.f_4433[(iVar22 + iVar14)]), func_359(Global_17301.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
														}
														fVar42 = (fVar42 + (12f * 0.00078125f));
													}
												}
												iVar14++;
											}
										}
									}
									bVar41 = true;
									iVar19++;
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 9)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_17301.f_5599)
										{
											func_348(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar56, 0, 0, 0);
											if (Global_17301.f_7927 && Global_17301.f_7928 == iVar6)
											{
												func_347(bVar32);
											}
											unk_0x0792909D8327DAEA("NUMBER");
											unk_0x6223D539BCD39E76(Global_17301.f_3918[iVar20]);
											fVar43 = unk_0xF2A1AF58CC57C564(1);
											fVar42 = 0f;
											if (Global_17301.f_4953[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
											}
											else if (Global_17301.f_4953[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
											}
											Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar42;
											Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar43;
										}
										else
										{
											fVar42 = Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)];
											fVar43 = Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)];
										}
										if (bVar54)
										{
											if (func_363(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_17301.f_4953[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_363(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_353(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													unk_0xEFB3EC0CDCC33841(func_361(26), func_359(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
											if (func_363(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_363(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_353(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													unk_0xEFB3EC0CDCC33841(func_361(27), func_359(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										func_348(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar56, 0, 0, 0);
										func_345((fVar34 + fVar42), fVar35, "NUMBER", Global_17301.f_3918[iVar20], 0);
									}
									bVar41 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_17301.f_5599)
										{
											func_348(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar56, 0, 0, 0);
											if (Global_17301.f_7927 && Global_17301.f_7928 == iVar6)
											{
												func_347(bVar32);
											}
											unk_0x0792909D8327DAEA("NUMBER");
											unk_0x32AD2F36F6EF5A1F(Global_17301.f_4175[iVar21], Global_17301.f_4304[iVar21]);
											fVar43 = unk_0xF2A1AF58CC57C564(1);
											fVar42 = 0f;
											if (Global_17301.f_4953[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
											}
											else if (Global_17301.f_4953[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
											}
											Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar42;
											Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar43;
										}
										else
										{
											fVar42 = Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)];
											fVar43 = Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)];
										}
										if (bVar54)
										{
											if (func_363(26, 1, 0, &fVar36, &fVar37, 0))
											{
												if (Global_17301.f_4953[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_363(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_353(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													unk_0xEFB3EC0CDCC33841(func_361(26), func_359(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
											if (func_363(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_363(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_353(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													unk_0xEFB3EC0CDCC33841(func_361(27), func_359(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										func_348(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar56, 0, 0, 0);
										func_344((fVar34 + fVar42), fVar35, "NUMBER", Global_17301.f_4175[iVar21], Global_17301.f_4304[iVar21]);
									}
									bVar41 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar33)
									{
										if (func_363(Global_17301.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
										{
											if (!Global_17301.f_5599)
											{
												fVar44 = fVar36;
												fVar42 = 0f;
												if (Global_17301.f_4953[iVar8] == 2)
												{
													fVar42 = (fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
												}
												else if (Global_17301.f_4953[iVar8] == 0)
												{
													fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
												}
												Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar42;
												Global_17301.f_7855[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar44;
											}
											else
											{
												fVar42 = Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)];
												fVar44 = Global_17301.f_7855[((iVar9 * Global_17301.f_5096) + iVar8)];
											}
											if (bVar54)
											{
												if (func_363(26, 1, 0, &fVar36, &fVar37, bParam7))
												{
													if (Global_17301.f_4953[iVar8] == 2)
													{
														fVar42 = (fVar42 - (fVar36 * 2f));
													}
													fVar45 = (fVar36 * 0.5f);
													if (func_363(26, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_353(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
														unk_0xEFB3EC0CDCC33841(func_361(26), func_359(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
													}
												}
												if (func_363(27, 1, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + fVar36);
													fVar45 = (fVar36 * 0.5f);
													if (func_363(27, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_353(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
														unk_0xEFB3EC0CDCC33841(func_361(27), func_359(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
													}
												}
											}
											if (func_363(Global_17301.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_353(Global_17301.f_4433[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												unk_0xEFB3EC0CDCC33841(func_361(Global_17301.f_4433[iVar22]), func_359(Global_17301.f_4433[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), (fVar36 * func_343(Global_17301.f_4433[iVar22])), (fVar37 * func_343(Global_17301.f_4433[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, 0);
											}
										}
									}
									bVar41 = true;
									iVar22++;
									break;
								
								case 5:
									bVar41 = true;
									break;
							}
							if (Global_17301.f_4926[iVar8] == 5)
							{
								if (Global_17301.f_4938[iVar8] > 0.05f)
								{
									fVar34 = (fVar34 + Global_17301.f_4938[iVar8]);
								}
								else
								{
									fVar34 = (fVar34 + 0.05f);
								}
							}
							else
							{
								fVar34 = (fVar34 + Global_17301.f_4938[iVar8]);
								if (Global_17301.f_4945[iVar8])
								{
									if (func_363(26, 1, 1, &fVar36, &fVar37, bParam7))
									{
										fVar34 = (fVar34 - fVar36);
									}
								}
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_17301.f_4938[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_17301.f_7552[iVar9] = iVar6;
						Global_17301.f_5607 = iVar6;
						iVar9++;
						if (Global_17301.f_5226[iVar6])
						{
							iVar13++;
						}
						if (Global_17301.f_5612[iVar6] != 0f)
						{
							fVar100 = (fVar100 + Global_17301.f_5612[iVar6]);
						}
						else
						{
							fVar100 = (fVar100 + 0.034722f);
						}
					}
					if (!Global_17301.f_5598)
					{
						Global_17301.f_5355[iVar6] = 1;
						if (Global_17301.f_5097[iVar6])
						{
							if (bVar32)
							{
								Global_17301.f_5604 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_17301.f_5604 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17301.f_5598)
			{
				Global_17301.f_5600 = ((fVar60 + fVar100) + (0.00277776f * IntToFloat(iVar12)));
				Global_17301.f_5603 = iVar11;
				Global_17301.f_5601 = iVar10;
				Global_17301.f_5598 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17301.f_5599)
	{
		Global_17301.f_5602 = iVar9;
		Global_17301.f_5599 = 1;
	}
	Global_17301.f_5743 = fVar51;
	Global_17301.f_5745 = unk_0x53C562FD2B9E3AB0();
	unk_0xA3E8E2D0F73E92C5(Global_17301.f_5743);
	if (!Global_17301.f_7896)
	{
		func_340(0);
	}
	Global_17301.f_7896 = 0;
	if (bParam2)
	{
		unk_0x553231E7FC3C570D(10);
	}
	unk_0x553231E7FC3C570D(6);
	unk_0x553231E7FC3C570D(7);
	unk_0x553231E7FC3C570D(9);
	unk_0x553231E7FC3C570D(8);
	if (bParam0)
	{
		func_315(1);
	}
	unk_0x189EEBAACC5D380A();
}

void func_340(int iParam0)
{
	if (!Global_14453.f_1 == 1)
	{
		if (func_130(0))
		{
			func_341(iParam0);
		}
		unk_0x872F1C1F8587CCC7(&Global_2324, 2);
	}
}

void func_341(int iParam0)
{
	if (Global_14615)
	{
		func_342(0, 0);
	}
	if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
	{
		unk_0x872F1C1F8587CCC7(&Global_2324, 16);
	}
	if (unk_0x0DBDCC9C5537E157())
	{
		unk_0xB31CEFB00C146C91(0);
	}
	Global_15756 = 5;
	if (iParam0 == 1)
	{
		unk_0x872F1C1F8587CCC7(&Global_2323, 30);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&Global_2323, 30);
	}
	if (!func_79())
	{
		Global_14453.f_1 = 3;
	}
}

void func_342(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_130(0))
		{
			Global_14615 = 1;
			if (bParam1)
			{
				unk_0x494F5FA1BF017D58(&Global_14390);
			}
			Global_14381 = { Global_14399[Global_14398 /*3*/] };
			unk_0x0D75BB9393CE608D(Global_14381);
		}
	}
	else if (Global_14615 == 1)
	{
		Global_14615 = 0;
		Global_14381 = { Global_14406[Global_14398 /*3*/] };
		if (bParam1)
		{
			unk_0x0D75BB9393CE608D(Global_14390);
		}
		else
		{
			unk_0x0D75BB9393CE608D(Global_14381);
		}
	}
}

float func_343(int iParam0)
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

void func_344(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	unk_0x76CCD673085CBF57(sParam2);
	unk_0x32AD2F36F6EF5A1F(uParam3, uParam4);
	unk_0xD3DA9EADE295C3C5(fParam0, fParam1, 0);
}

void func_345(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x76CCD673085CBF57(sParam2);
	unk_0x6223D539BCD39E76(iParam3);
	unk_0xD3DA9EADE295C3C5(fParam0, fParam1, iParam4);
}

var func_346()
{
	return unk_0x21EA5D4DC72DE119(-1762644250);
}

void func_347(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0x31758B9A51671C43(Global_17301.f_7924[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0x31758B9A51671C43(Global_17301.f_7924[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0xA54B8BFDEBB2AF89(iVar0, iVar1, iVar2, 255);
}

void func_348(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_349(Global_17301.f_5878[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0x31758B9A51671C43(1, &iVar0, &iVar1, &iVar2, &iVar3);
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
			unk_0xA54B8BFDEBB2AF89(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0x31758B9A51671C43(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xA54B8BFDEBB2AF89(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0x31758B9A51671C43(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xA54B8BFDEBB2AF89(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0xA54B8BFDEBB2AF89(155, 155, 155, 255);
		}
		else
		{
			unk_0xA54B8BFDEBB2AF89(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0xA54B8BFDEBB2AF89(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0x31758B9A51671C43(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0xA54B8BFDEBB2AF89(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0xA54B8BFDEBB2AF89(155, 155, 155, 255);
	}
	else
	{
		unk_0xA54B8BFDEBB2AF89(155, 155, 155, 255);
	}
	unk_0x8D95497078BC0E3B(0f, 0.35f);
	unk_0xA2E2179985C59E40(1);
	if (bParam5)
	{
		unk_0x8D95497078BC0E3B(0f, 0.425f);
		unk_0x8F5DFDE59FA7D0D0(4);
	}
	else if (bParam6)
	{
		unk_0x8D95497078BC0E3B(0f, 0.425f);
		unk_0x8F5DFDE59FA7D0D0(6);
	}
	else
	{
		unk_0x8F5DFDE59FA7D0D0(0);
	}
	unk_0xEDC290CB1C56B732(0f, 1f);
	unk_0x0BC5BE26BB7006D2(0);
	unk_0x69A8FC5C344FD5BE(0, 0, 0, 0, 0);
	unk_0xC222AEE842F645C3(0, 0, 0, 0, 0);
}

void func_349(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_350(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_327(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_365(bParam4, bParam8))
	{
		return;
	}
	if (func_351())
	{
		return;
	}
	if (unk_0x02BBA5FDE77816B9())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_268(unk_0x9EB17624F44A8DA4(), 0))
		{
			return;
		}
	}
	if (unk_0xB9D80B12FE4456A5())
	{
		if (unk_0xE59B25D23E4C4B3E() == 0 || unk_0x02BBA5FDE77816B9())
		{
			return;
		}
	}
	if (Global_17301.f_4639 != 0)
	{
		if (unk_0x8CFF76532FEF34D4(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17301.f_4639)
			{
				if (Global_17301.f_4896[iVar1] != 358)
				{
					StringCopy(&(Global_17301.f_4641[iVar1 /*16*/]), unk_0xC9C4B2A22DE54C69(2, Global_17301.f_4896[iVar1], 1), 64);
				}
				else if (Global_17301.f_4909[iVar1] != 32)
				{
					StringCopy(&(Global_17301.f_4641[iVar1 /*16*/]), unk_0x715308393E136EA8(2, Global_17301.f_4909[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_17301.f_4640 = 0;
		}
		if (!Global_17301.f_4640)
		{
			unk_0x008F3E3CC076EA0E(Global_17301.f_5530[iVar0 /*10*/], "CLEAR_ALL");
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(Global_17301.f_5530[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x9499D7329FB840A2((1f - (Global_17301.f_4951 / 100f)));
			unk_0x271AA5469AF471B3();
			if (unk_0xB9D80B12FE4456A5())
			{
				unk_0x008F3E3CC076EA0E(Global_17301.f_5530[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x1869584A8A72FEDD(1);
				unk_0x271AA5469AF471B3();
			}
			iVar1 = 0;
			while (iVar1 < Global_17301.f_4639)
			{
				if (unk_0x8B948C59217A295D(&(Global_17301.f_4834[iVar1 /*4*/])) != unk_0x8B948C59217A295D("PREV"))
				{
					unk_0x008F3E3CC076EA0E(Global_17301.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0xD07D5CD276368D36(iVar1);
					func_303(&(Global_17301.f_4641[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x8B948C59217A295D(&(Global_17301.f_4834[iVar2 /*4*/])) == unk_0x8B948C59217A295D("PREV"))
					{
						func_303(&(Global_17301.f_4641[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17301.f_4883[iVar1] == -1)
					{
						func_31(&(Global_17301.f_4834[iVar1 /*4*/]));
					}
					else
					{
						unk_0x7E099EB35339C80D(&(Global_17301.f_4834[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0xFD1DB5DD208735A3(iParam2, 70);
						}
						else
						{
							unk_0x6223D539BCD39E76(iParam2);
						}
						unk_0x9748595E4799A2CF();
					}
					if (unk_0xB9D80B12FE4456A5())
					{
						if (Global_17301.f_4896[iVar1] != 358 && unk_0xC80D31E4B587871C(Global_17301.f_4922, iVar1))
						{
							unk_0x1869584A8A72FEDD(1);
							unk_0xD07D5CD276368D36(Global_17301.f_4896[iVar1]);
						}
						else
						{
							unk_0x1869584A8A72FEDD(0);
							unk_0xD07D5CD276368D36(358);
						}
					}
					unk_0x271AA5469AF471B3();
				}
				iVar1++;
			}
			if (unk_0x8B948C59217A295D(&(Global_4265799.f_16)) != unk_0x8B948C59217A295D(""))
			{
				unk_0x008F3E3CC076EA0E(Global_17301.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0xD07D5CD276368D36(Global_17301.f_4639);
				func_303(&Global_4265799);
				if (Global_4265799.f_20 == -1)
				{
					func_31(&(Global_4265799.f_16));
				}
				else
				{
					unk_0x7E099EB35339C80D(&(Global_4265799.f_16));
					if (bParam5)
					{
						unk_0xFD1DB5DD208735A3(iParam2, 70);
					}
					else
					{
						unk_0x6223D539BCD39E76(iParam2);
					}
					unk_0x9748595E4799A2CF();
				}
				unk_0x271AA5469AF471B3();
			}
			unk_0x008F3E3CC076EA0E(Global_17301.f_5530[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0xD07D5CD276368D36(0);
			unk_0xD07D5CD276368D36(0);
			unk_0xD07D5CD276368D36(0);
			unk_0xD07D5CD276368D36(80);
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(Global_17301.f_5530[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17301.f_4952)
			{
				unk_0xD07D5CD276368D36(1);
			}
			else
			{
				unk_0xD07D5CD276368D36(0);
			}
			unk_0x271AA5469AF471B3();
			Global_17301.f_4640 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17301.f_4639)
		{
			if (Global_17301.f_4883[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x008F3E3CC076EA0E(Global_17301.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0xD07D5CD276368D36(iVar1);
					unk_0x7E099EB35339C80D(&(Global_17301.f_4834[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0xFD1DB5DD208735A3(iParam2, 70);
					}
					else
					{
						unk_0x6223D539BCD39E76(iParam2);
					}
					unk_0x9748595E4799A2CF();
					unk_0x271AA5469AF471B3();
				}
			}
			iVar1++;
		}
		if (Global_4265799.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x008F3E3CC076EA0E(Global_17301.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0xD07D5CD276368D36(iVar1);
				unk_0x7E099EB35339C80D(&(Global_4265799.f_16));
				if (bParam5)
				{
					unk_0xFD1DB5DD208735A3(iParam2, 70);
				}
				else
				{
					unk_0x6223D539BCD39E76(iParam2);
				}
				unk_0x9748595E4799A2CF();
				unk_0x271AA5469AF471B3();
			}
		}
		unk_0x73509F6FDA1DB386(76, 66);
		unk_0xE7C11B6F2CF973B6(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17301.f_7931)
			{
				unk_0x76F7AB2157E33DD9(15, 0f, -0.0375f);
				Global_17301.f_7931 = 1;
			}
		}
		else if (Global_17301.f_7931)
		{
			unk_0x3B235F54BDEDFCB5(15);
			Global_17301.f_7931 = 0;
		}
		unk_0x189EEBAACC5D380A();
		if (Global_17301.f_4925)
		{
			unk_0x73509F6FDA1DB386(82, 66);
			unk_0xE7C11B6F2CF973B6(0f, 0f, 0f, 0f);
			unk_0x0EB9853DF8BC0D87(Global_17301.f_5530[iVar0 /*10*/], Global_17301.f_4923, Global_17301.f_4924, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x189EEBAACC5D380A();
		}
		else
		{
			unk_0x28E092B1E386EB67(Global_17301.f_5530[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

int func_351()
{
	struct<3> Var0;
	
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	if (func_352())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x494F5FA1BF017D58(&Var0);
		if (Global_14398 == 0)
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

int func_352()
{
	if (unk_0x8F38E94BBF3404CD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_353(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0x31758B9A51671C43(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
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
		
		case 51:
			*iParam5 = 100;
			break;
	}
}

void func_354(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x31758B9A51671C43(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x8F5DFDE59FA7D0D0(0);
	unk_0x8D95497078BC0E3B(0f, 0.35f);
	unk_0x4E55BC7DE7AF6FFC(2);
	unk_0xA54B8BFDEBB2AF89(iVar0, iVar1, iVar2, iVar3);
	unk_0xEDC290CB1C56B732(fParam0, ((Global_17298 + Global_17300) - 0.0046875f));
	unk_0x0BC5BE26BB7006D2(0);
	unk_0x69A8FC5C344FD5BE(0, 0, 0, 0, 0);
	unk_0xC222AEE842F645C3(0, 0, 0, 0, 0);
}

void func_355(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x76CCD673085CBF57(sParam2);
	unk_0x6223D539BCD39E76(uParam3);
	unk_0x6223D539BCD39E76(uParam4);
	unk_0xD3DA9EADE295C3C5(fParam0, fParam1, 0);
}

float func_356(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x8C1C362CA8299475(sParam0))
	{
		if (unk_0x8B948C59217A295D(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_357();
	unk_0x0792909D8327DAEA(sParam0);
	unk_0x6223D539BCD39E76(uParam1);
	unk_0x6223D539BCD39E76(uParam2);
	return unk_0xF2A1AF58CC57C564(1);
}

void func_357()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x31758B9A51671C43(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17301.f_7906)
	{
		iVar0 = Global_17301.f_7902;
		iVar1 = Global_17301.f_7903;
		iVar2 = Global_17301.f_7904;
		iVar3 = Global_17301.f_7905;
	}
	unk_0x8F5DFDE59FA7D0D0(0);
	unk_0x8D95497078BC0E3B(0f, 0.35f);
	unk_0xA54B8BFDEBB2AF89(iVar0, iVar1, iVar2, iVar3);
	unk_0xEDC290CB1C56B732((Global_17298 + 0.0046875f), ((Global_17298 + Global_17300) - 0.0046875f));
	unk_0x0BC5BE26BB7006D2(0);
	unk_0x69A8FC5C344FD5BE(0, 0, 0, 0, 0);
	unk_0xC222AEE842F645C3(0, 0, 0, 0, 0);
}

void func_358(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x09C2CBFA4CD804AC((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_359(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!unk_0xAB019B170BF1309C(&(Global_17301.f_6719[iParam0 /*16*/])))
	{
		if (unk_0x8B948C59217A295D(&(Global_17301.f_6719[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_276(unk_0x9EB17624F44A8DA4()) };
			if (unk_0xE009D69C861D7648(&Var19, &uVar3))
			{
				return func_360(&uVar3);
			}
		}
		else
		{
			return func_360(&(Global_17301.f_6719[iParam0 /*16*/]));
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
		
		case 51:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
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

var func_360(var uParam0)
{
	return uParam0;
}

char* func_361(int iParam0)
{
	var uVar0;
	struct<13> Var16;
	
	if (!unk_0xAB019B170BF1309C(&(Global_17301.f_5886[iParam0 /*16*/])))
	{
		if (unk_0x8B948C59217A295D(&(Global_17301.f_5886[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_276(unk_0x9EB17624F44A8DA4()) };
			unk_0xE009D69C861D7648(&Var16, &uVar0);
			return func_360(&uVar0);
		}
		else
		{
			return func_360(&(Global_17301.f_5886[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_362()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x5113D2C928A121B2(&iVar0, &iVar1);
	fVar2 = (unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_363(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	
	StringCopy(&cVar0, func_361(iParam0), 64);
	StringCopy(&cVar16, func_359(iParam0, bParam1), 64);
	if (unk_0x8B948C59217A295D(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			unk_0x5113D2C928A121B2(&iVar32, &iVar33);
			fVar35 = unk_0xB6936205ED728A9D(0);
			if (func_362())
			{
				iVar32 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar33) * fVar35));
			}
			fVar36 = (unk_0xBBDA792448DB5A89(iVar32) / unk_0xBBDA792448DB5A89(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_362())
			{
				fVar34 = 1f;
			}
			if (unk_0x8F38E94BBF3404CD(joaat("director_mode")) > 0)
			{
				unk_0x9A72C8F89A53C2D1(&iVar32, &iVar33);
			}
			iVar32 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar32) / fVar34));
			iVar33 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar33) / fVar34));
		}
		else
		{
			unk_0x9A72C8F89A53C2D1(&iVar32, &iVar33);
		}
		Var37 = { unk_0x62415D7FD7ADB9EE(&cVar0, &cVar16) };
		Var37.f_0 = (Var37.f_0 * (func_364(iParam0) / fVar34));
		Var37.f_1 = (Var37.f_1 * (func_364(iParam0) / fVar34));
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
		if (iParam0 == 29 && unk_0x8B948C59217A295D(&(Global_17301.f_6719[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var37.f_0 = 106f;
			Var37.f_1 = 106f;
		}
		*fParam3 = ((Var37.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var37.f_1 / IntToFloat(iVar33)) / (Var37.f_0 / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x41226DC6540EC9AA() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17300)
			{
				*fParam4 = (*fParam4 * (Global_17300 / *fParam3));
				*fParam3 = Global_17300;
			}
		}
		return 1;
	}
	return 0;
}

float func_364(int iParam0)
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

int func_365(bool bParam0, bool bParam1)
{
	if (Global_2436181.f_1777.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x9F7B586A14398C40() || (func_82(8, -1) && func_366() != 64)) || (unk_0x8B7838D25C063186() != 0 && !bParam1)) || (unk_0x1E06D00B67177A18() && !bParam0)) || unk_0x9A4EAADB45DA07DB()) || Global_71116) || Global_17301.f_7930) || unk_0x08D525BE62A22AE0()) || Global_92885.f_1377)
	{
		return 0;
	}
	return 1;
}

int func_366()
{
	return Global_1312789;
}

void func_367()
{
	if (iLocal_152 == 0)
	{
		if (!bLocal_165)
		{
			func_368("PAH_QUICK_D1", 0, 0);
		}
	}
	else if (iLocal_152 == iLocal_153)
	{
		if (!bLocal_166)
		{
			func_368("PAH_QUICK_D2", 0, 0);
		}
		else if (!bLocal_167)
		{
			func_368("PAH_QUICK_D3", 0, 0);
		}
	}
	else if (!bLocal_166)
	{
		func_368("PAH_QUICK_D2", 0, 0);
	}
	else if (!uLocal_168[(iLocal_152 - 1)])
	{
		func_368("PAH_QUICK_D3", 0, 0);
	}
}

void func_368(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_17301.f_4562), sParam0, 16);
	Global_17301.f_4632 = 0;
	Global_17301.f_4633 = 0;
	Global_17301.f_4634 = 0;
	Global_17301.f_4635 = 0;
	Global_17301.f_4636 = iParam1;
	Global_17301.f_4637 = unk_0x53C562FD2B9E3AB0();
	Global_17301.f_4638 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17301.f_4566[iVar0] = 0;
		iVar0++;
	}
}

void func_369()
{
	bool bVar0;
	
	bVar0 = true;
	if ((((unk_0x0F30C1F1717A6437() || unk_0x04D7390E1D7464B7()) || unk_0x08D525BE62A22AE0()) || unk_0x02BBA5FDE77816B9()) || Global_92885.f_1377)
	{
		bVar0 = false;
	}
	if ((bVar0 && unk_0xE8C126B7ADBB9D63(2, 201)) || (bVar0 && Local_176.f_6))
	{
		if (!func_408())
		{
			if (iLocal_152 == 0)
			{
				if (func_338())
				{
					iLocal_158 = -1;
					iLocal_157 = 1;
					iLocal_156 = 1;
				}
			}
			else if (iLocal_152 == iLocal_153)
			{
				if (func_333())
				{
					if (func_329())
					{
						iLocal_158 = 50;
						iLocal_157 = 1;
						iLocal_156 = 1;
					}
				}
			}
			else if (func_333())
			{
				if (func_332(iLocal_159[(iLocal_152 - 1)]))
				{
					iLocal_157 = 1;
					iLocal_156 = 1;
					iLocal_158 = iLocal_159[(iLocal_152 - 1)];
				}
			}
		}
		else
		{
			iLocal_174 = 1;
		}
	}
	else if (!bVar0)
	{
	}
	else if (unk_0xE8C126B7ADBB9D63(2, 202) || Local_176.f_7)
	{
		iLocal_157 = 1;
	}
	else if ((unk_0xE8C126B7ADBB9D63(2, 188) && func_370(&uLocal_175, &(Local_176.f_4), 1)) || (Local_176.f_8 && func_370(&uLocal_175, &(Local_176.f_4), 1)))
	{
		if (Local_176.f_4 > 0)
		{
			iLocal_152 = (iLocal_152 - 1);
			if (iLocal_152 < 0)
			{
				iLocal_152 = (iLocal_151 - 1);
			}
			func_371(iLocal_152, 1, 1);
		}
	}
	else if ((unk_0xE8C126B7ADBB9D63(2, 187) && func_370(&uLocal_175, &(Local_176.f_4), 1)) || (Local_176.f_9 && func_370(&uLocal_175, &(Local_176.f_4), 1)))
	{
		if (Local_176.f_4 < 0)
		{
			iLocal_152++;
			if (iLocal_152 > (iLocal_151 - 1))
			{
				iLocal_152 = 0;
			}
			func_371(iLocal_152, 1, 1);
		}
	}
	unk_0x553231E7FC3C570D(7);
	unk_0x553231E7FC3C570D(8);
	unk_0x553231E7FC3C570D(9);
}

int func_370(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 150;
	if (bParam2)
	{
		if (((unk_0x5A632962B08A1872(2, 188) || unk_0x869308DF4F5FB0C3(2, 219) < -0.3f) || unk_0x5A632962B08A1872(2, 241)) || unk_0xE8C126B7ADBB9D63(2, 188))
		{
			if (unk_0x5A632962B08A1872(2, 241))
			{
				iVar1 = 100;
			}
			if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(*uParam0, unk_0xD1952A425B78FFC0())) > iVar1)
			{
				*uParam0 = unk_0xD1952A425B78FFC0();
				iVar0 = 1;
				*uParam1 = 1;
			}
		}
		if (((unk_0x5A632962B08A1872(2, 187) || unk_0x869308DF4F5FB0C3(2, 219) > 0.3f) || unk_0x5A632962B08A1872(2, 242)) || unk_0xE8C126B7ADBB9D63(2, 187))
		{
			if (unk_0x5A632962B08A1872(2, 242))
			{
				iVar1 = 100;
			}
			if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(*uParam0, unk_0xD1952A425B78FFC0())) > iVar1)
			{
				*uParam0 = unk_0xD1952A425B78FFC0();
				iVar0 = 1;
				*uParam1 = -1;
			}
		}
	}
	else
	{
		if ((unk_0x5A632962B08A1872(2, 190) || unk_0x869308DF4F5FB0C3(2, 218) > 0.3f) || unk_0x58F436C557A0FD7A(2, 201))
		{
			if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(*uParam0, unk_0xD1952A425B78FFC0())) > iVar1)
			{
				*uParam0 = unk_0xD1952A425B78FFC0();
				iVar0 = 1;
				*uParam1 = 1;
			}
		}
		if (unk_0x5A632962B08A1872(2, 189) || unk_0x869308DF4F5FB0C3(2, 218) < -0.3f)
		{
			if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(*uParam0, unk_0xD1952A425B78FFC0())) > iVar1)
			{
				*uParam0 = unk_0xD1952A425B78FFC0();
				iVar0 = 1;
				*uParam1 = -1;
			}
		}
	}
	return iVar0;
}

void func_371(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17301.f_5606 = iParam0;
	Global_17301.f_5741 = iParam2;
	if (Global_17301.f_5606 < Global_17301.f_5605)
	{
		Global_17301.f_5605 = Global_17301.f_5606;
	}
	else if ((Global_17301.f_5599 && Global_17301.f_5606 > Global_17301.f_5607) || (!Global_17301.f_5599 && Global_17301.f_5606 >= (Global_17301.f_5605 + Global_17301.f_5095)))
	{
		iVar0 = Global_17301.f_5605;
		while (iVar0 <= Global_17301.f_5606)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_17301.f_4959[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17301.f_5095 && Global_17301.f_5605 < 128)
		{
			Global_17301.f_5605++;
			iVar1 = 0;
			iVar0 = Global_17301.f_5605;
			while (iVar0 <= Global_17301.f_5606)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_17301.f_4959[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17301.f_5598 = 0;
	Global_17301.f_5599 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17301.f_4562), "", 16);
		StringCopy(&(Global_4265799.f_21), "", 16);
	}
}

void func_372()
{
	struct<4> Var0;
	char* sVar4;
	int iVar5;
	bool bVar6;
	
	func_386(0);
	func_385("PAH_QUICK_1");
	func_384(1, 2, 1, 1, 1);
	func_383(1, 1, 0, 0, 0);
	iLocal_151 = 0;
	Var0 = { func_382(func_211(5, -1)) };
	sVar4 = func_381(&Var0);
	bLocal_165 = func_338();
	bLocal_166 = func_333();
	func_377(iLocal_151, sVar4, 0, bLocal_165, 0, 0);
	iLocal_151++;
	iVar5 = 0;
	while (iVar5 < 5)
	{
		if (func_376(iVar5) > 0)
		{
			if (func_174(func_376(iVar5)))
			{
				iLocal_159[iVar5] = func_376(iVar5);
				uLocal_168[iVar5] = func_332(iLocal_159[iVar5]);
				if (bLocal_166)
				{
					bVar6 = uLocal_168[iVar5];
				}
				else
				{
					bVar6 = false;
				}
				func_377(iLocal_151, func_375(iLocal_159[iVar5]), 0, bVar6, 0, 0);
				iLocal_151++;
			}
		}
		iVar5++;
	}
	bLocal_167 = (func_329() && bLocal_166);
	if (func_307(unk_0x9EB17624F44A8DA4()))
	{
		func_377(iLocal_151, func_374(func_308(unk_0x9EB17624F44A8DA4())), 0, bLocal_167, 0, 0);
		iLocal_153 = iLocal_151;
		iLocal_151++;
	}
	func_373(201, "ITEM_SELECT", -1, 0);
	func_373(202, "ITEM_BACK", -1, 0);
	func_371(iLocal_152, 1, 1);
}

void func_373(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0xC9C4B2A22DE54C69(2, iParam0, 1);
	if (Global_17301.f_4639 >= 12)
	{
		StringCopy(&Global_4265799, sVar0, 64);
		StringCopy(&(Global_4265799.f_16), sParam1, 16);
		Global_4265799.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0x872F1C1F8587CCC7(&(Global_17301.f_4922), Global_17301.f_4639);
	}
	StringCopy(&(Global_17301.f_4641[Global_17301.f_4639 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17301.f_4834[Global_17301.f_4639 /*4*/]), sParam1, 16);
	Global_17301.f_4883[Global_17301.f_4639] = iParam2;
	Global_17301.f_4896[Global_17301.f_4639] = iParam0;
	Global_17301.f_4909[Global_17301.f_4639] = 32;
	Global_17301.f_4639++;
}

char* func_374(int iParam0)
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

char* func_375(int iParam0)
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

int func_376(int iParam0)
{
	if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_84[iParam0 /*3*/] != 0)
	{
		return Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_84[iParam0 /*3*/];
	}
	return 0;
}

void func_377(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17301.f_5088 > iParam0)
	{
		return;
	}
	if (Global_17301.f_5088 >= 128)
	{
		return;
	}
	if (Global_17301.f_5090 >= 256)
	{
		return;
	}
	if (Global_17301.f_5610 < Global_17301.f_5608)
	{
		return;
	}
	if (Global_17301.f_5088 != iParam0)
	{
		Global_17301.f_5088 = iParam0;
		Global_17301.f_5089 = 0;
	}
	iVar0 = Global_17301.f_4926[Global_17301.f_5089];
	if (iVar0 != 1)
	{
		while (Global_17301.f_5089 < 4 && iVar0 != 1)
		{
			Global_17301.f_5089++;
			iVar0 = Global_17301.f_4926[Global_17301.f_5089];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17301.f_73[Global_17301.f_5090 /*6*/]), sParam1, 24);
	if (!unk_0xAB019B170BF1309C(sParam1) && !unk_0xA1800C71952C596F(sParam1))
	{
	}
	Global_17301.f_1610[Global_17301.f_5090] = bParam3;
	Global_17301.f_1867[Global_17301.f_5090] = iParam4;
	Global_17301.f_5090++;
	if (!bParam3)
	{
		func_380(Global_17301.f_5088, 1);
	}
	else
	{
		func_380(Global_17301.f_5088, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_379(&(Global_17301.f_73[Global_17301.f_5090 /*6*/]));
		if (Global_17301.f_4945[Global_17301.f_5089])
		{
			func_363(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17301.f_4938[Global_17301.f_5089])
		{
			Global_17301.f_4938[Global_17301.f_5089] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_378(&(Global_17301.f_73[Global_17301.f_5090 /*6*/]));
			if (fVar4 > Global_17301.f_5612[iParam0])
			{
				Global_17301.f_5612[iParam0] = fVar4;
			}
		}
	}
	unk_0x872F1C1F8587CCC7(&(Global_17301.f_4959[iParam0]), Global_17301.f_5089);
	Global_17301.f_5089++;
	Global_17301.f_5611 = 1;
	Global_17301.f_5609 = (Global_17301.f_5090 - 1);
	Global_17301.f_5610 = 0;
	Global_17301.f_5608 = iParam2;
}

float func_378(char* sParam0)
{
	if (!unk_0xA1800C71952C596F(sParam0))
	{
	}
	return unk_0xAF6F79C616D36B6E(0.35f, 0);
}

float func_379(char* sParam0)
{
	if (!unk_0x8C1C362CA8299475(uParam0))
	{
		if (unk_0x8B948C59217A295D(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_348(0, 1, 0, 0, 0, 0, 0);
	unk_0x0792909D8327DAEA(sParam0);
	return unk_0xF2A1AF58CC57C564(1);
}

void func_380(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 32f));
	if (bParam1)
	{
		unk_0x872F1C1F8587CCC7(&(Global_17301.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_17301.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
}

var func_381(var uParam0)
{
	return uParam0;
}

struct<4> func_382(int iParam0)
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

void func_383(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17301.f_4926[0] = iParam0;
	Global_17301.f_4926[1] = iParam1;
	Global_17301.f_4926[2] = iParam2;
	Global_17301.f_4926[3] = iParam3;
	Global_17301.f_4926[4] = iParam4;
	Global_17301.f_5096 = 0;
	if (iParam0 != 0)
	{
		Global_17301.f_5096++;
	}
	if (iParam1 != 0)
	{
		Global_17301.f_5096++;
	}
	if (iParam2 != 0)
	{
		Global_17301.f_5096++;
	}
	if (iParam3 != 0)
	{
		Global_17301.f_5096++;
	}
	if (iParam4 != 0)
	{
		Global_17301.f_5096++;
	}
}

void func_384(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17301.f_4953[0] = iParam0;
	Global_17301.f_4953[1] = iParam1;
	Global_17301.f_4953[2] = iParam2;
	Global_17301.f_4953[3] = iParam3;
	Global_17301.f_4953[4] = iParam4;
}

void func_385(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_17301.f_1), sParam0, 16);
	Global_17301.f_68 = 0;
	Global_17301.f_69 = 0;
	Global_17301.f_70 = 0;
	Global_17301.f_71 = 0;
	Global_17301.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17301.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_386(bool bParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_17301.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17301.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2457366[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_17301.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17301.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17301.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17301.f_4959[iVar0] = 0;
		Global_17301.f_5097[iVar0] = 0;
		Global_17301.f_5226[iVar0] = 0;
		Global_17301.f_5746[iVar0] = 0f;
		Global_17301.f_5355[iVar0] = 0;
		Global_17301.f_5612[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17301.f_4926[iVar0] = 0;
		Global_17301.f_4938[iVar0] = 0f;
		Global_17301.f_4932[iVar0] = -1f;
		Global_17301.f_4945[iVar0] = 0;
		Global_17301.f_4953[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17301.f_4834[iVar0 /*4*/]), "", 16);
		Global_17301.f_4883[iVar0] = -1;
		Global_17301.f_4896[iVar0] = 358;
		Global_17301.f_4909[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 52)
	{
		StringCopy(&(Global_17301.f_5886[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17301.f_6719[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_4265799.f_16), "", 16);
	Global_4265799.f_20 = -1;
	Global_17301 = 0;
	Global_17301.f_5088 = 0;
	Global_17301.f_5089 = 0;
	Global_17301.f_5090 = 0;
	Global_17301.f_5092 = 0;
	Global_17301.f_5093 = 0;
	Global_17301.f_5094 = 0;
	Global_17301.f_5091 = 0;
	Global_17301.f_5741 = 0;
	Global_17301.f_5606 = 0;
	Global_17301.f_5605 = 0;
	Global_17301.f_5607 = 0;
	StringCopy(&(Global_17301.f_4562), "", 16);
	Global_17301.f_4632 = 0;
	Global_17301.f_4633 = 0;
	Global_17301.f_4634 = 0;
	Global_17301.f_4635 = 0;
	Global_17301.f_4636 = 0;
	Global_17301.f_4637 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17301.f_4566[iVar0] = 0;
		iVar0++;
	}
	Global_17301.f_4638 = 0;
	StringCopy(&(Global_4265799.f_21), "", 16);
	Global_4265799.f_61 = 0;
	Global_4265799.f_62 = 0;
	Global_4265799.f_63 = 0;
	Global_4265799.f_64 = 0;
	Global_4265799.f_65 = 0;
	Global_4265799.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4265799.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4265799.f_67 = 0;
	StringCopy(&(Global_17301.f_1), "", 16);
	Global_17301.f_4944 = 0f;
	Global_17301.f_68 = 0;
	Global_17301.f_69 = 0;
	Global_17301.f_70 = 0;
	Global_17301.f_71 = 0;
	Global_17301.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17301.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17301.f_5611 = 0;
	Global_17301.f_5610 = 0;
	Global_17301.f_5608 = 0;
	Global_17301.f_5609 = 0;
	Global_17301.f_4639 = 0;
	Global_17301.f_4640 = 0;
	Global_17301.f_5095 = 10;
	Global_17301.f_5096 = 0;
	Global_17301.f_5743 = 0f;
	Global_17301.f_5744 = 0f;
	Global_17301.f_5598 = 0;
	Global_17301.f_5599 = 0;
	Global_17301.f_5600 = 0f;
	Global_17301.f_5601 = 0;
	Global_17301.f_5603 = 0;
	Global_17301.f_5602 = 0;
	Global_17301.f_5604 = 0;
	Global_17301.f_7927 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17301.f_5875[iVar0] = -1;
		Global_17301.f_5878[iVar0] = -1;
		iVar0++;
	}
	Global_17301.f_4951 = 0f;
	Global_17301.f_4922 = 0;
	Global_17301.f_4952 = 0;
	iVar0 = 0;
	while (iVar0 < Global_17301.f_5881)
	{
		Global_17301.f_5881[iVar0] = 0;
		iVar0++;
	}
	Global_17301.f_7906 = 0;
	Global_17301.f_7901 = 0;
	Global_17301.f_7911 = 0;
	Global_17301.f_7916 = 0;
	Global_17301.f_7921 = 0;
	Global_17301.f_7923 = 0;
	Global_17301.f_7929 = 0;
	Global_17298 = 0.05f;
	Global_17299 = 0.05f;
	Global_17300 = 0.225f;
	fVar2 = unk_0xB6936205ED728A9D(0);
	if (bParam0)
	{
		Global_17300 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_17300 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_17300 = 0.225f;
	}
}

bool func_387(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_327(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17301.f_5505[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xAB019B170BF1309C(&(Global_17301.f_5505[iVar0 /*4*/])))
	{
		unk_0xBCBC53983EC3B1BA(&(Global_17301.f_5505[iVar0 /*4*/]), 9);
		Global_17301.f_5498[iVar0] = 1;
		if (!unk_0x1A0FBC430E1424B4(&(Global_17301.f_5505[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0x128A5DCCD09CCA17("CommonMenu", 0);
	Global_17301.f_5484[iVar0] = 1;
	if (!unk_0xA51ADD51711B4A15("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x128A5DCCD09CCA17("MPShopSale", 0);
		Global_17301.f_5491[iVar0] = 1;
		if (!unk_0xA51ADD51711B4A15("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_17301.f_5530[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_388(&(Global_17301.f_5530[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_388(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x34D11AB5BA7922C2(*uParam0))
			{
				*uParam0 = unk_0xD704C81492296A37(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x34D11AB5BA7922C2(*uParam0))
					{
						uParam0->f_8 = unk_0x53C562FD2B9E3AB0();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x53C562FD2B9E3AB0();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x34D11AB5BA7922C2(*uParam0))
			{
				uParam0->f_8 = unk_0x53C562FD2B9E3AB0();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x34D11AB5BA7922C2(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_389(var uParam0)
{
	func_398(uParam0, &(uParam0->f_1), &(uParam0->f_2), &(uParam0->f_3), 0);
	uParam0->f_6 = (unk_0xE8C126B7ADBB9D63(2, 201) || unk_0x4CD14B4B1E8BD8BA(2, 201));
	uParam0->f_7 = (unk_0xE8C126B7ADBB9D63(2, 202) || unk_0x4CD14B4B1E8BD8BA(2, 202));
	uParam0->f_8 = (uParam0->f_1 < -64 || unk_0xE8C126B7ADBB9D63(2, 188));
	uParam0->f_9 = (uParam0->f_1 > 64 || unk_0xE8C126B7ADBB9D63(2, 187));
	if (((((func_387(0, -1, 0) && unk_0x8B7838D25C063186() == 0) && !unk_0x04D7390E1D7464B7()) && !unk_0x08D525BE62A22AE0()) && !unk_0x02BBA5FDE77816B9()) && !Global_92885.f_1377)
	{
		if (unk_0xB9D80B12FE4456A5() && !unk_0x02BBA5FDE77816B9())
		{
			if (unk_0x2E4EC2FA6A038490(2))
			{
				unk_0x4FB260623DD93924(0, 1, 1);
				unk_0x4FB260623DD93924(0, 2, 1);
				unk_0x4FB260623DD93924(2, 200, 1);
				unk_0x2DB625A7D089C175(0, 237, 1);
				unk_0x2DB625A7D089C175(0, 238, 1);
				unk_0x2DB625A7D089C175(0, 241, 1);
				unk_0x2DB625A7D089C175(0, 242, 1);
				if ((Global_4265875 == -1 || Global_4265875 == -4) || Global_4265875 == -6)
				{
					unk_0x2DB625A7D089C175(1, 1, 1);
					unk_0x2DB625A7D089C175(1, 2, 1);
				}
				else
				{
					unk_0x4FB260623DD93924(1, 1, 1);
					unk_0x4FB260623DD93924(1, 2, 1);
				}
				func_395(0, 0, 0, 1);
				func_394(0, -1, 1);
			}
			if (func_393())
			{
				if (Global_4265875 == iLocal_152)
				{
					uParam0->f_6 = 1;
				}
				else
				{
					iLocal_152 = Global_4265875;
					func_371(iLocal_152, 1, 1);
				}
			}
			if (func_392())
			{
				uParam0->f_7 = 1;
			}
			if (func_391(0, 0, 0))
			{
				uParam0->f_8 = 1;
			}
			if (func_390(0, 0, 0))
			{
				uParam0->f_9 = 1;
			}
		}
	}
}

int func_390(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x4C4813CAAD70E814(2))
	{
		if (Global_4265875 == -3)
		{
			if ((unk_0xF2B58F79D29425B4(2, 237) && iParam0) || unk_0xE8C126B7ADBB9D63(2, 237))
			{
				return 1;
			}
		}
		if (iParam2 == 0)
		{
			if (unk_0xF2B58F79D29425B4(2, 242) || (unk_0x5A632962B08A1872(2, 242) && iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_391(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x4C4813CAAD70E814(2))
	{
		if (Global_4265875 == -2)
		{
			if ((unk_0xF2B58F79D29425B4(2, 237) && iParam0) || unk_0xE8C126B7ADBB9D63(2, 237))
			{
				return 1;
			}
		}
		if (iParam2 == 0)
		{
			if (unk_0xF2B58F79D29425B4(2, 241) || (unk_0x5A632962B08A1872(2, 241) && iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_392()
{
	if (unk_0x4C4813CAAD70E814(2))
	{
		if (unk_0xE8C126B7ADBB9D63(2, 238))
		{
			return 1;
		}
	}
	return 0;
}

int func_393()
{
	if (unk_0x4C4813CAAD70E814(2))
	{
		if (Global_4265875 > -1)
		{
			if (unk_0xE8C126B7ADBB9D63(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_394(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0x4C4813CAAD70E814(2))
	{
		return 0;
	}
	if (unk_0x0F30C1F1717A6437() || unk_0x08D525BE62A22AE0())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0x15F5D3F996CB934F();
	}
	if (Global_4265875 == -6)
	{
		unk_0x045FE6847C82E3A6(4);
		if (iParam0 && unk_0xF2B58F79D29425B4(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4265875 = -1;
			return 0;
		}
	}
	if (((Global_4265875 > -1 || Global_4265875 == -3) || Global_4265875 == -2) || unk_0x1B3327E02DE17064())
	{
		unk_0x045FE6847C82E3A6(1);
		return 0;
	}
	if (Global_4265875 == -1 && iParam0)
	{
		if (unk_0xF2B58F79D29425B4(2, 237))
		{
			unk_0x045FE6847C82E3A6(4);
			Global_4265875 = -6;
			return 1;
		}
		else
		{
			unk_0x045FE6847C82E3A6(3);
			return 0;
		}
	}
	unk_0x045FE6847C82E3A6(1);
	return 0;
}

void func_395(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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
	if (!unk_0x4C4813CAAD70E814(2))
	{
		Global_4265875 = -1;
		return;
	}
	unk_0x1791FD56B0FECC40(1);
	fVar0 = Global_17298;
	fVar2 = (fVar0 + Global_17300);
	fVar3 = Global_17301.f_5600;
	fVar1 = (Global_17301.f_5600 - (IntToFloat(Global_17301.f_5602) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_17301.f_5602 < 1)
	{
		fVar1 = (Global_17301.f_5600 - 0.034722f);
	}
	unk_0x73509F6FDA1DB386(76, 84);
	unk_0xE7C11B6F2CF973B6(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0xB3BC3A562B00E8B9(fVar0, fVar1, &fVar0, &fVar1);
	unk_0xB3BC3A562B00E8B9(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x189EEBAACC5D380A();
	func_397();
	if (Global_4265875 == -6)
	{
		return;
	}
	Global_4265875 = -1;
	fVar7 = Global_4265869;
	fVar8 = Global_4265870;
	if (Global_17301.f_5603 > Global_17301.f_5602)
	{
		if (((Global_4265869 >= fVar0 && Global_4265869 <= fVar2) && Global_4265870 >= fVar3) && Global_4265870 < (fVar3 + fVar6))
		{
			Global_4265875 = -2;
			if (bParam3)
			{
				func_396(0);
			}
			return;
		}
		if (((Global_4265869 >= fVar0 && Global_4265869 <= fVar2) && Global_4265870 >= (fVar3 + fVar6)) && Global_4265870 < (fVar3 + 0.034722f))
		{
			Global_4265875 = -3;
			if (bParam3)
			{
				func_396(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = unk_0xF34EE736CF047844((fVar9 / 0.034722f));
		if (Global_17301.f_5603 == -1)
		{
			Global_4265875 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_17301.f_5602);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0x73509F6FDA1DB386(76, 84);
				unk_0xE7C11B6F2CF973B6(-0.05f, -0.05f, 0f, 0f);
				func_358(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_17300, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0x189EEBAACC5D380A();
			}
		}
		Global_4265875 = Global_17301.f_7552[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4265875 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4265875 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4265875 = -4;
		return;
	}
	Global_4265875 = -1;
}

void func_396(bool bParam0)
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
	fVar0 = Global_17298;
	fVar1 = Global_17301.f_5600;
	unk_0x73509F6FDA1DB386(76, 84);
	unk_0xE7C11B6F2CF973B6(-0.05f, -0.05f, 0f, 0f);
	if (Global_4265875 == -2)
	{
		func_358(fVar0, fVar1, Global_17300, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4265875 == -3)
	{
		func_358(fVar0, (fVar1 + fVar2), Global_17300, fVar2, 255, 255, 255, iVar3);
	}
	unk_0x189EEBAACC5D380A();
}

void func_397()
{
	Global_4265871 = Global_4265869;
	Global_4265872 = Global_4265870;
	Global_4265869 = unk_0x84326F8D8D6875EC(2, 239);
	Global_4265870 = unk_0x84326F8D8D6875EC(2, 240);
	Global_4265873 = (Global_4265869 - Global_4265871);
	Global_4265874 = (Global_4265870 - Global_4265872);
}

void func_398(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x869308DF4F5FB0C3(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x869308DF4F5FB0C3(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x869308DF4F5FB0C3(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x869308DF4F5FB0C3(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x84326F8D8D6875EC(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0x84326F8D8D6875EC(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x84326F8D8D6875EC(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0x84326F8D8D6875EC(2, 221) * 127f));
		}
	}
}

void func_399()
{
	int iVar0;
	
	iVar0 = iLocal_1227;
	if (unk_0x191BE1BC8F26F3C1(iVar0, 0))
	{
		return;
	}
	if (unk_0xA0BF73C5030D3F60(iVar0))
	{
		unk_0xC615A122CFA6DBA6(iVar0, 0);
		unk_0xA96927E135958D05(iVar0, 1);
		unk_0x4BEFCD5DAE410A90(iVar0, 4);
		if (unk_0x37956F2B588E40E6(iVar0) != 0 && unk_0x37956F2B588E40E6(iVar0) != 1)
		{
			unk_0x0EE72DB1CD8A3B86(&iLocal_316, 15);
		}
	}
}

int func_400()
{
	if (((((Local_186.f_27 && func_409()) && (!func_402(1) || func_336())) && ((func_309() || func_307(unk_0x9EB17624F44A8DA4())) || func_338())) && func_401()) && (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0) && unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), 1785177548) != 1))
	{
		return 1;
	}
	return 0;
}

int func_401()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	float fVar9;
	
	if (iLocal_1230)
	{
		return iLocal_1231;
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_1227) && !unk_0x191BE1BC8F26F3C1(iLocal_1227, 0))
	{
		iVar1 = unk_0x95EC8AE7E4F33F6E(iLocal_1227) + 1;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!unk_0x8EE3A848975DDF21(iLocal_1227, (iVar0 - 1), 0))
			{
				iVar2 = unk_0x317536BCEA8FA6B0(iLocal_1227, (iVar0 - 1), 0);
				if (!unk_0x3AB6A1A9084FB0A4(iVar2))
				{
					if (unk_0x1417A5CC924DE120(iVar2))
					{
						if (!func_243(unk_0xDF35170AEEFB473B(iVar2)))
						{
							iLocal_1231 = 0;
							iLocal_1230 = 1;
							return 0;
						}
					}
					else if (unk_0x9761C10D57B68069(iVar2))
					{
						if (!unk_0xCB234F3DD6FF9368(iVar2, 1))
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
			if (!iVar4 == unk_0x9EB17624F44A8DA4())
			{
				if (func_131(iVar4, 1, 1))
				{
					iVar5 = unk_0x25D049AAC4603E65(iVar4);
					if (unk_0x6ADD12BF4D6D2587(iVar5) && !unk_0x191BE1BC8F26F3C1(iVar5, 0))
					{
						Var6 = { func_167(iVar4) };
						fVar9 = unk_0x2A488C176D52CCA5(Var6, unk_0xB3328BA8976B416C(iLocal_1227, 1));
						if (fVar9 < 20f)
						{
							if (unk_0xC6757F745366DB47(iVar5) == iLocal_1227)
							{
								if (!func_243(iVar4))
								{
									iLocal_1231 = 0;
									iLocal_1230 = 1;
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
	iLocal_1231 = 1;
	iLocal_1230 = 1;
	return 1;
}

bool func_402(bool bParam0)
{
	return func_403(unk_0x9EB17624F44A8DA4(), bParam0);
}

bool func_403(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_337(iParam0))
		{
			return 0;
		}
	}
	return Global_1627537[iParam0 /*532*/].f_11 != func_4();
}

void func_404()
{
	int iVar0;
	
	if (!unk_0xC80D31E4B587871C(iLocal_316, 13))
	{
		if (!unk_0xF491DD47B88AA84E())
		{
			iVar0 = func_7(1187, -1, 0);
			if (!unk_0xC80D31E4B587871C(iVar0, 22) || !unk_0xC80D31E4B587871C(iVar0, 23))
			{
				func_405("HTX_HELP2", -1);
				if (!unk_0xC80D31E4B587871C(iVar0, 22))
				{
					unk_0x872F1C1F8587CCC7(&iVar0, 22);
				}
				else
				{
					unk_0x872F1C1F8587CCC7(&iVar0, 23);
				}
				func_236(1187, iVar0, -1, 1, 0);
				unk_0x872F1C1F8587CCC7(&iLocal_316, 13);
			}
			else
			{
				unk_0x872F1C1F8587CCC7(&iLocal_316, 13);
			}
		}
	}
}

void func_405(char* sParam0, int iParam1)
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, 1, iParam1);
}

void func_406(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<6> Var0;
	
	Var0.f_0 = -297829514;
	Var0.f_1 = unk_0x9EB17624F44A8DA4();
	Var0.f_2 = iParam1;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam0;
	Var0.f_3 = iParam2;
	if (!iParam0 == 0)
	{
		unk_0x5A26F0BDEE9F8260(1, &Var0, 6, iParam0);
	}
}

int func_407(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar1 = iLocal_1227;
	if (unk_0x191BE1BC8F26F3C1(iVar1, 0))
	{
		return 0;
	}
	iVar2 = unk_0xF82225DEA5272C6B(unk_0x82FF3DFBC3965CC0(iVar1));
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		iVar5 = (iVar3 - 1);
		if (!unk_0x8EE3A848975DDF21(iVar1, iVar5, 0))
		{
			iVar4 = unk_0xDF35170AEEFB473B(unk_0x317536BCEA8FA6B0(iVar1, iVar5, 0));
			if (iVar4 != func_4() && func_131(iVar4, 1, 1))
			{
				if (!Local_186.f_28 == iVar4 || iParam0)
				{
					unk_0x872F1C1F8587CCC7(&uVar0, iVar4);
				}
			}
		}
		iVar3++;
	}
	return uVar0;
}

int func_408()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var7;
	
	iVar3 = iLocal_1227;
	if (unk_0x191BE1BC8F26F3C1(iVar3, 0))
	{
		return 0;
	}
	Var4 = { unk_0xB3328BA8976B416C(iVar3, 1) };
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = unk_0xF6A72924028F588B(iVar2);
		if (func_131(iVar0, 1, 1))
		{
			iVar1 = unk_0x25D049AAC4603E65(iVar0);
			if (!unk_0x191BE1BC8F26F3C1(iVar1, 0))
			{
				Var7 = { unk_0xB3328BA8976B416C(iVar1, 1) };
				if (unk_0x2A488C176D52CCA5(Var7, Var4) < 30f)
				{
					if (unk_0xA8D0477084E86A92(iVar1, iVar3, 1))
					{
						if (!unk_0xAAA8D20859E2D36D(iVar1, iVar3))
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

bool func_409()
{
	return func_211(5, -1) > 0;
}

var func_410(char* sParam0)
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

int func_411(int iParam0, int iParam1)
{
	if (unk_0x0F30C1F1717A6437())
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (func_322())
		{
			return 0;
		}
	}
	if (func_146())
	{
		return 0;
	}
	if (iParam1 == 1)
	{
		if (func_130(0))
		{
			return 0;
		}
	}
	if (func_82(8, -1))
	{
		return 0;
	}
	if (unk_0x04D7390E1D7464B7())
	{
		return 0;
	}
	if (func_34())
	{
		return 0;
	}
	if (Global_53084)
	{
		return 0;
	}
	if (Global_68215)
	{
		return 0;
	}
	if (unk_0x08D525BE62A22AE0())
	{
		return 0;
	}
	if (Global_1312782)
	{
		return 0;
	}
	if (Global_1574129)
	{
		return 0;
	}
	return 1;
}

void func_412()
{
	bool bVar0;
	
	if (!unk_0xC80D31E4B587871C(Local_219[unk_0x622FF3AE4B1D07C3() /*3*/].f_1, 7))
	{
		bVar0 = false;
		if (unk_0x4C4813CAAD70E814(0))
		{
			if (unk_0x5A632962B08A1872(0, 22))
			{
				bVar0 = true;
			}
		}
		else if (unk_0x5A632962B08A1872(0, 99) || unk_0x5A632962B08A1872(0, 100))
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (!func_318())
			{
				bVar0 = false;
			}
		}
		if (bVar0)
		{
			if (((((((!func_138(iLocal_1227) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_1227, 0)) && unk_0x317536BCEA8FA6B0(iLocal_1227, 0, 0) != unk_0xFC1458A37D98B502()) && unk_0x90D5DFB054818BA7(iLocal_1227) < 10f) && unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), -275944640) != 1) && unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), -275944640) != 0) && func_411(1, 1)) && unk_0x20D66D71CF476CDB(iLocal_1227) < 40f)
			{
				if (func_109(&uLocal_1205, 275, 0))
				{
					unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
					unk_0x09066852F1529C1C(unk_0xFC1458A37D98B502(), 1092616192);
					unk_0x872F1C1F8587CCC7(&(Local_219[unk_0x622FF3AE4B1D07C3() /*3*/].f_1), 7);
				}
			}
			else if (func_231(&uLocal_1205))
			{
				func_129(&uLocal_1205);
			}
		}
		else if (func_231(&uLocal_1205))
		{
			func_129(&uLocal_1205);
		}
	}
}

void func_413()
{
	if (!unk_0xC80D31E4B587871C(iLocal_316, 12))
	{
		Global_1573920 = 1;
		unk_0x872F1C1F8587CCC7(&iLocal_316, 12);
	}
}

void func_414()
{
	if (unk_0xA6DECE14FC9A8C51(uLocal_317))
	{
		unk_0xE30CF11C0EE14316(&uLocal_317);
	}
}

void func_415()
{
	if (unk_0xC80D31E4B587871C(iLocal_316, 12))
	{
		Global_1573920 = 0;
		unk_0x0EE72DB1CD8A3B86(&iLocal_316, 12);
	}
}

void func_416()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (((((func_131(unk_0x9EB17624F44A8DA4(), 1, 1) && unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_1227, 15f, 15f, 5f, 0, 1, 0)) && !unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1)) && unk_0x90D5DFB054818BA7(iLocal_1227) < 5f) && !func_417(iLocal_1227, 0)) && func_411(1, 0))
	{
		unk_0x872F1C1F8587CCC7(&iLocal_316, 2);
		if (unk_0xC80D31E4B587871C(Local_219[unk_0x622FF3AE4B1D07C3() /*3*/].f_1, 0))
		{
			func_398(&iVar0, &iVar1, &uVar2, &uVar3, 0);
			if (((iVar1 > 28 || iVar1 < -28) || iVar0 > 28) || iVar0 < -28)
			{
				if (iLocal_322 == 0)
				{
					unk_0xC1B1E9A034A63A62(0);
					iLocal_322 = 1;
				}
			}
			else
			{
				iLocal_322 = 0;
			}
			if (iLocal_322 == 1)
			{
				if (unk_0x83666F9FB8FEBD4B() > 275)
				{
					if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
						unk_0x0EE72DB1CD8A3B86(&(Local_219[unk_0x622FF3AE4B1D07C3() /*3*/].f_1), 0);
						iLocal_322 = 0;
					}
				}
			}
		}
		else
		{
			unk_0x872F1C1F8587CCC7(&iLocal_316, 2);
		}
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&iLocal_316, 2);
		if (unk_0xC80D31E4B587871C(Local_219[unk_0x622FF3AE4B1D07C3() /*3*/].f_1, 0))
		{
			if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
				iLocal_322 = 0;
			}
			unk_0x0EE72DB1CD8A3B86(&(Local_219[unk_0x622FF3AE4B1D07C3() /*3*/].f_1), 0);
		}
	}
}

int func_417(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		iVar1 = unk_0x95EC8AE7E4F33F6E(iParam0) + 1;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (unk_0x8EE3A848975DDF21(iParam0, (iVar0 - 1), 0))
			{
				return 0;
			}
			else if (!bParam1)
			{
				iVar2 = unk_0x317536BCEA8FA6B0(iParam0, (iVar0 - 1), 0);
				if (unk_0x3AB6A1A9084FB0A4(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

void func_418()
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Local_186.f_24 != 4)
	{
		if (unk_0xC80D31E4B587871C(iLocal_316, 8))
		{
			unk_0x0EE72DB1CD8A3B86(&iLocal_316, 8);
		}
	}
	if (!func_137(Local_186.f_4) && !func_138(iLocal_1227))
	{
		if (unk_0xE53FD7AF7F25C0A8(Local_186.f_4) || (!unk_0x0070DE1A1E73C71C(Local_186.f_4) && unk_0x8E1421E2A2A2FBD4()))
		{
			func_434();
			func_433();
			switch (Local_186.f_24)
			{
				case 0:
					break;
				
				case 1:
					if (unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_186.f_4), -1273030092) != 1 && unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_186.f_4), -1273030092) != 0)
					{
						if (unk_0xC80D31E4B587871C(iLocal_316, 4))
						{
							unk_0x8F7859DFA5ECF628(unk_0x47BA76CE3C825A08(Local_186.f_4), iLocal_1227, 0, 0, Local_186.f_6, 19, 30f, 7.5f, Local_186.f_9, unk_0xF2DB717A73826179(10f), unk_0xF2DB717A73826179(10f), -1082130432, 8225);
							unk_0x0EE72DB1CD8A3B86(&iLocal_316, 17);
						}
					}
					else if (!unk_0xC80D31E4B587871C(iLocal_316, 4))
					{
						func_158();
					}
					else if (unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_186.f_4), -1273030092) == 1)
					{
						if (Local_186.f_9 > -1f)
						{
							if (unk_0x0C88267282FD588F(unk_0x47BA76CE3C825A08(Local_186.f_4), Local_186.f_6, (7.5f + 5f), (7.5f + 5f), 50f, 0, 1, 0))
							{
								fVar0 = unk_0xF0371FE6E2BF9599(unk_0x47BA76CE3C825A08(Local_186.f_4));
								fVar1 = (fVar0 - Local_186.f_9);
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
					if (iLocal_1013 != 2)
					{
						func_158();
						iLocal_1013 = 2;
					}
					if (unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_186.f_4), -1273030092) != 1 && unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_186.f_4), -1273030092) != 0)
					{
						unk_0x8F7859DFA5ECF628(unk_0x47BA76CE3C825A08(Local_186.f_4), iLocal_1227, 0, 0, Local_186.f_10, 4, 30f, 7.5f, -1f, 40, 40, -1082130432, 0);
					}
					break;
				
				case 3:
					break;
				
				case 4:
					if (iLocal_1013 != 4)
					{
						if (iLocal_1013 != 3)
						{
							func_158();
						}
						if (iLocal_1013 == 3)
						{
							Local_186.f_20 = { unk_0xB3328BA8976B416C(iLocal_1227, 1) };
						}
						else
						{
							Local_186.f_20 = { 0f, 0f, 0f };
						}
						iLocal_1013 = 4;
					}
					else if (unk_0x652D2EEEF1D3E62C(Local_186.f_20) > 0f)
					{
						if (unk_0x2A488C176D52CCA5(unk_0xB3328BA8976B416C(iLocal_1227, 1), Local_186.f_20) > 10f)
						{
							if (unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_186.f_4), -1273030092) != 1 && unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_186.f_4), -1273030092) != 0)
							{
								unk_0x8F7859DFA5ECF628(unk_0x47BA76CE3C825A08(Local_186.f_4), iLocal_1227, 0, 0, Local_186.f_20, 4, 30f, 7.5f, -1f, 40, 40, -1082130432, 0);
							}
						}
					}
					if (!unk_0xC80D31E4B587871C(iLocal_316, 8) && unk_0xC80D31E4B587871C(Local_186.f_1, 14))
					{
						if (func_227())
						{
							if (func_145())
							{
								func_108(&uLocal_1018, 3, unk_0x47BA76CE3C825A08(Local_186.f_4), "FM_Pilot", 0, 1);
								if (!bLocal_218)
								{
									func_226(&uLocal_1018, "CT_AUD", "MPCT_HPidle", 12, 0, 0, 1);
								}
								else
								{
									func_432(&uLocal_1018, "CT_AUD", "MPCT_HPidle", "MPCT_HPidle_06", 12, 0, 0);
								}
							}
							else
							{
								func_11(1);
								func_108(&uLocal_1018, 2, unk_0x47BA76CE3C825A08(Local_186.f_4), "EXEC_PILOT", 0, 1);
								if (!bLocal_218)
								{
									func_91(&uLocal_1018, "EXHELAU", "EXHEL_IDLE", 12, 0, 0, 1);
								}
								else
								{
									func_431(&uLocal_1018, "EXHELAU", "EXHEL_IDLE", "EXHEL_IDLE_02", 12, 0, 0);
								}
							}
							unk_0x872F1C1F8587CCC7(&iLocal_316, 8);
						}
					}
					break;
				
				case 5:
					if (!unk_0xA0BF73C5030D3F60(iLocal_1227))
					{
						unk_0xC8DAB4CEBB9AB263(iLocal_1227);
					}
					if (unk_0xC80D31E4B587871C(iLocal_316, 15))
					{
						func_399();
					}
					if (!unk_0xC80D31E4B587871C(iLocal_316, 14))
					{
						if (iLocal_1013 != 5)
						{
							func_158();
							iLocal_1013 = 5;
						}
						if (unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_186.f_4), -1273030092) != 1 && unk_0x78F50AA8F955BEFC(unk_0x47BA76CE3C825A08(Local_186.f_4), -1273030092) != 0)
						{
							unk_0x8F7859DFA5ECF628(unk_0x47BA76CE3C825A08(Local_186.f_4), iLocal_1227, 0, 0, Local_186.f_29, 4, 30f, 7.5f, -1f, 40, 40, -1082130432, 0);
						}
						if (func_430() && unk_0xC80D31E4B587871C(Local_186.f_1, 15))
						{
							if (unk_0xA0BF73C5030D3F60(iLocal_1227))
							{
								unk_0xEDC33A771FAEB393(iLocal_1227, 1);
								func_158();
								if (iLocal_158 == -1)
								{
									if (unk_0xC80D31E4B587871C(iLocal_316, 19))
									{
										iVar2 = unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), uLocal_1212);
										if (iVar2 > 10000)
										{
											unk_0x8450DA4ECE3391C6();
											uLocal_1212 = unk_0xD1952A425B78FFC0();
										}
									}
									else
									{
										uLocal_1212 = unk_0xD1952A425B78FFC0();
										unk_0x872F1C1F8587CCC7(&iLocal_316, 19);
									}
									if (func_421(Local_186.f_29, 0f, 1, 0, 0, 0, 1, 0, 1, 0, 0))
									{
										unk_0x872F1C1F8587CCC7(&iLocal_316, 14);
										unk_0x0EE72DB1CD8A3B86(&iLocal_316, 19);
										if (iLocal_158 == -1 && !func_244(Local_186.f_5))
										{
											unk_0xEDC33A771FAEB393(iLocal_1227, 0);
											unk_0xB18E1DBC397238E1(iLocal_1227, 1, 0);
											unk_0x4BEFCD5DAE410A90(iLocal_1227, 1);
											Local_186.f_23 = 5;
											func_158();
										}
									}
								}
								else if (iLocal_158 > -1)
								{
									unk_0xEDC33A771FAEB393(iLocal_1227, 0);
									unk_0xB18E1DBC397238E1(iLocal_1227, 1, 0);
									unk_0x4BEFCD5DAE410A90(iLocal_1227, 1);
									Local_186.f_23 = 5;
									func_158();
								}
							}
						}
					}
					break;
				
				case 7:
					func_132();
					if (!unk_0xC80D31E4B587871C(iLocal_316, 9))
					{
						if (func_227())
						{
							if (func_145())
							{
								func_108(&uLocal_1018, 3, unk_0x47BA76CE3C825A08(Local_186.f_4), "FM_Pilot", 0, 1);
								func_226(&uLocal_1018, "CT_AUD", "MPCT_HPwrn2", 12, 0, 0, 1);
							}
							else
							{
								func_108(&uLocal_1018, 2, unk_0x47BA76CE3C825A08(Local_186.f_4), "EXEC_PILOT", 0, 1);
								func_91(&uLocal_1018, "EXHELAU", "EXHEL_FORCED", 12, 0, 0, 1);
							}
							unk_0x4BEFCD5DAE410A90(iLocal_1227, 2);
							unk_0x872F1C1F8587CCC7(&iLocal_316, 9);
						}
					}
					break;
				
				case 8:
					if (!unk_0x05B9D55619AF5BF2(iLocal_1227))
					{
						func_132();
						if (unk_0x1635D2AD9D560E95(iLocal_1227) > 0)
						{
							if (!func_137(Local_186.f_4))
							{
								if (!unk_0x191BE1BC8F26F3C1(iLocal_1227, 0))
								{
									if (!func_223())
									{
										unk_0xAB30B1CF01A198C1(unk_0x47BA76CE3C825A08(Local_186.f_4), uLocal_319);
										if (unk_0x93C304998B457C45(Local_186.f_3))
										{
											func_420(&(Local_186.f_3));
										}
										if (func_237())
										{
											func_419(0);
										}
										if (unk_0x93C304998B457C45(Local_186.f_4))
										{
											func_420(&(Local_186.f_4));
										}
									}
								}
							}
						}
						else if (!func_137(Local_186.f_4))
						{
							if (!unk_0x191BE1BC8F26F3C1(iLocal_1227, 0))
							{
								unk_0xAB30B1CF01A198C1(unk_0x47BA76CE3C825A08(Local_186.f_4), uLocal_320);
								unk_0x771A86309E0CA47B(unk_0x47BA76CE3C825A08(Local_186.f_4), 1);
								if (unk_0x93C304998B457C45(Local_186.f_3))
								{
									func_420(&(Local_186.f_3));
								}
								if (func_237())
								{
									func_419(0);
								}
								if (unk_0x93C304998B457C45(Local_186.f_4))
								{
									func_420(&(Local_186.f_4));
								}
							}
						}
					}
					return;
				}
		}
		if (func_131(unk_0x9EB17624F44A8DA4(), 1, 1))
		{
			if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_1227, 0))
			{
				switch (Local_186.f_24)
				{
					case 7:
						if (!unk_0xC80D31E4B587871C(iLocal_316, 10))
						{
							iVar3 = 0;
							while (iVar3 < unk_0x95EC8AE7E4F33F6E(iLocal_1227) + 1)
							{
								iVar4 = unk_0x317536BCEA8FA6B0(iLocal_1227, (iVar3 - 1), 0);
								if (iVar4 != 0)
								{
									if (!unk_0x3AB6A1A9084FB0A4(iVar4))
									{
										if (unk_0x1417A5CC924DE120(iVar4))
										{
											func_133(func_134(unk_0xDF35170AEEFB473B(iVar4)), 0, 0f, 0, 0, 0, -1);
										}
									}
								}
								iVar3++;
							}
							unk_0x872F1C1F8587CCC7(&iLocal_316, 10);
						}
						break;
					}
				}
			}
	}
}

void func_419(int iParam0)
{
	if (unk_0x6ADD12BF4D6D2587(Global_2512808.f_289))
	{
		Global_2512808.f_5459 = 1;
		Global_2512808.f_5460 = iParam0;
	}
}

void func_420(var uParam0)
{
	var uVar0;
	
	if (unk_0x918CA1BFFAA03556(*uParam0))
	{
		uVar0 = unk_0x29AB7D6D0DE18055(*uParam0);
		unk_0x83E70C4C5D45C754(&uVar0);
	}
}

int func_421(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, float fParam12)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	Global_17162.f_6 = 1;
	if (Global_2436181.f_1117 && Global_2436181.f_1125)
	{
		func_427(0, bParam9);
		return 1;
	}
	if (unk_0x1E06D00B67177A18() && !bParam9)
	{
		if (Global_2436181.f_1117)
		{
			func_427(0, bParam9);
		}
		return 0;
	}
	if ((unk_0x40189ECE75CF9724() && !bParam9) && !unk_0x56B73C6866440457())
	{
		return 0;
	}
	if (!func_426())
	{
		if (func_425(unk_0x9EB17624F44A8DA4(), 1, 0))
		{
			if (((bParam9 && func_131(unk_0x9EB17624F44A8DA4(), 1, 0)) && unk_0x1E06D00B67177A18()) && Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_237 == 1)
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
	if (!Global_2436181.f_1117 && !bParam11)
	{
		Var1 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0) };
		if ((unk_0xE97272C977DEADD3((Var1.f_0 - Param0.f_0)) < 0.2f && unk_0xE97272C977DEADD3((Var1.f_1 - Param0.f_1)) < 0.2f) && unk_0xE97272C977DEADD3((Var1.f_2 - Param0.f_2)) < 1.2f)
		{
			fVar4 = (fParam3 - unk_0xF0371FE6E2BF9599(unk_0xFC1458A37D98B502()));
			if (fVar4 > 180f)
			{
				fVar4 = (fVar4 + -360f);
			}
			if (fVar4 < -180f)
			{
				fVar4 = (fVar4 + 360f);
			}
			if (unk_0xE97272C977DEADD3(fVar4) < 1f)
			{
				Global_2436181.f_1117 = 0;
				Global_2436181.f_1118 = 0;
				if (unk_0x56B73C6866440457())
				{
					unk_0x8450DA4ECE3391C6();
				}
				return 1;
			}
		}
	}
	if (((!Param0.f_0 == Global_2436181.f_1119 || !Param0.f_1 == Global_2436181.f_1119.f_1) || !Param0.f_2 == Global_2436181.f_1119.f_2) || !fParam3 == Global_2436181.f_1122)
	{
		if (Global_2436181.f_1117 == 1)
		{
			if (unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), Global_2436181.f_1123) < func_424(0))
			{
				return 0;
			}
			unk_0x8450DA4ECE3391C6();
			Global_2436181.f_1118 = 1;
		}
		else
		{
			Global_2436181.f_1118 = 0;
		}
		Global_2436181.f_1119 = { Param0 };
		Global_2436181.f_1122 = fParam3;
		Global_2436181.f_1117 = 0;
	}
	if (!Global_2436181.f_1117 && !unk_0x56B73C6866440457())
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
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			if (!unk_0xC80D31E4B587871C(Global_92885.f_1322[44], 16))
			{
				func_423();
			}
			if (!unk_0xBE762E3CC7A492E6(unk_0xFC1458A37D98B502(), &(Global_2405047.f_495)))
			{
				Global_2405047.f_495 = 0;
			}
		}
		if (bParam4)
		{
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				iVar0 = unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502());
				if (unk_0xC9CE174229996043(iVar0))
				{
					Global_2436181.f_1124 = 0;
				}
			}
		}
		if (Global_2436181.f_1124 > -1)
		{
			Global_2436181.f_1123 = unk_0xD1952A425B78FFC0();
			Global_2436181.f_1117 = 1;
		}
		else
		{
			if (bParam9)
			{
				if (bParam4)
				{
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						iVar0 = unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502());
						if (unk_0xA0BF73C5030D3F60(iVar0))
						{
							unk_0xBD8D47FDC6902B2D(iVar0, Param0, 0, 1, 1, 1);
							unk_0x48ED7B2293A96722(iVar0, fParam3);
							if (fParam12 != 0f)
							{
								unk_0x59AF3B40AE222194(iVar0, fParam12, 0f, fParam3, 2, 1);
							}
						}
						else
						{
							unk_0xC8DAB4CEBB9AB263(iVar0);
						}
					}
					else
					{
						unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), Param0, 0, 0, 0, 1);
						unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), fParam3);
					}
				}
				else
				{
					unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), Param0, 0, 0, 0, 1);
					unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), fParam3);
				}
				func_427(bParam6, bParam9);
				return 1;
			}
			else
			{
				unk_0x97580242FB655BD5();
				unk_0x90CDE9D4F79FC07E(unk_0x9EB17624F44A8DA4(), Param0, fParam3, bParam4, iParam10, 0);
			}
			Global_2436181.f_1123 = unk_0xD1952A425B78FFC0();
			Global_2436181.f_1117 = 1;
		}
	}
	if (Global_2436181.f_1117)
	{
		Global_17162.f_6 = 1;
		Global_2436181.f_1123 = unk_0xD1952A425B78FFC0();
		if (Global_2436181.f_1124 > -1)
		{
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				iVar0 = unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502());
			}
			if (func_422(&(Global_2436181.f_1124), Param0, fParam3, iVar0))
			{
				func_427(bParam6, bParam9);
				return 1;
			}
		}
		else
		{
			if (bParam9)
			{
				if (unk_0x2A488C176D52CCA5(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), Global_2436181.f_1119) < 2f)
				{
					if (unk_0x56B73C6866440457())
					{
						unk_0x8450DA4ECE3391C6();
					}
					func_427(bParam6, bParam9);
					return 1;
				}
			}
			if (!unk_0x56B73C6866440457())
			{
				if (fParam12 != 0f)
				{
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						iVar0 = unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502());
						unk_0x59AF3B40AE222194(iVar0, fParam12, 0f, fParam3, 2, 1);
						Global_2436181.f_1125 = 1;
						return 0;
					}
				}
				func_427(bParam6, bParam9);
				return 1;
			}
		}
	}
	return 0;
}

int func_422(var uParam0, struct<3> Param1, float fParam4, int iParam5)
{
	if (unk_0x6ADD12BF4D6D2587(Global_2436181.f_1126) && !unk_0x191BE1BC8F26F3C1(Global_2436181.f_1126, 0))
	{
		unk_0xC8DAB4CEBB9AB263(Global_2436181.f_1126);
	}
	switch (*uParam0)
	{
		case 0:
			Global_2436181.f_1126 = iParam5;
			unk_0xC8DAB4CEBB9AB263(Global_2436181.f_1126);
			if (unk_0xA0BF73C5030D3F60(Global_2436181.f_1126))
			{
				if (!unk_0x191BE1BC8F26F3C1(Global_2436181.f_1126, 0))
				{
					unk_0x48ED7B2293A96722(Global_2436181.f_1126, fParam4);
					unk_0xBD8D47FDC6902B2D(Global_2436181.f_1126, Param1, 0, 1, 1, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_423()
{
	int iVar0;
	
	iVar0 = unk_0x832CFDD4BD296987();
	if (unk_0x496629127CB77F7B() && Global_2405047.f_2648 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2405047.f_2647)
	{
		if (!unk_0xBCFF5E6898C5516A())
		{
			Global_2405047.f_2647 = iVar0;
		}
	}
}

int func_424(bool bParam0)
{
	if (unk_0x3E9CABD07B829173())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_425(int iParam0, bool bParam1, int iParam2)
{
	if (Global_2422736[iParam0 /*420*/].f_237 == 99)
	{
		if ((iParam2 && Global_2422736[iParam0 /*420*/].f_240 == 0) || iParam2 == 0)
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (Global_2422736[iParam0 /*420*/].f_237 == 13)
		{
			return 0;
		}
	}
	return 1;
}

bool func_426()
{
	return Global_1312831;
}

void func_427(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		unk_0x7C9705890EF6612E(0f, 1065353216);
		unk_0xBB9A3C553EECB180(0f);
	}
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0xB485B73829833C84(unk_0xFC1458A37D98B502());
	}
	if (!bParam1)
	{
		unk_0x97580242FB655BD5();
	}
	if (unk_0x56B73C6866440457())
	{
		unk_0x8450DA4ECE3391C6();
	}
	func_429();
	if (!unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_15, 14))
	{
		func_428();
	}
}

void func_428()
{
	Global_2520904.f_80 = 1;
}

void func_429()
{
	struct<3> Var0;
	
	Global_2436181.f_1117 = 0;
	Global_2436181.f_1118 = 0;
	Global_2436181.f_1119 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2436181.f_1124 = -1;
	Global_2436181.f_1125 = 0;
	Global_2405047.f_2650 = { Var0 };
}

int func_430()
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	if (!(Global_2456862.f_10 || unk_0xC80D31E4B587871C(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_472, 4)))
	{
		return 0;
	}
	uVar1 = Global_2456862.f_21;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0xC80D31E4B587871C(uVar1, iVar0))
		{
			iVar2 = unk_0xF6A72924028F588B(iVar0);
			if (func_131(iVar2, 1, 1))
			{
				if (!unk_0xC80D31E4B587871C(Global_1627537[iVar0 /*532*/].f_472, 4))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_431(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_84(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15763 = 0;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 1;
	Global_16749 = 0;
	Global_16753 = 0;
	StringCopy(&Global_16760, sParam3, 24);
	Global_2621441 = 0;
	return func_76(sParam2, iParam4, 0);
}

int func_432(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_84(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15763 = 0;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 1;
	Global_16749 = 0;
	Global_16753 = 0;
	StringCopy(&Global_16760, sParam3, 24);
	Global_2621441 = 1;
	return func_76(sParam2, iParam4, 0);
}

void func_433()
{
	if (iLocal_323 == 0)
	{
		iLocal_323 = 1;
	}
}

void func_434()
{
	unk_0x1B5A255BF0D63005("MobileRadioInGame", 0);
	if (!func_294())
	{
		if (func_131(unk_0x9EB17624F44A8DA4(), 1, 1))
		{
			if (unk_0xAAA8D20859E2D36D(unk_0xFC1458A37D98B502(), iLocal_1227) && !func_323(unk_0xFC1458A37D98B502(), iLocal_1227, -1))
			{
				unk_0x1B5A255BF0D63005("MobileRadioInGame", 1);
			}
		}
	}
}

void func_435()
{
	if (func_237())
	{
		return;
	}
	if (unk_0x8E1421E2A2A2FBD4())
	{
		if (!unk_0xA6DECE14FC9A8C51(uLocal_317))
		{
			if (!func_138(iLocal_1227))
			{
				uLocal_317 = unk_0xCA43F0FC44D9B846(iLocal_1227);
				if (unk_0xA6DECE14FC9A8C51(uLocal_317))
				{
					unk_0x4B4040A0EC7DBA81(uLocal_317, 422);
					unk_0x9C27373CC69ECF87(uLocal_317, 0);
					unk_0x62BD54E491535B76(uLocal_317, "HTX_BLIP");
					iLocal_318 = 1;
					func_285(&uLocal_317, iLocal_318);
				}
			}
		}
	}
}

void func_436()
{
	int iVar0;
	
	iVar0 = unk_0xF2DB717A73826179(10f);
	if (!func_138(iLocal_1227))
	{
		unk_0x6931076730A4AC5D(&uLocal_321);
		unk_0x8F7859DFA5ECF628(0, iLocal_1227, 0, 0, Local_186.f_10, 9, 30f, 7.5f, -1f, iVar0, iVar0, -1082130432, 0);
		unk_0x1B16DD5C115FE009(uLocal_321);
		unk_0x6931076730A4AC5D(&uLocal_320);
		unk_0x8F7859DFA5ECF628(0, iLocal_1227, 0, 0, Local_186.f_17, 9, 30f, 0f, -1f, iVar0 * 2, iVar0 * 2, -1082130432, 0);
		unk_0x1B16DD5C115FE009(uLocal_320);
		unk_0x6931076730A4AC5D(&uLocal_319);
		unk_0x16416C5B54FDBCBB(0, 0, 64);
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 300f, -1, 0, 0);
		}
		else
		{
			unk_0x93F12E7D8D931858(0, 1193033728, 0);
		}
		unk_0x1B16DD5C115FE009(uLocal_319);
	}
}

int func_437()
{
	return Local_186.f_0;
}

int func_438(int iParam0)
{
	return Local_219[iParam0 /*3*/];
}

int func_439()
{
	var uVar0;
	
	func_446(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!unk_0x3A711520F83BAE98())
		{
			return 1;
		}
	}
	if (func_445())
	{
		return 1;
	}
	if (Global_2459061)
	{
		return 1;
	}
	if (func_444())
	{
		return 1;
	}
	if (func_443(157))
	{
		if (!func_442())
		{
			return 1;
		}
	}
	if (func_443(155))
	{
		return 1;
	}
	if (!unk_0xDEC0EB6EAE9BC575())
	{
		return 1;
	}
	if (func_440() != 0)
	{
		if (unk_0x8F38E94BBF3404CD(func_440()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_440()
{
	switch (func_441())
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

int func_441()
{
	return Global_25233;
}

bool func_442()
{
	return Global_2447174.f_586;
}

int func_443(int iParam0)
{
	if (unk_0xDC2E57BF710DF393(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_444()
{
	return Global_2456830;
}

bool func_445()
{
	return Global_2447174.f_581;
}

void func_446(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xAAEEFEC091D0E30B(1))
	{
		iVar1 = unk_0xA387B84DA2EB1BEE(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x575EF325DA5E3F04(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1155637934:
					func_447(iVar0);
					break;
				
				case 1662227603:
					unk_0x575EF325DA5E3F04(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 1204917378)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_447(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x575EF325DA5E3F04(1, iParam0, &Var0, 3))
	{
		if (func_131(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x25D049AAC4603E65(Var0.f_1);
			if (unk_0x6ADD12BF4D6D2587(uVar3))
			{
				if (unk_0x88DDBE9908752BF0(iVar3, 0))
				{
					uVar4 = unk_0xDFD115BB10FE46A9(iVar3, 0);
					if (unk_0x1FE6625767FB8CBF(uVar4, Var0.f_2) && unk_0x8C504A60C2F379BD())
					{
						if (func_448(uVar4, &bVar5))
						{
							unk_0x38CCEC620E3BB265(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x5380482A432E314E(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_448(int iParam0, var uParam1)
{
	if (unk_0x6ADD12BF4D6D2587(uParam0))
	{
		if (!unk_0x9761C10D57B68069(iParam0))
		{
			if (unk_0x828686E167EA3FD3(iParam0))
			{
				if (!unk_0x3C4FA7AE145B3F72(unk_0x82FF3DFBC3965CC0(iParam0)))
				{
					unk_0xDD29FF4BAB8AFF9C(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xCB234F3DD6FF9368(iParam0, 0))
		{
			if (unk_0xA0BF73C5030D3F60(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_449()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_450(bool bParam0)
{
	var uVar0;
	var uVar1;
	
	if (func_151())
	{
		func_150();
	}
	if (bParam0)
	{
		func_414();
	}
	func_415();
	func_225(0);
	if (func_237())
	{
		if (func_455("HTX_HELPN", "GB_HELI_BLIP"))
		{
			unk_0x3E80C2F7BC665259(1);
			uVar0 = func_7(1187, -1, 0);
			unk_0x0EE72DB1CD8A3B86(&uVar0, 16);
			func_236(1187, uVar0, -1, 1, 0);
		}
		func_11(0);
	}
	else if (func_455("HTX_HELPN", "HTX_HELPB"))
	{
		unk_0x3E80C2F7BC665259(1);
		uVar1 = func_7(1187, -1, 0);
		unk_0x0EE72DB1CD8A3B86(&uVar1, 16);
		func_236(1187, uVar1, -1, 1, 0);
	}
	if (bParam0)
	{
		if (unk_0x93C304998B457C45(Local_186.f_4) && unk_0xE53FD7AF7F25C0A8(Local_186.f_4))
		{
			if (func_237())
			{
				if (!unk_0x191BE1BC8F26F3C1(unk_0x47BA76CE3C825A08(Local_186.f_4), 0))
				{
					if (!unk_0xA8D0477084E86A92(unk_0x47BA76CE3C825A08(Local_186.f_4), iLocal_1227, 0))
					{
						func_234(&(Local_186.f_4));
					}
				}
			}
			if (!func_138(iLocal_1227))
			{
				if (!func_137(Local_186.f_4))
				{
					func_436();
					unk_0xAB30B1CF01A198C1(unk_0x47BA76CE3C825A08(Local_186.f_4), uLocal_320);
				}
			}
		}
	}
	if (unk_0x3A711520F83BAE98())
	{
		if (bParam0)
		{
			if (unk_0x93C304998B457C45(Local_186.f_3))
			{
				if (unk_0xE53FD7AF7F25C0A8(Local_186.f_3))
				{
					if (!func_138(iLocal_1227))
					{
						unk_0x4BEFCD5DAE410A90(iLocal_1227, 1);
					}
					func_420(&(Local_186.f_3));
				}
			}
			if (func_237())
			{
			}
			if (unk_0x93C304998B457C45(Local_186.f_4))
			{
				if (unk_0xE53FD7AF7F25C0A8(Local_186.f_4))
				{
					if (!func_137(Local_186.f_4))
					{
						unk_0xAE01EF4BC84AFE7C(unk_0x47BA76CE3C825A08(Local_186.f_4), 251, 0);
					}
					func_420(&(Local_186.f_4));
				}
			}
		}
		if (!func_294())
		{
			func_453(func_454(1, 1), 13, func_4());
		}
		else
		{
			func_453(func_454(1, 1), 44, func_4());
		}
	}
	func_452();
	if (iLocal_323 == 1)
	{
		iLocal_323 = 0;
	}
	unk_0xA68F7B004463AB6F(&uLocal_324);
	unk_0xBC3B7443617858A0(1);
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_819), 0);
	Global_2512808.f_258 = 0;
	func_451();
}

void func_451()
{
	unk_0x96A3D9A8A4C7AFD4();
}

void func_452()
{
	unk_0xFAA3EF7FF92E1F9E(&uLocal_319);
	unk_0xFAA3EF7FF92E1F9E(&uLocal_320);
	unk_0xFAA3EF7FF92E1F9E(&uLocal_321);
}

void func_453(int iParam0, int iParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = -332158592;
	Var0.f_1 = unk_0x9EB17624F44A8DA4();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		unk_0x5A26F0BDEE9F8260(1, &Var0, 6, iParam0);
	}
}

int func_454(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xF6A72924028F588B(iVar1);
		if (func_131(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x9EB17624F44A8DA4() || iParam0)
			{
				if (bParam1)
				{
					unk_0x872F1C1F8587CCC7(&uVar0, iVar1);
				}
				else if (!func_268(iVar2, 0))
				{
					unk_0x872F1C1F8587CCC7(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_455(char* sParam0, char* sParam1)
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	unk_0xA6D2B267C377D7B2(sParam1);
	return unk_0x0683D2027E169355(0);
}

int func_456(struct<21> Param0)
{
	func_459(32, Param0);
	unk_0xBC60D873F181A18E(1);
	unk_0x7BC094E5B24A760D(1);
	func_458(0, -1, 0);
	unk_0x6E3ED3AE1C20445F(&Local_186, 32);
	unk_0xE7BC983D1386C9EE(&Local_219, 97);
	if (!func_457())
	{
		return 0;
	}
	unk_0x941BE77305BB5695(0);
	if (unk_0x8E1421E2A2A2FBD4())
	{
		Local_186.f_5 = unk_0x9EB17624F44A8DA4();
		Local_186.f_6 = { unk_0x3F90543934DCD7E6(unk_0xFC1458A37D98B502(), 0f, 15f, 0f) };
		Local_186.f_10 = { -346.4007f, 1151.507f, 324.7254f };
		Local_186.f_27 = func_294();
		Local_186.f_28 = func_4();
		unk_0x872F1C1F8587CCC7(&(Global_2512808.f_819), 0);
	}
	Global_2456862.f_26 = 0;
	Global_2456862.f_25 = 0;
	unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_472), 4);
	iLocal_1012 = unk_0xB01117EF93F91860();
	Local_219[unk_0x622FF3AE4B1D07C3() /*3*/] = 0;
	return 1;
}

int func_457()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x3A711520F83BAE98())
		{
			return 0;
		}
		if (unk_0x6303B0CB83943C5E())
		{
			return 1;
		}
		if (func_445())
		{
			return 0;
		}
		if (func_443(155))
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

int func_458(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x8A8E6DE54B880941();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_451();
			}
			else
			{
				return 0;
			}
		}
		if (!func_426())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x3A711520F83BAE98())
				{
					if (!bParam2)
					{
						func_451();
					}
					else
					{
						return 0;
					}
				}
				if (func_445())
				{
					if (!bParam2)
					{
						func_451();
					}
					else
					{
						return 0;
					}
				}
				if (func_443(155))
				{
					if (!bParam2)
					{
						func_451();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x6CF53DE0FDF04073())
			{
				if (!bParam2)
				{
					func_451();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x8A8E6DE54B880941();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x3A711520F83BAE98())
		{
			if (!bParam2)
			{
				func_451();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x6CF53DE0FDF04073())
	{
		if (!bParam2)
		{
			func_451();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_459(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x3A711520F83BAE98())
	{
		func_451();
	}
	unk_0xAEA89A7E72415961(iParam0, 0, Param1.f_16);
}

void func_460()
{
	iLocal_1215 = 0;
	func_461(-243.828f, -1461.281f, 30.99f, 279.3385f);
	func_461(139.284f, 311.0571f, 111.1386f, 45.1942f);
	func_461(634.8535f, 141.8226f, 94.2749f, 26.968f);
	func_461(383.2168f, 16.5927f, 90.2992f, 40.5093f);
	func_461(67.2551f, 51.4397f, 72.5151f, 38.4162f);
	func_461(294.1833f, 575.2105f, 152.623f, 304.9259f);
	func_461(933.0354f, 492.7919f, 120.4651f, 3.1259f);
	func_461(-336.8088f, 454.2572f, 110.9638f, 58.2889f);
	func_461(-135.9225f, 615.1293f, 204.3637f, 240.0636f);
	func_461(139.3762f, -250.2123f, 50.426f, 276.1187f);
	func_461(-139.5668f, -443.9992f, 33.1041f, 112.657f);
	func_461(-491.7431f, -144.9858f, 37.8309f, 98.1814f);
	func_461(-645.7263f, 406.0965f, 100.2678f, 272.8684f);
	func_461(-957.0592f, 295.3116f, 68.9958f, 58.8505f);
	func_461(-820.9876f, 876.1653f, 202.1549f, 196.4736f);
	func_461(-1443.188f, 455.4925f, 110.7514f, 296.894f);
	func_461(-1481.404f, 863.1016f, 181.577f, 38.349f);
	func_461(-1646.419f, -195.0848f, 54.2692f, 160.7423f);
	func_461(-1099.93f, -192.9011f, 37.3214f, 299.6116f);
	func_461(-604.6443f, -599.9016f, 33.6806f, 270.5396f);
	func_461(-1471.802f, -853.1879f, 13.2503f, 302.8094f);
	func_461(-2011.161f, -526.2204f, 10.7096f, 28.1469f);
	func_461(-2212.737f, 537.3901f, 164.4195f, 348.0596f);
	func_461(-3025.405f, 338.3629f, 13.6245f, 14.9527f);
	func_461(-1054.36f, -1398.452f, 5.3278f, 253.1757f);
	func_461(-567.387f, -1258.005f, 12.8623f, 8.386f);
	func_461(-964.4938f, -727.4775f, 18.794f, 344.527f);
	func_461(-2429.193f, 1045.141f, 193.7864f, 263.1876f);
	func_461(-3136.545f, 1191.168f, 19.0974f, 220.8899f);
	func_461(-2692.456f, -62.2375f, 15.234f, 39.5592f);
	func_461(-355.8293f, -990.3766f, 28.4949f, 125.2948f);
	func_461(243.7049f, -881.4253f, 29.4921f, 297.8129f);
	func_461(453.4193f, -380.5279f, 45.6676f, 357.5639f);
	func_461(936.8099f, -553.545f, 58.3693f, 263.5811f);
	func_461(770.1622f, -233.1951f, 65.1145f, 243.3845f);
	func_461(1134.113f, 353.7328f, 90.4476f, 351.5361f);
	func_461(1864.741f, 259.8708f, 162.1022f, 225.713f);
	func_461(1558.889f, 879.5532f, 76.4596f, 359.376f);
	func_461(337.4946f, 985.814f, 209.7682f, 69.9473f);
	func_461(870.984f, 968.8524f, 238.3209f, 35.1108f);
	func_461(2599.014f, 415.1773f, 107.7289f, 186.8054f);
	func_461(2547.611f, -579.5625f, 64.2137f, 161.9321f);
	func_461(1886.246f, -741.1049f, 82.6813f, 287.8844f);
	func_461(1455.893f, -1498.703f, 63.6557f, 173.4564f);
	func_461(1161.785f, -1076.126f, 40.4823f, 247.4221f);
	func_461(1394.804f, -734.3683f, 66.2226f, 115.9829f);
	func_461(1167.93f, -150.3837f, 55.5932f, 167.958f);
	func_461(2455.5f, 1014.216f, 83.1307f, 14.3078f);
	func_461(2530.339f, 1633.237f, 28.3235f, 234.752f);
	func_461(1951.904f, 1645.648f, 71.2406f, 260.0168f);
	func_461(2806.778f, -815.1143f, 5.7198f, 81.9638f);
	func_461(1806.947f, -1290.593f, 95.0351f, 331.8087f);
	func_461(1678.681f, -1952.281f, 111.666f, 80.8951f);
	func_461(1292.103f, -3186.505f, 4.9064f, 359.7118f);
	func_461(740.4905f, -3028.477f, 7.562f, 312.5958f);
	func_461(559.4196f, -2593.408f, 5.0368f, 291.8598f);
	func_461(877.3129f, -2437.455f, 27.3458f, 83.4984f);
	func_461(1212.66f, -2098.225f, 43.5962f, 332.4854f);
	func_461(797.2423f, -1599.807f, 30.2847f, 164.9429f);
	func_461(827.6533f, -1980.338f, 28.299f, 10.749f);
	func_461(373.2801f, -2133.071f, 15.2922f, 150.4032f);
	func_461(617.6802f, -1064.3f, 9.3075f, 179.8157f);
	func_461(296.5454f, -1341.473f, 42.7533f, 230.0817f);
	func_461(-174.3653f, -2548.709f, 5.0163f, 198.7499f);
	func_461(215.9285f, -2903.652f, 6.6886f, 151.951f);
	func_461(314.6187f, -1679.352f, 28.1261f, 72.5752f);
	func_461(1408.015f, -2623.801f, 45.1502f, 312.7456f);
	func_461(-379.9112f, -1774.544f, 20.0649f, 13.9162f);
	func_461(96.5893f, -2001.965f, 18.844f, 147.396f);
	func_461(-729.8096f, -1777.493f, 28.0263f, 61.8742f);
	func_461(-971.1151f, -1868.092f, 18.9378f, 33.2574f);
	func_461(-720.1935f, -2557.545f, 12.9387f, 18.6712f);
	func_461(-1335.482f, -2677.121f, 12.9449f, 187.4991f);
	func_461(-878.3446f, -2968.556f, 12.9471f, 331.5428f);
	func_461(-1005.327f, -2232.398f, 8.0032f, 92.8891f);
	func_461(-401.2441f, -2284.453f, 6.6082f, 2.3971f);
	func_461(-1454.813f, -1471.849f, 1.1336f, 242.0199f);
	func_461(821.5599f, 1298.328f, 362.9729f, 262.7468f);
	func_461(-449.7726f, 1586.159f, 358.0207f, 239.931f);
	func_461(-348.6263f, 1156.363f, 324.5158f, 54.5644f);
	func_461(-827.162f, 1686.859f, 194.2108f, 236.4414f);
	func_461(-184.5484f, 1923.192f, 196.6049f, 206.5246f);
	func_461(296.1962f, 1771.646f, 227.0542f, 310.265f);
	func_461(1052.903f, 1495.316f, 174.8349f, 205.154f);
	func_461(-1532.131f, 1396.502f, 122.7763f, 352.1764f);
	func_461(-2604.194f, 1675.818f, 138.9021f, 166.6577f);
	func_461(-1513.824f, 2166.168f, 54.0724f, 251.5786f);
	func_461(-1697.408f, 2456.897f, 29.418f, 101.049f);
	func_461(-2819.858f, 2253.055f, 28.6358f, 169.9338f);
	func_461(-3043.554f, 1477.634f, 27.3241f, 179.9691f);
	func_461(-2381.452f, 2830.405f, 2.372f, 76.3996f);
	func_461(-2993.669f, 3335.124f, 9.2207f, 46.6226f);
	func_461(-1789.875f, 2675.004f, 2.4478f, 318.05f);
	func_461(-1596.024f, 2950.032f, 32.0914f, 221.481f);
	func_461(-1099.969f, 2850.755f, 12.8854f, 317.9454f);
	func_461(55.8239f, 3338.571f, 35.6469f, 165.2648f);
	func_461(173.2043f, 2293.298f, 92.1495f, 208.7343f);
	func_461(-468.6477f, 2994.032f, 26.1288f, 96.4423f);
	func_461(-1212.968f, 2599.15f, 14.572f, 277.3627f);
	func_461(-177.6004f, 2945.426f, 29.6345f, 344.5758f);
	func_461(-270.1975f, 2661.462f, 59.8035f, 190.3861f);
	func_461(-767.441f, 2284.18f, 76.413f, 331.6507f);
	func_461(578.2679f, 2798.182f, 41.1427f, 308.8694f);
	func_461(388.2008f, 3525.706f, 32.9f, 242.16f);
	func_461(1228.046f, 3612.758f, 32.4634f, 303.8293f);
	func_461(1060.165f, 3042.599f, 40.6158f, 329.9008f);
	func_461(845.1221f, 2207.164f, 49.9157f, 40.9634f);
	func_461(1281.185f, 2665.227f, 36.6537f, 44.0714f);
	func_461(2137.185f, 2961.237f, 45.9129f, 273.7183f);
	func_461(2052.815f, 3319.029f, 44.7859f, 127.0919f);
	func_461(1959.709f, 3775.369f, 31.2029f, 88.7083f);
	func_461(2500.937f, 4153.028f, 37.2878f, 204.7804f);
	func_461(2730.682f, 3415.967f, 55.7151f, 278.4684f);
	func_461(2936.23f, 4437.92f, 47.4218f, 323.2516f);
	func_461(3636.311f, 3765.969f, 27.5157f, 51.549f);
	func_461(2532.664f, 2686.917f, 40.7205f, 249.7434f);
	func_461(2157.111f, 1974.473f, 93.7061f, 22.0171f);
	func_461(1499.479f, 1827.166f, 106.4998f, 42.618f);
	func_461(2895.405f, 3888.189f, 52.0109f, 213.3904f);
	func_461(1639.252f, 3852.798f, 33.7036f, 277.8739f);
	func_461(16.3756f, 3623.829f, 39.0889f, 138.8624f);
	func_461(-202.3551f, 4176.263f, 42.1762f, 357.9106f);
	func_461(378.6819f, 4405.726f, 61.3992f, 2.2521f);
	func_461(763.3045f, 4180.816f, 39.6263f, 313.7911f);
	func_461(1410.916f, 4363.65f, 41.6243f, 351.9106f);
	func_461(2474.189f, 4460.482f, 34.2448f, 338.6556f);
	func_461(2787.091f, 4896.004f, 35.5118f, 346.5345f);
	func_461(3787.385f, 4446.902f, 3.6951f, 322.4305f);
	func_461(3283.627f, 5161.83f, 17.7122f, 120.0761f);
	func_461(2444.642f, 5016.759f, 45.2854f, 256.7558f);
	func_461(2071.367f, 4807.796f, 40.6377f, 147.898f);
	func_461(2012.781f, 5129.742f, 44.5825f, 92.6079f);
	func_461(1710.641f, 4657.467f, 42.4848f, 108.8281f);
	func_461(2498.991f, 5641.692f, 45.6963f, 48.9642f);
	func_461(2250.176f, 5968.912f, 49.0116f, 15.0599f);
	func_461(1853.773f, 6404.851f, 45.2075f, 116.4965f);
	func_461(866.8867f, 6512.98f, 20.7883f, 248.893f);
	func_461(205.2754f, 7012.687f, 1.0453f, 196.8449f);
	func_461(-212.0001f, 6565.548f, 9.8635f, 152.7291f);
	func_461(-573.4517f, 6167.307f, 5.3904f, 302.589f);
	func_461(206.7901f, 6402.567f, 30.3805f, 81.5939f);
	func_461(-731.3629f, 5800.728f, 16.5887f, 196.4081f);
	func_461(-664.7944f, 5460.415f, 49.6868f, 157.5173f);
	func_461(-601.0768f, 5294.568f, 69.2145f, 27.8272f);
	func_461(-532.1605f, 4971.026f, 146.1112f, 172.7688f);
	func_461(-1546.969f, 5010.706f, 64.4016f, 255.285f);
	func_461(-2170.899f, 4459.51f, 61.8337f, 141.4564f);
	func_461(-2504.334f, 3627.644f, 12.7211f, 175.0945f);
	func_461(-1216.204f, 4457.368f, 29.5562f, 16.7363f);
	func_461(797.6583f, 5704.728f, 697.4423f, 102.9245f);
	func_461(159.5193f, 5212.952f, 572.7617f, 303.589f);
	func_461(2867.312f, 5944.487f, 356.7372f, 56.172f);
	func_461(10.6515f, 6334.516f, 30.2366f, 336.7196f);
	func_461(1472.189f, 6359.462f, 22.7034f, 289.4279f);
	func_461(-618.1378f, 3993.369f, 120.0915f, 212.0991f);
	func_461(-885.1862f, 4428.847f, 19.9719f, 90.7754f);
	func_461(215.323f, 7381.881f, 13.4278f, 203.1559f);
	func_461(3635.046f, 5669.953f, 7.7871f, 32.6794f);
	func_461(3646.407f, 4997.506f, 11.2006f, 19.0908f);
	func_461(3546.356f, 2523.698f, 5.4951f, 29.0676f);
	func_461(2193.448f, 5574.355f, 52.7895f, 268.6339f);
	func_461(-2165.357f, 5170.346f, 13.5525f, 39.8589f);
	func_461(-1606.75f, 4742.162f, 52.9203f, 53.6989f);
	func_461(-945.4f, 4611.085f, 237.932f, 276.5363f);
	func_461(-2415.631f, 4221.8f, 8.7558f, 303.5893f);
	func_461(809.2775f, 3227.627f, 37.6705f, 234.2991f);
	func_461(1101.399f, 3436.295f, 32.8756f, 310.4154f);
	func_461(1691.926f, 3486.635f, 35.8127f, 339.3695f);
	func_461(2407.986f, 3537.302f, 72.5395f, 355.4901f);
	func_461(3051.449f, 2725.313f, 62.3978f, 331.4178f);
	func_461(2527.302f, 2009.074f, 18.9235f, 346.0563f);
	func_461(1840.181f, 2499.208f, 44.7693f, 301.6813f);
	func_461(1787.824f, 3067.684f, 61.2278f, 70.872f);
	func_461(1382.367f, 3003.334f, 39.7661f, 340.408f);
	func_461(244.4017f, 2637.836f, 44.6054f, 240.1419f);
	func_461(-251.8209f, 2205.487f, 128.884f, 195.6026f);
	func_461(-541.051f, 2005.346f, 202.3307f, 274.6922f);
	func_461(-2039.825f, 1960.994f, 187.7879f, 312.9809f);
	func_461(-1603.197f, 237.8279f, 58.3225f, 263.857f);
	func_461(-1724.508f, -2970.292f, 13.1465f, 4.1473f);
	func_461(1192.917f, 1839.359f, 77.4385f, 170.34f);
	func_461(3300.137f, -99.0274f, 11.6522f, 185.3741f);
	func_461(2849.717f, -1461.166f, 12.5068f, 52.3716f);
	func_461(2306.17f, -2118.141f, 2.322f, 18.5464f);
	func_461(2163.642f, 135.7375f, 226.6112f, 117.1583f);
	func_461(2527.796f, -90.4654f, 93.1274f, 110.8862f);
	func_461(1774.983f, 1676.629f, 78.209f, 142.8201f);
	func_461(1623.241f, 1265.085f, 86.7423f, 134.636f);
	func_461(1732.167f, 2169.269f, 82.2189f, 350.0135f);
	func_461(2167.046f, 1339.68f, 74.7227f, 32.7734f);
	func_461(712.9243f, 1727.998f, 182.7801f, 68.4225f);
	func_461(151.0186f, 1429.878f, 259.7057f, 36.1885f);
	func_461(-1662.585f, 4284.667f, 80.2819f, 23.3258f);
	func_461(-1323.416f, 5349.778f, 2.3383f, 79.3172f);
	func_461(-2294.521f, 2342.52f, 0.2262f, 44.7661f);
	func_461(-892.6975f, 5271.815f, 84.9171f, 112.4479f);
	func_461(470.1919f, 3115.264f, 40.5447f, 77.6964f);
	func_461(-2673.124f, 2957.395f, 7.3939f, 285.1781f);
	func_461(-3192.201f, 815.0291f, 2.7957f, 260.1565f);
	func_461(945.9874f, -3277.793f, 4.8982f, 266.6732f);
	func_461(126.3235f, -1658.512f, 32.9414f, 28.4566f);
	func_461(1144.835f, -1688.646f, 35.1291f, 6.0452f);
	func_461(944.4474f, -1369.549f, 12.3266f, 314.3879f);
	func_461(937.8714f, -896.6146f, 49.0496f, 179.602f);
	func_461(-50.8218f, -894.3738f, 40.4824f, 157.0664f);
	func_461(-1159.234f, -1111.134f, 8.7345f, 300.7512f);
	func_461(-1729.466f, -972.845f, 5.2263f, 14.1883f);
	func_461(-251.1976f, 310.9189f, 96.5312f, 177.6596f);
	func_461(-261.0635f, 192.8841f, 84.9561f, 104.3934f);
	func_461(-769.5164f, -1996.682f, 7.8903f, 136.2945f);
	func_461(-1345.348f, -2123.383f, 12.9441f, 145.1976f);
	func_461(576.7401f, -657.0758f, 12.5207f, 347.7486f);
	func_461(2640.831f, 3200.896f, 52.1493f, 273.1668f);
	func_461(1995.588f, -925.1763f, 78.0824f, 77.8221f);
	func_461(-500.2817f, -2111.103f, 8.9576f, 132.9903f);
	func_461(-725.0269f, -2355.187f, 14.8438f, 227.8691f);
	func_461(-980.7766f, -2488.198f, 14.0523f, 150.2897f);
	func_461(-1127.178f, -1696.759f, 4.2742f, 29.4122f);
	func_461(-1212.316f, -1338.762f, 4.4687f, 109.8316f);
	func_461(-1373.831f, -1274.4f, 4.6296f, 28.0177f);
	func_461(-1531.726f, -1037.846f, 5.8012f, 226.8082f);
	func_461(-1243.753f, -963.8779f, 3.2555f, 82.051f);
	func_461(-1161.864f, -725.671f, 20.534f, 37.0823f);
	func_461(-1071.658f, -863.8865f, 4.7704f, 302.8431f);
	func_461(-869.8373f, -894.2067f, 15.7782f, 195.2182f);
	func_461(-847.3995f, -1198.361f, 5.8987f, 224.6693f);
	func_461(-59.1982f, 1031.608f, 233.5404f, 342.8009f);
	func_461(-498.3894f, -950.4281f, 23.8303f, 170.6251f);
	func_461(-668.458f, -451.6636f, 35.9803f, 263.7879f);
	func_461(-538.0801f, -255.6042f, 36.4835f, 28.044f);
	func_461(-674.919f, -35.9837f, 39.1f, 107.0653f);
	func_461(-957.8153f, -347.7798f, 38.5257f, 296.3945f);
	func_461(-1399.278f, 122.7592f, 54.9624f, 179.943f);
	func_461(-1259.903f, 600.5897f, 139.911f, 307.5361f);
	func_461(-1161.234f, 931.7809f, 198.3958f, 312.1524f);
	func_461(-929.2317f, 1127.948f, 220.3745f, 192.5778f);
	func_461(-625.6737f, 979.0534f, 241.17f, 105.5179f);
	func_461(-281.6504f, 736.922f, 208.7457f, 201.0901f);
	func_461(-799.7258f, 575.9078f, 125.8626f, 200.7426f);
	func_461(-111.9565f, 1361.998f, 311.2291f, 309.7981f);
	func_461(161.9947f, 742.2007f, 207.3627f, 24.4887f);
	func_461(-591.4622f, -1443.56f, 11.0649f, 55.8083f);
	func_461(48.3094f, -1466.97f, 34.0209f, 46.3598f);
	func_461(573.138f, -903.282f, 10.653f, 359.9055f);
	func_461(444.6478f, -584.4781f, 28.4022f, 263.8702f);
	func_461(590.5396f, -128.7431f, 72.7058f, 324.8725f);
	func_461(633.0765f, -1477.419f, 9.6378f, 13.7451f);
	func_461(567.5936f, -2316.353f, 5.8157f, 358.2805f);
	func_461(154.683f, -2406.677f, 5.9026f, 356.73f);
	func_461(-407.8167f, -2742.427f, 6.6763f, 192.47f);
	func_461(77.3055f, -2723.974f, 5.9071f, 269.1819f);
	func_461(664.1844f, -2986.192f, 5.9477f, 169.3143f);
	func_461(1015.701f, -2310.8f, 30.4119f, 351.451f);
	func_461(1105.497f, -1903.685f, 37.37f, 141.7318f);
	func_461(1397.402f, -2375.49f, 63.0531f, 356.6557f);
	func_461(1675.434f, -1547.791f, 112.5916f, 343.2593f);
	func_461(1454.21f, -1000.43f, 48.8159f, 85.0815f);
	func_461(2183.739f, -582.2708f, 96.7788f, 309.7693f);
	func_461(2543.149f, 142.0665f, 99.4934f, 165.3156f);
	func_461(2596.192f, 751.3882f, 91.457f, 196.0535f);
	func_461(2603.688f, 1235.993f, 44.3592f, 176.2542f);
	func_461(2122.656f, 2778.532f, 50.0208f, 309.4357f);
	func_461(2396.602f, 3264.547f, 48.7285f, 214.5686f);
	func_461(2322.511f, 3893.286f, 34.9455f, 312.4513f);
	func_461(581.2474f, 778.2208f, 201.9709f, 228.6589f);
	func_461(1118.769f, 790.2458f, 149.7879f, 327.737f);
	func_461(1312.517f, 1248.61f, 106.7748f, 356.9769f);
	func_461(1309.661f, 1537.113f, 96.2337f, 6.4865f);
	func_461(1062.127f, 2084.489f, 52.5033f, 26.2563f);
	func_461(1521.927f, 2010.445f, 99.3948f, 355.0577f);
	func_461(1370.713f, 2313.501f, 79.9254f, 33.3623f);
	func_461(907.667f, 2678.261f, 40.7875f, 261.5676f);
	func_461(699.3987f, 2441.128f, 61.3254f, 209.2828f);
	func_461(436.9572f, 2382.852f, 50.022f, 322.7864f);
	func_461(439.7385f, 2086.472f, 100.9622f, 336.0373f);
	func_461(-628.1458f, 2815.875f, 36.9998f, 300.3421f);
	func_461(-1374.838f, 2402.95f, 30.041f, 288.2213f);
	func_461(-1845.524f, -708.1555f, 9.1302f, 227.8206f);
	func_461(-2441.261f, -319.8737f, 3.6674f, 231.7609f);
	func_461(-2994.104f, 21.4889f, 7.8942f, 241.8965f);
	func_461(-2825.43f, 1423.209f, 100.6655f, 175.2131f);
	func_461(-3091.066f, 1757.376f, 35.0735f, 174.5508f);
	func_461(-3007.828f, 2099.017f, 40.1434f, 332.562f);
	func_461(-1966.473f, 2473.978f, 1.1161f, 204.7869f);
	func_461(-2281.606f, 3412.213f, 32.0105f, 341.204f);
	func_461(456.3445f, 6699.446f, 7.8774f, 230.5219f);
	func_461(1191.518f, 6560.621f, 2.9303f, 86.2098f);
	func_461(2595.129f, 5402.892f, 41.7871f, 10.6124f);
	func_461(644.2881f, -1840.464f, 9.0907f, 354.3967f);
	func_461(-679.2219f, -1828.494f, 27.7167f, 242.8403f);
	func_461(1054.276f, -1785.81f, 34.5576f, 331.6062f);
	func_461(-86.9453f, -1710.444f, 28.4542f, 178.6759f);
	func_461(81.025f, -1283.182f, 28.2867f, 109.4532f);
	func_461(1276.439f, -1275.396f, 41.116f, 130.9274f);
	func_461(716.5391f, -2255.983f, 28.2272f, 277.8256f);
	func_461(1719.191f, -1655.754f, 111.5146f, 219.6488f);
	func_461(121.7027f, -2965.721f, 6.0714f, 214.9908f);
	func_461(-500.846f, -2111.083f, 8.0609f, 188.9715f);
	func_461(-1196.347f, -2169.974f, 12.195f, 192.0654f);
}

void func_461(struct<3> Param0, float fParam3)
{
	Global_2412214[iLocal_1215 /*3*/] = { Param0 };
	Global_2413112[iLocal_1215] = fParam3;
	iLocal_1215++;
}

