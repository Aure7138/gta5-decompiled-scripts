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
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
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
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	struct<3> Local_48 = { 0, 0, 0 } ;
	struct<3> Local_51 = { 0, 0, 0 } ;
	struct<3> Local_54 = { 0, 0, 0 } ;
	struct<3> Local_57 = { 0, 0, 0 } ;
	struct<3> Local_60 = { 0, 0, 0 } ;
	struct<3> Local_63 = { 0, 0, 0 } ;
	struct<3> Local_66 = { 0, 0, 0 } ;
	struct<3> Local_69 = { 0, 0, 0 } ;
	struct<3> Local_72 = { 0, 0, 0 } ;
	struct<3> Local_75 = { 0, 0, 0 } ;
	struct<3> Local_78 = { 0, 0, 0 } ;
	struct<8> Local_81 = { 0, 0, -1, 0, 0, 0, 0, 0 } ;
	var uLocal_89 = 0;
	var uLocal_90 = 1000;
	var uLocal_91 = 1000;
	var uLocal_92 = 0;
	struct<2> Local_93[3];
	struct<2> Local_100[3];
	var uLocal_107[2] = { 0, 0 };
	struct<14> Local_110[9];
	var uLocal_237 = 16;
	var uLocal_238 = 0;
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
	struct<6> Local_402 = { 0, 3, 0, 0, 0, 0 } ;
	var uLocal_408 = 0;
	var uLocal_409 = 1092616192;
	var uLocal_410 = 1101004800;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 3;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	int iLocal_427 = 0;
	var uLocal_428[3] = { 0, 0, 0 };
	int iLocal_432 = 0;
	int iLocal_433 = 0;
	int iLocal_434 = 0;
	int iLocal_435 = 0;
	int iLocal_436 = 0;
	float fLocal_437 = 0f;
	float fLocal_438 = 0f;
	float fLocal_439 = 0f;
	float fLocal_440 = 0f;
	int iLocal_441 = 0;
	int iLocal_442 = 0;
	int iLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	int iLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	int iLocal_449 = 0;
	int iLocal_450 = 0;
	bool bLocal_451 = 0;
	int iLocal_452 = 0;
	int iLocal_453 = 0;
	int iLocal_454 = 0;
	bool bLocal_455 = 0;
	bool bLocal_456 = 0;
	int iLocal_457 = 0;
	int iLocal_458 = 0;
	struct<3> Local_459 = { 0, 0, 0 } ;
	float fLocal_462 = 0f;
	float fLocal_463 = 0f;
	float fLocal_464 = 0f;
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	bool bLocal_469 = 0;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	char cLocal_474[64] = "";
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	char* sLocal_490 = NULL;
	int iLocal_491 = 0;
	int iLocal_492 = 0;
	var uLocal_493 = 30;
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
	var uLocal_644 = 10;
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
	var uLocal_695 = 10;
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
	var uLocal_766 = 20;
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
	var uLocal_867 = 20;
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
	var uLocal_968 = 30;
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
	var uLocal_1149 = 5;
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
	var uLocal_1180 = 7;
	var uLocal_1181 = 0;
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
	var uLocal_1230 = 5;
	var uLocal_1231 = 0;
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
	var uLocal_1256 = 3;
	var uLocal_1257 = 0;
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
	var uLocal_1272 = 15;
	var uLocal_1273 = 0;
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
	var uLocal_1367 = 10;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
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
	var uLocal_1418 = 5;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
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
	var uLocal_1444 = 5;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
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
	int iLocal_1473 = 0;
	int iLocal_1474 = 0;
	int iLocal_1475 = 0;
	int iLocal_1476 = 0;
	int iLocal_1477 = 0;
	bool bLocal_1478 = 0;
	int iLocal_1479 = 0;
	float fLocal_1480[3] = { 0f, 0f, 0f };
	bool bLocal_1484 = 0;
	int iLocal_1485 = 0;
	int iLocal_1486 = 0;
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
	sLocal_17 = "NULL";
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
	uLocal_45 = unk_0x386A330DA3CBD6A0();
	uLocal_46 = unk_0xDEE2BB2717E7BE07();
	Local_48 = { 1358.197f, 3618.234f, 33.89066f };
	Local_51 = { 0f, 5f, -0.5f };
	Local_54 = { 4f, 3f, -0.5f };
	Local_57 = { 4f, -3f, -0.5f };
	Local_60 = { 0f, -5f, -0.5f };
	Local_63 = { -4f, -3f, -0.5f };
	Local_66 = { -4f, 3f, -0.5f };
	Local_69 = { 0f, 2f, -0.5f };
	Local_72 = { 4f, 0f, -0.5f };
	Local_75 = { 0f, -2.2f, -0.5f };
	Local_78 = { -4f, 0f, -0.5f };
	iLocal_450 = joaat("weapon_assaultrifle");
	Local_459 = { 0f, 0f, 0f };
	iLocal_465 = 30000;
	bLocal_469 = true;
	StringCopy(&cLocal_474, "Rural_prep_trigger1", 64);
	sLocal_490 = "rural_prep_park";
	if (unk_0xD63E63DFACCEB80E(3))
	{
		func_314();
		func_310();
	}
	unk_0x6F468A6C94DC21AE(1);
	func_251();
	unk_0x5DC6B0185B12682A(1);
	while (true)
	{
		unk_0x2F626F4BEC43C4F6("M_ThePaletoScorePrep", 0);
		func_250(&uLocal_493);
		if (((((iLocal_1474 == 0 && unk_0x746960881FB19A89(Local_93[0 /*2*/])) && unk_0xFC38B241541883D3(Local_93[0 /*2*/], 0)) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0())) && !unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), Local_93[0 /*2*/], 0)) && unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(Local_93[0 /*2*/], 1)) < 5625f)
		{
			bVar0 = false;
			if ((!Local_81.f_7 && unk_0x04C9AA01BF03901E(unk_0x9F92518438215DD0())) && unk_0x860AFAABAECF6379(unk_0x9F92518438215DD0(), 6))
			{
				iVar1 = 0;
				unk_0x9DA0F3A686A566A6(unk_0x9F92518438215DD0(), &iVar1, 1);
				if (iVar1 != joaat("weapon_unarmed"))
				{
					iVar2 = 0;
					unk_0x9430BF2EC0213AE5(unk_0x9F92518438215DD0(), iVar1, &iVar2);
					if (iVar2 < unk_0x3EBBFA19D5F1F001(unk_0x9F92518438215DD0(), iVar1, 1))
					{
						bVar0 = true;
					}
				}
			}
			if (!bVar0)
			{
				func_230(&Local_81, Local_93[0 /*2*/], 0, 0, 1, 1, 1);
			}
		}
		else
		{
			func_228(&Local_81, 0, 0);
		}
		func_227();
		func_194();
		if (!bLocal_1478)
		{
			func_140();
			func_1();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	switch (iLocal_1474)
	{
		case 0:
			func_138();
			break;
		
		case 1:
			func_104();
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
	switch (iLocal_1475)
	{
		case 0:
			if (unk_0x2E9CF5C574019636())
			{
				unk_0xF391B7BD1F131C3F(800);
			}
			unk_0x5EF916489F3787FC(0f);
			iLocal_1475++;
			break;
		
		case 1:
			func_3();
			break;
	}
}

void func_3()
{
	if (unk_0xFC38B241541883D3(Local_93[0 /*2*/], 0))
	{
		unk_0xA4EF8B99945FC54F(Local_93[0 /*2*/], "IgnoredByQuickSave", 1);
	}
	func_4(0, 0);
	func_310();
}

void func_4(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_54752)
	{
		Global_54752 = iParam1;
	}
	if (bParam0)
	{
		if ((func_7(0) && Global_68491.f_1 == 1) && func_6(Global_68491))
		{
		}
		else
		{
			Global_54750 = 1;
		}
	}
	if (Global_97358.f_7341 || func_7(0))
	{
		iVar0 = func_5();
		iVar1 = Global_81119[iVar0 /*5*/];
		uVar2 = Global_68514.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_97358.f_7341)
			{
			}
			return;
		}
		if (unk_0x94E72F17611BCD3C(Global_81119[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0x94E72F17611BCD3C(Global_81119[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0xEDB9A377CD8B7F03(&(Global_81119[iVar0 /*5*/].f_1), 4);
		unk_0xEDB9A377CD8B7F03(&Global_68493, 1);
		Global_68509 = uVar2;
		Global_68510 = unk_0x17103F66FBB44C3C();
	}
}

int func_5()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0x94E72F17611BCD3C(Global_81119[iVar0 /*5*/].f_1, 2))
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
	if (!bParam0 && unk_0x7B47A371E2D93C2C(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x94E72F17611BCD3C(Global_68493, 0);
}

void func_8()
{
	int iVar0;
	
	if (!iLocal_441)
	{
		if ((unk_0x746960881FB19A89(iLocal_427) && unk_0xFC38B241541883D3(iLocal_427, 0)) && unk_0xAD2C236C4A4B83C9(iLocal_427, 1))
		{
			func_83(iLocal_427, 0, 145);
			unk_0x9187463EB4918A4D(&iLocal_427);
			iLocal_441 = 1;
		}
	}
	unk_0xA1D66B742793EE32(-94.3112f, 3003.016f, 2711.273f, 4857.763f);
	switch (iLocal_1475)
	{
		case 0:
			if (unk_0x2E9CF5C574019636())
			{
				unk_0xF391B7BD1F131C3F(800);
			}
			func_82(724, 0);
			unk_0xDD74AAB135833BB7("RHP1_TRUCK");
			unk_0xA1D688821BD03932(3f, 5f, 4);
			iLocal_1475++;
			break;
		
		case 1:
			if (func_39(&Local_402, Local_48, 0.1f, 0.1f, 2f, 1, Local_93[0 /*2*/], "RHP_RTN", "", "RHP_BK", 1, 0, 1, -1) || (unk_0x2E6E8D325977B3EC(Local_402.f_5) && unk_0xFE0FA79BC49EBB07(Local_93[0 /*2*/], 1359.476f, 3614.326f, 36.87141f, 1356.748f, 3621.605f, 33.72731f, 5f, 0, 1, 0)))
			{
				func_38(Local_93[0 /*2*/], 10.5f, -1, 1056964608, 0, 1);
				unk_0x4E4495A4D2C1856B(Local_93[0 /*2*/], 0);
				func_33(&Local_402, 1, 0);
				func_32(1, 724);
				bLocal_451 = false;
				iLocal_452 = 0;
				iLocal_1475++;
			}
			break;
		
		case 2:
			bLocal_456 = true;
			iVar0 = 0;
			while (iVar0 <= (9 - 1))
			{
				if (func_31(Local_110[iVar0 /*14*/]))
				{
					if (unk_0x91EAD4F2F9B5B38A(unk_0x77009B1C011405A9(Local_110[iVar0 /*14*/], 1), unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), 1) < 400f)
					{
						if (!unk_0x5D1AEC61B1517F38(Local_110[iVar0 /*14*/], 0))
						{
							unk_0xF78316EFCA911012(Local_110[iVar0 /*14*/], unk_0x9F92518438215DD0(), 0, 16);
						}
						bLocal_456 = false;
					}
					else
					{
						unk_0x995B3705D02B0401(&(Local_110[iVar0 /*14*/]));
					}
				}
				iVar0++;
			}
			if (bLocal_456)
			{
				unk_0xD2062A6AC314B85E(unk_0x9F92518438215DD0());
				iLocal_1475++;
			}
			else if (!bLocal_451)
			{
				unk_0xDA31FF1629FE9693();
				unk_0xA1D688821BD03932(3f, 5f, 4);
				func_30("RHP_KILL", 7500, 1);
				bLocal_451 = true;
			}
			break;
		
		case 3:
			if (!unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), Local_93[0 /*2*/], 0))
			{
				if (unk_0x18DF50385FACBD8E())
				{
					unk_0xDA31FF1629FE9693();
				}
				if (func_29(unk_0x9F92518438215DD0()) == 2)
				{
					func_28(&uLocal_237, 0, unk_0x9F92518438215DD0(), "Trevor", 0, 1);
					if (bLocal_451)
					{
						if (func_12(&uLocal_237, "RHPAUD", "RHP_END", "RHP_END_3", 7, 0, 0))
						{
							iLocal_1475 = 4;
						}
					}
					else if (func_12(&uLocal_237, "RHPAUD", "RHP_END", "RHP_END_3", 7, 0, 0))
					{
						iLocal_1475 = 4;
					}
				}
				else if (func_29(unk_0x9F92518438215DD0()) == 0)
				{
					func_28(&uLocal_237, 0, unk_0x9F92518438215DD0(), "Michael", 0, 1);
					if (bLocal_451)
					{
						if (func_12(&uLocal_237, "RHPAUD", "RHP_END", "RHP_END_1", 7, 0, 0))
						{
							iLocal_1475 = 4;
						}
					}
					else if (func_12(&uLocal_237, "RHPAUD", "RHP_END", "RHP_END_1", 7, 0, 0))
					{
						iLocal_1475 = 4;
					}
				}
				if (iLocal_1475 == 4)
				{
					unk_0xC1B1E9A034A63A62(0);
				}
			}
			else if (!iLocal_452 && func_10())
			{
				unk_0xA1D688821BD03932(3f, 7f, 4);
				unk_0xDD74AAB135833BB7("RHP1_END");
				func_30("RHP_EXIT", 7500, 1);
				iLocal_452 = 1;
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
	if (Global_15692 != 0 || unk_0xDFF00E8709AA7095())
	{
		return 1;
	}
	return 0;
}

int func_10()
{
	if (unk_0x18DF50385FACBD8E())
	{
		return 0;
	}
	if (unk_0xBB7E3545EC8FC5BF())
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
	if (Global_16703 == 1)
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
	Global_15699 = 0;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 1;
	Global_16685 = 0;
	Global_16689 = 0;
	StringCopy(&Global_16696, sParam3, 24);
	Global_2621441 = 0;
	return func_13(sParam2, iParam4, 0);
}

int func_13(char* sParam0, int iParam1, bool bParam2)
{
	Global_15693 = 0;
	if (Global_15692 == 0 || Global_15694 == 2)
	{
		if (Global_15692 != 0)
		{
			if (iParam1 > Global_15694)
			{
				if (Global_15699 == 0)
				{
					unk_0xC318E8D9E0AA1394(0);
					Global_14393.f_1 = 3;
					Global_15692 = 0;
					Global_15693 = 1;
					Global_15745 = 0;
					Global_15688 = 0;
					Global_15689 = 0;
					Global_15703 = 0;
					Global_15702 = 0;
					Global_14392 = 0;
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
		if (unk_0xDFF00E8709AA7095())
		{
			return 0;
		}
		if (func_25(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_24();
		Global_14981 = { Global_15146 };
		Global_15698 = Global_15699;
		Global_15705 = Global_15706;
		Global_2621442 = Global_2621441;
		Global_15707 = { Global_15723 };
		Global_15700 = Global_15701;
		Global_16682 = Global_16683;
		Global_16690 = { Global_16696 };
		Global_16684 = Global_16685;
		Global_16686 = Global_16687;
		Global_16688 = Global_16689;
		Global_15311.f_370 = Global_16681;
		Global_15311.f_368 = Global_16679;
		Global_15311.f_369 = Global_16680;
		Global_15688 = Global_15689;
		if (Global_15698)
		{
			unk_0xF76EE56D3E7DAF1B(&Global_2263, 20);
			unk_0xF76EE56D3E7DAF1B(&Global_2264, 17);
			unk_0xF76EE56D3E7DAF1B(&Global_2265, 0);
			if (bParam2)
			{
				func_18();
				if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14393.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14359 == 1)
			{
				return 0;
			}
			if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
			{
				if (unk_0xF9AED6291438A448(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (func_17())
				{
					return 0;
				}
				if (unk_0x29652A1660936FDB(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (unk_0xA75CD3E8519BDC0D(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (unk_0x963737771EA06D79(unk_0x9F92518438215DD0(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68245)
				{
					if (unk_0x5BFFEED2EB6664D5(unk_0x9F92518438215DD0()))
					{
						return 0;
					}
					if (unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7()))
					{
						return 0;
					}
					if (unk_0x5EE181A2C8679F09(unk_0x9F92518438215DD0()))
					{
						return 0;
					}
					if (unk_0x2AD403FEE60639F3(unk_0xCFC72E446B0B3AD7()))
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
				switch (Global_14393.f_1)
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
				if (unk_0x94E72F17611BCD3C(Global_2263, 9))
				{
					return 0;
				}
			}
			func_15();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_14();
		return 1;
	}
	if (Global_15692 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15694 || iParam1 == Global_15694)
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
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xC318E8D9E0AA1394(0);
	Global_15692 = 1;
}

void func_15()
{
	Global_15745 = Global_15744;
	Global_15739 = Global_15740;
	Global_15786 = { Global_15774 };
	Global_15792 = { Global_15780 };
	Global_15747 = Global_15746;
	Global_15816 = { Global_15798 };
	Global_15822 = { Global_15804 };
	Global_15828 = { Global_15810 };
	Global_15834 = { Global_15840 };
	Global_1578 = Global_1579;
	Global_1580 = Global_1581;
	Global_15703 = Global_15704;
	Global_15705 = Global_15706;
	Global_15707 = { Global_15723 };
	Global_15696 = Global_15697;
	Global_16708 = 0;
	Global_15741 = 0;
	Global_15742 = 0;
	unk_0xF76EE56D3E7DAF1B(&Global_2264, 16);
}

int func_16()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_17()
{
	int iVar0;
	int iVar1;
	
	if (Global_68245)
	{
		iVar0 = 0;
		unk_0x9DA0F3A686A566A6(unk_0x9F92518438215DD0(), &iVar1, 1);
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5CC26ADF98AA54C9() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		if (unk_0xD1C0C220414EB327(unk_0x9F92518438215DD0(), 78, 1))
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
		if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
		{
			if (unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[2 /*29*/])
			{
				Global_14393 = 2;
			}
			else
			{
				Global_14393 = 0;
			}
		}
	}
	else
	{
		Global_14393 = func_19();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68245)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

int func_19()
{
	func_20();
	return Global_97358.f_1729.f_539.f_3213;
}

void func_20()
{
	int iVar0;
	
	if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
	{
		if (func_22(Global_97358.f_1729.f_539.f_3213) != unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()))
		{
			iVar0 = func_29(unk_0x9F92518438215DD0());
			if (func_21(iVar0) && (!func_23(14) || Global_96311))
			{
				if (Global_97358.f_1729.f_539.f_3213 != iVar0 && func_21(Global_97358.f_1729.f_539.f_3213))
				{
					Global_97358.f_1729.f_539.f_3214 = Global_97358.f_1729.f_539.f_3213;
				}
				Global_97358.f_1729.f_539.f_3215 = iVar0;
				Global_97358.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97358.f_1729.f_539.f_3213 != 145)
			{
				Global_97358.f_1729.f_539.f_3215 = Global_97358.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97358.f_1729.f_539.f_3213 = 145;
}

bool func_21(int iParam0)
{
	return iParam0 < 3;
}

int func_22(int iParam0)
{
	if (func_21(iParam0))
	{
		return Global_97358.f_29774[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_23(int iParam0)
{
	return Global_34913 == iParam0;
}

void func_24()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14981[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14981[iVar0 /*10*/].f_1), "", 24);
		Global_14981[iVar0 /*10*/].f_7 = 0;
		Global_14981[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14981.f_161 = -99;
	Global_14981.f_162 = { 0f, 0f, 0f };
}

bool func_25(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327593.f_203[iParam1];
			}
			break;
	}
	return unk_0x94E72F17611BCD3C(Global_1327593.f_949, iParam0);
}

void func_26()
{
	unk_0xAD3949CD5FADCA61();
	Global_16703 = 0;
	if ((unk_0x71F866C9C77F9B9F() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xC318E8D9E0AA1394(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0xDFF00E8709AA7095())
	{
		unk_0xC318E8D9E0AA1394(1);
		Global_15692 = 6;
		return;
	}
}

void func_27(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = iParam5;
	if (iParam3 == 0)
	{
		Global_16679 = 1;
		Global_16677 = 0;
	}
	else
	{
		Global_16679 = 0;
		Global_16677 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
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
	if (!Global_68245)
	{
		if (!unk_0x3E0478C40AB5B38D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xF25BFC104A163677(iParam2, 0);
			}
			else
			{
				unk_0xF25BFC104A163677(iParam2, 1);
			}
		}
		if (!unk_0x3E0478C40AB5B38D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x12977F077B942364(iParam2, 0);
			}
			else
			{
				unk_0x12977F077B942364(iParam2, 1);
			}
		}
	}
}

int func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x746960881FB19A89(iParam0))
	{
		iVar1 = unk_0xB6A50C909A8FABC3(iParam0);
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
	unk_0xF2274EFBA02CA0E6(sParam0);
	unk_0x51E13ACB7C47100D(iParam1, 1);
}

int func_31(int iParam0)
{
	if (unk_0x746960881FB19A89(iParam0))
	{
		if (unk_0x2B1914308D0376C8(iParam0))
		{
			if (unk_0xFC38B241541883D3(unk_0x40A2BB73421EA79A(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x4E178F5D4155391A(iParam0))
		{
			if (!unk_0x3E0478C40AB5B38D(unk_0x240654B57CFFBFB3(iParam0)))
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
	
	if (Global_54758)
	{
	}
	Global_54758 = 0;
	if (bParam0)
	{
		Global_54759 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_66845)
		{
			if (Global_54975[Global_66846[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_66846[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_66845)
		{
			if (Global_66846[iVar0 /*9*/] > 0)
			{
				if (Global_66846[iVar0 /*9*/] == iParam1)
				{
					Global_66846[iVar0 /*9*/].f_5 = 0;
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
	
	if (unk_0x94E72F17611BCD3C(uParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_37(uParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x2E6E8D325977B3EC(uParam0->f_1[iVar0]))
		{
			unk_0x0451B5D93A4BDAA0(&(uParam0->f_1[iVar0]));
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
			unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), iVar0);
			unk_0xF76EE56D3E7DAF1B(&(uParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (unk_0x2E6E8D325977B3EC(*uParam0))
	{
		unk_0x0451B5D93A4BDAA0(uParam0);
	}
	uParam0->f_6 = 0;
	uParam0->f_12 = 0;
	uParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar0]))
		{
			unk_0xF25BFC104A163677(uParam0->f_17[iVar0], 1);
			unk_0x9352BAE0948677D4(uParam0->f_17[iVar0], 1);
			if (bParam2)
			{
				unk_0x9001FCB58244C11D(uParam0->f_17[iVar0], 32, 1);
				unk_0x9001FCB58244C11D(uParam0->f_17[iVar0], 305, 0);
			}
			unk_0x9001FCB58244C11D(uParam0->f_17[iVar0], 268, 0);
			if (bParam1)
			{
				if (unk_0x91690C37B3C4E5FA(uParam0->f_17[iVar0], func_34()) && uParam0->f_17[iVar0] != unk_0x9F92518438215DD0())
				{
					unk_0x1FA92C26AB9467D3(uParam0->f_17[iVar0]);
				}
			}
			if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 29))
			{
				unk_0x8AB186762992E626(uParam0->f_17[iVar0], 0, -1, 0);
			}
			uParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		unk_0xF25BFC104A163677(unk_0x9F92518438215DD0(), 1);
		unk_0x9352BAE0948677D4(unk_0x9F92518438215DD0(), 1);
	}
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		if (bParam2)
		{
			unk_0x9001FCB58244C11D(unk_0x9F92518438215DD0(), 32, 1);
		}
	}
	uParam0->f_21 = 0;
}

var func_34()
{
	return unk_0x0CD9BC7F312ED395(unk_0x2563F6EECD8726D3());
}

void func_35(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xF76EE56D3E7DAF1B(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0xF76EE56D3E7DAF1B(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0xF76EE56D3E7DAF1B(&(uParam1->f_13), 19);
			break;
	}
}

void func_36(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xF76EE56D3E7DAF1B(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0xF76EE56D3E7DAF1B(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0xF76EE56D3E7DAF1B(&(uParam1->f_13), 16);
			break;
	}
}

void func_37(var uParam0)
{
	if (unk_0x2E6E8D325977B3EC(uParam0->f_5))
	{
		unk_0x0451B5D93A4BDAA0(&(uParam0->f_5));
	}
}

int func_38(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5)
{
	unk_0x6A6A41C66448AD09(0, 71, 1);
	unk_0x6A6A41C66448AD09(0, 72, 1);
	unk_0x6A6A41C66448AD09(0, 76, 1);
	unk_0x6A6A41C66448AD09(0, 73, 1);
	unk_0x6A6A41C66448AD09(0, 59, 1);
	unk_0x6A6A41C66448AD09(0, 60, 1);
	if (bParam5)
	{
		unk_0x6A6A41C66448AD09(0, 75, 1);
	}
	unk_0x6A6A41C66448AD09(0, 80, 1);
	unk_0x6A6A41C66448AD09(0, 69, 1);
	unk_0x6A6A41C66448AD09(0, 70, 1);
	unk_0x6A6A41C66448AD09(0, 68, 1);
	unk_0x6A6A41C66448AD09(0, 74, 1);
	unk_0x6A6A41C66448AD09(0, 86, 1);
	unk_0x6A6A41C66448AD09(0, 81, 1);
	unk_0x6A6A41C66448AD09(0, 82, 1);
	unk_0x6A6A41C66448AD09(0, 138, 1);
	unk_0x6A6A41C66448AD09(0, 136, 1);
	unk_0x6A6A41C66448AD09(0, 114, 1);
	unk_0x6A6A41C66448AD09(0, 107, 1);
	unk_0x6A6A41C66448AD09(0, 110, 1);
	unk_0x6A6A41C66448AD09(0, 89, 1);
	unk_0x6A6A41C66448AD09(0, 89, 1);
	unk_0x6A6A41C66448AD09(0, 87, 1);
	unk_0x6A6A41C66448AD09(0, 88, 1);
	unk_0x6A6A41C66448AD09(0, 113, 1);
	unk_0x6A6A41C66448AD09(0, 115, 1);
	unk_0x6A6A41C66448AD09(0, 116, 1);
	unk_0x6A6A41C66448AD09(0, 117, 1);
	unk_0x6A6A41C66448AD09(0, 118, 1);
	unk_0x6A6A41C66448AD09(0, 119, 1);
	unk_0x6A6A41C66448AD09(0, 131, 1);
	unk_0x6A6A41C66448AD09(0, 132, 1);
	unk_0x6A6A41C66448AD09(0, 123, 1);
	unk_0x6A6A41C66448AD09(0, 126, 1);
	unk_0x6A6A41C66448AD09(0, 129, 1);
	unk_0x6A6A41C66448AD09(0, 130, 1);
	unk_0x6A6A41C66448AD09(0, 133, 1);
	unk_0x6A6A41C66448AD09(0, 134, 1);
	unk_0x2630A94EE47FEC93();
	if ((unk_0x17103F66FBB44C3C() - Global_28) > 500)
	{
		unk_0xEF5DFB41E5585C16(iParam0, fParam1, iParam2, iParam4);
	}
	Global_28 = unk_0x17103F66FBB44C3C();
	if (!unk_0x0BA451447C3B1A8D(iParam0))
	{
		if (unk_0xE3DAC530D2CCDAE3(unk_0x9EF11DECA38804B6(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_39(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15)
{
	return func_40(uParam0, Param1, Param4, func_81(), func_81(), iParam7, 5, 0, 0, 0, iParam8, sParam9, func_80(), func_80(), func_80(), func_80(), sParam10, 0, bParam12, sParam11, 0, iParam13, bParam14, iParam15, 0, 0, 0, 1, 1065353216);
}

int func_40(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, bool bParam25, bool bParam26, char* sParam27, bool bParam28, int iParam29, bool bParam30, int iParam31, int iParam32, int iParam33, int iParam34, bool bParam35, float fParam36)
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
	func_79(uParam0);
	func_78(uParam0);
	func_77();
	if (func_61(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, uParam0->f_8, bParam25, iParam18, 0, 0, iParam32, iParam33, iParam34, iParam14, bParam26))
	{
		func_60(sParam20);
		func_60(sParam21);
		func_60(sParam22);
		func_60(sParam23);
		if (unk_0x9685D9855970A029())
		{
			bVar1 = false;
			if (unk_0xFC38B241541883D3(iParam18, 0))
			{
				if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iParam18, 0))
				{
					unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 3);
					if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 9))
					{
						unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 4);
					}
					if (unk_0x94E72F17611BCD3C(uParam0->f_13, 23))
					{
						unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 23);
					}
					unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5)
			{
				if (func_58(uParam0, iParam29))
				{
					unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 3);
					if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 9))
					{
						unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 4);
					}
					unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_60(sParam24);
				func_60(sParam27);
				func_60("MORE_SEATS");
				if (bParam26 && unk_0x99A27D5F9B887E5F(unk_0xCFC72E446B0B3AD7(), 0))
				{
					if (unk_0x2E6E8D325977B3EC(uParam0->f_5))
					{
						unk_0x0451B5D93A4BDAA0(&(uParam0->f_5));
						func_60(sParam19);
					}
					if (unk_0x2E6E8D325977B3EC(*uParam0))
					{
						unk_0x0451B5D93A4BDAA0(uParam0);
					}
					if ((!func_56(uParam0, 1) && !func_55(uParam0)) && !unk_0x94E72F17611BCD3C(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_54(uParam0, "LOSE_WANTED", 0);
							if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[0]))
							{
								func_52(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 0);
						unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0x94E72F17611BCD3C(uParam0->f_13, 0))
					{
						func_60("LOSE_WANTED");
						unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 0);
						unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 1);
					}
					if (unk_0x94E72F17611BCD3C(uParam0->f_13, 1))
					{
						if (!func_56(uParam0, 1))
						{
							if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[0]))
							{
								func_52(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 1);
						}
					}
					if (!unk_0x2E6E8D325977B3EC(uParam0->f_5))
					{
						if (unk_0x2E6E8D325977B3EC(*uParam0))
						{
							unk_0x0451B5D93A4BDAA0(uParam0);
						}
						uParam0->f_5 = func_51(Var3, 0);
						if (!iParam31 == -1)
						{
							unk_0xAFF0147EA2454485(uParam0->f_5, iParam31);
						}
						if (bParam35)
						{
							func_50(uParam0->f_5, uParam0);
						}
					}
					else if (!func_49(Var3, unk_0xF4A29E04CA54F443(uParam0->f_5), 0.1f))
					{
						unk_0xAB1A4C1CDE66050B(uParam0->f_5, Var3);
						if (bParam35)
						{
							func_50(uParam0->f_5, uParam0);
						}
					}
					if (!func_56(uParam0, 2))
					{
						if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 2))
						{
							func_54(uParam0, sParam19, 0);
							unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 2);
						}
					}
					if (iParam14 == 4 || iParam14 == 5)
					{
						if (unk_0x94E72F17611BCD3C(uParam0->f_13, 13))
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
						unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), Param1, Param4, iParam13, iVar6, iVar7);
						if (unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), Param7, Param10, fParam36, 0, iVar6, iVar7))
						{
							bVar1 = true;
						}
					}
					else if (unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), Param1, Param4, iParam13, iVar6, iVar7))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar2]))
							{
								if (iParam14 == 4 || iParam14 == 5)
								{
									iVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
									if (!unk_0x44E080690DA76A2A(uParam0->f_17[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam18 != 0)
								{
									if (!unk_0x44E080690DA76A2A(uParam0->f_17[iVar2], iParam18, 0))
									{
										bVar1 = false;
									}
								}
								else if (!unk_0x91690C37B3C4E5FA(uParam0->f_17[iVar2], func_34()) || !func_47(uParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_44(uParam0))
							{
								func_60(sParam19);
								func_60(sParam24);
								func_60(sParam20);
								func_60(sParam21);
								func_60(sParam22);
								func_60(sParam23);
								func_60("LOSE_WANTED");
								func_60("MORE_SEATS");
								func_60(sParam27);
								func_33(uParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (unk_0x746960881FB19A89(iParam18))
			{
				if ((bParam26 && unk_0x99A27D5F9B887E5F(unk_0xCFC72E446B0B3AD7(), 0)) && (!unk_0x94E72F17611BCD3C(uParam0->f_13, 9) && !unk_0x94E72F17611BCD3C(uParam0->f_13, 22)))
				{
					func_60(sParam24);
					func_60(sParam27);
					if (unk_0x2E6E8D325977B3EC(uParam0->f_5) || unk_0x2E6E8D325977B3EC(*uParam0))
					{
						unk_0x0451B5D93A4BDAA0(&(uParam0->f_5));
						unk_0x0451B5D93A4BDAA0(uParam0);
						func_60(sParam19);
					}
					if ((!func_56(uParam0, 1) && !func_55(uParam0)) && !unk_0x94E72F17611BCD3C(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_54(uParam0, "LOSE_WANTED", 0);
							if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[0]))
							{
								func_52(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 0);
						unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0x94E72F17611BCD3C(uParam0->f_13, 0))
					{
						func_60("LOSE_WANTED");
						unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 0);
						unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 1);
					}
					if (unk_0x94E72F17611BCD3C(uParam0->f_13, 1))
					{
						if (!func_56(uParam0, 1))
						{
							if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[0]))
							{
								func_52(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 1);
						}
					}
					if (unk_0xFC38B241541883D3(iParam18, 0))
					{
						if (!unk_0x2E6E8D325977B3EC(*uParam0))
						{
							if (unk_0x2E6E8D325977B3EC(uParam0->f_5))
							{
								unk_0x0451B5D93A4BDAA0(&(uParam0->f_5));
								func_60(sParam19);
							}
							*uParam0 = func_41(iParam18, 0, 0);
							unk_0xCA523773918411B5(*uParam0, 2);
							if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 4))
							{
								func_50(*uParam0, uParam0);
							}
						}
						if (!func_56(uParam0, 2))
						{
							if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 3))
							{
								func_54(uParam0, sParam24, 0);
								unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 3);
								unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 4);
							}
							else if (unk_0x94E72F17611BCD3C(uParam0->f_13, 9))
							{
								if (!unk_0x471A7F8C908126F0(sParam27))
								{
									if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 4))
									{
										func_54(uParam0, sParam27, 0);
										unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 4);
									}
								}
								else if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 4))
								{
									func_54(uParam0, sParam24, 0);
									unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 4);
								}
								if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 23))
								{
									if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[0]))
									{
										func_52(uParam0->f_17[0], "GET_IN_CAR", 3);
									}
									unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0x2E6E8D325977B3EC(uParam0->f_5))
				{
					unk_0x0451B5D93A4BDAA0(&(uParam0->f_5));
					func_60(sParam19);
				}
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!func_56(uParam0, 2))
						{
							if (unk_0x44615198247FF471(unk_0x9F92518438215DD0()))
							{
								if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 13))
								{
									iVar8 = 0;
									iVar9 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar2]))
										{
											iVar8++;
										}
										iVar2++;
									}
									iVar9 = unk_0x073B65E051D2F03E(0, iVar8);
									if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar9]))
									{
										func_52(uParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_54(uParam0, "MORE_SEATS", 0);
									unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 13);
								}
							}
							else if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 3))
							{
								func_54(uParam0, sParam24, 0);
								unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 3);
								unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 4);
							}
							else if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 4))
							{
								if (unk_0x94E72F17611BCD3C(uParam0->f_13, 9))
								{
									func_54(uParam0, sParam27, 0);
									unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_56(uParam0, 2))
					{
						if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 3))
						{
							func_54(uParam0, sParam24, 0);
							unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 3);
							unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 4);
						}
						else if (unk_0x94E72F17611BCD3C(uParam0->f_13, 9))
						{
							if (!unk_0x471A7F8C908126F0(sParam27))
							{
								if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 4))
								{
									func_54(uParam0, sParam27, 0);
									unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 4);
								}
							}
							else if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 4))
							{
								func_54(uParam0, sParam24, 0);
								unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (unk_0x94E72F17611BCD3C(uParam0->f_13, 0))
		{
			unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 0);
		}
		func_60(sParam19);
		func_60(sParam24);
		func_60(sParam27);
		func_60(sParam24);
		func_60("LOSE_WANTED");
		if (unk_0x2E6E8D325977B3EC(uParam0->f_5))
		{
			unk_0x0451B5D93A4BDAA0(&(uParam0->f_5));
		}
		if (unk_0x2E6E8D325977B3EC(*uParam0))
		{
			unk_0x0451B5D93A4BDAA0(uParam0);
		}
	}
	unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 11);
	unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 12);
	return 0;
}

