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
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	struct<3> Local_49 = { 0, 0, 0 } ;
	struct<3> Local_52 = { 0, 0, 0 } ;
	struct<3> Local_55 = { 0, 0, 0 } ;
	struct<3> Local_58 = { 0, 0, 0 } ;
	struct<3> Local_61 = { 0, 0, 0 } ;
	struct<3> Local_64 = { 0, 0, 0 } ;
	struct<3> Local_67 = { 0, 0, 0 } ;
	struct<3> Local_70 = { 0, 0, 0 } ;
	struct<3> Local_73 = { 0, 0, 0 } ;
	struct<3> Local_76 = { 0, 0, 0 } ;
	struct<3> Local_79 = { 0, 0, 0 } ;
	struct<8> Local_82 = { 0, 0, -1, 0, 0, 0, 0, 0 } ;
	var uLocal_90 = 0;
	var uLocal_91 = 1000;
	var uLocal_92 = 1000;
	var uLocal_93 = 0;
	struct<2> Local_94[3];
	struct<2> Local_101[3];
	var uLocal_108[2] = { 0, 0 };
	struct<14> Local_111[9];
	var uLocal_238 = 16;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
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
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
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
	struct<6> Local_403 = { 0, 3, 0, 0, 0, 0 } ;
	var uLocal_409 = 0;
	var uLocal_410 = 1092616192;
	var uLocal_411 = 1101004800;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 3;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	int iLocal_428 = 0;
	var uLocal_429[3] = { 0, 0, 0 };
	int iLocal_433 = 0;
	int iLocal_434 = 0;
	int iLocal_435 = 0;
	int iLocal_436 = 0;
	int iLocal_437 = 0;
	float fLocal_438 = 0f;
	float fLocal_439 = 0f;
	float fLocal_440 = 0f;
	float fLocal_441 = 0f;
	int iLocal_442 = 0;
	int iLocal_443 = 0;
	int iLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	int iLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	int iLocal_450 = 0;
	int iLocal_451 = 0;
	bool bLocal_452 = 0;
	int iLocal_453 = 0;
	int iLocal_454 = 0;
	int iLocal_455 = 0;
	bool bLocal_456 = 0;
	bool bLocal_457 = 0;
	int iLocal_458 = 0;
	int iLocal_459 = 0;
	struct<3> Local_460 = { 0, 0, 0 } ;
	float fLocal_463 = 0f;
	float fLocal_464 = 0f;
	float fLocal_465 = 0f;
	int iLocal_466 = 0;
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	int iLocal_469 = 0;
	bool bLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	int iLocal_474 = 0;
	char cLocal_475[64] = "";
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	char* sLocal_491 = NULL;
	int iLocal_492 = 0;
	int iLocal_493 = 0;
	var uLocal_494 = 30;
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
	var uLocal_645 = 10;
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
	var uLocal_696 = 10;
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
	var uLocal_767 = 20;
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
	var uLocal_868 = 20;
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
	var uLocal_969 = 30;
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
	var uLocal_1150 = 5;
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
	var uLocal_1181 = 7;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
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
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 5;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 3;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 16;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 10;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 5;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 5;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	int iLocal_1479 = 0;
	int iLocal_1480 = 0;
	int iLocal_1481 = 0;
	int iLocal_1482 = 0;
	int iLocal_1483 = 0;
	bool bLocal_1484 = 0;
	int iLocal_1485 = 0;
	float fLocal_1486[3] = { 0f, 0f, 0f };
	bool bLocal_1490 = 0;
	int iLocal_1491 = 0;
	int iLocal_1492 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
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
	uLocal_46 = unk_0xD736C0AC62BF73AD();
	uLocal_47 = unk_0x880E0FAC08C6FA65();
	Local_49 = { 1358.197f, 3618.234f, 33.89066f };
	Local_52 = { 0f, 5f, -0.5f };
	Local_55 = { 4f, 3f, -0.5f };
	Local_58 = { 4f, -3f, -0.5f };
	Local_61 = { 0f, -5f, -0.5f };
	Local_64 = { -4f, -3f, -0.5f };
	Local_67 = { -4f, 3f, -0.5f };
	Local_70 = { 0f, 2f, -0.5f };
	Local_73 = { 4f, 0f, -0.5f };
	Local_76 = { 0f, -2.2f, -0.5f };
	Local_79 = { -4f, 0f, -0.5f };
	iLocal_451 = joaat("weapon_assaultrifle");
	Local_460 = { 0f, 0f, 0f };
	iLocal_466 = 30000;
	bLocal_470 = true;
	StringCopy(&cLocal_475, "Rural_prep_trigger1", 64);
	sLocal_491 = "rural_prep_park";
	if (unk_0xE8A79675302ED812(3))
	{
		func_338();
		func_334();
	}
	unk_0x25A523E067E06F54(1);
	func_264();
	unk_0xB5AD2E78802711D6(1);
	while (true)
	{
		unk_0x2E94C9549322098D("M_ThePaletoScorePrep", 0);
		func_263(&uLocal_494);
		if (((((iLocal_1480 == 0 && unk_0x724D816EA203A79E(Local_94[0 /*2*/])) && unk_0xE59B7F5A03335350(Local_94[0 /*2*/], 0)) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA())) && !unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_94[0 /*2*/], 0)) && unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(Local_94[0 /*2*/], 1)) < 5625f)
		{
			bVar0 = false;
			if ((!Local_82.f_7 && unk_0x7214F4879DF8A314(unk_0xBC25C936A095B5BA())) && unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6))
			{
				iVar1 = 0;
				unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar1, 1);
				if (iVar1 != joaat("weapon_unarmed"))
				{
					iVar2 = 0;
					unk_0x928086F2A5589E20(unk_0xBC25C936A095B5BA(), iVar1, &iVar2);
					if (iVar2 < unk_0xA6867D3A0C79DC86(unk_0xBC25C936A095B5BA(), iVar1, 1))
					{
						bVar0 = true;
					}
				}
			}
			if (!bVar0)
			{
				func_235(&Local_82, Local_94[0 /*2*/], 0, 0, 1, 1, 1);
			}
		}
		else
		{
			func_233(&Local_82, 0, 0);
		}
		func_232();
		func_199();
		if (!bLocal_1484)
		{
			func_145();
			func_1();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	switch (iLocal_1480)
	{
		case 0:
			func_143();
			break;
		
		case 1:
			func_109();
			break;
		
		case 2:
			func_8();
			break;
		
		case 3:
			func_2();
			break;
	}
}

void func_2()
{
	switch (iLocal_1481)
	{
		case 0:
			if (unk_0x17FAADF9916EF741())
			{
				unk_0x829FA4611BD56B44(800);
			}
			unk_0xF3F01A78937DC905(0f);
			iLocal_1481++;
			break;
		
		case 1:
			func_3();
			break;
	}
}

void func_3()
{
	if (unk_0xE59B7F5A03335350(Local_94[0 /*2*/], 0))
	{
		unk_0xE9A905ADFD5BC8A0(Local_94[0 /*2*/], "IgnoredByQuickSave", 1);
	}
	func_4(0, 0);
	func_334();
}

void func_4(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_55969)
	{
		Global_55969 = iParam1;
	}
	if (bParam0)
	{
		if ((func_7(0) && Global_71224.f_1 == 1) && func_6(Global_71224))
		{
		}
		else
		{
			Global_55967 = 1;
		}
	}
	if (Global_105220.f_9056 || func_7(0))
	{
		iVar0 = func_5();
		iVar1 = Global_83852[iVar0 /*5*/];
		uVar2 = Global_71247.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_105220.f_9056)
			{
			}
			return;
		}
		if (unk_0xFA30DFD0084E92FE(Global_83852[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0xFA30DFD0084E92FE(Global_83852[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0xF0059F27F7BB6680(&(Global_83852[iVar0 /*5*/].f_1), 4);
		unk_0xF0059F27F7BB6680(&Global_71226, 1);
		Global_71242 = uVar2;
		Global_71243 = unk_0x105601648511CC64();
	}
}

int func_5()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0xFA30DFD0084E92FE(Global_83852[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_6(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

bool func_7(bool bParam0)
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_71226, 0);
}

void func_8()
{
	int iVar0;
	
	if (!iLocal_442)
	{
		if ((unk_0x724D816EA203A79E(iLocal_428) && unk_0xE59B7F5A03335350(iLocal_428, 0)) && unk_0xB248FAA35ED47DB9(iLocal_428, 1))
		{
			func_84(iLocal_428, 0, 145);
			unk_0x1E7A09C1710FB071(&iLocal_428);
			iLocal_442 = 1;
		}
	}
	unk_0x4B656426561BA934(-94.3112f, 3003.016f, 2711.273f, 4857.763f);
	switch (iLocal_1481)
	{
		case 0:
			if (unk_0x17FAADF9916EF741())
			{
				unk_0x829FA4611BD56B44(800);
			}
			func_83(724, 0);
			unk_0x3857DADBD6EC8A54("RHP1_TRUCK");
			unk_0x1D1C393C7689E5A6(3f, 5f, 4);
			iLocal_1481++;
			break;
		
		case 1:
			if (func_40(&Local_403, Local_49, 0.1f, 0.1f, 2f, 1, Local_94[0 /*2*/], "RHP_RTN", "", "RHP_BK", 1, 0, 1, -1) || (unk_0x2DA8CA50A72528FB(Local_403.f_5) && unk_0x0C265B3C448E6954(Local_94[0 /*2*/], 1359.476f, 3614.326f, 36.87141f, 1356.748f, 3621.605f, 33.72731f, 5f, 0, 1, 0)))
			{
				func_38(Local_94[0 /*2*/], 10.5f, -1, 1056964608, 0, 1, 0);
				unk_0x8300C56586249382(Local_94[0 /*2*/], 0);
				func_33(&Local_403, 1, 0);
				func_32(1, 724);
				bLocal_452 = false;
				iLocal_453 = 0;
				iLocal_1481++;
			}
			break;
		
		case 2:
			bLocal_457 = true;
			iVar0 = 0;
			while (iVar0 <= (9 - 1))
			{
				if (func_31(Local_111[iVar0 /*14*/]))
				{
					if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(Local_111[iVar0 /*14*/], 1), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), 1) < 400f)
					{
						if (!unk_0x8F97799512B006B7(Local_111[iVar0 /*14*/], 0))
						{
							unk_0xB8CBD998685C0685(Local_111[iVar0 /*14*/], unk_0xBC25C936A095B5BA(), 0, 16);
						}
						bLocal_457 = false;
					}
					else
					{
						unk_0x02537C8C1BEEB477(&(Local_111[iVar0 /*14*/]));
					}
				}
				iVar0++;
			}
			if (bLocal_457)
			{
				unk_0x44C98C11ED6DD327(unk_0xBC25C936A095B5BA());
				iLocal_1481++;
			}
			else if (!bLocal_452)
			{
				unk_0xEB233A3B7635D2AC();
				unk_0x1D1C393C7689E5A6(3f, 5f, 4);
				func_30("RHP_KILL", 7500, 1);
				bLocal_452 = true;
			}
			break;
		
		case 3:
			if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_94[0 /*2*/], 0))
			{
				if (unk_0x4B8E3E5901E59EB8())
				{
					unk_0xEB233A3B7635D2AC();
				}
				if (func_29(unk_0xBC25C936A095B5BA()) == 2)
				{
					func_28(&uLocal_238, 0, unk_0xBC25C936A095B5BA(), "Trevor", 0, 1);
					if (bLocal_452)
					{
						if (func_12(&uLocal_238, "RHPAUD", "RHP_END", "RHP_END_3", 7, 0, 0))
						{
							iLocal_1481 = 4;
						}
					}
					else if (func_12(&uLocal_238, "RHPAUD", "RHP_END", "RHP_END_3", 7, 0, 0))
					{
						iLocal_1481 = 4;
					}
				}
				else if (func_29(unk_0xBC25C936A095B5BA()) == 0)
				{
					func_28(&uLocal_238, 0, unk_0xBC25C936A095B5BA(), "Michael", 0, 1);
					if (bLocal_452)
					{
						if (func_12(&uLocal_238, "RHPAUD", "RHP_END", "RHP_END_1", 7, 0, 0))
						{
							iLocal_1481 = 4;
						}
					}
					else if (func_12(&uLocal_238, "RHPAUD", "RHP_END", "RHP_END_1", 7, 0, 0))
					{
						iLocal_1481 = 4;
					}
				}
				if (iLocal_1481 == 4)
				{
					unk_0xC1B1E9A034A63A62(0);
				}
			}
			else if (!iLocal_453 && func_10())
			{
				unk_0x1D1C393C7689E5A6(3f, 7f, 4);
				unk_0x3857DADBD6EC8A54("RHP1_END");
				func_30("RHP_EXIT", 7500, 1);
				iLocal_453 = 1;
			}
			break;
		
		case 4:
			if (!func_9() || unk_0x83666F9FB8FEBD4B() > 6000)
			{
				func_3();
			}
			break;
	}
}

int func_9()
{
	if (Global_15800 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

int func_10()
{
	if (unk_0x4B8E3E5901E59EB8())
	{
		return 0;
	}
	if (unk_0x11D38424F1DD3B8F())
	{
		if (func_9() && !func_11())
		{
			return 0;
		}
	}
	return 1;
}

int func_11()
{
	if (Global_16811 == 1)
	{
		return 1;
	}
	return 0;
}

bool func_12(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_27(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15807 = 0;
	Global_15814 = 0;
	Global_15809 = 0;
	Global_16791 = 1;
	Global_16793 = 0;
	Global_16797 = 0;
	StringCopy(&Global_16804, sParam3, 24);
	Global_2621441 = 0;
	return func_13(sParam2, iParam4, 0);
}

int func_13(char* sParam0, int iParam1, bool bParam2)
{
	Global_15801 = 0;
	if (Global_15800 == 0 || Global_15802 == 2)
	{
		if (Global_15800 != 0)
		{
			if (iParam1 > Global_15802)
			{
				if (Global_15807 == 0)
				{
					unk_0x1E08809A5041F85B(0);
					Global_14493.f_1 = 3;
					Global_15800 = 0;
					Global_15801 = 1;
					Global_15853 = 0;
					Global_15796 = 0;
					Global_15797 = 0;
					Global_15811 = 0;
					Global_15810 = 0;
					Global_14492 = 0;
				}
				else
				{
					func_26();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xE6711F601F11B66B())
		{
			return 0;
		}
		if (func_25(8, -1))
		{
			return 0;
		}
		Global_15876 = { Global_15870 };
		func_24();
		Global_15089 = { Global_15254 };
		Global_15806 = Global_15807;
		Global_15813 = Global_15814;
		Global_2621442 = Global_2621441;
		Global_15815 = { Global_15831 };
		Global_15808 = Global_15809;
		Global_16790 = Global_16791;
		Global_16798 = { Global_16804 };
		Global_16792 = Global_16793;
		Global_16794 = Global_16795;
		Global_16796 = Global_16797;
		Global_15419.f_370 = Global_16789;
		Global_15419.f_368 = Global_16787;
		Global_15419.f_369 = Global_16788;
		Global_15796 = Global_15797;
		if (Global_15806)
		{
			unk_0x7CB6FD92BE491AD9(&Global_2363, 20);
			unk_0x7CB6FD92BE491AD9(&Global_2364, 17);
			unk_0x7CB6FD92BE491AD9(&Global_2365, 0);
			if (bParam2)
			{
				func_18();
				if (Global_3168[Global_14493 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14493.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14459 == 1)
			{
				return 0;
			}
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				if (unk_0xABB2AFD7539464EA(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (func_17())
				{
					return 0;
				}
				if (unk_0x7199482D96955B9E(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0x01666D754C368931(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0xE959459C9FB1C42E(unk_0xBC25C936A095B5BA(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70978)
				{
					if (unk_0x149E9368A11035DE(unk_0xBC25C936A095B5BA()))
					{
						return 0;
					}
					if (unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F()))
					{
						return 0;
					}
					if (unk_0x042228744678C7D4(unk_0xBC25C936A095B5BA()))
					{
						return 0;
					}
					if (unk_0x36210078ECC9DC40(unk_0xB5CEFD608600A09F()))
					{
						return 0;
					}
				}
			}
			if (func_16())
			{
				return 0;
			}
			else
			{
				switch (Global_14493.f_1)
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
				if (unk_0xFA30DFD0084E92FE(Global_2363, 9))
				{
					return 0;
				}
			}
			func_15();
			Global_15810 = bParam2;
		}
		Global_15802 = iParam1;
		StringCopy(&Global_15419, sParam0, 24);
		Global_14666 = 0;
		func_14();
		return 1;
	}
	if (Global_15800 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15802 || iParam1 == Global_15802)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_26();
	}
	return 0;
}

void func_14()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14668[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x1E08809A5041F85B(0);
	Global_15800 = 1;
}

void func_15()
{
	Global_15853 = Global_15852;
	Global_15847 = Global_15848;
	Global_15894 = { Global_15882 };
	Global_15900 = { Global_15888 };
	Global_15855 = Global_15854;
	Global_15924 = { Global_15906 };
	Global_15930 = { Global_15912 };
	Global_15936 = { Global_15918 };
	Global_15942 = { Global_15948 };
	Global_1678 = Global_1679;
	Global_1680 = Global_1681;
	Global_15811 = Global_15812;
	Global_15813 = Global_15814;
	Global_15815 = { Global_15831 };
	Global_15804 = Global_15805;
	Global_16816 = 0;
	Global_15849 = 0;
	Global_15850 = 0;
	unk_0x7CB6FD92BE491AD9(&Global_2364, 16);
}

int func_16()
{
	if (Global_14493.f_1 == 1 || Global_14493.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_17()
{
	int iVar0;
	int iVar1;
	
	if (Global_70978)
	{
		iVar0 = 0;
		unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar1, 1);
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xCDE05E3688DE990D() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0xA0747FCBCF1D1424(unk_0xBC25C936A095B5BA(), 78, 1))
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

void func_18()
{
	if (func_23(14))
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[0 /*29*/])
			{
				Global_14493 = 0;
			}
			else if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[1 /*29*/])
			{
				Global_14493 = 1;
			}
			else if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[2 /*29*/])
			{
				Global_14493 = 2;
			}
			else
			{
				Global_14493 = 0;
			}
		}
	}
	else
	{
		Global_14493 = func_19();
		if (Global_14493 == 145)
		{
			Global_14493 = 3;
		}
		if (Global_70978)
		{
			Global_14493 = 3;
		}
		if (Global_14493 > 3)
		{
			Global_14493 = 3;
		}
	}
}

int func_19()
{
	func_20();
	return Global_105220.f_2354.f_539.f_4301;
}

void func_20()
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_22(Global_105220.f_2354.f_539.f_4301) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_29(unk_0xBC25C936A095B5BA());
			if (func_21(iVar0) && (!func_23(14) || Global_104171))
			{
				if (Global_105220.f_2354.f_539.f_4301 != iVar0 && func_21(Global_105220.f_2354.f_539.f_4301))
				{
					Global_105220.f_2354.f_539.f_4302 = Global_105220.f_2354.f_539.f_4301;
				}
				Global_105220.f_2354.f_539.f_4303 = iVar0;
				Global_105220.f_2354.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_105220.f_2354.f_539.f_4301 != 145)
			{
				Global_105220.f_2354.f_539.f_4303 = Global_105220.f_2354.f_539.f_4301;
			}
			return;
		}
	}
	Global_105220.f_2354.f_539.f_4301 = 145;
}

bool func_21(int iParam0)
{
	return iParam0 < 3;
}

int func_22(int iParam0)
{
	if (func_21(iParam0))
	{
		return Global_105220.f_28021[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_23(int iParam0)
{
	return Global_35905 == iParam0;
}

void func_24()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15089[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15089[iVar0 /*10*/].f_1), "", 24);
		Global_15089[iVar0 /*10*/].f_7 = 0;
		Global_15089[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15089.f_161 = -99;
	Global_15089.f_162 = { 0f, 0f, 0f };
}

bool func_25(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1363073.f_203[iParam1];
			}
			break;
	}
	return unk_0xFA30DFD0084E92FE(Global_1363073.f_1048, iParam0);
}

void func_26()
{
	unk_0x5C7DC611411E2CF9();
	Global_16811 = 0;
	if ((unk_0x58E7DDFF8D17A82A() || Global_14493.f_1 == 9) || Global_14492 == 1)
	{
		unk_0x1E08809A5041F85B(0);
		Global_15800 = 6;
		Global_14493.f_1 = 3;
		return;
	}
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(1);
		Global_15800 = 6;
		return;
	}
}

void func_27(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15254 = { *uParam0 };
	Global_1679 = iParam1;
	StringCopy(&Global_15870, sParam2, 24);
	Global_16789 = iParam5;
	if (iParam3 == 0)
	{
		Global_16787 = 1;
		Global_16785 = 0;
	}
	else
	{
		Global_16787 = 0;
		Global_16785 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16788 = 1;
		Global_16786 = 0;
	}
	else
	{
		Global_16788 = 0;
		Global_16786 = 1;
	}
}

void func_28(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_70978)
	{
		if (!unk_0x36CEFBE9B745A58D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x8941EA87BBF38C6F(iParam2, 0);
			}
			else
			{
				unk_0x8941EA87BBF38C6F(iParam2, 1);
			}
		}
		if (!unk_0x36CEFBE9B745A58D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x7C7F4D01B6DB297B(iParam2, 0);
			}
			else
			{
				unk_0x7C7F4D01B6DB297B(iParam2, 1);
			}
		}
	}
}

