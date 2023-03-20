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
	int iLocal_107[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_113 = 0;
	bool bLocal_114 = 0;
	var uLocal_115[5] = { 0, 0, 0, 0, 0 };
	int iLocal_121 = 0;
	var uLocal_122 = 0;
	struct<10> Local_123 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<30> Local_133 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 } ;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	bool bLocal_165 = 0;
	struct<3> Local_166[32];
	int iLocal_263 = 0;
	var uLocal_264 = 0;
	int iLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 12;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
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
	var uLocal_958 = 1065353216;
	int iLocal_959 = 0;
	int iLocal_960 = 0;
	int iLocal_961 = 0;
	int iLocal_962 = 0;
	int iLocal_963 = 0;
	int iLocal_964 = 0;
	var uLocal_965 = 16;
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
	int iLocal_1136 = 0;
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
	int iLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	bool bLocal_1156 = 0;
	int iLocal_1157 = 0;
	int iLocal_1158 = 0;
	var uLocal_1159 = 0;
	int iLocal_1160 = 0;
	int iLocal_1161 = 0;
	int iLocal_1162 = 0;
	struct<3> Local_1163 = { 0, 0, 0 } ;
	struct<3> Local_1166[1];
	var uLocal_1170[1] = { 0 };
	var uLocal_1172[1] = { 0 };
	int iLocal_1174 = 0;
	int iLocal_1175 = 0;
	int iLocal_1176 = 0;
	int iLocal_1177 = 0;
	int iLocal_1178 = 0;
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
	iLocal_265 = 6;
	iLocal_1147 = 10000;
	func_414();
	if (unk_0xA86CA03D9749EEB3())
	{
		if (!func_410(ScriptParam_0))
		{
			if (unk_0xD9E8CA806A80203D())
			{
				Local_133.f_24 = 8;
			}
			func_404(1);
		}
	}
	while (true)
	{
		func_403();
		if (func_393())
		{
			if (unk_0xA86CA03D9749EEB3())
			{
				if (unk_0xD9E8CA806A80203D())
				{
					Local_133.f_24 = 8;
				}
			}
			func_404(1);
		}
		if (unk_0x8188FDE7090D3AF6() != iLocal_959 && !unk_0xD9E8CA806A80203D())
		{
			if (unk_0xD9E8CA806A80203D())
			{
				Local_133.f_24 = 8;
			}
			func_404(1);
		}
		if (unk_0xF3B8A064D228878B(unk_0xF8A8E20BC7D94A26()) != Local_133.f_5)
		{
			if (unk_0xD9E8CA806A80203D())
			{
				Local_133.f_24 = 8;
			}
			func_404(1);
		}
		unk_0xBCBE2329B85B96C0();
		iLocal_1177 = 0;
		iLocal_1178 = 0;
		switch (func_392(unk_0x848AF823A8EA3C62()))
		{
			case 0:
				if (func_391() == 1)
				{
					func_390();
					func_389();
					Local_166[unk_0x848AF823A8EA3C62() /*3*/] = 1;
				}
				else if (func_391() == 5)
				{
					Local_166[unk_0x848AF823A8EA3C62() /*3*/] = 3;
				}
				break;
			
			case 1:
				func_373();
				if (func_391() == 1)
				{
					func_262();
				}
				else if (func_391() == 5)
				{
					Local_166[unk_0x848AF823A8EA3C62() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_261(&(Local_133.f_25));
				if (func_260(&(Local_133.f_25)))
				{
					Local_166[unk_0x848AF823A8EA3C62() /*3*/] = 5;
				}
				break;
			
			case 2:
				Local_166[unk_0x848AF823A8EA3C62() /*3*/] = 5;
			
			case 5:
				func_404(1);
				break;
		}
		func_259();
		if (func_258())
		{
			func_251();
		}
		if (unk_0xD9E8CA806A80203D())
		{
			switch (func_391())
			{
				case 0:
					if (func_228())
					{
						func_390();
						Local_133.f_0 = 1;
					}
					break;
				
				case 1:
					func_208();
					func_202();
					func_146();
					if (func_138())
					{
						Local_133.f_0 = 5;
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
	if (func_130(unk_0x0C1D3C552325765B(), 1, 1))
	{
		if (unk_0x08BA6DD398CA197C(iLocal_263, 6) && !unk_0x08BA6DD398CA197C(iLocal_263, 7))
		{
			if (!func_129(0))
			{
				if (!func_258())
				{
					func_127(13);
					func_111(func_124(13), 6, 2, 1);
				}
				else
				{
					func_127(44);
					func_111(func_124(44), 6, 2, 1);
				}
				unk_0x88B0F0DC270164B7(&iLocal_263, 7);
				Local_133.f_0 = 5;
			}
		}
		if (unk_0x08BA6DD398CA197C(iLocal_263, 5) && !unk_0x08BA6DD398CA197C(iLocal_263, 6))
		{
			if (func_129(0))
			{
				unk_0x88B0F0DC270164B7(&iLocal_263, 6);
			}
		}
		if (!unk_0x08BA6DD398CA197C(iLocal_263, 5))
		{
			if (func_109(&uLocal_1132, 5000, 0))
			{
				if (!func_258())
				{
					func_108(&uLocal_965, 3, 0, "FM_MERRYWEATHER", 0, 1);
					if (func_12(&uLocal_965, 85, "CT_AUD", "MPCT_9", 0, 0))
					{
						unk_0x88B0F0DC270164B7(&iLocal_263, 5);
					}
				}
				else
				{
					func_11(1);
					if (func_6(1))
					{
						func_108(&uLocal_965, 3, 0, "EXECPA_MALE", 0, 1);
						if (func_12(&uLocal_965, func_2(1), "EXCALAU", "EXCAL_HPROBM", 0, 0))
						{
							unk_0x88B0F0DC270164B7(&iLocal_263, 5);
						}
					}
					else
					{
						func_108(&uLocal_965, 2, 0, "EXECPA_FEMALE", 0, 1);
						if (func_12(&uLocal_965, func_2(1), "EXCALAU", "EXCAL_HPROBF", 0, 0))
						{
							unk_0x88B0F0DC270164B7(&iLocal_263, 5);
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
			Global_101553.f_32740[22 /*29*/].f_24[Global_14443] = 1;
			return 22;
		}
		else
		{
			return 75;
		}
	}
	if (bParam0 && func_3())
	{
		Global_101553.f_32740[22 /*29*/].f_24[Global_14443] = 1;
		return 22;
	}
	return 74;
}

int func_3()
{
	int iVar0;
	
	iVar0 = func_5(unk_0x0C1D3C552325765B());
	if (((iVar0 != unk_0x0C1D3C552325765B() && iVar0 != func_4()) && unk_0xCB129F9A01D14082(iVar0)) && iVar0 != -1)
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
		return Global_1614576[iParam0 /*324*/].f_10;
	}
	return func_4();
}

bool func_6(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		iVar0 = func_5(unk_0x0C1D3C552325765B());
		if (func_3())
		{
			if (func_10(iVar0))
			{
				return 1;
			}
			return 0;
		}
	}
	return func_7(3202, -1, 0) != 0;
}

int func_7(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2491469[iParam0 /*3*/][func_8(iParam1)];
	if (unk_0x8A3351ECF43DB941(uVar0, &uVar1, -1))
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

int func_9()
{
	return Global_1312731;
}

bool func_10(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 29);
}

void func_11(bool bParam0)
{
	if (bParam0)
	{
		Global_1572930 = 1;
	}
	else
	{
		Global_1572930 = 0;
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
	
	if (unk_0x509383441597090D(sParam2))
	{
		return 0;
	}
	if (unk_0x8BC27E98D5626ED8(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0x509383441597090D(sParam3))
	{
		return 0;
	}
	if (unk_0x8BC27E98D5626ED8(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69());
	iVar1 = func_104(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0x509383441597090D(sParam7))
	{
		iVar2 = unk_0x3BB8D1C5FAAB25B3(sParam7);
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
	Global_1336446.f_40.f_1 = iParam0;
	Global_1336446.f_40.f_2 = iParam1;
	Global_1336446.f_40.f_3 = iParam2;
	StringCopy(&(Global_1336446.f_40.f_4), sParam3, 16);
	Global_1336446.f_40.f_8 = iParam4;
	Global_1336446.f_40.f_9 = iParam5;
	Global_1336446.f_40.f_14 = iParam6;
	func_15(iParam4);
	func_93();
	Global_1336446.f_40.f_13 = unk_0x992BA56254396683(unk_0x4B50AAB32FBE0483(), 7000);
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
	Global_1336446.f_40.f_10 = 0;
}

void func_17()
{
	Global_1336446.f_40.f_10 = 1;
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
	return iParam0 > Global_1336446.f_40.f_8;
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
	Global_1336446.f_40.f_11 = unk_0x992BA56254396683(unk_0x4B50AAB32FBE0483(), iParam0);
	Global_1336446.f_40.f_12 = 1;
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
		sVar2 = unk_0xCF66111B26743875(iVar0);
		iVar1 = func_50(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0xC099AB04552E978B(unk_0x4B50AAB32FBE0483(), Global_1336446.f_40.f_13))
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
	if (!unk_0x509383441597090D(sParam8))
	{
		iVar6++;
		if (!unk_0x509383441597090D(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x28C1B9853548BD8E(sVar4, " "))
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
		if (unk_0x08BA6DD398CA197C(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x08BA6DD398CA197C(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x509383441597090D(sVar2))
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
	if (unk_0x08BA6DD398CA197C(iParam4, 0))
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
	Global_1336446.f_57 = 0;
	Global_1336446.f_57.f_1 = 0;
}

void func_25()
{
	Global_1336446.f_40 = 3;
}

void func_26()
{
	unk_0x88B0F0DC270164B7(&Global_2313, 8);
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
			unk_0x88B0F0DC270164B7(&Global_2577921, 0);
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
	if (unk_0x28C1B9853548BD8E(sParam14, sParam15))
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
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			if (unk_0x2CCFE2A750B8D80F(unk_0xA0081090911D13E5()))
			{
				return 0;
			}
		}
		if (Global_2577906 == 1)
		{
			return 0;
		}
		if (unk_0xA96867DD0A63C62C(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0xA96867DD0A63C62C(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_39() == 0)
	{
		func_37();
		return 0;
	}
	func_36(Global_2577905);
	StringCopy(&(Global_2576656[Global_2577905 /*104*/]), sParam1, 64);
	Global_2576656[Global_2577905 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_2576656[Global_2577905 /*104*/].f_24 = iParam2;
	}
	Global_2576656[Global_2577905 /*104*/].f_25 = iParam7;
	Global_2576656[Global_2577905 /*104*/].f_26 = uParam8;
	Global_2576656[Global_2577905 /*104*/].f_29 = uParam9;
	Global_2576656[Global_2577905 /*104*/].f_30 = uParam12;
	Global_2576656[Global_2577905 /*104*/].f_31 = uParam11;
	Global_2576656[Global_2577905 /*104*/].f_28 = 0;
	Global_2576656[Global_2577905 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_2576656[Global_2577905 /*104*/].f_33), sParam4, 64);
	Global_2576656[Global_2577905 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_2576656[Global_2577905 /*104*/].f_50), sParam5, 64);
	Global_2576656[Global_2577905 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_2576656[Global_2577905 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_2576656[Global_2577905 /*104*/].f_83), sParam15, 64);
	func_40();
	switch (iParam16)
	{
		case 3:
			Global_2576656[Global_2577905 /*104*/].f_99[Global_14443] = 1;
			break;
		
		case 0:
			Global_2576656[Global_2577905 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_2576656[Global_2577905 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_2576656[Global_2577905 /*104*/].f_99[1] = 1;
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
				Global_2577906 = 1;
				break;
			
			case 0:
				Global_2577906 = 1;
				break;
			
			case 2:
				Global_2577906 = 1;
				break;
			
			case 1:
				Global_2577906 = 1;
				break;
			}
	}
	Global_16814[Global_2577905] = 0;
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
				unk_0xAB16AADE80707D47(-1, "Text_Arrive_Tone", &Global_14432, 1);
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
								if (unk_0x08BA6DD398CA197C(Global_2314, 3))
								{
									iVar2 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14608 = 0;
								}
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_31(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(iVar2);
								unk_0xE73340DA551C95E1();
							}
							if (Global_2451773)
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
									if (Global_101553.f_12996[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_101553.f_12996[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_101553.f_12996[iVar3 /*104*/].f_99[Global_14443] == 1)
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
								if (Global_69617)
								{
									iVar4 = 0;
									iVar4 = Global_2576655;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_2576656[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_2576656[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_2576656[iVar5 /*104*/].f_99[Global_14443] == 1)
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
											iVar6 = Global_36911;
											break;
										
										case 1:
											iVar6 = Global_36912;
											break;
										
										case 2:
											iVar6 = Global_36913;
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
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_31(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(Global_2319);
								unk_0xE73340DA551C95E1();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x08BA6DD398CA197C(Global_2314, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_31(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(iVar7);
								unk_0xE73340DA551C95E1();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x08BA6DD398CA197C(Global_2314, 3))
								{
									iVar8 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14608 = 0;
								}
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_31(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(iVar8);
								unk_0xE73340DA551C95E1();
							}
							else if (iVar1 == 8)
							{
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_31(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(42);
								unk_0xE73340DA551C95E1();
							}
							else if ((iVar1 == 23 && unk_0x28C1B9853548BD8E(&(Global_2320[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x08BA6DD398CA197C(Global_2314, 6))
							{
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_31(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(42);
								unk_0xE73340DA551C95E1();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1613316.f_1;
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
	unk_0xB9D4F4DE7E7EC038(uParam0, sParam1);
	unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x509383441597090D(sParam7))
	{
		func_31(sParam7);
	}
	if (!unk_0x509383441597090D(sParam8))
	{
		func_31(sParam8);
	}
	if (!unk_0x509383441597090D(sParam9))
	{
		func_31(sParam9);
	}
	if (!unk_0x509383441597090D(sParam10))
	{
		func_31(sParam10);
	}
	if (!unk_0x509383441597090D(sParam11))
	{
		func_31(sParam11);
	}
	unk_0xE73340DA551C95E1();
}

void func_31(char* sParam0)
{
	unk_0x709662CF2BD061A4(sParam0);
	unk_0x1E77BE8F4283FA05();
}

bool func_32(int iParam0)
{
	return Global_35775 == iParam0;
}

void func_33(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xB9D4F4DE7E7EC038(uParam0, sParam1);
	unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xE73340DA551C95E1();
}

bool func_34()
{
	return Global_1315229;
}

void func_35(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_101553.f_12906[iParam0 /*20*/].f_8;
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
	
	uVar0 = unk_0x8A1006B6887A61DE();
	uVar1 = unk_0x4A29A51562AC24A5();
	uVar2 = unk_0x7C42343912622BB6();
	uVar3 = unk_0x5EE1E0D1EBF5F7F6();
	uVar4 = unk_0x55ED786EB10EA740() + 1;
	uVar5 = unk_0x3258DF33389FB224();
	Global_2576656[iParam0 /*104*/].f_18 = uVar0;
	Global_2576656[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_2576656[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_2576656[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_2576656[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_2576656[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_37()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_2577905 = 11;
	Global_2576656[Global_2577905 /*104*/].f_18 = -1;
	Global_2576656[Global_2577905 /*104*/].f_18.f_1 = 0;
	Global_2576656[Global_2577905 /*104*/].f_18.f_2 = 0;
	Global_2576656[Global_2577905 /*104*/].f_18.f_3 = 0;
	Global_2576656[Global_2577905 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_38(Global_2576656[iVar2 /*104*/].f_18, Global_2576656[Global_2577905 /*104*/].f_18))
		{
			Global_2577905 = iVar2;
		}
		iVar2++;
	}
	Global_2576656[Global_2577905 /*104*/].f_24 = 1;
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
		if (Global_2576656[iVar2 /*104*/].f_24 == 0)
		{
			Global_2577905 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_2577905 = 11;
	Global_2576656[Global_2577905 /*104*/].f_18 = -1;
	Global_2576656[Global_2577905 /*104*/].f_18.f_1 = 0;
	Global_2576656[Global_2577905 /*104*/].f_18.f_2 = 0;
	Global_2576656[Global_2577905 /*104*/].f_18.f_3 = 0;
	Global_2576656[Global_2577905 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_2576656[iVar2 /*104*/].f_24 == 0 || Global_2576656[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_38(Global_2576656[iVar2 /*104*/].f_18, Global_2576656[Global_2577905 /*104*/].f_18))
			{
				Global_2577905 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_2577905 == 11)
	{
		return 0;
	}
	Global_2576656[Global_2577905 /*104*/].f_99[0] = 0;
	Global_2576656[Global_2577905 /*104*/].f_99[1] = 0;
	Global_2576656[Global_2577905 /*104*/].f_99[2] = 0;
	return 1;
}

void func_40()
{
	if (func_32(14))
	{
		if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
		{
			if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[2 /*29*/])
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
		if (Global_69617)
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
	return Global_101553.f_1991.f_539.f_3549;
}

void func_42()
{
	int iVar0;
	
	if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
	{
		if (func_45(Global_101553.f_1991.f_539.f_3549) != unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()))
		{
			iVar0 = func_44(unk_0xA0081090911D13E5());
			if (func_43(iVar0) && (!func_32(14) || Global_100505))
			{
				if (Global_101553.f_1991.f_539.f_3549 != iVar0 && func_43(Global_101553.f_1991.f_539.f_3549))
				{
					Global_101553.f_1991.f_539.f_3550 = Global_101553.f_1991.f_539.f_3549;
				}
				Global_101553.f_1991.f_539.f_3551 = iVar0;
				Global_101553.f_1991.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101553.f_1991.f_539.f_3549 != 145)
			{
				Global_101553.f_1991.f_539.f_3551 = Global_101553.f_1991.f_539.f_3549;
			}
			return;
		}
	}
	Global_101553.f_1991.f_539.f_3549 = 145;
}

bool func_43(int iParam0)
{
	return iParam0 < 3;
}

int func_44(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD3FACCDA4D66AEAD(iParam0))
	{
		iVar1 = unk_0x705BC1BB91F530B5(iParam0);
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
		return Global_101553.f_32740[iParam0 /*29*/];
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
			unk_0x88B0F0DC270164B7(&Global_2577921, 0);
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
	if (unk_0x509383441597090D(sParam0))
	{
		return sLocal_18;
	}
	if (unk_0x28C1B9853548BD8E(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_48(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0xFFC9DE7E93AEAE21(sParam0);
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
	Global_1353135[iVar0 /*5*/].f_4 = 1;
	return Global_1353135[iVar0 /*5*/].f_2;
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
	if (Global_1353298)
	{
		if (iParam0 == Global_1353298.f_1)
		{
			return;
		}
	}
	if (func_52(iParam0))
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

int func_52(int iParam0)
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

int func_53(int iParam0)
{
	int iVar0;
	
	if (!func_130(iParam0, 0, 1))
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
	func_55(&(Global_1353135[iVar32 /*5*/]));
	Global_1353296 = (Global_1353296 - 1);
}

void func_55(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_4();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0xA86CA03D9749EEB3())
	{
		uParam0->f_3 = unk_0x4B50AAB32FBE0483();
	}
}

void func_56()
{
	Global_1336446.f_40.f_9 = 4;
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
		sVar2 = unk_0xCF66111B26743875(iVar0);
		iVar1 = func_50(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0xC099AB04552E978B(unk_0x4B50AAB32FBE0483(), Global_1336446.f_40.f_13))
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
	if (!unk_0x509383441597090D(sParam8))
	{
		iVar6++;
		if (!unk_0x509383441597090D(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x28C1B9853548BD8E(sVar4, " "))
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
		if (unk_0x08BA6DD398CA197C(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x08BA6DD398CA197C(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x509383441597090D(sVar2))
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
	if (unk_0x08BA6DD398CA197C(iParam4, 0))
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
	Global_1336446.f_40.f_9 = 3;
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
	
	unk_0x09C86C0C5CA26B1E(&Global_2313, 10);
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
			Global_2923[3 /*6*/] = { Global_101553.f_32740[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			unk_0x88B0F0DC270164B7(&Global_2313, 1);
			unk_0x88B0F0DC270164B7(&Global_2313, 7);
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
	if (unk_0x28C1B9853548BD8E(sParam14, sParam15))
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
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			if (unk_0x2CCFE2A750B8D80F(unk_0xA0081090911D13E5()))
			{
				return 0;
			}
		}
		if (Global_101553.f_12906[Global_14443 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0xA96867DD0A63C62C(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0xA96867DD0A63C62C(joaat("apptextmessage")) > 0)
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
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/]), sParam1, 64);
	Global_101553.f_12996[Global_16812 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_101553.f_12996[Global_16812 /*104*/].f_24 = iParam2;
	}
	Global_101553.f_12996[Global_16812 /*104*/].f_25 = iParam7;
	Global_101553.f_12996[Global_16812 /*104*/].f_26 = uParam8;
	Global_101553.f_12996[Global_16812 /*104*/].f_29 = uParam9;
	Global_101553.f_12996[Global_16812 /*104*/].f_30 = uParam12;
	Global_101553.f_12996[Global_16812 /*104*/].f_31 = uParam11;
	Global_101553.f_12996[Global_16812 /*104*/].f_28 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/].f_33), sParam4, 64);
	Global_101553.f_12996[Global_16812 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/].f_50), sParam5, 64);
	Global_101553.f_12996[Global_16812 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/].f_83), sParam15, 64);
	if (unk_0x08BA6DD398CA197C(Global_2313, 10))
	{
		Global_101553.f_12996[Global_16812 /*104*/].f_99[0] = 1;
		Global_101553.f_12996[Global_16812 /*104*/].f_99[1] = 1;
		Global_101553.f_12996[Global_16812 /*104*/].f_99[2] = 1;
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
				Global_101553.f_12996[Global_16812 /*104*/].f_99[Global_14443] = 1;
				break;
			
			case 0:
				Global_101553.f_12996[Global_16812 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_101553.f_12996[Global_16812 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_101553.f_12996[Global_16812 /*104*/].f_99[1] = 1;
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
		if (unk_0x08BA6DD398CA197C(Global_2313, 10))
		{
			Global_101553.f_12906[0 /*20*/].f_17 = 1;
			Global_101553.f_12906[1 /*20*/].f_17 = 1;
			Global_101553.f_12906[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_101553.f_12906[Global_14443 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_101553.f_12906[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_101553.f_12906[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_101553.f_12906[1 /*20*/].f_17 = 1;
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
				unk_0xAB16AADE80707D47(-1, "Text_Arrive_Tone", &Global_14432, 1);
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
	
	uVar0 = unk_0x8A1006B6887A61DE();
	uVar1 = unk_0x4A29A51562AC24A5();
	uVar2 = unk_0x7C42343912622BB6();
	uVar3 = unk_0x5EE1E0D1EBF5F7F6();
	uVar4 = unk_0x55ED786EB10EA740() + 1;
	uVar5 = unk_0x3258DF33389FB224();
	Global_101553.f_12996[iParam0 /*104*/].f_18 = uVar0;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_64()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69617)
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
	Global_101553.f_12996[Global_16812 /*104*/].f_18 = -1;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_65(Global_101553.f_12996[iVar2 /*104*/].f_18, Global_101553.f_12996[Global_16812 /*104*/].f_18))
		{
			Global_16812 = iVar2;
		}
		iVar2++;
	}
	Global_101553.f_12996[Global_16812 /*104*/].f_24 = 1;
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
	
	if (Global_69617)
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
		if (Global_101553.f_12996[iVar2 /*104*/].f_24 == 0)
		{
			Global_16812 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16812 = 34;
	Global_101553.f_12996[Global_16812 /*104*/].f_18 = -1;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_101553.f_12996[iVar2 /*104*/].f_24 == 0 || Global_101553.f_12996[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_65(Global_101553.f_12996[iVar2 /*104*/].f_18, Global_101553.f_12996[Global_16812 /*104*/].f_18))
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
	Global_101553.f_12996[Global_16812 /*104*/].f_99[0] = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_99[1] = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_99[2] = 0;
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
	unk_0x09C86C0C5CA26B1E(&Global_2313, 10);
	iVar0 = 3;
	if (func_62(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3020 = iParam10;
			Global_2923[3 /*6*/] = { Global_101553.f_32740[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			StringCopy(&Global_3001, sParam5, 64);
			unk_0x88B0F0DC270164B7(&Global_2313, 1);
			unk_0x88B0F0DC270164B7(&Global_2313, 7);
		}
		return 1;
	}
	return 0;
}

int func_68(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
	}
	if (unk_0x8E30A8C5F10F6DD2(unk_0xA0081090911D13E5()))
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
	
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		if (unk_0x8E30A8C5F10F6DD2(unk_0xA0081090911D13E5()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0x08BA6DD398CA197C(iParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0x08BA6DD398CA197C(iParam4, 4))
	{
		bVar0 = func_85(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_75(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0x08BA6DD398CA197C(iParam4, 3))
		{
			func_74(1);
		}
		if (unk_0x08BA6DD398CA197C(iParam4, 5))
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
	Global_2489614 = 0;
}

void func_71()
{
	Global_1336446.f_57 = 1;
	Global_1336446.f_57.f_1 = 0;
}

void func_72()
{
	Global_1336446.f_40.f_9 = 1;
}

void func_73(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x88B0F0DC270164B7(&Global_2315, 0);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_2315, 0);
	}
}

void func_74(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x88B0F0DC270164B7(&Global_2313, 20);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_2313, 20);
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
					unk_0x588D9B1F6CF36C3C(0);
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
		if (unk_0xE80581DE0ACF1F8A())
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
			unk_0x09C86C0C5CA26B1E(&Global_2313, 20);
			unk_0x09C86C0C5CA26B1E(&Global_2314, 17);
			unk_0x09C86C0C5CA26B1E(&Global_2315, 0);
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
			if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
			{
				if (unk_0x7B5A014A9AC61FB3(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (func_80())
				{
					return 0;
				}
				if (unk_0x8E30A8C5F10F6DD2(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xFFE4F37124DBE6D9(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xAE4B87F710B7DE76(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xB057BAEE46DEDD89(unk_0xA0081090911D13E5(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69617)
				{
					if (unk_0xB46E03E529421E99(unk_0xA0081090911D13E5()))
					{
						return 0;
					}
					if (unk_0x2FFAB3D2307F1BA7(unk_0x0C1D3C552325765B()))
					{
						return 0;
					}
					if (unk_0x7DF282A008F6DC55(unk_0xA0081090911D13E5()))
					{
						return 0;
					}
					if (unk_0x7B09C8C1D3D1F427(unk_0x0C1D3C552325765B()))
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
				if (unk_0x08BA6DD398CA197C(Global_2313, 9))
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
	unk_0x588D9B1F6CF36C3C(0);
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
	unk_0x09C86C0C5CA26B1E(&Global_2314, 16);
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
	
	if (Global_69617)
	{
		iVar0 = 0;
		unk_0x79DEFA3570360EAF(unk_0xA0081090911D13E5(), &iVar1, 1);
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x62B4986EA88E929B() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
	{
		if (unk_0x8B99D63EA8B2E230(unk_0xA0081090911D13E5(), 78, 1))
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
				return Global_1342783.f_203[iParam1];
			}
			break;
	}
	return unk_0x08BA6DD398CA197C(Global_1342783.f_982, iParam0);
}

void func_83()
{
	unk_0x8C620099CBB45602();
	Global_16756 = 0;
	if ((unk_0xC6CB0C1523C73C77() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x588D9B1F6CF36C3C(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0xE80581DE0ACF1F8A())
	{
		unk_0x588D9B1F6CF36C3C(1);
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
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
	}
	if (unk_0x8E30A8C5F10F6DD2(unk_0xA0081090911D13E5()))
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
	Global_1336446.f_40.f_9 = 2;
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
	Global_1336446.f_55 = Global_1336446.f_40.f_1;
	Global_1336446.f_55.f_1 = Global_1336446.f_40.f_10;
}

void func_93()
{
	Global_1336446.f_40 = 1;
}

bool func_94()
{
	return Global_1336446.f_40 == 1;
}

int func_95(int iParam0, int iParam1, int iParam2)
{
	if (!func_96(iParam0))
	{
		return 0;
	}
	if (Global_1336446.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1336446.f_40.f_3 != iParam2)
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
	if (!Global_1336446.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_97()
{
	if (Global_1336446.f_40 == 0)
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
	if (Global_1738544 || func_100())
	{
		return 0;
	}
	if (!unk_0x08BA6DD398CA197C(iParam0, 6))
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
	return unk_0xC099AB04552E978B(unk_0x4B50AAB32FBE0483(), Global_1352032);
}

int func_100()
{
	if (Global_2567282.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_101()
{
	return Global_1336446.f_40 == 3;
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
	return unk_0x3BB8D1C5FAAB25B3(&cVar0);
}

bool func_105()
{
	return Global_2487434.f_1;
}

int func_106()
{
	if (Global_1336634.f_2)
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
	if (!Global_69617)
	{
		if (!unk_0xEB361B4BD195A4D3(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xD20DF430E654B489(iParam2, 0);
			}
			else
			{
				unk_0xD20DF430E654B489(iParam2, 1);
			}
		}
		if (!unk_0xEB361B4BD195A4D3(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xD69C027BC6C4334F(iParam2, 0);
			}
			else
			{
				unk_0xD69C027BC6C4334F(iParam2, 1);
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

void func_110(var uParam0, bool bParam1, bool bParam2)
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
	}
	if (func_121())
	{
		func_112(iVar8, iParam0, &iVar9, bParam3, bParam3, 0);
		Global_2572880[iVar9 /*73*/].f_8.f_43 = { Var0 };
		Global_2572880[iVar9 /*73*/].f_8.f_47 = { Var4 };
	}
	else
	{
		unk_0x258D6E1C5F0486E3(iParam0, &Var0, &Var4, bParam3);
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
		if (!unk_0xFCE85827D6C3F47A(func_9()) || unk_0x474B3F20E92EE4B9())
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
			*uParam0 = func_120(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
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
			func_119(1, iParam4);
			Global_2573371 = 0;
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
			unk_0x88B0F0DC270164B7(&(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_123.f_71), 0);
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
				unk_0xC06B96599589EBBA();
			}
		}
		else if (!bVar0)
		{
			unk_0xF107756B7C40D5BD(Global_2572880[iParam0 /*73*/]);
		}
		func_116(&(Global_2572880[iParam0 /*73*/]));
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
	uParam0->f_66 = 0;
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
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
		return Global_2572880[iParam0 /*73*/].f_5 == 1;
	}
	return 0;
}

void func_119(int iParam0, var uParam1)
{
	Global_2454055 = uParam1;
	Global_2454054 = iParam0;
}

int func_120(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2572880[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_121())
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

int func_121()
{
	if (unk_0x955B8C8F89CC3AC0())
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
			if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) == 1)
			{
				return 200;
			}
			else if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) == 2)
			{
				return 400;
			}
			else if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) == 3)
			{
				return 600;
			}
			else if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) == 4)
			{
				return 800;
			}
			else if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) == 5)
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
			return Global_262145.f_5461;
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
			if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) == 1)
			{
				return Global_262145.f_5468;
			}
			else if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) == 2)
			{
				return Global_262145.f_5469;
			}
			else if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) == 3)
			{
				return Global_262145.f_5470;
			}
			else if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) == 4)
			{
				return Global_262145.f_5471;
			}
			else if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) == 5)
			{
				return Global_262145.f_5472;
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
			return Global_262145.f_6037;
			break;
		
		case 15:
			return Global_262145.f_5462;
			break;
		
		case 17:
			return Global_262145.f_5462;
			break;
		
		case 18:
			return Global_262145.f_5462;
			break;
		
		case 19:
			return Global_262145.f_5462;
			break;
		
		case 21:
			return Global_262145.f_5462;
			break;
		
		case 36:
			return Global_262145.f_6502;
			break;
		
		case 39:
			return -1;
			break;
		
		case 40:
			return Global_262145.f_11304;
			break;
		
		case 41:
			return Global_262145.f_11305;
			break;
		
		case 42:
			return Global_262145.f_11306;
			break;
		
		case 43:
			return Global_262145.f_13311;
			break;
		
		case 44:
			return Global_262145.f_13313;
			break;
	}
	return 0;
}

void func_127(int iParam0)
{
	func_128(&(Global_2443212.f_4171.f_137[iParam0 /*2*/]));
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
			if (unk_0x08BA6DD398CA197C(Global_2313, 14))
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
	if (unk_0xA96867DD0A63C62C(joaat("cellphone_flashhand")) > 0)
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

void func_131()
{
	int iVar0;
	int iVar1;
	
	if (((unk_0xD3FACCDA4D66AEAD(iLocal_1174) && !func_137(iLocal_1174)) && !func_136(Local_133.f_4)) && unk_0x1FD87E888EB4FC00(unk_0x564EAE6038A81C07(Local_133.f_4), iLocal_1174, 0))
	{
		if (!func_134(iLocal_1174, 1, 1, 0, 0, 0, 1, 0))
		{
			iVar0 = 0;
			while (iVar0 < 32)
			{
				iVar1 = unk_0x81C85E54237F8A2E(iVar0);
				if (func_130(iVar1, 0, 1))
				{
					if (unk_0x1FD87E888EB4FC00(unk_0x21F191D9AFF98B5E(iVar1), iLocal_1174, 0))
					{
						func_132(func_133(iVar1), 0, 0f, 0, 0, 0);
					}
				}
				iVar0++;
			}
		}
		else if (!iLocal_1160)
		{
			if (!unk_0x775F8FFC8E29F525(iLocal_1174))
			{
				unk_0x33E20212DBE504C2(iLocal_1174);
			}
			else
			{
				unk_0xB032923150355520(iLocal_1174, 2);
				iLocal_1160 = 1;
			}
		}
	}
}

void func_132(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	struct<7> Var0;
	
	Var0.f_0 = 59;
	Var0.f_1 = unk_0x0C1D3C552325765B();
	Var0.f_4 = iParam1;
	Var0.f_5 = iParam4;
	Var0.f_2 = fParam2;
	Var0.f_3 = iParam3;
	Var0.f_6 = iParam5;
	if (!iParam0 == 0)
	{
		unk_0x8E36889D76C8D4FA(1, &Var0, 7, iParam0);
	}
}

int func_133(int iParam0)
{
	var uVar0;
	
	unk_0x88B0F0DC270164B7(&uVar0, iParam0);
	return uVar0;
}

int func_134(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
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
			iVar2 = func_135(iParam0, (iVar0 - 1), bParam6, iParam7);
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

int func_135(int iParam0, int iParam1, bool bParam2, int iParam3)
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

int func_136(var uParam0)
{
	if (unk_0x0E091C9F3918F674(uParam0))
	{
		return unk_0xEB361B4BD195A4D3(unk_0x564EAE6038A81C07(uParam0));
	}
	return 1;
}

int func_137(int iParam0)
{
	if (unk_0xD3FACCDA4D66AEAD(iParam0))
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
	
	if ((Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 2 || Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 1) || Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 3)
	{
		return 1;
	}
	if (!func_130(unk_0x0C1D3C552325765B(), 1, 1) && !func_258())
	{
		return 1;
	}
	if (func_145())
	{
		if (Local_133.f_23 >= 0 || Local_133.f_23 <= 3)
		{
			if (!func_258())
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
	if ((Local_133.f_23 >= 0 || Local_133.f_23 <= 3) && Local_133.f_23 != 4)
	{
		if (func_137(iLocal_1174))
		{
			if (unk_0x0E091C9F3918F674(Local_133.f_3))
			{
				if (unk_0x1F86C8C27A772A49(Local_133.f_3, &uVar0) == unk_0x0C1D3C552325765B())
				{
					if (func_144())
					{
						func_143(1, 600000);
					}
					else
					{
						Global_2482149.f_5280 = unk_0x4B50AAB32FBE0483();
					}
				}
			}
			return 1;
		}
		else
		{
			if (func_136(Local_133.f_4))
			{
				if (unk_0x0E091C9F3918F674(Local_133.f_4))
				{
					if (unk_0x1F86C8C27A772A49(Local_133.f_4, &uVar1) == unk_0x0C1D3C552325765B())
					{
						if (func_144())
						{
							func_143(1, 600000);
						}
						else
						{
							Global_2482149.f_5280 = unk_0x4B50AAB32FBE0483();
						}
					}
				}
				return 1;
			}
			else if (!unk_0x1FD87E888EB4FC00(unk_0x564EAE6038A81C07(Local_133.f_4), iLocal_1174, 0))
			{
				return 1;
			}
			else if (Local_166[unk_0x848AF823A8EA3C62() /*3*/].f_2 >= 1)
			{
				if (!unk_0x6E07DBF03F3AC258(unk_0xA0081090911D13E5(), unk_0xC59DF10B4FC39DF8(iLocal_1174, 1), func_142(), func_142(), func_142(), 0, 1, 0))
				{
					return 1;
				}
			}
			if (func_141(unk_0x0C1D3C552325765B(), 0))
			{
				return 1;
			}
			if (func_141(unk_0x0C1D3C552325765B(), 7))
			{
				return 1;
			}
			if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 13)
			{
				return 1;
			}
			if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 14)
			{
				return 1;
			}
			if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 15)
			{
				return 1;
			}
			if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 12)
			{
				return 1;
			}
			if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 11)
			{
				return 1;
			}
			if (unk_0x8188FDE7090D3AF6() != iLocal_959)
			{
				return 1;
			}
		}
	}
	if (Local_133.f_23 == 4)
	{
		if (unk_0xD3FACCDA4D66AEAD(iLocal_1174))
		{
			if (unk_0x41617C7E7EAFFE34(iLocal_1174) <= 0 || !func_140(unk_0x21F191D9AFF98B5E(Local_133.f_5), iLocal_1174, 0))
			{
				unk_0xB032923150355520(iLocal_1174, 1);
				return 1;
			}
		}
		if (unk_0xD3FACCDA4D66AEAD(iLocal_1174))
		{
			if (func_137(iLocal_1174))
			{
				unk_0xB032923150355520(iLocal_1174, 1);
				return 1;
			}
		}
		if (unk_0xD3FACCDA4D66AEAD(iLocal_1174))
		{
			if (func_136(Local_133.f_4) && !Global_2451808.f_26)
			{
				unk_0xB032923150355520(iLocal_1174, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_140(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xD3FACCDA4D66AEAD(iParam0) && !unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		if (unk_0xD3FACCDA4D66AEAD(iParam1) && !unk_0x912AD5A10E7633F0(iParam1, 0))
		{
			if (unk_0x1FD87E888EB4FC00(iParam0, iParam1, iParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_141(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_2421327[iParam0 /*353*/].f_208, iParam1);
}

float func_142()
{
	float fVar0;
	
	fVar0 = 200f;
	if (func_258())
	{
		fVar0 = (200f + 600f);
	}
	return fVar0;
}

void func_143(int iParam0, int iParam1)
{
	if (Global_2432628.f_3340[iParam0] < iParam1)
	{
		Global_2432628.f_3340[iParam0] = iParam1;
	}
	unk_0x88B0F0DC270164B7(&(Global_2432628.f_3339), iParam0);
}

int func_144()
{
	if (func_258())
	{
		return 0;
	}
	return 1;
}

bool func_145()
{
	return Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_186 != 0;
}

void func_146()
{
	int iVar0;
	var uVar1;
	
	if (!unk_0xD9E8CA806A80203D())
	{
		return;
	}
	if (Local_133.f_24 != 8 && Local_133.f_24 != 5)
	{
		if (func_136(Local_133.f_4) || func_137(iLocal_1174))
		{
			Local_133.f_24 = 8;
		}
		else if (!unk_0x1FD87E888EB4FC00(unk_0x564EAE6038A81C07(Local_133.f_4), iLocal_1174, 0))
		{
			Local_133.f_24 = 8;
		}
	}
	if (Local_133.f_24 != 4)
	{
		if (unk_0x08BA6DD398CA197C(Local_133.f_1, 14))
		{
			unk_0x09C86C0C5CA26B1E(&(Local_133.f_1), 14);
		}
		if (func_201(&uLocal_1139))
		{
			func_128(&uLocal_1139);
		}
		if (func_201(&uLocal_1141))
		{
			func_128(&uLocal_1141);
		}
	}
	if (Local_133.f_24 != 7)
	{
		if (func_201(&uLocal_1143))
		{
			func_128(&uLocal_1143);
		}
	}
	if (!func_136(Local_133.f_4) && !func_137(iLocal_1174))
	{
		if (Local_133.f_24 != 8)
		{
			if ((Local_133.f_23 == 0 || Local_133.f_23 == 1) || Local_133.f_23 == 2)
			{
				if (unk_0x6F4A1CCA9E8C97C1(iLocal_1174) || unk_0x6F4A1CCA9E8C97C1(unk_0x564EAE6038A81C07(Local_133.f_4)))
				{
					if ((unk_0xC6FE0F623405BFA8(iLocal_1174) <= 500 || unk_0xC6FE0F623405BFA8(unk_0x564EAE6038A81C07(Local_133.f_4)) <= 150) || unk_0xBA73486F36A2B148(iLocal_1174, 1, 1, 1))
					{
						Local_133.f_24 = 8;
					}
				}
			}
		}
		switch (Local_133.f_24)
		{
			case 1:
				if (Local_133.f_23 == 3)
				{
					if (!unk_0x08BA6DD398CA197C(Local_133.f_2, 2))
					{
						if (func_197())
						{
							if (func_144())
							{
								func_108(&uLocal_965, 3, unk_0x564EAE6038A81C07(Local_133.f_4), "FM_Pilot", 0, 1);
								func_196(&uLocal_965, "CT_AUD", "MPCT_HPgo", 12, 0, 0, 1);
							}
							else
							{
								func_11(1);
								func_108(&uLocal_965, 2, unk_0x564EAE6038A81C07(Local_133.f_4), "EXEC_PILOT", 0, 1);
								func_91(&uLocal_965, "EXHELAU", "EXHEL_CUSTOM", 12, 0, 0, 1);
							}
							unk_0x88B0F0DC270164B7(&(Local_133.f_2), 2);
						}
					}
					func_194();
					Local_133.f_24 = 2;
				}
				else if (Local_133.f_23 == 6)
				{
					Local_133.f_24 = 8;
				}
				else if (func_193() == 0 && !func_192())
				{
					func_194();
					Local_133.f_24 = 4;
				}
				else if (unk_0x41617C7E7EAFFE34(iLocal_1174) > 0)
				{
					func_194();
					Local_133.f_24 = 4;
				}
				else if (unk_0x08BA6DD398CA197C(Local_133.f_1, 9))
				{
					func_194();
					Local_133.f_24 = 2;
				}
				else if (unk_0x08BA6DD398CA197C(iLocal_263, 4) && func_193())
				{
					if (unk_0x7298BA0C4D4A4C9E(unk_0xA0081090911D13E5(), iLocal_1174, (func_142() / 2f), (func_142() / 2f), func_142(), 0, 1, 0))
					{
						if (func_191(iLocal_1174))
						{
							if (unk_0xAFB836606A9B98AE(iLocal_1174))
							{
								if (func_109(&uLocal_1134, func_190(), 0))
								{
									iLocal_961 = 0;
									iLocal_962 = 0;
									iLocal_963 = 0;
									unk_0x09C86C0C5CA26B1E(&iLocal_263, 4);
									if (!unk_0x08BA6DD398CA197C(iLocal_263, 18))
									{
										uLocal_1138 = unk_0x4B50AAB32FBE0483();
									}
									unk_0x88B0F0DC270164B7(&iLocal_263, 18);
								}
							}
							else if (func_201(&uLocal_1134))
							{
								func_128(&uLocal_1134);
							}
						}
					}
				}
				else if (!unk_0x08BA6DD398CA197C(iLocal_263, 4))
				{
					if (func_161(&uVar1))
					{
						func_158(Local_133.f_6);
						func_157();
					}
				}
				if (unk_0x08BA6DD398CA197C(iLocal_263, 18) && Local_133.f_24 == 1)
				{
					iVar0 = unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), uLocal_1138));
					if (iVar0 > 60000)
					{
						Local_133.f_0 = 4;
					}
				}
				if (!unk_0x08BA6DD398CA197C(Local_133.f_2, 0))
				{
					if (func_197())
					{
						if (unk_0x6E07DBF03F3AC258(iLocal_1174, Local_133.f_6, 20f, 20f, 20f, 0, 1, 0))
						{
							if (func_144())
							{
								func_108(&uLocal_965, 3, unk_0x564EAE6038A81C07(Local_133.f_4), "FM_Pilot", 0, 1);
								func_196(&uLocal_965, "CT_AUD", "MPCT_HParr", 12, 0, 0, 1);
							}
							else
							{
								func_11(1);
								func_108(&uLocal_965, 2, unk_0x564EAE6038A81C07(Local_133.f_4), "EXEC_PILOT", 0, 1);
								func_91(&uLocal_965, "EXHELAU", "EXHEL_APPR", 12, 0, 0, 1);
							}
							unk_0x88B0F0DC270164B7(&(Local_133.f_2), 0);
						}
					}
				}
				break;
			
			case 2:
				if (unk_0x41617C7E7EAFFE34(iLocal_1174) <= 0)
				{
					Local_133.f_24 = 4;
				}
				else if (unk_0x6E07DBF03F3AC258(unk_0x564EAE6038A81C07(Local_133.f_4), Local_133.f_10, 7.5f, 7.5f, 9999.9f, 0, 1, 0))
				{
					unk_0x2963020A1B65B30A();
					Local_133.f_24 = 3;
					bLocal_165 = true;
					func_128(&uLocal_1150);
					func_128(&uLocal_1148);
					unk_0x09C86C0C5CA26B1E(&(Local_133.f_1), 14);
				}
				else if (!unk_0xF06B045B9DA829B7() || func_156(0))
				{
					if (!unk_0x08BA6DD398CA197C(Local_133.f_2, 4) && func_197())
					{
						if (func_144())
						{
							func_108(&uLocal_965, 3, unk_0x564EAE6038A81C07(Local_133.f_4), "FM_Pilot", 0, 1);
							func_196(&uLocal_965, "CT_AUD", "MPCT_HPcha", 12, 0, 0, 1);
						}
						else
						{
							func_11(1);
							func_108(&uLocal_965, 2, unk_0x564EAE6038A81C07(Local_133.f_4), "EXEC_PILOT", 0, 1);
							func_91(&uLocal_965, "EXHELAU", "EXHEL_CHANGE", 12, 0, 0, 1);
						}
						unk_0x88B0F0DC270164B7(&(Local_133.f_2), 4);
					}
					unk_0x09C86C0C5CA26B1E(&(Local_133.f_1), 9);
					unk_0x88B0F0DC270164B7(&(Local_133.f_1), 12);
					Local_133.f_24 = 4;
				}
				if (!unk_0x08BA6DD398CA197C(Local_133.f_2, 6) && func_197())
				{
					if (unk_0x6E07DBF03F3AC258(unk_0x564EAE6038A81C07(Local_133.f_4), Local_133.f_10, (7.5f + 75f), (7.5f + 75f), ((10f * 2f) + 75f), 0, 1, 0))
					{
						if (func_144())
						{
							func_108(&uLocal_965, 3, unk_0x564EAE6038A81C07(Local_133.f_4), "FM_Pilot", 0, 1);
							func_196(&uLocal_965, "CT_AUD", "MPCT_HPnear", 12, 0, 0, 1);
						}
						unk_0x88B0F0DC270164B7(&(Local_133.f_2), 6);
					}
				}
				func_152();
				if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) <= 0)
				{
					if (func_109(&uLocal_1145, iLocal_1147, 0))
					{
						if (func_197())
						{
							if (func_144())
							{
								func_108(&uLocal_965, 3, unk_0x564EAE6038A81C07(Local_133.f_4), "FM_Pilot", 0, 1);
								func_196(&uLocal_965, "CT_AUD", "MPCT_HPfly", 12, 0, 0, 1);
							}
							else
							{
								func_11(1);
								func_108(&uLocal_965, 2, unk_0x564EAE6038A81C07(Local_133.f_4), "EXEC_PILOT", 0, 1);
								func_91(&uLocal_965, "EXHELAU", "EXHEL_CHAT", 12, 0, 0, 1);
							}
							iLocal_1147 = unk_0xB5BF1B58C833F7A9(15000, 30000);
							func_128(&uLocal_1145);
						}
					}
				}
				break;
			
			case 5:
				if (unk_0x41617C7E7EAFFE34(iLocal_1174) <= 0 || !func_140(unk_0x21F191D9AFF98B5E(Local_133.f_5), iLocal_1174, 0))
				{
					Local_133.f_24 = 8;
					break;
				}
				if (!unk_0x08BA6DD398CA197C(Local_133.f_1, 15))
				{
					unk_0x88B0F0DC270164B7(&(Local_133.f_1), 15);
				}
				break;
			
			case 3:
				if (iLocal_960 != 3)
				{
					iLocal_960 = 3;
				}
				if (unk_0x41617C7E7EAFFE34(iLocal_1174) <= 0 && !unk_0x97C29E7ED977A936(iLocal_1174))
				{
					if (!unk_0x08BA6DD398CA197C(Local_133.f_2, 9))
					{
						if (func_197())
						{
							if (unk_0x97C29E7ED977A936(iLocal_1174))
							{
								if (func_144())
								{
									func_108(&uLocal_965, 3, unk_0x564EAE6038A81C07(Local_133.f_4), "FM_Pilot", 0, 1);
									func_196(&uLocal_965, "CT_AUD", "MPCT_HPleav", 12, 0, 0, 1);
								}
								else
								{
									func_11(1);
									func_108(&uLocal_965, 2, unk_0x564EAE6038A81C07(Local_133.f_4), "EXEC_PILOT", 0, 1);
									func_91(&uLocal_965, "EXHELAU", "EXHEL_GENBYE", 12, 0, 0, 1);
								}
								unk_0x88B0F0DC270164B7(&(Local_133.f_2), 9);
							}
						}
					}
					Local_133.f_24 = 8;
				}
				else if (!unk_0xF06B045B9DA829B7() || func_156(0))
				{
					unk_0x09C86C0C5CA26B1E(&(Local_133.f_1), 9);
					unk_0x88B0F0DC270164B7(&(Local_133.f_1), 12);
					Local_133.f_24 = 4;
				}
				if (!unk_0x08BA6DD398CA197C(Local_133.f_2, 8))
				{
					if (unk_0x97C29E7ED977A936(iLocal_1174))
					{
						if (func_197())
						{
							if (func_144())
							{
								func_108(&uLocal_965, 3, unk_0x564EAE6038A81C07(Local_133.f_4), "FM_Pilot", 0, 1);
								func_196(&uLocal_965, "CT_AUD", "MPCT_HPrap", 12, 0, 0, 1);
							}
							else
							{
								func_11(1);
								func_108(&uLocal_965, 2, unk_0x564EAE6038A81C07(Local_133.f_4), "EXEC_PILOT", 0, 1);
								func_91(&uLocal_965, "EXHELAU", "EXHEL_FLIES", 12, 0, 0, 1);
							}
							unk_0x88B0F0DC270164B7(&(Local_133.f_2), 8);
						}
					}
				}
				break;
			
			case 4:
				if (bLocal_165)
				{
					if (func_197())
					{
						if (!unk_0x08BA6DD398CA197C(Local_133.f_2, 5))
						{
							if (func_144())
							{
								func_108(&uLocal_965, 3, unk_0x564EAE6038A81C07(Local_133.f_4), "FM_Pilot", 0, 1);
								func_196(&uLocal_965, "CT_AUD", "MPCT_HPdrop", 12, 0, 0, 1);
							}
							else
							{
								func_11(1);
								func_108(&uLocal_965, 2, unk_0x564EAE6038A81C07(Local_133.f_4), "EXEC_PILOT", 0, 1);
								func_91(&uLocal_965, "EXHELAU", "EXHEL_ARRIVE", 12, 0, 0, 1);
							}
							unk_0x88B0F0DC270164B7(&(Local_133.f_2), 5);
						}
						else if (!func_144())
						{
							if (!unk_0x08BA6DD398CA197C(Local_133.f_2, 21))
							{
								if (unk_0xC5F055346C582286(iLocal_1174) > 10f)
								{
									func_11(1);
									func_108(&uLocal_965, 2, unk_0x564EAE6038A81C07(Local_133.f_4), "EXEC_PILOT", 0, 1);
									func_91(&uLocal_965, "EXHELAU", "EXHEL_CANJUM", 12, 0, 0, 1);
								}
								unk_0x88B0F0DC270164B7(&(Local_133.f_2), 21);
							}
						}
					}
				}
				if (unk_0x08BA6DD398CA197C(Local_133.f_1, 12))
				{
					if (!unk_0x97C29E7ED977A936(iLocal_1174))
					{
						if (unk_0xF06B045B9DA829B7())
						{
							if (!unk_0x08BA6DD398CA197C(Local_133.f_2, 2))
							{
								if (func_197())
								{
									if (func_144())
									{
										func_108(&uLocal_965, 3, unk_0x564EAE6038A81C07(Local_133.f_4), "FM_Pilot", 0, 1);
										func_196(&uLocal_965, "CT_AUD", "MPCT_HPgo", 12, 0, 0, 1);
									}
									else
									{
										func_11(1);
										func_108(&uLocal_965, 2, unk_0x564EAE6038A81C07(Local_133.f_4), "EXEC_PILOT", 0, 1);
										func_91(&uLocal_965, "EXHELAU", "EXHEL_GENPOS", 12, 0, 0, 1);
									}
									unk_0x88B0F0DC270164B7(&(Local_133.f_2), 2);
								}
							}
							func_194();
							if (!func_151(Local_133.f_10, Local_133.f_13, 0))
							{
								Local_133.f_13 = { Local_133.f_10 };
								Local_133.f_24 = 2;
							}
						}
						else if (unk_0x41617C7E7EAFFE34(iLocal_1174) <= 0)
						{
							Local_133.f_24 = 8;
						}
					}
				}
				else if (unk_0x08BA6DD398CA197C(Local_133.f_1, 9))
				{
					if (!unk_0x08BA6DD398CA197C(Local_133.f_2, 2))
					{
						if (func_197())
						{
							if (func_144())
							{
								func_108(&uLocal_965, 3, unk_0x564EAE6038A81C07(Local_133.f_4), "FM_Pilot", 0, 1);
								func_196(&uLocal_965, "CT_AUD", "MPCT_HPgo", 12, 0, 0, 1);
							}
							else
							{
								func_11(1);
								func_108(&uLocal_965, 2, unk_0x564EAE6038A81C07(Local_133.f_4), "EXEC_PILOT", 0, 1);
								func_91(&uLocal_965, "EXHELAU", "EXHEL_CUSTOM", 12, 0, 0, 1);
							}
							unk_0x88B0F0DC270164B7(&(Local_133.f_2), 2);
						}
					}
					func_194();
					if (!func_151(Local_133.f_10, Local_133.f_13, 0))
					{
						Local_133.f_13 = { Local_133.f_10 };
						unk_0x88B0F0DC270164B7(&(Local_133.f_1), 13);
						Local_133.f_24 = 2;
					}
				}
				else if (unk_0x08BA6DD398CA197C(Local_133.f_1, 13))
				{
					if (unk_0x41617C7E7EAFFE34(iLocal_1174) <= 0)
					{
						Local_133.f_24 = 8;
					}
				}
				func_152();
				if (func_197())
				{
					if (!unk_0x08BA6DD398CA197C(Local_133.f_2, 1))
					{
						if (unk_0x41617C7E7EAFFE34(iLocal_1174) > 0)
						{
							if (func_201(&uLocal_1141))
							{
								func_128(&uLocal_1141);
							}
							if (func_144())
							{
								func_108(&uLocal_965, 3, unk_0x564EAE6038A81C07(Local_133.f_4), "FM_Pilot", 0, 1);
								func_196(&uLocal_965, "CT_AUD", "MPCT_HPnoW", 12, 0, 0, 1);
							}
							else
							{
								func_11(1);
								func_108(&uLocal_965, 2, unk_0x564EAE6038A81C07(Local_133.f_4), "EXEC_PILOT", 0, 1);
								func_91(&uLocal_965, "EXHELAU", "EXHEL_WHERE", 12, 0, 0, 1);
							}
							unk_0x88B0F0DC270164B7(&(Local_133.f_2), 1);
						}
					}
					else if (!unk_0x08BA6DD398CA197C(Local_133.f_2, 2))
					{
						if (!unk_0x08BA6DD398CA197C(Local_133.f_2, 3) && !unk_0x08BA6DD398CA197C(Local_133.f_1, 12))
						{
							if (unk_0x41617C7E7EAFFE34(iLocal_1174) <= 0)
							{
								if (func_144())
								{
									func_108(&uLocal_965, 3, unk_0x564EAE6038A81C07(Local_133.f_4), "FM_Pilot", 0, 1);
									func_196(&uLocal_965, "CT_AUD", "MPCT_HPex", 12, 0, 0, 1);
								}
								unk_0x88B0F0DC270164B7(&(Local_133.f_2), 3);
							}
						}
					}
					else if (!unk_0x08BA6DD398CA197C(Local_133.f_2, 16))
					{
						if (unk_0x41617C7E7EAFFE34(iLocal_1174) <= 0)
						{
							if (func_144())
							{
								func_108(&uLocal_965, 3, unk_0x564EAE6038A81C07(Local_133.f_4), "FM_Pilot", 0, 1);
								func_196(&uLocal_965, "CT_AUD", "MPCT_HPbail", 12, 0, 0, 1);
							}
							else
							{
								func_11(1);
								func_108(&uLocal_965, 2, unk_0x564EAE6038A81C07(Local_133.f_4), "EXEC_PILOT", 0, 1);
								func_91(&uLocal_965, "EXHELAU", "EXHEL_GENBYE", 12, 0, 0, 1);
							}
							unk_0x88B0F0DC270164B7(&(Local_133.f_2), 16);
						}
					}
				}
				if (Local_133.f_24 == 4)
				{
					if (!unk_0x08BA6DD398CA197C(Local_133.f_1, 14))
					{
						if (!bLocal_165)
						{
							if (func_109(&uLocal_1139, 120000, 0))
							{
								unk_0x88B0F0DC270164B7(&(Local_133.f_1), 14);
							}
						}
						else if (func_109(&uLocal_1148, 20000, 0))
						{
							unk_0x88B0F0DC270164B7(&(Local_133.f_1), 14);
						}
					}
					else if (!bLocal_165)
					{
						if (func_109(&uLocal_1141, 60000, 0))
						{
							Local_133.f_24 = 7;
						}
					}
					else if (func_109(&uLocal_1150, 30000, 0))
					{
						Local_133.f_24 = 7;
					}
				}
				break;
			
			case 7:
				if (func_109(&uLocal_1143, 4000, 0))
				{
					Local_133.f_24 = 8;
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
		if (!unk_0x08BA6DD398CA197C(Local_133.f_2, 10))
		{
			if (func_197())
			{
				if (func_130(unk_0x0C1D3C552325765B(), 1, 1))
				{
					if (unk_0x4AEC0F4FC7FE62C7(iLocal_1174, unk_0xA0081090911D13E5(), 1))
					{
						if (func_144())
						{
							func_108(&uLocal_965, 3, unk_0x564EAE6038A81C07(Local_133.f_4), "FM_Pilot", 0, 1);
							func_196(&uLocal_965, "CT_AUD", "MPCT_HPdam", 12, 0, 0, 1);
						}
						else
						{
							func_11(1);
							func_108(&uLocal_965, 2, unk_0x564EAE6038A81C07(Local_133.f_4), "EXEC_PILOT", 0, 1);
							func_91(&uLocal_965, "EXHELAU", "EXHEL_DAMAGE", 12, 0, 0, 1);
						}
						unk_0x88B0F0DC270164B7(&(Local_133.f_2), 10);
					}
				}
			}
		}
		if (!func_144())
		{
			if (!unk_0x08BA6DD398CA197C(Local_133.f_2, 26))
			{
				if (func_197())
				{
					if (unk_0x97209242946B9B9F(unk_0x0C1D3C552325765B(), unk_0x564EAE6038A81C07(Local_133.f_4)) || unk_0x352F748C85BFEDC5(unk_0x0C1D3C552325765B(), unk_0x564EAE6038A81C07(Local_133.f_4)))
					{
						func_11(1);
						func_108(&uLocal_965, 2, unk_0x564EAE6038A81C07(Local_133.f_4), "EXEC_PILOT", 0, 1);
						func_91(&uLocal_965, "EXHELAU", "EXHEL_AIM", 12, 0, 0, 1);
						unk_0x88B0F0DC270164B7(&(Local_133.f_2), 26);
					}
				}
			}
			else if (!unk_0x97209242946B9B9F(unk_0x0C1D3C552325765B(), unk_0x564EAE6038A81C07(Local_133.f_4)) && !unk_0x352F748C85BFEDC5(unk_0x0C1D3C552325765B(), unk_0x564EAE6038A81C07(Local_133.f_4)))
			{
				unk_0x09C86C0C5CA26B1E(&(Local_133.f_2), 26);
			}
		}
	}
}

void func_147()
{
	if (!iLocal_1161)
	{
		if (Local_133.f_24 == 2)
		{
			if (unk_0x0E091C9F3918F674(Local_133.f_3))
			{
				if (unk_0xB480350E4250D92A(Local_133.f_3))
				{
					unk_0x437DA015C47CF992(iLocal_1174, 1f);
					iLocal_1161 = 1;
				}
				else
				{
					unk_0xDC64FA270C733B30(Local_133.f_3);
				}
			}
		}
	}
}

void func_148(bool bParam0)
{
	bLocal_1156 = bParam0;
}

void func_149()
{
	Global_68128 = 1;
}

bool func_150()
{
	return Global_68125;
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
		if (!unk_0x08BA6DD398CA197C(Local_133.f_2, 18))
		{
			if (func_197())
			{
				if (unk_0x41617C7E7EAFFE34(iLocal_1174) > 0)
				{
					func_11(1);
					func_108(&uLocal_965, 2, unk_0x564EAE6038A81C07(Local_133.f_4), "EXEC_PILOT", 0, 1);
					func_91(&uLocal_965, "EXHELAU", "EXHEL_GREET", 12, 0, 0, 1);
					unk_0x88B0F0DC270164B7(&(Local_133.f_2), 18);
				}
			}
		}
		else
		{
			if (func_197())
			{
				if (unk_0x41617C7E7EAFFE34(iLocal_1174) > 0)
				{
					if (unk_0x41617C7E7EAFFE34(iLocal_1174) < iLocal_964 && unk_0xC5F055346C582286(iLocal_1174) > 10f)
					{
						func_11(1);
						func_108(&uLocal_965, 2, unk_0x564EAE6038A81C07(Local_133.f_4), "EXEC_PILOT", 0, 1);
						func_91(&uLocal_965, "EXHELAU", "EXHEL_JUMP", 12, 0, 0, 1);
					}
					else if (!unk_0x08BA6DD398CA197C(Local_133.f_2, 22) && iLocal_1158)
					{
						func_11(1);
						func_108(&uLocal_965, 2, unk_0x564EAE6038A81C07(Local_133.f_4), "EXEC_PILOT", 0, 1);
						func_91(&uLocal_965, "EXHELAU", "EXHEL_GENGRE", 12, 0, 0, 1);
						unk_0x88B0F0DC270164B7(&(Local_133.f_2), 22);
						unk_0x09C86C0C5CA26B1E(&(Local_133.f_2), 23);
					}
					if (!unk_0x41617C7E7EAFFE34(iLocal_1174) == iLocal_964)
					{
						iLocal_964 = unk_0x41617C7E7EAFFE34(iLocal_1174);
					}
				}
				else if (!unk_0x08BA6DD398CA197C(Local_133.f_2, 23))
				{
					if (unk_0xC5F055346C582286(iLocal_1174) > 10f)
					{
						func_11(1);
						func_108(&uLocal_965, 2, unk_0x564EAE6038A81C07(Local_133.f_4), "EXEC_PILOT", 0, 1);
						func_91(&uLocal_965, "EXHELAU", "EXHEL_JUMP", 12, 0, 0, 1);
						unk_0x88B0F0DC270164B7(&(Local_133.f_2), 23);
						unk_0x09C86C0C5CA26B1E(&(Local_133.f_2), 22);
					}
					else
					{
						func_11(1);
						func_108(&uLocal_965, 2, unk_0x564EAE6038A81C07(Local_133.f_4), "EXEC_PILOT", 0, 1);
						func_91(&uLocal_965, "EXHELAU", "EXHEL_GENBYE", 12, 0, 0, 1);
						unk_0x88B0F0DC270164B7(&(Local_133.f_2), 23);
						unk_0x09C86C0C5CA26B1E(&(Local_133.f_2), 22);
					}
				}
			}
			if (!iLocal_1158)
			{
				if (unk_0x41617C7E7EAFFE34(iLocal_1174) == 0)
				{
					iLocal_1158 = 1;
				}
			}
		}
		if (func_197())
		{
			if (!unk_0x08BA6DD398CA197C(Local_133.f_2, 20))
			{
				if (!func_137(iLocal_1174))
				{
					if (unk_0x9BE2871A5C9326CF(iLocal_1174) == 2)
					{
						func_11(1);
						func_108(&uLocal_965, 2, unk_0x564EAE6038A81C07(Local_133.f_4), "EXEC_PILOT", 0, 1);
						func_91(&uLocal_965, "EXHELAU", "EXHEL_LOCKS", 12, 0, 0, 1);
						unk_0x88B0F0DC270164B7(&(Local_133.f_2), 20);
					}
				}
			}
			else if (!func_137(iLocal_1174))
			{
				if (unk_0x9BE2871A5C9326CF(iLocal_1174) != 2)
				{
					unk_0x09C86C0C5CA26B1E(&(Local_133.f_2), 20);
				}
			}
		}
		if (!unk_0x08BA6DD398CA197C(Local_133.f_2, 24))
		{
			if (func_197())
			{
				if (func_153(unk_0xA0081090911D13E5()) >= 5)
				{
					func_11(1);
					func_108(&uLocal_965, 2, unk_0x564EAE6038A81C07(Local_133.f_4), "EXEC_PILOT", 0, 1);
					func_91(&uLocal_965, "EXHELAU", "EXHEL_DRINKS", 12, 0, 0, 1);
					unk_0x88B0F0DC270164B7(&(Local_133.f_2), 24);
				}
			}
		}
		if (!unk_0x08BA6DD398CA197C(Local_133.f_2, 25))
		{
			if (func_197())
			{
				if (!func_137(iLocal_1174))
				{
					if (!unk_0x6315EBE95A97CADF(iLocal_1174, 2, 0) || !unk_0x6315EBE95A97CADF(iLocal_1174, 1, 0))
					{
						func_11(1);
						func_108(&uLocal_965, 2, unk_0x564EAE6038A81C07(Local_133.f_4), "EXEC_PILOT", 0, 1);
						func_91(&uLocal_965, "EXHELAU", "EXHEL_CHAMP", 12, 0, 0, 1);
						unk_0x88B0F0DC270164B7(&(Local_133.f_2), 25);
					}
				}
			}
		}
		if (!unk_0x08BA6DD398CA197C(Local_133.f_2, 19))
		{
			if (func_197())
			{
				if (unk_0x4B626BBA5EE1CFF0(unk_0xA0081090911D13E5()))
				{
					func_11(1);
					func_108(&uLocal_965, 2, unk_0x564EAE6038A81C07(Local_133.f_4), "EXEC_PILOT", 0, 1);
					func_91(&uLocal_965, "EXHELAU", "EXHEL_FIRE", 12, 0, 0, 1);
					unk_0x88B0F0DC270164B7(&(Local_133.f_2), 19);
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
	if (!unk_0xD3FACCDA4D66AEAD(iParam0))
	{
		return 0;
	}
	iVar0 = func_155(iParam0);
	iVar1 = func_154(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36709[iVar1 /*5*/].f_3;
}

int func_154(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36709[iVar0 /*5*/] == iParam0)
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
		if (iParam0 == Global_36709[iVar0 /*5*/].f_1)
		{
			return Global_36709[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

bool func_156(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_2482149.f_268, iParam0);
}

void func_157()
{
	if (!func_136(Local_133.f_4))
	{
		unk_0xD3032BAC1ECE011F(unk_0x564EAE6038A81C07(Local_133.f_4));
	}
}

void func_158(struct<3> Param0)
{
	Local_133.f_17 = { func_159(Param0) };
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
	if (!unk_0x08BA6DD398CA197C(iLocal_263, 4) && func_130(unk_0x0C1D3C552325765B(), 1, 1))
	{
		if (func_189(unk_0x0C1D3C552325765B()) && !unk_0x08BA6DD398CA197C(iLocal_263, 18))
		{
			Local_133.f_6 = { func_183(func_185(func_186(unk_0x0C1D3C552325765B()))) };
			unk_0x88B0F0DC270164B7(&iLocal_263, 4);
			*uParam0 = 1;
		}
		else if (func_168(150f, &iVar4, &iVar5) && !unk_0x08BA6DD398CA197C(iLocal_263, 18))
		{
			func_167(iVar4, iVar5, &(Local_133.f_6), &(Local_133.f_9));
			*uParam0 = 1;
			unk_0x88B0F0DC270164B7(&iLocal_263, 4);
		}
		else if ((func_258() && func_163(600f)) && !unk_0x08BA6DD398CA197C(iLocal_263, 18))
		{
			Local_133.f_6 = { Local_1166[0 /*3*/] };
			Local_133.f_9 = uLocal_1170[0];
			*uParam0 = 1;
			unk_0x88B0F0DC270164B7(&iLocal_263, 4);
		}
		else if (iLocal_961 == 0)
		{
			if (iLocal_963 == 0)
			{
				Local_133.f_6 = { unk_0x2E01486DB8218E16(unk_0xA0081090911D13E5(), 0f, (15f / 2f), 1.3f) };
				unk_0x776447CD667051CD(Local_133.f_6, &(Local_133.f_6.f_2), 0);
				Local_133.f_6.f_2 = (Local_133.f_6.f_2 + 1.3f);
			}
			else if (iLocal_963 == 1)
			{
				Local_133.f_6 = { unk_0x2E01486DB8218E16(unk_0xA0081090911D13E5(), (15f / 2f), 0f, 1.3f) };
				unk_0x776447CD667051CD(Local_133.f_6, &(Local_133.f_6.f_2), 0);
				Local_133.f_6.f_2 = (Local_133.f_6.f_2 + 1.3f);
			}
			else if (iLocal_963 == 2)
			{
				Local_133.f_6 = { unk_0x2E01486DB8218E16(unk_0xA0081090911D13E5(), (-15f / 2f), 0f, 1.3f) };
				unk_0x776447CD667051CD(Local_133.f_6, &(Local_133.f_6.f_2), 0);
				Local_133.f_6.f_2 = (Local_133.f_6.f_2 + 1.3f);
			}
			else if (iLocal_963 == 3)
			{
				Local_133.f_6 = { unk_0x2E01486DB8218E16(unk_0xA0081090911D13E5(), 0f, (-15f / 2f), 1.3f) };
				unk_0x776447CD667051CD(Local_133.f_6, &(Local_133.f_6.f_2), 0);
				Local_133.f_6.f_2 = (Local_133.f_6.f_2 + 1.3f);
			}
			else if (iLocal_963 == 4)
			{
				unk_0x465CE27F53C0F56E(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), &(Local_133.f_6), 1, 1077936128, 0);
				Local_133.f_6.f_2 = (Local_133.f_6.f_2 + 1.3f);
				if (!unk_0x6E07DBF03F3AC258(unk_0xA0081090911D13E5(), Local_133.f_6, 75f, 75f, 75f, 0, 1, 0))
				{
					Local_133.f_0 = 4;
				}
			}
			else if (iLocal_963 == 5)
			{
				unk_0x3E1E1E768BE3A2F4(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), 3, &(Local_133.f_6), 1, 1077936128, 0);
				Local_133.f_6.f_2 = (Local_133.f_6.f_2 + 1.3f);
				if (!unk_0x6E07DBF03F3AC258(unk_0xA0081090911D13E5(), Local_133.f_6, 75f, 75f, 75f, 0, 1, 0))
				{
					Local_133.f_0 = 4;
				}
			}
			else if (iLocal_963 == 6)
			{
				unk_0x3E1E1E768BE3A2F4(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), 6, &(Local_133.f_6), 1, 1077936128, 0);
				Local_133.f_6.f_2 = (Local_133.f_6.f_2 + 1.3f);
				if (!unk_0x6E07DBF03F3AC258(unk_0xA0081090911D13E5(), Local_133.f_6, 75f, 75f, 75f, 0, 1, 0))
				{
					Local_133.f_0 = 4;
				}
			}
			else if (iLocal_963 == 7)
			{
				unk_0x3E1E1E768BE3A2F4(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), 10, &(Local_133.f_6), 1, 1077936128, 0);
				Local_133.f_6.f_2 = (Local_133.f_6.f_2 + 1.3f);
				if (!unk_0x6E07DBF03F3AC258(unk_0xA0081090911D13E5(), Local_133.f_6, 75f, 75f, 75f, 0, 1, 0))
				{
					Local_133.f_0 = 4;
				}
			}
			else if (iLocal_963 == 8)
			{
				unk_0x3E1E1E768BE3A2F4(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), 15, &(Local_133.f_6), 1, 1077936128, 0);
				Local_133.f_6.f_2 = (Local_133.f_6.f_2 + 1.3f);
				if (!unk_0x6E07DBF03F3AC258(unk_0xA0081090911D13E5(), Local_133.f_6, 75f, 75f, 75f, 0, 1, 0))
				{
					Local_133.f_0 = 4;
				}
			}
			else if (iLocal_963 == 9)
			{
				unk_0x3E1E1E768BE3A2F4(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), 20, &(Local_133.f_6), 1, 1077936128, 0);
				Local_133.f_6.f_2 = (Local_133.f_6.f_2 + 1.3f);
			}
			else if (func_163(100f) && !unk_0x08BA6DD398CA197C(iLocal_263, 18))
			{
				Local_133.f_6 = { Local_1166[0 /*3*/] };
				Local_133.f_9 = uLocal_1170[0];
				*uParam0 = 1;
				unk_0x88B0F0DC270164B7(&iLocal_263, 4);
				return 1;
			}
			else
			{
				Local_133.f_0 = 4;
			}
			if (!unk_0x6E07DBF03F3AC258(unk_0xA0081090911D13E5(), Local_133.f_6, 75f, 75f, 5f, 0, 1, 0) || unk_0x5A1306DD38D99DFB(Local_133.f_6 + Vector(2f, 0f, 0f), Local_133.f_6 - Vector(5f, 0f, 0f), &uVar6))
			{
				iLocal_961 = 0;
				iLocal_962 = 0;
				iLocal_963++;
				return 0;
			}
			Var9 = { Local_133.f_6 + Vector((50f / 2f), 0f, 0f) };
			iLocal_961 = unk_0x7FDA360F3B306CFA(Var9, 15f, 15f, 50f, 0f, 0f, -1f, 2, 131, unk_0xA0081090911D13E5(), 4);
			if (iLocal_961 == 0)
			{
				return 0;
			}
		}
		else if (unk_0x41C19A4A352B09E1(iLocal_961, &iLocal_962, &uVar0, &uVar0, &uVar3) == 2)
		{
			iLocal_961 = 0;
			if (iLocal_962 == 0 && !func_162(Local_133.f_6, 3, 0, 0))
			{
				unk_0x88B0F0DC270164B7(&iLocal_263, 4);
			}
			else
			{
				iLocal_962 = 0;
				iLocal_963++;
			}
		}
		else if (unk_0x41C19A4A352B09E1(iLocal_961, &iLocal_962, &uVar0, &uVar0, &uVar3) == 0)
		{
			iLocal_961 = 0;
		}
	}
	return unk_0x08BA6DD398CA197C(iLocal_263, 4);
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
		if (unk_0xDFC5B758BDC9546F(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], iVar110, 1))
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
	
	func_164(func_166(unk_0x0C1D3C552325765B()), &Local_1166, &uLocal_1170, &uLocal_1172);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (uLocal_1172[iVar0] < fParam0)
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
	
	if (unk_0x2A488C176D52CCA5(Local_1163, Param0) < 20f)
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
	while (iVar10 < 289)
	{
		fVar1 = unk_0x2A488C176D52CCA5(Param0, Global_2411308[iVar10 /*3*/]);
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (fVar1 < fVar8[iVar0])
			{
				func_165(Global_2411308[iVar10 /*3*/], Global_2412176[iVar10], fVar1, iVar0, &Var2, &uVar6, &fVar8);
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
	Local_1163 = { Param0 };
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
	return unk_0xC59DF10B4FC39DF8(unk_0x21F191D9AFF98B5E(iParam0), 0);
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
	
	if (func_258())
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
	Var2 = { func_174(unk_0x0C1D3C552325765B()) };
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
			if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_72[iVar0 /*2*/] == iParam0)
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
	
	if (unk_0x16833EFAA58E63DB(Global_2414657[iParam0]))
	{
		Var0 = { unk_0xA4C471C6C99EDD6B(Global_2414657[iParam0]) };
	}
	else if (unk_0x16833EFAA58E63DB(Global_2414657.f_33[iParam0]) && !iParam0 == Global_2432628)
	{
		Var0 = { unk_0xA4C471C6C99EDD6B(Global_2414657.f_33[iParam0]) };
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
	
	if (Global_1588660[iParam0 /*532*/].f_256.f_11 > 0)
	{
		return func_179(func_185(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_11));
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
		return Global_1751948.f_20[Global_2421327[iParam0 /*353*/].f_308.f_1 /*3*/];
	}
	return func_166(iParam0);
}

int func_176(int iParam0)
{
	if (iParam0 != func_4())
	{
		if (func_130(iParam0, 1, 1))
		{
			return Global_2421327[iParam0 /*353*/].f_308.f_1 != -1;
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
		if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_11 > 0)
		{
			*uParam3 = Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_11;
		}
		else if (Global_2404579.f_1 > 0)
		{
			*uParam3 = Global_2404579.f_1;
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
		if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_11 > 0)
		{
			*uParam3 = Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_11;
		}
		else if (Global_2404579.f_1 > 0)
		{
			*uParam3 = Global_2404579.f_1;
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
	
	if (iParam3 != 99)
	{
		if ((unk_0xDFC5B758BDC9546F(Param0, Global_1049287[iParam3 /*1908*/].f_146.f_57[0 /*8*/], Global_1049287[iParam3 /*1908*/].f_146.f_57[0 /*8*/].f_3, Global_1049287[iParam3 /*1908*/].f_146.f_57[0 /*8*/].f_6, 0, 1) || (Global_1049287[iParam3 /*1908*/].f_146.f_57[1 /*8*/].f_6 != 0f && unk_0xDFC5B758BDC9546F(Param0, Global_1049287[iParam3 /*1908*/].f_146.f_57[1 /*8*/], Global_1049287[iParam3 /*1908*/].f_146.f_57[1 /*8*/].f_3, Global_1049287[iParam3 /*1908*/].f_146.f_57[1 /*8*/].f_6, 0, 1))) || (Global_1049287[iParam3 /*1908*/].f_146.f_57[2 /*8*/].f_6 != 0f && unk_0xDFC5B758BDC9546F(Param0, Global_1049287[iParam3 /*1908*/].f_146.f_57[2 /*8*/], Global_1049287[iParam3 /*1908*/].f_146.f_57[2 /*8*/].f_3, Global_1049287[iParam3 /*1908*/].f_146.f_57[2 /*8*/].f_6, 0, 1)))
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
	Var2 = { func_174(unk_0x0C1D3C552325765B()) };
	Var2.f_2 = 0f;
	iVar9 = -1;
	iVar9 = 87;
	while (iVar9 <= 90)
	{
		if (func_181(iVar9))
		{
			Var5 = { Global_1049287[iVar9 /*1908*/].f_3[0 /*3*/] };
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
		while (iVar0 < 8)
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
	if (iParam0 == 7 && !Global_262145.f_14860)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		return Global_1352343[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2507752[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 8)
		{
			return 0;
		}
		return Global_2507705[(iParam0 - 1) /*3*/][iVar0];
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
			return 68;
			break;
		
		case 88:
			return 69;
			break;
		
		case 89:
			return 70;
			break;
		
		case 90:
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
			if (unk_0xDFC5B758BDC9546F(Param0, -1588.118f, -581.678f, 109.549f, -1556.568f, -559.578f, 127.049f, 38.1f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 88:
			if (unk_0xDFC5B758BDC9546F(Param0, -1411.432f, -480.399f, 80.276f, -1348.382f, -473.199f, 98.801f, 37.65f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 89:
			if (unk_0xDFC5B758BDC9546F(Param0, -183.232f, -625.231f, 164.81f, -92.457f, -555.531f, 221.735f, 117.125f, 0, 1))
			{
				return 1;
			}
			break;
		
		case 90:
			if (unk_0xDFC5B758BDC9546F(Param0, -97.577f, -810.65f, 290.012f, -51.802f, -827.175f, 331.587f, 44.15f, 0, 1))
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
	if (func_258())
	{
		iVar0 = 3000;
	}
	return iVar0;
}

int func_191(int iParam0)
{
	if (unk_0xD3FACCDA4D66AEAD(iParam0))
	{
		if (unk_0x6B8DF4084A1CD2DC(iParam0))
		{
			unk_0x33E20212DBE504C2(iParam0);
			return unk_0x775F8FFC8E29F525(iParam0);
		}
	}
	return 0;
}

int func_192()
{
	struct<3> Var0;
	float fVar3;
	
	if (!unk_0x912AD5A10E7633F0(iLocal_1174, 0))
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(iLocal_1174, 1) };
		fVar3 = (Var0.f_2 - Local_133.f_6.f_2);
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
	
	if (iLocal_1136)
	{
		if (unk_0xD3FACCDA4D66AEAD(iLocal_1174))
		{
			if (!unk_0x630BD2AFB0686BBA(iLocal_1174))
			{
				if (unk_0xF4EC4B99EA67DA10(iLocal_1174))
				{
					iVar0 = unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), uLocal_1137));
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
		iLocal_1136 = 1;
	}
	uLocal_1137 = unk_0x4B50AAB32FBE0483();
	return 1;
}

void func_194()
{
	float fVar0;
	
	if (unk_0xF06B045B9DA829B7())
	{
		Local_133.f_10 = { unk_0xE7910FE41D6FF6F5(unk_0xFC40E37448F735D8(unk_0xD7ED6EBE213268C9())) };
		Local_133.f_10.f_2 = unk_0xF71AD8664223AFBE((Local_133.f_10 - 25f), (Local_133.f_10.f_1 - 25f), (Local_133.f_10 + 25f), (Local_133.f_10.f_1 + 25f));
		fVar0 = unk_0x0863C026B867B269((Local_133.f_10 - 25f), (Local_133.f_10.f_1 - 25f), (Local_133.f_10 + 25f), (Local_133.f_10.f_1 + 25f));
		if ((Local_133.f_10.f_2 - fVar0) < 20f)
		{
			Local_133.f_10.f_2 = (Local_133.f_10.f_2 + 10f);
		}
		else if ((Local_133.f_10.f_2 - fVar0) > 30f && (Local_133.f_10.f_2 - fVar0) < 70f)
		{
			Local_133.f_10.f_2 = (Local_133.f_10.f_2 + 40f);
		}
		func_195(0);
		func_158(Local_133.f_10);
	}
}

void func_195(int iParam0)
{
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_268), iParam0);
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
		if (unk_0xD3FACCDA4D66AEAD(unk_0x564EAE6038A81C07(Local_133.f_4)))
		{
			if (!unk_0x912AD5A10E7633F0(unk_0x564EAE6038A81C07(Local_133.f_4), 0))
			{
				Var0 = { unk_0xC59DF10B4FC39DF8(unk_0x564EAE6038A81C07(Local_133.f_4), 0) };
				if (unk_0x6E07DBF03F3AC258(unk_0xA0081090911D13E5(), Var0, 50f, 50f, 150f, 0, 1, 0) && !func_198(unk_0x0C1D3C552325765B()))
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
	if (func_199(Global_1588660[iParam0 /*532*/].f_256.f_11))
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
	if (Global_15745 != 0 || unk_0xE80581DE0ACF1F8A())
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
	switch (Local_133.f_23)
	{
		case 0:
			if (unk_0x08BA6DD398CA197C(Local_133.f_1, 8) || (!func_137(iLocal_1174) && unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), iLocal_1174, 0)))
			{
				func_205();
				Local_133.f_23 = 1;
			}
			break;
		
		case 1:
			if (!func_137(iLocal_1174))
			{
				if (unk_0x41617C7E7EAFFE34(iLocal_1174) > 0)
				{
					Local_133.f_23 = 2;
				}
			}
			break;
		
		case 2:
			if (unk_0x08BA6DD398CA197C(Local_133.f_1, 12))
			{
				if (unk_0xF06B045B9DA829B7())
				{
					Local_133.f_23 = 3;
					func_110(&uLocal_1154, 0, 0);
				}
			}
			else if (unk_0x08BA6DD398CA197C(Local_133.f_1, 9))
			{
				Local_133.f_23 = 3;
				func_110(&uLocal_1154, 0, 0);
			}
			else if (unk_0x08BA6DD398CA197C(Local_133.f_1, 10))
			{
				Local_133.f_23 = 5;
			}
			break;
		
		case 3:
			if (!func_137(iLocal_1174))
			{
				if (unk_0x41617C7E7EAFFE34(iLocal_1174) <= 0)
				{
					Local_133.f_23 = 1;
				}
				else if (unk_0x08BA6DD398CA197C(Local_133.f_1, 10))
				{
					Local_133.f_23 = 5;
				}
				else if (!unk_0xF06B045B9DA829B7() || func_156(0))
				{
					Local_133.f_10 = { 0f, 0f, 0f };
					unk_0x09C86C0C5CA26B1E(&(Local_133.f_1), 10);
					unk_0x09C86C0C5CA26B1E(&(Local_133.f_1), 9);
					Local_133.f_23 = 2;
				}
			}
			break;
		
		case 4:
			if (Global_2451808.f_26)
			{
				if (func_203())
				{
					func_404(0);
				}
			}
			break;
		
		case 5:
			if (!func_137(iLocal_1174))
			{
				if (unk_0x41617C7E7EAFFE34(iLocal_1174) <= 0 && !unk_0x97C29E7ED977A936(iLocal_1174))
				{
					if (func_130(Local_133.f_5, 1, 1) && !unk_0x630BD2AFB0686BBA(unk_0x21F191D9AFF98B5E(Local_133.f_5)))
					{
						if (unk_0x21178DF77817BF39(unk_0x21F191D9AFF98B5E(Local_133.f_5), -275944640) != 1 && unk_0x21178DF77817BF39(unk_0x21F191D9AFF98B5E(Local_133.f_5), -275944640) != 0)
						{
							Local_133.f_23 = 6;
						}
					}
				}
				else if (!unk_0xF06B045B9DA829B7() || func_156(0))
				{
					Local_133.f_10 = { 0f, 0f, 0f };
					unk_0x09C86C0C5CA26B1E(&(Local_133.f_1), 10);
					unk_0x09C86C0C5CA26B1E(&(Local_133.f_1), 9);
					Local_133.f_23 = 2;
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
	
	if (!unk_0xD9E8CA806A80203D())
	{
		return 1;
	}
	if (unk_0x0E091C9F3918F674(Local_133.f_4))
	{
		if (!unk_0xB480350E4250D92A(Local_133.f_4))
		{
			unk_0xDC64FA270C733B30(Local_133.f_4);
		}
		else
		{
			func_204(&(Local_133.f_4));
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
	
	if (unk_0x0E091C9F3918F674(*uParam0))
	{
		if (!unk_0xB480350E4250D92A(*uParam0))
		{
		}
	}
	if (unk_0x3CF373660FCFAFCE(*uParam0))
	{
		uVar0 = unk_0x63CE7A3848B84093(*uParam0);
		unk_0xFFB39FA225A945DB(&uVar0);
	}
}

void func_205()
{
	int iVar0;
	
	if (unk_0xD9E8CA806A80203D() && !unk_0x598A9E990F05F82C())
	{
		iVar0 = func_7(1183, -1, 0);
		if (!unk_0x08BA6DD398CA197C(iVar0, 16))
		{
			if (!func_137(iLocal_1174) && !func_136(Local_133.f_4))
			{
				if (unk_0x1FD87E888EB4FC00(unk_0x564EAE6038A81C07(Local_133.f_4), iLocal_1174, 0) && !unk_0x12AE3D700F6A2545(unk_0x564EAE6038A81C07(Local_133.f_4)))
				{
					unk_0x55B5433015A91E85("HTX_HELPN");
					if (func_207())
					{
						unk_0x212C24688D441F9E(13);
						unk_0xBDE6EEC5F6BDC060("GB_HELI_BLIP");
					}
					else
					{
						unk_0x212C24688D441F9E(iLocal_265);
						unk_0xBDE6EEC5F6BDC060("HTX_HELPB");
					}
					unk_0x85AE92859C5AADE3(0, 0, 1, -1);
					unk_0x88B0F0DC270164B7(&iVar0, 16);
					func_206(1183, iVar0, -1, 1, 0);
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
	iVar0 = Global_2491469[iParam0 /*3*/][func_8(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, iParam1, iParam3);
	}
}

int func_207()
{
	if (iLocal_1174 == Global_2482149.f_280 || iLocal_1174 == Global_2482149.f_5276)
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
	
	unk_0x09C86C0C5CA26B1E(&(Local_133.f_1), 9);
	iVar0 = 0;
	while (iVar0 < unk_0xE5697AB254094B0D())
	{
		if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(iVar0)))
		{
			iVar1 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(iVar0));
			if (func_130(iVar1, 1, 1))
			{
				if (!func_137(iLocal_1174))
				{
					if (!unk_0x08BA6DD398CA197C(Local_133.f_1, 8))
					{
						if (unk_0x6E07DBF03F3AC258(iLocal_1174, Local_133.f_6, (7.5f * 1.5f), (7.5f * 1.5f), (7.5f * 1.5f), 0, 1, 0) && !func_193())
						{
							unk_0x88B0F0DC270164B7(&(Local_133.f_1), 8);
						}
					}
					if (!unk_0x08BA6DD398CA197C(Local_133.f_1, 10))
					{
						if (unk_0x6E07DBF03F3AC258(iLocal_1174, Local_133.f_10, (7.5f * 1.5f), (7.5f * 1.5f), (10f * 2f), 0, 1, 0))
						{
							unk_0x88B0F0DC270164B7(&(Local_133.f_1), 10);
						}
					}
					if (!unk_0x08BA6DD398CA197C(Local_133.f_1, 9))
					{
						if (unk_0x08BA6DD398CA197C(Local_166[iVar0 /*3*/].f_1, 6))
						{
							unk_0x88B0F0DC270164B7(&(Local_133.f_1), 9);
							unk_0x09C86C0C5CA26B1E(&(Local_166[iVar0 /*3*/].f_1), 6);
						}
					}
					if (Local_133.f_24 != 4)
					{
						if (unk_0x08BA6DD398CA197C(Local_166[iVar0 /*3*/].f_1, 5))
						{
							Local_133.f_24 = 4;
							Local_133.f_13 = { 100000f, 100000f, 100000f };
							unk_0x09C86C0C5CA26B1E(&(Local_166[iVar0 /*3*/].f_1), 5);
						}
					}
					if (Local_133.f_24 != 5)
					{
						if (unk_0x08BA6DD398CA197C(Local_166[iVar0 /*3*/].f_1, 8))
						{
							if (func_227(iVar1) && func_213(iVar1))
							{
								if (iLocal_106 == -1)
								{
									iVar2 = func_185(Global_1588660[iVar1 /*532*/].f_256[5]);
									Local_133.f_29 = { func_183(iVar2) + Vector(15f, 0f, 0f) };
								}
								else
								{
									iVar3 = iLocal_106;
									func_210(func_211(iVar3), &(Local_133.f_29));
									Local_133.f_29 = { Local_133.f_29 + Vector(40f, 0f, 0f) };
								}
								Local_133.f_24 = 5;
								Local_133.f_23 = 4;
								Local_133.f_28 = iVar1;
								func_158(Local_133.f_29);
							}
							else if (!unk_0x912AD5A10E7633F0(iLocal_1174, 0) && !unk_0x775F8FFC8E29F525(iLocal_1174))
							{
								unk_0x33E20212DBE504C2(iLocal_1174);
							}
							else
							{
								func_209();
								Local_133.f_23 = 2;
								Local_133.f_24 = 1;
								func_157();
								unk_0x09C86C0C5CA26B1E(&(Local_133.f_1), 9);
								unk_0x09C86C0C5CA26B1E(&(Local_133.f_1), 10);
								unk_0x09C86C0C5CA26B1E(&(Local_133.f_1), 12);
								if (unk_0xF06B045B9DA829B7())
								{
									unk_0x2963020A1B65B30A();
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
	
	iVar0 = iLocal_1174;
	if (unk_0x912AD5A10E7633F0(iVar0, 0))
	{
		return;
	}
	if (unk_0x775F8FFC8E29F525(iVar0))
	{
		unk_0xB032923150355520(iVar0, 1);
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
	while (iVar0 < 57)
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
			if (!unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_296, 6))
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
			if (unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 4))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_215(int iParam0)
{
	if ((func_216(iParam0) == 167 || func_216(iParam0) == 168) || func_216(iParam0) == 190)
	{
		return 1;
	}
	return 0;
}

int func_216(int iParam0)
{
	if (func_217(iParam0, 0))
	{
		return Global_1614576[iParam0 /*324*/].f_10.f_32;
	}
	return -1;
}

int func_217(int iParam0, int iParam1)
{
	if (Global_1614576[iParam0 /*324*/].f_10.f_32 != -1 || (iParam1 && Global_1614576[iParam0 /*324*/].f_10.f_31 != -1))
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
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_10.f_4, iParam1);
}

int func_221(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return unk_0x08BA6DD398CA197C(Global_1614576[iVar0 /*324*/].f_1, 0);
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
	if (Global_1588660[iParam0 /*532*/] == -1)
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
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_13.f_1, 0);
}

int func_226(int iParam0)
{
	if (func_130(iParam0, 0, 1))
	{
		return Global_2421327[iParam0 /*353*/].f_1;
	}
	return 0;
}

bool func_227(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 26);
}

int func_228()
{
	bool bVar0;
	
	if (func_109(&uLocal_1130, 5000, 0))
	{
		if (unk_0x420841F5621E7397(1, 1, 0, 0))
		{
			if (func_249(func_250()) && func_249(func_248()))
			{
				if (func_161(&bVar0))
				{
					if (func_231(bVar0) && func_229())
					{
						func_195(0);
						func_158(Local_133.f_6);
						Local_133.f_13 = { 100000f, 100000f, 100000f };
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
	if ((!unk_0x0E091C9F3918F674(Local_133.f_4) && func_249(func_248())) && unk_0x0E091C9F3918F674(Local_133.f_3))
	{
		if (!func_137(iLocal_1174))
		{
			if (func_230(&(Local_133.f_4), Local_133.f_3, 22, func_248(), -1, 1, 1, 1))
			{
				unk_0xFF5CE2ECB4FBD4A8(unk_0x564EAE6038A81C07(Local_133.f_4), 1);
				unk_0x6F040B02C824E718(unk_0x564EAE6038A81C07(Local_133.f_4), 0);
				unk_0x77637031DE326F70(unk_0x564EAE6038A81C07(Local_133.f_4), 1);
				unk_0x87BBAE0EE5DD7680(unk_0x564EAE6038A81C07(Local_133.f_4), 17, 1);
				unk_0x87BBAE0EE5DD7680(unk_0x564EAE6038A81C07(Local_133.f_4), 5, 0);
				unk_0x797AA7825A5A2D95(unk_0x564EAE6038A81C07(Local_133.f_4), 2, 1);
				unk_0x797AA7825A5A2D95(unk_0x564EAE6038A81C07(Local_133.f_4), 1024, 1);
				unk_0x797AA7825A5A2D95(unk_0x564EAE6038A81C07(Local_133.f_4), 2048, 1);
				unk_0x797AA7825A5A2D95(unk_0x564EAE6038A81C07(Local_133.f_4), 32768, 0);
				unk_0x705E4255B39314A7(unk_0x564EAE6038A81C07(Local_133.f_4), 251, 1);
				unk_0xD9AB5877E5CA2FF0(unk_0x564EAE6038A81C07(Local_133.f_4), 0);
				unk_0xA082D4AC00BC651A(unk_0x564EAE6038A81C07(Local_133.f_4), unk_0xF2DB717A73826179((200f * Global_262145.f_151)));
				if (func_144())
				{
					func_108(&uLocal_965, 3, unk_0x564EAE6038A81C07(Local_133.f_4), "FM_Pilot", 0, 1);
				}
				else
				{
					func_11(1);
					func_108(&uLocal_965, 2, unk_0x564EAE6038A81C07(Local_133.f_4), "EXEC_PILOT", 0, 1);
				}
			}
		}
	}
	if (!unk_0x0E091C9F3918F674(Local_133.f_4))
	{
		return 0;
	}
	unk_0x2C07692AA3545079(func_248());
	return 1;
}

int func_230(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
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
	*uParam0 = unk_0x9ED2AEF3CEBC2436(unk_0x667A2CFA1914073C(unk_0x15F0E6D5AC2852F1(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
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

int func_231(bool bParam0)
{
	struct<3> Var0;
	var uVar3;
	
	if (!unk_0x0E091C9F3918F674(Local_133.f_3))
	{
		if (func_249(func_250()))
		{
			func_245(&Var0, &uVar3, bParam0);
			if (func_235(Var0, 6f, 1f, 1f, 10f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0) || bParam0)
			{
				if (Local_133.f_9 > -1f)
				{
					uVar3 = Local_133.f_9;
				}
				if (func_234(&(Local_133.f_3), func_250(), Var0, uVar3, 1, 1, 1, 0, 1, 1, 0))
				{
					iLocal_1174 = unk_0x15F0E6D5AC2852F1(Local_133.f_3);
					unk_0x6F40E1EE32FE6A5E(iLocal_1174, 1, 1, 0);
					if (!bParam0)
					{
						unk_0xF1F2951FCA900FD0(iLocal_1174, 30f);
					}
					unk_0xE88D5F6F072B64A7(iLocal_1174);
					unk_0x050283B96EB098C0(iLocal_1174, 0);
					unk_0x25E546EB6A8BE2E6(iLocal_1174, 1);
					unk_0x437DA015C47CF992(iLocal_1174, 0f);
					if (unk_0x71F81D3603710A43("HeliTaxi", 2))
					{
						unk_0x6E48FDB1A085F319(iLocal_1174, "HeliTaxi", 1);
					}
					func_148(1);
					func_232();
					if (func_258())
					{
					}
				}
			}
		}
	}
	if (!unk_0x0E091C9F3918F674(Local_133.f_3))
	{
		return 0;
	}
	unk_0x2C07692AA3545079(func_250());
	return 1;
}

void func_232()
{
	func_233(Global_2482149.f_789, iLocal_1174);
}

void func_233(int iParam0, int iParam1)
{
	if (unk_0x642E829F9613672E(iParam1) > 0)
	{
		unk_0xB9C9103C26C01C4F(iParam1, 0);
		if (iParam0 == 0)
		{
		}
	}
}

int func_234(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12)
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
	iVar0 = unk_0xE044C77D0FC9DB66(iParam1, Param2, uParam5, iParam7, iParam6);
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

int func_235(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
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
		if (func_240(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404993.f_2++;
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
	Global_2404993.f_2++;
	return 1;
}

int func_236(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_130(unk_0x0C1D3C552325765B(), 1, 1))
		{
			if (!unk_0x2C22E7D1C80A53EF())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x999A157665D69393(func_166(unk_0x0C1D3C552325765B()), Param0, 1) <= (fVar2 + fParam3))
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
		if (func_130(iVar1, 1, 1))
		{
			if (!func_238(iVar1, 0) && unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x0C1D3C552325765B()))
				{
					if ((func_237(iVar1) || !bParam10) && !Global_2421327[iVar1 /*353*/].f_258)
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
								if (unk_0x999A157665D69393(func_166(iVar1), Param0, 1) <= (fVar2 + fParam3))
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
							if (unk_0x999A157665D69393(func_166(iVar1), Param0, 1) <= (fVar2 + fParam3))
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

int func_237(int iParam0)
{
	if (unk_0x9125ADC25E13C689(unk_0x21F191D9AFF98B5E(iParam0)) || Global_2421327[iParam0 /*353*/].f_244)
	{
		return 1;
	}
	return 0;
}

bool func_238(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		bVar0 = func_239(-1, 0) == 8;
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
		if ((iParam8 == 1 && unk_0x0C1D3C552325765B() != iVar1) || iParam8 == 0)
		{
			if (func_130(iVar1, bParam4, bParam5))
			{
				if (unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iVar1))
				{
					if (!bParam7 || (!unk_0xEB361B4BD195A4D3(unk_0x21F191D9AFF98B5E(iVar1)) && func_237(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) != unk_0x10B1B072E9514664(iVar1))) || unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1)
						{
							if (((unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1 && uParam9) && bParam6) && func_241(iVar1))
							{
							}
							else if (unk_0xD3FACCDA4D66AEAD(unk_0x21F191D9AFF98B5E(iVar1)))
							{
								if (unk_0x999A157665D69393(func_166(iVar1), Param0, 1) < fParam3)
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
	if (func_244(unk_0x0C1D3C552325765B(), iParam0))
	{
		return 1;
	}
	Global_2471194 = { func_243(iParam0) };
	if (unk_0x74A87F4BE7FE0199(&Global_2471194))
	{
		return 1;
	}
	if (func_242(unk_0x0C1D3C552325765B(), iParam0))
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
	
	unk_0xCA4A074601307AB8(iParam0, &Var0, 13);
	return Var0;
}

int func_244(int iParam0, int iParam1)
{
	if (unk_0x46E4D0D0168391A1())
	{
		Global_2471194 = { func_243(iParam0) };
		Global_2471207 = { func_243(iParam1) };
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

void func_245(var uParam0, var uParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	
	if (bParam2)
	{
		*uParam0 = { Local_133.f_6 };
		*uParam1 = Local_133.f_9;
		fVar0 = unk_0xF71AD8664223AFBE(*uParam0, uParam0->f_1, *uParam0, uParam0->f_1);
		if (fVar0 < (Local_133.f_6.f_2 + 100f))
		{
			fVar0 = (Local_133.f_6.f_2 + 100f);
		}
		uParam0->f_2 = fVar0;
	}
	else
	{
		*uParam0 = { func_246(Local_133.f_6, 140f, 180f, (200f / 2f)) };
		*uParam1 = unk_0xE92969F4247292EB((Local_133.f_6 - *uParam0), (Local_133.f_6.f_1 - uParam0->f_1));
		fVar1 = unk_0xF71AD8664223AFBE((*uParam0 - 180f), (uParam0->f_1 - 180f), (*uParam0 + 180f), (uParam0->f_1 + 180f));
		if (fVar1 < (Local_133.f_6.f_2 + 100f))
		{
			fVar1 = (Local_133.f_6.f_2 + 100f);
		}
		uParam0->f_2 = fVar1;
	}
}

Vector3 func_246(struct<3> Param0, float fParam3, float fParam4, float fParam5)
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { unk_0xF25F352E34274C58(-1f, 1f), unk_0xF25F352E34274C58(-1f, 1f), 0f };
	fVar3 = (fParam5 / 2f);
	Var0 = { func_247(Var0, unk_0xF25F352E34274C58(fParam3, fParam4)) };
	Var0.f_2 = unk_0xF25F352E34274C58(-fVar3, fVar3);
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
	if (func_258())
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
	unk_0x491067A8E906F22D(iParam0);
	return unk_0x2C1B5A0D3E233FC3(iParam0);
}

int func_250()
{
	if (func_258())
	{
		return joaat("supervolito");
	}
	return joaat("maverick");
}

void func_251()
{
	if (unk_0x16833EFAA58E63DB(uLocal_264))
	{
		if (func_254(iLocal_1174, uLocal_264, 1))
		{
			unk_0x6F18BFEFE84565FF(uLocal_264, "HTX_BLIP");
			iLocal_265 = 1;
			func_252(&uLocal_264, iLocal_265);
		}
	}
}

void func_252(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0x16833EFAA58E63DB(*uParam0))
	{
		uVar0 = func_253(iParam1);
		unk_0x77804F3DCBA01DB5(*uParam0, uVar0);
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
	unk_0x29F530EB20218AC0(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

int func_254(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xE2D4B51819FD3439(uParam1);
	if (func_257(iParam0, bParam2))
	{
		if (!iVar0 == func_256(iVar0))
		{
			unk_0x32479C670EB9962F(uParam1, func_256(iVar0));
			return 1;
		}
	}
	else if (!iVar0 == func_255(iVar0))
	{
		unk_0x32479C670EB9962F(uParam1, func_255(iVar0));
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
	}
	return iParam0;
}

int func_256(int iParam0)
{
	switch (iParam0)
	{
		case 422:
			return 64;
			break;
	}
	return iParam0;
}

int func_257(int iParam0, bool bParam1)
{
	if (((!unk_0x912AD5A10E7633F0(iParam0, 0) && (!unk_0x630BD2AFB0686BBA(iParam0) && unk_0xF4EC4B99EA67DA10(iParam0))) && unk_0x652D2EEEF1D3E62C(unk_0x24D47569A04F80A8(iParam0)) < 0.5f) && func_134(iParam0, bParam1, bParam1, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_258()
{
	if (Global_2482149.f_789 > -1)
	{
		return 1;
	}
	return 0;
}

void func_259()
{
	if (bLocal_1156)
	{
		if (!iLocal_1157)
		{
			if (func_191(iLocal_1174))
			{
				unk_0xC2407AC016215F2D(iLocal_1174, 0, 0, 0, 1, 0, 0, 0, 0);
				iLocal_1157 = 1;
			}
		}
	}
	else if (iLocal_1157)
	{
		if (func_191(iLocal_1174))
		{
			unk_0xC2407AC016215F2D(iLocal_1174, 0, 0, 0, 0, 0, 0, 0, 0);
			iLocal_1157 = 0;
		}
	}
}

int func_260(var uParam0)
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

void func_261(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xD9E8CA806A80203D())
		{
			func_110(uParam0, 0, 0);
		}
	}
}

void func_262()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (Local_133.f_23 == 6)
	{
		Local_166[unk_0x848AF823A8EA3C62() /*3*/].f_2 = 6;
	}
	iVar0 = 0;
	bVar1 = false;
	iLocal_103 = 0;
	switch (Local_166[unk_0x848AF823A8EA3C62() /*3*/].f_2)
	{
		case 0:
			if (Local_133.f_23 > 0)
			{
				Local_166[unk_0x848AF823A8EA3C62() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (!func_137(iLocal_1174))
			{
				func_389();
				func_371();
				func_370();
				if (func_130(unk_0x0C1D3C552325765B(), 1, 1))
				{
					if (unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), iLocal_1174, 0))
					{
						unk_0x841EA440AD1F0294(0);
						func_369();
						unk_0xFC58A524C1CF0304(unk_0xA0081090911D13E5(), joaat("gadget_parachute"), 1, 0);
						unk_0x2D1C0D54B36FFF7E();
						Local_166[unk_0x848AF823A8EA3C62() /*3*/].f_2 = 2;
						unk_0x09C86C0C5CA26B1E(&(Local_166[unk_0x848AF823A8EA3C62() /*3*/].f_1), 0);
					}
				}
			}
			break;
		
		case 2:
			if (!func_137(iLocal_1174))
			{
				if (func_130(unk_0x0C1D3C552325765B(), 1, 1))
				{
					if (unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), iLocal_1174, 0))
					{
						func_368();
						func_367();
						unk_0x2D1C0D54B36FFF7E();
						if (unk_0xD9E8CA806A80203D() && func_366(1, 1))
						{
							if (unk_0xF06B045B9DA829B7())
							{
								if (unk_0x4255B5ECB9D34344(0))
								{
									if (unk_0x2A57AED61E15C7C7(0, 21))
									{
										iVar0 = 1;
									}
								}
								else if (unk_0x2A57AED61E15C7C7(2, 201))
								{
									iVar0 = 1;
								}
								if (iVar0 || unk_0x08BA6DD398CA197C(Local_133.f_1, 12))
								{
									unk_0x09C86C0C5CA26B1E(&(Local_133.f_1), 12);
									unk_0x09C86C0C5CA26B1E(&(Local_133.f_2), 4);
									Local_166[unk_0x848AF823A8EA3C62() /*3*/].f_2 = 3;
									unk_0x09C86C0C5CA26B1E(&(Local_166[unk_0x848AF823A8EA3C62() /*3*/].f_1), 5);
									unk_0x88B0F0DC270164B7(&(Local_166[unk_0x848AF823A8EA3C62() /*3*/].f_1), 6);
								}
							}
							if (unk_0x08BA6DD398CA197C(iLocal_1175, 7) && iLocal_99 == 0)
							{
								if (unk_0x4255B5ECB9D34344(0))
								{
									if (unk_0x2A57AED61E15C7C7(0, 101))
									{
										iLocal_103 = 1;
									}
								}
								else if (unk_0x2A57AED61E15C7C7(2, 209))
								{
									iLocal_103 = 1;
								}
							}
						}
						if (Local_133.f_23 >= 5)
						{
							Local_166[unk_0x848AF823A8EA3C62() /*3*/].f_2 = 5;
						}
						if (Local_133.f_23 == 4)
						{
							Local_166[unk_0x848AF823A8EA3C62() /*3*/].f_2 = 4;
						}
					}
					else
					{
						Local_166[unk_0x848AF823A8EA3C62() /*3*/].f_2 = 1;
					}
				}
			}
			break;
		
		case 3:
			if (!func_137(iLocal_1174))
			{
				if (func_130(unk_0x0C1D3C552325765B(), 1, 1))
				{
					if (unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), iLocal_1174, 0))
					{
						func_368();
						unk_0x2D1C0D54B36FFF7E();
						if ((unk_0xD9E8CA806A80203D() && func_366(1, 1)) && unk_0x21178DF77817BF39(unk_0xA0081090911D13E5(), 1785177548) != 1)
						{
							if (unk_0x4255B5ECB9D34344(0))
							{
								if (unk_0x2A57AED61E15C7C7(0, 36))
								{
									bVar1 = true;
								}
							}
							else if (unk_0x2A57AED61E15C7C7(2, 202))
							{
								bVar1 = true;
							}
							if (bVar1)
							{
								Local_166[unk_0x848AF823A8EA3C62() /*3*/].f_2 = 2;
								unk_0x88B0F0DC270164B7(&(Local_166[unk_0x848AF823A8EA3C62() /*3*/].f_1), 5);
							}
							if (unk_0x4255B5ECB9D34344(0))
							{
								if (unk_0x2A57AED61E15C7C7(0, 101))
								{
									iLocal_103 = 1;
								}
							}
							else if (unk_0x2A57AED61E15C7C7(2, 209))
							{
								iLocal_103 = 1;
							}
						}
						if (Local_133.f_23 >= 5)
						{
							Local_166[unk_0x848AF823A8EA3C62() /*3*/].f_2 = 5;
						}
						else if (Local_133.f_23 == 2)
						{
							unk_0x09C86C0C5CA26B1E(&(Local_133.f_1), 9);
							Local_166[unk_0x848AF823A8EA3C62() /*3*/].f_2 = 2;
						}
						else if (Local_133.f_23 == 4)
						{
							Local_166[unk_0x848AF823A8EA3C62() /*3*/].f_2 = 4;
						}
					}
					else
					{
						Local_166[unk_0x848AF823A8EA3C62() /*3*/].f_2 = 1;
					}
				}
			}
			break;
		
		case 4:
			if ((((((func_365("POD_CHAM_CIGAR") || func_365("POD_CHAM_WEB")) || func_365("POD_UNKNOWN")) || func_365("POD_CIGAR")) || func_365("POD_WEB")) || func_365("LUX_VEH_ACT_1ST")) || func_365("LUX_ACT_1ST_SW"))
			{
				unk_0x94724F7C938EBE34(1);
			}
			if (unk_0x08BA6DD398CA197C(Local_166[unk_0x848AF823A8EA3C62() /*3*/].f_1, 8))
			{
				unk_0x09C86C0C5CA26B1E(&(Local_166[unk_0x848AF823A8EA3C62() /*3*/].f_1), 8);
			}
			if (!func_144())
			{
				if (!unk_0x08BA6DD398CA197C(Local_133.f_2, 17))
				{
					if (func_197())
					{
						func_11(1);
						func_108(&uLocal_965, 2, unk_0x564EAE6038A81C07(Local_133.f_4), "EXEC_PILOT", 0, 1);
						if (iLocal_106 == -1)
						{
							func_91(&uLocal_965, "EXHELAU", "EXHEL_OFFICE", 12, 0, 0, 1);
						}
						else
						{
							func_91(&uLocal_965, "EXHELAU", "EXHEL_CUSTOM", 12, 0, 0, 1);
						}
						unk_0x88B0F0DC270164B7(&(Local_133.f_2), 17);
					}
				}
			}
			if ((Local_133.f_28 == unk_0x0C1D3C552325765B() && func_364()) && Local_133.f_27)
			{
				if (!unk_0x08BA6DD398CA197C(iLocal_263, 16))
				{
					if (!func_137(iLocal_1174))
					{
						if (func_130(unk_0x0C1D3C552325765B(), 1, 1))
						{
							if (unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), iLocal_1174, 0))
							{
								if (!func_363())
								{
									if (unk_0x08BA6DD398CA197C(Local_133.f_1, 15))
									{
										iVar2 = func_362(1);
										if (iVar2 > 0)
										{
											if (iLocal_106 == -1)
											{
												func_361(iVar2, unk_0x0C1D3C552325765B(), 0, Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256[5]);
											}
											else
											{
												func_361(iVar2, unk_0x0C1D3C552325765B(), 1, iLocal_106);
											}
											unk_0x88B0F0DC270164B7(&iLocal_263, 16);
										}
									}
								}
							}
						}
					}
				}
			}
			else if (!unk_0xD9E8CA806A80203D())
			{
				func_404(0);
			}
			if (Local_133.f_23 == 2)
			{
				Local_166[unk_0x848AF823A8EA3C62() /*3*/].f_2 = 2;
				if (unk_0x08BA6DD398CA197C(Local_166[unk_0x848AF823A8EA3C62() /*3*/].f_1, 8))
				{
					unk_0x09C86C0C5CA26B1E(&(Local_166[unk_0x848AF823A8EA3C62() /*3*/].f_1), 8);
				}
			}
			break;
		
		case 5:
			if (!func_137(iLocal_1174))
			{
				if (func_130(unk_0x0C1D3C552325765B(), 1, 1))
				{
					func_359();
					func_367();
					unk_0x2D1C0D54B36FFF7E();
					if (Local_133.f_23 == 2)
					{
						unk_0x09C86C0C5CA26B1E(&(Local_133.f_1), 9);
						Local_166[unk_0x848AF823A8EA3C62() /*3*/].f_2 = 2;
					}
				}
			}
			break;
		
		case 6:
			func_404(1);
			break;
	}
	if (((Local_166[unk_0x848AF823A8EA3C62() /*3*/].f_2 != 4 && iLocal_104) && unk_0xD9E8CA806A80203D()) && func_355())
	{
		if (iLocal_106 > -2)
		{
		}
		if (!unk_0x775F8FFC8E29F525(iLocal_1174))
		{
			unk_0x33E20212DBE504C2(iLocal_1174);
		}
		unk_0x88B0F0DC270164B7(&iLocal_263, 15);
		func_354();
		Local_166[unk_0x848AF823A8EA3C62() /*3*/].f_2 = 4;
		unk_0x09C86C0C5CA26B1E(&(Local_166[unk_0x848AF823A8EA3C62() /*3*/].f_1), 5);
		unk_0x09C86C0C5CA26B1E(&(Local_166[unk_0x848AF823A8EA3C62() /*3*/].f_1), 6);
		unk_0x88B0F0DC270164B7(&(Local_166[unk_0x848AF823A8EA3C62() /*3*/].f_1), 8);
		iLocal_104 = 0;
	}
	else if (unk_0x08BA6DD398CA197C(iLocal_1175, 7))
	{
		unk_0x09C86C0C5CA26B1E(&iLocal_1175, 7);
	}
	func_284();
	func_263();
}

void func_263()
{
	int iVar0;
	int iVar1;
	struct<9> Var2;
	
	iVar1 = 1;
	if (func_130(unk_0x0C1D3C552325765B(), 1, 1) && !func_137(iLocal_1174))
	{
		if (unk_0x72550A6F2BC0E12B(unk_0xA0081090911D13E5(), iLocal_1174) && !func_283(unk_0xA0081090911D13E5(), iLocal_1174, -1))
		{
			unk_0x7ABD1B29E6C2963D(7);
			unk_0x7ABD1B29E6C2963D(9);
			unk_0x7ABD1B29E6C2963D(6);
			unk_0x7ABD1B29E6C2963D(8);
			unk_0xABC36CFE4F3421A0(0, 80, 1);
		}
		if (unk_0x1E3F61C2C1E29520(uLocal_271))
		{
			if (func_282() || func_129(0))
			{
				if (!unk_0x08BA6DD398CA197C(iLocal_263, 11))
				{
					unk_0x88B0F0DC270164B7(&iLocal_263, 11);
				}
			}
			else if (unk_0x08BA6DD398CA197C(iLocal_263, 11))
			{
				iLocal_1176 = 0;
				unk_0x09C86C0C5CA26B1E(&iLocal_263, 11);
			}
			if (func_366(1, 1))
			{
				if ((((Local_166[unk_0x848AF823A8EA3C62() /*3*/].f_2 == 1 && unk_0x08BA6DD398CA197C(iLocal_263, 2)) || Local_166[unk_0x848AF823A8EA3C62() /*3*/].f_2 == 2) || Local_166[unk_0x848AF823A8EA3C62() /*3*/].f_2 == 3) || Local_166[unk_0x848AF823A8EA3C62() /*3*/].f_2 == 5)
				{
					iLocal_1175 = 0;
					Var2 = { func_281() };
					if (Local_166[unk_0x848AF823A8EA3C62() /*3*/].f_2 == 1)
					{
						if ((!func_193() && !unk_0x08BA6DD398CA197C(Local_166[unk_0x848AF823A8EA3C62() /*3*/].f_1, 0)) && !unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1))
						{
							unk_0x88B0F0DC270164B7(&iLocal_1175, 0);
						}
						else
						{
							iVar1 = 0;
						}
					}
					else if (Local_166[unk_0x848AF823A8EA3C62() /*3*/].f_2 == 2)
					{
						if (unk_0xD9E8CA806A80203D())
						{
							if (unk_0xF06B045B9DA829B7())
							{
								unk_0x88B0F0DC270164B7(&iLocal_1175, 1);
							}
							else
							{
								unk_0x88B0F0DC270164B7(&iLocal_1175, 2);
							}
							if (func_355())
							{
								unk_0x88B0F0DC270164B7(&iLocal_1175, 7);
							}
						}
						if (unk_0xC5F055346C582286(iLocal_1174) < 10f)
						{
							unk_0x88B0F0DC270164B7(&iLocal_1175, 3);
						}
						else if (unk_0x21178DF77817BF39(unk_0xA0081090911D13E5(), -275944640) != 1 && unk_0x21178DF77817BF39(unk_0xA0081090911D13E5(), -275944640) != 0)
						{
							unk_0x88B0F0DC270164B7(&iLocal_1175, 4);
							if (unk_0x8FD32443A080784B(iLocal_1174, 0, 0) != unk_0xA0081090911D13E5() && unk_0xC5F055346C582286(iLocal_1174) < 40f)
							{
								if (func_280())
								{
									unk_0x88B0F0DC270164B7(&iLocal_1175, 5);
									iVar0 = 1;
								}
							}
						}
						else
						{
							iVar1 = 0;
						}
					}
					else if (Local_166[unk_0x848AF823A8EA3C62() /*3*/].f_2 == 3)
					{
						if (unk_0xD9E8CA806A80203D())
						{
							unk_0x88B0F0DC270164B7(&iLocal_1175, 6);
							if (func_355())
							{
								unk_0x88B0F0DC270164B7(&iLocal_1175, 7);
							}
						}
						unk_0x88B0F0DC270164B7(&iLocal_1175, 4);
					}
					else if (Local_166[unk_0x848AF823A8EA3C62() /*3*/].f_2 == 5)
					{
						if (unk_0xC5F055346C582286(iLocal_1174) < 10f)
						{
							unk_0x88B0F0DC270164B7(&iLocal_1175, 3);
						}
						else if (unk_0x21178DF77817BF39(unk_0xA0081090911D13E5(), -275944640) != 1 && unk_0x21178DF77817BF39(unk_0xA0081090911D13E5(), -275944640) != 0)
						{
							unk_0x88B0F0DC270164B7(&iLocal_1175, 4);
							if (unk_0x8FD32443A080784B(iLocal_1174, 0, 0) != unk_0xA0081090911D13E5() && unk_0xC5F055346C582286(iLocal_1174) < 40f)
							{
								if (func_280())
								{
									unk_0x88B0F0DC270164B7(&iLocal_1175, 5);
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
					if (func_279())
					{
						iVar1 = 0;
					}
					if (iVar1 == 1)
					{
						func_278();
						func_277(1);
						func_275(1);
						if (unk_0x21178DF77817BF39(unk_0xA0081090911D13E5(), 1785177548) != 1)
						{
							if ((iLocal_1175 != iLocal_1176 || unk_0xFF9B577A7F80CFDD(2)) || Global_55805)
							{
								Global_55805 = 0;
								func_273(&uLocal_272);
								if (unk_0x08BA6DD398CA197C(iLocal_1175, 0))
								{
									func_272(unk_0x62B1FF1B5EE703A7(0, 23, 1), "HTX_ENTER", &uLocal_272, 0);
								}
								if (unk_0x08BA6DD398CA197C(iLocal_1175, 1))
								{
									if (unk_0x4255B5ECB9D34344(0))
									{
										func_272(unk_0x62B1FF1B5EE703A7(0, 21, 1), "HTX_START", &uLocal_272, 0);
									}
									else
									{
										func_272(unk_0x62B1FF1B5EE703A7(2, 201, 1), "HTX_START", &uLocal_272, 0);
									}
								}
								if (unk_0x08BA6DD398CA197C(iLocal_1175, 2))
								{
									func_272(unk_0x62B1FF1B5EE703A7(2, 199, 1), "HTX_WAYP", &uLocal_272, 0);
								}
								if (unk_0x08BA6DD398CA197C(iLocal_1175, 3))
								{
									func_272(unk_0x62B1FF1B5EE703A7(0, 75, 1), "HTX_EXIT1", &uLocal_272, 0);
								}
								if (unk_0x08BA6DD398CA197C(iLocal_1175, 4))
								{
									func_272(unk_0x62B1FF1B5EE703A7(0, 75, 1), "HTX_EXIT2", &uLocal_272, 0);
								}
								if (unk_0x08BA6DD398CA197C(iLocal_1175, 5))
								{
									if (unk_0x4255B5ECB9D34344(0))
									{
										func_272(unk_0x62B1FF1B5EE703A7(0, 22, 1), "HTX_EXIT3", &uLocal_272, 0);
									}
									else
									{
										func_272(unk_0x62B1FF1B5EE703A7(0, 99, 1), "HTX_EXIT3", &uLocal_272, 0);
									}
								}
								if (unk_0x08BA6DD398CA197C(iLocal_1175, 6))
								{
									if (unk_0x4255B5ECB9D34344(0))
									{
										func_272(unk_0x62B1FF1B5EE703A7(0, 36, 1), "HTX_STOP", &uLocal_272, 0);
									}
									else
									{
										func_272(unk_0x62B1FF1B5EE703A7(2, 202, 1), "HTX_STOP", &uLocal_272, 0);
									}
								}
								if (unk_0x08BA6DD398CA197C(iLocal_1175, 7))
								{
									if (func_271())
									{
										if (unk_0x4255B5ECB9D34344(0))
										{
											func_272(unk_0x62B1FF1B5EE703A7(2, 101, 1), "HTX_QT_WARP", &uLocal_272, 0);
										}
										else
										{
											func_272(unk_0x62B1FF1B5EE703A7(2, 209, 1), "HTX_QT_WARP", &uLocal_272, 0);
										}
									}
									else if (unk_0x4255B5ECB9D34344(0))
									{
										func_272(unk_0x62B1FF1B5EE703A7(2, 101, 1), "HTX_OFF_WARP", &uLocal_272, 0);
									}
									else
									{
										func_272(unk_0x62B1FF1B5EE703A7(2, 209, 1), "HTX_OFF_WARP", &uLocal_272, 0);
									}
								}
							}
							func_264(&uLocal_271, &Var2, &uLocal_272, func_270(&uLocal_272));
							iLocal_1176 = iLocal_1175;
						}
					}
				}
			}
		}
		else
		{
			uLocal_271 = unk_0x474309DF4921072A("instructional_buttons");
		}
		if (iVar0 == 1)
		{
			unk_0xABC36CFE4F3421A0(0, 99, 1);
			unk_0xABC36CFE4F3421A0(0, 100, 1);
		}
	}
	Global_2482149.f_255 = iVar1;
}

void func_264(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	
	if (iParam3 == 1 || unk_0xFF9B577A7F80CFDD(2))
	{
		*uParam2 = 0;
		if (unk_0x1E3F61C2C1E29520(*uParam0))
		{
			if (unk_0x955B8C8F89CC3AC0())
			{
				unk_0xB9D4F4DE7E7EC038(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x5CC02BB872FEF340(0);
				unk_0xE73340DA551C95E1();
			}
			unk_0xB9D4F4DE7E7EC038(*uParam0, "CLEAR_ALL");
			unk_0xE73340DA551C95E1();
		}
		func_269(uParam2);
	}
	if (Global_1318067 < 2)
	{
		func_268(1);
	}
	if (*uParam2 == 0)
	{
		if (!unk_0x1E3F61C2C1E29520(*uParam0))
		{
			*uParam0 = unk_0x474309DF4921072A("instructional_buttons");
		}
		if (unk_0x1E3F61C2C1E29520(*uParam0))
		{
			unk_0x67454FDA361D6831(*uParam0, "CLEAR_ALL");
			if (unk_0x955B8C8F89CC3AC0())
			{
				unk_0xB9D4F4DE7E7EC038(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x5CC02BB872FEF340(1);
				unk_0xE73340DA551C95E1();
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < uParam2->f_680)
			{
				if (unk_0x08BA6DD398CA197C(uParam2->f_676, iVar0))
				{
					unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_DATA_SLOT");
					unk_0x7CBFB9F4AF33C67E(iVar0);
					if (!unk_0x08BA6DD398CA197C(uParam2->f_677, iVar0))
					{
						iVar1 = uParam2->f_1[iVar0 /*56*/].f_53;
						iVar2 = uParam2->f_1[iVar0 /*56*/].f_54;
						iVar3 = uParam2->f_1[iVar0 /*56*/].f_55;
						func_267(unk_0x62B1FF1B5EE703A7(iVar1, iVar2, 1));
						if (iVar3 < 348)
						{
							func_267(unk_0x62B1FF1B5EE703A7(iVar1, iVar3, 1));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[iVar0 /*56*/].f_53;
						uVar5 = uParam2->f_1[iVar0 /*56*/].f_54;
						func_267(unk_0x611F82FE2F038F7C(iVar4, uVar5, 1));
					}
					if (unk_0x08BA6DD398CA197C(uParam2->f_674, iVar0))
					{
						unk_0x709662CF2BD061A4(&(uParam2->f_1[iVar0 /*56*/].f_32));
						if (uParam2->f_681 == iVar0)
						{
							unk_0x37F0707A16E921F7(uParam2->f_1[iVar0 /*56*/].f_36, 70);
						}
						else
						{
							unk_0x3F9D1B882EC0B8AF(uParam2->f_1[iVar0 /*56*/].f_36);
						}
						unk_0x1E77BE8F4283FA05();
					}
					else if (unk_0x08BA6DD398CA197C(uParam2->f_675, iVar0))
					{
						unk_0x709662CF2BD061A4(&(uParam2->f_1[iVar0 /*56*/].f_32));
						unk_0xDA35BDB37E728640(&(uParam2->f_1[iVar0 /*56*/].f_37));
						unk_0x1E77BE8F4283FA05();
					}
					else
					{
						func_31(&(uParam2->f_1[iVar0 /*56*/].f_32));
					}
					if (unk_0x955B8C8F89CC3AC0())
					{
						if (unk_0x08BA6DD398CA197C(uParam2->f_678, iVar0))
						{
							unk_0x5CC02BB872FEF340(1);
							unk_0x7CBFB9F4AF33C67E(uParam2->f_1[iVar0 /*56*/].f_54);
						}
						else
						{
							unk_0x5CC02BB872FEF340(0);
							unk_0x7CBFB9F4AF33C67E(348);
						}
					}
					unk_0xE73340DA551C95E1();
				}
				else
				{
					unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_DATA_SLOT");
					unk_0x7CBFB9F4AF33C67E(iVar0);
					func_267(&(uParam2->f_1[iVar0 /*56*/]));
					if (!unk_0x509383441597090D(&(uParam2->f_1[iVar0 /*56*/].f_16)))
					{
						func_267(&(uParam2->f_1[iVar0 /*56*/].f_16));
					}
					if (unk_0x08BA6DD398CA197C(uParam2->f_674, iVar0))
					{
						unk_0x709662CF2BD061A4(&(uParam2->f_1[iVar0 /*56*/].f_32));
						if (uParam2->f_681 == iVar0)
						{
							unk_0x37F0707A16E921F7(uParam2->f_1[iVar0 /*56*/].f_36, 70);
						}
						else
						{
							unk_0x3F9D1B882EC0B8AF(uParam2->f_1[iVar0 /*56*/].f_36);
						}
						unk_0x1E77BE8F4283FA05();
					}
					else if (unk_0x08BA6DD398CA197C(uParam2->f_675, iVar0))
					{
						unk_0x709662CF2BD061A4(&(uParam2->f_1[iVar0 /*56*/].f_32));
						unk_0xDA35BDB37E728640(&(uParam2->f_1[iVar0 /*56*/].f_37));
						unk_0x1E77BE8F4283FA05();
					}
					else
					{
						func_31(&(uParam2->f_1[iVar0 /*56*/].f_32));
					}
					if (unk_0x955B8C8F89CC3AC0())
					{
						unk_0x5CC02BB872FEF340(0);
						unk_0x7CBFB9F4AF33C67E(348);
					}
					unk_0xE73340DA551C95E1();
				}
				iVar0++;
			}
			unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_MAX_WIDTH");
			unk_0x0FFE3C1DBBA72236(uParam2->f_686);
			unk_0xE73340DA551C95E1();
			unk_0xB9D4F4DE7E7EC038(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x7CBFB9F4AF33C67E(0);
			unk_0xE73340DA551C95E1();
			*uParam2 = 1;
		}
	}
	uParam2->f_682 = 0.05f;
	uParam2->f_683 = 0.045f;
	uParam2->f_684 = 0f;
	uParam2->f_685 = 0f;
	if (*uParam2 == 1)
	{
		func_266(*uParam0, uParam1);
	}
	func_265();
}

void func_265()
{
	unk_0x7ABD1B29E6C2963D(7);
	unk_0x7ABD1B29E6C2963D(6);
	unk_0x7ABD1B29E6C2963D(8);
	unk_0x7ABD1B29E6C2963D(9);
}

void func_266(var uParam0, var uParam1)
{
	unk_0x0F83039847376F53(uParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_267(char* sParam0)
{
	unk_0x481EA0389B099920(sParam0);
}

void func_268(int iParam0)
{
	Global_1318067 = iParam0;
}

void func_269(var uParam0)
{
	uParam0->f_679 = 0;
}

int func_270(var uParam0)
{
	return uParam0->f_679;
}

int func_271()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_72[iVar0 /*2*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_272(char* sParam0, char* sParam1, var uParam2, char* sParam3)
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

void func_273(var uParam0)
{
	func_274(uParam0);
	uParam0->f_679 = 1;
}

void func_274(var uParam0)
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
		uParam0->f_1[iVar0 /*56*/].f_54 = 348;
		uParam0->f_1[iVar0 /*56*/].f_55 = 348;
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

void func_275(bool bParam0)
{
	if (bParam0)
	{
		if (func_276())
		{
			Global_2442442.f_26 = 1;
		}
	}
	else
	{
		Global_2442442.f_26 = 0;
	}
}

bool func_276()
{
	return unk_0x08BA6DD398CA197C(Global_2442442.f_2, 11);
}

void func_277(int iParam0)
{
	Global_1344178.f_932 = iParam0;
}

void func_278()
{
	Global_2491182.f_258 = 1;
}

int func_279()
{
	if (iLocal_99 > 0 || iLocal_104 == 1)
	{
		return 1;
	}
	return 0;
}

int func_280()
{
	if (unk_0x0669C4918776BCDE(iLocal_1174) && !func_258())
	{
		return 1;
	}
	return 0;
}

struct<9> func_281()
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

bool func_282()
{
	return unk_0xDF658EB6CA91DFBC() <= Global_17290.f_5745 + 100;
}

int func_283(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x912AD5A10E7633F0(iParam0, 0) && !unk_0x912AD5A10E7633F0(iParam1, 0))
	{
		if (unk_0x72550A6F2BC0E12B(iParam0, iParam1))
		{
			if (unk_0x8FD32443A080784B(iParam1, iParam2, 0) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_284()
{
	if (iLocal_99 == 0)
	{
		if (iLocal_103)
		{
			if (func_271())
			{
				iLocal_102 = 1;
				iLocal_99 = 1;
			}
			else
			{
				iLocal_104 = 1;
				iLocal_106 = -1;
				iLocal_105 = 1;
			}
		}
	}
	if (iLocal_99 == 1)
	{
		if (func_355())
		{
			func_288();
		}
		else
		{
			iLocal_105 = 1;
		}
	}
	if (iLocal_105)
	{
		func_285(1, -1);
		iLocal_99 = 0;
		iLocal_101 = 0;
		iLocal_105 = 0;
		iLocal_103 = 0;
	}
}

void func_285(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_287(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17290.f_7894)
	{
		unk_0xC667A7C5CE24C569(15);
		Global_17290.f_7894 = 0;
	}
	unk_0xDA81B130FA38800A(0f);
	if (Global_17290.f_5498[iVar0])
	{
		unk_0x89B76C6241C0104D(9, 0);
		Global_17290.f_5498[iVar0] = 0;
	}
	if (Global_17290.f_5484[iVar0])
	{
		unk_0xB14EE32074164477("CommonMenu");
		Global_17290.f_5484[iVar0] = 0;
	}
	if (Global_17290.f_5491[iVar0])
	{
		unk_0xB14EE32074164477("MPShopSale");
		Global_17290.f_5491[iVar0] = 0;
	}
	if (bParam0)
	{
		func_286(&(Global_17290.f_5530[iVar0 /*10*/]));
		Global_17290.f_5591[iVar0] = 0;
	}
	else
	{
		Global_17290.f_5591[iVar0] = 0;
	}
}

void func_286(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x1E3F61C2C1E29520(*uParam0))
		{
			unk_0xA12A0D38735CCBF2(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_287(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0xA86CA03D9749EEB3() && unk_0x391BEA92ECF1B445())
		{
			iParam2 = unk_0x434A417780753DD9();
		}
	}
	StringCopy(&cVar0, unk_0x367152330DB70D69(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x3BB8D1C5FAAB25B3(&cVar0);
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

void func_288()
{
	int iVar0;
	
	func_344(&Local_123);
	if (func_342(0, -1, 0))
	{
		if (iLocal_102)
		{
			func_328();
			iLocal_102 = 0;
		}
		else
		{
			func_327(iLocal_101, 1, 1);
		}
		func_325();
		func_323();
		func_296(1, -1, 1, 0, 1, -1082130432, 0, 0);
		if (!bLocal_113)
		{
			if (func_295())
			{
				iLocal_102 = 1;
			}
		}
		else if (!func_295())
		{
			iLocal_102 = 1;
		}
		if (!bLocal_114)
		{
			if (func_290())
			{
				iLocal_102 = 1;
			}
		}
		else if (!func_290())
		{
			iLocal_102 = 1;
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (!uLocal_115[iVar0])
			{
				if (func_289(iLocal_107[iVar0]))
				{
					iLocal_102 = 1;
				}
			}
			else if (!func_289(iLocal_107[iVar0]))
			{
				iLocal_102 = 1;
			}
			iVar0++;
		}
	}
}

int func_289(int iParam0)
{
	if (iParam0 > 0)
	{
		if (unk_0x2A488C176D52CCA5(func_166(unk_0x0C1D3C552325765B()), func_171(iParam0)) > 100f)
		{
			return 1;
		}
	}
	return 0;
}

int func_290()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = iLocal_1174;
	if (unk_0x912AD5A10E7633F0(iVar0, 0))
	{
		return 0;
	}
	iVar1 = unk_0xAF3D6F27CC1E594E(unk_0x705BC1BB91F530B5(iVar0));
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar5 = (iVar2 - 1);
		if (!unk_0x6315EBE95A97CADF(iVar0, iVar5, 0))
		{
			iVar4 = unk_0x8FD32443A080784B(iVar0, iVar5, 0);
			if (!unk_0x912AD5A10E7633F0(iVar4, 0) && unk_0x54F0AEFB11EA090A(iVar4))
			{
				if (!func_293())
				{
					iVar3 = unk_0xA43666ACD375E339(iVar4);
					if (iVar3 != unk_0x0C1D3C552325765B())
					{
						return 0;
					}
				}
				else
				{
					iVar3 = unk_0xA43666ACD375E339(iVar4);
					if (iVar3 != func_4() && func_130(iVar3, 1, 1))
					{
						if (!func_291(iVar3, func_5(unk_0x0C1D3C552325765B()), 1))
						{
							return 0;
						}
					}
				}
			}
		}
		iVar2++;
	}
	if (iLocal_121)
	{
		if (!func_363())
		{
			iLocal_121 = 0;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_291(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_4())
	{
		if (!bParam2)
		{
			if (func_292(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1614576[iParam0 /*324*/].f_10 != func_4())
		{
			return iParam1 == Global_1614576[iParam0 /*324*/].f_10;
		}
	}
	return 0;
}

int func_292(int iParam0, int iParam1)
{
	if (iParam1 != func_4())
	{
		if (iParam0 != func_4())
		{
			if (Global_1614576[iParam0 /*324*/].f_10 != func_4())
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

bool func_293()
{
	return func_294(unk_0x0C1D3C552325765B());
}

int func_294(int iParam0)
{
	if (iParam0 != func_4())
	{
		if (Global_1614576[iParam0 /*324*/].f_10 != func_4())
		{
			return Global_1614576[iParam0 /*324*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_295()
{
	if (unk_0x2A488C176D52CCA5(func_166(unk_0x0C1D3C552325765B()), func_183(func_185(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256[5]))) > 200f)
	{
		return 1;
	}
	return 0;
}

void func_296(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
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
	
	if (!func_287(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_321(0, bParam6))
	{
		return;
	}
	unk_0xCF4C2CE3511D92EA(76, 84);
	unk_0x9EB94F4B302F02C5(-0.05f, -0.05f, 0f, 0f);
	fVar56 = 0f;
	fVar57 = 0f;
	if (Global_17290)
	{
		if (func_319(29, 1, 1, &fVar35, &fVar36, bParam7))
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
	if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_1)) == unk_0x3BB8D1C5FAAB25B3("HIDE"))
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
		unk_0x28EBEB55C44FD509(&iVar59, &iVar60);
		fVar62 = unk_0x900671749E93DC05(0);
		if (func_318())
		{
			iVar59 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar60) * fVar62));
		}
		fVar63 = (unk_0xBBDA792448DB5A89(iVar59) / unk_0xBBDA792448DB5A89(iVar60));
		fVar61 = (fVar63 / fVar62);
		if (func_318())
		{
			fVar61 = 1f;
		}
		iVar59 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar59) / fVar61));
		iVar60 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar60) / fVar61));
	}
	else
	{
		unk_0xB1F1D8A3052317AC(&iVar59, &iVar60);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17290.f_5598)
		{
			if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_1)) == unk_0x3BB8D1C5FAAB25B3("HIDE"))
			{
				fVar49 = Global_17288;
			}
			else
			{
				if (Global_17290)
				{
					StringCopy(&cVar64, func_317(29), 64);
					StringCopy(&cVar80, func_315(29, 1), 64);
					if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_6703[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_314(Global_17287, Global_17288, fParam5, (fVar56 - 0f), 0, 0, 0, 255);
						unk_0xBD42180765457DB6(&cVar64, &cVar80, (Global_17287 + (fParam5 * 0.5f)), (Global_17288 + ((fVar56 - 0f) * 0.5f)), fVar57, (fVar56 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0xBD42180765457DB6(&cVar64, &cVar80, (Global_17287 + (fParam5 * 0.5f)), (Global_17288 + ((fVar56 - 0f) * 0.5f)), fParam5, (fVar56 - 0f), 0f, 255, 255, 255, 255, 0);
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
				func_314(Global_17287, (Global_17288 + fVar56), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17288 + fVar56) + 0.034722f) + 0f);
				if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_1)) != 0)
				{
					func_313();
					unk_0x09BF2ADDAAD5BC05(&(Global_17290.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17290.f_68)
					{
						if (Global_17290.f_5[iVar14] == 2)
						{
							unk_0x3F9D1B882EC0B8AF(Global_17290.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17290.f_5[iVar14] == 3)
						{
							unk_0x63A04EB63F481124(Global_17290.f_14[iVar16], Global_17290.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17290.f_5[iVar14] == 1)
						{
							unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17290.f_5[iVar14] == 8)
						{
							unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17290.f_5[iVar14] == 5)
						{
							unk_0xDA35BDB37E728640(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 6)
						{
							unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 7)
						{
							unk_0xDA35BDB37E728640(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 9)
						{
							unk_0xDA35BDB37E728640(&(Global_17290.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x80F8A2A91BE5A679((Global_17287 + 0.00390625f), ((Global_17288 + fVar56) + 0.00416664f), 0);
				}
				if (Global_17290.f_5601 > Global_17290.f_5095)
				{
					if (Global_17290.f_5604 != 0)
					{
						func_313();
						func_311((((Global_17287 + fParam5) - 0.00390625f) - func_312("CM_ITEM_COUNT", Global_17290.f_5604, Global_17290.f_5603)), ((Global_17288 + fVar56) + 0.00416664f), "CM_ITEM_COUNT", Global_17290.f_5604, Global_17290.f_5603);
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
				unk_0x29F530EB20218AC0(140, &iVar1, &iVar2, &iVar3, &iVar4);
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
			unk_0xBD42180765457DB6("CommonMenu", "Gradient_Bgd", (Global_17287 + (fParam5 * 0.5f)), ((fVar96 + ((fVar49 - fVar96) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar96), 0f, 255, 255, 255, 255, 0);
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
				func_314(Global_17287, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var37 = { unk_0x4F70A6A4752B71C7("CommonMenu", "shop_arrows_upANDdown") };
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
					unk_0x29F530EB20218AC0(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xBD42180765457DB6("CommonMenu", "shop_arrows_upANDdown", (Global_17287 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((Var37.f_0 / 1280f) * fVar61), ((Var37.f_1 / 720f) * fVar61), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_4562)) != 0 && Global_17290.f_4636 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17287 + 0.0046875f);
				if (Global_17290.f_4638 != 0)
				{
					func_319(Global_17290.f_4638, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17287 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_310(fVar41);
				unk_0x26962CC488F25A87(&(Global_17290.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17290.f_4632)
				{
					if (Global_17290.f_4566[iVar14] == 2)
					{
						unk_0x3F9D1B882EC0B8AF(Global_17290.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17290.f_4566[iVar14] == 3)
					{
						unk_0x63A04EB63F481124(Global_17290.f_4575[iVar16], Global_17290.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17290.f_4566[iVar14] == 1)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 5)
					{
						unk_0xDA35BDB37E728640(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 6)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 7)
					{
						unk_0xDA35BDB37E728640(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 9)
					{
						unk_0xDA35BDB37E728640(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xC05C59027C3AD7C0(fVar41, (fVar49 + 0.00277776f));
				unk_0x29F530EB20218AC0(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_314(Global_17287, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17290.f_7884)
				{
					iVar1 = Global_17290.f_7880;
					iVar2 = Global_17290.f_7881;
					iVar3 = Global_17290.f_7882;
					iVar4 = Global_17290.f_7883;
				}
				else
				{
					unk_0x29F530EB20218AC0(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xBD42180765457DB6("CommonMenu", "Gradient_Bgd", (Global_17287 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x167B696877E49A32(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x167B696877E49A32(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_310(fVar41);
				unk_0x09BF2ADDAAD5BC05(&(Global_17290.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17290.f_4632)
				{
					if (Global_17290.f_4566[iVar14] == 2)
					{
						unk_0x3F9D1B882EC0B8AF(Global_17290.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17290.f_4566[iVar14] == 3)
					{
						unk_0x63A04EB63F481124(Global_17290.f_4575[iVar16], Global_17290.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17290.f_4566[iVar14] == 1)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 5)
					{
						unk_0xDA35BDB37E728640(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 6)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 7)
					{
						unk_0xDA35BDB37E728640(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 9)
					{
						unk_0xDA35BDB37E728640(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 8)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x80F8A2A91BE5A679(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_17290.f_4638 != 0)
				{
					func_319(Global_17290.f_4638, 1, 1, &fVar35, &fVar36, bParam7);
					func_309(Global_17290.f_4638, 1, &iVar46, &iVar47, &iVar48);
					unk_0xBD42180765457DB6(func_317(Global_17290.f_4638), func_315(Global_17290.f_4638, 1), ((Global_17287 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0x167B696877E49A32(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17290.f_4636 > 0)
				{
					if ((unk_0xDF658EB6CA91DFBC() - Global_17290.f_4637) > Global_17290.f_4636)
					{
						StringCopy(&(Global_17290.f_4562), "", 16);
						Global_17290.f_4636 = -1;
					}
				}
			}
			if (unk_0x3BB8D1C5FAAB25B3(&(Global_2576577.f_21)) != 0 && Global_2576577.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17287 + 0.0046875f);
				if (Global_2576577.f_67 != 0)
				{
					func_319(Global_2576577.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17287 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_310(fVar41);
				unk_0x26962CC488F25A87(&(Global_2576577.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2576577.f_61)
				{
					if (Global_2576577.f_25[iVar14] == 2)
					{
						unk_0x3F9D1B882EC0B8AF(Global_2576577.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2576577.f_25[iVar14] == 3)
					{
						unk_0x63A04EB63F481124(Global_2576577.f_34[iVar16], Global_2576577.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2576577.f_25[iVar14] == 1)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 5)
					{
						unk_0xDA35BDB37E728640(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 6)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 7)
					{
						unk_0xDA35BDB37E728640(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 9)
					{
						unk_0xDA35BDB37E728640(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 8)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xC05C59027C3AD7C0(fVar41, (fVar49 + 0.00277776f));
				unk_0x29F530EB20218AC0(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_314(Global_17287, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17290.f_7884)
				{
					iVar1 = Global_17290.f_7880;
					iVar2 = Global_17290.f_7881;
					iVar3 = Global_17290.f_7882;
					iVar4 = Global_17290.f_7883;
				}
				else
				{
					unk_0x29F530EB20218AC0(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xBD42180765457DB6("CommonMenu", "Gradient_Bgd", (Global_17287 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x167B696877E49A32(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x167B696877E49A32(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_310(fVar41);
				unk_0x09BF2ADDAAD5BC05(&(Global_2576577.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2576577.f_61)
				{
					if (Global_2576577.f_25[iVar14] == 2)
					{
						unk_0x3F9D1B882EC0B8AF(Global_2576577.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2576577.f_25[iVar14] == 3)
					{
						unk_0x63A04EB63F481124(Global_2576577.f_34[iVar16], Global_2576577.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2576577.f_25[iVar14] == 1)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 8)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 5)
					{
						unk_0xDA35BDB37E728640(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 6)
					{
						unk_0xBDE6EEC5F6BDC060(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 7)
					{
						unk_0xDA35BDB37E728640(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2576577.f_25[iVar14] == 9)
					{
						unk_0xDA35BDB37E728640(&(Global_2576577.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x80F8A2A91BE5A679(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_2576577.f_67 != 0)
				{
					func_319(Global_2576577.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					func_309(Global_2576577.f_67, 1, &iVar46, &iVar47, &iVar48);
					unk_0xBD42180765457DB6(func_317(Global_2576577.f_67), func_315(Global_2576577.f_67, 1), ((Global_17287 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0x167B696877E49A32(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_2576577.f_65 > 0)
				{
					if ((unk_0xDF658EB6CA91DFBC() - Global_2576577.f_66) > Global_2576577.f_65)
					{
						StringCopy(&(Global_2576577.f_21), "", 16);
						Global_2576577.f_65 = -1;
					}
				}
			}
			func_306(iVar59, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0xCF4C2CE3511D92EA(76, 84);
			unk_0x9EB94F4B302F02C5(-0.05f, -0.05f, 0f, 0f);
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
						unk_0x29F530EB20218AC0(Global_17290.f_7885, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					else
					{
						unk_0x29F530EB20218AC0(1, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					unk_0xBD42180765457DB6("CommonMenu", "Gradient_Nav", (Global_17287 + (fParam5 * 0.5f)), (((fVar58 + fVar99) + (0.00277776f * IntToFloat(iVar12))) + (fVar55 * 0.5f)), fParam5, fVar55, 0f, iVar100, iVar101, iVar102, iVar103, 0);
					Global_17290.f_5744 = fVar34;
				}
				if (iVar53 && iVar7 == iVar97)
				{
					func_304(bVar31, 1, 0, 0, 0, 0, 0);
					unk_0x09BF2ADDAAD5BC05("DFLT_MNU_OPT");
					unk_0x80F8A2A91BE5A679(fVar33, fVar34, 0);
					bVar40 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17290.f_5096)
					{
						if (unk_0x08BA6DD398CA197C(Global_17290.f_4959[iVar6], iVar8) || Global_17290.f_4926[iVar8] == 5)
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
											if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
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
												func_304(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, iVar104, bVar51, bVar50);
												unk_0x2F736F028E87FCBF(&(Global_17290.f_73[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xDA35BDB37E728640(&(Global_2452282[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xBDE6EEC5F6BDC060(&(Global_2452282[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xDA35BDB37E728640(&(Global_2452282[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xDA35BDB37E728640(&(Global_2452282[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x3F9D1B882EC0B8AF(Global_17290.f_3918[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x63A04EB63F481124(Global_17290.f_4175[(iVar21 + iVar27)], Global_17290.f_4304[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
											{
												fVar42 = unk_0xCEAFBE1E102E8742(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_319(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
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
											if (func_319(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17290.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_319(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_309(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xBD42180765457DB6(func_317(26), func_315(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_319(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_319(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_309(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xBD42180765457DB6(func_317(27), func_315(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
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
											func_304(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, 0, bVar51, bVar50);
											if (Global_17290.f_7890 && Global_17290.f_7891 == iVar6)
											{
												func_303(bVar31);
											}
											unk_0x09BF2ADDAAD5BC05(&(Global_17290.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 1;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xBDE6EEC5F6BDC060(&(Global_17290.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 8;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xDA35BDB37E728640(&(Global_2452282[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xBDE6EEC5F6BDC060(&(Global_2452282[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xDA35BDB37E728640(&(Global_2452282[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 7;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xDA35BDB37E728640(&(Global_2452282[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 9;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x3F9D1B882EC0B8AF(Global_17290.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x63A04EB63F481124(Global_17290.f_4175[(iVar21 + iVar27)], Global_17290.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar30 = 3;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17290.f_4433[(iVar22 + iVar28)] == 2 || Global_17290.f_4433[(iVar22 + iVar28)] == 48)
												{
													if (func_319(Global_17290.f_4433[(iVar22 + iVar28)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_319(Global_17290.f_4433[(iVar22 + iVar28)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_309(Global_17290.f_4433[(iVar22 + iVar28)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17290.f_4953[iVar8] == 2)
															{
																unk_0xBD42180765457DB6(func_317(Global_17290.f_4433[(iVar22 + iVar28)]), func_315(Global_17290.f_4433[(iVar22 + iVar28)], bVar31), (((fVar33 + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0xBD42180765457DB6(func_317(Global_17290.f_4433[(iVar22 + iVar28)]), func_315(Global_17290.f_4433[(iVar22 + iVar28)], bVar31), ((fVar33 + fVar41) - (0.00078125f * 8f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
										if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_73[iVar24 /*6*/])) != 0)
										{
											if (iVar30 == 4 && Global_17290.f_4953[iVar8] == 2)
											{
												unk_0x80F8A2A91BE5A679(((fVar33 + fVar41) + (0.00078125f * 7f)), fVar34, 0);
											}
											else
											{
												unk_0x80F8A2A91BE5A679((fVar33 + fVar41), fVar34, 0);
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
													if (func_319(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_319(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_309(Global_17290.f_4433[(iVar22 + iVar14)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17290.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0xBD42180765457DB6(func_317(Global_17290.f_4433[(iVar22 + iVar14)]), func_315(Global_17290.f_4433[(iVar22 + iVar14)], bVar31), (Global_17287 + (fVar35 * 0.5f)), (((fVar34 + 0.00277776f) + (fVar36 * 0.5f)) - (0.00078125f * 11f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else if (Global_17290.f_4953[iVar8] == 2)
															{
																unk_0xBD42180765457DB6(func_317(Global_17290.f_4433[(iVar22 + iVar14)]), func_315(Global_17290.f_4433[(iVar22 + iVar14)], bVar31), ((((fVar33 + fVar41) + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0xBD42180765457DB6(func_317(Global_17290.f_4433[(iVar22 + iVar14)]), func_315(Global_17290.f_4433[(iVar22 + iVar14)], bVar31), (((fVar33 + fVar41) + fVar42) - (0.00078125f * 12f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
											func_304(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, 0, 0, 0);
											if (Global_17290.f_7890 && Global_17290.f_7891 == iVar6)
											{
												func_303(bVar31);
											}
											unk_0x2F736F028E87FCBF("NUMBER");
											unk_0x3F9D1B882EC0B8AF(Global_17290.f_3918[iVar20]);
											fVar42 = unk_0xCEAFBE1E102E8742(1);
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
											if (func_319(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17290.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_319(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_309(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xBD42180765457DB6(func_317(26), func_315(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_319(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_319(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_309(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xBD42180765457DB6(func_317(27), func_315(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_304(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, 0, 0, 0);
										func_302((fVar33 + fVar41), fVar34, "NUMBER", Global_17290.f_3918[iVar20], 0);
									}
									bVar40 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17290.f_5599)
										{
											func_304(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, 0, 0, 0);
											if (Global_17290.f_7890 && Global_17290.f_7891 == iVar6)
											{
												func_303(bVar31);
											}
											unk_0x2F736F028E87FCBF("NUMBER");
											unk_0x63A04EB63F481124(Global_17290.f_4175[iVar21], Global_17290.f_4304[iVar21]);
											fVar42 = unk_0xCEAFBE1E102E8742(1);
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
											if (func_319(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_17290.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_319(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_309(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xBD42180765457DB6(func_317(26), func_315(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_319(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_319(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_309(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xBD42180765457DB6(func_317(27), func_315(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_304(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], bVar54, 0, 0, 0);
										func_301((fVar33 + fVar41), fVar34, "NUMBER", Global_17290.f_4175[iVar21], Global_17290.f_4304[iVar21]);
									}
									bVar40 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar32)
									{
										if (func_319(Global_17290.f_4433[iVar22], bVar31, 0, &fVar35, &fVar36, bParam7))
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
												if (func_319(26, 1, 0, &fVar35, &fVar36, bParam7))
												{
													if (Global_17290.f_4953[iVar8] == 2)
													{
														fVar41 = (fVar41 - (fVar35 * 2f));
													}
													fVar44 = (fVar35 * 0.5f);
													if (func_319(26, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_309(26, 1, &iVar46, &iVar47, &iVar48);
														unk_0xBD42180765457DB6(func_317(26), func_315(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
												if (func_319(27, 1, 0, &fVar35, &fVar36, bParam7))
												{
													fVar41 = (fVar41 + fVar35);
													fVar44 = (fVar35 * 0.5f);
													if (func_319(27, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_309(27, 1, &iVar46, &iVar47, &iVar48);
														unk_0xBD42180765457DB6(func_317(27), func_315(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
											}
											if (func_319(Global_17290.f_4433[iVar22], bVar31, 1, &fVar35, &fVar36, bParam7))
											{
												func_309(Global_17290.f_4433[iVar22], bVar31, &iVar46, &iVar47, &iVar48);
												unk_0xBD42180765457DB6(func_317(Global_17290.f_4433[iVar22]), func_315(Global_17290.f_4433[iVar22], bVar31), ((fVar33 + fVar41) + (fVar35 * 0.5f)), ((fVar34 - 0.00277776f) + (fVar55 * 0.5f)), (fVar35 * func_300(Global_17290.f_4433[iVar22])), (fVar36 * func_300(Global_17290.f_4433[iVar22])), 0f, iVar46, iVar47, iVar48, 255, 0);
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
									if (func_319(26, 1, 1, &fVar35, &fVar36, bParam7))
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
	Global_17290.f_5745 = unk_0xDF658EB6CA91DFBC();
	unk_0xDA81B130FA38800A(Global_17290.f_5743);
	if (!Global_17290.f_7859)
	{
		func_297();
	}
	Global_17290.f_7859 = 0;
	if (bParam2)
	{
		unk_0x7ABD1B29E6C2963D(10);
	}
	unk_0x7ABD1B29E6C2963D(6);
	unk_0x7ABD1B29E6C2963D(7);
	unk_0x7ABD1B29E6C2963D(9);
	unk_0x7ABD1B29E6C2963D(8);
	if (bParam0)
	{
		func_277(1);
	}
	unk_0x9AA8EEC80385B281();
}

void func_297()
{
	if (!Global_14443.f_1 == 1)
	{
		if (func_129(0))
		{
			func_298(0);
		}
		unk_0x88B0F0DC270164B7(&Global_2314, 2);
	}
}

void func_298(int iParam0)
{
	if (Global_14604)
	{
		func_299(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0x88B0F0DC270164B7(&Global_2314, 16);
	}
	if (unk_0xC6CB0C1523C73C77())
	{
		unk_0x588D9B1F6CF36C3C(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0x88B0F0DC270164B7(&Global_2313, 30);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_2313, 30);
	}
	if (!func_79())
	{
		Global_14443.f_1 = 3;
	}
}

void func_299(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_129(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x4788913DF846A969(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x6D68EB69A9260608(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x6D68EB69A9260608(Global_14380);
		}
		else
		{
			unk_0x6D68EB69A9260608(Global_14371);
		}
	}
}

float func_300(int iParam0)
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

void func_301(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	unk_0x09BF2ADDAAD5BC05(sParam2);
	unk_0x63A04EB63F481124(uParam3, uParam4);
	unk_0x80F8A2A91BE5A679(fParam0, fParam1, 0);
}

void func_302(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x09BF2ADDAAD5BC05(sParam2);
	unk_0x3F9D1B882EC0B8AF(iParam3);
	unk_0x80F8A2A91BE5A679(fParam0, fParam1, iParam4);
}

void func_303(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0x29F530EB20218AC0(Global_17290.f_7887[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0x29F530EB20218AC0(Global_17290.f_7887[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0xDEB22FE9E351379F(iVar0, iVar1, iVar2, 255);
}

void func_304(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_305(Global_17290.f_5878[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0x29F530EB20218AC0(1, &iVar0, &iVar1, &iVar2, &iVar3);
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
			unk_0xDEB22FE9E351379F(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0x29F530EB20218AC0(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xDEB22FE9E351379F(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0x29F530EB20218AC0(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xDEB22FE9E351379F(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0xDEB22FE9E351379F(155, 155, 155, 255);
		}
		else
		{
			unk_0xDEB22FE9E351379F(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0xDEB22FE9E351379F(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0x29F530EB20218AC0(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0xDEB22FE9E351379F(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0xDEB22FE9E351379F(155, 155, 155, 255);
	}
	else
	{
		unk_0xDEB22FE9E351379F(155, 155, 155, 255);
	}
	unk_0xBF14E70921AA4E54(0f, 0.35f);
	unk_0x00D7EEE9B3B84E1C(1);
	if (bParam5)
	{
		unk_0xBF14E70921AA4E54(0f, 0.425f);
		unk_0x03FEF1B70B6CD8DA(4);
	}
	else if (bParam6)
	{
		unk_0xBF14E70921AA4E54(0f, 0.425f);
		unk_0x03FEF1B70B6CD8DA(6);
	}
	else
	{
		unk_0x03FEF1B70B6CD8DA(0);
	}
	unk_0x366FF85701018BC1(0f, 1f);
	unk_0x81111C63B56D4B25(0);
	unk_0x996F92DB3D314DB1(0, 0, 0, 0, 0);
	unk_0x7744A5D6F8CE8FA9(0, 0, 0, 0, 0);
}

void func_305(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_306(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_287(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_321(bParam4, bParam8))
	{
		return;
	}
	if (func_307())
	{
		return;
	}
	if (unk_0x04781D6F82022E77())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_238(unk_0x0C1D3C552325765B(), 0))
		{
			return;
		}
	}
	if (unk_0x955B8C8F89CC3AC0())
	{
		if (unk_0xC5400265B5C1CEB3() == 0 || unk_0x04781D6F82022E77())
		{
			return;
		}
	}
	if (Global_17290.f_4639 != 0)
	{
		if (unk_0xFF9B577A7F80CFDD(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17290.f_4639)
			{
				if (Global_17290.f_4896[iVar1] != 348)
				{
					StringCopy(&(Global_17290.f_4641[iVar1 /*16*/]), unk_0x62B1FF1B5EE703A7(2, Global_17290.f_4896[iVar1], 1), 64);
				}
				else if (Global_17290.f_4909[iVar1] != 32)
				{
					StringCopy(&(Global_17290.f_4641[iVar1 /*16*/]), unk_0x611F82FE2F038F7C(2, Global_17290.f_4909[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_17290.f_4640 = 0;
		}
		if (!Global_17290.f_4640)
		{
			unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xE73340DA551C95E1();
			unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x0FFE3C1DBBA72236((1f - (Global_17290.f_4951 / 100f)));
			unk_0xE73340DA551C95E1();
			if (unk_0x955B8C8F89CC3AC0())
			{
				unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x5CC02BB872FEF340(1);
				unk_0xE73340DA551C95E1();
			}
			iVar1 = 0;
			while (iVar1 < Global_17290.f_4639)
			{
				if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_4834[iVar1 /*4*/])) != unk_0x3BB8D1C5FAAB25B3("PREV"))
				{
					unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x7CBFB9F4AF33C67E(iVar1);
					func_267(&(Global_17290.f_4641[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_4834[iVar2 /*4*/])) == unk_0x3BB8D1C5FAAB25B3("PREV"))
					{
						func_267(&(Global_17290.f_4641[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17290.f_4883[iVar1] == -1)
					{
						func_31(&(Global_17290.f_4834[iVar1 /*4*/]));
					}
					else
					{
						unk_0x709662CF2BD061A4(&(Global_17290.f_4834[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x37F0707A16E921F7(iParam2, 70);
						}
						else
						{
							unk_0x3F9D1B882EC0B8AF(iParam2);
						}
						unk_0x1E77BE8F4283FA05();
					}
					if (unk_0x955B8C8F89CC3AC0())
					{
						if (Global_17290.f_4896[iVar1] != 348 && unk_0x08BA6DD398CA197C(Global_17290.f_4922, iVar1))
						{
							unk_0x5CC02BB872FEF340(1);
							unk_0x7CBFB9F4AF33C67E(Global_17290.f_4896[iVar1]);
						}
						else
						{
							unk_0x5CC02BB872FEF340(0);
							unk_0x7CBFB9F4AF33C67E(348);
						}
					}
					unk_0xE73340DA551C95E1();
				}
				iVar1++;
			}
			if (unk_0x3BB8D1C5FAAB25B3(&(Global_2576577.f_16)) != unk_0x3BB8D1C5FAAB25B3(""))
			{
				unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x7CBFB9F4AF33C67E(Global_17290.f_4639);
				func_267(&Global_2576577);
				if (Global_2576577.f_20 == -1)
				{
					func_31(&(Global_2576577.f_16));
				}
				else
				{
					unk_0x709662CF2BD061A4(&(Global_2576577.f_16));
					if (bParam5)
					{
						unk_0x37F0707A16E921F7(iParam2, 70);
					}
					else
					{
						unk_0x3F9D1B882EC0B8AF(iParam2);
					}
					unk_0x1E77BE8F4283FA05();
				}
				unk_0xE73340DA551C95E1();
			}
			unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x7CBFB9F4AF33C67E(0);
			unk_0x7CBFB9F4AF33C67E(0);
			unk_0x7CBFB9F4AF33C67E(0);
			unk_0x7CBFB9F4AF33C67E(80);
			unk_0xE73340DA551C95E1();
			unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17290.f_4952)
			{
				unk_0x7CBFB9F4AF33C67E(1);
			}
			else
			{
				unk_0x7CBFB9F4AF33C67E(0);
			}
			unk_0xE73340DA551C95E1();
			Global_17290.f_4640 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17290.f_4639)
		{
			if (Global_17290.f_4883[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x7CBFB9F4AF33C67E(iVar1);
					unk_0x709662CF2BD061A4(&(Global_17290.f_4834[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x37F0707A16E921F7(iParam2, 70);
					}
					else
					{
						unk_0x3F9D1B882EC0B8AF(iParam2);
					}
					unk_0x1E77BE8F4283FA05();
					unk_0xE73340DA551C95E1();
				}
			}
			iVar1++;
		}
		if (Global_2576577.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0xB9D4F4DE7E7EC038(Global_17290.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x7CBFB9F4AF33C67E(iVar1);
				unk_0x709662CF2BD061A4(&(Global_2576577.f_16));
				if (bParam5)
				{
					unk_0x37F0707A16E921F7(iParam2, 70);
				}
				else
				{
					unk_0x3F9D1B882EC0B8AF(iParam2);
				}
				unk_0x1E77BE8F4283FA05();
				unk_0xE73340DA551C95E1();
			}
		}
		unk_0xCF4C2CE3511D92EA(76, 66);
		unk_0x9EB94F4B302F02C5(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17290.f_7894)
			{
				unk_0x9EAFA57A34157CEF(15, 0f, -0.0375f);
				Global_17290.f_7894 = 1;
			}
		}
		else if (Global_17290.f_7894)
		{
			unk_0xC667A7C5CE24C569(15);
			Global_17290.f_7894 = 0;
		}
		unk_0x9AA8EEC80385B281();
		if (Global_17290.f_4925)
		{
			unk_0xCF4C2CE3511D92EA(82, 66);
			unk_0x9EB94F4B302F02C5(0f, 0f, 0f, 0f);
			unk_0x04F50370A3D0809C(Global_17290.f_5530[iVar0 /*10*/], Global_17290.f_4923, Global_17290.f_4924, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x9AA8EEC80385B281();
		}
		else
		{
			unk_0x0F83039847376F53(Global_17290.f_5530[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

int func_307()
{
	struct<3> Var0;
	
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	if (func_308())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x4788913DF846A969(&Var0);
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

int func_308()
{
	if (unk_0xA96867DD0A63C62C(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_309(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	
	unk_0x29F530EB20218AC0(1, iParam2, iParam3, iParam4, &uVar0);
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

void func_310(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x29F530EB20218AC0(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x03FEF1B70B6CD8DA(0);
	unk_0xBF14E70921AA4E54(0f, 0.35f);
	unk_0x2FBB13D1590A874B(2);
	unk_0xDEB22FE9E351379F(iVar0, iVar1, iVar2, iVar3);
	unk_0x366FF85701018BC1(fParam0, ((Global_17287 + Global_17289) - 0.0046875f));
	unk_0x81111C63B56D4B25(0);
	unk_0x996F92DB3D314DB1(0, 0, 0, 0, 0);
	unk_0x7744A5D6F8CE8FA9(0, 0, 0, 0, 0);
}

void func_311(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x09BF2ADDAAD5BC05(sParam2);
	unk_0x3F9D1B882EC0B8AF(uParam3);
	unk_0x3F9D1B882EC0B8AF(uParam4);
	unk_0x80F8A2A91BE5A679(fParam0, fParam1, 0);
}

float func_312(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xD28EDDD3F7264249(sParam0))
	{
		if (unk_0x3BB8D1C5FAAB25B3(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_313();
	unk_0x2F736F028E87FCBF(sParam0);
	unk_0x3F9D1B882EC0B8AF(uParam1);
	unk_0x3F9D1B882EC0B8AF(uParam2);
	return unk_0xCEAFBE1E102E8742(1);
}

void func_313()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x29F530EB20218AC0(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17290.f_7869)
	{
		iVar0 = Global_17290.f_7865;
		iVar1 = Global_17290.f_7866;
		iVar2 = Global_17290.f_7867;
		iVar3 = Global_17290.f_7868;
	}
	unk_0x03FEF1B70B6CD8DA(0);
	unk_0xBF14E70921AA4E54(0f, 0.35f);
	unk_0xDEB22FE9E351379F(iVar0, iVar1, iVar2, iVar3);
	unk_0x366FF85701018BC1((Global_17287 + 0.0046875f), ((Global_17287 + Global_17289) - 0.0046875f));
	unk_0x81111C63B56D4B25(0);
	unk_0x996F92DB3D314DB1(0, 0, 0, 0, 0);
	unk_0x7744A5D6F8CE8FA9(0, 0, 0, 0, 0);
}

void func_314(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x676A3D7F15838EEA((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_315(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!unk_0x509383441597090D(&(Global_17290.f_6703[iParam0 /*16*/])))
	{
		if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_6703[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_243(unk_0x0C1D3C552325765B()) };
			if (unk_0xFD20D4DB68C4280F(&Var19, &uVar3))
			{
				return func_316(&uVar3);
			}
		}
		else
		{
			return func_316(&(Global_17290.f_6703[iParam0 /*16*/]));
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

var func_316(var uParam0)
{
	return uParam0;
}

char* func_317(int iParam0)
{
	var uVar0;
	struct<13> Var16;
	
	if (!unk_0x509383441597090D(&(Global_17290.f_5886[iParam0 /*16*/])))
	{
		if (unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_5886[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_243(unk_0x0C1D3C552325765B()) };
			unk_0xFD20D4DB68C4280F(&Var16, &uVar0);
			return func_316(&uVar0);
		}
		else
		{
			return func_316(&(Global_17290.f_5886[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_318()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x28EBEB55C44FD509(&iVar0, &iVar1);
	fVar2 = (unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_319(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	
	StringCopy(&cVar0, func_317(iParam0), 64);
	StringCopy(&cVar16, func_315(iParam0, bParam1), 64);
	if (unk_0x3BB8D1C5FAAB25B3(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			unk_0x28EBEB55C44FD509(&iVar32, &iVar33);
			fVar35 = unk_0x900671749E93DC05(0);
			if (func_318())
			{
				iVar32 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar33) * fVar35));
			}
			fVar36 = (unk_0xBBDA792448DB5A89(iVar32) / unk_0xBBDA792448DB5A89(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_318())
			{
				fVar34 = 1f;
			}
			if (unk_0xA96867DD0A63C62C(joaat("director_mode")) > 0)
			{
				unk_0xB1F1D8A3052317AC(&iVar32, &iVar33);
			}
			iVar32 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar32) / fVar34));
			iVar33 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar33) / fVar34));
		}
		else
		{
			unk_0xB1F1D8A3052317AC(&iVar32, &iVar33);
		}
		Var37 = { unk_0x4F70A6A4752B71C7(&cVar0, &cVar16) };
		Var37.f_0 = (Var37.f_0 * (func_320(iParam0) / fVar34));
		Var37.f_1 = (Var37.f_1 * (func_320(iParam0) / fVar34));
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
		if (iParam0 == 29 && unk_0x3BB8D1C5FAAB25B3(&(Global_17290.f_6703[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var37.f_0 = 106f;
			Var37.f_1 = 106f;
		}
		*fParam3 = ((Var37.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var37.f_1 / IntToFloat(iVar33)) / (Var37.f_0 / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x626C2E82CA013B68() && iParam0 != 30)
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

float func_320(int iParam0)
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

int func_321(bool bParam0, bool bParam1)
{
	if (Global_2432628.f_1384.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0xB20CA7A3EE29687A() || (func_82(8, -1) && func_322() != 64)) || (unk_0xAD490CD811854704() != 0 && !bParam1)) || (unk_0xC740F8182E7E9681() && !bParam0)) || unk_0x0BC39FA2C6867467()) || Global_69877) || Global_17290.f_7893) || unk_0xCD755B20D2481736()) || Global_91458.f_1361)
	{
		return 0;
	}
	return 1;
}

int func_322()
{
	return Global_1315164;
}

void func_323()
{
	if (iLocal_101 == 0)
	{
		if (!bLocal_113)
		{
			func_324("PAH_QUICK_D1", 0, 0);
		}
	}
	else if (!bLocal_114)
	{
		func_324("PAH_QUICK_D2", 0, 0);
	}
	else if (!uLocal_115[(iLocal_101 - 1)])
	{
		func_324("PAH_QUICK_D3", 0, 0);
	}
}

void func_324(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_17290.f_4562), sParam0, 16);
	Global_17290.f_4632 = 0;
	Global_17290.f_4633 = 0;
	Global_17290.f_4634 = 0;
	Global_17290.f_4635 = 0;
	Global_17290.f_4636 = iParam1;
	Global_17290.f_4637 = unk_0xDF658EB6CA91DFBC();
	Global_17290.f_4638 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17290.f_4566[iVar0] = 0;
		iVar0++;
	}
}

void func_325()
{
	bool bVar0;
	
	bVar0 = true;
	if ((((unk_0x84C71F36E7D97756() || unk_0xCEA30682339075E8()) || unk_0xCD755B20D2481736()) || unk_0x04781D6F82022E77()) || Global_91458.f_1361)
	{
		bVar0 = false;
	}
	if ((bVar0 && unk_0x2A57AED61E15C7C7(2, 201)) || (bVar0 && Local_123.f_6))
	{
		if (!func_363())
		{
			if (iLocal_101 == 0)
			{
				if (func_295())
				{
					iLocal_106 = -1;
					iLocal_105 = 1;
					iLocal_104 = 1;
				}
			}
			else if (func_290())
			{
				if (func_289(iLocal_107[(iLocal_101 - 1)]))
				{
					iLocal_105 = 1;
					iLocal_104 = 1;
					iLocal_106 = iLocal_107[(iLocal_101 - 1)];
				}
			}
		}
		else
		{
			iLocal_121 = 1;
		}
	}
	else if (!bVar0)
	{
	}
	else if (unk_0x2A57AED61E15C7C7(2, 202) || Local_123.f_7)
	{
		iLocal_105 = 1;
	}
	else if ((unk_0x2A57AED61E15C7C7(2, 188) && func_326(&uLocal_122, &(Local_123.f_4), 1)) || (Local_123.f_8 && func_326(&uLocal_122, &(Local_123.f_4), 1)))
	{
		if (Local_123.f_4 > 0)
		{
			iLocal_101 = (iLocal_101 - 1);
			if (iLocal_101 < 0)
			{
				iLocal_101 = (iLocal_100 - 1);
			}
			func_327(iLocal_101, 1, 1);
		}
	}
	else if ((unk_0x2A57AED61E15C7C7(2, 187) && func_326(&uLocal_122, &(Local_123.f_4), 1)) || (Local_123.f_9 && func_326(&uLocal_122, &(Local_123.f_4), 1)))
	{
		if (Local_123.f_4 < 0)
		{
			iLocal_101++;
			if (iLocal_101 > (iLocal_100 - 1))
			{
				iLocal_101 = 0;
			}
			func_327(iLocal_101, 1, 1);
		}
	}
	unk_0x7ABD1B29E6C2963D(7);
	unk_0x7ABD1B29E6C2963D(8);
	unk_0x7ABD1B29E6C2963D(9);
}

int func_326(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 150;
	if (bParam2)
	{
		if (((unk_0xFEB2816B7220E998(2, 188) || unk_0x6822B498C2270E88(2, 219) < -0.3f) || unk_0xFEB2816B7220E998(2, 241)) || unk_0x2A57AED61E15C7C7(2, 188))
		{
			if (unk_0xFEB2816B7220E998(2, 241))
			{
				iVar1 = 100;
			}
			if (unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(*uParam0, unk_0x4B50AAB32FBE0483())) > iVar1)
			{
				*uParam0 = unk_0x4B50AAB32FBE0483();
				iVar0 = 1;
				*uParam1 = 1;
			}
		}
		if (((unk_0xFEB2816B7220E998(2, 187) || unk_0x6822B498C2270E88(2, 219) > 0.3f) || unk_0xFEB2816B7220E998(2, 242)) || unk_0x2A57AED61E15C7C7(2, 187))
		{
			if (unk_0xFEB2816B7220E998(2, 242))
			{
				iVar1 = 100;
			}
			if (unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(*uParam0, unk_0x4B50AAB32FBE0483())) > iVar1)
			{
				*uParam0 = unk_0x4B50AAB32FBE0483();
				iVar0 = 1;
				*uParam1 = -1;
			}
		}
	}
	else
	{
		if ((unk_0xFEB2816B7220E998(2, 190) || unk_0x6822B498C2270E88(2, 218) > 0.3f) || unk_0x382DB2E6C29D0F23(2, 201))
		{
			if (unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(*uParam0, unk_0x4B50AAB32FBE0483())) > iVar1)
			{
				*uParam0 = unk_0x4B50AAB32FBE0483();
				iVar0 = 1;
				*uParam1 = 1;
			}
		}
		if (unk_0xFEB2816B7220E998(2, 189) || unk_0x6822B498C2270E88(2, 218) < -0.3f)
		{
			if (unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(*uParam0, unk_0x4B50AAB32FBE0483())) > iVar1)
			{
				*uParam0 = unk_0x4B50AAB32FBE0483();
				iVar0 = 1;
				*uParam1 = -1;
			}
		}
	}
	return iVar0;
}

void func_327(int iParam0, bool bParam1, int iParam2)
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
		StringCopy(&(Global_2576577.f_21), "", 16);
	}
}

void func_328()
{
	struct<4> Var0;
	char* sVar4;
	int iVar5;
	bool bVar6;
	
	func_341(0);
	func_340("PAH_QUICK_1");
	func_339(1, 2, 1, 1, 1);
	func_338(1, 1, 0, 0, 0);
	iLocal_100 = 0;
	Var0 = { func_337(func_182(5, -1)) };
	sVar4 = func_336(&Var0);
	bLocal_113 = func_295();
	bLocal_114 = func_290();
	func_332(iLocal_100, sVar4, 0, bLocal_113, 0, 0);
	iLocal_100++;
	iVar5 = 0;
	while (iVar5 < 5)
	{
		if (func_331(iVar5) > 0)
		{
			if (func_173(func_331(iVar5)))
			{
				iLocal_107[iVar5] = func_331(iVar5);
				uLocal_115[iVar5] = func_289(iLocal_107[iVar5]);
				if (bLocal_114)
				{
					bVar6 = uLocal_115[iVar5];
				}
				else
				{
					bVar6 = false;
				}
				func_332(iLocal_100, func_330(iLocal_107[iVar5]), 0, bVar6, 0, 0);
				iLocal_100++;
			}
		}
		iVar5++;
	}
	func_329(201, "ITEM_SELECT", -1, 0);
	func_329(202, "ITEM_BACK", -1, 0);
	func_327(iLocal_101, 1, 1);
}

void func_329(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0x62B1FF1B5EE703A7(2, iParam0, 1);
	if (Global_17290.f_4639 >= 12)
	{
		StringCopy(&Global_2576577, sVar0, 64);
		StringCopy(&(Global_2576577.f_16), sParam1, 16);
		Global_2576577.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0x88B0F0DC270164B7(&(Global_17290.f_4922), Global_17290.f_4639);
	}
	StringCopy(&(Global_17290.f_4641[Global_17290.f_4639 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17290.f_4834[Global_17290.f_4639 /*4*/]), sParam1, 16);
	Global_17290.f_4883[Global_17290.f_4639] = iParam2;
	Global_17290.f_4896[Global_17290.f_4639] = iParam0;
	Global_17290.f_4909[Global_17290.f_4639] = 32;
	Global_17290.f_4639++;
}

char* func_330(int iParam0)
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

int func_331(int iParam0)
{
	if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_72[iParam0 /*2*/] != 0)
	{
		return Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_72[iParam0 /*2*/];
	}
	return 0;
}

void func_332(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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
	if (!unk_0x509383441597090D(sParam1) && !unk_0x7179DC5DD4B8EEBC(sParam1))
	{
	}
	Global_17290.f_1610[Global_17290.f_5090] = bParam3;
	Global_17290.f_1867[Global_17290.f_5090] = iParam4;
	Global_17290.f_5090++;
	if (!bParam3)
	{
		func_335(Global_17290.f_5088, 1);
	}
	else
	{
		func_335(Global_17290.f_5088, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_334(&(Global_17290.f_73[Global_17290.f_5090 /*6*/]));
		if (Global_17290.f_4945[Global_17290.f_5089])
		{
			func_319(26, 1, 0, &fVar2, &uVar3, 0);
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
			fVar4 = func_333(&(Global_17290.f_73[Global_17290.f_5090 /*6*/]));
			if (fVar4 > Global_17290.f_5612[iParam0])
			{
				Global_17290.f_5612[iParam0] = fVar4;
			}
		}
	}
	unk_0x88B0F0DC270164B7(&(Global_17290.f_4959[iParam0]), Global_17290.f_5089);
	Global_17290.f_5089++;
	Global_17290.f_5611 = 1;
	Global_17290.f_5609 = (Global_17290.f_5090 - 1);
	Global_17290.f_5610 = 0;
	Global_17290.f_5608 = iParam2;
}

float func_333(char* sParam0)
{
	if (!unk_0x7179DC5DD4B8EEBC(sParam0))
	{
	}
	return unk_0x167B696877E49A32(0.35f, 0);
}

float func_334(char* sParam0)
{
	if (!unk_0xD28EDDD3F7264249(uParam0))
	{
		if (unk_0x3BB8D1C5FAAB25B3(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_304(0, 1, 0, 0, 0, 0, 0);
	unk_0x2F736F028E87FCBF(sParam0);
	return unk_0xCEAFBE1E102E8742(1);
}

void func_335(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 32f));
	if (bParam1)
	{
		unk_0x88B0F0DC270164B7(&(Global_17290.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&(Global_17290.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
}

var func_336(var uParam0)
{
	return uParam0;
}

struct<4> func_337(int iParam0)
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
	}
	return Var0;
}

void func_338(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_339(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17290.f_4953[0] = iParam0;
	Global_17290.f_4953[1] = iParam1;
	Global_17290.f_4953[2] = iParam2;
	Global_17290.f_4953[3] = iParam3;
	Global_17290.f_4953[4] = iParam4;
}

void func_340(char* sParam0)
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

void func_341(bool bParam0)
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
		StringCopy(&(Global_2452282[iVar0 /*16*/]), "", 64);
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
		Global_17290.f_4896[iVar0] = 348;
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
	StringCopy(&(Global_2576577.f_16), "", 16);
	Global_2576577.f_20 = -1;
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
	StringCopy(&(Global_2576577.f_21), "", 16);
	Global_2576577.f_61 = 0;
	Global_2576577.f_62 = 0;
	Global_2576577.f_63 = 0;
	Global_2576577.f_64 = 0;
	Global_2576577.f_65 = 0;
	Global_2576577.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_2576577.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_2576577.f_67 = 0;
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
	fVar2 = unk_0x900671749E93DC05(0);
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

bool func_342(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_287(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17290.f_5505[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0x509383441597090D(&(Global_17290.f_5505[iVar0 /*4*/])))
	{
		unk_0x7BCE93123FE81E45(&(Global_17290.f_5505[iVar0 /*4*/]), 9);
		Global_17290.f_5498[iVar0] = 1;
		if (!unk_0x15CD8FB3CF6BE10D(&(Global_17290.f_5505[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xC41E276F33F448DD("CommonMenu", 0);
	Global_17290.f_5484[iVar0] = 1;
	if (!unk_0xC04F047A523E9370("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0xC41E276F33F448DD("MPShopSale", 0);
		Global_17290.f_5491[iVar0] = 1;
		if (!unk_0xC04F047A523E9370("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_17290.f_5530[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_343(&(Global_17290.f_5530[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_343(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x1E3F61C2C1E29520(*uParam0))
			{
				*uParam0 = unk_0x474309DF4921072A(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x1E3F61C2C1E29520(*uParam0))
					{
						uParam0->f_8 = unk_0xDF658EB6CA91DFBC();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0xDF658EB6CA91DFBC();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x1E3F61C2C1E29520(*uParam0))
			{
				uParam0->f_8 = unk_0xDF658EB6CA91DFBC();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x1E3F61C2C1E29520(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_344(var uParam0)
{
	func_353(uParam0, &(uParam0->f_1), &(uParam0->f_2), &(uParam0->f_3), 0);
	uParam0->f_6 = (unk_0x2A57AED61E15C7C7(2, 201) || unk_0x5E429C409D2CBD68(2, 201));
	uParam0->f_7 = (unk_0x2A57AED61E15C7C7(2, 202) || unk_0x5E429C409D2CBD68(2, 202));
	uParam0->f_8 = (uParam0->f_1 < -64 || unk_0x2A57AED61E15C7C7(2, 188));
	uParam0->f_9 = (uParam0->f_1 > 64 || unk_0x2A57AED61E15C7C7(2, 187));
	if (((((func_342(0, -1, 0) && unk_0xAD490CD811854704() == 0) && !unk_0xCEA30682339075E8()) && !unk_0xCD755B20D2481736()) && !unk_0x04781D6F82022E77()) && !Global_91458.f_1361)
	{
		if (unk_0x955B8C8F89CC3AC0() && !unk_0x04781D6F82022E77())
		{
			if (unk_0xF3C67EB69BFA8F67(2))
			{
				unk_0xABC36CFE4F3421A0(0, 1, 1);
				unk_0xABC36CFE4F3421A0(0, 2, 1);
				unk_0xABC36CFE4F3421A0(2, 200, 1);
				unk_0xFF61FA1A24898079(0, 237, 1);
				unk_0xFF61FA1A24898079(0, 238, 1);
				unk_0xFF61FA1A24898079(0, 241, 1);
				unk_0xFF61FA1A24898079(0, 242, 1);
				if ((Global_2576653 == -1 || Global_2576653 == -4) || Global_2576653 == -6)
				{
					unk_0xFF61FA1A24898079(1, 1, 1);
					unk_0xFF61FA1A24898079(1, 2, 1);
				}
				else
				{
					unk_0xABC36CFE4F3421A0(1, 1, 1);
					unk_0xABC36CFE4F3421A0(1, 2, 1);
				}
				func_350(0, 0, 0, 1);
				func_349(0, -1, 1);
			}
			if (func_348())
			{
				if (Global_2576653 == iLocal_101)
				{
					uParam0->f_6 = 1;
				}
				else
				{
					iLocal_101 = Global_2576653;
					func_327(iLocal_101, 1, 1);
				}
			}
			if (func_347())
			{
				uParam0->f_7 = 1;
			}
			if (func_346(0, 0, 0))
			{
				uParam0->f_8 = 1;
			}
			if (func_345(0, 0, 0))
			{
				uParam0->f_9 = 1;
			}
		}
	}
}

int func_345(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x4255B5ECB9D34344(2))
	{
		if (Global_2576653 == -3)
		{
			if ((unk_0x7F6103BD34B839B0(2, 237) && iParam0) || unk_0x2A57AED61E15C7C7(2, 237))
			{
				return 1;
			}
		}
		if (iParam2 == 0)
		{
			if (unk_0x7F6103BD34B839B0(2, 242) || (unk_0xFEB2816B7220E998(2, 242) && iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_346(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x4255B5ECB9D34344(2))
	{
		if (Global_2576653 == -2)
		{
			if ((unk_0x7F6103BD34B839B0(2, 237) && iParam0) || unk_0x2A57AED61E15C7C7(2, 237))
			{
				return 1;
			}
		}
		if (iParam2 == 0)
		{
			if (unk_0x7F6103BD34B839B0(2, 241) || (unk_0xFEB2816B7220E998(2, 241) && iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_347()
{
	if (unk_0x4255B5ECB9D34344(2))
	{
		if (unk_0x2A57AED61E15C7C7(2, 238))
		{
			return 1;
		}
	}
	return 0;
}

int func_348()
{
	if (unk_0x4255B5ECB9D34344(2))
	{
		if (Global_2576653 > -1)
		{
			if (unk_0x2A57AED61E15C7C7(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_349(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0x4255B5ECB9D34344(2))
	{
		return 0;
	}
	if (unk_0x84C71F36E7D97756() || unk_0xCD755B20D2481736())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0x3AAD9D87062EB88B();
	}
	if (Global_2576653 == -6)
	{
		unk_0x70F5FD87FA8FE8FD(4);
		if (iParam0 && unk_0x7F6103BD34B839B0(2, 237))
		{
			return 1;
		}
		else
		{
			Global_2576653 = -1;
			return 0;
		}
	}
	if (((Global_2576653 > -1 || Global_2576653 == -3) || Global_2576653 == -2) || unk_0x6946F66C693055AC())
	{
		unk_0x70F5FD87FA8FE8FD(1);
		return 0;
	}
	if (Global_2576653 == -1 && iParam0)
	{
		if (unk_0x7F6103BD34B839B0(2, 237))
		{
			unk_0x70F5FD87FA8FE8FD(4);
			Global_2576653 = -6;
			return 1;
		}
		else
		{
			unk_0x70F5FD87FA8FE8FD(3);
			return 0;
		}
	}
	unk_0x70F5FD87FA8FE8FD(1);
	return 0;
}

void func_350(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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
	if (!unk_0x4255B5ECB9D34344(2))
	{
		Global_2576653 = -1;
		return;
	}
	unk_0xE27C28EF3F6A97B8(1);
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
	unk_0xCF4C2CE3511D92EA(76, 84);
	unk_0x9EB94F4B302F02C5(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0x01B50A0EA91F8229(fVar0, fVar1, &fVar0, &fVar1);
	unk_0x01B50A0EA91F8229(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x9AA8EEC80385B281();
	func_352();
	if (Global_2576653 == -6)
	{
		return;
	}
	Global_2576653 = -1;
	fVar7 = Global_2576647;
	fVar8 = Global_2576648;
	if (Global_17290.f_5603 > Global_17290.f_5602)
	{
		if (((Global_2576647 >= fVar0 && Global_2576647 <= fVar2) && Global_2576648 >= fVar3) && Global_2576648 < (fVar3 + fVar6))
		{
			Global_2576653 = -2;
			if (bParam3)
			{
				func_351(0);
			}
			return;
		}
		if (((Global_2576647 >= fVar0 && Global_2576647 <= fVar2) && Global_2576648 >= (fVar3 + fVar6)) && Global_2576648 < (fVar3 + 0.034722f))
		{
			Global_2576653 = -3;
			if (bParam3)
			{
				func_351(0);
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
			Global_2576653 = 0;
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
				unk_0xCF4C2CE3511D92EA(76, 84);
				unk_0x9EB94F4B302F02C5(-0.05f, -0.05f, 0f, 0f);
				func_314(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_17289, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0x9AA8EEC80385B281();
			}
		}
		Global_2576653 = Global_17290.f_7520[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_2576653 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_2576653 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_2576653 = -4;
		return;
	}
	Global_2576653 = -1;
}

void func_351(bool bParam0)
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
	unk_0xCF4C2CE3511D92EA(76, 84);
	unk_0x9EB94F4B302F02C5(-0.05f, -0.05f, 0f, 0f);
	if (Global_2576653 == -2)
	{
		func_314(fVar0, fVar1, Global_17289, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_2576653 == -3)
	{
		func_314(fVar0, (fVar1 + fVar2), Global_17289, fVar2, 255, 255, 255, iVar3);
	}
	unk_0x9AA8EEC80385B281();
}

void func_352()
{
	Global_2576649 = Global_2576647;
	Global_2576650 = Global_2576648;
	Global_2576647 = unk_0x7648D90D868BBF55(2, 239);
	Global_2576648 = unk_0x7648D90D868BBF55(2, 240);
	Global_2576651 = (Global_2576647 - Global_2576649);
	Global_2576652 = (Global_2576648 - Global_2576650);
}

void func_353(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x6822B498C2270E88(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x6822B498C2270E88(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x6822B498C2270E88(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x6822B498C2270E88(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x7648D90D868BBF55(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0x7648D90D868BBF55(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x7648D90D868BBF55(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0x7648D90D868BBF55(2, 221) * 127f));
		}
	}
}

void func_354()
{
	int iVar0;
	
	iVar0 = iLocal_1174;
	if (unk_0x912AD5A10E7633F0(iVar0, 0))
	{
		return;
	}
	if (unk_0x775F8FFC8E29F525(iVar0))
	{
		unk_0x8065E7D1C70BBA1F(iVar0, 0);
		unk_0x1B640269845E999D(iVar0, 1);
		unk_0xB032923150355520(iVar0, 4);
		if (unk_0x573723AAC88FEB61(iVar0) != 0 && unk_0x573723AAC88FEB61(iVar0) != 1)
		{
			unk_0x09C86C0C5CA26B1E(&iLocal_263, 15);
		}
	}
}

int func_355()
{
	if (((((Local_133.f_27 && func_364()) && (!func_357(1) || func_293())) && (func_271() || func_295())) && func_356()) && (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0) && unk_0x21178DF77817BF39(unk_0xA0081090911D13E5(), 1785177548) != 1))
	{
		return 1;
	}
	return 0;
}

int func_356()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iLocal_1177)
	{
		return iLocal_1178;
	}
	if (unk_0xD3FACCDA4D66AEAD(iLocal_1174) && !unk_0x912AD5A10E7633F0(iLocal_1174, 0))
	{
		iVar1 = unk_0x8EF0E5E933BE561D(iLocal_1174) + 1;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!unk_0x6315EBE95A97CADF(iLocal_1174, (iVar0 - 1), 0))
			{
				iVar2 = unk_0x8FD32443A080784B(iLocal_1174, (iVar0 - 1), 0);
				if (!unk_0xEB361B4BD195A4D3(iVar2))
				{
					if (unk_0x54F0AEFB11EA090A(iVar2))
					{
						if (!func_213(unk_0xA43666ACD375E339(iVar2)))
						{
							iLocal_1178 = 0;
							iLocal_1177 = 1;
							return 0;
						}
					}
					else if (unk_0x18C670321BC98FDA(iVar2))
					{
						if (!unk_0x687CB62D355FD7FD(iVar2, 1))
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
			if (!iVar4 == unk_0x0C1D3C552325765B())
			{
				if (func_130(iVar4, 1, 1))
				{
					iVar5 = unk_0x21F191D9AFF98B5E(iVar4);
					if (unk_0xD3FACCDA4D66AEAD(iVar5) && !unk_0x912AD5A10E7633F0(iVar5, 0))
					{
						if (unk_0x02056DA113641E74(iVar5) == iLocal_1174)
						{
							if (!func_213(iVar4))
							{
								iLocal_1178 = 0;
								iLocal_1177 = 1;
								return 0;
							}
						}
					}
				}
			}
			iVar3++;
		}
	}
	iLocal_1178 = 1;
	iLocal_1177 = 1;
	return 1;
}

bool func_357(bool bParam0)
{
	return func_358(unk_0x0C1D3C552325765B(), bParam0);
}

bool func_358(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_294(iParam0))
		{
			return 0;
		}
	}
	return Global_1614576[iParam0 /*324*/].f_10 != func_4();
}

void func_359()
{
	var uVar0;
	
	if (!unk_0x08BA6DD398CA197C(iLocal_263, 13))
	{
		if (!unk_0x598A9E990F05F82C())
		{
			uVar0 = func_7(1183, -1, 0);
			if (!unk_0x08BA6DD398CA197C(uVar0, 22) || !unk_0x08BA6DD398CA197C(iVar0, 23))
			{
				func_360("HTX_HELP2", -1);
				if (!unk_0x08BA6DD398CA197C(iVar0, 22))
				{
					unk_0x88B0F0DC270164B7(&iVar0, 22);
				}
				else
				{
					unk_0x88B0F0DC270164B7(&iVar0, 23);
				}
				func_206(1183, iVar0, -1, 1, 0);
				unk_0x88B0F0DC270164B7(&iLocal_263, 13);
			}
			else
			{
				unk_0x88B0F0DC270164B7(&iLocal_263, 13);
			}
		}
	}
}

void func_360(char* sParam0, int iParam1)
{
	unk_0x55B5433015A91E85(sParam0);
	unk_0x85AE92859C5AADE3(0, 0, 1, iParam1);
}

void func_361(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<6> Var0;
	
	Var0.f_0 = 498;
	Var0.f_1 = unk_0x0C1D3C552325765B();
	Var0.f_2 = iParam1;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam0;
	Var0.f_3 = iParam2;
	if (!iParam0 == 0)
	{
		unk_0x8E36889D76C8D4FA(1, &Var0, 6, iParam0);
	}
}

int func_362(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar1 = iLocal_1174;
	if (unk_0x912AD5A10E7633F0(iVar1, 0))
	{
		return 0;
	}
	iVar2 = unk_0xAF3D6F27CC1E594E(unk_0x705BC1BB91F530B5(iVar1));
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		iVar5 = (iVar3 - 1);
		if (!unk_0x6315EBE95A97CADF(iVar1, iVar5, 0))
		{
			iVar4 = unk_0xA43666ACD375E339(unk_0x8FD32443A080784B(iVar1, iVar5, 0));
			if (iVar4 != func_4() && func_130(iVar4, 1, 1))
			{
				if (!Local_133.f_28 == iVar4 || iParam0)
				{
					unk_0x88B0F0DC270164B7(&uVar0, iVar4);
				}
			}
		}
		iVar3++;
	}
	return uVar0;
}

int func_363()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var7;
	
	iVar3 = iLocal_1174;
	if (unk_0x912AD5A10E7633F0(iVar3, 0))
	{
		return 0;
	}
	Var4 = { unk_0xC59DF10B4FC39DF8(iVar3, 1) };
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = unk_0x81C85E54237F8A2E(iVar2);
		if (func_130(iVar0, 1, 1))
		{
			iVar1 = unk_0x21F191D9AFF98B5E(iVar0);
			if (!unk_0x912AD5A10E7633F0(iVar1, 0))
			{
				Var7 = { unk_0xC59DF10B4FC39DF8(iVar1, 1) };
				if (unk_0x2A488C176D52CCA5(Var7, Var4) < 30f)
				{
					if (unk_0x1FD87E888EB4FC00(iVar1, iVar3, 1))
					{
						if (!unk_0x72550A6F2BC0E12B(iVar1, iVar3))
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

bool func_364()
{
	return func_182(5, -1) > 0;
}

var func_365(char* sParam0)
{
	unk_0xA277242E6FB38513(sParam0);
	return unk_0x52387FFD63E8D8FC(0);
}

int func_366(int iParam0, int iParam1)
{
	if (unk_0x84C71F36E7D97756())
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (func_282())
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
	if (unk_0xCEA30682339075E8())
	{
		return 0;
	}
	if (func_34())
	{
		return 0;
	}
	if (Global_52997)
	{
		return 0;
	}
	if (Global_68125)
	{
		return 0;
	}
	if (unk_0xCD755B20D2481736())
	{
		return 0;
	}
	if (Global_1315157)
	{
		return 0;
	}
	if (Global_1573702)
	{
		return 0;
	}
	return 1;
}

void func_367()
{
	bool bVar0;
	
	if (!unk_0x08BA6DD398CA197C(Local_166[unk_0x848AF823A8EA3C62() /*3*/].f_1, 7))
	{
		bVar0 = false;
		if (unk_0x4255B5ECB9D34344(0))
		{
			if (unk_0xFEB2816B7220E998(0, 22))
			{
				bVar0 = true;
			}
		}
		else if (unk_0xFEB2816B7220E998(0, 99) || unk_0xFEB2816B7220E998(0, 100))
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (!func_280())
			{
				bVar0 = false;
			}
		}
		if (bVar0)
		{
			if (((((((!func_137(iLocal_1174) && unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), iLocal_1174, 0)) && unk_0x8FD32443A080784B(iLocal_1174, 0, 0) != unk_0xA0081090911D13E5()) && unk_0x39053CCA2C4B5DA1(iLocal_1174) < 10f) && unk_0x21178DF77817BF39(unk_0xA0081090911D13E5(), -275944640) != 1) && unk_0x21178DF77817BF39(unk_0xA0081090911D13E5(), -275944640) != 0) && func_366(1, 1)) && unk_0xC5F055346C582286(iLocal_1174) < 40f)
			{
				if (func_109(&uLocal_1152, 275, 0))
				{
					unk_0xD3032BAC1ECE011F(unk_0xA0081090911D13E5());
					unk_0x06AACA3C41132B52(unk_0xA0081090911D13E5(), 1092616192);
					unk_0x88B0F0DC270164B7(&(Local_166[unk_0x848AF823A8EA3C62() /*3*/].f_1), 7);
				}
			}
			else if (func_201(&uLocal_1152))
			{
				func_128(&uLocal_1152);
			}
		}
		else if (func_201(&uLocal_1152))
		{
			func_128(&uLocal_1152);
		}
	}
}

void func_368()
{
	if (!unk_0x08BA6DD398CA197C(iLocal_263, 12))
	{
		Global_1573495 = 1;
		unk_0x88B0F0DC270164B7(&iLocal_263, 12);
	}
}

void func_369()
{
	if (unk_0x16833EFAA58E63DB(uLocal_264))
	{
		unk_0x0B57C567D698C373(&uLocal_264);
	}
}

void func_370()
{
	if (unk_0x08BA6DD398CA197C(iLocal_263, 12))
	{
		Global_1573495 = 0;
		unk_0x09C86C0C5CA26B1E(&iLocal_263, 12);
	}
}

void func_371()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (((((func_130(unk_0x0C1D3C552325765B(), 1, 1) && unk_0x7298BA0C4D4A4C9E(unk_0xA0081090911D13E5(), iLocal_1174, 15f, 15f, 5f, 0, 1, 0)) && !unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1)) && unk_0x39053CCA2C4B5DA1(iLocal_1174) < 5f) && !func_372(iLocal_1174, 0)) && func_366(1, 0))
	{
		unk_0x88B0F0DC270164B7(&iLocal_263, 2);
		if (unk_0x08BA6DD398CA197C(Local_166[unk_0x848AF823A8EA3C62() /*3*/].f_1, 0))
		{
			func_353(&iVar0, &iVar1, &uVar2, &uVar3, 0);
			if (((iVar1 > 28 || iVar1 < -28) || iVar0 > 28) || iVar0 < -28)
			{
				if (iLocal_269 == 0)
				{
					unk_0xC1B1E9A034A63A62(0);
					iLocal_269 = 1;
				}
			}
			else
			{
				iLocal_269 = 0;
			}
			if (iLocal_269 == 1)
			{
				if (unk_0x83666F9FB8FEBD4B() > 275)
				{
					if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
					{
						unk_0xD3032BAC1ECE011F(unk_0xA0081090911D13E5());
						unk_0x09C86C0C5CA26B1E(&(Local_166[unk_0x848AF823A8EA3C62() /*3*/].f_1), 0);
						iLocal_269 = 0;
					}
				}
			}
		}
		else
		{
			unk_0x88B0F0DC270164B7(&iLocal_263, 2);
		}
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&iLocal_263, 2);
		if (unk_0x08BA6DD398CA197C(Local_166[unk_0x848AF823A8EA3C62() /*3*/].f_1, 0))
		{
			if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
			{
				unk_0xD3032BAC1ECE011F(unk_0xA0081090911D13E5());
				iLocal_269 = 0;
			}
			unk_0x09C86C0C5CA26B1E(&(Local_166[unk_0x848AF823A8EA3C62() /*3*/].f_1), 0);
		}
	}
}

int func_372(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		iVar1 = unk_0x8EF0E5E933BE561D(iParam0) + 1;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (unk_0x6315EBE95A97CADF(iParam0, (iVar0 - 1), 0))
			{
				return 0;
			}
			else if (!bParam1)
			{
				iVar2 = unk_0x8FD32443A080784B(iParam0, (iVar0 - 1), 0);
				if (unk_0xEB361B4BD195A4D3(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

void func_373()
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Local_133.f_24 != 4)
	{
		if (unk_0x08BA6DD398CA197C(iLocal_263, 8))
		{
			unk_0x09C86C0C5CA26B1E(&iLocal_263, 8);
		}
	}
	if (!func_136(Local_133.f_4) && !func_137(iLocal_1174))
	{
		if (unk_0xB480350E4250D92A(Local_133.f_4) || (!unk_0x2042D9774DF3D324(Local_133.f_4) && unk_0xD9E8CA806A80203D()))
		{
			func_388();
			func_387();
			switch (Local_133.f_24)
			{
				case 0:
					break;
				
				case 1:
					if (unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_133.f_4), -1273030092) != 1 && unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_133.f_4), -1273030092) != 0)
					{
						if (unk_0x08BA6DD398CA197C(iLocal_263, 4))
						{
							unk_0xDEB658873B50218A(unk_0x564EAE6038A81C07(Local_133.f_4), iLocal_1174, 0, 0, Local_133.f_6, 19, 30f, 7.5f, Local_133.f_9, unk_0xF2DB717A73826179(10f), unk_0xF2DB717A73826179(10f), -1082130432, 8225);
							unk_0x09C86C0C5CA26B1E(&iLocal_263, 17);
						}
					}
					else if (!unk_0x08BA6DD398CA197C(iLocal_263, 4))
					{
						func_157();
					}
					else if (unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_133.f_4), -1273030092) == 1)
					{
						if (Local_133.f_9 > -1f)
						{
							if (unk_0x6E07DBF03F3AC258(unk_0x564EAE6038A81C07(Local_133.f_4), Local_133.f_6, (7.5f + 5f), (7.5f + 5f), 50f, 0, 1, 0))
							{
								fVar0 = unk_0x5E6FDC4F3A8C8EDE(unk_0x564EAE6038A81C07(Local_133.f_4));
								fVar1 = (fVar0 - Local_133.f_9);
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
					if (iLocal_960 != 2)
					{
						func_157();
						iLocal_960 = 2;
					}
					if (unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_133.f_4), -1273030092) != 1 && unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_133.f_4), -1273030092) != 0)
					{
						unk_0xDEB658873B50218A(unk_0x564EAE6038A81C07(Local_133.f_4), iLocal_1174, 0, 0, Local_133.f_10, 4, 30f, 7.5f, -1f, 40, 40, -1082130432, 0);
					}
					break;
				
				case 3:
					break;
				
				case 4:
					if (iLocal_960 != 4)
					{
						if (iLocal_960 != 3)
						{
							func_157();
						}
						if (iLocal_960 == 3)
						{
							Local_133.f_20 = { unk_0xC59DF10B4FC39DF8(iLocal_1174, 1) };
						}
						else
						{
							Local_133.f_20 = { 0f, 0f, 0f };
						}
						iLocal_960 = 4;
					}
					else if (unk_0x652D2EEEF1D3E62C(Local_133.f_20) > 0f)
					{
						if (unk_0x2A488C176D52CCA5(unk_0xC59DF10B4FC39DF8(iLocal_1174, 1), Local_133.f_20) > 10f)
						{
							if (unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_133.f_4), -1273030092) != 1 && unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_133.f_4), -1273030092) != 0)
							{
								unk_0xDEB658873B50218A(unk_0x564EAE6038A81C07(Local_133.f_4), iLocal_1174, 0, 0, Local_133.f_20, 4, 30f, 7.5f, -1f, 40, 40, -1082130432, 0);
							}
						}
					}
					if (!unk_0x08BA6DD398CA197C(iLocal_263, 8) && unk_0x08BA6DD398CA197C(Local_133.f_1, 14))
					{
						if (func_197())
						{
							if (func_144())
							{
								func_108(&uLocal_965, 3, unk_0x564EAE6038A81C07(Local_133.f_4), "FM_Pilot", 0, 1);
								if (!bLocal_165)
								{
									func_196(&uLocal_965, "CT_AUD", "MPCT_HPidle", 12, 0, 0, 1);
								}
								else
								{
									func_386(&uLocal_965, "CT_AUD", "MPCT_HPidle", "MPCT_HPidle_06", 12, 0, 0);
								}
							}
							else
							{
								func_11(1);
								func_108(&uLocal_965, 2, unk_0x564EAE6038A81C07(Local_133.f_4), "EXEC_PILOT", 0, 1);
								if (!bLocal_165)
								{
									func_91(&uLocal_965, "EXHELAU", "EXHEL_IDLE", 12, 0, 0, 1);
								}
								else
								{
									func_385(&uLocal_965, "EXHELAU", "EXHEL_IDLE", "EXHEL_IDLE_02", 12, 0, 0);
								}
							}
							unk_0x88B0F0DC270164B7(&iLocal_263, 8);
						}
					}
					break;
				
				case 5:
					if (!unk_0x775F8FFC8E29F525(iLocal_1174))
					{
						unk_0x33E20212DBE504C2(iLocal_1174);
					}
					if (unk_0x08BA6DD398CA197C(iLocal_263, 15))
					{
						func_354();
					}
					if (!unk_0x08BA6DD398CA197C(iLocal_263, 14))
					{
						if (iLocal_960 != 5)
						{
							func_157();
							iLocal_960 = 5;
						}
						if (unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_133.f_4), -1273030092) != 1 && unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_133.f_4), -1273030092) != 0)
						{
							unk_0xDEB658873B50218A(unk_0x564EAE6038A81C07(Local_133.f_4), iLocal_1174, 0, 0, Local_133.f_29, 4, 30f, 7.5f, -1f, 40, 40, -1082130432, 0);
						}
						if (func_384() && unk_0x08BA6DD398CA197C(Local_133.f_1, 15))
						{
							if (unk_0x775F8FFC8E29F525(iLocal_1174))
							{
								unk_0xBB21B5C3111E5F85(iLocal_1174, 1);
								func_157();
								if (iLocal_106 == -1)
								{
									if (unk_0x08BA6DD398CA197C(iLocal_263, 19))
									{
										iVar2 = unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), uLocal_1159);
										if (iVar2 > 10000)
										{
											unk_0x9455DC3C261571B3();
											uLocal_1159 = unk_0x4B50AAB32FBE0483();
										}
									}
									else
									{
										uLocal_1159 = unk_0x4B50AAB32FBE0483();
										unk_0x88B0F0DC270164B7(&iLocal_263, 19);
									}
									if (func_376(Local_133.f_29, 0f, 1, 0, 0, 0, 1, 0, 1, 0))
									{
										unk_0x88B0F0DC270164B7(&iLocal_263, 14);
										unk_0x09C86C0C5CA26B1E(&iLocal_263, 19);
										if (iLocal_106 == -1 && !func_214(Local_133.f_5))
										{
											unk_0xBB21B5C3111E5F85(iLocal_1174, 0);
											unk_0x591413670A1EF437(iLocal_1174, 1, 0);
											unk_0xB032923150355520(iLocal_1174, 1);
											Local_133.f_23 = 5;
											func_157();
										}
									}
								}
								else if (iLocal_106 > -1)
								{
									unk_0xBB21B5C3111E5F85(iLocal_1174, 0);
									unk_0x591413670A1EF437(iLocal_1174, 1, 0);
									unk_0xB032923150355520(iLocal_1174, 1);
									Local_133.f_23 = 5;
									func_157();
								}
							}
						}
					}
					break;
				
				case 7:
					func_131();
					if (!unk_0x08BA6DD398CA197C(iLocal_263, 9))
					{
						if (func_197())
						{
							if (func_144())
							{
								func_108(&uLocal_965, 3, unk_0x564EAE6038A81C07(Local_133.f_4), "FM_Pilot", 0, 1);
								func_196(&uLocal_965, "CT_AUD", "MPCT_HPwrn2", 12, 0, 0, 1);
							}
							else
							{
								func_108(&uLocal_965, 2, unk_0x564EAE6038A81C07(Local_133.f_4), "EXEC_PILOT", 0, 1);
								func_91(&uLocal_965, "EXHELAU", "EXHEL_FORCED", 12, 0, 0, 1);
							}
							unk_0xB032923150355520(iLocal_1174, 2);
							unk_0x88B0F0DC270164B7(&iLocal_263, 9);
						}
					}
					break;
				
				case 8:
					if (!unk_0x97C29E7ED977A936(iLocal_1174))
					{
						func_131();
						if (unk_0x41617C7E7EAFFE34(iLocal_1174) > 0)
						{
							if (!func_136(Local_133.f_4))
							{
								if (!unk_0x912AD5A10E7633F0(iLocal_1174, 0))
								{
									if (!func_193())
									{
										unk_0x3998B29E786DFD96(unk_0x564EAE6038A81C07(Local_133.f_4), uLocal_266);
										if (unk_0x0E091C9F3918F674(Local_133.f_3))
										{
											func_375(&(Local_133.f_3));
										}
										if (func_207())
										{
											func_374();
										}
										if (unk_0x0E091C9F3918F674(Local_133.f_4))
										{
											func_375(&(Local_133.f_4));
										}
									}
								}
							}
						}
						else if (!func_136(Local_133.f_4))
						{
							if (!unk_0x912AD5A10E7633F0(iLocal_1174, 0))
							{
								unk_0x3998B29E786DFD96(unk_0x564EAE6038A81C07(Local_133.f_4), uLocal_267);
								unk_0xFF5CE2ECB4FBD4A8(unk_0x564EAE6038A81C07(Local_133.f_4), 1);
								if (unk_0x0E091C9F3918F674(Local_133.f_3))
								{
									func_375(&(Local_133.f_3));
								}
								if (func_207())
								{
									func_374();
								}
								if (unk_0x0E091C9F3918F674(Local_133.f_4))
								{
									func_375(&(Local_133.f_4));
								}
							}
						}
					}
					return;
				}
		}
		if (func_130(unk_0x0C1D3C552325765B(), 1, 1))
		{
			if (unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), iLocal_1174, 0))
			{
				switch (Local_133.f_24)
				{
					case 7:
						if (!unk_0x08BA6DD398CA197C(iLocal_263, 10))
						{
							iVar3 = 0;
							while (iVar3 < unk_0x8EF0E5E933BE561D(iLocal_1174) + 1)
							{
								iVar4 = unk_0x8FD32443A080784B(iLocal_1174, (iVar3 - 1), 0);
								if (iVar4 != 0)
								{
									if (!unk_0xEB361B4BD195A4D3(iVar4))
									{
										if (unk_0x54F0AEFB11EA090A(iVar4))
										{
											func_132(func_133(unk_0xA43666ACD375E339(iVar4)), 0, 0f, 0, 0, 0);
										}
									}
								}
								iVar3++;
							}
							unk_0x88B0F0DC270164B7(&iLocal_263, 10);
						}
						break;
					}
				}
			}
	}
}

void func_374()
{
	if (unk_0xD3FACCDA4D66AEAD(Global_2482149.f_280))
	{
		Global_2482149.f_5277 = 1;
	}
}

void func_375(var uParam0)
{
	var uVar0;
	
	if (unk_0x3CF373660FCFAFCE(*uParam0))
	{
		uVar0 = unk_0x63CE7A3848B84093(*uParam0);
		unk_0x811BE251B0B13760(&uVar0);
	}
}

int func_376(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11)
{
	struct<3> Var0;
	float fVar3;
	var uVar4;
	
	Global_17151.f_6 = 1;
	if (unk_0xC740F8182E7E9681() && !bParam9)
	{
		if (Global_2432628.f_730)
		{
			func_381(0, bParam9);
		}
		return 0;
	}
	if ((unk_0x9726BE1252F8F0B6() && !bParam9) && !unk_0x6273A79EFF10C4A9())
	{
		return 0;
	}
	if (!func_380())
	{
		if (func_379(unk_0x0C1D3C552325765B(), 1))
		{
			if (((bParam9 && func_130(unk_0x0C1D3C552325765B(), 1, 0)) && unk_0xC740F8182E7E9681()) && Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_222 == 1)
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
	if (!Global_2432628.f_730 && !bParam11)
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0) };
		if ((unk_0x7466327978A6A24C((Var0.f_0 - Param0.f_0)) < 0.2f && unk_0x7466327978A6A24C((Var0.f_1 - Param0.f_1)) < 0.2f) && unk_0x7466327978A6A24C((Var0.f_2 - Param0.f_2)) < 1.2f)
		{
			fVar3 = (fParam3 - unk_0x5E6FDC4F3A8C8EDE(unk_0xA0081090911D13E5()));
			if (fVar3 > 180f)
			{
				fVar3 = (fVar3 + -360f);
			}
			if (fVar3 < -180f)
			{
				fVar3 = (fVar3 + 360f);
			}
			if (unk_0x7466327978A6A24C(fVar3) < 1f)
			{
				Global_2432628.f_730 = 0;
				Global_2432628.f_731 = 0;
				if (unk_0x6273A79EFF10C4A9())
				{
					unk_0x9455DC3C261571B3();
				}
				return 1;
			}
		}
	}
	if (((!Param0.f_0 == Global_2432628.f_732 || !Param0.f_1 == Global_2432628.f_732.f_1) || !Param0.f_2 == Global_2432628.f_732.f_2) || !fParam3 == Global_2432628.f_735)
	{
		if (Global_2432628.f_730 == 1)
		{
			if (unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), Global_2432628.f_736) < func_378(0))
			{
				return 0;
			}
			unk_0x9455DC3C261571B3();
			Global_2432628.f_731 = 1;
		}
		else
		{
			Global_2432628.f_731 = 0;
		}
		Global_2432628.f_732 = { Param0 };
		Global_2432628.f_735 = fParam3;
		Global_2432628.f_730 = 0;
	}
	if (!Global_2432628.f_730 && !unk_0x6273A79EFF10C4A9())
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
		if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
		{
			if (!unk_0x08BA6DD398CA197C(Global_91458.f_1308[44], 16))
			{
				func_377();
			}
			if (!unk_0x4BB9C94E83A66B44(unk_0xA0081090911D13E5(), &(Global_2404993.f_483)))
			{
				Global_2404993.f_483 = 0;
			}
		}
		if (bParam9)
		{
			if (bParam4)
			{
				if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
				{
					uVar4 = unk_0x02056DA113641E74(unk_0xA0081090911D13E5());
					unk_0x27327EB62D93CDBA(uVar4, Param0, 0, 1, 1, 1);
					unk_0x10BB9EA2ADBCF0F3(iVar4, fParam3);
				}
				else
				{
					unk_0x27327EB62D93CDBA(unk_0xA0081090911D13E5(), Param0, 0, 0, 0, 1);
					unk_0x10BB9EA2ADBCF0F3(unk_0xA0081090911D13E5(), fParam3);
				}
			}
			else
			{
				unk_0x27327EB62D93CDBA(unk_0xA0081090911D13E5(), Param0, 0, 0, 0, 1);
				unk_0x10BB9EA2ADBCF0F3(unk_0xA0081090911D13E5(), fParam3);
			}
			func_381(bParam6, bParam9);
			return 1;
		}
		else
		{
			unk_0xE6A458183F9D98BB();
			unk_0xBDD9262D515C03B5(unk_0x0C1D3C552325765B(), Param0, fParam3, bParam4, iParam10, 0);
		}
		Global_2432628.f_736 = unk_0x4B50AAB32FBE0483();
		Global_2432628.f_730 = 1;
	}
	if (Global_2432628.f_730)
	{
		Global_17151.f_6 = 1;
		Global_2432628.f_736 = unk_0x4B50AAB32FBE0483();
		if (bParam9)
		{
			if (unk_0x2A488C176D52CCA5(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0), Global_2432628.f_732) < 2f)
			{
				if (unk_0x6273A79EFF10C4A9())
				{
					unk_0x9455DC3C261571B3();
				}
				func_381(bParam6, bParam9);
				return 1;
			}
		}
		if (!unk_0x6273A79EFF10C4A9())
		{
			func_381(bParam6, bParam9);
			return 1;
		}
	}
	return 0;
}

void func_377()
{
	int iVar0;
	
	iVar0 = unk_0x6327B643497275A6();
	if (unk_0x57655292980A4BAD())
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2404993.f_2211)
	{
		if (!unk_0x8E326405D64D7F51())
		{
			Global_2404993.f_2211 = iVar0;
		}
	}
}

int func_378(bool bParam0)
{
	if (unk_0x2C22E7D1C80A53EF())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_379(int iParam0, bool bParam1)
{
	if (Global_2421327[iParam0 /*353*/].f_222 == 99)
	{
		return 0;
	}
	if (bParam1)
	{
		if (Global_2421327[iParam0 /*353*/].f_222 == 13)
		{
			return 0;
		}
	}
	return 1;
}

bool func_380()
{
	return Global_1315206;
}

void func_381(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		unk_0x2A7D387AD73F1D15(0f, 1065353216);
		unk_0x8BDD755F07063522(0f);
	}
	if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
		unk_0xD3617D54AE7094CF(unk_0xA0081090911D13E5());
	}
	if (!bParam1)
	{
		unk_0xE6A458183F9D98BB();
	}
	if (unk_0x6273A79EFF10C4A9())
	{
		unk_0x9455DC3C261571B3();
	}
	func_383();
	if (!unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 14))
	{
		func_382();
	}
}

void func_382()
{
	Global_2489431.f_80 = 1;
}

void func_383()
{
	struct<2> Var0;
	
	Global_2432628.f_730 = 0;
	Global_2432628.f_731 = 0;
	Global_2432628.f_732 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2404993.f_2212 = { Var0 };
}

int func_384()
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	if (!(Global_2451808.f_10 || unk_0x08BA6DD398CA197C(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_296, 4)))
	{
		return 0;
	}
	uVar1 = Global_2451808.f_21;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x08BA6DD398CA197C(uVar1, iVar0))
		{
			iVar2 = unk_0x81C85E54237F8A2E(iVar0);
			if (func_130(iVar2, 1, 1))
			{
				if (!unk_0x08BA6DD398CA197C(Global_1614576[iVar0 /*324*/].f_296, 4))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_385(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
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

int func_386(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
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

void func_387()
{
	if (iLocal_270 == 0)
	{
		iLocal_270 = 1;
	}
}

void func_388()
{
	unk_0x0756AF366187C194("MobileRadioInGame", 0);
	if (!func_258())
	{
		if (func_130(unk_0x0C1D3C552325765B(), 1, 1))
		{
			if (unk_0x72550A6F2BC0E12B(unk_0xA0081090911D13E5(), iLocal_1174) && !func_283(unk_0xA0081090911D13E5(), iLocal_1174, -1))
			{
				unk_0x0756AF366187C194("MobileRadioInGame", 1);
			}
		}
	}
}

void func_389()
{
	if (func_207())
	{
		return;
	}
	if (unk_0xD9E8CA806A80203D())
	{
		if (!unk_0x16833EFAA58E63DB(uLocal_264))
		{
			if (!func_137(iLocal_1174))
			{
				uLocal_264 = unk_0x91B4D18C6AFDC14C(iLocal_1174);
				if (unk_0x16833EFAA58E63DB(uLocal_264))
				{
					unk_0x32479C670EB9962F(uLocal_264, 422);
					unk_0x2FE9515E72A14285(uLocal_264, 0);
					unk_0x6F18BFEFE84565FF(uLocal_264, "HTX_BLIP");
					iLocal_265 = 1;
					func_252(&uLocal_264, iLocal_265);
				}
			}
		}
	}
}

void func_390()
{
	int iVar0;
	
	iVar0 = unk_0xF2DB717A73826179(10f);
	if (!func_137(iLocal_1174))
	{
		unk_0x95C55738CAE00A20(&uLocal_268);
		unk_0xDEB658873B50218A(0, iLocal_1174, 0, 0, Local_133.f_10, 9, 30f, 7.5f, -1f, iVar0, iVar0, -1082130432, 0);
		unk_0x70B222EEA46C37FA(uLocal_268);
		unk_0x95C55738CAE00A20(&uLocal_267);
		unk_0xDEB658873B50218A(0, iLocal_1174, 0, 0, Local_133.f_17, 9, 30f, 0f, -1f, iVar0 * 2, iVar0 * 2, -1082130432, 0);
		unk_0x70B222EEA46C37FA(uLocal_267);
		unk_0x95C55738CAE00A20(&uLocal_266);
		unk_0x8474D2383AC8AF53(0, 0, 64);
		if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
		{
			unk_0x69E46DC398F0B2BD(0, unk_0xA0081090911D13E5(), 300f, -1, 0, 0);
		}
		else
		{
			unk_0x971ED137B3AF56D8(0, 1193033728, 0);
		}
		unk_0x70B222EEA46C37FA(uLocal_266);
	}
}

int func_391()
{
	return Local_133.f_0;
}

int func_392(int iParam0)
{
	return Local_166[iParam0 /*3*/];
}

int func_393()
{
	bool bVar0;
	var uVar1;
	
	func_400(&bVar0, &uVar1);
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
	if (func_399())
	{
		return 1;
	}
	if (Global_2453962)
	{
		return 1;
	}
	if (func_398())
	{
		return 1;
	}
	if (func_397(157))
	{
		if (!func_396())
		{
			return 1;
		}
	}
	if (func_397(155))
	{
		return 1;
	}
	if (!unk_0x98C339BD475B043D())
	{
		return 1;
	}
	if (func_394() != 0)
	{
		if (unk_0xA96867DD0A63C62C(func_394()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_394()
{
	switch (func_395())
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

int func_395()
{
	return Global_25185;
}

bool func_396()
{
	return Global_2442442.f_576;
}

int func_397(int iParam0)
{
	if (unk_0xA8A2C6421DCDE504(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_398()
{
	return Global_2451777;
}

bool func_399()
{
	return Global_2442442.f_571;
}

void func_400(var uParam0, var uParam1)
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
					func_401(iVar0);
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

void func_401(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x4FD5256AFF6E50B7(1, iParam0, &Var0, 3))
	{
		if (func_130(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x21F191D9AFF98B5E(Var0.f_1);
			if (unk_0xD3FACCDA4D66AEAD(uVar3))
			{
				if (unk_0x39FEE545B315414E(iVar3, 0))
				{
					uVar4 = unk_0xF8DB47D339B8B953(iVar3, 0);
					if (unk_0x0840C5452268553B(uVar4, Var0.f_2) && unk_0x391BEA92ECF1B445())
					{
						if (func_402(uVar4, &bVar5))
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

int func_402(int iParam0, var uParam1)
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

void func_403()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_404(bool bParam0)
{
	var uVar0;
	var uVar1;
	
	if (func_150())
	{
		func_149();
	}
	if (bParam0)
	{
		func_369();
	}
	func_370();
	func_195(0);
	if (func_207())
	{
		if (func_409("HTX_HELPN", "GB_HELI_BLIP"))
		{
			unk_0x94724F7C938EBE34(1);
			uVar0 = func_7(1183, -1, 0);
			unk_0x09C86C0C5CA26B1E(&uVar0, 16);
			func_206(1183, uVar0, -1, 1, 0);
		}
		func_11(0);
	}
	else if (func_409("HTX_HELPN", "HTX_HELPB"))
	{
		unk_0x94724F7C938EBE34(1);
		uVar1 = func_7(1183, -1, 0);
		unk_0x09C86C0C5CA26B1E(&uVar1, 16);
		func_206(1183, uVar1, -1, 1, 0);
	}
	if (bParam0)
	{
		if (unk_0x0E091C9F3918F674(Local_133.f_4) && unk_0xB480350E4250D92A(Local_133.f_4))
		{
			if (func_207())
			{
				if (!unk_0x912AD5A10E7633F0(unk_0x564EAE6038A81C07(Local_133.f_4), 0))
				{
					if (!unk_0x1FD87E888EB4FC00(unk_0x564EAE6038A81C07(Local_133.f_4), iLocal_1174, 0))
					{
						func_204(&(Local_133.f_4));
					}
				}
			}
			if (!func_137(iLocal_1174))
			{
				if (!func_136(Local_133.f_4))
				{
					func_390();
					unk_0x3998B29E786DFD96(unk_0x564EAE6038A81C07(Local_133.f_4), uLocal_267);
				}
			}
		}
	}
	if (unk_0xA86CA03D9749EEB3())
	{
		if (bParam0)
		{
			if (unk_0x0E091C9F3918F674(Local_133.f_3))
			{
				if (unk_0xB480350E4250D92A(Local_133.f_3))
				{
					if (!func_137(iLocal_1174))
					{
						unk_0xB032923150355520(iLocal_1174, 1);
					}
					func_375(&(Local_133.f_3));
				}
			}
			if (func_207())
			{
			}
			if (unk_0x0E091C9F3918F674(Local_133.f_4))
			{
				if (unk_0xB480350E4250D92A(Local_133.f_4))
				{
					if (!func_136(Local_133.f_4))
					{
						unk_0x705E4255B39314A7(unk_0x564EAE6038A81C07(Local_133.f_4), 251, 0);
					}
					func_375(&(Local_133.f_4));
				}
			}
		}
		if (!func_258())
		{
			func_407(func_408(1, 1), 13, func_4());
		}
		else
		{
			func_407(func_408(1, 1), 44, func_4());
		}
	}
	func_406();
	if (iLocal_270 == 1)
	{
		iLocal_270 = 0;
	}
	unk_0xA12A0D38735CCBF2(&uLocal_271);
	unk_0x841EA440AD1F0294(1);
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_783), 0);
	Global_2482149.f_255 = 0;
	func_405();
}

void func_405()
{
	unk_0x78C587487CD40B92();
}

void func_406()
{
	unk_0x7DFD14B8B873D6B5(&uLocal_266);
	unk_0x7DFD14B8B873D6B5(&uLocal_267);
	unk_0x7DFD14B8B873D6B5(&uLocal_268);
}

void func_407(int iParam0, int iParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = 338;
	Var0.f_1 = unk_0x0C1D3C552325765B();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		unk_0x8E36889D76C8D4FA(1, &Var0, 6, iParam0);
	}
}

int func_408(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x81C85E54237F8A2E(iVar1);
		if (func_130(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x0C1D3C552325765B() || iParam0)
			{
				if (bParam1)
				{
					unk_0x88B0F0DC270164B7(&uVar0, iVar1);
				}
				else if (!func_238(iVar2, 0))
				{
					unk_0x88B0F0DC270164B7(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_409(char* sParam0, char* sParam1)
{
	unk_0xA277242E6FB38513(sParam0);
	unk_0xBDE6EEC5F6BDC060(sParam1);
	return unk_0x52387FFD63E8D8FC(0);
}

int func_410(struct<20> Param0)
{
	func_413(32, Param0);
	unk_0xF2797029E839595C(1);
	unk_0x23DFD22869618226(1);
	func_412(0, -1, 0);
	unk_0x4331DF6C42BE352E(&Local_133, 32);
	unk_0xCCA45C9E00D2BC01(&Local_166, 97);
	if (!func_411())
	{
		return 0;
	}
	unk_0x401559486BCA4D9B(0);
	if (unk_0xD9E8CA806A80203D())
	{
		Local_133.f_5 = unk_0x0C1D3C552325765B();
		Local_133.f_6 = { unk_0x2E01486DB8218E16(unk_0xA0081090911D13E5(), 0f, 15f, 0f) };
		Local_133.f_10 = { -346.4007f, 1151.507f, 324.7254f };
		Local_133.f_27 = func_258();
		Local_133.f_28 = func_4();
		unk_0x88B0F0DC270164B7(&(Global_2482149.f_783), 0);
	}
	Global_2451808.f_26 = 0;
	Global_2451808.f_25 = 0;
	unk_0x09C86C0C5CA26B1E(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_296), 4);
	iLocal_959 = unk_0x8188FDE7090D3AF6();
	Local_166[unk_0x848AF823A8EA3C62() /*3*/] = 0;
	return 1;
}

int func_411()
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
		if (func_399())
		{
			return 0;
		}
		if (func_397(155))
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

int func_412(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xF30F4D3B526CD5C2();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_405();
			}
			else
			{
				return 0;
			}
		}
		if (!func_380())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xA86CA03D9749EEB3())
				{
					if (!bParam2)
					{
						func_405();
					}
					else
					{
						return 0;
					}
				}
				if (func_399())
				{
					if (!bParam2)
					{
						func_405();
					}
					else
					{
						return 0;
					}
				}
				if (func_397(155))
				{
					if (!bParam2)
					{
						func_405();
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
					func_405();
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
				func_405();
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
			func_405();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_413(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0xA86CA03D9749EEB3())
	{
		func_405();
	}
	unk_0x786FDD765D4157F4(iParam0, 0, Param1.f_16);
}

void func_414()
{
	iLocal_1162 = 0;
	func_415(-243.828f, -1461.281f, 30.99f, 279.3385f);
	func_415(139.284f, 311.0571f, 111.1386f, 45.1942f);
	func_415(634.8535f, 141.8226f, 94.2749f, 26.968f);
	func_415(383.2168f, 16.5927f, 90.2992f, 40.5093f);
	func_415(67.2551f, 51.4397f, 72.5151f, 38.4162f);
	func_415(294.1833f, 575.2105f, 152.623f, 304.9259f);
	func_415(933.0354f, 492.7919f, 120.4651f, 3.1259f);
	func_415(-336.8088f, 454.2572f, 110.9638f, 58.2889f);
	func_415(-135.9225f, 615.1293f, 204.3637f, 240.0636f);
	func_415(139.3762f, -250.2123f, 50.426f, 276.1187f);
	func_415(-139.5668f, -443.9992f, 33.1041f, 112.657f);
	func_415(-491.7431f, -144.9858f, 37.8309f, 98.1814f);
	func_415(-645.7263f, 406.0965f, 100.2678f, 272.8684f);
	func_415(-957.0592f, 295.3116f, 68.9958f, 58.8505f);
	func_415(-820.9876f, 876.1653f, 202.1549f, 196.4736f);
	func_415(-1443.188f, 455.4925f, 110.7514f, 296.894f);
	func_415(-1481.404f, 863.1016f, 181.577f, 38.349f);
	func_415(-1646.419f, -195.0848f, 54.2692f, 160.7423f);
	func_415(-1099.93f, -192.9011f, 37.3214f, 299.6116f);
	func_415(-604.6443f, -599.9016f, 33.6806f, 270.5396f);
	func_415(-1471.802f, -853.1879f, 13.2503f, 302.8094f);
	func_415(-2011.161f, -526.2204f, 10.7096f, 28.1469f);
	func_415(-2212.737f, 537.3901f, 164.4195f, 348.0596f);
	func_415(-3025.405f, 338.3629f, 13.6245f, 14.9527f);
	func_415(-1054.36f, -1398.452f, 5.3278f, 253.1757f);
	func_415(-567.387f, -1258.005f, 12.8623f, 8.386f);
	func_415(-964.4938f, -727.4775f, 18.794f, 344.527f);
	func_415(-2429.193f, 1045.141f, 193.7864f, 263.1876f);
	func_415(-3136.545f, 1191.168f, 19.0974f, 220.8899f);
	func_415(-2692.456f, -62.2375f, 15.234f, 39.5592f);
	func_415(-355.8293f, -990.3766f, 28.4949f, 125.2948f);
	func_415(243.7049f, -881.4253f, 29.4921f, 297.8129f);
	func_415(453.4193f, -380.5279f, 45.6676f, 357.5639f);
	func_415(936.8099f, -553.545f, 58.3693f, 263.5811f);
	func_415(770.1622f, -233.1951f, 65.1145f, 243.3845f);
	func_415(1134.113f, 353.7328f, 90.4476f, 351.5361f);
	func_415(1864.741f, 259.8708f, 162.1022f, 225.713f);
	func_415(1558.889f, 879.5532f, 76.4596f, 359.376f);
	func_415(337.4946f, 985.814f, 209.7682f, 69.9473f);
	func_415(870.984f, 968.8524f, 238.3209f, 35.1108f);
	func_415(2599.014f, 415.1773f, 107.7289f, 186.8054f);
	func_415(2547.611f, -579.5625f, 64.2137f, 161.9321f);
	func_415(1886.246f, -741.1049f, 82.6813f, 287.8844f);
	func_415(1455.893f, -1498.703f, 63.6557f, 173.4564f);
	func_415(1161.785f, -1076.126f, 40.4823f, 247.4221f);
	func_415(1394.804f, -734.3683f, 66.2226f, 115.9829f);
	func_415(1167.93f, -150.3837f, 55.5932f, 167.958f);
	func_415(2455.5f, 1014.216f, 83.1307f, 14.3078f);
	func_415(2530.339f, 1633.237f, 28.3235f, 234.752f);
	func_415(1951.904f, 1645.648f, 71.2406f, 260.0168f);
	func_415(2806.778f, -815.1143f, 5.7198f, 81.9638f);
	func_415(1806.947f, -1290.593f, 95.0351f, 331.8087f);
	func_415(1678.681f, -1952.281f, 111.666f, 80.8951f);
	func_415(1292.103f, -3186.505f, 4.9064f, 359.7118f);
	func_415(740.4905f, -3028.477f, 7.562f, 312.5958f);
	func_415(559.4196f, -2593.408f, 5.0368f, 291.8598f);
	func_415(877.3129f, -2437.455f, 27.3458f, 83.4984f);
	func_415(1212.66f, -2098.225f, 43.5962f, 332.4854f);
	func_415(797.2423f, -1599.807f, 30.2847f, 164.9429f);
	func_415(827.6533f, -1980.338f, 28.299f, 10.749f);
	func_415(373.2801f, -2133.071f, 15.2922f, 150.4032f);
	func_415(617.6802f, -1064.3f, 9.3075f, 179.8157f);
	func_415(296.5454f, -1341.473f, 42.7533f, 230.0817f);
	func_415(-174.3653f, -2548.709f, 5.0163f, 198.7499f);
	func_415(215.9285f, -2903.652f, 6.6886f, 151.951f);
	func_415(314.6187f, -1679.352f, 28.1261f, 72.5752f);
	func_415(1408.015f, -2623.801f, 45.1502f, 312.7456f);
	func_415(-379.9112f, -1774.544f, 20.0649f, 13.9162f);
	func_415(96.5893f, -2001.965f, 18.844f, 147.396f);
	func_415(-729.8096f, -1777.493f, 28.0263f, 61.8742f);
	func_415(-971.1151f, -1868.092f, 18.9378f, 33.2574f);
	func_415(-720.1935f, -2557.545f, 12.9387f, 18.6712f);
	func_415(-1335.482f, -2677.121f, 12.9449f, 187.4991f);
	func_415(-878.3446f, -2968.556f, 12.9471f, 331.5428f);
	func_415(-1005.327f, -2232.398f, 8.0032f, 92.8891f);
	func_415(-401.2441f, -2284.453f, 6.6082f, 2.3971f);
	func_415(-1454.813f, -1471.849f, 1.1336f, 242.0199f);
	func_415(821.5599f, 1298.328f, 362.9729f, 262.7468f);
	func_415(-449.7726f, 1586.159f, 358.0207f, 239.931f);
	func_415(-348.6263f, 1156.363f, 324.5158f, 54.5644f);
	func_415(-827.162f, 1686.859f, 194.2108f, 236.4414f);
	func_415(-184.5484f, 1923.192f, 196.6049f, 206.5246f);
	func_415(296.1962f, 1771.646f, 227.0542f, 310.265f);
	func_415(1052.903f, 1495.316f, 174.8349f, 205.154f);
	func_415(-1532.131f, 1396.502f, 122.7763f, 352.1764f);
	func_415(-2604.194f, 1675.818f, 138.9021f, 166.6577f);
	func_415(-1513.824f, 2166.168f, 54.0724f, 251.5786f);
	func_415(-1697.408f, 2456.897f, 29.418f, 101.049f);
	func_415(-2819.858f, 2253.055f, 28.6358f, 169.9338f);
	func_415(-3043.554f, 1477.634f, 27.3241f, 179.9691f);
	func_415(-2381.452f, 2830.405f, 2.372f, 76.3996f);
	func_415(-2993.669f, 3335.124f, 9.2207f, 46.6226f);
	func_415(-1789.875f, 2675.004f, 2.4478f, 318.05f);
	func_415(-1596.024f, 2950.032f, 32.0914f, 221.481f);
	func_415(-1099.969f, 2850.755f, 12.8854f, 317.9454f);
	func_415(55.8239f, 3338.571f, 35.6469f, 165.2648f);
	func_415(173.2043f, 2293.298f, 92.1495f, 208.7343f);
	func_415(-468.6477f, 2994.032f, 26.1288f, 96.4423f);
	func_415(-1212.968f, 2599.15f, 14.572f, 277.3627f);
	func_415(-177.6004f, 2945.426f, 29.6345f, 344.5758f);
	func_415(-270.1975f, 2661.462f, 59.8035f, 190.3861f);
	func_415(-767.441f, 2284.18f, 76.413f, 331.6507f);
	func_415(578.2679f, 2798.182f, 41.1427f, 308.8694f);
	func_415(388.2008f, 3525.706f, 32.9f, 242.16f);
	func_415(1228.046f, 3612.758f, 32.4634f, 303.8293f);
	func_415(1060.165f, 3042.599f, 40.6158f, 329.9008f);
	func_415(845.1221f, 2207.164f, 49.9157f, 40.9634f);
	func_415(1281.185f, 2665.227f, 36.6537f, 44.0714f);
	func_415(2137.185f, 2961.237f, 45.9129f, 273.7183f);
	func_415(2052.815f, 3319.029f, 44.7859f, 127.0919f);
	func_415(1959.709f, 3775.369f, 31.2029f, 88.7083f);
	func_415(2500.937f, 4153.028f, 37.2878f, 204.7804f);
	func_415(2730.682f, 3415.967f, 55.7151f, 278.4684f);
	func_415(2936.23f, 4437.92f, 47.4218f, 323.2516f);
	func_415(3636.311f, 3765.969f, 27.5157f, 51.549f);
	func_415(2532.664f, 2686.917f, 40.7205f, 249.7434f);
	func_415(2157.111f, 1974.473f, 93.7061f, 22.0171f);
	func_415(1499.479f, 1827.166f, 106.4998f, 42.618f);
	func_415(2895.405f, 3888.189f, 52.0109f, 213.3904f);
	func_415(1639.252f, 3852.798f, 33.7036f, 277.8739f);
	func_415(16.3756f, 3623.829f, 39.0889f, 138.8624f);
	func_415(-202.3551f, 4176.263f, 42.1762f, 357.9106f);
	func_415(378.6819f, 4405.726f, 61.3992f, 2.2521f);
	func_415(763.3045f, 4180.816f, 39.6263f, 313.7911f);
	func_415(1410.916f, 4363.65f, 41.6243f, 351.9106f);
	func_415(2474.189f, 4460.482f, 34.2448f, 338.6556f);
	func_415(2787.091f, 4896.004f, 35.5118f, 346.5345f);
	func_415(3787.385f, 4446.902f, 3.6951f, 322.4305f);
	func_415(3283.627f, 5161.83f, 17.7122f, 120.0761f);
	func_415(2444.642f, 5016.759f, 45.2854f, 256.7558f);
	func_415(2071.367f, 4807.796f, 40.6377f, 147.898f);
	func_415(2012.781f, 5129.742f, 44.5825f, 92.6079f);
	func_415(1710.641f, 4657.467f, 42.4848f, 108.8281f);
	func_415(2498.991f, 5641.692f, 45.6963f, 48.9642f);
	func_415(2250.176f, 5968.912f, 49.0116f, 15.0599f);
	func_415(1853.773f, 6404.851f, 45.2075f, 116.4965f);
	func_415(866.8867f, 6512.98f, 20.7883f, 248.893f);
	func_415(205.2754f, 7012.687f, 1.0453f, 196.8449f);
	func_415(-212.0001f, 6565.548f, 9.8635f, 152.7291f);
	func_415(-573.4517f, 6167.307f, 5.3904f, 302.589f);
	func_415(206.7901f, 6402.567f, 30.3805f, 81.5939f);
	func_415(-731.3629f, 5800.728f, 16.5887f, 196.4081f);
	func_415(-664.7944f, 5460.415f, 49.6868f, 157.5173f);
	func_415(-601.0768f, 5294.568f, 69.2145f, 27.8272f);
	func_415(-532.1605f, 4971.026f, 146.1112f, 172.7688f);
	func_415(-1546.969f, 5010.706f, 64.4016f, 255.285f);
	func_415(-2170.899f, 4459.51f, 61.8337f, 141.4564f);
	func_415(-2504.334f, 3627.644f, 12.7211f, 175.0945f);
	func_415(-1216.204f, 4457.368f, 29.5562f, 16.7363f);
	func_415(797.6583f, 5704.728f, 697.4423f, 102.9245f);
	func_415(159.5193f, 5212.952f, 572.7617f, 303.589f);
	func_415(2867.312f, 5944.487f, 356.7372f, 56.172f);
	func_415(10.6515f, 6334.516f, 30.2366f, 336.7196f);
	func_415(1472.189f, 6359.462f, 22.7034f, 289.4279f);
	func_415(-618.1378f, 3993.369f, 120.0915f, 212.0991f);
	func_415(-885.1862f, 4428.847f, 19.9719f, 90.7754f);
	func_415(215.323f, 7381.881f, 13.4278f, 203.1559f);
	func_415(3635.046f, 5669.953f, 7.7871f, 32.6794f);
	func_415(3646.407f, 4997.506f, 11.2006f, 19.0908f);
	func_415(3546.356f, 2523.698f, 5.4951f, 29.0676f);
	func_415(2193.448f, 5574.355f, 52.7895f, 268.6339f);
	func_415(-2165.357f, 5170.346f, 13.5525f, 39.8589f);
	func_415(-1606.75f, 4742.162f, 52.9203f, 53.6989f);
	func_415(-945.4f, 4611.085f, 237.932f, 276.5363f);
	func_415(-2415.631f, 4221.8f, 8.7558f, 303.5893f);
	func_415(809.2775f, 3227.627f, 37.6705f, 234.2991f);
	func_415(1101.399f, 3436.295f, 32.8756f, 310.4154f);
	func_415(1691.926f, 3486.635f, 35.8127f, 339.3695f);
	func_415(2407.986f, 3537.302f, 72.5395f, 355.4901f);
	func_415(3051.449f, 2725.313f, 62.3978f, 331.4178f);
	func_415(2527.302f, 2009.074f, 18.9235f, 346.0563f);
	func_415(1840.181f, 2499.208f, 44.7693f, 301.6813f);
	func_415(1787.824f, 3067.684f, 61.2278f, 70.872f);
	func_415(1382.367f, 3003.334f, 39.7661f, 340.408f);
	func_415(244.4017f, 2637.836f, 44.6054f, 240.1419f);
	func_415(-251.8209f, 2205.487f, 128.884f, 195.6026f);
	func_415(-541.051f, 2005.346f, 202.3307f, 274.6922f);
	func_415(-2039.825f, 1960.994f, 187.7879f, 312.9809f);
	func_415(-1603.197f, 237.8279f, 58.3225f, 263.857f);
	func_415(-1724.508f, -2970.292f, 13.1465f, 4.1473f);
	func_415(1192.917f, 1839.359f, 77.4385f, 170.34f);
	func_415(3300.137f, -99.0274f, 11.6522f, 185.3741f);
	func_415(2849.717f, -1461.166f, 12.5068f, 52.3716f);
	func_415(2306.17f, -2118.141f, 2.322f, 18.5464f);
	func_415(2163.642f, 135.7375f, 226.6112f, 117.1583f);
	func_415(2527.796f, -90.4654f, 93.1274f, 110.8862f);
	func_415(1774.983f, 1676.629f, 78.209f, 142.8201f);
	func_415(1623.241f, 1265.085f, 86.7423f, 134.636f);
	func_415(1732.167f, 2169.269f, 82.2189f, 350.0135f);
	func_415(2167.046f, 1339.68f, 74.7227f, 32.7734f);
	func_415(712.9243f, 1727.998f, 182.7801f, 68.4225f);
	func_415(151.0186f, 1429.878f, 259.7057f, 36.1885f);
	func_415(-1662.585f, 4284.667f, 80.2819f, 23.3258f);
	func_415(-1323.416f, 5349.778f, 2.3383f, 79.3172f);
	func_415(-2294.521f, 2342.52f, 0.2262f, 44.7661f);
	func_415(-892.6975f, 5271.815f, 84.9171f, 112.4479f);
	func_415(470.1919f, 3115.264f, 40.5447f, 77.6964f);
	func_415(-2673.124f, 2957.395f, 7.3939f, 285.1781f);
	func_415(-3192.201f, 815.0291f, 2.7957f, 260.1565f);
	func_415(945.9874f, -3277.793f, 4.8982f, 266.6732f);
	func_415(126.3235f, -1658.512f, 32.9414f, 28.4566f);
	func_415(1144.835f, -1688.646f, 35.1291f, 6.0452f);
	func_415(944.4474f, -1369.549f, 12.3266f, 314.3879f);
	func_415(937.8714f, -896.6146f, 49.0496f, 179.602f);
	func_415(-50.8218f, -894.3738f, 40.4824f, 157.0664f);
	func_415(-1159.234f, -1111.134f, 8.7345f, 300.7512f);
	func_415(-1729.466f, -972.845f, 5.2263f, 14.1883f);
	func_415(-251.1976f, 310.9189f, 96.5312f, 177.6596f);
	func_415(-261.0635f, 192.8841f, 84.9561f, 104.3934f);
	func_415(-769.5164f, -1996.682f, 7.8903f, 136.2945f);
	func_415(-1345.348f, -2123.383f, 12.9441f, 145.1976f);
	func_415(576.7401f, -657.0758f, 12.5207f, 347.7486f);
	func_415(2640.831f, 3200.896f, 52.1493f, 273.1668f);
	func_415(1995.588f, -925.1763f, 78.0824f, 77.8221f);
	func_415(-500.2817f, -2111.103f, 8.9576f, 132.9903f);
	func_415(-725.0269f, -2355.187f, 14.8438f, 227.8691f);
	func_415(-980.7766f, -2488.198f, 14.0523f, 150.2897f);
	func_415(-1127.178f, -1696.759f, 4.2742f, 29.4122f);
	func_415(-1212.316f, -1338.762f, 4.4687f, 109.8316f);
	func_415(-1373.831f, -1274.4f, 4.6296f, 28.0177f);
	func_415(-1531.726f, -1037.846f, 5.8012f, 226.8082f);
	func_415(-1243.753f, -963.8779f, 3.2555f, 82.051f);
	func_415(-1161.864f, -725.671f, 20.534f, 37.0823f);
	func_415(-1071.658f, -863.8865f, 4.7704f, 302.8431f);
	func_415(-869.8373f, -894.2067f, 15.7782f, 195.2182f);
	func_415(-847.3995f, -1198.361f, 5.8987f, 224.6693f);
	func_415(-59.1982f, 1031.608f, 233.5404f, 342.8009f);
	func_415(-498.3894f, -950.4281f, 23.8303f, 170.6251f);
	func_415(-668.458f, -451.6636f, 35.9803f, 263.7879f);
	func_415(-538.0801f, -255.6042f, 36.4835f, 28.044f);
	func_415(-674.919f, -35.9837f, 39.1f, 107.0653f);
	func_415(-957.8153f, -347.7798f, 38.5257f, 296.3945f);
	func_415(-1399.278f, 122.7592f, 54.9624f, 179.943f);
	func_415(-1259.903f, 600.5897f, 139.911f, 307.5361f);
	func_415(-1161.234f, 931.7809f, 198.3958f, 312.1524f);
	func_415(-929.2317f, 1127.948f, 220.3745f, 192.5778f);
	func_415(-625.6737f, 979.0534f, 241.17f, 105.5179f);
	func_415(-281.6504f, 736.922f, 208.7457f, 201.0901f);
	func_415(-799.7258f, 575.9078f, 125.8626f, 200.7426f);
	func_415(-111.9565f, 1361.998f, 311.2291f, 309.7981f);
	func_415(161.9947f, 742.2007f, 207.3627f, 24.4887f);
	func_415(-591.4622f, -1443.56f, 11.0649f, 55.8083f);
	func_415(48.3094f, -1466.97f, 34.0209f, 46.3598f);
	func_415(573.138f, -903.282f, 10.653f, 359.9055f);
	func_415(444.6478f, -584.4781f, 28.4022f, 263.8702f);
	func_415(590.5396f, -128.7431f, 72.7058f, 324.8725f);
	func_415(633.0765f, -1477.419f, 9.6378f, 13.7451f);
	func_415(567.5936f, -2316.353f, 5.8157f, 358.2805f);
	func_415(154.683f, -2406.677f, 5.9026f, 356.73f);
	func_415(-407.8167f, -2742.427f, 6.6763f, 192.47f);
	func_415(77.3055f, -2723.974f, 5.9071f, 269.1819f);
	func_415(664.1844f, -2986.192f, 5.9477f, 169.3143f);
	func_415(1015.701f, -2310.8f, 30.4119f, 351.451f);
	func_415(1105.497f, -1903.685f, 37.37f, 141.7318f);
	func_415(1397.402f, -2375.49f, 63.0531f, 356.6557f);
	func_415(1675.434f, -1547.791f, 112.5916f, 343.2593f);
	func_415(1454.21f, -1000.43f, 48.8159f, 85.0815f);
	func_415(2183.739f, -582.2708f, 96.7788f, 309.7693f);
	func_415(2543.149f, 142.0665f, 99.4934f, 165.3156f);
	func_415(2596.192f, 751.3882f, 91.457f, 196.0535f);
	func_415(2603.688f, 1235.993f, 44.3592f, 176.2542f);
	func_415(2122.656f, 2778.532f, 50.0208f, 309.4357f);
	func_415(2396.602f, 3264.547f, 48.7285f, 214.5686f);
	func_415(2322.511f, 3893.286f, 34.9455f, 312.4513f);
	func_415(581.2474f, 778.2208f, 201.9709f, 228.6589f);
	func_415(1118.769f, 790.2458f, 149.7879f, 327.737f);
	func_415(1312.517f, 1248.61f, 106.7748f, 356.9769f);
	func_415(1309.661f, 1537.113f, 96.2337f, 6.4865f);
	func_415(1062.127f, 2084.489f, 52.5033f, 26.2563f);
	func_415(1521.927f, 2010.445f, 99.3948f, 355.0577f);
	func_415(1370.713f, 2313.501f, 79.9254f, 33.3623f);
	func_415(907.667f, 2678.261f, 40.7875f, 261.5676f);
	func_415(699.3987f, 2441.128f, 61.3254f, 209.2828f);
	func_415(436.9572f, 2382.852f, 50.022f, 322.7864f);
	func_415(439.7385f, 2086.472f, 100.9622f, 336.0373f);
	func_415(-628.1458f, 2815.875f, 36.9998f, 300.3421f);
	func_415(-1374.838f, 2402.95f, 30.041f, 288.2213f);
	func_415(-1845.524f, -708.1555f, 9.1302f, 227.8206f);
	func_415(-2441.261f, -319.8737f, 3.6674f, 231.7609f);
	func_415(-2994.104f, 21.4889f, 7.8942f, 241.8965f);
	func_415(-2825.43f, 1423.209f, 100.6655f, 175.2131f);
	func_415(-3091.066f, 1757.376f, 35.0735f, 174.5508f);
	func_415(-3007.828f, 2099.017f, 40.1434f, 332.562f);
	func_415(-1966.473f, 2473.978f, 1.1161f, 204.7869f);
	func_415(-2281.606f, 3412.213f, 32.0105f, 341.204f);
	func_415(456.3445f, 6699.446f, 7.8774f, 230.5219f);
	func_415(1191.518f, 6560.621f, 2.9303f, 86.2098f);
	func_415(2595.129f, 5402.892f, 41.7871f, 10.6124f);
	func_415(644.2881f, -1840.464f, 9.0907f, 354.3967f);
}

void func_415(struct<3> Param0, float fParam3)
{
	Global_2411308[iLocal_1162 /*3*/] = { Param0 };
	Global_2412176[iLocal_1162] = fParam3;
	iLocal_1162++;
}