int func_41(int iParam0, bool bParam1, bool bParam2)
{
	return func_42(iParam0, !bParam1, bParam2);
}

int func_42(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x746960881FB19A89(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x5304FE8A2CED6AE8(iParam0);
	if (unk_0x2B1914308D0376C8(iParam0))
	{
		unk_0xD4916ED85412C8D9(uVar0, func_43(unk_0x4B69FB3A5B09A1BA(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xFEE42298F5E238BE(uVar0, bParam1);
		}
		else
		{
			unk_0x016722B6E0559A9A(uVar0, 2);
		}
	}
	else if (unk_0x4E178F5D4155391A(iParam0))
	{
		unk_0xD4916ED85412C8D9(uVar0, func_43(unk_0x4B69FB3A5B09A1BA(), 0.7f, 0.7f));
		unk_0xFEE42298F5E238BE(uVar0, bParam1);
	}
	else if (unk_0xA6C29CC20CD3DCB4(iParam0))
	{
		unk_0xD4916ED85412C8D9(uVar0, func_43(unk_0x4B69FB3A5B09A1BA(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_43(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_44(var uParam0)
{
	if (unk_0x94E72F17611BCD3C(uParam0->f_13, 12))
	{
		if (func_46(unk_0x9F92518438215DD0()))
		{
			if (func_45(1, 0, 1) || unk_0x94E72F17611BCD3C(uParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_45(1, 0, 1) || unk_0x94E72F17611BCD3C(uParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_45(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x01F284681531A927())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		if (!unk_0x44615198247FF471(unk_0x9F92518438215DD0()))
		{
			return 0;
		}
		iVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
		if (bParam0)
		{
			if (unk_0x0BA451447C3B1A8D(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x0BA451447C3B1A8D(iVar0))
			{
				if (unk_0xB5BBEB12C77EE430(iVar0, -1) != unk_0x9F92518438215DD0())
				{
					return 0;
				}
			}
		}
		if (!unk_0x0BA451447C3B1A8D(iVar0))
		{
			if (unk_0xCC4F040D720C3035(iVar0) < 0.95f || unk_0xCC4F040D720C3035(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7()))
	{
		return 0;
	}
	if (!unk_0x2439A8FCC113E966(unk_0xCFC72E446B0B3AD7()))
	{
		return 0;
	}
	return 1;
}

int func_46(int iParam0)
{
	float fVar0;
	
	if (!unk_0x3E0478C40AB5B38D(iParam0))
	{
		fVar0 = unk_0x9EF11DECA38804B6(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_47(int iParam0, int iParam1)
{
	if (!unk_0x3E0478C40AB5B38D(iParam0))
	{
		if (unk_0x44615198247FF471(unk_0x9F92518438215DD0()) && iParam1)
		{
			if (func_48(unk_0x9F92518438215DD0(), iParam0))
			{
				unk_0xB5F8484B6841C167(func_34(), 50f);
				return 1;
			}
		}
		else if (unk_0x91690C37B3C4E5FA(iParam0, func_34()))
		{
			unk_0xB5F8484B6841C167(func_34(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_48(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x3E0478C40AB5B38D(iParam0))
	{
		if (unk_0x44615198247FF471(iParam0))
		{
			iVar0 = unk_0x1161215F69587BDA(iParam0, 0);
			if (unk_0xFC38B241541883D3(iVar0, 0))
			{
				if (!unk_0x3E0478C40AB5B38D(iParam1))
				{
					if (unk_0x2A2DBEFFFC03A22F(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_49(struct<3> Param0, struct<3> Param3, float fParam6)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (unk_0xE3DAC530D2CCDAE3((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xE3DAC530D2CCDAE3((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			if (unk_0xE3DAC530D2CCDAE3((Param0.f_2 - Param3.f_2)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_50(var uParam0, var uParam1)
{
	if (unk_0x2E6E8D325977B3EC(uParam0))
	{
		if (unk_0x2E6E8D325977B3EC(uParam1->f_6))
		{
			unk_0xD8EEE815F0120FCE(uParam1->f_6, 0);
		}
		unk_0x85EEFE5F20EFE4F4(0);
		unk_0x6B4C4F6AAE56C4E9();
		uParam1->f_6 = uParam0;
		unk_0xD8EEE815F0120FCE(uParam0, 1);
	}
}

var func_51(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x2290D76D0A4ACACA(Param0);
	unk_0xD4916ED85412C8D9(uVar0, func_43(unk_0x4B69FB3A5B09A1BA(), 1f, 1f));
	unk_0xD8EEE815F0120FCE(uVar0, iParam3);
	return uVar0;
}

void func_52(var uParam0, char* sParam1, int iParam2)
{
	unk_0xA3F41D007914F399(uParam0, sParam1, func_53(iParam2), 1);
}

int func_53(int iParam0)
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

void func_54(var uParam0, char* sParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!unk_0x471A7F8C908126F0(sParam1))
		{
			if (!unk_0x6B08EC9A88700FBB(sParam1, ""))
			{
				func_30(sParam1, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x17103F66FBB44C3C();
}

int func_55(var uParam0)
{
	if (!unk_0x3E0478C40AB5B38D(uParam0->f_16))
	{
		if (unk_0xE7C093C63744E17E(uParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_56(var uParam0, int iParam1)
{
	if (iParam1 != 1 || unk_0xBB7E3545EC8FC5BF())
	{
		if (unk_0x18DF50385FACBD8E())
		{
			return 1;
		}
		if (func_57(uParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0xBB7E3545EC8FC5BF())
	{
		if (func_9() && !func_11())
		{
			return 1;
		}
	}
	return 0;
}

int func_57(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x17103F66FBB44C3C();
	iVar0 = (iVar1 - uParam0->f_10);
	if (iVar0 < 35)
	{
		return 1;
	}
	return 0;
}

int func_58(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		iVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
		if (func_59(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_59(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xFC38B241541883D3(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (unk_0x746960881FB19A89(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0x95A70C0B34435CA8(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!unk_0xC14639558EA3C489(iParam0, 1))
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
				if (!unk_0xC14639558EA3C489(iParam0, 1))
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

void func_60(char* sParam0)
{
	if (!unk_0x471A7F8C908126F0(sParam0))
	{
		unk_0xE9EEE16322458D65(sParam0);
	}
}

int func_61(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, var uParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)
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
		if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (unk_0x99A27D5F9B887E5F(unk_0xCFC72E446B0B3AD7(), 0))
		{
			if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 29) && !unk_0x94E72F17611BCD3C(uParam0->f_13, 28))
			{
				if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar0]))
				{
					unk_0x8AB186762992E626(uParam0->f_17[iVar0], 1, -1, 0);
				}
				if (iVar0 == 2)
				{
					unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 29) && unk_0x94E72F17611BCD3C(uParam0->f_13, 28))
		{
			if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar0]))
			{
				unk_0x8AB186762992E626(uParam0->f_17[iVar0], 0, -1, 0);
			}
			if (iVar0 == 2)
			{
				unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (unk_0x94E72F17611BCD3C(uParam0->f_13, 26))
	{
		bVar23 = false;
		if (!unk_0x746960881FB19A89(uParam0->f_21))
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
			iVar24 = unk_0x86ED1EA56B0ED915(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), 50f, 0, iVar25);
			if (unk_0xFC38B241541883D3(iVar24, 0))
			{
				uParam0->f_21 = iVar24;
			}
		}
		if (unk_0xFC38B241541883D3(uParam0->f_21, 0))
		{
			if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(uParam0->f_21, 1)) < 400f)
			{
				if (!unk_0x44615198247FF471(unk_0x9F92518438215DD0()))
				{
					if (!unk_0x99A27D5F9B887E5F(unk_0xCFC72E446B0B3AD7(), 0) || !bParam17)
					{
						if (func_59(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar0]))
								{
									unk_0x0365EE015603E149(uParam0->f_17[iVar0], 1f);
									if (unk_0x91690C37B3C4E5FA(uParam0->f_17[iVar0], func_34()))
									{
										unk_0x1FA92C26AB9467D3(uParam0->f_17[iVar0]);
									}
									if (unk_0xE962BD784DD0E442(uParam0->f_17[iVar0], -1794415470) == 7 && !func_76(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!unk_0xBD280C076BC69C97(uParam0->f_17[iVar0]) && !unk_0x11579615465D25B4(uParam0->f_17[iVar0]))
										{
											unk_0x4A1AC49BA4A747F7(uParam0->f_17[iVar0], 1);
											unk_0x4073360CA020BB84(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
											unk_0xC70FD27B0FCC0545(uParam0->f_17[iVar0], iVar0);
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
			unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar0]))
				{
					if (!unk_0x11CF47CA7B00BE4F(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						unk_0x32D18ECD9E6F9BE2(uParam0->f_17[iVar0]);
					}
					if (!unk_0x91690C37B3C4E5FA(uParam0->f_17[iVar0], func_34()))
					{
						if (func_74(uParam0, uParam0->f_17[iVar0], uParam8, 1))
						{
							unk_0x78267FAB4E1661CE(uParam0->f_17[iVar0], func_34());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 26))
	{
		if ((!func_73(uParam0) && unk_0x44615198247FF471(unk_0x9F92518438215DD0())) && !unk_0x746960881FB19A89(iParam10))
		{
			iVar13 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
			if (unk_0xFC38B241541883D3(iVar13, 0))
			{
				if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_56(uParam0, 2))
					{
						iVar26 = 0;
						iVar27 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar0]))
							{
								iVar26++;
							}
							iVar0++;
						}
						iVar27 = unk_0x073B65E051D2F03E(0, iVar26);
						if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar27]))
						{
							func_52(uParam0->f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_54(uParam0, "MORE_SEATS", 0);
						unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 13);
					}
				}
				bVar12 = true;
			}
		}
		else
		{
			bVar12 = false;
			unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 13);
			func_60("MORE_SEATS");
		}
		if (!unk_0x746960881FB19A89(iParam10))
		{
			if ((!unk_0x3E0478C40AB5B38D(uParam0->f_17[0]) || !unk_0x3E0478C40AB5B38D(uParam0->f_17[1])) || !unk_0x3E0478C40AB5B38D(uParam0->f_17[2]))
			{
				if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 31))
				{
					if (unk_0x44615198247FF471(unk_0x9F92518438215DD0()) && !func_56(uParam0, 2))
					{
						iVar13 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
						if (func_72(iVar13, uParam0))
						{
							func_54(uParam0, "CMN_VEHSUIT", 0);
							unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0x44615198247FF471(unk_0x9F92518438215DD0()))
				{
					unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 31);
					func_60("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0xFC38B241541883D3(iParam10, 0))
		{
			if (unk_0x2A2DBEFFFC03A22F(unk_0x9F92518438215DD0(), iParam10))
			{
				if (unk_0x205C5BF7277043DF(0, 75))
				{
					unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 21);
				}
			}
			else if (unk_0x94E72F17611BCD3C(uParam0->f_13, 21))
			{
				unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x746960881FB19A89(uParam0->f_17[iVar0]))
			{
				if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar0]))
				{
					if (!unk_0x91690C37B3C4E5FA(uParam0->f_17[iVar0], func_34()))
					{
						unk_0x04B1E4FA412227A8(uParam0->f_17[iVar0], 1);
					}
					else
					{
						unk_0x04B1E4FA412227A8(uParam0->f_17[iVar0], 0);
					}
					if (unk_0x44615198247FF471(unk_0x9F92518438215DD0()))
					{
						iVar13 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
						if (unk_0xFC38B241541883D3(iVar13, 0))
						{
							if (unk_0x91690C37B3C4E5FA(uParam0->f_17[iVar0], func_34()))
							{
								if (!func_73(uParam0) && unk_0x44615198247FF471(unk_0x9F92518438215DD0()))
								{
									if (!func_71(uParam0->f_17[iVar0]))
									{
										unk_0x1FA92C26AB9467D3(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar13 != iParam10 && !unk_0x0BA451447C3B1A8D(iVar13))
						{
							if (unk_0x2A2DBEFFFC03A22F(uParam0->f_17[iVar0], iVar13))
							{
								if (unk_0x5BFFEED2EB6664D5(iVar13) && !unk_0xF37F1CECABC7FC33(iVar13))
								{
									Var28 = { unk_0x77009B1C011405A9(iVar13, 1) };
									if (Var28.f_2 < -1f)
									{
										unk_0xDC6D5C817B48C45A(uParam0->f_17[iVar0], iVar13, 64);
									}
								}
							}
						}
					}
					bVar11 = true;
					if (!unk_0x91690C37B3C4E5FA(uParam0->f_17[iVar0], func_34()))
					{
						if (unk_0x44615198247FF471(uParam0->f_17[iVar0]))
						{
							iVar13 = unk_0x1161215F69587BDA(uParam0->f_17[iVar0], 0);
							if (!unk_0x0BA451447C3B1A8D(iVar13))
							{
								if (unk_0xFC38B241541883D3(iParam10, 0))
								{
									if (iVar13 != iParam10)
									{
										if (!unk_0x2A2DBEFFFC03A22F(unk_0x9F92518438215DD0(), iVar13))
										{
											if (unk_0x9EF11DECA38804B6(iVar13) > 5f)
											{
												unk_0xDC6D5C817B48C45A(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0xDC6D5C817B48C45A(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
								else
								{
									if (unk_0x44615198247FF471(unk_0x9F92518438215DD0()))
									{
										iVar31 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
									}
									if (unk_0xFC38B241541883D3(iVar31, 0))
									{
										if (iVar13 != iVar31)
										{
											if (unk_0x9EF11DECA38804B6(iVar13) > 5f)
											{
												unk_0xDC6D5C817B48C45A(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0xDC6D5C817B48C45A(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
							}
						}
					}
					if (unk_0x91690C37B3C4E5FA(uParam0->f_17[iVar0], func_34()))
					{
						iVar32 = unk_0xEF1C7D5F912BEE3D(unk_0x9F92518438215DD0());
						if (unk_0x746960881FB19A89(iVar32))
						{
							if (func_59(iVar32, uParam0, 0))
							{
								if (func_70(iVar0, uParam0) || !unk_0x94E72F17611BCD3C(uParam0->f_13, 27))
								{
									unk_0xC70FD27B0FCC0545(uParam0->f_17[iVar0], iVar0);
									func_35(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_70(iVar0, uParam0))
							{
								if (unk_0xB6A50C909A8FABC3(iVar32) == joaat("sentinel2"))
								{
									unk_0xC70FD27B0FCC0545(uParam0->f_17[iVar0], 4);
								}
								else
								{
									unk_0xC70FD27B0FCC0545(uParam0->f_17[iVar0], 2);
								}
								func_69(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0x91690C37B3C4E5FA(uParam0->f_17[iVar0], func_34()) && !func_68(uParam0->f_17[iVar0], iParam10)) && !func_67(uParam0->f_17[iVar0], iParam10))
					{
						if (func_74(uParam0, uParam0->f_17[iVar0], uParam8, bParam11))
						{
							if (!unk_0x91690C37B3C4E5FA(uParam0->f_17[iVar0], func_34()))
							{
								if (((!unk_0xBD280C076BC69C97(uParam0->f_17[iVar0]) && !unk_0x11579615465D25B4(uParam0->f_17[iVar0])) && !unk_0x8EB51A494E8B42B4(uParam0->f_17[iVar0])) && !unk_0x11CF47CA7B00BE4F(uParam0->f_17[iVar0]))
								{
									iVar14 = unk_0xE962BD784DD0E442(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7)
									{
										unk_0x32D18ECD9E6F9BE2(uParam0->f_17[iVar0]);
									}
									unk_0x78267FAB4E1661CE(uParam0->f_17[iVar0], func_34());
									bVar11 = false;
								}
							}
						}
						if (bVar11)
						{
							if (!unk_0x2E6E8D325977B3EC(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = unk_0x17103F66FBB44C3C();
								uParam0->f_1[iVar0] = func_41(uParam0->f_17[iVar0], 0, 0);
								unk_0xCA523773918411B5(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_50(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0x2E6E8D325977B3EC(uParam0->f_1[iVar0]))
					{
						if (((func_47(uParam0->f_17[iVar0], 1) || func_68(uParam0->f_17[iVar0], iParam10)) || iParam12) || (unk_0xFC38B241541883D3(iParam10, 0) && !unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iParam10, 0)))
						{
							if (unk_0x2E6E8D325977B3EC(uParam0->f_1[iVar0]))
							{
								unk_0x0451B5D93A4BDAA0(&(uParam0->f_1[iVar0]));
								func_60(uVar15[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_50(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (unk_0xFC38B241541883D3(iParam10, 0))
					{
						if (!unk_0x2A2DBEFFFC03A22F(uParam0->f_17[iVar0], iParam10))
						{
							if ((unk_0x5093D6F9140AD109(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !unk_0x94E72F17611BCD3C(uParam0->f_13, 11)) && !((bParam17 && unk_0x99A27D5F9B887E5F(unk_0xCFC72E446B0B3AD7(), 0)) && !unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iParam10, 0)))
							{
								if (unk_0x44615198247FF471(uParam0->f_17[iVar0]))
								{
									if (!unk_0x44E080690DA76A2A(uParam0->f_17[iVar0], iParam10, 0))
									{
										if (!func_47(uParam0->f_17[iVar0], 1))
										{
											if (func_46(uParam0->f_17[iVar0]))
											{
												iVar14 = unk_0xE962BD784DD0E442(uParam0->f_17[iVar0], 451360105);
												if (iVar14 == 7)
												{
													unk_0xF811299AF81DB581(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0x91690C37B3C4E5FA(uParam0->f_17[iVar0], func_34()))
									{
										if ((((!unk_0x8EB51A494E8B42B4(uParam0->f_17[iVar0]) && !unk_0xBD280C076BC69C97(uParam0->f_17[iVar0])) && !unk_0x11579615465D25B4(uParam0->f_17[iVar0])) && !unk_0x11CF47CA7B00BE4F(uParam0->f_17[iVar0])) && !unk_0x0FC809E10EF0EAC3(iParam10))
										{
											unk_0x1FA92C26AB9467D3(uParam0->f_17[iVar0]);
										}
									}
									iVar14 = unk_0xE962BD784DD0E442(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7 && !func_76(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!unk_0x8EB51A494E8B42B4(uParam0->f_17[iVar0]) && !unk_0x8EB51A494E8B42B4(unk_0x9F92518438215DD0())) && !func_66(uParam0->f_17[iVar0], 2f)) && !unk_0xBD280C076BC69C97(uParam0->f_17[iVar0])) && !unk_0x11579615465D25B4(uParam0->f_17[iVar0])) && !unk_0x0FC809E10EF0EAC3(iParam10))
										{
											unk_0x4A1AC49BA4A747F7(uParam0->f_17[iVar0], 1);
											if (unk_0x94E72F17611BCD3C(uParam0->f_13, 10))
											{
												unk_0x0365EE015603E149(uParam0->f_17[iVar0], 1f);
											}
											unk_0x4073360CA020BB84(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											unk_0xC5E1B2288C6D4382(uParam0->f_17[iVar0], 0);
										}
									}
									else if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = func_41(uParam0->f_17[iVar0], 0, 0);
										unk_0xCA523773918411B5(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0x91690C37B3C4E5FA(uParam0->f_17[iVar0], func_34()))
							{
								if (func_74(uParam0, uParam0->f_17[iVar0], uParam8, bParam11))
								{
									if (!unk_0xBD280C076BC69C97(uParam0->f_17[iVar0]) && !unk_0x11579615465D25B4(uParam0->f_17[iVar0]))
									{
										iVar14 = unk_0xE962BD784DD0E442(uParam0->f_17[iVar0], -1794415470);
										if (iVar14 == 7)
										{
											unk_0x32D18ECD9E6F9BE2(uParam0->f_17[iVar0]);
										}
										unk_0x4A1AC49BA4A747F7(uParam0->f_17[iVar0], 0);
										unk_0x78267FAB4E1661CE(uParam0->f_17[iVar0], func_34());
									}
								}
							}
						}
						else if (unk_0x2A2DBEFFFC03A22F(unk_0x9F92518438215DD0(), iParam10))
						{
							if (!unk_0x91690C37B3C4E5FA(uParam0->f_17[iVar0], func_34()))
							{
								if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 21))
								{
									unk_0x78267FAB4E1661CE(uParam0->f_17[iVar0], func_34());
								}
							}
							else if (unk_0x94E72F17611BCD3C(uParam0->f_13, 21))
							{
								unk_0x1FA92C26AB9467D3(uParam0->f_17[iVar0]);
								unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0x91690C37B3C4E5FA(uParam0->f_17[iVar0], func_34()) && !unk_0x0FC809E10EF0EAC3(iParam10))
						{
							unk_0x1FA92C26AB9467D3(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (unk_0x2E6E8D325977B3EC(uParam0->f_1[iVar0]))
				{
					unk_0x0451B5D93A4BDAA0(&(uParam0->f_1[iVar0]));
					func_60(uVar15[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x2E6E8D325977B3EC(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_56(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar0]))
						{
							if (func_71(uParam0->f_17[iVar0]) || unk_0x5093D6F9140AD109(uParam0->f_17[iVar0], unk_0x9F92518438215DD0(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar0]))
					{
						if (!unk_0x5093D6F9140AD109(uParam0->f_17[iVar0], unk_0x9F92518438215DD0(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0, 1, 0) && !func_71(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = unk_0x17103F66FBB44C3C();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 5))
							{
								func_54(uParam0, sParam7, 0);
								unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 5);
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
									if (!func_65(iVar0, uParam0))
									{
										if (!unk_0x471A7F8C908126F0(uVar19[iVar0]))
										{
											if (!unk_0x6B08EC9A88700FBB(uVar19[iVar0], ""))
											{
												func_63(uParam0, uVar15[iVar0], uVar19[iVar0], 0);
												func_62(iVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!func_65(iVar0, uParam0))
										{
											func_54(uParam0, uVar15[iVar0], 0);
											func_62(iVar0, uParam0);
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
		unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 10);
		if (iVar6 && !bVar12)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (unk_0x2E6E8D325977B3EC(uParam0->f_1[iVar0]))
				{
					unk_0x0451B5D93A4BDAA0(&(uParam0->f_1[iVar0]));
					func_60(uVar15[iVar0]);
				}
				iVar0++;
			}
			func_60("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_62(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_13), 16);
			break;
	}
}

void func_63(var uParam0, char* sParam1, var uParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!unk_0x471A7F8C908126F0(sParam1))
		{
			if (!unk_0x6B08EC9A88700FBB(sParam1, ""))
			{
				func_64(sParam1, uParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x17103F66FBB44C3C();
}

void func_64(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0xF2274EFBA02CA0E6(sParam0);
	unk_0xDB4BC767CEF09274(uParam1);
	unk_0x51E13ACB7C47100D(iParam2, 1);
}

int func_65(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0x94E72F17611BCD3C(uParam1->f_13, 14);
		
		case 1:
			return unk_0x94E72F17611BCD3C(uParam1->f_13, 15);
		
		case 2:
			return unk_0x94E72F17611BCD3C(uParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_66(int iParam0, float fParam1)
{
	int iVar0;
	
	if (unk_0x827151D7B70CB853(iParam0, 0))
	{
		iVar0 = unk_0x1161215F69587BDA(iParam0, 0);
		if (!unk_0x0BA451447C3B1A8D(iVar0))
		{
			if (unk_0x9EF11DECA38804B6(iVar0) > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_67(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x3E0478C40AB5B38D(iParam0))
	{
		if (!unk_0x91690C37B3C4E5FA(iParam0, func_34()))
		{
			iVar0 = unk_0xBD0F8DEB580D2E67(iParam0);
			if (unk_0xFC38B241541883D3(iParam1, 0))
			{
				if (unk_0x5093D6F9140AD109(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
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

int func_68(int iParam0, int iParam1)
{
	if (!unk_0x3E0478C40AB5B38D(iParam0))
	{
		if (unk_0x746960881FB19A89(iParam1))
		{
			if (unk_0xFC38B241541883D3(iParam1, 0))
			{
				if (unk_0x2A2DBEFFFC03A22F(iParam0, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_69(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_13), 19);
			break;
	}
}

int func_70(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0x94E72F17611BCD3C(uParam1->f_13, 17);
		
		case 1:
			return unk_0x94E72F17611BCD3C(uParam1->f_13, 18);
		
		case 2:
			return unk_0x94E72F17611BCD3C(uParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_71(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		iVar0 = unk_0xEF1C7D5F912BEE3D(unk_0x9F92518438215DD0());
		if (unk_0xFC38B241541883D3(iVar0, 0))
		{
			if (!unk_0x3E0478C40AB5B38D(iParam0))
			{
				iVar1 = unk_0xEF1C7D5F912BEE3D(iParam0);
				if (unk_0xFC38B241541883D3(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iParam0, 20f, 20f, 20f, 0, 1, 0) && unk_0x5093D6F9140AD109(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
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

int func_72(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0xFC38B241541883D3(iParam0, 0))
	{
		if (unk_0xB6A50C909A8FABC3(iParam0) == joaat("bus") || unk_0xB6A50C909A8FABC3(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!unk_0x3E0478C40AB5B38D(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = unk_0xB5BBEB12C77EE430(iParam0, 0);
			if (!unk_0x3E0478C40AB5B38D(iVar3))
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
			iVar4 = unk_0xB5BBEB12C77EE430(iParam0, 1);
			if (!unk_0x3E0478C40AB5B38D(iVar4))
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
			iVar5 = unk_0xB5BBEB12C77EE430(iParam0, 2);
			if (!unk_0x3E0478C40AB5B38D(iVar5))
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

int func_73(var uParam0)
{
	int iVar0;
	
	if (unk_0x44615198247FF471(unk_0x9F92518438215DD0()))
	{
		iVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
		if (func_59(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_74(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x3E0478C40AB5B38D(iParam1))
	{
		if (unk_0x44615198247FF471(iParam1))
		{
			iVar0 = unk_0x1161215F69587BDA(iParam1, 0);
			if (!unk_0x0BA451447C3B1A8D(iVar0))
			{
				if (unk_0xFC38B241541883D3(iVar0, 0))
				{
					if (unk_0x2A2DBEFFFC03A22F(unk_0x9F92518438215DD0(), iVar0))
					{
						if (func_73(uParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iParam1, uParam2, uParam2, 3f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				iVar0 = unk_0xEF1C7D5F912BEE3D(unk_0x9F92518438215DD0());
				if (unk_0x746960881FB19A89(iVar0))
				{
					if (func_59(iVar0, uParam0, 0))
					{
						if (unk_0xFC38B241541883D3(iVar0, 0))
						{
							if (func_75(iVar0))
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

int func_75(int iParam0)
{
	float fVar0;
	
	if (!unk_0x0BA451447C3B1A8D(iParam0))
	{
		fVar0 = unk_0x9EF11DECA38804B6(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_76(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x3E0478C40AB5B38D(iParam0))
	{
		if (unk_0xFC38B241541883D3(iParam1, 0))
		{
			iVar0 = unk_0xEF1C7D5F912BEE3D(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_77()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
	{
		iVar0 = unk_0xBD0F8DEB580D2E67(unk_0x9F92518438215DD0());
		if (unk_0xFC38B241541883D3(iVar0, 0))
		{
			iVar1 = unk_0xB5BBEB12C77EE430(iVar0, 0);
			if (!unk_0x3E0478C40AB5B38D(iVar1))
			{
				if (iVar1 != unk_0x9F92518438215DD0())
				{
					if (unk_0x34E74FF8690AA4B1(iVar1))
					{
						if (!unk_0xACBBD9D9F0EB7D59(iVar1, unk_0x9F92518438215DD0()))
						{
							unk_0x402A96371F34E6D8(iVar1, unk_0x9F92518438215DD0(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_78(var uParam0)
{
	int iVar0;
	
	if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 25))
	{
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			unk_0x9001FCB58244C11D(unk_0x9F92518438215DD0(), 32, 0);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x746960881FB19A89(uParam0->f_17[iVar0]))
			{
				if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar0]))
				{
					unk_0x9001FCB58244C11D(uParam0->f_17[iVar0], 32, 0);
					unk_0x9001FCB58244C11D(uParam0->f_17[iVar0], 305, 1);
					unk_0x9001FCB58244C11D(uParam0->f_17[iVar0], 268, 1);
					unk_0xC5E1B2288C6D4382(uParam0->f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 25);
	}
}

void func_79(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x746960881FB19A89(uParam0->f_17[iVar0]))
		{
			if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar0]))
			{
				if (unk_0x44615198247FF471(uParam0->f_17[iVar0]))
				{
					unk_0xF25BFC104A163677(uParam0->f_17[iVar0], 0);
					unk_0x9352BAE0948677D4(uParam0->f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
		{
			if (unk_0x44615198247FF471(unk_0x9F92518438215DD0()))
			{
				unk_0xF25BFC104A163677(unk_0x9F92518438215DD0(), 0);
				unk_0x9352BAE0948677D4(unk_0x9F92518438215DD0(), 0);
			}
		}
	}
}

var func_80()
{
	var uVar0;
	
	return uVar0;
}

Vector3 func_81()
{
	struct<3> Var0;
	
	return Var0;
}

void func_82(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_54760 = iParam0;
	if (!Global_54758)
	{
		Global_54758 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_66845)
		{
			if (Global_66846[iVar0 /*9*/] == iParam0)
			{
				Global_66846[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

int func_83(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	char* sVar1;
	
	if (iParam1 == 0)
	{
		sVar1 = unk_0xC6FE92FD1DF5318E(iParam0, &uVar0);
		if (!unk_0x9E9AFDBF482248F6(sVar1))
		{
			if (unk_0x398F092142D37E17(sVar1) == unk_0x398F092142D37E17("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_84(iParam0, iParam2);
	return 1;
}

void func_84(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_89(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xB5BBEB12C77EE430(iParam0, -1);
		if (!unk_0x746960881FB19A89(iVar0))
		{
			iVar0 = unk_0xDF49708B4996403C(iParam0, -1);
		}
		if (unk_0x746960881FB19A89(iVar0) && !unk_0x3E0478C40AB5B38D(iVar0))
		{
			if (unk_0xB6A50C909A8FABC3(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0xB6A50C909A8FABC3(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0xB6A50C909A8FABC3(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_97358.f_1729.f_539.f_3213;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0xB6A50C909A8FABC3(iParam0) == Global_97358.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42)
			{
				if (!unk_0x9E9AFDBF482248F6(&(Global_97358.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
				{
					if (unk_0x6B08EC9A88700FBB(unk_0xDFECACF4B22FB69E(iParam0), &(Global_97358.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
					{
						Global_97358.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42 = 0;
						Global_97358.f_18371.f_4800[iVar1] = iVar2;
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
		if (unk_0xB6A50C909A8FABC3(iParam0) == Global_97358.f_18371.f_4808[iVar1 /*54*/].f_42)
		{
			if (!unk_0x9E9AFDBF482248F6(&(Global_97358.f_18371.f_4808[iVar1 /*54*/].f_1)))
			{
				if (unk_0x6B08EC9A88700FBB(unk_0xDFECACF4B22FB69E(iParam0), &(Global_97358.f_18371.f_4808[iVar1 /*54*/].f_1)))
				{
					Global_97358.f_18371.f_4808[iVar1 /*54*/].f_42 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_97358.f_18371.f_4798 = iParam1;
	Global_68043 = iParam0;
	Global_97358.f_18371.f_4796 = 1;
	func_85(iParam0, &(Global_97358.f_18371.f_4742));
}

void func_85(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xFC38B241541883D3(iParam0, 0))
	{
		func_88(uParam1);
		uParam1->f_42 = unk_0xB6A50C909A8FABC3(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xDFECACF4B22FB69E(iParam0), 16);
		*uParam1 = unk_0x015D5CDAA9114947(iParam0);
		unk_0x9EB96E7956694DA9(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x4096E2FD42D248FC(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x9A09BEE60599C8C6(iParam0, &(uParam1->f_38), &(uParam1->f_39), &(uParam1->f_40));
		uParam1->f_41 = unk_0x754F7DC22DC17C57(iParam0);
		uParam1->f_43 = unk_0x19CE0669140A3681(iParam0);
		uParam1->f_45 = unk_0x87C86C986E8206D3(iParam0);
		uParam1->f_46 = unk_0x433D30FBB06F5E87(iParam0);
		unk_0x87C25793C98E3EDD(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		unk_0x1B3DD3EA702F7E43(iParam0, &(uParam1->f_50), &(uParam1->f_51), &(uParam1->f_52));
		if (unk_0xEA0BE4C867F7CF5D(iParam0, 2))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 28);
		}
		if (unk_0xEA0BE4C867F7CF5D(iParam0, 3))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 29);
		}
		if (unk_0xEA0BE4C867F7CF5D(iParam0, 0))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 30);
		}
		if (unk_0xEA0BE4C867F7CF5D(iParam0, 1))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 31);
		}
		if (uParam1->f_41 == -1 && uParam1->f_42 != joaat("granger"))
		{
			uParam1->f_41 = 0;
		}
		if (unk_0xD3FA39A943FC7567(iParam0, 0))
		{
			uParam1->f_44 = unk_0x110EA7EDEDCFBFE8(iParam0);
		}
		if (unk_0xDB519A4108C6BFB1(uParam1->f_42))
		{
			if (unk_0x39A71639E61C656C(iParam0))
			{
				switch (unk_0x5077B59B95490801(iParam0))
				{
					case 2:
					case 0:
						unk_0xF76EE56D3E7DAF1B(&(uParam1->f_53), 23);
						unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 22);
						break;
					
					case 3:
					case 1:
						unk_0xF76EE56D3E7DAF1B(&(uParam1->f_53), 23);
						unk_0xF76EE56D3E7DAF1B(&(uParam1->f_53), 22);
						break;
					
					case 4:
						unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 23);
						break;
				}
			}
			else
			{
				unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 23);
			}
		}
		if (!unk_0x960C88BA5B643397(iParam0))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 9);
		}
		if (unk_0x35329BF26006D691(iParam0))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 10);
		}
		if (unk_0x93F3EEE519AAA9E3(iParam0))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 13);
			unk_0xF16D2D3110DDCF5F(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		}
		if (unk_0x104FDCF227248C6F(iParam0))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 12);
		}
		func_87(&iParam0, &(uParam1->f_9), &(uParam1->f_35));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x364F41CAA0A051EA(iParam0, iVar0 + 1))
			{
				unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), func_86(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x8B13B9F670524CB7(iParam0, 0))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 11);
		}
		else
		{
			unk_0xF76EE56D3E7DAF1B(&(uParam1->f_53), 11);
		}
		if (unk_0xB4289912C78431FE(iParam0, "IgnoredByQuickSave") && unk_0x8AEE5670B72C39C1(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 27);
		}
		else
		{
			unk_0xF76EE56D3E7DAF1B(&(uParam1->f_53), 27);
		}
	}
}

int func_86(int iParam0)
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

int func_87(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xFC38B241541883D3(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x2C1B23216A36AE4C(*iParam0) == 0)
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
			if (unk_0xC39F5439AB30508A(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x68446DE1A840C25F(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x191F73B5E833A5BC(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x191F73B5E833A5BC(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_88(var uParam0)
{
	int iVar0;
	
	uParam0->f_42 = 0;
	uParam0->f_53 = 0;
	uParam0->f_41 = 0;
	uParam0->f_38 = 0;
	uParam0->f_39 = 0;
	uParam0->f_40 = 0;
	uParam0->f_50 = 0;
	uParam0->f_51 = 0;
	uParam0->f_52 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_35[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_45 = 0;
	uParam0->f_46 = 1;
	uParam0->f_47 = 0;
	uParam0->f_48 = 0;
	uParam0->f_49 = 0;
}

int func_89(int iParam0)
{
	if ((((((((((!unk_0x746960881FB19A89(iParam0) || !unk_0xFC38B241541883D3(iParam0, 0)) || func_102(iParam0, 0, 0)) || func_102(iParam0, 1, 0)) || func_102(iParam0, 2, 0)) || func_101(iParam0) != 145) || func_100(iParam0)) || func_99(iParam0)) || func_98(iParam0)) || func_97(iParam0)) || !func_90(unk_0xB6A50C909A8FABC3(iParam0)))
	{
		if (func_99(iParam0))
		{
		}
		if (func_99(iParam0))
		{
		}
		if (func_102(iParam0, 0, 0))
		{
		}
		if (func_102(iParam0, 1, 0))
		{
		}
		if (func_102(iParam0, 2, 0))
		{
		}
		if (func_101(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_90(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_91(iParam0))
	{
		return 0;
	}
	if (((unk_0x567194A60F82D51A(iParam0) || unk_0xDB519A4108C6BFB1(iParam0)) || unk_0xAAF77E03CD60491E(iParam0)) || unk_0x297BD02A9765671B(iParam0))
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

int func_91(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x71A852A48EEBEFCC(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0x4B69FB3A5B09A1BA())) || (iParam0 == joaat("buffalo3") && !unk_0x4B69FB3A5B09A1BA())) || (iParam0 == joaat("gauntlet2") && !unk_0x4B69FB3A5B09A1BA())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0x4B69FB3A5B09A1BA())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_96())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x7B787FDDFE6F942B())
		{
			if (unk_0x3B23C8D6B23157DE(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xCB8350C6120AA79A(Var1.f_0))
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
		if ((((!func_95() && !func_94()) && !func_93()) && !func_92()) && !func_96())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x035E2C7B598704F7() || unk_0x708CE249B4F97BF8()) || unk_0x7F11C755C90EFEC5())
		{
		}
		else if (!func_93())
		{
			return 0;
		}
	}
	return 1;
}

int func_92()
{
	return 0;
}

int func_93()
{
	return 1;
}

int func_94()
{
	return 1;
}

int func_95()
{
	if (unk_0x9501317225249120(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_96()
{
	var uVar0;
	
	if (unk_0x6979E33C9417DF13())
	{
		if (unk_0x94E72F17611BCD3C(unk_0xF10205C2D28EABD5(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		if (unk_0x94E72F17611BCD3C(Global_97358.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131677 == 2)
	{
		return 1;
	}
	if (unk_0x9183AA5076D2BF07())
	{
		if (unk_0x92966E63982CCDA8())
		{
			if (unk_0xDE4ECE183EAC7EDB())
			{
				if (unk_0x6979E33C9417DF13())
				{
					uVar0 = unk_0xF10205C2D28EABD5(866);
					unk_0xEDB9A377CD8B7F03(&uVar0, 0);
					unk_0x69EF975E73B9F02D(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_97(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0xB6A50C909A8FABC3(iParam0);
	sVar1 = unk_0xDFECACF4B22FB69E(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x6B08EC9A88700FBB(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_91(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_98(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x746960881FB19A89(Global_87728[iVar0]))
		{
			if (Global_87728[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_99(int iParam0)
{
	int iVar0;
	
	if (unk_0x746960881FB19A89(iParam0) && unk_0xFC38B241541883D3(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x746960881FB19A89(Global_87698[iVar0]) && unk_0xFC38B241541883D3(Global_87698[iVar0], 0))
			{
				if (Global_87698[iVar0] == iParam0 && unk_0xB6A50C909A8FABC3(Global_87698[iVar0]) == unk_0xB6A50C909A8FABC3(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_100(int iParam0)
{
	int iVar0;
	
	if (unk_0x746960881FB19A89(Global_67138.f_484[24]))
	{
		if (iParam0 == Global_67138.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x746960881FB19A89(Global_67138.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_67138.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_101(int iParam0)
{
	int iVar0;
	
	if (!unk_0x746960881FB19A89(iParam0))
	{
		return 145;
	}
	if (!unk_0xFC38B241541883D3(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x746960881FB19A89(Global_87698[iVar0]))
		{
			if (Global_87698[iVar0] == iParam0)
			{
				return Global_87708[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_102(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x746960881FB19A89(iParam0) || !unk_0xFC38B241541883D3(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_103(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x94E72F17611BCD3C(Global_97358.f_5486[iVar9], 0))
		{
			if (unk_0x95E3E236782BBF37(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_103(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_104()
{
	int iVar0;
	
	switch (iLocal_1475)
	{
		case 0:
			if (unk_0x2E9CF5C574019636())
			{
				unk_0xF391B7BD1F131C3F(800);
			}
			iVar0 = 0;
			while (iVar0 <= 8)
			{
				if (func_31(Local_110[iVar0 /*14*/]))
				{
					if (!iLocal_449)
					{
						func_28(&uLocal_237, 1, Local_110[iVar0 /*14*/], "ArmyPed", 0, 1);
						func_136();
						unk_0xA3F41D007914F399(Local_110[iVar0 /*14*/], "GENERIC_WAR_CRY", func_53(3), 1);
						iLocal_449 = 1;
					}
				}
				iVar0++;
			}
			unk_0xF2061C15946C53A2(5, joaat("player"), iLocal_492);
			unk_0xA1D688821BD03932(3f, 5f, 4);
			iLocal_1475++;
			break;
		
		case 1:
			if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), Local_93[0 /*2*/], 0))
			{
				unk_0xA1D688821BD03932(3f, 5f, 4);
				func_107(0f, 0f, 0f, -1f, 0, 145);
				if (unk_0x2E6E8D325977B3EC(Local_93[0 /*2*/].f_1))
				{
					unk_0x0451B5D93A4BDAA0(&(Local_93[0 /*2*/].f_1));
				}
				func_106(2);
				iLocal_1475 = 0;
			}
			else if (func_31(Local_93[0 /*2*/]) && !unk_0x2E6E8D325977B3EC(Local_93[0 /*2*/].f_1))
			{
				Local_93[0 /*2*/].f_1 = func_105(Local_93[0 /*2*/], 0, 0);
			}
			break;
	}
}

int func_105(int iParam0, bool bParam1, bool bParam2)
{
	return func_42(iParam0, !bParam1, bParam2);
}

int func_106(int iParam0)
{
	if (iLocal_1473 == 0)
	{
		iLocal_1476 = iParam0;
		iLocal_1473 = 1;
		return 1;
	}
	return 0;
}

void func_107(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	struct<3> Var0;
	var uVar3;
	
	if (unk_0x746960881FB19A89(Global_91356.f_4))
	{
		if (unk_0xFC38B241541883D3(Global_91356.f_4, 0))
		{
			if (func_135(24) != Global_91356.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_132(unk_0x77009B1C011405A9(Global_91356.f_4, 1), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				func_108(Global_91356.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}

void func_108(int iParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6)
{
	struct<54> Var0;
	
	if (unk_0x746960881FB19A89(iParam0) && unk_0xFC38B241541883D3(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0x746960881FB19A89(Global_67138.f_484[25]) && unk_0xFC38B241541883D3(Global_67138.f_484[25], 0))
			{
				if (Global_67138.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0x2A210BAD0D74322B(iParam0) || unk_0xB6A50C909A8FABC3(iParam0) == joaat("bus")) || unk_0xB6A50C909A8FABC3(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_131(iParam5);
		Var0.f_9 = 25;
		Var0.f_35 = 2;
		func_85(iParam0, &Var0);
		if (func_130(Param1, 0f, 0f, 0f))
		{
			Param1 = { unk_0x77009B1C011405A9(iParam0, 1) };
			uParam4 = unk_0xE691E4EA6B4440C6(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0x398F092142D37E17(unk_0xC2E9075570B5D2B9()) != joaat("vehicle_gen_controller"))
			{
				Global_68102 = unk_0x398F092142D37E17(unk_0xC2E9075570B5D2B9());
			}
		}
		func_124(iParam5, Var0, Param1, uParam4, func_101(iParam0));
		func_109(iParam5, iParam0, 0);
	}
}

void func_109(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_121(&(Global_67138.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0x94E72F17611BCD3C(Global_67138.f_555[0 /*21*/].f_9, 12) && !unk_0x94E72F17611BCD3C(Global_67138.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_67138.f_555[0 /*21*/].f_4 != unk_0xB6A50C909A8FABC3(iParam1))
		{
			return;
		}
	}
	if (Global_68045 != -1 && Global_68045 != iParam0)
	{
		return;
	}
	if (unk_0x746960881FB19A89(iParam1))
	{
		if (unk_0xFC38B241541883D3(iParam1, 0))
		{
			if (!unk_0x34E74FF8690AA4B1(iParam1))
			{
				unk_0x336AE92FD68DEF98(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_97358.f_18371.f_4249 = func_110();
			}
			if (iParam1 != Global_67138.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_135(iParam0);
					if ((unk_0x746960881FB19A89(iVar0) && unk_0xFC38B241541883D3(iVar0, 0)) && iParam1 != iVar0)
					{
						func_84(iVar0, 145);
					}
				}
				Global_68044 = iParam1;
				Global_68045 = iParam0;
				Global_68046 = iParam2;
			}
		}
	}
}

var func_110()
{
	var uVar0;
	
	func_120(&uVar0, unk_0xD9940DF735CED1D5());
	func_119(&uVar0, unk_0x00CE62DFC32D8B1E());
	func_118(&uVar0, unk_0x3E15607264E063C3());
	func_113(&uVar0, unk_0xA2C54D866C588926());
	func_112(&uVar0, unk_0x35E06151CD8A2DD1());
	func_111(&uVar0, unk_0x4C625096668FC49E());
	return uVar0;
}

void func_111(var uParam0, int iParam1)
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

void func_112(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_113(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_117(*uParam0);
	iVar1 = func_115(*uParam0);
	if (iParam1 < 1 || iParam1 > func_114(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_114(int iParam0, int iParam1)
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

var func_115(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_116(unk_0x94E72F17611BCD3C(iParam0, 31), -1, 1)) + 2011;
}

int func_116(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_117(var uParam0)
{
	return uParam0 & 15;
}

void func_118(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_119(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_120(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_121(var uParam0, int iParam1)
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
			uParam0->f_4 = func_122(0, 1);
			uParam0->f_12 = 0;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 20);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_122(0, 1);
			uParam0->f_12 = 0;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 20);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_122(1, 1);
			uParam0->f_12 = 1;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 20);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_122(1, 2);
			uParam0->f_12 = 1;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 19);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_122(1, 1);
			uParam0->f_12 = 1;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 20);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_122(1, 2);
			uParam0->f_12 = 1;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 19);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_122(2, 1);
			uParam0->f_12 = 2;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 20);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_122(2, 1);
			uParam0->f_12 = 2;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 20);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_122(2, 1);
			uParam0->f_12 = 2;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 20);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 22);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 22);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 22);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 23);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 24);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 24);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 14);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 24);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 28);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 29);
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
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 27);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 24);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 29);
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
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 27);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 24);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 29);
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
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 7);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 27);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 24);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 11);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 13);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 10);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 11);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 13);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 9);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 9);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 23);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 23);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 23);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 8);
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
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 2);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 30);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 2);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 22);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 6);
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
			if (func_96())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 13);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 2);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 1);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 23);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_96())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 13);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 2);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 1);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 23);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 0);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 21);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 23);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 6);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 30);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 23);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 30);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 23);
			unk_0xEDB9A377CD8B7F03(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0x94E72F17611BCD3C(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_97358.f_18371.f_69[uParam0->f_14 /*54*/].f_42;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_130(Global_97358.f_18371.f_1312[uParam0->f_14 /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_97358.f_18371.f_1312[uParam0->f_14 /*3*/] };
		}
		if (Global_97358.f_18371.f_1382[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_97358.f_18371.f_1382[uParam0->f_14];
		}
	}
	if (unk_0x94E72F17611BCD3C(uParam0->f_9, 19))
	{
		if (!func_130(Global_97358.f_1729.f_539.f_2528[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_97358.f_1729.f_539.f_2528[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_97358.f_1729.f_539.f_2549[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0x94E72F17611BCD3C(uParam0->f_9, 20))
	{
		if (!func_130(Global_97358.f_1729.f_539.f_2528[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_97358.f_1729.f_539.f_2528[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_97358.f_1729.f_539.f_2549[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_122(int iParam0, int iParam1)
{
	struct<58> Var0;
	
	if (func_21(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 25;
		Var0.f_57 = 2;
		func_123(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_123(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	struct<74> Var1;
	
	Var1.f_11 = 12;
	Var1.f_31 = 25;
	Var1.f_57 = 2;
	Var1.f_64 = 1;
	Var1.f_60 = 255;
	Var1.f_61 = 255;
	Var1.f_62 = 255;
	Var1.f_73 = 1;
	Var1.f_3 = 1000;
	Var1.f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_97358.f_7341.f_99.f_58[128] && !Global_97358.f_7341.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 3f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					Var1.f_11[0] = 1;
					StringCopy(&(Var1.f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 14.9f;
					Var1.f_5 = 43;
					Var1.f_6 = 43;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 14f;
					Var1.f_5 = 32;
					Var1.f_6 = 0;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					StringCopy(&(Var1.f_27), "BETTY 32", 16);
					if (Global_97358.f_7341.f_99.f_58[119])
					{
						Var1.f_11[1] = 1;
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
			else if (Global_97358.f_7341.f_99.f_58[118])
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
					Var1.f_0 = iVar0;
					Var1.f_2 = 6f;
					Var1.f_5 = 53;
					Var1.f_6 = 0;
					Var1.f_7 = 59;
					Var1.f_8 = 156;
					StringCopy(&(Var1.f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 111;
					Var1.f_6 = 111;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_10 = 1;
					StringCopy(&(Var1.f_27), "FC1988", 16);
					Var1.f_11[0] = 1;
					Var1.f_11[1] = 1;
					Var1.f_11[2] = 1;
					Var1.f_11[3] = 1;
					Var1.f_11[4] = 1;
					Var1.f_11[5] = 1;
					Var1.f_11[6] = 1;
					Var1.f_11[7] = 1;
					Var1.f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
	*uParam1 = { Var1 };
}

void func_124(int iParam0, struct<54> Param1, struct<3> Param55, var uParam58, int iParam59)
{
	if (func_121(&(Global_67138.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x94E72F17611BCD3C(Global_67138.f_555[0 /*21*/].f_9, 10))
		{
			func_129(iParam0);
			func_128(Param1, &(Global_97358.f_18371.f_69[Global_67138.f_555[0 /*21*/].f_14 /*54*/]));
			if (unk_0x94E72F17611BCD3C(Global_67138.f_555[0 /*21*/].f_9, 11))
			{
				Global_97358.f_18371.f_1312[Global_67138.f_555[0 /*21*/].f_14 /*3*/] = { Param55 };
				Global_97358.f_18371.f_1382[Global_67138.f_555[0 /*21*/].f_14] = uParam58;
			}
			else
			{
				Global_97358.f_18371.f_1312[Global_67138.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_97358.f_18371.f_1382[Global_67138.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_97358.f_18371.f_1406[Global_67138.f_555[0 /*21*/].f_14] = iParam59 + 1;
			func_125(iParam0, 1);
		}
	}
}

void func_125(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_127(iParam0, 0))
		{
			func_126(iParam0, 1, 0);
			func_126(iParam0, 2, 0);
			func_126(iParam0, 3, 0);
			func_126(iParam0, 4, 0);
			func_126(iParam0, 0, 1);
			Global_67138[iParam0] = 1;
		}
	}
	else
	{
		func_126(iParam0, 0, 0);
	}
}

void func_126(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xEDB9A377CD8B7F03(&(Global_97358.f_18371[iParam0]), iParam1);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_18371[iParam0]), iParam1);
	}
}

bool func_127(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x94E72F17611BCD3C(Global_97358.f_18371[iParam0], iParam1);
}

void func_128(struct<54> Param0, var uParam54)
{
	uParam54->f_42 = Param0.f_42;
	*uParam54 = Param0.f_0;
	uParam54->f_1 = { Param0.f_1 };
	uParam54->f_5 = Param0.f_5;
	uParam54->f_6 = Param0.f_6;
	uParam54->f_7 = Param0.f_7;
	uParam54->f_8 = Param0.f_8;
	uParam54->f_9 = { Param0.f_9 };
	uParam54->f_35 = { Param0.f_35 };
	uParam54->f_38 = Param0.f_38;
	uParam54->f_39 = Param0.f_39;
	uParam54->f_40 = Param0.f_40;
	uParam54->f_41 = Param0.f_41;
	uParam54->f_53 = Param0.f_53;
	uParam54->f_43 = Param0.f_43;
	uParam54->f_45 = Param0.f_45;
	uParam54->f_44 = Param0.f_44;
	uParam54->f_47 = Param0.f_47;
	uParam54->f_48 = Param0.f_48;
	uParam54->f_49 = Param0.f_49;
	uParam54->f_50 = Param0.f_50;
	uParam54->f_51 = Param0.f_51;
	uParam54->f_52 = Param0.f_52;
}

void func_129(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_121(&(Global_67138.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x746960881FB19A89(Global_67138.f_139[iParam0]))
		{
			unk_0x336AE92FD68DEF98(Global_67138.f_139[iParam0], 1, 1);
			unk_0x9187463EB4918A4D(&(Global_67138.f_139[iParam0]));
			Global_67138.f_139[iParam0] = 0;
		}
		if (unk_0x94E72F17611BCD3C(Global_67138.f_555[0 /*21*/].f_9, 13))
		{
			func_125(iParam0, 0);
		}
	}
}

bool func_130(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_131(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_129(iParam0);
	func_125(iParam0, 0);
}

int func_132(struct<3> Param0, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	
	iVar0 = func_133(Param0, iParam3, 1);
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

int func_133(struct<3> Param0, int iParam3, int iParam4)
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
		if (Global_85405[iVar0 /*10*/].f_7 != 262)
		{
			if (Global_85405[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_134(iVar0) || iParam4 == 0)
				{
					fVar1 = unk_0x91EAD4F2F9B5B38A(Param0, Global_85405[iVar0 /*10*/].f_3, 1);
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

bool func_134(int iParam0)
{
	return unk_0x94E72F17611BCD3C(Global_97358.f_5486[iParam0], 0);
}

int func_135(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_67138.f_139[iParam0];
}

void func_136()
{
	Global_14558 = 0;
	func_137();
}

void func_137()
{
	unk_0xAD3949CD5FADCA61();
	Global_16703 = 0;
	if (unk_0xDFF00E8709AA7095())
	{
		unk_0xC318E8D9E0AA1394(0);
		Global_15692 = 6;
	}
}

void func_138()
{
	switch (iLocal_1475)
	{
		case 0:
			if (unk_0x2E9CF5C574019636())
			{
				unk_0xF391B7BD1F131C3F(800);
			}
			while (Global_89962 == 12)
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (func_31(Local_93[0 /*2*/]) && !unk_0x2E6E8D325977B3EC(Local_93[0 /*2*/].f_1))
			{
				if (unk_0x473F58117C965BA8(Local_93[0 /*2*/]) != 0)
				{
					Local_93[0 /*2*/].f_1 = unk_0x473F58117C965BA8(Local_93[0 /*2*/]);
				}
				else
				{
					Local_93[0 /*2*/].f_1 = func_105(Local_93[0 /*2*/], 0, 0);
				}
			}
			unk_0xA1D688821BD03932(5f, 5f, 4);
			func_30("RHP_GOODS", 7500, 1);
			unk_0xDD74AAB135833BB7("RHP1_START");
			func_139("RHP_HELP", -1);
			iLocal_433 = 0;
			iLocal_1475++;
			break;
		
		case 1:
			if (bLocal_455)
			{
				iLocal_449 = 0;
				func_106(1);
				iLocal_1475 = 0;
			}
			break;
	}
}

void func_139(char* sParam0, int iParam1)
{
	unk_0x21D4405986536E14(sParam0);
	unk_0x7BDC04B08D7A7FE0(0, 0, 1, iParam1);
}

void func_140()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iLocal_446 = 0;
	while (iLocal_446 <= (3 - 1))
	{
		if (unk_0x746960881FB19A89(Local_100[iLocal_446 /*2*/]))
		{
			if (unk_0x3E0478C40AB5B38D(Local_100[iLocal_446 /*2*/]))
			{
				func_193(&(Local_100[iLocal_446 /*2*/]), 1, 0, 1);
			}
		}
		iLocal_446++;
	}
	iLocal_446 = 0;
	while (iLocal_446 <= (3 - 1))
	{
		if (unk_0x746960881FB19A89(Local_93[iLocal_446 /*2*/]))
		{
			if (!unk_0xFC38B241541883D3(Local_93[iLocal_446 /*2*/], 0))
			{
				if (iLocal_446 == 0)
				{
					func_182(3);
				}
				func_181(&(Local_93[iLocal_446 /*2*/]));
			}
			else if (Local_93[iLocal_446 /*2*/] == Local_93[0 /*2*/])
			{
				if (func_180(&(Local_93[0 /*2*/])))
				{
					func_182(4);
					func_181(&(Local_93[0 /*2*/]));
				}
			}
		}
		iLocal_446++;
	}
	iLocal_446 = 0;
	while (iLocal_446 <= (9 - 1))
	{
		if (unk_0x746960881FB19A89(Local_110[iLocal_446 /*14*/]))
		{
			if (bLocal_455)
			{
				func_179(Local_110[iLocal_446 /*14*/], &(Local_110[iLocal_446 /*14*/].f_2), -1, 0, 0, 0, 400f, 0);
			}
			if (unk_0x3E0478C40AB5B38D(Local_110[iLocal_446 /*14*/]))
			{
				if (Local_110[iLocal_446 /*14*/].f_10 == 0)
				{
					func_178(719, 1, 0);
					Local_110[iLocal_446 /*14*/].f_10 = 1;
				}
				unk_0x995B3705D02B0401(&(Local_110[iLocal_446 /*14*/]));
			}
		}
		if ((((func_31(Local_110[iLocal_446 /*14*/]) && (unk_0x17103F66FBB44C3C() - iLocal_454) > 8000) && bLocal_455) && !unk_0xE7C093C63744E17E(Local_110[iLocal_446 /*14*/])) && !unk_0x827151D7B70CB853(Local_110[iLocal_446 /*14*/], 0))
		{
			if (unk_0xFD181DDA4D8D6786(Local_110[iLocal_446 /*14*/]) < 110)
			{
				unk_0xA3F41D007914F399(Local_110[iLocal_446 /*14*/], "DYING_MOAN", func_53(3), 1);
				iLocal_454 = unk_0x17103F66FBB44C3C();
			}
			else if (unk_0xFD181DDA4D8D6786(Local_110[iLocal_446 /*14*/]) < 140)
			{
				unk_0xA3F41D007914F399(Local_110[iLocal_446 /*14*/], "DYING_HELP", func_53(3), 1);
				iLocal_454 = unk_0x17103F66FBB44C3C();
			}
			else if (unk_0x925E51BF537A08EE(Local_110[iLocal_446 /*14*/]))
			{
				unk_0xA3F41D007914F399(Local_110[iLocal_446 /*14*/], "TAKE_COVER", func_53(3), 1);
				iLocal_454 = unk_0x17103F66FBB44C3C();
			}
			else if (unk_0xD691B6C291EBE1AB(Local_110[iLocal_446 /*14*/]))
			{
				unk_0xA3F41D007914F399(Local_110[iLocal_446 /*14*/], "COVER_ME", func_53(3), 1);
				iLocal_454 = unk_0x17103F66FBB44C3C();
			}
			else if (unk_0x4A4902C6AC8DCB7E(Local_110[iLocal_446 /*14*/]))
			{
				unk_0xA3F41D007914F399(Local_110[iLocal_446 /*14*/], "COVER_YOU", func_53(3), 1);
				iLocal_454 = unk_0x17103F66FBB44C3C();
			}
			else if (!unk_0xB7B97CFCB999E7C0(Local_110[iLocal_446 /*14*/]))
			{
				unk_0xA3F41D007914F399(Local_110[iLocal_446 /*14*/], "RELOADING", func_53(3), 1);
				iLocal_454 = unk_0x17103F66FBB44C3C();
			}
			else if (func_177(Local_110[iLocal_446 /*14*/], -828834893, 1) || func_177(Local_110[iLocal_446 /*14*/], 451360105, 1))
			{
				unk_0xA3F41D007914F399(Local_110[iLocal_446 /*14*/], "GENERIC_WAR_CRY", func_53(3), 1);
				iLocal_454 = unk_0x17103F66FBB44C3C();
			}
		}
		iLocal_446++;
	}
	if (unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) > 0)
	{
		unk_0x3F5C3AAAFB03D2FD(1);
	}
	else
	{
		unk_0x3F5C3AAAFB03D2FD(0);
	}
	if (func_31(Local_93[0 /*2*/]) && func_31(unk_0x9F92518438215DD0()))
	{
		if (unk_0xFE0FA79BC49EBB07(Local_93[0 /*2*/], -1521.829f, 2725.003f, 16.64367f, -1600.763f, 2794.875f, 21.45629f, 30f, 0, 1, 0) && unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), Local_93[0 /*2*/], 0))
		{
			unk_0xF72219EF3DF47F66(5);
			unk_0x6EAEC8403384110F(unk_0xCFC72E446B0B3AD7(), 4, 0);
			unk_0x4BAAF4A818239FFF(unk_0xCFC72E446B0B3AD7(), 0);
		}
	}
	if (func_31(Local_93[0 /*2*/]) && func_31(unk_0x9F92518438215DD0()))
	{
		if (iLocal_1474 > 0)
		{
			if (unk_0x91EAD4F2F9B5B38A(unk_0x77009B1C011405A9(Local_93[0 /*2*/], 1), unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), 1) > 650f)
			{
				func_182(5);
			}
			else if (unk_0x91EAD4F2F9B5B38A(unk_0x77009B1C011405A9(Local_93[0 /*2*/], 1), unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), 1) > 600f)
			{
				if (!iLocal_453)
				{
					func_30("RHP_LWARN", 7500, 1);
					iLocal_453 = 1;
				}
			}
			else
			{
				iLocal_453 = 0;
			}
		}
	}
	if (func_31(Local_93[0 /*2*/]))
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 <= (9 - 1))
		{
			if (func_31(Local_110[iVar1 /*14*/]))
			{
				bVar0 = false;
			}
			iVar1++;
		}
		if (bVar0)
		{
			if ((!unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), Local_93[0 /*2*/], 0) && !unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0)) && !unk_0x4A4902C6AC8DCB7E(unk_0x9F92518438215DD0()))
			{
				if (!unk_0xACBBD9D9F0EB7D59(unk_0x9F92518438215DD0(), Local_93[0 /*2*/]))
				{
					unk_0x402A96371F34E6D8(unk_0x9F92518438215DD0(), Local_93[0 /*2*/], -1, 2048, 1);
				}
			}
			else if (unk_0xACBBD9D9F0EB7D59(unk_0x9F92518438215DD0(), Local_93[0 /*2*/]))
			{
				unk_0xD2062A6AC314B85E(unk_0x9F92518438215DD0());
			}
		}
	}
	if (!iLocal_443)
	{
		if (iLocal_1474 == 0)
		{
			if (fLocal_440 != 0f)
			{
				fLocal_440 = 0f;
			}
		}
		else if (iLocal_1474 == 1)
		{
			if (fLocal_440 < 5f)
			{
				fLocal_440 = (fLocal_440 + unk_0xD1D592A06EBAAE4F());
			}
		}
		if (fLocal_440 < 3f)
		{
			iVar2 = 0;
			while (iVar2 < Local_93.f_0)
			{
				if (unk_0x746960881FB19A89(Local_93[iVar2 /*2*/]) && !unk_0x746960881FB19A89(uLocal_428[iVar2]))
				{
					uLocal_428[iVar2] = Local_93[iVar2 /*2*/];
				}
				if (unk_0x746960881FB19A89(uLocal_428[iVar2]))
				{
					if (unk_0x0BA451447C3B1A8D(uLocal_428[iVar2]) || !unk_0xFC38B241541883D3(uLocal_428[iVar2], 0))
					{
						iVar3 = unk_0x95115427311263FD(uLocal_428[iVar2]);
						if (iVar3 == joaat("weapon_stickybomb"))
						{
							func_176(726);
							iLocal_443 = 1;
						}
					}
				}
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 < Global_86864)
			{
				if (unk_0x746960881FB19A89(Global_86864[iVar2]))
				{
					if (unk_0x0BA451447C3B1A8D(Global_86864[iVar2]) || !unk_0xFC38B241541883D3(Global_86864[iVar2], 0))
					{
						iVar4 = unk_0x95115427311263FD(Global_86864[iVar2]);
						if (iVar4 == joaat("weapon_stickybomb"))
						{
							func_176(726);
							iLocal_443 = 1;
						}
					}
				}
				iVar2++;
			}
		}
	}
	func_159();
	func_149();
	func_145();
	func_144();
	unk_0xA067756A5A1E98E5(unk_0xCFC72E446B0B3AD7());
	if (!iLocal_442)
	{
		if (func_143(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), 3, 0, 0))
		{
			iLocal_442 = 1;
			unk_0xC9752099913837E6();
			unk_0xB1E35D138037D248(1f);
			unk_0xF72219EF3DF47F66(5);
			unk_0x3F5C3AAAFB03D2FD(1);
			unk_0xCDF07288D526B918(unk_0xCFC72E446B0B3AD7(), 3, 0);
			unk_0x4BAAF4A818239FFF(unk_0xCFC72E446B0B3AD7(), 0);
			iLocal_442 = 1;
		}
	}
	else if (!func_143(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), 3, 0, 0))
	{
		if (unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) == 0)
		{
			unk_0x2250E32CE864C09F(5, 0);
			unk_0x2250E32CE864C09F(3, 0);
			unk_0x2250E32CE864C09F(1, 0);
			unk_0x2250E32CE864C09F(10, 0);
			unk_0x2250E32CE864C09F(9, 0);
			unk_0xB38EC370CECFE380(1, 0);
			unk_0xB38EC370CECFE380(2, 0);
			unk_0xB38EC370CECFE380(8, 0);
			unk_0xB1E35D138037D248(0f);
			unk_0xF72219EF3DF47F66(0);
			unk_0x3F5C3AAAFB03D2FD(0);
			iLocal_442 = 0;
		}
	}
	if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
		{
			if (!iLocal_1485)
			{
				func_142(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), 725);
				func_141(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), 718);
				iLocal_1485 = 1;
			}
		}
		else if (iLocal_1485)
		{
			iLocal_1485 = 0;
		}
		if (!iLocal_1486)
		{
			func_142(unk_0x9F92518438215DD0(), 722);
			iLocal_1486 = 1;
		}
	}
	if (!iLocal_441)
	{
		iVar5 = 0;
		if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
		{
			if (unk_0xFC38B241541883D3(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), 0))
			{
				iVar5 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
			}
		}
		else if ((unk_0x746960881FB19A89(unk_0x228A016F863DED95()) && unk_0xFC38B241541883D3(unk_0x228A016F863DED95(), 0)) && unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(unk_0x228A016F863DED95(), 1)) < 10000f)
		{
			iVar5 = unk_0x228A016F863DED95();
		}
		if ((((((unk_0x746960881FB19A89(iVar5) && unk_0xFC38B241541883D3(iVar5, 0)) && iVar5 != iLocal_427) && iVar5 != Local_93[1 /*2*/]) && iVar5 != Local_93[2 /*2*/]) && iVar5 != Local_93[0 /*2*/]) && unk_0x80D7E1622143A2A0(unk_0xB6A50C909A8FABC3(iVar5)))
		{
			unk_0x336AE92FD68DEF98(iVar5, 1, 1);
			iLocal_427 = iVar5;
		}
	}
}

void func_141(int iParam0, int iParam1)
{
	Global_54761 = iParam0;
	Global_54762 = iParam1;
}

void func_142(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_54763 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_66845)
	{
		if (iParam1 == -1 || Global_66846[iVar0 /*9*/] == iParam1)
		{
			if (Global_66846[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_66846[iVar0 /*9*/].f_6 = iParam0;
				Global_66846[iVar0 /*9*/].f_7 = 1;
				Global_66846[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

int func_143(struct<3> Param0, int iParam3, int iParam4, bool bParam5)
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
		if (unk_0xABDC7B22D1A3C451(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], iVar110, 1))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

void func_144()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_1474 < 1)
	{
		if (!unk_0x370603716EC2D420("PS_PREP_INTERCEPT_CONVOY"))
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (unk_0x746960881FB19A89(Local_93[iVar0 /*2*/]))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(Local_93[iVar0 /*2*/], 0), unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0)) < 1000f)
					{
						unk_0x9B517A4FE28A719F("PS_PREP_INTERCEPT_CONVOY");
					}
				}
				iVar0++;
			}
		}
	}
	else if (iLocal_1474 == 1)
	{
		if (!unk_0x370603716EC2D420("PS_PREP_MILITARY_TRUCK_SHOOTOUT"))
		{
			unk_0x9B517A4FE28A719F("PS_PREP_MILITARY_TRUCK_SHOOTOUT");
		}
	}
	else if (iLocal_1474 >= 1)
	{
		if (unk_0x370603716EC2D420("PS_PREP_INTERCEPT_CONVOY"))
		{
			unk_0x6041FBFC1EE8196A("PS_PREP_INTERCEPT_CONVOY");
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (unk_0x746960881FB19A89(Local_93[1 /*2*/]))
				{
					unk_0xC932874B6133A2D2(Local_93[1 /*2*/], 0);
				}
				iVar1++;
			}
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				if (unk_0x746960881FB19A89(Global_86864[iVar2]))
				{
					unk_0xC932874B6133A2D2(Global_86864[iVar2], 0);
				}
				iVar2++;
			}
		}
		if (unk_0x370603716EC2D420("PS_PREP_MILITARY_TRUCK_SHOOTOUT"))
		{
			unk_0x6041FBFC1EE8196A("PS_PREP_MILITARY_TRUCK_SHOOTOUT");
		}
	}
}

void func_145()
{
	switch (iLocal_436)
	{
		case 1:
			if (fLocal_439 != 0f)
			{
				fLocal_439 = 0f;
			}
			if (fLocal_438 <= 0f)
			{
				fLocal_438 = 0f;
				iLocal_436 = 0;
			}
			else if (fLocal_438 > 0f)
			{
				fLocal_438 = (fLocal_438 - 0.02f);
			}
		
		case 0:
			if (func_148())
			{
				iLocal_436 = 3;
				fLocal_437 = fLocal_438;
				fLocal_439 = 1f;
			}
			break;
		
		case 3:
			if (fLocal_439 != 1f)
			{
				fLocal_439 = 1f;
			}
			if (fLocal_438 >= 1f)
			{
				iLocal_436 = 2;
				fLocal_438 = 1f;
			}
			else if (fLocal_438 < 1f)
			{
				fLocal_438 = (fLocal_438 + 0.02f);
			}
		
		case 2:
			if (!func_148())
			{
				iLocal_436 = 1;
				fLocal_437 = fLocal_438;
				fLocal_439 = 0f;
			}
			break;
	}
	if (iLocal_436 == 3 || iLocal_436 == 1)
	{
		func_146(fLocal_437, fLocal_439, fLocal_438);
		unk_0x3053C7C164B471A4(Global_34036[20 /*31*/], fLocal_438, 0, 1);
		unk_0xC253F54473D60EC9(Global_34036[20 /*31*/], 4, 0, 1);
	}
}

float func_146(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	fVar0 = ((1f - unk_0xD0FFB162F40A139C(func_147((fParam2 * 3.141593f)))) * 0.5f);
	return ((fParam0 * (1f - fVar0)) + (fParam1 * fVar0));
}

float func_147(float fParam0)
{
	return (fParam0 * 57.29578f);
}

int func_148()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((unk_0x746960881FB19A89(Local_93[iVar0 /*2*/]) && unk_0xFC38B241541883D3(Local_93[iVar0 /*2*/], 0)) && unk_0xFE0FA79BC49EBB07(Local_93[iVar0 /*2*/], -1591.019f, 2803.731f, 15.41812f, -1569.92f, 2777.878f, 22.14856f, 8.25f, 0, 1, 0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_149()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_157(iVar0);
		if (!unk_0x3E0478C40AB5B38D(iVar1))
		{
			if (!func_156(iVar1))
			{
				if (func_155(iVar1, 0))
				{
					if (func_154(iVar1) || func_152(iVar1))
					{
						if (func_151(iVar1, 0))
						{
							unk_0x336AE92FD68DEF98(iVar1, 1, 1);
							unk_0x4A1AC49BA4A747F7(iVar1, 1);
							unk_0x32D18ECD9E6F9BE2(iVar1);
						}
					}
				}
			}
			else if (func_154(iVar1) && unk_0xAD2C236C4A4B83C9(iVar1, 1))
			{
				unk_0x33733EEE6375F985(sLocal_490);
				bLocal_1484 = unk_0xFE0FA79BC49EBB07(iVar1, 1365.772f, 3625.582f, 33.69244f, 1374.662f, 3598.951f, 36.8947f, 34f, 0, 1, 0);
				if (!bLocal_1484)
				{
					if (unk_0xE962BD784DD0E442(iVar1, -1273030092) != 1 && unk_0xE962BD784DD0E442(iVar1, -1273030092) != 0)
					{
						unk_0x181230122ADA68FA(iVar1, unk_0x1161215F69587BDA(iVar1, 0), 1376.77f, 3605.09f, 33.88f, 30f, 786469, 2f);
					}
				}
				else if (!unk_0xA9F3D2C5FC57B2A8(Local_93[0 /*2*/]))
				{
					unk_0x33733EEE6375F985(sLocal_490);
					if (unk_0x2922F456A375F556(sLocal_490))
					{
						unk_0x788DEE284D8ADED5(iVar1, Local_93[0 /*2*/], sLocal_490, 786469, 0, 8, -1, 10f, 0, 2f);
					}
				}
			}
			else if (func_152(iVar1) && unk_0xAD2C236C4A4B83C9(iVar1, 1))
			{
				if (func_31(Local_110[5 /*14*/]))
				{
					if (unk_0xE962BD784DD0E442(iVar1, -1273030092) != 1 && unk_0xE962BD784DD0E442(iVar1, -1273030092) != 0)
					{
						unk_0x7FC0EEAECC1615C3(iVar1, unk_0x1161215F69587BDA(iVar1, 0), Local_110[5 /*14*/], 7, 15f, 786469, 15f, -1f, 1);
					}
				}
			}
			else
			{
				func_150(iVar1);
			}
		}
		iVar0++;
	}
}

int func_150(int iParam0)
{
	int iVar0;
	
	return 0;
	if (!unk_0x3E0478C40AB5B38D(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_157(iVar0) != iParam0)
		{
			return 0;
		}
		if (!unk_0x94E72F17611BCD3C(Global_86221, iVar0))
		{
			return 0;
		}
		unk_0xF76EE56D3E7DAF1B(&Global_86221, iVar0);
		return 1;
	}
	return 0;
}

int func_151(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0;
	if (!unk_0x3E0478C40AB5B38D(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_157(iVar0) != iParam0)
		{
			return 0;
		}
		if (unk_0x94E72F17611BCD3C(Global_86221, iVar0))
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0x9F92518438215DD0())
			{
				return 0;
			}
		}
		if (unk_0x94E72F17611BCD3C(Global_86220, iVar0))
		{
			unk_0x5DD2694A706BFC17(iParam0, 0, 0);
			unk_0x512E0C109ACECCA1(iParam0, 0);
			unk_0xEDB9A377CD8B7F03(&Global_86221, iVar0);
			return 1;
		}
	}
	return 0;
}

int func_152(int iParam0)
{
	if (!func_153())
	{
		if (func_31(Local_93[0 /*2*/]) && iLocal_433 == 0)
		{
			if (func_31(unk_0x9F92518438215DD0()) && unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
			{
				if (unk_0x44E080690DA76A2A(iParam0, unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), 0) && unk_0xB5BBEB12C77EE430(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), -1) == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_153()
{
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		return Global_87845.f_44 == 1;
	}
	return 0;
}

int func_154(int iParam0)
{
	if (!func_153())
	{
		if (func_31(Local_93[0 /*2*/]) && !unk_0xFE0FA79BC49EBB07(Local_93[0 /*2*/], 1364.248f, 3620.511f, 33.89069f, 1350.9f, 3616.225f, 37.12358f, 6.5f, 0, 1, 0))
		{
			if (func_31(unk_0x9F92518438215DD0()) && unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), Local_93[0 /*2*/], 0))
			{
				if (unk_0x44E080690DA76A2A(iParam0, Local_93[0 /*2*/], 0) && unk_0xB5BBEB12C77EE430(Local_93[0 /*2*/], -1) == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_155(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0;
	if (!unk_0x3E0478C40AB5B38D(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_157(iVar0) != iParam0)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0x9F92518438215DD0())
			{
				return 0;
			}
		}
		if (unk_0x94E72F17611BCD3C(Global_86220, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_156(int iParam0)
{
	int iVar0;
	
	return 0;
	if (!unk_0x3E0478C40AB5B38D(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_157(iVar0) != iParam0)
		{
			return 0;
		}
		if (unk_0x94E72F17611BCD3C(Global_86221, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_157(int iParam0)
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_19())
	{
		return unk_0x9F92518438215DD0();
	}
	return Global_87845[func_158(iParam0)];
}

int func_158(int iParam0)
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

void func_159()
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
	
	switch (iLocal_433)
	{
		case 0:
			if (!bLocal_455)
			{
				func_175();
				func_169();
				if (((((func_31(Local_110[4 /*14*/]) && func_31(Local_110[0 /*14*/])) && func_31(Local_110[5 /*14*/])) && func_31(Local_93[1 /*2*/])) && func_31(Local_93[2 /*2*/])) && func_31(Local_93[0 /*2*/]))
				{
					if (unk_0xFE0FA79BC49EBB07(Local_93[0 /*2*/], -1521.829f, 2725.003f, 16.64367f, -1600.763f, 2794.875f, 21.45629f, 30f, 0, 1, 0) && unk_0x44E080690DA76A2A(Local_110[4 /*14*/], Local_93[0 /*2*/], 0))
					{
						iLocal_433 = 2;
						iLocal_470 = 0;
					}
					fVar1 = unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(Local_93[1 /*2*/], 0), unk_0x77009B1C011405A9(Local_93[0 /*2*/], 0));
					if (unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(Local_93[1 /*2*/], 0), unk_0x77009B1C011405A9(Local_93[2 /*2*/], 0)) > fVar1)
					{
						fVar1 = unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(Local_93[1 /*2*/], 0), unk_0x77009B1C011405A9(Local_93[2 /*2*/], 0));
					}
					fVar3 = (11f + ((11f / (100f - 40f)) * 40f));
					uVar2 = func_168((((-11f / (100f - 40f)) * fVar1) + fVar3), 0f, 11f);
					if (unk_0x2A2DBEFFFC03A22F(Local_110[0 /*14*/], Local_93[1 /*2*/]))
					{
						unk_0xB7E3E890C2B1B305(Local_110[0 /*14*/], uVar2);
					}
				}
			}
			else
			{
				if (func_31(Local_93[0 /*2*/]))
				{
					Local_459 = { unk_0x77009B1C011405A9(Local_93[0 /*2*/], 0) };
				}
				iLocal_435 = 0;
				iLocal_434 = 0;
				iLocal_433 = 1;
			}
			break;
		
		case 2:
			if (!bLocal_455)
			{
				func_169();
				if (((((func_31(Local_110[4 /*14*/]) && func_31(Local_110[0 /*14*/])) && func_31(Local_110[5 /*14*/])) && func_31(Local_93[1 /*2*/])) && func_31(Local_93[2 /*2*/])) && func_31(Local_93[0 /*2*/]))
				{
					switch (iLocal_470)
					{
						case 0:
							if (!func_177(Local_110[0 /*14*/], 242628503, 1))
							{
								if (iLocal_436 == 2 || (iLocal_436 == 3 && fLocal_438 > 0.8f))
								{
									unk_0xF87DA7F5BA8C7D0F(&uVar4);
									unk_0x2B0CA599BAD90FB6(0, Local_93[1 /*2*/], -1785.46f, 3169.625f, 31.93f, 4, 10f, 786603, 3f, 3f, 1);
									unk_0x2B0CA599BAD90FB6(0, Local_93[1 /*2*/], -1885.875f, 3006.152f, 31.81027f, 4, 10f, 786603, -1f, -1f, 1);
									unk_0x3179CCC77CBAB31F(uVar4);
									unk_0xC7EBE3C9AC83FAAA(Local_110[0 /*14*/], uVar4);
									unk_0xCD02E3C29B8253A6(&uVar4);
								}
							}
							if (!func_177(Local_110[4 /*14*/], -1273030092, 1))
							{
								unk_0xC6C4308CDA4C206C(Local_110[4 /*14*/], Local_93[0 /*2*/], Local_93[1 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
							}
							if (!func_177(Local_110[5 /*14*/], -1273030092, 1))
							{
								unk_0xC6C4308CDA4C206C(Local_110[5 /*14*/], Local_93[2 /*2*/], Local_93[0 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
							}
							if (unk_0x41EEB10CCC2497A8(Local_110[0 /*14*/], -1885.875f, 3006.152f, 31.81027f, 5f, 5f, 5f, 0, 1, 0))
							{
								iVar0 = 0;
								while (iVar0 <= (9 - 1))
								{
									if (func_31(Local_110[iVar0 /*14*/]))
									{
										unk_0x9A8E4919D4CCCE41(Local_110[iVar0 /*14*/], 1);
										unk_0x64277E0EB39C1162(Local_110[iVar0 /*14*/], 3, 1);
										unk_0x64277E0EB39C1162(Local_110[iVar0 /*14*/], 1, 1);
										if ((iVar0 == 0 || iVar0 == 5) || iVar0 == 4)
										{
											unk_0xF811299AF81DB581(Local_110[iVar0 /*14*/], 200, 65536);
										}
										else if ((iVar0 == 1 || iVar0 == 6) || iVar0 == 7)
										{
											unk_0xF811299AF81DB581(Local_110[iVar0 /*14*/], 0, 65536);
										}
										else
										{
											unk_0xF811299AF81DB581(Local_110[iVar0 /*14*/], 1000, 65536);
										}
										func_193(&(Local_110[iVar0 /*14*/]), 1, 1, 1);
									}
									iVar0++;
								}
								iLocal_470++;
							}
							break;
						
						case 1:
							break;
						}
				}
			}
			else
			{
				if (func_31(Local_93[0 /*2*/]))
				{
					Local_459 = { unk_0x77009B1C011405A9(Local_93[0 /*2*/], 1) };
				}
				iLocal_435 = 0;
				iLocal_434 = 0;
				iLocal_433 = 1;
			}
			break;
		
		case 1:
			unk_0xC152500D463AAEF1(Local_459, 50f, 1, 0, &iVar5, 0, 0, -1);
			if (func_31(iVar5))
			{
				unk_0xA334EDA2335A13CA(iVar5, 2, 0);
				unk_0xA334EDA2335A13CA(iVar5, 2048, 0);
			}
			switch (iLocal_434)
			{
				case 0:
					switch (iLocal_435)
					{
						case 0:
							iLocal_435 = func_167(Local_93[0 /*2*/]);
							break;
						
						case 1:
							if (func_31(Local_110[0 /*14*/]) && func_31(Local_93[1 /*2*/]))
							{
								if (unk_0x44E080690DA76A2A(Local_110[0 /*14*/], Local_93[1 /*2*/], 0))
								{
									unk_0xF87DA7F5BA8C7D0F(&uLocal_445);
									if (unk_0x9EF11DECA38804B6(Local_110[0 /*14*/]) > 5f)
									{
										unk_0xF89257C590FF140F(0, Local_93[1 /*2*/], 5, 1000);
									}
									else
									{
										unk_0xF89257C590FF140F(0, Local_93[1 /*2*/], 14, 1500);
									}
									unk_0xF811299AF81DB581(0, 720, 65536);
									unk_0x3179CCC77CBAB31F(uLocal_445);
									unk_0xC7EBE3C9AC83FAAA(Local_110[0 /*14*/], uLocal_445);
									unk_0xCD02E3C29B8253A6(&uLocal_445);
								}
							}
							if (func_31(Local_110[4 /*14*/]) && func_31(Local_93[0 /*2*/]))
							{
								if (unk_0x44E080690DA76A2A(Local_110[4 /*14*/], Local_93[0 /*2*/], 0))
								{
									unk_0xF87DA7F5BA8C7D0F(&uLocal_445);
									if (unk_0x9EF11DECA38804B6(Local_110[4 /*14*/]) > 5f)
									{
										unk_0xF89257C590FF140F(0, Local_93[0 /*2*/], 4, 2500);
									}
									else
									{
										unk_0xF89257C590FF140F(0, Local_93[0 /*2*/], 13, 1500);
									}
									unk_0xF811299AF81DB581(0, 500, 65536);
									unk_0x3179CCC77CBAB31F(uLocal_445);
									unk_0xC7EBE3C9AC83FAAA(Local_110[4 /*14*/], uLocal_445);
									unk_0xCD02E3C29B8253A6(&uLocal_445);
								}
							}
							if ((func_31(Local_110[5 /*14*/]) && func_31(Local_93[2 /*2*/])) && func_31(Local_93[1 /*2*/]))
							{
								if (unk_0x44E080690DA76A2A(Local_110[5 /*14*/], Local_93[2 /*2*/], 0))
								{
									unk_0xF87DA7F5BA8C7D0F(&uLocal_445);
									if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(Local_93[2 /*2*/], 0), unk_0x77009B1C011405A9(Local_93[1 /*2*/], 0)) < 1000f)
									{
										unk_0xC96425701AF2C9C4(0, Local_93[2 /*2*/], unk_0x20CBCBD58A2C73B4(Local_93[1 /*2*/], -3f, 0f, 0f), 10f, 0, joaat("crusader"), 786469, 4f, -1f);
									}
									unk_0xF89257C590FF140F(0, Local_93[2 /*2*/], 5, 1000);
									unk_0xF811299AF81DB581(0, 0, 65536);
									unk_0x3179CCC77CBAB31F(uLocal_445);
									unk_0xC7EBE3C9AC83FAAA(Local_110[5 /*14*/], uLocal_445);
									unk_0xCD02E3C29B8253A6(&uLocal_445);
								}
							}
							iLocal_434 = 1;
							break;
						
						case 2:
							if (func_31(Local_110[0 /*14*/]) && func_31(Local_93[1 /*2*/]))
							{
								if (unk_0x44E080690DA76A2A(Local_110[0 /*14*/], Local_93[1 /*2*/], 0))
								{
									unk_0xF87DA7F5BA8C7D0F(&uLocal_445);
									unk_0xF89257C590FF140F(0, Local_93[1 /*2*/], 5, 1500);
									unk_0xF811299AF81DB581(0, 900, 65536);
									unk_0x3179CCC77CBAB31F(uLocal_445);
									unk_0xC7EBE3C9AC83FAAA(Local_110[0 /*14*/], uLocal_445);
									unk_0xCD02E3C29B8253A6(&uLocal_445);
								}
							}
							if (func_31(Local_110[4 /*14*/]) && func_31(Local_93[0 /*2*/]))
							{
								if (unk_0x44E080690DA76A2A(Local_110[4 /*14*/], Local_93[0 /*2*/], 0))
								{
									unk_0xF87DA7F5BA8C7D0F(&uLocal_445);
									unk_0xF89257C590FF140F(0, Local_93[0 /*2*/], 5, 1000);
									unk_0xF811299AF81DB581(0, 100, 65536);
									unk_0x3179CCC77CBAB31F(uLocal_445);
									unk_0xC7EBE3C9AC83FAAA(Local_110[4 /*14*/], uLocal_445);
									unk_0xCD02E3C29B8253A6(&uLocal_445);
								}
							}
							if ((func_31(Local_110[5 /*14*/]) && func_31(Local_93[2 /*2*/])) && func_31(Local_93[0 /*2*/]))
							{
								if (unk_0x44E080690DA76A2A(Local_110[5 /*14*/], Local_93[2 /*2*/], 0))
								{
									unk_0xF87DA7F5BA8C7D0F(&uLocal_445);
									if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(Local_93[2 /*2*/], 0), unk_0x77009B1C011405A9(Local_93[0 /*2*/], 0)) < 1000f)
									{
										unk_0xC96425701AF2C9C4(0, Local_93[2 /*2*/], unk_0x20CBCBD58A2C73B4(Local_93[0 /*2*/], -2f, 1f, 0f), 10f, 0, joaat("crusader"), 786469, 4f, -1f);
									}
									unk_0xF811299AF81DB581(0, 120, 65536);
									unk_0x3179CCC77CBAB31F(uLocal_445);
									unk_0xC7EBE3C9AC83FAAA(Local_110[5 /*14*/], uLocal_445);
									unk_0xCD02E3C29B8253A6(&uLocal_445);
								}
							}
							iLocal_434 = 1;
							break;
						
						case 3:
							if ((func_31(Local_110[0 /*14*/]) && func_31(Local_93[1 /*2*/])) && func_31(Local_93[2 /*2*/]))
							{
								if (unk_0x44E080690DA76A2A(Local_110[0 /*14*/], Local_93[1 /*2*/], 0))
								{
									unk_0xF87DA7F5BA8C7D0F(&uLocal_445);
									unk_0xF89257C590FF140F(0, Local_93[1 /*2*/], 6, 500);
									if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(Local_93[1 /*2*/], 0), unk_0x77009B1C011405A9(Local_93[2 /*2*/], 0)) < 1000f)
									{
										unk_0xC96425701AF2C9C4(0, Local_93[1 /*2*/], unk_0x20CBCBD58A2C73B4(Local_93[2 /*2*/], 2f, 0f, 0f), 10f, 0, joaat("crusader"), 786469, 4f, -1f);
									}
									unk_0xF89257C590FF140F(0, Local_93[1 /*2*/], 5, 1000);
									unk_0xF811299AF81DB581(0, 420, 65536);
									unk_0x3179CCC77CBAB31F(uLocal_445);
									unk_0xC7EBE3C9AC83FAAA(Local_110[0 /*14*/], uLocal_445);
									unk_0xCD02E3C29B8253A6(&uLocal_445);
								}
							}
							if (func_31(Local_110[4 /*14*/]) && func_31(Local_93[0 /*2*/]))
							{
								if (unk_0x44E080690DA76A2A(Local_110[4 /*14*/], Local_93[0 /*2*/], 0))
								{
									if (unk_0x9EF11DECA38804B6(Local_110[4 /*14*/]) > 5f)
									{
										unk_0xF87DA7F5BA8C7D0F(&uLocal_445);
										unk_0xF89257C590FF140F(0, Local_93[0 /*2*/], 5, 1500);
										unk_0xF811299AF81DB581(0, 380, 65536);
										unk_0x3179CCC77CBAB31F(uLocal_445);
										unk_0xC7EBE3C9AC83FAAA(Local_110[4 /*14*/], uLocal_445);
										unk_0xCD02E3C29B8253A6(&uLocal_445);
									}
								}
							}
							if (func_31(Local_110[5 /*14*/]) && func_31(Local_93[2 /*2*/]))
							{
								if (unk_0x44E080690DA76A2A(Local_110[5 /*14*/], Local_93[2 /*2*/], 0))
								{
									if (unk_0x9EF11DECA38804B6(Local_110[5 /*14*/]) > 5f)
									{
										unk_0xF87DA7F5BA8C7D0F(&uLocal_445);
										unk_0xF89257C590FF140F(0, Local_93[2 /*2*/], 4, 1500);
										unk_0xF811299AF81DB581(0, 250, 65536);
										unk_0x3179CCC77CBAB31F(uLocal_445);
										unk_0xC7EBE3C9AC83FAAA(Local_110[5 /*14*/], uLocal_445);
										unk_0xCD02E3C29B8253A6(&uLocal_445);
									}
								}
							}
							iLocal_434 = 1;
							break;
						
						case 4:
							if (func_31(Local_110[0 /*14*/]) && func_31(Local_93[1 /*2*/]))
							{
								if (unk_0x44E080690DA76A2A(Local_110[0 /*14*/], Local_93[1 /*2*/], 0))
								{
									unk_0xF87DA7F5BA8C7D0F(&uLocal_445);
									unk_0xF89257C590FF140F(0, Local_93[1 /*2*/], 4, 1500);
									unk_0xF811299AF81DB581(0, 800, 65536);
									unk_0x3179CCC77CBAB31F(uLocal_445);
									unk_0xC7EBE3C9AC83FAAA(Local_110[0 /*14*/], uLocal_445);
									unk_0xCD02E3C29B8253A6(&uLocal_445);
								}
							}
							if (func_31(Local_110[4 /*14*/]) && func_31(Local_93[0 /*2*/]))
							{
								if (unk_0x44E080690DA76A2A(Local_110[4 /*14*/], Local_93[0 /*2*/], 0))
								{
									unk_0xF87DA7F5BA8C7D0F(&uLocal_445);
									unk_0xF89257C590FF140F(0, Local_93[0 /*2*/], 4, 1500);
									unk_0xF811299AF81DB581(0, 50, 65536);
									unk_0x3179CCC77CBAB31F(uLocal_445);
									unk_0xC7EBE3C9AC83FAAA(Local_110[4 /*14*/], uLocal_445);
									unk_0xCD02E3C29B8253A6(&uLocal_445);
								}
							}
							if ((func_31(Local_110[5 /*14*/]) && func_31(Local_93[2 /*2*/])) && func_31(Local_93[0 /*2*/]))
							{
								if (unk_0x44E080690DA76A2A(Local_110[5 /*14*/], Local_93[2 /*2*/], 0))
								{
									unk_0xF87DA7F5BA8C7D0F(&uLocal_445);
									if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(Local_93[2 /*2*/], 0), unk_0x77009B1C011405A9(Local_93[0 /*2*/], 0)) < 1000f)
									{
										unk_0xC96425701AF2C9C4(0, Local_93[2 /*2*/], unk_0x20CBCBD58A2C73B4(Local_93[0 /*2*/], -2f, 1f, 0f), 10f, 0, joaat("crusader"), 786469, 4f, -1f);
									}
									unk_0xF811299AF81DB581(0, 500, 65536);
									unk_0x3179CCC77CBAB31F(uLocal_445);
									unk_0xC7EBE3C9AC83FAAA(Local_110[5 /*14*/], uLocal_445);
									unk_0xCD02E3C29B8253A6(&uLocal_445);
								}
							}
							iLocal_434 = 1;
							break;
					}
					break;
				
				case 1:
					iVar0 = 0;
					while (iVar0 <= (9 - 1))
					{
						if (func_31(Local_110[iVar0 /*14*/]) && func_31(unk_0x9F92518438215DD0()))
						{
							unk_0x488909512824324E(Local_110[iVar0 /*14*/], 10);
							unk_0xA2972B846BDC7E33(Local_110[iVar0 /*14*/], 580f);
							unk_0x64277E0EB39C1162(Local_110[iVar0 /*14*/], 0, 1);
							unk_0x64277E0EB39C1162(Local_110[iVar0 /*14*/], 50, 1);
							unk_0x9001FCB58244C11D(Local_110[iVar0 /*14*/], 184, 0);
							unk_0x9A43E575C1997EF8(Local_110[iVar0 /*14*/], 1);
							func_166(iVar0);
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
								unk_0xF87DA7F5BA8C7D0F(&uLocal_445);
								if (unk_0x827151D7B70CB853(Local_110[iVar0 /*14*/], 0))
								{
									unk_0x0F1CDD7ECAA6205F(0, iVar6);
								}
								unk_0xF811299AF81DB581(0, iVar6, 65536);
								unk_0x3179CCC77CBAB31F(uLocal_445);
								unk_0xC7EBE3C9AC83FAAA(Local_110[iVar0 /*14*/], uLocal_445);
								unk_0xCD02E3C29B8253A6(&uLocal_445);
								unk_0x64277E0EB39C1162(Local_110[iVar0 /*14*/], 3, 1);
							}
						}
						iVar0++;
					}
					iLocal_434 = func_165();
					break;
				
				case 2:
					iVar0 = 0;
					while (iVar0 <= (9 - 1))
					{
						if (func_31(Local_110[iVar0 /*14*/]) && func_31(unk_0x9F92518438215DD0()))
						{
							func_166(iVar0);
							if (unk_0xFDFEC308151CBB48(unk_0x9F92518438215DD0(), 0))
							{
								iLocal_465 = 8000;
							}
							else
							{
								iLocal_465 = 12000;
							}
							if (unk_0x91EAD4F2F9B5B38A(unk_0x77009B1C011405A9(Local_110[iVar0 /*14*/], 0), unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), 1) < 75f)
							{
								if (!Local_110[iVar0 /*14*/].f_12 && (unk_0x17103F66FBB44C3C() - iLocal_466) > iLocal_465)
								{
									unk_0x64277E0EB39C1162(Local_110[iVar0 /*14*/], 51, 1);
									Local_110[iVar0 /*14*/].f_12 = 1;
									iLocal_466 = unk_0x17103F66FBB44C3C();
								}
							}
							else
							{
								unk_0x9A43E575C1997EF8(Local_110[iVar0 /*14*/], 1);
								unk_0x64277E0EB39C1162(Local_110[iVar0 /*14*/], 51, 0);
								Local_110[iVar0 /*14*/].f_12 = 0;
							}
							if (!func_177(Local_110[iVar0 /*14*/], 780511057, 1))
							{
								unk_0xF78316EFCA911012(Local_110[iVar0 /*14*/], unk_0x9F92518438215DD0(), 0, 16);
							}
						}
						iVar0++;
					}
					iLocal_434 = func_165();
					break;
				
				case 3:
					iVar0 = 0;
					while (iVar0 <= (9 - 1))
					{
						if (func_31(Local_110[iVar0 /*14*/]) && func_31(unk_0x9F92518438215DD0()))
						{
							if (unk_0x91EAD4F2F9B5B38A(unk_0x77009B1C011405A9(Local_110[iVar0 /*14*/], 0), unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), 1) > 120f)
							{
								unk_0x9A43E575C1997EF8(Local_110[iVar0 /*14*/], 1);
								unk_0x64277E0EB39C1162(Local_110[iVar0 /*14*/], 51, 0);
								Local_110[iVar0 /*14*/].f_12 = 0;
								func_166(iVar0);
							}
							if (!func_177(Local_110[iVar0 /*14*/], 780511057, 1))
							{
								unk_0xF78316EFCA911012(Local_110[iVar0 /*14*/], unk_0x9F92518438215DD0(), 0, 16);
							}
						}
						iVar0++;
					}
					iLocal_434 = func_165();
					break;
				
				case 4:
					if (func_164(unk_0x9F92518438215DD0(), Local_48, 1) < 30f)
					{
						iVar7 = 1;
					}
					iVar0 = 0;
					while (iVar0 <= (9 - 1))
					{
						if ((func_31(unk_0x9F92518438215DD0()) && func_31(Local_110[iVar0 /*14*/])) && func_31(Local_93[0 /*2*/]))
						{
							if (iVar7 && func_164(Local_110[iVar0 /*14*/], Local_48, 1) < 30f)
							{
								unk_0x64277E0EB39C1162(Local_110[iVar0 /*14*/], 1, 0);
								unk_0x64277E0EB39C1162(Local_110[iVar0 /*14*/], 3, 1);
								unk_0x32347D2C59769367(Local_110[iVar0 /*14*/], 0);
								unk_0x9A43E575C1997EF8(Local_110[iVar0 /*14*/], 2);
								if (!unk_0x5D1AEC61B1517F38(Local_110[iVar0 /*14*/], 0))
								{
									unk_0xF78316EFCA911012(Local_110[iVar0 /*14*/], unk_0x9F92518438215DD0(), 0, 16);
								}
							}
							else if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), Local_93[0 /*2*/], 0) || unk_0x91EAD4F2F9B5B38A(unk_0x77009B1C011405A9(Local_93[0 /*2*/], 0), unk_0x77009B1C011405A9(Local_110[iVar0 /*14*/], 0), 1) > (120f / 2f))
							{
								unk_0x64277E0EB39C1162(Local_110[iVar0 /*14*/], 1, 1);
								if (unk_0x91EAD4F2F9B5B38A(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(Local_110[iVar0 /*14*/], 0), 1) > (120f * 2f))
								{
									if (!unk_0x827151D7B70CB853(Local_110[iVar0 /*14*/], 0) && !unk_0x0FF9FE2CB115CFB9(Local_110[iVar0 /*14*/]))
									{
										iVar9 = func_163(Local_110[iVar0 /*14*/]);
										if (func_31(iVar9))
										{
											iVar8 = -1;
											if (unk_0x4A33023BC86AAA7F(iVar9, -1))
											{
												iVar8 = -1;
											}
											else if (unk_0x4A33023BC86AAA7F(iVar9, 0))
											{
												iVar8 = 0;
											}
											else if (unk_0x4A33023BC86AAA7F(iVar9, 1))
											{
												iVar8 = 1;
											}
											else if (unk_0x4A33023BC86AAA7F(iVar9, 2))
											{
												iVar8 = 2;
											}
											if (func_162(iVar9))
											{
												if (unk_0xE962BD784DD0E442(Local_110[iVar0 /*14*/], -1794415470) != 1)
												{
													unk_0x4073360CA020BB84(Local_110[iVar0 /*14*/], iVar9, 1000, iVar8, 2f, 16, 0);
												}
												unk_0x64277E0EB39C1162(Local_110[iVar0 /*14*/], 3, 0);
											}
											else
											{
												unk_0x995B3705D02B0401(&(Local_110[iVar0 /*14*/]));
											}
										}
										else
										{
											unk_0x995B3705D02B0401(&(Local_110[iVar0 /*14*/]));
										}
									}
									else if (!unk_0x5D1AEC61B1517F38(Local_110[iVar0 /*14*/], 0))
									{
										unk_0xF78316EFCA911012(Local_110[iVar0 /*14*/], unk_0x9F92518438215DD0(), 0, 16);
									}
								}
								else if (unk_0x44615198247FF471(Local_110[iVar0 /*14*/]))
								{
									if (func_161(unk_0x9F92518438215DD0(), Local_110[iVar0 /*14*/], 1) < 35f)
									{
										if (func_160(Local_110[iVar0 /*14*/], unk_0x1161215F69587BDA(Local_110[iVar0 /*14*/], 0)) == -1)
										{
											if ((unk_0x17103F66FBB44C3C() - iLocal_468) > 40000)
											{
												if (bLocal_469)
												{
													bLocal_469 = false;
													iLocal_468 = unk_0x17103F66FBB44C3C();
												}
												else
												{
													bLocal_469 = true;
													iLocal_468 = unk_0x17103F66FBB44C3C();
												}
											}
											if (bLocal_469)
											{
												if (!func_177(Local_110[iVar0 /*14*/], -1273030092, 1))
												{
													unk_0xC6C4308CDA4C206C(Local_110[iVar0 /*14*/], unk_0x1161215F69587BDA(Local_110[iVar0 /*14*/], 0), Local_93[0 /*2*/], 1, 11f, 786468, -1f, 20, 0f);
												}
											}
											else if (!unk_0x5D1AEC61B1517F38(Local_110[iVar0 /*14*/], 0))
											{
												unk_0xF78316EFCA911012(Local_110[iVar0 /*14*/], unk_0x9F92518438215DD0(), 0, 16);
											}
										}
										else if (!unk_0x5D1AEC61B1517F38(Local_110[iVar0 /*14*/], 0))
										{
											unk_0xF78316EFCA911012(Local_110[iVar0 /*14*/], unk_0x9F92518438215DD0(), 0, 16);
										}
										if (unk_0x9EF11DECA38804B6(unk_0x9F92518438215DD0()) < 2f && func_161(unk_0x9F92518438215DD0(), Local_110[iVar0 /*14*/], 1) < 20f)
										{
											unk_0x64277E0EB39C1162(Local_110[iVar0 /*14*/], 3, 1);
										}
										else
										{
											unk_0x64277E0EB39C1162(Local_110[iVar0 /*14*/], 3, 0);
										}
									}
									else if (!unk_0x5D1AEC61B1517F38(Local_110[iVar0 /*14*/], 0))
									{
										unk_0xF78316EFCA911012(Local_110[iVar0 /*14*/], unk_0x9F92518438215DD0(), 0, 16);
									}
								}
								else if (!unk_0x5D1AEC61B1517F38(Local_110[iVar0 /*14*/], 0))
								{
									unk_0xF78316EFCA911012(Local_110[iVar0 /*14*/], unk_0x9F92518438215DD0(), 0, 16);
								}
							}
							else if (!unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), Local_93[0 /*2*/], 0))
							{
								unk_0x64277E0EB39C1162(Local_110[iVar0 /*14*/], 1, 0);
								unk_0x64277E0EB39C1162(Local_110[iVar0 /*14*/], 3, 1);
								unk_0x32347D2C59769367(Local_110[iVar0 /*14*/], 0);
								unk_0x9A43E575C1997EF8(Local_110[iVar0 /*14*/], 2);
							}
						}
						iVar0++;
					}
					iLocal_434 = func_165();
					break;
			}
			break;
	}
}

int func_160(int iParam0, int iParam1)
{
	if (!unk_0x0BA451447C3B1A8D(iParam0) && !unk_0x0BA451447C3B1A8D(iParam1))
	{
		if (unk_0x2A2DBEFFFC03A22F(iParam0, iParam1))
		{
			if (unk_0xB5BBEB12C77EE430(iParam1, -1) == iParam0)
			{
				return -1;
			}
			if (unk_0xB5BBEB12C77EE430(iParam1, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0xB5BBEB12C77EE430(iParam1, 1) == iParam0)
			{
				return 1;
			}
			if (unk_0xB5BBEB12C77EE430(iParam1, 2) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

float func_161(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x0BA451447C3B1A8D(iParam0))
	{
		Var0 = { unk_0x77009B1C011405A9(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x77009B1C011405A9(iParam0, 0) };
	}
	if (!unk_0x0BA451447C3B1A8D(iParam1))
	{
		Var3 = { unk_0x77009B1C011405A9(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x77009B1C011405A9(iParam1, 0) };
	}
	return unk_0x91EAD4F2F9B5B38A(Var0, Var3, iParam2);
}

int func_162(int iParam0)
{
	if (!unk_0x0BA451447C3B1A8D(iParam0))
	{
		if (unk_0x4A33023BC86AAA7F(iParam0, -1))
		{
			return 1;
		}
		if (unk_0x4A33023BC86AAA7F(iParam0, 0))
		{
			return 1;
		}
		if (unk_0x4A33023BC86AAA7F(iParam0, 1))
		{
			return 1;
		}
		if (unk_0x4A33023BC86AAA7F(iParam0, 2))
		{
			return 1;
		}
	}
	return 0;
}

var func_163(int iParam0)
{
	var uVar0;
	float fVar1;
	
	uVar0 = Local_93[1 /*2*/];
	fVar1 = 9999f;
	if (func_31(Local_93[1 /*2*/]))
	{
		if (func_161(iParam0, Local_93[1 /*2*/], 1) < fVar1)
		{
			fVar1 = func_161(iParam0, Local_93[1 /*2*/], 1);
			if (func_162(Local_93[1 /*2*/]))
			{
				uVar0 = Local_93[1 /*2*/];
			}
			else
			{
				uVar0 = Local_93[2 /*2*/];
			}
		}
	}
	if (func_31(Local_93[2 /*2*/]))
	{
		if (func_161(iParam0, Local_93[2 /*2*/], 1) < fVar1)
		{
			fVar1 = func_161(iParam0, Local_93[2 /*2*/], 1);
			if (func_162(Local_93[2 /*2*/]))
			{
				uVar0 = Local_93[2 /*2*/];
			}
			else
			{
				uVar0 = Local_93[1 /*2*/];
			}
		}
	}
	return uVar0;
}

float func_164(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x0BA451447C3B1A8D(iParam0))
	{
		Var0 = { unk_0x77009B1C011405A9(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x77009B1C011405A9(iParam0, 0) };
	}
	return unk_0x91EAD4F2F9B5B38A(Var0, Param1, iParam4);
}

int func_165()
{
	if (func_31(unk_0x9F92518438215DD0()) && func_31(Local_93[0 /*2*/]))
	{
		if (func_164(Local_93[0 /*2*/], Local_459, 1) > 120f)
		{
			return 4;
		}
		else if (func_164(unk_0x9F92518438215DD0(), Local_459, 1) <= 120f)
		{
			return 2;
		}
		else if (func_164(unk_0x9F92518438215DD0(), Local_459, 1) > 120f && !unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), Local_93[0 /*2*/], 0))
		{
			return 3;
		}
	}
	return 2;
}

void func_166(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_31(Local_110[iParam0 /*14*/]))
	{
		if (iParam0 == 0)
		{
			if (func_167(0) == 1)
			{
				Var1 = { Local_72 };
				fVar4 = 4.5f;
				iVar0 = Local_93[1 /*2*/];
			}
			else if (func_167(0) == 2)
			{
				Var1 = { Local_78 };
				fVar4 = 4.5f;
				iVar0 = Local_93[1 /*2*/];
			}
			else if (func_167(0) == 3)
			{
				Var1 = { Local_51 };
				fVar4 = 3.8f;
				iVar0 = Local_93[0 /*2*/];
			}
			else if (func_167(0) == 4)
			{
				Var1 = { Local_72 };
				fVar4 = 4.5f;
				iVar0 = Local_93[2 /*2*/];
			}
		}
		else if (iParam0 == 1)
		{
			if (func_167(0) == 1)
			{
				Var1 = { Local_75 };
				fVar4 = 2.8f;
				iVar0 = Local_93[1 /*2*/];
			}
			else if (func_167(0) == 2)
			{
				Var1 = { Local_63 };
				fVar4 = 5f;
				iVar0 = Local_93[0 /*2*/];
			}
			else if (func_167(0) == 3)
			{
				Var1 = { Local_63 };
				fVar4 = 5f;
				iVar0 = Local_93[0 /*2*/];
			}
			else if (func_167(0) == 4)
			{
				Var1 = { Local_72 };
				fVar4 = 4.5f;
				iVar0 = Local_93[1 /*2*/];
			}
		}
		else if (iParam0 == 2)
		{
			if (func_167(0) == 1)
			{
				Var1 = { Local_60 };
				fVar4 = 3.8f;
				iVar0 = Local_93[0 /*2*/];
			}
			else if (func_167(0) == 2)
			{
				Var1 = { Local_78 };
				fVar4 = 4.5f;
				iVar0 = Local_93[1 /*2*/];
			}
			else if (func_167(0) == 3)
			{
				Var1 = { Local_75 };
				fVar4 = 2.8f;
				iVar0 = Local_93[1 /*2*/];
			}
			else if (func_167(0) == 4)
			{
				Var1 = { Local_75 };
				fVar4 = 2.8f;
				iVar0 = Local_93[1 /*2*/];
			}
		}
		else if (iParam0 == 3)
		{
			if (func_167(0) == 1)
			{
				Var1 = { Local_63 };
				fVar4 = 4.5f;
				iVar0 = Local_93[0 /*2*/];
			}
			else if (func_167(0) == 2)
			{
				Var1 = { Local_75 };
				fVar4 = 2.8f;
				iVar0 = Local_93[1 /*2*/];
			}
			else if (func_167(0) == 3)
			{
				Var1 = { Local_75 };
				fVar4 = 2.8f;
				iVar0 = Local_93[1 /*2*/];
			}
			else if (func_167(0) == 4)
			{
				Var1 = { Local_75 };
				fVar4 = 2.8f;
				iVar0 = Local_93[1 /*2*/];
			}
		}
		else if (iParam0 == 5)
		{
			if (func_167(0) == 1)
			{
				Var1 = { Local_75 };
				fVar4 = 2.8f;
				iVar0 = Local_93[2 /*2*/];
			}
			else if (func_167(0) == 2)
			{
				Var1 = { Local_78 };
				fVar4 = 4.5f;
				iVar0 = Local_93[2 /*2*/];
			}
			else if (func_167(0) == 3)
			{
				Var1 = { Local_69 };
				fVar4 = 2.8f;
				iVar0 = Local_93[2 /*2*/];
			}
			else if (func_167(0) == 4)
			{
				Var1 = { Local_54 };
				fVar4 = 5f;
				iVar0 = Local_93[0 /*2*/];
			}
		}
		else if (iParam0 == 6)
		{
			if (func_167(0) == 1)
			{
				Var1 = { Local_78 };
				fVar4 = 4.5f;
				iVar0 = Local_93[2 /*2*/];
			}
			else if (func_167(0) == 2)
			{
				Var1 = { Local_66 };
				fVar4 = 5f;
				iVar0 = Local_93[0 /*2*/];
			}
			else if (func_167(0) == 3)
			{
				Var1 = { Local_69 };
				fVar4 = 2.8f;
				iVar0 = Local_93[2 /*2*/];
			}
			else if (func_167(0) == 4)
			{
				Var1 = { Local_72 };
				fVar4 = 4.5f;
				iVar0 = Local_93[2 /*2*/];
			}
		}
		else if (iParam0 == 7)
		{
			if (func_167(0) == 1)
			{
				Var1 = { Local_78 };
				fVar4 = 4.5f;
				iVar0 = Local_93[2 /*2*/];
			}
			else if (func_167(0) == 2)
			{
				Var1 = { Local_78 };
				fVar4 = 4.5f;
				iVar0 = Local_93[2 /*2*/];
			}
			else if (func_167(0) == 3)
			{
				Var1 = { Local_72 };
				fVar4 = 4.5f;
				iVar0 = Local_93[2 /*2*/];
			}
			else if (func_167(0) == 4)
			{
				Var1 = { Local_57 };
				fVar4 = 5f;
				iVar0 = Local_93[0 /*2*/];
			}
		}
		else if (iParam0 == 8)
		{
			if (func_167(0) == 1)
			{
				Var1 = { Local_54 };
				fVar4 = 5f;
				iVar0 = Local_93[0 /*2*/];
			}
			else if (func_167(0) == 2)
			{
				Var1 = { Local_63 };
				fVar4 = 5f;
				iVar0 = Local_93[0 /*2*/];
			}
			else if (func_167(0) == 3)
			{
				Var1 = { Local_72 };
				fVar4 = 4.5f;
				iVar0 = Local_93[2 /*2*/];
			}
			else if (func_167(0) == 4)
			{
				Var1 = { Local_72 };
				fVar4 = 4.5f;
				iVar0 = Local_93[2 /*2*/];
			}
		}
		else if (iParam0 == 4)
		{
			if (func_167(0) == 1)
			{
				Var1 = { Local_57 };
				fVar4 = 5f;
				iVar0 = Local_93[0 /*2*/];
			}
			else if (func_167(0) == 2)
			{
				Var1 = { Local_66 };
				fVar4 = 5f;
				iVar0 = Local_93[0 /*2*/];
			}
			else if (func_167(0) == 3)
			{
				Var1 = { Local_66 };
				fVar4 = 5f;
				iVar0 = Local_93[0 /*2*/];
			}
			else if (func_167(0) == 4)
			{
				Var1 = { Local_54 };
				fVar4 = 5f;
				iVar0 = Local_93[0 /*2*/];
			}
		}
		if (!Local_110[iParam0 /*14*/].f_12)
		{
			if (func_31(iVar0))
			{
				unk_0x241B22B5B8B8DBDB(Local_110[iParam0 /*14*/], unk_0x20CBCBD58A2C73B4(iVar0, Var1), fVar4, 0, 0);
			}
			else if (func_31(Local_93[0 /*2*/]))
			{
				if (func_167(Local_93[0 /*2*/]) == 1)
				{
					unk_0xF9FF109016228B33(Local_110[iParam0 /*14*/], Local_93[0 /*2*/], Local_60, 3.8f, 0);
				}
				else if (func_167(Local_93[0 /*2*/]) == 2)
				{
					unk_0xF9FF109016228B33(Local_110[iParam0 /*14*/], Local_93[0 /*2*/], -6f, 0f, -0.5f, 6f, 0);
				}
				else if (func_167(Local_93[0 /*2*/]) == 3)
				{
					unk_0xF9FF109016228B33(Local_110[iParam0 /*14*/], Local_93[0 /*2*/], Local_51, 3.8f, 0);
				}
				else if (func_167(Local_93[0 /*2*/]) == 4)
				{
					unk_0xF9FF109016228B33(Local_110[iParam0 /*14*/], Local_93[0 /*2*/], 6f, 0f, -0.5f, 6f, 0);
				}
			}
		}
	}
}

int func_167(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (iParam0 == 0)
	{
		iParam0 = Local_93[0 /*2*/];
	}
	if (func_31(unk_0x9F92518438215DD0()) && func_31(iParam0))
	{
		Var0 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1) };
		Var3 = { unk_0xA9C270DECAAAE361(iParam0, Var0) };
		fVar6 = unk_0x2DFCF5504EF3D1B9(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1);
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

float func_168(float fParam0, float fParam1, float fParam2)
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

void func_169()
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
	
	unk_0x9DA0F3A686A566A6(unk_0x9F92518438215DD0(), &iLocal_458, 1);
	iVar0 = 0;
	while (iVar0 <= (9 - 1))
	{
		if (func_31(Local_110[iVar0 /*14*/]))
		{
			if (((((unk_0x5D1AEC61B1517F38(Local_110[iVar0 /*14*/], 0) || unk_0xF9AED6291438A448(Local_110[iVar0 /*14*/])) || unk_0x29CF5578FD16B3A2(Local_110[iVar0 /*14*/], 0)) || unk_0x6E4FD1DEBC7082D7(Local_110[iVar0 /*14*/])) || unk_0xBCBBB7902DEFA79B(Local_110[iVar0 /*14*/])) || unk_0xE99AF5B1B3F0BB7C(Local_110[iVar0 /*14*/], unk_0x9F92518438215DD0(), 1))
			{
				bLocal_455 = true;
			}
			if ((unk_0x17103F66FBB44C3C() - iLocal_467) > 800)
			{
				if (unk_0xFAFDD5730377D8CC(Local_110[iVar0 /*14*/], 123) || unk_0xFAFDD5730377D8CC(Local_110[iVar0 /*14*/], 124))
				{
					bLocal_455 = true;
				}
			}
			if (unk_0xCEC6A26F61687EAE(Local_110[iVar0 /*14*/], unk_0x9F92518438215DD0()) && (unk_0xB7F4FC4B0BBF8285(unk_0xCFC72E446B0B3AD7(), Local_110[iVar0 /*14*/]) || unk_0xEA02B89C167BF0E3(unk_0xCFC72E446B0B3AD7(), Local_110[iVar0 /*14*/])))
			{
				if (iLocal_458 != 0)
				{
					if (unk_0xA3136AF6EF158C8C(iLocal_458) != joaat("GROUP_MELEE") && iLocal_458 != joaat("weapon_unarmed"))
					{
						if ((unk_0x17103F66FBB44C3C() - Local_110[iVar0 /*14*/].f_11) > 800)
						{
							bLocal_455 = true;
						}
					}
				}
			}
			else
			{
				Local_110[iVar0 /*14*/].f_11 = unk_0x17103F66FBB44C3C();
			}
		}
		else
		{
			bLocal_455 = true;
		}
		iVar0++;
	}
	if (func_31(Local_93[1 /*2*/]))
	{
		if (((unk_0xE99AF5B1B3F0BB7C(Local_93[1 /*2*/], unk_0x9F92518438215DD0(), 0) || unk_0xD8E4C099E8375B67(unk_0x9F92518438215DD0(), Local_93[1 /*2*/], 0, -1)) || unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), Local_93[1 /*2*/], 1)) || unk_0x5E4A8512F7328F61(unk_0x9F92518438215DD0(), Local_93[1 /*2*/]))
		{
			bLocal_455 = true;
		}
		else if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
		{
			if (unk_0x50118CDA0B25074C(unk_0x9F92518438215DD0(), joaat("towtruck")) || unk_0x50118CDA0B25074C(unk_0x9F92518438215DD0(), joaat("towtruck2")))
			{
				if (unk_0x545772C7EE8EA363(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), Local_93[1 /*2*/]))
				{
					bLocal_455 = true;
				}
			}
		}
		if (func_173(0f, 0f, 0f, 0f, 0f, 0f, unk_0x77009B1C011405A9(Local_93[1 /*2*/], 0), 30f, 0))
		{
			bLocal_455 = true;
		}
		if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
		{
			if (unk_0x30281E710B12FB9F(unk_0x9F92518438215DD0(), Local_93[1 /*2*/]) && fLocal_462 >= 7f)
			{
				bLocal_455 = true;
			}
			Var1 = { func_172(unk_0x77009B1C011405A9(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), 0) - unk_0x77009B1C011405A9(Local_93[1 /*2*/], 0)) };
			Var4 = { unk_0xAEA1379E6840A7DA(Local_93[1 /*2*/]) - unk_0xAEA1379E6840A7DA(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0)) };
			fLocal_462 = func_171(Var4, Var1);
		}
	}
	else
	{
		bLocal_455 = true;
	}
	if (func_31(Local_93[2 /*2*/]))
	{
		if (((unk_0xE99AF5B1B3F0BB7C(Local_93[2 /*2*/], unk_0x9F92518438215DD0(), 0) || unk_0xD8E4C099E8375B67(unk_0x9F92518438215DD0(), Local_93[2 /*2*/], 0, -1)) || unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), Local_93[2 /*2*/], 1)) || unk_0x5E4A8512F7328F61(unk_0x9F92518438215DD0(), Local_93[2 /*2*/]))
		{
			bLocal_455 = true;
		}
		else if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
		{
			if (unk_0x50118CDA0B25074C(unk_0x9F92518438215DD0(), joaat("towtruck")) || unk_0x50118CDA0B25074C(unk_0x9F92518438215DD0(), joaat("towtruck2")))
			{
				if (unk_0x545772C7EE8EA363(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), Local_93[2 /*2*/]))
				{
					bLocal_455 = true;
				}
			}
		}
		if (func_173(0f, 0f, 0f, 0f, 0f, 0f, unk_0x77009B1C011405A9(Local_93[2 /*2*/], 0), 30f, 0))
		{
			bLocal_455 = true;
		}
		if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
		{
			if (unk_0x30281E710B12FB9F(unk_0x9F92518438215DD0(), Local_93[2 /*2*/]) && fLocal_464 >= 7f)
			{
				bLocal_455 = true;
			}
			Var7 = { func_172(unk_0x77009B1C011405A9(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), 0) - unk_0x77009B1C011405A9(Local_93[2 /*2*/], 0)) };
			Var10 = { unk_0xAEA1379E6840A7DA(Local_93[2 /*2*/]) - unk_0xAEA1379E6840A7DA(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0)) };
			fLocal_464 = func_171(Var10, Var7);
		}
	}
	else
	{
		bLocal_455 = true;
	}
	if (func_31(Local_93[0 /*2*/]))
	{
		if (func_161(unk_0x9F92518438215DD0(), unk_0x9F92518438215DD0(), 1) < 45f && unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) > 0)
		{
			bLocal_455 = true;
		}
		if (func_173(0f, 0f, 0f, 0f, 0f, 0f, unk_0x77009B1C011405A9(Local_93[0 /*2*/], 0), 30f, 0))
		{
			bLocal_455 = true;
		}
		if (((unk_0xE99AF5B1B3F0BB7C(Local_93[0 /*2*/], unk_0x9F92518438215DD0(), 0) || unk_0xD8E4C099E8375B67(unk_0x9F92518438215DD0(), Local_93[0 /*2*/], 0, -1)) || unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), Local_93[0 /*2*/], 1)) || unk_0x5E4A8512F7328F61(unk_0x9F92518438215DD0(), Local_93[0 /*2*/]))
		{
			bLocal_455 = true;
		}
		else if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
		{
			if (unk_0x50118CDA0B25074C(unk_0x9F92518438215DD0(), joaat("towtruck")) || unk_0x50118CDA0B25074C(unk_0x9F92518438215DD0(), joaat("towtruck2")))
			{
				if (unk_0x545772C7EE8EA363(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), Local_93[0 /*2*/]))
				{
					bLocal_455 = true;
				}
			}
		}
		if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
		{
			if (unk_0x30281E710B12FB9F(unk_0x9F92518438215DD0(), Local_93[0 /*2*/]) && fLocal_463 >= 7f)
			{
				bLocal_455 = true;
			}
			Var13 = { func_172(unk_0x77009B1C011405A9(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), 0) - unk_0x77009B1C011405A9(Local_93[0 /*2*/], 0)) };
			Var16 = { unk_0xAEA1379E6840A7DA(Local_93[0 /*2*/]) - unk_0xAEA1379E6840A7DA(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0)) };
			fLocal_463 = func_171(Var16, Var13);
		}
		if (func_170())
		{
			iVar19 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
			if (unk_0xFC38B241541883D3(iVar19, 0))
			{
				if (unk_0x30281E710B12FB9F(iVar19, Local_93[0 /*2*/]))
				{
					bLocal_455 = true;
				}
				Var20 = { func_172(unk_0x77009B1C011405A9(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), 0) - unk_0x77009B1C011405A9(Local_93[0 /*2*/], 0)) };
				Var23 = { unk_0xAEA1379E6840A7DA(Local_93[0 /*2*/]) - unk_0xAEA1379E6840A7DA(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0)) };
				fLocal_463 = func_171(Var23, Var20);
			}
		}
	}
	else
	{
		bLocal_455 = true;
	}
}

bool func_170()
{
	return unk_0x94E72F17611BCD3C(Global_2446533.f_732, 2);
}

float func_171(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_172(struct<3> Param0)
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

int func_173(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	if (!func_174(Param0 + Param3))
	{
		if ((((((((((((((((((((((unk_0x4D18D3502F529C01(5, Param3, Param0) || (unk_0x4D18D3502F529C01(2, Param3, Param0) && !bParam10)) || (unk_0x4D18D3502F529C01(20, Param3, Param0) && !bParam10)) || unk_0x4D18D3502F529C01(4, Param3, Param0)) || (unk_0x4D18D3502F529C01(28, Param3, Param0) && !bParam10)) || unk_0x4D18D3502F529C01(32, Param3, Param0)) || unk_0x4D18D3502F529C01(25, Param3, Param0)) || unk_0x4D18D3502F529C01(9, Param3, Param0)) || (unk_0x4D18D3502F529C01(3, Param3, Param0) && !bParam10)) || (unk_0x4D18D3502F529C01(6, Param3, Param0) && !bParam10)) || unk_0x4D18D3502F529C01(0, Param3, Param0)) || unk_0x4D18D3502F529C01(1, Param3, Param0)) || unk_0x4D18D3502F529C01(23, Param3, Param0)) || unk_0x4D18D3502F529C01(34, Param3, Param0)) || unk_0x4D18D3502F529C01(14, Param3, Param0)) || (unk_0x4D18D3502F529C01(30, Param3, Param0) && !bParam10)) || (unk_0x4D18D3502F529C01(12, Param3, Param0) && !bParam10)) || unk_0x4D18D3502F529C01(7, Param3, Param0)) || (unk_0x4D18D3502F529C01(21, Param3, Param0) && !bParam10)) || (unk_0x4D18D3502F529C01(18, Param3, Param0) && !bParam10)) || unk_0x4D18D3502F529C01(15, Param3, Param0)) || unk_0x4D18D3502F529C01(10, Param3, Param0)) || unk_0x4D18D3502F529C01(27, Param3, Param0))
		{
			iVar0 = 1;
		}
	}
	else if ((((((((((((((((((((((unk_0x24E7720869956FA9(5, Param6, fParam9) || (unk_0x24E7720869956FA9(2, Param6, fParam9) && !bParam10)) || (unk_0x24E7720869956FA9(20, Param6, fParam9) && !bParam10)) || unk_0x24E7720869956FA9(4, Param6, fParam9)) || (unk_0x24E7720869956FA9(28, Param6, fParam9) && !bParam10)) || unk_0x24E7720869956FA9(32, Param6, fParam9)) || unk_0x24E7720869956FA9(25, Param6, fParam9)) || unk_0x24E7720869956FA9(9, Param6, fParam9)) || (unk_0x24E7720869956FA9(3, Param6, fParam9) && !bParam10)) || (unk_0x24E7720869956FA9(6, Param6, fParam9) && !bParam10)) || unk_0x24E7720869956FA9(0, Param6, fParam9)) || unk_0x24E7720869956FA9(1, Param6, fParam9)) || unk_0x24E7720869956FA9(23, Param6, fParam9)) || unk_0x24E7720869956FA9(34, Param6, fParam9)) || unk_0x24E7720869956FA9(14, Param6, fParam9)) || (unk_0x24E7720869956FA9(30, Param6, fParam9) && !bParam10)) || (unk_0x24E7720869956FA9(12, Param6, fParam9) && !bParam10)) || unk_0x24E7720869956FA9(7, Param6, fParam9)) || (unk_0x24E7720869956FA9(21, Param6, fParam9) && !bParam10)) || (unk_0x24E7720869956FA9(18, Param6, fParam9) && !bParam10)) || unk_0x24E7720869956FA9(15, Param6, fParam9)) || unk_0x24E7720869956FA9(10, Param6, fParam9)) || unk_0x24E7720869956FA9(27, Param6, fParam9))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_174(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_175()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	
	if (((((func_31(Local_93[0 /*2*/]) && func_31(Local_93[1 /*2*/])) && func_31(Local_93[2 /*2*/])) && func_31(Local_110[4 /*14*/])) && func_31(Local_110[0 /*14*/])) && func_31(Local_110[5 /*14*/]))
	{
		Var0 = { unk_0x20CBCBD58A2C73B4(Local_93[0 /*2*/], 0f, func_168(func_161(Local_93[0 /*2*/], Local_93[1 /*2*/], 1), 3f, 25f), 5.5f) };
		Var3 = { unk_0x20CBCBD58A2C73B4(Local_93[0 /*2*/], 0f, 0f, -6f) };
		Var6 = { unk_0x20CBCBD58A2C73B4(Local_93[1 /*2*/], 0f, 20f, 5f) };
		Var9 = { unk_0x20CBCBD58A2C73B4(Local_93[1 /*2*/], 0f, 0f, -6f) };
		Var12 = { unk_0x20CBCBD58A2C73B4(Local_93[2 /*2*/], 0f, func_168(func_161(Local_93[2 /*2*/], Local_93[0 /*2*/], 1), 3f, 25f), 5f) };
		Var15 = { unk_0x20CBCBD58A2C73B4(Local_93[2 /*2*/], 0f, 0f, -6f) };
		switch (iLocal_432)
		{
			case 0:
				if (unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), Var6, Var9, 9f, 0, 1, 0))
				{
					if (unk_0x9EF11DECA38804B6(Local_93[1 /*2*/]) < 1f && unk_0x9EF11DECA38804B6(unk_0x9F92518438215DD0()) < 1f)
					{
						fLocal_1480[1] = (fLocal_1480[1] + unk_0xD1D592A06EBAAE4F());
					}
					else if (fLocal_1480[1] > 0f)
					{
						fLocal_1480[1] = (fLocal_1480[1] - (unk_0xD1D592A06EBAAE4F() * 10f));
					}
				}
				if (unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), Var0, Var3, 9f, 0, 1, 0))
				{
					if (unk_0x9EF11DECA38804B6(Local_93[0 /*2*/]) < 1f && unk_0x9EF11DECA38804B6(unk_0x9F92518438215DD0()) < 1f)
					{
						fLocal_1480[0] = (fLocal_1480[0] + unk_0xD1D592A06EBAAE4F());
					}
					else if (fLocal_1480[0] > 0f)
					{
						fLocal_1480[0] = (fLocal_1480[0] - (unk_0xD1D592A06EBAAE4F() * 10f));
					}
				}
				if (unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), Var12, Var15, 9f, 0, 1, 0))
				{
					if (unk_0x9EF11DECA38804B6(Local_93[2 /*2*/]) < 1f && unk_0x9EF11DECA38804B6(unk_0x9F92518438215DD0()) < 1f)
					{
						fLocal_1480[2] = (fLocal_1480[2] + unk_0xD1D592A06EBAAE4F());
					}
					else if (fLocal_1480[2] > 0f)
					{
						fLocal_1480[2] = (fLocal_1480[2] - (unk_0xD1D592A06EBAAE4F() * 10f));
					}
				}
				if (fLocal_1480[1] > 1.5f)
				{
					iLocal_473 = Local_110[0 /*14*/];
					unk_0x32D18ECD9E6F9BE2(Local_110[4 /*14*/]);
					unk_0x32D18ECD9E6F9BE2(Local_110[0 /*14*/]);
					unk_0x32D18ECD9E6F9BE2(Local_110[5 /*14*/]);
					unk_0xEF5DFB41E5585C16(Local_93[0 /*2*/], 4f, 1, 0);
					unk_0xEF5DFB41E5585C16(Local_93[1 /*2*/], 4f, 1, 0);
					unk_0xEF5DFB41E5585C16(Local_93[2 /*2*/], 4f, 1, 0);
					unk_0xF87DA7F5BA8C7D0F(&uLocal_445);
					if (unk_0x827151D7B70CB853(Local_110[0 /*14*/], 0))
					{
						unk_0xF811299AF81DB581(0, 0, 65536);
					}
					unk_0x1E0FCE815D17DDA5(0, unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), 1000, 0, 1);
					unk_0x5F14A4E9A3FB84D9(0, unk_0x9F92518438215DD0(), unk_0x9F92518438215DD0(), 1f, 0, 3f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
					unk_0xF58859AEB2D983FE(0, unk_0x9F92518438215DD0(), -1, 0);
					unk_0x3179CCC77CBAB31F(uLocal_445);
					unk_0xC7EBE3C9AC83FAAA(Local_110[0 /*14*/], uLocal_445);
					unk_0xCD02E3C29B8253A6(&uLocal_445);
					iLocal_432 = 1;
				}
				else if (fLocal_1480[0] > 1.5f)
				{
					iLocal_473 = Local_110[4 /*14*/];
					unk_0x32D18ECD9E6F9BE2(Local_110[4 /*14*/]);
					unk_0x32D18ECD9E6F9BE2(Local_110[0 /*14*/]);
					unk_0x32D18ECD9E6F9BE2(Local_110[5 /*14*/]);
					unk_0xEF5DFB41E5585C16(Local_93[0 /*2*/], 4f, 1, 0);
					unk_0xEF5DFB41E5585C16(Local_93[1 /*2*/], 4f, 1, 0);
					unk_0xEF5DFB41E5585C16(Local_93[2 /*2*/], 4f, 1, 0);
					unk_0xF87DA7F5BA8C7D0F(&uLocal_445);
					if (unk_0x827151D7B70CB853(Local_110[4 /*14*/], 0))
					{
						unk_0xF811299AF81DB581(0, 0, 65536);
					}
					unk_0x1E0FCE815D17DDA5(0, unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), 1000, 0, 1);
					unk_0x5F14A4E9A3FB84D9(0, unk_0x9F92518438215DD0(), unk_0x9F92518438215DD0(), 1f, 0, 3f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
					unk_0xF58859AEB2D983FE(0, unk_0x9F92518438215DD0(), -1, 0);
					unk_0x3179CCC77CBAB31F(uLocal_445);
					unk_0xC7EBE3C9AC83FAAA(Local_110[4 /*14*/], uLocal_445);
					unk_0xCD02E3C29B8253A6(&uLocal_445);
					iLocal_432 = 1;
				}
				else if (fLocal_1480[2] > 1.5f)
				{
					iLocal_473 = Local_110[5 /*14*/];
					unk_0x32D18ECD9E6F9BE2(Local_110[4 /*14*/]);
					unk_0x32D18ECD9E6F9BE2(Local_110[0 /*14*/]);
					unk_0x32D18ECD9E6F9BE2(Local_110[5 /*14*/]);
					unk_0xEF5DFB41E5585C16(Local_93[0 /*2*/], 4f, 1, 0);
					unk_0xEF5DFB41E5585C16(Local_93[1 /*2*/], 4f, 1, 0);
					unk_0xEF5DFB41E5585C16(Local_93[2 /*2*/], 4f, 1, 0);
					unk_0xF87DA7F5BA8C7D0F(&uLocal_445);
					if (unk_0x827151D7B70CB853(Local_110[5 /*14*/], 0))
					{
						unk_0xF811299AF81DB581(0, 0, 65536);
					}
					unk_0x1E0FCE815D17DDA5(0, unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), 1000, 0, 1);
					unk_0x5F14A4E9A3FB84D9(0, unk_0x9F92518438215DD0(), unk_0x9F92518438215DD0(), 1f, 0, 3f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
					unk_0xF58859AEB2D983FE(0, unk_0x9F92518438215DD0(), -1, 0);
					unk_0x3179CCC77CBAB31F(uLocal_445);
					unk_0xC7EBE3C9AC83FAAA(Local_110[5 /*14*/], uLocal_445);
					unk_0xCD02E3C29B8253A6(&uLocal_445);
					iLocal_432 = 1;
				}
				else
				{
					if ((unk_0x827151D7B70CB853(Local_110[5 /*14*/], 0) && unk_0x827151D7B70CB853(Local_110[0 /*14*/], 0)) && unk_0x827151D7B70CB853(Local_110[4 /*14*/], 0))
					{
						if (!unk_0xA9F3D2C5FC57B2A8(Local_93[1 /*2*/]))
						{
							unk_0x788DEE284D8ADED5(Local_110[0 /*14*/], Local_93[1 /*2*/], &cLocal_474, 786603, 0, 24, -1, 11f, 0, 1073741824);
						}
						if (unk_0xE962BD784DD0E442(Local_110[4 /*14*/], -1273030092) != 1)
						{
							unk_0xC6C4308CDA4C206C(Local_110[4 /*14*/], Local_93[0 /*2*/], Local_93[1 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
						}
						if (unk_0xE962BD784DD0E442(Local_110[5 /*14*/], -1273030092) != 1)
						{
							unk_0xC6C4308CDA4C206C(Local_110[5 /*14*/], Local_93[2 /*2*/], Local_93[0 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
						}
						unk_0x8E3D21DD9DF89D6D(Local_93[0 /*2*/], 1);
						unk_0x725E778CAAC02284(Local_93[0 /*2*/], 1);
						unk_0xEDA4573144FC2A97(Local_93[0 /*2*/], 1);
						unk_0x8E3D21DD9DF89D6D(Local_93[1 /*2*/], 1);
						unk_0x725E778CAAC02284(Local_93[1 /*2*/], 1);
						unk_0xEDA4573144FC2A97(Local_93[1 /*2*/], 1);
						unk_0x8E3D21DD9DF89D6D(Local_93[2 /*2*/], 1);
						unk_0x725E778CAAC02284(Local_93[2 /*2*/], 1);
						unk_0xEDA4573144FC2A97(Local_93[2 /*2*/], 1);
					}
					iLocal_472 = unk_0x17103F66FBB44C3C();
				}
				break;
			
			case 1:
				switch (iLocal_471)
				{
					case 0:
						if (!unk_0x827151D7B70CB853(iLocal_473, 0))
						{
							func_28(&uLocal_237, 1, iLocal_473, "Armyped", 0, 1);
							iLocal_472 = unk_0x17103F66FBB44C3C();
							fLocal_1480[1] = 0f;
							fLocal_1480[2] = 0f;
							fLocal_1480[0] = 0f;
							iLocal_471++;
						}
						break;
					
					case 1:
						if ((unk_0x17103F66FBB44C3C() - iLocal_472) > 8000 && !func_9())
						{
							if (!unk_0x827151D7B70CB853(iLocal_473, 0))
							{
								func_28(&uLocal_237, 1, iLocal_473, "Armyped", 0, 1);
								if (iLocal_457)
								{
									iLocal_457 = 0;
								}
								else
								{
									iLocal_472 = unk_0x17103F66FBB44C3C();
									iLocal_471++;
								}
							}
						}
						break;
					
					case 2:
						if ((unk_0x17103F66FBB44C3C() - iLocal_472) > 8000 && !func_9())
						{
							if (!unk_0x827151D7B70CB853(iLocal_473, 0))
							{
								func_28(&uLocal_237, 1, iLocal_473, "Armyped", 0, 1);
								if (iLocal_457)
								{
									iLocal_457 = 0;
								}
								else
								{
									iLocal_472 = unk_0x17103F66FBB44C3C();
									iLocal_471++;
								}
							}
						}
						break;
					
					case 3:
						if ((unk_0x17103F66FBB44C3C() - iLocal_472) > 8000 && !func_9())
						{
							if (!unk_0x827151D7B70CB853(iLocal_473, 0))
							{
								func_28(&uLocal_237, 1, iLocal_473, "Armyped", 0, 1);
								if (iLocal_457)
								{
									iLocal_457 = 0;
								}
								else
								{
									unk_0xF87DA7F5BA8C7D0F(&uLocal_445);
									unk_0xA1C6A9C4761FB17A(0, unk_0x20CBCBD58A2C73B4(unk_0x9F92518438215DD0(), 0.5f, 0f, -1f), 1000, 1566631136);
									unk_0x5F14A4E9A3FB84D9(0, unk_0x9F92518438215DD0(), unk_0x9F92518438215DD0(), 1f, 0, 4f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
									unk_0xF58859AEB2D983FE(0, unk_0x9F92518438215DD0(), -1, 0);
									unk_0x3179CCC77CBAB31F(uLocal_445);
									unk_0xC7EBE3C9AC83FAAA(iLocal_473, uLocal_445);
									unk_0xCD02E3C29B8253A6(&uLocal_445);
									iLocal_472 = unk_0x17103F66FBB44C3C();
									iLocal_467 = unk_0x17103F66FBB44C3C();
									iLocal_471++;
								}
							}
						}
						break;
					
					case 4:
						break;
				}
				if ((!unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), Var0, Var3, 9f, 0, 1, 0) && !unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), Var6, Var9, 9f, 0, 1, 0)) && !unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), Var12, Var15, 9f, 0, 1, 0))
				{
					if (unk_0xE962BD784DD0E442(iLocal_473, 1630799643) != 1)
					{
						unk_0xF58859AEB2D983FE(iLocal_473, unk_0x9F92518438215DD0(), -1, 0);
					}
					if (unk_0x83666F9FB8FEBD4B() > 3000)
					{
						if (!unk_0x827151D7B70CB853(iLocal_473, 0))
						{
							if (iLocal_473 == Local_110[4 /*14*/])
							{
								unk_0x4073360CA020BB84(iLocal_473, Local_93[0 /*2*/], 20000, -1, 2f, 1, 0);
							}
							else if (iLocal_473 == Local_110[0 /*14*/])
							{
								unk_0x4073360CA020BB84(iLocal_473, Local_93[1 /*2*/], 20000, -1, 2f, 1, 0);
							}
							else if (iLocal_473 == Local_110[5 /*14*/])
							{
								unk_0x4073360CA020BB84(iLocal_473, Local_93[2 /*2*/], 20000, -1, 2f, 1, 0);
							}
						}
						iLocal_432 = 2;
					}
				}
				else
				{
					if (iLocal_471 == 4)
					{
						if ((unk_0x17103F66FBB44C3C() - iLocal_472) > 9000 && !func_9())
						{
							bLocal_455 = true;
						}
					}
					unk_0xC1B1E9A034A63A62(0);
				}
				break;
			
			case 2:
				if ((unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), Var0, Var3, 9f, 0, 1, 0) || unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), Var6, Var9, 9f, 0, 1, 0)) || unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), Var12, Var15, 9f, 0, 1, 0))
				{
					iLocal_457 = 0;
					iLocal_432 = 0;
				}
				else if (unk_0x827151D7B70CB853(iLocal_473, 0))
				{
					unk_0xC6C4308CDA4C206C(Local_110[4 /*14*/], Local_93[0 /*2*/], Local_93[1 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
					unk_0x788DEE284D8ADED5(Local_110[0 /*14*/], Local_93[1 /*2*/], &cLocal_474, 786603, 0, 24, -1, 11f, 0, 1073741824);
					unk_0xC6C4308CDA4C206C(Local_110[5 /*14*/], Local_93[2 /*2*/], Local_93[0 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
					iLocal_457 = 1;
					iLocal_432 = 0;
				}
				break;
			}
	}
}

void func_176(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_54751 = 0;
	if (!Global_54975[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_66845)
	{
		if (Global_66846[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_66846[iVar1 /*9*/].f_1 = 1;
			Global_66846[iVar1 /*9*/].f_2 = 0f;
			if (Global_66846[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

int func_177(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xE962BD784DD0E442(uParam0, iParam1);
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

void func_178(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_66845)
	{
		if (Global_66846[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_66846[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_66846[iVar0 /*9*/].f_1 = (Global_66846[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_66846[iVar0 /*9*/] != -1)
	{
		if (Global_54975[Global_66846[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_66846[iVar0 /*9*/].f_1 > 1)
			{
				Global_66846[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_66846[iVar0 /*9*/].f_1 < 0)
			{
				Global_66846[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

int func_179(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0x2563F6EECD8726D3();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x3E0478C40AB5B38D(iParam0))
	{
		if (!unk_0x1E340411F75B44FE(iParam0))
		{
			unk_0x27C3EE559D11736B(iParam0, 1);
			uParam1->f_7 = iParam0;
			unk_0x133C33898A6B7C79(iParam0, iParam2);
			unk_0x6B5627EADD89528C(iParam0, fParam6);
			if (unk_0x2E6E8D325977B3EC(*uParam1))
			{
				unk_0x15DE80E4F3BF69A9(*uParam1, 7);
			}
		}
		unk_0x033F95F6DD2BC600(iParam0, iParam4);
		unk_0x9918D2663AD80E71(iParam0, iParam5);
		*uParam1 = unk_0xD7BCCE63E1CFE522(iParam0);
		if (!unk_0x94E72F17611BCD3C(uParam1->f_6, 2))
		{
			if (unk_0x2E6E8D325977B3EC(*uParam1))
			{
				if (!unk_0x9E9AFDBF482248F6(iParam7))
				{
					unk_0x6398AE6DC472AD55("MCUSTBLIP");
					unk_0x7FAFF3E791AF486A(iParam7);
					unk_0x6421BFEE42CFEB56(*uParam1);
				}
				unk_0xEDB9A377CD8B7F03(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x827151D7B70CB853(iParam0, 0))
		{
			uParam1->f_1 = unk_0xDB36DF958B95DEBD(iParam0);
			if (!unk_0x94E72F17611BCD3C(uParam1->f_6, 3))
			{
				if (unk_0x2E6E8D325977B3EC(uParam1->f_1))
				{
					unk_0x15DE80E4F3BF69A9(uParam1->f_1, 7);
					unk_0xEDB9A377CD8B7F03(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0x2E6E8D325977B3EC(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0xF76EE56D3E7DAF1B(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_180(var uParam0)
{
	if (unk_0xFC38B241541883D3(*uParam0, 0))
	{
		if (((unk_0xED6198B6F71F1E6F(*uParam0, 0, 7000) || unk_0xED6198B6F71F1E6F(*uParam0, 3, 30000)) || unk_0xED6198B6F71F1E6F(*uParam0, 2, 30000)) || unk_0xED6198B6F71F1E6F(*uParam0, 1, 40000))
		{
			return 1;
		}
	}
	return 0;
}

void func_181(var uParam0)
{
	if (unk_0x746960881FB19A89(*uParam0))
	{
		unk_0x0BA451447C3B1A8D(*uParam0);
		if (unk_0x34E74FF8690AA4B1(*uParam0) && unk_0xAD2C236C4A4B83C9(*uParam0, 1))
		{
			unk_0x9187463EB4918A4D(uParam0);
		}
	}
}

void func_182(int iParam0)
{
	char* sVar0;
	
	unk_0xDD74AAB135833BB7("RHP1_FAIL");
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
	func_184(sVar0);
	while (!func_183())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	iLocal_446 = 0;
	while (iLocal_446 <= (2 - 1))
	{
		if (unk_0x746960881FB19A89(uLocal_107[iLocal_446]))
		{
			unk_0x83A49C880CB75451(&(uLocal_107[iLocal_446]));
		}
		iLocal_446++;
	}
	func_310();
	unk_0xE60DEFFB2A853900();
}

int func_183()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_89962 == 7 || Global_89962 == 8)
	{
		return 1;
	}
	return 0;
}

void func_184(char* sParam0)
{
	func_192(sParam0);
	func_185(0);
}

void func_185(int iParam0)
{
	int iVar0;
	
	if (Global_97358.f_7341 || func_7(0))
	{
		iVar0 = func_5();
		if (!func_186(iVar0))
		{
			return;
		}
		unk_0xEDB9A377CD8B7F03(&(Global_81119[iVar0 /*5*/].f_1), 5);
		Global_89998 = iParam0;
	}
}

int func_186(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_191();
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		unk_0xCAA0281E6A11043A(5000);
	}
	iVar0 = Global_81119[iParam0 /*5*/];
	iVar1 = Global_68514.f_109[iVar0 /*4*/];
	func_190(iVar1, 1);
	unk_0x320C8BBD2C1A6707(unk_0xCFC72E446B0B3AD7());
	unk_0x5693ADD6BB9E1E5D(unk_0xCFC72E446B0B3AD7());
	func_187(&(Global_97358.f_1729.f_539), iVar1);
	if (Global_84542 == Global_89999)
	{
		Global_97358.f_7341.f_328[iVar1 /*6*/].f_1++;
	}
	if (!unk_0x94E72F17611BCD3C(Global_81155[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			unk_0xA72771FACCC85FF7(0);
		}
	}
	Global_97358.f_7341.f_328[iVar1 /*6*/].f_2++;
	Global_84542 = Global_89999;
	if (iParam0 == -1)
	{
		if (Global_97358.f_7341)
		{
		}
		return 0;
	}
	if (unk_0x94E72F17611BCD3C(Global_81119[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0x94E72F17611BCD3C(Global_81119[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_187(var uParam0, int iParam1)
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
		iVar1 = Global_97358.f_16787[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0x94E72F17611BCD3C(Global_97358.f_7341.f_99.f_217[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_189(Global_97358.f_16787[iVar0], &Var2, &fVar5))
			{
				Global_97358.f_16787[iVar0] = 318;
				func_188(&(uParam0->f_1524[iVar0]));
				uParam0->f_1528[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1538[iVar0] = 0f;
				uParam0->f_1542[iVar0] = 0;
				uParam0->f_1546[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1556[iVar0] = 0;
				Global_87757[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_87757[iVar0 /*29*/].f_9 = 0f;
				Global_87757[iVar0 /*29*/].f_12 = 0f;
				Global_87757[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_87757[iVar0 /*29*/].f_10 = 0f;
				Global_87757[iVar0 /*29*/].f_13 = 0f;
				Global_87757[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_87757[iVar0 /*29*/].f_11 = 0f;
				Global_87757[iVar0 /*29*/].f_14 = 0f;
				Global_87757[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_87757[iVar0 /*29*/].f_26 = 0f;
				Global_87757[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_87757[iVar0 /*29*/].f_27 = 0f;
				Global_87757[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_87757[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_188(var uParam0)
{
	*uParam0 = -15;
}

int func_189(int iParam0, var uParam1, float fParam2)
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
			return func_189(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_189(8, uParam1, fParam2);
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

void func_190(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_84352[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_84352[iParam0 /*2*/] = 0;
	}
}

void func_191()
{
	Global_89997 = 1;
	if (unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1))
	{
		if (unk_0x9E9AFDBF482248F6(&Global_68477))
		{
			switch (func_19())
			{
				case 0:
					StringCopy(&Global_68477, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_68477, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_68477, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_68481, "", 16);
		}
		Global_89997 = 0;
	}
	else if (!unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		if (unk_0x9E9AFDBF482248F6(&Global_68477))
		{
			switch (func_19())
			{
				case 0:
					StringCopy(&Global_68477, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_68477, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_68477, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_68481, "", 16);
		}
		Global_89997 = 0;
		unk_0xEDB9A377CD8B7F03(&(Global_89962.f_20), 25);
	}
}

void func_192(char* sParam0)
{
	if (!unk_0x9E9AFDBF482248F6(sParam0))
	{
		if (unk_0x8D18B4E23D256BEF(sParam0) <= 16)
		{
			StringCopy(&Global_68477, sParam0, 16);
			StringCopy(&Global_68481, "", 16);
			if (unk_0xBCCAD0BC975853CA())
			{
				unk_0xF4C60640F016D830();
			}
		}
	}
}

void func_193(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x746960881FB19A89(*uParam0))
	{
		if (!unk_0x3E0478C40AB5B38D(*uParam0))
		{
			unk_0x512E0C109ACECCA1(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0x5B1A1DA8A0D20935(*uParam0);
			}
			unk_0xE8105B7E3908547D(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x4A1AC49BA4A747F7(*uParam0, 0);
			}
		}
		unk_0x995B3705D02B0401(uParam0);
	}
}

void func_194()
{
	struct<3> Var0;
	var uVar3;
	
	if (bLocal_1478 == 1)
	{
		if (iLocal_1473 == 0)
		{
			if (!unk_0x2E9CF5C574019636())
			{
				if (!unk_0x351E8373AE3D741D())
				{
					unk_0xC6EA7B53F52F1DF9(800);
				}
			}
			else
			{
				func_106(iLocal_1479);
			}
		}
		else if (iLocal_1473 == 3)
		{
			unk_0x42DDE752BB6A4CBA(0, 0, 3000, 1, 0, 0);
			unk_0xC70D4A06E38B2711(unk_0xCFC72E446B0B3AD7(), 1, 0);
			func_219();
			func_218(&uLocal_493);
			if (!func_217())
			{
				func_216(iLocal_1479, &Var0, &uVar3);
				unk_0xFA51DC22F6E34F6E(unk_0x9F92518438215DD0(), Var0, 1, 0, 0, 1);
				unk_0x03D97EDECF2E1859(unk_0x9F92518438215DD0(), uVar3);
				unk_0xD9B13F0A69759C12(unk_0x9F92518438215DD0(), 1);
				func_215(&uLocal_493, Var0, 50f, 0);
			}
			func_212(iLocal_1474);
			while (!func_208(&uLocal_493))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			switch (iLocal_1474)
			{
				case 0:
					func_207();
					break;
				
				case 1:
					func_202();
					break;
				
				case 2:
					func_201();
					break;
				
				case 3:
					func_195();
					break;
			}
			bLocal_1478 = false;
			if (!func_217())
			{
				unk_0xCBCE71C7693F1CF8();
			}
		}
	}
}

void func_195()
{
	func_199(1357.7f, 3618.28f, 33.8905f, 110.4135f);
	bLocal_455 = true;
	if (func_217())
	{
		func_196(0, -1, 1);
	}
	else
	{
		unk_0xD9B13F0A69759C12(unk_0x9F92518438215DD0(), 0);
	}
}

void func_196(int iParam0, int iParam1, int iParam2)
{
	if (func_198() && func_217())
	{
		while (Global_89957 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xAA7F469826C4FBBF(0);
		if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
		{
			if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
			{
				unk_0x78977FAFD85647FF(unk_0x9F92518438215DD0());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
			{
				if (unk_0x746960881FB19A89(iParam0))
				{
					if (unk_0xFC38B241541883D3(iParam0, 0))
					{
						if (!unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iParam0, 0))
						{
							unk_0x4DB6897DB04DE279(unk_0x9F92518438215DD0(), iParam0, iParam1);
							unk_0x203B2685C1715644(0f, 1065353216);
							unk_0x5EF916489F3787FC(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
			{
				unk_0xC70D4A06E38B2711(unk_0xCFC72E446B0B3AD7(), 1, 0);
			}
		}
		unk_0x91ED7859295E99BE();
		func_197(0);
	}
}

void func_197(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xEDB9A377CD8B7F03(&(Global_89962.f_20), 13);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_89962.f_20), 13);
	}
}

int func_198()
{
	if (Global_89962 == 10 || Global_89962 == 9)
	{
		return 1;
	}
	return 0;
}

void func_199(struct<3> Param0, float fParam3)
{
	Local_93[0 /*2*/] = unk_0xB0694AD0A3BB8936(joaat("barracks"), Param0, fParam3, 1, 1);
	unk_0x5C66176FC9E6724C(Local_93[0 /*2*/], unk_0xFD181DDA4D8D6786(Local_93[0 /*2*/]) * 2);
	unk_0x17E8CB2415E3DCFE(Local_93[0 /*2*/], 1);
	unk_0x8063FF52148C1749(Local_93[0 /*2*/], (unk_0x9D878480FA8925BB(Local_93[0 /*2*/]) * 2f));
	unk_0x24684552CCA91DE0(Local_93[0 /*2*/], 0);
	unk_0x76DD68AB949475D7(Local_93[0 /*2*/], (unk_0x5252DDFA0FA75C54(Local_93[0 /*2*/]) * 2f));
	unk_0x629271E0FB6556E2(Local_93[0 /*2*/], 0);
	unk_0x7FAB46C418640A64(Local_93[0 /*2*/], 0);
	unk_0x4CADBE993729D2BE(Local_93[0 /*2*/], 1);
	unk_0x003E17A8BE5EA5B6(Local_93[0 /*2*/], 0, 0);
	func_200(Local_93[0 /*2*/], 0);
	uLocal_107[0] = unk_0xA7DA1E6D4C99864B(joaat("prop_mil_crate_01"), 1006.765f, 2128.32f, 48.0929f, 1, 1, 0);
	unk_0x80BA810554025DFF(uLocal_107[0], Local_93[0 /*2*/], 0, 0f, -0.5f, 1.5f, 0f, 0f, -90f, 0, 0, 0, 0, 2, 1);
	uLocal_107[1] = unk_0xA7DA1E6D4C99864B(joaat("prop_mil_crate_01"), 1006.765f, 2128.32f, 48.0929f, 1, 1, 0);
	unk_0x80BA810554025DFF(uLocal_107[1], Local_93[0 /*2*/], 0, 0f, -2.85f, 1.5f, 0f, 0f, -90f, 0, 0, 0, 0, 2, 1);
	unk_0x060D3260330D112D(Local_93[0 /*2*/], "PS_PREP_VEHICLES_GROUP", 0);
}

void func_200(var uParam0, int iParam1)
{
	Global_89962.f_22[iParam1] = uParam0;
}

void func_201()
{
	func_199(-248.6621f, 2950.037f, 28.9996f, 93.5394f);
	bLocal_455 = true;
	if (func_217())
	{
		func_196(0, -1, 1);
	}
	else
	{
		unk_0xD9B13F0A69759C12(unk_0x9F92518438215DD0(), 0);
	}
}

void func_202()
{
	int iVar0;
	
	func_206(-284.0175f, 2949.104f, 28.3715f, 46.1483f);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_205(iVar0, Local_93[1 /*2*/]);
		func_204(Local_110[iVar0 /*14*/], 0);
		iVar0++;
	}
	func_199(-248.6621f, 2950.037f, 28.9996f, 93.5394f);
	func_203(-223.1415f, 2952.188f, 28.8053f, 121.2339f);
	iVar0 = 5;
	while (iVar0 <= 8)
	{
		func_205(iVar0, Local_93[2 /*2*/]);
		func_204(Local_110[iVar0 /*14*/], 0);
		iVar0++;
	}
	bLocal_455 = true;
	if (func_217())
	{
		func_196(0, -1, 1);
	}
	else
	{
		unk_0xD9B13F0A69759C12(unk_0x9F92518438215DD0(), 0);
	}
}

void func_203(struct<3> Param0, float fParam3)
{
	Local_93[2 /*2*/] = unk_0xB0694AD0A3BB8936(joaat("crusader"), Param0, fParam3, 1, 1);
	unk_0x060D3260330D112D(Local_93[2 /*2*/], "PS_PREP_VEHICLES_GROUP", 0);
}

void func_204(int iParam0, bool bParam1)
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
			if (Global_54780[iVar0 /*2*/] != 0)
			{
				if (Global_54780[iVar0 /*2*/] == iParam0)
				{
					return;
				}
			}
			iVar0++;
		}
	}
	if (64 == Global_54779)
	{
		return;
	}
	iVar1 = -1;
	iVar2 = 0;
	while (iVar1 == -1 && iVar2 != 64)
	{
		if (Global_54780[iVar2 /*2*/] == 0)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 == -1)
	{
		return;
	}
	Global_54780[iVar1 /*2*/] = iParam0;
	Global_54780[iVar1 /*2*/].f_1 = 7;
	Global_54779++;
}

void func_205(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == Local_93[1 /*2*/] || iParam1 == Local_93[2 /*2*/])
	{
		iVar0 = joaat("s_m_y_marine_03");
	}
	else if (iParam1 == Local_93[0 /*2*/])
	{
		iVar0 = joaat("s_m_m_marine_01");
	}
	if ((iParam0 == 0 || iParam0 == 5) || iParam0 == 4)
	{
		iVar1 = -1;
		iLocal_450 = joaat("weapon_pistol");
	}
	else if (iParam0 == 1 || iParam0 == 6)
	{
		iVar1 = 0;
		iLocal_450 = joaat("weapon_carbinerifle");
	}
	else if (iParam0 == 2 || iParam0 == 7)
	{
		iVar1 = 1;
		iLocal_450 = joaat("weapon_smg");
	}
	else if (iParam0 == 3 || iParam0 == 8)
	{
		iVar1 = 2;
		iLocal_450 = joaat("weapon_carbinerifle");
	}
	Local_110[iParam0 /*14*/] = unk_0xAD7526C9AA33EE39(iParam1, 26, iVar0, iVar1, 1, 1);
	unk_0xA50AD6983D49A772(Local_110[iParam0 /*14*/], iLocal_492);
	unk_0x66ECAC609810906D(Local_110[iParam0 /*14*/], 1);
	unk_0x46D3B8FF073CD238(Local_110[iParam0 /*14*/], iLocal_450, -1, 1, 1);
	unk_0x46D3B8FF073CD238(Local_110[iParam0 /*14*/], joaat("weapon_pistol"), -1, 1, 1);
	unk_0x2CFB119825A2B9F1(Local_110[iParam0 /*14*/], 0);
	unk_0xB27BF64B02C0107E(Local_110[iParam0 /*14*/], 2, 1, 0, 0);
	unk_0x0D51BC85F29E0C96(Local_110[iParam0 /*14*/], 1);
	unk_0x79C17B0FEABE87FB(Local_110[iParam0 /*14*/], 1);
	unk_0x64277E0EB39C1162(Local_110[iParam0 /*14*/], 0, 1);
	unk_0x64277E0EB39C1162(Local_110[iParam0 /*14*/], 1, 0);
	unk_0x9A43E575C1997EF8(Local_110[iParam0 /*14*/], 1);
	unk_0x9001FCB58244C11D(Local_110[iParam0 /*14*/], 184, 1);
	unk_0x9001FCB58244C11D(Local_110[iParam0 /*14*/], 272, 1);
	unk_0x5E4D9888EEC3124B(Local_110[iParam0 /*14*/], 1);
	unk_0x512E0C109ACECCA1(Local_110[iParam0 /*14*/], 1);
	unk_0x488909512824324E(Local_110[iParam0 /*14*/], 10);
	unk_0x4A1AC49BA4A747F7(Local_110[iParam0 /*14*/], 1);
	Local_110[iParam0 /*14*/].f_10 = 0;
}

void func_206(struct<3> Param0, float fParam3)
{
	Local_93[1 /*2*/] = unk_0xB0694AD0A3BB8936(joaat("crusader"), Param0, fParam3, 1, 1);
	unk_0x060D3260330D112D(Local_93[1 /*2*/], "PS_PREP_VEHICLES_GROUP", 0);
}

void func_207()
{
	int iVar0;
	
	if (!func_31(Local_93[1 /*2*/]))
	{
		func_206(996.9448f, 2140.02f, 47.9112f, 39.7091f);
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!func_31(Local_110[iVar0 /*14*/]))
		{
			func_205(iVar0, Local_93[1 /*2*/]);
			func_204(Local_110[iVar0 /*14*/], 0);
			if (iVar0 == 0)
			{
				unk_0x788DEE284D8ADED5(Local_110[0 /*14*/], Local_93[1 /*2*/], &cLocal_474, 786603, 0, 24, -1, 11f, 0, 1073741824);
			}
		}
		iVar0++;
	}
	if (!func_31(Local_93[0 /*2*/]))
	{
		func_199(1006.765f, 2128.32f, 48.0929f, 39.898f);
	}
	if (!func_31(Local_110[4 /*14*/]))
	{
		func_205(4, Local_93[0 /*2*/]);
		unk_0xC6C4308CDA4C206C(Local_110[4 /*14*/], Local_93[0 /*2*/], Local_93[1 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
		func_204(Local_110[4 /*14*/], 0);
	}
	if (!func_31(Local_93[2 /*2*/]))
	{
		func_203(1018.995f, 2112.951f, 48.4754f, 34.6812f);
	}
	iVar0 = 5;
	while (iVar0 <= 8)
	{
		if (!func_31(Local_110[iVar0 /*14*/]))
		{
			func_205(iVar0, Local_93[2 /*2*/]);
			func_204(Local_110[iVar0 /*14*/], 0);
			if (iVar0 == 5)
			{
				unk_0xC6C4308CDA4C206C(Local_110[5 /*14*/], Local_93[2 /*2*/], Local_93[0 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
			}
		}
		iVar0++;
	}
	if (func_217())
	{
		func_196(0, -1, 1);
	}
	else
	{
		unk_0xD9B13F0A69759C12(unk_0x9F92518438215DD0(), 0);
	}
}

int func_208(var uParam0)
{
	if (func_209(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_209(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_977)
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if ((*uParam0)[iVar1 /*5*/])
			{
				if (!(uParam0[iVar1 /*5*/])->f_1)
				{
					if (unk_0x149162179DBAEDB0((uParam0[iVar1 /*5*/])->f_4))
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
						unk_0x0880E86251A44B7F((uParam0[iVar1 /*5*/])->f_4);
						func_211(uParam0[iVar1 /*5*/]);
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
					if (unk_0x3DA2EED4204CE591(uParam0->f_273[iVar1 /*5*/].f_4))
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
						unk_0xE29F0AC6C728DD9C(uParam0->f_273[iVar1 /*5*/].f_4);
						func_211(&(uParam0->f_273[iVar1 /*5*/]));
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
					if (unk_0x2922F456A375F556(uParam0->f_374[iVar1 /*5*/].f_4))
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
						unk_0x39881B5994C9278A(uParam0->f_374[iVar1 /*5*/].f_4);
						func_211(&(uParam0->f_374[iVar1 /*5*/]));
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
					if (unk_0x5E3461E729DA646E(uParam0->f_656[iVar1 /*6*/].f_5))
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
						unk_0x76D57BAF1F432EA7(&(uParam0->f_656[iVar1 /*6*/].f_5));
						func_211(&(uParam0->f_656[iVar1 /*6*/]));
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
					if (unk_0x381FCADDEA0C040B(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4))
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
						unk_0x6AC537DA214AB66E(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4);
						func_211(&(uParam0->f_475[iVar1 /*6*/]));
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
					if (unk_0x6CD363DB0732D894(uParam0->f_202[iVar1 /*7*/].f_4))
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
						unk_0xC28886295FF2F8D1(uParam0->f_202[iVar1 /*7*/].f_4);
						func_211(&(uParam0->f_202[iVar1 /*7*/]));
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
					if (unk_0xA47ACCCE5495BCDB(uParam0->f_151[iVar1 /*5*/].f_4))
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
						unk_0x789B551AB7557D47(uParam0->f_151[iVar1 /*5*/].f_4);
						func_211(&(uParam0->f_151[iVar1 /*5*/]));
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
					if (unk_0xEC2376DA57EC68E1(uParam0->f_737[iVar1 /*5*/].f_4, 0))
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
						unk_0x52AD825A68D804AA(uParam0->f_737[iVar1 /*5*/].f_4);
						func_211(&(uParam0->f_737[iVar1 /*5*/]));
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
					if (unk_0x7CE60248D6135E74(uParam0->f_763[iVar1 /*5*/].f_4))
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
						unk_0xC70BF1179D8B6A50(uParam0->f_763[iVar1 /*5*/].f_4);
						func_211(&(uParam0->f_763[iVar1 /*5*/]));
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
			if (!unk_0x9E9AFDBF482248F6(uParam0->f_687[iVar1 /*7*/].f_4))
			{
				if (uParam0->f_687[iVar1 /*7*/])
				{
					iVar2 = unk_0xCD28C430999D61D5(uParam0->f_687[iVar1 /*7*/].f_5);
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
								func_211(&(uParam0->f_687[iVar1 /*7*/]));
								break;
							
							case -1:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								unk_0x76ED1949FC2BDF2E(uParam0->f_687[iVar1 /*7*/].f_5);
								uParam0->f_687[iVar1 /*7*/] = 0;
								bVar0 = false;
								break;
							}
					}
				}
				else if (unk_0x7CE60248D6135E74(uParam0->f_687[iVar1 /*7*/].f_6))
				{
					uParam0->f_687[iVar1 /*7*/].f_5 = unk_0x5ECE86CEB630A3EC(uParam0->f_687[iVar1 /*7*/].f_4);
					uParam0->f_687[iVar1 /*7*/].f_3 = unk_0x17103F66FBB44C3C();
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
							unk_0x76ED1949FC2BDF2E(uParam0->f_687[iVar1 /*7*/].f_5);
							func_211(&(uParam0->f_687[iVar1 /*7*/]));
							uParam0->f_687[iVar1 /*7*/].f_4 = "";
						}
						else
						{
							bVar0 = false;
						}
					}
					else
					{
						func_211(&(uParam0->f_687[iVar1 /*7*/]));
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_874[iVar1 /*5*/])
			{
				if (!uParam0->f_874[iVar1 /*5*/].f_1)
				{
					if (unk_0xA75D7BB80A73A99F(uParam0->f_874[iVar1 /*5*/].f_4))
					{
						uParam0->f_874[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_874[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_874[iVar1 /*5*/].f_1)
					{
						unk_0xE81F06416A2D18E9(uParam0->f_874[iVar1 /*5*/].f_4);
						func_211(&(uParam0->f_874[iVar1 /*5*/]));
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
			if (uParam0->f_925[iVar1 /*5*/])
			{
				if (!uParam0->f_925[iVar1 /*5*/].f_1)
				{
					if (unk_0x73FB869BE04A52C1(uParam0->f_925[iVar1 /*5*/].f_4))
					{
						uParam0->f_925[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_925[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_925[iVar1 /*5*/].f_1)
					{
						func_211(&(uParam0->f_925[iVar1 /*5*/]));
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
					if (unk_0x7DE7B5897062BC2C(iVar1))
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
						unk_0x84FBD0BE7CDBEEA2(iVar1, 1);
						func_211(&(uParam0->f_779[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (uParam0->f_855)
		{
			if (!uParam0->f_855.f_1)
			{
				if (unk_0x3749C5550F0953F2())
				{
					uParam0->f_855.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_855.f_2)
			{
				if (uParam0->f_855.f_1)
				{
					unk_0xC3CD8798C7C83A3D();
					func_211(&(uParam0->f_855));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_859)
		{
			if (!uParam0->f_859.f_1)
			{
				if (unk_0x5AA01630CC34708F())
				{
					uParam0->f_859.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_859.f_2)
			{
				if (uParam0->f_859.f_1)
				{
					unk_0x16B300561951DD6C();
					func_211(&(uParam0->f_859));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_863 && unk_0x1032ED345FD7DD26())
		{
			if (!uParam0->f_863.f_1)
			{
				if (unk_0xDB4BFE4AA6FE81F6())
				{
					uParam0->f_863.f_1 = 1;
					if (uParam0->f_978)
					{
						unk_0xD9B13F0A69759C12(unk_0x9F92518438215DD0(), 0);
						func_210(uParam0);
						uParam0->f_978 = 0;
					}
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_863.f_2)
			{
				unk_0xCBCE71C7693F1CF8();
				func_211(&(uParam0->f_863));
			}
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_951[iVar1 /*5*/])
			{
				if (!uParam0->f_951[iVar1 /*5*/].f_1)
				{
					if (unk_0x48125D4CA17FF2F9(uParam0->f_951[iVar1 /*5*/].f_4))
					{
						uParam0->f_951[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_951[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_951[iVar1 /*5*/].f_1)
					{
						func_211(&(uParam0->f_951[iVar1 /*5*/]));
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
			uParam0->f_977 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_210(var uParam0)
{
	if (unk_0x1032ED345FD7DD26())
	{
		unk_0xCBCE71C7693F1CF8();
		func_211(&(uParam0->f_863));
	}
}

void func_211(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
}

void func_212(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_214(&uLocal_493, joaat("s_m_m_marine_01"));
			func_214(&uLocal_493, joaat("s_m_y_marine_03"));
			func_214(&uLocal_493, joaat("crusader"));
			func_214(&uLocal_493, joaat("barracks"));
			func_213(&uLocal_493, &cLocal_474);
			func_214(&uLocal_493, joaat("prop_mil_crate_01"));
			break;
		
		case 1:
			func_214(&uLocal_493, joaat("s_m_y_marine_03"));
			func_214(&uLocal_493, joaat("s_m_m_marine_01"));
			func_214(&uLocal_493, joaat("crusader"));
			func_214(&uLocal_493, joaat("barracks"));
			func_214(&uLocal_493, joaat("prop_mil_crate_01"));
			break;
		
		case 2:
		case 3:
			func_214(&uLocal_493, joaat("barracks"));
			func_214(&uLocal_493, joaat("prop_mil_crate_01"));
			break;
	}
}

int func_213(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x9E9AFDBF482248F6(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_374)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			if (unk_0x6B08EC9A88700FBB(uParam0->f_374[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_374[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_374[iVar0 /*5*/].f_1)
				{
					uParam0->f_977 = 1;
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
		unk_0x33733EEE6375F985(sParam1);
		uParam0->f_374[iVar1 /*5*/] = 1;
		uParam0->f_374[iVar1 /*5*/].f_3 = unk_0x17103F66FBB44C3C();
		uParam0->f_374[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_977 = 1;
		return 1;
	}
	return 0;
}

int func_214(var uParam0, int iParam1)
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
					uParam0->f_977 = 1;
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
		unk_0x3BC6D217451D6BB7(iParam1);
		(*uParam0)[iVar1 /*5*/] = 1;
		(uParam0[iVar1 /*5*/])->f_3 = unk_0x17103F66FBB44C3C();
		(uParam0[iVar1 /*5*/])->f_4 = iParam1;
		uParam0->f_977 = 1;
		return 1;
	}
	return 0;
}

int func_215(var uParam0, struct<3> Param1, float fParam4, int iParam5)
{
	if (func_174(Param1) || fParam4 <= 0f)
	{
		return 0;
	}
	if (uParam0->f_863)
	{
		if (func_130(uParam0->f_863.f_4, Param1) && uParam0->f_863.f_10 == fParam4)
		{
			uParam0->f_863.f_2 = 0;
			if (!uParam0->f_863.f_1)
			{
				uParam0->f_977 = 1;
				return 1;
			}
			else
			{
				return 1;
			}
		}
	}
	unk_0xCAAFDFC79915F064(Param1, fParam4, iParam5);
	uParam0->f_863 = 1;
	uParam0->f_863.f_3 = unk_0x17103F66FBB44C3C();
	uParam0->f_863.f_4 = { Param1 };
	uParam0->f_863.f_7 = { 0f, 0f, 0f };
	uParam0->f_863.f_10 = fParam4;
	uParam0->f_977 = 1;
	return 1;
}

void func_216(int iParam0, var uParam1, var uParam2)
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

bool func_217()
{
	return unk_0x94E72F17611BCD3C(Global_89962.f_20, 13);
}

void func_218(var uParam0)
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
		if (uParam0->f_874[iVar0 /*5*/])
		{
			uParam0->f_874[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_925[iVar0 /*5*/])
		{
			uParam0->f_925[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (uParam0->f_779[iVar0 /*5*/])
		{
			uParam0->f_779[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	if (uParam0->f_863)
	{
		uParam0->f_863.f_2 = 1;
	}
	if (uParam0->f_855)
	{
		uParam0->f_855.f_2 = 1;
	}
	if (uParam0->f_859)
	{
		uParam0->f_859.f_2 = 1;
	}
}

void func_219()
{
	iLocal_446 = 0;
	while (iLocal_446 <= (3 - 1))
	{
		if (unk_0x746960881FB19A89(Local_100[iLocal_446 /*2*/]) && !unk_0x3E0478C40AB5B38D(Local_100[iLocal_446 /*2*/]))
		{
			if (unk_0x827151D7B70CB853(Local_100[iLocal_446 /*2*/], 0))
			{
				unk_0x22B10AEB82454F56(Local_100[iLocal_446 /*2*/], unk_0x77009B1C011405A9(unk_0x1161215F69587BDA(Local_100[iLocal_446 /*2*/], 0), 1) + Vector(0f, -2f, 0f));
			}
			func_226(&(Local_100[iLocal_446 /*2*/]));
		}
		iLocal_446++;
	}
	iLocal_446 = 0;
	while (iLocal_446 <= (9 - 1))
	{
		if (unk_0x746960881FB19A89(Local_110[iLocal_446 /*14*/]))
		{
			func_225(&(Local_110[iLocal_446 /*14*/].f_2));
			Local_110[iLocal_446 /*14*/].f_12 = 0;
			if (!unk_0x3E0478C40AB5B38D(Local_110[iLocal_446 /*14*/]))
			{
				if (unk_0x827151D7B70CB853(Local_110[iLocal_446 /*14*/], 0))
				{
					unk_0x22B10AEB82454F56(Local_110[iLocal_446 /*14*/], unk_0x77009B1C011405A9(unk_0x1161215F69587BDA(Local_110[iLocal_446 /*14*/], 0), 1) + Vector(0f, -2f, 0f));
				}
				func_226(&(Local_110[iLocal_446 /*14*/]));
			}
		}
		iLocal_446++;
	}
	iLocal_446 = 0;
	while (iLocal_446 <= (2 - 1))
	{
		if (unk_0x746960881FB19A89(uLocal_107[iLocal_446]))
		{
			func_224(&(uLocal_107[iLocal_446]));
		}
		iLocal_446++;
	}
	iLocal_446 = 0;
	while (iLocal_446 <= (3 - 1))
	{
		if (unk_0x746960881FB19A89(Local_93[iLocal_446 /*2*/]))
		{
			func_223(Local_93[iLocal_446 /*2*/]);
			func_220(&(Local_93[iLocal_446 /*2*/]));
		}
		iLocal_446++;
	}
	unk_0xDA31FF1629FE9693();
	unk_0x35611EEE7A1FFEDB(1);
	unk_0xC0D176A742C3EAE3(0);
	func_33(&Local_402, 1, 0);
	if (func_31(unk_0x9F92518438215DD0()))
	{
		unk_0xC70D4A06E38B2711(unk_0xCFC72E446B0B3AD7(), 1, 0);
		unk_0x6D32A18F1C515812(unk_0xCFC72E446B0B3AD7());
	}
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		unk_0x32D18ECD9E6F9BE2(unk_0x9F92518438215DD0());
	}
	unk_0xB3B57AEE7B7BA0E2(1);
	unk_0xC48BE7195D873776(1);
	iLocal_433 = 0;
	iLocal_435 = 0;
	iLocal_434 = 0;
	iLocal_432 = 0;
	iLocal_471 = 0;
	bLocal_455 = false;
	bLocal_456 = false;
	StringCopy(&cLocal_474, "Rural_prep_trigger1", 64);
}

void func_220(var uParam0)
{
	if (unk_0x746960881FB19A89(*uParam0))
	{
		if (!unk_0x34E74FF8690AA4B1(*uParam0))
		{
			unk_0x336AE92FD68DEF98(*uParam0, 1, 0);
		}
		if (func_222(*uParam0))
		{
			if (unk_0x34E74FF8690AA4B1(*uParam0) && unk_0xAD2C236C4A4B83C9(*uParam0, 1))
			{
				if (func_221(unk_0x9F92518438215DD0()))
				{
					if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), *uParam0, 0))
					{
						unk_0x9187463EB4918A4D(uParam0);
						return;
					}
				}
				unk_0xCD3EBB4EAE50293F(uParam0);
			}
		}
		else
		{
			if (func_221(unk_0x9F92518438215DD0()))
			{
				if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), *uParam0, 0))
				{
					unk_0x9187463EB4918A4D(uParam0);
					return;
				}
			}
			unk_0xCD3EBB4EAE50293F(uParam0);
		}
	}
}

int func_221(int iParam0)
{
	if (unk_0x746960881FB19A89(iParam0))
	{
		if (!unk_0x0BA451447C3B1A8D(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_222(int iParam0)
{
	if (func_221(iParam0))
	{
		if (unk_0xFC38B241541883D3(iParam0, 0))
		{
			if (!unk_0x0FC809E10EF0EAC3(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_223(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x746960881FB19A89(iParam0))
	{
		if (unk_0xFC38B241541883D3(iParam0, 0))
		{
			iVar0 = unk_0xB5BBEB12C77EE430(iParam0, -1);
			if (unk_0x746960881FB19A89(iVar0))
			{
				if (!unk_0x3E0478C40AB5B38D(iVar0))
				{
					unk_0x71628E52718BD195(iVar0);
				}
				else
				{
					unk_0x7763EDCBED8A5840(&iVar0);
				}
			}
			iVar2 = unk_0x95A70C0B34435CA8(iParam0);
			iVar1 = 0;
			while (iVar1 < iVar2)
			{
				if (!unk_0x4A33023BC86AAA7F(iParam0, iVar1))
				{
					iVar0 = unk_0xB5BBEB12C77EE430(iParam0, iVar1);
					if (unk_0x746960881FB19A89(iVar0))
					{
						if (!unk_0x3E0478C40AB5B38D(iVar0))
						{
							unk_0x71628E52718BD195(iVar0);
						}
						else
						{
							unk_0x7763EDCBED8A5840(&iVar0);
						}
					}
				}
				iVar1++;
			}
		}
	}
}

void func_224(var uParam0)
{
	if (unk_0x746960881FB19A89(*uParam0))
	{
		if (unk_0xDAF5609B36EC10E7(*uParam0))
		{
			unk_0x8ED1C81168F4A10C(*uParam0, 1, 1);
		}
		unk_0x83A49C880CB75451(uParam0);
	}
}

void func_225(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0x2E6E8D325977B3EC(*uParam0))
	{
		unk_0x0451B5D93A4BDAA0(uParam0);
		bVar0 = true;
	}
	if (unk_0x2E6E8D325977B3EC(uParam0->f_1))
	{
		unk_0x0451B5D93A4BDAA0(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x746960881FB19A89(uParam0->f_7))
	{
		if (!unk_0x3E0478C40AB5B38D(uParam0->f_7))
		{
			if (unk_0x1E340411F75B44FE(uParam0->f_7))
			{
				unk_0x27C3EE559D11736B(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

void func_226(var uParam0)
{
	if (unk_0x746960881FB19A89(*uParam0))
	{
		if (!unk_0x0BA451447C3B1A8D(*uParam0))
		{
			unk_0x512E0C109ACECCA1(*uParam0, 0);
		}
		if (!unk_0x34E74FF8690AA4B1(*uParam0))
		{
			unk_0x336AE92FD68DEF98(*uParam0, 1, 0);
		}
		unk_0x7763EDCBED8A5840(uParam0);
	}
}

void func_227()
{
	switch (iLocal_1473)
	{
		case 1:
			iLocal_1473 = 2;
			iLocal_1475 = -1;
			break;
		
		case 2:
			iLocal_1473 = 3;
			iLocal_1475 = 0;
			iLocal_1474 = iLocal_1476;
			break;
		
		case 3:
			iLocal_1476 = -1;
			iLocal_1473 = 0;
			break;
		
		case 0:
			if ((unk_0x17103F66FBB44C3C() - iLocal_1477) > 2500)
			{
				iLocal_1477 = unk_0x17103F66FBB44C3C();
			}
			break;
	}
}

void func_228(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x4B69FB3A5B09A1BA())
	{
		if (unk_0x94E72F17611BCD3C(Global_2446533.f_4399, 25))
		{
			return;
		}
	}
	if (unk_0x66ABEB57BE23A1E8())
	{
		unk_0xF457518D39569180(iParam2);
		unk_0x075BBF37597121A7("FocusIn");
		unk_0x6041FBFC1EE8196A("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x20BCECAA3CCE96D0("FocusOut", 0, 0);
			unk_0x86F4B3D6FF8F65DE(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x3229F8D82C561641(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x471A7F8C908126F0(sVar0))
	{
		if (!unk_0x4B69FB3A5B09A1BA())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x471A7F8C908126F0(uParam0->f_3))
	{
		if (func_229(uParam0->f_3))
		{
			unk_0x35611EEE7A1FFEDB(1);
		}
	}
	if (!unk_0x471A7F8C908126F0(sVar0))
	{
		if (func_229(sVar0))
		{
			unk_0x35611EEE7A1FFEDB(1);
		}
	}
}

bool func_229(char* sParam0)
{
	unk_0x1935773249F749A2(sParam0);
	return unk_0x7796B4D54E5DF47E(0);
}

void func_230(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_231(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_231(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	uParam0->f_6 = 0;
	func_232(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_232(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x66ABEB57BE23A1E8())
	{
		if (unk_0x17103F66FBB44C3C() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x471A7F8C908126F0(iVar0))
	{
		if (!unk_0x4B69FB3A5B09A1BA())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_229(iVar0))
	{
		func_249();
	}
	if (func_248(iParam1) && unk_0xB3CC729BBAA21637(iParam1))
	{
		iVar1 = 0;
		if (unk_0x4E178F5D4155391A(iParam1))
		{
			unk_0x77AD4F1EB5E9941E(unk_0x240654B57CFFBFB3(iParam1));
			unk_0x86240DC80CA03EAA(unk_0x240654B57CFFBFB3(iParam1), 1);
			if (unk_0x279B7F77009BB4FE(unk_0x240654B57CFFBFB3(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x2B1914308D0376C8(iParam1))
		{
			unk_0x13DE0701DBD9B873(unk_0x40A2BB73421EA79A(iParam1));
			if (unk_0x89E19A8E46D632B8(unk_0x40A2BB73421EA79A(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xA6C29CC20CD3DCB4(iParam1))
		{
			unk_0x0468D4FE2D4E06D1(unk_0xBF367154777CAECE(iParam1));
			if (unk_0x2EF3D938DF2094F2(unk_0xBF367154777CAECE(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x66ABEB57BE23A1E8())
		{
			if (func_243(uParam0, bParam7, bParam9, 0))
			{
				func_240(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_236(iVar0))
				{
					if ((unk_0x471A7F8C908126F0(uParam0->f_3) && !unk_0x471A7F8C908126F0(iVar0)) && unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
					{
						if ((iVar1 && !unk_0xC9EED58014EF1F40()) && uParam8)
						{
							if (!func_229(iVar0))
							{
								func_139(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x6B08EC9A88700FBB("CMN_HINT", iVar0))
								{
									func_235(1);
								}
							}
						}
					}
				}
			}
			else if (func_236(iVar0))
			{
				if (unk_0x471A7F8C908126F0(uParam0->f_3) && !unk_0x471A7F8C908126F0(iVar0))
				{
					if (((unk_0x0FF9FE2CB115CFB9(iParam1) && iVar1) && !unk_0xC9EED58014EF1F40()) && uParam8)
					{
						if (!func_229(iVar0))
						{
							func_139(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x6B08EC9A88700FBB("CMN_HINT", iVar0))
							{
								func_235(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x471A7F8C908126F0(sParam5))
			{
				if (func_229(sParam5))
				{
					unk_0x35611EEE7A1FFEDB(1);
				}
			}
			if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
			{
				if (unk_0x3B83AAE4CA8F87EC(unk_0x9F92518438215DD0()))
				{
					if (unk_0xB49A1BEB8771FD4C(3) == 3 || unk_0xB49A1BEB8771FD4C(3) == 4)
					{
						func_228(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8524DF00FC9C3785(unk_0x9F92518438215DD0()))
				{
					if (unk_0xB49A1BEB8771FD4C(6) == 3 || unk_0xB49A1BEB8771FD4C(6) == 4)
					{
						func_228(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xC438EC3E56EB640E(unk_0x9F92518438215DD0()))
				{
					if (unk_0xB49A1BEB8771FD4C(4) == 3 || unk_0xB49A1BEB8771FD4C(4) == 4)
					{
						func_228(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xBFC77F45674913F8(unk_0x9F92518438215DD0()))
				{
					if (unk_0xB49A1BEB8771FD4C(5) == 3 || unk_0xB49A1BEB8771FD4C(5) == 4)
					{
						func_228(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x633DA2F150D07C27(unk_0x9F92518438215DD0()))
				{
					if (unk_0xB49A1BEB8771FD4C(2) == 3 || unk_0xB49A1BEB8771FD4C(2) == 4)
					{
						func_228(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xAF8ACF13449C208C() == 3 || unk_0xAF8ACF13449C208C() == 4)
				{
					func_228(uParam0, iVar0, 1);
				}
			}
			if (!func_243(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_234(uParam0))
				{
					func_233(uParam0);
				}
			}
		}
	}
	else
	{
		func_228(uParam0, iVar0, 0);
	}
}

void func_233(var uParam0)
{
	if (func_248(unk_0x9F92518438215DD0()))
	{
		unk_0xD2062A6AC314B85E(unk_0x9F92518438215DD0());
	}
	if (unk_0x66ABEB57BE23A1E8())
	{
		unk_0x3229F8D82C561641(1);
		unk_0xF457518D39569180(0);
		unk_0x6041FBFC1EE8196A("HINT_CAM_SCENE");
		unk_0x075BBF37597121A7("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x20BCECAA3CCE96D0("FocusOut", 0, 0);
			unk_0x86F4B3D6FF8F65DE(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_234(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x17103F66FBB44C3C()
		{
			return 1;
		}
	}
	return 0;
}

int func_235(bool bParam0)
{
	switch (Global_34913)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_97358.f_8303.f_100++;
			}
			return Global_97358.f_8303.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_97358.f_8303.f_101++;
			}
			return Global_97358.f_8303.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_97358.f_8303.f_102++;
			}
			return Global_97358.f_8303.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_236(char* sParam0)
{
	if (!func_237(1, 1, 0))
	{
		if ((!unk_0x9E9AFDBF482248F6(sParam0) && func_229(sParam0)) || func_229("CMN_HINT"))
		{
			unk_0x35611EEE7A1FFEDB(1);
		}
		return 0;
	}
	switch (Global_34913)
	{
		case 0:
		case 3:
			if (func_235(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_235(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_235(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_237(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x2D8FCFBC4E01FF7C())
	{
		return 0;
	}
	if (func_239(0))
	{
		return 0;
	}
	if (func_238())
	{
		return 0;
	}
	if (unk_0xB693DB1187BBD585())
	{
		return 0;
	}
	if (Global_67058)
	{
		return 0;
	}
	if (unk_0x7B47A371E2D93C2C(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_51932)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
		{
			if (unk_0x3B83AAE4CA8F87EC(unk_0x9F92518438215DD0()))
			{
				if (unk_0xB49A1BEB8771FD4C(3) == 3 || unk_0xB49A1BEB8771FD4C(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8524DF00FC9C3785(unk_0x9F92518438215DD0()))
			{
				if (unk_0xB49A1BEB8771FD4C(6) == 3 || unk_0xB49A1BEB8771FD4C(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xC438EC3E56EB640E(unk_0x9F92518438215DD0()))
			{
				if (unk_0xB49A1BEB8771FD4C(4) == 3 || unk_0xB49A1BEB8771FD4C(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xBFC77F45674913F8(unk_0x9F92518438215DD0()))
			{
				if (unk_0xB49A1BEB8771FD4C(5) == 3 || unk_0xB49A1BEB8771FD4C(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x633DA2F150D07C27(unk_0x9F92518438215DD0()))
			{
				if (unk_0xB49A1BEB8771FD4C(2) == 3 || unk_0xB49A1BEB8771FD4C(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xAF8ACF13449C208C() == 3 || unk_0xAF8ACF13449C208C() == 4)
			{
				return 0;
			}
			if (unk_0x9DA0D8B7E5367D16())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_238()
{
	return unk_0x17103F66FBB44C3C() <= Global_17236.f_5130 + 100;
}

int func_239(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x94E72F17611BCD3C(Global_2263, 14))
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
	if (unk_0x7B47A371E2D93C2C(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_240(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x0BA451447C3B1A8D(iParam1))
	{
		func_228(uParam0, 0, 0);
	}
	if (func_130(Param2, 0f, 0f, 0f))
	{
		if (unk_0x4E178F5D4155391A(iParam1))
		{
			iVar0 = unk_0x240654B57CFFBFB3(iParam1);
			if (!unk_0x827151D7B70CB853(iVar0, 0))
			{
				if (unk_0x2FCB242469087013(iVar0))
				{
					if (!func_241())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xA880B447140A3E0D(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x3229F8D82C561641(0);
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
	unk_0x7762AD97EBCE06D8(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x402A96371F34E6D8(unk_0x9F92518438215DD0(), iParam1, -1, iVar3, iVar4);
	unk_0x20BCECAA3CCE96D0("FocusIn", 0, 0);
	unk_0x9B517A4FE28A719F("HINT_CAM_SCENE");
	unk_0x86F4B3D6FF8F65DE(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x17103F66FBB44C3C();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_241()
{
	return func_242(unk_0xCFC72E446B0B3AD7());
}

int func_242(var uParam0)
{
	if (unk_0xB6A50C909A8FABC3(unk_0x4E6043D225B9C75F(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_243(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x17103F66FBB44C3C() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
				{
					if (func_247(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x17103F66FBB44C3C();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_246(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x17103F66FBB44C3C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_246(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x17103F66FBB44C3C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_247(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x17103F66FBB44C3C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_234(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x17103F66FBB44C3C() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
					{
						if (!func_247(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x17103F66FBB44C3C();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_246(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x17103F66FBB44C3C();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_246(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x17103F66FBB44C3C();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_247(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x17103F66FBB44C3C();
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
				if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
				{
					if (!func_247(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_246(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_246(bParam1, bParam2, bParam3) || unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1) || unk_0xFB39E95238A639FE(unk_0x9F92518438215DD0(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_247(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x17103F66FBB44C3C() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
					{
						if (func_245(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_244(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1) || func_244(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1) || unk_0xFB39E95238A639FE(unk_0x9F92518438215DD0(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_245(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_234(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_237(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_249();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_244(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_237(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		if (!unk_0xFC431486FFB3EF94(unk_0xCFC72E446B0B3AD7()))
		{
			unk_0x6A6A41C66448AD09(0, 140, 1);
			unk_0x6A6A41C66448AD09(0, 80, 1);
			if (unk_0x52F1618353272A82(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_245(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_237(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		unk_0x6A6A41C66448AD09(0, 80, 1);
		if (unk_0x2C5534A802F57303())
		{
			if (unk_0x52F1618353272A82(0, 80))
			{
				unk_0x3229F8D82C561641(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_246(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_237(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		if (!unk_0xFC431486FFB3EF94(unk_0xCFC72E446B0B3AD7()))
		{
			unk_0x6A6A41C66448AD09(0, 140, 1);
			unk_0x6A6A41C66448AD09(0, 80, 1);
			if (unk_0x9F02FE1D24674A84(0, 80) && unk_0x17103F66FBB44C3C() > Global_96)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_247(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_237(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		unk_0x6A6A41C66448AD09(0, 80, 1);
		if (unk_0x2C5534A802F57303())
		{
			if (unk_0x9F02FE1D24674A84(0, 80) && unk_0x17103F66FBB44C3C() > Global_96)
			{
				unk_0x3229F8D82C561641(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_248(int iParam0)
{
	if (unk_0x746960881FB19A89(iParam0))
	{
		if (unk_0x2B1914308D0376C8(iParam0))
		{
			if (unk_0xFC38B241541883D3(unk_0x40A2BB73421EA79A(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x4E178F5D4155391A(iParam0))
		{
			if (!unk_0x3E0478C40AB5B38D(unk_0x240654B57CFFBFB3(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0xA6C29CC20CD3DCB4(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_249()
{
	unk_0xEDB9A377CD8B7F03(&Global_2264, 4);
}

void func_250(var uParam0)
{
	func_209(uParam0);
}

void func_251()
{
	struct<3> Var0;
	var uVar3;
	
	unk_0xED203B31B4F739E3(iLocal_491);
	unk_0xED203B31B4F739E3(iLocal_492);
	unk_0x4B38C66919CC2E48("trevor", &iLocal_491);
	unk_0x4B38C66919CC2E48("enemies", &iLocal_492);
	unk_0xF2061C15946C53A2(5, iLocal_492, joaat("player"));
	unk_0xF2061C15946C53A2(5, iLocal_492, iLocal_491);
	unk_0xF2061C15946C53A2(5, iLocal_491, iLocal_492);
	unk_0xF2061C15946C53A2(1, iLocal_492, joaat("COP"));
	unk_0xF2061C15946C53A2(1, joaat("COP"), iLocal_492);
	unk_0xF2061C15946C53A2(1, iLocal_492, iLocal_492);
	unk_0xF2061C15946C53A2(1, iLocal_492, joaat("army"));
	unk_0xF2061C15946C53A2(1, joaat("army"), iLocal_492);
	unk_0x9C53AD1E8A38ADEE("ruralp", 0);
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		unk_0xC70D4A06E38B2711(unk_0xCFC72E446B0B3AD7(), 1, 0);
	}
	unk_0x2250E32CE864C09F(5, 0);
	unk_0x2250E32CE864C09F(3, 0);
	unk_0x2250E32CE864C09F(1, 0);
	unk_0x2250E32CE864C09F(10, 0);
	unk_0x2250E32CE864C09F(9, 0);
	unk_0xB38EC370CECFE380(1, 0);
	unk_0xB38EC370CECFE380(2, 0);
	unk_0xB38EC370CECFE380(8, 0);
	unk_0x6D32A18F1C515812(unk_0xCFC72E446B0B3AD7());
	unk_0xB1E35D138037D248(0f);
	unk_0xF72219EF3DF47F66(0);
	unk_0x3F5C3AAAFB03D2FD(0);
	unk_0x60DAE84D0B296FD2(joaat("crusader"), 1);
	unk_0x60DAE84D0B296FD2(joaat("barracks"), 1);
	uLocal_444 = unk_0x676E460800A9E1B7(Vector(35.39456f, 3600.538f, 1375.234f) - Vector(0f, 7f, 14.25f), Vector(35.39456f, 3600.538f, 1375.234f) + Vector(3f, 7f, 14.25f), 0, 1, 1, 1);
	unk_0xCF023D488D3EAE4D(Vector(33.8865f, 3596.518f, 1383.51f) - Vector(1f, 5f, 5f), Vector(33.8865f, 3596.518f, 1383.51f) + Vector(2f, 5f, 5f), 0, 1);
	if (func_198() || func_7(0))
	{
		if (func_198())
		{
			iLocal_1479 = func_309();
			if (Global_84544)
			{
				iLocal_1479++;
			}
			if (iLocal_1479 >= 3)
			{
				iLocal_1479 = 3;
			}
		}
		else if (func_7(0))
		{
			iLocal_1479 = 0;
		}
		if (func_198())
		{
			func_216(iLocal_1479, &Var0, &uVar3);
			func_308(Var0, uVar3, 1, 0);
		}
		bLocal_1478 = true;
	}
	else
	{
		while (!func_306())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_254(0, "stage 0: reached ambush", 0, 0, 0, 1);
		iLocal_1474 = 0;
		func_212(0);
	}
	iLocal_1475 = 0;
	func_252(92);
}

void func_252(int iParam0)
{
	Global_86222 = 0;
	switch (iParam0)
	{
		case 72:
			func_253(2);
			func_253(4);
			break;
		
		case 73:
			func_253(0);
			func_253(1);
			func_253(7);
			break;
		
		case 92:
			func_253(10);
			func_253(9);
			func_253(13);
			func_253(6);
			break;
		
		case 68:
			func_253(11);
			break;
		
		case 78:
			func_253(14);
			break;
		
		case joaat("mpsv_lp0_31"):
			func_253(3);
			break;
		
		default:
			break;
	}
}

void func_253(int iParam0)
{
	unk_0xEDB9A377CD8B7F03(&Global_86222, iParam0);
}

void func_254(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
		if (!unk_0x6B08EC9A88700FBB("FinaleC2", unk_0xC2E9075570B5D2B9()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_89999)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_89999)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_305(1);
		if (iParam0 <= Global_89999)
		{
		}
		iVar1 = func_303(unk_0xC2E9075570B5D2B9(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_97358.f_7341.f_328[iVar1 /*6*/].f_1 = 0;
			uVar2 = func_301(iVar1);
			cVar3 = { Global_81155[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_97358.f_7341.f_99.f_203[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			unk_0x20C7E57166B3A302(&cVar3, uVar2, Global_89999, iParam0);
		}
		else
		{
			iVar5 = func_296(unk_0xC2E9075570B5D2B9(), 1);
			if (iVar5 != -1)
			{
				Global_97358.f_16828[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {func_295(iVar5)}, 4);
				unk_0x20C7E57166B3A302(&uVar6, 0, Global_89999, iParam0);
			}
			else
			{
				iVar10 = func_294(&(Global_89962.f_3));
				if (iVar10 > -1)
				{
					Global_97358.f_28183.f_4[iVar10] = 0;
				}
			}
		}
		Global_84545 = iParam2;
		Global_89999 = iParam0;
		func_255(iParam0, sParam1, iParam4, iParam5);
		if (unk_0x6B08EC9A88700FBB(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_89999)
	{
	}
}

void func_255(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_256(&Global_93593, unk_0xC2E9075570B5D2B9(), iParam0, uParam1, iParam3, iParam2);
}

void func_256(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_19();
	uParam0->f_1 = func_110();
	unk_0xE1E6C0AE7BCBD9D4(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		func_280(&(uParam0->f_2161), 0);
		func_279(unk_0x9F92518438215DD0());
		func_273(unk_0x9F92518438215DD0(), 0);
		unk_0x9DA0F3A686A566A6(unk_0x9F92518438215DD0(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_97358.f_1729.f_539.f_294[iVar1];
		if (iVar1 == func_272())
		{
			func_265(unk_0x9F92518438215DD0(), &(uParam0->f_472[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_472[iVar1 /*65*/][iVar0] = Global_89752[iVar1 /*65*/][iVar0];
				uParam0->f_472[iVar1 /*65*/].f_13[iVar0] = Global_89752[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_472[iVar1 /*65*/].f_59 = Global_89752[iVar1 /*65*/].f_59;
			uParam0->f_472[iVar1 /*65*/].f_60 = Global_89752[iVar1 /*65*/].f_60;
			uParam0->f_472[iVar1 /*65*/].f_61 = Global_89752[iVar1 /*65*/].f_61;
			uParam0->f_472[iVar1 /*65*/].f_62 = Global_89752[iVar1 /*65*/].f_62;
			uParam0->f_472[iVar1 /*65*/].f_63 = Global_89752[iVar1 /*65*/].f_63;
			uParam0->f_472[iVar1 /*65*/].f_64 = Global_89752[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_472[iVar1 /*65*/].f_39[iVar0] = Global_89752[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_472[iVar1 /*65*/].f_49[iVar0] = Global_89752[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_668[iVar1 /*284*/][iVar0 /*3*/] = { Global_97358.f_1729.f_539.f_298[iVar1 /*284*/][iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_668[iVar1 /*284*/].f_133[iVar0 /*3*/] = { Global_97358.f_1729.f_539.f_298[iVar1 /*284*/].f_133[iVar0 /*3*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0x39496A55977AA312(joaat("sp0_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				unk_0x39496A55977AA312(joaat("sp0_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				unk_0x39496A55977AA312(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				unk_0x39496A55977AA312(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				unk_0x39496A55977AA312(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				unk_0x39496A55977AA312(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				unk_0x39496A55977AA312(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				unk_0x39496A55977AA312(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				unk_0x39496A55977AA312(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				unk_0x39496A55977AA312(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				unk_0x39496A55977AA312(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				unk_0x39496A55977AA312(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				unk_0x39496A55977AA312(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				unk_0x39496A55977AA312(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				unk_0x39496A55977AA312(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				unk_0x39496A55977AA312(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				unk_0x39496A55977AA312(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				unk_0x39496A55977AA312(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				unk_0x39496A55977AA312(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0x39496A55977AA312(joaat("sp1_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				unk_0x39496A55977AA312(joaat("sp1_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				unk_0x39496A55977AA312(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				unk_0x39496A55977AA312(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				unk_0x39496A55977AA312(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				unk_0x39496A55977AA312(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				unk_0x39496A55977AA312(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				unk_0x39496A55977AA312(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				unk_0x39496A55977AA312(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				unk_0x39496A55977AA312(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				unk_0x39496A55977AA312(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				unk_0x39496A55977AA312(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				unk_0x39496A55977AA312(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				unk_0x39496A55977AA312(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				unk_0x39496A55977AA312(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				unk_0x39496A55977AA312(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				unk_0x39496A55977AA312(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				unk_0x39496A55977AA312(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				unk_0x39496A55977AA312(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0x39496A55977AA312(joaat("sp2_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				unk_0x39496A55977AA312(joaat("sp2_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				unk_0x39496A55977AA312(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				unk_0x39496A55977AA312(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				unk_0x39496A55977AA312(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				unk_0x39496A55977AA312(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				unk_0x39496A55977AA312(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				unk_0x39496A55977AA312(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				unk_0x39496A55977AA312(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				unk_0x39496A55977AA312(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				unk_0x39496A55977AA312(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				unk_0x39496A55977AA312(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				unk_0x39496A55977AA312(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				unk_0x39496A55977AA312(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				unk_0x39496A55977AA312(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				unk_0x39496A55977AA312(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				unk_0x39496A55977AA312(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				unk_0x39496A55977AA312(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				unk_0x39496A55977AA312(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_97358.f_23789.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_51925[iVar1];
		uParam0->f_25[0 /*223*/][iVar1 /*74*/] = { Global_97358.f_1729.f_539.f_1635[0 /*223*/][iVar1 /*74*/] };
		uParam0->f_25[1 /*223*/][iVar1 /*74*/] = { Global_97358.f_1729.f_539.f_1635[1 /*223*/][iVar1 /*74*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2115[iVar1 /*15*/][iVar0] = Global_97358.f_1729.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2115[iVar1 /*15*/].f_5[iVar0] = Global_97358.f_1729.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2115[iVar1 /*15*/].f_10[iVar0] = Global_97358.f_1729.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_1622[iVar1 /*164*/][iVar0] = Global_97358.f_1729[iVar1 /*164*/][iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_4[iVar0] = Global_97358.f_1729[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_8[iVar0] = Global_97358.f_1729[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_12[iVar0] = Global_97358.f_1729[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_16[iVar0] = Global_97358.f_1729[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_20[iVar0] = Global_97358.f_1729[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_24[iVar0] = Global_97358.f_1729[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_28[iVar0] = Global_97358.f_1729[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_32[iVar0] = Global_97358.f_1729[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_36[iVar0] = Global_97358.f_1729[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_40[iVar0] = Global_97358.f_1729[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_44[iVar0] = Global_97358.f_1729[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_48[iVar0] = Global_97358.f_1729[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_52[iVar0] = Global_97358.f_1729[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_56[iVar0] = Global_97358.f_1729[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_60[iVar0] = Global_97358.f_1729[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_64[iVar0] = Global_97358.f_1729[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_68[iVar0] = Global_97358.f_1729[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_72[iVar0] = Global_97358.f_1729[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_76[iVar0] = Global_97358.f_1729[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_80[iVar0] = Global_97358.f_1729[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_84[iVar0] = Global_97358.f_1729[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_88[iVar0] = Global_97358.f_1729[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_92[iVar0] = Global_97358.f_1729[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_96[iVar0] = Global_97358.f_1729[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_100[iVar0] = Global_97358.f_1729[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_104[iVar0] = Global_97358.f_1729[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_108[iVar0] = Global_97358.f_1729[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_112[iVar0] = Global_97358.f_1729[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_116[iVar0] = Global_97358.f_1729[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_120[iVar0] = Global_97358.f_1729[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_124[iVar0] = Global_97358.f_1729[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_128[iVar0] = Global_97358.f_1729[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_132[iVar0] = Global_97358.f_1729[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_136[iVar0] = Global_97358.f_1729[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_140[iVar0] = Global_97358.f_1729[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_144[iVar0] = Global_97358.f_1729[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_148[iVar0] = Global_97358.f_1729[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_152[iVar0] = Global_97358.f_1729[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_156[iVar0] = Global_97358.f_1729[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_160[iVar0] = Global_97358.f_1729[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0x39496A55977AA312(joaat("sp0_special_ability"), &(uParam0->f_1618[0]), -1);
	unk_0x39496A55977AA312(joaat("sp1_special_ability"), &(uParam0->f_1618[1]), -1);
	unk_0x39496A55977AA312(joaat("sp2_special_ability"), &(uParam0->f_1618[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_258(&(uParam0->f_2167), uParam0, iParam5, 1, 1, 0);
	}
	func_257(&(uParam0->f_2233));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_257(var uParam0)
{
	*uParam0 = Global_86216;
	uParam0->f_1 = Global_86217;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_258(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0x9F92518438215DD0();
	}
	if (unk_0x746960881FB19A89(iParam2))
	{
		uParam1->f_5 = func_29(iParam2);
	}
	if (func_264(iParam2, &iVar0, iParam3, iParam5))
	{
		func_259(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0x746960881FB19A89(iVar0))
	{
		if (!unk_0x0BA451447C3B1A8D(iVar0))
		{
			if (unk_0x343BE15E9FFCF907(iVar0, joaat("skylift")) && unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iVar0, 0))
			{
				func_259(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_259(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0xFC38B241541883D3(iParam2, 0))
	{
		func_261(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_260(iParam2))
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

int func_260(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_89962.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_261(var uParam0, int iParam1, int iParam2)
{
	func_85(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_263(iParam1, 145, 0);
	uParam0->f_11 = func_101(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_262(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0x77009B1C011405A9(iParam1, 1) };
		uParam0->f_6 = unk_0xE691E4EA6B4440C6(iParam1);
		uParam0->f_3 = { unk_0xAEA1379E6840A7DA(iParam1) };
		if (unk_0xFE0FA79BC49EBB07(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_68043 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_262(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x746960881FB19A89(Global_67138.f_484[iVar0]))
		{
			if (iParam0 == Global_67138.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_263(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x746960881FB19A89(iParam0))
	{
		return 0;
	}
	if (!unk_0xFC38B241541883D3(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x746960881FB19A89(Global_87698[iVar0]))
		{
			if (Global_87698[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_87708[iVar0])
				{
					if (iParam2 == 0 || unk_0xB6A50C909A8FABC3(iParam0) == func_122(iParam1, iParam2))
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

int func_264(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (unk_0x746960881FB19A89(iParam0))
	{
		if (!unk_0x3E0478C40AB5B38D(iParam0))
		{
			if (iParam0 == unk_0x9F92518438215DD0())
			{
				*uParam1 = unk_0x228A016F863DED95();
			}
			else
			{
				*uParam1 = unk_0x1161215F69587BDA(iParam0, 1);
			}
			if (unk_0x746960881FB19A89(*uParam1))
			{
				if (unk_0xFC38B241541883D3(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0x91EAD4F2F9B5B38A(unk_0x77009B1C011405A9(*uParam1, 1), unk_0x77009B1C011405A9(iParam0, 1), 1) < 100f)
					{
						if (unk_0x343BE15E9FFCF907(*uParam1, joaat("taxi")))
						{
							if (unk_0xB5BBEB12C77EE430(*uParam1, -1) != iParam0 && unk_0xB5BBEB12C77EE430(*uParam1, -1) != 0)
							{
								return 0;
							}
						}
						if (func_102(*uParam1, func_19(), 1))
						{
							sVar0 = unk_0xC2E9075570B5D2B9();
							if (!unk_0x6B08EC9A88700FBB(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x827151D7B70CB853(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0xB4289912C78431FE(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0x8AEE5670B72C39C1(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0x343BE15E9FFCF907(*uParam1, joaat("blimp")))
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

void func_265(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x3E0478C40AB5B38D(iParam0))
	{
		iVar0 = func_29(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_271(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_270(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_21(iVar0))
		{
			uParam1->f_59 = Global_97358.f_1729.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_97358.f_1729.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_97358.f_1729.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_97358.f_1729.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_97358.f_1729.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_97358.f_1729.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x4B69FB3A5B09A1BA() && unk_0xB6A50C909A8FABC3(iParam0) == unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()))
		{
			if (func_269(161, -1))
			{
				uParam1->f_59 = func_266(2039, Global_68104, 0);
			}
			else
			{
				uParam1->f_59 = func_266(744, Global_68104, 0);
			}
			uParam1->f_60 = func_266(745, Global_68104, 0);
			uParam1->f_61 = func_266(746, Global_68104, 0);
		}
		if (unk_0x4B69FB3A5B09A1BA() && iParam0 == unk_0x9F92518438215DD0())
		{
			if (func_269(161, -1))
			{
				uParam1->f_59 = func_266(2039, Global_68104, 0);
			}
			else
			{
				uParam1->f_59 = func_266(744, Global_68104, 0);
			}
		}
	}
}

int func_266(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454588[iParam0 /*6*/][func_267(iParam1)];
	if (unk_0x39496A55977AA312(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_267(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_268();
		if (iVar1 > -1)
		{
			Global_2454301 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454301 = 1;
		}
	}
	return iVar0;
}

var func_268()
{
	return Global_1312737;
}

int func_269(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2474108[iParam0 /*6*/][func_267(iParam1)];
	if (unk_0xF02F9C69623F2904(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_270(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_29(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xE4C3669C2BFF9D2E(iParam0, iParam1);
		*uParam3 = unk_0x08C222396DF5E96D(iParam0, iParam1);
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
				if (unk_0x6AE68BD60866A815(iParam0) && unk_0xFC6B380991E4ABD4(iParam0) != -1)
				{
					*uParam2 = unk_0xFC6B380991E4ABD4(iParam0);
					*uParam3 = unk_0xE4E315838EC25442(iParam0);
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

void func_271(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_29(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x27F7C2FB848CD525(iParam0, iParam1);
		*uParam3 = unk_0xEB3E23B43A745CA1(iParam0, iParam1);
		*uParam4 = unk_0xA9B8775C8F23EB6B(iParam0, iParam1);
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

int func_272()
{
	func_20();
	return Global_97358.f_1729.f_539.f_3213;
}

void func_273(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_29(iParam0);
	if (func_21(iVar0) && !unk_0x3E0478C40AB5B38D(iParam0))
	{
		if (iParam0 == unk_0x9F92518438215DD0())
		{
			func_274(iParam0, &(Global_97358.f_1729.f_539.f_298[iVar0 /*284*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_97358.f_1729.f_539.f_1151[iVar2 /*4*/][iVar0] = unk_0x1D38FF2CB39A3EAF(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0x8AD607D4A4ECA692();
					if (Global_97358.f_1729.f_539.f_1151[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_97358.f_1729.f_539.f_1184 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x7AA23D17258712DE(unk_0xCFC72E446B0B3AD7(), &uVar3);
			if (iVar0 == 0)
			{
				unk_0xC46BDC34976E9532(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0xC46BDC34976E9532(joaat("sp1_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0xC46BDC34976E9532(joaat("sp2_parachute_current_tint"), uVar3, 1);
			}
		}
	}
}

void func_274(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	int iVar7;
	int iVar8;
	struct<2> Var9;
	struct<4> Var48;
	int iVar70;
	
	if (!unk_0x3E0478C40AB5B38D(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*3*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_278(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = unk_0x7F787D5EAAAE2C90(iParam0, func_278(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x4854EFACAD548EAC(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					unk_0xEDB9A377CD8B7F03(&(Var4.f_2), (20 + unk_0x5741D34836149CB2(iParam0, Var4.f_0)));
					if (Var4.f_1 == -1)
					{
						if (!unk_0xD2FFD78288C5EDEF(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*3*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_276(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0xE01F4A336AF08934(iParam0, Var4.f_0, iVar2))
						{
							unk_0xEDB9A377CD8B7F03(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_276(Var4.f_0, iVar1);
					}
				}
				*(uParam1[iVar0 /*3*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (50 - 1))
		{
			uParam1->f_133[iVar0 /*3*/].f_1 = 0;
			iVar0++;
		}
		iVar8 = unk_0x94509A747D107B50();
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if ((unk_0xAC241C22541A2A46(iVar7, &Var9) && !func_275(Var9.f_1)) && iVar70 < 50)
			{
				if (!unk_0xCB8350C6120AA79A(Var9.f_0))
				{
					Var4.f_0 = Var9.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_1 = unk_0x4854EFACAD548EAC(iParam0, Var4.f_0);
					if (unk_0xAFE8D779375271BD(iParam0, Var4.f_0, 0))
					{
						unk_0xEDB9A377CD8B7F03(&(Var4.f_2), (20 + unk_0x5741D34836149CB2(iParam0, Var4.f_0)));
					}
					else
					{
						unk_0xEDB9A377CD8B7F03(&(Var4.f_2), 20);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0xD2FFD78288C5EDEF(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_133[iVar70 /*3*/].f_1 = Var4.f_1;
					iVar1 = 0;
					while (iVar1 < unk_0x19962398E357F6DD(iVar7))
					{
						if (unk_0x2714975FE39D7406(iVar7, iVar1, &Var48))
						{
							if (unk_0xE01F4A336AF08934(iParam0, Var4.f_0, Var48.f_3))
							{
								unk_0xEDB9A377CD8B7F03(&(Var4.f_2), iVar1);
							}
						}
						iVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0xAFE8D779375271BD(iParam0, Var4.f_0, 0))
					{
						Var4.f_0 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_133[iVar70 /*3*/] = { Var4 };
				iVar70++;
			}
			iVar7++;
		}
	}
}

int func_275(int iParam0)
{
	if (unk_0x4B69FB3A5B09A1BA())
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
				return 1;
				break;
			}
	}
	return 0;
}

int func_276(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<4> Var41;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 4:
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
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 7:
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
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_medium");
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
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
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
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
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
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_277(iParam0, &uVar2);
				if (iVar1 != -1)
				{
					if (iParam1 < unk_0x19962398E357F6DD(iVar1))
					{
						if (unk_0x2714975FE39D7406(iVar1, iParam1, &Var41))
						{
							return Var41.f_3;
						}
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_277(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x94509A747D107B50();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0xAC241C22541A2A46(iVar0, uParam1))
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

int func_278(int iParam0)
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

void func_279(int iParam0)
{
	int iVar0;
	
	iVar0 = func_29(iParam0);
	if (func_21(iVar0) && !unk_0x3E0478C40AB5B38D(iParam0))
	{
		Global_97358.f_1729.f_539.f_294[iVar0] = unk_0xF70927A56B84E48A(iParam0);
	}
}

void func_280(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	
	*uParam0 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1) };
	uParam0->f_3 = unk_0xE691E4EA6B4440C6(unk_0x9F92518438215DD0());
	uParam0->f_5 = unk_0x1B8283038D161B68(unk_0x9F92518438215DD0());
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		uParam0->f_4 = unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7());
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
	else if (unk_0x7B47A371E2D93C2C(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (unk_0x94E72F17611BCD3C(Global_68493, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (unk_0x94E72F17611BCD3C(Global_68493, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (unk_0x94E72F17611BCD3C(Global_68493, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (unk_0x94E72F17611BCD3C(Global_68493, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0x835E5CA41A401AEB(unk_0x9F92518438215DD0()) == unk_0xD443D4CF892AD418(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0))
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
		if (func_283(&iVar0))
		{
			if (func_282(iVar0, &Var1, &uVar4))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
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
		else if (unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_281(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_281(struct<3> Param0, char* sParam3, struct<3> Param4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xB0164DDCBF420548(Param0))
	{
		iVar0 = unk_0xD443D4CF892AD418(Param4, sParam3);
		if (!unk_0xF67FA89DDC5D0BDC(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x17F8EA57633BBBD4(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_282(int iParam0, var uParam1, var uParam2)
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
	}
	return !func_130(*uParam1, 0f, 0f, 0f);
}

int func_283(var uParam0)
{
	if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (func_293())
		{
			*uParam0 = func_289(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), 5, -1, 0, 1);
			if (func_288(*uParam0) && !func_284(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_284(int iParam0)
{
	return func_285(iParam0, 0, 1);
}

int func_285(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x94E72F17611BCD3C(Global_90014.f_1272[iParam0], iParam1);
	}
	else if (unk_0x4B69FB3A5B09A1BA())
	{
		if (func_287() == 0)
		{
			return unk_0x94E72F17611BCD3C(func_266(func_286(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x94E72F17611BCD3C(Global_97358.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_286(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 819;
			break;
		
		case 1:
			return 820;
			break;
		
		case 2:
			return 821;
			break;
		
		case 3:
			return 822;
			break;
		
		case 4:
			return 823;
			break;
		
		case 5:
			return 824;
			break;
		
		case 6:
			return 825;
			break;
		
		case 7:
			return 826;
			break;
		
		case 8:
			return 827;
			break;
		
		case 9:
			return 828;
			break;
		
		case 10:
			return 829;
			break;
		
		case 11:
			return 830;
			break;
		
		case 12:
			return 831;
			break;
		
		case 13:
			return 832;
			break;
		
		case 14:
			return 833;
			break;
		
		case 15:
			return 835;
			break;
		
		case 16:
			return 836;
			break;
		
		case 17:
			return 837;
			break;
		
		case 18:
			return 838;
			break;
		
		case 19:
			return 839;
			break;
		
		case 20:
			return 840;
			break;
		
		case 21:
			return 841;
			break;
		
		case 22:
			return 842;
			break;
		
		case 23:
			return 843;
			break;
		
		case 24:
			return 844;
			break;
		
		case 25:
			return 845;
			break;
		
		case 26:
			return 846;
			break;
		
		case 27:
			return 847;
			break;
		
		case 28:
			return 848;
			break;
		
		case 29:
			return 849;
			break;
		
		case 30:
			return 850;
			break;
		
		case 31:
			return 851;
			break;
		
		case 32:
			return 852;
			break;
		
		case 33:
			return 853;
			break;
		
		case 34:
			return 854;
			break;
		
		case 35:
			return 855;
			break;
		
		case 36:
			return 856;
			break;
		
		case 37:
			return 857;
			break;
		
		case 38:
			return 858;
			break;
		
		case 39:
			return 859;
			break;
		
		case 40:
			return 863;
			break;
		
		case 41:
			return 864;
			break;
		
		case 42:
			return 865;
			break;
		
		case 43:
			return 866;
			break;
		
		default:
			break;
	}
	return 3015;
}

int func_287()
{
	return Global_24444;
}

int func_288(int iParam0)
{
	return func_285(iParam0, 5, 1);
}

int func_289(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 43)
	{
		if (iParam3 == 5 || iParam3 == func_292(iVar0))
		{
			if (!bParam5 || func_291(iVar0))
			{
				fVar1 = unk_0x91EAD4F2F9B5B38A(Param0, func_290(iVar0), 1);
				if ((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (iParam6 || iVar0 != 21))
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

Vector3 func_290(int iParam0)
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
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_291(int iParam0)
{
	return func_285(iParam0, 0, 0);
}

int func_292(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 5;
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
	}
	return 5;
}

bool func_293()
{
	return Global_90014.f_290 > 0;
}

int func_294(char* sParam0)
{
	if (unk_0x6B08EC9A88700FBB("BailBond1", sParam0))
	{
		return 0;
	}
	else if (unk_0x6B08EC9A88700FBB("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0x6B08EC9A88700FBB("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0x6B08EC9A88700FBB("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_295(int iParam0)
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

int func_296(char* sParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = unk_0x398F092142D37E17(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_297(iVar0, &uVar1);
		if (unk_0x398F092142D37E17(uVar1) == iVar33)
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

void func_297(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_298(uParam1, "Abigail1", func_300(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_299(iParam0), 1, 0);
			break;
		
		case 1:
			func_298(uParam1, "Abigail2", func_300(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_299(iParam0), 1, 0);
			break;
		
		case 2:
			func_298(uParam1, "Barry1", func_300(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_299(iParam0), 1, 0);
			break;
		
		case 3:
			func_298(uParam1, "Barry2", func_300(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_299(iParam0), 1, 1);
			break;
		
		case 4:
			func_298(uParam1, "Barry3", func_300(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_299(iParam0), 0, 0);
			break;
		
		case 5:
			func_298(uParam1, "Barry3A", func_300(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_299(iParam0), 0, 1);
			break;
		
		case 6:
			func_298(uParam1, "Barry3C", func_300(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_299(iParam0), 0, 1);
			break;
		
		case 7:
			func_298(uParam1, "Barry4", func_300(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_299(iParam0), 0, 0);
			break;
		
		case 8:
			func_298(uParam1, "Dreyfuss1", func_300(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_299(iParam0), 0, 0);
			break;
		
		case 9:
			func_298(uParam1, "Epsilon1", func_300(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_299(iParam0), 0, 0);
			break;
		
		case 10:
			func_298(uParam1, "Epsilon2", func_300(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_299(iParam0), 1, 0);
			break;
		
		case 11:
			func_298(uParam1, "Epsilon3", func_300(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_299(iParam0), 0, 0);
			break;
		
		case 12:
			func_298(uParam1, "Epsilon4", func_300(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_299(iParam0), 0, 0);
			break;
		
		case 13:
			func_298(uParam1, "Epsilon5", func_300(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_299(iParam0), 1, 0);
			break;
		
		case 14:
			func_298(uParam1, "Epsilon6", func_300(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_299(iParam0), 0, 1);
			break;
		
		case 15:
			func_298(uParam1, "Epsilon7", func_300(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_299(iParam0), 0, 0);
			break;
		
		case 16:
			func_298(uParam1, "Epsilon8", func_300(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_299(iParam0), 1, 0);
			break;
		
		case 17:
			func_298(uParam1, "Extreme1", func_300(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_299(iParam0), 0, 1);
			break;
		
		case 18:
			func_298(uParam1, "Extreme2", func_300(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_299(iParam0), 0, 1);
			break;
		
		case 19:
			func_298(uParam1, "Extreme3", func_300(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_299(iParam0), 0, 1);
			break;
		
		case 20:
			func_298(uParam1, "Extreme4", func_300(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_299(iParam0), 0, 0);
			break;
		
		case 21:
			func_298(uParam1, "Fanatic1", func_300(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_299(iParam0), 1, 0);
			break;
		
		case 22:
			func_298(uParam1, "Fanatic2", func_300(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_299(iParam0), 1, 0);
			break;
		
		case 23:
			func_298(uParam1, "Fanatic3", func_300(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_299(iParam0), 0, 1);
			break;
		
		case 24:
			func_298(uParam1, "Hao1", func_300(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_299(iParam0), 0, 1);
			break;
		
		case 25:
			func_298(uParam1, "Hunting1", func_300(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_299(iParam0), 0, 1);
			break;
		
		case 26:
			func_298(uParam1, "Hunting2", func_300(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_299(iParam0), 0, 1);
			break;
		
		case 27:
			func_298(uParam1, "Josh1", func_300(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_299(iParam0), 1, 0);
			break;
		
		case 28:
			func_298(uParam1, "Josh2", func_300(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_299(iParam0), 1, 1);
			break;
		
		case 29:
			func_298(uParam1, "Josh3", func_300(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_299(iParam0), 1, 1);
			break;
		
		case 30:
			func_298(uParam1, "Josh4", func_300(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_299(iParam0), 1, 0);
			break;
		
		case 31:
			func_298(uParam1, "Maude1", func_300(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_299(iParam0), 0, 1);
			break;
		
		case 32:
			func_298(uParam1, "Minute1", func_300(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_299(iParam0), 0, 1);
			break;
		
		case 33:
			func_298(uParam1, "Minute2", func_300(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_299(iParam0), 0, 1);
			break;
		
		case 34:
			func_298(uParam1, "Minute3", func_300(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_299(iParam0), 0, 1);
			break;
		
		case 35:
			func_298(uParam1, "MrsPhilips1", func_300(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_299(iParam0), 0, 0);
			break;
		
		case 36:
			func_298(uParam1, "MrsPhilips2", func_300(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_299(iParam0), 0, 0);
			break;
		
		case 37:
			func_298(uParam1, "Nigel1", func_300(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_299(iParam0), 1, 0);
			break;
		
		case 38:
			func_298(uParam1, "Nigel1A", func_300(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_299(iParam0), 1, 1);
			break;
		
		case 39:
			func_298(uParam1, "Nigel1B", func_300(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_299(iParam0), 1, 1);
			break;
		
		case 40:
			func_298(uParam1, "Nigel1C", func_300(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_299(iParam0), 1, 1);
			break;
		
		case 41:
			func_298(uParam1, "Nigel1D", func_300(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_299(iParam0), 1, 1);
			break;
		
		case 42:
			func_298(uParam1, "Nigel2", func_300(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_299(iParam0), 1, 1);
			break;
		
		case 43:
			func_298(uParam1, "Nigel3", func_300(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_299(iParam0), 1, 1);
			break;
		
		case 44:
			func_298(uParam1, "Omega1", func_300(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_299(iParam0), 0, 0);
			break;
		
		case 45:
			func_298(uParam1, "Omega2", func_300(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_299(iParam0), 0, 0);
			break;
		
		case 46:
			func_298(uParam1, "Paparazzo1", func_300(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_299(iParam0), 0, 1);
			break;
		
		case 47:
			func_298(uParam1, "Paparazzo2", func_300(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_299(iParam0), 0, 1);
			break;
		
		case 48:
			func_298(uParam1, "Paparazzo3", func_300(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_299(iParam0), 0, 0);
			break;
		
		case 49:
			func_298(uParam1, "Paparazzo3A", func_300(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_299(iParam0), 0, 1);
			break;
		
		case 50:
			func_298(uParam1, "Paparazzo3B", func_300(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_299(iParam0), 0, 1);
			break;
		
		case 51:
			func_298(uParam1, "Paparazzo4", func_300(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_299(iParam0), 0, 0);
			break;
		
		case 52:
			func_298(uParam1, "Rampage1", func_300(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_299(iParam0), 0, 0);
			break;
		
		case 54:
			func_298(uParam1, "Rampage3", func_300(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_299(iParam0), 1, 0);
			break;
		
		case 55:
			func_298(uParam1, "Rampage4", func_300(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_299(iParam0), 1, 0);
			break;
		
		case 56:
			func_298(uParam1, "Rampage5", func_300(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_299(iParam0), 0, 0);
			break;
		
		case 53:
			func_298(uParam1, "Rampage2", func_300(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_299(iParam0), 1, 0);
			break;
		
		case 57:
			func_298(uParam1, "TheLastOne", func_300(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_299(iParam0), 0, 1);
			break;
		
		case 58:
			func_298(uParam1, "Tonya1", func_300(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_299(iParam0), 0, 1);
			break;
		
		case 59:
			func_298(uParam1, "Tonya2", func_300(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_299(iParam0), 0, 1);
			break;
		
		case 60:
			func_298(uParam1, "Tonya3", func_300(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_299(iParam0), 0, 1);
			break;
		
		case 61:
			func_298(uParam1, "Tonya4", func_300(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_299(iParam0), 0, 1);
			break;
		
		case 62:
			func_298(uParam1, "Tonya5", func_300(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_299(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_298(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_299(int iParam0)
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

struct<2> func_300(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_295(iParam0) };
	if (unk_0x9E9AFDBF482248F6(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

int func_301(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_302(Global_97358.f_7341.f_99.f_203[10]);
			break;
		
		case 74:
		case 75:
			return func_302(Global_97358.f_7341.f_99.f_203[8]);
			break;
		
		case 84:
		case 85:
			return func_302(Global_97358.f_7341.f_99.f_203[11]);
			break;
		
		case 90:
			return func_302(Global_97358.f_7341.f_99.f_203[7]);
			break;
		
		case 93:
			return func_302(Global_97358.f_7341.f_99.f_203[9]);
			break;
	}
	return 0;
}

int func_302(int iParam0)
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

int func_303(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x398F092142D37E17(sParam0);
	iVar1 = func_304(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_304(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_81155[iVar0 /*34*/].f_6 == iParam0)
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

void func_305(bool bParam0)
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
			Global_97358.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_97358.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_97358.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_97358.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_97358.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_97358.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_51933[iVar0 /*3*/][0] = Global_97358.f_23789[iVar0];
		Global_51933.f_31[iVar0 /*3*/][0] = Global_97358.f_23789.f_11[iVar0];
		Global_51933.f_62[iVar0 /*3*/][0] = Global_97358.f_23789.f_22[iVar0];
		Global_51933.f_93[iVar0 /*3*/][0] = Global_97358.f_23789.f_33[iVar0];
		Global_51933.f_124[iVar0 /*3*/][0] = Global_97358.f_23789.f_44[iVar0];
		Global_51933.f_155[iVar0 /*3*/][0] = Global_97358.f_23789.f_55[iVar0];
		Global_51933.f_186[iVar0 /*3*/][0] = Global_97358.f_23789.f_66[iVar0];
		Global_51933.f_217[iVar0 /*3*/][0] = Global_97358.f_23789.f_77[iVar0];
		Global_51933.f_248[iVar0 /*3*/][0] = Global_97358.f_23789.f_88[iVar0];
		if (!bParam0)
		{
			Global_51933[iVar0 /*3*/][1] = Global_97358.f_23789[iVar0];
			Global_51933.f_31[iVar0 /*3*/][1] = Global_97358.f_23789.f_11[iVar0];
			Global_51933.f_62[iVar0 /*3*/][1] = Global_97358.f_23789.f_22[iVar0];
			Global_51933.f_93[iVar0 /*3*/][1] = Global_97358.f_23789.f_33[iVar0];
			Global_51933.f_124[iVar0 /*3*/][1] = Global_97358.f_23789.f_44[iVar0];
			Global_51933.f_155[iVar0 /*3*/][1] = Global_97358.f_23789.f_55[iVar0];
			Global_51933.f_186[iVar0 /*3*/][1] = Global_97358.f_23789.f_66[iVar0];
			Global_51933.f_217[iVar0 /*3*/][1] = Global_97358.f_23789.f_77[iVar0];
			Global_51933.f_248[iVar0 /*3*/][1] = Global_97358.f_23789.f_88[iVar0];
		}
		iVar0++;
	}
}

int func_306()
{
	int iVar0;
	
	if (!unk_0x746960881FB19A89(Local_93[0 /*2*/]))
	{
		if (unk_0x746960881FB19A89(Global_86864[0]))
		{
			unk_0x336AE92FD68DEF98(Global_86864[0], 1, 1);
			Local_93[0 /*2*/] = Global_86864[0];
			unk_0xC932874B6133A2D2(Global_86864[0], 0);
			unk_0x060D3260330D112D(Local_93[0 /*2*/], "PS_PREP_VEHICLES_GROUP", 0);
			func_200(Local_93[0 /*2*/], 0);
			unk_0x499D8200722FC1CE(Local_93[0 /*2*/]);
		}
	}
	if (!unk_0x746960881FB19A89(Local_93[1 /*2*/]))
	{
		if (unk_0x746960881FB19A89(Global_86864[1]))
		{
			unk_0x336AE92FD68DEF98(Global_86864[1], 1, 1);
			Local_93[1 /*2*/] = Global_86864[1];
			unk_0xC932874B6133A2D2(Global_86864[1], 0);
			unk_0x060D3260330D112D(Local_93[1 /*2*/], "PS_PREP_VEHICLES_GROUP", 0);
			unk_0x499D8200722FC1CE(Local_93[1 /*2*/]);
		}
	}
	if (!unk_0x746960881FB19A89(Local_93[2 /*2*/]))
	{
		if (unk_0x746960881FB19A89(Global_86864[2]))
		{
			unk_0x336AE92FD68DEF98(Global_86864[2], 1, 1);
			Local_93[2 /*2*/] = Global_86864[2];
			unk_0xC932874B6133A2D2(Global_86864[2], 0);
			unk_0x060D3260330D112D(Local_93[2 /*2*/], "PS_PREP_VEHICLES_GROUP", 0);
			unk_0x499D8200722FC1CE(Local_93[2 /*2*/]);
		}
	}
	if (!unk_0x746960881FB19A89(Local_110[4 /*14*/]))
	{
		if (unk_0x746960881FB19A89(Global_86864.f_9[0]))
		{
			unk_0x336AE92FD68DEF98(Global_86864.f_9[0], 1, 1);
			Local_110[4 /*14*/] = Global_86864.f_9[0];
			func_204(Local_110[4 /*14*/], 0);
		}
	}
	if (!unk_0x746960881FB19A89(Local_110[0 /*14*/]))
	{
		if (unk_0x746960881FB19A89(Global_86864.f_9[2]))
		{
			unk_0x336AE92FD68DEF98(Global_86864.f_9[2], 1, 1);
			Local_110[0 /*14*/] = Global_86864.f_9[2];
			func_204(Local_110[0 /*14*/], 0);
		}
	}
	if (!unk_0x746960881FB19A89(Local_110[1 /*14*/]))
	{
		if (unk_0x746960881FB19A89(Global_86864.f_9[3]))
		{
			unk_0x336AE92FD68DEF98(Global_86864.f_9[3], 1, 1);
			Local_110[1 /*14*/] = Global_86864.f_9[3];
			func_204(Local_110[1 /*14*/], 0);
		}
	}
	if (!unk_0x746960881FB19A89(Local_110[2 /*14*/]))
	{
		if (unk_0x746960881FB19A89(Global_86864.f_9[4]))
		{
			unk_0x336AE92FD68DEF98(Global_86864.f_9[4], 1, 1);
			Local_110[2 /*14*/] = Global_86864.f_9[4];
			func_204(Local_110[2 /*14*/], 0);
		}
	}
	if (!unk_0x746960881FB19A89(Local_110[3 /*14*/]))
	{
		if (unk_0x746960881FB19A89(Global_86864.f_9[5]))
		{
			unk_0x336AE92FD68DEF98(Global_86864.f_9[5], 1, 1);
			Local_110[3 /*14*/] = Global_86864.f_9[5];
			func_204(Local_110[3 /*14*/], 0);
		}
	}
	if (!unk_0x746960881FB19A89(Local_110[5 /*14*/]))
	{
		if (unk_0x746960881FB19A89(Global_86864.f_9[6]))
		{
			unk_0x336AE92FD68DEF98(Global_86864.f_9[6], 1, 1);
			Local_110[5 /*14*/] = Global_86864.f_9[6];
			func_204(Local_110[5 /*14*/], 0);
		}
	}
	if (!unk_0x746960881FB19A89(Local_110[6 /*14*/]))
	{
		if (unk_0x746960881FB19A89(Global_86864.f_9[7]))
		{
			unk_0x336AE92FD68DEF98(Global_86864.f_9[7], 1, 1);
			Local_110[6 /*14*/] = Global_86864.f_9[7];
			func_204(Local_110[6 /*14*/], 0);
		}
	}
	if (!unk_0x746960881FB19A89(Local_110[7 /*14*/]))
	{
		if (unk_0x746960881FB19A89(Global_86864.f_9[8]))
		{
			unk_0x336AE92FD68DEF98(Global_86864.f_9[8], 1, 1);
			Local_110[7 /*14*/] = Global_86864.f_9[8];
			func_204(Local_110[7 /*14*/], 0);
		}
	}
	if (!unk_0x746960881FB19A89(Local_110[8 /*14*/]))
	{
		if (unk_0x746960881FB19A89(Global_86864.f_9[9]))
		{
			unk_0x336AE92FD68DEF98(Global_86864.f_9[9], 1, 1);
			Local_110[8 /*14*/] = Global_86864.f_9[9];
			func_204(Local_110[8 /*14*/], 0);
		}
	}
	if (!unk_0x746960881FB19A89(uLocal_107[0]))
	{
		if (unk_0x746960881FB19A89(Global_86864.f_28[0]))
		{
			unk_0x336AE92FD68DEF98(Global_86864.f_28[0], 1, 1);
			uLocal_107[0] = Global_86864.f_28[0];
		}
	}
	if (!unk_0x746960881FB19A89(uLocal_107[1]))
	{
		if (unk_0x746960881FB19A89(Global_86864.f_28[1]))
		{
			unk_0x336AE92FD68DEF98(Global_86864.f_28[1], 1, 1);
			uLocal_107[1] = Global_86864.f_28[1];
		}
	}
	iVar0 = 0;
	while (iVar0 <= (9 - 1))
	{
		if (func_31(Local_110[iVar0 /*14*/]))
		{
			unk_0xA50AD6983D49A772(Local_110[iVar0 /*14*/], iLocal_492);
			unk_0x499D8200722FC1CE(Local_110[iVar0 /*14*/]);
		}
		iVar0++;
	}
	cLocal_474 = { Global_87265 };
	StringCopy(&Global_87265, "", 64);
	func_307(228, 0f, 0f, 2000f);
	if (((((((((((((unk_0x746960881FB19A89(Local_93[0 /*2*/]) && unk_0x746960881FB19A89(Local_93[1 /*2*/])) && unk_0x746960881FB19A89(Local_93[2 /*2*/])) && unk_0x746960881FB19A89(Local_110[4 /*14*/])) && unk_0x746960881FB19A89(Local_110[0 /*14*/])) && unk_0x746960881FB19A89(Local_110[1 /*14*/])) && unk_0x746960881FB19A89(Local_110[2 /*14*/])) && unk_0x746960881FB19A89(Local_110[3 /*14*/])) && unk_0x746960881FB19A89(Local_110[5 /*14*/])) && unk_0x746960881FB19A89(Local_110[6 /*14*/])) && unk_0x746960881FB19A89(Local_110[7 /*14*/])) && unk_0x746960881FB19A89(Local_110[8 /*14*/])) && unk_0x746960881FB19A89(uLocal_107[0])) && unk_0x746960881FB19A89(uLocal_107[1]))
	{
		return 1;
	}
	return 0;
}

void func_307(int iParam0, struct<3> Param1)
{
	int iVar0;
	
	if (unk_0x2E6E8D325977B3EC(Global_24748[iParam0 /*23*/].f_19))
	{
		unk_0xAB1A4C1CDE66050B(Global_24748[iParam0 /*23*/].f_19, Param1);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_24748[iParam0 /*23*/][iVar0 /*3*/] = { Param1 };
		iVar0++;
	}
}

void func_308(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	if (func_198())
	{
		unk_0xE5556978B2858C53(0);
		unk_0xF76EE56D3E7DAF1B(&(Global_89962.f_20), 2);
		unk_0xAA7F469826C4FBBF(1);
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			unk_0xC70D4A06E38B2711(unk_0xCFC72E446B0B3AD7(), 0, 0);
		}
		Global_89958 = { Param0 };
		Global_89961 = uParam3;
		Global_89957 = 1;
		if (iParam4 == 1)
		{
			unk_0xEDB9A377CD8B7F03(&(Global_89962.f_20), 14);
		}
		else
		{
			unk_0xF76EE56D3E7DAF1B(&(Global_89962.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0xEDB9A377CD8B7F03(&(Global_89962.f_20), 24);
		}
		else
		{
			unk_0xF76EE56D3E7DAF1B(&(Global_89962.f_20), 24);
		}
		func_197(1);
	}
}

int func_309()
{
	if (!Global_89962 == 10 && !Global_89962 == 9)
	{
		return 0;
	}
	return Global_89962.f_2;
}

void func_310()
{
	func_33(&Local_402, 1, 0);
	iLocal_446 = 0;
	while (iLocal_446 <= (3 - 1))
	{
		if (func_31(Local_100[iLocal_446 /*2*/]))
		{
			if (Local_100[iLocal_446 /*2*/] != unk_0x9F92518438215DD0())
			{
				unk_0xE8105B7E3908547D(Local_100[iLocal_446 /*2*/], 1);
				func_193(&(Local_100[iLocal_446 /*2*/]), 1, 0, 1);
			}
			if (unk_0x2E6E8D325977B3EC(Local_100[iLocal_446 /*2*/].f_1))
			{
				unk_0x0451B5D93A4BDAA0(&(Local_100[iLocal_446 /*2*/].f_1));
			}
		}
		iLocal_446++;
	}
	iLocal_446 = 0;
	while (iLocal_446 <= (9 - 1))
	{
		if (func_31(Local_110[iLocal_446 /*14*/]))
		{
			func_193(&(Local_110[iLocal_446 /*14*/]), 1, 0, 1);
			if (unk_0x2E6E8D325977B3EC(Local_110[iLocal_446 /*14*/].f_1))
			{
				unk_0x0451B5D93A4BDAA0(&(Local_110[iLocal_446 /*14*/].f_1));
			}
			func_225(&(Local_110[iLocal_446 /*14*/].f_2));
		}
		iLocal_446++;
	}
	iLocal_446 = 0;
	while (iLocal_446 <= (2 - 1))
	{
		if (unk_0x746960881FB19A89(uLocal_107[iLocal_446]))
		{
			func_313(&(uLocal_107[iLocal_446]), 0);
		}
		iLocal_446++;
	}
	iLocal_446 = 0;
	while (iLocal_446 <= (3 - 1))
	{
		if (func_31(Local_93[iLocal_446 /*2*/]))
		{
			func_181(&(Local_93[iLocal_446 /*2*/]));
		}
		if (unk_0x2E6E8D325977B3EC(Local_93[iLocal_446 /*2*/].f_1))
		{
			unk_0x0451B5D93A4BDAA0(&(Local_93[iLocal_446 /*2*/].f_1));
		}
		iLocal_446++;
	}
	func_312(0);
	unk_0xDA31FF1629FE9693();
	unk_0xC70D4A06E38B2711(unk_0xCFC72E446B0B3AD7(), 1, 0);
	func_311();
	if (func_31(unk_0x9F92518438215DD0()))
	{
		unk_0x32D18ECD9E6F9BE2(unk_0x9F92518438215DD0());
	}
	unk_0xD643E324F7E6A17B(uLocal_444, 0);
	unk_0xB1E35D138037D248(1f);
	unk_0xF72219EF3DF47F66(5);
	unk_0xB3B57AEE7B7BA0E2(1);
	unk_0xC48BE7195D873776(1);
	unk_0x2250E32CE864C09F(5, 1);
	unk_0x2250E32CE864C09F(3, 1);
	unk_0x2250E32CE864C09F(1, 1);
	unk_0x2250E32CE864C09F(10, 1);
	unk_0x2250E32CE864C09F(9, 1);
	unk_0xC9752099913837E6();
	unk_0xCF023D488D3EAE4D(Vector(33.8865f, 3596.518f, 1383.51f) - Vector(1f, 5f, 5f), Vector(33.8865f, 3596.518f, 1383.51f) + Vector(2f, 5f, 5f), 1, 1);
	unk_0x60DAE84D0B296FD2(joaat("crusader"), 0);
	unk_0x60DAE84D0B296FD2(joaat("barracks"), 0);
	iLocal_433 = 0;
	bLocal_455 = false;
	unk_0x3F5C3AAAFB03D2FD(1);
	func_228(&Local_81, 0, 0);
	unk_0x5DC6B0185B12682A(0);
	unk_0xE60DEFFB2A853900();
}

void func_311()
{
	Global_86222 = 0;
}

void func_312(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_96414, unk_0xC2E9075570B5D2B9(), 24);
		Global_96408 = 1;
	}
	else
	{
		StringCopy(&Global_96414, "NULL", 24);
		Global_96408 = 0;
	}
}

void func_313(var uParam0, bool bParam1)
{
	if (unk_0x746960881FB19A89(*uParam0))
	{
		if (unk_0xDAF5609B36EC10E7(*uParam0))
		{
			unk_0x8ED1C81168F4A10C(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0x8FCF30FFEAA1C4D4(uParam0);
		}
		else
		{
			unk_0xB6EA72847B4B89BA(*uParam0);
		}
	}
}

void func_314()
{
	int iVar0;
	
	if (unk_0x197501C41CB2403F("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_97358.f_7341 || func_7(0))
	{
		if (!func_315())
		{
			iVar0 = func_5();
			if (iVar0 != -1)
			{
				if (!func_186(iVar0))
				{
					return;
				}
				unk_0xEDB9A377CD8B7F03(&(Global_81119[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_191();
		}
	}
}

int func_315()
{
	if (((Global_89962 == 13 || Global_89962 == 10) || Global_89962 == 11) || Global_89962 == 12)
	{
		return 0;
	}
	return 1;
}

