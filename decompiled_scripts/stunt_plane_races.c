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
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	float fLocal_28 = 0f;
	struct<3> Local_29 = { 0, 0, 0 } ;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	struct<3> Local_47 = { 0, 0, 0 } ;
	struct<304> Local_50 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_365 = 8;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 4;
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
	var uLocal_384 = 4;
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
	var uLocal_399 = 4;
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
	var uLocal_414 = 4;
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
	var uLocal_429 = 4;
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
	var uLocal_444 = 4;
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
	var uLocal_459 = 4;
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
	var uLocal_474 = 4;
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
	struct<3> Local_492 = { 0, 0, 0 } ;
	int iLocal_495 = 0;
	int iLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	bool bLocal_500 = 0;
	bool bLocal_501 = 0;
	int iLocal_502 = 0;
	int iLocal_503 = 0;
	int iLocal_504 = 0;
	int iLocal_505 = 0;
	int iLocal_506[5] = { 0, 0, 0, 0, 0 };
	float fLocal_512 = 0f;
	float fLocal_513 = 0f;
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
	var uLocal_528 = 8;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 2;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 8;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 8;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	float fLocal_558 = 0f;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	bool bLocal_561 = 0;
	var uLocal_562 = 35;
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
	var uLocal_878 = 50;
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
	var uLocal_982 = 40;
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
	var uLocal_1256 = 0;
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
	var uLocal_1272 = 0;
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
	var uLocal_1367 = 0;
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
	var uLocal_1418 = 0;
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
	var uLocal_1444 = 0;
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
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 1;
	var uLocal_1539 = 0;
	var uLocal_1540 = 1;
	var uLocal_1541 = 1;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 1;
	var uLocal_1546 = 1;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 3;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 4;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 2;
	var uLocal_1663 = 0;
	var uLocal_1664 = 4;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 0;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 4;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 12;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 3;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	int iLocal_1986 = 0;
	var uLocal_1987 = 0;
	int iLocal_1988 = 0;
	int iLocal_1989 = 0;
	int iLocal_1990 = 0;
	int iLocal_1991 = 0;
	int iLocal_1992 = 0;
	int iLocal_1993 = 0;
	int iLocal_1994 = 0;
	int iLocal_1995 = 0;
	int iLocal_1996 = 0;
	int iLocal_1997 = 0;
	int iLocal_1998 = 0;
	int iLocal_1999 = 0;
	int iLocal_2000 = 0;
	int iLocal_2001 = 0;
	int iLocal_2002 = 0;
	int iLocal_2003 = 0;
	int iLocal_2004 = 0;
	int iLocal_2005 = 0;
	int iLocal_2006 = 0;
	int iLocal_2007 = 0;
	int iLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	int iLocal_2052[5] = { 0, 0, 0, 0, 0 };
	var uLocal_2058[5] = { 0, 0, 0, 0, 0 };
	var uLocal_2064[5] = { 0, 0, 0, 0, 0 };
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	int iLocal_2072 = 0;
	float fLocal_2073 = 0f;
	int iLocal_2074 = 0;
	int iLocal_2075 = 0;
	int iLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 16;
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 0;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 0;
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 0;
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
	var uLocal_2150 = 0;
	var uLocal_2151 = 0;
	var uLocal_2152 = 0;
	var uLocal_2153 = 0;
	var uLocal_2154 = 0;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = 0;
	var uLocal_2158 = 0;
	var uLocal_2159 = 0;
	var uLocal_2160 = 0;
	var uLocal_2161 = 0;
	var uLocal_2162 = 0;
	var uLocal_2163 = 0;
	var uLocal_2164 = 0;
	var uLocal_2165 = 0;
	var uLocal_2166 = 0;
	var uLocal_2167 = 0;
	var uLocal_2168 = 0;
	var uLocal_2169 = 0;
	var uLocal_2170 = 0;
	var uLocal_2171 = 0;
	var uLocal_2172 = 0;
	var uLocal_2173 = 0;
	var uLocal_2174 = 0;
	var uLocal_2175 = 0;
	var uLocal_2176 = 0;
	var uLocal_2177 = 0;
	var uLocal_2178 = 0;
	var uLocal_2179 = 0;
	var uLocal_2180 = 0;
	var uLocal_2181 = 0;
	var uLocal_2182 = 0;
	var uLocal_2183 = 0;
	var uLocal_2184 = 0;
	var uLocal_2185 = 0;
	var uLocal_2186 = 0;
	var uLocal_2187 = 0;
	var uLocal_2188 = 0;
	var uLocal_2189 = 0;
	var uLocal_2190 = 0;
	var uLocal_2191 = 0;
	var uLocal_2192 = 0;
	var uLocal_2193 = 0;
	var uLocal_2194 = 0;
	var uLocal_2195 = 0;
	var uLocal_2196 = 0;
	var uLocal_2197 = 0;
	var uLocal_2198 = 0;
	var uLocal_2199 = 0;
	var uLocal_2200 = 0;
	var uLocal_2201 = 0;
	var uLocal_2202 = 0;
	var uLocal_2203 = 0;
	var uLocal_2204 = 0;
	var uLocal_2205 = 0;
	var uLocal_2206 = 0;
	var uLocal_2207 = 0;
	var uLocal_2208 = 0;
	var uLocal_2209 = 0;
	var uLocal_2210 = 0;
	var uLocal_2211 = 0;
	var uLocal_2212 = 0;
	var uLocal_2213 = 0;
	var uLocal_2214 = 0;
	var uLocal_2215 = 0;
	var uLocal_2216 = 0;
	var uLocal_2217 = 0;
	var uLocal_2218 = 0;
	var uLocal_2219 = 0;
	var uLocal_2220 = 0;
	var uLocal_2221 = 0;
	var uLocal_2222 = 0;
	var uLocal_2223 = 0;
	var uLocal_2224 = 0;
	var uLocal_2225 = 0;
	var uLocal_2226 = 0;
	var uLocal_2227 = 0;
	var uLocal_2228 = 0;
	var uLocal_2229 = 0;
	var uLocal_2230 = 0;
	var uLocal_2231 = 0;
	var uLocal_2232 = 0;
	var uLocal_2233 = 0;
	var uLocal_2234 = 0;
	var uLocal_2235 = 0;
	var uLocal_2236 = 0;
	var uLocal_2237 = 0;
	var uLocal_2238 = 0;
	var uLocal_2239 = 0;
	var uLocal_2240 = 0;
	var uLocal_2241 = 0;
	var uLocal_2242 = 0;
	var uLocal_2243 = 0;
	var uLocal_2244 = 0;
	var uLocal_2245 = 0;
	char* sLocal_2246 = NULL;
	float fLocal_2247 = 0f;
	float fLocal_2248 = 0f;
	bool bLocal_2249 = 0;
	bool bLocal_2250 = 0;
	struct<3> Local_2251 = { 0, 0, 0 } ;
	struct<3> Local_2254 = { 0, 0, 0 } ;
	struct<3> Local_2257 = { 0, 0, 0 } ;
	float fLocal_2260 = 0f;
	float fLocal_2261 = 0f;
	var uLocal_2262 = 0;
	var uLocal_2263 = 0;
	var uLocal_2264 = -1;
	var uLocal_2265 = 0;
	var uLocal_2266 = 0;
	var uLocal_2267 = 0;
	var uLocal_2268 = 0;
	var uLocal_2269 = 0;
	var uLocal_2270 = 0;
	var uLocal_2271 = 1000;
	var uLocal_2272 = 1000;
	var uLocal_2273 = 0;
	char[] cLocal_2274[8] = 0;
	char* sLocal_2275 = NULL;
	bool bLocal_2276 = 0;
	var uLocal_2277 = 0;
	var uLocal_2278 = 0;
	var uLocal_2279 = 0;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	var uLocal_2282 = 0;
	var uLocal_2283 = 0;
	var uLocal_2284 = 0;
	var uLocal_2285 = 0;
	bool bLocal_2286 = 0;
	int iLocal_2287 = 0;
	int iLocal_2288 = 0;
	struct<7> Local_2289 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2296 = 0;
	var uLocal_2297 = 0;
	var uLocal_2298 = 0;
	var uLocal_2299 = 0;
	var uLocal_2300 = 0;
	int iLocal_2301 = 0;
	var uLocal_2302 = 0;
	char* sLocal_2303 = NULL;
	char* sLocal_2304 = NULL;
	char* sLocal_2305 = NULL;
	struct<3> Local_2306 = { 0, 0, 0 } ;
	struct<3> Local_2309 = { 0, 0, 0 } ;
	int iLocal_2312 = 0;
	int iLocal_2313 = 0;
	int iLocal_2314 = 0;
	int iLocal_2315 = 0;
	int iLocal_2316 = 0;
	int iLocal_2317 = 0;
	int iLocal_2318 = 0;
	int iLocal_2319 = 0;
	struct<7> Local_2320 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2327 = 0;
	var uLocal_2328 = 0;
	var uLocal_2329 = 0;
	var uLocal_2330 = 1132396544;
	var uLocal_2331 = 1132396544;
	var uLocal_2332 = 1132396544;
	var uLocal_2333 = 0;
	var uLocal_2334 = -1082130432;
	var uLocal_2335 = 0;
	var uLocal_2336 = 0;
	var uLocal_2337 = 8;
	var uLocal_2338 = 0;
	var uLocal_2339 = 0;
	var uLocal_2340 = 0;
	var uLocal_2341 = 0;
	var uLocal_2342 = 0;
	var uLocal_2343 = 0;
	var uLocal_2344 = 0;
	var uLocal_2345 = 0;
	var uLocal_2346 = 0;
	var uLocal_2347 = 0;
	var uLocal_2348 = 0;
	var uLocal_2349 = 0;
	var uLocal_2350 = 0;
	var uLocal_2351 = 0;
	var uLocal_2352 = 0;
	var uLocal_2353 = 0;
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 0;
	var uLocal_2359 = 0;
	var uLocal_2360 = 0;
	var uLocal_2361 = 0;
	var uLocal_2362 = 0;
	var uLocal_2363 = 0;
	var uLocal_2364 = 0;
	var uLocal_2365 = 0;
	var uLocal_2366 = 0;
	var uLocal_2367 = 0;
	var uLocal_2368 = 0;
	var uLocal_2369 = 0;
	var uLocal_2370 = 0;
	var uLocal_2371 = 0;
	var uLocal_2372 = 0;
	var uLocal_2373 = 0;
	var uLocal_2374 = 0;
	var uLocal_2375 = 0;
	var uLocal_2376 = 0;
	var uLocal_2377 = 0;
	var uLocal_2378 = 0;
	var uLocal_2379 = 0;
	var uLocal_2380 = 0;
	var uLocal_2381 = 0;
	var uLocal_2382 = 0;
	var uLocal_2383 = 0;
	var uLocal_2384 = 0;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 0;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 0;
	var uLocal_2391 = 0;
	var uLocal_2392 = 0;
	var uLocal_2393 = 0;
	var uLocal_2394 = -1;
	var uLocal_2395 = 1092616192;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = 0;
	int iLocal_2404 = 0;
	int iLocal_2405 = 0;
	bool bLocal_2406 = 0;
	bool bLocal_2407 = 0;
	var uLocal_2408 = 0;
	bool bLocal_2409 = 0;
	int iLocal_2410 = 0;
	struct<2863> Local_2411 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_5274 = 1;
	var uLocal_5275 = 0;
	var uLocal_5276 = 0;
	var uLocal_5277 = 0;
	var uLocal_5278 = 0;
	struct<3> Local_5279 = { 0, 0, 0 } ;
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
	sLocal_17 = "NULL";
	fLocal_22 = 80f;
	fLocal_23 = 140f;
	fLocal_24 = 180f;
	iLocal_27 = 3;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	Local_44 = { 1691.228f, 3251.785f, 44.2574f };
	Local_47 = { 2.5652f, 0f, -4.1481f };
	Local_492 = { 500f, 500f, 500f };
	iLocal_495 = -1;
	iLocal_504 = 1;
	fLocal_512 = 0.008f;
	fLocal_513 = 0.013f;
	fLocal_558 = ((0.05f + 0.275f) - 0.01f);
	fLocal_2073 = -1f;
	iLocal_2074 = 1;
	fLocal_2247 = 0.2f;
	fLocal_2248 = 0.2f;
	fLocal_2261 = 0f;
	cLocal_2274 = "SPR_UI_FAILD";
	sLocal_2275 = "SPR_UI_FRETRY";
	sLocal_2303 = "CHECKPOINT_NORMAL";
	sLocal_2304 = "CHECKPOINT_MISSED";
	sLocal_2305 = "CHECKPOINT_PERFECT";
	Local_2306 = { 1694.74f, 3276.502f, 41.2796f };
	Local_2309 = { 8.79494f, 0.59893f, 154.8464f };
	bLocal_2406 = true;
	bLocal_2407 = true;
	bLocal_2409 = true;
	Local_5279 = { -1497.708f, -3449.576f, 7.3477f };
	if (unk_0xC11469DCA6FC3BB5(114))
	{
		func_567();
	}
	unk_0x36694B456BE80D0A(1);
	Local_2320.f_1 = 0;
	Local_2320.f_5 = 0;
	Local_2320.f_6 = 0;
	while (true)
	{
		func_566();
		switch (Local_2320.f_1)
		{
			case 0:
				if (!func_555())
				{
					Local_2320.f_1 = 1;
				}
				break;
			
			case 1:
				if (!func_1())
				{
					Local_2320.f_1 = 2;
				}
				break;
			
			case 2:
				func_567();
				break;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

int func_1()
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	
	if (unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
	{
	}
	if (unk_0xD42BD6EB2E0F1677(Local_50.f_1))
	{
		if (!unk_0x7D5B1F88E7504BBA(Local_50.f_1))
		{
			if (!unk_0x9C8E4D238C999648(unk_0x096275889B8E0EE0(), Local_50.f_1, 0))
			{
				if (unk_0x29B959D9755B1A71(unk_0x096275889B8E0EE0()))
				{
					Local_50.f_1 = unk_0xD9F4C6FBC525ECC2(unk_0x096275889B8E0EE0());
				}
			}
		}
	}
	else if (unk_0x29B959D9755B1A71(unk_0x096275889B8E0EE0()))
	{
		Local_50.f_1 = unk_0xD9F4C6FBC525ECC2(unk_0x096275889B8E0EE0());
	}
	else
	{
		Local_50.f_1 = unk_0x52F45D033645181B(unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1), 10f, joaat("stunt"), 0);
	}
	if (Local_2411.f_2861 != 0)
	{
		Local_2411.f_2862 = (Local_2411.f_2862 - 25);
		if (Local_2411.f_2862 <= 0)
		{
			unk_0x0DED5B0C8EBAAE12(Local_2411.f_2861);
			Local_2411.f_2861 = 0;
			bLocal_2276 = false;
		}
		else
		{
			if (bLocal_2276)
			{
				iVar4 = 6;
			}
			else
			{
				iVar4 = 1;
			}
			func_552(func_553(iVar4), &uVar0, &uVar1, &uVar2, &uVar3);
			unk_0xCAAFC225E33B1D15(Local_2411.f_2861, uVar0, uVar1, uVar2, func_551(unk_0x11E019C8F43ACC8A((1.5f * IntToFloat(Local_2411.f_2862))), 255));
			unk_0x99AFF17222D4DEB4(Local_2411.f_2861, uVar0, uVar1, uVar2, Local_2411.f_2862);
		}
	}
	func_550();
	unk_0x907F512A4AAA1461("AMMUNATION");
	unk_0x562F5D788AF3FA80(0, 99, 1);
	unk_0x562F5D788AF3FA80(0, 100, 1);
	if (Local_2320.f_6 == 4)
	{
		unk_0xD5C198A62F1DEB0A(unk_0x217E9DC48139933D());
		unk_0xDB38F247BD421708(unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1), 10f);
		if (unk_0xB86D29B10F627379(Local_50.f_1, 0))
		{
			if (unk_0x1BD7C371CE257C3E(Local_50.f_1))
			{
				unk_0x8390751DC40C1E98(Local_50.f_1);
			}
		}
	}
	switch (Local_2320.f_6)
	{
		case 0:
			unk_0x89EEEEF0CEB4D045(0);
			Local_2320.f_0 = -1;
			Local_50.f_10 = 0;
			unk_0xBBB134FB9D50C0CC(1734.802f, 3224.105f, 41.3709f, 1762.067f, 3258.69f, 40.5188f, 0, 1);
			if (unk_0xD42BD6EB2E0F1677(Local_50.f_1))
			{
				unk_0x96F78A6A075D55D9(Local_50.f_1, 1);
				Local_2411.f_2859 = 0;
				Local_2320.f_6 = 3;
			}
			else
			{
				Local_2320.f_6 = 1;
			}
			break;
		
		case 1:
			Local_2320.f_6 = 18;
			break;
		
		case 2:
			if (unk_0xD42BD6EB2E0F1677(Local_50.f_1))
			{
				unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 0, 512);
				unk_0x96F78A6A075D55D9(Local_50.f_1, 1);
				Local_2411.f_2859 = 0;
				Local_2320.f_6 = 3;
			}
			break;
		
		case 3:
			if (Local_2411.f_0)
			{
			}
			else if ((unk_0x153AD457764FD704(uLocal_2045) && unk_0x63EFCC7E1810B8E6(uLocal_2045)) && unk_0x37F9A426FBCF4AF2())
			{
				if (unk_0x153AD457764FD704(Local_2411.f_2858))
				{
					unk_0x4E67E0B6D7FD5145(Local_2411.f_2858, 0);
				}
				unk_0xB4FD7446BAB2F394("MinigameTransitionOut");
				unk_0x4102732DF6B4005F("MinigameTransitionIn", 0, 1);
				Local_2411.f_2858 = unk_0x98B99B9F27E2D60B(26379945, Local_44, Local_47, 34.9705f, 1, 2);
				unk_0xCE7A90B160F75046(0);
				unk_0xB90411F480457A6C(false);
				unk_0x4102732DF6B4005F("MinigameTransitionOut", 0, 0);
				unk_0xF9EE7D419EE49DE6(uLocal_2045, Local_44.f_0, Local_44.f_1, (Local_44.f_2 + 1000f));
				unk_0x63DFA6810AD78719(uLocal_2045, 90f, Local_47.f_1, Local_47.f_2, 2);
				unk_0x8B15AE2987C1AC8F(Local_2411.f_2858, uLocal_2045, 500, 1, 1);
				unk_0xB906B139171B1845(-1, "QUIT_WHOOSH", "HUD_MINI_GAME_SOUNDSET", 1);
				unk_0x33281167E4942E4F(1, 0, 3000, 1, 0, 0);
			}
			else
			{
				func_549(500);
				if (unk_0x153AD457764FD704(Local_2411.f_2858))
				{
					unk_0x4E67E0B6D7FD5145(Local_2411.f_2858, 0);
				}
				Local_2411.f_2858 = unk_0x98B99B9F27E2D60B(26379945, Local_44, Local_47, 34.9705f, 1, 2);
				unk_0x33281167E4942E4F(1, 0, 3000, 1, 0, 0);
			}
			func_548(&uLocal_2296);
			func_547(1);
			unk_0x86CCAF7CE493EFBE();
			Local_2320.f_6 = 4;
			break;
		
		case 4:
			if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()) && !unk_0x7D5B1F88E7504BBA(Local_50.f_1))
			{
				unk_0xB64CFA14CB9A2E78(Local_50.f_1, 1, 0);
			}
			if (unk_0xB0FB6CFAA5A1C833())
			{
				unk_0x562F5D788AF3FA80(2, 199, 1);
			}
			unk_0x562F5D788AF3FA80(2, 200, 1);
			unk_0x1B3DA717B9AFF828(0);
			Local_2411.f_2 = Local_2411.f_0;
			if (Local_2411.f_0)
			{
				if (unk_0xD42BD6EB2E0F1677(Local_2411.f_358[0 /*189*/].f_9))
				{
					unk_0x96F78A6A075D55D9(Local_2411.f_358[0 /*189*/].f_9, 4);
				}
				iLocal_1989 = 0;
				Local_2411.f_0 = 0;
				func_516();
				Local_2320.f_6 = 8;
			}
			else if (Local_2411.f_2859)
			{
				if (unk_0x3758E345C82DAFF2())
				{
					if ((Local_2411.f_2859 && unk_0x3249D2128D293FA5(2, 202)) && unk_0x83666F9FB8FEBD4B() > 500)
					{
						unk_0x1EB7AE7DB1F26D70(-1, "CANCEL", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
						Local_2411.f_2859 = 0;
						Local_2411.f_2860 = 1;
						func_515(&(Local_50.f_119));
						unk_0xC1B1E9A034A63A62(0);
					}
					if (!Local_2411.f_2860 && func_514(&uLocal_1549))
					{
						Local_2411.f_2860 = 1;
						func_512(Local_2411.f_2860);
					}
					func_450(&(Local_50.f_118), Global_96383, &(Local_50.f_24[Global_96383 /*8*/]));
				}
				else if (func_440(&iLocal_1986, 0))
				{
					Local_2411.f_2859 = 0;
					iLocal_1986 = 0;
					func_515(&(Local_50.f_119));
					unk_0xC1B1E9A034A63A62(0);
				}
			}
			else
			{
				if ((func_407(&Local_2411, 0) && !iLocal_502) && !bLocal_501)
				{
					func_515(&(Local_50.f_119));
				}
				if (iLocal_505 && unk_0x3758E345C82DAFF2())
				{
					func_515(&(Local_50.f_119));
					iLocal_505 = 0;
				}
				if ((((!Local_2411.f_2859 && !iLocal_502) && !bLocal_501) && (iLocal_504 || !unk_0x3758E345C82DAFF2())) && (unk_0x3249D2128D293FA5(2, 211) || unk_0xDAB4BF48B46C66EA(2, 211)))
				{
					Local_2411.f_2859 = 1;
					unk_0x1EB7AE7DB1F26D70(-1, "SELECT", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
					func_406(&uLocal_1549);
					Local_2411.f_2860 = func_514(&uLocal_1549);
					func_512(Local_2411.f_2860);
					unk_0xC1B1E9A034A63A62(0);
				}
				if (func_347(&uLocal_5274, &(Local_2411.f_1)))
				{
					iLocal_1989 = 0;
					if (Local_50.f_10 != -1)
					{
						func_339();
						func_516();
						if (unk_0x5E58342602E94718(Local_50.f_1, Local_2306, 5f, 5f, 5f, 0, 1, 0))
						{
							if (!unk_0x7D5B1F88E7504BBA(Local_50.f_1))
							{
								func_338(&uLocal_5276);
								Local_2320.f_6 = 8;
							}
						}
						else if (!unk_0x7D5B1F88E7504BBA(Local_50.f_1))
						{
							Local_2320.f_6 = 8;
						}
					}
					else
					{
						Local_2320.f_6 = 7;
					}
				}
			}
			break;
		
		case 7:
			unk_0x36CDD81627A6FCD2();
			if (unk_0xB86D29B10F627379(Local_50.f_1, 0))
			{
				unk_0x33281167E4942E4F(0, 0, 3000, 1, 0, 0);
				Local_2320.f_6 = 18;
			}
			else
			{
				if (unk_0xD42BD6EB2E0F1677(Local_2411.f_358[0 /*189*/].f_9))
				{
					unk_0x7D9EFB7AD6B19754(Local_2411.f_358[0 /*189*/].f_9, 0);
				}
				unk_0xF6A103413A202C37(unk_0x096275889B8E0EE0(), Local_2306, 1, 0, 0, 1);
				unk_0x9CC8314DFEDE441E(unk_0x096275889B8E0EE0(), Local_2309, 2, 1);
				if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
				{
					unk_0x7263332501E07F52(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0));
				}
				unk_0x5D1EB123EAC5D071(0f);
				unk_0xFB760AF4F537B8BF(0f, 1065353216);
				if (unk_0xD42BD6EB2E0F1677(Local_2411.f_358[0 /*189*/].f_9))
				{
					if (!unk_0xEEA50AAE36800059())
					{
						unk_0xDE9A139B002A7C00(Local_2306, unk_0x2412D9C05BB09B97(unk_0x096275889B8E0EE0()), 500f, 0);
					}
					if (unk_0x9F3CD46F4B1D9255())
					{
						unk_0xE27DBC64CB87AA75();
						Local_2320.f_6 = 18;
					}
				}
				else
				{
					Local_2320.f_6 = 18;
				}
			}
			break;
		
		case 8:
			unk_0x72ED2136CB143D65();
			if (Local_50.f_10 == 0)
			{
				unk_0xBF9B4D6267E8C26D(Local_50.f_1);
				if (func_337(iLocal_2287, 16))
				{
					func_335(&iLocal_2287, 16);
				}
				unk_0xB64CFA14CB9A2E78(Local_50.f_1, 1, 1);
				unk_0xF80258351D8421EB(unk_0x096275889B8E0EE0(), Local_50.f_1, -1);
				unk_0x79811282A9D1AE56(Local_50.f_1);
				func_334();
				uLocal_2045 = unk_0x98B99B9F27E2D60B(26379945, 1702.487f, 3279.545f, 41.9968f, -2.9399f, 0f, 110.4428f, 45.0218f, 1, 2);
				unk_0x87295BCA613800C8(Local_2411.f_2858, 0);
				Local_2320.f_6 = 9;
			}
			else if (func_333(1000))
			{
				unk_0x33281167E4942E4F(0, 0, 3000, 1, 0, 0);
				unk_0x5D1EB123EAC5D071(0f);
				unk_0x79811282A9D1AE56(Local_50.f_1);
				unk_0xBF9B4D6267E8C26D(Local_50.f_1);
				if (unk_0xF5472C80DF2FF847())
				{
					func_334();
					Local_2320.f_6 = 10;
				}
			}
			break;
		
		case 9:
			if (!((unk_0x63EFCC7E1810B8E6(uLocal_2045) && unk_0x578F8F1CAA17BD2B(uLocal_2045)) || (unk_0x63EFCC7E1810B8E6(Local_2411.f_2858) && unk_0x578F8F1CAA17BD2B(Local_2411.f_2858))))
			{
				unk_0x8C7C7FF7CF0E5153(1, 0, 3, 0);
				func_334();
				Local_2320.f_6 = 10;
			}
			break;
		
		case 10:
			Local_2411.f_25 = 0;
			Local_2320.f_6 = 11;
			break;
		
		case 11:
			if (!func_319(&Local_2411))
			{
				func_547(1);
				if (Local_2411.f_2)
				{
					unk_0xDE9A139B002A7C00(unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1), unk_0x2412D9C05BB09B97(unk_0x096275889B8E0EE0()), 500f, 0);
				}
				if (Local_50.f_10 == 0)
				{
					func_318("SPR_TAXI_GATE", 10000, 1);
					if (!func_337(iLocal_2287, 16))
					{
						func_310(&Local_2411, 0, 1);
						func_309(&iLocal_2287, 16);
					}
					if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
					{
						unk_0x7D9EFB7AD6B19754(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0), 0);
						unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 1, 0);
					}
					unk_0xD63FE3AF9FB3D53F(1);
					unk_0x1B3DA717B9AFF828(1);
					Local_2320.f_6 = 13;
				}
				else
				{
					Local_2320.f_6 = 13;
				}
				Local_2411.f_2 = 0;
			}
			break;
		
		case 13:
			if (!unk_0xEEA50AAE36800059() || unk_0x9F3CD46F4B1D9255())
			{
				if (unk_0xEEA50AAE36800059())
				{
					unk_0xE27DBC64CB87AA75();
				}
				unk_0xCE7A90B160F75046(0);
				unk_0xB90411F480457A6C(true);
				unk_0x7D9EFB7AD6B19754(Local_2411.f_358[0 /*189*/].f_9, 0);
				func_334();
				if (func_337(iLocal_2287, 16))
				{
					func_335(&iLocal_2287, 16);
				}
				if (Local_50.f_10 == 0)
				{
					if (func_549(500))
					{
						Local_2411.f_26 = 0;
						Local_2320.f_6 = 14;
					}
				}
				else
				{
					func_308(&Local_2411);
					unk_0x5D1EB123EAC5D071(0f);
					unk_0xFB760AF4F537B8BF(0f, 1065353216);
					if (func_549(500))
					{
						Local_2411.f_26 = 0;
						Local_2320.f_6 = 14;
					}
				}
			}
			break;
		
		case 14:
			if (Local_2320.f_0 == 1)
			{
				return 1;
			}
			if (func_24(&Local_2411))
			{
				return 1;
			}
			iLocal_1989 = 3;
			func_23();
			func_13();
			if (!Local_2411.f_0)
			{
				func_10(&(Local_2411.f_6));
				func_9(&(Local_2411.f_358[0 /*189*/]), Local_50.f_3, Local_50.f_6, 0f);
				if (unk_0xD42BD6EB2E0F1677(Local_2411.f_358[0 /*189*/].f_9))
				{
					unk_0x7263332501E07F52(Local_2411.f_358[0 /*189*/].f_9);
				}
				if (unk_0xDE9A139B002A7C00(Local_44, func_8(Local_47), 4500f, 0))
				{
					unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 0, 0);
					while (!unk_0x9F3CD46F4B1D9255() && func_5(&(Local_2411.f_6)) < 20f)
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					unk_0xE27DBC64CB87AA75();
					unk_0x25F6EF88664540E2(Local_44, func_8(Local_47));
					func_4(&(Local_2411.f_6));
					Local_2320.f_6 = 15;
				}
				else if (func_2(&(Local_2411.f_6), 20f))
				{
					func_4(&(Local_2411.f_6));
					Local_2320.f_6 = 15;
				}
			}
			else
			{
				Local_2320.f_6 = 3;
			}
			break;
		
		case 15:
			if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
			{
				unk_0x96F78A6A075D55D9(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0), 1);
			}
			Local_2411.f_2859 = 0;
			Local_2320.f_6 = 3;
			break;
		
		case 18:
			if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
			{
				unk_0x96F78A6A075D55D9(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0), 1);
			}
			func_407(&Local_2411, 1);
			if (unk_0xF5472C80DF2FF847())
			{
				func_549(1000);
			}
			else
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_2(var uParam0, float fParam1)
{
	if (func_3(uParam0))
	{
		if (func_5(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_3(var uParam0)
{
	return unk_0x4ED6CFDFE8D4131A(*uParam0, 1);
}

void func_4(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_5(var uParam0)
{
	if (func_3(uParam0))
	{
		if (func_7(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_6(unk_0x4ED6CFDFE8D4131A(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_6(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x4F67E8ECA7D3F667()) / 1000f);
	}
	if (unk_0x03A753E2C8458335())
	{
		iVar0 = unk_0x6AEB0DF30A9DB9F1();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x4F67E8ECA7D3F667()) / 1000f);
}

bool func_7(var uParam0)
{
	return unk_0x4ED6CFDFE8D4131A(*uParam0, 2);
}

Vector3 func_8(struct<3> Param0)
{
	return (-unk_0x0BADBFA3B172435F(Param0.f_2) * unk_0xD0FFB162F40A139C(Param0.f_0)), (unk_0xD0FFB162F40A139C(Param0.f_2) * unk_0xD0FFB162F40A139C(Param0.f_0)), unk_0x0BADBFA3B172435F(Param0.f_0);
}

void func_9(var uParam0, struct<3> Param1, var uParam4, float fParam5)
{
	unk_0xF6A103413A202C37(uParam0->f_9, Param1, 1, 0, 0, 1);
	unk_0xCF2B9C0645C4651B(uParam0->f_9, uParam4);
	unk_0xF9F92AF49F12F6E7(uParam0->f_9, fParam5);
}

void func_10(var uParam0)
{
	if (!func_3(uParam0))
	{
		func_338(uParam0);
	}
	else
	{
		func_11(uParam0);
	}
}

void func_11(var uParam0)
{
	func_12(uParam0, 0f);
}

void func_12(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_6(unk_0x4ED6CFDFE8D4131A(*uParam0, 4)) - fParam1);
	unk_0xF73FBE4845C43B5B(uParam0, 1);
	unk_0x7D1D4A3602B6AD4E(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_13()
{
	if (Global_97353.f_17297.f_12[4 /*8*/].f_4 == 1)
	{
		if (Global_97353.f_17297.f_6[4] > 0f)
		{
			if (Global_97353.f_17297.f_6[4] <= func_22(4))
			{
				func_14(125, 0, 0);
			}
		}
	}
}

void func_14(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_20((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_97353.f_8448[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97353.f_8448[iParam0 /*12*/].f_6 == 11 || Global_97353.f_8448[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97353.f_8448[iParam0 /*12*/].f_5 = 1;
		Global_97353.f_8448[iParam0 /*12*/].f_10 = iParam1;
		Global_97353.f_8448[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x53BF44E14DB83845(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x53BF44E14DB83845(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x53BF44E14DB83845(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_15();
	}
}

void func_15()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_97089 = 0;
	Global_97090 = 0;
	Global_97091 = 0;
	Global_97092 = 0;
	Global_97093 = 0;
	Global_97094 = 0;
	Global_97095 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97353.f_8448.f_3853;
	Global_97353.f_8448.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97353.f_8448[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97353.f_8448[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_97089++;
					fVar1 = (fVar1 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_97090++;
					fVar2 = (fVar2 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_97091++;
					fVar3 = (fVar3 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_97092++;
					fVar4 = (fVar4 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_97093++;
					fVar5 = (fVar5 + (Global_97353.f_8448[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_97094++;
					fVar6 = (fVar6 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_97095++;
					fVar7 = (fVar7 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_97072 > 0)
	{
		if (Global_97089 == Global_97072)
		{
			fVar1 = 55f;
		}
	}
	if (Global_97073 > 0)
	{
		if (Global_97090 == Global_97073)
		{
			fVar2 = 10f;
		}
	}
	if (Global_97074 > 0)
	{
		if (Global_97091 == Global_97074)
		{
			fVar3 = 0f;
		}
	}
	if (Global_97075 > 0)
	{
		if (Global_97092 == Global_97075)
		{
			fVar4 = 10f;
		}
	}
	if (Global_97076 > 0)
	{
		if (((Global_97093 == Global_97076 || (Global_97076 * 10 / Global_97093) < 41) || Global_97093 > Global_97079) || Global_97093 == Global_97079)
		{
			if (!unk_0x4ED6CFDFE8D4131A(Global_97353.f_8448.f_3856, 14))
			{
				if (Global_97093 == Global_97076)
				{
					unk_0x53BF44E14DB83845(joaat("num_rndevents_completed"), Global_97076, 0);
					unk_0xF73FBE4845C43B5B(&(Global_97353.f_8448.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_97077 > 0)
	{
		if (Global_97094 == Global_97077)
		{
			fVar6 = 15f;
		}
	}
	if (Global_97078 > 0)
	{
		if (Global_97095 == Global_97078)
		{
			fVar7 = 5f;
		}
	}
	Global_97353.f_8448.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_97093 > Global_97079 || Global_97093 == Global_97079)
	{
		iVar9 = Global_97079;
	}
	else
	{
		iVar9 = Global_97093;
	}
	unk_0xA4DDF5DF95E65EED(joaat("num_missions_completed"), Global_97089, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_missions_available"), Global_97072, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_minigames_completed"), Global_97090, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_minigames_available"), Global_97073, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_oddjobs_completed"), Global_97091, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_oddjobs_available"), Global_97074, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_rndpeople_completed"), Global_97092, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_rndpeople_available"), Global_97075, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_rndevents_available"), Global_97079, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_misc_completed"), (Global_97095 + Global_97094), 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_misc_available"), (Global_97078 + Global_97077), 1);
	Global_97096 = (Global_97089 * 100 / Global_97072);
	Global_97098 = ((Global_97091 + Global_97090) * 100 / (Global_97074 + Global_97073));
	Global_97097 = ((Global_97092 + iVar9) * 100 / (Global_97075 + Global_97079));
	Global_97099 = ((Global_97094 + Global_97095) * 100 / (Global_97077 + Global_97078));
	unk_0x481BDF6A10C5EF67(joaat("total_progress_made"), Global_97353.f_8448.f_3853, 1);
	unk_0xA4DDF5DF95E65EED(joaat("percent_story_missions"), Global_97096, 1);
	unk_0xA4DDF5DF95E65EED(joaat("percent_ambient_missions"), Global_97097, 1);
	unk_0xA4DDF5DF95E65EED(joaat("percent_oddjobs"), Global_97098, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97353.f_8448.f_3853))
	{
		func_19(13, unk_0xF34EE736CF047844(Global_97353.f_8448.f_3853));
	}
	if (!unk_0x0010E412C61393C2())
	{
		if (!Global_68245)
		{
			if (func_18() == 2 == 0 && !unk_0x03A753E2C8458335())
			{
				if (unk_0x61E3D90420572762())
				{
					Global_97087 = 0;
				}
				if (!Global_54750)
				{
					func_16();
				}
			}
		}
	}
}

int func_16()
{
	if (func_17(0))
	{
		return 0;
	}
	if (Global_90001.f_8)
	{
		if (Global_90001.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90001.f_10 > 1)
	{
		return 0;
	}
	Global_90001.f_10++;
	return 1;
}

bool func_17(bool bParam0)
{
	if (!bParam0 && unk_0x8E34C953364A76DD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x4ED6CFDFE8D4131A(Global_68493, 0);
}

int func_18()
{
	return Global_24444;
}

int func_19(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 61)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x70521018B2248C91(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xB3F01FFD71B4B4DC(iParam0, iParam1);
	}
	return 0;
}

int func_20(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	
	if (iParam2 == -1)
	{
		iParam2 = func_21();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x9DD8670FD28D049C((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x4BECE45A720E7361((iParam0 - 0)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x9DD8670FD28D049C((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x4BECE45A720E7361((iParam0 - 192)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x9DD8670FD28D049C((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x4BECE45A720E7361((iParam0 - 513)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x9DD8670FD28D049C((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x4BECE45A720E7361((iParam0 - 705)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x0177152C7E362CA1((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x4BECE45A720E7361((iParam0 - 3111)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x0177152C7E362CA1((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x4BECE45A720E7361((iParam0 - 2919)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x9DC305C3520822DE((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x4BECE45A720E7361((iParam0 - 4207)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x9DC305C3520822DE((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x4BECE45A720E7361((iParam0 - 4335)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_21()
{
	return Global_1312737;
}

float func_22(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 130f;
			break;
		
		case 1:
			return 120f;
			break;
		
		case 2:
			return 120f;
			break;
		
		case 3:
			return 170f;
			break;
		
		case 4:
			return 180f;
			break;
	}
	return -1f;
}

void func_23()
{
	iLocal_2312 = 0;
	iLocal_2313 = 0;
	iLocal_2314 = 0;
	iLocal_2315 = 0;
	iLocal_2316 = 0;
	iLocal_2317 = 0;
	iLocal_2318 = 0;
	iLocal_2319 = 0;
}

int func_24(var uParam0)
{
	switch (uParam0->f_26)
	{
		case 0:
			func_335(&iLocal_2287, 4);
			unk_0xB5F6539FA93ECBF6(2);
			func_307(uParam0);
			uParam0->f_17 = func_306();
			if (Local_50.f_10 == 0)
			{
				if (!func_337(iLocal_2287, 16))
				{
					func_310(uParam0, 0, 1);
					func_310(uParam0, 1, 0);
					func_309(&iLocal_2287, 16);
				}
			}
			else
			{
				func_308(uParam0);
				if (!func_337(iLocal_2287, 16))
				{
					func_310(uParam0, 0, 1);
					func_310(uParam0, 1, 0);
					func_309(&iLocal_2287, 16);
				}
			}
			func_4(&(uParam0->f_14));
			iLocal_2301 = 0;
			unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 0, 0);
			uParam0->f_26 = 1;
			break;
		
		case 1:
			unk_0xB5F6539FA93ECBF6(2);
			if (Local_50.f_10 == 0)
			{
				if (func_337(iLocal_2287, 16))
				{
					func_335(&iLocal_2287, 16);
				}
				func_304(uParam0);
				uParam0->f_26 = 7;
			}
			else
			{
				func_308(uParam0);
				if (!func_280(&(uParam0->f_14)))
				{
					if (!unk_0x251241CAEC707106())
					{
						unk_0x33281167E4942E4F(0, 1, 3000, 1, 0, 0);
					}
					if (func_337(iLocal_2287, 16))
					{
						func_335(&iLocal_2287, 16);
					}
					unk_0xD63FE3AF9FB3D53F(1);
					func_304(uParam0);
					if (Local_50.f_10 == 0 && (Global_97353.f_17297.f_6[0] > Local_50.f_112[0] || Global_97353.f_17297.f_6[0] == 0f))
					{
						func_279("SPR_HELP_GATE", 10000);
					}
					uParam0->f_26 = 7;
				}
			}
			break;
		
		case 2:
			if (!func_337(iLocal_2287, 1))
			{
				unk_0xC1B1E9A034A63A62(0);
				func_240(uParam0);
				func_239(&(Local_50.f_119), 0, 0, 1, 1);
				func_238(&(Local_50.f_119), "SPR_CONT2", 2, 201, 1, 1, 0);
				func_237(&(Local_50.f_119), 1);
				func_309(&iLocal_2287, 1);
			}
			if (unk_0xA805B04DD97BE4E6())
			{
				unk_0x0BFC2C61FB5B6CA1(1);
			}
			if (func_236("SPR_RETR_FAIL", 0, 0))
			{
				unk_0x00686F7B3723B82F();
			}
			if (unk_0xA805B04DD97BE4E6())
			{
				unk_0x0BFC2C61FB5B6CA1(1);
			}
			if (func_236("SPR_RETR_FAIL", 0, 0))
			{
				unk_0x00686F7B3723B82F();
			}
			unk_0xC1B1E9A034A63A62(0);
			func_234();
			func_233(0);
			unk_0xA50674CBC79771CC(unk_0x217E9DC48139933D());
			unk_0x643E8DF0C2B25C6F(unk_0x217E9DC48139933D(), 0);
			unk_0x562F5D788AF3FA80(0, 75, 1);
			func_232(1);
			uParam0->f_26 = 4;
			break;
		
		case 4:
			unk_0x562F5D788AF3FA80(0, 75, 1);
			func_230();
			if (!unk_0x7D5B1F88E7504BBA(uParam0->f_358[0 /*189*/].f_9))
			{
				if (!unk_0x613C15D5D8DB781F(uParam0->f_358[0 /*189*/].f_9) && unk_0x153AD457764FD704(uLocal_2046))
				{
					unk_0x9BF96B57254E7889(uLocal_2046, 2);
					unk_0x1794B4FCC84D812F(uParam0->f_358[0 /*189*/].f_9, 0);
					unk_0x7D9EFB7AD6B19754(uParam0->f_358[0 /*189*/].f_9, 1);
					func_229();
				}
			}
			if (!func_215(uParam0, bLocal_2406, bLocal_2407))
			{
				func_229();
				func_214(0);
				unk_0x0BFC2C61FB5B6CA1(1);
				if (func_337(iLocal_2287, 1))
				{
					func_335(&iLocal_2287, 1);
				}
				func_213(0, 0);
				if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
				{
					unk_0x0F1ABE64C3C18E5A(unk_0x096275889B8E0EE0());
				}
				unk_0xFB760AF4F537B8BF(0f, 1065353216);
				unk_0x5D1EB123EAC5D071(0f);
				unk_0x89EEEEF0CEB4D045(0);
				iLocal_2410 = unk_0xC488DC56F57F2505();
				unk_0xB906B139171B1845(iLocal_2410, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", 1);
				func_4(&uLocal_2277);
				uParam0->f_26 = 5;
			}
			break;
		
		case 5:
			if (!unk_0x7D5B1F88E7504BBA(uParam0->f_358[0 /*189*/].f_9))
			{
				unk_0xF6A103413A202C37(uParam0->f_358[0 /*189*/].f_9, Local_2306, 1, 0, 0, 1);
				unk_0x9CC8314DFEDE441E(uParam0->f_358[0 /*189*/].f_9, Local_2309, 2, 1);
				unk_0x1794B4FCC84D812F(uParam0->f_358[0 /*189*/].f_9, 1);
				unk_0x562F5D788AF3FA80(0, 75, 1);
				unk_0x7263332501E07F52(uParam0->f_358[0 /*189*/].f_9);
				unk_0xA5C38736C426FCB8(uParam0->f_358[0 /*189*/].f_9, 0);
			}
			iLocal_2405 = 0;
			uParam0->f_26 = 6;
			uParam0->f_358[0 /*189*/].f_23 = 7;
			break;
		
		case 6:
			uParam0->f_26 = 8;
			break;
		
		case 7:
			unk_0x029823681D10A10E(uLocal_2296, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 100, 0);
			if (!func_337(iLocal_2287, 16))
			{
				func_310(uParam0, 0, 1);
				func_310(uParam0, 1, 0);
				func_309(&iLocal_2287, 16);
				func_233(1);
				func_212(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/]);
			}
			if (uParam0->f_1)
			{
				func_185(uParam0);
				func_183(uParam0);
			}
			else
			{
				func_180(&uLocal_2262, 0);
				func_229();
				unk_0xB90411F480457A6C(false);
			}
			if (!func_41(uParam0, Local_50.f_0))
			{
				unk_0xF27F981A5EBAEFDB("MGSP_END");
				func_28(uParam0);
				func_4(&(uParam0->f_14));
				uParam0->f_26 = 2;
				func_4(&(uParam0->f_22));
			}
			break;
		
		case 8:
			unk_0x562F5D788AF3FA80(0, 75, 1);
			func_27(&(uParam0->f_17));
			func_229();
			func_25();
			return 0;
			break;
	}
	return 1;
}

void func_25()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_337(uLocal_2070, iVar0))
		{
			func_335(&uLocal_2070, iVar0);
		}
		if (func_337(uLocal_2071, iVar0))
		{
			func_335(&uLocal_2071, iVar0);
		}
		if (unk_0xD42BD6EB2E0F1677(uLocal_2058[iVar0]))
		{
			unk_0xE20A909D8C4A70F8(&(uLocal_2058[iVar0]));
		}
		if (unk_0xD42BD6EB2E0F1677(uLocal_2064[iVar0]))
		{
			unk_0xCC0EF140F99365C5(&(uLocal_2064[iVar0]));
		}
		iVar0++;
	}
	func_26(&iLocal_2052);
	iVar0 = 0;
	while (iVar0 < iLocal_2052)
	{
		iLocal_2052[iVar0] = 0;
		iVar0++;
	}
}

void func_26(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0x4AD96EF928BD4F9A((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_27(var uParam0)
{
	if (unk_0x64BAE9BE701E6C19(*uParam0))
	{
		unk_0x6215C0F9FFF76BAD(uParam0);
		*uParam0 = 0;
	}
}

void func_28(var uParam0)
{
	int iVar0;
	
	if (!func_7(&(uParam0->f_3)))
	{
		func_40(&(uParam0->f_3));
	}
	unk_0xA5C38736C426FCB8(uParam0->f_358[0 /*189*/].f_9, 1);
	unk_0x562F5D788AF3FA80(0, 75, 1);
	func_39(uParam0);
	if (Local_50.f_0 == 0)
	{
		func_38(uParam0);
	}
	func_32(uParam0);
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		func_30(&(uParam0->f_358[iVar0 /*189*/]));
		if (iVar0 != 0)
		{
			func_29(&(uParam0->f_358[iVar0 /*189*/]));
		}
		iVar0++;
	}
}

void func_29(var uParam0)
{
}

void func_30(var uParam0)
{
	if (!unk_0x7D5B1F88E7504BBA(uParam0->f_9))
	{
		if (Local_50.f_0 != 0)
		{
			func_31();
		}
	}
}

void func_31()
{
}

void func_32(var uParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		if (!unk_0x7D5B1F88E7504BBA(uParam0->f_358[iVar0 /*189*/].f_8))
		{
			if (uParam0->f_358[iVar0 /*189*/].f_8 == unk_0x096275889B8E0EE0())
			{
				iVar1 = func_37(Local_50.f_10);
				if (iVar1 <= 0 || iVar1 > uParam0->f_358[iVar0 /*189*/].f_12)
				{
					func_36(Local_50.f_10, uParam0->f_358[iVar0 /*189*/].f_12);
				}
				fVar2 = func_35(Local_50.f_10);
				func_34(Local_50.f_10, unk_0xBBDA792448DB5A89(unk_0x11E019C8F43ACC8A(uParam0->f_358[0 /*189*/].f_13)));
				if (fVar2 == 0f || fVar2 > uParam0->f_358[0 /*189*/].f_13)
				{
					func_33(Local_50.f_10, unk_0xBBDA792448DB5A89(unk_0x11E019C8F43ACC8A(uParam0->f_358[0 /*189*/].f_13)));
				}
				return;
			}
		}
		iVar0++;
	}
}

void func_33(int iParam0, float fParam1)
{
	Global_97353.f_17297.f_6[iParam0] = fParam1;
}

void func_34(int iParam0, float fParam1)
{
	Local_50.f_18[iParam0] = fParam1;
}

var func_35(int iParam0)
{
	var uVar0;
	
	uVar0 = Global_97353.f_17297.f_6[iParam0];
	return uVar0;
}

void func_36(int iParam0, var uParam1)
{
	Global_97353.f_17297[iParam0] = uParam1;
}

int func_37(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = Global_97353.f_17297[iParam0];
	return iVar0;
}

void func_38(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		iVar2 = 1;
		iVar1 = 0;
		while (iVar1 < uParam0->f_13)
		{
			if (iVar0 != iVar1)
			{
				if (uParam0->f_358[iVar0 /*189*/].f_13 > uParam0->f_358[iVar1 /*189*/].f_13)
				{
					iVar2++;
				}
			}
			iVar1++;
		}
		uParam0->f_358[iVar0 /*189*/].f_12 = iVar2;
		iVar0++;
	}
}

void func_39(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		if (uParam0->f_358[iVar0 /*189*/].f_11 != uParam0->f_12)
		{
			uParam0->f_358[iVar0 /*189*/].f_13 = (uParam0->f_358[0 /*189*/].f_13 + (IntToFloat((uParam0->f_12 - uParam0->f_358[iVar0 /*189*/].f_11)) * unk_0xE29F927A961F8AAA(0.5f, 2.5f)));
		}
		iVar0++;
	}
}

void func_40(var uParam0)
{
	if (func_3(uParam0))
	{
		if (!func_7(uParam0))
		{
			uParam0->f_2 = (func_6(unk_0x4ED6CFDFE8D4131A(*uParam0, 4)) - uParam0->f_1);
			unk_0xF73FBE4845C43B5B(uParam0, 2);
		}
	}
}

int func_41(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	struct<10> Var2;
	struct<10> Var12;
	int iVar22;
	bool bVar23;
	int iVar24;
	char cVar25[16];
	
	if (Local_50.f_10 == 0)
	{
		if (uParam0->f_358[0 /*189*/].f_11 == 0)
		{
			func_11(&(uParam0->f_3));
			if (func_337(iLocal_2288, 131072))
			{
				unk_0x23298B468F7D88B6(uParam0->f_358[0 /*189*/].f_9, 4);
				func_335(&iLocal_2288, 131072);
			}
		}
		else if (uParam0->f_358[0 /*189*/].f_11 == 1 && !func_337(iLocal_2288, 131072))
		{
			func_279("SPR_INFO_BON", 10000);
			func_309(&iLocal_2288, 131072);
			if (func_337(iLocal_2288, 262144))
			{
				func_335(&iLocal_2288, 262144);
			}
		}
		else if (uParam0->f_358[0 /*189*/].f_11 == 4 && !func_337(iLocal_2288, 262144))
		{
			func_279("SPR_INFO_RESET", 10000);
			func_309(&iLocal_2288, 262144);
		}
	}
	if (func_3(&(uParam0->f_3)))
	{
		fVar0 = func_5(&(uParam0->f_3));
	}
	func_162(uParam0->f_358[0 /*189*/].f_11, uParam0->f_1);
	unk_0x562F5D788AF3FA80(0, 75, 1);
	iVar1 = 0;
	while (iVar1 < uParam0->f_13)
	{
		if (uParam0->f_358[iVar1 /*189*/].f_11 < uParam0->f_12)
		{
			bVar23 = false;
			if (uParam0->f_358[iVar1 /*189*/].f_8 == unk_0x096275889B8E0EE0())
			{
				bVar23 = true;
			}
			iVar22 = uParam0->f_358[iVar1 /*189*/].f_11;
			if (uParam0->f_358[iVar1 /*189*/].f_11 >= uParam0->f_12)
			{
				Var2 = { uParam0->f_27[(uParam0->f_12 - 1) /*10*/] };
			}
			else
			{
				Var2 = { uParam0->f_27[iVar22 /*10*/] };
			}
			if (iVar22 < (uParam0->f_12 - 1))
			{
				Var12 = { uParam0->f_27[iVar22 + 1 /*10*/] };
			}
			else
			{
				Var12 = { Var2 };
			}
			if (iVar22 != uParam0->f_12)
			{
				uParam0->f_358[iVar1 /*189*/].f_13 = (fVar0 - uParam0->f_358[iVar1 /*189*/].f_15);
				if (uParam0->f_358[iVar1 /*189*/].f_13 < 0f)
				{
					uParam0->f_358[iVar1 /*189*/].f_13 = 0f;
				}
			}
			if (!func_105(uParam0, &(uParam0->f_358[iVar1 /*189*/]), bVar23))
			{
				if ((bVar23 && uParam0->f_1) && (Local_50.f_10 != 0 || uParam0->f_358[0 /*189*/].f_11 > 0))
				{
					if (!func_3(&uLocal_2398))
					{
						func_338(&uLocal_2398);
					}
					if (func_5(&uLocal_2401) >= 6.5f)
					{
						if (!unk_0x2503EB2EA811EC9A(2, 222))
						{
							func_11(&uLocal_2398);
						}
						else if (func_5(&uLocal_2398) >= 1.5f)
						{
							uParam0->f_1 = 0;
							func_335(&iLocal_2288, 32768);
							uParam0->f_358[0 /*189*/].f_23 = 6;
						}
					}
					else if (unk_0x2503EB2EA811EC9A(2, 222))
					{
						if (func_5(&(uParam0->f_3)) < 6.5f)
						{
							func_103("SPR_HELP_RST1", &iLocal_2288, 65536, 0);
						}
						else
						{
							func_103("SPR_HELP_RST", &iLocal_2288, 32768, 0);
						}
					}
				}
				if (!unk_0x6CFF81397164A1D3(uParam0->f_358[iVar1 /*189*/].f_8))
				{
					func_101(uParam0, iVar1);
					if (Local_50.f_0 == 0 && func_3(&uLocal_2283))
					{
						return 1;
					}
					if (bVar23)
					{
						if (uParam0->f_358[iVar1 /*189*/].f_14 != 0f)
						{
							func_338(&(uParam0->f_14));
						}
						if (func_337(iLocal_2287, 8))
						{
							func_310(uParam0, iVar22, 1);
							if (iVar22 < (uParam0->f_12 - 1))
							{
								func_310(uParam0, iVar22 + 1, 0);
							}
							func_335(&iLocal_2287, 8);
						}
					}
					if (uParam0->f_1)
					{
						uParam0->f_11 = func_93(uParam0, &Var2, &Var12, uParam0->f_358[iVar1 /*189*/].f_8);
						func_90(&Var2, &Var12);
					}
					if (uParam0->f_11 != -1)
					{
						if (iParam1 == 0)
						{
							func_85(&(uParam0->f_358[iVar1 /*189*/]), bVar23, uParam0->f_11);
						}
						bLocal_2276 = func_84(uParam0->f_11);
						uParam0->f_358[iVar1 /*189*/].f_11++;
						iVar22 = uParam0->f_358[iVar1 /*189*/].f_11;
						if (iVar22 >= (uParam0->f_12 - 1))
						{
							Var2 = { uParam0->f_27[(uParam0->f_12 - 1) /*10*/] };
						}
						else
						{
							Var2 = { uParam0->f_27[iVar22 /*10*/] };
						}
						if (bVar23)
						{
							func_78(uParam0, (iVar22 - 1));
							if (iVar22 == uParam0->f_12)
							{
								iVar24 = 0;
								if (func_3(&(uParam0->f_3)))
								{
									if (!func_7(&(uParam0->f_3)))
									{
										func_40(&(uParam0->f_3));
									}
									if (uParam0->f_358[0 /*189*/].f_13 > 0f)
									{
										if (uParam0->f_358[0 /*189*/].f_13 <= Local_50.f_106[Local_50.f_10])
										{
											iVar24 = 1;
										}
										else if (uParam0->f_358[0 /*189*/].f_13 <= (((Local_50.f_112[Local_50.f_10] - Local_50.f_106[Local_50.f_10]) / 2f) + Local_50.f_106[Local_50.f_10]))
										{
											iVar24 = 2;
										}
										else if (uParam0->f_358[0 /*189*/].f_13 <= Local_50.f_112[Local_50.f_10])
										{
											iVar24 = 3;
										}
									}
								}
								if (iVar24 == 0)
								{
								}
								if (iVar24 > 0)
								{
									return 0;
								}
								else
								{
									uParam0->f_1 = 0;
									uParam0->f_358[iVar1 /*189*/].f_11 = (uParam0->f_358[iVar1 /*189*/].f_11 - 1);
									unk_0x00686F7B3723B82F();
									sLocal_2275 = "SPR_TIME_FAIL";
									uParam0->f_358[0 /*189*/].f_23 = 0;
								}
							}
							else
							{
								func_310(uParam0, iVar22, 1);
								if (iVar22 < (uParam0->f_12 - 1))
								{
									func_310(uParam0, iVar22 + 1, 0);
								}
							}
							if (uParam0->f_358[iVar1 /*189*/].f_14 == 0f)
							{
								if (func_3(&(uParam0->f_14)))
								{
									func_4(&(uParam0->f_14));
								}
							}
							if (uParam0->f_12 > 0)
							{
								if (uParam0->f_10 > 0f)
								{
									if (iVar22 == unk_0xF2DB717A73826179((IntToFloat(uParam0->f_12) / 2f)))
									{
										uParam0->f_358[iVar1 /*189*/].f_14 = 0f;
										func_11(&(uParam0->f_14));
									}
								}
							}
						}
						else if (uParam0->f_358[iVar1 /*189*/].f_11 >= uParam0->f_12)
						{
							if (Local_50.f_0 != 2)
							{
								if (!unk_0x7D5B1F88E7504BBA(uParam0->f_358[iVar1 /*189*/].f_8))
								{
									func_29(&(uParam0->f_358[iVar1 /*189*/]));
								}
							}
						}
						else
						{
							if (Local_50.f_0 != 1)
							{
								if (iVar1 != 0)
								{
									func_76(uParam0, uParam0->f_358[iVar1 /*189*/].f_8, uParam0->f_358[iVar1 /*189*/].f_9, uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/], uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/].f_7, iVar1);
								}
							}
							else
							{
								StringCopy(&cVar25, "Offroad_", 16);
								StringIntConCat(&cVar25, Local_50.f_10 + 1, 16);
								if (iVar1 == 1)
								{
									StringConCat(&cVar25, "a", 16);
								}
								if (iVar1 > 0)
								{
									if (bLocal_2409)
									{
										if (!unk_0x7D5B1F88E7504BBA(uParam0->f_358[iVar1 /*189*/].f_8) && !unk_0x7D5B1F88E7504BBA(uParam0->f_358[iVar1 /*189*/].f_9))
										{
											if (unk_0x04932A97CB319DE0(uParam0->f_358[iVar1 /*189*/].f_8, -235832601) == 1)
											{
											}
											else
											{
												unk_0x912F67F0C04621D5(uParam0->f_358[iVar1 /*189*/].f_8, uParam0->f_358[iVar1 /*189*/].f_9, &cVar25, 262144, 0, 8, -1, unk_0xFE52F34491529F0B(uParam0->f_358[iVar1 /*189*/].f_9), 0, 1073741824);
											}
										}
									}
									else if (iVar1 != 0)
									{
										func_76(uParam0, uParam0->f_358[iVar1 /*189*/].f_8, uParam0->f_358[iVar1 /*189*/].f_9, uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/], uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/].f_7, iVar1);
									}
								}
							}
							if (Local_50.f_0 != 2)
							{
								func_75(uParam0, iVar1);
							}
						}
					}
					if (iParam1 == 0)
					{
						if (bVar23)
						{
							func_74();
						}
					}
				}
			}
		}
		iVar1++;
	}
	if (uParam0->f_1 == 1)
	{
		func_67(uParam0);
		func_65(uParam0, &uLocal_2408);
		func_64(uParam0, &uLocal_2408);
		func_63();
		func_58(uParam0);
		func_57();
		func_56(uParam0);
		if (uParam0->f_358[0 /*189*/].f_23 != 0)
		{
			if (Local_50.f_10 == 0)
			{
				if (uParam0->f_358[0 /*189*/].f_11 > 0)
				{
					func_42(uParam0);
				}
			}
			else
			{
				func_42(uParam0);
			}
		}
	}
	return 1;
}

void func_42(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	int iVar6;
	
	if (unk_0x1B82FD5FFA4D666E())
	{
		unk_0x1B3DA717B9AFF828(1);
	}
	if (!func_3(&uLocal_2077))
	{
		iLocal_2075 = 0;
		iLocal_2076 = 0;
		func_338(&uLocal_2077);
	}
	if (unk_0x11E019C8F43ACC8A((uParam0->f_358[0 /*189*/].f_15 * 1000f)) != iLocal_2076)
	{
		iLocal_2075 = (unk_0x11E019C8F43ACC8A((uParam0->f_358[0 /*189*/].f_15 * 1000f)) - iLocal_2076);
		iLocal_2076 = unk_0x11E019C8F43ACC8A((uParam0->f_358[0 /*189*/].f_15 * 1000f));
		func_11(&uLocal_2077);
	}
	iVar0 = (unk_0xF34EE736CF047844((func_5(&(uParam0->f_3)) * 100f)) * 10 - unk_0x11E019C8F43ACC8A((uParam0->f_358[0 /*189*/].f_15 * 1000f)));
	iVar1 = 0;
	if (func_5(&uLocal_2077) <= 2f)
	{
		if (uParam0->f_358[0 /*189*/].f_11 > 0)
		{
			iVar1 = -iLocal_2075;
		}
		else
		{
			iVar1 = 0;
		}
	}
	iVar2 = unk_0xF34EE736CF047844((Global_97353.f_17297.f_6[Local_50.f_10] * 100f)) * 10;
	if (iVar2 <= 0)
	{
		iVar2 = -1;
	}
	if (IntToFloat(iVar0) <= (Local_50.f_106[Local_50.f_10] * 1000f))
	{
		iVar3 = unk_0xF34EE736CF047844((Local_50.f_106[Local_50.f_10] * 1000f));
		iVar6 = 3;
		sVar4 = "SPR_GBEST";
		iVar5 = 109;
	}
	else if (IntToFloat(iVar0) <= ((((Local_50.f_112[Local_50.f_10] - Local_50.f_106[Local_50.f_10]) / 2f) + Local_50.f_106[Local_50.f_10]) * 1000f))
	{
		iVar6 = 2;
		iVar3 = unk_0xF34EE736CF047844(((((Local_50.f_112[Local_50.f_10] - Local_50.f_106[Local_50.f_10]) / 2f) + Local_50.f_106[Local_50.f_10]) * 1000f));
		sVar4 = "SPR_SBEST";
		iVar5 = 108;
	}
	else if (IntToFloat(iVar0) <= (Local_50.f_112[Local_50.f_10] * 1000f))
	{
		iVar6 = 1;
		iVar3 = unk_0xF34EE736CF047844((Local_50.f_112[Local_50.f_10] * 1000f));
		sVar4 = "SPR_BBEST";
		iVar5 = 107;
	}
	else
	{
		iVar3 = -1;
	}
	func_55();
	func_43(iVar0, "", -1, -1, "", -1, -1, "", iVar1, 1, -1, -1, "SPR_GATES", 12, -1, -1, "", 12, iVar3, sVar4, iVar6, iVar5, iVar2, "SPRBEST", 0, 1, 1, -1, "", -1f, func_54());
}

void func_43(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, char* sParam12, int iParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, char* sParam19, int iParam20, int iParam21, int iParam22, char* sParam23, int iParam24, int iParam25, int iParam26, int iParam27, char* sParam28, float fParam29, var uParam30)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	struct<8> Var6;
	int iVar22;
	
	if (fParam29 > -1f)
	{
		func_51(0, "", iParam27, uParam30, 9, 0, sParam28, 1, fParam29, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	if (iParam14 > -1)
	{
		sVar0 = sParam16;
		if (func_50(sVar0))
		{
			sVar0 = "TIM_DAMAGE";
		}
		func_49(iParam14, iParam15, sVar0, iParam17, iParam27, 8, -1f, -1f, 0, 1, 0, 0, 0, 0, 0);
	}
	if (iParam10 > -1)
	{
		sVar1 = sParam12;
		if (func_50(sVar1))
		{
			sVar1 = "TIM_CHECKPOIN";
		}
		func_48((iParam11 - iParam10), sVar1, iParam27, iParam13, 7, 0, 0, 1, 0, 0, 0);
	}
	if (iParam5 > -1)
	{
		sVar2 = sParam7;
		if (func_50(sVar2))
		{
			sVar2 = "TIM_POSIT";
		}
		func_47(iParam5, iParam6, sVar2, iParam9, iParam27, 6, 0, 0, 0);
	}
	if (iParam2 > -1)
	{
		sVar3 = sParam4;
		if (func_50(sVar3))
		{
			sVar3 = "TIM_LAP";
		}
		iParam2 = iParam2;
		iParam3 = iParam3;
	}
	if (iParam18 > -1)
	{
		sVar4 = sParam19;
		if (func_50(sVar4))
		{
			sVar4 = "TIMER_BESTIME";
		}
		func_44(iParam18, sVar4, 0, 1, iParam27, iParam20, 4, 0, iParam21, 0, 0, 0, 0, 0);
	}
	if (iParam22 > -1)
	{
		sVar5 = sParam23;
		if (func_50(sVar5))
		{
			sVar5 = "TIMER_BESTIME";
		}
		func_44(iParam22, sVar5, 0, 1, iParam27, iParam24, 5, 0, iParam25, 0, 0, 0, 0, 0);
	}
	StringCopy(&Var6, sParam1, 64);
	if (iParam8 < 0)
	{
		StringCopy(&Var6, "TIMER_REWARD", 64);
	}
	else if (iParam8 > 0)
	{
		StringCopy(&Var6, "TIMER_PENAL", 64);
	}
	else if (func_50(&Var6))
	{
		StringCopy(&Var6, "TIM_TIMER", 64);
	}
	iParam26 = iParam26;
	iVar22 = 4;
	func_44(iParam0, &Var6, iParam8, iVar22, iParam27, 0, 3, 0, 1, 0, 0, 0, 0, 0);
}

void func_44(int iParam0, char* sParam1, int iParam2, int iParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		if (iVar0 == -1)
		{
			if (func_46(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1328872.f_1 = 1;
		func_45(7, iVar0);
		Global_1328872.f_3132[iVar0] = iParam0;
		StringCopy(&(Global_1328872.f_3132.f_9[iVar0 /*16*/]), sParam1, 64);
		Global_1328872.f_3132.f_138[iVar0] = iParam2;
		Global_1328872.f_3132.f_174[iVar0] = iParam3;
		Global_1328872.f_3132.f_147[iVar0] = uParam4;
		Global_1328872.f_3132.f_156[iVar0] = iParam5;
		Global_1328872.f_3132.f_201[iVar0] = iParam6;
		Global_1328872.f_3132.f_210[iVar0] = iParam7;
		Global_1328872.f_3132.f_165[iVar0] = iParam8;
		Global_1328872.f_3132.f_254[iVar0] = iParam9;
		Global_1328872.f_3132.f_263[iVar0] = iParam10;
		Global_1328872.f_3132.f_289[iVar0] = iParam11;
		Global_1328872.f_3132.f_192[iVar0] = iParam12;
		Global_1328872.f_3132.f_219[iVar0] = iParam13;
	}
}

void func_45(int iParam0, int iParam1)
{
	unk_0xF73FBE4845C43B5B(&(Global_1328872.f_3613[iParam0]), iParam1);
}

bool func_46(int iParam0, int iParam1)
{
	return unk_0x4ED6CFDFE8D4131A(Global_1328872.f_3613[iParam0], iParam1);
}

void func_47(int iParam0, var uParam1, char* sParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		if (iVar0 == -1)
		{
			if (func_46(5, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1328872.f_1 = 1;
		func_45(5, iVar0);
		Global_1328872.f_2468[iVar0] = iParam0;
		Global_1328872.f_2468.f_138[iVar0] = uParam1;
		StringCopy(&(Global_1328872.f_2468.f_9[iVar0 /*16*/]), sParam2, 64);
		Global_1328872.f_2468.f_156[iVar0] = uParam3;
		Global_1328872.f_2468.f_147[iVar0] = uParam4;
		Global_1328872.f_2468.f_174[iVar0] = iParam5;
		Global_1328872.f_2468.f_183[iVar0] = iParam6;
		Global_1328872.f_2468.f_218[iVar0] = iParam7;
		Global_1328872.f_2468.f_227[iVar0] = iParam8;
	}
}

void func_48(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	if (func_50(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		if (iVar0 == -1)
		{
			if (func_46(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1328872.f_1 = 1;
		func_45(3, iVar0);
		Global_1328872.f_1840[iVar0] = iParam0;
		StringCopy(&(Global_1328872.f_1840.f_9[iVar0 /*16*/]), sParam1, 64);
		Global_1328872.f_1840.f_147[iVar0] = uParam3;
		Global_1328872.f_1840.f_138[iVar0] = uParam2;
		Global_1328872.f_1840.f_165[iVar0] = iParam4;
		Global_1328872.f_1840.f_174[iVar0] = iParam5;
		StringCopy(&(Global_1328872.f_1840.f_209[iVar0 /*16*/]), sParam6, 64);
		Global_1328872.f_1840.f_338[iVar0] = iParam7;
		Global_1328872.f_1840.f_365[iVar0] = iParam8;
		Global_1328872.f_1840.f_347[iVar0] = iParam9;
		Global_1328872.f_1840.f_356[iVar0] = iParam10;
	}
}

void func_49(int iParam0, var uParam1, char* sParam2, var uParam3, var uParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		if (iVar0 == -1)
		{
			if (func_46(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1328872.f_1 = 1;
		func_45(0, iVar0);
		Global_1328872.f_769[iVar0] = iParam0;
		Global_1328872.f_769.f_9[iVar0] = uParam1;
		StringCopy(&(Global_1328872.f_769.f_18[iVar0 /*16*/]), sParam2, 64);
		Global_1328872.f_769.f_156[iVar0] = uParam3;
		Global_1328872.f_769.f_147[iVar0] = uParam4;
		Global_1328872.f_769.f_174[iVar0] = iParam5;
		Global_1328872.f_769.f_183[iVar0 /*3*/] = fParam6;
		Global_1328872.f_769.f_183[iVar0 /*3*/].f_1 = fParam7;
		Global_1328872.f_769.f_208[iVar0] = iParam8;
		Global_1328872.f_769.f_217[iVar0] = iParam9;
		Global_1328872.f_769.f_252[iVar0] = iParam10;
		Global_1328872.f_769.f_261[iVar0] = iParam11;
		Global_1328872.f_769.f_270[iVar0] = iParam12;
		Global_1328872.f_769.f_279[iVar0] = iParam13;
		Global_1328872.f_764 = 1;
		Global_1328872.f_769.f_288[iVar0] = iParam14;
	}
}

int func_50(char[4] cParam0)
{
	if (unk_0x602102324604D96B(cParam0))
	{
		return 1;
	}
	else if (unk_0xD3852F22AB713A1F(cParam0, "") || unk_0xD3852F22AB713A1F(cParam0, "0"))
	{
		return 1;
	}
	return 0;
}

void func_51(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		if (iVar0 == -1)
		{
			if (func_46(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1328872.f_1 = 1;
		func_45(6, iVar0);
		Global_1328872.f_2704[iVar0] = iParam0;
		StringCopy(&(Global_1328872.f_2704.f_9[iVar0 /*16*/]), sParam1, 64);
		Global_1328872.f_2704.f_147[iVar0] = uParam3;
		Global_1328872.f_2704.f_138[iVar0] = uParam2;
		Global_1328872.f_2704.f_210[iVar0] = iParam4;
		Global_1328872.f_2704.f_219[iVar0] = iParam5;
		StringCopy(&(Global_1328872.f_2704.f_228[iVar0 /*16*/]), sParam6, 64);
		Global_1328872.f_2704.f_357[iVar0] = iParam7;
		Global_1328872.f_2704.f_366[iVar0] = fParam8;
		Global_1328872.f_2704.f_401[iVar0] = iParam9;
		Global_1328872.f_2704.f_410[iVar0] = iParam10;
		Global_1328872.f_2704.f_165[iVar0] = iParam11;
		Global_1328872.f_2704.f_174[iVar0] = iParam12;
		Global_1328872.f_2704.f_183[iVar0] = iParam13;
		Global_1328872.f_2704.f_192[iVar0] = iParam14;
		Global_1328872.f_2704.f_201[iVar0] = iParam15;
		Global_1328872.f_2704.f_419[iVar0] = iParam16;
		if (iParam15 == 4 && func_53())
		{
			Global_1328872.f_764 = 1;
		}
		if (unk_0xB0FB6CFAA5A1C833())
		{
			iVar2 = 0;
			unk_0xEB7445AF48518614(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 1000)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1328872.f_768 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1328872.f_767 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1328872.f_764 = 1;
			}
			if (func_52())
			{
				Global_1328872.f_768 = 1;
			}
		}
	}
}

int func_52()
{
	int iVar0;
	var uVar1;
	
	if (unk_0xB0FB6CFAA5A1C833())
	{
		unk_0xEB7445AF48518614(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_53()
{
	if ((unk_0xDB917DA5C6835FCC() == 8 || unk_0xDB917DA5C6835FCC() == 9) || unk_0xDB917DA5C6835FCC() == 10)
	{
		return 1;
	}
	return 0;
}

int func_54()
{
	return iLocal_2074;
}

void func_55()
{
	Global_1328872.f_764 = 1;
}

void func_56(var uParam0)
{
	if (uParam0->f_13 == -1)
	{
	}
}

void func_57()
{
	if (Local_50.f_0 == 0)
	{
		unk_0xD7A4F7DBABF54F3A(0, 0);
		unk_0xD7A4F7DBABF54F3A(1, 0);
		unk_0xD7A4F7DBABF54F3A(2, 0);
		unk_0xD7A4F7DBABF54F3A(3, 0);
	}
}

void func_58(var uParam0)
{
	if (func_5(&(uParam0->f_3)) > 15f)
	{
		if (unk_0xFB6BA510A533DF81(uParam0->f_358[0 /*189*/].f_9) < 5f)
		{
			if (!func_3(&uLocal_2280))
			{
				func_10(&uLocal_2280);
			}
			else if (func_5(&uLocal_2280) > 60f)
			{
				func_59("SPR_MOVE_FAIL", 5000, 0, &iLocal_2288, 8192);
				if (uParam0->f_358[0 /*189*/].f_11 <= (uParam0->f_12 - 1))
				{
					if (unk_0xCD82FA174080B3B1(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5))
					{
						unk_0x8724063842980FA9(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5, 0);
					}
				}
				if (uParam0->f_358[0 /*189*/].f_11 + 1 <= (uParam0->f_12 - 2))
				{
					if (unk_0xCD82FA174080B3B1(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5))
					{
						unk_0x8724063842980FA9(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5, 0);
					}
				}
				func_11(&uLocal_2280);
				func_11(&uLocal_2277);
				uParam0->f_1 = 0;
				unk_0x00686F7B3723B82F();
				sLocal_2275 = "SPR_RETR_IDLE";
				uParam0->f_358[0 /*189*/].f_23 = 0;
			}
			else if (func_5(&uLocal_2280) > 30f)
			{
				if (!func_337(iLocal_2287, 32))
				{
					func_103("SPR_IDLE_WARN", &iLocal_2287, 32, 0);
				}
			}
		}
		else if (func_3(&uLocal_2280))
		{
			func_335(&iLocal_2287, 32);
			func_11(&uLocal_2280);
		}
	}
	else if (func_3(&uLocal_2280))
	{
		func_335(&iLocal_2287, 32);
		func_11(&uLocal_2280);
	}
}

void func_59(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_62(*iParam3, iParam4))
	{
		return;
	}
	func_61(sParam0, iParam1, iParam2);
	func_60(iParam3, iParam4);
}

void func_60(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_61(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x0BBD76EF782760F3(sParam0);
	unk_0x3103E77581D5165C(iParam1, 1);
}

bool func_62(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0;
}

void func_63()
{
	if (unk_0xABC532F9098BFD9D(unk_0x217E9DC48139933D()) > 0)
	{
		unk_0x4E4B996C928C7AA6(unk_0x217E9DC48139933D());
	}
}

void func_64(var uParam0, var uParam1)
{
	if (uParam0->f_1)
	{
		if ((!unk_0xB86D29B10F627379(uParam0->f_358[0 /*189*/].f_9, 0) || unk_0x82368787EA73C0F7(uParam0->f_358[0 /*189*/].f_9) < 5) || unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
		{
			func_11(&uLocal_2277);
			if (unk_0xCD82FA174080B3B1(*uParam1))
			{
				unk_0xF2C3C9DA47AAA54A(uParam1);
			}
			if (uParam0->f_358[0 /*189*/].f_11 <= (uParam0->f_12 - 1))
			{
				if (unk_0xCD82FA174080B3B1(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5))
				{
					unk_0x8724063842980FA9(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5, 0);
				}
			}
			if (uParam0->f_358[0 /*189*/].f_11 + 1 <= (uParam0->f_12 - 2))
			{
				if (unk_0xCD82FA174080B3B1(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5))
				{
					unk_0x8724063842980FA9(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5, 0);
				}
			}
			uParam0->f_1 = 0;
			unk_0x00686F7B3723B82F();
			sLocal_2275 = "SPR_RETR_DES";
			uParam0->f_358[0 /*189*/].f_23 = 0;
		}
		return;
	}
}

void func_65(var uParam0, var uParam1)
{
	if (Local_50.f_0 == 0)
	{
		if (!unk_0x7D5B1F88E7504BBA(uParam0->f_358[0 /*189*/].f_9))
		{
			if (!unk_0x08B96A437661F1BC(unk_0x096275889B8E0EE0()))
			{
				unk_0x00686F7B3723B82F();
				unk_0x89EEEEF0CEB4D045(0);
				unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 0, 0);
				if (unk_0xCD82FA174080B3B1(*uParam1))
				{
					unk_0xF2C3C9DA47AAA54A(uParam1);
					if (uParam0->f_358[0 /*189*/].f_11 <= (uParam0->f_12 - 1))
					{
						if (unk_0xCD82FA174080B3B1(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5))
						{
							unk_0x8724063842980FA9(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5, 0);
						}
					}
					if (uParam0->f_358[0 /*189*/].f_11 + 1 <= (uParam0->f_12 - 2))
					{
						if (unk_0xCD82FA174080B3B1(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5))
						{
							unk_0x8724063842980FA9(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5, 0);
						}
					}
				}
				uParam0->f_1 = 0;
				unk_0x00686F7B3723B82F();
				sLocal_2275 = "SPR_RETR_DES";
				func_66(&(Local_50.f_297), 1);
				uParam0->f_358[0 /*189*/].f_23 = 7;
			}
		}
	}
}

void func_66(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = iParam1;
	unk_0x9C623A934CD60291("OFFMISSION_WASTED", 0);
}

void func_67(var uParam0)
{
	if (uParam0->f_1)
	{
		func_72(uParam0);
		func_68(uParam0);
	}
}

void func_68(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x82368787EA73C0F7(uParam0->f_358[0 /*189*/].f_9);
	if (!unk_0x7D5B1F88E7504BBA(uParam0->f_358[0 /*189*/].f_9))
	{
		iVar1 = unk_0xF2DB717A73826179(unk_0x90DBFFAC43B22081(uParam0->f_358[0 /*189*/].f_9));
	}
	if (IntToFloat(iVar0) < 500f)
	{
		if (Local_50.f_0 == 2)
		{
			if (!unk_0x7D5B1F88E7504BBA(uParam0->f_358[0 /*189*/].f_9) && !unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
			{
				if (unk_0x9C8E4D238C999648(unk_0x096275889B8E0EE0(), uParam0->f_358[0 /*189*/].f_9, 0))
				{
					bLocal_2286 = true;
				}
			}
			if (bLocal_2286)
			{
				if (uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_7 == 6 || uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_7 == 10)
				{
					if (!unk_0x24D15F45F410375F())
					{
						func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_2288, 2);
					}
				}
			}
		}
		else
		{
			if (unk_0x24D15F45F410375F())
			{
				unk_0x00686F7B3723B82F();
			}
			func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_2288, 2);
		}
	}
	if (Local_50.f_0 == 1)
	{
		if (IntToFloat(iVar1) < 200f)
		{
			if (unk_0x24D15F45F410375F())
			{
				unk_0x00686F7B3723B82F();
			}
			if (func_71())
			{
				func_69();
			}
			func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_2288, 2);
		}
	}
}

void func_69()
{
	Global_14558 = 0;
	func_70();
}

void func_70()
{
	unk_0x1DDACDCB7482E6F1();
	Global_16703 = 0;
	if ((unk_0x3AB7C52414B223F6() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0x89EEEEF0CEB4D045(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0x200E87988220C592())
	{
		unk_0x89EEEEF0CEB4D045(1);
		Global_15692 = 6;
		return;
	}
}

int func_71()
{
	if (Global_15692 != 0 || unk_0x200E87988220C592())
	{
		return 1;
	}
	return 0;
}

void func_72(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	struct<3> Var8;
	struct<3> Var11;
	float fVar14;
	bool bVar15;
	bool bVar16;
	
	Var0 = { uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/] };
	if (uParam0->f_358[0 /*189*/].f_11 > 0)
	{
		Var3 = { uParam0->f_27[(uParam0->f_358[0 /*189*/].f_11 - 1) /*10*/] };
	}
	else
	{
		Var3 = { 0f, 0f, 0f };
	}
	fVar6 = unk_0x0BE7F4E3CDBAFB28(Var0, Var3, 1);
	fVar7 = fVar6;
	if (uParam0->f_358[0 /*189*/].f_11 == 0)
	{
		fVar6 = (fVar6 + 200f);
		fVar7 = (fVar7 + 750f);
	}
	else
	{
		fVar6 = (fVar6 + 200f);
		fVar7 = (fVar7 + 750f);
	}
	Var8 = { unk_0xA86D5F069399F44D(uParam0->f_358[0 /*189*/].f_8, 1) };
	if (func_73(Var3, 0f, 0f, 0f, 1056964608))
	{
		Var11 = { Var0 };
	}
	else
	{
		Var11 = { unk_0x83ACC65D9ACEC5EF(Var8, Var3, Var0, 1) };
	}
	fVar14 = unk_0x0BE7F4E3CDBAFB28(Var11, Var8, 1);
	bVar15 = fVar14 >= fVar6;
	bVar16 = fVar14 >= fVar7;
	if (Local_50.f_0 == 1)
	{
		if (unk_0x134549B388167CBF((Var11.f_2 - Var8.f_2)) > 15f)
		{
			bVar15 = true;
		}
	}
	if (bVar16)
	{
		func_11(&uLocal_2277);
		uParam0->f_1 = 0;
		unk_0x00686F7B3723B82F();
		func_232(1);
		uParam0->f_358[0 /*189*/].f_23 = 0;
		func_239(&(Local_50.f_119), 0, 0, 1, 1);
		func_238(&(Local_50.f_119), "IB_RETRY", 2, 201, 1, 1, 0);
		func_238(&(Local_50.f_119), "FE_HLP16", 2, 202, 1, 1, 0);
		unk_0xF27F981A5EBAEFDB("MGSP_FAIL");
		sLocal_2275 = "SPR_HELP_FAIL";
	}
	else if (bVar15)
	{
		if (fVar14 <= (fVar7 - 15f))
		{
			func_279("SPR_HELP_RESET", -1);
		}
		if (fVar14 <= (fVar7 - 15f))
		{
			func_59("SPR_HELP_WARN", 5000, 0, &iLocal_2288, 4);
		}
	}
	else
	{
		unk_0xB836C5982F4438BA("SPR_HELP_WARN");
		if (func_337(iLocal_2288, 4))
		{
			func_335(&iLocal_2288, 4);
		}
	}
}

int func_73(struct<3> Param0, struct<3> Param3, float fParam6)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (unk_0x134549B388167CBF((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x134549B388167CBF((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			if (unk_0x134549B388167CBF((Param0.f_2 - Param3.f_2)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_74()
{
	if (iLocal_1991 == 1)
	{
		if (func_3(&uLocal_2021))
		{
			if (func_5(&uLocal_2021) <= 2.5f)
			{
				iLocal_2072 = "GATEMISS";
				fLocal_2073 = 5f;
				iLocal_2074 = 1;
			}
			else
			{
				iLocal_2072 = 0;
				fLocal_2073 = -1f;
				iLocal_2074 = 1;
				iLocal_1991 = 0;
			}
		}
	}
	if (iLocal_1992 == 1)
	{
		if (func_3(&uLocal_2027))
		{
			if (func_5(&uLocal_2027) <= 2.5f)
			{
				iLocal_2072 = "GATEINNER";
				fLocal_2073 = 1f;
				iLocal_2074 = 1;
			}
			else
			{
				iLocal_2072 = 0;
				fLocal_2073 = -1f;
				iLocal_2074 = 1;
				iLocal_1992 = 0;
			}
		}
	}
	if (iLocal_1993 == 1)
	{
		if (func_3(&uLocal_2024))
		{
			if (func_5(&uLocal_2024) <= 2.5f)
			{
				iLocal_2072 = "GATEOUTTER";
				fLocal_2073 = 0f;
				iLocal_2074 = 1;
			}
			else
			{
				iLocal_2072 = 0;
				fLocal_2073 = -1f;
				iLocal_2074 = 1;
				iLocal_1993 = 0;
			}
		}
	}
	if (iLocal_1994 == 1)
	{
		if (func_3(&uLocal_2036))
		{
			if (func_5(&uLocal_2036) <= 2.5f)
			{
				iLocal_2072 = "GATEKNIFEINNER";
				fLocal_2073 = 2.5f;
				iLocal_2074 = 1;
			}
			else
			{
				iLocal_2072 = 0;
				fLocal_2073 = -1f;
				iLocal_2074 = 1;
				iLocal_1994 = 0;
			}
		}
	}
	if (iLocal_1995 == 1)
	{
		if (func_3(&uLocal_2039))
		{
			if (func_5(&uLocal_2039) <= 2.5f)
			{
				iLocal_2072 = "GATEINVERTEDIN";
				fLocal_2073 = 3f;
				iLocal_2074 = 1;
			}
			else
			{
				iLocal_2072 = 0;
				fLocal_2073 = -1f;
				iLocal_2074 = 1;
				iLocal_1995 = 0;
			}
		}
	}
	if (iLocal_1996 == 1)
	{
		if (func_3(&uLocal_2030))
		{
			if (func_5(&uLocal_2030) <= 2.5f)
			{
				iLocal_2072 = "GATEKNIFEOUTTER";
				fLocal_2073 = 1.5f;
				iLocal_2074 = 1;
			}
			else
			{
				iLocal_2072 = 0;
				fLocal_2073 = -1f;
				iLocal_2074 = 1;
				iLocal_1996 = 0;
			}
		}
	}
	if (iLocal_1997 == 1)
	{
		if (func_3(&uLocal_2033))
		{
			if (func_5(&uLocal_2033) <= 2.5f)
			{
				iLocal_2072 = "GATEINVERTEDOUT";
				fLocal_2073 = 2f;
				iLocal_2074 = 1;
			}
			else
			{
				iLocal_2072 = 0;
				fLocal_2073 = -1f;
				iLocal_2074 = 1;
				iLocal_1997 = 0;
			}
		}
	}
	if (iLocal_1998 == 1)
	{
		if (func_3(&uLocal_2009))
		{
			if (func_5(&uLocal_2009) <= 2.5f)
			{
				iLocal_2072 = "STUNTKNIFELEFT";
				fLocal_2073 = 4f;
				iLocal_2074 = 1;
			}
			else
			{
				iLocal_2072 = 0;
				fLocal_2073 = -1f;
				iLocal_2074 = 1;
				iLocal_1998 = 0;
			}
		}
	}
	if (iLocal_1999 == 1)
	{
		if (func_3(&uLocal_2009))
		{
			if (func_5(&uLocal_2009) <= 2.5f)
			{
				iLocal_2072 = "STUNTKNIFELEFTHIT";
				fLocal_2073 = 1.5f;
				iLocal_2074 = 1;
			}
			else
			{
				iLocal_2072 = 0;
				fLocal_2073 = -1f;
				iLocal_2074 = 1;
				iLocal_1999 = 0;
			}
		}
	}
	if (iLocal_2000 == 1)
	{
		if (func_3(&uLocal_2009))
		{
			if (func_5(&uLocal_2009) <= 2.5f)
			{
				iLocal_2072 = "STUNTKNIFELEFTMISS";
				fLocal_2073 = 5f;
				iLocal_2074 = 1;
			}
			else
			{
				iLocal_2072 = 0;
				fLocal_2073 = -1f;
				iLocal_2074 = 1;
				iLocal_2000 = 0;
			}
		}
	}
	if (iLocal_2001 == 1)
	{
		if (func_3(&uLocal_2009))
		{
			if (func_5(&uLocal_2009) <= 2.5f)
			{
				iLocal_2072 = "STUNTKNIFERIGHT";
				fLocal_2073 = 4f;
				iLocal_2074 = 1;
			}
			else
			{
				iLocal_2072 = 0;
				fLocal_2073 = -1f;
				iLocal_2074 = 1;
				iLocal_2001 = 0;
			}
		}
	}
	if (iLocal_2002 == 1)
	{
		if (func_3(&uLocal_2009))
		{
			if (func_5(&uLocal_2009) <= 2.5f)
			{
				iLocal_2072 = "STUNTKNIFERIGHTHIT";
				fLocal_2073 = 1.5f;
				iLocal_2074 = 1;
			}
			else
			{
				iLocal_2072 = 0;
				fLocal_2073 = -1f;
				iLocal_2074 = 1;
				iLocal_2002 = 0;
			}
		}
	}
	if (iLocal_2003 == 1)
	{
		if (func_3(&uLocal_2009))
		{
			if (func_5(&uLocal_2009) <= 2.5f)
			{
				iLocal_2072 = "STUNTKNIFERIGHTMISS";
				fLocal_2073 = 5f;
				iLocal_2074 = 1;
			}
			else
			{
				iLocal_2072 = 0;
				fLocal_2073 = -1f;
				iLocal_2074 = 1;
				iLocal_2003 = 0;
			}
		}
	}
	if (iLocal_2004 == 1)
	{
		if (func_3(&uLocal_2012))
		{
			if (func_5(&uLocal_2012) <= 2.5f)
			{
				iLocal_2072 = "STUNTINVERTED";
				fLocal_2073 = 4f;
				iLocal_2074 = 1;
			}
			else
			{
				iLocal_2072 = 0;
				fLocal_2073 = -1f;
				iLocal_2074 = 1;
				iLocal_2004 = 0;
			}
		}
	}
	if (iLocal_2005 == 1)
	{
		if (func_3(&uLocal_2012))
		{
			if (func_5(&uLocal_2012) <= 2.5f)
			{
				iLocal_2072 = "STUNTINVERTEDHIT";
				fLocal_2073 = 1.5f;
				iLocal_2074 = 1;
			}
			else
			{
				iLocal_2072 = 0;
				fLocal_2073 = -1f;
				iLocal_2074 = 1;
				iLocal_2005 = 0;
			}
		}
	}
	if (iLocal_2006 == 1)
	{
		if (func_3(&uLocal_2012))
		{
			if (func_5(&uLocal_2012) <= 2.5f)
			{
				iLocal_2072 = "STUNTINVERTEDMISS";
				fLocal_2073 = 5f;
				iLocal_2074 = 1;
			}
			else
			{
				iLocal_2072 = 0;
				fLocal_2073 = -1f;
				iLocal_2074 = 1;
				iLocal_2006 = 0;
			}
		}
	}
}

void func_75(var uParam0, int iParam1)
{
	float fVar0;
	
	if (iParam1 < 0 || iParam1 > uParam0->f_358)
	{
		return;
	}
	if (!unk_0x7D5B1F88E7504BBA(uParam0->f_358[iParam1 /*189*/].f_8))
	{
		if (!unk_0x7D5B1F88E7504BBA(uParam0->f_358[iParam1 /*189*/].f_9))
		{
			if (unk_0x9C8E4D238C999648(uParam0->f_358[iParam1 /*189*/].f_8, uParam0->f_358[iParam1 /*189*/].f_9, 0))
			{
				fVar0 = unk_0xFE52F34491529F0B(uParam0->f_358[iParam1 /*189*/].f_9);
				if (uParam0->f_358[0 /*189*/].f_11 == uParam0->f_358[iParam1 /*189*/].f_11)
				{
				}
				else if (uParam0->f_358[iParam1 /*189*/].f_11 > uParam0->f_358[0 /*189*/].f_11)
				{
					fVar0 = (fVar0 * 0.69f);
				}
				else
				{
					fVar0 = (fVar0 * 1f);
				}
				if (unk_0xEB8F1713A0FC1B96(uParam0->f_358[iParam1 /*189*/].f_8, uParam0->f_358[iParam1 /*189*/].f_9))
				{
					if (unk_0xE052C1B1CAA4ECE4(uParam0->f_358[iParam1 /*189*/].f_9, -1))
					{
						unk_0xF80258351D8421EB(uParam0->f_358[iParam1 /*189*/].f_8, uParam0->f_358[iParam1 /*189*/].f_9, -1);
						unk_0xAD92B87536A0B81C(uParam0->f_358[iParam1 /*189*/].f_8, fVar0);
					}
				}
			}
		}
	}
}

void func_76(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam6, int iParam7)
{
	if (!unk_0x7D5B1F88E7504BBA(iParam1))
	{
		if (Local_50.f_0 == 1)
		{
			if (!unk_0x7D5B1F88E7504BBA(iParam2))
			{
				unk_0xBB26FB233542CFFE(iParam1, iParam2, Param3, unk_0xFE52F34491529F0B(iParam2), 1, 0, 786469, 5f, -1f);
			}
		}
		else if (Local_50.f_0 == 2)
		{
			uParam6 = uParam6;
			func_77(uParam0, Param3, iParam7);
		}
	}
}

void func_77(var uParam0, struct<3> Param1, var uParam4)
{
	uParam0->f_12 = uParam0->f_12;
	Param1 = { Param1 };
	uParam4 = uParam4;
}

void func_78(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return;
	}
	func_82(&(uParam0->f_27[iParam1 /*10*/]));
	func_81(&(uParam0->f_27[iParam1 /*10*/].f_6), &(uParam0->f_2861), &(uParam0->f_2862), uParam0->f_27[iParam1 /*10*/].f_7 == 4);
	if (iParam1 + 1 < uParam0->f_12)
	{
		func_82(&(uParam0->f_27[iParam1 + 1 /*10*/]));
		func_79(&(uParam0->f_27[iParam1 + 1 /*10*/]));
	}
}

void func_79(var uParam0)
{
	func_80(&(uParam0->f_6));
}

void func_80(var uParam0)
{
	if (*uParam0 != 0)
	{
		unk_0x0DED5B0C8EBAAE12(*uParam0);
		*uParam0 = 0;
	}
}

void func_81(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	
	func_80(uParam1);
	if (*uParam0 != 0)
	{
		*uParam1 = *uParam0;
		*uParam0 = 0;
		*uParam2 = 255;
		if (bParam3)
		{
			*uParam2 = 0;
		}
		if (bLocal_2276)
		{
			iVar3 = 6;
		}
		else
		{
			iVar3 = 1;
		}
		func_552(func_553(iVar3), &uVar0, &uVar1, &uVar2, uParam2);
		unk_0xCAAFC225E33B1D15(*uParam1, uVar0, uVar1, uVar2, *uParam2);
		unk_0x99AFF17222D4DEB4(*uParam1, uVar0, uVar1, uVar2, *uParam2);
	}
}

void func_82(var uParam0)
{
	func_83(&(uParam0->f_5));
}

void func_83(var uParam0)
{
	if (unk_0xCD82FA174080B3B1(*uParam0))
	{
		unk_0xF2C3C9DA47AAA54A(uParam0);
	}
}

int func_84(int iParam0)
{
	if ((((((iParam0 == 9 || iParam0 == 12) || iParam0 == 15) || iParam0 == 10) || iParam0 == 13) || iParam0 == 16) || iParam0 == 7)
	{
		return 1;
	}
	return 0;
}

void func_85(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (Local_50.f_0 == 0)
		{
			if (func_3(&uLocal_2021))
			{
				func_89(&uLocal_2021, 3f);
			}
			if (func_3(&uLocal_2015))
			{
				func_89(&uLocal_2015, 3f);
			}
			if (func_3(&uLocal_2009))
			{
				func_89(&uLocal_2009, 3f);
			}
			if (func_3(&uLocal_2018))
			{
				func_89(&uLocal_2018, 3f);
			}
			if (func_3(&uLocal_2012))
			{
				func_89(&uLocal_2012, 3f);
			}
			if (func_3(&uLocal_2024))
			{
				func_89(&uLocal_2024, 3f);
			}
			if (func_3(&uLocal_2027))
			{
				func_89(&uLocal_2027, 3f);
			}
			if (func_3(&uLocal_2030))
			{
				func_89(&uLocal_2030, 3f);
			}
			if (func_3(&uLocal_2033))
			{
				func_89(&uLocal_2033, 3f);
			}
			if (func_3(&uLocal_2036))
			{
				func_89(&uLocal_2036, 3f);
			}
			if (func_3(&uLocal_2039))
			{
				func_89(&uLocal_2039, 3f);
			}
			func_86(uParam0, iParam2);
			switch (iParam2)
			{
				case 7:
					iLocal_1991 = 1;
					func_11(&uLocal_2021);
					break;
				
				case 1:
					iLocal_1992 = 1;
					func_11(&uLocal_2027);
					break;
				
				case 2:
					iLocal_1993 = 1;
					func_11(&uLocal_2024);
					break;
				
				case 3:
					iLocal_1994 = 1;
					func_11(&uLocal_2036);
					break;
				
				case 4:
					iLocal_1995 = 1;
					func_11(&uLocal_2039);
					break;
				
				case 5:
					iLocal_1996 = 1;
					func_11(&uLocal_2030);
					break;
				
				case 6:
					iLocal_1997 = 1;
					func_11(&uLocal_2033);
					break;
				
				case 8:
					iLocal_1998 = 1;
					func_11(&uLocal_2009);
					break;
				
				case 9:
					iLocal_1999 = 1;
					func_11(&uLocal_2018);
					break;
				
				case 10:
					iLocal_2000 = 1;
					func_11(&uLocal_2021);
					break;
				
				case 11:
					iLocal_2001 = 1;
					func_11(&uLocal_2009);
					break;
				
				case 12:
					iLocal_2002 = 1;
					func_11(&uLocal_2018);
					break;
				
				case 13:
					iLocal_2003 = 1;
					func_11(&uLocal_2021);
					break;
				
				case 14:
					iLocal_2004 = 1;
					func_11(&uLocal_2012);
					break;
				
				case 15:
					iLocal_2005 = 1;
					func_11(&uLocal_2018);
					break;
				
				case 16:
					iLocal_2006 = 1;
					func_11(&uLocal_2021);
					break;
				}
			}
	}
}

void func_86(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 7:
			func_88(uParam0, 5f);
			break;
		
		case 0:
			break;
		
		case 1:
			func_87(uParam0, 1f);
			break;
		
		case 2:
			func_87(uParam0, 0f);
			break;
		
		case 5:
			func_87(uParam0, 1.5f);
			break;
		
		case 6:
			func_87(uParam0, 2f);
			break;
		
		case 3:
			func_87(uParam0, 2.5f);
			break;
		
		case 4:
			func_87(uParam0, 3f);
			break;
		
		case 8:
			func_87(uParam0, 4f);
			break;
		
		case 9:
			func_88(uParam0, 1.5f);
			break;
		
		case 10:
			func_88(uParam0, 5f);
			break;
		
		case 11:
			func_87(uParam0, 4f);
			break;
		
		case 12:
			func_88(uParam0, 1.5f);
			break;
		
		case 13:
			func_88(uParam0, 5f);
			break;
		
		case 14:
			func_87(uParam0, 4f);
			break;
		
		case 15:
			func_88(uParam0, 1.5f);
			break;
		
		case 16:
			func_88(uParam0, 5f);
			break;
	}
}

void func_87(var uParam0, float fParam1)
{
	uParam0->f_14 = fParam1;
	uParam0->f_15 = (uParam0->f_15 + uParam0->f_14);
}

void func_88(var uParam0, float fParam1)
{
	uParam0->f_14 = -fParam1;
	uParam0->f_15 = (uParam0->f_15 + uParam0->f_14);
}

void func_89(var uParam0, float fParam1)
{
	if (func_3(uParam0))
	{
		func_12(uParam0, (func_5(uParam0) + fParam1));
	}
}

void func_90(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	
	if (uParam0->f_6 != 0)
	{
		iVar4 = func_92();
		if (uParam0->f_8 == 2 || uParam0->f_8 == 3)
		{
			iVar4 = 18;
		}
		else if (uParam0->f_8 == 1)
		{
			iVar4 = 9;
		}
		func_552(func_553(iVar4), &uVar0, &uVar1, &uVar2, &uVar3);
		unk_0xCAAFC225E33B1D15(uParam0->f_6, uVar0, uVar1, uVar2, func_91(*uParam0, 25, 200));
	}
	if (uParam1->f_6 != 0)
	{
		iVar5 = func_92();
		if (uParam1->f_8 == 2 || uParam1->f_8 == 3)
		{
			iVar5 = 18;
		}
		else if (uParam1->f_8 == 1)
		{
			iVar5 = 9;
		}
		func_552(func_553(iVar5), &uVar0, &uVar1, &uVar2, &uVar3);
		unk_0xCAAFC225E33B1D15(uParam1->f_6, uVar0, uVar1, uVar2, func_91(*uParam1, 25, 200));
	}
}

int func_91(struct<3> Param0, int iParam3, int iParam4)
{
	float fVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = 100f;
	iVar1 = 50;
	if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
	{
		fVar2 = unk_0x0BE7F4E3CDBAFB28(Param0, unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1), 1);
		if (fVar2 > fVar0)
		{
			iVar1 = iParam4;
		}
		else
		{
			fVar3 = ((fVar0 - fVar2) / fVar0);
			iVar1 = (iParam4 - unk_0x11E019C8F43ACC8A((IntToFloat((iParam4 - iParam3)) * fVar3)));
		}
	}
	if (iVar1 < iParam3)
	{
		iVar1 = iParam3;
	}
	return iVar1;
}

int func_92()
{
	return 12;
}

int func_93(var uParam0, var uParam1, var uParam2, int iParam3)
{
	var uVar0;
	var uVar3;
	struct<3> Var6;
	var uVar9;
	int iVar12;
	
	if (unk_0x7D5B1F88E7504BBA(uParam0->f_358[0 /*189*/].f_9))
	{
		return -1;
	}
	iVar12 = func_100(uParam1, iParam3);
	if (Local_50.f_0 == 0)
	{
		if (iVar12 != 17)
		{
			if (iVar12 == 1)
			{
				if (func_99(uParam0->f_358[0 /*189*/].f_9))
				{
					if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 2)
						{
							iVar12 = 8;
							return iVar12;
						}
						if (uParam1->f_8 == 3)
						{
							iVar12 = 12;
							return iVar12;
						}
						if (uParam1->f_8 == 1)
						{
							iVar12 = 15;
							return iVar12;
						}
					}
					else
					{
						iVar12 = 3;
						if (!func_337(iLocal_2319, 262144))
						{
							func_98("Gate_PK", &iLocal_2318);
							iLocal_2319 = 0;
							func_309(&iLocal_2319, 262144);
							return iVar12;
						}
						else if (!func_337(iLocal_2319, 524288))
						{
							func_98("Con_PK", &iLocal_2318);
							func_309(&iLocal_2319, 524288);
							return iVar12;
						}
						else if (!func_337(iLocal_2319, 1048576))
						{
							func_98("Con_PK", &iLocal_2318);
							func_309(&iLocal_2319, 1048576);
							return iVar12;
						}
						else
						{
							func_98("Con_PK", &iLocal_2318);
							return iVar12;
						}
					}
				}
				else if (func_97(uParam0->f_358[0 /*189*/].f_9))
				{
					if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 3)
						{
							iVar12 = 11;
							return iVar12;
						}
						if (uParam1->f_8 == 2)
						{
							iVar12 = 9;
							return iVar12;
						}
						if (uParam1->f_8 == 1)
						{
							iVar12 = 15;
							return iVar12;
						}
					}
					else
					{
						iVar12 = 3;
						if (!func_337(iLocal_2319, 262144))
						{
							func_98("Gate_PK", &iLocal_2318);
							iLocal_2319 = 0;
							func_309(&iLocal_2319, 262144);
							return iVar12;
						}
						else if (!func_337(iLocal_2319, 524288))
						{
							func_98("Con_PK", &iLocal_2318);
							func_309(&iLocal_2319, 524288);
							return iVar12;
						}
						else if (!func_337(iLocal_2319, 1048576))
						{
							func_98("Con_PK", &iLocal_2318);
							func_309(&iLocal_2319, 1048576);
							return iVar12;
						}
						else
						{
							func_98("Con_PK", &iLocal_2318);
							return iVar12;
						}
					}
				}
				else
				{
					unk_0x3A9B1120AF13FBF2(uParam0->f_358[0 /*189*/].f_9, &uVar0, &uVar3, &Var6, &uVar9);
					if (Var6.f_2 <= -0.866f)
					{
						if (uParam1->f_8 != 0)
						{
							if (uParam1->f_8 == 1)
							{
								iVar12 = 14;
								return iVar12;
							}
							if (uParam1->f_8 == 2)
							{
								iVar12 = 9;
								return iVar12;
							}
							if (uParam1->f_8 == 3)
							{
								iVar12 = 12;
								return iVar12;
							}
						}
						else
						{
							iVar12 = 4;
							if (!func_337(iLocal_2319, 32768))
							{
								func_98("Gate_PI", &iLocal_2317);
								iLocal_2319 = 0;
								func_309(&iLocal_2319, 32768);
								return iVar12;
							}
							else if (!func_337(iLocal_2319, 65536))
							{
								func_98("Con_PI", &iLocal_2317);
								func_309(&iLocal_2319, 65536);
								return iVar12;
							}
							else if (!func_337(iLocal_2319, 131072))
							{
								func_98("Con_PI", &iLocal_2317);
								func_309(&iLocal_2319, 131072);
								return iVar12;
							}
							else
							{
								func_98("Con_PI", &iLocal_2317);
								return iVar12;
							}
						}
					}
					else if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 2)
						{
							iVar12 = 9;
							return iVar12;
						}
						else if (uParam1->f_8 == 3)
						{
							iVar12 = 12;
							return iVar12;
						}
						else if (uParam1->f_8 == 1)
						{
							iVar12 = 15;
							return iVar12;
						}
					}
					else
					{
						iVar12 = 1;
						if (!func_337(iLocal_2319, 4096))
						{
							func_98("Get_Perf", &iLocal_2314);
							iLocal_2319 = 0;
							func_309(&iLocal_2319, 4096);
							return iVar12;
						}
						else if (!func_337(iLocal_2319, 8192))
						{
							func_98("Con_Perf", &iLocal_2314);
							func_309(&iLocal_2319, 8192);
							return iVar12;
						}
						else if (!func_337(iLocal_2319, 16384))
						{
							func_98("Con_Perf", &iLocal_2314);
							func_309(&iLocal_2319, 16384);
							return iVar12;
						}
						else
						{
							func_98("Con_Perf", &iLocal_2314);
							return iVar12;
						}
					}
				}
			}
			if (iVar12 == 2)
			{
				if (func_99(uParam0->f_358[0 /*189*/].f_9))
				{
					if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 2)
						{
							iVar12 = 8;
							return iVar12;
						}
						if (uParam1->f_8 == 3)
						{
							iVar12 = 12;
							return iVar12;
						}
						if (uParam1->f_8 == 1)
						{
							iVar12 = 15;
							return iVar12;
						}
					}
					else
					{
						iVar12 = 5;
						if (!func_337(iLocal_2319, 64))
						{
							func_98("Gate_Kni", &iLocal_2316);
							iLocal_2319 = 0;
							func_309(&iLocal_2319, 64);
							return iVar12;
						}
						else if (!func_337(iLocal_2319, 128))
						{
							func_98("Con_Kni", &iLocal_2316);
							func_309(&iLocal_2319, 128);
							return iVar12;
						}
						else if (!func_337(iLocal_2319, 256))
						{
							func_98("Con_Kni", &iLocal_2316);
							func_309(&iLocal_2319, 256);
							return iVar12;
						}
						else
						{
							func_98("Con_Kni", &iLocal_2316);
							return iVar12;
						}
					}
				}
				else if (func_97(uParam0->f_358[0 /*189*/].f_9))
				{
					if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 3)
						{
							iVar12 = 11;
							return iVar12;
						}
						if (uParam1->f_8 == 2)
						{
							iVar12 = 9;
							return iVar12;
						}
						if (uParam1->f_8 == 1)
						{
							iVar12 = 15;
							return iVar12;
						}
					}
					else
					{
						iVar12 = 5;
						if (!func_337(iLocal_2319, 64))
						{
							func_98("Gate_Kni", &iLocal_2316);
							iLocal_2319 = 0;
							func_309(&iLocal_2319, 64);
							return iVar12;
						}
						else if (!func_337(iLocal_2319, 128))
						{
							func_98("Con_Kni", &iLocal_2316);
							func_309(&iLocal_2319, 128);
							return iVar12;
						}
						else if (!func_337(iLocal_2319, 256))
						{
							func_98("Con_Kni", &iLocal_2316);
							func_309(&iLocal_2319, 256);
							return iVar12;
						}
						else
						{
							func_98("Con_Kni", &iLocal_2316);
							return iVar12;
						}
					}
				}
				else
				{
					unk_0x3A9B1120AF13FBF2(uParam0->f_358[0 /*189*/].f_9, &uVar0, &uVar3, &Var6, &uVar9);
					if (Var6.f_2 <= -0.866f)
					{
						if (uParam1->f_8 != 0)
						{
							if (uParam1->f_8 == 1)
							{
								iVar12 = 14;
								return iVar12;
							}
							if (uParam1->f_8 == 2)
							{
								iVar12 = 8;
								return iVar12;
							}
							if (uParam1->f_8 == 3)
							{
								iVar12 = 12;
								return iVar12;
							}
						}
						else
						{
							iVar12 = 6;
							if (!func_337(iLocal_2319, 512))
							{
								func_98("Gate_Inv", &iLocal_2315);
								iLocal_2319 = 0;
								func_309(&iLocal_2319, 512);
								return iVar12;
							}
							else if (!func_337(iLocal_2319, 1024))
							{
								func_98("Con_Inv", &iLocal_2315);
								func_309(&iLocal_2319, 1024);
								return iVar12;
							}
							else if (!func_337(iLocal_2319, 2048))
							{
								func_98("Con_Inv", &iLocal_2315);
								func_309(&iLocal_2319, 2048);
								return iVar12;
							}
							else
							{
								func_98("Con_Inv", &iLocal_2315);
								return iVar12;
							}
						}
					}
					else if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 2)
						{
							iVar12 = 9;
							return iVar12;
						}
						else if (uParam1->f_8 == 3)
						{
							iVar12 = 12;
							return iVar12;
						}
						else if (uParam1->f_8 == 1)
						{
							iVar12 = 15;
							return iVar12;
						}
					}
					else
					{
						iVar12 = 2;
						if (!func_337(iLocal_2319, 8))
						{
							func_98("Gate_Hit", &iLocal_2313);
							iLocal_2319 = 0;
							func_309(&iLocal_2319, 8);
							return iVar12;
						}
						else if (!func_337(iLocal_2319, 16))
						{
							func_98("Con_Hit", &iLocal_2313);
							func_309(&iLocal_2319, 16);
							return iVar12;
						}
						else if (!func_337(iLocal_2319, 32))
						{
							func_98("Con_Hit", &iLocal_2313);
							func_309(&iLocal_2319, 32);
							return iVar12;
						}
						else
						{
							func_98("Con_Hit", &iLocal_2313);
							return iVar12;
						}
					}
				}
			}
			if (func_94(uParam1, uParam2, iParam3))
			{
				if (uParam1->f_8 != 0)
				{
					if (uParam1->f_8 == 2)
					{
						iVar12 = 10;
						return iVar12;
					}
					if (uParam1->f_8 == 3)
					{
						iVar12 = 13;
						return iVar12;
					}
					if (uParam1->f_8 == 1)
					{
						iVar12 = 16;
						return iVar12;
					}
				}
				else
				{
					iVar12 = 7;
					if (!func_337(iLocal_2319, 1))
					{
						func_98("Gate_Miss", &iLocal_2312);
						iLocal_2319 = 0;
						func_309(&iLocal_2319, 1);
						return iVar12;
					}
					else if (!func_337(iLocal_2319, 2))
					{
						func_98("Con_Miss", &iLocal_2312);
						func_309(&iLocal_2319, 2);
						return iVar12;
					}
					else if (!func_337(iLocal_2319, 4))
					{
						func_98("Con_Miss", &iLocal_2312);
						func_309(&iLocal_2319, 4);
						return iVar12;
					}
					else
					{
						func_98("Con_Miss", &iLocal_2312);
						return iVar12;
					}
				}
			}
			return iVar12;
		}
		if (func_94(uParam1, uParam2, iParam3))
		{
			if (uParam1->f_8 != 0)
			{
				if (uParam1->f_8 == 2)
				{
					iVar12 = 10;
					return iVar12;
				}
				if (uParam1->f_8 == 3)
				{
					iVar12 = 13;
					return iVar12;
				}
				if (uParam1->f_8 == 1)
				{
					iVar12 = 16;
					return iVar12;
				}
			}
			else
			{
				iVar12 = 7;
				if (!func_337(iLocal_2319, 1))
				{
					func_98("Gate_Miss", &iLocal_2312);
					iLocal_2319 = 0;
					func_309(&iLocal_2319, 1);
					return iVar12;
				}
				else if (!func_337(iLocal_2319, 2))
				{
					func_98("Con_Miss", &iLocal_2312);
					func_309(&iLocal_2319, 2);
					return iVar12;
				}
				else if (!func_337(iLocal_2319, 4))
				{
					func_98("Con_Miss", &iLocal_2312);
					func_309(&iLocal_2319, 4);
					return iVar12;
				}
				else
				{
					func_98("Con_Miss", &iLocal_2312);
					return iVar12;
				}
			}
			return iVar12;
		}
	}
	else if (iVar12 != 17)
	{
		return iVar12;
	}
	return -1;
}

int func_94(var uParam0, var uParam1, int iParam2)
{
	float fVar0;
	struct<3> Var1;
	
	if (!func_73(*uParam0, *uParam1, 1056964608))
	{
		fVar0 = (uParam0->f_3 * 5f);
		if (unk_0x5E58342602E94718(iParam2, *uParam0, fVar0, fVar0, fVar0, 0, 1, 0))
		{
			Var1 = { func_96(*uParam1 - *uParam0) };
			if ((func_95(unk_0xA86D5F069399F44D(iParam2, 1), Var1) - func_95(*uParam0, Var1)) > 15f)
			{
				unk_0xB906B139171B1845(-1, sLocal_2304, "HUD_MINI_GAME_SOUNDSET", 1);
				return 1;
			}
		}
	}
	return 0;
}

float func_95(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_96(struct<3> Param0)
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

bool func_97(int iParam0)
{
	var uVar0;
	struct<3> Var3;
	struct<3> Var6;
	var uVar9;
	
	if (unk_0x7D5B1F88E7504BBA(iParam0))
	{
		return 0;
	}
	unk_0x3A9B1120AF13FBF2(iParam0, &uVar0, &Var3, &Var6, &uVar9);
	if (unk_0x134549B388167CBF(Var6.f_2) > 0.342f)
	{
		return 0;
	}
	return Var3.f_2 < 0f;
}

void func_98(char* sParam0, var uParam1)
{
	char cVar0[16];
	
	StringCopy(&cVar0, "Gate_Miss", 16);
	if (!func_337(*uParam1, 1))
	{
		if (!iLocal_1990)
		{
			iLocal_1990 = 1;
			func_309(uParam1, 1);
			return;
		}
		else
		{
			iLocal_1990 = 0;
			if (unk_0xD3852F22AB713A1F(sParam0, &cVar0))
			{
				func_61("SPR_FAIL_GATE", 7500, 0);
			}
			return;
		}
	}
	if (func_337(*uParam1, 1))
	{
		if (!func_337(*uParam1, 2))
		{
			if (!iLocal_1990)
			{
				iLocal_1990 = 1;
				func_309(uParam1, 2);
				return;
			}
			else
			{
				iLocal_1990 = 0;
				if (unk_0xD3852F22AB713A1F(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (func_337(*uParam1, 2))
	{
		if (!func_337(*uParam1, 4))
		{
			if (!iLocal_1990)
			{
				iLocal_1990 = 1;
				func_309(uParam1, 4);
				return;
			}
			else
			{
				iLocal_1990 = 0;
				if (unk_0xD3852F22AB713A1F(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (func_337(*uParam1, 4))
	{
		if (!func_337(*uParam1, 8))
		{
			if (!iLocal_1990)
			{
				iLocal_1990 = 1;
				func_309(uParam1, 8);
				return;
			}
			else
			{
				iLocal_1990 = 0;
				if (unk_0xD3852F22AB713A1F(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (func_337(*uParam1, 8))
	{
		if (!func_337(*uParam1, 16))
		{
			if (!iLocal_1990)
			{
				iLocal_1990 = 1;
				func_309(uParam1, 16);
				return;
			}
			else
			{
				iLocal_1990 = 0;
				if (unk_0xD3852F22AB713A1F(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
}

bool func_99(int iParam0)
{
	var uVar0;
	struct<3> Var3;
	struct<3> Var6;
	var uVar9;
	
	if (unk_0x7D5B1F88E7504BBA(iParam0))
	{
		return 0;
	}
	unk_0x3A9B1120AF13FBF2(iParam0, &uVar0, &Var3, &Var6, &uVar9);
	if (unk_0x134549B388167CBF(Var6.f_2) > 0.342f)
	{
		return 0;
	}
	return Var3.f_2 > 0f;
}

int func_100(var uParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	
	Var0 = { *uParam0 };
	unk_0x3A9B1120AF13FBF2(iParam1, &Var12, &Var6, &Var9, &Var3);
	Var15 = { Var0 - Var3 };
	fVar18 = unk_0x134549B388167CBF(func_95(Var15, Var12));
	fVar19 = unk_0x134549B388167CBF(func_95(Var15, Var9));
	fVar20 = unk_0x134549B388167CBF(func_95(Var15, Var6));
	fVar21 = ((fVar19 * fVar19) + (fVar20 * fVar20));
	if (fVar18 > 6.5f)
	{
		return 17;
	}
	else
	{
		if (fVar21 > 900f)
		{
			if (iParam1 == unk_0x096275889B8E0EE0())
			{
				func_180(&uLocal_2262, 0);
			}
			return 17;
		}
		if (fVar21 > 110f)
		{
			if (iParam1 == unk_0x096275889B8E0EE0())
			{
				func_180(&uLocal_2262, 0);
			}
			unk_0xB906B139171B1845(-1, sLocal_2303, "HUD_MINI_GAME_SOUNDSET", 1);
			return 2;
		}
		else
		{
			if (iParam1 == unk_0x096275889B8E0EE0())
			{
				func_180(&uLocal_2262, 0);
			}
			unk_0xB906B139171B1845(-1, sLocal_2303, "HUD_MINI_GAME_SOUNDSET", 1);
			return 1;
		}
	}
	return -1;
}

void func_101(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<189> Var2;
	float fVar191;
	float fVar192;
	
	if (iParam1 < 0 || iParam1 > (uParam0->f_13 - 1))
	{
		return;
	}
	iVar0 = uParam0->f_13;
	Var2 = { uParam0->f_358[iParam1 /*189*/] };
	iVar1 = 0;
	while (iVar1 < uParam0->f_13)
	{
		if (Var2.f_8 != uParam0->f_358[iVar1 /*189*/].f_8)
		{
			if (!unk_0x7D5B1F88E7504BBA(uParam0->f_358[iVar1 /*189*/].f_8) && !unk_0x7D5B1F88E7504BBA(Var2.f_8))
			{
				if (Var2.f_11 > uParam0->f_358[iVar1 /*189*/].f_11)
				{
					iVar0 = (iVar0 - 1);
				}
				else if (Var2.f_11 == uParam0->f_358[iVar1 /*189*/].f_11)
				{
					fVar191 = func_102(Var2.f_8, uParam0->f_27[Var2.f_11 /*10*/], 1);
					fVar192 = func_102(uParam0->f_358[iVar1 /*189*/].f_8, uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/], 1);
					if (fVar191 < fVar192)
					{
						iVar0 = (iVar0 - 1);
					}
				}
			}
			else
			{
				iVar0 = (iVar0 - 1);
			}
		}
		iVar1++;
	}
	uParam0->f_358[iParam1 /*189*/].f_12 = iVar0;
}

float func_102(int iParam0, struct<3> Param1, int iParam4)
{
	if (unk_0x7D5B1F88E7504BBA(iParam0))
	{
		return -1f;
	}
	return unk_0x0BE7F4E3CDBAFB28(unk_0xA86D5F069399F44D(iParam0, 1), Param1, iParam4);
}

void func_103(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_62(*iParam1, iParam2))
	{
		return;
	}
	if (!bParam3)
	{
		func_279(sParam0, -1);
	}
	else
	{
		func_104(sParam0);
	}
	func_60(iParam1, iParam2);
}

void func_104(char* sParam0)
{
	unk_0x0718552FB84CF252(sParam0);
	unk_0x7178D3ABFAB2F9F4(0, 1, 1, -1);
}

int func_105(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	switch (uParam1->f_23)
	{
		case 0:
			func_161(uParam0);
			func_229();
			func_239(&(Local_50.f_119), 0, 0, 1, 1);
			func_238(&(Local_50.f_119), "IB_RETRY", 2, 201, 1, 1, 0);
			func_238(&(Local_50.f_119), "FE_HLP16", 2, 202, 1, 1, 0);
			func_232(1);
			unk_0xF27F981A5EBAEFDB("MGSP_FAIL");
			uParam1->f_23 = 1;
			break;
		
		case 1:
			if (func_155(&(Local_50.f_297), &(Local_50.f_303), &(uParam0->f_17), cLocal_2274, sLocal_2275, uParam0, 78))
			{
				iLocal_2405 = 0;
				if (!unk_0x7D5B1F88E7504BBA(uParam0->f_358[0 /*189*/].f_9))
				{
					unk_0x96F78A6A075D55D9(uParam0->f_358[0 /*189*/].f_9, 4);
				}
				if (func_236("SPR_HELP_DAMG", 0, 0))
				{
					unk_0xB836C5982F4438BA("SPR_HELP_DAMG");
				}
				uParam0->f_1 = 0;
				func_66(&(Local_50.f_297), 1);
				if (*uParam0)
				{
					func_148(0, 0);
					func_147(0, 0);
					func_146();
					if (func_236("SPR_RETR_DES", 0, 0))
					{
						unk_0xB836C5982F4438BA("SPR_RETR_DES");
					}
					func_232(0);
					*uParam0 = 1;
					uParam1->f_23 = 6;
				}
				else
				{
					func_148(0, 0);
					func_147(0, 0);
					func_146();
					func_89(&uLocal_2277, 10f);
					func_232(0);
					*uParam0 = 0;
					uParam1->f_23 = 7;
				}
			}
			break;
		
		case 2:
			func_138(&(Local_50.f_119), 1128792064, 7, 1, 1, 1065353216);
			if (unk_0xCCBB0BB9790E1F47(2, 201))
			{
				func_148(0, 0);
				func_147(0, 0);
				func_146();
				iLocal_2410 = unk_0xC488DC56F57F2505();
				unk_0xB906B139171B1845(iLocal_2410, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", 1);
				if (func_236("SPR_RETR_DES", 0, 0))
				{
					unk_0xB836C5982F4438BA("SPR_RETR_DES");
				}
				func_232(0);
				*uParam0 = 1;
				uParam1->f_23 = 6;
			}
			else if (unk_0xCCBB0BB9790E1F47(2, 202))
			{
				func_148(0, 0);
				func_147(0, 0);
				func_146();
				iLocal_2410 = unk_0xC488DC56F57F2505();
				unk_0xB906B139171B1845(iLocal_2410, "Phone_Generic_Key_03", "HUD_MINIGAME_SOUNDSET", 1);
				func_89(&uLocal_2277, 10f);
				func_232(0);
				*uParam0 = 0;
				uParam1->f_23 = 7;
			}
			break;
		
		case 4:
			if (*uParam0 == 1)
			{
				uParam0->f_1 = 0;
			}
			if (uParam1->f_11 > 0)
			{
				uParam1->f_16 = { uParam0->f_27[uParam1->f_11 /*10*/] };
			}
			if (bParam2)
			{
				if (unk_0xB86D29B10F627379(uParam0->f_358[0 /*189*/].f_9, 0))
				{
					unk_0xFEBEEBC9CBDF4B12(unk_0x217E9DC48139933D(), 1);
					unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 0, 0);
					func_239(&(Local_50.f_119), 0, 0, 1, 1);
					func_238(&(Local_50.f_119), "SPR_UI_CONT", 2, 201, 1, 1, 0);
					func_238(&(Local_50.f_119), "IB_NO", 2, 202, 1, 1, 0);
				}
			}
			if (bParam2)
			{
				if (unk_0xB86D29B10F627379(uParam0->f_358[0 /*189*/].f_9, 0))
				{
					uParam1->f_23 = 5;
				}
			}
			else
			{
				uParam1->f_23 = 8;
			}
			break;
		
		case 5:
			if (!unk_0x7D5B1F88E7504BBA(uParam0->f_358[0 /*189*/].f_9))
			{
				unk_0x96F78A6A075D55D9(uParam0->f_358[0 /*189*/].f_9, 4);
			}
			uParam0->f_1 = 0;
			if (func_5(&uLocal_2277) <= 10f)
			{
				if (bParam2)
				{
					unk_0xB5F6539FA93ECBF6(9);
					unk_0xB5F6539FA93ECBF6(7);
					unk_0x562F5D788AF3FA80(0, 99, 1);
					unk_0x562F5D788AF3FA80(0, 100, 1);
					func_138(&(Local_50.f_119), 1128792064, 1, 0, 1, 1065353216);
					if (unk_0xCCBB0BB9790E1F47(2, 201))
					{
						*uParam0 = 1;
						iLocal_2410 = unk_0xC488DC56F57F2505();
						unk_0xB906B139171B1845(iLocal_2410, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", 1);
						uParam1->f_23 = 6;
					}
					else if (unk_0xCCBB0BB9790E1F47(2, 202))
					{
						*uParam0 = 0;
						func_89(&uLocal_2277, 10f);
						iLocal_2410 = unk_0xC488DC56F57F2505();
						unk_0xB906B139171B1845(iLocal_2410, "Phone_Generic_Key_03", "HUD_MINIGAME_SOUNDSET", 1);
						uParam1->f_23 = 6;
					}
				}
			}
			else
			{
				unk_0x00686F7B3723B82F();
				sLocal_2275 = "SPR_RETR_DES";
				func_66(&(Local_50.f_297), 1);
				uParam1->f_23 = 14;
			}
			break;
		
		case 6:
			if (func_333(500))
			{
				unk_0x00686F7B3723B82F();
				unk_0x0BFC2C61FB5B6CA1(1);
				uParam1->f_23 = 8;
			}
			break;
		
		case 7:
			if (func_3(&(uParam0->f_3)))
			{
				func_4(&(uParam0->f_3));
			}
			if (func_122())
			{
				if (unk_0xF5472C80DF2FF847())
				{
					func_161(uParam0);
					unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 0, 0);
					if (unk_0xD42BD6EB2E0F1677(uParam0->f_358[0 /*189*/].f_9))
					{
						unk_0x48BD4C60B7171F88(uParam0->f_358[0 /*189*/].f_9, 0f, 0f, 0f);
						unk_0xB25E22832517B44E(uParam0->f_358[0 /*189*/].f_9, unk_0xA180AA26CC8599A3(uParam0->f_358[0 /*189*/].f_9));
					}
					uParam1->f_23 = 10;
				}
			}
			break;
		
		case 8:
			if (func_120(uParam1, 1))
			{
				if (*uParam0)
				{
					uParam0->f_26 = 8;
				}
				else
				{
					if (bParam2)
					{
						unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 1, 0);
						if (Local_50.f_0 == 0)
						{
							unk_0xFEBEEBC9CBDF4B12(unk_0x217E9DC48139933D(), 1);
						}
					}
					uParam1->f_23 = 9;
				}
			}
			break;
		
		case 9:
			iVar0 = 0;
			while (iVar0 < uParam0->f_13)
			{
				if (uParam0->f_358[iVar0 /*189*/].f_8 == uParam1->f_8)
				{
					func_118(uParam0, iVar0, 0);
				}
				iVar0++;
			}
			if (bParam2)
			{
				if (!unk_0x7D5B1F88E7504BBA(uParam0->f_358[0 /*189*/].f_9) && uParam0->f_358[0 /*189*/].f_11 != -1)
				{
					func_117(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/], uParam0->f_358[0 /*189*/].f_9, uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/], uParam0->f_358[0 /*189*/].f_11 == 0);
				}
				unk_0x5D1EB123EAC5D071(0f);
				func_11(&uLocal_2401);
				uParam1->f_23 = 11;
			}
			else
			{
				uParam1->f_23 = 13;
			}
			break;
		
		case 10:
			func_148(0, 0);
			func_147(0, 0);
			func_110(uParam1, 1);
			func_9(uParam1, Local_50.f_3, Local_50.f_6, 0f);
			unk_0xC1B1E9A034A63A62(0);
			uParam1->f_23 = 12;
			break;
		
		case 11:
			if (!unk_0xEEA50AAE36800059() || unk_0x9F3CD46F4B1D9255())
			{
				uParam0->f_1 = 1;
				func_11(&uLocal_2401);
				func_108(&(uParam0->f_358[iVar0 /*189*/]), 60f, 0);
				if (func_549(500))
				{
					unk_0xE27DBC64CB87AA75();
					if (!unk_0x7D5B1F88E7504BBA(uParam0->f_358[0 /*189*/].f_9))
					{
						unk_0xF80258351D8421EB(uParam0->f_358[0 /*189*/].f_8, uParam0->f_358[0 /*189*/].f_9, -1);
					}
					if (bParam2 && Local_50.f_0 == 0)
					{
						func_88(&(uParam0->f_358[0 /*189*/]), 5f);
					}
					uParam1->f_23 = 13;
				}
				return 0;
			}
			else if (unk_0xEEA50AAE36800059())
			{
				if (uParam0->f_358[0 /*189*/].f_11 < uParam0->f_12)
				{
					if (func_3(&uLocal_2401))
					{
						if (func_107(&uLocal_2401) >= 3f)
						{
							unk_0xE27DBC64CB87AA75();
						}
					}
					else
					{
						func_10(&uLocal_2401);
					}
				}
			}
			break;
		
		case 12:
			uParam0->f_26 = 8;
			return 0;
			break;
		
		case 13:
			if (uParam1->f_22 != 0)
			{
				if (!unk_0x7D5B1F88E7504BBA(uParam1->f_8))
				{
					if (func_106(uParam1))
					{
						func_11(&uLocal_2277);
						sLocal_2275 = "SPR_RETR_STUK";
						uParam1->f_23 = 0;
						return 1;
					}
				}
			}
			return 0;
		
		case 14:
			func_161(uParam0);
			func_4(&(uParam0->f_3));
			uParam0->f_26 = 8;
			break;
	}
	return 1;
}

int func_106(var uParam0)
{
	if (uParam0->f_22 != 0)
	{
		if (!unk_0x2E9C3FCB6798F397(unk_0x217E9DC48139933D()))
		{
			if (unk_0x9C8E4D238C999648(unk_0x096275889B8E0EE0(), uParam0->f_9, 0))
			{
				if (unk_0xFB6BA510A533DF81(uParam0->f_9) <= 15f)
				{
					if (uParam0->f_22 == joaat("stunt"))
					{
						if (unk_0x0D3B5BAEA08F63E9(uParam0->f_9) < 3f || unk_0xDF18751EC74F90FF(uParam0->f_9))
						{
							if (unk_0x109DE3DA41AAD94A(uParam0->f_9) && unk_0x0D3B5BAEA08F63E9(uParam0->f_9) < 1f)
							{
								return 1;
							}
							if (unk_0x1ABA9753939503C5(uParam0->f_9, 0, 1000))
							{
								return 1;
							}
							if (unk_0x1ABA9753939503C5(uParam0->f_9, 1, 1000))
							{
								return 1;
							}
							if (unk_0x1ABA9753939503C5(uParam0->f_9, 2, 10000))
							{
								return 1;
							}
							if (unk_0x1ABA9753939503C5(uParam0->f_9, 3, 10000))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

float func_107(var uParam0)
{
	if (func_3(uParam0))
	{
		if (func_7(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_6(unk_0x4ED6CFDFE8D4131A(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_108(var uParam0, float fParam1, bool bParam2)
{
	struct<3> Var0;
	
	if (!unk_0x7D5B1F88E7504BBA(uParam0->f_9))
	{
		if (unk_0x6BD83A1CACAF87AD(uParam0->f_22))
		{
			Var0 = { unk_0xE09CAF86C32CB48F(uParam0->f_9, 2) };
			func_109(uParam0->f_9, fParam1, bParam2, Var0.f_0, 0);
		}
	}
}

void func_109(int iParam0, float fParam1, bool bParam2, float fParam3, float fParam4)
{
	struct<3> Var0;
	bool bVar3;
	float fVar4;
	
	unk_0x562F5D788AF3FA80(0, 75, 1);
	if (unk_0x7D5B1F88E7504BBA(iParam0))
	{
		return;
	}
	if (unk_0xFB6BA510A533DF81(iParam0) < fParam1)
	{
		unk_0xF9F92AF49F12F6E7(iParam0, fParam1);
	}
	Var0 = { unk_0xE09CAF86C32CB48F(iParam0, 2) };
	bVar3 = false;
	if (bParam2)
	{
		fVar4 = (unk_0x5E72022914CE3C38() * 45f);
		if (Var0.f_0 < -fVar4)
		{
			bVar3 = true;
			Var0.f_0 = (Var0.f_0 + fVar4);
		}
		else if (Var0.f_0 < fParam3)
		{
			bVar3 = true;
			Var0.f_0 = fParam3;
		}
		else if (Var0.f_0 > fVar4)
		{
			bVar3 = true;
			Var0.f_0 = (Var0.f_0 - fVar4);
		}
		else if (Var0.f_0 > fParam3)
		{
			bVar3 = true;
			Var0.f_0 = fParam3;
		}
		if (Var0.f_1 < -fVar4)
		{
			bVar3 = true;
			Var0.f_1 = (Var0.f_1 + fVar4);
		}
		else if (Var0.f_1 < fParam4)
		{
			bVar3 = true;
			Var0.f_1 = fParam4;
		}
		else if (Var0.f_1 > fVar4)
		{
			bVar3 = true;
			Var0.f_1 = (Var0.f_1 - fVar4);
		}
		else if (Var0.f_1 > fParam4)
		{
			bVar3 = true;
			Var0.f_1 = fParam4;
		}
	}
	else
	{
		if (Var0.f_0 != fParam3)
		{
			bVar3 = true;
			Var0.f_0 = fParam3;
		}
		if (Var0.f_1 != fParam4)
		{
			bVar3 = true;
			Var0.f_1 = fParam4;
		}
	}
	if (bVar3)
	{
		unk_0x9CC8314DFEDE441E(iParam0, Var0, 2, 1);
	}
}

int func_110(var uParam0, bool bParam1)
{
	char cVar0[16];
	
	if (bParam1)
	{
		if (unk_0xD42BD6EB2E0F1677(uParam0->f_9))
		{
			if (!unk_0x7D5B1F88E7504BBA(uParam0->f_9) || !unk_0xB86D29B10F627379(uParam0->f_9, 0))
			{
				if (unk_0x9C8E4D238C999648(uParam0->f_8, uParam0->f_9, 0))
				{
					unk_0xFA8B88A1EF049B33(uParam0->f_8);
					unk_0xDC19C288082E586E(uParam0->f_9, 1, 1);
					unk_0xE20A909D8C4A70F8(&(uParam0->f_9));
				}
			}
			else
			{
				if (unk_0x9C8E4D238C999648(uParam0->f_8, uParam0->f_9, 0))
				{
					unk_0xF6A103413A202C37(uParam0->f_8, uParam0->f_16, 1, 0, 0, 1);
				}
				if (unk_0x9C8E4D238C999648(uParam0->f_8, uParam0->f_9, 0))
				{
				}
				else
				{
					unk_0xDC19C288082E586E(uParam0->f_9, 1, 1);
					unk_0xE20A909D8C4A70F8(&(uParam0->f_9));
				}
			}
		}
	}
	if (!unk_0x7D5B1F88E7504BBA(uParam0->f_9))
	{
		unk_0xB25E22832517B44E(uParam0->f_9, 1000);
		unk_0x79811282A9D1AE56(uParam0->f_9);
		unk_0x8BDC5B998B4654EF(uParam0->f_9, 1000f);
		unk_0xF6A103413A202C37(uParam0->f_9, uParam0->f_16, 1, 0, 0, 1);
		unk_0xCF2B9C0645C4651B(uParam0->f_9, uParam0->f_19);
		unk_0x7263332501E07F52(uParam0->f_9);
	}
	else
	{
		if (uParam0->f_22 == 0)
		{
			return 1;
		}
		uParam0->f_9 = unk_0xF757863E1E2D8F12(joaat("stunt"), uParam0->f_16, uParam0->f_19, 1, 1);
		if (unk_0x7D5B1F88E7504BBA(uParam0->f_9))
		{
			return 0;
		}
		if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
		{
			unk_0x96F78A6A075D55D9(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0), 4);
		}
		unk_0x252253C8A45AA1FC(uParam0->f_9, 1);
		func_111(uParam0->f_9, &(Local_50.f_243), 0, 1);
	}
	unk_0x956426ABED33B473(uParam0->f_9, 0);
	unk_0xB64CFA14CB9A2E78(uParam0->f_9, 1, 1);
	unk_0x9859F4F910FB34CD(uParam0->f_9);
	if (!unk_0x7D5B1F88E7504BBA(uParam0->f_8))
	{
		if (!unk_0xEB8F1713A0FC1B96(uParam0->f_8, uParam0->f_9))
		{
			unk_0xF80258351D8421EB(uParam0->f_8, uParam0->f_9, -1);
		}
	}
	if (!unk_0x138190F64DB4BBD1(uParam0->f_9))
	{
		unk_0xDC19C288082E586E(uParam0->f_9, 1, 0);
	}
	MemCopy(&cVar0, {*uParam0}, 4);
	StringConCat(&cVar0, "_Veh", 16);
	unk_0x17027D5F1810B3BA(uParam0->f_9, &cVar0);
	if (uParam0->f_20 <= 3)
	{
		unk_0x8F75941C86EEBFCA(uParam0->f_9, 0);
		Local_50.f_1 = uParam0->f_9;
	}
	return 1;
}

void func_111(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (unk_0xB86D29B10F627379(iParam0, 0))
	{
		if (unk_0xFD340785ADF8CFB7(&(uParam1->f_1)) != 0)
		{
			unk_0x7CC8C8811EBB989E(iParam0, &(uParam1->f_1));
		}
		if (*uParam1 >= 0 && *uParam1 < unk_0xA8FE4E8F7BD873D5())
		{
			unk_0xEB7B6A1ED56F4482(iParam0, *uParam1);
		}
		if (uParam1->f_42 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
		}
		if (unk_0x4ED6CFDFE8D4131A(uParam1->f_53, 13))
		{
			unk_0x965BE505551918E2(iParam0, uParam1->f_47, uParam1->f_48, uParam1->f_49);
		}
		else
		{
			unk_0x0424A78EBA7679FD(iParam0);
		}
		if (unk_0x4ED6CFDFE8D4131A(uParam1->f_53, 12))
		{
			unk_0x01E6CB7C629CACAD(iParam0, uParam1->f_47, uParam1->f_48, uParam1->f_49);
		}
		else
		{
			unk_0xF6829B08A81651BF(iParam0);
		}
		unk_0xB375807E9837A2E6(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0x9E3F1A6B5BDD1931(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0x4ED6CFDFE8D4131A(uParam1->f_53, 15) || func_116(iParam0)) || (((uParam1->f_38 == 0 && uParam1->f_39 == 0) && uParam1->f_40 == 0) && uParam1->f_9[20] > 0)) && func_115())
		{
			uParam1->f_38 = 0;
			uParam1->f_39 = 0;
			uParam1->f_40 = 0;
		}
		else if ((uParam1->f_38 == 0 && uParam1->f_39 == 0) && uParam1->f_40 == 0)
		{
			uParam1->f_38 = 255;
			uParam1->f_39 = 255;
			uParam1->f_40 = 255;
		}
		unk_0x03D949027B05BC92(iParam0, uParam1->f_38, uParam1->f_39, uParam1->f_40);
		if (uParam1->f_41 == -1 && uParam1->f_42 != joaat("granger"))
		{
			unk_0xCE282AFF0C7F4C98(iParam0, 0);
		}
		else
		{
			unk_0xCE282AFF0C7F4C98(iParam0, 0);
			unk_0xCE282AFF0C7F4C98(iParam0, uParam1->f_41);
		}
		unk_0xEBD0A4E935106FE5(iParam0, !unk_0x4ED6CFDFE8D4131A(uParam1->f_53, 9));
		if (bParam2)
		{
			unk_0x96F78A6A075D55D9(iParam0, uParam1->f_46);
		}
		unk_0x1EFD7739867F28AC(iParam0, uParam1->f_50, uParam1->f_51, uParam1->f_52);
		unk_0x36DF83F2FB53681B(iParam0, 2, unk_0x4ED6CFDFE8D4131A(uParam1->f_53, 28));
		unk_0x36DF83F2FB53681B(iParam0, 3, unk_0x4ED6CFDFE8D4131A(uParam1->f_53, 29));
		unk_0x36DF83F2FB53681B(iParam0, 0, unk_0x4ED6CFDFE8D4131A(uParam1->f_53, 30));
		unk_0x36DF83F2FB53681B(iParam0, 1, unk_0x4ED6CFDFE8D4131A(uParam1->f_53, 31));
		unk_0x6C32FC81DFF25C9A(iParam0, unk_0x4ED6CFDFE8D4131A(uParam1->f_53, 10));
		if (unk_0xFBCB0CF4F2D861F4(iParam0) > 1 && uParam1->f_43 >= 0)
		{
			unk_0x3DDADEB2183B6AE7(iParam0, uParam1->f_43);
		}
		if (uParam1->f_45 > -1 && uParam1->f_45 < 255)
		{
			if (!unk_0x2BA0AE672835A516(unk_0xDA76A9F39210D365(iParam0)))
			{
				if (unk_0x7331BD1F2125CC77(unk_0xDA76A9F39210D365(iParam0)))
				{
					if (uParam1->f_45 == 6)
					{
						unk_0x98AE73E3DEAA330F(iParam0, uParam1->f_45);
					}
				}
				else
				{
					unk_0x98AE73E3DEAA330F(iParam0, uParam1->f_45);
				}
			}
		}
		if (unk_0x7B7BDDF3BC6C3D0E(iParam0, 0))
		{
			if ((uParam1->f_44 == 0 || uParam1->f_44 == 3) || uParam1->f_44 == 5)
			{
				unk_0xEB3AB66184686049(iParam0, 1);
			}
			else
			{
				unk_0x8B149FD2D4FB26D2(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_113(&iParam0, &(uParam1->f_9), &(uParam1->f_35));
		}
		if (!unk_0xB9B56D169DBE14C0(uParam1->f_42) && !unk_0x799CFC7C5B743B15(uParam1->f_42))
		{
			iVar0 = 0;
			while (iVar0 <= 11)
			{
				if (unk_0x4ED6CFDFE8D4131A(uParam1->f_53, func_112(iVar0 + 1)))
				{
					if (!unk_0xFA9A55D9C4351625(iParam0, iVar0 + 1))
					{
						unk_0xBB6F89150BC9D16B(iParam0, iVar0 + 1, 0);
					}
				}
				else if (unk_0xFA9A55D9C4351625(iParam0, iVar0 + 1))
				{
					unk_0xBB6F89150BC9D16B(iParam0, iVar0 + 1, 1);
				}
				iVar0++;
			}
		}
		if (unk_0x6BD83A1CACAF87AD(uParam1->f_42))
		{
			if (!unk_0x4ED6CFDFE8D4131A(uParam1->f_53, 23))
			{
				if (unk_0x4ED6CFDFE8D4131A(uParam1->f_53, 22))
				{
					unk_0x51450058156FFFEA(iParam0, 2);
				}
				else
				{
					unk_0x51450058156FFFEA(iParam0, 3);
				}
			}
			else
			{
				unk_0x51450058156FFFEA(iParam0, 4);
			}
		}
		if (unk_0x4ED6CFDFE8D4131A(uParam1->f_53, 27))
		{
			unk_0xFE26E4609B1C3772(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0xFE26E4609B1C3772(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_112(int iParam0)
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

int func_113(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xB86D29B10F627379(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xAF9BACB8400BED0F(*iParam0) == 0)
	{
		return 0;
	}
	unk_0xAC447F5493BF482F(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0x7F45E17D00A1DD46(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0x6F122920B2E54FF4(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x8A5D294BA9E3CB1B(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x75F35BD9450C6115(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x75F35BD9450C6115(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x75F35BD9450C6115(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_114(*iParam0))
	{
		unk_0xAB315515C9F8803D(*iParam0, 1);
		unk_0x252253C8A45AA1FC(*iParam0, 1);
	}
	return 1;
}

int func_114(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0xD42BD6EB2E0F1677(iParam0) && unk_0xB86D29B10F627379(iParam0, 0)) && unk_0xAF9BACB8400BED0F(iParam0) > 0)
	{
		unk_0xAC447F5493BF482F(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 25)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x6F122920B2E54FF4(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0xDDE1A93E2FD0D873(iParam0, iVar1, unk_0x6F122920B2E54FF4(iParam0, iVar1)), 16);
				iVar2 = unk_0xFD340785ADF8CFB7(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0xFD340785ADF8CFB7("MNU_CAGE") || iVar2 == unk_0xFD340785ADF8CFB7("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

var func_115()
{
	return unk_0x2763DC12BBE2BB6F(joaat("mpindependence"));
}

int func_116(int iParam0)
{
	int iVar0;
	
	if (unk_0xD42BD6EB2E0F1677(iParam0))
	{
		if (unk_0xB86D29B10F627379(iParam0, 0))
		{
			if (unk_0x72355278C069F272("MPBitset", 3))
			{
				if (unk_0xD9D1CDBF3464DCDF(iParam0, "MPBitset"))
				{
					iVar0 = unk_0x44DB62727762FD9B(iParam0, "MPBitset");
				}
				return unk_0x4ED6CFDFE8D4131A(iVar0, 4);
			}
		}
	}
	return 0;
}

void func_117(struct<3> Param0, int iParam3, struct<3> Param4, bool bParam7)
{
	var uVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	struct<3> Var8;
	float fVar11;
	struct<3> Var12;
	
	if (!unk_0x7D5B1F88E7504BBA(iParam3))
	{
		if (bParam7 && Local_50.f_10 == 0)
		{
			unk_0xF6A103413A202C37(iParam3, 1705.039f, 3251.13f, 40.0016f, 1, 0, 0, 1);
		}
		Var12 = { unk_0xA86D5F069399F44D(iParam3, 1) };
		unk_0x0A3720F162A033C9(Var12);
		unk_0x24FA4267BB8D2431(Var12, &fVar11);
		Var5 = { unk_0xA86D5F069399F44D(iParam3, 1) };
		if (bParam7)
		{
			Var8 = { Param0 - Param4 };
		}
		else
		{
			Var8 = { Param4 - Var5 };
		}
		uVar0 = unk_0x38D5202FF9271C62(Var8.f_0, Var8.f_1);
		fVar1 = (unk_0x38D5202FF9271C62(Var8.f_0, Var8.f_2) - 270f);
		while (fVar1 > 180f)
		{
			fVar1 = (fVar1 - 360f);
		}
		while (fVar1 < -180f)
		{
			fVar1 = (fVar1 + 360f);
		}
		if (fVar1 < -90f)
		{
			fVar1 = -(180f - unk_0x134549B388167CBF(fVar1));
		}
		if (fVar1 > 90f)
		{
			fVar1 = (180f - unk_0x134549B388167CBF(fVar1));
		}
		if (unk_0x134549B388167CBF((Var12.f_2 - fVar11)) < 25f && (fVar1 > 15f || fVar1 < -15f))
		{
			Var12.f_2 = (fVar11 + 25f);
			unk_0xF6A103413A202C37(iParam3, Var12, 1, 0, 0, 1);
		}
		unk_0x7D9EFB7AD6B19754(iParam3, 1);
		Var2 = { unk_0xE09CAF86C32CB48F(iParam3, 2) };
		Var2.f_0 = fVar1;
		Var2.f_2 = uVar0;
		unk_0x9CC8314DFEDE441E(iParam3, Var2, 2, 1);
		unk_0x7D9EFB7AD6B19754(iParam3, 0);
		unk_0xDE9A139B002A7C00(Var12, unk_0x2412D9C05BB09B97(iParam3), 500f, 0);
	}
}

void func_118(var uParam0, int iParam1, bool bParam2)
{
	func_119(uParam0, iParam1, (uParam0->f_358[iParam1 /*189*/].f_11 - 1), bParam2);
}

void func_119(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<3> Var0;
	var uVar3;
	float fVar4;
	
	if (iParam2 < 0 || iParam2 > (uParam0->f_12 - 1))
	{
		return;
	}
	if (iParam1 < 0 || iParam1 > (uParam0->f_13 - 1))
	{
		return;
	}
	if (unk_0x7D5B1F88E7504BBA(uParam0->f_358[iParam1 /*189*/].f_8))
	{
		return;
	}
	if (uParam0->f_358[iParam1 /*189*/].f_22 != 0)
	{
		if (unk_0x7D5B1F88E7504BBA(uParam0->f_358[iParam1 /*189*/].f_9))
		{
			return;
		}
	}
	Var0 = { uParam0->f_27[iParam2 + 1 /*10*/] - uParam0->f_27[iParam2 /*10*/] };
	uVar3 = unk_0x38D5202FF9271C62(Var0.f_0, Var0.f_1);
	fVar4 = 0f;
	if (unk_0x7331BD1F2125CC77(uParam0->f_358[iParam1 /*189*/].f_22))
	{
		fVar4 = 0f;
	}
	else if (unk_0x9BA1FF16AC7AD1BD(uParam0->f_358[iParam1 /*189*/].f_22))
	{
		fVar4 = 25f;
	}
	else if (unk_0x6BD83A1CACAF87AD(uParam0->f_358[iParam1 /*189*/].f_22))
	{
		fVar4 = 60f;
	}
	if (bParam3)
	{
	}
	func_9(&(uParam0->f_358[iParam1 /*189*/]), uParam0->f_27[iParam2 /*10*/], uVar3, fVar4);
}

int func_120(var uParam0, bool bParam1)
{
	if (!func_110(uParam0, bParam1) || !func_121(uParam0))
	{
		return 0;
	}
	return 1;
}

int func_121(var uParam0)
{
	char cVar0[16];
	
	if (uParam0->f_21 == 0)
	{
		return 0;
	}
	if (!unk_0x7D5B1F88E7504BBA(uParam0->f_8))
	{
		unk_0xB25E22832517B44E(uParam0->f_8, 1000);
		if (!unk_0x7D5B1F88E7504BBA(uParam0->f_9))
		{
			if (!unk_0xEB8F1713A0FC1B96(uParam0->f_8, uParam0->f_9))
			{
				unk_0xF80258351D8421EB(uParam0->f_8, uParam0->f_9, -1);
			}
		}
		else
		{
			unk_0xF6A103413A202C37(uParam0->f_8, uParam0->f_16, 1, 0, 0, 1);
			unk_0xCF2B9C0645C4651B(uParam0->f_8, uParam0->f_19);
		}
	}
	else if (!unk_0x7D5B1F88E7504BBA(uParam0->f_9))
	{
		uParam0->f_8 = unk_0x63FC6DA06F97F02C(uParam0->f_9, uParam0->f_20, uParam0->f_21, -1, 1, 1);
		if (unk_0x7D5B1F88E7504BBA(uParam0->f_8))
		{
			return 0;
		}
	}
	else
	{
		uParam0->f_8 = unk_0x9066DFD4D92E6773(uParam0->f_20, uParam0->f_21, uParam0->f_16, uParam0->f_19, 1, 1);
		if (unk_0x7D5B1F88E7504BBA(uParam0->f_8))
		{
			return 0;
		}
	}
	if (uParam0->f_20 > 3)
	{
		if (!unk_0x138190F64DB4BBD1(uParam0->f_8))
		{
			unk_0xDC19C288082E586E(uParam0->f_8, 1, 0);
		}
		MemCopy(&cVar0, {*uParam0}, 4);
		StringConCat(&cVar0, "_Drv", 16);
		unk_0x88C774425FE9380C(uParam0->f_8, &cVar0);
	}
	return 1;
}

int func_122()
{
	if (!unk_0x4ED6CFDFE8D4131A(iLocal_42, 0) && !unk_0x4ED6CFDFE8D4131A(iLocal_42, 1))
	{
		unk_0xC1B1E9A034A63A62(0);
		func_148(1, 0);
	}
	if (!unk_0x2004A43D1B1A5D9F())
	{
		unk_0x00686F7B3723B82F();
	}
	unk_0x562F5D788AF3FA80(2, 199, 1);
	unk_0x562F5D788AF3FA80(0, 59, 1);
	unk_0x562F5D788AF3FA80(0, 60, 1);
	unk_0x562F5D788AF3FA80(0, 37, 1);
	unk_0x562F5D788AF3FA80(0, 25, 1);
	unk_0x62AD77E1EB9CFB2B();
	if (IntToFloat(unk_0x83666F9FB8FEBD4B()) > (1500f * 0.2f))
	{
		if (!unk_0x4ED6CFDFE8D4131A(iLocal_42, 1))
		{
			func_147(1, 0);
			unk_0x5AE11BC36633DE4E(0);
		}
		else if (IntToFloat(unk_0xC9D9444186B5A374()) > (1500f * 0.075f) || unk_0xF5472C80DF2FF847())
		{
			if (!unk_0xF5472C80DF2FF847())
			{
				if (!unk_0x02F39BEFE7B88D00())
				{
					unk_0x40C719A5E410B9E4(1500);
				}
			}
			else if (iLocal_43 == 0)
			{
				iLocal_43 = unk_0x4F67E8ECA7D3F667() + 1000;
				if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
				{
					unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 0, 0);
				}
				func_137(0, 2, 1);
				func_130(1, 1, 1, 0);
				func_124(1);
				unk_0xCE47C21C0687EBC2(0);
				unk_0x6AAFBC3C918295F2(0);
				unk_0x0BFC2C61FB5B6CA1(1);
				unk_0x00686F7B3723B82F();
				if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
				{
					unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 0, 0);
				}
				func_148(0, 0);
				func_123(0);
			}
			else if (unk_0x4F67E8ECA7D3F667() < iLocal_43)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_123(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!unk_0x4ED6CFDFE8D4131A(iLocal_42, 3))
			{
				unk_0xFAEC088D28B1DE4A(1);
				unk_0xF73FBE4845C43B5B(&iLocal_42, 3);
			}
		}
		else if (unk_0x4ED6CFDFE8D4131A(iLocal_42, 3))
		{
			unk_0xFAEC088D28B1DE4A(0);
			unk_0x7D1D4A3602B6AD4E(&iLocal_42, 3);
		}
	}
}

void func_124(bool bParam0)
{
	if (bParam0)
	{
		func_129();
		if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
		{
			unk_0xF73FBE4845C43B5B(&Global_2264, 16);
		}
		Global_14393.f_1 = 1;
		if (func_128(0))
		{
			func_125(0);
		}
	}
	else if (Global_14393.f_1 == 1)
	{
		if (!Global_14393.f_1 == 0)
		{
			Global_14393.f_1 = 3;
		}
	}
}

void func_125(int iParam0)
{
	if (Global_14551)
	{
		func_127(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0xF73FBE4845C43B5B(&Global_2264, 16);
	}
	if (unk_0x3AB7C52414B223F6())
	{
		unk_0x89EEEEF0CEB4D045(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0xF73FBE4845C43B5B(&Global_2263, 30);
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(&Global_2263, 30);
	}
	if (!func_126())
	{
		Global_14393.f_1 = 3;
	}
}

int func_126()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_127(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_128(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0xA5D9670641C54F6B(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0xD191BA2C5A7D3C46(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0xD191BA2C5A7D3C46(Global_14330);
		}
		else
		{
			unk_0xD191BA2C5A7D3C46(Global_14321);
		}
	}
}

int func_128(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x4ED6CFDFE8D4131A(Global_2263, 14))
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
	if (unk_0x8E34C953364A76DD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_129()
{
	if (Global_14393.f_1 == 9 || Global_14393.f_1 == 10)
	{
		Global_15745 = 0;
		Global_15741 = 1;
	}
}

void func_130(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x85E52FA5012D2428(unk_0x217E9DC48139933D());
		unk_0xE705309B8C6445A4(unk_0x217E9DC48139933D(), 1);
		unk_0xDAD08AFBC323ABAE(unk_0x217E9DC48139933D(), 1);
		func_136(1);
		unk_0x2C0D0B8454E927E2();
		unk_0x373F8B723BB81146();
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x3AB7C52414B223F6())
			{
				unk_0x89EEEEF0CEB4D045(0);
			}
			if (!func_126())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_135(1, iParam3, iParam2);
		Global_54756 = 1;
		Global_67061 = 1;
		Global_68243 = 1;
	}
	else
	{
		func_136(0);
		unk_0xF260DC644CD0CDE5();
		Global_54756 = 0;
		if (bParam1)
		{
			unk_0x3062409186A3CED7();
		}
		unk_0xE705309B8C6445A4(unk_0x217E9DC48139933D(), 0);
		unk_0xDAD08AFBC323ABAE(unk_0x217E9DC48139933D(), 0);
		func_135(0, iParam3, iParam2);
		if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()) && !func_131(unk_0x217E9DC48139933D()))
		{
			unk_0xA5C38736C426FCB8(unk_0x096275889B8E0EE0(), 0);
		}
		Global_68243 = 0;
	}
}

int func_131(int iParam0)
{
	if (func_133(iParam0, 0))
	{
		return 1;
	}
	if (func_132())
	{
		if (iParam0 == unk_0x217E9DC48139933D())
		{
			return 1;
		}
	}
	if (unk_0x4ED6CFDFE8D4131A(Global_2414009[iParam0 /*254*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_132()
{
	return unk_0x4ED6CFDFE8D4131A(Global_2359301, 3);
}

bool func_133(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x217E9DC48139933D())
	{
		bVar0 = func_134(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582596[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x1DB8366B5C46DA9E(iParam0))
		{
			bVar0 = unk_0xB464EB6A40C7975B(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_134(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_21();
	}
	if (Global_1315877[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312731[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_135(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xB0FB6CFAA5A1C833())
	{
		if (unk_0x63DCACC2E4B5C081() != iParam0 && uParam2)
		{
			unk_0x8572368C3F0D7221(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_136(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF73FBE4845C43B5B(&Global_2263, 13);
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(&Global_2263, 13);
	}
}

void func_137(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 1)
	{
		unk_0xF73FBE4845C43B5B(&iLocal_42, 2);
		if (!unk_0x03A753E2C8458335())
		{
			if (iParam1 == 1)
			{
				unk_0x9682AF6050854856(0.2f);
			}
			else
			{
				unk_0x9682AF6050854856(0.075f);
			}
		}
	}
	else
	{
		if (unk_0x4ED6CFDFE8D4131A(iLocal_42, 2) || iParam2)
		{
			if (!unk_0x03A753E2C8458335())
			{
				unk_0x9682AF6050854856(1f);
			}
		}
		unk_0x7D1D4A3602B6AD4E(&iLocal_42, 2);
	}
}

void func_138(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	var uVar0;
	var uVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (((unk_0x02F39BEFE7B88D00() || unk_0x0CECCC63FFA2EF24()) || unk_0xF5472C80DF2FF847()) || unk_0x1C9921B2ED74B50E())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_145(uParam0))
	{
		return;
	}
	unk_0xEA600AABAF4B9084();
	unk_0xCFCC78391C8B3814(iParam2);
	if (!func_144(uParam0->f_1, 256) || (func_144(uParam0->f_1, 8192) && unk_0x29D1C165BCB09391(2)))
	{
		unk_0xF6EA2AC68E7C7293(*uParam0, "SET_CLEAR_SPACE");
		unk_0xBC38230AD29DBDD4(iParam1);
		unk_0xD4D85E4148B638AD();
		unk_0xF6EA2AC68E7C7293(*uParam0, "SET_MAX_WIDTH");
		unk_0xBC38230AD29DBDD4(iParam5);
		unk_0xD4D85E4148B638AD();
		unk_0xF6EA2AC68E7C7293(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xD4D85E4148B638AD();
		if (unk_0xB0FB6CFAA5A1C833())
		{
			unk_0xF6EA2AC68E7C7293(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			unk_0x58279158C52AF361(func_144(uParam0->f_1, 4096));
			unk_0xD4D85E4148B638AD();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = unk_0x3653C46DD33107D5(2);
					break;
				
				case 2:
					bVar4 = !unk_0x3653C46DD33107D5(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (unk_0xF6EA2AC68E7C7293(*uParam0, "SET_DATA_SLOT"))
				{
					unk_0xA734310215BCF528(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						uVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						uVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = unk_0x4ED6CFDFE8D4131A(uParam0->f_2[iVar6 /*15*/].f_13, iVar7);
						if (!unk_0x4ED6CFDFE8D4131A(uParam0->f_2[iVar6 /*15*/].f_12, iVar7))
						{
							uVar3 = unk_0xF800E35ED8511D66(uVar0, uVar1, bVar2);
						}
						else
						{
							uVar3 = unk_0xDE6887C7BB8A503D(uVar0, uVar1, bVar2);
						}
						if (!unk_0x2CF12F9ACF18F048(uVar3))
						{
							func_143(sVar3);
						}
						iVar7++;
					}
					if (!unk_0x2CF12F9ACF18F048(uParam0->f_2[iVar6 /*15*/]))
					{
						func_142(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0xB0FB6CFAA5A1C833())
					{
						if (func_144(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								unk_0x58279158C52AF361(true);
								unk_0xA734310215BCF528(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								unk_0x58279158C52AF361(false);
								unk_0xA734310215BCF528(-1);
							}
						}
					}
					unk_0xD4D85E4148B638AD();
				}
			}
			iVar6++;
		}
		fVar8 = func_141(bParam4, func_141(func_144(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0xF6EA2AC68E7C7293(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0xBC38230AD29DBDD4(fVar8);
		unk_0xD4D85E4148B638AD();
		unk_0xF6EA2AC68E7C7293(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0xBC38230AD29DBDD4(0f);
		unk_0xBC38230AD29DBDD4(0f);
		unk_0xBC38230AD29DBDD4(0f);
		unk_0xBC38230AD29DBDD4(80f);
		unk_0xD4D85E4148B638AD();
		func_140(&(uParam0->f_1), 256);
		func_139(&(uParam0->f_1), 128);
	}
	unk_0x2D8953D6CEBE69D2(*uParam0, 255, 255, 255, 0, 0);
}

void func_139(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_140(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_141(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_142(char* sParam0)
{
	unk_0x164FB269C22AF51C(sParam0);
	unk_0x5BB4D22B8B03A30B();
}

void func_143(var uParam0)
{
	unk_0x3FB5104DF4233F1D(uParam0);
}

bool func_144(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_145(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0x64BAE9BE701E6C19(*uParam0))
		{
			func_140(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

void func_146()
{
	iLocal_42 = 0;
	iLocal_43 = 0;
	func_130(0, 1, 1, 0);
	func_124(1);
}

void func_147(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		func_148(0, 0);
		unk_0x4102732DF6B4005F("DeathFailOut", 0, 0);
		unk_0xF73FBE4845C43B5B(&iLocal_42, 1);
		func_137(1, 2, 0);
		unk_0xF36B8C911DB1CFC1(2);
	}
	else
	{
		if (unk_0x4ED6CFDFE8D4131A(iLocal_42, 1) || iParam1)
		{
			unk_0xB4FD7446BAB2F394("DeathFailOut");
			func_137(0, 2, 1);
			unk_0xF36B8C911DB1CFC1(0);
		}
		unk_0x7D1D4A3602B6AD4E(&iLocal_42, 1);
	}
}

void func_148(int iParam0, int iParam1)
{
	char* sVar0;
	
	switch (func_149())
	{
		case 0:
			sVar0 = "DeathFailMichaelIn";
			break;
		
		case 1:
			sVar0 = "DeathFailFranklinIn";
			break;
		
		case 2:
			sVar0 = "DeathFailTrevorIn";
			break;
	}
	if (iParam0 == 1)
	{
		if (!unk_0x4ED6CFDFE8D4131A(iLocal_42, 0) || iParam1)
		{
			unk_0x4102732DF6B4005F(sVar0, 0, 0);
			unk_0xF73FBE4845C43B5B(&iLocal_42, 0);
			func_137(1, 1, 0);
			unk_0xF36B8C911DB1CFC1(1);
		}
	}
	else
	{
		if (unk_0x4ED6CFDFE8D4131A(iLocal_42, 0) || iParam1)
		{
			unk_0xB4FD7446BAB2F394(sVar0);
			func_137(0, 1, 1);
			unk_0xF36B8C911DB1CFC1(0);
		}
		unk_0x7D1D4A3602B6AD4E(&iLocal_42, 0);
	}
}

int func_149()
{
	func_150();
	return Global_97353.f_1729.f_539.f_3213;
}

void func_150()
{
	int iVar0;
	
	if (unk_0xD42BD6EB2E0F1677(unk_0x096275889B8E0EE0()))
	{
		if (func_154(Global_97353.f_1729.f_539.f_3213) != unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()))
		{
			iVar0 = func_153(unk_0x096275889B8E0EE0());
			if (func_152(iVar0) && (!func_151(14) || Global_96306))
			{
				if (Global_97353.f_1729.f_539.f_3213 != iVar0 && func_152(Global_97353.f_1729.f_539.f_3213))
				{
					Global_97353.f_1729.f_539.f_3214 = Global_97353.f_1729.f_539.f_3213;
				}
				Global_97353.f_1729.f_539.f_3215 = iVar0;
				Global_97353.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97353.f_1729.f_539.f_3213 != 145)
			{
				Global_97353.f_1729.f_539.f_3215 = Global_97353.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97353.f_1729.f_539.f_3213 = 145;
}

bool func_151(int iParam0)
{
	return Global_34913 == iParam0;
}

bool func_152(int iParam0)
{
	return iParam0 < 3;
}

int func_153(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD42BD6EB2E0F1677(iParam0))
	{
		iVar1 = unk_0xDA76A9F39210D365(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_154(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_154(int iParam0)
{
	if (func_152(iParam0))
	{
		return Global_97353.f_29774[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_155(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, var uParam5, int iParam6)
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			unk_0x5F70787AC4BF7928("DEATH_SCENE");
			unk_0xB906B139171B1845(-1, "ScreenFlash", "WastedSounds", 1);
			func_10(&(uParam0->f_1));
			func_146();
			func_160(uParam1, (0.15f * 0.075f), 0.5f);
			unk_0x5CB83156AA038F95(1);
			break;
		
		case 1:
			if (func_122() || unk_0xF5472C80DF2FF847())
			{
				*uParam0 = 2;
			}
			if (!func_337(uParam0->f_4, 4))
			{
				if (unk_0x9C623A934CD60291("OFFMISSION_WASTED", 0))
				{
					unk_0xB906B139171B1845(-1, "Bed", "WastedSounds", 1);
					func_309(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(unk_0x83666F9FB8FEBD4B()) > (1500f * 0.2f))
			{
				if (!func_337(uParam0->f_4, 2))
				{
					unk_0xB906B139171B1845(-1, "TextHit", "WastedSounds", 1);
					func_309(&(uParam0->f_4), 2);
				}
				func_157(uParam2, uParam1, sParam3, sParam4, uParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072, 0);
			}
			break;
		
		case 2:
			if (func_157(uParam2, uParam1, sParam3, sParam4, uParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072, 1))
			{
				func_148(0, 1);
				func_147(0, 1);
				func_146();
				if (*uParam5)
				{
					unk_0x6C9FF40FF1B69F8F(1);
				}
				else if (!uParam0->f_5)
				{
					func_156(0);
				}
				unk_0x5CB83156AA038F95(0);
				unk_0x66AB6B6C7E72F393(0);
				*uParam0 = 3;
			}
			break;
		
		case 3:
			if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
			{
				unk_0xDF3B5846DE5904AF(1);
				func_148(0, 1);
				func_147(0, 1);
				unk_0xC27FB879C2B9A2EB("DEATH_SCENE");
				unk_0x5CB83156AA038F95(0);
				return 1;
			}
			break;
		
		case 4:
			unk_0x5CB83156AA038F95(0);
			return 1;
			break;
	}
	return 0;
}

void func_156(bool bParam0)
{
	if ((Global_34913 == 9 || Global_34913 == 10) || Global_34913 == 5)
	{
		Global_96005 = bParam0;
		if (bParam0)
		{
		}
	}
	else
	{
		if (bParam0)
		{
		}
		Global_96005 = 0;
	}
}

int func_157(var uParam0, var uParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)
{
	switch (*uParam1)
	{
		case 0:
			if (!unk_0xF5472C80DF2FF847() || unk_0x02F39BEFE7B88D00())
			{
				unk_0x40C719A5E410B9E4(2500);
			}
			if (bParam9)
			{
				unk_0x5CB83156AA038F95(1);
			}
			unk_0x9682AF6050854856(0.2f);
			if (func_144(iParam5, 4))
			{
				if (unk_0x9C623A934CD60291("generic_failed", 0))
				{
					*uParam1 = 1;
				}
			}
			else
			{
				*uParam1 = 1;
			}
			break;
		
		case 1:
			unk_0xF6EA2AC68E7C7293(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			unk_0x164FB269C22AF51C("STRING");
			unk_0xB07108C8201910EA(6);
			unk_0x734AB59A7DBD1DAA(sParam2);
			unk_0x5BB4D22B8B03A30B();
			func_142(sParam3);
			unk_0xA734310215BCF528(100);
			unk_0x58279158C52AF361(true);
			unk_0xFA63F370BDF97C7B();
			if (func_144(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0xF6EA2AC68E7C7293(*uParam0, "TRANSITION_UP");
					unk_0xBC38230AD29DBDD4(uParam1->f_134);
					unk_0xD4D85E4148B638AD();
					uParam1->f_136 = 1;
				}
			}
			if (!func_144(iParam5, 1))
			{
				unk_0xA1D029066C91DA5F(0);
			}
			func_239(&(uParam1->f_10), 0, 1, 1, 1);
			func_238(&(uParam1->f_10), "IB_RETRY", 2, 201, 1, 1, 0);
			func_238(&(uParam1->f_10), "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_144(iParam5, 4))
			{
				unk_0xB906B139171B1845(-1, "ScreenFlash", "MissionFailedSounds", 1);
			}
			if (func_144(iParam5, 8))
			{
				switch (func_149())
				{
					case 0:
						unk_0x4102732DF6B4005F("MinigameEndMichael", 500, 0);
						break;
					
					case 1:
						unk_0x4102732DF6B4005F("MinigameEndFranklin", 500, 0);
						break;
					
					case 2:
						unk_0x4102732DF6B4005F("MinigameEndTrevor", 500, 0);
						break;
					}
			}
			if (!func_3(&(uParam1->f_1)))
			{
				func_338(&(uParam1->f_1));
			}
			if (func_144(iParam5, 2))
			{
				if (!func_3(&(uParam1->f_4)))
				{
					func_338(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		
		case 2:
			unk_0xEA600AABAF4B9084();
			if (func_144(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0xF6EA2AC68E7C7293(*uParam0, "TRANSITION_UP");
					unk_0xBC38230AD29DBDD4(uParam1->f_134);
					unk_0xD4D85E4148B638AD();
					uParam1->f_136 = 1;
				}
			}
			unk_0xCFCC78391C8B3814(iParam6);
			func_159(uParam0, 0, 0);
			if (!func_144(iParam5, 16) && (func_5(&(uParam1->f_1)) >= uParam1->f_135 || unk_0xF5472C80DF2FF847()))
			{
				func_138(&(uParam1->f_10), 1128792064, iParam6, bParam7, 1, 1065353216);
				unk_0xF12E4CCAF249DC10();
				if (unk_0x3249D2128D293FA5(2, 201))
				{
					uParam1->f_138 = 1;
					unk_0xB906B139171B1845(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_144(iParam5, 1))
					{
						unk_0xE6F14944F1DC295A(0);
					}
					func_158(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
				else if (unk_0x3249D2128D293FA5(2, 202))
				{
					uParam1->f_138 = 0;
					unk_0xB906B139171B1845(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_144(iParam5, 1))
					{
						unk_0xE6F14944F1DC295A(0);
					}
					func_158(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			if (func_144(iParam5, 2))
			{
				if (func_5(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_138 = 0;
					unk_0xB906B139171B1845(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_144(iParam5, 1))
					{
						unk_0xE6F14944F1DC295A(0);
					}
					func_158(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		
		case 3:
			func_159(uParam0, 0, 0);
			unk_0x9682AF6050854856(1f);
			if (uParam1->f_138 || !((unk_0xD3852F22AB713A1F("stunt_plane_races", unk_0x8F77B33B6A34D8BA()) || unk_0xD3852F22AB713A1F("pilot_school", unk_0x8F77B33B6A34D8BA())) || (unk_0xD3852F22AB713A1F("bj", unk_0x8F77B33B6A34D8BA()) && unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))))
			{
				unk_0x6A053CF596F67DF7(2500);
			}
			if (func_144(iParam5, 64) && uParam1->f_138)
			{
				unk_0x40C719A5E410B9E4(500);
			}
			func_11(&(uParam1->f_4));
			if (bParam9)
			{
				unk_0x5CB83156AA038F95(0);
			}
			*uParam1 = 4;
			break;
		
		case 4:
			if (func_5(&(uParam1->f_4)) <= 0.1f)
			{
				func_159(uParam0, 0, 0);
			}
			else
			{
				*uParam4 = uParam1->f_138;
				return 1;
			}
			break;
	}
	return 0;
}

void func_158(var uParam0)
{
	if (*uParam0 != 0)
	{
		unk_0x6215C0F9FFF76BAD(uParam0);
		*uParam0 = 0;
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
}

int func_159(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_3(&(uParam0->f_2)))
	{
		func_11(&(uParam0->f_2));
	}
	unk_0xB5F6539FA93ECBF6(14);
	if (!bParam2)
	{
		unk_0x2D8953D6CEBE69D2(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		unk_0x2D8953D6CEBE69D2(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (unk_0x2503EB2EA811EC9A(2, 201))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_5(&(uParam0->f_2)) * 1000f) > unk_0xBBDA792448DB5A89(uParam0->f_1)
	{
		func_4(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_160(var uParam0, float fParam1, float fParam2)
{
	if (func_3(&(uParam0->f_1)))
	{
		func_4(&(uParam0->f_1));
	}
	if (func_3(&(uParam0->f_4)))
	{
		func_4(&(uParam0->f_4));
	}
	func_158(&(uParam0->f_10));
	uParam0->f_134 = fParam1;
	uParam0->f_135 = fParam2;
	uParam0->f_137 = 1;
	uParam0->f_136 = 0;
	*uParam0 = 0;
}

void func_161(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		func_78(uParam0, iVar0);
		iVar0++;
	}
}

void func_162(int iParam0, bool bParam1)
{
	switch (iLocal_1989)
	{
		case 0:
			func_25();
			func_179();
			func_175();
			iLocal_1989 = 1;
			break;
		
		case 1:
			if (func_174())
			{
				iLocal_1989 = 2;
			}
			break;
		
		case 2:
			func_163(iParam0);
			break;
		
		case 3:
			if (bParam1)
			{
				iLocal_1989 = 0;
			}
			break;
	}
}

void func_163(int iParam0)
{
	switch (Local_50.f_10)
	{
		case 3:
			func_173(iParam0);
			func_172(iParam0);
			break;
		
		case 0:
			func_171(iParam0);
			func_170(iParam0);
			break;
		
		case 1:
			func_169(iParam0);
			func_167(iParam0);
			break;
		
		case 2:
			func_166(iParam0);
			func_165(iParam0);
			break;
		
		case 4:
			func_164(iParam0);
			break;
	}
}

void func_164(int iParam0)
{
	if (iParam0 == 5)
	{
		if (!func_337(uLocal_2080, 1))
		{
			func_309(&uLocal_2080, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!func_337(uLocal_2080, 2))
		{
			func_309(&uLocal_2080, 2);
		}
	}
}

void func_165(int iParam0)
{
	if (iParam0 >= 4)
	{
		if (!unk_0xD42BD6EB2E0F1677(uLocal_2058[0]) && !func_337(uLocal_2070, 1))
		{
			uLocal_2058[0] = unk_0xF757863E1E2D8F12(joaat("hauler"), -449.6041f, -2271.693f, 6.6086f, 267.5199f, 1, 1);
			uLocal_2058[1] = unk_0xF757863E1E2D8F12(joaat("tanker"), -449.6041f, -2271.693f, 6.6086f, 267.5199f, 1, 1);
			unk_0x6569C6DC8BDC6F91(uLocal_2058[0], uLocal_2058[1], 1065353216);
			uLocal_2064[0] = unk_0x63FC6DA06F97F02C(uLocal_2058[0], 4, joaat("s_m_m_dockwork_01"), -1, 1, 1);
			func_309(&uLocal_2070, 1);
		}
		if (unk_0xB8CB92F21E4B35D4("SPR_Fluff_01"))
		{
			if (!unk_0x7D5B1F88E7504BBA(uLocal_2058[0]) && !unk_0x7D5B1F88E7504BBA(uLocal_2064[0]))
			{
				if (unk_0x04932A97CB319DE0(uLocal_2064[0], -235832601) == 1)
				{
				}
				else
				{
					unk_0x912F67F0C04621D5(uLocal_2064[0], uLocal_2058[0], "SPR_Fluff_01", 786469, 0, 8, -1, unk_0xFE52F34491529F0B(uLocal_2058[0]), 0, 1073741824);
				}
			}
		}
	}
}

void func_166(int iParam0)
{
	if (iParam0 == 4)
	{
		if (!func_337(uLocal_2080, 1))
		{
			func_309(&uLocal_2080, 1);
		}
	}
	if (iParam0 == 8)
	{
		if (!func_337(uLocal_2080, 2))
		{
			func_309(&uLocal_2080, 2);
		}
	}
}

void func_167(int iParam0)
{
	if (iParam0 >= 1)
	{
		if (!unk_0xD42BD6EB2E0F1677(uLocal_2058[0]))
		{
			if (!func_337(uLocal_2070, 1))
			{
				if (func_168(&iLocal_2052))
				{
					uLocal_2058[0] = unk_0xF757863E1E2D8F12(joaat("sanchez"), -2586.901f, 386.4225f, 208.0505f, 349.0836f, 1, 1);
					func_309(&uLocal_2070, 1);
				}
			}
		}
		if (unk_0xD42BD6EB2E0F1677(uLocal_2058[0]))
		{
			if (!unk_0xD42BD6EB2E0F1677(uLocal_2064[0]))
			{
				if (!func_337(uLocal_2070, 2))
				{
					uLocal_2064[0] = unk_0x63FC6DA06F97F02C(uLocal_2058[0], 4, joaat("a_m_y_motox_01"), -1, 1, 1);
					func_309(&uLocal_2070, 2);
				}
			}
		}
		if (!unk_0xD42BD6EB2E0F1677(uLocal_2058[0]) && !unk_0xD42BD6EB2E0F1677(uLocal_2064[0]))
		{
			if (!unk_0x7D5B1F88E7504BBA(uLocal_2058[0]) && !unk_0x7D5B1F88E7504BBA(uLocal_2064[0]))
			{
				if (!unk_0x5E58342602E94718(uLocal_2058[0], -2530.873f, 608.701f, 238.9111f, 3f, 3f, 3f, 0, 1, 0))
				{
					if (unk_0x04932A97CB319DE0(uLocal_2064[0], -1817882002) == 1)
					{
					}
					else
					{
						unk_0xBB26FB233542CFFE(uLocal_2064[0], uLocal_2058[0], -2530.873f, 608.701f, 238.9111f, unk_0xFE52F34491529F0B(uLocal_2058[0]), 0, 0, 262144, -1f, -1f);
					}
				}
			}
		}
	}
	if (iParam0 >= 1)
	{
		if (!unk_0xD42BD6EB2E0F1677(uLocal_2058[1]))
		{
			if (!func_337(uLocal_2071, 1))
			{
				if (func_168(&iLocal_2052))
				{
					uLocal_2058[1] = unk_0xF757863E1E2D8F12(joaat("sanchez"), -2582.93f, 384.918f, 208.5764f, 336.8248f, 1, 1);
					func_309(&uLocal_2071, 1);
				}
			}
		}
		if (unk_0xD42BD6EB2E0F1677(uLocal_2058[1]))
		{
			if (!unk_0xD42BD6EB2E0F1677(uLocal_2064[1]))
			{
				if (!func_337(uLocal_2071, 2))
				{
					uLocal_2064[1] = unk_0x63FC6DA06F97F02C(uLocal_2058[1], 4, joaat("a_m_y_motox_01"), -1, 1, 1);
					func_309(&uLocal_2071, 2);
				}
			}
		}
		if (!unk_0xD42BD6EB2E0F1677(uLocal_2058[1]) && !unk_0xD42BD6EB2E0F1677(uLocal_2064[1]))
		{
			if (!unk_0x7D5B1F88E7504BBA(uLocal_2058[1]) && !unk_0x7D5B1F88E7504BBA(uLocal_2064[1]))
			{
				if (!unk_0x5E58342602E94718(uLocal_2058[1], -2527.712f, 609.6833f, 239.2568f, 3f, 3f, 3f, 0, 1, 0))
				{
					if (unk_0x04932A97CB319DE0(uLocal_2064[1], -1817882002) == 1)
					{
					}
					else
					{
						unk_0xBB26FB233542CFFE(uLocal_2064[1], uLocal_2058[1], -2527.712f, 609.6833f, 239.2568f, unk_0xFE52F34491529F0B(uLocal_2058[1]), 0, 0, 262144, -1f, -1f);
					}
				}
			}
		}
	}
}

int func_168(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] != 0)
		{
			if (!unk_0x1283B8B89DD5D1B6((*iParam0)[iVar0]))
			{
				if (!unk_0x1283B8B89DD5D1B6((*iParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_169(int iParam0)
{
	if (iParam0 == 9)
	{
		if (!func_337(uLocal_2080, 1))
		{
			func_309(&uLocal_2080, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!func_337(uLocal_2080, 2))
		{
			func_309(&uLocal_2080, 2);
		}
	}
}

void func_170(int iParam0)
{
	if (iParam0 == 6)
	{
		if (!unk_0xD42BD6EB2E0F1677(uLocal_2058[0]) && !func_337(uLocal_2070, 1))
		{
			uLocal_2058[0] = unk_0xF757863E1E2D8F12(joaat("jetmax"), -1429.102f, 2602.645f, -1.0709f, 85.2614f, 1, 1);
			uLocal_2064[0] = unk_0x63FC6DA06F97F02C(uLocal_2058[0], 4, joaat("s_m_m_dockwork_01"), -1, 1, 1);
			if (!unk_0x7D5B1F88E7504BBA(uLocal_2058[0]) && !unk_0x7D5B1F88E7504BBA(uLocal_2064[0]))
			{
				if (!unk_0x5E58342602E94718(uLocal_2058[0], -1552.281f, 2641.609f, -0.8283f, 3f, 3f, 3f, 0, 1, 0))
				{
					if (unk_0x04932A97CB319DE0(uLocal_2064[0], -1273030092) == 1)
					{
					}
					else
					{
						unk_0xC789324646007E32(uLocal_2064[0], uLocal_2058[0], -1552.281f, 2641.609f, -0.8283f, 4, unk_0xFE52F34491529F0B(uLocal_2058[0]), 262144, 3f, -1f, 1);
					}
				}
			}
			func_309(&uLocal_2070, 1);
		}
	}
	else if (iParam0 == 12)
	{
		if (func_337(uLocal_2070, 1))
		{
			if (!unk_0x7D5B1F88E7504BBA(uLocal_2064[0]))
			{
				unk_0xCC0EF140F99365C5(&(uLocal_2064[0]));
			}
			if (!unk_0x7D5B1F88E7504BBA(uLocal_2058[0]))
			{
				unk_0xE20A909D8C4A70F8(&(uLocal_2058[0]));
			}
		}
	}
}

void func_171(int iParam0)
{
	if (iParam0 == 7)
	{
		if (!func_337(uLocal_2080, 1))
		{
			func_309(&uLocal_2080, 1);
		}
	}
	if (iParam0 == 11)
	{
		if (!func_337(uLocal_2080, 2))
		{
			func_309(&uLocal_2080, 2);
		}
	}
}

void func_172(int iParam0)
{
	if (!func_337(uLocal_2070, 1))
	{
		if (iParam0 < 3)
		{
			if (unk_0xBA9325BE372AB6EA(101, "SPRStuntAF"))
			{
				unk_0x0A3720F162A033C9(-943.8105f, -3173.692f, 12.9445f);
				if (!unk_0xD42BD6EB2E0F1677(uLocal_2058[0]))
				{
					uLocal_2058[0] = unk_0xF757863E1E2D8F12(joaat("jet"), -943.8105f, -3173.692f, 12.9445f, 60.537f, 1, 1);
					unk_0x7263332501E07F52(uLocal_2058[0]);
					unk_0xB64CFA14CB9A2E78(uLocal_2058[0], 1, 1);
					if (Local_50.f_0 == 0)
					{
						unk_0x9859F4F910FB34CD(uLocal_2058[0]);
					}
					uLocal_2064[0] = unk_0x63FC6DA06F97F02C(uLocal_2058[0], 4, joaat("s_m_m_highsec_01"), -1, 1, 1);
				}
				if (!unk_0x7D5B1F88E7504BBA(uLocal_2058[0]))
				{
					if (unk_0x5E58342602E94718(uLocal_2058[0], -943.8105f, -3173.692f, 12.9445f, 20f, 20f, 20f, 0, 1, 0))
					{
						if (!unk_0x02774B3A9034278F(uLocal_2058[0]))
						{
							unk_0x4932B84E3276508E(uLocal_2058[0], 101, "SPRStuntAF", 1);
						}
					}
					else if (!unk_0x02774B3A9034278F(uLocal_2058[0]))
					{
						if (!unk_0x7D5B1F88E7504BBA(uLocal_2064[0]))
						{
							if (!unk_0x04932A97CB319DE0(uLocal_2064[0], -1817882002) == 1)
							{
								unk_0xBB26FB233542CFFE(uLocal_2064[0], uLocal_2058[0], -6793.876f, -557.0385f, 781.0172f, 50f, 0, joaat("jet"), 262144, -1f, -1f);
							}
						}
					}
				}
			}
		}
		else if (!unk_0x7D5B1F88E7504BBA(uLocal_2058[0]))
		{
			if (unk_0x02774B3A9034278F(uLocal_2058[0]))
			{
				unk_0xBF9B4D6267E8C26D(uLocal_2058[0]);
			}
			else
			{
				unk_0xE20A909D8C4A70F8(&(uLocal_2058[0]));
				func_309(&uLocal_2070, 1);
			}
		}
	}
	else if (!unk_0x7D5B1F88E7504BBA(uLocal_2058[0]))
	{
		unk_0x0A3720F162A033C9(unk_0xA86D5F069399F44D(uLocal_2058[0], 1));
	}
}

void func_173(int iParam0)
{
	if (iParam0 == 6)
	{
		if (!func_337(uLocal_2080, 1))
		{
			func_309(&uLocal_2080, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!func_337(uLocal_2080, 2))
		{
			func_309(&uLocal_2080, 2);
		}
	}
}

int func_174()
{
	switch (Local_50.f_10)
	{
		case 3:
			if (func_168(&iLocal_2052) && unk_0xBA9325BE372AB6EA(101, "SPRStuntAF"))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 0:
			if (func_168(&iLocal_2052))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (func_168(&iLocal_2052))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_168(&iLocal_2052) && unk_0xB8CB92F21E4B35D4("SPR_Fluff_01"))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 4:
			break;
	}
	return 1;
}

void func_175()
{
	switch (Local_50.f_10)
	{
		case 3:
			func_177(&iLocal_2052, joaat("jet"));
			func_177(&iLocal_2052, joaat("s_m_m_highsec_01"));
			unk_0xC474CF16EDA45DC9(101, "SPRStuntAF");
			break;
		
		case 0:
			func_177(&iLocal_2052, joaat("jetmax"));
			func_177(&iLocal_2052, joaat("s_m_m_dockwork_01"));
			break;
		
		case 1:
			func_177(&iLocal_2052, joaat("sanchez"));
			func_177(&iLocal_2052, joaat("a_m_y_motox_01"));
			break;
		
		case 2:
			func_177(&iLocal_2052, joaat("hauler"));
			func_177(&iLocal_2052, joaat("tanker"));
			func_177(&iLocal_2052, joaat("s_m_m_dockwork_01"));
			unk_0x0F4E7383958CD0A4("SPR_Fluff_01");
			break;
		
		case 4:
			break;
	}
	func_176(&iLocal_2052);
}

void func_176(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] != 0)
		{
			unk_0xFA28FE3A6246FC30((*iParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_177(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] != 0)
		{
			if ((*iParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_178(iParam0);
	if (iVar1 < 0 || iVar1 >= *iParam0)
	{
		return 0;
	}
	(*iParam0)[iVar1] = iParam1;
	return 1;
}

int func_178(var uParam0)
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

void func_179()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_337(uLocal_2080, iVar0))
		{
			func_335(&uLocal_2080, iVar0);
		}
		iVar0++;
	}
}

void func_180(var uParam0, int iParam1)
{
	func_181(uParam0, iParam1, 0);
}

void func_181(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x03A753E2C8458335())
	{
		if (unk_0x4ED6CFDFE8D4131A(Global_2446554.f_4397, 25))
		{
			return;
		}
	}
	if (unk_0x2E04AB5FEE042D4A())
	{
		unk_0x1BCEC33D54CFCA8A(iParam2);
		unk_0xB4FD7446BAB2F394("FocusIn");
		unk_0xC27FB879C2B9A2EB("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x4102732DF6B4005F("FocusOut", 0, 0);
			unk_0xB906B139171B1845(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0xB90411F480457A6C(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x602102324604D96B(sVar0))
	{
		if (!unk_0x03A753E2C8458335())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x602102324604D96B(uParam0->f_3))
	{
		if (func_182(uParam0->f_3))
		{
			unk_0x0BFC2C61FB5B6CA1(1);
		}
	}
	if (!unk_0x602102324604D96B(sVar0))
	{
		if (func_182(sVar0))
		{
			unk_0x0BFC2C61FB5B6CA1(1);
		}
	}
}

bool func_182(char* sParam0)
{
	unk_0x7130CFD8526145CA(sParam0);
	return unk_0x6DF1648C223C3A9D(0);
}

void func_183(var uParam0)
{
	float fVar0;
	
	if (uParam0->f_358[0 /*189*/].f_11 >= (uParam0->f_12 - 2))
	{
		fVar0 = unk_0x2A488C176D52CCA5(uParam0->f_27[(uParam0->f_12 - 2) /*10*/], func_184());
		if (!unk_0xCD873A48D113E465(uLocal_2302))
		{
			if (unk_0xB7A628320EFF8E47(unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1), func_184()) <= ((fVar0 * 1.5f) * (fVar0 * 1.5f)))
			{
				uLocal_2302 = unk_0x5F7B4EAE2C0AA66F(func_184(), uParam0->f_27[(uParam0->f_12 - 1) /*10*/] - func_184(), 2000f, 12, 127);
			}
		}
		else if (!unk_0xB7A628320EFF8E47(unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1), func_184()) <= ((fVar0 * 2f) * (fVar0 * 2f)))
		{
			func_229();
		}
	}
}

Vector3 func_184()
{
	switch (Local_50.f_10)
	{
		case 0:
			return -2591.965f, 2483.167f, 60.8904f;
			break;
		
		case 1:
			return 1827.956f, 585.8948f, 287.6289f;
			break;
		
		case 2:
			return 991.1072f, -2389.983f, 83.3701f;
			break;
		
		case 3:
			return -1721.049f, -2792.948f, 75.4149f;
			break;
		
		case 4:
			return -578.6125f, 5436.721f, 150.1292f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_185(var uParam0)
{
	if (func_211())
	{
		if (!Local_2289.f_0)
		{
			Local_2289.f_0 = 1;
			Local_2289.f_1 = 1;
		}
		else
		{
			Local_2289.f_1 = 0;
		}
	}
	else if (func_210())
	{
		if (!Local_2289.f_1 || func_209() >= 1f)
		{
			if (Local_2289.f_0)
			{
				Local_2289.f_0 = 0;
			}
		}
	}
	if (func_210())
	{
		func_208();
	}
	else
	{
		func_207();
	}
	if (Local_2289.f_0)
	{
		if (!func_206(Local_2289.f_2) && !func_204(Local_2289.f_2))
		{
			func_187(&uLocal_2262, Local_2289.f_2);
		}
		else
		{
			if (unk_0x153AD457764FD704(Local_2289.f_6))
			{
				unk_0x4E67E0B6D7FD5145(Local_2289.f_6, 0);
			}
			if (func_204(Local_2289.f_2))
			{
				Local_2289.f_2 = { func_186(uParam0) };
			}
			func_180(&uLocal_2262, 0);
			Local_2289.f_0 = 0;
		}
	}
	else if (unk_0x153AD457764FD704(Local_2289.f_6))
	{
		unk_0x4E67E0B6D7FD5145(Local_2289.f_6, 0);
	}
	else
	{
		if (func_204(Local_2289.f_2))
		{
			Local_2289.f_2 = { func_186(uParam0) };
		}
		func_180(&uLocal_2262, 0);
		Local_2289.f_0 = 0;
	}
}

Vector3 func_186(var uParam0)
{
	if (uParam0->f_358[0 /*189*/].f_11 < (Local_50.f_11 - 1))
	{
		return uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/];
	}
	return 0f, 0f, 0f;
}

void func_187(var uParam0, struct<3> Param1)
{
	func_188(uParam0, Param1, 0, 0, 1, 1, 1);
}

void func_188(var uParam0, struct<3> Param1, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (!unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1))
	{
		func_181(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_189(uParam0, Param1, iParam4, iParam5, bParam6, iParam7, bParam8);
}

void func_189(var uParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6, var uParam7, bool bParam8)
{
	int iVar0;
	
	if (uParam0->f_1 && unk_0x2E04AB5FEE042D4A())
	{
		if (unk_0x4F67E8ECA7D3F667() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = uParam4;
	if (unk_0x602102324604D96B(iVar0))
	{
		if (!unk_0x03A753E2C8458335())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_182(iVar0))
	{
		func_203();
	}
	if (!unk_0x2E04AB5FEE042D4A())
	{
		if (func_198(uParam0, bParam6, bParam8, 0))
		{
			func_197(uParam0, Param1, iParam5);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_194(iVar0))
			{
				if ((unk_0x602102324604D96B(uParam0->f_3) && !unk_0x602102324604D96B(iVar0)) && unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
				{
					if ((unk_0x2E941B5FFA2989C6(Param1, 1f) && !unk_0xA805B04DD97BE4E6()) && uParam7)
					{
						if (!func_182(iVar0))
						{
							func_279(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xD3852F22AB713A1F("CMN_HINT", iVar0))
							{
								func_193(1);
							}
						}
					}
				}
			}
		}
		else if (func_194(iVar0))
		{
			if (unk_0x602102324604D96B(uParam0->f_3) && !unk_0x602102324604D96B(iVar0))
			{
				if ((unk_0x2E941B5FFA2989C6(Param1, 1f) && !unk_0xA805B04DD97BE4E6()) && uParam7)
				{
					if (!func_182(iVar0))
					{
						func_279(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (unk_0xD3852F22AB713A1F("CMN_HINT", iVar0))
						{
							func_193(1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!unk_0x602102324604D96B(iVar0))
		{
			if (func_182(iVar0) && unk_0xA805B04DD97BE4E6())
			{
				unk_0x0BFC2C61FB5B6CA1(1);
			}
		}
		if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1))
		{
			if (unk_0xC0655426C43A17F5(unk_0x096275889B8E0EE0()))
			{
				if (unk_0xBBCE897E81A3FFBC(3) == 3 || unk_0xBBCE897E81A3FFBC(3) == 4)
				{
					func_181(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x53FA5F3E0569FD92(unk_0x096275889B8E0EE0()))
			{
				if (unk_0xBBCE897E81A3FFBC(6) == 3 || unk_0xBBCE897E81A3FFBC(6) == 4)
				{
					func_181(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x3B74D71F9EF41F83(unk_0x096275889B8E0EE0()))
			{
				if (unk_0xBBCE897E81A3FFBC(4) == 3 || unk_0xBBCE897E81A3FFBC(4) == 4)
				{
					func_181(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x2C0C61DCBEB7E6F3(unk_0x096275889B8E0EE0()))
			{
				if (unk_0xBBCE897E81A3FFBC(5) == 3 || unk_0xBBCE897E81A3FFBC(5) == 4)
				{
					func_181(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x2B4DCDD8F91771D2(unk_0x096275889B8E0EE0()))
			{
				if (unk_0xBBCE897E81A3FFBC(2) == 3 || unk_0xBBCE897E81A3FFBC(2) == 4)
				{
					func_181(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x219A3D86C716B089() == 3 || unk_0x219A3D86C716B089() == 4)
			{
				func_181(uParam0, iVar0, 1);
			}
		}
		if (!func_198(uParam0, bParam6, bParam8, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_192(uParam0))
			{
				func_190(uParam0);
			}
		}
	}
}

void func_190(var uParam0)
{
	if (func_191(unk_0x096275889B8E0EE0()))
	{
		unk_0x939C1E5F1840360D(unk_0x096275889B8E0EE0());
	}
	if (unk_0x2E04AB5FEE042D4A())
	{
		unk_0xB90411F480457A6C(true);
		unk_0x1BCEC33D54CFCA8A(0);
		unk_0xC27FB879C2B9A2EB("HINT_CAM_SCENE");
		unk_0xB4FD7446BAB2F394("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x4102732DF6B4005F("FocusOut", 0, 0);
			unk_0xB906B139171B1845(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_191(int iParam0)
{
	if (unk_0xD42BD6EB2E0F1677(iParam0))
	{
		if (unk_0xC3D96AF45FCCEC4C(iParam0))
		{
			if (unk_0xB86D29B10F627379(unk_0xDF1E5AAC561AFC59(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0xCF8176912DDA4EA5(iParam0))
		{
			if (!unk_0x6CFF81397164A1D3(unk_0x0F16D042BD640EA3(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x0A27A546A375FDEF(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_192(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x4F67E8ECA7D3F667()
		{
			return 1;
		}
	}
	return 0;
}

int func_193(bool bParam0)
{
	switch (Global_34913)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_97353.f_8303.f_100++;
			}
			return Global_97353.f_8303.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_97353.f_8303.f_101++;
			}
			return Global_97353.f_8303.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_97353.f_8303.f_102++;
			}
			return Global_97353.f_8303.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_194(char* sParam0)
{
	if (!func_195(1, 1, 0))
	{
		if ((!unk_0x2CF12F9ACF18F048(sParam0) && func_182(sParam0)) || func_182("CMN_HINT"))
		{
			unk_0x0BFC2C61FB5B6CA1(1);
		}
		return 0;
	}
	switch (Global_34913)
	{
		case 0:
		case 3:
			if (func_193(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_193(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_193(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_195(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0x7964097FCE4C244B(unk_0x217E9DC48139933D()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xED20CB1F5297791D())
	{
		return 0;
	}
	if (func_128(0))
	{
		return 0;
	}
	if (func_196())
	{
		return 0;
	}
	if (unk_0x4E4F57E11BB51285())
	{
		return 0;
	}
	if (Global_67058)
	{
		return 0;
	}
	if (unk_0x8E34C953364A76DD(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_51932)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1))
		{
			if (unk_0xC0655426C43A17F5(unk_0x096275889B8E0EE0()))
			{
				if (unk_0xBBCE897E81A3FFBC(3) == 3 || unk_0xBBCE897E81A3FFBC(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x53FA5F3E0569FD92(unk_0x096275889B8E0EE0()))
			{
				if (unk_0xBBCE897E81A3FFBC(6) == 3 || unk_0xBBCE897E81A3FFBC(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x3B74D71F9EF41F83(unk_0x096275889B8E0EE0()))
			{
				if (unk_0xBBCE897E81A3FFBC(4) == 3 || unk_0xBBCE897E81A3FFBC(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x2C0C61DCBEB7E6F3(unk_0x096275889B8E0EE0()))
			{
				if (unk_0xBBCE897E81A3FFBC(5) == 3 || unk_0xBBCE897E81A3FFBC(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x2B4DCDD8F91771D2(unk_0x096275889B8E0EE0()))
			{
				if (unk_0xBBCE897E81A3FFBC(2) == 3 || unk_0xBBCE897E81A3FFBC(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x219A3D86C716B089() == 3 || unk_0x219A3D86C716B089() == 4)
			{
				return 0;
			}
			if (unk_0x8FE0D24FFD04D5A2())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_196()
{
	return unk_0x4F67E8ECA7D3F667() <= Global_17236.f_5130 + 100;
}

void func_197(var uParam0, struct<3> Param1, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xB90411F480457A6C(false);
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
	unk_0xFA33B8C69A4A6A0F(Param1, -1, iVar0, iVar1, iParam4);
	iVar2 = 2048;
	iVar3 = 3;
	unk_0x67BFB35F43BF984D(unk_0x096275889B8E0EE0(), Param1, -1, iVar2, iVar3);
	unk_0x4102732DF6B4005F("FocusIn", 0, 0);
	unk_0x5F70787AC4BF7928("HINT_CAM_SCENE");
	unk_0xB906B139171B1845(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x4F67E8ECA7D3F667();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_198(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x4F67E8ECA7D3F667() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1))
				{
					if (func_202(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x4F67E8ECA7D3F667();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_201(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x4F67E8ECA7D3F667();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_201(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x4F67E8ECA7D3F667();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_202(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x4F67E8ECA7D3F667();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_192(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x4F67E8ECA7D3F667() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1))
					{
						if (!func_202(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x4F67E8ECA7D3F667();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_201(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x4F67E8ECA7D3F667();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_201(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x4F67E8ECA7D3F667();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_202(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x4F67E8ECA7D3F667();
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
				if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1))
				{
					if (!func_202(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_201(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_201(bParam1, bParam2, bParam3) || unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1) || unk_0xCCD1F483A4F8B8FA(unk_0x096275889B8E0EE0(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_202(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x4F67E8ECA7D3F667() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1))
					{
						if (func_200(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_199(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1) || func_199(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1) || unk_0xCCD1F483A4F8B8FA(unk_0x096275889B8E0EE0(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_200(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_192(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_195(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_203();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_199(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_195(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
	{
		if (!unk_0x4605C66E0F935F83(unk_0x217E9DC48139933D()))
		{
			unk_0x562F5D788AF3FA80(0, 140, 1);
			unk_0x562F5D788AF3FA80(0, 80, 1);
			if (unk_0xDAB4BF48B46C66EA(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_200(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_195(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
	{
		unk_0x562F5D788AF3FA80(0, 80, 1);
		if (unk_0xA40C2F51FB589E9A())
		{
			if (unk_0xDAB4BF48B46C66EA(0, 80))
			{
				unk_0xB90411F480457A6C(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_201(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_195(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
	{
		if (!unk_0x4605C66E0F935F83(unk_0x217E9DC48139933D()))
		{
			unk_0x562F5D788AF3FA80(0, 140, 1);
			unk_0x562F5D788AF3FA80(0, 80, 1);
			if (unk_0x3BFD60A58E503C0D(0, 80) && unk_0x4F67E8ECA7D3F667() > Global_96)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_202(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_195(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
	{
		unk_0x562F5D788AF3FA80(0, 80, 1);
		if (unk_0xA40C2F51FB589E9A())
		{
			if (unk_0x3BFD60A58E503C0D(0, 80) && unk_0x4F67E8ECA7D3F667() > Global_96)
			{
				unk_0xB90411F480457A6C(false);
				return 1;
			}
		}
	}
	return 0;
}

void func_203()
{
	unk_0xF73FBE4845C43B5B(&Global_2264, 4);
}

int func_204(struct<3> Param0)
{
	float fVar0;
	
	fVar0 = unk_0xFB6BA510A533DF81(unk_0x096275889B8E0EE0());
	if (unk_0xB7A628320EFF8E47(Param0, func_205(unk_0x217E9DC48139933D())) < (150f + (fVar0 * fVar0)))
	{
		return 1;
	}
	return 0;
}

Vector3 func_205(int iParam0)
{
	return unk_0xA86D5F069399F44D(unk_0x275F255ED201B937(iParam0), 0);
}

int func_206(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_207()
{
	Local_2289.f_5 = 0f;
}

void func_208()
{
	Local_2289.f_5 = (Local_2289.f_5 + unk_0x5E72022914CE3C38());
}

float func_209()
{
	return Local_2289.f_5;
}

bool func_210()
{
	return unk_0x3249D2128D293FA5(0, 80);
}

bool func_211()
{
	return unk_0x2503EB2EA811EC9A(0, 80);
}

void func_212(struct<3> Param0)
{
	func_180(&uLocal_2262, 0);
	Local_2289.f_2 = { Param0 };
}

void func_213(int iParam0, int iParam1)
{
	Global_90001.f_7 = iParam0;
	Global_90001.f_8 = iParam1;
}

void func_214(int iParam0)
{
	Global_68505 = iParam0;
	Global_68506 = iParam0;
}

int func_215(var uParam0, bool bParam1, bool bParam2)
{
	unk_0xC8E5897F3C53CCA6(0);
	switch (iLocal_1988)
	{
		case 0:
			iLocal_504 = 0;
			Local_2254 = { func_184() };
			Local_2257 = { func_228() };
			fLocal_2260 = func_227();
			unk_0x1B3DA717B9AFF828(0);
			unk_0x0BFC2C61FB5B6CA1(1);
			unk_0x00686F7B3723B82F();
			iLocal_1988 = 1;
			break;
		
		case 1:
			if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
			{
				if (func_149() == 0)
				{
					unk_0x4102732DF6B4005F("MinigameEndMichael", 0, 0);
				}
				else if (func_149() == 1)
				{
					unk_0x4102732DF6B4005F("MinigameEndFranklin", 0, 0);
				}
				else if (func_149() == 2)
				{
					unk_0x4102732DF6B4005F("MinigameEndTrevor", 0, 0);
				}
				uLocal_2046 = unk_0x98B99B9F27E2D60B(26379945, Local_2254, Local_2257, fLocal_2260, 1, 2);
				unk_0x33281167E4942E4F(1, 0, 3000, 1, 0, 0);
				if (bParam2)
				{
					unk_0xF9A7BCF5D050D4E7(uLocal_2046, "HAND_SHAKE", 0.07f);
				}
				if (unk_0xB86D29B10F627379(uParam0->f_358[0 /*189*/].f_9, 0) && unk_0xC1DB1F019BEDAE9D(uParam0->f_358[0 /*189*/].f_9))
				{
					unk_0xC789324646007E32(unk_0x096275889B8E0EE0(), uParam0->f_358[0 /*189*/].f_9, Local_2254.f_0, Local_2254.f_1, (Local_2254.f_2 + 15f), 4, unk_0xFB6BA510A533DF81(uParam0->f_358[0 /*189*/].f_9), 262144, 10f, 10f, 1);
				}
				unk_0x948B39341C3A40C2(uLocal_2046, unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1));
				iLocal_1988 = 2;
			}
			break;
		
		case 2:
			unk_0xCA1B30A3357C71F1(uLocal_2046);
			func_226(uLocal_2046);
			func_10(&uLocal_2042);
			iLocal_1988 = 3;
			break;
		
		case 3:
			if (func_225(&uLocal_2042, fLocal_2261))
			{
				func_10(&uLocal_2042);
				func_226(uLocal_2046);
				iLocal_1988 = 4;
			}
			break;
		
		case 4:
			if (bParam1)
			{
				if (unk_0x613C15D5D8DB781F(uParam0->f_358[0 /*189*/].f_9) && unk_0xC1DB1F019BEDAE9D(uParam0->f_358[0 /*189*/].f_9))
				{
					Local_2251 = { unk_0xA86D5F069399F44D(uParam0->f_358[0 /*189*/].f_9, 1) };
					func_10(&uLocal_2042);
				}
				func_222(uLocal_2046, Local_2251);
			}
			if (func_107(&uLocal_2042) >= 1f)
			{
				iLocal_1988 = 5;
			}
			break;
		
		case 5:
			func_11(&uLocal_2042);
			if (unk_0x153AD457764FD704(uLocal_2045))
			{
				unk_0x4E67E0B6D7FD5145(uLocal_2045, 0);
			}
			unk_0x4102732DF6B4005F("MinigameTransitionIn", 0, 1);
			unk_0xB78CC4B4706614B0(uLocal_2046, 0);
			Local_2254 = { unk_0x6B12F11C2A9F0344(uLocal_2046) };
			Local_2257 = { unk_0x9BF96B57254E7889(uLocal_2046, 2) };
			uLocal_2045 = unk_0x98B99B9F27E2D60B(26379945, Local_2254.f_0, Local_2254.f_1, (Local_2254.f_2 + 1000f), 90f, Local_2257.f_1, Local_2257.f_2, fLocal_2260, 0, 2);
			unk_0x8B15AE2987C1AC8F(uLocal_2045, uLocal_2046, 500, 1, 1);
			unk_0xB906B139171B1845(-1, "QUIT_WHOOSH", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_1988 = 6;
			break;
		
		case 6:
			if (!unk_0x578F8F1CAA17BD2B(uLocal_2045) && !unk_0x578F8F1CAA17BD2B(uLocal_2046))
			{
				if (uParam0->f_358[0 /*189*/].f_13 <= Local_50.f_106[Local_50.f_10])
				{
					unk_0xB906B139171B1845(-1, "MEDAL_GOLD", "HUD_AWARDS", 1);
				}
				else if (uParam0->f_358[0 /*189*/].f_13 <= (((Local_50.f_106[Local_50.f_10] - Local_50.f_112[Local_50.f_10]) / 2f) + Local_50.f_112[Local_50.f_10]))
				{
					unk_0xB906B139171B1845(-1, "MEDAL_SILVER", "HUD_AWARDS", 1);
				}
				else if (uParam0->f_358[0 /*189*/].f_13 <= Local_50.f_112[Local_50.f_10])
				{
					unk_0xB906B139171B1845(-1, "MEDAL_BRONZE", "HUD_AWARDS", 1);
				}
				else
				{
					func_221(1);
				}
				iLocal_1988 = 7;
			}
			break;
		
		case 7:
			if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
			{
				unk_0x4E4B996C928C7AA6(unk_0x217E9DC48139933D());
			}
			func_219(uParam0);
			func_66(&(Local_50.f_297), 1);
			func_11(&uLocal_2042);
			if (unk_0xB86D29B10F627379(uParam0->f_358[0 /*189*/].f_9, 0))
			{
				sLocal_2246 = unk_0x8A49531DC327D318();
				unk_0x34262200CCA8474C(uParam0->f_358[0 /*189*/].f_9, 0);
			}
			iLocal_1988 = 8;
			break;
		
		case 8:
			if (func_218(uParam0))
			{
				iLocal_1988 = 9;
			}
			break;
		
		case 9:
			unk_0x4102732DF6B4005F("MinigameTransitionOut", 0, 0);
			func_217(&uLocal_2047);
			func_213(1, 0);
			func_216(uParam0);
			func_16();
			func_213(0, 0);
			iLocal_1988 = 0;
			return 0;
			break;
	}
	func_407(uParam0, 0);
	return 1;
}

int func_216(var uParam0)
{
	if (uParam0->f_358[0 /*189*/].f_13 <= Local_50.f_106[Local_50.f_10])
	{
		unk_0x88D2BE4120CBF840(&(Local_50.f_24[Local_50.f_10 /*8*/]));
		return unk_0x0C9C359F4D002443("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 109, "HUD_MED_UNLKED");
	}
	else if (uParam0->f_358[0 /*189*/].f_13 <= (((Local_50.f_106[Local_50.f_10] - Local_50.f_112[Local_50.f_10]) / 2f) + Local_50.f_112[Local_50.f_10]))
	{
		unk_0x88D2BE4120CBF840(&(Local_50.f_24[Local_50.f_10 /*8*/]));
		return unk_0x0C9C359F4D002443("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 108, "HUD_MED_UNLKED");
	}
	else if (uParam0->f_358[0 /*189*/].f_13 <= Local_50.f_112[Local_50.f_10])
	{
		unk_0x88D2BE4120CBF840(&(Local_50.f_24[Local_50.f_10 /*8*/]));
		return unk_0x0C9C359F4D002443("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 107, "HUD_MED_UNLKED");
	}
	return -1;
}

void func_217(var uParam0)
{
	unk_0x6215C0F9FFF76BAD(uParam0);
	*uParam0 = 0;
}

int func_218(var uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!func_3(&(uParam0->f_17.f_2)))
	{
		func_11(&(uParam0->f_17.f_2));
	}
	else
	{
		fVar0 = func_5(&(uParam0->f_17.f_2));
	}
	if (!iLocal_2007)
	{
		if (fVar0 > 1f)
		{
			iLocal_2007 = 1;
		}
	}
	if (!iLocal_2008)
	{
		if (fVar0 > 4.25f)
		{
			unk_0xF6EA2AC68E7C7293(uParam0->f_17, "TRANSITION_OUT");
			unk_0xBC38230AD29DBDD4(0.5f);
			unk_0xD4D85E4148B638AD();
			iLocal_2008 = 1;
		}
	}
	unk_0x2D8953D6CEBE69D2(uParam0->f_17, 255, 255, 255, 255, 0);
	if (fVar0 > 5f)
	{
		func_4(&(uParam0->f_17.f_2));
		iLocal_2007 = 0;
		iLocal_2008 = 0;
		return 1;
	}
	return 0;
}

void func_219(var uParam0)
{
	char* sVar0;
	
	sVar0 = func_220(2);
	unk_0xF6EA2AC68E7C7293(uParam0->f_17, "RESET_MOVIE");
	unk_0xD4D85E4148B638AD();
	unk_0xF6EA2AC68E7C7293(uParam0->f_17, sVar0);
	unk_0x164FB269C22AF51C("STRING");
	unk_0x734AB59A7DBD1DAA("SPR_UI_PASS");
	unk_0x5BB4D22B8B03A30B();
	unk_0x164FB269C22AF51C(&(Local_50.f_24[Local_50.f_10 /*8*/]));
	unk_0x5BB4D22B8B03A30B();
	unk_0xBC38230AD29DBDD4(100f);
	unk_0x58279158C52AF361(true);
	unk_0xD4D85E4148B638AD();
	uParam0->f_17.f_1 = 5000;
	func_4(&(uParam0->f_17.f_2));
	iLocal_2007 = 0;
	iLocal_2008 = 0;
}

char* func_220(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_WASTED_MP_MESSAGE";
		
		case 1:
			return "SHOW_BUSTED_MP_MESSAGE";
		
		case 2:
			return "SHOW_CENTERED_MP_MESSAGE_LARGE";
		
		case 3:
			return "SHOW_CENTERED_TOP_MP_MESSAGE";
		
		case 4:
			return "SHOW_MIDSIZED_MESSAGE";
		
		case 5:
			return "SHOW_MISSION_END_MP_MESSAGE";
		
		case 6:
			return "SHOW_MISSION_PASSED_MESSAGE";
		
		case 7:
			return "SHOW_MISSION_FAILED_MP_MESSAGE";
		
		default:
	}
	return "SHOW_CENTERED_MP_MESSAGE_LARGE";
}

void func_221(bool bParam0)
{
	char* sVar0;
	
	unk_0xCEA4E87102552C46(0);
	switch (func_149())
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
	unk_0x3899B603D71AEFE5(sVar0);
}

void func_222(var uParam0, struct<3> Param1)
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	
	if (!unk_0x153AD457764FD704(uParam0))
	{
		return;
	}
	if (!unk_0x63EFCC7E1810B8E6(uParam0))
	{
		return;
	}
	Var1 = { unk_0x9BF96B57254E7889(uParam0, 2) };
	Var4 = { unk_0x6B12F11C2A9F0344(uParam0) };
	Var7 = { func_8(Var1.f_0, Var1.f_1, (Var1.f_2 + 90f)) };
	Var10 = { Param1 - Var4 };
	Var10 = { func_96(Var10) };
	fVar13 = unk_0x965B220A066E3F07((Param1.f_2 - Var4.f_2), unk_0x0BE7F4E3CDBAFB28(Param1, Var4, 0));
	fVar14 = unk_0x38D5202FF9271C62((Param1.f_0 - Var4.f_0), (Param1.f_1 - Var4.f_1));
	fVar14 = func_224(fVar14, -180f, 180f);
	fVar0 = func_95(func_8(fVar13, Var1.f_1, Var1.f_2), Var7);
	fVar15 = (fVar13 - Var1.f_0);
	if (fVar15 > 270f)
	{
		fVar15 = (fVar15 - 360f);
	}
	else if (fVar15 < -270f)
	{
		fVar15 = (fVar15 + 360f);
	}
	fVar13 = (Var1.f_0 + fVar15);
	if ((bLocal_2250 && fVar13 > Var1.f_0) || (!bLocal_2250 && fVar13 < Var1.f_0))
	{
		if (fVar0 > 0f)
		{
		}
		else if (fVar0 < 0f)
		{
		}
		fLocal_2247 = (fLocal_2247 * 0.9f);
		Var1.f_0 = func_223(Var1.f_0, fVar13, fLocal_2247);
	}
	fVar16 = (fVar14 - Var1.f_2);
	if (fVar16 > 270f)
	{
		fVar16 = (fVar16 - 360f);
	}
	else if (fVar16 < -270f)
	{
		fVar16 = (fVar16 + 360f);
	}
	fVar14 = (Var1.f_2 + fVar16);
	if ((bLocal_2249 && (Var1.f_2 - fVar14) < 0f) || (!bLocal_2249 && (Var1.f_2 - fVar14) > 0f))
	{
		if (!bLocal_2249 && (Var1.f_2 - fVar14) > 0f)
		{
		}
		else if (bLocal_2249 && (Var1.f_2 - fVar14) < 0f)
		{
		}
		fLocal_2248 = (fLocal_2248 * 0.9f);
		Var1.f_2 = func_223(Var1.f_2, fVar14, fLocal_2248);
	}
	unk_0x63DFA6810AD78719(uParam0, Var1, 2);
}

float func_223(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

float func_224(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(unk_0xF2DB717A73826179(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_225(var uParam0, float fParam1)
{
	if (func_2(uParam0, fParam1))
	{
		func_4(uParam0);
		return 1;
	}
	return 0;
}

void func_226(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	var uVar18;
	struct<3> Var21;
	struct<3> Var24;
	float fVar27;
	float fVar28;
	
	unk_0x3A9B1120AF13FBF2(unk_0x096275889B8E0EE0(), &Var0, &uVar18, &uVar18, &Var3);
	Var15 = { unk_0x9BF96B57254E7889(uParam0, 2) };
	Var12 = { unk_0x6B12F11C2A9F0344(uParam0) };
	Var6 = { func_8((Var15.f_0 + 90f), Var15.f_1, Var15.f_2) };
	Var9 = { func_8(Var15.f_0, Var15.f_1, (Var15.f_2 + 90f)) };
	fLocal_2247 = 0.2f;
	fLocal_2248 = 0.5f;
	Var21 = { unk_0x6B12F11C2A9F0344(uParam0) - Var3 };
	Var24 = { Var3 + FtoV(func_95(Var21, Var0)) * Var0 };
	if (Var24.f_2 > Var12.f_2)
	{
		bLocal_2250 = true;
	}
	else
	{
		bLocal_2250 = false;
	}
	fVar27 = func_95(Var24, Var6);
	fVar28 = func_95(Var24, Var9);
	if (fVar27 < 0f)
	{
		bLocal_2249 = true;
	}
	else
	{
		bLocal_2249 = false;
	}
}

float func_227()
{
	switch (Local_50.f_10)
	{
		case 0:
			return 46.9415f;
			break;
		
		case 1:
			return 37.9558f;
			break;
		
		case 2:
			return 48.4122f;
			break;
		
		case 3:
			return 35.2464f;
			break;
		
		case 4:
			return 42.5338f;
			break;
	}
	return 0f;
}

Vector3 func_228()
{
	switch (Local_50.f_10)
	{
		case 0:
			return -7.5758f, 0f, 148.5448f;
			break;
		
		case 1:
			return -1.0194f, 0.7478f, 23.0628f;
			break;
		
		case 2:
			return -5.3368f, 0.0006f, 158.257f;
			break;
		
		case 3:
			return -1.3523f, 0f, 0.0891f;
			break;
		
		case 4:
			return 18.1009f, -0.5992f, -103.0214f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_229()
{
	unk_0xE27DBC64CB87AA75();
	if (unk_0xCD873A48D113E465(uLocal_2302))
	{
		unk_0x3594F798649853E3(uLocal_2302);
	}
}

void func_230()
{
	unk_0xA8C44C13419634F2();
	func_231();
}

void func_231()
{
	Global_17098.f_134 = 1;
}

void func_232(int iParam0)
{
	if (Global_34913 == 9 || Global_34913 == 10)
	{
		Global_96006 = iParam0;
	}
	else
	{
		Global_96006 = 0;
	}
}

void func_233(bool bParam0)
{
	unk_0xB90411F480457A6C(!bParam0);
}

void func_234()
{
	func_235();
	unk_0xB90411F480457A6C(true);
}

void func_235()
{
	Local_2289.f_0 = 0;
	Local_2289.f_1 = 0;
	Local_2289.f_2 = { 0f, 0f, 0f };
	Local_2289.f_6 = 0;
	Local_2289.f_5 = 0f;
}

bool func_236(char* sParam0, int iParam1, char* sParam2)
{
	unk_0x7CDCFA485F54BA2B(sParam0);
	if (iParam1 == 1)
	{
		unk_0x734AB59A7DBD1DAA(sParam2);
	}
	return unk_0x48D05CF5BD17A852();
}

void func_237(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_140(&(uParam0->f_1), 16);
	}
	else
	{
		func_139(&(uParam0->f_1), 16);
	}
}

int func_238(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_123;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_12 = 0;
		uParam0->f_2[iVar1 /*15*/].f_13 = 0;
		uParam0->f_2[iVar1 /*15*/].f_14 = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			unk_0xF73FBE4845C43B5B(&(uParam0->f_2[iVar1 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_239(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x3B632900049DBB88("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_140(&(uParam0->f_1), 32);
	}
	if (unk_0x64BAE9BE701E6C19(*uParam0))
	{
		func_140(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0x9F96EAB06403CD66(*uParam0, 1);
		}
	}
	if (unk_0xB0FB6CFAA5A1C833())
	{
		if (bParam3)
		{
			func_140(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_140(&(uParam0->f_1), 8192);
	}
}

void func_240(var uParam0)
{
	func_241(uParam0);
	unk_0xC1B1E9A034A63A62(0);
	func_213(1, 0);
	func_16();
}

void func_241(var uParam0)
{
	func_278(&(uParam0->f_1871));
	func_256(&(uParam0->f_1871.f_741));
	func_242(&(uParam0->f_1871));
}

void func_242(var uParam0)
{
	func_255(&(uParam0->f_316[0 /*2*/]), 254f, 74f, 1);
	func_255(&(uParam0->f_316[1 /*2*/]), (257f + func_254(0.0047f, 1280, 1)), 127f, 1);
	func_255(&(uParam0->f_316[2 /*2*/]), (257f + func_254(0.0047f, 1280, 1)), 297f, 1);
	func_255(&(uParam0->f_316[3 /*2*/]), (257f + func_254(0.0047f, 1280, 1)), 324f, 1);
	func_255(&(uParam0->f_316[4 /*2*/]), (257f + func_254(0.0047f, 1280, 1)), 351f, 1);
	func_255(&(uParam0->f_316[5 /*2*/]), (257f + func_254(0.0047f, 1280, 1)), 378f, 1);
	func_255(&(uParam0->f_316[6 /*2*/]), (257f + func_254(0.0047f, 1280, 1)), 405f, 1);
	func_255(&(uParam0->f_316[11 /*2*/]), 257f, 297f, 1);
	func_255(&(uParam0->f_316[12 /*2*/]), 257f, 324f, 1);
	func_255(&(uParam0->f_316[13 /*2*/]), 257f, 351f, 1);
	func_255(&(uParam0->f_316[14 /*2*/]), 257f, 378f, 1);
	func_255(&(uParam0->f_316[15 /*2*/]), 257f, 405f, 1);
	func_255(&(uParam0->f_316[18 /*2*/]), 298f, 567f, 1);
	func_255(&(uParam0->f_316[17 /*2*/]), 384f, 567f, 1);
	func_255(&(uParam0->f_316[16 /*2*/]), 470f, 567f, 1);
	func_251(uParam0[0 /*9*/], 208f, 55f, 864f, 570f, 1);
	func_250(uParam0[0 /*9*/], 0, 0, 0, 255);
	func_251(uParam0[2 /*9*/], 384f, 224f, 256f, 256f, 0);
	func_250(uParam0[2 /*9*/], 255, 255, 255, 255);
	func_251(uParam0[3 /*9*/], 495f, 306f, 32f, 32f, 0);
	func_250(uParam0[3 /*9*/], 255, 255, 255, 255);
	func_251(uParam0[6 /*9*/], 258.5f, 482.5f, 80f, 80f, 1);
	func_250(uParam0[6 /*9*/], 255, 255, 255, 255);
	func_251(uParam0[5 /*9*/], 344f, 482.5f, 80f, 80f, 1);
	func_250(uParam0[5 /*9*/], 255, 255, 255, 255);
	func_251(uParam0[4 /*9*/], 429.5f, 482.5f, 80f, 80f, 1);
	func_250(uParam0[4 /*9*/], 255, 255, 255, 255);
	func_245(&(uParam0->f_420[1 /*8*/]), 257f, 119f, 254f, 5f, 1);
	func_244(&(uParam0->f_420[1 /*8*/]), 70, 70, 130, 255);
	func_245(&(uParam0->f_420[0 /*8*/]), 257f, 124f, 254f, 25f, 1);
	func_244(&(uParam0->f_420[0 /*8*/]), 255, 255, 255, 255);
	func_245(&(uParam0->f_420[2 /*8*/]), 257f, 159f, 254f, 133f, 1);
	func_243(&(uParam0->f_420[2 /*8*/]), 117, 1);
	func_245(&(uParam0->f_420[3 /*8*/]), 257f, 294f, 254f, 25f, 1);
	func_243(&(uParam0->f_420[3 /*8*/]), 117, 1);
	func_245(&(uParam0->f_420[4 /*8*/]), 257f, 321f, 254f, 25f, 1);
	func_243(&(uParam0->f_420[4 /*8*/]), 117, 1);
	func_245(&(uParam0->f_420[5 /*8*/]), 257f, 348f, 254f, 25f, 1);
	func_243(&(uParam0->f_420[5 /*8*/]), 117, 1);
	func_245(&(uParam0->f_420[6 /*8*/]), 257f, 375f, 254f, 25f, 1);
	func_243(&(uParam0->f_420[6 /*8*/]), 117, 1);
	func_245(&(uParam0->f_420[7 /*8*/]), 257f, 402f, 254f, 25f, 1);
	func_243(&(uParam0->f_420[7 /*8*/]), 117, 1);
	func_245(&(uParam0->f_420[8 /*8*/]), 257f, 429f, 254f, 52f, 1);
	func_243(&(uParam0->f_420[8 /*8*/]), 117, 1);
	func_245(&(uParam0->f_420[11 /*8*/]), 257f, 483f, 83f, 84f, 1);
	func_243(&(uParam0->f_420[11 /*8*/]), 117, 1);
	func_245(&(uParam0->f_420[12 /*8*/]), 342f, 483f, 84f, 84f, 1);
	func_243(&(uParam0->f_420[12 /*8*/]), 117, 1);
	func_245(&(uParam0->f_420[13 /*8*/]), 428f, 483f, 83f, 84f, 1);
	func_243(&(uParam0->f_420[13 /*8*/]), 117, 1);
	func_245(&(uParam0->f_420[14 /*8*/]), 428f, 564f, 83f, 25f, 1);
	func_243(&(uParam0->f_420[14 /*8*/]), 107, 1);
	func_245(&(uParam0->f_420[15 /*8*/]), 342f, 564f, 84f, 25f, 1);
	func_243(&(uParam0->f_420[15 /*8*/]), 108, 1);
	func_245(&(uParam0->f_420[16 /*8*/]), 257f, 564f, 83f, 25f, 1);
	func_243(&(uParam0->f_420[16 /*8*/]), 109, 1);
	uParam0->f_986 = 1;
}

void func_243(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0x39F91E7F4F162E9C(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_4 = uVar0;
	uParam0->f_5 = uVar1;
	uParam0->f_6 = uVar2;
	if (bParam2)
	{
		uParam0->f_7 = uVar3;
	}
}

void func_244(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	uParam0->f_4 = iParam1;
	uParam0->f_5 = iParam2;
	uParam0->f_6 = iParam3;
	uParam0->f_7 = iParam4;
}

void func_245(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, bool bParam5)
{
	func_249(uParam0, fParam3, fParam4);
	func_246(uParam0, fParam1, fParam2, bParam5);
}

void func_246(var uParam0, float fParam1, float fParam2, bool bParam3)
{
	*uParam0 = func_248(fParam1, 1280);
	uParam0->f_1 = func_247(fParam2, 720);
	if (bParam3)
	{
		*uParam0 = (*uParam0 + (uParam0->f_2 / 2f));
		uParam0->f_1 = (uParam0->f_1 + (uParam0->f_3 / 2f));
	}
}

float func_247(float fParam0, int iParam1)
{
	var uVar0;
	
	if (iParam1 == 0)
	{
		unk_0x66773C92835D0909(&uVar0, &iParam1);
	}
	return (fParam0 / IntToFloat(iParam1));
}

float func_248(float fParam0, int iParam1)
{
	var uVar0;
	
	if (iParam1 == 0)
	{
		unk_0x66773C92835D0909(&iParam1, &uVar0);
	}
	return (fParam0 / IntToFloat(iParam1));
}

void func_249(var uParam0, float fParam1, float fParam2)
{
	uParam0->f_2 = func_248(fParam1, 1280);
	uParam0->f_3 = func_247(fParam2, 720);
}

void func_250(float fParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	fParam0->f_4 = iParam1;
	fParam0->f_5 = iParam2;
	fParam0->f_6 = iParam3;
	fParam0->f_7 = iParam4;
}

void func_251(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, bool bParam5)
{
	func_253(fParam0, fParam3, fParam4);
	func_252(fParam0, fParam1, fParam2, bParam5);
}

void func_252(var uParam0, float fParam1, float fParam2, bool bParam3)
{
	*uParam0 = func_248(fParam1, 1280);
	uParam0->f_1 = func_247(fParam2, 720);
	if (bParam3)
	{
		*uParam0 = (*uParam0 + (uParam0->f_2 / 2f));
		uParam0->f_1 = (uParam0->f_1 + (uParam0->f_3 / 2f));
	}
}

void func_253(var uParam0, float fParam1, float fParam2)
{
	uParam0->f_2 = func_248(fParam1, 1280);
	uParam0->f_3 = func_247(fParam2, 720);
}

float func_254(float fParam0, int iParam1, bool bParam2)
{
	var uVar0;
	float fVar1;
	
	if (iParam1 == 0)
	{
		unk_0x66773C92835D0909(&iParam1, &uVar0);
	}
	fVar1 = (fParam0 * IntToFloat(iParam1));
	if (bParam2)
	{
		return unk_0xBBDA792448DB5A89(unk_0xF2DB717A73826179(fVar1));
	}
	return fVar1;
}

void func_255(var uParam0, float fParam1, float fParam2, bool bParam3)
{
	*uParam0 = func_248(fParam1, 1280);
	uParam0->f_1 = func_247(fParam2, 720);
	if (!bParam3)
	{
	}
}

void func_256(var uParam0)
{
	func_277(uParam0, 0);
	func_276(&(uParam0->f_11), 0);
	func_275(&(uParam0->f_66), 0);
	func_274(&(uParam0->f_77), 0);
	func_273(&(uParam0->f_33), 0);
	func_272(&(uParam0->f_44), 0);
	func_271(&(uParam0->f_55), 0);
	func_270(&(uParam0->f_143), 0);
	func_269(&(uParam0->f_22), 0);
	func_268(&(uParam0->f_154), 0);
	func_267(&(uParam0->f_88), 0, 0);
	func_266(&(uParam0->f_99), 0, 5);
	func_265(&(uParam0->f_110), 0);
	func_264(&(uParam0->f_121), 0);
	func_263(&(uParam0->f_132), 0);
	func_262(&(uParam0->f_165), 0);
	func_261(&(uParam0->f_176), 0);
	func_260(&(uParam0->f_187), 0);
	func_259(&(uParam0->f_198), 0);
	func_258(&(uParam0->f_209), 0);
	func_257(&(uParam0->f_220), 0);
}

void func_257(var uParam0, int iParam1)
{
	*uParam0 = 4;
	uParam0->f_1 = 0.45f;
	uParam0->f_2 = 0.45f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 29;
}

void func_258(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.275f;
	uParam0->f_2 = 0.275f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 28;
}

void func_259(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.3375f;
	uParam0->f_2 = 0.3375f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 27;
}

void func_260(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.35f;
	uParam0->f_2 = 0.35f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 26;
}

void func_261(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.325f;
	uParam0->f_2 = 0.325f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 25;
}

void func_262(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.6f;
	uParam0->f_2 = 0.6f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 24;
}

void func_263(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (0.315f + 0.183f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 15;
}

void func_264(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (0.5f + 0.004f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 13;
}

void func_265(var uParam0, int iParam1)
{
	*uParam0 = 5;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((0.628f - 0.18f) - 0.058f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 12;
}

void func_266(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (0.889f - 0.01f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 10;
}

void func_267(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((((((0.469f + 0.096f) - 0.017f) + 0.022f) - 0.062f) - 0.001f) - 0.013f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 9;
}

void func_268(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.288f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 23;
}

void func_269(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.383f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 2;
}

void func_270(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.368f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 22;
}

void func_271(var uParam0, int iParam1)
{
	*uParam0 = 4;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.485f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 5;
}

void func_272(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.35f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 4;
}

void func_273(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.409f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 3;
}

void func_274(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = 0.655f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 8;
}

void func_275(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = 0.628f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 7;
}

void func_276(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.346f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 1;
}

void func_277(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.781f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 0;
}

void func_278(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0 /*9*/] = 0f;
		(uParam0[iVar0 /*9*/])->f_1 = 0f;
		(uParam0[iVar0 /*9*/])->f_2 = 0f;
		(uParam0[iVar0 /*9*/])->f_3 = 0f;
		(uParam0[iVar0 /*9*/])->f_4 = 0;
		(uParam0[iVar0 /*9*/])->f_5 = 0;
		(uParam0[iVar0 /*9*/])->f_6 = 0;
		(uParam0[iVar0 /*9*/])->f_7 = 0;
		(uParam0[iVar0 /*9*/])->f_8 = 0f;
		iVar0++;
	}
}

void func_279(char* sParam0, int iParam1)
{
	unk_0x0718552FB84CF252(sParam0);
	unk_0x7178D3ABFAB2F9F4(0, 0, 1, iParam1);
}

int func_280(var uParam0)
{
	func_284();
	switch (iLocal_2301)
	{
		case 0:
			func_10(uParam0);
			func_283(&uLocal_2296, 3);
			iLocal_2301 = 1;
			break;
		
		case 1:
			if (func_2(uParam0, 1f))
			{
				func_281(&uLocal_2296, 1, 0, 1, 3, 1, 0);
				iLocal_2301 = 2;
			}
			break;
		
		case 2:
			if (func_281(&uLocal_2296, 0, 0, 1, 3, 1, 0))
			{
				return 0;
			}
			break;
			return 1;
	}
	return 1;
}

int func_281(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	
	if (!func_3(&(uParam0->f_2)))
	{
		func_11(&(uParam0->f_2));
	}
	unk_0xCFCC78391C8B3814(1);
	unk_0x029823681D10A10E(*uParam0, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 100, 0);
	if (iParam4 > 3)
	{
		iParam4 = 3;
	}
	else if (iParam4 < 0)
	{
		iParam4 = 0;
	}
	if (bParam5)
	{
		sVar0 = "3_2_1";
		sVar1 = "GO";
		sVar2 = "HUD_MINI_GAME_SOUNDSET";
	}
	else
	{
		sVar0 = "3_2_1";
		sVar1 = "GO";
		sVar2 = "321_GO_LOW_VOL_SOUNDSET";
	}
	iVar3 = unk_0xF34EE736CF047844(func_5(&(uParam0->f_2)));
	iVar4 = (iVar3 - iParam4);
	bVar5 = false;
	if (!func_337(uParam0->f_1, 8))
	{
		if (iVar4 >= -3 && !func_337(uParam0->f_1, 1))
		{
			func_309(&(uParam0->f_1), 1);
			unk_0xB906B139171B1845(-1, sVar0, sVar2, 1);
			func_283(uParam0, iVar4);
		}
		else if (iVar4 >= -2 && !func_337(uParam0->f_1, 2))
		{
			func_309(&(uParam0->f_1), 2);
			unk_0xB906B139171B1845(-1, sVar0, sVar2, 1);
			func_283(uParam0, iVar4);
		}
		else if (iVar4 >= -1 && !func_337(uParam0->f_1, 4))
		{
			func_309(&(uParam0->f_1), 4);
			unk_0xB906B139171B1845(-1, sVar0, sVar2, 1);
			func_283(uParam0, iVar4);
		}
		else if (iVar4 >= -1 && !func_337(uParam0->f_1, 16))
		{
			if (unk_0x134549B388167CBF((func_5(&(uParam0->f_2)) - IntToFloat(iParam4))) < 0.65f)
			{
				if (bParam5 || bParam6)
				{
					func_309(&(uParam0->f_1), 16);
					unk_0xB906B139171B1845(-1, sVar1, sVar2, 1);
				}
			}
		}
		else if (iVar4 >= 0 && !func_337(uParam0->f_1, 8))
		{
			if (!bParam5 && !bParam6)
			{
				unk_0xB906B139171B1845(-1, sVar1, sVar2, 1);
			}
			func_309(&(uParam0->f_1), 8);
			unk_0x39F91E7F4F162E9C(18, &iVar6, &iVar7, &iVar8, &uVar9);
			unk_0xF6EA2AC68E7C7293(*uParam0, "SET_MESSAGE");
			func_142("CNTDWN_GO");
			unk_0xA734310215BCF528(iVar6);
			unk_0xA734310215BCF528(iVar7);
			unk_0xA734310215BCF528(iVar8);
			unk_0x58279158C52AF361(true);
			unk_0xD4D85E4148B638AD();
			if (!bParam1)
			{
				bVar5 = true;
			}
		}
	}
	else if (iVar4 == 1)
	{
		bVar5 = true;
	}
	if ((iParam2 && func_282()) || iVar3 > 5)
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		if (bParam3)
		{
			uParam0->f_1 = 0;
			func_4(&(uParam0->f_2));
		}
		return 1;
	}
	return 0;
}

int func_282()
{
	if (unk_0x535384D6067BA42E())
	{
		return 0;
	}
	if (unk_0x2503EB2EA811EC9A(0, 18) || unk_0x2503EB2EA811EC9A(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_283(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	unk_0x39F91E7F4F162E9C(12, &iVar0, &iVar1, &iVar2, &uVar3);
	unk_0xF6EA2AC68E7C7293(*uParam0, "SET_MESSAGE");
	unk_0xB07108C8201910EA(-1);
	unk_0x164FB269C22AF51C("NUMBER");
	unk_0xF00CED653959DE03(unk_0x0C214D5B8A38C828(iParam1));
	unk_0x5BB4D22B8B03A30B();
	unk_0xA734310215BCF528(iVar0);
	unk_0xA734310215BCF528(iVar1);
	unk_0xA734310215BCF528(iVar2);
	unk_0x58279158C52AF361(true);
	unk_0xD4D85E4148B638AD();
}

void func_284()
{
	struct<6> Var0;
	int iVar6;
	
	iVar6 = Global_96383;
	func_285(Var0, 0, 0, 0, 0, iVar6);
}

void func_285(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	
	if (Global_68499 != 6)
	{
		if (Global_68501 == -1)
		{
			if (func_299(1, Param0))
			{
				if (Global_68502 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_28 > fVar0)
				{
					Global_68501 = unk_0x4F67E8ECA7D3F667();
					Local_29 = { unk_0x6374163038BE5BEE(15) };
					fLocal_28 = 0f;
				}
				else
				{
					fLocal_28 = (fLocal_28 + unk_0x5E72022914CE3C38());
				}
			}
			else
			{
				fLocal_28 = 0f;
			}
		}
		else
		{
			if (!func_299(0, Param0))
			{
				Global_68501 = (unk_0x4F67E8ECA7D3F667() - 9000);
			}
			unk_0xB5F6539FA93ECBF6(7);
			unk_0xB5F6539FA93ECBF6(6);
			unk_0xB5F6539FA93ECBF6(8);
			unk_0xB5F6539FA93ECBF6(9);
			iVar1 = (unk_0x4F67E8ECA7D3F667() - Global_68501);
			if (iVar1 < 9000 && !unk_0xF5472C80DF2FF847())
			{
				iVar2 = 255;
				if (iVar1 < 1000)
				{
					iVar2 = unk_0x11E019C8F43ACC8A(((unk_0xBBDA792448DB5A89(iVar1) / 1000f) * 255f));
				}
				else
				{
					iVar3 = (9000 - iVar1);
					if (iVar3 < 1000)
					{
						iVar2 = unk_0x11E019C8F43ACC8A(((unk_0xBBDA792448DB5A89(iVar3) / 1000f) * 255f));
					}
				}
				switch (Global_68499)
				{
					case 3:
					case 5:
						if (iParam6 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.07f;
						}
						else if (iParam7 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.077f;
						}
						else if (iParam8 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.05f;
						}
						else if (iParam9 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.035f;
						}
						else
						{
							fVar6 = 0f;
							fVar7 = -0.014f;
						}
						break;
					
					default:
						fVar6 = 0f;
						fVar7 = -0.014f;
						break;
				}
				unk_0x3DBF4ED80996A17A(82, 66);
				unk_0x031ABF27ACAA1595(1);
				unk_0x4CB6ED62C0EA5841(2);
				iVar12 = func_149();
				if (Global_68502 == 1 && Global_68500 == 62)
				{
					iVar12 = Global_97353.f_1729.f_539.f_3214;
				}
				switch (iVar12)
				{
					case 0:
						unk_0x39F91E7F4F162E9C(143, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 1:
						unk_0x39F91E7F4F162E9C(144, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 2:
						unk_0x39F91E7F4F162E9C(145, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					default:
						iVar8 = 240;
						iVar9 = 200;
						iVar10 = 80;
				}
				unk_0x1844BFD606087D68(iVar8, iVar9, iVar10, iVar2);
				unk_0xFB83286FAFA8DD26();
				Var4 = { func_288(Global_68500, Global_68502, iParam10) };
				if (fVar7 == -0.014f)
				{
				}
				unk_0xEACE371867DDB554(fVar6, fVar7, 0f, 0.01f);
				unk_0x4170B650590B3B00(0.67f, 0.67f);
				if (!unk_0x7A821A102AEDC6EC() && !unk_0x955A982E3A3F88DE())
				{
					fLocal_33 = 0.14f;
				}
				else
				{
					fLocal_33 = 0.17f;
				}
				if (fVar7 == -0.014f)
				{
					if (func_287(&Var4) > fLocal_33)
					{
						if (unk_0x7AB0A36667DFC20C(15))
						{
							unk_0xBCECE9335F976364(15, Local_29.f_0, (Local_29.f_1 + fLocal_32));
							Global_68504 = 1;
						}
					}
				}
				unk_0x44507FCF2678B557(&Var4);
				unk_0xC915BBFBCA1E5AB8(fVar6, fVar7, 0);
				unk_0xA2050119A0AD6EF1();
				if (Global_68503 == 1)
				{
					func_286();
					fLocal_28 = 0f;
				}
			}
			else
			{
				func_286();
				fLocal_28 = 0f;
			}
		}
	}
}

void func_286()
{
	if (Global_68499 != 6)
	{
	}
	if (Global_68504)
	{
		unk_0x6E6485C88690115F(15);
		Global_68504 = 0;
		Global_17236.f_7207 = 0;
	}
	Global_68499 = 6;
	Global_68501 = -1;
	Global_68500 = -1;
}

float func_287(var uParam0)
{
	unk_0xAA01A6DC6F359160(uParam0);
	return unk_0x6ECFBEBF963B31D0(1);
}

struct<2> func_288(int iParam0, int iParam1, int iParam2)
{
	struct<2> Var0;
	int iVar2;
	
	StringCopy(&Var0, "", 8);
	switch (iParam1)
	{
		case 1:
			Var0 = { func_298(iParam0) };
			break;
		
		case 7:
			Var0 = { func_296(iParam0) };
			break;
		
		case 3:
			iVar2 = iParam0;
			switch (iVar2)
			{
				case 0:
					Var0 = { func_295(iParam2) };
					break;
				
				case 8:
					Var0 = { func_294(iParam2) };
					break;
				
				case 7:
					Var0 = { func_293(iParam2) };
					break;
				
				case 10:
					Var0 = { func_292(iParam2) };
					break;
				
				case 5:
					Var0 = { func_291(iParam2) };
					break;
				
				case 4:
					Var0 = { func_290(iParam2) };
					break;
				
				default:
					StringCopy(&Var0, func_289(iVar2), 8);
					break;
			}
			break;
		
		default:
			break;
	}
	return Var0;
}

char* func_289(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MG_BJUM";
			break;
		
		case 1:
			return "MG_DART";
			break;
		
		case 2:
			return "MG_GOLF";
			break;
		
		case 3:
			return "MG_HUNT";
			break;
		
		case 4:
			return "MG_OFFR";
			break;
		
		case 5:
			return "MG_PILO";
			break;
		
		case 6:
			return "MG_RMPG";
			break;
		
		case 7:
			return "MG_SERA";
			break;
		
		case 8:
			return "MG_SRAC";
			break;
		
		case 9:
			return "MG_STRP";
			break;
		
		case 10:
			return "MG_STNT";
			break;
		
		case 11:
			return "MG_SHTR";
			break;
		
		case 12:
			return "MG_TAXI";
			break;
		
		case 13:
			return "MG_TENN";
			break;
		
		case 14:
			return "MG_TOWI";
			break;
		
		case 15:
			return "MG_TRFA";
			break;
		
		case 16:
			return "MG_TRFG";
			break;
		
		case 17:
			return "MG_TRIA";
			break;
		
		case 18:
			return "MG_YOGA";
			break;
		
		case 19:
			return "MG_CRCE";
			break;
	}
	return "INVALID!";
}

struct<2> func_290(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0x2CF12F9ACF18F048(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGOR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_291(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0x2CF12F9ACF18F048(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGFS_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_292(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0x2CF12F9ACF18F048(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSP_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_293(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0x2CF12F9ACF18F048(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_294(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0x2CF12F9ACF18F048(&cVar2) || iParam0 == 3)
	{
	}
	else
	{
		StringCopy(&Var0, "MGCR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_295(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0x2CF12F9ACF18F048(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGBJ_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_296(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_297(iParam0) };
	if (unk_0x2CF12F9ACF18F048(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_297(int iParam0)
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

struct<2> func_298(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &(Global_81155[iParam0 /*34*/].f_8), 8);
	if (iParam0 == 90)
	{
		switch (Global_97353.f_7341.f_99.f_203[7])
		{
			case 1:
				StringConCat(&Var0, "A", 8);
				break;
			
			case 2:
				StringConCat(&Var0, "B", 8);
				break;
			
			default:
				StringConCat(&Var0, "A", 8);
				break;
			}
	}
	return Var0;
}

int func_299(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	if (((!func_301(0) || Global_68514) || Global_68503 == 1) || !unk_0x37F9A426FBCF4AF2())
	{
		return 0;
	}
	switch (Global_68499)
	{
		case 0:
			if (unk_0xD3852F22AB713A1F(&uParam1, "NONE") || unk_0x2CF12F9ACF18F048(&uParam1))
			{
				Global_68499 = 3;
			}
			else
			{
				Global_68499 = 1;
			}
			break;
		
		case 1:
			if (unk_0x46F500F237D08AC7())
			{
				Global_68499 = 2;
			}
			break;
		
		case 2:
			if (unk_0x2004A43D1B1A5D9F())
			{
				Global_68499 = 4;
				return 1;
			}
			else if (!unk_0x352A58A9B0D09D38())
			{
				Global_68499 = 3;
			}
			break;
		
		case 3:
			if (unk_0x2004A43D1B1A5D9F())
			{
			}
			else
			{
				Global_68499 = 5;
				return 1;
			}
			break;
		
		case 4:
			if (unk_0x2004A43D1B1A5D9F())
			{
				return 1;
			}
			else if (iParam0 == 1)
			{
				Global_68499 = 5;
			}
			break;
		
		case 5:
			if ((unk_0x2004A43D1B1A5D9F() || func_128(0)) || func_300(1))
			{
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_300(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17098.f_4 && Global_17098.f_104 == 4);
	}
	return Global_17098.f_4;
}

int func_301(int iParam0)
{
	if (Global_34913 == 15)
	{
		return 0;
	}
	if (func_302(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_302(int iParam0)
{
	return func_303(iParam0, Global_34913);
}

int func_303(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_304(var uParam0)
{
	char cVar0[16];
	int iVar4;
	
	StringCopy(&cVar0, "Offroad_", 16);
	StringIntConCat(&cVar0, Local_50.f_10 + 1, 16);
	func_11(&(uParam0->f_3));
	uParam0->f_358[0 /*189*/].f_15 = 0f;
	iLocal_2076 = 0;
	unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 1, 0);
	if (Local_50.f_0 == 0)
	{
		unk_0xFEBEEBC9CBDF4B12(unk_0x217E9DC48139933D(), 1);
	}
	uParam0->f_1 = 1;
	func_11(&uLocal_2401);
	iVar4 = 0;
	while (iVar4 < uParam0->f_13)
	{
		func_305(&(uParam0->f_358[iVar4 /*189*/]));
		if (Local_50.f_0 != 1)
		{
			if (iVar4 != 0)
			{
				func_76(uParam0, uParam0->f_358[iVar4 /*189*/].f_8, uParam0->f_358[iVar4 /*189*/].f_9, uParam0->f_27[uParam0->f_358[iVar4 /*189*/].f_11 /*10*/], uParam0->f_27[uParam0->f_358[iVar4 /*189*/].f_11 /*10*/].f_7, iVar4);
			}
		}
		else if (bLocal_2409)
		{
			if (iVar4 > 0)
			{
				if (!unk_0x7D5B1F88E7504BBA(uParam0->f_358[iVar4 /*189*/].f_8) && !unk_0x7D5B1F88E7504BBA(uParam0->f_358[iVar4 /*189*/].f_9))
				{
					if (iVar4 == 1 && Local_50.f_10 == 0)
					{
						StringConCat(&cVar0, "a", 16);
					}
					unk_0x912F67F0C04621D5(uParam0->f_358[iVar4 /*189*/].f_8, uParam0->f_358[iVar4 /*189*/].f_9, &cVar0, 262144, 0, 8, -1, unk_0xFE52F34491529F0B(uParam0->f_358[iVar4 /*189*/].f_9), 0, 1073741824);
				}
			}
		}
		else if (iVar4 != 0)
		{
			func_76(uParam0, uParam0->f_358[iVar4 /*189*/].f_8, uParam0->f_358[iVar4 /*189*/].f_9, uParam0->f_27[uParam0->f_358[iVar4 /*189*/].f_11 /*10*/], uParam0->f_27[uParam0->f_358[iVar4 /*189*/].f_11 /*10*/].f_7, iVar4);
		}
		iVar4++;
	}
	if (unk_0xB86D29B10F627379(uParam0->f_358[0 /*189*/].f_9, 0))
	{
		unk_0x34262200CCA8474C(uParam0->f_358[0 /*189*/].f_9, 1);
		if (!unk_0x2CF12F9ACF18F048(sLocal_2246))
		{
			unk_0x6F6B1E3564E73392(sLocal_2246);
			unk_0x394A1F7D15980AF6(uParam0->f_358[0 /*189*/].f_9, sLocal_2246);
		}
	}
}

void func_305(var uParam0)
{
	if (!unk_0x7D5B1F88E7504BBA(uParam0->f_9))
	{
		if (!unk_0x7D5B1F88E7504BBA(uParam0->f_8))
		{
			if (unk_0x02774B3A9034278F(uParam0->f_9))
			{
				unk_0xBF9B4D6267E8C26D(uParam0->f_9);
			}
			unk_0x49876BF356F39E66(uParam0->f_8, 1);
		}
	}
	uParam0->f_11 = 0;
	if (!unk_0x7D5B1F88E7504BBA(uParam0->f_9))
	{
		if (!unk_0x7331BD1F2125CC77(uParam0->f_22))
		{
			unk_0xB64CFA14CB9A2E78(uParam0->f_9, 1, 1);
		}
	}
}

var func_306()
{
	return unk_0x67D02A194A2FC2BD("MP_BIG_MESSAGE_FREEMODE");
}

void func_307(var uParam0)
{
	uParam0->f_12 = uParam0->f_12;
}

void func_308(var uParam0)
{
	int iVar0;
	
	if (unk_0x7964097FCE4C244B(unk_0x47E385B0D957C8D4()))
	{
		unk_0x4D51E59243281D80(unk_0x47E385B0D957C8D4(), 0, 512);
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		func_108(&(uParam0->f_358[iVar0 /*189*/]), 60f, 1);
		iVar0++;
	}
}

void func_309(int iParam0, int iParam1)
{
	func_60(iParam0, iParam1);
}

int func_310(var uParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	int iVar3;
	float fVar4;
	struct<3> Var5;
	struct<3> Var8;
	
	if (iParam1 < 0 || iParam1 > 32)
	{
		return 0;
	}
	iVar3 = -1;
	if (iParam1 == (uParam0->f_12 - 1))
	{
		iVar3 = 38;
	}
	fVar4 = 1.2f;
	if (!bParam2)
	{
		fVar4 = 0.7f;
	}
	if (!func_316(&(uParam0->f_27[iParam1 /*10*/]), iVar3, fVar4, iParam1, uParam0->f_12))
	{
		return 0;
	}
	if (bParam2)
	{
		Var5 = { uParam0->f_27[iParam1 /*10*/] };
		Var8 = { 0f, 0f, 0f };
		if (iParam1 < (uParam0->f_12 - 1))
		{
			if (!func_73(uParam0->f_27[iParam1 /*10*/], uParam0->f_27[iParam1 + 1 /*10*/], 1056964608))
			{
				Var5 = { uParam0->f_27[iParam1 + 1 /*10*/] };
			}
		}
		if (Local_50.f_0 == 1)
		{
			if (Local_50.f_10 == 1)
			{
				if (func_337(uParam0->f_27[8 /*10*/].f_9, 4))
				{
					func_335(&(uParam0->f_27[8 /*10*/].f_9), 4);
				}
			}
		}
		if (iParam1 > 0)
		{
			Var8 = { uParam0->f_27[(iParam1 - 1) /*10*/] };
		}
		if (!func_311(Var8, &(uParam0->f_27[iParam1 /*10*/]), Var5, 16f))
		{
			return 0;
		}
		if (iParam1 + 1 < uParam0->f_12)
		{
			if (iParam1 + 2 >= 33)
			{
				Var0 = { uParam0->f_27[0 /*10*/] };
			}
			else
			{
				Var0 = { uParam0->f_27[iParam1 + 2 /*10*/] };
			}
			if (!func_311(uParam0->f_27[iParam1 /*10*/], &(uParam0->f_27[iParam1 + 1 /*10*/]), Var0, 16f))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_311(struct<3> Param0, var uParam3, struct<3> Param4, float fParam7)
{
	if (!func_312(Param0, uParam3, Param4, fParam7))
	{
		return 0;
	}
	return 1;
}

int func_312(struct<3> Param0, var uParam3, struct<3> Param4, var uParam7)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	Param0 = { Param0 };
	func_80(&(uParam3->f_6));
	if (uParam3->f_7 == 2)
	{
		uVar0 = func_314(uParam3->f_7, Param0, *uParam3, Param4);
		func_552(func_553(func_92()), &uVar1, &uVar2, &uVar3, &uVar4);
		uParam3->f_6 = unk_0xFABEAA68D0D0984C(uVar0, *uParam3, Param4, uParam7, uVar1, uVar2, uVar3, func_91(*uParam3, 25, 200), 0);
	}
	else if (uParam3->f_7 == 3)
	{
		if (uParam3->f_8 == 2 || uParam3->f_8 == 3)
		{
			func_552(func_553(18), &iVar1, &iVar2, &iVar3, &uVar4);
			uParam3->f_6 = unk_0xFABEAA68D0D0984C(func_313(uParam3->f_7, uParam3->f_8), *uParam3, Param4, uParam7, iVar1, iVar2, iVar3, func_91(*uParam3, 25, 200), 0);
		}
		else if (uParam3->f_8 == 1)
		{
			func_552(func_553(9), &iVar1, &iVar2, &iVar3, &uVar4);
			uParam3->f_6 = unk_0xFABEAA68D0D0984C(func_313(uParam3->f_7, uParam3->f_8), *uParam3, Param4, uParam7, iVar1, iVar2, iVar3, func_91(*uParam3, 25, 200), 0);
		}
	}
	else
	{
		uParam3->f_6 = unk_0xFABEAA68D0D0984C(func_313(uParam3->f_7, uParam3->f_8), *uParam3, Param4, uParam7, 254, 207, 12, func_91(*uParam3, 25, 200), 0);
	}
	if (uParam3->f_6 == 0)
	{
		return 0;
	}
	return 1;
}

int func_313(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 5;
			break;
		
		case 1:
			return 9;
			break;
		
		case 2:
			return 35;
			break;
		
		case 3:
			if (iParam1 == 2)
			{
				return 36;
			}
			else if (iParam1 == 3)
			{
				return 37;
			}
			else if (iParam1 == 1)
			{
				return 38;
			}
			break;
		
		case 4:
			return 14;
			break;
		
		case 5:
			return 25;
			break;
		
		case 6:
			return 30;
			break;
		
		case 7:
			return 20;
			break;
		
		case 8:
			return 24;
			break;
		
		case 9:
			return 29;
			break;
		
		case 10:
			return 34;
			break;
	}
	return 5;
}

int func_314(int iParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	fVar7 = 180f;
	fVar8 = 140f;
	fVar9 = 80f;
	if (iParam0 == 0)
	{
		iVar10 = 5;
		iVar11 = 6;
		iVar12 = 7;
	}
	else if (iParam0 == 2)
	{
		iVar10 = 10;
		iVar11 = 11;
		iVar12 = 12;
	}
	else if (iParam0 == 5)
	{
		iVar10 = 25;
		iVar11 = 26;
		iVar12 = 27;
	}
	else if (iParam0 == 6)
	{
		iVar10 = 30;
		iVar11 = 31;
		iVar12 = 32;
	}
	else if (iParam0 == 7)
	{
		iVar10 = 20;
		iVar11 = 21;
		iVar12 = 22;
	}
	if (!func_315(Param1, 0f, 0f, 0f))
	{
		Var0 = { Param1 - Param4 };
		Var3 = { Param7 - Param4 };
		fVar6 = unk_0xD0DFE1C486097BBB(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1);
		if (fVar6 > 180f)
		{
			fVar6 = (360f - fVar6);
		}
		if (fVar6 < fVar9)
		{
			return iVar12;
		}
		else if (fVar6 < fVar8)
		{
			return iVar11;
		}
		else if (fVar6 < fVar7)
		{
			return iVar10;
		}
	}
	return iVar10;
}

bool func_315(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_316(var uParam0, int iParam1, float fParam2, int iParam3, int iParam4)
{
	if (!func_317(&(uParam0->f_5), *uParam0, iParam1, fParam2, iParam3, iParam4, uParam0->f_8))
	{
		return 0;
	}
	return 1;
}

int func_317(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7, int iParam8)
{
	func_83(uParam0);
	*uParam0 = unk_0xAFE7B0E5A6396BD2(Param1);
	if (!unk_0xCD82FA174080B3B1(*uParam0))
	{
		return 0;
	}
	if (iParam4 != -1)
	{
		unk_0x74F74D3207ED525C(*uParam0, iParam4);
	}
	unk_0x17D3E31025A05A57(*uParam0, uParam5);
	unk_0x8724063842980FA9(*uParam0, 4);
	if (iParam8 == 2 || iParam8 == 3)
	{
		unk_0x2954B7F696FF4E2C(*uParam0, 2);
	}
	if (iParam8 == 1)
	{
		unk_0x2954B7F696FF4E2C(*uParam0, 3);
	}
	if (iParam6 == (iParam7 - 1))
	{
		unk_0x3FAB153D208D6F26("GATEBLIPFIN");
		unk_0x51ED063DD63DA613(*uParam0);
	}
	else
	{
		if (iParam8 == 1)
		{
			unk_0x3FAB153D208D6F26("GATEBLIPINV");
		}
		else if (iParam8 == 2 || iParam8 == 3)
		{
			unk_0x3FAB153D208D6F26("GATEBLIPKNF");
		}
		else
		{
			unk_0x3FAB153D208D6F26("GATEBLIPDEF");
		}
		unk_0x51ED063DD63DA613(*uParam0);
	}
	return 1;
}

void func_318(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x0BBD76EF782760F3(sParam0);
	unk_0x3103E77581D5165C(iParam1, 0);
}

int func_319(var uParam0)
{
	switch (uParam0->f_25)
	{
		case 0:
			func_124(1);
			unk_0xC1BA29DF5631B0F8("MPHUD", 0);
			Local_50.f_118 = func_332();
			switch (Local_50.f_0)
			{
				case 0:
					unk_0xC1BA29DF5631B0F8("SPRRaces", 0);
					unk_0xC1BA29DF5631B0F8("MPMedals_FEED", 0);
					break;
				
				case 1:
					unk_0xC1BA29DF5631B0F8("SPROffroad", 0);
					break;
				
				case 2:
					unk_0xC1BA29DF5631B0F8("Triathlon", 0);
					unk_0xC1BA29DF5631B0F8("MPMedals_FEED", 0);
					break;
			}
			uParam0->f_25 = 1;
			break;
		
		case 1:
			func_327(uParam0);
			uParam0->f_25 = 2;
			break;
		
		case 2:
			if (func_322(uParam0))
			{
				if (unk_0x54D6900929CCF162("MPHUD"))
				{
					if (unk_0x64BAE9BE701E6C19(Local_50.f_118))
					{
						switch (Local_50.f_0)
						{
							case 0:
								if (unk_0x54D6900929CCF162("SPRRaces") && unk_0x54D6900929CCF162("MPMedals_FEED"))
								{
									uParam0->f_25 = 3;
								}
								break;
							
							case 1:
								if (unk_0x54D6900929CCF162("SPROffroad"))
								{
									uParam0->f_25 = 3;
								}
								break;
							
							case 2:
								if (unk_0x54D6900929CCF162("Triathlon") && unk_0x54D6900929CCF162("MPMedals_FEED"))
								{
									uParam0->f_25 = 3;
								}
								break;
							}
						}
					}
			}
			break;
		
		case 3:
			unk_0x270B63A641BE32F2(unk_0x217E9DC48139933D());
			if (Local_50.f_10 == 0 && !uParam0->f_2)
			{
			}
			else
			{
				func_320(uParam0);
			}
			uParam0->f_25 = 4;
			break;
		
		case 4:
			if (Local_50.f_10 == 0)
			{
				return 0;
			}
			else
			{
				if (unk_0xD42BD6EB2E0F1677(uParam0->f_358[0 /*189*/].f_9))
				{
					unk_0x7D9EFB7AD6B19754(uParam0->f_358[0 /*189*/].f_9, 1);
				}
				if (!unk_0xEEA50AAE36800059())
				{
					unk_0x0A3720F162A033C9(uParam0->f_358[0 /*189*/].f_16);
					unk_0xDE9A139B002A7C00(uParam0->f_358[0 /*189*/].f_16, unk_0x2412D9C05BB09B97(uParam0->f_358[0 /*189*/].f_9), 5000f, 0);
				}
				if (unk_0x9F3CD46F4B1D9255())
				{
					unk_0xE27DBC64CB87AA75();
					if (unk_0xD42BD6EB2E0F1677(uParam0->f_358[0 /*189*/].f_9))
					{
						unk_0x7D9EFB7AD6B19754(uParam0->f_358[0 /*189*/].f_9, 0);
					}
					func_308(uParam0);
					return 0;
				}
			}
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
	}
	return 1;
}

int func_320(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		if (!func_321(uParam0, iVar0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_321(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return 0;
	}
	if (iParam1 > 0)
	{
		return func_120(&(uParam0->f_358[iParam1 /*189*/]), 1);
	}
	return func_120(&(uParam0->f_358[iParam1 /*189*/]), 0);
}

int func_322(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		if (!func_323(uParam0, iVar0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_323(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return 0;
	}
	return func_324(&(uParam0->f_358[iParam1 /*189*/]));
}

int func_324(var uParam0)
{
	if (!func_326(uParam0) || !func_325(uParam0))
	{
		return 0;
	}
	return 1;
}

bool func_325(var uParam0)
{
	if (uParam0->f_22 == 0)
	{
		return 1;
	}
	return unk_0x1283B8B89DD5D1B6(uParam0->f_22);
}

bool func_326(var uParam0)
{
	if (uParam0->f_21 == 0)
	{
		return 0;
	}
	return unk_0x1283B8B89DD5D1B6(uParam0->f_21);
}

void func_327(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		func_328(uParam0, iVar0);
		iVar0++;
	}
}

void func_328(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return;
	}
	func_329(&(uParam0->f_358[iParam1 /*189*/]));
}

void func_329(var uParam0)
{
	func_331(uParam0);
	func_330(uParam0);
}

void func_330(var uParam0)
{
	if (uParam0->f_22 == 0)
	{
		return;
	}
	unk_0xFA28FE3A6246FC30(uParam0->f_22);
}

void func_331(var uParam0)
{
	if (uParam0->f_21 == 0)
	{
		return;
	}
	unk_0xFA28FE3A6246FC30(uParam0->f_21);
}

var func_332()
{
	return unk_0x67D02A194A2FC2BD("SC_LEADERBOARD");
}

int func_333(int iParam0)
{
	if (unk_0x37F9A426FBCF4AF2())
	{
		unk_0x40C719A5E410B9E4(iParam0);
	}
	else if (unk_0xF5472C80DF2FF847())
	{
		return 1;
	}
	return 0;
}

void func_334()
{
	if (unk_0x153AD457764FD704(uLocal_2045))
	{
		if (unk_0x63EFCC7E1810B8E6(uLocal_2045))
		{
			unk_0x33281167E4942E4F(0, 0, 3000, 1, 0, 0);
			unk_0x87295BCA613800C8(uLocal_2045, 0);
		}
		unk_0x4E67E0B6D7FD5145(uLocal_2045, 0);
	}
}

void func_335(int iParam0, int iParam1)
{
	func_336(iParam0, iParam1);
}

void func_336(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

bool func_337(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_338(var uParam0)
{
	if (!func_3(uParam0))
	{
		func_11(uParam0);
	}
}

void func_339()
{
	func_340(&uLocal_1549);
}

void func_340(var uParam0)
{
	if (uParam0->f_4 != 0)
	{
		func_346(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
	}
	if (((*uParam0)[0] != 0 || (*uParam0)[1] != 0) || (*uParam0)[2] != 0)
	{
		func_406(uParam0);
		func_345(uParam0);
		func_344(&Global_1839721);
	}
	if (Global_1835390.f_2708 != 0 || Global_1835390.f_3184)
	{
		func_342();
	}
	if (unk_0x2E882EA08284F674("LEADERBOARD_SCENE"))
	{
		unk_0xC27FB879C2B9A2EB("LEADERBOARD_SCENE");
	}
	if (unk_0x4C82BD446C34CACD())
	{
		func_341(&(Global_1840922.f_49));
	}
	Global_2446554.f_3801 = 0;
}

void func_341(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_342()
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			Global_1835390[iVar0 /*901*/][iVar1 /*75*/] = { Var2 };
			iVar1++;
		}
		Global_1835390.f_2704[iVar0] = 0;
		iVar0++;
	}
	Global_1835390.f_2708 = 0;
	Global_1835390.f_2709 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1835390.f_2710[iVar0] = 0;
		StringCopy(&(Global_1835390.f_2717[iVar0 /*6*/]), "", 24);
		Global_1835390.f_2754[iVar0] = 0;
		Global_1835390.f_2761[iVar0] = 0;
		iVar0++;
	}
	Global_1835390.f_2768 = 0;
	Global_1835390.f_2769 = 0;
	Global_1835390.f_2770 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1835390.f_2771[iVar0] = 0;
		Global_1835390.f_2775[iVar0] = 0;
		iVar0++;
	}
	Global_1835390.f_2779 = 0;
	func_343(&(Global_1835390.f_2780));
	func_341(&(Global_1835390.f_2823));
	Global_1835390.f_2825 = -1;
	Global_1835390.f_2826 = 0;
	func_341(&(Global_1835390.f_2827));
	Global_1835390.f_2829 = 0;
	func_341(&(Global_1835390.f_2830));
	Global_1835390.f_2832 = 0;
	Global_1835390.f_2780.f_28 = 0;
	Global_1835390.f_2780.f_27 = 0;
	Global_1835390.f_3184 = 0;
}

void func_343(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 32);
	StringCopy(&(uParam0->f_9), "", 64);
	uParam0->f_25 = 1;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_29[iVar0] = 0;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

void func_344(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	int iVar14;
	
	iVar13 = 0;
	while (iVar13 < 12)
	{
		StringCopy(uParam0[iVar13 /*100*/], "", 64);
		StringCopy(&((uParam0[iVar13 /*100*/])->f_16), "", 64);
		(uParam0[iVar13 /*100*/])->f_32 = { Var0 };
		(uParam0[iVar13 /*100*/])->f_45 = { Var0 };
		(uParam0[iVar13 /*100*/])->f_58 = 0;
		(uParam0[iVar13 /*100*/])->f_59 = 0;
		iVar14 = 0;
		while (iVar14 < 6)
		{
			(uParam0[iVar13 /*100*/])->f_60[iVar14] = 0f;
			(uParam0[iVar13 /*100*/])->f_67[iVar14] = 0;
			iVar14++;
		}
		(uParam0[iVar13 /*100*/])->f_75 = 0;
		(uParam0[iVar13 /*100*/])->f_74 = 0;
		(uParam0[iVar13 /*100*/])->f_76 = 0;
		(uParam0[iVar13 /*100*/])->f_77 = 0;
		(uParam0[iVar13 /*100*/])->f_78 = 0;
		(uParam0[iVar13 /*100*/])->f_79 = 0;
		StringCopy(&((uParam0[iVar13 /*100*/])->f_80), "", 16);
		iVar13++;
	}
	func_341(&(Global_1835390.f_2830));
}

void func_345(var uParam0)
{
	int iVar0;
	struct<13> Var1;
	
	uParam0->f_246 = 0;
	uParam0->f_246.f_1 = -1;
	uParam0->f_246.f_2 = 0;
	func_341(&(uParam0->f_246.f_3));
	uParam0->f_246.f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_246.f_6[iVar0 /*15*/] = -1;
		uParam0->f_246.f_6[iVar0 /*15*/].f_1 = 0;
		uParam0->f_246.f_6[iVar0 /*15*/].f_2 = { Var1 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_246.f_187[iVar0] = 0;
		iVar0++;
	}
}

void func_346(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = 0;
	*uParam1 = 0;
	Global_1835008 = 0;
	func_341(&(Global_1835008.f_1));
	unk_0x0001D353D9327B10(*uParam2, uParam2->f_1, -1);
}

int func_347(var uParam0, var uParam1)
{
	if (!func_398())
	{
		return 0;
	}
	if (func_392(&bLocal_500, uParam0))
	{
		if (iLocal_502 || bLocal_501)
		{
			unk_0xDC38CC1E35B6A5D7("SPR_QT_PLANE_T", "SPR_QUIT_PLANE", 36, 0, 0, -1, 0, 0, 1);
			if (!*uParam1)
			{
				if (iLocal_502)
				{
					if (func_3(&uLocal_497))
					{
						if (func_225(&uLocal_497, unk_0xBBDA792448DB5A89(0)))
						{
							iLocal_502 = 0;
							bLocal_501 = !bLocal_501;
						}
					}
					else
					{
						func_11(&uLocal_497);
					}
				}
				else
				{
					unk_0xB5F6539FA93ECBF6(9);
					unk_0xB5F6539FA93ECBF6(7);
					func_138(&(Local_50.f_119), 1128792064, 1, 0, 1, 1065353216);
				}
			}
		}
		else
		{
			*uParam1 = 0;
			func_352();
		}
		return 0;
	}
	if (bLocal_500)
	{
		func_351();
		if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
		{
			unk_0x0D06D522B90E861F(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0), 1);
		}
	}
	else
	{
		Local_50.f_10 = -1;
	}
	func_348();
	if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
	{
		unk_0x0D06D522B90E861F(unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0), 1);
	}
	return 1;
}

void func_348()
{
	unk_0x0BFC2C61FB5B6CA1(1);
	unk_0xF3D4779E285B441F(3, 1);
	if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
	{
		unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 1, 0);
	}
	if (unk_0x4A123E85D7C4CA0B("MinigameTransitionIn"))
	{
		unk_0xB4FD7446BAB2F394("MinigameTransitionIn");
	}
	unk_0x4102732DF6B4005F("MinigameTransitionOut", 0, 0);
	iLocal_496 = 0;
	unk_0xFAEC088D28B1DE4A(0);
	func_124(0);
	func_349();
}

void func_349()
{
	Global_14558 = 0;
	func_350();
}

void func_350()
{
	if (unk_0x200E87988220C592())
	{
		unk_0x1DDACDCB7482E6F1();
		Global_16703 = 0;
		unk_0x89EEEEF0CEB4D045(1);
		Global_15692 = 6;
		return;
	}
}

void func_351()
{
	switch (Global_96383)
	{
		case 0:
			Local_50.f_10 = 0;
			break;
		
		case 1:
			Local_50.f_10 = 1;
			break;
		
		case 2:
			Local_50.f_10 = 2;
			break;
		
		case 3:
			Local_50.f_10 = 3;
			break;
		
		case 4:
			Local_50.f_10 = 4;
			break;
	}
}

void func_352()
{
	unk_0x36CDD81627A6FCD2();
	func_353(&uLocal_562);
}

void func_353(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	struct<2> Var5;
	struct<2> Var14;
	int iVar16;
	struct<2> Var17;
	struct<11> Var19;
	struct<2> Var30;
	char cVar34[16];
	struct<2> Var38;
	struct<11> Var40;
	
	if (!bLocal_561)
	{
		if (!unk_0xB0FB6CFAA5A1C833())
		{
			unk_0xBFAA6427EC667C33(1);
		}
	}
	unk_0xB5F6539FA93ECBF6(9);
	unk_0xB5F6539FA93ECBF6(7);
	func_138(&(Local_50.f_119), 1128792064, 1, 0, 1, 1065353216);
	func_384("Shared", "BGGradient_32x1024", uParam0[0 /*9*/], 0, 0, 1, 0);
	func_379(uParam0->f_420[0 /*8*/], 0, 0);
	func_379(uParam0->f_420[1 /*8*/], 0, 0);
	func_379(uParam0->f_420[2 /*8*/], 0, 0);
	func_379(uParam0->f_420[3 /*8*/], 0, 0);
	func_379(uParam0->f_420[4 /*8*/], 0, 0);
	func_379(uParam0->f_420[5 /*8*/], 0, 0);
	func_379(uParam0->f_420[6 /*8*/], 0, 0);
	func_379(uParam0->f_420[7 /*8*/], 0, 0);
	func_379(uParam0->f_420[8 /*8*/], 0, 0);
	func_379(uParam0->f_420[6 /*8*/], 0, 0);
	unk_0xCFCC78391C8B3814(1);
	func_378(&(uParam0->f_741.f_165));
	func_377(&(uParam0->f_316[0 /*2*/]), &(uParam0->f_741.f_165), "SPR_TITLE", 0);
	unk_0xCFCC78391C8B3814(4);
	func_375(&(uParam0->f_741.f_176));
	func_374(&(uParam0->f_741.f_176), &(uParam0->f_420[0 /*8*/]), 0f, 0f);
	func_372(&(uParam0->f_316[1 /*2*/]), &(uParam0->f_741.f_176), "SPR_CHALLENGES", 1, 0);
	func_371(&(uParam0->f_741.f_176));
	func_374(&(uParam0->f_741.f_176), &(uParam0->f_420[1 /*8*/]), 0f, 0f);
	func_372(&(uParam0->f_316[2 /*2*/]), &(uParam0->f_741.f_176), "SPR_INFO", 1, 0);
	func_371(&(uParam0->f_741.f_176));
	func_374(&(uParam0->f_741.f_176), &(uParam0->f_420[5 /*8*/]), 0f, 0f);
	func_372(&(uParam0->f_316[3 /*2*/]), &(uParam0->f_741.f_176), "SPR_AWARD_TITLE", 1, 0);
	func_371(&(uParam0->f_741.f_176));
	func_378(&(uParam0->f_741.f_198));
	iVar0 = 0;
	iVar1 = 9;
	iVar2 = 17;
	iVar3 = 1;
	func_379(uParam0->f_420[16 /*8*/], 0, 0);
	func_379(uParam0->f_420[17 /*8*/], 0, 0);
	func_379(uParam0->f_420[18 /*8*/], 0, 0);
	func_379(uParam0->f_420[19 /*8*/], 0, 0);
	func_379(uParam0->f_420[20 /*8*/], 0, 0);
	func_379(uParam0->f_420[21 /*8*/], 0, 0);
	bVar4 = true;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 < 5)
		{
			Var14 = { uParam0->f_316[iVar2 /*2*/] };
			if (Global_97353.f_17297.f_6[iVar0] > 0f)
			{
				iLocal_506[iVar0] = unk_0x11E019C8F43ACC8A(Global_97353.f_17297.f_6[iVar0]);
			}
			else
			{
				iLocal_506[iVar0] = -1;
			}
			if (iVar0 == Global_96383)
			{
				func_243(&(uParam0->f_420[iVar1 /*8*/]), 1, 1);
				func_379(uParam0->f_420[iVar1 /*8*/], 0, 0);
				func_375(&(uParam0->f_741.f_198));
				switch (Global_97353.f_17297.f_12[iVar0 /*8*/].f_4)
				{
					case 2:
						break;
					
					case 1:
						if (iVar0 < 5)
						{
							if (Global_97353.f_17297.f_6[iVar0] <= 0f)
							{
								func_251(&Var5, 269f, 0f, 32f, 32f, 0);
								func_250(&Var5, 255, 255, 255, 255);
								Var5.f_1 = (uParam0->f_316[iVar2 /*2*/].f_1 + fLocal_513);
								Var14.f_0 = (Var5.f_0 + fLocal_512);
								if (!bLocal_561)
								{
									func_370(&Var5, 0);
								}
								func_369(&Var5, 1);
								func_384("Shared", "NewStar_32", &Var5, 0, 0, 5, 0);
								if (!bLocal_561)
								{
									func_368(&Var14, &(uParam0->f_741.f_198));
								}
							}
						}
						break;
					
					default:
						bVar4 = false;
						break;
				}
				if (iVar0 == Global_96383)
				{
					func_375(&(uParam0->f_741.f_198));
				}
				func_371(&(uParam0->f_741.f_198));
				func_377(&Var14, &(uParam0->f_741.f_198), &(Local_50.f_24[iVar0 /*8*/]), 0);
				func_378(&(uParam0->f_741.f_198));
				func_369(uParam0[iVar3 /*9*/], 1);
				if (bVar4)
				{
					func_378(&(uParam0->f_741.f_198));
				}
				else
				{
					func_378(&(uParam0->f_741.f_198));
				}
				func_378(&(uParam0->f_741.f_198));
				if (IntToFloat(iLocal_506[iVar0]) <= Local_50.f_106[iVar0] && iLocal_506[iVar0] > 1)
				{
					func_369(uParam0[iVar3 /*9*/], 1);
					func_369(uParam0[9 /*9*/], 1);
					func_384("SPRRaces", "FlightStunt_Gold_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					func_374(&(uParam0->f_741.f_198), &(uParam0->f_420[16 /*8*/]), 0.0047f, 0.0055f);
					unk_0x33FE981F73CFCB5F(1);
					func_377(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_198), "SPR_sGOLD", 0);
					unk_0x33FE981F73CFCB5F(0);
					func_371(&(uParam0->f_741.f_198));
				}
				else if (IntToFloat(iLocal_506[iVar0]) <= (((Local_50.f_112[iVar0] - Local_50.f_106[iVar0]) / 2f) + Local_50.f_106[iVar0]) && IntToFloat(iLocal_506[iVar0]) > Local_50.f_106[iVar0])
				{
					func_369(uParam0[iVar3 /*9*/], 1);
					func_369(uParam0[9 /*9*/], 1);
					func_384("SPRRaces", "FlightStunt_Silver_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					func_374(&(uParam0->f_741.f_198), &(uParam0->f_420[16 /*8*/]), 0.0047f, 0.0055f);
					unk_0x33FE981F73CFCB5F(1);
					func_377(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_198), "SPR_sSILVER", 0);
					unk_0x33FE981F73CFCB5F(0);
					func_371(&(uParam0->f_741.f_198));
				}
				else if (IntToFloat(iLocal_506[iVar0]) <= Local_50.f_112[iVar0] && IntToFloat(iLocal_506[iVar0]) > (((Local_50.f_112[iVar0] - Local_50.f_106[iVar0]) / 2f) + Local_50.f_106[iVar0]))
				{
					func_369(uParam0[iVar3 /*9*/], 1);
					func_369(uParam0[9 /*9*/], 1);
					func_384("SPRRaces", "FlightStunt_Bronze_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					func_374(&(uParam0->f_741.f_198), &(uParam0->f_420[16 /*8*/]), 0.0047f, 0.0055f);
					unk_0x33FE981F73CFCB5F(1);
					func_377(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_198), "SPR_sBRONZE", 0);
					unk_0x33FE981F73CFCB5F(0);
					func_371(&(uParam0->f_741.f_198));
				}
				else if (IntToFloat(iLocal_506[iVar0]) > Local_50.f_112[iVar0] || iLocal_506[iVar0] == -1)
				{
					func_369(uParam0[iVar3 /*9*/], 1);
					func_369(uParam0[9 /*9*/], 1);
					func_374(&(uParam0->f_741.f_198), &(uParam0->f_420[16 /*8*/]), 0.0047f, 0.0055f);
					unk_0x33FE981F73CFCB5F(1);
					func_377(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_198), "SC_LB_EMPTY", 0);
					unk_0x33FE981F73CFCB5F(0);
					func_384("SPRRaces", "Empty_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					func_367(uParam0[iVar3 /*9*/]);
				}
				if (IntToFloat(iLocal_506[iVar0]) <= Local_50.f_106[iVar0] && !iLocal_506[iVar0] == -1)
				{
					func_369(uParam0[13 /*9*/], 1);
				}
				else
				{
					(uParam0[13 /*9*/])->f_7 = unk_0xF2DB717A73826179((255f * 0.3f));
				}
				if (IntToFloat(iLocal_506[iVar0]) <= (((Local_50.f_112[iVar0] - Local_50.f_106[iVar0]) / 2f) + Local_50.f_106[iVar0]) && !iLocal_506[iVar0] == -1)
				{
					func_369(uParam0[12 /*9*/], 1);
				}
				else
				{
					(uParam0[12 /*9*/])->f_7 = unk_0xF2DB717A73826179((255f * 0.3f));
				}
				if (IntToFloat(iLocal_506[iVar0]) <= Local_50.f_112[iVar0] && !iLocal_506[iVar0] == -1)
				{
					func_369(uParam0[11 /*9*/], 1);
				}
				else
				{
					(uParam0[11 /*9*/])->f_7 = unk_0xF2DB717A73826179((255f * 0.3f));
				}
				func_384("SPRRaces", "FlightStunt_Bronze_128", uParam0[11 /*9*/], 0, 0, 5, 0);
				func_384("SPRRaces", "FlightStunt_Silver_128", uParam0[12 /*9*/], 0, 0, 5, 0);
				func_384("SPRRaces", "FlightStunt_Gold_128", uParam0[13 /*9*/], 0, 0, 5, 0);
				func_378(&(uParam0->f_741.f_198));
				if (Global_97353.f_17297.f_6[Global_96383] > 0f)
				{
					func_374(&(uParam0->f_741.f_198), &(uParam0->f_420[17 /*8*/]), 0.0047f, 0.0055f);
					unk_0x33FE981F73CFCB5F(1);
					func_362(&(uParam0->f_316[9 /*2*/]), &(uParam0->f_741.f_198), unk_0xF34EE736CF047844((Global_97353.f_17297.f_6[Global_96383] * 1000f)), 6, "", 0, 1);
					unk_0x33FE981F73CFCB5F(0);
					func_371(&(uParam0->f_741.f_198));
				}
				else
				{
					func_374(&(uParam0->f_741.f_198), &(uParam0->f_420[17 /*8*/]), 0.0047f, 0.0055f);
					unk_0x33FE981F73CFCB5F(1);
					func_377(&(uParam0->f_316[9 /*2*/]), &(uParam0->f_741.f_198), "SC_LB_EMPTY", 0);
					unk_0x33FE981F73CFCB5F(0);
					func_371(&(uParam0->f_741.f_198));
				}
				func_377(&(uParam0->f_316[6 /*2*/]), &(uParam0->f_741.f_198), "SPR_RTIME", 0);
				if (Local_50.f_18[Global_96383] > 0f)
				{
					func_374(&(uParam0->f_741.f_198), &(uParam0->f_420[18 /*8*/]), 0.0047f, 0.0055f);
					unk_0x33FE981F73CFCB5F(1);
					func_362(&(uParam0->f_316[7 /*2*/]), &(uParam0->f_741.f_198), unk_0xF34EE736CF047844((Local_50.f_18[Global_96383] * 1000f)), 6, "", 0, 1);
					unk_0x33FE981F73CFCB5F(0);
					func_371(&(uParam0->f_741.f_198));
					func_378(&(uParam0->f_741.f_198));
				}
				else
				{
					func_374(&(uParam0->f_741.f_198), &(uParam0->f_420[18 /*8*/]), 0.0047f, 0.0055f);
					unk_0x33FE981F73CFCB5F(1);
					func_372(&(uParam0->f_316[7 /*2*/]), &(uParam0->f_741.f_198), "SC_LB_EMPTY", 0, 1);
					unk_0x33FE981F73CFCB5F(0);
					func_371(&(uParam0->f_741.f_198));
					func_378(&(uParam0->f_741.f_198));
				}
			}
			else
			{
				func_361(&(uParam0->f_420[iVar1 /*8*/]));
				func_243(&(uParam0->f_420[iVar1 /*8*/]), 117, 1);
				func_379(uParam0->f_420[iVar1 /*8*/], 0, 0);
				func_369(uParam0[iVar3 /*9*/], 1);
				switch (Global_97353.f_17297.f_12[iVar0 /*8*/].f_4)
				{
					case 0:
						func_369(uParam0[iVar3 /*9*/], 1);
						func_378(&(uParam0->f_741.f_198));
						break;
					
					case 2:
						break;
					
					case 1:
						if (iVar0 < 5)
						{
							func_378(&(uParam0->f_741.f_198));
							if (Global_97353.f_17297.f_6[iVar0] <= 0f)
							{
								func_251(&Var5, 269f, 0f, 32f, 32f, 0);
								func_250(&Var5, 255, 255, 255, 255);
								Var5.f_1 = (uParam0->f_316[iVar2 /*2*/].f_1 + fLocal_513);
								Var14.f_0 = (Var5.f_0 + fLocal_512);
								if (!bLocal_561)
								{
									func_370(&Var5, 0);
								}
								func_369(&Var5, 1);
								func_384("Shared", "NewStar_32", &Var5, 0, 0, 5, 0);
								if (!bLocal_561)
								{
									func_368(&Var14, &(uParam0->f_741.f_198));
								}
							}
						}
						break;
				}
				if (iVar0 == Global_96383)
				{
					func_375(&(uParam0->f_741.f_198));
				}
				func_371(&(uParam0->f_741.f_198));
				func_377(&Var14, &(uParam0->f_741.f_198), &(Local_50.f_24[iVar0 /*8*/]), 0);
				func_378(&(uParam0->f_741.f_198));
				func_369(uParam0[iVar3 /*9*/], 1);
			}
			if (Global_97353.f_17297.f_12[iVar0 /*8*/].f_4 == 0)
			{
				func_384("Shared", "Locked_Icon_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
			}
			else if (IntToFloat(iLocal_506[iVar0]) > 0f)
			{
				if (IntToFloat(iLocal_506[iVar0]) <= Local_50.f_106[iVar0] && IntToFloat(iLocal_506[iVar0]) <= Local_50.f_112[iVar0])
				{
					func_360(uParam0[iVar3 /*9*/]);
					func_384("Shared", "MedalDot_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
				}
				else if (IntToFloat(iLocal_506[iVar0]) <= (((Local_50.f_112[iVar0] - Local_50.f_106[iVar0]) / 2f) + Local_50.f_106[iVar0]))
				{
					func_359(uParam0[iVar3 /*9*/]);
					func_384("Shared", "MedalDot_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
				}
				else if (IntToFloat(iLocal_506[iVar0]) <= Local_50.f_112[iVar0])
				{
					func_357(uParam0[iVar3 /*9*/]);
					func_384("Shared", "MedalDot_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
				}
			}
			iVar1++;
			iVar2++;
			iVar3++;
		}
		iVar0++;
	}
	iVar16 = 0;
	if (func_356(0))
	{
		unk_0x380F22FED8D528A4(joaat("sp0_flying_ability"), &iVar16, -1);
	}
	else if (func_356(1))
	{
		unk_0x380F22FED8D528A4(joaat("sp1_flying_ability"), &iVar16, -1);
	}
	else if (func_356(2))
	{
		unk_0x380F22FED8D528A4(joaat("sp2_flying_ability"), &iVar16, -1);
	}
	if (iVar16 < 40)
	{
		func_374(&(uParam0->f_741.f_198), &(uParam0->f_420[15 /*8*/]), 0.0047f, 0.0055f);
		unk_0x17D48E7FE375FDFA(1);
		Var17 = { uParam0->f_316[22 /*2*/] };
		Var19 = { uParam0->f_741.f_198 };
		if (!bLocal_561)
		{
			Var19.f_9 = (Var19.f_9 - 0.08f);
			func_368(&Var17, &Var19);
		}
		if (bLocal_561)
		{
			func_354(&(uParam0->f_420[14 /*8*/]), "FLY_STAT_WARN", &Var17, &Var19, 27f, 2f, 5, 159f);
		}
		else
		{
			func_354(&(uParam0->f_420[14 /*8*/]), "FLY_STAT_WARN", &Var17, &Var19, 18f, 1.55f, 5, 106f);
		}
		func_379(uParam0->f_420[14 /*8*/], 0, 0);
		func_384("Shared", "Info_Icon_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
		func_377(&(uParam0->f_316[22 /*2*/]), &(uParam0->f_741.f_198), "FLY_STAT_WARN", 0);
		func_371(&(uParam0->f_741.f_198));
	}
	StringCopy(&Var30, "SPR_DESC_", 16);
	StringIntConCat(&Var30, Global_96383 + 1, 16);
	func_369(uParam0[7 /*9*/], 1);
	func_384("SPRRaces", &Var30, uParam0[7 /*9*/], 0, 0, 5, 0);
	func_374(&(uParam0->f_741.f_198), &(uParam0->f_420[25 /*8*/]), 0.0047f, 0.0055f);
	unk_0x17D48E7FE375FDFA(1);
	StringCopy(&cVar34, "SPR_DESC_", 16);
	if (bVar4)
	{
		StringIntConCat(&cVar34, Global_96383 + 1, 16);
	}
	else
	{
		StringIntConCat(&cVar34, 0, 16);
	}
	Var38 = { uParam0->f_316[16 /*2*/] };
	Var40 = { uParam0->f_741.f_198 };
	if (!bLocal_561)
	{
		Var40.f_9 = (Var40.f_9 - 0.108f);
		func_368(&Var38, &Var40);
	}
	if (bLocal_561)
	{
		func_354(&(uParam0->f_420[25 /*8*/]), &cVar34, &Var38, &Var40, 27f, 2f, 5, 159f);
	}
	else
	{
		func_354(&(uParam0->f_420[25 /*8*/]), &cVar34, &Var38, &Var40, 18f, 1.55f, 5, 106f);
	}
	func_379(uParam0->f_420[25 /*8*/], 0, 0);
	func_377(&(uParam0->f_316[16 /*2*/]), &(uParam0->f_741.f_198), &cVar34, 0);
	func_371(&(uParam0->f_741.f_198));
	func_378(&(uParam0->f_741.f_198));
	func_377(&(uParam0->f_316[4 /*2*/]), &(uParam0->f_741.f_198), "SPR_AWARDS_SUB", 0);
	func_377(&(uParam0->f_316[8 /*2*/]), &(uParam0->f_741.f_198), "SPR_BEST", 0);
	func_375(&(uParam0->f_741.f_198));
	func_379(uParam0->f_420[22 /*8*/], 0, 0);
	func_374(&(uParam0->f_741.f_198), &(uParam0->f_420[22 /*8*/]), 0, 0);
	func_362(&(uParam0->f_316[13 /*2*/]), &(uParam0->f_741.f_198), unk_0xF34EE736CF047844(Local_50.f_112[Global_96383]) * 1000, 6, "", 1, 0);
	func_371(&(uParam0->f_741.f_198));
	func_379(uParam0->f_420[23 /*8*/], 0, 0);
	func_374(&(uParam0->f_741.f_198), &(uParam0->f_420[23 /*8*/]), 0, 0);
	func_362(&(uParam0->f_316[14 /*2*/]), &(uParam0->f_741.f_198), unk_0xF34EE736CF047844((((Local_50.f_112[Global_96383] - Local_50.f_106[Global_96383]) / 2f) + Local_50.f_106[Global_96383])) * 1000, 6, "", 1, 0);
	func_371(&(uParam0->f_741.f_198));
	func_379(uParam0->f_420[24 /*8*/], 0, 0);
	func_374(&(uParam0->f_741.f_198), &(uParam0->f_420[24 /*8*/]), 0, 0);
	func_362(&(uParam0->f_316[15 /*2*/]), &(uParam0->f_741.f_198), unk_0xF34EE736CF047844(Local_50.f_106[Global_96383]) * 1000, 6, "", 1, 0);
	func_371(&(uParam0->f_741.f_198));
	func_378(&(uParam0->f_741.f_198));
}

float func_354(var uParam0, char* sParam1, float fParam2, var uParam3, float fParam4, float fParam5, int iParam6, float fParam7)
{
	int iVar0;
	int iVar1;
	
	func_355(uParam3, 0);
	unk_0xF322BD22FFF9BDBB(sParam1);
	iVar0 = unk_0xD1CD7D4DF474BD45(*fParam2, fParam2->f_1);
	iVar1 = 720;
	if (!unk_0x7A821A102AEDC6EC())
	{
		iVar1 = 480;
	}
	uParam0->f_3 = func_247(((unk_0xBBDA792448DB5A89(iVar0) * fParam4) - fParam5), iVar1);
	uParam0->f_1 = func_247(((fParam7 + ((unk_0xBBDA792448DB5A89(iParam6) + (unk_0xBBDA792448DB5A89(iVar0) * 0.5f)) * fParam4)) - (fParam5 * 0.5f)), iVar1);
	return 0f;
}

void func_355(var uParam0, bool bParam1)
{
	unk_0x031ABF27ACAA1595(*uParam0);
	if (!uParam0->f_8 == 0f || !uParam0->f_9 == 0f)
	{
		unk_0x4C5BE63E1D2CAFE8(uParam0->f_8, uParam0->f_9);
	}
	unk_0x4170B650590B3B00(uParam0->f_1, uParam0->f_2);
	unk_0x1844BFD606087D68(uParam0->f_3, uParam0->f_4, uParam0->f_5, uParam0->f_6);
	switch (uParam0->f_7)
	{
		case 0:
			break;
		
		case 1:
			unk_0x3088A410D447F2C2();
			unk_0xFB83286FAFA8DD26();
			break;
		
		case 3:
			unk_0xFB83286FAFA8DD26();
			break;
		
		case 2:
			unk_0x3088A410D447F2C2();
			break;
	}
	if (bParam1)
	{
		unk_0xCFCC78391C8B3814(4);
	}
}

bool func_356(int iParam0)
{
	func_150();
	return iParam0 == Global_97353.f_1729.f_539.f_3213;
}

void func_357(var uParam0)
{
	func_358(uParam0, 107);
}

void func_358(var uParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0x39F91E7F4F162E9C(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_4 = uVar0;
	uParam0->f_5 = uVar1;
	uParam0->f_6 = uVar2;
}

void func_359(var uParam0)
{
	func_358(uParam0, 108);
}

void func_360(var uParam0)
{
	func_358(uParam0, 109);
}

void func_361(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 128;
}

void func_362(var uParam0, var uParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	char* sVar0;
	
	if (func_365())
	{
		func_355(uParam1, 0);
		unk_0x33FE981F73CFCB5F(iParam6);
		unk_0xBE5261939FBECB8C(iParam5);
		if (func_50(sParam4))
		{
			sVar0 = "STRING";
		}
		else
		{
			sVar0 = sParam4;
		}
		unk_0x44507FCF2678B557(sVar0);
		unk_0x3451E7FFDF0EF375(iParam2, iParam3);
		unk_0xC915BBFBCA1E5AB8(func_364(*uParam0), func_363(uParam0->f_1), 0);
	}
}

float func_363(float fParam0)
{
	return (fParam0 + fLocal_13);
}

float func_364(float fParam0)
{
	return (fParam0 + fLocal_12);
}

int func_365()
{
	if (func_366())
	{
		return 1;
	}
	if (unk_0xF5472C80DF2FF847())
	{
		return 0;
	}
	if (unk_0x02F39BEFE7B88D00() || unk_0x0CECCC63FFA2EF24())
	{
		return 0;
	}
	if (unk_0x1C9921B2ED74B50E())
	{
		return 0;
	}
	return 1;
}

bool func_366()
{
	return Global_1312440;
}

void func_367(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 255;
}

void func_368(float fParam0, var uParam1)
{
	*fParam0 = (((*fParam0 - 0.5f) * 1.33f) + 0.5f);
	uParam1->f_8 = (((uParam1->f_8 - 0.5f) * 1.33f) + 0.5f);
	uParam1->f_9 = (((uParam1->f_9 - 0.5f) * 1.33f) + 0.5f);
}

void func_369(float fParam0, int iParam1)
{
	fParam0->f_4 = 255;
	fParam0->f_5 = 255;
	fParam0->f_6 = 255;
	if (iParam1 == 1)
	{
		fParam0->f_7 = 255;
	}
}

void func_370(float fParam0, bool bParam1)
{
	if (!bParam1)
	{
		*fParam0 = (((*fParam0 - 0.5f) * 1.33f) + 0.5f);
	}
	fParam0->f_2 = (fParam0->f_2 * 1.33f);
}

void func_371(var uParam0)
{
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
}

void func_372(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)
{
	var uVar0;
	
	uVar0 = sParam2;
	if (!func_50(uVar0))
	{
		if (func_365())
		{
			func_355(uParam1, 0);
			unk_0x33FE981F73CFCB5F(iParam4);
			unk_0xBE5261939FBECB8C(iParam3);
			func_373(func_364(*uParam0), func_363(uParam0->f_1), uVar0, 0);
		}
	}
}

void func_373(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0x44507FCF2678B557(uParam2);
	unk_0xC915BBFBCA1E5AB8(uParam0, uParam1, iParam3);
}

void func_374(var uParam0, var uParam1, float fParam2, float fParam3)
{
	uParam0->f_8 = (*uParam1 - (uParam1->f_2 / 2f));
	uParam0->f_9 = (*uParam1 + (uParam1->f_2 / 2f));
	uParam0->f_8 = (uParam0->f_8 + fParam2);
	uParam0->f_9 = (uParam0->f_9 - fParam3);
}

void func_375(var uParam0)
{
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	func_376(uParam0, 2);
}

void func_376(var uParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0x39F91E7F4F162E9C(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_3 = uVar0;
	uParam0->f_4 = uVar1;
	uParam0->f_5 = uVar2;
}

void func_377(float fParam0, var uParam1, char* sParam2, bool bParam3)
{
	if (bParam3)
	{
		unk_0xCFCC78391C8B3814(1);
	}
	func_372(fParam0, uParam1, sParam2, 0, 0);
}

void func_378(var uParam0)
{
	func_376(uParam0, 1);
}

void func_379(struct<8> Param0, int iParam8, int iParam9)
{
	struct<8> Var0;
	
	Var0 = { Param0 };
	switch (iParam8)
	{
		case 2:
			func_383(&Var0);
			break;
		
		case 1:
			func_382(&Var0);
			break;
		
		case 3:
			func_381(&Var0);
			break;
		
		case 4:
			func_380(&Var0);
			break;
	}
	if (func_365())
	{
		if (iParam9 == 1)
		{
			unk_0x405224591DF02025(func_364(Var0.f_0), func_363(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, 0);
		}
		else
		{
			unk_0x405224591DF02025(func_364(Var0.f_0), func_363(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, 0);
		}
	}
}

void func_380(var uParam0)
{
	uParam0->f_4 = 200;
	uParam0->f_5 = 20;
	uParam0->f_6 = 20;
	uParam0->f_7 = 204;
}

void func_381(var uParam0)
{
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = 255;
}

void func_382(var uParam0)
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_383(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 150;
}

void func_384(char* sParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<9> Var0;
	
	Var0 = { *fParam2 };
	switch (iParam4)
	{
		case 0:
			func_391(&Var0);
			break;
		
		case 1:
			func_390(&Var0);
			break;
		
		case 5:
			func_389(&Var0);
			break;
		
		case 6:
			func_388(&Var0);
			break;
		
		case 7:
			func_387(&Var0);
			break;
		
		case 8:
			func_386(&Var0);
			break;
		
		case 9:
			func_385(&Var0);
			break;
	}
	if (func_365())
	{
		unk_0xCFCC78391C8B3814(iParam5);
		if (iParam3 == 1)
		{
			unk_0xC9884ECADE94CB34(sParam0, sParam1, func_364(Var0.f_0), func_363(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		else
		{
			unk_0xC9884ECADE94CB34(sParam0, sParam1, func_364(Var0.f_0), func_363(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		unk_0xCFCC78391C8B3814(4);
	}
}

void func_385(var uParam0)
{
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
}

void func_386(var uParam0)
{
	uParam0->f_7 = 2;
}

void func_387(var uParam0)
{
	uParam0->f_7 = 5;
}

void func_388(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
}

void func_389(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
}

void func_390(var uParam0)
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_391(var uParam0)
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
}

int func_392(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_502 == 1)
	{
		return 1;
	}
	if (iLocal_503)
	{
		return 0;
	}
	if (unk_0x83666F9FB8FEBD4B() < 500)
	{
		return 1;
	}
	if (bLocal_501)
	{
		if (unk_0x3249D2128D293FA5(2, 201))
		{
			iLocal_495 = unk_0xC488DC56F57F2505();
			unk_0xB906B139171B1845(iLocal_495, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			iLocal_502 = 1;
			iLocal_503 = 1;
			*uParam0 = 0;
			return 1;
		}
		else if (unk_0x3249D2128D293FA5(2, 202))
		{
			iLocal_495 = unk_0xC488DC56F57F2505();
			unk_0xB906B139171B1845(iLocal_495, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			unk_0x0BFC2C61FB5B6CA1(1);
			func_515(&(Local_50.f_119));
			iLocal_502 = 1;
		}
		else
		{
			return 1;
		}
	}
	else if (unk_0x3249D2128D293FA5(2, 202) || unk_0x3249D2128D293FA5(2, 238))
	{
		iLocal_495 = unk_0xC488DC56F57F2505();
		unk_0xB906B139171B1845(iLocal_495, "QUIT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		func_239(&(Local_50.f_119), 0, 0, 1, 1);
		func_238(&(Local_50.f_119), "FE_HLP29", 2, 201, 1, 1, 0);
		func_238(&(Local_50.f_119), "FE_HLP31", 2, 202, 1, 1, 0);
		func_4(&uLocal_497);
		iLocal_502 = 1;
		unk_0x0BFC2C61FB5B6CA1(1);
		return 1;
	}
	iVar0 = 0;
	if (unk_0xB0FB6CFAA5A1C833() && bLocal_501 == 0)
	{
		if (unk_0xEDE7FEC0B20713DC(2))
		{
			Global_2543381 = func_396(0.201f, 0.222f, 0.198f, 0.0375f, 0.034f, 5, 255, 0, 1);
			func_395(0, Global_96383);
			if (func_394())
			{
				if (Global_2543381 == Global_96383)
				{
					iVar0 = 1;
				}
				else
				{
					iLocal_495 = unk_0xC488DC56F57F2505();
					unk_0x1EB7AE7DB1F26D70(iLocal_495, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
					Global_96383 = Global_2543381;
					func_515(&(Local_50.f_119));
				}
			}
		}
	}
	if (unk_0x3249D2128D293FA5(2, 201) || iVar0 == 1)
	{
		iVar0 = 0;
		if (Global_97353.f_17297.f_12[Global_96383 /*8*/].f_4 == 0)
		{
			iLocal_495 = unk_0xC488DC56F57F2505();
			unk_0x1EB7AE7DB1F26D70(iLocal_495, "CANCEL", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
		}
		else
		{
			iLocal_495 = unk_0xC488DC56F57F2505();
			unk_0x1EB7AE7DB1F26D70(iLocal_495, "SELECT", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
			*uParam0 = 1;
			return 0;
		}
	}
	if ((unk_0x3249D2128D293FA5(2, 188) || func_393(0, uParam1)) || unk_0xCCBB0BB9790E1F47(2, 241))
	{
		iVar1 = (Global_96383 - 1);
		if (iVar1 < 0)
		{
			iVar1 = 4;
		}
		iLocal_495 = unk_0xC488DC56F57F2505();
		unk_0x1EB7AE7DB1F26D70(iLocal_495, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
		Global_96383 = iVar1;
		func_515(&(Local_50.f_119));
	}
	if ((unk_0x3249D2128D293FA5(2, 187) || func_393(1, uParam1)) || unk_0xCCBB0BB9790E1F47(2, 242))
	{
		iVar2 = Global_96383 + 1;
		if (iVar2 > 4)
		{
			iVar2 = 0;
		}
		iLocal_495 = unk_0xC488DC56F57F2505();
		unk_0x1EB7AE7DB1F26D70(iLocal_495, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
		Global_96383 = iVar2;
		func_515(&(Local_50.f_119));
	}
	return 1;
}

bool func_393(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = unk_0x929BAD36765E37C2(2, 195);
	iVar2 = unk_0x929BAD36765E37C2(2, 196);
	if (unk_0x0C214D5B8A38C828(iVar1) < 28 && unk_0x0C214D5B8A38C828(iVar2) < 28)
	{
		*uParam1 = 1;
		uParam1->f_1 = 0;
		return 0;
	}
	if (unk_0x4F67E8ECA7D3F667() < uParam1->f_1 + 250)
	{
		*uParam1 = 0;
		return 0;
	}
	else
	{
		*uParam1 = 1;
	}
	if (!*uParam1)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			bVar0 = iVar2 < 100;
			break;
		
		case 1:
			bVar0 = iVar2 > 156;
			break;
		
		case 2:
			bVar0 = iVar1 < 100;
			break;
		
		case 3:
			bVar0 = iVar1 > 156;
			break;
	}
	if (bVar0)
	{
		uParam1->f_1 = unk_0x4F67E8ECA7D3F667();
		*uParam1 = 0;
	}
	return bVar0;
}

int func_394()
{
	if (unk_0x3653C46DD33107D5(2))
	{
		if (Global_2543381 > -1)
		{
			if (unk_0xCCBB0BB9790E1F47(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_395(int iParam0, var uParam1)
{
	if (!unk_0x3653C46DD33107D5(2))
	{
		return 0;
	}
	if (unk_0x535384D6067BA42E() || unk_0xF0451C6FF481E814())
	{
		return 0;
	}
	unk_0xF12E4CCAF249DC10();
	if (Global_2543381 == -6)
	{
		unk_0x7F5858AAB5A58CCE(4);
		if (iParam0 && unk_0x2503EB2EA811EC9A(2, 237))
		{
			return 1;
		}
		else
		{
			Global_2543381 = -1;
			return 0;
		}
	}
	if (((Global_2543381 > -1 || Global_2543381 == -3) || Global_2543381 == -2) || unk_0xA6CF4467861EF45A())
	{
		unk_0x7F5858AAB5A58CCE(1);
		return 0;
	}
	if (Global_2543381 == -1 && iParam0)
	{
		if (unk_0x2503EB2EA811EC9A(2, 237))
		{
			unk_0x7F5858AAB5A58CCE(4);
			Global_2543381 = -6;
			return 1;
		}
		else
		{
			unk_0x7F5858AAB5A58CCE(3);
			return 0;
		}
	}
	unk_0x7F5858AAB5A58CCE(1);
	return 0;
}

int func_396(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, bool bParam7, bool bParam8)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	
	iVar7 = -1;
	if (!unk_0x3653C46DD33107D5(2))
	{
		return -1;
	}
	unk_0x562F5D788AF3FA80(2, 200, 1);
	unk_0xF12E4CCAF249DC10();
	if (bParam8)
	{
		if (!unk_0x7A821A102AEDC6EC())
		{
			fParam0 = (((fParam0 - 0.5f) * 1.33f) + 0.5f);
			fParam2 = (fParam2 * 1.33f);
		}
	}
	if (bParam7)
	{
		unk_0x3DBF4ED80996A17A(76, 84);
		unk_0xEACE371867DDB554(-0.05f, -0.05f, 0f, 0f);
		fVar5 = fParam0;
		fVar6 = fParam1;
		unk_0xB122338EDDC15358(fParam0, fParam1, &fParam0, &fParam1);
		unk_0xA2050119A0AD6EF1();
	}
	fVar0 = (fParam0 + fParam2);
	fVar1 = (fParam1 + (fParam3 * IntToFloat(iParam5)));
	fVar2 = unk_0x51790FCCF27A8664(2, 239);
	fVar3 = unk_0x51790FCCF27A8664(2, 240);
	if (((fVar2 >= fParam0 && fVar2 <= fVar0) && fVar3 >= fParam1) && fVar3 <= fVar1)
	{
		fVar4 = (fVar3 - fParam1);
		iVar7 = unk_0xF34EE736CF047844((fVar4 / fParam3));
		if (bParam7)
		{
			unk_0x3DBF4ED80996A17A(76, 84);
			unk_0xEACE371867DDB554(-0.05f, -0.05f, 0f, 0f);
			func_397(fVar5, (fVar6 + (IntToFloat(iVar7) * fParam3)), fParam2, fParam4, 255, 255, 255, iParam6);
			unk_0xA2050119A0AD6EF1();
		}
		else
		{
			func_397(fParam0, (fParam1 + (IntToFloat(iVar7) * fParam3)), fParam2, fParam4, 255, 255, 255, iParam6);
		}
		return iVar7;
	}
	return -1;
}

void func_397(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, var uParam7)
{
	unk_0x405224591DF02025((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, uParam7, 0);
}

int func_398()
{
	int iVar0;
	
	switch (iLocal_496)
	{
		case 0:
			unk_0x0BFC2C61FB5B6CA1(1);
			unk_0x7C11D0C2EFACD80D("SP_SPR", 3);
			unk_0xC1BA29DF5631B0F8("SPRRaces", 0);
			unk_0xC1BA29DF5631B0F8("MPHUD", 0);
			iLocal_496 = 1;
			break;
		
		case 1:
			if (unk_0xA25C10B66B1AA911("SP_SPR", 3))
			{
				if (unk_0x54D6900929CCF162("SPRRaces"))
				{
					if (unk_0x54D6900929CCF162("MPHUD"))
					{
						iLocal_496 = 2;
					}
				}
			}
			break;
		
		case 2:
			unk_0x6215C0F9FFF76BAD(&(Local_50.f_119));
			Local_50.f_119 = 0;
			func_515(&(Local_50.f_119));
			if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
			{
				unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 0, 512);
			}
			func_124(1);
			unk_0xD705CB75AC55D602(1);
			unk_0x96F78A6A075D55D9(Local_50.f_1, 4);
			func_349();
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Local_50.f_11)
			{
				iLocal_506[iVar0] = -1;
				iVar0++;
			}
			func_402(&uLocal_562);
			func_399();
			unk_0x4102732DF6B4005F("MinigameTransitionIn", 0, 1);
			iLocal_496 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_399()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_97353.f_17297.f_12[iVar0 /*8*/] = { func_401(iVar0) };
		MemCopy(&(Local_50.f_24[iVar0 /*8*/]), {Global_97353.f_17297.f_12[iVar0 /*8*/]}, 8);
		Local_50.f_106[iVar0] = func_400(iVar0);
		Local_50.f_112[iVar0] = func_22(iVar0);
		if (iVar0 < (5 - 1))
		{
			if (Global_97353.f_17297.f_6[iVar0] > Local_50.f_112[iVar0] || Global_97353.f_17297.f_6[iVar0] <= 0f)
			{
				Global_97353.f_17297.f_12[iVar0 + 1 /*8*/].f_4 = 0;
			}
			else
			{
				Global_97353.f_17297.f_12[iVar0 + 1 /*8*/].f_4 = 1;
			}
		}
		iVar0++;
	}
	Global_97353.f_17297.f_12[0 /*8*/].f_4 = 1;
}

float func_400(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 70f;
			break;
		
		case 1:
			return 75f;
			break;
		
		case 2:
			return 72f;
			break;
		
		case 3:
			return 120f;
			break;
		
		case 4:
			return 115f;
			break;
	}
	return -1f;
}

struct<4> func_401(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "BRIDGEBINGE", 16);
			break;
		
		case 1:
			StringCopy(&Var0, "VINEWOOD", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "BRIDGEWORK", 16);
			break;
		
		case 3:
			StringCopy(&Var0, "AIRPORT", 16);
			break;
		
		case 4:
			StringCopy(&Var0, "ALTITUDE", 16);
			break;
	}
	return Var0;
}

void func_402(var uParam0)
{
	func_405();
	bLocal_561 = unk_0x7A821A102AEDC6EC();
	func_278(uParam0);
	func_256(&(uParam0->f_741));
	func_403(uParam0);
}

void func_403(var uParam0)
{
	bool bVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	
	bVar0 = unk_0x7A821A102AEDC6EC();
	func_255(&(uParam0->f_316[0 /*2*/]), 262f, (71f - func_404(0.00278f, 720, 1)), 1);
	func_255(&(uParam0->f_316[1 /*2*/]), (257f + 127f), (125f - func_404(0.00417f, 720, 1)), 1);
	func_255(&(uParam0->f_316[2 /*2*/]), (513f + 127f), (125f - func_404(0.00417f, 720, 1)), 1);
	func_255(&(uParam0->f_316[3 /*2*/]), (769f + 127f), (125f - func_404(0.00417f, 720, 1)), 1);
	func_255(&(uParam0->f_316[17 /*2*/]), (257f + func_254(0.0047f, 1280, 1)), 162f, 1);
	func_255(&(uParam0->f_316[18 /*2*/]), (257f + func_254(0.0047f, 1280, 1)), 189f, 1);
	func_255(&(uParam0->f_316[19 /*2*/]), (257f + func_254(0.0047f, 1280, 1)), 216f, 1);
	func_255(&(uParam0->f_316[20 /*2*/]), (257f + func_254(0.0047f, 1280, 1)), 243f, 1);
	func_255(&(uParam0->f_316[21 /*2*/]), (257f + func_254(0.0047f, 1280, 1)), 270f, 1);
	func_255(&(uParam0->f_316[22 /*2*/]), (257f + func_254(0.0047f, 1280, 1)), 297f, 1);
	func_255(&(uParam0->f_316[16 /*2*/]), (513f + func_254(0.0047f, 1280, 1)), (299f - func_404(0.00278f, 720, 1)), 1);
	func_255(&(uParam0->f_316[4 /*2*/]), (769f + func_254(0.0047f, 1280, 1)), 297f, 1);
	func_255(&(uParam0->f_316[5 /*2*/]), 769f, 297f, 1);
	func_255(&(uParam0->f_316[8 /*2*/]), (769f + func_254(0.0047f, 1280, 1)), 351f, 1);
	func_255(&(uParam0->f_316[9 /*2*/]), 324f, 351f, 1);
	func_255(&(uParam0->f_316[6 /*2*/]), (769f + func_254(0.0047f, 1280, 1)), (324f - func_404(0.00278f, 720, 1)), 1);
	func_255(&(uParam0->f_316[7 /*2*/]), 324f, (324f - func_404(0.00278f, 720, 1)), 1);
	func_255(&(uParam0->f_316[15 /*2*/]), 810f, 459f, 1);
	func_255(&(uParam0->f_316[14 /*2*/]), 896f, 459f, 1);
	func_255(&(uParam0->f_316[13 /*2*/]), 982f, 459f, 1);
	func_251(uParam0[0 /*9*/], 257f, 55f, 766f, 105f, 1);
	unk_0x39F91E7F4F162E9C(117, &uVar1, &uVar2, &uVar3, &uVar4);
	func_250(uParam0[0 /*9*/], uVar1, uVar2, uVar3, uVar4);
	func_251(uParam0[1 /*9*/], 496f, 171f, 32f, 32f, 0);
	func_250(uParam0[1 /*9*/], 255, 255, 255, 255);
	func_251(uParam0[2 /*9*/], 496f, 198f, 32f, 32f, 0);
	func_250(uParam0[2 /*9*/], 255, 255, 255, 255);
	func_251(uParam0[3 /*9*/], 496f, 225f, 32f, 32f, 0);
	func_250(uParam0[3 /*9*/], 255, 255, 255, 255);
	func_251(uParam0[4 /*9*/], 496f, 252f, 32f, 32f, 0);
	func_250(uParam0[4 /*9*/], 255, 255, 255, 255);
	func_251(uParam0[5 /*9*/], 496f, 279f, 32f, 32f, 0);
	func_250(uParam0[5 /*9*/], 255, 255, 255, 255);
	func_251(uParam0[6 /*9*/], (486f + func_254(0.0047f, 1280, 1)), 310f, 32f, 32f, 0);
	func_250(uParam0[6 /*9*/], 255, 255, 255, 255);
	func_251(uParam0[7 /*9*/], 640f, 224f, 256f, 256f, 0);
	func_250(uParam0[7 /*9*/], 255, 255, 255, 255);
	func_251(uParam0[9 /*9*/], 896f, 223f, 128f, 128f, 0);
	func_250(uParam0[9 /*9*/], 255, 255, 255, 255);
	func_251(uParam0[13 /*9*/], 770.5f, 374.5f, 80f, 80f, 1);
	func_250(uParam0[13 /*9*/], 255, 255, 255, 255);
	func_251(uParam0[12 /*9*/], 856f, 374.5f, 80f, 80f, 1);
	func_250(uParam0[12 /*9*/], 255, 255, 255, 255);
	func_251(uParam0[11 /*9*/], 941.5f, 374.5f, 80f, 80f, 1);
	func_250(uParam0[11 /*9*/], 255, 255, 255, 255);
	func_245(&(uParam0->f_420[3 /*8*/]), 257f, 114f, 254f, 5f, 1);
	func_244(&(uParam0->f_420[3 /*8*/]), 70, 70, 130, 255);
	func_245(&(uParam0->f_420[4 /*8*/]), 513f, 114f, 254f, 5f, 1);
	func_244(&(uParam0->f_420[4 /*8*/]), 70, 70, 130, 255);
	func_245(&(uParam0->f_420[5 /*8*/]), 769f, 114f, 254f, 5f, 1);
	func_244(&(uParam0->f_420[5 /*8*/]), 70, 70, 130, 255);
	func_245(&(uParam0->f_420[0 /*8*/]), 257f, 119f, 254f, 26f, 1);
	func_243(&(uParam0->f_420[0 /*8*/]), 1, 1);
	func_245(&(uParam0->f_420[1 /*8*/]), 513f, 119f, 254f, 26f, 1);
	func_243(&(uParam0->f_420[1 /*8*/]), 1, 1);
	func_245(&(uParam0->f_420[2 /*8*/]), 769f, 119f, 254f, 26f, 1);
	func_243(&(uParam0->f_420[2 /*8*/]), 1, 1);
	func_245(&(uParam0->f_420[7 /*8*/]), 513f, 159f, 254f, 133f, 1);
	func_243(&(uParam0->f_420[7 /*8*/]), 117, 1);
	func_245(&(uParam0->f_420[8 /*8*/]), 769f, 159f, 254f, 133f, 1);
	func_243(&(uParam0->f_420[8 /*8*/]), 117, 1);
	func_245(&(uParam0->f_420[9 /*8*/]), 257f, 159f, 254f, 25f, 1);
	func_243(&(uParam0->f_420[9 /*8*/]), 117, 1);
	func_245(&(uParam0->f_420[10 /*8*/]), 257f, 186f, 254f, 25f, 1);
	func_243(&(uParam0->f_420[10 /*8*/]), 117, 1);
	func_245(&(uParam0->f_420[11 /*8*/]), 257f, 213f, 254f, 25f, 1);
	func_243(&(uParam0->f_420[11 /*8*/]), 117, 1);
	func_245(&(uParam0->f_420[12 /*8*/]), 257f, 240f, 254f, 25f, 1);
	func_243(&(uParam0->f_420[12 /*8*/]), 117, 1);
	func_245(&(uParam0->f_420[13 /*8*/]), 257f, 267f, 254f, 25f, 1);
	func_243(&(uParam0->f_420[13 /*8*/]), 117, 1);
	func_245(&(uParam0->f_420[26 /*8*/]), 257f, 294f, 254f, 2f, 1);
	func_243(&(uParam0->f_420[26 /*8*/]), 1, 1);
	func_245(&(uParam0->f_420[14 /*8*/]), 257f, 294f, 254f, 75f, 1);
	func_243(&(uParam0->f_420[14 /*8*/]), 117, 1);
	func_245(&(uParam0->f_420[15 /*8*/]), 257f, 294f, (254f - 32f), 75f, 1);
	func_243(&(uParam0->f_420[15 /*8*/]), 1, 1);
	func_245(&(uParam0->f_420[25 /*8*/]), 513f, 294f, 254f, 133f, 1);
	func_243(&(uParam0->f_420[25 /*8*/]), 117, 1);
	func_245(&(uParam0->f_420[16 /*8*/]), 769f, 294f, 254f, 25f, 1);
	func_243(&(uParam0->f_420[16 /*8*/]), 117, 1);
	func_245(&(uParam0->f_420[17 /*8*/]), 769f, 321f, 254f, 25f, 1);
	func_243(&(uParam0->f_420[17 /*8*/]), 117, 1);
	func_245(&(uParam0->f_420[18 /*8*/]), 769f, 348f, 254f, 25f, 1);
	func_243(&(uParam0->f_420[18 /*8*/]), 117, 1);
	func_245(&(uParam0->f_420[21 /*8*/]), 769f, 375f, 83f, 84f, 1);
	func_243(&(uParam0->f_420[21 /*8*/]), 117, 1);
	func_245(&(uParam0->f_420[20 /*8*/]), 854f, 375f, 84f, 84f, 1);
	func_243(&(uParam0->f_420[20 /*8*/]), 117, 1);
	func_245(&(uParam0->f_420[19 /*8*/]), 940f, 375f, 83f, 84f, 1);
	func_243(&(uParam0->f_420[19 /*8*/]), 117, 1);
	func_245(&(uParam0->f_420[22 /*8*/]), 769f, 456f, 83f, 25f, 1);
	func_243(&(uParam0->f_420[22 /*8*/]), 109, 1);
	func_245(&(uParam0->f_420[23 /*8*/]), 854f, 456f, 84f, 25f, 1);
	func_243(&(uParam0->f_420[23 /*8*/]), 108, 1);
	func_245(&(uParam0->f_420[24 /*8*/]), 940f, 456f, 83f, 25f, 1);
	func_243(&(uParam0->f_420[24 /*8*/]), 107, 1);
	if (!bVar0)
	{
		iVar5 = 0;
		while (iVar5 < 14)
		{
			(*uParam0)[iVar5 /*9*/] = ((((*uParam0)[iVar5 /*9*/] - 0.5f) * 1.33f) + 0.5f);
			(uParam0[iVar5 /*9*/])->f_2 = ((uParam0[iVar5 /*9*/])->f_2 * 1.33f);
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 < 23)
		{
			uParam0->f_316[iVar5 /*2*/] = (((uParam0->f_316[iVar5 /*2*/] - 0.5f) * 1.33f) + 0.5f);
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 < 27)
		{
			uParam0->f_420[iVar5 /*8*/] = (((uParam0->f_420[iVar5 /*8*/] - 0.5f) * 1.33f) + 0.5f);
			uParam0->f_420[iVar5 /*8*/].f_2 = (uParam0->f_420[iVar5 /*8*/].f_2 * 1.33f);
			iVar5++;
		}
	}
	uParam0->f_986 = 1;
}

float func_404(float fParam0, int iParam1, bool bParam2)
{
	var uVar0;
	float fVar1;
	
	if (iParam1 == 0)
	{
		unk_0x66773C92835D0909(&uVar0, &iParam1);
	}
	fVar1 = (fParam0 * IntToFloat(iParam1));
	if (bParam2)
	{
		return unk_0xBBDA792448DB5A89(unk_0xF2DB717A73826179(fVar1));
	}
	return fVar1;
}

void func_405()
{
	int iVar0;
	
	unk_0x8F12E93648A9BBA9();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1838575.f_81[iVar0] = 0;
		iVar0++;
	}
}

void func_406(var uParam0)
{
	int iVar0;
	struct<35> Var1;
	
	(*uParam0)[0] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[2] = 0;
	uParam0->f_4 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = { Var1 };
	uParam0->f_42 = 0;
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_44.f_1 = 0;
	uParam0->f_44.f_2 = 0;
	uParam0->f_44.f_3 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_113[0 /*66*/] = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_113[0 /*66*/].f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_113[0 /*66*/].f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
}

int func_407(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (unk_0x3758E345C82DAFF2())
	{
		if (!iLocal_504)
		{
			iVar0 = 0;
			if (uParam0->f_358[0 /*189*/].f_13 > 0f)
			{
				if (uParam0->f_358[0 /*189*/].f_13 <= Local_50.f_106[Local_50.f_10])
				{
					iVar0 = 1;
				}
				else if (uParam0->f_358[0 /*189*/].f_13 <= (((Local_50.f_112[Local_50.f_10] - Local_50.f_106[Local_50.f_10]) / 2f) + Local_50.f_106[Local_50.f_10]))
				{
					iVar0 = 2;
				}
				else if (uParam0->f_358[0 /*189*/].f_13 <= Local_50.f_112[Local_50.f_10])
				{
					iVar0 = 3;
				}
			}
			if (iVar0 == 0)
			{
			}
			func_435(Local_50.f_10, &(Local_50.f_65[Local_50.f_10 /*8*/]));
			if (bParam1)
			{
				func_432(Local_50.f_10, uParam0->f_358[0 /*189*/].f_13, iVar0);
				iLocal_504 = 1;
				return 1;
			}
			else if (func_408(Local_50.f_10, uParam0->f_358[0 /*189*/].f_13, iVar0))
			{
				iLocal_504 = 1;
				return 1;
			}
		}
	}
	else if (bParam1)
	{
		iLocal_504 = 1;
	}
	return 0;
}

int func_408(int iParam0, float fParam1, int iParam2)
{
	if (Global_1835013.f_1 && !Global_1835013.f_2)
	{
		func_432(iParam0, fParam1, iParam2);
		Global_1835013.f_2 = 1;
	}
	if (func_409(&uLocal_1549))
	{
		Global_1835388 = 1;
		return 1;
	}
	return 0;
}

int func_409(var uParam0)
{
	struct<98> Var0;
	struct<4> Var98;
	struct<37> Var106;
	struct<13> Var175;
	int iVar188;
	
	Var0.f_19.f_1 = 4;
	Var106.f_3 = 32;
	Var106.f_36 = 32;
	if (func_431(uParam0->f_44))
	{
		Var175 = { Global_1835013.f_361 };
	}
	else
	{
		Var175 = { func_430(unk_0x217E9DC48139933D()) };
	}
	switch (Global_1835013)
	{
		case 0:
			if (func_429(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &Var175))
			{
				func_428(&Var98, &(uParam0->f_44));
				Global_1835013.f_142 = uParam0->f_44;
				Global_1835013.f_142.f_1 = unk_0x6DCB4BB58C4D81D8(uParam0->f_44, 0);
				iVar188 = 0;
				while (iVar188 < Global_1835013.f_142.f_1)
				{
					if (!func_427(uParam0->f_44, iVar188))
					{
						if (func_426(uParam0->f_44, 4, iVar188))
						{
							unk_0xF73FBE4845C43B5B(&(Global_1835013.f_142.f_2), iVar188);
						}
						else
						{
							unk_0x7D1D4A3602B6AD4E(&(Global_1835013.f_142.f_2), iVar188);
						}
					}
					iVar188++;
				}
				if (uParam0->f_5 && unk_0xC45B167DA3BDE4EE(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						unk_0x0778FE700D500355(0, &Var0);
						if (Var0.f_97 != Global_1835013.f_142.f_1)
						{
						}
						if (!func_425(Var0))
						{
							Global_1835013.f_4 = 1;
						}
						else
						{
							iVar188 = 0;
							while (iVar188 < Global_1835013.f_142.f_1)
							{
								if (!func_427(uParam0->f_44, iVar188))
								{
									if (func_426(uParam0->f_44, 4, iVar188))
									{
										Global_1835013.f_73.f_36[iVar188] = unk_0x7499B86B7F4CA729(0, iVar188);
										if (Global_1835013.f_73.f_36[iVar188] == -1)
										{
											if (iVar188 > Var0.f_97)
											{
												Global_1835013.f_73.f_36[iVar188] = 0;
											}
										}
									}
									else
									{
										Global_1835013.f_73.f_3[iVar188] = unk_0x51C63F8BCD21FBC3(0, iVar188);
										if (Global_1835013.f_73.f_3[iVar188] == -1f)
										{
											if (iVar188 > Var0.f_97)
											{
												Global_1835013.f_73.f_3[iVar188] = 0f;
											}
										}
									}
								}
								iVar188++;
							}
						}
					}
					else
					{
						Global_1835013.f_4 = 1;
					}
					unk_0x53C229BFA69F10FB();
				}
				else
				{
					Global_1835013.f_4 = 1;
				}
				Global_1835013 = 1;
				func_346(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 1:
			Global_1835013.f_1 = 1;
			if (Global_1835013.f_2)
			{
				func_424();
				if (Global_1835013.f_4)
				{
					if (func_423(uParam0->f_44))
					{
						Global_1835013 = 3;
					}
					else
					{
						Global_1835013 = 2;
					}
				}
				else
				{
					Global_1835013 = 2;
				}
			}
			break;
		
		case 2:
			unk_0x510DE55B9E623A64(&(Global_1835013.f_73), &(Global_1835013.f_142), &(Global_1835013.f_211));
			Global_1835013 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 3:
			Global_1835013.f_211 = { Global_1835013.f_142 };
			Global_1835013 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 4:
			if (unk_0x03A753E2C8458335() && func_422())
			{
				if (func_421())
				{
					Global_1835013 = 99;
				}
				else
				{
					Global_1835013 = 999;
					return 1;
				}
			}
			else
			{
				Global_1835013 = 999;
				return 1;
			}
			break;
		
		case 99:
			if (func_423(uParam0->f_44))
			{
				Global_1835013.f_280 = { Global_1835013.f_142 };
			}
			else
			{
				Var106.f_0 = Global_1835013.f_142;
				Var106.f_1 = Global_1835013.f_142.f_1;
				Var106.f_2 = Global_1835013.f_142.f_2;
				unk_0x510DE55B9E623A64(&Var106, &(Global_1835013.f_142), &(Global_1835013.f_280));
			}
			Global_1835013 = 100;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 100:
			if (func_410(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, &Var175, 1, 1, Global_1835013.f_280.f_36[0], Global_1835013.f_280.f_3[0]))
			{
				func_428(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0xC45B167DA3BDE4EE(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						unk_0x0778FE700D500355(0, &Var0);
						if (unk_0xD3852F22AB713A1F(&(Var0.f_13), ""))
						{
							Global_971494.f_1 = -1;
						}
						else
						{
							Global_971494.f_1 = Var0.f_96;
						}
					}
					else
					{
						Global_971494.f_1 = -1;
					}
					unk_0x53C229BFA69F10FB();
				}
				else
				{
					Global_971494.f_1 = -1;
				}
				Global_1835013 = 999;
				func_346(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 999:
			return 1;
			break;
	}
	return 0;
}

int func_410(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_1835013.f_211.f_36[0];
	uVar1 = Global_1835013.f_211.f_3[0];
	if (bParam6)
	{
		uVar0 = iParam7;
		uVar1 = iParam8;
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_417() && !func_413())
			{
				func_411(*uParam2);
				if (bParam5)
				{
					if (unk_0x4ED6CFDFE8D4131A(Global_1835013.f_142.f_2, 0))
					{
						if (unk_0xA37C444228E03F62(uParam2, uVar0, iParam3))
						{
							*uParam0++;
						}
						else
						{
							*uParam1 = 0;
							*uParam0 = 3;
						}
					}
					else if (unk_0x8DE46E62AF877CA4(uParam2, uVar1, iParam3))
					{
						*uParam0++;
					}
					else
					{
						*uParam1 = 0;
						*uParam0 = 3;
					}
				}
				else if (unk_0x8A0F70B3F7D129E4(uParam2, iParam3, uParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x9C7514AC836E30CD(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0xB7F6F313ECC62919(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_411(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)
{
	Global_1835008 = 1;
	func_412(&(Global_1835008.f_1), 1, 0);
	Global_1835008.f_3 = Param0.f_0;
	Global_1835008.f_4 = Param0.f_1;
}

void func_412(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x03A753E2C8458335() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x6AEB0DF30A9DB9F1();
		}
		else
		{
			*uParam0 = unk_0xCCF575E20D375E1B();
		}
	}
	else
	{
		*uParam0 = unk_0x4F67E8ECA7D3F667();
	}
	uParam0->f_1 = 1;
}

int func_413()
{
	if (unk_0x535384D6067BA42E() && !func_414())
	{
		return 1;
	}
	return 0;
}

bool func_414()
{
	return func_415(unk_0x217E9DC48139933D());
}

int func_415(int iParam0)
{
	switch (func_416(iParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 37:
		case 32:
		case 35:
		case 38:
			return 0;
		
		default:
	}
	return 1;
}

int func_416(int iParam0)
{
	return Global_1582596[iParam0 /*324*/].f_165;
}

int func_417()
{
	if (unk_0x4B5C6625E6EDAF0C() || Global_1835008)
	{
		func_418();
		return 1;
	}
	return 0;
}

void func_418()
{
	if (func_419(&(Global_1835008.f_1), 120000, 1))
	{
		unk_0x0001D353D9327B10(Global_1835008.f_3, Global_1835008.f_4, -1);
		Global_1835008 = 0;
		func_341(&(Global_1835008.f_1));
	}
}

int func_419(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_420(uParam0, bParam2, 0);
	if (unk_0x03A753E2C8458335() && !bParam2)
	{
		if (unk_0x0C214D5B8A38C828(unk_0x720C9CED76527377(unk_0x6AEB0DF30A9DB9F1(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x0C214D5B8A38C828(unk_0x720C9CED76527377(unk_0x4F67E8ECA7D3F667(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_420(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x03A753E2C8458335() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x6AEB0DF30A9DB9F1();
			}
			else
			{
				*uParam0 = unk_0xCCF575E20D375E1B();
			}
		}
		else
		{
			*uParam0 = unk_0x4F67E8ECA7D3F667();
		}
		uParam0->f_1 = 1;
	}
}

bool func_421()
{
	return unk_0x4ED6CFDFE8D4131A(Global_964222.f_8, 1);
}

var func_422()
{
	return Global_2434575.f_3;
}

int func_423(int iParam0)
{
	switch (iParam0)
	{
		case 817:
		case 850:
		case 824:
		case 827:
		case 815:
		case 826:
		case 777:
		case 825:
		case 828:
		case 849:
		case 928:
		case 795:
		case 202:
		case 811:
		case 193:
		case 975:
		case 976:
		case 970:
		case 973:
		case 968:
		case 969:
		case 966:
		case 974:
		case 971:
		case 967:
		case 965:
		case 972:
			return 1;
			break;
	}
	if (iParam0 >= 998 && iParam0 <= 1197)
	{
		return 1;
	}
	return 0;
}

void func_424()
{
	Global_1835013.f_73 = Global_1835013.f_142;
	Global_1835013.f_73.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_73.f_2 = Global_1835013.f_142.f_2;
	Global_1835013.f_211 = Global_1835013.f_142;
	Global_1835013.f_211.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_211.f_2 = Global_1835013.f_142.f_2;
}

bool func_425(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x3D9CFA868F638A8E(&uParam0, 13);
}

int func_426(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == 190)
	{
		if (iParam2 == 0)
		{
			return 0;
		}
	}
	if (iParam0 == 203)
	{
		if (iParam2 == 3 || iParam2 == 6)
		{
			return 0;
		}
	}
	if (iParam0 == 912)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if ((iParam0 == 762 || iParam0 == 822) || iParam0 == 823)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 791)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	if (iParam0 == 780 || iParam0 == 778)
	{
		if (iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 777)
	{
		if (iParam2 == 3 || iParam2 == 7)
		{
			return 0;
		}
	}
	if (iParam0 == 1200)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	iVar0 = unk_0x38AF5C0FC1256A5E(iParam0, iParam1, iParam2);
	switch (iVar0)
	{
		case 1:
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_427(int iParam0, int iParam1)
{
	if (unk_0xFEDAEA149A766AFE(iParam0, 4, iParam1) == 156)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 912:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 780:
			if (iParam1 == 4)
			{
				return 1;
			}
			break;
		
		case 1200:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_428(var uParam0, var uParam1)
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0;
}

int func_429(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_417() && !func_413())
			{
				func_411(*uParam2);
				if (unk_0xAD3A95035D4C67C5(uParam2, uParam3))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x9C7514AC836E30CD(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0xB7F6F313ECC62919(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

struct<13> func_430(int iParam0)
{
	struct<13> Var0;
	
	unk_0xA7E9F04BBC5AF355(iParam0, &Var0, 13);
	return Var0;
}

int func_431(int iParam0)
{
	if (iParam0 == 825 || iParam0 == 828)
	{
		return 1;
	}
	return 0;
}

void func_432(int iParam0, float fParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<6> Var3[3];
	struct<8> Var22[3];
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	if (iParam2 == 1)
	{
		iVar2++;
	}
	else if (iParam2 == 2)
	{
		iVar1++;
	}
	else if (iParam2 == 3)
	{
		iVar0++;
	}
	StringCopy(&(Var22[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var22[1 /*8*/]), "Location", 32);
	StringCopy(&(Var22[2 /*8*/]), "Type", 32);
	StringCopy(&(Var3[0 /*6*/]), "SP", 24);
	switch (iParam0)
	{
		case 0:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_01", 24);
			break;
		
		case 1:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_02", 24);
			break;
		
		case 2:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_03", 24);
			break;
		
		case 3:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_04", 24);
			break;
		
		case 4:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_05", 24);
			break;
	}
	StringCopy(&(Var3[2 /*6*/]), "StuntPlaneRace", 24);
	if (func_434(817, &Var3, &Var22, 3, -1, 1, 0))
	{
		if (iParam2 <= 3 && iParam2 > 0)
		{
			func_433(817, 131, -unk_0x11E019C8F43ACC8A((fParam1 * 100f)) * 10, 0f, 0);
		}
		else
		{
			func_433(817, 131, 0, 0f, 0);
		}
		func_433(817, 96, ((iVar0 * 1 + iVar1 * 2) + iVar2 * 3), 0f, 0);
		func_433(817, 2, unk_0x11E019C8F43ACC8A((fParam1 * 100f)) * 10, 0f, 0);
		func_433(817, 147, unk_0x11E019C8F43ACC8A((fParam1 * 100f)) * 10, 0f, 0);
		func_433(817, 149, 0, 0f, 0);
		func_433(817, 148, 0, 0f, 0);
		func_433(817, 109, 1, 0f, 0);
		func_433(817, 157, iVar0, 0f, 0);
		func_433(817, 158, iVar1, 0f, 0);
		func_433(817, 86, iVar2, 0f, 0);
	}
}

void func_433(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!bParam4)
	{
		unk_0x4DFFD3436F0150C3(iParam1, iParam2, fParam3);
	}
	if (!Global_1835013.f_3)
	{
		Global_1835013.f_142 = iParam0;
		Global_1835013.f_142.f_1 = unk_0x6DCB4BB58C4D81D8(Global_1835013.f_142, 0);
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (iVar1 < Global_1835013.f_142.f_1)
			{
				if (iParam1 == 156)
				{
				}
				else if (func_426(iParam0, 4, iVar1))
				{
					unk_0xF73FBE4845C43B5B(&(Global_1835013.f_142.f_2), iVar1);
				}
				else
				{
					unk_0x7D1D4A3602B6AD4E(&(Global_1835013.f_142.f_2), iVar1);
				}
			}
			else
			{
				unk_0x7D1D4A3602B6AD4E(&(Global_1835013.f_142.f_2), iVar1);
			}
			iVar1++;
		}
		Global_1835013.f_3 = 1;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iParam1 == unk_0xFEDAEA149A766AFE(iParam0, 4, iVar1))
		{
			iVar0 = iVar1;
			iVar1 = 32;
		}
		iVar1++;
	}
	Global_1835013.f_142.f_36[iVar0] = iParam2;
	Global_1835013.f_142.f_3[iVar0] = fParam3;
	if (iParam2 != 0)
	{
		unk_0xF73FBE4845C43B5B(&(Global_1835013.f_142.f_2), iVar0);
	}
	else if (fParam3 != 0f)
	{
		unk_0x7D1D4A3602B6AD4E(&(Global_1835013.f_142.f_2), iVar0);
	}
}

int func_434(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar68;
	struct<13> Var69;
	var uVar82;
	
	if (!unk_0x4C82BD446C34CACD())
	{
	}
	if ((!unk_0xE777A356CA082C32() && (unk_0x14B7FA24A6729F52() || !unk_0xE45678312B6DF7F8())) && unk_0x8E955B3C7BE5C044())
	{
		Var0.f_2.f_1 = 4;
		Var0.f_0 = iParam0;
		if (iParam4 == -1)
		{
			if (unk_0x2C079282730811D0())
			{
				Var69 = { func_430(unk_0x217E9DC48139933D()) };
				if (unk_0x6BB4EDAA3A4778E8(&Var69))
				{
					if (unk_0x534D7C93C5A1A2C4(&uVar82, 35, &Var69))
					{
						Var0.f_1 = uVar82;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar68 = 0;
		while (iVar68 < iParam3)
		{
			Var0.f_2.f_1[iVar68 /*16*/] = { *(uParam2[iVar68 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar68 /*16*/].f_8), {*(uParam1[iVar68 /*6*/])}, 8);
			iVar68++;
		}
		if (bParam5)
		{
			Global_1835013.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (unk_0x03A753E2C8458335() && Global_2434575.f_3)
			{
				unk_0xB1A2ED5194751DDC(&Var0, &(Global_1683768.f_10));
			}
			else
			{
				unk_0x17297D2285FB53A3(&Var0);
			}
		}
		return 1;
	}
	if (unk_0xE777A356CA082C32())
	{
	}
	if (!unk_0x14B7FA24A6729F52())
	{
	}
	if (unk_0xE45678312B6DF7F8())
	{
	}
	if (!unk_0x8E955B3C7BE5C044())
	{
	}
	return 0;
}

void func_435(int iParam0, char[4] cParam1)
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "TRIAL_01", 24);
			cParam1 = "SPTTLB_1";
			break;
		
		case 1:
			StringCopy(&Var0, "TRIAL_02", 24);
			cParam1 = "SPTTLB_2";
			break;
		
		case 2:
			StringCopy(&Var0, "TRIAL_03", 24);
			cParam1 = "SPTTLB_3";
			break;
		
		case 3:
			StringCopy(&Var0, "TRIAL_04", 24);
			cParam1 = "SPTTLB_4";
			break;
		
		case 4:
			StringCopy(&Var0, "TRIAL_05", 24);
			cParam1 = "SPTTLB_5";
			break;
	}
	func_436(&uLocal_1549, 86, &Var0, cParam1, -1, -1, 0, 0);
}

void func_436(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	struct<8> Var0;
	struct<8> Var8;
	int iVar16;
	struct<6> Var17;
	
	if (!unk_0x2CF12F9ACF18F048(sParam2))
	{
		StringCopy(&Var0, sParam2, 32);
	}
	if (bParam7)
	{
	}
	Global_1835390.f_2769 = 0;
	Global_1835390.f_2770 = 0;
	Global_1835390.f_2768 = 0;
	switch (iParam1)
	{
		case 2:
			if (iParam4 == 0)
			{
				if (iParam5 > 0 && !func_439())
				{
					uParam0->f_44 = 826;
				}
				else
				{
					uParam0->f_44 = 815;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_439())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0x2CF12F9ACF18F048(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!unk_0x2CF12F9ACF18F048(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1835390.f_2780.f_26 = -1;
				}
				Global_1835390.f_2780 = 1;
				if (iParam5 <= 0 || func_439())
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 3;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 4;
					Global_1835390.f_2708 = 2;
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					Global_1835390.f_2780.f_28 = 4;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 3;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 2;
					Global_1835390.f_2710[1] = 1;
					Global_1835390.f_2710[2] = 3;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 4;
					Global_1835390.f_2708 = 3;
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 1;
					Global_1835390.f_2780.f_29[2] = 3;
					Global_1835390.f_2780.f_29[3] = 5;
				}
				Global_1835390.f_2779 = 0;
			}
			else if (iParam4 == 1)
			{
				if (iParam5 > 0 && !func_439())
				{
					uParam0->f_44 = 827;
				}
				else
				{
					uParam0->f_44 = 824;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_439())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0x2CF12F9ACF18F048(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_GRCE_L1", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_GRCE_LM", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_GRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_GRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835390.f_2780.f_26 = -1;
					if (!unk_0x2CF12F9ACF18F048(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_GRCE", 32);
						StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_GRCE_NN", 32);
					}
				}
				Global_1835390.f_2780 = 1;
				if (iParam5 <= 0 || func_439())
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 5;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 6;
					Global_1835390.f_2708 = 2;
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					Global_1835390.f_2780.f_28 = 4;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 3;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 2;
					Global_1835390.f_2710[1] = 1;
					Global_1835390.f_2710[2] = 5;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2708 = 3;
					Global_1835390.f_2709 = 6;
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 1;
					Global_1835390.f_2780.f_29[2] = 3;
					Global_1835390.f_2780.f_29[3] = 5;
				}
				Global_1835390.f_2779 = 0;
			}
			else if (iParam4 == 2)
			{
				if (iParam5 > 0 && !func_439())
				{
					uParam0->f_44 = 828;
				}
				else
				{
					uParam0->f_44 = 825;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 2;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (!bParam6)
				{
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "", 32);
				}
				else
				{
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					unk_0x4256B393F5391D41(unk_0x217E9DC48139933D(), &Var17);
					MemCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), {Var17}, 8);
					Global_1835390.f_2780.f_27 = 1;
				}
				if (iParam5 > 0 && !func_439())
				{
					uParam0->f_44.f_3 = 3;
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[2 /*16*/].f_8 = { Var8 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0x2CF12F9ACF18F048(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE_L1", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE_LM", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835390.f_2780.f_26 = -1;
					if (!unk_0x2CF12F9ACF18F048(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE", 32);
						StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE_NN", 32);
					}
				}
				if (iParam5 <= 0 || func_439())
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 3;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 4;
					Global_1835390.f_2708 = 2;
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					Global_1835390.f_2780.f_28 = 4;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 3;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 2;
					Global_1835390.f_2710[1] = 1;
					Global_1835390.f_2710[2] = 3;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2708 = 3;
					Global_1835390.f_2709 = 4;
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 1;
					Global_1835390.f_2780.f_29[2] = 3;
					Global_1835390.f_2780.f_29[3] = 5;
				}
				Global_1835390.f_2779 = 0;
			}
			else if (iParam4 == 10 || iParam4 == 11)
			{
				if (iParam5 > 0 && !func_439())
				{
					uParam0->f_44 = 928;
				}
				else
				{
					uParam0->f_44 = 849;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_439())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0x2CF12F9ACF18F048(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_FRCE_L1", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_FRCE_LM", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_FRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_FRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835390.f_2780.f_26 = -1;
					if (!unk_0x2CF12F9ACF18F048(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_FRCE", 32);
						StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_FRCE_NN", 32);
					}
				}
				Global_1835390.f_2780 = 1;
				if (iParam5 <= 0 || func_439())
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 0;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 0;
					Global_1835390.f_2708 = 1;
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					Global_1835390.f_2780.f_28 = 4;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 5;
				}
				else
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 2;
					Global_1835390.f_2710[1] = 1;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2708 = 2;
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 1;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				Global_1835390.f_2779 = 0;
			}
			else if (iParam4 == 3)
			{
				if (iParam5 > 0 && !func_439())
				{
					uParam0->f_44 = (998 + (iParam5 - 1));
				}
				else
				{
					uParam0->f_44 = 975;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_439())
				{
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0x2CF12F9ACF18F048(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!unk_0x2CF12F9ACF18F048(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1835390.f_2780.f_26 = -1;
				}
				Global_1835390.f_2780 = 1;
				if (iParam5 <= 0 || func_439())
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 3;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 4;
					Global_1835390.f_2708 = 2;
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					Global_1835390.f_2780.f_28 = 4;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 3;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 2;
					Global_1835390.f_2710[1] = 1;
					Global_1835390.f_2710[2] = 3;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2709 = 4;
					Global_1835390.f_2708 = 3;
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 1;
					Global_1835390.f_2780.f_29[2] = 3;
					Global_1835390.f_2780.f_29[3] = 5;
				}
				Global_1835390.f_2779 = 0;
			}
			break;
		
		case 1:
			if (iParam4 == 0)
			{
				uParam0->f_44 = 762;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835390.f_2780 = 1;
				if (!unk_0x2CF12F9ACF18F048(sParam3))
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_DM", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_DM_NN", 32);
				}
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835390.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835390.f_2710[0] = 0;
				Global_1835390.f_2710[1] = 4;
				Global_1835390.f_2710[2] = 6;
				Global_1835390.f_2710[3] = 3;
				Global_1835390.f_2710[4] = 1;
				Global_1835390.f_2710[5] = 2;
				Global_1835390.f_2708 = 6;
				unk_0x7D1D4A3602B6AD4E(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0x7D1D4A3602B6AD4E(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
				Global_1835390.f_2780.f_28 = 5;
				Global_1835390.f_2780.f_29[0] = 4;
				Global_1835390.f_2780.f_29[1] = 5;
				Global_1835390.f_2780.f_29[2] = 5;
				Global_1835390.f_2780.f_29[3] = 4;
				Global_1835390.f_2780.f_29[4] = 5;
				Global_1835390.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 1)
			{
				uParam0->f_44 = 822;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835390.f_2780 = 1;
				if (!unk_0x2CF12F9ACF18F048(sParam3))
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_TDM", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_TDM_NN", 32);
				}
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835390.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835390.f_2710[0] = 0;
				Global_1835390.f_2710[1] = 4;
				Global_1835390.f_2710[2] = 6;
				Global_1835390.f_2710[3] = 3;
				Global_1835390.f_2710[4] = 1;
				Global_1835390.f_2710[5] = 2;
				Global_1835390.f_2708 = 6;
				unk_0x7D1D4A3602B6AD4E(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0x7D1D4A3602B6AD4E(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
				Global_1835390.f_2780.f_28 = 5;
				Global_1835390.f_2780.f_29[0] = 4;
				Global_1835390.f_2780.f_29[1] = 5;
				Global_1835390.f_2780.f_29[2] = 5;
				Global_1835390.f_2780.f_29[3] = 4;
				Global_1835390.f_2780.f_29[4] = 5;
				Global_1835390.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 2)
			{
				uParam0->f_44 = 823;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835390.f_2780 = 1;
				if (!unk_0x2CF12F9ACF18F048(sParam3))
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_VEHDM", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_VEHDM_NN", 32);
				}
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835390.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835390.f_2710[0] = 0;
				Global_1835390.f_2710[1] = 4;
				Global_1835390.f_2710[2] = 6;
				Global_1835390.f_2710[3] = 3;
				Global_1835390.f_2710[4] = 1;
				Global_1835390.f_2710[5] = 2;
				Global_1835390.f_2708 = 6;
				unk_0x7D1D4A3602B6AD4E(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0x7D1D4A3602B6AD4E(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
				Global_1835390.f_2780.f_28 = 5;
				Global_1835390.f_2780.f_29[0] = 4;
				Global_1835390.f_2780.f_29[1] = 5;
				Global_1835390.f_2780.f_29[2] = 5;
				Global_1835390.f_2780.f_29[3] = 4;
				Global_1835390.f_2780.f_29[4] = 5;
				Global_1835390.f_2780.f_29[5] = 5;
			}
			break;
		
		case 11:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 1;
			Global_1835390.f_2710[2] = 3;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 3;
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 7;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 94:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 1;
			Global_1835390.f_2710[2] = 3;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 3;
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 7;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 92:
			uParam0->f_44 = 811;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_HUNTING", 32);
			StringCopy(&(Global_1835390.f_2780.f_9), "CMSW", 64);
			Global_1835390.f_2780.f_25 = 0;
			Global_1835390.f_2780 = 0;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_HSCORE", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_TIMEHUNT", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_EKILLS", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_PHOTOS", 24);
			StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_MONEY", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 5;
			Global_1835390.f_2710[2] = 2;
			Global_1835390.f_2710[3] = 4;
			Global_1835390.f_2710[4] = 6;
			Global_1835390.f_2708 = 5;
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
			Global_1835390.f_2780.f_28 = 6;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 6;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			Global_1835390.f_2780.f_29[4] = 5;
			break;
		
		case 15:
			uParam0->f_44 = 749;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_ARM", 32);
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835390.f_2710[0] = 2;
			Global_1835390.f_2710[1] = 5;
			Global_1835390.f_2710[2] = 0;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 3;
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x7D1D4A3602B6AD4E(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 4;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 14:
			uParam0->f_44 = 190;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			if (iParam4 == -1)
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			}
			else
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			}
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_DARTS", 32);
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 7;
			Global_1835390.f_2710[2] = 5;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 3;
			unk_0x7D1D4A3602B6AD4E(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 4;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 12:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			if (unk_0x2CF12F9ACF18F048(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_TENNIS", 64);
				StringIntConCat(&(Global_1835390.f_2780.f_9), iParam4 + 1, 64);
			}
			Global_1835390.f_2780.f_25 = 0;
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 9;
			Global_1835390.f_2710[2] = 7;
			Global_1835390.f_2710[3] = 5;
			Global_1835390.f_2710[4] = 2;
			Global_1835390.f_2708 = 5;
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			Global_1835390.f_2780.f_29[4] = 5;
			break;
		
		case 87:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			Global_1835390.f_2780.f_25 = 0;
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 9;
			Global_1835390.f_2710[2] = 7;
			Global_1835390.f_2710[3] = 5;
			Global_1835390.f_2710[4] = 2;
			Global_1835390.f_2708 = 5;
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			Global_1835390.f_2780.f_29[4] = 5;
			break;
		
		case 13:
			uParam0->f_44 = 912;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 2;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_RANGEa", 32);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "GRID", 32);
					StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_RANGEb", 32);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "COVERED", 32);
					StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_RANGEc", 32);
					break;
				
				default:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_RANGEa", 32);
					break;
			}
			switch (iParam5)
			{
				case 0:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_PISTOL", 64);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "SMGs", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_SMG", 64);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "AssaultRifles", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_ASSAULT", 64);
					break;
				
				case 3:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Shotguns", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_SHOTGUN", 64);
					break;
				
				case 4:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "LMGs", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_LMG", 64);
					break;
				
				case 5:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Heavies", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_HEAVY", 64);
					break;
				
				default:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_1835390.f_2780.f_9), "HUD_MG_PISTOL", 64);
					break;
			}
			Global_1835390.f_2780.f_25 = 0;
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_HITS", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_SHOTS", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_ACC", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 2;
			Global_1835390.f_2710[2] = 1;
			Global_1835390.f_2710[3] = 3;
			Global_1835390.f_2708 = 4;
			unk_0x7D1D4A3602B6AD4E(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0x7D1D4A3602B6AD4E(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			Global_1835390.f_2780.f_28 = 4;
			Global_1835390.f_2780.f_29[0] = 4;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 4;
			break;
		
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
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
		case 206:
		case 207:
		case 208:
		case 209:
			uParam0->f_44 = 203;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_RANGE", 32);
			MemCopy(&(Global_1835390.f_2780.f_9), {func_438(iParam1)}, 16);
			Global_1835390.f_2780.f_25 = 0;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WEAP", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 7;
			Global_1835390.f_2708 = 2;
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			Global_1835390.f_2780.f_28 = 4;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 8;
			break;
		
		case 69:
		case 71:
		case 70:
			uParam0->f_44 = 202;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2780.f_1), "HUD_MG_TRI", 32);
			StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			Global_1835390.f_2780.f_25 = 0;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_RANK", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 0;
			Global_1835390.f_2710[2] = 0;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 1;
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			Global_1835390.f_2780.f_28 = 3;
			Global_1835390.f_2780.f_29[0] = 2;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 0;
			Global_1835390.f_2780.f_29[3] = 0;
			break;
		
		case 80:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			Global_1835390.f_2780.f_25 = 0;
			Global_1835390.f_2780 = 1;
			StringCopy(&(Global_1835390.f_2780.f_1), "OFFR_TITLE", 32);
			StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_1835390.f_2710[0] = 3;
			Global_1835390.f_2708 = 1;
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			Global_1835390.f_2780.f_28 = 3;
			Global_1835390.f_2780.f_29[0] = 1;
			break;
		
		case 3:
			uParam0->f_44 = 791;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			if (!unk_0x2CF12F9ACF18F048(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_HRD", 32);
				StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_HRD_NN", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WAVE", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_TKILLS", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_TDEATH", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 1;
			Global_1835390.f_2710[2] = 2;
			Global_1835390.f_2710[3] = 3;
			Global_1835390.f_2708 = 4;
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 0:
			if (iParam4 == 7 || iParam4 == 1)
			{
				uParam0->f_44 = 1200;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835390.f_2780 = 1;
				if (!unk_0x2CF12F9ACF18F048(sParam3))
				{
					if (iParam4 == 1)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_HEIST", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_HEISTP", 32);
					}
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else if (iParam4 == 1)
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_HEIST_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_HEISTPNN", 32);
				}
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_ACC", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_HEADSHOT", 24);
				StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				Global_1835390.f_2710[0] = 0;
				Global_1835390.f_2710[1] = 1;
				Global_1835390.f_2710[2] = 4;
				Global_1835390.f_2710[3] = 5;
				Global_1835390.f_2710[4] = 6;
				Global_1835390.f_2708 = 3;
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0x7D1D4A3602B6AD4E(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				Global_1835390.f_2780.f_28 = 6;
				Global_1835390.f_2780.f_29[0] = 5;
				Global_1835390.f_2780.f_29[1] = 11;
				Global_1835390.f_2780.f_29[2] = 4;
				Global_1835390.f_2780.f_29[3] = 5;
				Global_1835390.f_2780.f_29[4] = 5;
			}
			else if (Global_1602437.f_38 == 1)
			{
				uParam0->f_44 = 777;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835390.f_2780 = 1;
				if (!unk_0x2CF12F9ACF18F048(sParam3))
				{
					if (Global_1602437.f_1 == 5)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else if (Global_1602437.f_1 == 5)
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
				Global_1835390.f_2710[0] = 0;
				Global_1835390.f_2710[1] = 1;
				Global_1835390.f_2710[2] = 2;
				Global_1835390.f_2710[3] = 0;
				Global_1835390.f_2708 = 3;
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				Global_1835390.f_2780.f_28 = 5;
				Global_1835390.f_2780.f_29[0] = 2;
				Global_1835390.f_2780.f_29[1] = 5;
				Global_1835390.f_2780.f_29[2] = 5;
				Global_1835390.f_2780.f_29[3] = 5;
			}
			else
			{
				uParam0->f_44 = 780;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835390.f_2780 = 1;
				if (!unk_0x2CF12F9ACF18F048(sParam3))
				{
					if (Global_1602437.f_1 == 5)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else if (Global_1602437.f_1 == 5)
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
				Global_1835390.f_2710[0] = 0;
				Global_1835390.f_2710[1] = 1;
				Global_1835390.f_2710[2] = 2;
				Global_1835390.f_2710[3] = 0;
				Global_1835390.f_2708 = 3;
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				Global_1835390.f_2780.f_28 = 5;
				Global_1835390.f_2780.f_29[0] = 5;
				Global_1835390.f_2780.f_29[1] = 5;
				Global_1835390.f_2780.f_29[2] = 5;
				Global_1835390.f_2780.f_29[3] = 5;
			}
			break;
		
		case 8:
			uParam0->f_44 = 795;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			if (!unk_0x2CF12F9ACF18F048(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_JUMPS", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 1;
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2768), 1);
			Global_1835390.f_2754[1] = -1;
			Global_1835390.f_2710[2] = 2;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 3;
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			Global_1835390.f_2780.f_28 = 5;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 11;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 85:
			uParam0->f_44 = 274;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			Global_1835390.f_2780.f_25 = 0;
			if (!unk_0x2CF12F9ACF18F048(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_CASH", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_TOTCASH", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 3;
			Global_1835390.f_2708 = 2;
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			Global_1835390.f_2780.f_28 = 3;
			Global_1835390.f_2780.f_29[0] = 5;
			Global_1835390.f_2780.f_29[1] = 5;
			break;
		
		case 122:
			switch (iParam4)
			{
				case 0:
				case 9:
				case 4:
				case 8:
					switch (iParam4)
					{
						case 0:
							uParam0->f_44 = 965;
							break;
						
						case 9:
							uParam0->f_44 = 966;
							break;
						
						case 4:
							uParam0->f_44 = 967;
							break;
						
						case 8:
							uParam0->f_44 = 968;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835390.f_2780 = 1;
					if (!unk_0x2CF12F9ACF18F048(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 4;
					Global_1835390.f_2710[2] = 3;
					Global_1835390.f_2710[3] = 2;
					Global_1835390.f_2708 = 4;
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 5;
					Global_1835390.f_2780.f_29[2] = 5;
					Global_1835390.f_2780.f_29[3] = 5;
					break;
				
				case 1:
				case 2:
				case 3:
					switch (iParam4)
					{
						case 1:
							uParam0->f_44 = 969;
							break;
						
						case 2:
							uParam0->f_44 = 970;
							break;
						
						case 3:
							uParam0->f_44 = 973;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835390.f_2780 = 1;
					if (!unk_0x2CF12F9ACF18F048(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_DIST", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 4;
					Global_1835390.f_2710[2] = 3;
					Global_1835390.f_2710[3] = 2;
					Global_1835390.f_2708 = 4;
					unk_0x7D1D4A3602B6AD4E(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
					Global_1835390.f_2780.f_29[0] = 4;
					Global_1835390.f_2780.f_29[1] = 5;
					Global_1835390.f_2780.f_29[2] = 5;
					Global_1835390.f_2780.f_29[3] = 5;
					break;
				
				case 7:
					uParam0->f_44 = 971;
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835390.f_2780 = 1;
					if (!unk_0x2CF12F9ACF18F048(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_AVG_HEI", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835390.f_2710[0] = 1;
					Global_1835390.f_2710[1] = 4;
					Global_1835390.f_2710[2] = 3;
					Global_1835390.f_2710[3] = 2;
					Global_1835390.f_2708 = 4;
					unk_0x7D1D4A3602B6AD4E(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
					Global_1835390.f_2780.f_29[0] = 4;
					Global_1835390.f_2780.f_29[1] = 5;
					Global_1835390.f_2780.f_29[2] = 5;
					Global_1835390.f_2780.f_29[3] = 5;
					break;
				
				case 6:
				case 5:
					switch (iParam4)
					{
						case 6:
							uParam0->f_44 = 972;
							break;
						
						case 5:
							uParam0->f_44 = 974;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835390.f_2780 = 1;
					if (!unk_0x2CF12F9ACF18F048(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835390.f_2710[0] = 0;
					Global_1835390.f_2710[1] = 3;
					Global_1835390.f_2710[2] = 2;
					Global_1835390.f_2710[3] = 1;
					Global_1835390.f_2708 = 4;
					unk_0x7D1D4A3602B6AD4E(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
					Global_1835390.f_2780.f_29[0] = 12;
					Global_1835390.f_2780.f_29[1] = 5;
					Global_1835390.f_2780.f_29[2] = 5;
					Global_1835390.f_2780.f_29[3] = 5;
					break;
			}
			break;
		
		case 83:
			uParam0->f_44 = 192;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			if (!unk_0x2CF12F9ACF18F048(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "PS_TITLE", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_DIST", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835390.f_2710[0] = 2;
			Global_1835390.f_2710[1] = 5;
			Global_1835390.f_2710[2] = 4;
			Global_1835390.f_2710[3] = 3;
			Global_1835390.f_2708 = 4;
			unk_0x7D1D4A3602B6AD4E(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			Global_1835390.f_2780.f_29[0] = 17;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 82:
			uParam0->f_44 = 850;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			Global_1835390.f_2780.f_25 = 0;
			if (!unk_0x2CF12F9ACF18F048(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 4;
			Global_1835390.f_2710[2] = 3;
			Global_1835390.f_2710[3] = 2;
			Global_1835390.f_2708 = 4;
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			Global_1835390.f_2780.f_29[0] = 10;
			Global_1835390.f_2780.f_29[1] = 5;
			Global_1835390.f_2780.f_29[2] = 5;
			Global_1835390.f_2780.f_29[3] = 5;
			break;
		
		case 84:
			uParam0->f_44 = 820;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			Global_1835390.f_2780.f_25 = 0;
			if (!unk_0x2CF12F9ACF18F048(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "PS_TITLE", 32);
				StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_ACC", 24);
			StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835390.f_2717[4 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 1;
			Global_1835390.f_2710[2] = 2;
			Global_1835390.f_2710[3] = 5;
			Global_1835390.f_2710[4] = 4;
			Global_1835390.f_2710[5] = 3;
			Global_1835390.f_2708 = 6;
			unk_0x7D1D4A3602B6AD4E(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x7D1D4A3602B6AD4E(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
			Global_1835390.f_2780.f_29[0] = 4;
			Global_1835390.f_2780.f_29[1] = 9;
			Global_1835390.f_2780.f_29[2] = 4;
			Global_1835390.f_2780.f_29[3] = 5;
			Global_1835390.f_2780.f_29[4] = 5;
			Global_1835390.f_2780.f_29[5] = 5;
			break;
		
		case 86:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StuntPlaneRace", 32);
			Global_1835390.f_2780 = 1;
			Global_1835390.f_2780.f_25 = 0;
			if (!unk_0x2CF12F9ACF18F048(sParam3))
			{
				StringCopy(&(Global_1835390.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835390.f_2780.f_1), "SPR_TITLE", 32);
			}
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_1835390.f_2710[0] = 2;
			Global_1835390.f_2708 = 1;
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			Global_1835390.f_2780.f_28 = 3;
			Global_1835390.f_2780.f_29[0] = 1;
			break;
		
		case 91:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_1835390.f_2780 = 1;
			if (iParam5 <= 0)
			{
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
				Global_1835390.f_2710[0] = 3;
				Global_1835390.f_2710[1] = 4;
				Global_1835390.f_2710[2] = 1;
				Global_1835390.f_2710[3] = 0;
				Global_1835390.f_2709 = 6;
				Global_1835390.f_2708 = 2;
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				Global_1835390.f_2780.f_28 = 4;
				Global_1835390.f_2780.f_29[0] = 1;
				Global_1835390.f_2780.f_29[1] = 3;
			}
			else
			{
				StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
				StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "", 24);
				Global_1835390.f_2710[0] = 3;
				Global_1835390.f_2710[1] = 2;
				Global_1835390.f_2710[2] = 4;
				Global_1835390.f_2710[3] = 1;
				Global_1835390.f_2709 = 4;
				Global_1835390.f_2708 = 3;
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				Global_1835390.f_2780.f_28 = 5;
				Global_1835390.f_2780.f_29[0] = 1;
				Global_1835390.f_2780.f_29[1] = 1;
				Global_1835390.f_2780.f_29[2] = 3;
			}
			Global_1835390.f_2779 = 0;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGCR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 1:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGCR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 2:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGCR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 3:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGCR_5", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_5", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 4:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGCR_6", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_6", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 5:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGSR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 6:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGSR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 7:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGSR_3", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_3", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 8:
					StringCopy(&(Global_1835390.f_2780.f_1), "MGSR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				default:
					break;
			}
			break;
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 < Global_1835390.f_2708)
	{
		if (unk_0x4ED6CFDFE8D4131A(Global_1835390.f_2769, Global_1835390.f_2710[iVar16]))
		{
			unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2770), iVar16);
		}
		iVar16++;
	}
	Global_1835390.f_2826 = func_437(Var0, uParam0->f_44, iParam1, iParam4, iParam5, bParam6);
}

int func_437(struct<8> Param0, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	char cVar0[64];
	
	MemCopy(&cVar0, {Param0}, 16);
	StringIntConCat(&cVar0, iParam8, 64);
	StringConCat(&cVar0, "_", 64);
	if (func_431(iParam8))
	{
		if (bParam12)
		{
			StringConCat(&cVar0, "CoDri", 64);
		}
		else
		{
			StringConCat(&cVar0, "Dri", 64);
		}
		StringConCat(&cVar0, "_", 64);
	}
	StringIntConCat(&cVar0, iParam9, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam10, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam11, 64);
	return unk_0xFD340785ADF8CFB7(&cVar0);
}

struct<6> func_438(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 38:
			StringCopy(&Var0, "HUD_MG_RANGE0", 24);
			break;
		
		case 39:
			StringCopy(&Var0, "HUD_MG_RANGE1", 24);
			break;
		
		case 40:
			StringCopy(&Var0, "HUD_MG_RANGE2", 24);
			break;
		
		case 41:
			StringCopy(&Var0, "HUD_MG_RANGE3", 24);
			break;
		
		case 42:
			StringCopy(&Var0, "HUD_MG_RANGE4", 24);
			break;
		
		case 43:
			StringCopy(&Var0, "HUD_MG_RANGE5", 24);
			break;
		
		case 44:
			StringCopy(&Var0, "HUD_MG_RANGE6", 24);
			break;
		
		case 45:
			StringCopy(&Var0, "HUD_MG_RANGE7", 24);
			break;
		
		case 46:
			StringCopy(&Var0, "HUD_MG_RANGE8", 24);
			break;
		
		case 47:
			StringCopy(&Var0, "HUD_MG_RANGE9", 24);
			break;
		
		case 48:
			StringCopy(&Var0, "HUD_MG_RANGE10", 24);
			break;
		
		case 49:
			StringCopy(&Var0, "HUD_MG_RANGE11", 24);
			break;
		
		case 50:
			StringCopy(&Var0, "HUD_MG_RANGE12", 24);
			break;
		
		case 51:
			StringCopy(&Var0, "HUD_MG_RANGE13", 24);
			break;
		
		case 52:
			StringCopy(&Var0, "HUD_MG_RANGE14", 24);
			break;
		
		case 53:
			StringCopy(&Var0, "HUD_MG_RANGE15", 24);
			break;
		
		case 54:
			StringCopy(&Var0, "HUD_MG_RANGE16", 24);
			break;
		
		case 55:
			StringCopy(&Var0, "HUD_MG_RANGE17", 24);
			break;
		
		case 206:
			StringCopy(&Var0, "HUD_MG_RANGE18", 24);
			break;
		
		case 207:
			StringCopy(&Var0, "HUD_MG_RANGE19", 24);
			break;
		
		case 208:
			StringCopy(&Var0, "HUD_MG_RANGE20", 24);
			break;
		
		case 209:
			StringCopy(&Var0, "HUD_MG_RANGE21", 24);
			break;
	}
	return Var0;
}

int func_439()
{
	if (((((((Global_1602437.f_25920 == 1 || Global_1602437.f_25920 == 3) || Global_1602437.f_25920 == 5) || Global_1602437.f_25920 == 7) || Global_1602437.f_25920 == 8) || Global_1602437.f_25920 == 9) || Global_1602437.f_25920 == 11) || Global_1602437.f_25920 == 13)
	{
		return 1;
	}
	return 0;
}

int func_440(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 2;
	if (Global_1840922.f_2 + 5 < unk_0x77DFA958FCF100C1() && Global_1840922.f_2 > 0)
	{
		func_341(&Global_1840922);
		func_341(&(Global_1840922.f_49));
		*uParam0 = 0;
		Global_1840922.f_2 = 0;
		func_449(0);
	}
	Global_1840922.f_2 = unk_0x77DFA958FCF100C1();
	iVar1 = -1;
	if (unk_0x88CFAE250D3E0C71())
	{
		if (unk_0xF867C85C2B19AA41() == 0)
		{
			iVar1 = unk_0xEE976D2B6FE4D4AE();
		}
	}
	if ((unk_0x88CFAE250D3E0C71() && (((iVar1 == 4 || iVar1 == 2) || iVar1 == 1) || iVar1 == 5)) || (!func_447() && unk_0x4C82BD446C34CACD()))
	{
		if (unk_0x6C02024F49E9F003())
		{
			func_444(&(Global_1840922.f_3), func_446(&(Global_1840922.f_3)));
			if (!unk_0x4ED6CFDFE8D4131A(*uParam0, 4))
			{
				unk_0xF73FBE4845C43B5B(uParam0, 4);
				StringCopy(&(Global_1840922.f_3.f_1), "", 64);
				func_442(&(Global_1840922.f_3), 0);
			}
		}
		else
		{
			if (iVar1 == 4)
			{
				unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "HUD_PROFILECHNG", iVar0, 0, 0, -1, 0, 0, 1);
			}
			else if (iVar1 == 2)
			{
				unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "HUD_GAMEUPD_G", iVar0, 0, 0, -1, 0, 0, 1);
			}
			else if (iVar1 == 1)
			{
				unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "HUD_SYSTUPD_G", iVar0, 0, 0, -1, 0, 0, 1);
			}
			else if (iVar1 == 5)
			{
				unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
			}
			else if (!func_447())
			{
				unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_ROS", iVar0, 0, 0, -1, 0, 0, 1);
			}
			if (!unk_0x4ED6CFDFE8D4131A(*uParam0, 0))
			{
				if (!unk_0x2503EB2EA811EC9A(2, 201))
				{
					unk_0xF73FBE4845C43B5B(uParam0, 0);
				}
			}
			else if (unk_0x3249D2128D293FA5(2, 201))
			{
				func_341(&(Global_1840922.f_49));
				func_341(&Global_1840922);
				*uParam0 = 0;
				Global_1840922.f_2 = 0;
				func_449(0);
				return 1;
			}
		}
	}
	else
	{
		func_444(&(Global_1840922.f_3), func_446(&(Global_1840922.f_3)));
		if ((func_441(&(Global_1840922.f_49)) && !func_419(&(Global_1840922.f_49), 2000, 1)) && !unk_0x4C82BD446C34CACD())
		{
			unk_0xF73FBE4845C43B5B(uParam0, 3);
			StringCopy(&(Global_1840922.f_3.f_1), "", 64);
			func_442(&(Global_1840922.f_3), 0);
		}
		else if (!unk_0x4ED6CFDFE8D4131A(*uParam0, 3))
		{
			if (!unk_0x4ED6CFDFE8D4131A(*uParam0, 1))
			{
				unk_0x3EE0B62B2FBD1DE6(0);
				unk_0xF73FBE4845C43B5B(uParam0, 1);
				StringCopy(&(Global_1840922.f_3.f_1), "", 64);
				func_442(&(Global_1840922.f_3), 0);
			}
		}
		if (func_441(&Global_1840922))
		{
			if (!func_419(&Global_1840922, 4000, 1))
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			if (bParam1)
			{
				if (!unk_0x4C82BD446C34CACD())
				{
					if (unk_0x22B7320F9BE83733())
					{
						unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "STORE_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1);
					}
					else
					{
						unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
					}
					if (!unk_0x908258B6209E71F7())
					{
						if (!unk_0x4ED6CFDFE8D4131A(*uParam0, 0))
						{
							if (!unk_0x2503EB2EA811EC9A(2, 201))
							{
								unk_0xF73FBE4845C43B5B(uParam0, 0);
							}
						}
						else if (unk_0x3249D2128D293FA5(2, 201))
						{
							func_341(&Global_1840922);
							*uParam0 = 0;
							Global_1840922.f_2 = 0;
							func_449(0);
							return 1;
						}
					}
				}
				else
				{
					func_341(&Global_1840922);
					*uParam0 = 0;
					Global_1840922.f_2 = 0;
					func_449(0);
					return 1;
				}
			}
			else if (unk_0x4ED6CFDFE8D4131A(*uParam0, 3))
			{
				if (unk_0x22B7320F9BE83733())
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_SIGN_OUT", iVar0, 0, 0, -1, 0, 0, 1);
				}
				else
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
				}
				if (!unk_0x4ED6CFDFE8D4131A(*uParam0, 0))
				{
					if (!unk_0x2503EB2EA811EC9A(2, 201))
					{
						unk_0xF73FBE4845C43B5B(uParam0, 0);
					}
				}
				else if (unk_0x3249D2128D293FA5(2, 201))
				{
					func_341(&(Global_1840922.f_49));
					func_341(&Global_1840922);
					*uParam0 = 0;
					Global_1840922.f_2 = 0;
					func_449(0);
					return 1;
				}
			}
			else
			{
				if (unk_0x22B7320F9BE83733())
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1);
				}
				else
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
				}
				if (!unk_0x908258B6209E71F7())
				{
					if (!unk_0x4ED6CFDFE8D4131A(*uParam0, 0))
					{
						if (!unk_0x2503EB2EA811EC9A(2, 201))
						{
							unk_0xF73FBE4845C43B5B(uParam0, 0);
						}
					}
					else if (unk_0x3249D2128D293FA5(2, 201))
					{
						func_341(&(Global_1840922.f_49));
						func_341(&Global_1840922);
						*uParam0 = 0;
						Global_1840922.f_2 = 0;
						func_449(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_441(var uParam0)
{
	return uParam0->f_1;
}

void func_442(var uParam0, bool bParam1)
{
	func_443(uParam0);
	if (bParam1)
	{
		func_449(0);
	}
	uParam0->f_35 = 1;
}

void func_443(var uParam0)
{
	struct<46> Var0;
	
	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_444(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_445(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_36)
		{
			unk_0xD96DD41977ECED45(&(uParam0->f_1));
			unk_0xF00CED653959DE03(uParam0->f_33);
			unk_0xF00CED653959DE03(uParam0->f_34);
			unk_0x9943ACD4E08F4EC8(uParam0->f_41);
		}
		else if (uParam0->f_37)
		{
			unk_0xD96DD41977ECED45(&(uParam0->f_1));
			unk_0xF00CED653959DE03(uParam0->f_33);
			unk_0x9943ACD4E08F4EC8(uParam0->f_41);
		}
		else if (uParam0->f_39)
		{
			unk_0xD96DD41977ECED45(&(uParam0->f_1));
			unk_0x54534D588C114163(&(uParam0->f_17));
			unk_0xF00CED653959DE03(uParam0->f_33);
			unk_0xF00CED653959DE03(uParam0->f_34);
			unk_0x9943ACD4E08F4EC8(uParam0->f_41);
		}
		else if (uParam0->f_38)
		{
			unk_0xD96DD41977ECED45(&(uParam0->f_1));
			unk_0x54534D588C114163(&(uParam0->f_17));
			unk_0x9943ACD4E08F4EC8(uParam0->f_41);
		}
		else if (uParam0->f_40)
		{
			unk_0xD96DD41977ECED45(&(uParam0->f_1));
			unk_0x3451E7FFDF0EF375(uParam0->f_33, 70);
			unk_0x9943ACD4E08F4EC8(uParam0->f_41);
		}
		else
		{
			unk_0xD96DD41977ECED45(&(uParam0->f_1));
			unk_0x9943ACD4E08F4EC8(uParam0->f_41);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_445(var uParam0)
{
	uParam0->f_35 = 0;
}

int func_446(var uParam0)
{
	return uParam0->f_35;
}

int func_447()
{
	if (func_448())
	{
		return 0;
	}
	if (unk_0x61E3D90420572762() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_448()
{
	return Global_2435308;
}

void func_449(bool bParam0)
{
	unk_0x58F441B90EA84D06();
	if (bParam0)
	{
		unk_0xAF9F47A49C6B43C5();
	}
}

void func_450(var uParam0, int iParam1, char[4] cParam2)
{
	func_138(&(Local_50.f_119), 1128792064, 1, 0, 1, 1065353216);
	unk_0xB5F6539FA93ECBF6(9);
	unk_0xB5F6539FA93ECBF6(7);
	func_435(iParam1, cParam2);
	func_451(uParam0, &uLocal_1549);
}

void func_451(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	var uVar2[3];
	int iVar6;
	bool bVar7;
	bool bVar8;
	char cVar9[64];
	char[] cVar25[8];
	int iVar27[3];
	int iVar31;
	struct<13> Var32;
	var uVar45;
	struct<3> Var51;
	struct<3> Var57;
	bool bVar63;
	
	func_412(&(Global_1840922.f_49), 1, 0);
	unk_0x648AF6B96FE944A5();
	func_511();
	func_510();
	unk_0x36CDD81627A6FCD2();
	func_508();
	unk_0xB5F6539FA93ECBF6(10);
	func_507(1);
	func_506(1);
	if (!func_414())
	{
		if (!unk_0x2E882EA08284F674("LEADERBOARD_SCENE"))
		{
			unk_0x5F70787AC4BF7928("LEADERBOARD_SCENE");
		}
	}
	if (!unk_0x4ED6CFDFE8D4131A(uParam1->f_42, 3))
	{
		*uParam0 = func_332();
		unk_0xF73FBE4845C43B5B(&(uParam1->f_42), 3);
	}
	Var32 = { func_430(unk_0x217E9DC48139933D()) };
	if (unk_0x64BAE9BE701E6C19(*uParam0))
	{
		if (((!unk_0xBEA038AAF3BCAE99() || !unk_0x3758E345C82DAFF2()) || (!unk_0x14B7FA24A6729F52() && unk_0xE45678312B6DF7F8())) || Global_1835390.f_2832 != 0)
		{
			if (!unk_0x3758E345C82DAFF2())
			{
				if (Global_1835390.f_2829 != 2)
				{
					unk_0x7D1D4A3602B6AD4E(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 2;
				}
			}
			else if (!unk_0x14B7FA24A6729F52() && unk_0xE45678312B6DF7F8())
			{
				if (Global_1835390.f_2829 != 3)
				{
					unk_0x7D1D4A3602B6AD4E(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 3;
				}
			}
			else if (!unk_0xBEA038AAF3BCAE99())
			{
				if (Global_1835390.f_2829 != 4)
				{
					unk_0x7D1D4A3602B6AD4E(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 4;
				}
			}
			else if (Global_1835390.f_2832 != 0)
			{
				if (Global_1835390.f_2829 != 5)
				{
					unk_0x7D1D4A3602B6AD4E(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 5;
				}
			}
			if (!unk_0x4ED6CFDFE8D4131A(uParam1->f_42, 1))
			{
				unk_0xF6EA2AC68E7C7293(*uParam0, "CLEAR_ALL_SLOTS");
				unk_0xD4D85E4148B638AD();
				func_505(*uParam0, Global_1835390.f_2780);
				if (unk_0x73C258C68D6F55B6(&(Global_1835390.f_2780.f_1)))
				{
					if (!func_431(uParam1->f_44))
					{
						if (Global_1835390.f_2780.f_26 > 0)
						{
							cVar9 = { Global_1835390.f_2780.f_9 };
							func_504(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &cVar9, Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							func_504(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					else if (!Global_1835390.f_2780.f_27)
					{
						StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
						if (Global_1835390.f_2780.f_26 > 0)
						{
							func_504(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							func_504(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					else
					{
						StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
						if (Global_1835390.f_2780.f_26 > 0)
						{
							func_504(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							func_504(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					func_503(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
				}
				iVar31 = 0;
				unk_0xF73FBE4845C43B5B(&iVar31, 4);
				func_502(*uParam0, &iVar6, iVar31, 1, 1);
				iVar31 = 0;
				unk_0xF73FBE4845C43B5B(&iVar31, 5);
				func_502(*uParam0, &iVar6, iVar31, 1, 1);
				iVar31 = 0;
				unk_0xF73FBE4845C43B5B(&iVar31, 6);
				func_502(*uParam0, &iVar6, iVar31, 1, 1);
				unk_0xF73FBE4845C43B5B(&(uParam1->f_42), 1);
				func_501(*uParam0);
				unk_0x7D1D4A3602B6AD4E(&(uParam1->f_42), 2);
				unk_0x0BFC2C61FB5B6CA1(1);
			}
			else
			{
				func_501(*uParam0);
			}
		}
		else
		{
			if (Global_1835390.f_2829 != 1)
			{
				unk_0x7D1D4A3602B6AD4E(&(uParam1->f_42), 1);
				Global_1835390.f_2829 = 1;
			}
			if (!func_473(uParam1))
			{
				uParam1->f_246.f_1 = -1;
				unk_0x7D1D4A3602B6AD4E(&(uParam1->f_42), 1);
				if (!unk_0x4ED6CFDFE8D4131A(uParam1->f_42, 0))
				{
					unk_0xF6EA2AC68E7C7293(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0xD4D85E4148B638AD();
					func_505(*uParam0, Global_1835390.f_2780);
					if (unk_0x73C258C68D6F55B6(&(Global_1835390.f_2780.f_1)))
					{
						if (!func_431(uParam1->f_44))
						{
							if (Global_1835390.f_2780.f_26 > 0)
							{
								cVar9 = { Global_1835390.f_2780.f_9 };
								func_504(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &cVar9, 1, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_504(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835390.f_2780.f_27)
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_504(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_504(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_504(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_504(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						func_503(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
					}
					unk_0xF73FBE4845C43B5B(&(uParam1->f_42), 0);
					unk_0x7D1D4A3602B6AD4E(&(uParam1->f_42), 2);
				}
				iVar6 = 0;
				iVar0 = 0;
				if (Global_1835390.f_2825 == -1)
				{
					StringCopy(&Var51, "SC_LB_DL0", 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar31 = 0;
							unk_0xF73FBE4845C43B5B(&iVar31, 4);
							func_502(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar31 = 0;
							unk_0xF73FBE4845C43B5B(&iVar31, 5);
							func_502(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar31 = 0;
							unk_0xF73FBE4845C43B5B(&iVar31, 6);
							func_502(*uParam0, &iVar6, iVar31, 0, 0);
						}
						iVar31 = 0;
						unk_0xF73FBE4845C43B5B(&iVar31, 7);
						func_472(*uParam0, iVar6, iVar31, &Var51);
						iVar6++;
						iVar0++;
					}
					Global_1835390.f_2825 = 1;
					func_341(&(Global_1835390.f_2823));
				}
				else if (func_419(&(Global_1835390.f_2823), 300, 0))
				{
					StringCopy(&Var57, "SC_LB_DL", 24);
					StringIntConCat(&Var57, Global_1835390.f_2825, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar31 = 0;
							unk_0xF73FBE4845C43B5B(&iVar31, 4);
							func_502(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar31 = 0;
							unk_0xF73FBE4845C43B5B(&iVar31, 5);
							func_502(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar31 = 0;
							unk_0xF73FBE4845C43B5B(&iVar31, 6);
							func_502(*uParam0, &iVar6, iVar31, 0, 0);
						}
						iVar31 = 0;
						unk_0xF73FBE4845C43B5B(&iVar31, 7);
						func_472(*uParam0, iVar6, iVar31, &Var57);
						iVar6++;
						iVar0++;
					}
					Global_1835390.f_2825++;
					if (Global_1835390.f_2825 > 3)
					{
						Global_1835390.f_2825 = 0;
					}
					func_341(&(Global_1835390.f_2823));
				}
				func_501(*uParam0);
			}
			else
			{
				unk_0x7D1D4A3602B6AD4E(&(uParam1->f_42), 0);
				if (!unk_0x4ED6CFDFE8D4131A(uParam1->f_42, 1))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						uParam1->f_246.f_187[iVar0] = 0;
						iVar0++;
					}
					unk_0xF6EA2AC68E7C7293(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0xD4D85E4148B638AD();
					func_505(*uParam0, Global_1835390.f_2780);
					if (unk_0x73C258C68D6F55B6(&(Global_1835390.f_2780.f_1)))
					{
						if (!func_431(uParam1->f_44))
						{
							if (Global_1835390.f_2780.f_26 > 0)
							{
								cVar9 = { Global_1835390.f_2780.f_9 };
								func_504(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &cVar9, 1, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_504(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835390.f_2780.f_27)
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_504(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_504(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_504(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_504(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						func_503(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
					}
					if (!unk_0x4ED6CFDFE8D4131A(uParam1->f_42, 6))
					{
						func_344(&Global_1839721);
						func_468(uParam1, &Global_1839721);
						func_467(uParam1, &Global_1839721);
					}
					iVar6 = 0;
					uParam1->f_246.f_2 = 0;
					if ((Global_1835390.f_2704[0] > 1 || (Global_1835390.f_2704[0] > 0 && Global_1835390.f_2775[0] != -1)) || (((Global_1835390.f_2704[0] > 0 && Global_1835390.f_2780.f_27) && func_431(uParam1->f_44)) && Global_1835390.f_2775[0] != -1))
					{
						uParam1->f_246.f_1 = -1;
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 12)
						{
							bVar63 = false;
							if (Global_1839721[iVar0 /*100*/].f_75 == 1)
							{
								if (!iVar27[0])
								{
									iVar31 = 0;
									unk_0xF73FBE4845C43B5B(&iVar31, 4);
									func_502(*uParam0, &iVar6, iVar31, 0, 0);
									iVar27[0] = 1;
								}
							}
							else if (Global_1839721[iVar0 /*100*/].f_75 == 2)
							{
								if (!iVar27[1])
								{
									iVar31 = 0;
									unk_0xF73FBE4845C43B5B(&iVar31, 5);
									if ((Global_1835390.f_2704[1] < 1 && Global_1835390.f_2775[1] == -1) && !(((Global_1835390.f_2704[1] > 0 && Global_1835390.f_2780.f_27) && func_431(uParam1->f_44)) && Global_1835390.f_2775[1] != -1))
									{
										func_502(*uParam0, &iVar6, iVar31, 1, 0);
										bVar63 = true;
									}
									else
									{
										func_502(*uParam0, &iVar6, iVar31, 0, 0);
									}
									iVar27[1] = 1;
								}
							}
							else if (Global_1839721[iVar0 /*100*/].f_75 == 3)
							{
								if (!iVar27[2])
								{
									iVar31 = 0;
									unk_0xF73FBE4845C43B5B(&iVar31, 6);
									if (!unk_0x5DF40D01D57B2F76())
									{
										bVar63 = true;
									}
									else if (!unk_0x017A61170DF48BD0())
									{
										bVar63 = true;
									}
									if ((Global_1835390.f_2704[2] < 2 && Global_1835390.f_2775[2] == -1) && !(((Global_1835390.f_2704[2] > 0 && Global_1835390.f_2780.f_27) && func_431(uParam1->f_44)) && Global_1835390.f_2775[2] != -1))
									{
										bVar63 = true;
									}
									if (bVar63)
									{
										func_502(*uParam0, &iVar6, iVar31, 1, 0);
									}
									else
									{
										func_502(*uParam0, &iVar6, iVar31, 0, 0);
									}
									iVar27[2] = 1;
								}
							}
							if (func_425(Global_1839721[iVar0 /*100*/].f_32))
							{
								if (func_431(uParam1->f_44))
								{
									unk_0x4256B393F5391D41(unk_0x217E9DC48139933D(), &uVar45);
									if (!Global_1839721[iVar0 /*100*/].f_74 && unk_0xD3852F22AB713A1F(&(uParam1->f_44.f_3.f_1[1 /*16*/].f_8), &uVar45))
									{
										bVar63 = true;
									}
								}
								if (!bVar63)
								{
									iVar31 = 0;
									if (!Global_1835390.f_2780.f_27)
									{
										if (func_466(&(Global_1839721[iVar0 /*100*/].f_32), &Var32))
										{
											unk_0xF73FBE4845C43B5B(&iVar31, 1);
											if (uParam1->f_246.f_1 == -1)
											{
												bVar7 = true;
												uParam1->f_246.f_1 = iVar0;
												unk_0xF73FBE4845C43B5B(&iVar31, 3);
											}
										}
									}
									if (func_431(uParam1->f_44))
									{
										cVar9 = { Global_1839721[iVar0 /*100*/] };
										if (!unk_0x2CF12F9ACF18F048(&(Global_1839721[iVar0 /*100*/].f_84)) && !unk_0xD3852F22AB713A1F(&(Global_1839721[iVar0 /*100*/].f_84), ""))
										{
											StringConCat(&cVar9, "/", 64);
											StringConCat(&cVar9, &(Global_1839721[iVar0 /*100*/].f_84), 64);
										}
										func_465(*uParam0, iVar6, iVar31, Global_1839721[iVar0 /*100*/].f_59, &cVar9, &(Global_1839721[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar6;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar31;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839721[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									else
									{
										func_465(*uParam0, iVar6, iVar31, Global_1839721[iVar0 /*100*/].f_59, &(Global_1839721[iVar0 /*100*/]), &(Global_1839721[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar6;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar31;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839721[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									iVar1 = 0;
									while (iVar1 < Global_1835390.f_2708)
									{
										bVar8 = false;
										if (unk_0x4ED6CFDFE8D4131A(Global_1835390.f_2770, iVar1))
										{
											if (unk_0x4ED6CFDFE8D4131A(Global_1835390.f_2768, iVar1))
											{
												if (Global_1835390.f_2754[iVar1] == Global_1839721[iVar0 /*100*/].f_67[iVar1])
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_460(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_67[iVar1], 0, Global_1839721[iVar0 /*100*/].f_58);
											}
											else
											{
												func_460(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_67[iVar1], Global_1839721[iVar0 /*100*/].f_74, Global_1839721[iVar0 /*100*/].f_58);
											}
										}
										else
										{
											if (unk_0x4ED6CFDFE8D4131A(Global_1835390.f_2768, iVar1))
											{
												if (Global_1835390.f_2761[iVar1] == Global_1839721[iVar0 /*100*/].f_67[iVar1])
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_457(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_60[iVar1], 0);
											}
											else
											{
												func_457(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_60[iVar1], Global_1839721[iVar0 /*100*/].f_74);
											}
										}
										iVar1++;
									}
									func_456();
									uVar2[(Global_1839721[iVar0 /*100*/].f_75 - 1)]++;
									if (uVar2[(Global_1839721[iVar0 /*100*/].f_75 - 1)] == 2)
									{
										if (Global_1839721[iVar0 /*100*/].f_59 > 2)
										{
											unk_0xF73FBE4845C43B5B(&iVar31, 2);
											unk_0xF73FBE4845C43B5B(&(uParam1->f_246.f_6[0 /*15*/].f_1), 2);
											func_455(*uParam0, (iVar6 - 1), iVar31);
										}
									}
									iVar6++;
								}
							}
							iVar0++;
						}
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							uParam1->f_246.f_187[iVar0] = uVar2[iVar0];
							iVar0++;
						}
					}
					else
					{
						iVar31 = 0;
						unk_0xF73FBE4845C43B5B(&iVar31, 4);
						func_502(*uParam0, &iVar6, iVar31, 1, 0);
						iVar31 = 0;
						unk_0xF73FBE4845C43B5B(&iVar31, 5);
						func_502(*uParam0, &iVar6, iVar31, 1, 0);
						iVar31 = 0;
						unk_0xF73FBE4845C43B5B(&iVar31, 6);
						func_502(*uParam0, &iVar6, iVar31, 1, 0);
					}
					unk_0xF73FBE4845C43B5B(&(uParam1->f_42), 1);
					unk_0x7D1D4A3602B6AD4E(&(uParam1->f_42), 2);
					func_501(*uParam0);
					unk_0x0BFC2C61FB5B6CA1(1);
					if (uParam1->f_246.f_1 == -1 && !bVar7 == 1)
					{
						if (Global_1835390.f_2704[0] > 1)
						{
							uParam1->f_246.f_1 = 0;
							unk_0xF73FBE4845C43B5B(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
							func_455(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					func_501(*uParam0);
					func_452(uParam0, uParam1);
				}
			}
		}
	}
}

void func_452(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	
	iVar1 = uParam1->f_246.f_1;
	if (unk_0x3653C46DD33107D5(2))
	{
		unk_0xF12E4CCAF249DC10();
		unk_0xDA067FC477B3E571(2, 239);
		unk_0xDA067FC477B3E571(2, 240);
		unk_0xDA067FC477B3E571(2, 237);
		unk_0xDA067FC477B3E571(2, 238);
		unk_0x562F5D788AF3FA80(2, 200, 1);
		if (unk_0x3BFD60A58E503C0D(2, 241))
		{
			unk_0x44761B19F15938AE(2, 188, 1f);
		}
		if (unk_0x3BFD60A58E503C0D(2, 242))
		{
			unk_0x44761B19F15938AE(2, 187, 1f);
		}
		if (unk_0x346169486AF7B934(*uParam0, &iVar2, &iVar3, &uVar4))
		{
			if (iVar2 == 5)
			{
				if (iVar3 > uParam1->f_246.f_187[0])
				{
					if (iVar3 <= (uParam1->f_246.f_187[0] + uParam1->f_246.f_187[1]) + 2)
					{
						iVar3 = (iVar3 - 2);
					}
					else
					{
						iVar3 = (iVar3 - 4);
					}
				}
				iVar3 = (iVar3 - 1);
				if (uParam1->f_246.f_1 != iVar3)
				{
					uParam1->f_246.f_1 = iVar3;
					unk_0xB906B139171B1845(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					bVar0 = true;
				}
				else
				{
					unk_0x44761B19F15938AE(2, 217, 1f);
				}
			}
		}
	}
	if (!unk_0x3653C46DD33107D5(2))
	{
		func_454(&uVar5, &iVar6, &uVar7, &uVar8, 0);
	}
	if (uParam1->f_246.f_2 > 0)
	{
		if (!unk_0x4ED6CFDFE8D4131A(uParam1->f_246, 0))
		{
			if ((unk_0x2503EB2EA811EC9A(2, 188) || unk_0x3BFD60A58E503C0D(2, 188)) || iVar6 < -100)
			{
				unk_0xB906B139171B1845(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1 = (uParam1->f_246.f_1 + -1);
				unk_0xF73FBE4845C43B5B(&(uParam1->f_246), 0);
				func_341(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_453(uParam1, 188))
		{
			unk_0x7D1D4A3602B6AD4E(&(uParam1->f_246), 0);
		}
		if (!unk_0x4ED6CFDFE8D4131A(uParam1->f_246, 1))
		{
			if ((unk_0x2503EB2EA811EC9A(2, 187) || unk_0x3BFD60A58E503C0D(2, 187)) || iVar6 > 100)
			{
				unk_0xB906B139171B1845(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1++;
				unk_0xF73FBE4845C43B5B(&(uParam1->f_246), 1);
				func_341(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_453(uParam1, 187))
		{
			unk_0x7D1D4A3602B6AD4E(&(uParam1->f_246), 1);
		}
	}
	if (bVar0)
	{
		if (uParam1->f_246.f_1 < 0)
		{
			uParam1->f_246.f_1 = (uParam1->f_246.f_2 - 1);
		}
		if (uParam1->f_246.f_1 >= uParam1->f_246.f_2)
		{
			uParam1->f_246.f_1 = 0;
		}
	}
	if (!unk_0x4ED6CFDFE8D4131A(uParam1->f_246, 3))
	{
		if ((unk_0x2503EB2EA811EC9A(2, 204) || unk_0xA799AFD74BAFEA0F(2, 204)) || unk_0xCCBB0BB9790E1F47(2, 237))
		{
			unk_0xF73FBE4845C43B5B(&(uParam1->f_246), 3);
			func_341(&(uParam1->f_246.f_3));
			bVar0 = true;
		}
	}
	else if (func_453(uParam1, 204))
	{
		unk_0x7D1D4A3602B6AD4E(&(uParam1->f_246), 3);
	}
	if (uParam1->f_246.f_1 >= 0)
	{
		if (uParam1->f_246.f_1 != iVar1)
		{
			if (iVar1 >= 0)
			{
				unk_0x7D1D4A3602B6AD4E(&(uParam1->f_246.f_6[iVar1 /*15*/].f_1), 3);
				func_455(*uParam0, uParam1->f_246.f_6[iVar1 /*15*/], uParam1->f_246.f_6[iVar1 /*15*/].f_1);
			}
			unk_0xF73FBE4845C43B5B(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
			func_455(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
			unk_0x7D1D4A3602B6AD4E(&(uParam1->f_42), 2);
		}
		if (func_425(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2))
		{
			if (!unk_0x4ED6CFDFE8D4131A(uParam1->f_246, 2))
			{
				if (unk_0x2503EB2EA811EC9A(2, 217) || unk_0xA799AFD74BAFEA0F(2, 217))
				{
					if (!unk_0x908258B6209E71F7())
					{
						unk_0xB906B139171B1845(-1, "SELECT", "HUD_FRONTEND_MP_SOUNDSET", 1);
						unk_0xF73FBE4845C43B5B(&(uParam1->f_246), 2);
						unk_0xCA483D01D0982840(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2));
					}
				}
			}
			else if (!unk_0x2503EB2EA811EC9A(2, 217))
			{
				unk_0x7D1D4A3602B6AD4E(&(uParam1->f_246), 2);
			}
		}
	}
}

int func_453(var uParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (iParam1 == 188 || iParam1 == 187)
	{
		func_454(&uVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((!unk_0x2503EB2EA811EC9A(2, iParam1) && !unk_0x3BFD60A58E503C0D(2, iParam1)) && (iVar1 < 75 && iVar1 > -75)) || func_419(&(uParam0->f_246.f_3), 250, 0))
		{
			return 1;
		}
	}
	else if ((!unk_0x2503EB2EA811EC9A(2, iParam1) && !unk_0x3BFD60A58E503C0D(2, iParam1)) || func_419(&(uParam0->f_246.f_3), 250, 0))
	{
		return 1;
	}
	return 0;
}

void func_454(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x51790FCCF27A8664(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x51790FCCF27A8664(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x51790FCCF27A8664(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x51790FCCF27A8664(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x07B8F478FA169996(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0x07B8F478FA169996(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x07B8F478FA169996(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0x07B8F478FA169996(2, 221) * 127f));
		}
	}
}

void func_455(var uParam0, int iParam1, int iParam2)
{
	unk_0xF6EA2AC68E7C7293(uParam0, "SET_SLOT_STATE");
	unk_0xA734310215BCF528(iParam1);
	unk_0xA734310215BCF528(iParam2);
	unk_0xD4D85E4148B638AD();
}

void func_456()
{
	unk_0xD4D85E4148B638AD();
}

void func_457(struct<30> Param0, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, int iParam43, float fParam44, bool bParam45)
{
	switch (Param0.f_29[iParam43])
	{
		case 4:
			if (bParam45)
			{
				unk_0x164FB269C22AF51C("NUMBER");
				unk_0xAC5C76ECFC58A8FE(fParam44, 2);
				unk_0x5BB4D22B8B03A30B();
			}
			else
			{
				unk_0x164FB269C22AF51C("SC_LB_EMPTY");
				unk_0x5BB4D22B8B03A30B();
			}
			break;
		
		case 12:
			if (bParam45)
			{
				unk_0x164FB269C22AF51C("NUMBER");
				unk_0xF00CED653959DE03(unk_0xF34EE736CF047844(fParam44));
				unk_0x5BB4D22B8B03A30B();
			}
			else
			{
				unk_0x164FB269C22AF51C("SC_LB_EMPTY");
				unk_0x5BB4D22B8B03A30B();
			}
			break;
		
		case 17:
		case 19:
		case 18:
		case 20:
			if (bParam45)
			{
				if (Param0.f_29[iParam43] == 18 || Param0.f_29[iParam43] == 20)
				{
					fParam44 = (fParam44 * -1f);
				}
				if (!unk_0x4FB556ACEFA93098())
				{
					if (Param0.f_29[iParam43] == 19 || Param0.f_29[iParam43] == 20)
					{
						fParam44 = func_459(fParam44);
					}
					else
					{
						fParam44 = func_458(fParam44);
					}
				}
				unk_0x164FB269C22AF51C("NUMBER");
				unk_0xAC5C76ECFC58A8FE(fParam44, 2);
				unk_0x5BB4D22B8B03A30B();
			}
			else
			{
				unk_0x164FB269C22AF51C("SC_LB_EMPTY");
				unk_0x5BB4D22B8B03A30B();
			}
			break;
		
		case 0:
			break;
	}
}

float func_458(float fParam0)
{
	return (fParam0 / 0.3048f);
}

float func_459(float fParam0)
{
	return (fParam0 / 1609.344f);
}

void func_460(struct<30> Param0, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, int iParam43, int iParam44, bool bParam45, bool bParam46)
{
	if (iParam44 == 2147483647 || iParam44 == -2147483647)
	{
		bParam45 = false;
	}
	switch (Param0.f_29[iParam43])
	{
		case 5:
			if (bParam45)
			{
				unk_0x164FB269C22AF51C("NUMBER");
				unk_0xF00CED653959DE03(iParam44);
				unk_0x5BB4D22B8B03A30B();
			}
			else
			{
				unk_0x164FB269C22AF51C("SC_LB_EMPTY");
				unk_0x5BB4D22B8B03A30B();
			}
			break;
		
		case 7:
			if (bParam45)
			{
				unk_0x164FB269C22AF51C("NUMBER");
				unk_0xF00CED653959DE03(-iParam44);
				unk_0x5BB4D22B8B03A30B();
			}
			else
			{
				unk_0x164FB269C22AF51C("SC_LB_EMPTY");
				unk_0x5BB4D22B8B03A30B();
			}
			break;
		
		case 1:
		case 9:
		case 11:
			if (bParam45)
			{
				if (Param0.f_29[iParam43] == 11 && iParam44 < 0)
				{
					iParam44 = (iParam44 * -1);
				}
				if (iParam44 >= 3600000 || iParam44 <= -3600000)
				{
					unk_0x164FB269C22AF51C("STRING");
					unk_0x3451E7FFDF0EF375(iParam44, 14);
					unk_0x5BB4D22B8B03A30B();
				}
				else if (Param0.f_29[iParam43] == 9)
				{
					unk_0x164FB269C22AF51C("STRING");
					unk_0x3451E7FFDF0EF375(iParam44, 6);
					unk_0x5BB4D22B8B03A30B();
				}
				else
				{
					unk_0x164FB269C22AF51C("STRING");
					unk_0x3451E7FFDF0EF375(iParam44, 2055);
					unk_0x5BB4D22B8B03A30B();
				}
			}
			else
			{
				unk_0x164FB269C22AF51C("SC_LB_EMPTY");
				unk_0x5BB4D22B8B03A30B();
			}
			break;
		
		case 6:
			if (bParam45)
			{
				if (iParam44 == 2147483647)
				{
					unk_0x164FB269C22AF51C("SC_LB_EMPTY");
					unk_0x5BB4D22B8B03A30B();
				}
				else if (iParam44 >= 3600000 || iParam44 <= -3600000)
				{
					unk_0x164FB269C22AF51C("STRING");
					unk_0x3451E7FFDF0EF375(iParam44, 14);
					unk_0x5BB4D22B8B03A30B();
				}
				else
				{
					unk_0x164FB269C22AF51C("STRING");
					unk_0x3451E7FFDF0EF375(iParam44, 2055);
					unk_0x5BB4D22B8B03A30B();
				}
			}
			else
			{
				unk_0x164FB269C22AF51C("SC_LB_EMPTY");
				unk_0x5BB4D22B8B03A30B();
			}
			break;
		
		case 2:
		case 10:
			if (bParam45)
			{
				iParam44 = (iParam44 * -1);
				if (iParam44 >= 3600000 || iParam44 <= -3600000)
				{
					unk_0x164FB269C22AF51C("STRING");
					unk_0x3451E7FFDF0EF375(iParam44, 14);
					unk_0x5BB4D22B8B03A30B();
				}
				else if (Param0.f_29[iParam43] == 10)
				{
					unk_0x164FB269C22AF51C("STRING");
					unk_0x3451E7FFDF0EF375(iParam44, 6);
					unk_0x5BB4D22B8B03A30B();
				}
				else
				{
					unk_0x164FB269C22AF51C("STRING");
					unk_0x3451E7FFDF0EF375(iParam44, 2055);
					unk_0x5BB4D22B8B03A30B();
				}
			}
			else
			{
				unk_0x164FB269C22AF51C("SC_LB_EMPTY");
				unk_0x5BB4D22B8B03A30B();
			}
			break;
		
		case 3:
			if (bParam46)
			{
				if (unk_0xD6F3B6D7716CFF8E(iParam44))
				{
					unk_0x164FB269C22AF51C("SCLB_VEH_CUST");
					unk_0x734AB59A7DBD1DAA(unk_0x09885EF61FB22153(iParam44));
					unk_0x5BB4D22B8B03A30B();
				}
				else
				{
					unk_0x164FB269C22AF51C("SC_LB_EMPTY");
					unk_0x5BB4D22B8B03A30B();
				}
			}
			else if (unk_0xD6F3B6D7716CFF8E(iParam44))
			{
				unk_0x164FB269C22AF51C(unk_0x09885EF61FB22153(iParam44));
				unk_0x5BB4D22B8B03A30B();
			}
			else
			{
				unk_0x164FB269C22AF51C("SC_LB_EMPTY");
				unk_0x5BB4D22B8B03A30B();
			}
			break;
		
		case 8:
			if (func_464(iParam44) != 0)
			{
				unk_0x164FB269C22AF51C(func_461(func_464(iParam44), 0));
				unk_0x5BB4D22B8B03A30B();
			}
			else
			{
				unk_0x164FB269C22AF51C("SC_LB_EMPTY");
				unk_0x5BB4D22B8B03A30B();
			}
			break;
		
		case 13:
		case 15:
		case 14:
		case 16:
			if (bParam45)
			{
				if (Param0.f_29[iParam43] == 14 || Param0.f_29[iParam43] == 16)
				{
					iParam44 = (iParam44 * -1);
				}
				if (!unk_0x4FB556ACEFA93098())
				{
					if (Param0.f_29[iParam43] == 15 || Param0.f_29[iParam43] == 16)
					{
						iParam44 = unk_0xF34EE736CF047844(func_459(unk_0xBBDA792448DB5A89(iParam44)));
					}
					else
					{
						iParam44 = unk_0xF34EE736CF047844(func_458(unk_0xBBDA792448DB5A89(iParam44)));
					}
				}
				unk_0x164FB269C22AF51C("NUMBER");
				unk_0xF00CED653959DE03(iParam44);
				unk_0x5BB4D22B8B03A30B();
			}
			else
			{
				unk_0x164FB269C22AF51C("SC_LB_EMPTY");
				unk_0x5BB4D22B8B03A30B();
			}
			break;
		
		case 0:
			break;
	}
}

char* func_461(int iParam0, bool bParam1)
{
	struct<32> Var0;
	
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "WTU_INVALID";
			}
			else
			{
				return "WT_INVALID";
			}
			break;
		
		case joaat("weapon_unarmed"):
			if (bParam1)
			{
				return "WTU_UNARMED";
			}
			else
			{
				return "WT_UNARMED";
			}
			break;
		
		case joaat("weapon_pistol"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_combatpistol"):
			if (bParam1)
			{
				return "WTU_PIST_CBT";
			}
			else
			{
				return "WT_PIST_CBT";
			}
			break;
		
		case joaat("weapon_appistol"):
			if (bParam1)
			{
				return "WTU_PIST_AP";
			}
			else
			{
				return "WT_PIST_AP";
			}
			break;
		
		case joaat("weapon_smg"):
			if (bParam1)
			{
				return "WTU_SMG";
			}
			else
			{
				return "WT_SMG";
			}
			break;
		
		case joaat("weapon_microsmg"):
			if (bParam1)
			{
				return "WTU_SMG_MCR";
			}
			else
			{
				return "WT_SMG_MCR";
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL";
			}
			else
			{
				return "WT_RIFLE_ASL";
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN";
			}
			else
			{
				return "WT_RIFLE_CBN";
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ADV";
			}
			else
			{
				return "WT_RIFLE_ADV";
			}
			break;
		
		case joaat("weapon_mg"):
			if (bParam1)
			{
				return "WTU_MG";
			}
			else
			{
				return "WT_MG";
			}
			break;
		
		case joaat("weapon_combatmg"):
			if (bParam1)
			{
				return "WTU_MG_CBT";
			}
			else
			{
				return "WT_MG_CBT";
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			if (bParam1)
			{
				return "WTU_SG_PMP";
			}
			else
			{
				return "WT_SG_PMP";
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			if (bParam1)
			{
				return "WTU_SG_SOF";
			}
			else
			{
				return "WT_SG_SOF";
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			if (bParam1)
			{
				return "WTU_SG_ASL";
			}
			else
			{
				return "WT_SG_ASL";
			}
			break;
		
		case joaat("weapon_heavysniper"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY";
			}
			else
			{
				return "WT_SNIP_HVY";
			}
			break;
		
		case joaat("weapon_remotesniper"):
			if (bParam1)
			{
				return "WTU_SNIP_RMT";
			}
			else
			{
				return "WT_SNIP_RMT";
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			if (bParam1)
			{
				return "WTU_SNIP_RIF";
			}
			else
			{
				return "WT_SNIP_RIF";
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			if (bParam1)
			{
				return "WTU_GL";
			}
			else
			{
				return "WT_GL";
			}
			break;
		
		case joaat("weapon_rpg"):
			if (bParam1)
			{
				return "WTU_RPG";
			}
			else
			{
				return "WT_RPG";
			}
			break;
		
		case joaat("weapon_minigun"):
			if (bParam1)
			{
				return "WTU_MINIGUN";
			}
			else
			{
				return "WT_MINIGUN";
			}
			break;
		
		case joaat("weapon_grenade"):
			if (bParam1)
			{
				return "WTU_GNADE";
			}
			else
			{
				return "WT_GNADE";
			}
			break;
		
		case joaat("weapon_smokegrenade"):
			if (bParam1)
			{
				return "WTU_GNADE_SMK";
			}
			else
			{
				return "WT_GNADE_SMK";
			}
			break;
		
		case joaat("weapon_stickybomb"):
			if (bParam1)
			{
				return "WTU_GNADE_STK";
			}
			else
			{
				return "WT_GNADE_STK";
			}
			break;
		
		case joaat("weapon_molotov"):
			if (bParam1)
			{
				return "WTU_MOLOTOV";
			}
			else
			{
				return "WT_MOLOTOV";
			}
			break;
		
		case joaat("weapon_stungun"):
			if (bParam1)
			{
				return "WTU_STUN";
			}
			else
			{
				return "WT_STUN";
			}
			break;
		
		case joaat("weapon_petrolcan"):
			if (bParam1)
			{
				return "WTU_PETROL";
			}
			else
			{
				return "WT_PETROL";
			}
			break;
		
		case joaat("weapon_electric_fence"):
			if (bParam1)
			{
				return "WTU_ELCFEN";
			}
			else
			{
				return "WT_ELCFEN";
			}
			break;
		
		case joaat("vehicle_weapon_tank"):
			if (bParam1)
			{
				return "WTU_V_TANK";
			}
			else
			{
				return "WT_V_TANK";
			}
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			if (bParam1)
			{
				return "WTU_V_SPACERKT";
			}
			else
			{
				return "WT_V_SPACERKT";
			}
			break;
		
		case joaat("vehicle_weapon_player_laser"):
			if (bParam1)
			{
				return "WTU_V_PLRLSR";
			}
			else
			{
				return "WT_V_PLRLSR";
			}
			break;
		
		case joaat("object"):
			if (bParam1)
			{
				return "WTU_OBJECT";
			}
			else
			{
				return "WT_OBJECT";
			}
			break;
		
		case joaat("gadget_parachute"):
			if (bParam1)
			{
				return "WTU_PARA";
			}
			else
			{
				return "WT_PARA";
			}
			break;
		
		case joaat("AMMO_RPG"):
			if (bParam1)
			{
				return "WTU_A_RPG";
			}
			else
			{
				return "WT_A_RPG";
			}
			break;
		
		case joaat("AMMO_TANK"):
			if (bParam1)
			{
				return "WTU_A_TANK";
			}
			else
			{
				return "WT_A_TANK";
			}
			break;
		
		case joaat("AMMO_SPACE_ROCKET"):
			if (bParam1)
			{
				return "WTU_A_SPACERKT";
			}
			else
			{
				return "WT_A_SPACERKT";
			}
			break;
		
		case joaat("AMMO_PLAYER_LASER"):
			if (bParam1)
			{
				return "WTU_A_PLRLSR";
			}
			else
			{
				return "WT_A_PLRLSR";
			}
			break;
		
		case joaat("AMMO_ENEMY_LASER"):
			if (bParam1)
			{
				return "WTU_A_ENMYLSR";
			}
			else
			{
				return "WT_A_ENMYLSR";
			}
			break;
		
		case joaat("weapon_knife"):
			if (bParam1)
			{
				return "WTU_KNIFE";
			}
			else
			{
				return "WT_KNIFE";
			}
			break;
		
		case joaat("weapon_nightstick"):
			if (bParam1)
			{
				return "WTU_NGTSTK";
			}
			else
			{
				return "WT_NGTSTK";
			}
			break;
		
		case joaat("weapon_hammer"):
			if (bParam1)
			{
				return "WTU_HAMMER";
			}
			else
			{
				return "WT_HAMMER";
			}
			break;
		
		case joaat("weapon_bat"):
			if (bParam1)
			{
				return "WTU_BAT";
			}
			else
			{
				return "WT_BAT";
			}
			break;
		
		case joaat("weapon_crowbar"):
			if (bParam1)
			{
				return "WTU_CROWBAR";
			}
			else
			{
				return "WT_CROWBAR";
			}
			break;
		
		case joaat("weapon_golfclub"):
			if (bParam1)
			{
				return "WTU_GOLFCLUB";
			}
			else
			{
				return "WT_GOLFCLUB";
			}
			break;
		
		case joaat("weapon_rammed_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_run_over_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			if (bParam1)
			{
				return "WTU_SMG_ASL";
			}
			else
			{
				return "WT_SMG_ASL";
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			if (bParam1)
			{
				return "WTU_SG_BLP";
			}
			else
			{
				return "WT_SG_BLP";
			}
			break;
		
		case joaat("weapon_pistol50"):
			if (bParam1)
			{
				return "WTU_PIST_50";
			}
			else
			{
				return "WT_PIST_50";
			}
			break;
		
		case joaat("weapon_bottle"):
			if (bParam1)
			{
				return "WTU_BOTTLE";
			}
			else
			{
				return "WT_BOTTLE";
			}
			break;
		
		case joaat("weapon_gusenberg"):
			if (bParam1)
			{
				return "WTU_GUSENBERG";
			}
			else
			{
				return "WT_GUSENBERG";
			}
			break;
		
		case joaat("weapon_snspistol"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL";
			}
			else
			{
				return "WT_SNSPISTOL";
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			if (bParam1)
			{
				return "WTU_VPISTOL";
			}
			else
			{
				return "WT_VPISTOL";
			}
			break;
		
		case joaat("weapon_dagger"):
			if (bParam1)
			{
				return "WTU_DAGGER";
			}
			else
			{
				return "WT_DAGGER";
			}
			break;
		
		case joaat("weapon_flaregun"):
			if (bParam1)
			{
				return "WTU_FLAREGUN";
			}
			else
			{
				return "WT_FLAREGUN";
			}
			break;
		
		case joaat("weapon_heavypistol"):
			if (bParam1)
			{
				return "WTU_HEAVYPSTL";
			}
			else
			{
				return "WT_HEAVYPSTL";
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (bParam1)
			{
				return "WTU_RIFLE_SCBN";
			}
			else
			{
				return "WT_RIFLE_SCBN";
			}
			break;
		
		case joaat("weapon_musket"):
			if (bParam1)
			{
				return "WTU_MUSKET";
			}
			else
			{
				return "WT_MUSKET";
			}
			break;
		
		case joaat("weapon_firework"):
			if (bParam1)
			{
				return "WTU_FWRKLNCHR";
			}
			else
			{
				return "WT_FWRKLNCHR";
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (bParam1)
			{
				return "WTU_MKRIFLE";
			}
			else
			{
				return "WT_MKRIFLE";
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			if (bParam1)
			{
				return "WTU_HVYSHOT";
			}
			else
			{
				return "WT_HVYSHOT";
			}
			break;
		
		case joaat("weapon_proxmine"):
			if (bParam1)
			{
				return "WTU_PRXMINE";
			}
			else
			{
				return "WT_PRXMINE";
			}
			break;
		
		case joaat("weapon_hominglauncher"):
			if (bParam1)
			{
				return "WTU_HOMLNCH";
			}
			else
			{
				return "WT_HOMLNCH";
			}
			break;
		
		case joaat("weapon_hatchet"):
			if (bParam1)
			{
				return "WTU_HATCHET";
			}
			else
			{
				return "WT_HATCHET";
			}
			break;
		
		case joaat("weapon_combatpdw"):
			if (bParam1)
			{
				return "WTU_COMBATPDW";
			}
			else
			{
				return "WT_COMBATPDW";
			}
			break;
		
		case joaat("weapon_knuckle"):
			if (bParam1)
			{
				return "WTU_KNUCKLE";
			}
			else
			{
				return "WT_KNUCKLE";
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			if (bParam1)
			{
				return "WTU_MKPISTOL";
			}
			else
			{
				return "WT_MKPISTOL";
			}
			break;
		
		default:
			if (func_463(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_462(&(Var0.f_31));
				}
				else
				{
					return func_462(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_462(var uParam0)
{
	return uParam0;
}

int func_463(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x528FD069988D41D8();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x095531E1E3D0077D(iVar0, uParam1))
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

int func_464(int iParam0)
{
	if (iParam0 == 600)
	{
		return joaat("weapon_railgun");
	}
	else if (iParam0 == 500)
	{
		return joaat("weapon_minigun");
	}
	else if (iParam0 == 400)
	{
		return joaat("weapon_mg");
	}
	else if (iParam0 == 401)
	{
		return joaat("weapon_combatmg");
	}
	else if (iParam0 == 402)
	{
		return -572349828;
	}
	else if (iParam0 == 300)
	{
		return joaat("weapon_assaultrifle");
	}
	else if (iParam0 == 301)
	{
		return joaat("weapon_carbinerifle");
	}
	else if (iParam0 == 302)
	{
		return joaat("weapon_advancedrifle");
	}
	else if (iParam0 == 303)
	{
		return joaat("weapon_heavyrifle");
	}
	else if (iParam0 == 200)
	{
		return joaat("weapon_pumpshotgun");
	}
	else if (iParam0 == 201)
	{
		return joaat("weapon_sawnoffshotgun");
	}
	else if (iParam0 == 202)
	{
		return joaat("weapon_assaultshotgun");
	}
	else if (iParam0 == 203)
	{
		return joaat("weapon_bullpupshotgun");
	}
	else if (iParam0 == 100)
	{
		return joaat("weapon_microsmg");
	}
	else if (iParam0 == 101)
	{
		return joaat("weapon_smg");
	}
	else if (iParam0 == 102)
	{
		return joaat("weapon_assaultsmg");
	}
	else if (iParam0 == 0)
	{
		return joaat("weapon_pistol");
	}
	else if (iParam0 == 1)
	{
		return joaat("weapon_combatpistol");
	}
	else if (iParam0 == 2)
	{
		return joaat("weapon_appistol");
	}
	else if (iParam0 == 3)
	{
		return joaat("weapon_pistol50");
	}
	return 0;
}

void func_465(var uParam0, int iParam1, int iParam2, int iParam3, char[4] cParam4, char[4] cParam5)
{
	unk_0xF6EA2AC68E7C7293(uParam0, "SET_SLOT");
	unk_0xA734310215BCF528(iParam1);
	unk_0xA734310215BCF528(iParam2);
	if (iParam3 > 0)
	{
		unk_0x164FB269C22AF51C("NUMBER");
		unk_0xF00CED653959DE03(iParam3);
		unk_0x5BB4D22B8B03A30B();
	}
	else
	{
		unk_0x164FB269C22AF51C("SC_LB_EMPTY");
		unk_0x5BB4D22B8B03A30B();
	}
	unk_0x3FB5104DF4233F1D(cParam4);
	unk_0x3FB5104DF4233F1D(uParam5);
}

int func_466(var uParam0, var uParam1)
{
	if (!func_425(*uParam0))
	{
		return 0;
	}
	if (!func_425(*uParam1))
	{
		return 0;
	}
	if (unk_0xCC1AA29BCB551C9B(uParam0, uParam1))
	{
		return 1;
	}
	return 0;
}

void func_467(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	var uVar77;
	
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	if (!unk_0x4ED6CFDFE8D4131A(uParam0->f_42, 5) && !unk_0x4ED6CFDFE8D4131A(uParam0->f_42, 6))
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if ((uParam1[iVar0 /*100*/])->f_75 != 0)
			{
				iVar1 = iVar0 + 1;
				while (iVar1 <= 11)
				{
					if ((uParam1[iVar1 /*100*/])->f_75 != 0)
					{
						if ((uParam1[iVar1 /*100*/])->f_75 < (uParam1[iVar0 /*100*/])->f_75)
						{
							uVar77 = (uParam1[iVar1 /*100*/])->f_75;
							(uParam1[iVar1 /*100*/])->f_75 = (uParam1[iVar0 /*100*/])->f_75;
							(uParam1[iVar0 /*100*/])->f_75 = uVar77;
							Var2 = { *(uParam1[iVar1 /*100*/]) };
							*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
							*(uParam1[iVar0 /*100*/]) = { Var2 };
						}
						else if ((uParam1[iVar1 /*100*/])->f_75 == (uParam1[iVar0 /*100*/])->f_75)
						{
							if ((uParam1[iVar1 /*100*/])->f_59 != -1)
							{
								if ((uParam1[iVar1 /*100*/])->f_59 < (uParam1[iVar0 /*100*/])->f_59 || (uParam1[iVar0 /*100*/])->f_59 == -1)
								{
									uVar77 = (uParam1[iVar1 /*100*/])->f_75;
									(uParam1[iVar1 /*100*/])->f_75 = (uParam1[iVar0 /*100*/])->f_75;
									(uParam1[iVar0 /*100*/])->f_75 = uVar77;
									Var2 = { *(uParam1[iVar1 /*100*/]) };
									*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
									*(uParam1[iVar0 /*100*/]) = { Var2 };
								}
							}
						}
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_468(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (!unk_0x4ED6CFDFE8D4131A(uParam0->f_42, 5) && !unk_0x4ED6CFDFE8D4131A(uParam0->f_42, 6))
	{
		iVar4 = 0;
		while (iVar4 < 12)
		{
			if (func_471(uParam1, iVar3, &uVar0, 0))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 1;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_471(uParam1, iVar3, &uVar1, 1))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 2;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_471(uParam1, iVar3, &uVar2, 2))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 3;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			iVar4++;
		}
	}
	else
	{
		func_469(uParam1);
	}
}

void func_469(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar16;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1835390.f_2704[iVar0] = 0;
		Global_1835390.f_2775[iVar0] = -1;
		iVar0++;
	}
	Var3 = { func_430(unk_0x217E9DC48139933D()) };
	if (unk_0x18D832AFF28DF8C9(Global_1835390.f_2826))
	{
		iVar16 = unk_0x83821513A0AE1008(Global_1835390.f_2826);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar16)
		{
			if (iVar0 < 12)
			{
				func_470(&Global_1839591);
				iVar2 = 0;
				unk_0x7F9E22C523BDD275(Global_1835390.f_2826, iVar0, &Global_1839591);
				*(uParam0[iVar0 /*100*/]) = { Global_1839591.f_1 };
				(uParam0[iVar0 /*100*/])->f_16 = { Global_1839591.f_17 };
				(uParam0[iVar0 /*100*/])->f_32 = { Global_1839591.f_33 };
				(uParam0[iVar0 /*100*/])->f_45 = { Global_1839591.f_46 };
				(uParam0[iVar0 /*100*/])->f_58 = Global_1839591.f_59;
				(uParam0[iVar0 /*100*/])->f_59 = Global_1839591.f_60;
				Global_1835390.f_2708 = Global_1839591.f_62;
				Global_1835390.f_2769 = Global_1839591.f_63;
				iVar2 = 0;
				if (unk_0x4ED6CFDFE8D4131A(Global_1839591.f_61, 1))
				{
					iVar2 = 1;
				}
				else if (unk_0x4ED6CFDFE8D4131A(Global_1839591.f_61, 2))
				{
					iVar2 = 2;
				}
				else if (unk_0x4ED6CFDFE8D4131A(Global_1839591.f_61, 3))
				{
					iVar2 = 3;
				}
				Global_1835390.f_2704[(iVar2 - 1)]++;
				(uParam0[iVar0 /*100*/])->f_75 = iVar2;
				if ((uParam0[iVar0 /*100*/])->f_59 != -1)
				{
					if (unk_0x4ED6CFDFE8D4131A(Global_1839591.f_61, 0))
					{
						(uParam0[iVar0 /*100*/])->f_74 = 1;
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_74 = 0;
					}
					if (func_466(&((uParam0[iVar0 /*100*/])->f_32), &Var3))
					{
						Global_1835390.f_2775[(iVar2 - 1)] = 0;
					}
				}
				iVar1 = 0;
				while (iVar1 < Global_1839591.f_62)
				{
					if (unk_0x4ED6CFDFE8D4131A(Global_1839591.f_63, iVar1))
					{
						(uParam0[iVar0 /*100*/])->f_67[iVar1] = Global_1839591.f_97[iVar1];
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_60[iVar1] = Global_1839591.f_64[iVar1];
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_470(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 64);
	StringCopy(&(uParam0->f_17), "", 64);
	uParam0->f_33 = { Var0 };
	uParam0->f_46 = { Var0 };
	uParam0->f_59 = 0;
	uParam0->f_60 = 0;
	uParam0->f_61 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	iVar13 = 0;
	while (iVar13 < 32)
	{
		uParam0->f_64[iVar13] = 0f;
		uParam0->f_97[iVar13] = 0;
		iVar13++;
	}
}

int func_471(var uParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	if (*uParam2 == 0)
	{
		if (Global_1835390[iParam3 /*901*/][0 /*75*/].f_59 > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_1835390[iParam3 /*901*/][0 /*75*/] };
			Global_1839534[iParam3 /*16*/] = { Global_1835390[iParam3 /*901*/][0 /*75*/] };
			Global_1839534.f_49[iParam3] = Global_1835390[iParam3 /*901*/][0 /*75*/].f_67[Global_1835390.f_2779];
			Global_1839534.f_53[iParam3] = Global_1835390[iParam3 /*901*/][0 /*75*/].f_60[Global_1835390.f_2779];
			*uParam2++;
			return 1;
		}
	}
	else if (*uParam2 == 1)
	{
		if (Global_1835390.f_2775[iParam3] > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_1835390[iParam3 /*901*/][Global_1835390.f_2775[iParam3] /*75*/] };
			*uParam2++;
			return 1;
		}
		else
		{
			if (Global_1835390.f_2775[iParam3] < 0)
			{
				StringCopy(uParam0[iParam1 /*100*/], unk_0x7124FD9AC0E01BA0(unk_0x217E9DC48139933D()), 64);
				(uParam0[iParam1 /*100*/])->f_32 = { func_430(unk_0x217E9DC48139933D()) };
				(uParam0[iParam1 /*100*/])->f_59 = -1;
				(uParam0[iParam1 /*100*/])->f_67[0] = -1;
				(uParam0[iParam1 /*100*/])->f_67[1] = -1;
				(uParam0[iParam1 /*100*/])->f_67[2] = -1;
				(uParam0[iParam1 /*100*/])->f_67[3] = -1;
				(uParam0[iParam1 /*100*/])->f_60[0] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[1] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[2] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[3] = -1f;
				*uParam2++;
				return 1;
			}
			*uParam2++;
		}
	}
	else if ((*uParam2 % 2) == 0)
	{
		iVar0 = (*uParam2 / 2);
		if ((Global_1835390.f_2775[iParam3] - iVar0) >= 1)
		{
			if (Global_1835390[iParam3 /*901*/][(Global_1835390.f_2775[iParam3] - iVar0) /*75*/].f_59 > 0)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_1835390[iParam3 /*901*/][(Global_1835390.f_2775[iParam3] - iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	else
	{
		iVar0 = unk_0xF34EE736CF047844(unk_0xBBDA792448DB5A89((*uParam2 / 2)));
		if ((Global_1835390.f_2775[iParam3] + iVar0) < 12 && (Global_1835390.f_2775[iParam3] + iVar0) > 0)
		{
			if (Global_1835390[iParam3 /*901*/][(Global_1835390.f_2775[iParam3] + iVar0) /*75*/].f_59 > 1)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_1835390[iParam3 /*901*/][(Global_1835390.f_2775[iParam3] + iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	*uParam2++;
	return 0;
}

void func_472(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	unk_0xF73FBE4845C43B5B(&iParam2, 7);
	unk_0xF6EA2AC68E7C7293(uParam0, "SET_SLOT");
	unk_0xA734310215BCF528(iParam1);
	unk_0xA734310215BCF528(iParam2);
	unk_0x164FB269C22AF51C(sParam3);
	unk_0x905C5F5659CECDB5();
	unk_0xD4D85E4148B638AD();
}

int func_473(var uParam0)
{
	if (!Global_1835388)
	{
		if (!func_441(&(Global_1835390.f_2827)))
		{
			func_420(&(Global_1835390.f_2827), 1, 0);
			return 0;
		}
		else if (!func_419(&(Global_1835390.f_2827), 1000, 1))
		{
			return 0;
		}
	}
	if (((!unk_0xBEA038AAF3BCAE99() || !unk_0x3758E345C82DAFF2()) || (!unk_0x14B7FA24A6729F52() && unk_0xE45678312B6DF7F8())) || Global_1835390.f_2832 != 0)
	{
		unk_0x7D1D4A3602B6AD4E(&(uParam0->f_42), 4);
		return 1;
	}
	if (!unk_0x4ED6CFDFE8D4131A(uParam0->f_42, 4))
	{
		func_500(uParam0);
		unk_0xF73FBE4845C43B5B(&(uParam0->f_42), 4);
		return 0;
	}
	else if (unk_0x4ED6CFDFE8D4131A(uParam0->f_42, 5))
	{
		(*uParam0)[0] = 2;
		(*uParam0)[1] = 1;
		(*uParam0)[2] = 3;
		return 1;
	}
	if (!func_498(uParam0))
	{
		return 0;
	}
	if (!func_496(uParam0))
	{
		return 0;
	}
	if (!func_489(uParam0))
	{
		return 0;
	}
	if (!unk_0x4ED6CFDFE8D4131A(uParam0->f_42, 6))
	{
		func_344(&Global_1839721);
		func_468(uParam0, &Global_1839721);
		func_467(uParam0, &Global_1839721);
		unk_0xF73FBE4845C43B5B(&(uParam0->f_42), 6);
	}
	if (!unk_0x4ED6CFDFE8D4131A(uParam0->f_42, 7))
	{
		if (!func_441(&(Global_1835390.f_2830)))
		{
			func_420(&(Global_1835390.f_2830), 1, 0);
		}
		else if (func_419(&(Global_1835390.f_2830), 30000, 1))
		{
			unk_0xF73FBE4845C43B5B(&(uParam0->f_42), 7);
		}
		if (func_486(&Global_1839721))
		{
		}
		else
		{
			return 0;
		}
		if (func_483(&Global_1839721))
		{
		}
		else
		{
			return 0;
		}
		if (func_477(&Global_1839721))
		{
			func_474(&Global_1839721);
			unk_0xF73FBE4845C43B5B(&(uParam0->f_42), 7);
			func_474(&Global_1839721);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_474(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_476(Global_1835390.f_2826);
	if (Global_1838575.f_81[iVar2] != 0)
	{
		func_475(-1, iVar2);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_470(&Global_1839591);
		if ((uParam0[iVar0 /*100*/])->f_75 != 0)
		{
			Global_1839591 = Global_1835390.f_2826;
			Global_1839591.f_1 = { *(uParam0[iVar0 /*100*/]) };
			if (unk_0xD3852F22AB713A1F(&((uParam0[iVar0 /*100*/])->f_16), ""))
			{
				Global_1839591.f_17 = { *(uParam0[iVar0 /*100*/]) };
			}
			else
			{
				Global_1839591.f_17 = { (uParam0[iVar0 /*100*/])->f_16 };
			}
			Global_1839591.f_33 = { (uParam0[iVar0 /*100*/])->f_32 };
			if (func_425((uParam0[iVar0 /*100*/])->f_45))
			{
				Global_1839591.f_46 = { (uParam0[iVar0 /*100*/])->f_45 };
			}
			else
			{
				Global_1839591.f_46 = { (uParam0[iVar0 /*100*/])->f_32 };
			}
			Global_1839591.f_59 = (uParam0[iVar0 /*100*/])->f_58;
			Global_1839591.f_60 = (uParam0[iVar0 /*100*/])->f_59;
			Global_1839591.f_62 = Global_1835390.f_2708;
			Global_1839591.f_63 = Global_1835390.f_2770;
			if ((uParam0[iVar0 /*100*/])->f_74)
			{
				unk_0xF73FBE4845C43B5B(&(Global_1839591.f_61), 0);
			}
			else
			{
				unk_0x7D1D4A3602B6AD4E(&(Global_1839591.f_61), 0);
			}
			unk_0xF73FBE4845C43B5B(&(Global_1839591.f_61), (uParam0[iVar0 /*100*/])->f_75);
			iVar1 = 0;
			while (iVar1 < Global_1839591.f_62)
			{
				if (unk_0x4ED6CFDFE8D4131A(Global_1839591.f_63, iVar1))
				{
					Global_1839591.f_97[iVar1] = (uParam0[iVar0 /*100*/])->f_67[iVar1];
				}
				else
				{
					Global_1839591.f_64[iVar1] = (uParam0[iVar0 /*100*/])->f_60[iVar1];
				}
				iVar1++;
			}
			Global_1838575.f_81[iVar2] = Global_1835390.f_2826;
			unk_0xD9289E134A65E11D(&Global_1839591);
		}
		iVar0++;
	}
	Global_1838575.f_87[iVar2 /*3*/] = { func_205(unk_0x217E9DC48139933D()) };
}

void func_475(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != -1)
	{
		if (unk_0x18D832AFF28DF8C9(Global_1838575.f_81[iParam1]))
		{
			unk_0xA01F3D5F44FF77A8(Global_1838575.f_81[iParam1]);
		}
		Global_1838575.f_81[iParam1] = 0;
	}
	else if (iParam0 != -1)
	{
		if (unk_0x18D832AFF28DF8C9(iParam0))
		{
			unk_0xA01F3D5F44FF77A8(iParam0);
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_1838575.f_81[iVar0] == iParam0)
			{
				Global_1838575.f_81[iVar0] = 0;
			}
			iVar0++;
		}
	}
}

int func_476(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1838575.f_81[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1838575.f_81[iVar0] == 0)
		{
			return iVar0;
		}
		else if (unk_0x18D832AFF28DF8C9(Global_1838575.f_81[iVar0]))
		{
			iVar3 = unk_0x6C2B92A2AE2AA20D(Global_1838575.f_81[iVar0]);
			if (iVar3 > iVar2)
			{
				iVar1 = iVar0;
				iVar2 = iVar3;
			}
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_477(var uParam0)
{
	int iVar0;
	int iVar1;
	
	switch ((uParam0[0 /*100*/])->f_76)
	{
		case 0:
			func_481(uParam0);
			if (unk_0x88CFAE250D3E0C71() && !unk_0xB8D6825813930299(0))
			{
				(uParam0[0 /*100*/])->f_76 = 3;
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if (func_425((uParam0[iVar0 /*100*/])->f_32))
				{
					if (!func_480(&((uParam0[iVar0 /*100*/])->f_32), &Global_1841018))
					{
						Global_1841018[Global_1841018.f_206 /*13*/] = { (uParam0[iVar0 /*100*/])->f_32 };
						Global_1841018.f_206++;
					}
				}
				iVar0++;
			}
			if (Global_1841018.f_206 > 0)
			{
				(uParam0[0 /*100*/])->f_76 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_76 = 3;
			}
			break;
		
		case 1:
			if (func_478(&((uParam0[1 /*100*/])->f_76), &(Global_1841018.f_206), &Global_1841018, &(Global_1841018.f_157)))
			{
				(uParam0[0 /*100*/])->f_76 = 2;
			}
			break;
		
		case 2:
			if (Global_1841018.f_206 > 12)
			{
				Global_1841018.f_206 = 12;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				iVar1 = 0;
				while (iVar1 < Global_1841018.f_206)
				{
					if (func_425((uParam0[iVar0 /*100*/])->f_32) && func_425(Global_1841018[iVar1 /*13*/]))
					{
						if (unk_0xCC1AA29BCB551C9B(&((uParam0[iVar0 /*100*/])->f_32), &(Global_1841018[iVar1 /*13*/])))
						{
							(uParam0[iVar0 /*100*/])->f_80 = { Global_1841018.f_157[iVar1 /*4*/] };
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			(uParam0[0 /*100*/])->f_76 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_478(var uParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	int iVar35;
	
	switch (*uParam0)
	{
		case 0:
			if (unk_0xBA5EE09B4A4C59D4())
			{
			}
			else
			{
				unk_0x557916D3536FC16D();
				unk_0xC0FDA35F83EDE155(uParam2, *uParam1);
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (!unk_0xBA5EE09B4A4C59D4())
			{
				if (unk_0x9FFD2D28703D02B0())
				{
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
			}
			break;
		
		case 2:
			iVar35 = 0;
			while (iVar35 < *uParam1)
			{
				if (unk_0x9382268CA5D2104C(uParam2[iVar35 /*13*/], &uVar0))
				{
					func_479(&uVar0, uParam3[iVar35 /*4*/]);
				}
				iVar35++;
			}
			if (unk_0xBA5EE09B4A4C59D4())
			{
				unk_0x440B68AA719F90C4();
			}
			else
			{
				unk_0x557916D3536FC16D();
			}
			*uParam0 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_479(var uParam0, var uParam1)
{
	unk_0xC8CC4EDA94A8B596(uParam0, 35, uParam1);
}

int func_480(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_425(*(uParam1[iVar0 /*13*/])))
		{
			if (unk_0xCC1AA29BCB551C9B(uParam0, uParam1[iVar0 /*13*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_481(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_482(&(Global_1841018[iVar0 /*13*/]));
		StringCopy(&(Global_1841018.f_157[iVar0 /*4*/]), "", 16);
		iVar0++;
	}
	if ((uParam0[0 /*100*/])->f_76 > 0)
	{
		(uParam0[0 /*100*/])->f_76 = 0;
		(uParam0[1 /*100*/])->f_76 = 0;
		if (!unk_0xBA5EE09B4A4C59D4())
		{
			unk_0x557916D3536FC16D();
		}
	}
	if (unk_0xBA5EE09B4A4C59D4())
	{
		unk_0x440B68AA719F90C4();
	}
	Global_1841018.f_206 = 0;
}

void func_482(var uParam0)
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

int func_483(var uParam0)
{
	int iVar0;
	
	if (unk_0xB0FB6CFAA5A1C833())
	{
		return 1;
	}
	else if (unk_0xD1CCC2A2639D325F())
	{
		if (!func_485(uParam0))
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_484(&((uParam0[iVar0 /*100*/])->f_78), &((uParam0[iVar0 /*100*/])->f_32), uParam0[iVar0 /*100*/]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_484(var uParam0, var uParam1, char* sParam2)
{
	if (*uParam0 == 2)
	{
		return 1;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_425(*uParam1))
			{
				if (!unk_0xB7F42FDF8C8B7A13(uParam1))
				{
					if (unk_0xD1CCC2A2639D325F())
					{
						if (unk_0x1E68065D012F08EC(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else if (unk_0x50732C31F5D806DF())
					{
						if (unk_0x1E68065D012F08EC(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam2, unk_0xB1F54F0911A8C783(uParam1), 64);
						if (unk_0x588D1C657C1F9299())
						{
						}
						else if (unk_0x88CFAE250D3E0C71())
						{
						}
						else if (unk_0xB0FB6CFAA5A1C833())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam2, unk_0x7124FD9AC0E01BA0(unk_0x447623DF91C64D19(uParam1)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0xB7F42FDF8C8B7A13(uParam1))
			{
				if (!unk_0xA70C221F6CFC3914())
				{
					if (unk_0x95B877F529F26A33())
					{
						StringCopy(sParam2, unk_0xB1F54F0911A8C783(uParam1), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam2, unk_0x7124FD9AC0E01BA0(unk_0x447623DF91C64D19(uParam1)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_485(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0xD1CCC2A2639D325F())
	{
		return 1;
	}
	if ((uParam0[0 /*100*/])->f_78 == 2)
	{
		return 1;
	}
	switch ((uParam0[0 /*100*/])->f_78)
	{
		case 0:
			Global_1835390.f_3183 = 0;
			iVar1 = 0;
			while (iVar1 < 12)
			{
				StringCopy(&(Global_1835390.f_2833[iVar1 /*16*/]), "", 64);
				func_482(&(Global_1835390.f_3026[iVar1 /*13*/]));
				if (func_425((uParam0[iVar1 /*100*/])->f_32))
				{
					Global_1835390.f_3026[Global_1835390.f_3183 /*13*/] = { (uParam0[iVar1 /*100*/])->f_32 };
					Global_1835390.f_3183++;
				}
				iVar1++;
			}
			if (Global_1835390.f_3183 > 0)
			{
				(uParam0[0 /*100*/])->f_79 = unk_0xCC5ACA5901878878(&(Global_1835390.f_3026), Global_1835390.f_3183);
				(uParam0[0 /*100*/])->f_78 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0x64863AC6A762CE1B((uParam0[0 /*100*/])->f_79, &(Global_1835390.f_2833), Global_1835390.f_3183);
			if (iVar0 == 0)
			{
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (func_425((uParam0[iVar1 /*100*/])->f_32))
					{
						*(uParam0[iVar1 /*100*/]) = { Global_1835390.f_2833[iVar2 /*16*/] };
						iVar2++;
					}
					iVar1++;
				}
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			else if (iVar0 == -1)
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			(uParam0[0 /*100*/])->f_79 = -1;
			return 1;
			break;
	}
	return 0;
}

int func_486(var uParam0)
{
	int iVar0;
	
	if (unk_0xD1CCC2A2639D325F())
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_488(&((uParam0[iVar0 /*100*/])->f_77), &((uParam0[iVar0 /*100*/])->f_16), &((uParam0[iVar0 /*100*/])->f_84), &(Global_1835390.f_2833), &((uParam0[iVar0 /*100*/])->f_79)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_487(&((uParam0[iVar0 /*100*/])->f_77), (uParam0[iVar0 /*100*/])->f_16, &((uParam0[iVar0 /*100*/])->f_84)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_487(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17)
{
	struct<13> Var0;
	
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0x2CF12F9ACF18F048(&uParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0x0979D34409A38FEB(&uParam1, &Var0, 13);
	switch (*uParam0)
	{
		case 0:
			if (func_425(Var0))
			{
				if (!unk_0xB7F42FDF8C8B7A13(&Var0))
				{
					if (unk_0x50732C31F5D806DF() || unk_0xD1CCC2A2639D325F())
					{
						if (unk_0x1E68065D012F08EC(&Var0))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam17, unk_0xB1F54F0911A8C783(&Var0), 64);
						if (unk_0x588D1C657C1F9299())
						{
						}
						else if (unk_0x88CFAE250D3E0C71())
						{
						}
						else if (unk_0xB0FB6CFAA5A1C833())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam17, unk_0x7124FD9AC0E01BA0(unk_0x447623DF91C64D19(&Var0)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0xB7F42FDF8C8B7A13(&Var0))
			{
				if (!unk_0xA70C221F6CFC3914())
				{
					if (unk_0x95B877F529F26A33())
					{
						StringCopy(sParam17, unk_0xB1F54F0911A8C783(&Var0), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam17, unk_0x7124FD9AC0E01BA0(unk_0x447623DF91C64D19(&Var0)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_488(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4)
{
	int iVar0;
	struct<13> Var1[1];
	
	if (!unk_0xD1CCC2A2639D325F())
	{
		return 1;
	}
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0x2CF12F9ACF18F048(sParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0x0979D34409A38FEB(sParam1, &(Var1[0 /*13*/]), 13);
	switch (*uParam0)
	{
		case 0:
			StringCopy(uParam3[0 /*16*/], "", 64);
			if (func_425(Var1[0 /*13*/]))
			{
				if (!unk_0xB7F42FDF8C8B7A13(&(Var1[0 /*13*/])))
				{
					*uParam4 = unk_0xCC5ACA5901878878(&Var1, 1);
					*uParam0 = 1;
				}
				else
				{
					StringCopy(sParam2, unk_0x7124FD9AC0E01BA0(unk_0x447623DF91C64D19(&(Var1[0 /*13*/]))), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0x64863AC6A762CE1B(*uParam4, uParam3, 1);
			if (iVar0 == 0)
			{
				*sParam2 = { *(uParam3[0 /*16*/]) };
				*uParam0 = 2;
			}
			else if (iVar0 == -1)
			{
				*uParam0 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			*uParam4 = -1;
			return 1;
			break;
	}
	return 0;
}

int func_489(var uParam0)
{
	struct<97> Var0;
	struct<6> Var98;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	bool bVar112;
	int iVar113;
	bool bVar114;
	int iVar115;
	struct<13> Var116;
	
	Var0.f_19.f_1 = 4;
	iVar109 = -1;
	iVar113 = 2;
	Var116 = { func_430(unk_0x217E9DC48139933D()) };
	switch ((*uParam0)[iVar113])
	{
		case 0:
			Global_1835390.f_2775[iVar113] = -1;
			Global_1835390.f_2704[iVar113] = 0;
			Global_1835013.f_374 = -1;
			if (unk_0x2C079282730811D0())
			{
				if (unk_0x6BB4EDAA3A4778E8(&Var116))
				{
					if (unk_0x534D7C93C5A1A2C4(&(uParam0->f_7), 35, &Var116))
					{
						uParam0->f_44.f_2 = uParam0->f_7;
						uParam0->f_44.f_1 = 3;
						(*uParam0)[iVar113] = 1;
						return 0;
					}
				}
				else
				{
					(*uParam0)[iVar113] = 3;
					return 1;
				}
			}
			else
			{
				(*uParam0)[iVar113] = 3;
				return 1;
			}
			break;
		
		case 1:
			uParam0->f_44.f_1 = 3;
			Var98.f_0 = uParam0->f_44;
			Var98.f_1 = uParam0->f_44.f_1;
			if (func_410(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var116, func_495(), 0, 0, 0))
			{
				func_428(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0xC45B167DA3BDE4EE(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						iVar111 = 0;
						iVar106 = 0;
						if (func_495())
						{
							iVar111 = 0;
							while (iVar111 < Var98.f_3)
							{
								unk_0x0778FE700D500355(iVar111, &Var0);
								if (Global_1835013.f_374 < 0)
								{
									if (func_466(&Var0, &Var116) || func_466(&Var0, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var0.f_96;
									}
								}
								if (iVar109 < 0)
								{
									if (unk_0x4ED6CFDFE8D4131A(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0x7499B86B7F4CA729(iVar111, 0))
										{
											iVar109 = iVar111;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0x51C63F8BCD21FBC3(iVar111, 0))
									{
										iVar109 = iVar111;
									}
								}
								func_494(&Var0);
								iVar111++;
							}
							if (iVar109 < 0)
							{
								iVar109 = Var98.f_3;
							}
						}
						iVar111 = 0;
						unk_0x0778FE700D500355(0, &Var0);
						if (Var0.f_96 <= 1)
						{
							if (Global_1835390.f_2704[iVar113] < 12)
							{
								if (func_495() && iVar109 == 0)
								{
									func_493(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Var0.f_96);
									Global_1835390.f_2775[iVar113] = 0;
									Global_1835390.f_2704[iVar113]++;
								}
								if (func_495() && (func_466(&Var0, &Var116) || func_466(&Var0, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_466(&Var0, &Var116))
									{
										iVar109 = 0;
										Global_1835390.f_2775[iVar113] = 0;
									}
									MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_32 = { Var0 };
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_59 = Var0.f_96;
									if (func_492(uParam0->f_44))
									{
										iVar108 = unk_0x7499B86B7F4CA729(0, Global_1835390.f_2709);
										if (iVar108 == 1)
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 0;
										}
									}
									if (func_431(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835390.f_2708)
									{
										if (unk_0x4ED6CFDFE8D4131A(Global_1835390.f_2769, Global_1835390.f_2710[iVar107]))
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_67[iVar107] = unk_0x7499B86B7F4CA729(0, Global_1835390.f_2710[iVar107]);
										}
										else
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_60[iVar107] = unk_0x51C63F8BCD21FBC3(0, Global_1835390.f_2710[iVar107]);
										}
										iVar107++;
									}
									Global_1835390.f_2704[iVar113]++;
								}
								bVar112 = true;
							}
						}
						if (!bVar112)
						{
							Global_1835390.f_2704[iVar113]++;
						}
						if (!func_495())
						{
							iVar109 = Var98.f_5;
						}
						if (iVar109 > 6)
						{
							iVar110 = (iVar109 - 6);
						}
						else if (bVar112)
						{
							iVar110 = 1;
						}
						else
						{
							iVar110 = 0;
						}
						iVar111 = iVar110;
						func_494(&Var0);
						iVar111 = iVar110;
						while (iVar111 <= (Var98.f_3 - 1))
						{
							unk_0x0778FE700D500355(iVar111, &Var0);
							if (Global_1835390.f_2704[iVar113] < 12 && Var0.f_96 > 1)
							{
								if (func_495() && iVar109 == iVar111)
								{
									if (!func_466(&(Global_1835390[iVar113 /*901*/][0 /*75*/].f_32), &Var116))
									{
										func_493(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Var0.f_96);
										Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
										Global_1835390.f_2704[iVar113]++;
									}
								}
								if (func_495() && (func_466(&Var0, &Var116) || func_466(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835390.f_2704[iVar113] < 12)
								{
									if (func_425(Var0) && !func_466(&Var0, &(Global_1835390[iVar113 /*901*/][0 /*75*/].f_32)))
									{
										if (func_466(&Var0, &Var116))
										{
											if (Global_1835390.f_2775[iVar113] < 0)
											{
												Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
											}
										}
										MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
										Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_32 = { Var0 };
										Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_59 = Var0.f_96;
										Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_74 = 1;
										if (func_492(uParam0->f_44))
										{
											iVar108 = unk_0x7499B86B7F4CA729(iVar111, Global_1835390.f_2709);
											if (iVar108 == 1)
											{
												Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 0;
											}
										}
										if (func_431(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar106 = 0;
										iVar106 = 0;
										while (iVar106 < Global_1835390.f_2708)
										{
											if (unk_0x4ED6CFDFE8D4131A(Global_1835390.f_2769, Global_1835390.f_2710[iVar106]))
											{
												Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_67[iVar106] = unk_0x7499B86B7F4CA729(iVar111, Global_1835390.f_2710[iVar106]);
											}
											else
											{
												Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_60[iVar106] = unk_0x51C63F8BCD21FBC3(iVar111, Global_1835390.f_2710[iVar106]);
											}
											iVar106++;
										}
										Global_1835390.f_2704[iVar113]++;
									}
								}
							}
							func_494(&Var0);
							iVar111++;
						}
						unk_0x53C229BFA69F10FB();
						func_346(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar112)
						{
							if (Global_1835390.f_2775[iVar113] == -1 && func_495())
							{
								if (Global_1835390.f_2704[iVar113] >= 1)
								{
									func_493(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_493(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
								}
								Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
								Global_1835390.f_2704[iVar113]++;
							}
							(*uParam0)[iVar113] = 3;
						}
						else
						{
							(*uParam0)[iVar113] = 2;
						}
					}
					else
					{
						if (!bVar112)
						{
							Global_1835390.f_2704[iVar113]++;
						}
						unk_0x53C229BFA69F10FB();
						func_346(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835390.f_2775[iVar113] = -1;
						(*uParam0)[iVar113] = 2;
					}
				}
				else
				{
					func_346(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835390.f_2775[iVar113] = -1;
					(*uParam0)[iVar113] = 2;
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2832), iVar113);
				}
			}
			break;
		
		case 2:
			if (Global_1835390.f_2775[iVar113] == -1)
			{
				iVar115 = 11;
			}
			else
			{
				iVar115 = 1;
			}
			uParam0->f_44.f_1 = 3;
			Var98.f_0 = uParam0->f_44;
			Var98.f_1 = uParam0->f_44.f_1;
			if (func_491(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar115))
			{
				func_428(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0xC45B167DA3BDE4EE(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						iVar106 = 0;
						while (iVar106 < Var98.f_3)
						{
							unk_0x0778FE700D500355(iVar106, &Var0);
							bVar114 = false;
							if (Global_1835390[iVar113 /*901*/][0 /*75*/].f_59 > 1 || Global_1835390[iVar113 /*901*/][0 /*75*/].f_59 <= 0)
							{
								bVar114 = true;
							}
							if (Global_1835390.f_2704[iVar113] < 12 || bVar114)
							{
								if (func_495() && (func_466(&Var0, &Var116) || func_466(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (iVar106 == 0 || bVar114)
								{
									MemCopy(&(Global_1835390[iVar113 /*901*/][0 /*75*/]), {Var0.f_13}, 16);
									Global_1835390[iVar113 /*901*/][0 /*75*/].f_32 = { Var0 };
									Global_1835390[iVar113 /*901*/][0 /*75*/].f_59 = Var0.f_96;
									if (func_492(uParam0->f_44))
									{
										iVar108 = unk_0x7499B86B7F4CA729(0, Global_1835390.f_2709);
										if (iVar108 == 1)
										{
											Global_1835390[iVar113 /*901*/][0 /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar113 /*901*/][0 /*75*/].f_58 = 0;
										}
									}
									if (func_431(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar113 /*901*/][0 /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar113 /*901*/][0 /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835390.f_2708)
									{
										if (unk_0x4ED6CFDFE8D4131A(Global_1835390.f_2769, Global_1835390.f_2710[iVar107]))
										{
											Global_1835390[iVar113 /*901*/][0 /*75*/].f_67[iVar107] = unk_0x7499B86B7F4CA729(0, Global_1835390.f_2710[iVar107]);
										}
										else
										{
											Global_1835390[iVar113 /*901*/][0 /*75*/].f_60[iVar107] = unk_0x51C63F8BCD21FBC3(0, Global_1835390.f_2710[iVar107]);
										}
										iVar107++;
									}
									if (Global_1835390.f_2704[iVar113] == 0)
									{
										if (bVar114)
										{
										}
										else
										{
											Global_1835390.f_2704[iVar113]++;
										}
									}
								}
								else if (Global_1835390.f_2704[iVar113] < 12)
								{
									MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_32 = { Var0 };
									if (func_492(uParam0->f_44))
									{
										iVar108 = unk_0x7499B86B7F4CA729(iVar106, Global_1835390.f_2709);
										if (iVar108 == 1)
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 0;
										}
									}
									if (func_431(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_59 = Var0.f_96;
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835390.f_2708)
									{
										if (unk_0x4ED6CFDFE8D4131A(Global_1835390.f_2769, Global_1835390.f_2710[iVar107]))
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_67[iVar107] = unk_0x7499B86B7F4CA729(iVar106, Global_1835390.f_2710[iVar107]);
										}
										else
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_60[iVar107] = unk_0x51C63F8BCD21FBC3(iVar106, Global_1835390.f_2710[iVar107]);
										}
										iVar107++;
									}
									if (iVar106 != 0)
									{
										Global_1835390.f_2704[iVar113]++;
									}
								}
							}
							func_494(&Var0);
							iVar106++;
						}
					}
					unk_0x53C229BFA69F10FB();
					func_346(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar113] = 3;
				}
				else
				{
					unk_0x53C229BFA69F10FB();
					func_346(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2832), iVar113);
					Global_1835390.f_2704[iVar113] = 0;
					(*uParam0)[iVar113] = 3;
				}
				if (Global_1835390.f_2775[iVar113] == -1 && func_495())
				{
					if (Global_1835390.f_2704[iVar113] >= 1)
					{
						func_493(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
					}
					else
					{
						func_493(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
					}
					Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
					Global_1835390.f_2704[iVar113]++;
				}
			}
			break;
		
		case 3:
			func_490(iVar113, Global_1835013.f_374);
			(*uParam0)[iVar113] = 4;
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_490(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((func_495() && Global_1835390.f_2704[iParam0] > Global_1835390.f_2775[iParam0]) && Global_1835390.f_2775[iParam0] >= 0)
	{
		if (iParam1 != Global_1835390[iParam0 /*901*/][Global_1835390.f_2775[iParam0] /*75*/].f_59)
		{
			iVar0 = 0;
			while (iVar0 < Global_1835390.f_2704[iParam0])
			{
				if (iVar0 != Global_1835390.f_2775[iParam0])
				{
					if (Global_1835390[iParam0 /*901*/][iVar0 /*75*/].f_59 >= Global_1835390[iParam0 /*901*/][Global_1835390.f_2775[iParam0] /*75*/].f_59)
					{
						if (Global_1835390[iParam0 /*901*/][iVar0 /*75*/].f_59 < iParam1 || iParam1 == -1)
						{
							Global_1835390[iParam0 /*901*/][iVar0 /*75*/].f_59++;
						}
					}
				}
				iVar0++;
			}
		}
	}
	else
	{
		if (!func_495())
		{
		}
		if (Global_1835390.f_2704[iParam0] <= Global_1835390.f_2775[iParam0])
		{
		}
		if (Global_1835390.f_2775[iParam0] < 0)
		{
		}
	}
}

int func_491(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_417() && !func_413())
			{
				func_411(*uParam2);
				if (unk_0x76DA6559D9DF366E(uParam2, iParam3, iParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x9C7514AC836E30CD(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0xB7F6F313ECC62919(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_492(int iParam0)
{
	if ((((((iParam0 == 815 || iParam0 == 824) || iParam0 == 825) || iParam0 == 826) || iParam0 == 827) || iParam0 == 828) || iParam0 == 849)
	{
		return 1;
	}
	return 0;
}

void func_493(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_431(uParam0->f_44))
	{
		MemCopy(sParam1, {Global_1835013.f_355}, 16);
		sParam1->f_32 = { Global_1835013.f_361 };
		MemCopy(&(sParam1->f_16), {Global_1835013.f_349}, 16);
	}
	else
	{
		StringCopy(sParam1, unk_0x7124FD9AC0E01BA0(unk_0x217E9DC48139933D()), 64);
		sParam1->f_32 = { func_430(unk_0x217E9DC48139933D()) };
	}
	sParam1->f_59 = iParam2;
	if (func_492(uParam0->f_44))
	{
		iVar0 = Global_1835013.f_211.f_36[Global_1835390.f_2709];
		if (iVar0 == 1)
		{
			sParam1->f_58 = 1;
		}
		else
		{
			sParam1->f_58 = 0;
		}
	}
	sParam1->f_74 = 1;
	iVar1 = 0;
	while (iVar1 < Global_1835390.f_2708)
	{
		if (unk_0x4ED6CFDFE8D4131A(Global_1835013.f_142.f_2, Global_1835390.f_2710[iVar1]))
		{
			sParam1->f_67[iVar1] = Global_1835013.f_211.f_36[Global_1835390.f_2710[iVar1]];
		}
		else
		{
			sParam1->f_60[iVar1] = Global_1835013.f_211.f_3[Global_1835390.f_2710[iVar1]];
		}
		iVar1++;
	}
}

void func_494(var uParam0)
{
	int iVar0;
	
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
	StringCopy(&(uParam0->f_13), "", 24);
	uParam0->f_19 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_19.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_19.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_85 = 0;
	StringCopy(&(uParam0->f_86), "", 32);
	StringCopy(&(uParam0->f_94), "", 8);
	uParam0->f_96 = 0;
	uParam0->f_97 = 0;
}

int func_495()
{
	if (Global_1835388 && Global_1835389)
	{
		return 1;
	}
	return 0;
}

int func_496(var uParam0)
{
	struct<20> Var0;
	struct<6> Var98;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	bool bVar112;
	int iVar113;
	struct<13> Var114;
	
	Var0.f_19.f_1 = 4;
	iVar108 = -1;
	iVar113 = 1;
	Var114 = { func_430(unk_0x217E9DC48139933D()) };
	switch ((*uParam0)[1])
	{
		case 0:
			iVar107 = unk_0x26DB5C5F2F4180A0();
			Global_1835390.f_2775[1] = -1;
			Global_1835013.f_374 = -1;
			Global_1835390.f_2704[iVar113] = 0;
			if (iVar107 > 0)
			{
				if (func_495())
				{
					bVar112 = false;
				}
				else
				{
					bVar112 = true;
				}
				if (func_497(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &(uParam0->f_113), uParam0->f_113[0 /*66*/], bVar112, 0, 100))
				{
					func_428(&Var98, &(uParam0->f_44));
					if (uParam0->f_5 && unk_0xC45B167DA3BDE4EE(&Var98))
					{
						if (func_495())
						{
							iVar110 = 0;
							iVar110 = 0;
							while (iVar110 < Var98.f_3)
							{
								if (iVar108 < 0)
								{
									unk_0x0778FE700D500355(iVar110, &Var0);
									if (func_431(uParam0->f_44))
									{
										if (Global_1835013.f_374 < 0)
										{
											if (func_466(&Var0, &(Global_1835013.f_361)))
											{
												Global_1835013.f_374 = Var0.f_96;
											}
										}
									}
									if (unk_0x4ED6CFDFE8D4131A(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0x7499B86B7F4CA729(iVar110, 0))
										{
											iVar108 = iVar110;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0x51C63F8BCD21FBC3(iVar110, 0))
									{
										iVar108 = iVar110;
									}
									func_494(&Var0);
								}
								iVar110++;
							}
							if (iVar108 < 0)
							{
								iVar108 = Var98.f_3;
							}
						}
						iVar110 = 0;
						if (func_495() && iVar108 == 0)
						{
							if (Global_1835390.f_2704[iVar113] < 12)
							{
								func_493(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
								Global_1835390.f_2775[iVar113] = 0;
								Global_1835390.f_2704[iVar113]++;
							}
						}
						if (Var98.f_3 > 0)
						{
							unk_0x0778FE700D500355(0, &Var0);
							if (func_495() && (func_466(&Var0, &Var114) || func_466(&Var0, &(Global_1835013.f_361))))
							{
							}
							else if (func_425(Var0) && Global_1835390.f_2704[iVar113] < 12)
							{
								if (func_466(&Var0, &Var114))
								{
									iVar108 = 0;
									Global_1835390.f_2775[1] = 0;
								}
								MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
								Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_32 = { Var0 };
								Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_59 = 1;
								if (func_492(uParam0->f_44))
								{
									iVar111 = unk_0x7499B86B7F4CA729(0, Global_1835390.f_2709);
									if (iVar111 == 1)
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 1;
									}
									else
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 0;
									}
								}
								if (func_431(uParam0->f_44))
								{
									MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
								}
								Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_74 = 1;
								iVar106 = 0;
								while (iVar106 < Global_1835390.f_2708)
								{
									if (unk_0x4ED6CFDFE8D4131A(Global_1835390.f_2769, Global_1835390.f_2710[iVar106]))
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_67[iVar106] = unk_0x7499B86B7F4CA729(0, Global_1835390.f_2710[iVar106]);
									}
									else
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_60[iVar106] = unk_0x51C63F8BCD21FBC3(0, Global_1835390.f_2710[iVar106]);
									}
									iVar106++;
								}
								Global_1835390.f_2704[1]++;
							}
							else
							{
								func_494(&Var0);
								unk_0x53C229BFA69F10FB();
								func_346(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
								Global_1835390.f_2704[1] = 0;
								(*uParam0)[1] = 1;
								if (Global_1835390.f_2775[iVar113] == -1 && func_495())
								{
									if (Global_1835390.f_2704[iVar113] >= 1)
									{
										func_493(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
									}
									else
									{
										func_493(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
									}
									Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
									Global_1835390.f_2704[iVar113]++;
								}
								return 0;
							}
							func_494(&Var0);
						}
						else
						{
							Global_1835390.f_2704[1] = 0;
							func_494(&Var0);
							unk_0x53C229BFA69F10FB();
							func_346(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
							if (Global_1835390.f_2775[iVar113] == -1 && func_495())
							{
								if (Global_1835390.f_2704[iVar113] >= 1)
								{
									func_493(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_493(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
								}
								Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
								Global_1835390.f_2704[iVar113]++;
							}
							(*uParam0)[1] = 1;
							return 0;
						}
						if (!func_495())
						{
							iVar108 = Var98.f_5;
						}
						if (iVar108 > 6)
						{
							iVar109 = (iVar108 - 6);
						}
						else
						{
							iVar109 = 1;
						}
						iVar110 = iVar109;
						iVar110 = iVar109;
						while (iVar110 <= (Var98.f_3 - 1))
						{
							unk_0x0778FE700D500355(iVar110, &Var0);
							if (Global_1835390.f_2704[iVar113] < 12 && Var0.f_96 > 1)
							{
								if (func_495() && iVar108 == iVar110)
								{
									if (!func_466(&(Global_1835390[iVar113 /*901*/][0 /*75*/].f_32), &Var114))
									{
										func_493(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Var0.f_96);
										Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_59 = iVar110 + 1;
										Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
										Global_1835390.f_2704[iVar113]++;
									}
								}
								if (func_495() && (func_466(&Var0, &Var114) || func_466(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835390.f_2704[1] < 12)
								{
									if (func_425(Var0) && !func_466(&Var0, &(Global_1835390[iVar113 /*901*/][0 /*75*/].f_32)))
									{
										if (func_466(&Var0, &Var114))
										{
											if (Global_1835390.f_2775[1] < 0)
											{
												Global_1835390.f_2775[1] = Global_1835390.f_2704[1];
											}
										}
										MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/]), {Var0.f_13}, 16);
										Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_32 = { Var0 };
										Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_59 = iVar110 + 1;
										Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_74 = 1;
										if (func_492(uParam0->f_44))
										{
											iVar111 = unk_0x7499B86B7F4CA729(iVar110, Global_1835390.f_2709);
											if (iVar111 == 1)
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_58 = 0;
											}
										}
										if (func_431(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar106 = 0;
										while (iVar106 < Global_1835390.f_2708)
										{
											if (unk_0x4ED6CFDFE8D4131A(Global_1835390.f_2769, Global_1835390.f_2710[iVar106]))
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_67[iVar106] = unk_0x7499B86B7F4CA729(iVar110, Global_1835390.f_2710[iVar106]);
											}
											else
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_60[iVar106] = unk_0x51C63F8BCD21FBC3(iVar110, Global_1835390.f_2710[iVar106]);
											}
											iVar106++;
										}
										Global_1835390.f_2704[1]++;
									}
								}
							}
							func_494(&Var0);
							iVar110++;
						}
						unk_0x53C229BFA69F10FB();
						func_346(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						(*uParam0)[1] = 1;
						if (Global_1835390.f_2775[iVar113] == -1 && func_495())
						{
							if (Global_1835390.f_2704[iVar113] >= 1)
							{
								func_493(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
							}
							else
							{
								func_493(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
							}
							Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
							Global_1835390.f_2704[iVar113]++;
						}
						return 0;
					}
					else
					{
						func_346(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835390.f_2704[1] = 0;
						(*uParam0)[1] = 1;
						unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2832), 1);
						return 0;
					}
				}
			}
			else
			{
				func_346(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
				Global_1835390.f_2704[1] = 0;
				(*uParam0)[1] = 1;
				return 0;
			}
			break;
		
		case 1:
			func_490(iVar113, Global_1835013.f_374);
			(*uParam0)[iVar113] = 2;
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_497(var uParam0, var uParam1, var* uParam2, var* uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_417() && !func_413())
			{
				func_411(*uParam2);
				if (unk_0x918B101666F9CB83(uParam2, uParam3, iParam4, bParam5, iParam6, iParam7))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0x9C7514AC836E30CD(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0xB7F6F313ECC62919(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_498(var uParam0)
{
	struct<13> Var0;
	struct<97> Var13;
	struct<6> Var111;
	int iVar119;
	int iVar120;
	int iVar121;
	int iVar122;
	int iVar123;
	int iVar124;
	bool bVar125;
	int iVar126;
	bool bVar127;
	int iVar128;
	
	Var13.f_19.f_1 = 4;
	iVar122 = -1;
	iVar126 = 0;
	Var0 = { func_430(unk_0x217E9DC48139933D()) };
	switch ((*uParam0)[iVar126])
	{
		case 0:
			Global_1835390.f_2775[iVar126] = -1;
			Global_1835390.f_2704[iVar126] = 0;
			Global_1835013.f_374 = -1;
			Global_1835389 = 0;
			if (func_499(uParam0->f_44))
			{
				if (!Global_1835389)
				{
					Global_1835389 = 1;
				}
			}
			else if (Global_1835389)
			{
				Global_1835389 = 0;
			}
			if (!Global_1835389)
			{
			}
			if (func_410(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var0, func_495(), 0, 0, 0))
			{
				func_428(&Var111, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0xC45B167DA3BDE4EE(&Var111))
				{
					if (Var111.f_3 > 0)
					{
						iVar124 = 0;
						iVar119 = 0;
						if (func_495())
						{
							iVar124 = 0;
							while (iVar124 < Var111.f_3)
							{
								unk_0x0778FE700D500355(iVar124, &Var13);
								if (Global_1835013.f_374 < 0)
								{
									if (func_466(&Var13, &Var0) || func_466(&Var13, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var13.f_96;
									}
								}
								if (iVar122 < 0)
								{
									if (unk_0x4ED6CFDFE8D4131A(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0x7499B86B7F4CA729(iVar124, 0))
										{
											iVar122 = iVar124;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0x51C63F8BCD21FBC3(iVar124, 0))
									{
										iVar122 = iVar124;
									}
								}
								func_494(&Var13);
								iVar124++;
							}
							if (iVar122 < 0)
							{
								iVar122 = Var111.f_3;
							}
						}
						iVar124 = 0;
						unk_0x0778FE700D500355(0, &Var13);
						if (Var13.f_96 <= 1)
						{
							if (Global_1835390.f_2704[iVar126] < 12)
							{
								if (func_495() && iVar122 == 0)
								{
									func_493(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), Var13.f_96);
									Global_1835390.f_2775[iVar126] = 0;
									Global_1835390.f_2704[iVar126]++;
								}
								if (func_495() && (func_466(&Var13, &Var0) || func_466(&Var13, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_466(&Var13, &Var0))
									{
										iVar122 = 0;
										Global_1835390.f_2775[iVar126] = 0;
									}
									MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), {Var13.f_13}, 16);
									Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_32 = { Var13 };
									Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_59 = Var13.f_96;
									if (func_492(uParam0->f_44))
									{
										iVar121 = unk_0x7499B86B7F4CA729(0, Global_1835390.f_2709);
										if (iVar121 == 1)
										{
											Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 0;
										}
									}
									if (func_431(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_74 = 1;
									iVar119 = 0;
									while (iVar119 < Global_1835390.f_2708)
									{
										if (unk_0x4ED6CFDFE8D4131A(Global_1835390.f_2769, Global_1835390.f_2710[iVar119]))
										{
											Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_67[iVar119] = unk_0x7499B86B7F4CA729(0, Global_1835390.f_2710[iVar119]);
										}
										else
										{
											Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_60[iVar119] = unk_0x51C63F8BCD21FBC3(0, Global_1835390.f_2710[iVar119]);
										}
										iVar119++;
									}
									Global_1835390.f_2704[iVar126]++;
								}
								bVar125 = true;
							}
						}
						if (!bVar125)
						{
							Global_1835390.f_2704[iVar126]++;
						}
						if (!func_495())
						{
							iVar122 = Var111.f_5;
						}
						if (iVar122 > 6)
						{
							iVar123 = (iVar122 - 6);
						}
						else if (bVar125)
						{
							iVar123 = 1;
						}
						else
						{
							iVar123 = 0;
						}
						iVar124 = iVar123;
						func_494(&Var13);
						iVar124 = iVar123;
						while (iVar124 <= (Var111.f_3 - 1))
						{
							unk_0x0778FE700D500355(iVar124, &Var13);
							if (Global_1835390.f_2704[iVar126] < 12 && Var13.f_96 > 1)
							{
								if (func_495() && iVar122 == iVar124)
								{
									if (!func_466(&(Global_1835390[iVar126 /*901*/][0 /*75*/].f_32), &Var13))
									{
										func_493(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), Var13.f_96);
										Global_1835390.f_2775[iVar126] = Global_1835390.f_2704[iVar126];
										Global_1835390.f_2704[iVar126]++;
									}
								}
								if (func_495() && (func_466(&Var13, &Var0) || func_466(&Var13, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835390.f_2704[iVar126] < 12)
								{
									if (func_425(Var13) && !func_466(&(Global_1835390[iVar126 /*901*/][0 /*75*/].f_32), &Var13))
									{
										if (func_466(&Var13, &Var0))
										{
											if (Global_1835390.f_2775[iVar126] < 0)
											{
												Global_1835390.f_2775[iVar126] = Global_1835390.f_2704[iVar126];
											}
										}
										MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), {Var13.f_13}, 16);
										Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_32 = { Var13 };
										Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_59 = Var13.f_96;
										Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_74 = 1;
										if (func_492(uParam0->f_44))
										{
											iVar121 = unk_0x7499B86B7F4CA729(iVar124, Global_1835390.f_2709);
											if (iVar121 == 1)
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 0;
											}
										}
										if (func_431(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar119 = 0;
										iVar119 = 0;
										while (iVar119 < Global_1835390.f_2708)
										{
											if (unk_0x4ED6CFDFE8D4131A(Global_1835390.f_2769, Global_1835390.f_2710[iVar119]))
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_67[iVar119] = unk_0x7499B86B7F4CA729(iVar124, Global_1835390.f_2710[iVar119]);
											}
											else
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_60[iVar119] = unk_0x51C63F8BCD21FBC3(iVar124, Global_1835390.f_2710[iVar119]);
											}
											iVar119++;
										}
										Global_1835390.f_2704[iVar126]++;
									}
								}
							}
							func_494(&Var13);
							iVar124++;
						}
						unk_0x53C229BFA69F10FB();
						func_346(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar125)
						{
							if (Global_1835390.f_2775[iVar126] == -1 && func_495())
							{
								if (Global_1835390.f_2704[iVar126] >= 1)
								{
									func_493(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), Global_1835390[iVar126 /*901*/][(Global_1835390.f_2704[iVar126] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_493(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), 1);
								}
								Global_1835390.f_2775[iVar126] = Global_1835390.f_2704[iVar126];
								Global_1835390.f_2704[iVar126]++;
							}
							(*uParam0)[iVar126] = 2;
						}
						else
						{
							(*uParam0)[iVar126] = 1;
						}
					}
					else
					{
						if (!bVar125)
						{
							Global_1835390.f_2704[iVar126]++;
						}
						unk_0x53C229BFA69F10FB();
						func_346(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835390.f_2775[iVar126] = -1;
						(*uParam0)[iVar126] = 1;
					}
				}
				else
				{
					func_346(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835390.f_2775[iVar126] = -1;
					(*uParam0)[iVar126] = 1;
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2832), iVar126);
				}
			}
			break;
		
		case 1:
			if (Global_1835390.f_2775[iVar126] == -1)
			{
				iVar128 = 11;
			}
			else
			{
				iVar128 = 1;
			}
			if (func_491(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar128))
			{
				func_428(&Var111, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0xC45B167DA3BDE4EE(&Var111))
				{
					if (Var111.f_3 > 0)
					{
						iVar119 = 0;
						while (iVar119 < Var111.f_3)
						{
							unk_0x0778FE700D500355(iVar119, &Var13);
							if (func_495() && (func_466(&Var13, &Var0) || func_466(&Var13, &(Global_1835013.f_361))))
							{
							}
							else
							{
								bVar127 = false;
								if (Global_1835390[iVar126 /*901*/][0 /*75*/].f_59 > 1 || Global_1835390[iVar126 /*901*/][0 /*75*/].f_59 <= 0)
								{
									bVar127 = true;
								}
								if (Global_1835390.f_2704[iVar126] < 12 || bVar127)
								{
									if (iVar119 == 0 || bVar127)
									{
										MemCopy(&(Global_1835390[iVar126 /*901*/][0 /*75*/]), {Var13.f_13}, 16);
										Global_1835390[iVar126 /*901*/][0 /*75*/].f_32 = { Var13 };
										Global_1835390[iVar126 /*901*/][0 /*75*/].f_59 = Var13.f_96;
										if (func_492(uParam0->f_44))
										{
											iVar121 = unk_0x7499B86B7F4CA729(0, Global_1835390.f_2709);
											if (iVar121 == 1)
											{
												Global_1835390[iVar126 /*901*/][0 /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar126 /*901*/][0 /*75*/].f_58 = 0;
											}
										}
										if (func_431(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar126 /*901*/][0 /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1835390[iVar126 /*901*/][0 /*75*/].f_74 = 1;
										iVar120 = 0;
										iVar120 = 0;
										while (iVar120 < Global_1835390.f_2708)
										{
											if (unk_0x4ED6CFDFE8D4131A(Global_1835390.f_2769, Global_1835390.f_2710[iVar120]))
											{
												Global_1835390[iVar126 /*901*/][iVar119 /*75*/].f_67[iVar120] = unk_0x7499B86B7F4CA729(iVar119, Global_1835390.f_2710[iVar120]);
											}
											else
											{
												Global_1835390[iVar126 /*901*/][iVar119 /*75*/].f_60[iVar120] = unk_0x51C63F8BCD21FBC3(iVar119, Global_1835390.f_2710[iVar120]);
											}
											iVar120++;
										}
										if (Global_1835390.f_2704[iVar126] == 0)
										{
											if (bVar127)
											{
											}
											else
											{
												Global_1835390.f_2704[iVar126]++;
											}
										}
										else if (Global_1835390.f_2704[iVar126] == 1 && Global_1835390.f_2775[iVar126] == -1)
										{
											Global_1835390.f_2704[iVar126]++;
										}
									}
									else if (Global_1835390.f_2704[iVar126] < 12)
									{
										MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), {Var13.f_13}, 16);
										Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_32 = { Var13 };
										if (func_492(uParam0->f_44))
										{
											iVar121 = unk_0x7499B86B7F4CA729(iVar119, Global_1835390.f_2709);
											if (iVar121 == 1)
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 0;
											}
										}
										if (func_431(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_59 = Var13.f_96;
										Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_74 = 1;
										iVar120 = 0;
										iVar120 = 0;
										while (iVar120 < Global_1835390.f_2708)
										{
											if (unk_0x4ED6CFDFE8D4131A(Global_1835390.f_2769, Global_1835390.f_2710[iVar120]))
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_67[iVar120] = unk_0x7499B86B7F4CA729(iVar119, Global_1835390.f_2710[iVar120]);
											}
											else
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_60[iVar120] = unk_0x51C63F8BCD21FBC3(iVar119, Global_1835390.f_2710[iVar120]);
											}
											iVar120++;
										}
										if (iVar119 != 0)
										{
											Global_1835390.f_2704[iVar126]++;
										}
									}
								}
							}
							func_494(&Var13);
							iVar119++;
						}
					}
					unk_0x53C229BFA69F10FB();
					func_346(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar126] = 2;
				}
				else
				{
					unk_0xF73FBE4845C43B5B(&(Global_1835390.f_2832), iVar126);
					func_346(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835390.f_2704[iVar126] = 0;
					(*uParam0)[iVar126] = 2;
					Global_1835390.f_2704[1] = 0;
					(*uParam0)[1] = 1;
					Global_1835390.f_2704[2] = 0;
					(*uParam0)[2] = 3;
				}
			}
			if (Global_1835390.f_2775[iVar126] == -1 && func_495())
			{
				if (Global_1835390.f_2704[iVar126] >= 1)
				{
					func_493(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), Global_1835390[iVar126 /*901*/][(Global_1835390.f_2704[iVar126] - 1) /*75*/].f_59 + 1);
				}
				else
				{
					func_493(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), 1);
				}
				Global_1835390.f_2775[iVar126] = Global_1835390.f_2704[iVar126];
				Global_1835390.f_2704[iVar126]++;
			}
			break;
		
		case 2:
			func_490(iVar126, Global_1835013.f_374);
			(*uParam0)[iVar126] = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_499(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)
{
	int iVar0;
	
	if (Global_1835388)
	{
		if (Global_1835013.f_5 != 0)
		{
			if (Global_1835013.f_5 == Param0.f_0)
			{
				if (Global_1835013.f_5.f_2 == Param0.f_3)
				{
					iVar0 = 0;
					while (iVar0 < Param0.f_3)
					{
						if (!unk_0xD3852F22AB713A1F(&(Global_1835013.f_5.f_2.f_1[iVar0 /*16*/]), &(Param0.f_3.f_1[iVar0 /*16*/])) || !unk_0xD3852F22AB713A1F(&(Global_1835013.f_5.f_2.f_1[iVar0 /*16*/].f_8), &(Param0.f_3.f_1[iVar0 /*16*/].f_8)))
						{
							return 0;
						}
						iVar0++;
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_500(var uParam0)
{
	int iVar0;
	
	if (unk_0x18D832AFF28DF8C9(Global_1835390.f_2826))
	{
		iVar0 = unk_0x6C2B92A2AE2AA20D(Global_1835390.f_2826);
		if (iVar0 < 300000)
		{
			unk_0xF73FBE4845C43B5B(&(uParam0->f_42), 5);
		}
		else
		{
			unk_0x7D1D4A3602B6AD4E(&(uParam0->f_42), 5);
			func_475(Global_1835390.f_2826, -1);
		}
	}
}

void func_501(var uParam0)
{
	if (unk_0x64BAE9BE701E6C19(uParam0))
	{
		unk_0x2D8953D6CEBE69D2(uParam0, 255, 255, 255, 0, 0);
	}
}

void func_502(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	char* sVar0;
	struct<2> Var1;
	struct<16> Var36;
	bool bVar52;
	struct<13> Var53;
	int iVar66;
	struct<13> Var67;
	int iVar80;
	
	sVar0 = "";
	if (unk_0x4ED6CFDFE8D4131A(iParam2, 4))
	{
		sVar0 = "SCLB_GLOBAL";
	}
	else if (unk_0x4ED6CFDFE8D4131A(iParam2, 5))
	{
		*iParam1++;
		sVar0 = "SCLB_FRIENDS";
	}
	else if (unk_0x4ED6CFDFE8D4131A(iParam2, 6))
	{
		*iParam1++;
		if (unk_0x4C82BD446C34CACD() && unk_0x2C079282730811D0())
		{
			if (unk_0x88CFAE250D3E0C71() && !unk_0xB8D6825813930299(0))
			{
				sVar0 = "SCLB_CREW";
			}
			else
			{
				Var53 = { func_430(unk_0x217E9DC48139933D()) };
				if (unk_0x6BB4EDAA3A4778E8(&Var53))
				{
					unk_0x534D7C93C5A1A2C4(&Var1, 35, &Var53);
					if (!unk_0x2CF12F9ACF18F048(&(Var1.f_1)))
					{
						sVar0 = "STRING";
						Var36 = { Var1.f_1 };
						bVar52 = true;
					}
					else
					{
						sVar0 = "SCLB_CREW";
					}
				}
				else
				{
					sVar0 = "SCLB_CREW";
				}
			}
		}
		else
		{
			sVar0 = "SCLB_CREW";
		}
	}
	unk_0xF6EA2AC68E7C7293(uParam0, "SET_SLOT");
	unk_0xA734310215BCF528(*iParam1);
	unk_0xA734310215BCF528(iParam2);
	if (bVar52)
	{
		unk_0x164FB269C22AF51C(sVar0);
		unk_0x89F89D7ACB05ADC7(&Var36);
		unk_0x5BB4D22B8B03A30B();
	}
	else
	{
		unk_0x164FB269C22AF51C(sVar0);
		unk_0x5BB4D22B8B03A30B();
	}
	unk_0xD4D85E4148B638AD();
	*iParam1++;
	if (bParam4)
	{
		iVar66 = 0;
		unk_0xF73FBE4845C43B5B(&iVar66, 7);
		unk_0xF6EA2AC68E7C7293(uParam0, "SET_SLOT");
		unk_0xA734310215BCF528(*iParam1);
		unk_0xA734310215BCF528(iVar66);
		if (!unk_0x4C82BD446C34CACD())
		{
			sVar0 = "SCLB_NOT_ONL";
		}
		else if (!unk_0xBEA038AAF3BCAE99())
		{
			sVar0 = "SCLB_NO_ROS";
		}
		else if (Global_1835390.f_2832 != 0)
		{
			sVar0 = "SCLB_READ_FAIL";
		}
		else
		{
			sVar0 = "HUD_PERM";
		}
		unk_0x164FB269C22AF51C(sVar0);
		unk_0x905C5F5659CECDB5();
		unk_0xD4D85E4148B638AD();
		*iParam1++;
	}
	else if (bParam3)
	{
		if (unk_0x4ED6CFDFE8D4131A(iParam2, 4))
		{
			sVar0 = "SCLB_NO_GLOBAL";
		}
		else if (unk_0x4ED6CFDFE8D4131A(iParam2, 5))
		{
			if (unk_0x26DB5C5F2F4180A0() > 0)
			{
				sVar0 = "SCLB_NO_FRNDS";
			}
			else
			{
				sVar0 = "SCLB_NO_FRNDSb";
			}
		}
		else if (unk_0x4ED6CFDFE8D4131A(iParam2, 6))
		{
			if (unk_0x5DF40D01D57B2F76())
			{
				if (unk_0x017A61170DF48BD0())
				{
					if (unk_0x4C82BD446C34CACD() && unk_0x2C079282730811D0())
					{
						if (unk_0x88CFAE250D3E0C71() && !unk_0xB8D6825813930299(0))
						{
							sVar0 = "SCLB_NO_CREWc";
						}
						else
						{
							Var67 = { func_430(unk_0x217E9DC48139933D()) };
							if (unk_0x6BB4EDAA3A4778E8(&Var67))
							{
								unk_0x534D7C93C5A1A2C4(&Var1, 35, &Var67);
								if (!unk_0x2CF12F9ACF18F048(&(Var1.f_1)))
								{
									sVar0 = "SCLB_NO_CREWb";
									Var36 = { Var1.f_1 };
									bVar52 = true;
								}
								else
								{
									sVar0 = "SCLB_NO_CREWc";
								}
							}
							else
							{
								sVar0 = "SCLB_NO_CREWa";
							}
						}
					}
					else
					{
						sVar0 = "SCLB_NO_CREWa";
					}
				}
				else
				{
					sVar0 = "SCLB_NO_CREWe";
				}
			}
			else
			{
				sVar0 = "SCLB_NO_CREWd";
			}
		}
		iVar80 = 0;
		unk_0xF73FBE4845C43B5B(&iVar80, 7);
		unk_0xF6EA2AC68E7C7293(uParam0, "SET_SLOT");
		unk_0xA734310215BCF528(*iParam1);
		unk_0xA734310215BCF528(iVar80);
		if (bVar52)
		{
			unk_0x164FB269C22AF51C(sVar0);
			unk_0x89F89D7ACB05ADC7(&Var36);
			unk_0x905C5F5659CECDB5();
		}
		else
		{
			unk_0x164FB269C22AF51C(sVar0);
			unk_0x905C5F5659CECDB5();
		}
		unk_0xD4D85E4148B638AD();
		*iParam1++;
	}
}

void func_503(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	unk_0xF6EA2AC68E7C7293(uParam0, "SET_TITLE");
	unk_0x164FB269C22AF51C(sParam1);
	unk_0x5BB4D22B8B03A30B();
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		unk_0x164FB269C22AF51C(uParam2[iVar0 /*6*/]);
		unk_0x5BB4D22B8B03A30B();
		iVar0++;
	}
	unk_0xD4D85E4148B638AD();
}

void func_504(var uParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	unk_0xF6EA2AC68E7C7293(uParam0, "SET_MULTIPLAYER_TITLE");
	unk_0x164FB269C22AF51C(uParam1);
	if (!unk_0x2CF12F9ACF18F048(sParam2))
	{
		unk_0x734AB59A7DBD1DAA(sParam2);
	}
	if (iParam5 == -1)
	{
		if (bParam4)
		{
			if (!unk_0x2CF12F9ACF18F048(sParam3))
			{
				unk_0x89F89D7ACB05ADC7(sParam3);
			}
		}
		else if (!unk_0x2CF12F9ACF18F048(sParam3))
		{
			unk_0x734AB59A7DBD1DAA(sParam3);
		}
	}
	else
	{
		if (bParam4)
		{
			if (!unk_0x2CF12F9ACF18F048(sParam3))
			{
				unk_0x89F89D7ACB05ADC7(sParam3);
			}
		}
		else if (!unk_0x2CF12F9ACF18F048(sParam3))
		{
			unk_0x734AB59A7DBD1DAA(sParam3);
		}
		unk_0xF00CED653959DE03(iParam5);
	}
	unk_0x5BB4D22B8B03A30B();
	unk_0xD4D85E4148B638AD();
}

void func_505(var uParam0, int iParam1)
{
	unk_0xF6EA2AC68E7C7293(uParam0, "SET_DISPLAY_TYPE");
	unk_0xA734310215BCF528(iParam1);
	unk_0xD4D85E4148B638AD();
}

void func_506(int iParam0)
{
	Global_1318744 = iParam0;
}

void func_507(int iParam0)
{
	Global_1328872.f_756 = iParam0;
}

void func_508()
{
	func_511();
	func_509(4, -1);
	func_509(6, -1);
	func_509(7, -1);
	func_509(3, -1);
	func_509(1, -1);
	func_509(2, -1);
	func_509(11, -1);
	func_509(13, -1);
	func_509(14, -1);
	func_509(16, -1);
}

void func_509(int iParam0, int iParam1)
{
	unk_0xF73FBE4845C43B5B(&(Global_1327593.f_948), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1327593.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_510()
{
	if (!Global_14393.f_1 == 1)
	{
		if (func_128(0))
		{
			func_125(0);
		}
		unk_0xF73FBE4845C43B5B(&Global_2264, 2);
	}
}

void func_511()
{
	Global_2446554.f_4366 = 0;
}

void func_512(bool bParam0)
{
	if (bParam0)
	{
		func_239(&(Local_50.f_119), 0, 0, 1, 1);
		func_238(&(Local_50.f_119), "HUD_INPUT53", 2, 202, 1, 1, 0);
		func_238(&(Local_50.f_119), "SCLB_PROFILE", 2, 217, 1, 1, 0);
		func_513(&(Local_50.f_119), 1);
	}
	else
	{
		func_239(&(Local_50.f_119), 0, 0, 1, 1);
		func_238(&(Local_50.f_119), "HUD_INPUT53", 2, 202, 1, 1, 0);
		func_513(&(Local_50.f_119), 1);
	}
}

void func_513(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_140(&(uParam0->f_1), 1024);
	}
	else
	{
		func_139(&(uParam0->f_1), 1024);
	}
}

int func_514(var uParam0)
{
	if ((unk_0x4ED6CFDFE8D4131A(uParam0->f_42, 1) && Global_1835390.f_2704[0] > 0) && uParam0->f_246.f_1 >= 0)
	{
		return 1;
	}
	return 0;
}

void func_515(var uParam0)
{
	if (Global_96383 != 0 && Global_97353.f_17297.f_12[Global_96383 /*8*/].f_4 == 0)
	{
		func_239(uParam0, 0, 0, 1, 1);
		func_238(uParam0, "IB_QUIT", 2, 202, 1, 1, 0);
		if (!unk_0x3758E345C82DAFF2())
		{
			func_238(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_505 = 1;
		}
		else if (unk_0x3758E345C82DAFF2() && iLocal_504)
		{
			func_238(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_505 = 0;
		}
		else
		{
			iLocal_505 = 0;
		}
	}
	else
	{
		func_239(uParam0, 0, 0, 1, 1);
		func_238(uParam0, "FE_HLP4", 2, 201, 1, 1, 0);
		func_238(uParam0, "IB_QUIT", 2, 202, 1, 1, 0);
		if (!unk_0x3758E345C82DAFF2())
		{
			func_238(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_505 = 1;
		}
		else if (unk_0x3758E345C82DAFF2() && iLocal_504)
		{
			func_238(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_505 = 0;
		}
		else
		{
			iLocal_505 = 0;
		}
	}
	func_513(&(Local_50.f_119), 1);
}

void func_516()
{
	func_545();
	func_405();
	func_544(&(Local_2411.f_358[0 /*189*/].f_24), 0, 0, "PilotDispatch", 0, 1);
	func_544(&uLocal_2081, 0, 0, "PilotDispatch", 0, 1);
	func_533(&Local_2411);
	func_517(&Local_2411, Local_50.f_10);
	if (unk_0xD42BD6EB2E0F1677(Local_2411.f_358[0 /*189*/].f_9))
	{
		unk_0x96F78A6A075D55D9(Local_2411.f_358[0 /*189*/].f_9, 4);
	}
}

void func_517(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_532(&Local_2411);
			break;
		
		case 1:
			func_531(&Local_2411);
			break;
		
		case 2:
			func_530(&Local_2411);
			func_529(&(Local_2411.f_27[2 /*10*/]), 1);
			func_529(&(Local_2411.f_27[3 /*10*/]), 1);
			break;
		
		case 3:
			func_528(&Local_2411);
			break;
		
		case 4:
			func_518(&Local_2411);
			break;
	}
}

void func_518(var uParam0)
{
	func_533(uParam0);
	uParam0->f_12 = 32;
	func_527(&(uParam0->f_27[0 /*10*/]), 947.1314f, 4146.46f, 80.494f, 30f, 2, 0);
	func_527(&(uParam0->f_27[1 /*10*/]), 762.498f, 4589.213f, 105.5935f, 30f, 2, 0);
	func_527(&(uParam0->f_27[2 /*10*/]), 659.2919f, 4806.028f, 175.759f, 30f, 2, 0);
	func_527(&(uParam0->f_27[3 /*10*/]), 621.3849f, 5032.051f, 343.6387f, 30f, 2, 0);
	func_527(&(uParam0->f_27[4 /*10*/]), 503.8404f, 5297.335f, 508.6478f, 30f, 2, 0);
	func_527(&(uParam0->f_27[5 /*10*/]), 555.4404f, 5426.935f, 708.948f, 30f, 2, 0);
	func_527(&(uParam0->f_27[6 /*10*/]), 637.6946f, 5491.08f, 717.522f, 30f, 2, 0);
	func_527(&(uParam0->f_27[7 /*10*/]), 790.3913f, 5491.866f, 566.103f, 30f, 2, 0);
	func_527(&(uParam0->f_27[8 /*10*/]), 910.6804f, 5313.552f, 388.8567f, 30f, 2, 0);
	func_527(&(uParam0->f_27[9 /*10*/]), 1159.749f, 5183.155f, 253.1068f, 30f, 2, 0);
	func_527(&(uParam0->f_27[10 /*10*/]), 1354.13f, 4998.078f, 141.6288f, 30f, 2, 0);
	func_527(&(uParam0->f_27[11 /*10*/]), 1612.532f, 4941.23f, 61.8549f, 30f, 2, 0);
	func_527(&(uParam0->f_27[12 /*10*/]), 2200.396f, 4800.332f, 69.9321f, 30f, 3, 2);
	func_527(&(uParam0->f_27[13 /*10*/]), 2527.632f, 5144.98f, 66.763f, 30f, 3, 2);
	func_527(&(uParam0->f_27[14 /*10*/]), 2527.131f, 5275.334f, 62.3622f, 30f, 2, 0);
	func_527(&(uParam0->f_27[15 /*10*/]), 2413.345f, 5443.203f, 99.4297f, 30f, 2, 0);
	func_527(&(uParam0->f_27[16 /*10*/]), 2236.067f, 5524.246f, 108.3291f, 30f, 2, 0);
	func_527(&(uParam0->f_27[17 /*10*/]), 1944.463f, 5520.007f, 177.2808f, 30f, 2, 0);
	func_527(&(uParam0->f_27[18 /*10*/]), 1712.477f, 5624.937f, 324.9427f, 30f, 2, 0);
	func_527(&(uParam0->f_27[19 /*10*/]), 1601.158f, 5663.75f, 335.8832f, 30f, 2, 0);
	func_527(&(uParam0->f_27[20 /*10*/]), 1410.764f, 5675.836f, 425.9678f, 30f, 2, 0);
	func_527(&(uParam0->f_27[21 /*10*/]), 1225.682f, 5678.654f, 497.3169f, 30f, 2, 0);
	func_527(&(uParam0->f_27[22 /*10*/]), 1094.47f, 5664.07f, 563.0829f, 30f, 2, 0);
	func_527(&(uParam0->f_27[23 /*10*/]), 1001.427f, 5633.827f, 633.2537f, 30f, 2, 0);
	func_527(&(uParam0->f_27[24 /*10*/]), 875.5358f, 5642.667f, 682.5352f, 30f, 2, 0);
	func_527(&(uParam0->f_27[25 /*10*/]), 741.3275f, 5688.046f, 709.5683f, 30f, 2, 0);
	func_527(&(uParam0->f_27[26 /*10*/]), 487.2532f, 5654.821f, 802.0096f, 30f, 3, 1);
	func_527(&(uParam0->f_27[27 /*10*/]), 362.6602f, 5620.538f, 723.2353f, 30f, 2, 0);
	func_527(&(uParam0->f_27[28 /*10*/]), 134.4865f, 5555.637f, 520.3109f, 30f, 2, 0);
	func_527(&(uParam0->f_27[29 /*10*/]), -128.2242f, 5510.46f, 307.4505f, 30f, 2, 0);
	func_527(&(uParam0->f_27[30 /*10*/]), -397.7556f, 5438.69f, 175.4529f, 30f, 2, 0);
	func_527(&(uParam0->f_27[31 /*10*/]), -520.8975f, 5424.283f, 165.285f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_526(&(uParam0->f_358[0 /*189*/]));
	func_525(&(uParam0->f_358[0 /*189*/]), "Player");
	func_521(&(uParam0->f_358[0 /*189*/]), unk_0x096275889B8E0EE0(), Local_50.f_1);
	func_520(&(uParam0->f_358[0 /*189*/]), 1135.682f, 3700.644f, 80.494f, 22.3451f);
	func_519(&(uParam0->f_358[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_519(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_20 = iParam1;
	uParam0->f_21 = iParam2;
	uParam0->f_22 = iParam3;
}

void func_520(var uParam0, struct<3> Param1, float fParam4)
{
	uParam0->f_16 = { Param1 };
	uParam0->f_19 = fParam4;
}

void func_521(var uParam0, int iParam1, var uParam2)
{
	uParam0->f_8 = iParam1;
	uParam0->f_9 = uParam2;
	func_522(uParam2, &(Local_50.f_243));
}

void func_522(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xB86D29B10F627379(uParam0, 0))
	{
		func_524(uParam1);
		uParam1->f_42 = unk_0xDA76A9F39210D365(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xF4122ED5ACE92A17(iParam0), 16);
		*uParam1 = unk_0x925BC0BB4ADD9133(iParam0);
		unk_0x5AD07C3CF934E67B(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xF39FAB2FF8EABE36(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x5D1A7577B21657BF(iParam0, &(uParam1->f_38), &(uParam1->f_39), &(uParam1->f_40));
		uParam1->f_41 = unk_0xE109F71384B0E749(iParam0);
		uParam1->f_43 = unk_0xBC48F968D6EADC0D(iParam0);
		uParam1->f_45 = unk_0xBFBF929D2AB51389(iParam0);
		uParam1->f_46 = unk_0xC867FD144F2469D3(iParam0);
		unk_0xF9F04947622179FC(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		unk_0xC73BFF368F8ECC8E(iParam0, &(uParam1->f_50), &(uParam1->f_51), &(uParam1->f_52));
		if (unk_0x4F929B2CCC8BB671(iParam0, 2))
		{
			unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 28);
		}
		if (unk_0x4F929B2CCC8BB671(iParam0, 3))
		{
			unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 29);
		}
		if (unk_0x4F929B2CCC8BB671(iParam0, 0))
		{
			unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 30);
		}
		if (unk_0x4F929B2CCC8BB671(iParam0, 1))
		{
			unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 31);
		}
		if (uParam1->f_41 == -1 && uParam1->f_42 != joaat("granger"))
		{
			uParam1->f_41 = 0;
		}
		if (unk_0x7B7BDDF3BC6C3D0E(iParam0, 0))
		{
			uParam1->f_44 = unk_0x9CD9457A4F02F466(iParam0);
		}
		if (unk_0x6BD83A1CACAF87AD(uParam1->f_42))
		{
			if (unk_0xAE0F16A04C1E6E04(iParam0))
			{
				switch (unk_0xB3DBFFF01F5CD60D(iParam0))
				{
					case 2:
					case 0:
						unk_0x7D1D4A3602B6AD4E(&(uParam1->f_53), 23);
						unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 22);
						break;
					
					case 3:
					case 1:
						unk_0x7D1D4A3602B6AD4E(&(uParam1->f_53), 23);
						unk_0x7D1D4A3602B6AD4E(&(uParam1->f_53), 22);
						break;
					
					case 4:
						unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 23);
						break;
				}
			}
			else
			{
				unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 23);
			}
		}
		if (!unk_0xD7C60D33FB5EE7FA(iParam0))
		{
			unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 9);
		}
		if (unk_0x22335D30EB16E6C3(iParam0))
		{
			unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 10);
		}
		if (unk_0xB3A5CF3449056D6B(iParam0))
		{
			unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 13);
			unk_0xF33C54EDBFFBFC70(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		}
		if (unk_0xC6526C3B8D6D4E0C(iParam0))
		{
			unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 12);
		}
		func_523(&iParam0, &(uParam1->f_9), &(uParam1->f_35));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xFA9A55D9C4351625(iParam0, iVar0 + 1))
			{
				unk_0xF73FBE4845C43B5B(&(uParam1->f_53), func_112(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x5F655593F79A61BF(iParam0, 0))
		{
			unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 11);
		}
		else
		{
			unk_0x7D1D4A3602B6AD4E(&(uParam1->f_53), 11);
		}
		if (unk_0xD9D1CDBF3464DCDF(iParam0, "IgnoredByQuickSave") && unk_0xDEF3F1B071ABB197(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xF73FBE4845C43B5B(&(uParam1->f_53), 27);
		}
		else
		{
			unk_0x7D1D4A3602B6AD4E(&(uParam1->f_53), 27);
		}
	}
}

int func_523(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xB86D29B10F627379(*uParam0, 0))
	{
		return 0;
	}
	if (unk_0xAF9BACB8400BED0F(*uParam0) == 0)
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
			if (unk_0xDDADBD56AE4C56D3(*uParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x6F122920B2E54FF4(*uParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xCBDF6BADFF4FFDEB(*uParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xCBDF6BADFF4FFDEB(*uParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_524(var uParam0)
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

void func_525(char* sParam0, char* sParam1)
{
	StringCopy(sParam0, sParam1, 32);
}

void func_526(var uParam0)
{
	uParam0->f_10 = 0;
	uParam0->f_11 = -1;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0f;
	uParam0->f_23 = 13;
}

void func_527(var uParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6)
{
	*uParam0 = { Param1 };
	uParam0->f_3 = fParam4;
	uParam0->f_7 = iParam5;
	uParam0->f_8 = iParam6;
}

void func_528(var uParam0)
{
	func_533(uParam0);
	uParam0->f_12 = 28;
	func_527(&(uParam0->f_27[0 /*10*/]), -1737.725f, -2720.967f, 38f, 30f, 2, 0);
	func_527(&(uParam0->f_27[1 /*10*/]), -1384.515f, -2880.773f, 38f, 30f, 2, 0);
	func_527(&(uParam0->f_27[2 /*10*/]), -1156.435f, -2957.284f, 40f, 30f, 2, 0);
	func_527(&(uParam0->f_27[3 /*10*/]), -795.3043f, -2987.754f, 60f, 30f, 2, 0);
	func_527(&(uParam0->f_27[4 /*10*/]), -429.0231f, -2969.528f, 30f, 30f, 3, 1);
	func_527(&(uParam0->f_27[5 /*10*/]), -15.5168f, -2912.484f, 60f, 30f, 2, 0);
	func_527(&(uParam0->f_27[6 /*10*/]), 656.9059f, -2798.444f, 80f, 30f, 3, 2);
	func_527(&(uParam0->f_27[7 /*10*/]), 990.7529f, -2452.092f, 70f, 30f, 2, 0);
	func_527(&(uParam0->f_27[8 /*10*/]), 1019.531f, -2182.119f, 60f, 30f, 2, 0);
	func_527(&(uParam0->f_27[9 /*10*/]), 1019.899f, -1886.15f, 60f, 30f, 2, 0);
	func_527(&(uParam0->f_27[10 /*10*/]), 944.9045f, -1488.589f, 107.7f, 30f, 2, 0);
	func_527(&(uParam0->f_27[11 /*10*/]), 698.908f, -1013.024f, 100.5f, 30f, 3, 2);
	func_527(&(uParam0->f_27[12 /*10*/]), 388.7276f, -822.8241f, 90f, 30f, 2, 0);
	func_527(&(uParam0->f_27[13 /*10*/]), 20.7016f, -653.9637f, 101.8f, 30f, 3, 2);
	func_527(&(uParam0->f_27[14 /*10*/]), -135.3874f, -670.6069f, 112f, 30f, 3, 3);
	func_527(&(uParam0->f_27[15 /*10*/]), -360.3365f, -655.137f, 90f, 30f, 2, 0);
	func_527(&(uParam0->f_27[16 /*10*/]), -700.3533f, -657.1476f, 70f, 30f, 2, 0);
	func_527(&(uParam0->f_27[17 /*10*/]), -951.5859f, -654.0262f, 68f, 30f, 3, 2);
	func_527(&(uParam0->f_27[18 /*10*/]), -1125.587f, -769.7247f, 67f, 30f, 2, 0);
	func_527(&(uParam0->f_27[19 /*10*/]), -1281.291f, -851.0229f, 82f, 30f, 3, 1);
	func_527(&(uParam0->f_27[20 /*10*/]), -1580.865f, -1009.944f, 40f, 30f, 2, 0);
	func_527(&(uParam0->f_27[21 /*10*/]), -1877.52f, -1152.927f, 30f, 30f, 2, 0);
	func_527(&(uParam0->f_27[22 /*10*/]), -2101.111f, -1330.267f, 20f, 30f, 2, 0);
	func_527(&(uParam0->f_27[23 /*10*/]), -2230.15f, -1555.89f, 10f, 30f, 3, 2);
	func_527(&(uParam0->f_27[24 /*10*/]), -2214.946f, -1978.262f, 10f, 30f, 2, 0);
	func_527(&(uParam0->f_27[25 /*10*/]), -2055.091f, -2359.626f, 20f, 30f, 2, 0);
	func_527(&(uParam0->f_27[26 /*10*/]), -1893.392f, -2559.46f, 22f, 30f, 2, 0);
	func_527(&(uParam0->f_27[27 /*10*/]), -1737.725f, -2720.967f, 83.7f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_526(&(uParam0->f_358[0 /*189*/]));
	func_525(&(uParam0->f_358[0 /*189*/]), "Player");
	func_521(&(uParam0->f_358[0 /*189*/]), unk_0x096275889B8E0EE0(), Local_50.f_1);
	func_520(&(uParam0->f_358[0 /*189*/]), -2102.16f, -2556.082f, 38f, 245.6561f);
	func_519(&(uParam0->f_358[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_529(var uParam0, int iParam1)
{
	func_309(&(uParam0->f_9), iParam1);
}

void func_530(var uParam0)
{
	func_533(uParam0);
	uParam0->f_12 = 21;
	func_527(&(uParam0->f_27[0 /*10*/]), 1167.2f, -2557.195f, 90f, 30f, 2, 0);
	func_527(&(uParam0->f_27[1 /*10*/]), 869.9235f, -2613.705f, 57.8325f, 30f, 2, 0);
	func_527(&(uParam0->f_27[2 /*10*/]), 652.3818f, -2651.991f, 54.935f, 30f, 2, 0);
	func_527(&(uParam0->f_27[3 /*10*/]), 249.3849f, -2579.821f, 60.1264f, 30f, 3, 2);
	func_527(&(uParam0->f_27[4 /*10*/]), -31.7179f, -2590.793f, 19.9452f, 30f, 2, 0);
	func_527(&(uParam0->f_27[5 /*10*/]), -317.409f, -2582.66f, 48.7654f, 30f, 3, 3);
	func_527(&(uParam0->f_27[6 /*10*/]), -395.6915f, -2334.057f, 39.3612f, 30f, 2, 0);
	func_527(&(uParam0->f_27[7 /*10*/]), -300.2367f, -2118.431f, 53.3728f, 30f, 2, 0);
	func_527(&(uParam0->f_27[8 /*10*/]), -157.1812f, -1967.885f, 56.4093f, 30f, 3, 2);
	func_527(&(uParam0->f_27[9 /*10*/]), -199.4688f, -1803.328f, 13.6363f, 30f, 2, 0);
	func_527(&(uParam0->f_27[10 /*10*/]), -383.5264f, -1738.067f, 60.8194f, 30f, 2, 0);
	func_527(&(uParam0->f_27[11 /*10*/]), -649.8698f, -1710.374f, 61.3036f, 30f, 2, 0);
	func_527(&(uParam0->f_27[12 /*10*/]), -861.6902f, -1857.194f, 77.0621f, 30f, 3, 2);
	func_527(&(uParam0->f_27[13 /*10*/]), -716.8034f, -2111.744f, 65.9868f, 30f, 2, 0);
	func_527(&(uParam0->f_27[14 /*10*/]), -548.7557f, -2230.616f, 97.2887f, 30f, 2, 0);
	func_527(&(uParam0->f_27[15 /*10*/]), -270.7834f, -2425.144f, 96.7744f, 30f, 3, 1);
	func_527(&(uParam0->f_27[16 /*10*/]), 5.435f, -2665.31f, 46.2903f, 30f, 2, 0);
	func_527(&(uParam0->f_27[17 /*10*/]), 299.0821f, -2834.288f, 27.0191f, 30f, 2, 0);
	func_527(&(uParam0->f_27[18 /*10*/]), 514.295f, -2880.863f, 42.0956f, 30f, 3, 2);
	func_527(&(uParam0->f_27[19 /*10*/]), 842.6024f, -2599.042f, 25.978f, 30f, 2, 0);
	func_527(&(uParam0->f_27[20 /*10*/]), 991.974f, -2468.436f, 87.493f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_526(&(uParam0->f_358[0 /*189*/]));
	func_525(&(uParam0->f_358[0 /*189*/]), "Player");
	func_521(&(uParam0->f_358[0 /*189*/]), unk_0x096275889B8E0EE0(), Local_50.f_1);
	func_520(&(uParam0->f_358[0 /*189*/]), 1788.044f, -2438.835f, 130.9346f, 100.0275f);
	func_519(&(uParam0->f_358[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_531(var uParam0)
{
	func_533(uParam0);
	uParam0->f_12 = 19;
	func_527(&(uParam0->f_27[0 /*10*/]), -2819.07f, -81.2779f, 76.1411f, 30f, 2, 0);
	func_527(&(uParam0->f_27[1 /*10*/]), -2737.77f, 342.665f, 175.645f, 30f, 2, 0);
	func_527(&(uParam0->f_27[2 /*10*/]), -2631.929f, 499.7495f, 210.0935f, 30f, 2, 0);
	func_527(&(uParam0->f_27[3 /*10*/]), -2438.01f, 692.3843f, 285.745f, 30f, 3, 3);
	func_527(&(uParam0->f_27[4 /*10*/]), -2039.406f, 708.7898f, 170.6556f, 30f, 2, 0);
	func_527(&(uParam0->f_27[5 /*10*/]), -1633.076f, 751.8171f, 220.188f, 30f, 2, 0);
	func_527(&(uParam0->f_27[6 /*10*/]), -1187.955f, 874.4288f, 246.4972f, 30f, 3, 1);
	func_527(&(uParam0->f_27[7 /*10*/]), -893.826f, 994.239f, 239.512f, 30f, 2, 0);
	func_527(&(uParam0->f_27[8 /*10*/]), -565.788f, 1098.308f, 349.0507f, 30f, 2, 0);
	func_527(&(uParam0->f_27[9 /*10*/]), -326.8564f, 1129.9f, 336.1296f, 30f, 2, 0);
	func_527(&(uParam0->f_27[10 /*10*/]), -155.9212f, 1149.858f, 312.2522f, 30f, 2, 0);
	func_527(&(uParam0->f_27[11 /*10*/]), 145.603f, 1162.599f, 277.7465f, 30f, 3, 1);
	func_527(&(uParam0->f_27[12 /*10*/]), 355.6647f, 1234.464f, 287.6501f, 30f, 2, 0);
	func_527(&(uParam0->f_27[13 /*10*/]), 640.85f, 1191.643f, 329.783f, 30f, 2, 0);
	func_527(&(uParam0->f_27[14 /*10*/]), 783.3697f, 1157.395f, 329.0691f, 30f, 3, 3);
	func_527(&(uParam0->f_27[15 /*10*/]), 1016.378f, 1000.386f, 252.4894f, 30f, 2, 0);
	func_527(&(uParam0->f_27[16 /*10*/]), 1243.37f, 945.084f, 150.5214f, 30f, 2, 0);
	func_527(&(uParam0->f_27[17 /*10*/]), 1494.048f, 863.8886f, 110.4097f, 30f, 2, 0);
	func_527(&(uParam0->f_27[18 /*10*/]), 1751.842f, 687.7875f, 296.787f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_526(&(uParam0->f_358[0 /*189*/]));
	func_525(&(uParam0->f_358[0 /*189*/]), "Player");
	func_521(&(uParam0->f_358[0 /*189*/]), unk_0x096275889B8E0EE0(), Local_50.f_1);
	func_520(&(uParam0->f_358[0 /*189*/]), -2818.17f, -500.178f, 76.1411f, 0f);
	func_519(&(uParam0->f_358[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_532(var uParam0)
{
	func_533(uParam0);
	uParam0->f_12 = 18;
	func_527(&(uParam0->f_27[0 /*10*/]), 1025.724f, 3073.133f, 70f, 30f, 2, 0);
	func_527(&(uParam0->f_27[1 /*10*/]), 847.4132f, 3025.239f, 80f, 30f, 2, 0);
	func_527(&(uParam0->f_27[2 /*10*/]), 624.897f, 2968.416f, 80f, 30f, 3, 1);
	func_527(&(uParam0->f_27[3 /*10*/]), 398.5529f, 2921.654f, 75f, 30f, 2, 0);
	func_527(&(uParam0->f_27[4 /*10*/]), 68.1f, 2896.4f, 80f, 30f, 2, 0);
	func_527(&(uParam0->f_27[5 /*10*/]), -290.7f, 2895.4f, 80f, 30f, 2, 0);
	func_527(&(uParam0->f_27[6 /*10*/]), -1033.31f, 2832.959f, 37.5f, 30f, 3, 2);
	func_527(&(uParam0->f_27[7 /*10*/]), -1195.153f, 2729.109f, 18f, 30f, 2, 0);
	func_527(&(uParam0->f_27[8 /*10*/]), -1414.6f, 2636.365f, 8.25f, 30f, 2, 0);
	func_527(&(uParam0->f_27[9 /*10*/]), -1684.856f, 2630.035f, 10f, 30f, 2, 0);
	func_527(&(uParam0->f_27[10 /*10*/]), -2024.536f, 2677.336f, 30f, 30f, 3, 1);
	func_527(&(uParam0->f_27[11 /*10*/]), -2659.106f, 2670.574f, 5.4745f, 30f, 2, 0);
	func_527(&(uParam0->f_27[12 /*10*/]), -2880.136f, 2732.084f, 21.0365f, 30f, 2, 0);
	func_527(&(uParam0->f_27[13 /*10*/]), -3200.826f, 2826.548f, 40f, 30f, 3, 2);
	func_527(&(uParam0->f_27[14 /*10*/]), -3363.374f, 2580.812f, 50f, 30f, 2, 0);
	func_527(&(uParam0->f_27[15 /*10*/]), -3242.432f, 2370.19f, 40f, 30f, 2, 0);
	func_527(&(uParam0->f_27[16 /*10*/]), -2879.09f, 2382.111f, 20f, 30f, 2, 0);
	func_527(&(uParam0->f_27[17 /*10*/]), -2650.532f, 2450.207f, 66.6f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_526(&(uParam0->f_358[0 /*189*/]));
	func_525(&(uParam0->f_358[0 /*189*/]), "Player");
	func_521(&(uParam0->f_358[0 /*189*/]), unk_0x096275889B8E0EE0(), Local_50.f_1);
	func_520(&(uParam0->f_358[0 /*189*/]), Local_2306, 154.8464f);
	func_519(&(uParam0->f_358[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_533(var uParam0)
{
	float fVar0;
	
	func_4(&(uParam0->f_3));
	if (Local_50.f_10 != -1)
	{
		fVar0 = func_35(Local_50.f_10);
		if (fVar0 <= 0f || fVar0 > Local_50.f_12[Local_50.f_10])
		{
			fVar0 = Local_50.f_12[Local_50.f_10];
		}
		uParam0->f_9 = fVar0;
		uParam0->f_10 = (uParam0->f_9 / 2f);
	}
	func_541(uParam0);
	uParam0->f_12 = 0;
	func_534(uParam0);
	uParam0->f_13 = 0;
}

void func_534(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		func_535(uParam0, iVar0);
		iVar0++;
	}
}

void func_535(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return;
	}
	func_537(&(uParam0->f_358[iParam1 /*189*/]));
	func_536(&(uParam0->f_358[iParam1 /*189*/]));
}

void func_536(char* sParam0)
{
	StringCopy(sParam0, "Racer", 32);
	sParam0->f_8 = 0;
	sParam0->f_9 = 0;
	sParam0->f_10 = 0;
	sParam0->f_11 = -1;
	sParam0->f_12 = 0;
	sParam0->f_13 = 0f;
	sParam0->f_14 = 0f;
	sParam0->f_15 = 0f;
	sParam0->f_23 = 13;
	sParam0->f_16 = { Local_50.f_3 };
	sParam0->f_19 = Local_50.f_6;
	sParam0->f_20 = Local_50.f_7;
	sParam0->f_21 = Local_50.f_8;
	sParam0->f_22 = Local_50.f_9;
}

void func_537(var uParam0)
{
	func_540(uParam0);
	func_539(uParam0);
	func_538(uParam0);
}

void func_538(var uParam0)
{
	if (unk_0xD42BD6EB2E0F1677(uParam0->f_9))
	{
		if (uParam0->f_9 != Local_50.f_1)
		{
			if (!(unk_0x7D5B1F88E7504BBA(uParam0->f_8) || unk_0x7D5B1F88E7504BBA(uParam0->f_9)))
			{
				if (unk_0x9C8E4D238C999648(uParam0->f_8, uParam0->f_9, 0))
				{
					unk_0xFA8B88A1EF049B33(uParam0->f_8);
				}
			}
			unk_0xE20A909D8C4A70F8(&(uParam0->f_9));
		}
	}
}

void func_539(var uParam0)
{
	if (unk_0xD42BD6EB2E0F1677(uParam0->f_8))
	{
		if (uParam0->f_8 != unk_0x096275889B8E0EE0())
		{
			unk_0xCC0EF140F99365C5(&(uParam0->f_8));
		}
	}
}

void func_540(var uParam0)
{
	func_83(&(uParam0->f_10));
}

void func_541(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		func_542(uParam0, iVar0);
		iVar0++;
	}
}

void func_542(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return;
	}
	func_82(&(uParam0->f_27[iParam1 /*10*/]));
	func_79(&(uParam0->f_27[iParam1 /*10*/]));
	func_543(&(uParam0->f_27[iParam1 /*10*/]));
}

void func_543(var uParam0)
{
	*uParam0 = { Local_50.f_3 };
	uParam0->f_3 = 16f;
	uParam0->f_7 = 0;
	uParam0->f_4 = 10f;
}

void func_544(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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
		if (!unk_0x6CFF81397164A1D3(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x4FE2FB654BF367EB(iParam2, 0);
			}
			else
			{
				unk_0x4FE2FB654BF367EB(iParam2, 1);
			}
		}
		if (!unk_0x6CFF81397164A1D3(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x5461EC345E4967B2(iParam2, 0);
			}
			else
			{
				unk_0x5461EC345E4967B2(iParam2, 1);
			}
		}
	}
}

void func_545()
{
	struct<68> Var0;
	
	Global_1835013 = 0;
	Global_1835013.f_1 = 0;
	Global_1835013.f_2 = 0;
	Global_1835013.f_3 = 0;
	Global_1835013.f_4 = 0;
	func_546(&(Global_1835013.f_73));
	func_546(&(Global_1835013.f_142));
	func_546(&(Global_1835013.f_211));
	func_546(&(Global_1835013.f_280));
	StringCopy(&(Global_1835013.f_349), "", 24);
	StringCopy(&(Global_1835013.f_355), "", 24);
	func_482(&(Global_1835013.f_361));
	Global_1835013.f_374 = -1;
	Global_1835388 = 0;
	Global_1835389 = 0;
	Var0.f_2.f_1 = 4;
	Global_1835013.f_5 = { Var0 };
}

void func_546(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_3[iVar0] = 0f;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

void func_547(bool bParam0)
{
	if (bParam0)
	{
		unk_0xDF3B5846DE5904AF(0);
		unk_0x66AB6B6C7E72F393(1);
		unk_0x2552D675C0051FED(0);
		func_156(1);
		Global_85625 = 1;
	}
	else
	{
		unk_0xDF3B5846DE5904AF(1);
		unk_0x66AB6B6C7E72F393(0);
		unk_0x2552D675C0051FED(1);
		func_156(0);
		Global_85625 = 0;
	}
}

void func_548(var uParam0)
{
	*uParam0 = unk_0x67D02A194A2FC2BD("COUNTDOWN");
	unk_0x9C623A934CD60291("HUD_321_GO", 1);
}

int func_549(int iParam0)
{
	if (unk_0xF5472C80DF2FF847())
	{
		unk_0x6A053CF596F67DF7(iParam0);
	}
	else if (unk_0x37F9A426FBCF4AF2())
	{
		return 1;
	}
	return 0;
}

void func_550()
{
	int iVar0;
	
	if (!iLocal_2405)
	{
		if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
		{
			if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
			{
				iVar0 = unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 0);
				if (unk_0xD42BD6EB2E0F1677(iVar0) && !unk_0x7D5B1F88E7504BBA(iVar0))
				{
					if (unk_0xC1DB1F019BEDAE9D(iVar0))
					{
						if (!unk_0xF5472C80DF2FF847())
						{
							unk_0xF27F981A5EBAEFDB("MGSP_START");
							iLocal_2405 = 1;
						}
					}
				}
			}
		}
	}
}

int func_551(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_552(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam1 = unk_0x68E1352AF48F905D(uParam0, 24, 31);
	*uParam2 = unk_0x68E1352AF48F905D(uParam0, 16, 23);
	*uParam3 = unk_0x68E1352AF48F905D(uParam0, 8, 15);
	*uParam4 = unk_0x68E1352AF48F905D(uParam0, 0, 7);
}

var func_553(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0x39F91E7F4F162E9C(iParam0, &uVar0, &uVar1, &uVar2, &uVar3);
	return func_554(uVar0, uVar1, uVar2, uVar3);
}

var func_554(var uParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	
	unk_0x324DC1CEF57F31E6(&uVar0, 24, 31, uParam0);
	unk_0x324DC1CEF57F31E6(&uVar0, 16, 23, uParam1);
	unk_0x324DC1CEF57F31E6(&uVar0, 8, 15, uParam2);
	unk_0x324DC1CEF57F31E6(&uVar0, 0, 7, uParam3);
	return uVar0;
}

int func_555()
{
	if (unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
	{
		return 0;
	}
	func_565(23, 1);
	func_564(10);
	switch (Local_2320.f_5)
	{
		case 0:
			unk_0x28A4BD2CEE236E19(0);
			unk_0xDDB809241EF124FA("EXTRASUNNY", 10f);
			func_563();
			func_562(2, 0);
			func_562(1, 0);
			func_562(3, 0);
			func_562(4, 0);
			func_562(5, 0);
			func_562(6, 0);
			func_562(7, 0);
			unk_0xD3BDEFB5C25B69C4(unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1), 10f, 0);
			unk_0x894DDE7F2D919046(Local_5279, 600f, 0, 0, 0, 0, 0);
			func_556(&Local_2411, Local_50.f_10);
			unk_0x643E8DF0C2B25C6F(unk_0x217E9DC48139933D(), 0);
			unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 0, 512);
			if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0) || unk_0x29B959D9755B1A71(unk_0x096275889B8E0EE0()))
			{
				Local_2320.f_5 = 2;
			}
			else
			{
				Local_2320.f_5 = 1;
			}
			break;
		
		case 1:
			if (func_333(1000))
			{
				Local_2320.f_5 = 2;
			}
			break;
		
		case 2:
			unk_0x7C11D0C2EFACD80D("SP_SPR", 3);
			unk_0xC1BA29DF5631B0F8("Shared", 0);
			while (!unk_0x54D6900929CCF162("Shared"))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0x9C623A934CD60291("HUD_AWARDS", 0);
			Local_2320.f_5 = 3;
			break;
		
		case 3:
			if (unk_0x6C01088174B23EE3(3))
			{
				Local_2320.f_5 = 4;
			}
			break;
		
		case 4:
			Local_2320.f_5 = 5;
			func_11(&(Local_2320.f_2));
			break;
		
		case 5:
			if (func_2(&(Local_2320.f_2), 0.5f))
			{
				Local_2320.f_5 = 6;
			}
			break;
		
		case 6:
			if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
			{
				Local_2320.f_5 = 9;
			}
			else
			{
				Local_2320.f_5 = 7;
				func_11(&(Local_2320.f_2));
			}
			break;
		
		case 7:
			if (func_2(&(Local_2320.f_2), 0.5f))
			{
				Local_2320.f_5 = 8;
			}
			break;
		
		case 8:
			if (func_549(5000))
			{
				unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 1, 0);
				Local_2320.f_5 = 9;
			}
			break;
		
		case 9:
			func_4(&(Local_2320.f_2));
			return 0;
			break;
		
		case 10:
			return 0;
			break;
	}
	return 1;
}

void func_556(var uParam0, int iParam1)
{
	Local_50.f_0 = 0;
	Local_50.f_1 = 0;
	Local_50.f_2 = 2;
	Local_50.f_3 = { Local_2306 };
	Local_50.f_6 = 154.8464f;
	Local_50.f_7 = 4;
	Local_50.f_8 = joaat("a_m_y_genstreet_01");
	Local_50.f_9 = joaat("stunt");
	StringCopy(&(Local_50.f_24[0 /*8*/]), "AIRPORT", 32);
	Local_50.f_12[0] = 165f;
	StringCopy(&(Local_50.f_24[1 /*8*/]), "BRIDGEBINGE", 32);
	Local_50.f_12[1] = 80f;
	StringCopy(&(Local_50.f_24[2 /*8*/]), "VINEWOOD", 32);
	Local_50.f_12[2] = 165f;
	StringCopy(&(Local_50.f_24[3 /*8*/]), "BRIDGEWORK", 32);
	Local_50.f_12[3] = 165f;
	StringCopy(&(Local_50.f_24[4 /*8*/]), "ALTITUDE", 32);
	Local_50.f_12[4] = 165f;
	switch (iParam1)
	{
		case 0:
			func_561(&Local_2411);
			break;
		
		case 1:
			func_560(&Local_2411);
			break;
		
		case 2:
			func_559(&Local_2411);
			break;
		
		case 3:
			func_558(&Local_2411);
			break;
		
		case 4:
			func_557(&Local_2411);
			break;
	}
}

void func_557(var uParam0)
{
}

void func_558(var uParam0)
{
}

void func_559(var uParam0)
{
}

void func_560(var uParam0)
{
}

void func_561(var uParam0)
{
}

void func_562(int iParam0, int iParam1)
{
	unk_0xF73FBE4845C43B5B(&Global_24601, iParam0);
	StringCopy(&(Global_24602[iParam0 /*6*/]), unk_0x8F77B33B6A34D8BA(), 24);
	Global_24657[iParam0] = iParam1;
}

void func_563()
{
	Global_17098.f_5 = 1;
}

void func_564(int iParam0)
{
	func_286();
	Global_68500 = iParam0;
	Global_68499 = 0;
	Global_68502 = 3;
}

void func_565(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xF73FBE4845C43B5B(&Global_24688, iParam0);
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(&Global_24688, iParam0);
	}
}

void func_566()
{
}

void func_567()
{
	unk_0x36CDD81627A6FCD2();
	func_339();
	func_405();
	func_545();
	func_565(23, 0);
	func_547(0);
	unk_0x28A4BD2CEE236E19(5);
	unk_0x86CCAF7CE493EFBE();
	func_286();
	func_214(0);
	func_232(0);
	unk_0xD85DFE5C131E4AE9();
	unk_0x1A06FD91B1672D09("MGSP_START");
	unk_0x1A06FD91B1672D09("MGSP_FAIL");
	unk_0x1A06FD91B1672D09("MGTR_COMPLETE");
	unk_0xF27F981A5EBAEFDB("MGSP_END");
	unk_0x07EED5C86B43D7B5();
	func_575(2, 0);
	func_575(1, 0);
	func_575(3, 0);
	func_575(4, 0);
	func_575(5, 0);
	func_575(6, 0);
	func_575(7, 0);
	unk_0x643E8DF0C2B25C6F(unk_0x217E9DC48139933D(), 1);
	unk_0x3D596E6E88A02C24();
	func_573(&(Local_50.f_118));
	unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 1, 0);
	unk_0xFEBEEBC9CBDF4B12(unk_0x217E9DC48139933D(), 0);
	unk_0xF3D4779E285B441F(3, 1);
	unk_0x4ACA10A91F66F1E2("PilotSchool");
	func_571(&Local_2411, 1);
	unk_0x139E35755418F6AA(103, "SPRTaxi");
	unk_0x139E35755418F6AA(104, "SPRTaxi");
	unk_0x0BFC2C61FB5B6CA1(1);
	unk_0x00686F7B3723B82F();
	func_570();
	unk_0xD63FE3AF9FB3D53F(1);
	unk_0x1B3DA717B9AFF828(1);
	func_229();
	unk_0xB90411F480457A6C(true);
	func_568();
	unk_0x5E8B6D17FF91CD59();
}

void func_568()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_87300[iVar0 /*17*/] && !Global_87300[iVar0 /*17*/].f_1)
		{
			if (Global_87300[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_87300[iVar0 /*17*/].f_5 != 88 && Global_87300[iVar0 /*17*/].f_5 != 89) && Global_87300[iVar0 /*17*/].f_5 != 92)
				{
					func_569(Global_87300[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_569(int iParam0, bool bParam1)
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

void func_570()
{
	Global_17098.f_5 = 0;
}

void func_571(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_533(uParam0);
	}
	else
	{
		func_572(uParam0);
	}
	func_124(0);
	func_27(&(uParam0->f_17));
	unk_0x0BFC2C61FB5B6CA1(1);
	unk_0x00686F7B3723B82F();
	if (iLocal_2404)
	{
		func_61("SPR_MOVE_FAIL", 5000, 0);
		iLocal_2404 = 0;
	}
}

void func_572(var uParam0)
{
}

void func_573(var uParam0)
{
	func_574(*uParam0);
}

void func_574(var uParam0)
{
	unk_0x6215C0F9FFF76BAD(&uParam0);
}

void func_575(int iParam0, bool bParam1)
{
	if (unk_0x4ED6CFDFE8D4131A(Global_24601, iParam0))
	{
		if (!bParam1)
		{
			unk_0x7D1D4A3602B6AD4E(&Global_24601, iParam0);
			StringCopy(&(Global_24602[iParam0 /*6*/]), "NULL", 24);
			Global_24657[iParam0] = bParam1;
		}
	}
}