int func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_22(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

void func_30(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x3714DE83381EADC2(sParam0);
	unk_0x41D8F63F629E76BE(iParam1, 1);
}

int func_31(int iParam0)
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (unk_0xD27AC0E9B78CFDD7(iParam0))
		{
			if (unk_0xE59B7F5A03335350(unk_0x233ED4CD1F1A42C1(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x386592AF38881675(iParam0))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0x399F7937FFE4DEBF(iParam0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_32(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_55975)
	{
	}
	Global_55975 = 0;
	if (bParam0)
	{
		Global_55976 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_68062)
		{
			if (Global_56192[Global_68063[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_68063[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_68062)
		{
			if (Global_68063[iVar0 /*9*/] > 0)
			{
				if (Global_68063[iVar0 /*9*/] == iParam1)
				{
					Global_68063[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_33(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xFA30DFD0084E92FE(uParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_37(uParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x2DA8CA50A72528FB(uParam0->f_1[iVar0]))
		{
			unk_0x07B8ECB35A4ED3AC(&(uParam0->f_1[iVar0]));
		}
		func_36(iVar0, uParam0);
		func_35(iVar0, uParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			unk_0x7CB6FD92BE491AD9(&(uParam0->f_13), iVar0);
			unk_0x7CB6FD92BE491AD9(&(uParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (unk_0x2DA8CA50A72528FB(*uParam0))
	{
		unk_0x07B8ECB35A4ED3AC(uParam0);
	}
	uParam0->f_6 = 0;
	uParam0->f_12 = 0;
	uParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x36CEFBE9B745A58D(uParam0->f_17[iVar0]))
		{
			unk_0x8941EA87BBF38C6F(uParam0->f_17[iVar0], 1);
			unk_0xF0B851960DDCE3D8(uParam0->f_17[iVar0], 1);
			if (bParam2)
			{
				unk_0xC8FD3EBBB90E8D7F(uParam0->f_17[iVar0], 32, 1);
				unk_0xC8FD3EBBB90E8D7F(uParam0->f_17[iVar0], 305, 0);
			}
			unk_0xC8FD3EBBB90E8D7F(uParam0->f_17[iVar0], 268, 0);
			if (bParam1)
			{
				if (unk_0x9488E18994C5C83D(uParam0->f_17[iVar0], func_34()) && uParam0->f_17[iVar0] != unk_0xBC25C936A095B5BA())
				{
					unk_0x57EB4CC8F1928A47(uParam0->f_17[iVar0]);
				}
			}
			if (!unk_0xFA30DFD0084E92FE(uParam0->f_13, 29))
			{
				unk_0x69194304DB679A9C(uParam0->f_17[iVar0], 0, -1, 0);
			}
			uParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		unk_0x8941EA87BBF38C6F(unk_0xBC25C936A095B5BA(), 1);
		unk_0xF0B851960DDCE3D8(unk_0xBC25C936A095B5BA(), 1);
	}
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (bParam2)
		{
			unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 32, 1);
		}
	}
	uParam0->f_21 = 0;
}

var func_34()
{
	return unk_0x705BBFE5A8ADE4A9(unk_0xFC1CAE18F3ECBF2D());
}

void func_35(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_13), 19);
			break;
	}
}

void func_36(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_13), 16);
			break;
	}
}

void func_37(var uParam0)
{
	if (unk_0x2DA8CA50A72528FB(uParam0->f_5))
	{
		unk_0x07B8ECB35A4ED3AC(&(uParam0->f_5));
	}
}

int func_38(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0xBBC4195AD74D153D(0, 71, 1);
	unk_0xBBC4195AD74D153D(0, 72, 1);
	unk_0xBBC4195AD74D153D(0, 76, 1);
	unk_0xBBC4195AD74D153D(0, 73, 1);
	unk_0xBBC4195AD74D153D(0, 59, 1);
	unk_0xBBC4195AD74D153D(0, 60, 1);
	if (bParam5)
	{
		unk_0xBBC4195AD74D153D(0, 75, 1);
	}
	unk_0xBBC4195AD74D153D(0, 80, 1);
	if (!bParam6)
	{
		unk_0xBBC4195AD74D153D(0, 69, 1);
		unk_0xBBC4195AD74D153D(0, 70, 1);
		unk_0xBBC4195AD74D153D(0, 68, 1);
	}
	unk_0xBBC4195AD74D153D(0, 74, 1);
	unk_0xBBC4195AD74D153D(0, 86, 1);
	unk_0xBBC4195AD74D153D(0, 81, 1);
	unk_0xBBC4195AD74D153D(0, 82, 1);
	unk_0xBBC4195AD74D153D(0, 138, 1);
	unk_0xBBC4195AD74D153D(0, 136, 1);
	unk_0xBBC4195AD74D153D(0, 114, 1);
	unk_0xBBC4195AD74D153D(0, 107, 1);
	unk_0xBBC4195AD74D153D(0, 110, 1);
	unk_0xBBC4195AD74D153D(0, 89, 1);
	unk_0xBBC4195AD74D153D(0, 89, 1);
	unk_0xBBC4195AD74D153D(0, 87, 1);
	unk_0xBBC4195AD74D153D(0, 88, 1);
	unk_0xBBC4195AD74D153D(0, 113, 1);
	unk_0xBBC4195AD74D153D(0, 115, 1);
	unk_0xBBC4195AD74D153D(0, 116, 1);
	unk_0xBBC4195AD74D153D(0, 117, 1);
	unk_0xBBC4195AD74D153D(0, 118, 1);
	unk_0xBBC4195AD74D153D(0, 119, 1);
	unk_0xBBC4195AD74D153D(0, 131, 1);
	unk_0xBBC4195AD74D153D(0, 132, 1);
	unk_0xBBC4195AD74D153D(0, 123, 1);
	unk_0xBBC4195AD74D153D(0, 126, 1);
	unk_0xBBC4195AD74D153D(0, 129, 1);
	unk_0xBBC4195AD74D153D(0, 130, 1);
	unk_0xBBC4195AD74D153D(0, 133, 1);
	unk_0xBBC4195AD74D153D(0, 134, 1);
	unk_0x12D40A07C0F343DC();
	func_39(iParam0);
	if ((unk_0x105601648511CC64() - Global_29) > 500)
	{
		unk_0x241D744C1CCBC526(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x105601648511CC64();
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (unk_0x357058E632979E65(unk_0x8910237449BB6F79(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_39(int iParam0)
{
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (unk_0xB90934C41404D57A(iParam0))
		{
			if (unk_0x8324A028D312E68D(iParam0))
			{
				unk_0xFE0D4DB713B1C1E7(iParam0, 0);
			}
		}
	}
}

int func_40(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15)
{
	return func_41(uParam0, Param1, Param4, func_82(), func_82(), iParam7, 5, 0, 0, 0, iParam8, sParam9, func_81(), func_81(), func_81(), func_81(), sParam10, 0, bParam12, sParam11, 0, iParam13, bParam14, iParam15, 0, 0, 0, 1, 1065353216);
}

int func_41(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, bool bParam25, bool bParam26, char* sParam27, bool bParam28, int iParam29, bool bParam30, int iParam31, int iParam32, int iParam33, int iParam34, bool bParam35, float fParam36)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Var3 = { Param1 + Vector(1f, 0f, 0f) };
	uParam0->f_17[0] = iParam15;
	uParam0->f_17[1] = iParam16;
	uParam0->f_17[2] = iParam17;
	uParam0->f_16 = iParam15;
	func_80(uParam0);
	func_79(uParam0);
	func_78();
	if (func_62(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, uParam0->f_8, bParam25, iParam18, 0, 0, iParam32, iParam33, iParam34, iParam14, bParam26))
	{
		func_61(sParam20);
		func_61(sParam21);
		func_61(sParam22);
		func_61(sParam23);
		if (unk_0x726D9204B160D23E())
		{
			bVar1 = false;
			if (unk_0xE59B7F5A03335350(iParam18, 0))
			{
				if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iParam18, 0))
				{
					unk_0xF0059F27F7BB6680(&(uParam0->f_13), 3);
					if (!unk_0xFA30DFD0084E92FE(uParam0->f_13, 9))
					{
						unk_0x7CB6FD92BE491AD9(&(uParam0->f_13), 4);
					}
					if (unk_0xFA30DFD0084E92FE(uParam0->f_13, 23))
					{
						unk_0x7CB6FD92BE491AD9(&(uParam0->f_13), 23);
					}
					unk_0xF0059F27F7BB6680(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5)
			{
				if (func_59(uParam0, iParam29))
				{
					unk_0xF0059F27F7BB6680(&(uParam0->f_13), 3);
					if (!unk_0xFA30DFD0084E92FE(uParam0->f_13, 9))
					{
						unk_0x7CB6FD92BE491AD9(&(uParam0->f_13), 4);
					}
					unk_0xF0059F27F7BB6680(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_61(sParam24);
				func_61(sParam27);
				func_61("MORE_SEATS");
				if (bParam26 && unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
				{
					if (unk_0x2DA8CA50A72528FB(uParam0->f_5))
					{
						unk_0x07B8ECB35A4ED3AC(&(uParam0->f_5));
						func_61(sParam19);
					}
					if (unk_0x2DA8CA50A72528FB(*uParam0))
					{
						unk_0x07B8ECB35A4ED3AC(uParam0);
					}
					if ((!func_57(uParam0, 1) && !func_56(uParam0)) && !unk_0xFA30DFD0084E92FE(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_55(uParam0, "LOSE_WANTED", 0);
							if (!unk_0x36CEFBE9B745A58D(uParam0->f_17[0]))
							{
								func_53(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0xF0059F27F7BB6680(&(uParam0->f_13), 0);
						unk_0x7CB6FD92BE491AD9(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0xFA30DFD0084E92FE(uParam0->f_13, 0))
					{
						func_61("LOSE_WANTED");
						unk_0x7CB6FD92BE491AD9(&(uParam0->f_13), 0);
						unk_0xF0059F27F7BB6680(&(uParam0->f_13), 1);
					}
					if (unk_0xFA30DFD0084E92FE(uParam0->f_13, 1))
					{
						if (!func_57(uParam0, 1))
						{
							if (!unk_0x36CEFBE9B745A58D(uParam0->f_17[0]))
							{
								func_53(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x7CB6FD92BE491AD9(&(uParam0->f_13), 1);
						}
					}
					if (!unk_0x2DA8CA50A72528FB(uParam0->f_5))
					{
						if (unk_0x2DA8CA50A72528FB(*uParam0))
						{
							unk_0x07B8ECB35A4ED3AC(uParam0);
						}
						uParam0->f_5 = func_52(Var3, 0);
						if (!iParam31 == -1)
						{
							unk_0xBF0E22F3E083C33D(uParam0->f_5, iParam31);
						}
						if (bParam35)
						{
							func_51(uParam0->f_5, uParam0);
						}
					}
					else if (!func_50(Var3, unk_0x5DC00ADB7E2FD7C2(uParam0->f_5), 0.1f, 0))
					{
						unk_0x1423825E528B4DE1(uParam0->f_5, Var3);
						if (bParam35)
						{
							func_51(uParam0->f_5, uParam0);
						}
					}
					if (!func_57(uParam0, 2))
					{
						if (!unk_0xFA30DFD0084E92FE(uParam0->f_13, 2))
						{
							func_55(uParam0, sParam19, 0);
							unk_0xF0059F27F7BB6680(&(uParam0->f_13), 2);
						}
					}
					if (iParam14 == 4 || iParam14 == 5)
					{
						if (unk_0xFA30DFD0084E92FE(uParam0->f_13, 13))
						{
							iParam13 = 0;
						}
					}
					bVar1 = false;
					iVar6 = 0;
					iVar7 = 0;
					if ((iParam14 == 1 || iParam14 == 3) || iParam14 == 5)
					{
						iVar6 = 1;
					}
					if (iParam14 == 2 || iParam14 == 3)
					{
						iVar7 = 1;
					}
					else if (iParam14 == 4 || iParam14 == 5)
					{
						iVar7 = 2;
					}
					if (bParam28)
					{
						unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), Param1, Param4, iParam13, iVar6, iVar7);
						if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Param7, Param10, fParam36, 0, iVar6, iVar7))
						{
							bVar1 = true;
						}
					}
					else if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), Param1, Param4, iParam13, iVar6, iVar7))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!unk_0x36CEFBE9B745A58D(uParam0->f_17[iVar2]))
							{
								if (iParam14 == 4 || iParam14 == 5)
								{
									iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
									if (!unk_0x62F3A07C43FFB568(uParam0->f_17[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam18 != 0)
								{
									if (!unk_0x62F3A07C43FFB568(uParam0->f_17[iVar2], iParam18, 0))
									{
										bVar1 = false;
									}
								}
								else if (!unk_0x9488E18994C5C83D(uParam0->f_17[iVar2], func_34()) || !func_48(uParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_45(uParam0))
							{
								func_61(sParam19);
								func_61(sParam24);
								func_61(sParam20);
								func_61(sParam21);
								func_61(sParam22);
								func_61(sParam23);
								func_61("LOSE_WANTED");
								func_61("MORE_SEATS");
								func_61(sParam27);
								func_33(uParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (unk_0x724D816EA203A79E(iParam18))
			{
				if ((bParam26 && unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0)) && (!unk_0xFA30DFD0084E92FE(uParam0->f_13, 9) && !unk_0xFA30DFD0084E92FE(uParam0->f_13, 22)))
				{
					func_61(sParam24);
					func_61(sParam27);
					if (unk_0x2DA8CA50A72528FB(uParam0->f_5) || unk_0x2DA8CA50A72528FB(*uParam0))
					{
						unk_0x07B8ECB35A4ED3AC(&(uParam0->f_5));
						unk_0x07B8ECB35A4ED3AC(uParam0);
						func_61(sParam19);
					}
					if ((!func_57(uParam0, 1) && !func_56(uParam0)) && !unk_0xFA30DFD0084E92FE(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_55(uParam0, "LOSE_WANTED", 0);
							if (!unk_0x36CEFBE9B745A58D(uParam0->f_17[0]))
							{
								func_53(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0xF0059F27F7BB6680(&(uParam0->f_13), 0);
						unk_0x7CB6FD92BE491AD9(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0xFA30DFD0084E92FE(uParam0->f_13, 0))
					{
						func_61("LOSE_WANTED");
						unk_0x7CB6FD92BE491AD9(&(uParam0->f_13), 0);
						unk_0xF0059F27F7BB6680(&(uParam0->f_13), 1);
					}
					if (unk_0xFA30DFD0084E92FE(uParam0->f_13, 1))
					{
						if (!func_57(uParam0, 1))
						{
							if (!unk_0x36CEFBE9B745A58D(uParam0->f_17[0]))
							{
								func_53(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x7CB6FD92BE491AD9(&(uParam0->f_13), 1);
						}
					}
					if (unk_0xE59B7F5A03335350(iParam18, 0))
					{
						if (!unk_0x2DA8CA50A72528FB(*uParam0))
						{
							if (unk_0x2DA8CA50A72528FB(uParam0->f_5))
							{
								unk_0x07B8ECB35A4ED3AC(&(uParam0->f_5));
								func_61(sParam19);
							}
							*uParam0 = func_42(iParam18, 0, 0);
							unk_0x2E9308F22ABD4DF5(*uParam0, 2);
							if (!unk_0xFA30DFD0084E92FE(uParam0->f_13, 4))
							{
								func_51(*uParam0, uParam0);
							}
						}
						if (!func_57(uParam0, 2))
						{
							if (!unk_0xFA30DFD0084E92FE(uParam0->f_13, 3))
							{
								func_55(uParam0, sParam24, 0);
								unk_0xF0059F27F7BB6680(&(uParam0->f_13), 3);
								unk_0x7CB6FD92BE491AD9(&(uParam0->f_13), 4);
							}
							else if (unk_0xFA30DFD0084E92FE(uParam0->f_13, 9))
							{
								if (!unk_0xEAEFBBEC1AEA464B(sParam27))
								{
									if (!unk_0xFA30DFD0084E92FE(uParam0->f_13, 4))
									{
										func_55(uParam0, sParam27, 0);
										unk_0xF0059F27F7BB6680(&(uParam0->f_13), 4);
									}
								}
								else if (!unk_0xFA30DFD0084E92FE(uParam0->f_13, 4))
								{
									func_55(uParam0, sParam24, 0);
									unk_0xF0059F27F7BB6680(&(uParam0->f_13), 4);
								}
								if (!unk_0xFA30DFD0084E92FE(uParam0->f_13, 23))
								{
									if (!unk_0x36CEFBE9B745A58D(uParam0->f_17[0]))
									{
										func_53(uParam0->f_17[0], "GET_IN_CAR", 3);
									}
									unk_0xF0059F27F7BB6680(&(uParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0x2DA8CA50A72528FB(uParam0->f_5))
				{
					unk_0x07B8ECB35A4ED3AC(&(uParam0->f_5));
					func_61(sParam19);
				}
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!func_57(uParam0, 2))
						{
							if (unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
							{
								if (!unk_0xFA30DFD0084E92FE(uParam0->f_13, 13))
								{
									iVar8 = 0;
									iVar9 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!unk_0x36CEFBE9B745A58D(uParam0->f_17[iVar2]))
										{
											iVar8++;
										}
										iVar2++;
									}
									iVar9 = unk_0x491B2241281A03B7(0, iVar8);
									if (!unk_0x36CEFBE9B745A58D(uParam0->f_17[iVar9]))
									{
										func_53(uParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_55(uParam0, "MORE_SEATS", 0);
									unk_0xF0059F27F7BB6680(&(uParam0->f_13), 13);
								}
							}
							else if (!unk_0xFA30DFD0084E92FE(uParam0->f_13, 3))
							{
								func_55(uParam0, sParam24, 0);
								unk_0xF0059F27F7BB6680(&(uParam0->f_13), 3);
								unk_0x7CB6FD92BE491AD9(&(uParam0->f_13), 4);
							}
							else if (!unk_0xFA30DFD0084E92FE(uParam0->f_13, 4))
							{
								if (unk_0xFA30DFD0084E92FE(uParam0->f_13, 9))
								{
									func_55(uParam0, sParam27, 0);
									unk_0xF0059F27F7BB6680(&(uParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_57(uParam0, 2))
					{
						if (!unk_0xFA30DFD0084E92FE(uParam0->f_13, 3))
						{
							func_55(uParam0, sParam24, 0);
							unk_0xF0059F27F7BB6680(&(uParam0->f_13), 3);
							unk_0x7CB6FD92BE491AD9(&(uParam0->f_13), 4);
						}
						else if (unk_0xFA30DFD0084E92FE(uParam0->f_13, 9))
						{
							if (!unk_0xEAEFBBEC1AEA464B(sParam27))
							{
								if (!unk_0xFA30DFD0084E92FE(uParam0->f_13, 4))
								{
									func_55(uParam0, sParam27, 0);
									unk_0xF0059F27F7BB6680(&(uParam0->f_13), 4);
								}
							}
							else if (!unk_0xFA30DFD0084E92FE(uParam0->f_13, 4))
							{
								func_55(uParam0, sParam24, 0);
								unk_0xF0059F27F7BB6680(&(uParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (unk_0xFA30DFD0084E92FE(uParam0->f_13, 0))
		{
			unk_0x7CB6FD92BE491AD9(&(uParam0->f_13), 0);
		}
		func_61(sParam19);
		func_61(sParam24);
		func_61(sParam27);
		func_61(sParam24);
		func_61("LOSE_WANTED");
		if (unk_0x2DA8CA50A72528FB(uParam0->f_5))
		{
			unk_0x07B8ECB35A4ED3AC(&(uParam0->f_5));
		}
		if (unk_0x2DA8CA50A72528FB(*uParam0))
		{
			unk_0x07B8ECB35A4ED3AC(uParam0);
		}
	}
	unk_0x7CB6FD92BE491AD9(&(uParam0->f_13), 11);
	unk_0x7CB6FD92BE491AD9(&(uParam0->f_13), 12);
	return 0;
}

int func_42(int iParam0, bool bParam1, bool bParam2)
{
	return func_43(iParam0, !bParam1, bParam2);
}

int func_43(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x511FE22BCF5353CD(iParam0);
	if (unk_0xD27AC0E9B78CFDD7(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(uVar0, func_44(unk_0x7AF0088ABFA713B6(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xF9C2945DB5BAB4BF(uVar0, bParam1);
		}
		else
		{
			unk_0x0D5352939CC40C16(uVar0, 2);
		}
	}
	else if (unk_0x386592AF38881675(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(uVar0, func_44(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
		unk_0xF9C2945DB5BAB4BF(uVar0, bParam1);
	}
	else if (unk_0xB12D030810E8447D(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(uVar0, func_44(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_44(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_45(var uParam0)
{
	if (unk_0xFA30DFD0084E92FE(uParam0->f_13, 12))
	{
		if (func_47(unk_0xBC25C936A095B5BA()))
		{
			if (func_46(1, 0, 1) || unk_0xFA30DFD0084E92FE(uParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_46(1, 0, 1) || unk_0xFA30DFD0084E92FE(uParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_46(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x21EBACBD9FF28F79())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
		{
			return 0;
		}
		iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		if (bParam0)
		{
			if (unk_0x1D403DFADBC2DE3C(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
			{
				if (unk_0x3187EF5798B5D209(iVar0, -1, 0) != unk_0xBC25C936A095B5BA())
				{
					return 0;
				}
			}
		}
		if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
		{
			if (unk_0xEFA31351B754089B(iVar0) < 0.95f || unk_0xEFA31351B754089B(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (!unk_0xDB625D1720DAC49A(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	return 1;
}

int func_47(int iParam0)
{
	float fVar0;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		fVar0 = unk_0x8910237449BB6F79(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_48(int iParam0, int iParam1)
{
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()) && iParam1)
		{
			if (func_49(unk_0xBC25C936A095B5BA(), iParam0))
			{
				unk_0x567FA6DC2DF8E19A(func_34(), 50f);
				return 1;
			}
		}
		else if (unk_0x9488E18994C5C83D(iParam0, func_34()))
		{
			unk_0x567FA6DC2DF8E19A(func_34(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_49(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (unk_0xCBBE5AFE2CD2E9B6(iParam0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(iParam0, 0);
			if (unk_0xE59B7F5A03335350(iVar0, 0))
			{
				if (!unk_0x36CEFBE9B745A58D(iParam1))
				{
					if (unk_0x25EF720B1CAB1E23(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_50(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x357058E632979E65((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x357058E632979E65((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x357058E632979E65((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x357058E632979E65((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x357058E632979E65((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_51(var uParam0, var uParam1)
{
	if (unk_0x2DA8CA50A72528FB(uParam0))
	{
		if (unk_0x2DA8CA50A72528FB(uParam1->f_6))
		{
			unk_0x0BBAABB52887CF8C(uParam1->f_6, 0);
		}
		unk_0xA2F21B9C95E0F635(0);
		unk_0x5499DFC49A11E05F();
		uParam1->f_6 = uParam0;
		unk_0x0BBAABB52887CF8C(uParam0, 1);
	}
}

var func_52(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x390CF6C8AD6903B7(Param0);
	unk_0x3F5F1772D71D5EC4(uVar0, func_44(unk_0x7AF0088ABFA713B6(), 1f, 1f));
	unk_0x0BBAABB52887CF8C(uVar0, iParam3);
	return uVar0;
}

void func_53(var uParam0, char* sParam1, int iParam2)
{
	unk_0x53D8178763EDCE60(uParam0, sParam1, func_54(iParam2), 1);
}

int func_54(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_55(var uParam0, char* sParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!unk_0xEAEFBBEC1AEA464B(sParam1))
		{
			if (!unk_0x3362CDE8460ED38B(sParam1, ""))
			{
				func_30(sParam1, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x105601648511CC64();
}

int func_56(var uParam0)
{
	if (!unk_0x36CEFBE9B745A58D(uParam0->f_16))
	{
		if (unk_0x9986AD62CA3DE747(uParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_57(var uParam0, int iParam1)
{
	if (iParam1 != 1 || unk_0x11D38424F1DD3B8F())
	{
		if (unk_0x4B8E3E5901E59EB8())
		{
			return 1;
		}
		if (func_58(uParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0x11D38424F1DD3B8F())
	{
		if (func_9() && !func_11())
		{
			return 1;
		}
	}
	return 0;
}

int func_58(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x105601648511CC64();
	iVar0 = (iVar1 - uParam0->f_10);
	if (iVar0 < 35)
	{
		return 1;
	}
	return 0;
}

int func_59(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		if (func_60(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_60(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (unk_0x724D816EA203A79E(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0x524ABB0435146845(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!unk_0x06F5AA4251CA92EB(iParam0, 1))
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!unk_0x06F5AA4251CA92EB(iParam0, 1))
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_61(char* sParam0)
{
	if (!unk_0xEAEFBBEC1AEA464B(sParam0))
	{
		unk_0xBB5629E7D44054AE(sParam0);
	}
}

int func_62(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, var uParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7[3];
	bool bVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	var uVar15[3];
	var uVar19[3];
	bool bVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	struct<3> Var28;
	int iVar31;
	int iVar32;
	
	iVar4 = 0;
	uParam0->f_17[0] = uParam1;
	uParam0->f_17[1] = uParam2;
	uParam0->f_17[2] = uParam3;
	uParam0->f_16 = uParam1;
	uVar15[0] = uParam4;
	uVar15[1] = uParam5;
	uVar15[2] = uParam6;
	uVar19[0] = uParam13;
	uVar19[1] = uParam14;
	uVar19[2] = uParam15;
	iVar6 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x36CEFBE9B745A58D(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
		{
			if (!unk_0xFA30DFD0084E92FE(uParam0->f_13, 29) && !unk_0xFA30DFD0084E92FE(uParam0->f_13, 28))
			{
				if (!unk_0x36CEFBE9B745A58D(uParam0->f_17[iVar0]))
				{
					unk_0x69194304DB679A9C(uParam0->f_17[iVar0], 1, -1, 0);
				}
				if (iVar0 == 2)
				{
					unk_0xF0059F27F7BB6680(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!unk_0xFA30DFD0084E92FE(uParam0->f_13, 29) && unk_0xFA30DFD0084E92FE(uParam0->f_13, 28))
		{
			if (!unk_0x36CEFBE9B745A58D(uParam0->f_17[iVar0]))
			{
				unk_0x69194304DB679A9C(uParam0->f_17[iVar0], 0, -1, 0);
			}
			if (iVar0 == 2)
			{
				unk_0x7CB6FD92BE491AD9(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (unk_0xFA30DFD0084E92FE(uParam0->f_13, 26))
	{
		bVar23 = false;
		if (!unk_0x724D816EA203A79E(uParam0->f_21))
		{
			iVar25 = 64;
			iVar25 |= 65536;
			iVar25 |= 2048;
			iVar25 |= 1;
			iVar25 |= 2;
			iVar25 |= 4;
			iVar25 |= 32;
			iVar25 |= 16;
			iVar25 |= 8;
			iVar24 = unk_0x39827CF9BEAB804C(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), 50f, 0, iVar25);
			if (unk_0xE59B7F5A03335350(iVar24, 0))
			{
				uParam0->f_21 = iVar24;
			}
		}
		if (unk_0xE59B7F5A03335350(uParam0->f_21, 0))
		{
			if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(uParam0->f_21, 1)) < 400f)
			{
				if (!unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
				{
					if (!unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0) || !bParam17)
					{
						if (func_60(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!unk_0x36CEFBE9B745A58D(uParam0->f_17[iVar0]))
								{
									unk_0xDBA0F5674ACCE43C(uParam0->f_17[iVar0], 1f);
									if (unk_0x9488E18994C5C83D(uParam0->f_17[iVar0], func_34()))
									{
										unk_0x57EB4CC8F1928A47(uParam0->f_17[iVar0]);
									}
									if (unk_0xF4FCC3C1048FF2AB(uParam0->f_17[iVar0], -1794415470) == 7 && !func_77(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!unk_0x2CDE18D6C89522AD(uParam0->f_17[iVar0]) && !unk_0x69871CAEBDD20966(uParam0->f_17[iVar0]))
										{
											unk_0x2E35C4FA5F0ED22F(uParam0->f_17[iVar0], 1);
											unk_0xD179FA0466FA4FE3(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
											unk_0x59B9712C1EAB0092(uParam0->f_17[iVar0], iVar0);
										}
									}
								}
								iVar0++;
							}
							return 1;
						}
						else
						{
							bVar23 = true;
						}
					}
					else
					{
						bVar23 = true;
					}
				}
				else
				{
					bVar23 = true;
				}
			}
			else
			{
				bVar23 = true;
			}
		}
		else
		{
			bVar23 = true;
		}
		if (bVar23)
		{
			unk_0x7CB6FD92BE491AD9(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!unk_0x36CEFBE9B745A58D(uParam0->f_17[iVar0]))
				{
					if (!unk_0x8F1FDD0A40DC834A(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						unk_0xA4E856A8CD53B8DF(uParam0->f_17[iVar0]);
					}
					if (!unk_0x9488E18994C5C83D(uParam0->f_17[iVar0], func_34()))
					{
						if (func_75(uParam0, uParam0->f_17[iVar0], uParam8, 1))
						{
							unk_0x75E3FA28CC7D5707(uParam0->f_17[iVar0], func_34());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!unk_0xFA30DFD0084E92FE(uParam0->f_13, 26))
	{
		if ((!func_74(uParam0) && unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA())) && !unk_0x724D816EA203A79E(iParam10))
		{
			iVar13 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if (unk_0xE59B7F5A03335350(iVar13, 0))
			{
				if (!unk_0xFA30DFD0084E92FE(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_57(uParam0, 2))
					{
						iVar26 = 0;
						iVar27 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							if (!unk_0x36CEFBE9B745A58D(uParam0->f_17[iVar0]))
							{
								iVar26++;
							}
							iVar0++;
						}
						iVar27 = unk_0x491B2241281A03B7(0, iVar26);
						if (!unk_0x36CEFBE9B745A58D(uParam0->f_17[iVar27]))
						{
							func_53(uParam0->f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_55(uParam0, "MORE_SEATS", 0);
						unk_0xF0059F27F7BB6680(&(uParam0->f_13), 13);
					}
				}
				bVar12 = true;
			}
		}
		else
		{
			bVar12 = false;
			unk_0x7CB6FD92BE491AD9(&(uParam0->f_13), 13);
			func_61("MORE_SEATS");
		}
		if (!unk_0x724D816EA203A79E(iParam10))
		{
			if ((!unk_0x36CEFBE9B745A58D(uParam0->f_17[0]) || !unk_0x36CEFBE9B745A58D(uParam0->f_17[1])) || !unk_0x36CEFBE9B745A58D(uParam0->f_17[2]))
			{
				if (!unk_0xFA30DFD0084E92FE(uParam0->f_13, 31))
				{
					if (unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()) && !func_57(uParam0, 2))
					{
						iVar13 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
						if (func_73(iVar13, uParam0))
						{
							func_55(uParam0, "CMN_VEHSUIT", 0);
							unk_0xF0059F27F7BB6680(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
				{
					unk_0x7CB6FD92BE491AD9(&(uParam0->f_13), 31);
					func_61("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0xE59B7F5A03335350(iParam10, 0))
		{
			if (unk_0x25EF720B1CAB1E23(unk_0xBC25C936A095B5BA(), iParam10))
			{
				if (unk_0x694514BD37EC4E94(0, 75))
				{
					unk_0xF0059F27F7BB6680(&(uParam0->f_13), 21);
				}
			}
			else if (unk_0xFA30DFD0084E92FE(uParam0->f_13, 21))
			{
				unk_0x7CB6FD92BE491AD9(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x724D816EA203A79E(uParam0->f_17[iVar0]))
			{
				if (!unk_0x36CEFBE9B745A58D(uParam0->f_17[iVar0]))
				{
					if (!unk_0x9488E18994C5C83D(uParam0->f_17[iVar0], func_34()))
					{
						unk_0x63ECE17EEAC84602(uParam0->f_17[iVar0], 1);
					}
					else
					{
						unk_0x63ECE17EEAC84602(uParam0->f_17[iVar0], 0);
					}
					if (unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
					{
						iVar13 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
						if (unk_0xE59B7F5A03335350(iVar13, 0))
						{
							if (unk_0x9488E18994C5C83D(uParam0->f_17[iVar0], func_34()))
							{
								if (!func_74(uParam0) && unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
								{
									if (!func_72(uParam0->f_17[iVar0]))
									{
										unk_0x57EB4CC8F1928A47(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar13 != iParam10 && !unk_0x1D403DFADBC2DE3C(iVar13, 0))
						{
							if (unk_0x25EF720B1CAB1E23(uParam0->f_17[iVar0], iVar13))
							{
								if (unk_0x149E9368A11035DE(iVar13) && !unk_0x58F9E0EA914AEF2C(iVar13))
								{
									Var28 = { unk_0x541C2AEF053615BC(iVar13, 1) };
									if (Var28.f_2 < -1f)
									{
										unk_0x932E201A82D2EDB8(uParam0->f_17[iVar0], iVar13, 64);
									}
								}
							}
						}
					}
					bVar11 = true;
					if (!unk_0x9488E18994C5C83D(uParam0->f_17[iVar0], func_34()))
					{
						if (unk_0xCBBE5AFE2CD2E9B6(uParam0->f_17[iVar0]))
						{
							iVar13 = unk_0x9FE9D386222EEE47(uParam0->f_17[iVar0], 0);
							if (!unk_0x1D403DFADBC2DE3C(iVar13, 0))
							{
								if (unk_0xE59B7F5A03335350(iParam10, 0))
								{
									if (iVar13 != iParam10)
									{
										if (!unk_0x25EF720B1CAB1E23(unk_0xBC25C936A095B5BA(), iVar13))
										{
											if (unk_0x8910237449BB6F79(iVar13) > 5f)
											{
												unk_0x932E201A82D2EDB8(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0x932E201A82D2EDB8(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
								else
								{
									if (unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
									{
										iVar31 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
									}
									if (unk_0xE59B7F5A03335350(iVar31, 0))
									{
										if (iVar13 != iVar31)
										{
											if (unk_0x8910237449BB6F79(iVar13) > 5f)
											{
												unk_0x932E201A82D2EDB8(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0x932E201A82D2EDB8(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
							}
						}
					}
					if (unk_0x9488E18994C5C83D(uParam0->f_17[iVar0], func_34()))
					{
						iVar32 = unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA());
						if (unk_0x724D816EA203A79E(iVar32))
						{
							if (func_60(iVar32, uParam0, 0))
							{
								if (func_71(iVar0, uParam0) || !unk_0xFA30DFD0084E92FE(uParam0->f_13, 27))
								{
									unk_0x59B9712C1EAB0092(uParam0->f_17[iVar0], iVar0);
									func_35(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0xF0059F27F7BB6680(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_71(iVar0, uParam0))
							{
								if (unk_0x6F79ECA8C83E4357(iVar32) == joaat("sentinel2"))
								{
									unk_0x59B9712C1EAB0092(uParam0->f_17[iVar0], 4);
								}
								else
								{
									unk_0x59B9712C1EAB0092(uParam0->f_17[iVar0], 2);
								}
								func_70(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0x9488E18994C5C83D(uParam0->f_17[iVar0], func_34()) && !func_69(uParam0->f_17[iVar0], iParam10)) && !func_68(uParam0->f_17[iVar0], iParam10))
					{
						if (func_75(uParam0, uParam0->f_17[iVar0], uParam8, bParam11))
						{
							if (!unk_0x9488E18994C5C83D(uParam0->f_17[iVar0], func_34()))
							{
								if (((!unk_0x2CDE18D6C89522AD(uParam0->f_17[iVar0]) && !unk_0x69871CAEBDD20966(uParam0->f_17[iVar0])) && !unk_0xBF3C2E756849EEF4(uParam0->f_17[iVar0])) && !unk_0x8F1FDD0A40DC834A(uParam0->f_17[iVar0]))
								{
									iVar14 = unk_0xF4FCC3C1048FF2AB(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7)
									{
										unk_0xA4E856A8CD53B8DF(uParam0->f_17[iVar0]);
									}
									unk_0x75E3FA28CC7D5707(uParam0->f_17[iVar0], func_34());
									bVar11 = false;
								}
							}
						}
						if (bVar11)
						{
							if (!unk_0x2DA8CA50A72528FB(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = unk_0x105601648511CC64();
								uParam0->f_1[iVar0] = func_42(uParam0->f_17[iVar0], 0, 0);
								unk_0x2E9308F22ABD4DF5(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_51(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0x2DA8CA50A72528FB(uParam0->f_1[iVar0]))
					{
						if (((func_48(uParam0->f_17[iVar0], 1) || func_69(uParam0->f_17[iVar0], iParam10)) || iParam12) || (unk_0xE59B7F5A03335350(iParam10, 0) && !unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iParam10, 0)))
						{
							if (unk_0x2DA8CA50A72528FB(uParam0->f_1[iVar0]))
							{
								unk_0x07B8ECB35A4ED3AC(&(uParam0->f_1[iVar0]));
								func_61(uVar15[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_51(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (unk_0xE59B7F5A03335350(iParam10, 0))
					{
						if (!unk_0x25EF720B1CAB1E23(uParam0->f_17[iVar0], iParam10))
						{
							if ((unk_0xE642C1AC73CE364E(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !unk_0xFA30DFD0084E92FE(uParam0->f_13, 11)) && !((bParam17 && unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0)) && !unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iParam10, 0)))
							{
								if (unk_0xCBBE5AFE2CD2E9B6(uParam0->f_17[iVar0]))
								{
									if (!unk_0x62F3A07C43FFB568(uParam0->f_17[iVar0], iParam10, 0))
									{
										if (!func_48(uParam0->f_17[iVar0], 1))
										{
											if (func_47(uParam0->f_17[iVar0]))
											{
												iVar14 = unk_0xF4FCC3C1048FF2AB(uParam0->f_17[iVar0], 451360105);
												if (iVar14 == 7)
												{
													unk_0xA3981DED4FC2E56E(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0x9488E18994C5C83D(uParam0->f_17[iVar0], func_34()))
									{
										if ((((!unk_0xBF3C2E756849EEF4(uParam0->f_17[iVar0]) && !unk_0x2CDE18D6C89522AD(uParam0->f_17[iVar0])) && !unk_0x69871CAEBDD20966(uParam0->f_17[iVar0])) && !unk_0x8F1FDD0A40DC834A(uParam0->f_17[iVar0])) && !unk_0x7544D2465B934445(iParam10))
										{
											unk_0x57EB4CC8F1928A47(uParam0->f_17[iVar0]);
										}
									}
									iVar14 = unk_0xF4FCC3C1048FF2AB(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7 && !func_77(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!unk_0xBF3C2E756849EEF4(uParam0->f_17[iVar0]) && !unk_0xBF3C2E756849EEF4(unk_0xBC25C936A095B5BA())) && !func_67(uParam0->f_17[iVar0], 2f)) && !unk_0x2CDE18D6C89522AD(uParam0->f_17[iVar0])) && !unk_0x69871CAEBDD20966(uParam0->f_17[iVar0])) && !unk_0x7544D2465B934445(iParam10))
										{
											unk_0x2E35C4FA5F0ED22F(uParam0->f_17[iVar0], 1);
											if (unk_0xFA30DFD0084E92FE(uParam0->f_13, 10))
											{
												unk_0xDBA0F5674ACCE43C(uParam0->f_17[iVar0], 1f);
											}
											unk_0xD179FA0466FA4FE3(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											unk_0x2FEB3A9B7C91A02D(uParam0->f_17[iVar0], 0);
										}
									}
									else if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = func_42(uParam0->f_17[iVar0], 0, 0);
										unk_0x2E9308F22ABD4DF5(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0x9488E18994C5C83D(uParam0->f_17[iVar0], func_34()))
							{
								if (func_75(uParam0, uParam0->f_17[iVar0], uParam8, bParam11))
								{
									if (!unk_0x2CDE18D6C89522AD(uParam0->f_17[iVar0]) && !unk_0x69871CAEBDD20966(uParam0->f_17[iVar0]))
									{
										iVar14 = unk_0xF4FCC3C1048FF2AB(uParam0->f_17[iVar0], -1794415470);
										if (iVar14 == 7)
										{
											unk_0xA4E856A8CD53B8DF(uParam0->f_17[iVar0]);
										}
										unk_0x2E35C4FA5F0ED22F(uParam0->f_17[iVar0], 0);
										unk_0x75E3FA28CC7D5707(uParam0->f_17[iVar0], func_34());
									}
								}
							}
						}
						else if (unk_0x25EF720B1CAB1E23(unk_0xBC25C936A095B5BA(), iParam10))
						{
							if (!unk_0x9488E18994C5C83D(uParam0->f_17[iVar0], func_34()))
							{
								if (!unk_0xFA30DFD0084E92FE(uParam0->f_13, 21))
								{
									unk_0x75E3FA28CC7D5707(uParam0->f_17[iVar0], func_34());
								}
							}
							else if (unk_0xFA30DFD0084E92FE(uParam0->f_13, 21))
							{
								unk_0x57EB4CC8F1928A47(uParam0->f_17[iVar0]);
								unk_0xF0059F27F7BB6680(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0x9488E18994C5C83D(uParam0->f_17[iVar0], func_34()) && !unk_0x7544D2465B934445(iParam10))
						{
							unk_0x57EB4CC8F1928A47(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (unk_0x2DA8CA50A72528FB(uParam0->f_1[iVar0]))
				{
					unk_0x07B8ECB35A4ED3AC(&(uParam0->f_1[iVar0]));
					func_61(uVar15[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x2DA8CA50A72528FB(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_57(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!unk_0x36CEFBE9B745A58D(uParam0->f_17[iVar0]))
						{
							if (func_72(uParam0->f_17[iVar0]) || unk_0xE642C1AC73CE364E(uParam0->f_17[iVar0], unk_0xBC25C936A095B5BA(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!unk_0x36CEFBE9B745A58D(uParam0->f_17[iVar0]))
					{
						if (!unk_0xE642C1AC73CE364E(uParam0->f_17[iVar0], unk_0xBC25C936A095B5BA(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0, 1, 0) && !func_72(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = unk_0x105601648511CC64();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!unk_0xFA30DFD0084E92FE(uParam0->f_13, 5))
							{
								func_55(uParam0, sParam7, 0);
								unk_0xF0059F27F7BB6680(&(uParam0->f_13), 5);
								uParam0->f_12 = iVar1;
							}
							else
							{
								uParam0->f_12 = iVar1;
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (iVar7[iVar0])
								{
									if (!func_66(iVar0, uParam0))
									{
										if (!unk_0xEAEFBBEC1AEA464B(uVar19[iVar0]))
										{
											if (!unk_0x3362CDE8460ED38B(uVar19[iVar0], ""))
											{
												func_64(uParam0, uVar15[iVar0], uVar19[iVar0], 0);
												func_63(iVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!func_66(iVar0, uParam0))
										{
											func_55(uParam0, uVar15[iVar0], 0);
											func_63(iVar0, uParam0);
											uParam0->f_12 = iVar1;
										}
									}
									else
									{
										uParam0->f_12 = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else
				{
					uParam0->f_12 = 0;
				}
			}
		}
		unk_0x7CB6FD92BE491AD9(&(uParam0->f_13), 10);
		if (iVar6 && !bVar12)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (unk_0x2DA8CA50A72528FB(uParam0->f_1[iVar0]))
				{
					unk_0x07B8ECB35A4ED3AC(&(uParam0->f_1[iVar0]));
					func_61(uVar15[iVar0]);
				}
				iVar0++;
			}
			func_61("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_63(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xF0059F27F7BB6680(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0xF0059F27F7BB6680(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0xF0059F27F7BB6680(&(uParam1->f_13), 16);
			break;
	}
}

void func_64(var uParam0, char* sParam1, var uParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!unk_0xEAEFBBEC1AEA464B(sParam1))
		{
			if (!unk_0x3362CDE8460ED38B(sParam1, ""))
			{
				func_65(sParam1, uParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x105601648511CC64();
}

void func_65(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0x3714DE83381EADC2(sParam0);
	unk_0xC9C304D0AABE1335(uParam1);
	unk_0x41D8F63F629E76BE(iParam2, 1);
}

int func_66(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xFA30DFD0084E92FE(uParam1->f_13, 14);
		
		case 1:
			return unk_0xFA30DFD0084E92FE(uParam1->f_13, 15);
		
		case 2:
			return unk_0xFA30DFD0084E92FE(uParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_67(int iParam0, float fParam1)
{
	int iVar0;
	
	if (unk_0x5237AF95232D78C5(iParam0, 0))
	{
		iVar0 = unk_0x9FE9D386222EEE47(iParam0, 0);
		if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
		{
			if (unk_0x8910237449BB6F79(iVar0) > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_68(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (!unk_0x9488E18994C5C83D(iParam0, func_34()))
		{
			iVar0 = unk_0x25480ACDBB6DB8F1(iParam0);
			if (unk_0xE59B7F5A03335350(iParam1, 0))
			{
				if (unk_0xE642C1AC73CE364E(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
				{
					if (iVar0 == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_69(int iParam0, int iParam1)
{
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (unk_0x724D816EA203A79E(iParam1))
		{
			if (unk_0xE59B7F5A03335350(iParam1, 0))
			{
				if (unk_0x25EF720B1CAB1E23(iParam0, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_70(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xF0059F27F7BB6680(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0xF0059F27F7BB6680(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0xF0059F27F7BB6680(&(uParam1->f_13), 19);
			break;
	}
}

int func_71(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xFA30DFD0084E92FE(uParam1->f_13, 17);
		
		case 1:
			return unk_0xFA30DFD0084E92FE(uParam1->f_13, 18);
		
		case 2:
			return unk_0xFA30DFD0084E92FE(uParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_72(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		iVar0 = unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA());
		if (unk_0xE59B7F5A03335350(iVar0, 0))
		{
			if (!unk_0x36CEFBE9B745A58D(iParam0))
			{
				iVar1 = unk_0xD20EBB97FE8799ED(iParam0);
				if (unk_0xE59B7F5A03335350(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iParam0, 20f, 20f, 20f, 0, 1, 0) && unk_0xE642C1AC73CE364E(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
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

int func_73(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if (unk_0x6F79ECA8C83E4357(iParam0) == joaat("bus") || unk_0x6F79ECA8C83E4357(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!unk_0x36CEFBE9B745A58D(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = unk_0x3187EF5798B5D209(iParam0, 0, 0);
			if (!unk_0x36CEFBE9B745A58D(iVar3))
			{
				if ((iVar3 == uParam1->f_17[0] || iVar3 == uParam1->f_17[1]) || iVar3 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar4 = unk_0x3187EF5798B5D209(iParam0, 1, 0);
			if (!unk_0x36CEFBE9B745A58D(iVar4))
			{
				if ((iVar4 == uParam1->f_17[0] || iVar4 == uParam1->f_17[1]) || iVar4 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar5 = unk_0x3187EF5798B5D209(iParam0, 2, 0);
			if (!unk_0x36CEFBE9B745A58D(iVar5))
			{
				if ((iVar5 == uParam1->f_17[0] || iVar5 == uParam1->f_17[1]) || iVar5 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_74(var uParam0)
{
	int iVar0;
	
	if (unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
	{
		iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		if (func_60(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_75(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x36CEFBE9B745A58D(iParam1))
	{
		if (unk_0xCBBE5AFE2CD2E9B6(iParam1))
		{
			iVar0 = unk_0x9FE9D386222EEE47(iParam1, 0);
			if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
			{
				if (unk_0xE59B7F5A03335350(iVar0, 0))
				{
					if (unk_0x25EF720B1CAB1E23(unk_0xBC25C936A095B5BA(), iVar0))
					{
						if (func_74(uParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iParam1, uParam2, uParam2, 3f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				iVar0 = unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA());
				if (unk_0x724D816EA203A79E(iVar0))
				{
					if (func_60(iVar0, uParam0, 0))
					{
						if (unk_0xE59B7F5A03335350(iVar0, 0))
						{
							if (func_76(iVar0))
							{
								return 1;
							}
						}
					}
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_76(int iParam0)
{
	float fVar0;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		fVar0 = unk_0x8910237449BB6F79(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_77(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (unk_0xE59B7F5A03335350(iParam1, 0))
		{
			iVar0 = unk_0xD20EBB97FE8799ED(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_78()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
	{
		iVar0 = unk_0x25480ACDBB6DB8F1(unk_0xBC25C936A095B5BA());
		if (unk_0xE59B7F5A03335350(iVar0, 0))
		{
			iVar1 = unk_0x3187EF5798B5D209(iVar0, 0, 0);
			if (!unk_0x36CEFBE9B745A58D(iVar1))
			{
				if (iVar1 != unk_0xBC25C936A095B5BA())
				{
					if (unk_0x5CAE759AE8219D20(iVar1))
					{
						if (!unk_0x1A6AA4082E241660(iVar1, unk_0xBC25C936A095B5BA()))
						{
							unk_0x56F2E1B5599188FA(iVar1, unk_0xBC25C936A095B5BA(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_79(var uParam0)
{
	int iVar0;
	
	if (!unk_0xFA30DFD0084E92FE(uParam0->f_13, 25))
	{
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 32, 0);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x724D816EA203A79E(uParam0->f_17[iVar0]))
			{
				if (!unk_0x36CEFBE9B745A58D(uParam0->f_17[iVar0]))
				{
					unk_0xC8FD3EBBB90E8D7F(uParam0->f_17[iVar0], 32, 0);
					unk_0xC8FD3EBBB90E8D7F(uParam0->f_17[iVar0], 305, 1);
					unk_0xC8FD3EBBB90E8D7F(uParam0->f_17[iVar0], 268, 1);
					unk_0x2FEB3A9B7C91A02D(uParam0->f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		unk_0xF0059F27F7BB6680(&(uParam0->f_13), 25);
	}
}

void func_80(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x724D816EA203A79E(uParam0->f_17[iVar0]))
		{
			if (!unk_0x36CEFBE9B745A58D(uParam0->f_17[iVar0]))
			{
				if (unk_0xCBBE5AFE2CD2E9B6(uParam0->f_17[iVar0]))
				{
					unk_0x8941EA87BBF38C6F(uParam0->f_17[iVar0], 0);
					unk_0xF0B851960DDCE3D8(uParam0->f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
			{
				unk_0x8941EA87BBF38C6F(unk_0xBC25C936A095B5BA(), 0);
				unk_0xF0B851960DDCE3D8(unk_0xBC25C936A095B5BA(), 0);
			}
		}
	}
}

var func_81()
{
	var uVar0;
	
	return uVar0;
}

Vector3 func_82()
{
	struct<3> Var0;
	
	return Var0;
}

void func_83(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_55977 = iParam0;
	if (!Global_55975)
	{
		Global_55975 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_68062)
		{
			if (Global_68063[iVar0 /*9*/] == iParam0)
			{
				Global_68063[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

int func_84(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	char* sVar1;
	
	if (iParam1 == 0)
	{
		sVar1 = unk_0x0B00D4CDDAB33814(iParam0, &uVar0);
		if (!unk_0xF1734B55490E9045(sVar1))
		{
			if (unk_0x56BEECB328B6D29D(sVar1) == unk_0x56BEECB328B6D29D("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_85(iParam0, iParam2);
	return 1;
}

void func_85(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_91(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x3187EF5798B5D209(iParam0, -1, 0);
		if (!unk_0x724D816EA203A79E(iVar0))
		{
			iVar0 = unk_0xE293D7F16E1815E8(iParam0, -1);
		}
		if (unk_0x724D816EA203A79E(iVar0) && !unk_0x36CEFBE9B745A58D(iVar0))
		{
			if (unk_0x6F79ECA8C83E4357(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x6F79ECA8C83E4357(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x6F79ECA8C83E4357(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_105220.f_2354.f_539.f_4301;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x6F79ECA8C83E4357(iParam0) == Global_105220.f_32546.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xF1734B55490E9045(&(Global_105220.f_32546.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x3362CDE8460ED38B(unk_0x2232934AD664DD49(iParam0), &(Global_105220.f_32546.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_105220.f_32546.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_105220.f_32546.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x6F79ECA8C83E4357(iParam0) == Global_105220.f_32546.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xF1734B55490E9045(&(Global_105220.f_32546.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x3362CDE8460ED38B(unk_0x2232934AD664DD49(iParam0), &(Global_105220.f_32546.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_105220.f_32546.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_105220.f_32546.f_5590 = iParam1;
	Global_70705 = iParam0;
	Global_105220.f_32546.f_5588 = 1;
	func_86(iParam0, &(Global_105220.f_32546.f_5510));
}

void func_86(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		func_90(uParam1);
		uParam1->f_66 = unk_0x6F79ECA8C83E4357(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x2232934AD664DD49(iParam0), 16);
		*uParam1 = unk_0x89FC8F09D6647DEC(iParam0);
		unk_0x87F182D2DA225F0D(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x375E42DA279E7FED(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x5F73107BDF663316(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x2629793241883F74(iParam0);
		uParam1->f_67 = unk_0x0FF608FD384AF8FA(iParam0);
		uParam1->f_69 = unk_0xC2587DF549B15BB6(iParam0);
		uParam1->f_70 = unk_0xA3E58143095D5828(iParam0);
		unk_0x715BE0BE8D01B21C(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x2774857472EBCE0F(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0xFF7612EE8C5F1E19(iParam0, 2))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 28);
		}
		if (unk_0xFF7612EE8C5F1E19(iParam0, 3))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 29);
		}
		if (unk_0xFF7612EE8C5F1E19(iParam0, 0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 30);
		}
		if (unk_0xFF7612EE8C5F1E19(iParam0, 1))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_89(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x6DB86B1ADD81CED4(iParam0, 0))
		{
			uParam1->f_68 = unk_0xAA1A0B747CDFC807(iParam0);
		}
		if (unk_0xA19D269B4B5A1532(uParam1->f_66))
		{
			if (unk_0x9741AF87EDFF311C(iParam0))
			{
				switch (unk_0xBCD69B76B3E60BF5(iParam0))
				{
					case 3:
					case 0:
						unk_0x7CB6FD92BE491AD9(&(uParam1->f_77), 23);
						unk_0xF0059F27F7BB6680(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0x7CB6FD92BE491AD9(&(uParam1->f_77), 23);
						unk_0x7CB6FD92BE491AD9(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0xF0059F27F7BB6680(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xB830044A99FABAAF(iParam0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 9);
		}
		if (unk_0xA37E9F4E2795A88A(iParam0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 10);
		}
		if (unk_0xFD22243DAFAFE349(iParam0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 13);
			unk_0x103992E73728DA90(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x1EE004ED283345A0(iParam0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 12);
		}
		func_88(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xFC8A228C62614C5C(iParam0, iVar0 + 1))
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_77), func_87(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x97413DC2A72A11B3(iParam0, 0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_77), 11);
		}
		if (unk_0x3C03CFD5DD1E2D97(iParam0, "IgnoredByQuickSave") && unk_0x75236BEC3BDDE069(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_77), 27);
		}
	}
}

int func_87(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_88(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xE59B7F5A03335350(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xA6BE0954FC6BAA16(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x0ABA73B9B2E2F838(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x3EB14CBD49DA0017(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xC8B123E980199685(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xC8B123E980199685(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_89(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_90(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_91(int iParam0)
{
	if ((((((((((!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0)) || func_107(iParam0, 0, 0)) || func_107(iParam0, 1, 0)) || func_107(iParam0, 2, 0)) || func_106(iParam0) != 145) || func_105(iParam0)) || func_104(iParam0)) || func_103(iParam0)) || func_102(iParam0)) || !func_92(unk_0x6F79ECA8C83E4357(iParam0)))
	{
		if (func_104(iParam0))
		{
		}
		if (func_104(iParam0))
		{
		}
		if (func_107(iParam0, 0, 0))
		{
		}
		if (func_107(iParam0, 1, 0))
		{
		}
		if (func_107(iParam0, 2, 0))
		{
		}
		if (func_106(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_92(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_93(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0xE7B3A320107C1379(iParam0) || unk_0xA19D269B4B5A1532(iParam0)) || unk_0x8C1A6E7D5F410F4A(iParam0)) || unk_0xFF2234981505F7F4(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_93(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x6067F058A4B0729F(iParam0))
	{
		return 0;
	}
	if ((((((iParam0 == joaat("dominator2") && !unk_0x7AF0088ABFA713B6()) || (iParam0 == joaat("buffalo3") && !unk_0x7AF0088ABFA713B6())) || (iParam0 == joaat("gauntlet2") && !unk_0x7AF0088ABFA713B6())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x7AF0088ABFA713B6())) || iParam0 == joaat("blista3"))
	{
		if (!func_101())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xDF84CF7530FA6525())
		{
			if (unk_0x62A638D88F7B7D88(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xD90F58A58682ED2F(Var1.f_0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_100() && !func_99()) && !func_98()) && !func_97()) && !func_101())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xF49912B78E2591B6() || unk_0x8ACB0C3FACC09467()) || unk_0xF7E138CFA19B55E7())
		{
		}
		else if (!func_98())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_96(iParam0))
		{
			return 0;
		}
	}
	if (!func_94(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_94(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_95())
	{
		return 1;
	}
	unk_0xC4F4FCDFF2D3ABE9(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0xD541643C038E7321(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_95()
{
	if (unk_0x8ACB0C3FACC09467())
	{
		return unk_0xC9D803F7D7E10861();
	}
	return 0;
}

int func_96(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2498869)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0xB99C193A32DE341D();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5990 && !Global_262145.f_12299) && iVar1 < Global_262145.f_12300)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_13597 && iVar1 < Global_262145.f_13609)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_13593 && iVar1 < Global_262145.f_13605)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_13594 && iVar1 < Global_262145.f_13606)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_13595 && iVar1 < Global_262145.f_13607)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_13596 && iVar1 < Global_262145.f_13608)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_13598 && iVar1 < Global_262145.f_13610)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_13599 && iVar1 < Global_262145.f_13602)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_13600 && iVar1 < Global_262145.f_13603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_13601 && iVar1 < Global_262145.f_13604)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16228 && iVar1 < Global_262145.f_16193)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16223 && iVar1 < Global_262145.f_16188)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16227 && iVar1 < Global_262145.f_16192)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16226 && iVar1 < Global_262145.f_16191)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16220 && iVar1 < Global_262145.f_16185)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16221 && iVar1 < Global_262145.f_16186)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16224 && iVar1 < Global_262145.f_16189)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16225 && iVar1 < Global_262145.f_16190)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16222 && iVar1 < Global_262145.f_16187)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16230 && iVar1 < Global_262145.f_16195)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16231 && iVar1 < Global_262145.f_16196)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16219 && iVar1 < Global_262145.f_16184)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16218 && iVar1 < Global_262145.f_16183)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16217 && iVar1 < Global_262145.f_16182)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16229 && iVar1 < Global_262145.f_16194)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16232 && iVar1 < Global_262145.f_16197)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16233 && iVar1 < Global_262145.f_16198)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16234 && iVar1 < Global_262145.f_16199)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16235 && iVar1 < Global_262145.f_16200)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16380 && iVar1 < Global_262145.f_16402)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16381 && iVar1 < Global_262145.f_16403)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16382 && iVar1 < Global_262145.f_16404)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16383 && iVar1 < Global_262145.f_16405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16384 && iVar1 < Global_262145.f_16406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_16385 && iVar1 < Global_262145.f_16407)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_16387 && iVar1 < Global_262145.f_16408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_16388 && iVar1 < Global_262145.f_16409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_16389 && iVar1 < Global_262145.f_16410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_16390 && iVar1 < Global_262145.f_16411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_16391 && iVar1 < Global_262145.f_16412)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_16392 && iVar1 < Global_262145.f_16413)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_16393 && iVar1 < Global_262145.f_16414)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_16399 && iVar1 < Global_262145.f_16421)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_16396 && iVar1 < Global_262145.f_16417)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_16397 && iVar1 < Global_262145.f_16418)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_16398 && iVar1 < Global_262145.f_16419)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_16386 && iVar1 < Global_262145.f_16420)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_16400 && iVar1 < Global_262145.f_16422)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_16394 && iVar1 < Global_262145.f_16415)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_16395 && iVar1 < Global_262145.f_16416)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_16401 && iVar1 < Global_262145.f_16423)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18029 && iVar1 < Global_262145.f_18127)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18030 && iVar1 < Global_262145.f_18128)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18031 && iVar1 < Global_262145.f_18129)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18032 && iVar1 < Global_262145.f_18130)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18033 && iVar1 < Global_262145.f_18131)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18034 && iVar1 < Global_262145.f_18132)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18035 && iVar1 < Global_262145.f_18133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18036 && iVar1 < Global_262145.f_18134)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18037 && iVar1 < Global_262145.f_18135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18038 && iVar1 < Global_262145.f_18136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18039 && iVar1 < Global_262145.f_18137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18040 && iVar1 < Global_262145.f_18138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18041 && iVar1 < Global_262145.f_18139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18042 && iVar1 < Global_262145.f_18140)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18043 && iVar1 < Global_262145.f_18141)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18044 && iVar1 < Global_262145.f_18142)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18045 && iVar1 < Global_262145.f_18143)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18046 && iVar1 < Global_262145.f_18144)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18047 && iVar1 < Global_262145.f_18145)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18048 && iVar1 < Global_262145.f_18146)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18049 && iVar1 < Global_262145.f_18147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18050 && iVar1 < Global_262145.f_18148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18051 && iVar1 < Global_262145.f_18149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18052 && iVar1 < Global_262145.f_18150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18053 && iVar1 < Global_262145.f_18151)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_19110 && iVar1 < Global_262145.f_19106)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_19111 && iVar1 < Global_262145.f_19107)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_19112 && iVar1 < Global_262145.f_19108)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_19113 && iVar1 < Global_262145.f_19109)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_19989 && iVar1 < Global_262145.f_19997)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_19990 && iVar1 < Global_262145.f_19998)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_19991 && iVar1 < Global_262145.f_19999)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_19992 && iVar1 < Global_262145.f_20000)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_19993 && iVar1 < Global_262145.f_20001)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_19994 && iVar1 < Global_262145.f_20002)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_20766 && iVar1 < Global_262145.f_20786)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_20778 && iVar1 < Global_262145.f_20798)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_20769 && iVar1 < Global_262145.f_20789)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_20779 && iVar1 < Global_262145.f_20799)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_20767 && iVar1 < Global_262145.f_20787)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_20783 && iVar1 < Global_262145.f_20803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_20781 && iVar1 < Global_262145.f_20801)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_20782 && iVar1 < Global_262145.f_20802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_20777 && iVar1 < Global_262145.f_20797)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_20784 && iVar1 < Global_262145.f_20804)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_20780 && iVar1 < Global_262145.f_20800)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_20776 && iVar1 < Global_262145.f_20796)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_20768 && iVar1 < Global_262145.f_20788)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_20770 && iVar1 < Global_262145.f_20790)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_20771 && iVar1 < Global_262145.f_20791)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_20772 && iVar1 < Global_262145.f_20792)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_20773 && iVar1 < Global_262145.f_20793)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_20774 && iVar1 < Global_262145.f_20794)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_20775 && iVar1 < Global_262145.f_20795)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_21727 && iVar1 < Global_262145.f_21755)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_21728 && iVar1 < Global_262145.f_21756)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_21729 && iVar1 < Global_262145.f_21757)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_21730 && iVar1 < Global_262145.f_21758)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_21731 && iVar1 < Global_262145.f_21759)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_21732 && iVar1 < Global_262145.f_21760)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_21733 && iVar1 < Global_262145.f_21761)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_21734 && iVar1 < Global_262145.f_21762)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_21735 && iVar1 < Global_262145.f_21763)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_21736 && iVar1 < Global_262145.f_21764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_21737 && iVar1 < Global_262145.f_21765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_21738 && iVar1 < Global_262145.f_21766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_21739 && iVar1 < Global_262145.f_21767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_21740 && iVar1 < Global_262145.f_21768)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_21741 && iVar1 < Global_262145.f_21769)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_21742 && iVar1 < Global_262145.f_21770)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_21743 && iVar1 < Global_262145.f_21771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_21744 && iVar1 < Global_262145.f_21772)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_21745 && iVar1 < Global_262145.f_21773)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_21746 && iVar1 < Global_262145.f_21774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_21747 && iVar1 < Global_262145.f_21775)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_21748 && iVar1 < Global_262145.f_21776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_21749 && iVar1 < Global_262145.f_21777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_21750 && iVar1 < Global_262145.f_21778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_21751 && iVar1 < Global_262145.f_21779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_21752 && iVar1 < Global_262145.f_21780)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_21753 && iVar1 < Global_262145.f_21781)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_21754 && iVar1 < Global_262145.f_21782)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_22907 && iVar1 < Global_262145.f_22923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_22908 && iVar1 < Global_262145.f_22924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_22912 && iVar1 < Global_262145.f_22928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_22915 && iVar1 < Global_262145.f_22931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_22920 && iVar1 < Global_262145.f_22936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_22914 && iVar1 < Global_262145.f_22930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_22906 && iVar1 < Global_262145.f_22922)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_22913 && iVar1 < Global_262145.f_22929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_22919 && iVar1 < Global_262145.f_22935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_22918 && iVar1 < Global_262145.f_22934)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_22909 && iVar1 < Global_262145.f_22925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_22911 && iVar1 < Global_262145.f_22927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_22921 && iVar1 < Global_262145.f_22937)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_22917 && iVar1 < Global_262145.f_22933)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_22910 && iVar1 < Global_262145.f_22926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_22916 && iVar1 < Global_262145.f_22932)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_22997 && iVar1 < Global_262145.f_22984)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_22998 && iVar1 < Global_262145.f_22985)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_23003 && iVar1 < Global_262145.f_22990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_23002 && iVar1 < Global_262145.f_22989)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_23000 && iVar1 < Global_262145.f_22987)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_23006 && iVar1 < Global_262145.f_22993)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_23008 && iVar1 < Global_262145.f_22995)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_23009 && iVar1 < Global_262145.f_22996)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_23007 && iVar1 < Global_262145.f_22994)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_22999 && iVar1 < Global_262145.f_22986)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_23001 && iVar1 < Global_262145.f_22988)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_23005 && iVar1 < Global_262145.f_22992)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_23004 && iVar1 < Global_262145.f_22991)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_97()
{
	return 0;
}

int func_98()
{
	return 1;
}

int func_99()
{
	return 1;
}

int func_100()
{
	if (unk_0x7B2F21BFE86AEB61(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_101()
{
	var uVar0;
	
	if (unk_0x7E3A4CFA5545546C())
	{
		if (unk_0x6EFCE916927099A8())
		{
			if (unk_0x0D618527B2B8660A())
			{
				unk_0x6CB99B97664C3727(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xF0059F27F7BB6680(&uVar0, 2);
				unk_0xF0059F27F7BB6680(&uVar0, 4);
				unk_0xF0059F27F7BB6680(&uVar0, 6);
				unk_0xF0059F27F7BB6680(&Global_25, 2);
				unk_0xF0059F27F7BB6680(&Global_25, 4);
				unk_0xF0059F27F7BB6680(&Global_25, 6);
				unk_0x3A57956BCE003880(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x7A4B76D06AAF8132())
				{
					uVar0 = unk_0x2DC92D46FC48E795(866);
					unk_0xF0059F27F7BB6680(&uVar0, 0);
					unk_0x973C4C95367920C1(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_143856 == 2)
	{
		return 1;
	}
	else if (Global_143856 == 3)
	{
		return 0;
	}
	if (unk_0x7A4B76D06AAF8132())
	{
		if (unk_0xFA30DFD0084E92FE(unk_0x2DC92D46FC48E795(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_102(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x6F79ECA8C83E4357(iParam0);
	sVar1 = unk_0x2232934AD664DD49(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x3362CDE8460ED38B(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_93(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_103(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x724D816EA203A79E(Global_90461[iVar0]))
		{
			if (Global_90461[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_104(int iParam0)
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(iParam0) && unk_0xE59B7F5A03335350(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x724D816EA203A79E(Global_90431[iVar0]) && unk_0xE59B7F5A03335350(Global_90431[iVar0], 0))
			{
				if (Global_90431[iVar0] == iParam0 && unk_0x6F79ECA8C83E4357(Global_90431[iVar0]) == unk_0x6F79ECA8C83E4357(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_105(int iParam0)
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(Global_69800.f_484[24]))
	{
		if (iParam0 == Global_69800.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x724D816EA203A79E(Global_69800.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_69800.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_106(int iParam0)
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 145;
	}
	if (!unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x724D816EA203A79E(Global_90431[iVar0]))
		{
			if (Global_90431[iVar0] == iParam0)
			{
				return Global_90441[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_107(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_108(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xFA30DFD0084E92FE(Global_105220.f_7200[iVar9], 0))
		{
			if (unk_0x9945EE67AEC122F7(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_108(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_109()
{
	int iVar0;
	
	switch (iLocal_1481)
	{
		case 0:
			if (unk_0x17FAADF9916EF741())
			{
				unk_0x829FA4611BD56B44(800);
			}
			iVar0 = 0;
			while (iVar0 <= 8)
			{
				if (func_31(Local_111[iVar0 /*14*/]))
				{
					if (!iLocal_450)
					{
						func_28(&uLocal_238, 1, Local_111[iVar0 /*14*/], "ArmyPed", 0, 1);
						func_141();
						unk_0x53D8178763EDCE60(Local_111[iVar0 /*14*/], "GENERIC_WAR_CRY", func_54(3), 1);
						iLocal_450 = 1;
					}
				}
				iVar0++;
			}
			unk_0xA902E18EDF6FA0C8(5, joaat("player"), iLocal_493);
			unk_0x1D1C393C7689E5A6(3f, 5f, 4);
			iLocal_1481++;
			break;
		
		case 1:
			if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_94[0 /*2*/], 0))
			{
				unk_0x1D1C393C7689E5A6(3f, 5f, 4);
				func_112(0f, 0f, 0f, -1f, 0, 145);
				if (unk_0x2DA8CA50A72528FB(Local_94[0 /*2*/].f_1))
				{
					unk_0x07B8ECB35A4ED3AC(&(Local_94[0 /*2*/].f_1));
				}
				func_111(2);
				iLocal_1481 = 0;
			}
			else if (func_31(Local_94[0 /*2*/]) && !unk_0x2DA8CA50A72528FB(Local_94[0 /*2*/].f_1))
			{
				Local_94[0 /*2*/].f_1 = func_110(Local_94[0 /*2*/], 0, 0);
			}
			break;
	}
}

int func_110(int iParam0, bool bParam1, bool bParam2)
{
	return func_43(iParam0, !bParam1, bParam2);
}

int func_111(int iParam0)
{
	if (iLocal_1479 == 0)
	{
		iLocal_1482 = iParam0;
		iLocal_1479 = 1;
		return 1;
	}
	return 0;
}

void func_112(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	struct<3> Var0;
	var uVar3;
	
	if (unk_0x724D816EA203A79E(Global_95814.f_4))
	{
		if (unk_0xE59B7F5A03335350(Global_95814.f_4, 0))
		{
			if (func_140(24) != Global_95814.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_137(unk_0x541C2AEF053615BC(Global_95814.f_4, 1), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				func_113(Global_95814.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}

void func_113(int iParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (unk_0x724D816EA203A79E(iParam0) && unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0x724D816EA203A79E(Global_69800.f_484[25]) && unk_0xE59B7F5A03335350(Global_69800.f_484[25], 0))
			{
				if (Global_69800.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0x10A01B0B02B273EF(iParam0) || unk_0x6F79ECA8C83E4357(iParam0) == joaat("bus")) || unk_0x6F79ECA8C83E4357(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_136(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_86(iParam0, &Var0);
		if (func_135(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0x541C2AEF053615BC(iParam0, 1) };
			uParam4 = unk_0x349C94FFF43E2979(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993()) != joaat("vehicle_gen_controller"))
			{
				Global_70788 = unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993());
			}
		}
		func_129(iParam5, &Var0, Param1, uParam4, func_106(iParam0));
		func_114(iParam5, iParam0, 0);
	}
}

void func_114(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_126(&(Global_69800.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xFA30DFD0084E92FE(Global_69800.f_555[0 /*21*/].f_9, 12) && !unk_0xFA30DFD0084E92FE(Global_69800.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_69800.f_555[0 /*21*/].f_4 != unk_0x6F79ECA8C83E4357(iParam1))
		{
			return;
		}
	}
	if (Global_70707 != -1 && Global_70707 != iParam0)
	{
		return;
	}
	if (unk_0x724D816EA203A79E(iParam1))
	{
		if (unk_0xE59B7F5A03335350(iParam1, 0))
		{
			if (!unk_0x5CAE759AE8219D20(iParam1))
			{
				unk_0x77815D3407C6700D(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_105220.f_32546.f_4801 = func_115();
			}
			if (iParam1 != Global_69800.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_140(iParam0);
					if ((unk_0x724D816EA203A79E(iVar0) && unk_0xE59B7F5A03335350(iVar0, 0)) && iParam1 != iVar0)
					{
						func_85(iVar0, 145);
					}
				}
				Global_70706 = iParam1;
				Global_70707 = iParam0;
				Global_70708 = iParam2;
			}
		}
	}
}

var func_115()
{
	var uVar0;
	
	func_125(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_124(&uVar0, unk_0x7E09057438B9D216());
	func_123(&uVar0, unk_0x6E06C0DB9B43570D());
	func_118(&uVar0, unk_0xBE14F159908E4EE5());
	func_117(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_116(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

void func_116(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_117(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_118(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_122(*uParam0);
	iVar1 = func_120(*uParam0);
	if (iParam1 < 1 || iParam1 > func_119(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_119(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_120(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_121(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_121(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_122(var uParam0)
{
	return uParam0 & 15;
}

void func_123(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_124(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_125(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_126(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_127(0, 1);
			uParam0->f_12 = 0;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_127(0, 1);
			uParam0->f_12 = 0;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_127(1, 1);
			uParam0->f_12 = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_127(1, 2);
			uParam0->f_12 = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 19);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_127(1, 1);
			uParam0->f_12 = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_127(1, 2);
			uParam0->f_12 = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 19);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_127(2, 1);
			uParam0->f_12 = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_127(2, 1);
			uParam0->f_12 = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_127(2, 1);
			uParam0->f_12 = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 22);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 22);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 22);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 27);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 27);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 27);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 11);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 11);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 9);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 9);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 2);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 30);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 2);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 22);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_101())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 2);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 1);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_101())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 2);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 1);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 30);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 30);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xFA30DFD0084E92FE(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_105220.f_32546.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_135(Global_105220.f_32546.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_105220.f_32546.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_105220.f_32546.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_105220.f_32546.f_1934[uParam0->f_14];
		}
	}
	if (unk_0xFA30DFD0084E92FE(uParam0->f_9, 19))
	{
		if (!func_135(Global_105220.f_2354.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_105220.f_2354.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_105220.f_2354.f_539.f_3589[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xFA30DFD0084E92FE(uParam0->f_9, 20))
	{
		if (!func_135(Global_105220.f_2354.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_105220.f_2354.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_105220.f_2354.f_539.f_3589[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_127(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_21(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_128(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_128(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_105220.f_9056.f_99.f_58[128] && !Global_105220.f_9056.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_105220.f_9056.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_105220.f_9056.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

void func_129(int iParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6)
{
	if (func_126(&(Global_69800.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xFA30DFD0084E92FE(Global_69800.f_555[0 /*21*/].f_9, 10))
		{
			func_134(iParam0);
			func_133(uParam1, &(Global_105220.f_32546.f_69[Global_69800.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0xFA30DFD0084E92FE(Global_69800.f_555[0 /*21*/].f_9, 11))
			{
				Global_105220.f_32546.f_1864[Global_69800.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_105220.f_32546.f_1934[Global_69800.f_555[0 /*21*/].f_14] = uParam5;
			}
			else
			{
				Global_105220.f_32546.f_1864[Global_69800.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_105220.f_32546.f_1934[Global_69800.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_105220.f_32546.f_1958[Global_69800.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_130(iParam0, 1);
		}
	}
}

void func_130(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_132(iParam0, 0))
		{
			func_131(iParam0, 1, 0);
			func_131(iParam0, 2, 0);
			func_131(iParam0, 3, 0);
			func_131(iParam0, 4, 0);
			func_131(iParam0, 0, 1);
			Global_69800[iParam0] = 1;
		}
	}
	else
	{
		func_131(iParam0, 0, 0);
	}
}

void func_131(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xF0059F27F7BB6680(&(Global_105220.f_32546[iParam0]), iParam1);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_105220.f_32546[iParam0]), iParam1);
	}
}

bool func_132(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_105220.f_32546[iParam0], iParam1);
}

void func_133(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

void func_134(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_126(&(Global_69800.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x724D816EA203A79E(Global_69800.f_139[iParam0]))
		{
			unk_0x77815D3407C6700D(Global_69800.f_139[iParam0], 1, 1);
			unk_0x1E7A09C1710FB071(&(Global_69800.f_139[iParam0]));
			Global_69800.f_139[iParam0] = 0;
		}
		if (unk_0xFA30DFD0084E92FE(Global_69800.f_555[0 /*21*/].f_9, 13))
		{
			func_130(iParam0, 0);
		}
	}
}

bool func_135(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_136(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_134(iParam0);
	func_130(iParam0, 0);
}

int func_137(struct<3> Param0, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	
	iVar0 = func_138(Param0, iParam3, 1);
	switch (iVar0)
	{
		case 0:
			*uParam4 = { -827.351f, 157.785f, 68.2143f };
			*uParam5 = 85.1509f;
			return 1;
			break;
		
		case 1:
		case 2:
			*uParam4 = { 1992.523f, 3813.916f, 31.1008f };
			*uParam5 = 122.1498f;
			return 1;
			break;
		
		case 3:
			*uParam4 = { -1184.258f, -1496.556f, 3.3895f };
			*uParam5 = 303.2098f;
			return 1;
			break;
		
		case 4:
			*uParam4 = { 118.1067f, -1325.906f, 28.3706f };
			*uParam5 = 123.5016f;
			return 1;
			break;
		
		case 5:
			*uParam4 = { -18.118f, -1455.126f, 29.5004f };
			*uParam5 = 273.2822f;
			return 1;
			break;
		
		case 6:
			*uParam4 = { 1.5947f, 543.4017f, 173.4644f };
			*uParam5 = 310.7556f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_138(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_88138[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_88138[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_139(iVar0) || iParam4 == 0)
				{
					fVar1 = unk_0xF0F2FC9DE291567F(Param0, Global_88138[iVar0 /*10*/].f_3, 1);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_139(int iParam0)
{
	return unk_0xFA30DFD0084E92FE(Global_105220.f_7200[iParam0], 0);
}

int func_140(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_69800.f_139[iParam0];
}

void func_141()
{
	Global_14666 = 0;
	func_142();
}

void func_142()
{
	unk_0x5C7DC611411E2CF9();
	Global_16811 = 0;
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(0);
		Global_15800 = 6;
	}
}

void func_143()
{
	switch (iLocal_1481)
	{
		case 0:
			if (unk_0x17FAADF9916EF741())
			{
				unk_0x829FA4611BD56B44(800);
			}
			while (Global_92955 == 12)
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (func_31(Local_94[0 /*2*/]) && !unk_0x2DA8CA50A72528FB(Local_94[0 /*2*/].f_1))
			{
				if (unk_0x6D01571F8E6286B4(Local_94[0 /*2*/]) != 0)
				{
					Local_94[0 /*2*/].f_1 = unk_0x6D01571F8E6286B4(Local_94[0 /*2*/]);
				}
				else
				{
					Local_94[0 /*2*/].f_1 = func_110(Local_94[0 /*2*/], 0, 0);
				}
			}
			unk_0x1D1C393C7689E5A6(5f, 5f, 4);
			func_30("RHP_GOODS", 7500, 1);
			unk_0x3857DADBD6EC8A54("RHP1_START");
			func_144("RHP_HELP", -1);
			iLocal_434 = 0;
			iLocal_1481++;
			break;
		
		case 1:
			if (bLocal_456)
			{
				iLocal_450 = 0;
				func_111(1);
				iLocal_1481 = 0;
			}
			break;
	}
}

void func_144(char* sParam0, int iParam1)
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, 1, iParam1);
}

void func_145()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iLocal_447 = 0;
	while (iLocal_447 <= (3 - 1))
	{
		if (unk_0x724D816EA203A79E(Local_101[iLocal_447 /*2*/]))
		{
			if (unk_0x36CEFBE9B745A58D(Local_101[iLocal_447 /*2*/]))
			{
				func_198(&(Local_101[iLocal_447 /*2*/]), 1, 0, 1);
			}
		}
		iLocal_447++;
	}
	iLocal_447 = 0;
	while (iLocal_447 <= (3 - 1))
	{
		if (unk_0x724D816EA203A79E(Local_94[iLocal_447 /*2*/]))
		{
			if (!unk_0xE59B7F5A03335350(Local_94[iLocal_447 /*2*/], 0))
			{
				if (iLocal_447 == 0)
				{
					func_187(3);
				}
				func_186(&(Local_94[iLocal_447 /*2*/]));
			}
			else if (Local_94[iLocal_447 /*2*/] == Local_94[0 /*2*/])
			{
				if (func_185(&(Local_94[0 /*2*/])))
				{
					func_187(4);
					func_186(&(Local_94[0 /*2*/]));
				}
			}
		}
		iLocal_447++;
	}
	iLocal_447 = 0;
	while (iLocal_447 <= (9 - 1))
	{
		if (unk_0x724D816EA203A79E(Local_111[iLocal_447 /*14*/]))
		{
			if (bLocal_456)
			{
				func_184(Local_111[iLocal_447 /*14*/], &(Local_111[iLocal_447 /*14*/].f_2), -1, 0, 0, 0, 400f, 0, -1, -1, 1);
			}
			if (unk_0x36CEFBE9B745A58D(Local_111[iLocal_447 /*14*/]))
			{
				if (Local_111[iLocal_447 /*14*/].f_10 == 0)
				{
					func_183(719, 1, 0);
					Local_111[iLocal_447 /*14*/].f_10 = 1;
				}
				unk_0x02537C8C1BEEB477(&(Local_111[iLocal_447 /*14*/]));
			}
		}
		if ((((func_31(Local_111[iLocal_447 /*14*/]) && (unk_0x105601648511CC64() - iLocal_455) > 8000) && bLocal_456) && !unk_0x9986AD62CA3DE747(Local_111[iLocal_447 /*14*/])) && !unk_0x5237AF95232D78C5(Local_111[iLocal_447 /*14*/], 0))
		{
			if (unk_0x8D66276473ABD7CC(Local_111[iLocal_447 /*14*/]) < 110)
			{
				unk_0x53D8178763EDCE60(Local_111[iLocal_447 /*14*/], "DYING_MOAN", func_54(3), 1);
				iLocal_455 = unk_0x105601648511CC64();
			}
			else if (unk_0x8D66276473ABD7CC(Local_111[iLocal_447 /*14*/]) < 140)
			{
				unk_0x53D8178763EDCE60(Local_111[iLocal_447 /*14*/], "DYING_HELP", func_54(3), 1);
				iLocal_455 = unk_0x105601648511CC64();
			}
			else if (unk_0xA2CA746F2255F6B7(Local_111[iLocal_447 /*14*/]))
			{
				unk_0x53D8178763EDCE60(Local_111[iLocal_447 /*14*/], "TAKE_COVER", func_54(3), 1);
				iLocal_455 = unk_0x105601648511CC64();
			}
			else if (unk_0x226A1FD8C273ADE9(Local_111[iLocal_447 /*14*/]))
			{
				unk_0x53D8178763EDCE60(Local_111[iLocal_447 /*14*/], "COVER_ME", func_54(3), 1);
				iLocal_455 = unk_0x105601648511CC64();
			}
			else if (unk_0x32E373675659FDB0(Local_111[iLocal_447 /*14*/]))
			{
				unk_0x53D8178763EDCE60(Local_111[iLocal_447 /*14*/], "COVER_YOU", func_54(3), 1);
				iLocal_455 = unk_0x105601648511CC64();
			}
			else if (!unk_0x0D14122360FAC5C8(Local_111[iLocal_447 /*14*/]))
			{
				unk_0x53D8178763EDCE60(Local_111[iLocal_447 /*14*/], "RELOADING", func_54(3), 1);
				iLocal_455 = unk_0x105601648511CC64();
			}
			else if (func_182(Local_111[iLocal_447 /*14*/], -828834893, 1) || func_182(Local_111[iLocal_447 /*14*/], 451360105, 1))
			{
				unk_0x53D8178763EDCE60(Local_111[iLocal_447 /*14*/], "GENERIC_WAR_CRY", func_54(3), 1);
				iLocal_455 = unk_0x105601648511CC64();
			}
		}
		iLocal_447++;
	}
	if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
	{
		unk_0x9332FDC92BD28643(1);
	}
	else
	{
		unk_0x9332FDC92BD28643(0);
	}
	if (func_31(Local_94[0 /*2*/]) && func_31(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x0C265B3C448E6954(Local_94[0 /*2*/], -1521.829f, 2725.003f, 16.64367f, -1600.763f, 2794.875f, 21.45629f, 30f, 0, 1, 0) && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_94[0 /*2*/], 0))
		{
			unk_0xAEC867D0DBB7AFEB(5);
			unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 4, 0);
			unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
		}
	}
	if (func_31(Local_94[0 /*2*/]) && func_31(unk_0xBC25C936A095B5BA()))
	{
		if (iLocal_1480 > 0)
		{
			if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(Local_94[0 /*2*/], 1), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), 1) > 650f)
			{
				func_187(5);
			}
			else if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(Local_94[0 /*2*/], 1), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), 1) > 600f)
			{
				if (!iLocal_454)
				{
					func_30("RHP_LWARN", 7500, 1);
					iLocal_454 = 1;
				}
			}
			else
			{
				iLocal_454 = 0;
			}
		}
	}
	if (func_31(Local_94[0 /*2*/]))
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 <= (9 - 1))
		{
			if (func_31(Local_111[iVar1 /*14*/]))
			{
				bVar0 = false;
			}
			iVar1++;
		}
		if (bVar0)
		{
			if ((!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_94[0 /*2*/], 0) && !unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) && !unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))
			{
				if (!unk_0x1A6AA4082E241660(unk_0xBC25C936A095B5BA(), Local_94[0 /*2*/]))
				{
					unk_0x56F2E1B5599188FA(unk_0xBC25C936A095B5BA(), Local_94[0 /*2*/], -1, 2048, 1);
				}
			}
			else if (unk_0x1A6AA4082E241660(unk_0xBC25C936A095B5BA(), Local_94[0 /*2*/]))
			{
				unk_0x44C98C11ED6DD327(unk_0xBC25C936A095B5BA());
			}
		}
	}
	if (!iLocal_444)
	{
		if (iLocal_1480 == 0)
		{
			if (fLocal_441 != 0f)
			{
				fLocal_441 = 0f;
			}
		}
		else if (iLocal_1480 == 1)
		{
			if (fLocal_441 < 5f)
			{
				fLocal_441 = (fLocal_441 + unk_0x11F9F9006143871A());
			}
		}
		if (fLocal_441 < 3f)
		{
			iVar2 = 0;
			while (iVar2 < Local_94.f_0)
			{
				if (unk_0x724D816EA203A79E(Local_94[iVar2 /*2*/]) && !unk_0x724D816EA203A79E(uLocal_429[iVar2]))
				{
					uLocal_429[iVar2] = Local_94[iVar2 /*2*/];
				}
				if (unk_0x724D816EA203A79E(uLocal_429[iVar2]))
				{
					if (unk_0x1D403DFADBC2DE3C(uLocal_429[iVar2], 0) || !unk_0xE59B7F5A03335350(uLocal_429[iVar2], 0))
					{
						iVar3 = unk_0xE693A896EE86181F(uLocal_429[iVar2]);
						if (iVar3 == joaat("weapon_stickybomb"))
						{
							func_181(726);
							iLocal_444 = 1;
						}
					}
				}
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 < Global_89597)
			{
				if (unk_0x724D816EA203A79E(Global_89597[iVar2]))
				{
					if (unk_0x1D403DFADBC2DE3C(Global_89597[iVar2], 0) || !unk_0xE59B7F5A03335350(Global_89597[iVar2], 0))
					{
						iVar4 = unk_0xE693A896EE86181F(Global_89597[iVar2]);
						if (iVar4 == joaat("weapon_stickybomb"))
						{
							func_181(726);
							iLocal_444 = 1;
						}
					}
				}
				iVar2++;
			}
		}
	}
	func_164();
	func_154();
	func_150();
	func_149();
	unk_0x6A095EC1C9AF12A4(unk_0xB5CEFD608600A09F());
	if (!iLocal_443)
	{
		if (func_148(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), 3, 0, 0))
		{
			iLocal_443 = 1;
			unk_0x0609DB21AC6683A2();
			unk_0xDF53A66AEE1401AA(1f);
			unk_0xAEC867D0DBB7AFEB(5);
			unk_0x9332FDC92BD28643(1);
			unk_0xED946BB96C5E9C4A(unk_0xB5CEFD608600A09F(), 3, 0);
			unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
			iLocal_443 = 1;
		}
	}
	else if (!func_148(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), 3, 0, 0))
	{
		if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
		{
			unk_0xE85B33FB221A23CD(5, 0);
			unk_0xE85B33FB221A23CD(3, 0);
			unk_0xE85B33FB221A23CD(1, 0);
			unk_0xE85B33FB221A23CD(10, 0);
			unk_0xE85B33FB221A23CD(9, 0);
			unk_0x3B6B3043A45E5A51(1, 0);
			unk_0x3B6B3043A45E5A51(2, 0);
			unk_0x3B6B3043A45E5A51(8, 0);
			unk_0xDF53A66AEE1401AA(0f);
			unk_0xAEC867D0DBB7AFEB(0);
			unk_0x9332FDC92BD28643(0);
			iLocal_443 = 0;
		}
	}
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			if (!iLocal_1491)
			{
				func_147(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 725);
				func_146(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 718);
				iLocal_1491 = 1;
			}
		}
		else if (iLocal_1491)
		{
			iLocal_1491 = 0;
		}
		if (!iLocal_1492)
		{
			func_147(unk_0xBC25C936A095B5BA(), 722);
			iLocal_1492 = 1;
		}
	}
	if (!iLocal_442)
	{
		iVar5 = 0;
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0xE59B7F5A03335350(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0))
			{
				iVar5 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			}
		}
		else if ((unk_0x724D816EA203A79E(unk_0x3E12B546F3F2597A()) && unk_0xE59B7F5A03335350(unk_0x3E12B546F3F2597A(), 0)) && unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(unk_0x3E12B546F3F2597A(), 1)) < 10000f)
		{
			iVar5 = unk_0x3E12B546F3F2597A();
		}
		if ((((((unk_0x724D816EA203A79E(iVar5) && unk_0xE59B7F5A03335350(iVar5, 0)) && iVar5 != iLocal_428) && iVar5 != Local_94[1 /*2*/]) && iVar5 != Local_94[2 /*2*/]) && iVar5 != Local_94[0 /*2*/]) && unk_0x7C28D15641461C68(unk_0x6F79ECA8C83E4357(iVar5)))
		{
			unk_0x77815D3407C6700D(iVar5, 1, 1);
			iLocal_428 = iVar5;
		}
	}
}

void func_146(int iParam0, int iParam1)
{
	Global_55978 = iParam0;
	Global_55979 = iParam1;
}

void func_147(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_55980 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_68062)
	{
		if (iParam1 == -1 || Global_68063[iVar0 /*9*/] == iParam1)
		{
			if (Global_68063[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_68063[iVar0 /*9*/].f_6 = iParam0;
				Global_68063[iVar0 /*9*/].f_7 = 1;
				Global_68063[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

int func_148(struct<3> Param0, int iParam3, int iParam4, bool bParam5)
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
		if (unk_0x7352105EC4D7541F(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], iVar110, 1))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

void func_149()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_1480 < 1)
	{
		if (!unk_0x144E80F5C46A6B75("PS_PREP_INTERCEPT_CONVOY"))
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (unk_0x724D816EA203A79E(Local_94[iVar0 /*2*/]))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(Local_94[iVar0 /*2*/], 0), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0)) < 1000f)
					{
						unk_0xD6423910AAD8A379("PS_PREP_INTERCEPT_CONVOY");
					}
				}
				iVar0++;
			}
		}
	}
	else if (iLocal_1480 == 1)
	{
		if (!unk_0x144E80F5C46A6B75("PS_PREP_MILITARY_TRUCK_SHOOTOUT"))
		{
			unk_0xD6423910AAD8A379("PS_PREP_MILITARY_TRUCK_SHOOTOUT");
		}
	}
	else if (iLocal_1480 >= 1)
	{
		if (unk_0x144E80F5C46A6B75("PS_PREP_INTERCEPT_CONVOY"))
		{
			unk_0xC1300D0F3A74E20B("PS_PREP_INTERCEPT_CONVOY");
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (unk_0x724D816EA203A79E(Local_94[1 /*2*/]))
				{
					unk_0x38E412DB4A45B900(Local_94[1 /*2*/], 0);
				}
				iVar1++;
			}
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				if (unk_0x724D816EA203A79E(Global_89597[iVar2]))
				{
					unk_0x38E412DB4A45B900(Global_89597[iVar2], 0);
				}
				iVar2++;
			}
		}
		if (unk_0x144E80F5C46A6B75("PS_PREP_MILITARY_TRUCK_SHOOTOUT"))
		{
			unk_0xC1300D0F3A74E20B("PS_PREP_MILITARY_TRUCK_SHOOTOUT");
		}
	}
}

void func_150()
{
	switch (iLocal_437)
	{
		case 1:
			if (fLocal_440 != 0f)
			{
				fLocal_440 = 0f;
			}
			if (fLocal_439 <= 0f)
			{
				fLocal_439 = 0f;
				iLocal_437 = 0;
			}
			else if (fLocal_439 > 0f)
			{
				fLocal_439 = (fLocal_439 - 0.02f);
			}
		
		case 0:
			if (func_153())
			{
				iLocal_437 = 3;
				fLocal_438 = fLocal_439;
				fLocal_440 = 1f;
			}
			break;
		
		case 3:
			if (fLocal_440 != 1f)
			{
				fLocal_440 = 1f;
			}
			if (fLocal_439 >= 1f)
			{
				iLocal_437 = 2;
				fLocal_439 = 1f;
			}
			else if (fLocal_439 < 1f)
			{
				fLocal_439 = (fLocal_439 + 0.02f);
			}
		
		case 2:
			if (!func_153())
			{
				iLocal_437 = 1;
				fLocal_438 = fLocal_439;
				fLocal_440 = 0f;
			}
			break;
	}
	if (iLocal_437 == 3 || iLocal_437 == 1)
	{
		func_151(fLocal_438, fLocal_440, fLocal_439);
		unk_0xC0D8311F0A9723A0(Global_35028[20 /*31*/], fLocal_439, 0, 1);
		unk_0xF72F6BB050622804(Global_35028[20 /*31*/], 4, 0, 1);
	}
}

float func_151(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	fVar0 = ((1f - unk_0xD0FFB162F40A139C(func_152((fParam2 * 3.141593f)))) * 0.5f);
	return ((fParam0 * (1f - fVar0)) + (fParam1 * fVar0));
}

float func_152(float fParam0)
{
	return (fParam0 * 57.29578f);
}

int func_153()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((unk_0x724D816EA203A79E(Local_94[iVar0 /*2*/]) && unk_0xE59B7F5A03335350(Local_94[iVar0 /*2*/], 0)) && unk_0x0C265B3C448E6954(Local_94[iVar0 /*2*/], -1591.019f, 2803.731f, 15.41812f, -1569.92f, 2777.878f, 22.14856f, 8.25f, 0, 1, 0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_154()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_162(iVar0);
		if (!unk_0x36CEFBE9B745A58D(iVar1))
		{
			if (!func_161(iVar1))
			{
				if (func_160(iVar1, 0))
				{
					if (func_159(iVar1) || func_157(iVar1))
					{
						if (func_156(iVar1, 0))
						{
							unk_0x77815D3407C6700D(iVar1, 1, 1);
							unk_0x2E35C4FA5F0ED22F(iVar1, 1);
							unk_0xA4E856A8CD53B8DF(iVar1);
						}
					}
				}
			}
			else if (func_159(iVar1) && unk_0xB248FAA35ED47DB9(iVar1, 1))
			{
				unk_0x44840FD68E426678(sLocal_491);
				bLocal_1490 = unk_0x0C265B3C448E6954(iVar1, 1365.772f, 3625.582f, 33.69244f, 1374.662f, 3598.951f, 36.8947f, 34f, 0, 1, 0);
				if (!bLocal_1490)
				{
					if (unk_0xF4FCC3C1048FF2AB(iVar1, -1273030092) != 1 && unk_0xF4FCC3C1048FF2AB(iVar1, -1273030092) != 0)
					{
						unk_0x6EEB346884FE5AF6(iVar1, unk_0x9FE9D386222EEE47(iVar1, 0), 1376.77f, 3605.09f, 33.88f, 30f, 786469, 2f);
					}
				}
				else if (!unk_0x3C9DB165D131D628(Local_94[0 /*2*/]))
				{
					unk_0x44840FD68E426678(sLocal_491);
					if (unk_0x1E8349F219AC5AF9(sLocal_491))
					{
						unk_0xEB469C5B92ADC7B0(iVar1, Local_94[0 /*2*/], sLocal_491, 786469, 0, 8, -1, 10f, 0, 2f);
					}
				}
			}
			else if (func_157(iVar1) && unk_0xB248FAA35ED47DB9(iVar1, 1))
			{
				if (func_31(Local_111[5 /*14*/]))
				{
					if (unk_0xF4FCC3C1048FF2AB(iVar1, -1273030092) != 1 && unk_0xF4FCC3C1048FF2AB(iVar1, -1273030092) != 0)
					{
						unk_0x1A06AE15BF21D407(iVar1, unk_0x9FE9D386222EEE47(iVar1, 0), Local_111[5 /*14*/], 7, 15f, 786469, 15f, -1f, 1);
					}
				}
			}
			else
			{
				func_155(iVar1);
			}
		}
		iVar0++;
	}
}

int func_155(int iParam0)
{
	int iVar0;
	
	return 0;
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_162(iVar0) != iParam0)
		{
			return 0;
		}
		if (!unk_0xFA30DFD0084E92FE(Global_88954, iVar0))
		{
			return 0;
		}
		unk_0x7CB6FD92BE491AD9(&Global_88954, iVar0);
		return 1;
	}
	return 0;
}

int func_156(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0;
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_162(iVar0) != iParam0)
		{
			return 0;
		}
		if (unk_0xFA30DFD0084E92FE(Global_88954, iVar0))
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0xBC25C936A095B5BA())
			{
				return 0;
			}
		}
		if (unk_0xFA30DFD0084E92FE(Global_88953, iVar0))
		{
			unk_0x97AA3135A3018C3C(iParam0, 0, 0);
			unk_0xB71D41C0310C93DE(iParam0, 0, 1);
			unk_0xF0059F27F7BB6680(&Global_88954, iVar0);
			return 1;
		}
	}
	return 0;
}

int func_157(int iParam0)
{
	if (!func_158())
	{
		if (func_31(Local_94[0 /*2*/]) && iLocal_434 == 0)
		{
			if (func_31(unk_0xBC25C936A095B5BA()) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				if (unk_0x62F3A07C43FFB568(iParam0, unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0) && unk_0x3187EF5798B5D209(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), -1, 0) == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_158()
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return Global_90578.f_44 == 1;
	}
	return 0;
}

int func_159(int iParam0)
{
	if (!func_158())
	{
		if (func_31(Local_94[0 /*2*/]) && !unk_0x0C265B3C448E6954(Local_94[0 /*2*/], 1364.248f, 3620.511f, 33.89069f, 1350.9f, 3616.225f, 37.12358f, 6.5f, 0, 1, 0))
		{
			if (func_31(unk_0xBC25C936A095B5BA()) && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_94[0 /*2*/], 0))
			{
				if (unk_0x62F3A07C43FFB568(iParam0, Local_94[0 /*2*/], 0) && unk_0x3187EF5798B5D209(Local_94[0 /*2*/], -1, 0) == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_160(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0;
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_162(iVar0) != iParam0)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0xBC25C936A095B5BA())
			{
				return 0;
			}
		}
		if (unk_0xFA30DFD0084E92FE(Global_88953, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_161(int iParam0)
{
	int iVar0;
	
	return 0;
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_162(iVar0) != iParam0)
		{
			return 0;
		}
		if (unk_0xFA30DFD0084E92FE(Global_88954, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_162(int iParam0)
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_19())
	{
		return unk_0xBC25C936A095B5BA();
	}
	return Global_90578[func_163(iParam0)];
}

int func_163(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

void func_164()
{
	int iVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	switch (iLocal_434)
	{
		case 0:
			if (!bLocal_456)
			{
				func_180();
				func_174();
				if (((((func_31(Local_111[4 /*14*/]) && func_31(Local_111[0 /*14*/])) && func_31(Local_111[5 /*14*/])) && func_31(Local_94[1 /*2*/])) && func_31(Local_94[2 /*2*/])) && func_31(Local_94[0 /*2*/]))
				{
					if (unk_0x0C265B3C448E6954(Local_94[0 /*2*/], -1521.829f, 2725.003f, 16.64367f, -1600.763f, 2794.875f, 21.45629f, 30f, 0, 1, 0) && unk_0x62F3A07C43FFB568(Local_111[4 /*14*/], Local_94[0 /*2*/], 0))
					{
						iLocal_434 = 2;
						iLocal_471 = 0;
					}
					fVar1 = unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(Local_94[1 /*2*/], 0), unk_0x541C2AEF053615BC(Local_94[0 /*2*/], 0));
					if (unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(Local_94[1 /*2*/], 0), unk_0x541C2AEF053615BC(Local_94[2 /*2*/], 0)) > fVar1)
					{
						fVar1 = unk_0x2A488C176D52CCA5(unk_0x541C2AEF053615BC(Local_94[1 /*2*/], 0), unk_0x541C2AEF053615BC(Local_94[2 /*2*/], 0));
					}
					fVar3 = (11f + ((11f / (100f - 40f)) * 40f));
					uVar2 = func_173((((-11f / (100f - 40f)) * fVar1) + fVar3), 0f, 11f);
					if (unk_0x25EF720B1CAB1E23(Local_111[0 /*14*/], Local_94[1 /*2*/]))
					{
						unk_0xE36D78F8D1781255(Local_111[0 /*14*/], uVar2);
					}
				}
			}
			else
			{
				if (func_31(Local_94[0 /*2*/]))
				{
					Local_460 = { unk_0x541C2AEF053615BC(Local_94[0 /*2*/], 0) };
				}
				iLocal_436 = 0;
				iLocal_435 = 0;
				iLocal_434 = 1;
			}
			break;
		
		case 2:
			if (!bLocal_456)
			{
				func_174();
				if (((((func_31(Local_111[4 /*14*/]) && func_31(Local_111[0 /*14*/])) && func_31(Local_111[5 /*14*/])) && func_31(Local_94[1 /*2*/])) && func_31(Local_94[2 /*2*/])) && func_31(Local_94[0 /*2*/]))
				{
					switch (iLocal_471)
					{
						case 0:
							if (!func_182(Local_111[0 /*14*/], 242628503, 1))
							{
								if (iLocal_437 == 2 || (iLocal_437 == 3 && fLocal_439 > 0.8f))
								{
									unk_0xC5A6DFE2B8987B17(&uVar4);
									unk_0x827661D9AAD4A354(0, Local_94[1 /*2*/], -1785.46f, 3169.625f, 31.93f, 4, 10f, 786603, 3f, 3f, 1);
									unk_0x827661D9AAD4A354(0, Local_94[1 /*2*/], -1885.875f, 3006.152f, 31.81027f, 4, 10f, 786603, -1f, -1f, 1);
									unk_0x535008C596714F9E(uVar4);
									unk_0xA8E6405305C0D7DF(Local_111[0 /*14*/], uVar4);
									unk_0x02DAF06EA4F08219(&uVar4);
								}
							}
							if (!func_182(Local_111[4 /*14*/], -1273030092, 1))
							{
								unk_0x7AB043D579636764(Local_111[4 /*14*/], Local_94[0 /*2*/], Local_94[1 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
							}
							if (!func_182(Local_111[5 /*14*/], -1273030092, 1))
							{
								unk_0x7AB043D579636764(Local_111[5 /*14*/], Local_94[2 /*2*/], Local_94[0 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
							}
							if (unk_0x4DBCE270B354E123(Local_111[0 /*14*/], -1885.875f, 3006.152f, 31.81027f, 5f, 5f, 5f, 0, 1, 0))
							{
								iVar0 = 0;
								while (iVar0 <= (9 - 1))
								{
									if (func_31(Local_111[iVar0 /*14*/]))
									{
										unk_0x717F82C821538DA2(Local_111[iVar0 /*14*/], 1);
										unk_0x91629AC1E1F78419(Local_111[iVar0 /*14*/], 3, 1);
										unk_0x91629AC1E1F78419(Local_111[iVar0 /*14*/], 1, 1);
										if ((iVar0 == 0 || iVar0 == 5) || iVar0 == 4)
										{
											unk_0xA3981DED4FC2E56E(Local_111[iVar0 /*14*/], 200, 65536);
										}
										else if ((iVar0 == 1 || iVar0 == 6) || iVar0 == 7)
										{
											unk_0xA3981DED4FC2E56E(Local_111[iVar0 /*14*/], 0, 65536);
										}
										else
										{
											unk_0xA3981DED4FC2E56E(Local_111[iVar0 /*14*/], 1000, 65536);
										}
										func_198(&(Local_111[iVar0 /*14*/]), 1, 1, 1);
									}
									iVar0++;
								}
								iLocal_471++;
							}
							break;
						
						case 1:
							break;
						}
				}
			}
			else
			{
				if (func_31(Local_94[0 /*2*/]))
				{
					Local_460 = { unk_0x541C2AEF053615BC(Local_94[0 /*2*/], 1) };
				}
				iLocal_436 = 0;
				iLocal_435 = 0;
				iLocal_434 = 1;
			}
			break;
		
		case 1:
			unk_0x50AE3E919DC9BC67(Local_460, 50f, 1, 0, &iVar5, 0, 0, -1);
			if (func_31(iVar5))
			{
				unk_0xABA7AE40608505F2(iVar5, 2, 0);
				unk_0xABA7AE40608505F2(iVar5, 2048, 0);
			}
			switch (iLocal_435)
			{
				case 0:
					switch (iLocal_436)
					{
						case 0:
							iLocal_436 = func_172(Local_94[0 /*2*/]);
							break;
						
						case 1:
							if (func_31(Local_111[0 /*14*/]) && func_31(Local_94[1 /*2*/]))
							{
								if (unk_0x62F3A07C43FFB568(Local_111[0 /*14*/], Local_94[1 /*2*/], 0))
								{
									unk_0xC5A6DFE2B8987B17(&uLocal_446);
									if (unk_0x8910237449BB6F79(Local_111[0 /*14*/]) > 5f)
									{
										unk_0x194CCBD594974E0D(0, Local_94[1 /*2*/], 5, 1000);
									}
									else
									{
										unk_0x194CCBD594974E0D(0, Local_94[1 /*2*/], 14, 1500);
									}
									unk_0xA3981DED4FC2E56E(0, 720, 65536);
									unk_0x535008C596714F9E(uLocal_446);
									unk_0xA8E6405305C0D7DF(Local_111[0 /*14*/], uLocal_446);
									unk_0x02DAF06EA4F08219(&uLocal_446);
								}
							}
							if (func_31(Local_111[4 /*14*/]) && func_31(Local_94[0 /*2*/]))
							{
								if (unk_0x62F3A07C43FFB568(Local_111[4 /*14*/], Local_94[0 /*2*/], 0))
								{
									unk_0xC5A6DFE2B8987B17(&uLocal_446);
									if (unk_0x8910237449BB6F79(Local_111[4 /*14*/]) > 5f)
									{
										unk_0x194CCBD594974E0D(0, Local_94[0 /*2*/], 4, 2500);
									}
									else
									{
										unk_0x194CCBD594974E0D(0, Local_94[0 /*2*/], 13, 1500);
									}
									unk_0xA3981DED4FC2E56E(0, 500, 65536);
									unk_0x535008C596714F9E(uLocal_446);
									unk_0xA8E6405305C0D7DF(Local_111[4 /*14*/], uLocal_446);
									unk_0x02DAF06EA4F08219(&uLocal_446);
								}
							}
							if ((func_31(Local_111[5 /*14*/]) && func_31(Local_94[2 /*2*/])) && func_31(Local_94[1 /*2*/]))
							{
								if (unk_0x62F3A07C43FFB568(Local_111[5 /*14*/], Local_94[2 /*2*/], 0))
								{
									unk_0xC5A6DFE2B8987B17(&uLocal_446);
									if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(Local_94[2 /*2*/], 0), unk_0x541C2AEF053615BC(Local_94[1 /*2*/], 0)) < 1000f)
									{
										unk_0x509F549022512095(0, Local_94[2 /*2*/], unk_0xA4455714F3DCE207(Local_94[1 /*2*/], -3f, 0f, 0f), 10f, 0, joaat("crusader"), 786469, 4f, -1f);
									}
									unk_0x194CCBD594974E0D(0, Local_94[2 /*2*/], 5, 1000);
									unk_0xA3981DED4FC2E56E(0, 0, 65536);
									unk_0x535008C596714F9E(uLocal_446);
									unk_0xA8E6405305C0D7DF(Local_111[5 /*14*/], uLocal_446);
									unk_0x02DAF06EA4F08219(&uLocal_446);
								}
							}
							iLocal_435 = 1;
							break;
						
						case 2:
							if (func_31(Local_111[0 /*14*/]) && func_31(Local_94[1 /*2*/]))
							{
								if (unk_0x62F3A07C43FFB568(Local_111[0 /*14*/], Local_94[1 /*2*/], 0))
								{
									unk_0xC5A6DFE2B8987B17(&uLocal_446);
									unk_0x194CCBD594974E0D(0, Local_94[1 /*2*/], 5, 1500);
									unk_0xA3981DED4FC2E56E(0, 900, 65536);
									unk_0x535008C596714F9E(uLocal_446);
									unk_0xA8E6405305C0D7DF(Local_111[0 /*14*/], uLocal_446);
									unk_0x02DAF06EA4F08219(&uLocal_446);
								}
							}
							if (func_31(Local_111[4 /*14*/]) && func_31(Local_94[0 /*2*/]))
							{
								if (unk_0x62F3A07C43FFB568(Local_111[4 /*14*/], Local_94[0 /*2*/], 0))
								{
									unk_0xC5A6DFE2B8987B17(&uLocal_446);
									unk_0x194CCBD594974E0D(0, Local_94[0 /*2*/], 5, 1000);
									unk_0xA3981DED4FC2E56E(0, 100, 65536);
									unk_0x535008C596714F9E(uLocal_446);
									unk_0xA8E6405305C0D7DF(Local_111[4 /*14*/], uLocal_446);
									unk_0x02DAF06EA4F08219(&uLocal_446);
								}
							}
							if ((func_31(Local_111[5 /*14*/]) && func_31(Local_94[2 /*2*/])) && func_31(Local_94[0 /*2*/]))
							{
								if (unk_0x62F3A07C43FFB568(Local_111[5 /*14*/], Local_94[2 /*2*/], 0))
								{
									unk_0xC5A6DFE2B8987B17(&uLocal_446);
									if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(Local_94[2 /*2*/], 0), unk_0x541C2AEF053615BC(Local_94[0 /*2*/], 0)) < 1000f)
									{
										unk_0x509F549022512095(0, Local_94[2 /*2*/], unk_0xA4455714F3DCE207(Local_94[0 /*2*/], -2f, 1f, 0f), 10f, 0, joaat("crusader"), 786469, 4f, -1f);
									}
									unk_0xA3981DED4FC2E56E(0, 120, 65536);
									unk_0x535008C596714F9E(uLocal_446);
									unk_0xA8E6405305C0D7DF(Local_111[5 /*14*/], uLocal_446);
									unk_0x02DAF06EA4F08219(&uLocal_446);
								}
							}
							iLocal_435 = 1;
							break;
						
						case 3:
							if ((func_31(Local_111[0 /*14*/]) && func_31(Local_94[1 /*2*/])) && func_31(Local_94[2 /*2*/]))
							{
								if (unk_0x62F3A07C43FFB568(Local_111[0 /*14*/], Local_94[1 /*2*/], 0))
								{
									unk_0xC5A6DFE2B8987B17(&uLocal_446);
									unk_0x194CCBD594974E0D(0, Local_94[1 /*2*/], 6, 500);
									if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(Local_94[1 /*2*/], 0), unk_0x541C2AEF053615BC(Local_94[2 /*2*/], 0)) < 1000f)
									{
										unk_0x509F549022512095(0, Local_94[1 /*2*/], unk_0xA4455714F3DCE207(Local_94[2 /*2*/], 2f, 0f, 0f), 10f, 0, joaat("crusader"), 786469, 4f, -1f);
									}
									unk_0x194CCBD594974E0D(0, Local_94[1 /*2*/], 5, 1000);
									unk_0xA3981DED4FC2E56E(0, 420, 65536);
									unk_0x535008C596714F9E(uLocal_446);
									unk_0xA8E6405305C0D7DF(Local_111[0 /*14*/], uLocal_446);
									unk_0x02DAF06EA4F08219(&uLocal_446);
								}
							}
							if (func_31(Local_111[4 /*14*/]) && func_31(Local_94[0 /*2*/]))
							{
								if (unk_0x62F3A07C43FFB568(Local_111[4 /*14*/], Local_94[0 /*2*/], 0))
								{
									if (unk_0x8910237449BB6F79(Local_111[4 /*14*/]) > 5f)
									{
										unk_0xC5A6DFE2B8987B17(&uLocal_446);
										unk_0x194CCBD594974E0D(0, Local_94[0 /*2*/], 5, 1500);
										unk_0xA3981DED4FC2E56E(0, 380, 65536);
										unk_0x535008C596714F9E(uLocal_446);
										unk_0xA8E6405305C0D7DF(Local_111[4 /*14*/], uLocal_446);
										unk_0x02DAF06EA4F08219(&uLocal_446);
									}
								}
							}
							if (func_31(Local_111[5 /*14*/]) && func_31(Local_94[2 /*2*/]))
							{
								if (unk_0x62F3A07C43FFB568(Local_111[5 /*14*/], Local_94[2 /*2*/], 0))
								{
									if (unk_0x8910237449BB6F79(Local_111[5 /*14*/]) > 5f)
									{
										unk_0xC5A6DFE2B8987B17(&uLocal_446);
										unk_0x194CCBD594974E0D(0, Local_94[2 /*2*/], 4, 1500);
										unk_0xA3981DED4FC2E56E(0, 250, 65536);
										unk_0x535008C596714F9E(uLocal_446);
										unk_0xA8E6405305C0D7DF(Local_111[5 /*14*/], uLocal_446);
										unk_0x02DAF06EA4F08219(&uLocal_446);
									}
								}
							}
							iLocal_435 = 1;
							break;
						
						case 4:
							if (func_31(Local_111[0 /*14*/]) && func_31(Local_94[1 /*2*/]))
							{
								if (unk_0x62F3A07C43FFB568(Local_111[0 /*14*/], Local_94[1 /*2*/], 0))
								{
									unk_0xC5A6DFE2B8987B17(&uLocal_446);
									unk_0x194CCBD594974E0D(0, Local_94[1 /*2*/], 4, 1500);
									unk_0xA3981DED4FC2E56E(0, 800, 65536);
									unk_0x535008C596714F9E(uLocal_446);
									unk_0xA8E6405305C0D7DF(Local_111[0 /*14*/], uLocal_446);
									unk_0x02DAF06EA4F08219(&uLocal_446);
								}
							}
							if (func_31(Local_111[4 /*14*/]) && func_31(Local_94[0 /*2*/]))
							{
								if (unk_0x62F3A07C43FFB568(Local_111[4 /*14*/], Local_94[0 /*2*/], 0))
								{
									unk_0xC5A6DFE2B8987B17(&uLocal_446);
									unk_0x194CCBD594974E0D(0, Local_94[0 /*2*/], 4, 1500);
									unk_0xA3981DED4FC2E56E(0, 50, 65536);
									unk_0x535008C596714F9E(uLocal_446);
									unk_0xA8E6405305C0D7DF(Local_111[4 /*14*/], uLocal_446);
									unk_0x02DAF06EA4F08219(&uLocal_446);
								}
							}
							if ((func_31(Local_111[5 /*14*/]) && func_31(Local_94[2 /*2*/])) && func_31(Local_94[0 /*2*/]))
							{
								if (unk_0x62F3A07C43FFB568(Local_111[5 /*14*/], Local_94[2 /*2*/], 0))
								{
									unk_0xC5A6DFE2B8987B17(&uLocal_446);
									if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(Local_94[2 /*2*/], 0), unk_0x541C2AEF053615BC(Local_94[0 /*2*/], 0)) < 1000f)
									{
										unk_0x509F549022512095(0, Local_94[2 /*2*/], unk_0xA4455714F3DCE207(Local_94[0 /*2*/], -2f, 1f, 0f), 10f, 0, joaat("crusader"), 786469, 4f, -1f);
									}
									unk_0xA3981DED4FC2E56E(0, 500, 65536);
									unk_0x535008C596714F9E(uLocal_446);
									unk_0xA8E6405305C0D7DF(Local_111[5 /*14*/], uLocal_446);
									unk_0x02DAF06EA4F08219(&uLocal_446);
								}
							}
							iLocal_435 = 1;
							break;
					}
					break;
				
				case 1:
					iVar0 = 0;
					while (iVar0 <= (9 - 1))
					{
						if (func_31(Local_111[iVar0 /*14*/]) && func_31(unk_0xBC25C936A095B5BA()))
						{
							unk_0xFC3C88E2313FA926(Local_111[iVar0 /*14*/], 10);
							unk_0x6CCBC1B22488DC0C(Local_111[iVar0 /*14*/], 580f);
							unk_0x91629AC1E1F78419(Local_111[iVar0 /*14*/], 0, 1);
							unk_0x91629AC1E1F78419(Local_111[iVar0 /*14*/], 50, 1);
							unk_0xC8FD3EBBB90E8D7F(Local_111[iVar0 /*14*/], 184, 0);
							unk_0x54480313BB3E8DD0(Local_111[iVar0 /*14*/], 1);
							func_171(iVar0);
							if ((iVar0 != 0 && iVar0 != 4) && iVar0 != 5)
							{
								if (iVar0 == 6)
								{
									iVar6 = 300;
								}
								else if (iVar0 == 1)
								{
									iVar6 = 900;
								}
								else if (iVar0 == 7)
								{
									iVar6 = 250;
								}
								else if (iVar0 == 2)
								{
									iVar6 = 350;
								}
								else if (iVar0 == 8)
								{
									iVar6 = 500;
								}
								else if (iVar0 == 3)
								{
									iVar6 = 650;
								}
								unk_0xC5A6DFE2B8987B17(&uLocal_446);
								if (unk_0x5237AF95232D78C5(Local_111[iVar0 /*14*/], 0))
								{
									unk_0x61E7E913658B4389(0, iVar6);
								}
								unk_0xA3981DED4FC2E56E(0, iVar6, 65536);
								unk_0x535008C596714F9E(uLocal_446);
								unk_0xA8E6405305C0D7DF(Local_111[iVar0 /*14*/], uLocal_446);
								unk_0x02DAF06EA4F08219(&uLocal_446);
								unk_0x91629AC1E1F78419(Local_111[iVar0 /*14*/], 3, 1);
							}
						}
						iVar0++;
					}
					iLocal_435 = func_170();
					break;
				
				case 2:
					iVar0 = 0;
					while (iVar0 <= (9 - 1))
					{
						if (func_31(Local_111[iVar0 /*14*/]) && func_31(unk_0xBC25C936A095B5BA()))
						{
							func_171(iVar0);
							if (unk_0x74AAB09D79A6344E(unk_0xBC25C936A095B5BA(), 0))
							{
								iLocal_466 = 8000;
							}
							else
							{
								iLocal_466 = 12000;
							}
							if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(Local_111[iVar0 /*14*/], 0), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), 1) < 75f)
							{
								if (!Local_111[iVar0 /*14*/].f_12 && (unk_0x105601648511CC64() - iLocal_467) > iLocal_466)
								{
									unk_0x91629AC1E1F78419(Local_111[iVar0 /*14*/], 51, 1);
									Local_111[iVar0 /*14*/].f_12 = 1;
									iLocal_467 = unk_0x105601648511CC64();
								}
							}
							else
							{
								unk_0x54480313BB3E8DD0(Local_111[iVar0 /*14*/], 1);
								unk_0x91629AC1E1F78419(Local_111[iVar0 /*14*/], 51, 0);
								Local_111[iVar0 /*14*/].f_12 = 0;
							}
							if (!func_182(Local_111[iVar0 /*14*/], 780511057, 1))
							{
								unk_0xB8CBD998685C0685(Local_111[iVar0 /*14*/], unk_0xBC25C936A095B5BA(), 0, 16);
							}
						}
						iVar0++;
					}
					iLocal_435 = func_170();
					break;
				
				case 3:
					iVar0 = 0;
					while (iVar0 <= (9 - 1))
					{
						if (func_31(Local_111[iVar0 /*14*/]) && func_31(unk_0xBC25C936A095B5BA()))
						{
							if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(Local_111[iVar0 /*14*/], 0), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), 1) > 120f)
							{
								unk_0x54480313BB3E8DD0(Local_111[iVar0 /*14*/], 1);
								unk_0x91629AC1E1F78419(Local_111[iVar0 /*14*/], 51, 0);
								Local_111[iVar0 /*14*/].f_12 = 0;
								func_171(iVar0);
							}
							if (!func_182(Local_111[iVar0 /*14*/], 780511057, 1))
							{
								unk_0xB8CBD998685C0685(Local_111[iVar0 /*14*/], unk_0xBC25C936A095B5BA(), 0, 16);
							}
						}
						iVar0++;
					}
					iLocal_435 = func_170();
					break;
				
				case 4:
					if (func_169(unk_0xBC25C936A095B5BA(), Local_49, 1) < 30f)
					{
						iVar7 = 1;
					}
					iVar0 = 0;
					while (iVar0 <= (9 - 1))
					{
						if ((func_31(unk_0xBC25C936A095B5BA()) && func_31(Local_111[iVar0 /*14*/])) && func_31(Local_94[0 /*2*/]))
						{
							if (iVar7 && func_169(Local_111[iVar0 /*14*/], Local_49, 1) < 30f)
							{
								unk_0x91629AC1E1F78419(Local_111[iVar0 /*14*/], 1, 0);
								unk_0x91629AC1E1F78419(Local_111[iVar0 /*14*/], 3, 1);
								unk_0xED9A67BF9F6ED860(Local_111[iVar0 /*14*/], 0);
								unk_0x54480313BB3E8DD0(Local_111[iVar0 /*14*/], 2);
								if (!unk_0x8F97799512B006B7(Local_111[iVar0 /*14*/], 0))
								{
									unk_0xB8CBD998685C0685(Local_111[iVar0 /*14*/], unk_0xBC25C936A095B5BA(), 0, 16);
								}
							}
							else if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_94[0 /*2*/], 0) || unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(Local_94[0 /*2*/], 0), unk_0x541C2AEF053615BC(Local_111[iVar0 /*14*/], 0), 1) > (120f / 2f))
							{
								unk_0x91629AC1E1F78419(Local_111[iVar0 /*14*/], 1, 1);
								if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(Local_111[iVar0 /*14*/], 0), 1) > (120f * 2f))
								{
									if (!unk_0x5237AF95232D78C5(Local_111[iVar0 /*14*/], 0) && !unk_0xD1DC4B08247A4317(Local_111[iVar0 /*14*/]))
									{
										iVar9 = func_168(Local_111[iVar0 /*14*/]);
										if (func_31(iVar9))
										{
											iVar8 = -1;
											if (unk_0x1AAF0C23233C57AF(iVar9, -1, 0))
											{
												iVar8 = -1;
											}
											else if (unk_0x1AAF0C23233C57AF(iVar9, 0, 0))
											{
												iVar8 = 0;
											}
											else if (unk_0x1AAF0C23233C57AF(iVar9, 1, 0))
											{
												iVar8 = 1;
											}
											else if (unk_0x1AAF0C23233C57AF(iVar9, 2, 0))
											{
												iVar8 = 2;
											}
											if (func_167(iVar9))
											{
												if (unk_0xF4FCC3C1048FF2AB(Local_111[iVar0 /*14*/], -1794415470) != 1)
												{
													unk_0xD179FA0466FA4FE3(Local_111[iVar0 /*14*/], iVar9, 1000, iVar8, 2f, 16, 0);
												}
												unk_0x91629AC1E1F78419(Local_111[iVar0 /*14*/], 3, 0);
											}
											else
											{
												unk_0x02537C8C1BEEB477(&(Local_111[iVar0 /*14*/]));
											}
										}
										else
										{
											unk_0x02537C8C1BEEB477(&(Local_111[iVar0 /*14*/]));
										}
									}
									else if (!unk_0x8F97799512B006B7(Local_111[iVar0 /*14*/], 0))
									{
										unk_0xB8CBD998685C0685(Local_111[iVar0 /*14*/], unk_0xBC25C936A095B5BA(), 0, 16);
									}
								}
								else if (unk_0xCBBE5AFE2CD2E9B6(Local_111[iVar0 /*14*/]))
								{
									if (func_166(unk_0xBC25C936A095B5BA(), Local_111[iVar0 /*14*/], 1) < 35f)
									{
										if (func_165(Local_111[iVar0 /*14*/], unk_0x9FE9D386222EEE47(Local_111[iVar0 /*14*/], 0)) == -1)
										{
											if ((unk_0x105601648511CC64() - iLocal_469) > 40000)
											{
												if (bLocal_470)
												{
													bLocal_470 = false;
													iLocal_469 = unk_0x105601648511CC64();
												}
												else
												{
													bLocal_470 = true;
													iLocal_469 = unk_0x105601648511CC64();
												}
											}
											if (bLocal_470)
											{
												if (!func_182(Local_111[iVar0 /*14*/], -1273030092, 1))
												{
													unk_0x7AB043D579636764(Local_111[iVar0 /*14*/], unk_0x9FE9D386222EEE47(Local_111[iVar0 /*14*/], 0), Local_94[0 /*2*/], 1, 11f, 786468, -1f, 20, 0f);
												}
											}
											else if (!unk_0x8F97799512B006B7(Local_111[iVar0 /*14*/], 0))
											{
												unk_0xB8CBD998685C0685(Local_111[iVar0 /*14*/], unk_0xBC25C936A095B5BA(), 0, 16);
											}
										}
										else if (!unk_0x8F97799512B006B7(Local_111[iVar0 /*14*/], 0))
										{
											unk_0xB8CBD998685C0685(Local_111[iVar0 /*14*/], unk_0xBC25C936A095B5BA(), 0, 16);
										}
										if (unk_0x8910237449BB6F79(unk_0xBC25C936A095B5BA()) < 2f && func_166(unk_0xBC25C936A095B5BA(), Local_111[iVar0 /*14*/], 1) < 20f)
										{
											unk_0x91629AC1E1F78419(Local_111[iVar0 /*14*/], 3, 1);
										}
										else
										{
											unk_0x91629AC1E1F78419(Local_111[iVar0 /*14*/], 3, 0);
										}
									}
									else if (!unk_0x8F97799512B006B7(Local_111[iVar0 /*14*/], 0))
									{
										unk_0xB8CBD998685C0685(Local_111[iVar0 /*14*/], unk_0xBC25C936A095B5BA(), 0, 16);
									}
								}
								else if (!unk_0x8F97799512B006B7(Local_111[iVar0 /*14*/], 0))
								{
									unk_0xB8CBD998685C0685(Local_111[iVar0 /*14*/], unk_0xBC25C936A095B5BA(), 0, 16);
								}
							}
							else if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_94[0 /*2*/], 0))
							{
								unk_0x91629AC1E1F78419(Local_111[iVar0 /*14*/], 1, 0);
								unk_0x91629AC1E1F78419(Local_111[iVar0 /*14*/], 3, 1);
								unk_0xED9A67BF9F6ED860(Local_111[iVar0 /*14*/], 0);
								unk_0x54480313BB3E8DD0(Local_111[iVar0 /*14*/], 2);
							}
						}
						iVar0++;
					}
					iLocal_435 = func_170();
					break;
			}
			break;
	}
}

int func_165(int iParam0, int iParam1)
{
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0) && !unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		if (unk_0x25EF720B1CAB1E23(iParam0, iParam1))
		{
			if (unk_0x3187EF5798B5D209(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (unk_0x3187EF5798B5D209(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0x3187EF5798B5D209(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (unk_0x3187EF5798B5D209(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

float func_166(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		Var0 = { unk_0x541C2AEF053615BC(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x541C2AEF053615BC(iParam0, 0) };
	}
	if (!unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		Var3 = { unk_0x541C2AEF053615BC(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x541C2AEF053615BC(iParam1, 0) };
	}
	return unk_0xF0F2FC9DE291567F(Var0, Var3, iParam2);
}

int func_167(int iParam0)
{
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (unk_0x1AAF0C23233C57AF(iParam0, -1, 0))
		{
			return 1;
		}
		if (unk_0x1AAF0C23233C57AF(iParam0, 0, 0))
		{
			return 1;
		}
		if (unk_0x1AAF0C23233C57AF(iParam0, 1, 0))
		{
			return 1;
		}
		if (unk_0x1AAF0C23233C57AF(iParam0, 2, 0))
		{
			return 1;
		}
	}
	return 0;
}

var func_168(int iParam0)
{
	var uVar0;
	float fVar1;
	
	uVar0 = Local_94[1 /*2*/];
	fVar1 = 9999f;
	if (func_31(Local_94[1 /*2*/]))
	{
		if (func_166(iParam0, Local_94[1 /*2*/], 1) < fVar1)
		{
			fVar1 = func_166(iParam0, Local_94[1 /*2*/], 1);
			if (func_167(Local_94[1 /*2*/]))
			{
				uVar0 = Local_94[1 /*2*/];
			}
			else
			{
				uVar0 = Local_94[2 /*2*/];
			}
		}
	}
	if (func_31(Local_94[2 /*2*/]))
	{
		if (func_166(iParam0, Local_94[2 /*2*/], 1) < fVar1)
		{
			fVar1 = func_166(iParam0, Local_94[2 /*2*/], 1);
			if (func_167(Local_94[2 /*2*/]))
			{
				uVar0 = Local_94[2 /*2*/];
			}
			else
			{
				uVar0 = Local_94[1 /*2*/];
			}
		}
	}
	return uVar0;
}

float func_169(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		Var0 = { unk_0x541C2AEF053615BC(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x541C2AEF053615BC(iParam0, 0) };
	}
	return unk_0xF0F2FC9DE291567F(Var0, Param1, iParam4);
}

int func_170()
{
	if (func_31(unk_0xBC25C936A095B5BA()) && func_31(Local_94[0 /*2*/]))
	{
		if (func_169(Local_94[0 /*2*/], Local_460, 1) > 120f)
		{
			return 4;
		}
		else if (func_169(unk_0xBC25C936A095B5BA(), Local_460, 1) <= 120f)
		{
			return 2;
		}
		else if (func_169(unk_0xBC25C936A095B5BA(), Local_460, 1) > 120f && !unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_94[0 /*2*/], 0))
		{
			return 3;
		}
	}
	return 2;
}

void func_171(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_31(Local_111[iParam0 /*14*/]))
	{
		if (iParam0 == 0)
		{
			if (func_172(0) == 1)
			{
				Var1 = { Local_73 };
				fVar4 = 4.5f;
				iVar0 = Local_94[1 /*2*/];
			}
			else if (func_172(0) == 2)
			{
				Var1 = { Local_79 };
				fVar4 = 4.5f;
				iVar0 = Local_94[1 /*2*/];
			}
			else if (func_172(0) == 3)
			{
				Var1 = { Local_52 };
				fVar4 = 3.8f;
				iVar0 = Local_94[0 /*2*/];
			}
			else if (func_172(0) == 4)
			{
				Var1 = { Local_73 };
				fVar4 = 4.5f;
				iVar0 = Local_94[2 /*2*/];
			}
		}
		else if (iParam0 == 1)
		{
			if (func_172(0) == 1)
			{
				Var1 = { Local_76 };
				fVar4 = 2.8f;
				iVar0 = Local_94[1 /*2*/];
			}
			else if (func_172(0) == 2)
			{
				Var1 = { Local_64 };
				fVar4 = 5f;
				iVar0 = Local_94[0 /*2*/];
			}
			else if (func_172(0) == 3)
			{
				Var1 = { Local_64 };
				fVar4 = 5f;
				iVar0 = Local_94[0 /*2*/];
			}
			else if (func_172(0) == 4)
			{
				Var1 = { Local_73 };
				fVar4 = 4.5f;
				iVar0 = Local_94[1 /*2*/];
			}
		}
		else if (iParam0 == 2)
		{
			if (func_172(0) == 1)
			{
				Var1 = { Local_61 };
				fVar4 = 3.8f;
				iVar0 = Local_94[0 /*2*/];
			}
			else if (func_172(0) == 2)
			{
				Var1 = { Local_79 };
				fVar4 = 4.5f;
				iVar0 = Local_94[1 /*2*/];
			}
			else if (func_172(0) == 3)
			{
				Var1 = { Local_76 };
				fVar4 = 2.8f;
				iVar0 = Local_94[1 /*2*/];
			}
			else if (func_172(0) == 4)
			{
				Var1 = { Local_76 };
				fVar4 = 2.8f;
				iVar0 = Local_94[1 /*2*/];
			}
		}
		else if (iParam0 == 3)
		{
			if (func_172(0) == 1)
			{
				Var1 = { Local_64 };
				fVar4 = 4.5f;
				iVar0 = Local_94[0 /*2*/];
			}
			else if (func_172(0) == 2)
			{
				Var1 = { Local_76 };
				fVar4 = 2.8f;
				iVar0 = Local_94[1 /*2*/];
			}
			else if (func_172(0) == 3)
			{
				Var1 = { Local_76 };
				fVar4 = 2.8f;
				iVar0 = Local_94[1 /*2*/];
			}
			else if (func_172(0) == 4)
			{
				Var1 = { Local_76 };
				fVar4 = 2.8f;
				iVar0 = Local_94[1 /*2*/];
			}
		}
		else if (iParam0 == 5)
		{
			if (func_172(0) == 1)
			{
				Var1 = { Local_76 };
				fVar4 = 2.8f;
				iVar0 = Local_94[2 /*2*/];
			}
			else if (func_172(0) == 2)
			{
				Var1 = { Local_79 };
				fVar4 = 4.5f;
				iVar0 = Local_94[2 /*2*/];
			}
			else if (func_172(0) == 3)
			{
				Var1 = { Local_70 };
				fVar4 = 2.8f;
				iVar0 = Local_94[2 /*2*/];
			}
			else if (func_172(0) == 4)
			{
				Var1 = { Local_55 };
				fVar4 = 5f;
				iVar0 = Local_94[0 /*2*/];
			}
		}
		else if (iParam0 == 6)
		{
			if (func_172(0) == 1)
			{
				Var1 = { Local_79 };
				fVar4 = 4.5f;
				iVar0 = Local_94[2 /*2*/];
			}
			else if (func_172(0) == 2)
			{
				Var1 = { Local_67 };
				fVar4 = 5f;
				iVar0 = Local_94[0 /*2*/];
			}
			else if (func_172(0) == 3)
			{
				Var1 = { Local_70 };
				fVar4 = 2.8f;
				iVar0 = Local_94[2 /*2*/];
			}
			else if (func_172(0) == 4)
			{
				Var1 = { Local_73 };
				fVar4 = 4.5f;
				iVar0 = Local_94[2 /*2*/];
			}
		}
		else if (iParam0 == 7)
		{
			if (func_172(0) == 1)
			{
				Var1 = { Local_79 };
				fVar4 = 4.5f;
				iVar0 = Local_94[2 /*2*/];
			}
			else if (func_172(0) == 2)
			{
				Var1 = { Local_79 };
				fVar4 = 4.5f;
				iVar0 = Local_94[2 /*2*/];
			}
			else if (func_172(0) == 3)
			{
				Var1 = { Local_73 };
				fVar4 = 4.5f;
				iVar0 = Local_94[2 /*2*/];
			}
			else if (func_172(0) == 4)
			{
				Var1 = { Local_58 };
				fVar4 = 5f;
				iVar0 = Local_94[0 /*2*/];
			}
		}
		else if (iParam0 == 8)
		{
			if (func_172(0) == 1)
			{
				Var1 = { Local_55 };
				fVar4 = 5f;
				iVar0 = Local_94[0 /*2*/];
			}
			else if (func_172(0) == 2)
			{
				Var1 = { Local_64 };
				fVar4 = 5f;
				iVar0 = Local_94[0 /*2*/];
			}
			else if (func_172(0) == 3)
			{
				Var1 = { Local_73 };
				fVar4 = 4.5f;
				iVar0 = Local_94[2 /*2*/];
			}
			else if (func_172(0) == 4)
			{
				Var1 = { Local_73 };
				fVar4 = 4.5f;
				iVar0 = Local_94[2 /*2*/];
			}
		}
		else if (iParam0 == 4)
		{
			if (func_172(0) == 1)
			{
				Var1 = { Local_58 };
				fVar4 = 5f;
				iVar0 = Local_94[0 /*2*/];
			}
			else if (func_172(0) == 2)
			{
				Var1 = { Local_67 };
				fVar4 = 5f;
				iVar0 = Local_94[0 /*2*/];
			}
			else if (func_172(0) == 3)
			{
				Var1 = { Local_67 };
				fVar4 = 5f;
				iVar0 = Local_94[0 /*2*/];
			}
			else if (func_172(0) == 4)
			{
				Var1 = { Local_55 };
				fVar4 = 5f;
				iVar0 = Local_94[0 /*2*/];
			}
		}
		if (!Local_111[iParam0 /*14*/].f_12)
		{
			if (func_31(iVar0))
			{
				unk_0xE95574194EEDAEF7(Local_111[iParam0 /*14*/], unk_0xA4455714F3DCE207(iVar0, Var1), fVar4, 0, 0);
			}
			else if (func_31(Local_94[0 /*2*/]))
			{
				if (func_172(Local_94[0 /*2*/]) == 1)
				{
					unk_0xDE6B8773FB16B4DE(Local_111[iParam0 /*14*/], Local_94[0 /*2*/], Local_61, 3.8f, 0);
				}
				else if (func_172(Local_94[0 /*2*/]) == 2)
				{
					unk_0xDE6B8773FB16B4DE(Local_111[iParam0 /*14*/], Local_94[0 /*2*/], -6f, 0f, -0.5f, 6f, 0);
				}
				else if (func_172(Local_94[0 /*2*/]) == 3)
				{
					unk_0xDE6B8773FB16B4DE(Local_111[iParam0 /*14*/], Local_94[0 /*2*/], Local_52, 3.8f, 0);
				}
				else if (func_172(Local_94[0 /*2*/]) == 4)
				{
					unk_0xDE6B8773FB16B4DE(Local_111[iParam0 /*14*/], Local_94[0 /*2*/], 6f, 0f, -0.5f, 6f, 0);
				}
			}
		}
	}
}

int func_172(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (iParam0 == 0)
	{
		iParam0 = Local_94[0 /*2*/];
	}
	if (func_31(unk_0xBC25C936A095B5BA()) && func_31(iParam0))
	{
		Var0 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
		Var3 = { unk_0x1483995DFFF0DEEA(iParam0, Var0) };
		fVar6 = unk_0x77211CE25DED4FDB(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1);
		if (Var3.f_0 < 0f)
		{
			fVar6 = (fVar6 * -1f);
		}
	}
	if ((fVar6 <= 45f && fVar6 >= 0f) || (fVar6 >= -45f && fVar6 <= 0f))
	{
		return 1;
	}
	else if (fVar6 <= 135f && fVar6 >= 0f)
	{
		return 2;
	}
	else if (fVar6 >= -135f && fVar6 <= 0f)
	{
		return 4;
	}
	else
	{
		return 3;
	}
	return 1;
}

float func_173(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_174()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	struct<3> Var16;
	int iVar19;
	struct<3> Var20;
	struct<3> Var23;
	
	unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iLocal_459, 1);
	iVar0 = 0;
	while (iVar0 <= (9 - 1))
	{
		if (func_31(Local_111[iVar0 /*14*/]))
		{
			if (((((unk_0x8F97799512B006B7(Local_111[iVar0 /*14*/], 0) || unk_0xABB2AFD7539464EA(Local_111[iVar0 /*14*/])) || unk_0x687BD6F7DF82B377(Local_111[iVar0 /*14*/], 0)) || unk_0xCDE4868DBC945E20(Local_111[iVar0 /*14*/])) || unk_0xA4813477CC5DD00F(Local_111[iVar0 /*14*/])) || unk_0xD9C1758D86688CEA(Local_111[iVar0 /*14*/], unk_0xBC25C936A095B5BA(), 1))
			{
				bLocal_456 = true;
			}
			if ((unk_0x105601648511CC64() - iLocal_468) > 800)
			{
				if (unk_0xBF94E62A1FA7B7F3(Local_111[iVar0 /*14*/], 123) || unk_0xBF94E62A1FA7B7F3(Local_111[iVar0 /*14*/], 124))
				{
					bLocal_456 = true;
				}
			}
			if (unk_0x5CEC84BB4AC55121(Local_111[iVar0 /*14*/], unk_0xBC25C936A095B5BA()) && (unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), Local_111[iVar0 /*14*/]) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), Local_111[iVar0 /*14*/])))
			{
				if (iLocal_459 != 0)
				{
					if (unk_0x1966F403E5C2133D(iLocal_459) != joaat("GROUP_MELEE") && iLocal_459 != joaat("weapon_unarmed"))
					{
						if ((unk_0x105601648511CC64() - Local_111[iVar0 /*14*/].f_11) > 800)
						{
							bLocal_456 = true;
						}
					}
				}
			}
			else
			{
				Local_111[iVar0 /*14*/].f_11 = unk_0x105601648511CC64();
			}
		}
		else
		{
			bLocal_456 = true;
		}
		iVar0++;
	}
	if (func_31(Local_94[1 /*2*/]))
	{
		if (((unk_0xD9C1758D86688CEA(Local_94[1 /*2*/], unk_0xBC25C936A095B5BA(), 0) || unk_0x27ED965409C55F9D(unk_0xBC25C936A095B5BA(), Local_94[1 /*2*/], 0, -1)) || unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_94[1 /*2*/], 1)) || unk_0x702B2D223F333084(unk_0xBC25C936A095B5BA(), Local_94[1 /*2*/]))
		{
			bLocal_456 = true;
		}
		else if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0xEA8F5A4C494DBF3B(unk_0xBC25C936A095B5BA(), joaat("towtruck")) || unk_0xEA8F5A4C494DBF3B(unk_0xBC25C936A095B5BA(), joaat("towtruck2")))
			{
				if (unk_0x27C9F6C1391327CF(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), Local_94[1 /*2*/]))
				{
					bLocal_456 = true;
				}
			}
		}
		if (func_178(0f, 0f, 0f, 0f, 0f, 0f, unk_0x541C2AEF053615BC(Local_94[1 /*2*/], 0), 30f, 0))
		{
			bLocal_456 = true;
		}
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), Local_94[1 /*2*/]) && fLocal_463 >= 7f)
			{
				bLocal_456 = true;
			}
			Var1 = { func_177(unk_0x541C2AEF053615BC(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0) - unk_0x541C2AEF053615BC(Local_94[1 /*2*/], 0)) };
			Var4 = { unk_0xB5D9AE572C19509E(Local_94[1 /*2*/]) - unk_0xB5D9AE572C19509E(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)) };
			fLocal_463 = func_176(Var4, Var1);
		}
	}
	else
	{
		bLocal_456 = true;
	}
	if (func_31(Local_94[2 /*2*/]))
	{
		if (((unk_0xD9C1758D86688CEA(Local_94[2 /*2*/], unk_0xBC25C936A095B5BA(), 0) || unk_0x27ED965409C55F9D(unk_0xBC25C936A095B5BA(), Local_94[2 /*2*/], 0, -1)) || unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_94[2 /*2*/], 1)) || unk_0x702B2D223F333084(unk_0xBC25C936A095B5BA(), Local_94[2 /*2*/]))
		{
			bLocal_456 = true;
		}
		else if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0xEA8F5A4C494DBF3B(unk_0xBC25C936A095B5BA(), joaat("towtruck")) || unk_0xEA8F5A4C494DBF3B(unk_0xBC25C936A095B5BA(), joaat("towtruck2")))
			{
				if (unk_0x27C9F6C1391327CF(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), Local_94[2 /*2*/]))
				{
					bLocal_456 = true;
				}
			}
		}
		if (func_178(0f, 0f, 0f, 0f, 0f, 0f, unk_0x541C2AEF053615BC(Local_94[2 /*2*/], 0), 30f, 0))
		{
			bLocal_456 = true;
		}
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), Local_94[2 /*2*/]) && fLocal_465 >= 7f)
			{
				bLocal_456 = true;
			}
			Var7 = { func_177(unk_0x541C2AEF053615BC(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0) - unk_0x541C2AEF053615BC(Local_94[2 /*2*/], 0)) };
			Var10 = { unk_0xB5D9AE572C19509E(Local_94[2 /*2*/]) - unk_0xB5D9AE572C19509E(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)) };
			fLocal_465 = func_176(Var10, Var7);
		}
	}
	else
	{
		bLocal_456 = true;
	}
	if (func_31(Local_94[0 /*2*/]))
	{
		if (func_166(unk_0xBC25C936A095B5BA(), unk_0xBC25C936A095B5BA(), 1) < 45f && unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
		{
			bLocal_456 = true;
		}
		if (func_178(0f, 0f, 0f, 0f, 0f, 0f, unk_0x541C2AEF053615BC(Local_94[0 /*2*/], 0), 30f, 0))
		{
			bLocal_456 = true;
		}
		if (((unk_0xD9C1758D86688CEA(Local_94[0 /*2*/], unk_0xBC25C936A095B5BA(), 0) || unk_0x27ED965409C55F9D(unk_0xBC25C936A095B5BA(), Local_94[0 /*2*/], 0, -1)) || unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_94[0 /*2*/], 1)) || unk_0x702B2D223F333084(unk_0xBC25C936A095B5BA(), Local_94[0 /*2*/]))
		{
			bLocal_456 = true;
		}
		else if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0xEA8F5A4C494DBF3B(unk_0xBC25C936A095B5BA(), joaat("towtruck")) || unk_0xEA8F5A4C494DBF3B(unk_0xBC25C936A095B5BA(), joaat("towtruck2")))
			{
				if (unk_0x27C9F6C1391327CF(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), Local_94[0 /*2*/]))
				{
					bLocal_456 = true;
				}
			}
		}
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), Local_94[0 /*2*/]) && fLocal_464 >= 7f)
			{
				bLocal_456 = true;
			}
			Var13 = { func_177(unk_0x541C2AEF053615BC(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0) - unk_0x541C2AEF053615BC(Local_94[0 /*2*/], 0)) };
			Var16 = { unk_0xB5D9AE572C19509E(Local_94[0 /*2*/]) - unk_0xB5D9AE572C19509E(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)) };
			fLocal_464 = func_176(Var16, Var13);
		}
		if (func_175())
		{
			iVar19 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if (unk_0xE59B7F5A03335350(iVar19, 0))
			{
				if (unk_0xE921F8171F0733B3(iVar19, Local_94[0 /*2*/]))
				{
					bLocal_456 = true;
				}
				Var20 = { func_177(unk_0x541C2AEF053615BC(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0) - unk_0x541C2AEF053615BC(Local_94[0 /*2*/], 0)) };
				Var23 = { unk_0xB5D9AE572C19509E(Local_94[0 /*2*/]) - unk_0xB5D9AE572C19509E(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)) };
				fLocal_464 = func_176(Var23, Var20);
			}
		}
	}
	else
	{
		bLocal_456 = true;
	}
}

bool func_175()
{
	return unk_0xFA30DFD0084E92FE(Global_2519572.f_784, 2);
}

float func_176(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_177(struct<3> Param0)
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

int func_178(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	if (!func_179(Param0 + Param3))
	{
		if ((((((((((((((((((((((unk_0xCD6353203C21B4FD(5, Param3, Param0) || (unk_0xCD6353203C21B4FD(2, Param3, Param0) && !bParam10)) || (unk_0xCD6353203C21B4FD(20, Param3, Param0) && !bParam10)) || unk_0xCD6353203C21B4FD(4, Param3, Param0)) || (unk_0xCD6353203C21B4FD(28, Param3, Param0) && !bParam10)) || unk_0xCD6353203C21B4FD(32, Param3, Param0)) || unk_0xCD6353203C21B4FD(25, Param3, Param0)) || unk_0xCD6353203C21B4FD(9, Param3, Param0)) || (unk_0xCD6353203C21B4FD(3, Param3, Param0) && !bParam10)) || (unk_0xCD6353203C21B4FD(6, Param3, Param0) && !bParam10)) || unk_0xCD6353203C21B4FD(0, Param3, Param0)) || unk_0xCD6353203C21B4FD(1, Param3, Param0)) || unk_0xCD6353203C21B4FD(23, Param3, Param0)) || unk_0xCD6353203C21B4FD(34, Param3, Param0)) || unk_0xCD6353203C21B4FD(14, Param3, Param0)) || (unk_0xCD6353203C21B4FD(30, Param3, Param0) && !bParam10)) || (unk_0xCD6353203C21B4FD(12, Param3, Param0) && !bParam10)) || unk_0xCD6353203C21B4FD(7, Param3, Param0)) || (unk_0xCD6353203C21B4FD(21, Param3, Param0) && !bParam10)) || (unk_0xCD6353203C21B4FD(18, Param3, Param0) && !bParam10)) || unk_0xCD6353203C21B4FD(15, Param3, Param0)) || unk_0xCD6353203C21B4FD(10, Param3, Param0)) || unk_0xCD6353203C21B4FD(27, Param3, Param0))
		{
			iVar0 = 1;
		}
	}
	else if ((((((((((((((((((((((unk_0xC9FA5D38428AB6BE(5, Param6, fParam9) || (unk_0xC9FA5D38428AB6BE(2, Param6, fParam9) && !bParam10)) || (unk_0xC9FA5D38428AB6BE(20, Param6, fParam9) && !bParam10)) || unk_0xC9FA5D38428AB6BE(4, Param6, fParam9)) || (unk_0xC9FA5D38428AB6BE(28, Param6, fParam9) && !bParam10)) || unk_0xC9FA5D38428AB6BE(32, Param6, fParam9)) || unk_0xC9FA5D38428AB6BE(25, Param6, fParam9)) || unk_0xC9FA5D38428AB6BE(9, Param6, fParam9)) || (unk_0xC9FA5D38428AB6BE(3, Param6, fParam9) && !bParam10)) || (unk_0xC9FA5D38428AB6BE(6, Param6, fParam9) && !bParam10)) || unk_0xC9FA5D38428AB6BE(0, Param6, fParam9)) || unk_0xC9FA5D38428AB6BE(1, Param6, fParam9)) || unk_0xC9FA5D38428AB6BE(23, Param6, fParam9)) || unk_0xC9FA5D38428AB6BE(34, Param6, fParam9)) || unk_0xC9FA5D38428AB6BE(14, Param6, fParam9)) || (unk_0xC9FA5D38428AB6BE(30, Param6, fParam9) && !bParam10)) || (unk_0xC9FA5D38428AB6BE(12, Param6, fParam9) && !bParam10)) || unk_0xC9FA5D38428AB6BE(7, Param6, fParam9)) || (unk_0xC9FA5D38428AB6BE(21, Param6, fParam9) && !bParam10)) || (unk_0xC9FA5D38428AB6BE(18, Param6, fParam9) && !bParam10)) || unk_0xC9FA5D38428AB6BE(15, Param6, fParam9)) || unk_0xC9FA5D38428AB6BE(10, Param6, fParam9)) || unk_0xC9FA5D38428AB6BE(27, Param6, fParam9))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_179(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_180()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	
	if (((((func_31(Local_94[0 /*2*/]) && func_31(Local_94[1 /*2*/])) && func_31(Local_94[2 /*2*/])) && func_31(Local_111[4 /*14*/])) && func_31(Local_111[0 /*14*/])) && func_31(Local_111[5 /*14*/]))
	{
		Var0 = { unk_0xA4455714F3DCE207(Local_94[0 /*2*/], 0f, func_173(func_166(Local_94[0 /*2*/], Local_94[1 /*2*/], 1), 3f, 25f), 5.5f) };
		Var3 = { unk_0xA4455714F3DCE207(Local_94[0 /*2*/], 0f, 0f, -6f) };
		Var6 = { unk_0xA4455714F3DCE207(Local_94[1 /*2*/], 0f, 20f, 5f) };
		Var9 = { unk_0xA4455714F3DCE207(Local_94[1 /*2*/], 0f, 0f, -6f) };
		Var12 = { unk_0xA4455714F3DCE207(Local_94[2 /*2*/], 0f, func_173(func_166(Local_94[2 /*2*/], Local_94[0 /*2*/], 1), 3f, 25f), 5f) };
		Var15 = { unk_0xA4455714F3DCE207(Local_94[2 /*2*/], 0f, 0f, -6f) };
		switch (iLocal_433)
		{
			case 0:
				if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Var6, Var9, 9f, 0, 1, 0))
				{
					if (unk_0x8910237449BB6F79(Local_94[1 /*2*/]) < 1f && unk_0x8910237449BB6F79(unk_0xBC25C936A095B5BA()) < 1f)
					{
						fLocal_1486[1] = (fLocal_1486[1] + unk_0x11F9F9006143871A());
					}
					else if (fLocal_1486[1] > 0f)
					{
						fLocal_1486[1] = (fLocal_1486[1] - (unk_0x11F9F9006143871A() * 10f));
					}
				}
				if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Var0, Var3, 9f, 0, 1, 0))
				{
					if (unk_0x8910237449BB6F79(Local_94[0 /*2*/]) < 1f && unk_0x8910237449BB6F79(unk_0xBC25C936A095B5BA()) < 1f)
					{
						fLocal_1486[0] = (fLocal_1486[0] + unk_0x11F9F9006143871A());
					}
					else if (fLocal_1486[0] > 0f)
					{
						fLocal_1486[0] = (fLocal_1486[0] - (unk_0x11F9F9006143871A() * 10f));
					}
				}
				if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Var12, Var15, 9f, 0, 1, 0))
				{
					if (unk_0x8910237449BB6F79(Local_94[2 /*2*/]) < 1f && unk_0x8910237449BB6F79(unk_0xBC25C936A095B5BA()) < 1f)
					{
						fLocal_1486[2] = (fLocal_1486[2] + unk_0x11F9F9006143871A());
					}
					else if (fLocal_1486[2] > 0f)
					{
						fLocal_1486[2] = (fLocal_1486[2] - (unk_0x11F9F9006143871A() * 10f));
					}
				}
				if (fLocal_1486[1] > 1.5f)
				{
					iLocal_474 = Local_111[0 /*14*/];
					unk_0xA4E856A8CD53B8DF(Local_111[4 /*14*/]);
					unk_0xA4E856A8CD53B8DF(Local_111[0 /*14*/]);
					unk_0xA4E856A8CD53B8DF(Local_111[5 /*14*/]);
					unk_0x241D744C1CCBC526(Local_94[0 /*2*/], 4f, 1, 0);
					unk_0x241D744C1CCBC526(Local_94[1 /*2*/], 4f, 1, 0);
					unk_0x241D744C1CCBC526(Local_94[2 /*2*/], 4f, 1, 0);
					unk_0xC5A6DFE2B8987B17(&uLocal_446);
					if (unk_0x5237AF95232D78C5(Local_111[0 /*14*/], 0))
					{
						unk_0xA3981DED4FC2E56E(0, 0, 65536);
					}
					unk_0xF90A8AD825CA2E0C(0, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), 1000, 0, 1);
					unk_0xD0231395241DBA85(0, unk_0xBC25C936A095B5BA(), unk_0xBC25C936A095B5BA(), 1f, 0, 3f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
					unk_0x57D65255D3D3B6A7(0, unk_0xBC25C936A095B5BA(), -1, 0);
					unk_0x535008C596714F9E(uLocal_446);
					unk_0xA8E6405305C0D7DF(Local_111[0 /*14*/], uLocal_446);
					unk_0x02DAF06EA4F08219(&uLocal_446);
					iLocal_433 = 1;
				}
				else if (fLocal_1486[0] > 1.5f)
				{
					iLocal_474 = Local_111[4 /*14*/];
					unk_0xA4E856A8CD53B8DF(Local_111[4 /*14*/]);
					unk_0xA4E856A8CD53B8DF(Local_111[0 /*14*/]);
					unk_0xA4E856A8CD53B8DF(Local_111[5 /*14*/]);
					unk_0x241D744C1CCBC526(Local_94[0 /*2*/], 4f, 1, 0);
					unk_0x241D744C1CCBC526(Local_94[1 /*2*/], 4f, 1, 0);
					unk_0x241D744C1CCBC526(Local_94[2 /*2*/], 4f, 1, 0);
					unk_0xC5A6DFE2B8987B17(&uLocal_446);
					if (unk_0x5237AF95232D78C5(Local_111[4 /*14*/], 0))
					{
						unk_0xA3981DED4FC2E56E(0, 0, 65536);
					}
					unk_0xF90A8AD825CA2E0C(0, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), 1000, 0, 1);
					unk_0xD0231395241DBA85(0, unk_0xBC25C936A095B5BA(), unk_0xBC25C936A095B5BA(), 1f, 0, 3f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
					unk_0x57D65255D3D3B6A7(0, unk_0xBC25C936A095B5BA(), -1, 0);
					unk_0x535008C596714F9E(uLocal_446);
					unk_0xA8E6405305C0D7DF(Local_111[4 /*14*/], uLocal_446);
					unk_0x02DAF06EA4F08219(&uLocal_446);
					iLocal_433 = 1;
				}
				else if (fLocal_1486[2] > 1.5f)
				{
					iLocal_474 = Local_111[5 /*14*/];
					unk_0xA4E856A8CD53B8DF(Local_111[4 /*14*/]);
					unk_0xA4E856A8CD53B8DF(Local_111[0 /*14*/]);
					unk_0xA4E856A8CD53B8DF(Local_111[5 /*14*/]);
					unk_0x241D744C1CCBC526(Local_94[0 /*2*/], 4f, 1, 0);
					unk_0x241D744C1CCBC526(Local_94[1 /*2*/], 4f, 1, 0);
					unk_0x241D744C1CCBC526(Local_94[2 /*2*/], 4f, 1, 0);
					unk_0xC5A6DFE2B8987B17(&uLocal_446);
					if (unk_0x5237AF95232D78C5(Local_111[5 /*14*/], 0))
					{
						unk_0xA3981DED4FC2E56E(0, 0, 65536);
					}
					unk_0xF90A8AD825CA2E0C(0, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), 1000, 0, 1);
					unk_0xD0231395241DBA85(0, unk_0xBC25C936A095B5BA(), unk_0xBC25C936A095B5BA(), 1f, 0, 3f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
					unk_0x57D65255D3D3B6A7(0, unk_0xBC25C936A095B5BA(), -1, 0);
					unk_0x535008C596714F9E(uLocal_446);
					unk_0xA8E6405305C0D7DF(Local_111[5 /*14*/], uLocal_446);
					unk_0x02DAF06EA4F08219(&uLocal_446);
					iLocal_433 = 1;
				}
				else
				{
					if ((unk_0x5237AF95232D78C5(Local_111[5 /*14*/], 0) && unk_0x5237AF95232D78C5(Local_111[0 /*14*/], 0)) && unk_0x5237AF95232D78C5(Local_111[4 /*14*/], 0))
					{
						if (!unk_0x3C9DB165D131D628(Local_94[1 /*2*/]))
						{
							unk_0xEB469C5B92ADC7B0(Local_111[0 /*14*/], Local_94[1 /*2*/], &cLocal_475, 786603, 0, 24, -1, 11f, 0, 1073741824);
						}
						if (unk_0xF4FCC3C1048FF2AB(Local_111[4 /*14*/], -1273030092) != 1)
						{
							unk_0x7AB043D579636764(Local_111[4 /*14*/], Local_94[0 /*2*/], Local_94[1 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
						}
						if (unk_0xF4FCC3C1048FF2AB(Local_111[5 /*14*/], -1273030092) != 1)
						{
							unk_0x7AB043D579636764(Local_111[5 /*14*/], Local_94[2 /*2*/], Local_94[0 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
						}
						unk_0x007915AC58E9B361(Local_94[0 /*2*/], 1);
						unk_0x1B54FE28946FE109(Local_94[0 /*2*/], 1);
						unk_0xBC4446112971E475(Local_94[0 /*2*/], 1);
						unk_0x007915AC58E9B361(Local_94[1 /*2*/], 1);
						unk_0x1B54FE28946FE109(Local_94[1 /*2*/], 1);
						unk_0xBC4446112971E475(Local_94[1 /*2*/], 1);
						unk_0x007915AC58E9B361(Local_94[2 /*2*/], 1);
						unk_0x1B54FE28946FE109(Local_94[2 /*2*/], 1);
						unk_0xBC4446112971E475(Local_94[2 /*2*/], 1);
					}
					iLocal_473 = unk_0x105601648511CC64();
				}
				break;
			
			case 1:
				switch (iLocal_472)
				{
					case 0:
						if (!unk_0x5237AF95232D78C5(iLocal_474, 0))
						{
							func_28(&uLocal_238, 1, iLocal_474, "Armyped", 0, 1);
							iLocal_473 = unk_0x105601648511CC64();
							fLocal_1486[1] = 0f;
							fLocal_1486[2] = 0f;
							fLocal_1486[0] = 0f;
							iLocal_472++;
						}
						break;
					
					case 1:
						if ((unk_0x105601648511CC64() - iLocal_473) > 8000 && !func_9())
						{
							if (!unk_0x5237AF95232D78C5(iLocal_474, 0))
							{
								func_28(&uLocal_238, 1, iLocal_474, "Armyped", 0, 1);
								if (iLocal_458)
								{
									iLocal_458 = 0;
								}
								else
								{
									iLocal_473 = unk_0x105601648511CC64();
									iLocal_472++;
								}
							}
						}
						break;
					
					case 2:
						if ((unk_0x105601648511CC64() - iLocal_473) > 8000 && !func_9())
						{
							if (!unk_0x5237AF95232D78C5(iLocal_474, 0))
							{
								func_28(&uLocal_238, 1, iLocal_474, "Armyped", 0, 1);
								if (iLocal_458)
								{
									iLocal_458 = 0;
								}
								else
								{
									iLocal_473 = unk_0x105601648511CC64();
									iLocal_472++;
								}
							}
						}
						break;
					
					case 3:
						if ((unk_0x105601648511CC64() - iLocal_473) > 8000 && !func_9())
						{
							if (!unk_0x5237AF95232D78C5(iLocal_474, 0))
							{
								func_28(&uLocal_238, 1, iLocal_474, "Armyped", 0, 1);
								if (iLocal_458)
								{
									iLocal_458 = 0;
								}
								else
								{
									unk_0xC5A6DFE2B8987B17(&uLocal_446);
									unk_0xAD955309D7708805(0, unk_0xA4455714F3DCE207(unk_0xBC25C936A095B5BA(), 0.5f, 0f, -1f), 1000, 1566631136);
									unk_0xD0231395241DBA85(0, unk_0xBC25C936A095B5BA(), unk_0xBC25C936A095B5BA(), 1f, 0, 4f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
									unk_0x57D65255D3D3B6A7(0, unk_0xBC25C936A095B5BA(), -1, 0);
									unk_0x535008C596714F9E(uLocal_446);
									unk_0xA8E6405305C0D7DF(iLocal_474, uLocal_446);
									unk_0x02DAF06EA4F08219(&uLocal_446);
									iLocal_473 = unk_0x105601648511CC64();
									iLocal_468 = unk_0x105601648511CC64();
									iLocal_472++;
								}
							}
						}
						break;
					
					case 4:
						break;
				}
				if ((!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Var0, Var3, 9f, 0, 1, 0) && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Var6, Var9, 9f, 0, 1, 0)) && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Var12, Var15, 9f, 0, 1, 0))
				{
					if (unk_0xF4FCC3C1048FF2AB(iLocal_474, 1630799643) != 1)
					{
						unk_0x57D65255D3D3B6A7(iLocal_474, unk_0xBC25C936A095B5BA(), -1, 0);
					}
					if (unk_0x83666F9FB8FEBD4B() > 3000)
					{
						if (!unk_0x5237AF95232D78C5(iLocal_474, 0))
						{
							if (iLocal_474 == Local_111[4 /*14*/])
							{
								unk_0xD179FA0466FA4FE3(iLocal_474, Local_94[0 /*2*/], 20000, -1, 2f, 1, 0);
							}
							else if (iLocal_474 == Local_111[0 /*14*/])
							{
								unk_0xD179FA0466FA4FE3(iLocal_474, Local_94[1 /*2*/], 20000, -1, 2f, 1, 0);
							}
							else if (iLocal_474 == Local_111[5 /*14*/])
							{
								unk_0xD179FA0466FA4FE3(iLocal_474, Local_94[2 /*2*/], 20000, -1, 2f, 1, 0);
							}
						}
						iLocal_433 = 2;
					}
				}
				else
				{
					if (iLocal_472 == 4)
					{
						if ((unk_0x105601648511CC64() - iLocal_473) > 9000 && !func_9())
						{
							bLocal_456 = true;
						}
					}
					unk_0xC1B1E9A034A63A62(0);
				}
				break;
			
			case 2:
				if ((unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Var0, Var3, 9f, 0, 1, 0) || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Var6, Var9, 9f, 0, 1, 0)) || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Var12, Var15, 9f, 0, 1, 0))
				{
					iLocal_458 = 0;
					iLocal_433 = 0;
				}
				else if (unk_0x5237AF95232D78C5(iLocal_474, 0))
				{
					unk_0x7AB043D579636764(Local_111[4 /*14*/], Local_94[0 /*2*/], Local_94[1 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
					unk_0xEB469C5B92ADC7B0(Local_111[0 /*14*/], Local_94[1 /*2*/], &cLocal_475, 786603, 0, 24, -1, 11f, 0, 1073741824);
					unk_0x7AB043D579636764(Local_111[5 /*14*/], Local_94[2 /*2*/], Local_94[0 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
					iLocal_458 = 1;
					iLocal_433 = 0;
				}
				break;
			}
	}
}

void func_181(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_55968 = 0;
	if (!Global_56192[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_68062)
	{
		if (Global_68063[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_68063[iVar1 /*9*/].f_1 = 1;
			Global_68063[iVar1 /*9*/].f_2 = 0f;
			if (Global_68063[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

int func_182(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xF4FCC3C1048FF2AB(uParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_183(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_68062)
	{
		if (Global_68063[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_68063[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_68063[iVar0 /*9*/].f_1 = (Global_68063[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_68063[iVar0 /*9*/] != -1)
	{
		if (Global_56192[Global_68063[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_68063[iVar0 /*9*/].f_1 > 1)
			{
				Global_68063[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_68063[iVar0 /*9*/].f_1 < 0)
			{
				Global_68063[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

int func_184(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0xFC1CAE18F3ECBF2D();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (!unk_0x313CE760FC65D99D(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0xEA5D20C7C39B0EC6(iParam0, 1);
			}
			else
			{
				unk_0x12CB6C9EAE68146D(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x170F151F41735501(iParam0, iParam2);
			unk_0xBC50F5569FE1782F(iParam0, fParam6);
			if (unk_0x2DA8CA50A72528FB(*uParam1))
			{
				unk_0x12DB69036F6569F7(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x92AAB9588E601C23(iParam0, iParam9);
		}
		unk_0xD09C169D88640D1B(iParam0, iParam4);
		unk_0x1A3FEAE5BF447BC7(iParam0, iParam5);
		*uParam1 = unk_0x7B2A47C84FD0CB9D(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0x2DA8CA50A72528FB(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x0D5352939CC40C16(*uParam1, iParam8);
				}
				if (!unk_0xF1734B55490E9045(iParam7))
				{
					unk_0xB53F9D0C08974999("STRING");
					if (bParam10)
					{
						unk_0x607C19B90D297FE2(iParam7);
					}
					else
					{
						unk_0xC9C304D0AABE1335(iParam7);
					}
					unk_0x2E02627BEA5751E0(*uParam1);
				}
				unk_0x12DB69036F6569F7(*uParam1, 7);
			}
		}
		if (!unk_0xFA30DFD0084E92FE(uParam1->f_6, 2))
		{
			if (unk_0x2DA8CA50A72528FB(*uParam1))
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x5237AF95232D78C5(iParam0, 0))
		{
			uParam1->f_1 = unk_0x5556F7BFA35E0D94(iParam0);
			if (!unk_0xFA30DFD0084E92FE(uParam1->f_6, 3))
			{
				if (unk_0x2DA8CA50A72528FB(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0x0D5352939CC40C16(uParam1->f_1, iParam8);
					}
					if (!unk_0xF1734B55490E9045(iParam7))
					{
						unk_0xB53F9D0C08974999("STRING");
						if (bParam10)
						{
							unk_0x607C19B90D297FE2(iParam7);
						}
						else
						{
							unk_0xC9C304D0AABE1335(iParam7);
						}
						unk_0x2E02627BEA5751E0(uParam1->f_1);
					}
					unk_0x12DB69036F6569F7(uParam1->f_1, 7);
					unk_0xF0059F27F7BB6680(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0x2DA8CA50A72528FB(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0x7CB6FD92BE491AD9(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0x2DA8CA50A72528FB(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_185(var uParam0)
{
	if (unk_0xE59B7F5A03335350(*uParam0, 0))
	{
		if (((unk_0xBCDD4514E5CAE591(*uParam0, 0, 7000) || unk_0xBCDD4514E5CAE591(*uParam0, 3, 30000)) || unk_0xBCDD4514E5CAE591(*uParam0, 2, 30000)) || unk_0xBCDD4514E5CAE591(*uParam0, 1, 40000))
		{
			return 1;
		}
	}
	return 0;
}

void func_186(var uParam0)
{
	if (unk_0x724D816EA203A79E(*uParam0))
	{
		unk_0x1D403DFADBC2DE3C(*uParam0, 0);
		if (unk_0x5CAE759AE8219D20(*uParam0) && unk_0xB248FAA35ED47DB9(*uParam0, 1))
		{
			unk_0x1E7A09C1710FB071(uParam0);
		}
	}
}

void func_187(int iParam0)
{
	char* sVar0;
	
	unk_0x3857DADBD6EC8A54("RHP1_FAIL");
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "";
			break;
		
		case 3:
			sVar0 = "RHP_FDES";
			break;
		
		case 4:
			sVar0 = "RHP_TRKSTCK";
			break;
		
		case 2:
			sVar0 = "RHP_FEND";
			break;
		
		case 5:
			sVar0 = "RHP_FABN";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	func_189(sVar0);
	while (!func_188())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	iLocal_447 = 0;
	while (iLocal_447 <= (2 - 1))
	{
		if (unk_0x724D816EA203A79E(uLocal_108[iLocal_447]))
		{
			unk_0xA35241BCE4C1A24B(&(uLocal_108[iLocal_447]));
		}
		iLocal_447++;
	}
	func_334();
	unk_0x95E4B6F3ED223F5A();
}

int func_188()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_92955 == 7 || Global_92955 == 8)
	{
		return 1;
	}
	return 0;
}

void func_189(char* sParam0)
{
	func_197(sParam0);
	func_190(0);
}

void func_190(int iParam0)
{
	int iVar0;
	
	if (Global_105220.f_9056 || func_7(0))
	{
		iVar0 = func_5();
		if (!func_191(iVar0))
		{
			return;
		}
		unk_0xF0059F27F7BB6680(&(Global_83852[iVar0 /*5*/].f_1), 5);
		Global_92991 = iParam0;
	}
}

int func_191(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_196();
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		unk_0x31E433A1F2A666D9(5000);
	}
	iVar0 = Global_83852[iParam0 /*5*/];
	iVar1 = Global_71247.f_109[iVar0 /*4*/];
	func_195(iVar1, 1);
	unk_0xD0D466F17C0F30DB(unk_0xB5CEFD608600A09F());
	unk_0xD50A43D7C495F078(unk_0xB5CEFD608600A09F());
	func_192(&(Global_105220.f_2354.f_539), iVar1);
	if (Global_87275 == Global_92992)
	{
		Global_105220.f_9056.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0xFA30DFD0084E92FE(Global_83888[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			unk_0xC63520BF0B3FB162(0);
		}
	}
	Global_105220.f_9056.f_330[iVar1 /*6*/].f_2++;
	Global_87275 = Global_92992;
	if (iParam0 == -1)
	{
		if (Global_105220.f_9056)
		{
		}
		return 0;
	}
	if (unk_0xFA30DFD0084E92FE(Global_83852[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0xFA30DFD0084E92FE(Global_83852[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_192(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_105220.f_18504[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0xFA30DFD0084E92FE(Global_105220.f_9056.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_194(Global_105220.f_18504[iVar0], &Var2, &fVar5))
			{
				Global_105220.f_18504[iVar0] = 318;
				func_193(&(uParam0->f_2276[iVar0]));
				uParam0->f_2280[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2290[iVar0] = 0f;
				uParam0->f_2294[iVar0] = 0;
				uParam0->f_2298[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2308[iVar0] = 0;
				Global_90490[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_90490[iVar0 /*29*/].f_9 = 0f;
				Global_90490[iVar0 /*29*/].f_12 = 0f;
				Global_90490[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_90490[iVar0 /*29*/].f_10 = 0f;
				Global_90490[iVar0 /*29*/].f_13 = 0f;
				Global_90490[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_90490[iVar0 /*29*/].f_11 = 0f;
				Global_90490[iVar0 /*29*/].f_14 = 0f;
				Global_90490[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_90490[iVar0 /*29*/].f_26 = 0f;
				Global_90490[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_90490[iVar0 /*29*/].f_27 = 0f;
				Global_90490[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_90490[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_193(var uParam0)
{
	*uParam0 = -15;
}

int func_194(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_194(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_194(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_195(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_87085[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_87085[iParam0 /*2*/] = 0;
	}
}

void func_196()
{
	Global_92990 = 1;
	if (unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1))
	{
		if (unk_0xF1734B55490E9045(&Global_71210))
		{
			switch (func_19())
			{
				case 0:
					StringCopy(&Global_71210, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_71210, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_71210, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_71214, "", 16);
		}
		Global_92990 = 0;
	}
	else if (!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0xF1734B55490E9045(&Global_71210))
		{
			switch (func_19())
			{
				case 0:
					StringCopy(&Global_71210, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_71210, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_71210, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_71214, "", 16);
		}
		Global_92990 = 0;
		unk_0xF0059F27F7BB6680(&(Global_92955.f_20), 25);
	}
}

void func_197(char* sParam0)
{
	if (!unk_0xF1734B55490E9045(sParam0))
	{
		if (unk_0x5D29F91E567588E2(sParam0) <= 16)
		{
			StringCopy(&Global_71210, sParam0, 16);
			StringCopy(&Global_71214, "", 16);
			if (unk_0xD31A96FC53460BE2())
			{
				unk_0x632B3D2D98BE2D44();
			}
		}
	}
}

void func_198(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x724D816EA203A79E(*uParam0))
	{
		if (!unk_0x36CEFBE9B745A58D(*uParam0))
		{
			unk_0xB71D41C0310C93DE(*uParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0xD999D66C5AFA4BE3(*uParam0);
			}
			unk_0x22321800954A532E(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x2E35C4FA5F0ED22F(*uParam0, 0);
			}
		}
		unk_0x02537C8C1BEEB477(uParam0);
	}
}

void func_199()
{
	struct<3> Var0;
	var uVar3;
	
	if (bLocal_1484 == 1)
	{
		if (iLocal_1479 == 0)
		{
			if (!unk_0x17FAADF9916EF741())
			{
				if (!unk_0x422F9EDE839E6ABB())
				{
					unk_0x7A41D32A383895D8(800);
				}
			}
			else
			{
				func_111(iLocal_1485);
			}
		}
		else if (iLocal_1479 == 3)
		{
			unk_0x062C9995BFD27B2A(0, 0, 3000, 1, 0, 0);
			unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 1, 0);
			func_224();
			func_223(&uLocal_494);
			if (!func_222())
			{
				func_221(iLocal_1485, &Var0, &uVar3);
				unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), Var0, 1, 0, 0, 1);
				unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), uVar3);
				unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), 1);
				func_220(&uLocal_494, Var0, 50f, 0);
			}
			func_217(iLocal_1480);
			while (!func_213(&uLocal_494))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			switch (iLocal_1480)
			{
				case 0:
					func_212();
					break;
				
				case 1:
					func_207();
					break;
				
				case 2:
					func_206();
					break;
				
				case 3:
					func_200();
					break;
			}
			bLocal_1484 = false;
			if (!func_222())
			{
				unk_0x13D5880CBA449AA9();
			}
		}
	}
}

void func_200()
{
	func_204(1357.7f, 3618.28f, 33.8905f, 110.4135f);
	bLocal_456 = true;
	if (func_222())
	{
		func_201(0, -1, 1);
	}
	else
	{
		unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), 0);
	}
}

void func_201(int iParam0, int iParam1, int iParam2)
{
	if (func_203() && func_222())
	{
		while (Global_92950 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x121BBDEFA4F0C22B(0);
		if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				unk_0xF643D76BBEB27712(unk_0xBC25C936A095B5BA());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x724D816EA203A79E(iParam0))
				{
					if (unk_0xE59B7F5A03335350(iParam0, 0))
					{
						if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iParam0, 0))
						{
							unk_0xBD53A029D0155A42(unk_0xBC25C936A095B5BA(), iParam0, iParam1);
							unk_0x2B9AEC08E469E384(0f, 1065353216);
							unk_0xF3F01A78937DC905(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 1, 0);
			}
		}
		unk_0x174DF5072163DD21();
		func_202(0);
	}
}

void func_202(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF0059F27F7BB6680(&(Global_92955.f_20), 13);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_92955.f_20), 13);
	}
}

int func_203()
{
	if (Global_92955 == 10 || Global_92955 == 9)
	{
		return 1;
	}
	return 0;
}

void func_204(struct<3> Param0, float fParam3)
{
	Local_94[0 /*2*/] = unk_0x61C05BF08A1E0EFE(joaat("barracks"), Param0, fParam3, 1, 1, 0);
	unk_0x65E471E4A2D56226(Local_94[0 /*2*/], unk_0x8D66276473ABD7CC(Local_94[0 /*2*/]) * 2, 0);
	unk_0xDB35A2F9333ABEC5(Local_94[0 /*2*/], 1);
	unk_0xE6E403909F4BF47F(Local_94[0 /*2*/], (unk_0x77F5C030D3238E26(Local_94[0 /*2*/]) * 2f));
	unk_0xA1BA0675804B896A(Local_94[0 /*2*/], 0);
	unk_0xD3F329A16C0E5B2B(Local_94[0 /*2*/], (unk_0xA6EB9CEADFB819EC(Local_94[0 /*2*/]) * 2f));
	unk_0x7387EA04915F201E(Local_94[0 /*2*/], 0);
	unk_0xE365C09E06B55C51(Local_94[0 /*2*/], 0);
	unk_0x09F6B51861E304AB(Local_94[0 /*2*/], 1);
	unk_0xD38EB677CBE7440A(Local_94[0 /*2*/], 0, 0);
	func_205(Local_94[0 /*2*/], 0);
	uLocal_108[0] = unk_0xB6896943DA475493(joaat("prop_mil_crate_01"), 1006.765f, 2128.32f, 48.0929f, 1, 1, 0);
	unk_0x5DBE04849460E608(uLocal_108[0], Local_94[0 /*2*/], 0, 0f, -0.5f, 1.5f, 0f, 0f, -90f, 0, 0, 0, 0, 2, 1);
	uLocal_108[1] = unk_0xB6896943DA475493(joaat("prop_mil_crate_01"), 1006.765f, 2128.32f, 48.0929f, 1, 1, 0);
	unk_0x5DBE04849460E608(uLocal_108[1], Local_94[0 /*2*/], 0, 0f, -2.85f, 1.5f, 0f, 0f, -90f, 0, 0, 0, 0, 2, 1);
	unk_0x55662F9F262C2F9B(Local_94[0 /*2*/], "PS_PREP_VEHICLES_GROUP", 0);
}

void func_205(var uParam0, int iParam1)
{
	Global_92955.f_22[iParam1] = uParam0;
}

void func_206()
{
	func_204(-248.6621f, 2950.037f, 28.9996f, 93.5394f);
	bLocal_456 = true;
	if (func_222())
	{
		func_201(0, -1, 1);
	}
	else
	{
		unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), 0);
	}
}

void func_207()
{
	int iVar0;
	
	func_211(-284.0175f, 2949.104f, 28.3715f, 46.1483f);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_210(iVar0, Local_94[1 /*2*/]);
		func_209(Local_111[iVar0 /*14*/], 0);
		iVar0++;
	}
	func_204(-248.6621f, 2950.037f, 28.9996f, 93.5394f);
	func_208(-223.1415f, 2952.188f, 28.8053f, 121.2339f);
	iVar0 = 5;
	while (iVar0 <= 8)
	{
		func_210(iVar0, Local_94[2 /*2*/]);
		func_209(Local_111[iVar0 /*14*/], 0);
		iVar0++;
	}
	bLocal_456 = true;
	if (func_222())
	{
		func_201(0, -1, 1);
	}
	else
	{
		unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), 0);
	}
}

void func_208(struct<3> Param0, float fParam3)
{
	Local_94[2 /*2*/] = unk_0x61C05BF08A1E0EFE(joaat("crusader"), Param0, fParam3, 1, 1, 0);
	unk_0x55662F9F262C2F9B(Local_94[2 /*2*/], "PS_PREP_VEHICLES_GROUP", 0);
}

void func_209(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 64)
		{
			if (Global_55997[iVar0 /*2*/] != 0)
			{
				if (Global_55997[iVar0 /*2*/] == iParam0)
				{
					return;
				}
			}
			iVar0++;
		}
	}
	if (64 == Global_55996)
	{
		return;
	}
	iVar1 = -1;
	iVar2 = 0;
	while (iVar1 == -1 && iVar2 != 64)
	{
		if (Global_55997[iVar2 /*2*/] == 0)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 == -1)
	{
		return;
	}
	Global_55997[iVar1 /*2*/] = iParam0;
	Global_55997[iVar1 /*2*/].f_1 = 7;
	Global_55996++;
}

void func_210(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == Local_94[1 /*2*/] || iParam1 == Local_94[2 /*2*/])
	{
		iVar0 = joaat("s_m_y_marine_03");
	}
	else if (iParam1 == Local_94[0 /*2*/])
	{
		iVar0 = joaat("s_m_m_marine_01");
	}
	if ((iParam0 == 0 || iParam0 == 5) || iParam0 == 4)
	{
		iVar1 = -1;
		iLocal_451 = joaat("weapon_pistol");
	}
	else if (iParam0 == 1 || iParam0 == 6)
	{
		iVar1 = 0;
		iLocal_451 = joaat("weapon_carbinerifle");
	}
	else if (iParam0 == 2 || iParam0 == 7)
	{
		iVar1 = 1;
		iLocal_451 = joaat("weapon_smg");
	}
	else if (iParam0 == 3 || iParam0 == 8)
	{
		iVar1 = 2;
		iLocal_451 = joaat("weapon_carbinerifle");
	}
	Local_111[iParam0 /*14*/] = unk_0xFD8987C090669BD5(iParam1, 26, iVar0, iVar1, 1, 1);
	unk_0x4106FAF8AA1D69D5(Local_111[iParam0 /*14*/], iLocal_493);
	unk_0xF7CDBCD11F31B71A(Local_111[iParam0 /*14*/], 1);
	unk_0x7A535CE1F001F3FE(Local_111[iParam0 /*14*/], iLocal_451, -1, 1, 1);
	unk_0x7A535CE1F001F3FE(Local_111[iParam0 /*14*/], joaat("weapon_pistol"), -1, 1, 1);
	unk_0x8EF3D958386640FE(Local_111[iParam0 /*14*/], 0);
	unk_0xB0031DDAE4FF0BC3(Local_111[iParam0 /*14*/], 2, 1, 0, 0);
	unk_0x4FFC2E7B0181636C(Local_111[iParam0 /*14*/], 1);
	unk_0xEB061E1EBFED4D59(Local_111[iParam0 /*14*/], 1);
	unk_0x91629AC1E1F78419(Local_111[iParam0 /*14*/], 0, 1);
	unk_0x91629AC1E1F78419(Local_111[iParam0 /*14*/], 1, 0);
	unk_0x54480313BB3E8DD0(Local_111[iParam0 /*14*/], 1);
	unk_0xC8FD3EBBB90E8D7F(Local_111[iParam0 /*14*/], 184, 1);
	unk_0xC8FD3EBBB90E8D7F(Local_111[iParam0 /*14*/], 272, 1);
	unk_0x0DEF5E53360637F2(Local_111[iParam0 /*14*/], 1);
	unk_0xB71D41C0310C93DE(Local_111[iParam0 /*14*/], 1, 1);
	unk_0xFC3C88E2313FA926(Local_111[iParam0 /*14*/], 10);
	unk_0x2E35C4FA5F0ED22F(Local_111[iParam0 /*14*/], 1);
	Local_111[iParam0 /*14*/].f_10 = 0;
}

void func_211(struct<3> Param0, float fParam3)
{
	Local_94[1 /*2*/] = unk_0x61C05BF08A1E0EFE(joaat("crusader"), Param0, fParam3, 1, 1, 0);
	unk_0x55662F9F262C2F9B(Local_94[1 /*2*/], "PS_PREP_VEHICLES_GROUP", 0);
}

void func_212()
{
	int iVar0;
	
	if (!func_31(Local_94[1 /*2*/]))
	{
		func_211(996.9448f, 2140.02f, 47.9112f, 39.7091f);
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!func_31(Local_111[iVar0 /*14*/]))
		{
			func_210(iVar0, Local_94[1 /*2*/]);
			func_209(Local_111[iVar0 /*14*/], 0);
			if (iVar0 == 0)
			{
				unk_0xEB469C5B92ADC7B0(Local_111[0 /*14*/], Local_94[1 /*2*/], &cLocal_475, 786603, 0, 24, -1, 11f, 0, 1073741824);
			}
		}
		iVar0++;
	}
	if (!func_31(Local_94[0 /*2*/]))
	{
		func_204(1006.765f, 2128.32f, 48.0929f, 39.898f);
	}
	if (!func_31(Local_111[4 /*14*/]))
	{
		func_210(4, Local_94[0 /*2*/]);
		unk_0x7AB043D579636764(Local_111[4 /*14*/], Local_94[0 /*2*/], Local_94[1 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
		func_209(Local_111[4 /*14*/], 0);
	}
	if (!func_31(Local_94[2 /*2*/]))
	{
		func_208(1018.995f, 2112.951f, 48.4754f, 34.6812f);
	}
	iVar0 = 5;
	while (iVar0 <= 8)
	{
		if (!func_31(Local_111[iVar0 /*14*/]))
		{
			func_210(iVar0, Local_94[2 /*2*/]);
			func_209(Local_111[iVar0 /*14*/], 0);
			if (iVar0 == 5)
			{
				unk_0x7AB043D579636764(Local_111[5 /*14*/], Local_94[2 /*2*/], Local_94[0 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
			}
		}
		iVar0++;
	}
	if (func_222())
	{
		func_201(0, -1, 1);
	}
	else
	{
		unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), 0);
	}
}

int func_213(var uParam0)
{
	if (func_214(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_214(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_982)
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if ((*uParam0)[iVar1 /*5*/])
			{
				if (!(uParam0[iVar1 /*5*/])->f_1)
				{
					if (unk_0xD6513D668481290A((uParam0[iVar1 /*5*/])->f_4))
					{
						(uParam0[iVar1 /*5*/])->f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if ((uParam0[iVar1 /*5*/])->f_2)
				{
					if ((uParam0[iVar1 /*5*/])->f_1)
					{
						unk_0x2CA123B0622F495C((uParam0[iVar1 /*5*/])->f_4);
						func_216(uParam0[iVar1 /*5*/]);
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (uParam0->f_273[iVar1 /*5*/])
			{
				if (!uParam0->f_273[iVar1 /*5*/].f_1)
				{
					if (unk_0xF9E082857622D91E(uParam0->f_273[iVar1 /*5*/].f_4))
					{
						uParam0->f_273[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_273[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_273[iVar1 /*5*/].f_1)
					{
						unk_0x4EA570997E107F35(uParam0->f_273[iVar1 /*5*/].f_4);
						func_216(&(uParam0->f_273[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (uParam0->f_374[iVar1 /*5*/])
			{
				if (!uParam0->f_374[iVar1 /*5*/].f_1)
				{
					if (unk_0x1E8349F219AC5AF9(uParam0->f_374[iVar1 /*5*/].f_4))
					{
						uParam0->f_374[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_374[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_374[iVar1 /*5*/].f_1)
					{
						unk_0x4CE01E22F13D3913(uParam0->f_374[iVar1 /*5*/].f_4);
						func_216(&(uParam0->f_374[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_656[iVar1 /*6*/])
			{
				if (!uParam0->f_656[iVar1 /*6*/].f_1)
				{
					if (unk_0xA7F138B5B1AB2CF6(uParam0->f_656[iVar1 /*6*/].f_5))
					{
						uParam0->f_656[iVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_656[iVar1 /*6*/].f_2)
				{
					if (uParam0->f_656[iVar1 /*6*/].f_1)
					{
						unk_0xB0B0FE33F4F22679(&(uParam0->f_656[iVar1 /*6*/].f_5));
						func_216(&(uParam0->f_656[iVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if (uParam0->f_475[iVar1 /*6*/])
			{
				if (!uParam0->f_475[iVar1 /*6*/].f_1)
				{
					if (unk_0x00D24B3F2A5CD22C(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4))
					{
						uParam0->f_475[iVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_475[iVar1 /*6*/].f_2)
				{
					if (uParam0->f_475[iVar1 /*6*/].f_1)
					{
						unk_0x4F5DAC981AF98536(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4);
						func_216(&(uParam0->f_475[iVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_202[iVar1 /*7*/])
			{
				if (!uParam0->f_202[iVar1 /*7*/].f_1)
				{
					if (unk_0x696DA708CCD839AD(uParam0->f_202[iVar1 /*7*/].f_4))
					{
						uParam0->f_202[iVar1 /*7*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_202[iVar1 /*7*/].f_2)
				{
					if (uParam0->f_202[iVar1 /*7*/].f_1)
					{
						unk_0x5357DC61899A5365(uParam0->f_202[iVar1 /*7*/].f_4);
						func_216(&(uParam0->f_202[iVar1 /*7*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_151[iVar1 /*5*/])
			{
				if (!uParam0->f_151[iVar1 /*5*/].f_1)
				{
					if (unk_0x317B2443006524C2(uParam0->f_151[iVar1 /*5*/].f_4))
					{
						uParam0->f_151[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_151[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_151[iVar1 /*5*/].f_1)
					{
						unk_0xDC5D58521808C640(uParam0->f_151[iVar1 /*5*/].f_4);
						func_216(&(uParam0->f_151[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_737[iVar1 /*5*/])
			{
				if (!uParam0->f_737[iVar1 /*5*/].f_1)
				{
					if (unk_0x284F2ACE6839D3C0(uParam0->f_737[iVar1 /*5*/].f_4, 0, -1))
					{
						uParam0->f_737[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_737[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_737[iVar1 /*5*/].f_1)
					{
						unk_0xDA70546257A3ED8B(uParam0->f_737[iVar1 /*5*/].f_4);
						func_216(&(uParam0->f_737[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (uParam0->f_763[iVar1 /*5*/])
			{
				if (!uParam0->f_763[iVar1 /*5*/].f_1)
				{
					if (unk_0x18487DB48DC3A046(uParam0->f_763[iVar1 /*5*/].f_4))
					{
						uParam0->f_763[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_763[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_763[iVar1 /*5*/].f_1)
					{
						unk_0xB165D6ED2E977354(uParam0->f_763[iVar1 /*5*/].f_4);
						func_216(&(uParam0->f_763[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 7)
		{
			if (!unk_0xF1734B55490E9045(uParam0->f_687[iVar1 /*7*/].f_4))
			{
				if (uParam0->f_687[iVar1 /*7*/])
				{
					iVar2 = unk_0x165E25F5626B3C3D(uParam0->f_687[iVar1 /*7*/].f_5);
					if (!uParam0->f_687[iVar1 /*7*/].f_1)
					{
						switch (iVar2)
						{
							case 1:
							case 2:
								uParam0->f_687[iVar1 /*7*/].f_1 = 1;
								break;
							
							case 0:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								bVar0 = false;
								break;
							
							case 3:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								func_216(&(uParam0->f_687[iVar1 /*7*/]));
								break;
							
							case -1:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								unk_0xEE7C34E731E1CEEA(uParam0->f_687[iVar1 /*7*/].f_5);
								uParam0->f_687[iVar1 /*7*/] = 0;
								bVar0 = false;
								break;
							}
					}
				}
				else if (unk_0x18487DB48DC3A046(uParam0->f_687[iVar1 /*7*/].f_6))
				{
					uParam0->f_687[iVar1 /*7*/].f_5 = unk_0x1D6DA89C13F6EFB3(uParam0->f_687[iVar1 /*7*/].f_4);
					uParam0->f_687[iVar1 /*7*/].f_3 = unk_0x105601648511CC64();
					uParam0->f_687[iVar1 /*7*/] = 1;
				}
				else
				{
					bVar0 = false;
				}
				if (uParam0->f_687[iVar1 /*7*/].f_2)
				{
					if (uParam0->f_687[iVar1 /*7*/])
					{
						if (uParam0->f_687[iVar1 /*7*/].f_1)
						{
							unk_0xEE7C34E731E1CEEA(uParam0->f_687[iVar1 /*7*/].f_5);
							func_216(&(uParam0->f_687[iVar1 /*7*/]));
							uParam0->f_687[iVar1 /*7*/].f_4 = "";
						}
						else
						{
							bVar0 = false;
						}
					}
					else
					{
						func_216(&(uParam0->f_687[iVar1 /*7*/]));
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_879[iVar1 /*5*/])
			{
				if (!uParam0->f_879[iVar1 /*5*/].f_1)
				{
					if (unk_0x78415861AA85912D(uParam0->f_879[iVar1 /*5*/].f_4))
					{
						uParam0->f_879[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_879[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_879[iVar1 /*5*/].f_1)
					{
						unk_0x893116494999963D(uParam0->f_879[iVar1 /*5*/].f_4);
						func_216(&(uParam0->f_879[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_930[iVar1 /*5*/])
			{
				if (!uParam0->f_930[iVar1 /*5*/].f_1)
				{
					if (unk_0x2625AE158F7FFBAD(uParam0->f_930[iVar1 /*5*/].f_4))
					{
						uParam0->f_930[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_930[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_930[iVar1 /*5*/].f_1)
					{
						func_216(&(uParam0->f_930[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < uParam0->f_779)
		{
			if (uParam0->f_779[iVar1 /*5*/])
			{
				if (!uParam0->f_779[iVar1 /*5*/].f_1)
				{
					if (unk_0xFA9040D29FE330BD(iVar1))
					{
						uParam0->f_779[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_779[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_779[iVar1 /*5*/].f_1)
					{
						unk_0x841D233D3CE81152(iVar1, 1);
						func_216(&(uParam0->f_779[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (uParam0->f_860)
		{
			if (!uParam0->f_860.f_1)
			{
				if (unk_0x95654D7A61CD43DE())
				{
					uParam0->f_860.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_860.f_2)
			{
				if (uParam0->f_860.f_1)
				{
					unk_0x8E5F062750135AD1();
					func_216(&(uParam0->f_860));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_864)
		{
			if (!uParam0->f_864.f_1)
			{
				if (unk_0xC97ADB25127C0F86())
				{
					uParam0->f_864.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_864.f_2)
			{
				if (uParam0->f_864.f_1)
				{
					unk_0xCDB88AA9E742BEFB();
					func_216(&(uParam0->f_864));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_868 && unk_0x719413B40BB63D86())
		{
			if (!uParam0->f_868.f_1)
			{
				if (unk_0xF220370B0C08EC20())
				{
					uParam0->f_868.f_1 = 1;
					if (uParam0->f_983)
					{
						unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), 0);
						func_215(uParam0);
						uParam0->f_983 = 0;
					}
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_868.f_2)
			{
				unk_0x13D5880CBA449AA9();
				func_216(&(uParam0->f_868));
			}
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_956[iVar1 /*5*/])
			{
				if (!uParam0->f_956[iVar1 /*5*/].f_1)
				{
					if (unk_0x499783D01578C2D2(uParam0->f_956[iVar1 /*5*/].f_4))
					{
						uParam0->f_956[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_956[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_956[iVar1 /*5*/].f_1)
					{
						func_216(&(uParam0->f_956[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (bVar0)
		{
			uParam0->f_982 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_215(var uParam0)
{
	if (unk_0x719413B40BB63D86())
	{
		unk_0x13D5880CBA449AA9();
		func_216(&(uParam0->f_868));
	}
}

void func_216(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
}

void func_217(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_219(&uLocal_494, joaat("s_m_m_marine_01"));
			func_219(&uLocal_494, joaat("s_m_y_marine_03"));
			func_219(&uLocal_494, joaat("crusader"));
			func_219(&uLocal_494, joaat("barracks"));
			func_218(&uLocal_494, &cLocal_475);
			func_219(&uLocal_494, joaat("prop_mil_crate_01"));
			break;
		
		case 1:
			func_219(&uLocal_494, joaat("s_m_y_marine_03"));
			func_219(&uLocal_494, joaat("s_m_m_marine_01"));
			func_219(&uLocal_494, joaat("crusader"));
			func_219(&uLocal_494, joaat("barracks"));
			func_219(&uLocal_494, joaat("prop_mil_crate_01"));
			break;
		
		case 2:
		case 3:
			func_219(&uLocal_494, joaat("barracks"));
			func_219(&uLocal_494, joaat("prop_mil_crate_01"));
			break;
	}
}

int func_218(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xF1734B55490E9045(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_374)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			if (unk_0x3362CDE8460ED38B(uParam0->f_374[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_374[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_374[iVar0 /*5*/].f_1)
				{
					uParam0->f_982 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0x44840FD68E426678(sParam1);
		uParam0->f_374[iVar1 /*5*/] = 1;
		uParam0->f_374[iVar1 /*5*/].f_3 = unk_0x105601648511CC64();
		uParam0->f_374[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

int func_219(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 0)
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			if ((uParam0[iVar0 /*5*/])->f_4 == iParam1)
			{
				(uParam0[iVar0 /*5*/])->f_2 = 0;
				if (!(uParam0[iVar0 /*5*/])->f_1)
				{
					uParam0->f_982 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0xF243B7A14FCFD0F4(iParam1);
		(*uParam0)[iVar1 /*5*/] = 1;
		(uParam0[iVar1 /*5*/])->f_3 = unk_0x105601648511CC64();
		(uParam0[iVar1 /*5*/])->f_4 = iParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

int func_220(var uParam0, struct<3> Param1, float fParam4, int iParam5)
{
	if (func_179(Param1) || fParam4 <= 0f)
	{
		return 0;
	}
	if (uParam0->f_868)
	{
		if (func_135(uParam0->f_868.f_4, Param1, 0) && uParam0->f_868.f_10 == fParam4)
		{
			uParam0->f_868.f_2 = 0;
			if (!uParam0->f_868.f_1)
			{
				uParam0->f_982 = 1;
				return 1;
			}
			else
			{
				return 1;
			}
		}
	}
	unk_0x1732A8A5D2D39430(Param1, fParam4, iParam5);
	uParam0->f_868 = 1;
	uParam0->f_868.f_3 = unk_0x105601648511CC64();
	uParam0->f_868.f_4 = { Param1 };
	uParam0->f_868.f_7 = { 0f, 0f, 0f };
	uParam0->f_868.f_10 = fParam4;
	uParam0->f_982 = 1;
	return 1;
}

void func_221(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -260.5082f, 2925.446f, 40.1977f };
			*uParam2 = 303.6227f;
			break;
		
		case 1:
			*uParam1 = { -276.0887f, 2920.386f, 40.1317f };
			*uParam2 = 0f;
			break;
		
		case 2:
			*uParam1 = { -253.7471f, 2941.485f, 29.131f };
			*uParam2 = 330.8292f;
			break;
		
		case 3:
			*uParam1 = { 1367.324f, 3618.374f, 33.8914f };
			*uParam2 = -118.28f;
			break;
	}
}

bool func_222()
{
	return unk_0xFA30DFD0084E92FE(Global_92955.f_20, 13);
}

void func_223(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			(uParam0[iVar0 /*5*/])->f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_151[iVar0 /*5*/])
		{
			uParam0->f_151[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_202[iVar0 /*7*/])
		{
			uParam0->f_202[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_273[iVar0 /*5*/])
		{
			uParam0->f_273[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			uParam0->f_374[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_475[iVar0 /*6*/])
		{
			uParam0->f_475[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_656[iVar0 /*6*/])
		{
			uParam0->f_656[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (uParam0->f_687[iVar0 /*7*/])
		{
			uParam0->f_687[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			uParam0->f_737[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (uParam0->f_763[iVar0 /*5*/])
		{
			uParam0->f_763[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_879[iVar0 /*5*/])
		{
			uParam0->f_879[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_930[iVar0 /*5*/])
		{
			uParam0->f_930[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (uParam0->f_779[iVar0 /*5*/])
		{
			uParam0->f_779[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	if (uParam0->f_868)
	{
		uParam0->f_868.f_2 = 1;
	}
	if (uParam0->f_860)
	{
		uParam0->f_860.f_2 = 1;
	}
	if (uParam0->f_864)
	{
		uParam0->f_864.f_2 = 1;
	}
}

void func_224()
{
	iLocal_447 = 0;
	while (iLocal_447 <= (3 - 1))
	{
		if (unk_0x724D816EA203A79E(Local_101[iLocal_447 /*2*/]) && !unk_0x36CEFBE9B745A58D(Local_101[iLocal_447 /*2*/]))
		{
			if (unk_0x5237AF95232D78C5(Local_101[iLocal_447 /*2*/], 0))
			{
				unk_0xAFC2CAB9D994D0D8(Local_101[iLocal_447 /*2*/], unk_0x541C2AEF053615BC(unk_0x9FE9D386222EEE47(Local_101[iLocal_447 /*2*/], 0), 1) + Vector(0f, -2f, 0f));
			}
			func_231(&(Local_101[iLocal_447 /*2*/]));
		}
		iLocal_447++;
	}
	iLocal_447 = 0;
	while (iLocal_447 <= (9 - 1))
	{
		if (unk_0x724D816EA203A79E(Local_111[iLocal_447 /*14*/]))
		{
			func_230(&(Local_111[iLocal_447 /*14*/].f_2));
			Local_111[iLocal_447 /*14*/].f_12 = 0;
			if (!unk_0x36CEFBE9B745A58D(Local_111[iLocal_447 /*14*/]))
			{
				if (unk_0x5237AF95232D78C5(Local_111[iLocal_447 /*14*/], 0))
				{
					unk_0xAFC2CAB9D994D0D8(Local_111[iLocal_447 /*14*/], unk_0x541C2AEF053615BC(unk_0x9FE9D386222EEE47(Local_111[iLocal_447 /*14*/], 0), 1) + Vector(0f, -2f, 0f));
				}
				func_231(&(Local_111[iLocal_447 /*14*/]));
			}
		}
		iLocal_447++;
	}
	iLocal_447 = 0;
	while (iLocal_447 <= (2 - 1))
	{
		if (unk_0x724D816EA203A79E(uLocal_108[iLocal_447]))
		{
			func_229(&(uLocal_108[iLocal_447]));
		}
		iLocal_447++;
	}
	iLocal_447 = 0;
	while (iLocal_447 <= (3 - 1))
	{
		if (unk_0x724D816EA203A79E(Local_94[iLocal_447 /*2*/]))
		{
			func_228(Local_94[iLocal_447 /*2*/]);
			func_225(&(Local_94[iLocal_447 /*2*/]));
		}
		iLocal_447++;
	}
	unk_0xEB233A3B7635D2AC();
	unk_0x7456702622C62EA0(1);
	unk_0x1C51717D9E91D69B(0);
	func_33(&Local_403, 1, 0);
	if (func_31(unk_0xBC25C936A095B5BA()))
	{
		unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 1, 0);
		unk_0xA98B19EC1C93FC3C(unk_0xB5CEFD608600A09F());
	}
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
	}
	unk_0x43F06392C4EF25E0(1);
	unk_0x59B038076F830627(1);
	iLocal_434 = 0;
	iLocal_436 = 0;
	iLocal_435 = 0;
	iLocal_433 = 0;
	iLocal_472 = 0;
	bLocal_456 = false;
	bLocal_457 = false;
	StringCopy(&cLocal_475, "Rural_prep_trigger1", 64);
}

void func_225(var uParam0)
{
	if (unk_0x724D816EA203A79E(*uParam0))
	{
		if (!unk_0x5CAE759AE8219D20(*uParam0))
		{
			unk_0x77815D3407C6700D(*uParam0, 1, 0);
		}
		if (func_227(*uParam0))
		{
			if (unk_0x5CAE759AE8219D20(*uParam0) && unk_0xB248FAA35ED47DB9(*uParam0, 1))
			{
				if (func_226(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), *uParam0, 0))
					{
						unk_0x1E7A09C1710FB071(uParam0);
						return;
					}
				}
				unk_0xCF6040807CC0E4A5(uParam0);
			}
		}
		else
		{
			if (func_226(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), *uParam0, 0))
				{
					unk_0x1E7A09C1710FB071(uParam0);
					return;
				}
			}
			unk_0xCF6040807CC0E4A5(uParam0);
		}
	}
}

int func_226(int iParam0)
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_227(int iParam0)
{
	if (func_226(iParam0))
	{
		if (unk_0xE59B7F5A03335350(iParam0, 0))
		{
			if (!unk_0x7544D2465B934445(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_228(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (unk_0xE59B7F5A03335350(iParam0, 0))
		{
			iVar0 = unk_0x3187EF5798B5D209(iParam0, -1, 0);
			if (unk_0x724D816EA203A79E(iVar0))
			{
				if (!unk_0x36CEFBE9B745A58D(iVar0))
				{
					unk_0x49D46EE47C9CCB66(iVar0);
				}
				else
				{
					unk_0xF845620A03C7425B(&iVar0);
				}
			}
			iVar2 = unk_0x524ABB0435146845(iParam0);
			iVar1 = 0;
			while (iVar1 < iVar2)
			{
				if (!unk_0x1AAF0C23233C57AF(iParam0, iVar1, 0))
				{
					iVar0 = unk_0x3187EF5798B5D209(iParam0, iVar1, 0);
					if (unk_0x724D816EA203A79E(iVar0))
					{
						if (!unk_0x36CEFBE9B745A58D(iVar0))
						{
							unk_0x49D46EE47C9CCB66(iVar0);
						}
						else
						{
							unk_0xF845620A03C7425B(&iVar0);
						}
					}
				}
				iVar1++;
			}
		}
	}
}

void func_229(var uParam0)
{
	if (unk_0x724D816EA203A79E(*uParam0))
	{
		if (unk_0x2FAEA11D96CF14A3(*uParam0))
		{
			unk_0x17175087F2DB6AC8(*uParam0, 1, 1);
		}
		unk_0xA35241BCE4C1A24B(uParam0);
	}
}

void func_230(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0x2DA8CA50A72528FB(*uParam0))
	{
		unk_0x07B8ECB35A4ED3AC(uParam0);
		bVar0 = true;
	}
	if (unk_0x2DA8CA50A72528FB(uParam0->f_1))
	{
		unk_0x07B8ECB35A4ED3AC(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x724D816EA203A79E(uParam0->f_7))
	{
		if (!unk_0x1D403DFADBC2DE3C(uParam0->f_7, 0))
		{
			if (unk_0x313CE760FC65D99D(uParam0->f_7))
			{
				unk_0xEA5D20C7C39B0EC6(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

void func_231(var uParam0)
{
	if (unk_0x724D816EA203A79E(*uParam0))
	{
		if (!unk_0x1D403DFADBC2DE3C(*uParam0, 0))
		{
			unk_0xB71D41C0310C93DE(*uParam0, 0, 1);
		}
		if (!unk_0x5CAE759AE8219D20(*uParam0))
		{
			unk_0x77815D3407C6700D(*uParam0, 1, 0);
		}
		unk_0xF845620A03C7425B(uParam0);
	}
}

void func_232()
{
	switch (iLocal_1479)
	{
		case 1:
			iLocal_1479 = 2;
			iLocal_1481 = -1;
			break;
		
		case 2:
			iLocal_1479 = 3;
			iLocal_1481 = 0;
			iLocal_1480 = iLocal_1482;
			break;
		
		case 3:
			iLocal_1482 = -1;
			iLocal_1479 = 0;
			break;
		
		case 0:
			if ((unk_0x105601648511CC64() - iLocal_1483) > 2500)
			{
				iLocal_1483 = unk_0x105601648511CC64();
			}
			break;
	}
}

void func_233(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x7AF0088ABFA713B6())
	{
		if (unk_0xFA30DFD0084E92FE(Global_2519572.f_4576, 26))
		{
			return;
		}
	}
	if (unk_0xBFFAD293E2DA992B())
	{
		unk_0xF04F2EB4128A4367(iParam2);
		unk_0x1A058EB0D1ACEC78("FocusIn");
		unk_0xC1300D0F3A74E20B("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x9216004FAC08D1DC("FocusOut", 0, 0);
			unk_0xC4BA30B532FE260F(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x4AED68BFACFB14CB(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xEAEFBBEC1AEA464B(sVar0))
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xEAEFBBEC1AEA464B(uParam0->f_3))
	{
		if (func_234(uParam0->f_3))
		{
			unk_0x7456702622C62EA0(1);
		}
	}
	if (!unk_0xEAEFBBEC1AEA464B(sVar0))
	{
		if (func_234(sVar0))
		{
			unk_0x7456702622C62EA0(1);
		}
	}
}

bool func_234(char* sParam0)
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

void func_235(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_236(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_236(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	uParam0->f_6 = 0;
	func_237(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_237(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0xBFFAD293E2DA992B())
	{
		if (unk_0x105601648511CC64() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0xEAEFBBEC1AEA464B(iVar0))
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_234(iVar0))
	{
		func_262();
	}
	if (func_261(iParam1) && unk_0x8F6EAC9E7D6812D5(iParam1))
	{
		iVar1 = 0;
		if (unk_0x386592AF38881675(iParam1))
		{
			unk_0x96EBAB29D0970E51(unk_0x399F7937FFE4DEBF(iParam1));
			unk_0x4264E957F21998DD(unk_0x399F7937FFE4DEBF(iParam1), 1);
			if (unk_0x6585240928240B98(unk_0x399F7937FFE4DEBF(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xD27AC0E9B78CFDD7(iParam1))
		{
			unk_0xB845C705AB8047B2(unk_0x233ED4CD1F1A42C1(iParam1));
			if (unk_0xBF080988CF2E6210(unk_0x233ED4CD1F1A42C1(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xB12D030810E8447D(iParam1))
		{
			unk_0xF0020781B6E3E577(unk_0x0EC4BFD5C83D125E(iParam1));
			if (unk_0x14D76A832488D2FF(unk_0x0EC4BFD5C83D125E(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0xBFFAD293E2DA992B())
		{
			if (func_256(uParam0, bParam7, bParam9, 0))
			{
				func_253(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_241(iVar0))
				{
					if ((unk_0xEAEFBBEC1AEA464B(uParam0->f_3) && !unk_0xEAEFBBEC1AEA464B(iVar0)) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						if ((iVar1 && !unk_0xF16DAFF595E80F7C()) && uParam8)
						{
							if (!func_234(iVar0))
							{
								func_144(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x3362CDE8460ED38B("CMN_HINT", iVar0))
								{
									func_240(1);
								}
							}
						}
					}
				}
			}
			else if (func_241(iVar0))
			{
				if (unk_0xEAEFBBEC1AEA464B(uParam0->f_3) && !unk_0xEAEFBBEC1AEA464B(iVar0))
				{
					if (((unk_0xD1DC4B08247A4317(iParam1) && iVar1) && !unk_0xF16DAFF595E80F7C()) && uParam8)
					{
						if (!func_234(iVar0))
						{
							func_144(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x3362CDE8460ED38B("CMN_HINT", iVar0))
							{
								func_240(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0xEAEFBBEC1AEA464B(sParam5))
			{
				if (func_234(sParam5))
				{
					unk_0x7456702622C62EA0(1);
				}
			}
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
			{
				if (unk_0x11030C52A0DDFF8C(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(3) == 3 || unk_0x3D875C2512206692(3) == 4)
					{
						func_233(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(6) == 3 || unk_0x3D875C2512206692(6) == 4)
					{
						func_233(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(4) == 3 || unk_0x3D875C2512206692(4) == 4)
					{
						func_233(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xD3A0CD3AD9C3D22A(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(5) == 3 || unk_0x3D875C2512206692(5) == 4)
					{
						func_233(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x5CFC8E6CC224744A(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(2) == 3 || unk_0x3D875C2512206692(2) == 4)
					{
						func_233(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x621126C4FACA4770() == 3 || unk_0x621126C4FACA4770() == 4)
				{
					func_233(uParam0, iVar0, 1);
				}
			}
			if (!func_256(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_239(uParam0))
				{
					func_238(uParam0);
				}
			}
		}
	}
	else
	{
		func_233(uParam0, iVar0, 0);
	}
}

void func_238(var uParam0)
{
	if (func_261(unk_0xBC25C936A095B5BA()))
	{
		unk_0x44C98C11ED6DD327(unk_0xBC25C936A095B5BA());
	}
	if (unk_0xBFFAD293E2DA992B())
	{
		unk_0x4AED68BFACFB14CB(1);
		unk_0xF04F2EB4128A4367(0);
		unk_0xC1300D0F3A74E20B("HINT_CAM_SCENE");
		unk_0x1A058EB0D1ACEC78("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x9216004FAC08D1DC("FocusOut", 0, 0);
			unk_0xC4BA30B532FE260F(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_239(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x105601648511CC64()
		{
			return 1;
		}
	}
	return 0;
}

int func_240(bool bParam0)
{
	switch (Global_35905)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_105220.f_10020.f_100++;
			}
			return Global_105220.f_10020.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_105220.f_10020.f_101++;
			}
			return Global_105220.f_10020.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_105220.f_10020.f_102++;
			}
			return Global_105220.f_10020.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_241(char* sParam0)
{
	if (!func_242(1, 1, 0))
	{
		if ((!unk_0xF1734B55490E9045(sParam0) && func_234(sParam0)) || func_234("CMN_HINT"))
		{
			unk_0x7456702622C62EA0(1);
		}
		return 0;
	}
	switch (Global_35905)
	{
		case 0:
		case 3:
			if (func_240(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_240(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_240(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_242(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x7930B3E9C919E90F())
	{
		return 0;
	}
	if (func_252(0))
	{
		return 0;
	}
	if (func_251())
	{
		return 0;
	}
	if (unk_0xF32BA80A2DED1FC6())
	{
		return 0;
	}
	if (Global_68280)
	{
		return 0;
	}
	if (unk_0xB731B8C5BCE89836(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_53148)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
		{
			if (unk_0x11030C52A0DDFF8C(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(3) == 3 || unk_0x3D875C2512206692(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(6) == 3 || unk_0x3D875C2512206692(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(4) == 3 || unk_0x3D875C2512206692(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xD3A0CD3AD9C3D22A(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(5) == 3 || unk_0x3D875C2512206692(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x5CFC8E6CC224744A(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(2) == 3 || unk_0x3D875C2512206692(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x621126C4FACA4770() == 3 || unk_0x621126C4FACA4770() == 4)
			{
				return 0;
			}
			if (unk_0x4FD86C3E23A67AB9())
			{
				return 0;
			}
		}
	}
	if ((func_250() || func_249(Global_4456448.f_148478)) || func_248())
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			iVar1 = func_247(unk_0xBC25C936A095B5BA(), 0);
			if (((unk_0xE8E192A5EFE0253F(iVar0, iVar1) || (unk_0x6F79ECA8C83E4357(iVar0) == joaat("apc") && iVar1 != -1)) || (unk_0x6F79ECA8C83E4357(iVar0) == joaat("akula") && iVar1 != -1)) || (((unk_0x6F79ECA8C83E4357(iVar0) == joaat("riot2") && iVar1 == 0) && func_246(iVar0, 10)) && unk_0x3EB14CBD49DA0017(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (func_243(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	return 1;
}

int func_243(int iParam0)
{
	if (iParam0 != func_245())
	{
		if (func_244(iParam0, 1, 1))
		{
			return Global_2423644[iParam0 /*406*/].f_305.f_1 != -1;
		}
		else if ((Global_1312854 && iParam0 == unk_0xB5CEFD608600A09F()) && func_244(iParam0, 1, 0))
		{
			return Global_2423644[iParam0 /*406*/].f_305.f_1 != -1;
		}
	}
	return 0;
}

int func_244(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x96B1061E8F3CBC9A(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x6A9CDB766DF7216F(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2436641.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_245()
{
	return -1;
}

int func_246(int iParam0, int iParam1)
{
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if (unk_0xA6BE0954FC6BAA16(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (unk_0x34374BDFA570F489(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_247(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (unk_0x5237AF95232D78C5(iParam0, iParam1))
		{
			iVar0 = unk_0x9FE9D386222EEE47(iParam0, iParam1);
			if (unk_0x724D816EA203A79E(iVar0))
			{
				iVar1 = unk_0x7C02672B11D4F65B(unk_0x6F79ECA8C83E4357(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x1AAF0C23233C57AF(iVar0, iVar3, 0))
					{
						if (unk_0x3187EF5798B5D209(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

var func_248()
{
	return Global_2447942.f_16;
}

bool func_249(int iParam0)
{
	return iParam0 == 51;
}

var func_250()
{
	return Global_2447942.f_15;
}

bool func_251()
{
	return unk_0x105601648511CC64() <= Global_17345.f_5745 + 100;
}

int func_252(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14493.f_1 > 3)
		{
			if (unk_0xFA30DFD0084E92FE(Global_2363, 14))
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
	if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14493.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_253(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1316801 == 1)
	{
		return;
	}
	if (unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		func_233(uParam0, 0, 0);
	}
	if (func_135(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x386592AF38881675(iParam1))
		{
			iVar0 = unk_0x399F7937FFE4DEBF(iParam1);
			if (!unk_0x5237AF95232D78C5(iVar0, 0))
			{
				if (unk_0x15DBD981998D4FE1(iVar0))
				{
					if (!func_254())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xB6FD7D587FE0A1B4(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x4AED68BFACFB14CB(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0x1DE00CFB4CAEB978(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x56F2E1B5599188FA(unk_0xBC25C936A095B5BA(), iParam1, -1, iVar3, iVar4);
	unk_0x9216004FAC08D1DC("FocusIn", 0, 0);
	unk_0xD6423910AAD8A379("HINT_CAM_SCENE");
	unk_0xC4BA30B532FE260F(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x105601648511CC64();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_254()
{
	return func_255(unk_0xB5CEFD608600A09F());
}

int func_255(int iParam0)
{
	if (unk_0x6F79ECA8C83E4357(unk_0xA95CF30C72EB526E(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_256(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x105601648511CC64() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
				{
					if (func_260(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_259(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_259(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_260(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_239(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x105601648511CC64() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
					{
						if (!func_260(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x105601648511CC64();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_259(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_259(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_260(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
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
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
				{
					if (!func_260(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_259(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_259(bParam1, bParam2, bParam3) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) || unk_0x74BCB6EDB1FFBFBA(unk_0xBC25C936A095B5BA(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_260(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x105601648511CC64() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
					{
						if (func_258(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_257(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) || func_257(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) || unk_0x74BCB6EDB1FFBFBA(unk_0xBC25C936A095B5BA(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_258(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_239(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_242(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_262();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_257(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_242(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!unk_0xE1C3A331B6951C3D(unk_0xB5CEFD608600A09F()))
		{
			unk_0xBBC4195AD74D153D(0, 140, 1);
			unk_0xBBC4195AD74D153D(0, 80, 1);
			if (unk_0xCB3E71B7B7FACCAF(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_258(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_242(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xBBC4195AD74D153D(0, 80, 1);
		if (unk_0xE92D56CE0416C875())
		{
			if (unk_0xCB3E71B7B7FACCAF(0, 80))
			{
				unk_0x4AED68BFACFB14CB(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_259(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_242(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!unk_0xE1C3A331B6951C3D(unk_0xB5CEFD608600A09F()))
		{
			unk_0xBBC4195AD74D153D(0, 140, 1);
			unk_0xBBC4195AD74D153D(0, 80, 1);
			if (unk_0xD3C4A010282C31F2(0, 80) && unk_0x105601648511CC64() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_260(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_242(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xBBC4195AD74D153D(0, 80, 1);
		if (unk_0xE92D56CE0416C875())
		{
			if (unk_0xD3C4A010282C31F2(0, 80) && unk_0x105601648511CC64() > Global_116)
			{
				unk_0x4AED68BFACFB14CB(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_261(int iParam0)
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (unk_0xD27AC0E9B78CFDD7(iParam0))
		{
			if (unk_0xE59B7F5A03335350(unk_0x233ED4CD1F1A42C1(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x386592AF38881675(iParam0))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0x399F7937FFE4DEBF(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0xB12D030810E8447D(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_262()
{
	unk_0xF0059F27F7BB6680(&Global_2364, 4);
}

void func_263(var uParam0)
{
	func_214(uParam0);
}

void func_264()
{
	struct<3> Var0;
	var uVar3;
	
	unk_0x926FDA90094AA5FA(iLocal_492);
	unk_0x926FDA90094AA5FA(iLocal_493);
	unk_0xB2CB6EAA6B280A84("trevor", &iLocal_492);
	unk_0xB2CB6EAA6B280A84("enemies", &iLocal_493);
	unk_0xA902E18EDF6FA0C8(5, iLocal_493, joaat("player"));
	unk_0xA902E18EDF6FA0C8(5, iLocal_493, iLocal_492);
	unk_0xA902E18EDF6FA0C8(5, iLocal_492, iLocal_493);
	unk_0xA902E18EDF6FA0C8(1, iLocal_493, joaat("COP"));
	unk_0xA902E18EDF6FA0C8(1, joaat("COP"), iLocal_493);
	unk_0xA902E18EDF6FA0C8(1, iLocal_493, iLocal_493);
	unk_0xA902E18EDF6FA0C8(1, iLocal_493, joaat("army"));
	unk_0xA902E18EDF6FA0C8(1, joaat("army"), iLocal_493);
	unk_0x900CF084251DED26("ruralp", 0);
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 1, 0);
	}
	unk_0xE85B33FB221A23CD(5, 0);
	unk_0xE85B33FB221A23CD(3, 0);
	unk_0xE85B33FB221A23CD(1, 0);
	unk_0xE85B33FB221A23CD(10, 0);
	unk_0xE85B33FB221A23CD(9, 0);
	unk_0x3B6B3043A45E5A51(1, 0);
	unk_0x3B6B3043A45E5A51(2, 0);
	unk_0x3B6B3043A45E5A51(8, 0);
	unk_0xA98B19EC1C93FC3C(unk_0xB5CEFD608600A09F());
	unk_0xDF53A66AEE1401AA(0f);
	unk_0xAEC867D0DBB7AFEB(0);
	unk_0x9332FDC92BD28643(0);
	unk_0x8510BC031C24B862(joaat("crusader"), 1);
	unk_0x8510BC031C24B862(joaat("barracks"), 1);
	uLocal_445 = unk_0x1DAA351326EA3537(Vector(35.39456f, 3600.538f, 1375.234f) - Vector(0f, 7f, 14.25f), Vector(35.39456f, 3600.538f, 1375.234f) + Vector(3f, 7f, 14.25f), 0, 1, 1, 1);
	unk_0x379ACE23D404525C(Vector(33.8865f, 3596.518f, 1383.51f) - Vector(1f, 5f, 5f), Vector(33.8865f, 3596.518f, 1383.51f) + Vector(2f, 5f, 5f), 0, 1);
	if (func_203() || func_7(0))
	{
		if (func_203())
		{
			iLocal_1485 = func_333();
			if (Global_87277)
			{
				iLocal_1485++;
			}
			if (iLocal_1485 >= 3)
			{
				iLocal_1485 = 3;
			}
		}
		else if (func_7(0))
		{
			iLocal_1485 = 0;
		}
		if (func_203())
		{
			func_221(iLocal_1485, &Var0, &uVar3);
			func_332(Var0, uVar3, 1, 0);
		}
		bLocal_1484 = true;
	}
	else
	{
		while (!func_330())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_267(0, "stage 0: reached ambush", 0, 0, 0, 1);
		iLocal_1480 = 0;
		func_217(0);
	}
	iLocal_1481 = 0;
	func_265(92);
}

void func_265(int iParam0)
{
	Global_88955 = 0;
	switch (iParam0)
	{
		case 72:
			func_266(2);
			func_266(4);
			break;
		
		case 73:
			func_266(0);
			func_266(1);
			func_266(7);
			break;
		
		case 92:
			func_266(10);
			func_266(9);
			func_266(13);
			func_266(6);
			break;
		
		case 68:
			func_266(11);
			break;
		
		case 78:
			func_266(14);
			break;
		
		case joaat("mpsv_lp0_31"):
			func_266(3);
			break;
		
		default:
			break;
	}
}

void func_266(int iParam0)
{
	unk_0xF0059F27F7BB6680(&Global_88955, iParam0);
}

void func_267(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	var uVar2;
	char[] cVar3[8];
	int iVar5;
	var uVar6;
	int iVar10;
	
	if (iParam3 == 1)
	{
		if (!unk_0x3362CDE8460ED38B("FinaleC2", unk_0x1377080E9B0BD993()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_92992)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_92992)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_329(1);
		if (iParam0 <= Global_92992)
		{
		}
		iVar1 = func_327(unk_0x1377080E9B0BD993(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_105220.f_9056.f_330[iVar1 /*6*/].f_1 = 0;
			uVar2 = func_325(iVar1);
			cVar3 = { Global_83888[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_105220.f_9056.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			unk_0x1B7435D54924A668(&cVar3, uVar2, Global_92992, iParam0);
		}
		else
		{
			iVar5 = func_320(unk_0x1377080E9B0BD993(), 1);
			if (iVar5 != -1)
			{
				Global_105220.f_18545[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {func_319(iVar5)}, 4);
				unk_0x1B7435D54924A668(&uVar6, 0, Global_92992, iParam0);
			}
			else
			{
				iVar10 = func_318(&(Global_92955.f_3));
				if (iVar10 > -1)
				{
					Global_105220.f_24957.f_4[iVar10] = 0;
				}
			}
		}
		Global_87278 = iParam2;
		Global_92992 = iParam0;
		func_268(iParam0, sParam1, iParam4, iParam5);
		if (unk_0x3362CDE8460ED38B(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_92992)
	{
	}
}

void func_268(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_269(&Global_98783, unk_0x1377080E9B0BD993(), iParam0, uParam1, iParam3, iParam2);
}

void func_269(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_19();
	uParam0->f_1 = func_115();
	unk_0x6E1ECC86C790262C(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		func_294(&(uParam0->f_2869), 0);
		func_293(unk_0xBC25C936A095B5BA());
		func_286(unk_0xBC25C936A095B5BA(), 0);
		unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_105220.f_2354.f_539.f_294[iVar1];
		if (iVar1 == func_285())
		{
			func_278(unk_0xBC25C936A095B5BA(), &(uParam0->f_616[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_92745[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_92745[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_92745[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_92745[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_92745[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_92745[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_92745[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_92745[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_92745[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_92745[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*472*/][iVar0 /*5*/] = { Global_105220.f_2354.f_539.f_298[iVar1 /*472*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_812[iVar1 /*472*/].f_221[iVar0 /*5*/] = { Global_105220.f_2354.f_539.f_298[iVar1 /*472*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0x6CB99B97664C3727(joaat("sp0_weap_purch_0"), &(uParam0->f_2229[iVar1 /*32*/][0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_purch_1"), &(uParam0->f_2229[iVar1 /*32*/][1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_5[0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_5[1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_5[2]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_5[3]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_5[4]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_16[0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_16[1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_16[2]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_16[3]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_16[4]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_2229[iVar1 /*32*/].f_16[5]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_2229[iVar1 /*32*/].f_16[6]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_2229[iVar1 /*32*/].f_16[7]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_2229[iVar1 /*32*/].f_16[8]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_2229[iVar1 /*32*/].f_16[9]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_2229[iVar1 /*32*/].f_16[10]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_2229[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0x6CB99B97664C3727(joaat("sp1_weap_purch_0"), &(uParam0->f_2229[iVar1 /*32*/][0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_purch_1"), &(uParam0->f_2229[iVar1 /*32*/][1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_5[0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_5[1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_5[2]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_5[3]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_5[4]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_16[0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_16[1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_16[2]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_16[3]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_16[4]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_2229[iVar1 /*32*/].f_16[5]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_2229[iVar1 /*32*/].f_16[6]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_2229[iVar1 /*32*/].f_16[7]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_2229[iVar1 /*32*/].f_16[8]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_2229[iVar1 /*32*/].f_16[9]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_2229[iVar1 /*32*/].f_16[10]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_2229[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0x6CB99B97664C3727(joaat("sp2_weap_purch_0"), &(uParam0->f_2229[iVar1 /*32*/][0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_purch_1"), &(uParam0->f_2229[iVar1 /*32*/][1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_5[0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_5[1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_5[2]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_5[3]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_5[4]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_16[0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_16[1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_16[2]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_16[3]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_16[4]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_2229[iVar1 /*32*/].f_16[5]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_2229[iVar1 /*32*/].f_16[6]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_2229[iVar1 /*32*/].f_16[7]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_2229[iVar1 /*32*/].f_16[8]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_2229[iVar1 /*32*/].f_16[9]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_2229[iVar1 /*32*/].f_16[10]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_2229[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_105220.f_20535.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_53141[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_105220.f_2354.f_539.f_2387[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_105220.f_2354.f_539.f_2387[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2823[iVar1 /*15*/][iVar0] = Global_105220.f_2354.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2823[iVar1 /*15*/].f_5[iVar0] = Global_105220.f_2354.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2823[iVar1 /*15*/].f_10[iVar0] = Global_105220.f_2354.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2330[iVar1 /*164*/][iVar0] = Global_105220.f_2354[iVar1 /*164*/][iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_4[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_8[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_12[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_16[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_20[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_24[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_28[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_32[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_36[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_40[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_44[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_48[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_52[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_56[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_60[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_64[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_68[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_72[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_76[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_80[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_84[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_88[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_92[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_96[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_100[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_104[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_108[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_112[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_116[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_120[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_124[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_128[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_132[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_136[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_140[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_144[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_148[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_152[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_156[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_160[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0x6CB99B97664C3727(joaat("sp0_special_ability"), &(uParam0->f_2326[0]), -1);
	unk_0x6CB99B97664C3727(joaat("sp1_special_ability"), &(uParam0->f_2326[1]), -1);
	unk_0x6CB99B97664C3727(joaat("sp2_special_ability"), &(uParam0->f_2326[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_271(&(uParam0->f_2875), uParam0, iParam5, 1, 1, 0);
	}
	func_270(&(uParam0->f_2965));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_270(var uParam0)
{
	*uParam0 = Global_88949;
	uParam0->f_1 = Global_88950;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_271(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0xBC25C936A095B5BA();
	}
	if (unk_0x724D816EA203A79E(iParam2))
	{
		uParam1->f_5 = func_29(iParam2);
	}
	if (func_277(iParam2, &iVar0, iParam3, iParam5))
	{
		func_272(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0x724D816EA203A79E(iVar0))
	{
		if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
		{
			if (unk_0x5E87CB0495C97732(iVar0, joaat("skylift")) && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iVar0, 0))
			{
				func_272(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_272(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0xE59B7F5A03335350(iParam2, 0))
	{
		func_274(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_273(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_273(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_92955.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_274(var uParam0, int iParam1, int iParam2)
{
	func_86(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_276(iParam1, 145, 0);
	uParam0->f_11 = func_106(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_275(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0x541C2AEF053615BC(iParam1, 1) };
		uParam0->f_6 = unk_0x349C94FFF43E2979(iParam1);
		uParam0->f_3 = { unk_0xB5D9AE572C19509E(iParam1) };
		if (unk_0x0C265B3C448E6954(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_70705 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_275(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x724D816EA203A79E(Global_69800.f_484[iVar0]))
		{
			if (iParam0 == Global_69800.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_276(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	if (!unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x724D816EA203A79E(Global_90431[iVar0]))
		{
			if (Global_90431[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_90441[iVar0])
				{
					if (iParam2 == 0 || unk_0x6F79ECA8C83E4357(iParam0) == func_127(iParam1, iParam2))
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

int func_277(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (!unk_0x36CEFBE9B745A58D(iParam0))
		{
			if (iParam0 == unk_0xBC25C936A095B5BA())
			{
				*uParam1 = unk_0x3E12B546F3F2597A();
			}
			else
			{
				*uParam1 = unk_0x9FE9D386222EEE47(iParam0, 1);
			}
			if (unk_0x724D816EA203A79E(*uParam1))
			{
				if (unk_0xE59B7F5A03335350(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(*uParam1, 1), unk_0x541C2AEF053615BC(iParam0, 1), 1) < 100f)
					{
						if (unk_0x5E87CB0495C97732(*uParam1, joaat("taxi")))
						{
							if (unk_0x3187EF5798B5D209(*uParam1, -1, 0) != iParam0 && unk_0x3187EF5798B5D209(*uParam1, -1, 0) != 0)
							{
								return 0;
							}
						}
						if (func_107(*uParam1, func_19(), 1))
						{
							sVar0 = unk_0x1377080E9B0BD993();
							if (!unk_0x3362CDE8460ED38B(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x5237AF95232D78C5(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0x3C03CFD5DD1E2D97(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0x75236BEC3BDDE069(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0x5E87CB0495C97732(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_278(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		iVar0 = func_29(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_284(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_283(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_21(iVar0))
		{
			uParam1->f_59 = Global_105220.f_2354.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_105220.f_2354.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_105220.f_2354.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_105220.f_2354.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_105220.f_2354.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_105220.f_2354.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x7AF0088ABFA713B6() && unk_0x6F79ECA8C83E4357(iParam0) == unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			if (func_282(161, -1))
			{
				uParam1->f_59 = func_279(2051, Global_70790, 0);
			}
			else
			{
				uParam1->f_59 = func_279(752, Global_70790, 0);
			}
			uParam1->f_60 = func_279(753, Global_70790, 0);
			uParam1->f_61 = func_279(754, Global_70790, 0);
		}
		if (unk_0x7AF0088ABFA713B6() && iParam0 == unk_0xBC25C936A095B5BA())
		{
			if (func_282(161, -1))
			{
				uParam1->f_59 = func_279(2051, Global_70790, 0);
			}
			else
			{
				uParam1->f_59 = func_279(752, Global_70790, 0);
			}
		}
	}
}

int func_279(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2530245[iParam0 /*3*/][func_280(iParam1)];
	if (unk_0x6CB99B97664C3727(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_280(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_281();
		if (iVar1 > -1)
		{
			Global_2529958 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2529958 = 1;
		}
	}
	return iVar0;
}

var func_281()
{
	return Global_1312736;
}

int func_282(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2557346[iParam0 /*3*/][func_280(iParam1)];
	if (unk_0x9CADE88F210A0BAE(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_283(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_29(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x35C830BCF2BF70BE(iParam0, iParam1);
		*uParam3 = unk_0x98F83843E924A56E(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0x4B4D220E2BCD09B8(iParam0) && unk_0xB2B29814741DDD85(iParam0) != -1)
				{
					*uParam2 = unk_0xB2B29814741DDD85(iParam0);
					*uParam3 = unk_0xC226620531B0B29B(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_284(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_29(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xA86A4D206EC8EB16(iParam0, iParam1);
		*uParam3 = unk_0x695D13ECF7DAEC22(iParam0, iParam1);
		*uParam4 = unk_0x41AF5D2DF638D88F(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_285()
{
	func_20();
	return Global_105220.f_2354.f_539.f_4301;
}

void func_286(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_29(iParam0);
	if (func_21(iVar0) && !unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (iParam0 == unk_0xBC25C936A095B5BA())
		{
			func_287(iParam0, &(Global_105220.f_2354.f_539.f_298[iVar0 /*472*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_105220.f_2354.f_539.f_1715[iVar2 /*4*/][iVar0] = unk_0x45068B6398B7C15B(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0x2BCE278DDEEAB2EB();
					if (Global_105220.f_2354.f_539.f_1715[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_105220.f_2354.f_539.f_1748 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x98ACC000724833AC(unk_0xB5CEFD608600A09F(), &uVar3);
			if (iVar0 == 0)
			{
				unk_0x3A57956BCE003880(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0x3A57956BCE003880(joaat("sp1_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0x3A57956BCE003880(joaat("sp2_parachute_current_tint"), uVar3, 1);
			}
		}
	}
}

void func_287(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar9;
	int iVar10;
	struct<2> Var11;
	struct<4> Var50;
	int iVar72;
	int iVar73;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_292(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = unk_0xFEBBB8B5E3A12A20(iParam0, func_292(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x46C0645571D5BB21(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = unk_0x5BA4FE244D010B3B(iParam0, Var4.f_0);
					Var4.f_4 = unk_0x8C4F3A254E8EA3BD(iParam0, Var4.f_0);
					if (Var4.f_1 == -1)
					{
						if (!unk_0xDBF94F25838DCE55(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_290(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0x1D3364A4FCD401E3(iParam0, Var4.f_0, iVar2))
						{
							unk_0xF0059F27F7BB6680(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_290(Var4.f_0, iVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (50 - 1))
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar10 = unk_0x8E3F7DC568AC987B();
		iVar9 = 0;
		while (iVar9 < iVar10)
		{
			if ((unk_0x6740839132C4BD08(iVar9, &Var11) && !func_289(Var11.f_1)) && iVar72 < 50)
			{
				if (!unk_0xD90F58A58682ED2F(Var11.f_0))
				{
					Var4.f_0 = Var11.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = unk_0x46C0645571D5BB21(iParam0, Var4.f_0);
					if (unk_0x7B2E29350659BE8E(iParam0, Var4.f_0, 0))
					{
						Var4.f_3 = unk_0x5BA4FE244D010B3B(iParam0, Var4.f_0);
						Var4.f_4 = unk_0x8C4F3A254E8EA3BD(iParam0, Var4.f_0);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0xDBF94F25838DCE55(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar72 /*5*/].f_1 = Var4.f_1;
					iVar73 = 0;
					iVar1 = 0;
					while (iVar1 < unk_0x24C19AF1AF00F6A0(iVar9))
					{
						if (unk_0x9278F82C9078D16B(iVar9, iVar1, &Var50))
						{
							if (!func_288(Var50.f_3))
							{
								if (unk_0x1D3364A4FCD401E3(iParam0, Var4.f_0, Var50.f_3))
								{
									unk_0xF0059F27F7BB6680(&(Var4.f_2), iVar73);
								}
								iVar73++;
							}
						}
						iVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0x7B2E29350659BE8E(iParam0, Var4.f_0, 0))
					{
						Var4.f_0 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar72 /*5*/] = { Var4 };
				iVar72++;
			}
			iVar9++;
		}
	}
}

int func_288(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
			return 1;
			break;
	}
	return 0;
}

int func_289(int iParam0)
{
	if (unk_0x7AF0088ABFA713B6())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case joaat("weapon_heavyrifle"):
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case joaat("weapon_autoshotgun"):
			case joaat("weapon_minismg"):
			case joaat("weapon_compactlauncher"):
			case joaat("weapon_battleaxe"):
			case joaat("weapon_pipebomb"):
			case joaat("weapon_poolcue"):
			case joaat("weapon_wrench"):
			case joaat("weapon_doubleaction"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_290(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var43;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case joaat("weapon_minismg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minismg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_minismg_clip_02");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_291(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x24C19AF1AF00F6A0(iVar1))
					{
						if (unk_0x9278F82C9078D16B(iVar1, iVar2, &Var43))
						{
							if (!func_288(Var43.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var43.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_291(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x8E3F7DC568AC987B();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x6740839132C4BD08(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_292(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_293(int iParam0)
{
	int iVar0;
	
	iVar0 = func_29(iParam0);
	if (func_21(iVar0) && !unk_0x36CEFBE9B745A58D(iParam0))
	{
		Global_105220.f_2354.f_539.f_294[iVar0] = unk_0x27C402B01C926499(iParam0);
	}
}

void func_294(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	
	*uParam0 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
	uParam0->f_3 = unk_0x349C94FFF43E2979(unk_0xBC25C936A095B5BA());
	uParam0->f_5 = unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA());
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		uParam0->f_4 = unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F());
	}
	if (unk_0x2A488C176D52CCA5(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (unk_0xB731B8C5BCE89836(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (unk_0xFA30DFD0084E92FE(Global_71226, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (unk_0xFA30DFD0084E92FE(Global_71226, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (unk_0xFA30DFD0084E92FE(Global_71226, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (unk_0xFA30DFD0084E92FE(Global_71226, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()) == unk_0x5E29F9399E0829A3(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_297(&iVar0))
		{
			if (func_296(iVar0, &Var1, &uVar4))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
		{
			iVar5 = func_19();
			if (iVar5 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar5 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar5 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_295(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_295(struct<3> Param0, char* sParam3, struct<3> Param4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xB47B61546691E6E3(Param0))
	{
		iVar0 = unk_0x5E29F9399E0829A3(Param4, sParam3);
		if (!unk_0xBF697FA7422C0621(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x77E1B0C83C9CC9DD(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_296(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_135(*uParam1, 0f, 0f, 0f, 0);
}

int func_297(var uParam0)
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (func_317())
		{
			*uParam0 = func_303(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), 6, -1, 0, 1, -1);
			if (func_302(*uParam0) && !func_298(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_298(int iParam0)
{
	return func_299(iParam0, 0, 1);
}

int func_299(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xFA30DFD0084E92FE(Global_93007.f_1329[iParam0], iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_301() == 0)
		{
			return unk_0xFA30DFD0084E92FE(func_279(func_300(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xFA30DFD0084E92FE(Global_105220.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_300(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 7779;
			break;
		
		case 45:
			return 3804;
			break;
		
		case 46:
			return 5379;
			break;
		
		case 47:
			return 6151;
			break;
		
		case 48:
			return 7228;
			break;
		
		default:
			break;
	}
	return 8804;
}

int func_301()
{
	return Global_25277;
}

int func_302(int iParam0)
{
	return func_299(iParam0, 5, 1);
}

int func_303(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 48)
	{
		if (iParam3 == 6 || iParam3 == func_316(iVar0))
		{
			if (!bParam5 || func_315(iVar0))
			{
				fVar1 = unk_0xF0F2FC9DE291567F(Param0, func_304(iVar0, 0), 1);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (iParam6 || iVar0 != 21)) && iVar0 != iParam7)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_304(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 45:
			return func_314(Global_95018);
			break;
		
		case 46:
			if (Global_1589135 != func_245())
			{
				if (func_313(Global_1589135))
				{
					return func_306(2, 2);
				}
				else if (func_305(Global_1589135))
				{
					return func_306(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510.1f, 4749.5f, -69f;
			break;
		
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_305(int iParam0)
{
	if (iParam0 != func_245())
	{
		if ((unk_0xFA30DFD0084E92FE(Global_1589291[iParam0 /*770*/].f_273.f_244, 0) || unk_0xFA30DFD0084E92FE(Global_1589291[iParam0 /*770*/].f_273.f_244, 1)) || unk_0xFA30DFD0084E92FE(Global_1589291[iParam0 /*770*/].f_273.f_244, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_306(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var6;
	
	Var6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1589135 != func_245())
	{
		if (iParam1 == 3)
		{
			if (func_307(iParam0, 1, &Var0, 0, 0))
			{
				Var6 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (unk_0xFA30DFD0084E92FE(Global_1589291[Global_1589135 /*770*/].f_273.f_244, 4))
			{
				if (func_307(iParam0, 1, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
			else if (unk_0xFA30DFD0084E92FE(Global_1589291[Global_1589135 /*770*/].f_273.f_244, 5))
			{
				if (func_307(iParam0, 2, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
		}
	}
	return Var6;
}

int func_307(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	struct<3> Var6;
	struct<4> Var12;
	struct<3> Var18;
	
	if (!func_312(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_312(iParam1, &Var6))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var12 = { func_310(iParam0) };
	}
	else
	{
		Var12 = { func_309(iParam0) };
	}
	Var18 = { Var12 - Var0 };
	Var18 = { func_308(Var18, -Var0.f_3.f_2) };
	Var18 = { func_308(Var18, Var6.f_3.f_2) };
	*uParam2 = { unk_0x89D97EB4FAE4A574(Var6, 0f, Var18) };
	uParam2->f_3 = { Var12.f_3 };
	return 1;
}

Vector3 func_308(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	fVar3 = unk_0x0BADBFA3B172435F(fParam3);
	fVar4 = unk_0xD0FFB162F40A139C(fParam3);
	Var0.f_0 = ((Param0.f_0 * fVar4) - (Param0.f_1 * fVar3));
	Var0.f_1 = ((Param0.f_0 * fVar3) + (Param0.f_1 * fVar4));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

struct<6> func_309(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_310(int iParam0)
{
	return func_311(iParam0);
}

struct<6> func_311(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_312(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_313(int iParam0)
{
	if (iParam0 != func_245())
	{
		if ((unk_0xFA30DFD0084E92FE(Global_1589291[iParam0 /*770*/].f_273.f_244, 3) || unk_0xFA30DFD0084E92FE(Global_1589291[iParam0 /*770*/].f_273.f_244, 4)) || unk_0xFA30DFD0084E92FE(Global_1589291[iParam0 /*770*/].f_273.f_244, 5))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_314(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 13:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 16:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_315(int iParam0)
{
	return func_299(iParam0, 0, 0);
}

int func_316(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
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
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
	}
	return 6;
}

bool func_317()
{
	return Global_93007.f_321 > 0;
}

int func_318(char* sParam0)
{
	if (unk_0x3362CDE8460ED38B("BailBond1", sParam0))
	{
		return 0;
	}
	else if (unk_0x3362CDE8460ED38B("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0x3362CDE8460ED38B("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0x3362CDE8460ED38B("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_319(int iParam0)
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

int func_320(char* sParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = unk_0x56BEECB328B6D29D(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_321(iVar0, &uVar1);
		if (unk_0x56BEECB328B6D29D(uVar1) == iVar33)
		{
			return iVar0;
		}
		iVar34++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_321(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_322(uParam1, "Abigail1", func_324(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_323(iParam0), 1, 0);
			break;
		
		case 1:
			func_322(uParam1, "Abigail2", func_324(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_323(iParam0), 1, 0);
			break;
		
		case 2:
			func_322(uParam1, "Barry1", func_324(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_323(iParam0), 1, 0);
			break;
		
		case 3:
			func_322(uParam1, "Barry2", func_324(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_323(iParam0), 1, 1);
			break;
		
		case 4:
			func_322(uParam1, "Barry3", func_324(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_323(iParam0), 0, 0);
			break;
		
		case 5:
			func_322(uParam1, "Barry3A", func_324(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_323(iParam0), 0, 1);
			break;
		
		case 6:
			func_322(uParam1, "Barry3C", func_324(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_323(iParam0), 0, 1);
			break;
		
		case 7:
			func_322(uParam1, "Barry4", func_324(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_323(iParam0), 0, 0);
			break;
		
		case 8:
			func_322(uParam1, "Dreyfuss1", func_324(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_323(iParam0), 0, 0);
			break;
		
		case 9:
			func_322(uParam1, "Epsilon1", func_324(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_323(iParam0), 0, 0);
			break;
		
		case 10:
			func_322(uParam1, "Epsilon2", func_324(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_323(iParam0), 1, 0);
			break;
		
		case 11:
			func_322(uParam1, "Epsilon3", func_324(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_323(iParam0), 0, 0);
			break;
		
		case 12:
			func_322(uParam1, "Epsilon4", func_324(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_323(iParam0), 0, 0);
			break;
		
		case 13:
			func_322(uParam1, "Epsilon5", func_324(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_323(iParam0), 1, 0);
			break;
		
		case 14:
			func_322(uParam1, "Epsilon6", func_324(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_323(iParam0), 0, 1);
			break;
		
		case 15:
			func_322(uParam1, "Epsilon7", func_324(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_323(iParam0), 0, 0);
			break;
		
		case 16:
			func_322(uParam1, "Epsilon8", func_324(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_323(iParam0), 1, 0);
			break;
		
		case 17:
			func_322(uParam1, "Extreme1", func_324(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_323(iParam0), 0, 1);
			break;
		
		case 18:
			func_322(uParam1, "Extreme2", func_324(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_323(iParam0), 0, 1);
			break;
		
		case 19:
			func_322(uParam1, "Extreme3", func_324(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_323(iParam0), 0, 1);
			break;
		
		case 20:
			func_322(uParam1, "Extreme4", func_324(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_323(iParam0), 0, 0);
			break;
		
		case 21:
			func_322(uParam1, "Fanatic1", func_324(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_323(iParam0), 1, 0);
			break;
		
		case 22:
			func_322(uParam1, "Fanatic2", func_324(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_323(iParam0), 1, 0);
			break;
		
		case 23:
			func_322(uParam1, "Fanatic3", func_324(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_323(iParam0), 0, 1);
			break;
		
		case 24:
			func_322(uParam1, "Hao1", func_324(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_323(iParam0), 0, 1);
			break;
		
		case 25:
			func_322(uParam1, "Hunting1", func_324(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_323(iParam0), 0, 1);
			break;
		
		case 26:
			func_322(uParam1, "Hunting2", func_324(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_323(iParam0), 0, 1);
			break;
		
		case 27:
			func_322(uParam1, "Josh1", func_324(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_323(iParam0), 1, 0);
			break;
		
		case 28:
			func_322(uParam1, "Josh2", func_324(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_323(iParam0), 1, 1);
			break;
		
		case 29:
			func_322(uParam1, "Josh3", func_324(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_323(iParam0), 1, 1);
			break;
		
		case 30:
			func_322(uParam1, "Josh4", func_324(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_323(iParam0), 1, 0);
			break;
		
		case 31:
			func_322(uParam1, "Maude1", func_324(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_323(iParam0), 0, 1);
			break;
		
		case 32:
			func_322(uParam1, "Minute1", func_324(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_323(iParam0), 0, 1);
			break;
		
		case 33:
			func_322(uParam1, "Minute2", func_324(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_323(iParam0), 0, 1);
			break;
		
		case 34:
			func_322(uParam1, "Minute3", func_324(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_323(iParam0), 0, 1);
			break;
		
		case 35:
			func_322(uParam1, "MrsPhilips1", func_324(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_323(iParam0), 0, 0);
			break;
		
		case 36:
			func_322(uParam1, "MrsPhilips2", func_324(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_323(iParam0), 0, 0);
			break;
		
		case 37:
			func_322(uParam1, "Nigel1", func_324(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_323(iParam0), 1, 0);
			break;
		
		case 38:
			func_322(uParam1, "Nigel1A", func_324(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_323(iParam0), 1, 1);
			break;
		
		case 39:
			func_322(uParam1, "Nigel1B", func_324(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_323(iParam0), 1, 1);
			break;
		
		case 40:
			func_322(uParam1, "Nigel1C", func_324(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_323(iParam0), 1, 1);
			break;
		
		case 41:
			func_322(uParam1, "Nigel1D", func_324(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_323(iParam0), 1, 1);
			break;
		
		case 42:
			func_322(uParam1, "Nigel2", func_324(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_323(iParam0), 1, 1);
			break;
		
		case 43:
			func_322(uParam1, "Nigel3", func_324(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_323(iParam0), 1, 1);
			break;
		
		case 44:
			func_322(uParam1, "Omega1", func_324(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_323(iParam0), 0, 0);
			break;
		
		case 45:
			func_322(uParam1, "Omega2", func_324(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_323(iParam0), 0, 0);
			break;
		
		case 46:
			func_322(uParam1, "Paparazzo1", func_324(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_323(iParam0), 0, 1);
			break;
		
		case 47:
			func_322(uParam1, "Paparazzo2", func_324(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_323(iParam0), 0, 1);
			break;
		
		case 48:
			func_322(uParam1, "Paparazzo3", func_324(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_323(iParam0), 0, 0);
			break;
		
		case 49:
			func_322(uParam1, "Paparazzo3A", func_324(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_323(iParam0), 0, 1);
			break;
		
		case 50:
			func_322(uParam1, "Paparazzo3B", func_324(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_323(iParam0), 0, 1);
			break;
		
		case 51:
			func_322(uParam1, "Paparazzo4", func_324(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_323(iParam0), 0, 0);
			break;
		
		case 52:
			func_322(uParam1, "Rampage1", func_324(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_323(iParam0), 0, 0);
			break;
		
		case 54:
			func_322(uParam1, "Rampage3", func_324(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_323(iParam0), 1, 0);
			break;
		
		case 55:
			func_322(uParam1, "Rampage4", func_324(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_323(iParam0), 1, 0);
			break;
		
		case 56:
			func_322(uParam1, "Rampage5", func_324(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_323(iParam0), 0, 0);
			break;
		
		case 53:
			func_322(uParam1, "Rampage2", func_324(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_323(iParam0), 1, 0);
			break;
		
		case 57:
			func_322(uParam1, "TheLastOne", func_324(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_323(iParam0), 0, 1);
			break;
		
		case 58:
			func_322(uParam1, "Tonya1", func_324(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_323(iParam0), 0, 1);
			break;
		
		case 59:
			func_322(uParam1, "Tonya2", func_324(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_323(iParam0), 0, 1);
			break;
		
		case 60:
			func_322(uParam1, "Tonya3", func_324(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_323(iParam0), 0, 1);
			break;
		
		case 61:
			func_322(uParam1, "Tonya4", func_324(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_323(iParam0), 0, 1);
			break;
		
		case 62:
			func_322(uParam1, "Tonya5", func_324(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_323(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_322(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_323(int iParam0)
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

struct<2> func_324(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_319(iParam0) };
	if (unk_0xF1734B55490E9045(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

int func_325(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_326(Global_105220.f_9056.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_326(Global_105220.f_9056.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_326(Global_105220.f_9056.f_99.f_205[11]);
			break;
		
		case 90:
			return func_326(Global_105220.f_9056.f_99.f_205[7]);
			break;
		
		case 93:
			return func_326(Global_105220.f_9056.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_326(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
			break;
		
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
			break;
	}
	return -1;
}

int func_327(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x56BEECB328B6D29D(sParam0);
	iVar1 = func_328(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_328(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_83888[iVar0 /*34*/].f_6 == iParam0)
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

void func_329(bool bParam0)
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
			Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53149[iVar0 /*3*/][0] = Global_105220.f_20535[iVar0];
		Global_53149.f_31[iVar0 /*3*/][0] = Global_105220.f_20535.f_11[iVar0];
		Global_53149.f_62[iVar0 /*3*/][0] = Global_105220.f_20535.f_22[iVar0];
		Global_53149.f_93[iVar0 /*3*/][0] = Global_105220.f_20535.f_33[iVar0];
		Global_53149.f_124[iVar0 /*3*/][0] = Global_105220.f_20535.f_44[iVar0];
		Global_53149.f_155[iVar0 /*3*/][0] = Global_105220.f_20535.f_55[iVar0];
		Global_53149.f_186[iVar0 /*3*/][0] = Global_105220.f_20535.f_66[iVar0];
		Global_53149.f_217[iVar0 /*3*/][0] = Global_105220.f_20535.f_77[iVar0];
		Global_53149.f_248[iVar0 /*3*/][0] = Global_105220.f_20535.f_88[iVar0];
		if (!bParam0)
		{
			Global_53149[iVar0 /*3*/][1] = Global_105220.f_20535[iVar0];
			Global_53149.f_31[iVar0 /*3*/][1] = Global_105220.f_20535.f_11[iVar0];
			Global_53149.f_62[iVar0 /*3*/][1] = Global_105220.f_20535.f_22[iVar0];
			Global_53149.f_93[iVar0 /*3*/][1] = Global_105220.f_20535.f_33[iVar0];
			Global_53149.f_124[iVar0 /*3*/][1] = Global_105220.f_20535.f_44[iVar0];
			Global_53149.f_155[iVar0 /*3*/][1] = Global_105220.f_20535.f_55[iVar0];
			Global_53149.f_186[iVar0 /*3*/][1] = Global_105220.f_20535.f_66[iVar0];
			Global_53149.f_217[iVar0 /*3*/][1] = Global_105220.f_20535.f_77[iVar0];
			Global_53149.f_248[iVar0 /*3*/][1] = Global_105220.f_20535.f_88[iVar0];
		}
		iVar0++;
	}
}

int func_330()
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(Local_94[0 /*2*/]))
	{
		if (unk_0x724D816EA203A79E(Global_89597[0]))
		{
			unk_0x77815D3407C6700D(Global_89597[0], 1, 1);
			Local_94[0 /*2*/] = Global_89597[0];
			unk_0x38E412DB4A45B900(Global_89597[0], 0);
			unk_0x55662F9F262C2F9B(Local_94[0 /*2*/], "PS_PREP_VEHICLES_GROUP", 0);
			func_205(Local_94[0 /*2*/], 0);
			unk_0x8DAAD1E750773925(Local_94[0 /*2*/]);
		}
	}
	if (!unk_0x724D816EA203A79E(Local_94[1 /*2*/]))
	{
		if (unk_0x724D816EA203A79E(Global_89597[1]))
		{
			unk_0x77815D3407C6700D(Global_89597[1], 1, 1);
			Local_94[1 /*2*/] = Global_89597[1];
			unk_0x38E412DB4A45B900(Global_89597[1], 0);
			unk_0x55662F9F262C2F9B(Local_94[1 /*2*/], "PS_PREP_VEHICLES_GROUP", 0);
			unk_0x8DAAD1E750773925(Local_94[1 /*2*/]);
		}
	}
	if (!unk_0x724D816EA203A79E(Local_94[2 /*2*/]))
	{
		if (unk_0x724D816EA203A79E(Global_89597[2]))
		{
			unk_0x77815D3407C6700D(Global_89597[2], 1, 1);
			Local_94[2 /*2*/] = Global_89597[2];
			unk_0x38E412DB4A45B900(Global_89597[2], 0);
			unk_0x55662F9F262C2F9B(Local_94[2 /*2*/], "PS_PREP_VEHICLES_GROUP", 0);
			unk_0x8DAAD1E750773925(Local_94[2 /*2*/]);
		}
	}
	if (!unk_0x724D816EA203A79E(Local_111[4 /*14*/]))
	{
		if (unk_0x724D816EA203A79E(Global_89597.f_9[0]))
		{
			unk_0x77815D3407C6700D(Global_89597.f_9[0], 1, 1);
			Local_111[4 /*14*/] = Global_89597.f_9[0];
			func_209(Local_111[4 /*14*/], 0);
		}
	}
	if (!unk_0x724D816EA203A79E(Local_111[0 /*14*/]))
	{
		if (unk_0x724D816EA203A79E(Global_89597.f_9[2]))
		{
			unk_0x77815D3407C6700D(Global_89597.f_9[2], 1, 1);
			Local_111[0 /*14*/] = Global_89597.f_9[2];
			func_209(Local_111[0 /*14*/], 0);
		}
	}
	if (!unk_0x724D816EA203A79E(Local_111[1 /*14*/]))
	{
		if (unk_0x724D816EA203A79E(Global_89597.f_9[3]))
		{
			unk_0x77815D3407C6700D(Global_89597.f_9[3], 1, 1);
			Local_111[1 /*14*/] = Global_89597.f_9[3];
			func_209(Local_111[1 /*14*/], 0);
		}
	}
	if (!unk_0x724D816EA203A79E(Local_111[2 /*14*/]))
	{
		if (unk_0x724D816EA203A79E(Global_89597.f_9[4]))
		{
			unk_0x77815D3407C6700D(Global_89597.f_9[4], 1, 1);
			Local_111[2 /*14*/] = Global_89597.f_9[4];
			func_209(Local_111[2 /*14*/], 0);
		}
	}
	if (!unk_0x724D816EA203A79E(Local_111[3 /*14*/]))
	{
		if (unk_0x724D816EA203A79E(Global_89597.f_9[5]))
		{
			unk_0x77815D3407C6700D(Global_89597.f_9[5], 1, 1);
			Local_111[3 /*14*/] = Global_89597.f_9[5];
			func_209(Local_111[3 /*14*/], 0);
		}
	}
	if (!unk_0x724D816EA203A79E(Local_111[5 /*14*/]))
	{
		if (unk_0x724D816EA203A79E(Global_89597.f_9[6]))
		{
			unk_0x77815D3407C6700D(Global_89597.f_9[6], 1, 1);
			Local_111[5 /*14*/] = Global_89597.f_9[6];
			func_209(Local_111[5 /*14*/], 0);
		}
	}
	if (!unk_0x724D816EA203A79E(Local_111[6 /*14*/]))
	{
		if (unk_0x724D816EA203A79E(Global_89597.f_9[7]))
		{
			unk_0x77815D3407C6700D(Global_89597.f_9[7], 1, 1);
			Local_111[6 /*14*/] = Global_89597.f_9[7];
			func_209(Local_111[6 /*14*/], 0);
		}
	}
	if (!unk_0x724D816EA203A79E(Local_111[7 /*14*/]))
	{
		if (unk_0x724D816EA203A79E(Global_89597.f_9[8]))
		{
			unk_0x77815D3407C6700D(Global_89597.f_9[8], 1, 1);
			Local_111[7 /*14*/] = Global_89597.f_9[8];
			func_209(Local_111[7 /*14*/], 0);
		}
	}
	if (!unk_0x724D816EA203A79E(Local_111[8 /*14*/]))
	{
		if (unk_0x724D816EA203A79E(Global_89597.f_9[9]))
		{
			unk_0x77815D3407C6700D(Global_89597.f_9[9], 1, 1);
			Local_111[8 /*14*/] = Global_89597.f_9[9];
			func_209(Local_111[8 /*14*/], 0);
		}
	}
	if (!unk_0x724D816EA203A79E(uLocal_108[0]))
	{
		if (unk_0x724D816EA203A79E(Global_89597.f_28[0]))
		{
			unk_0x77815D3407C6700D(Global_89597.f_28[0], 1, 1);
			uLocal_108[0] = Global_89597.f_28[0];
		}
	}
	if (!unk_0x724D816EA203A79E(uLocal_108[1]))
	{
		if (unk_0x724D816EA203A79E(Global_89597.f_28[1]))
		{
			unk_0x77815D3407C6700D(Global_89597.f_28[1], 1, 1);
			uLocal_108[1] = Global_89597.f_28[1];
		}
	}
	iVar0 = 0;
	while (iVar0 <= (9 - 1))
	{
		if (func_31(Local_111[iVar0 /*14*/]))
		{
			unk_0x4106FAF8AA1D69D5(Local_111[iVar0 /*14*/], iLocal_493);
			unk_0x8DAAD1E750773925(Local_111[iVar0 /*14*/]);
		}
		iVar0++;
	}
	cLocal_475 = { Global_89998 };
	StringCopy(&Global_89998, "", 64);
	func_331(229, 0f, 0f, 2000f);
	if (((((((((((((unk_0x724D816EA203A79E(Local_94[0 /*2*/]) && unk_0x724D816EA203A79E(Local_94[1 /*2*/])) && unk_0x724D816EA203A79E(Local_94[2 /*2*/])) && unk_0x724D816EA203A79E(Local_111[4 /*14*/])) && unk_0x724D816EA203A79E(Local_111[0 /*14*/])) && unk_0x724D816EA203A79E(Local_111[1 /*14*/])) && unk_0x724D816EA203A79E(Local_111[2 /*14*/])) && unk_0x724D816EA203A79E(Local_111[3 /*14*/])) && unk_0x724D816EA203A79E(Local_111[5 /*14*/])) && unk_0x724D816EA203A79E(Local_111[6 /*14*/])) && unk_0x724D816EA203A79E(Local_111[7 /*14*/])) && unk_0x724D816EA203A79E(Local_111[8 /*14*/])) && unk_0x724D816EA203A79E(uLocal_108[0])) && unk_0x724D816EA203A79E(uLocal_108[1]))
	{
		return 1;
	}
	return 0;
}

void func_331(int iParam0, struct<3> Param1)
{
	int iVar0;
	
	if (unk_0x2DA8CA50A72528FB(Global_25622[iParam0 /*23*/].f_19))
	{
		unk_0x1423825E528B4DE1(Global_25622[iParam0 /*23*/].f_19, Param1);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_25622[iParam0 /*23*/][iVar0 /*3*/] = { Param1 };
		iVar0++;
	}
}

void func_332(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	if (func_203())
	{
		unk_0x6C87EFD58B261C6F(0);
		unk_0x7CB6FD92BE491AD9(&(Global_92955.f_20), 2);
		unk_0x121BBDEFA4F0C22B(1);
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 0, 0);
		}
		Global_92951 = { Param0 };
		Global_92954 = uParam3;
		Global_92950 = 1;
		if (iParam4 == 1)
		{
			unk_0xF0059F27F7BB6680(&(Global_92955.f_20), 14);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(Global_92955.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0xF0059F27F7BB6680(&(Global_92955.f_20), 24);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(Global_92955.f_20), 24);
		}
		func_202(1);
	}
}

int func_333()
{
	if (!Global_92955 == 10 && !Global_92955 == 9)
	{
		return 0;
	}
	return Global_92955.f_2;
}

void func_334()
{
	func_33(&Local_403, 1, 0);
	iLocal_447 = 0;
	while (iLocal_447 <= (3 - 1))
	{
		if (func_31(Local_101[iLocal_447 /*2*/]))
		{
			if (Local_101[iLocal_447 /*2*/] != unk_0xBC25C936A095B5BA())
			{
				unk_0x22321800954A532E(Local_101[iLocal_447 /*2*/], 1);
				func_198(&(Local_101[iLocal_447 /*2*/]), 1, 0, 1);
			}
			if (unk_0x2DA8CA50A72528FB(Local_101[iLocal_447 /*2*/].f_1))
			{
				unk_0x07B8ECB35A4ED3AC(&(Local_101[iLocal_447 /*2*/].f_1));
			}
		}
		iLocal_447++;
	}
	iLocal_447 = 0;
	while (iLocal_447 <= (9 - 1))
	{
		if (func_31(Local_111[iLocal_447 /*14*/]))
		{
			func_198(&(Local_111[iLocal_447 /*14*/]), 1, 0, 1);
			if (unk_0x2DA8CA50A72528FB(Local_111[iLocal_447 /*14*/].f_1))
			{
				unk_0x07B8ECB35A4ED3AC(&(Local_111[iLocal_447 /*14*/].f_1));
			}
			func_230(&(Local_111[iLocal_447 /*14*/].f_2));
		}
		iLocal_447++;
	}
	iLocal_447 = 0;
	while (iLocal_447 <= (2 - 1))
	{
		if (unk_0x724D816EA203A79E(uLocal_108[iLocal_447]))
		{
			func_337(&(uLocal_108[iLocal_447]), 0);
		}
		iLocal_447++;
	}
	iLocal_447 = 0;
	while (iLocal_447 <= (3 - 1))
	{
		if (func_31(Local_94[iLocal_447 /*2*/]))
		{
			func_186(&(Local_94[iLocal_447 /*2*/]));
		}
		if (unk_0x2DA8CA50A72528FB(Local_94[iLocal_447 /*2*/].f_1))
		{
			unk_0x07B8ECB35A4ED3AC(&(Local_94[iLocal_447 /*2*/].f_1));
		}
		iLocal_447++;
	}
	func_336(0);
	unk_0xEB233A3B7635D2AC();
	unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 1, 0);
	func_335();
	if (func_31(unk_0xBC25C936A095B5BA()))
	{
		unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
	}
	unk_0x483687B0FCA5415A(uLocal_445, 0);
	unk_0xDF53A66AEE1401AA(1f);
	unk_0xAEC867D0DBB7AFEB(5);
	unk_0x43F06392C4EF25E0(1);
	unk_0x59B038076F830627(1);
	unk_0xE85B33FB221A23CD(5, 1);
	unk_0xE85B33FB221A23CD(3, 1);
	unk_0xE85B33FB221A23CD(1, 1);
	unk_0xE85B33FB221A23CD(10, 1);
	unk_0xE85B33FB221A23CD(9, 1);
	unk_0x0609DB21AC6683A2();
	unk_0x379ACE23D404525C(Vector(33.8865f, 3596.518f, 1383.51f) - Vector(1f, 5f, 5f), Vector(33.8865f, 3596.518f, 1383.51f) + Vector(2f, 5f, 5f), 1, 1);
	unk_0x8510BC031C24B862(joaat("crusader"), 0);
	unk_0x8510BC031C24B862(joaat("barracks"), 0);
	iLocal_434 = 0;
	bLocal_456 = false;
	unk_0x9332FDC92BD28643(1);
	func_233(&Local_82, 0, 0);
	unk_0xB5AD2E78802711D6(0);
	unk_0x95E4B6F3ED223F5A();
}

void func_335()
{
	Global_88955 = 0;
}

void func_336(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_104276, unk_0x1377080E9B0BD993(), 24);
		Global_104270 = 1;
	}
	else
	{
		StringCopy(&Global_104276, "NULL", 24);
		Global_104270 = 0;
	}
}

void func_337(var uParam0, bool bParam1)
{
	if (unk_0x724D816EA203A79E(*uParam0))
	{
		if (unk_0x2FAEA11D96CF14A3(*uParam0))
		{
			unk_0x17175087F2DB6AC8(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0xF8ED8988FAF2823F(uParam0);
		}
		else
		{
			unk_0x5524CBCEE0910236(*uParam0);
		}
	}
}

void func_338()
{
	int iVar0;
	
	if (unk_0xACE95AD318CE412B("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_105220.f_9056 || func_7(0))
	{
		if (!func_339())
		{
			iVar0 = func_5();
			if (iVar0 != -1)
			{
				if (!func_191(iVar0))
				{
					return;
				}
				unk_0xF0059F27F7BB6680(&(Global_83852[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_196();
		}
	}
}

int func_339()
{
	if (((Global_92955 == 13 || Global_92955 == 10) || Global_92955 == 11) || Global_92955 == 12)
	{
		return 0;
	}
	return 1;
}

