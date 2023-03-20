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
	struct<328> Local_50 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_389 = 8;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 4;
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
	var uLocal_408 = 4;
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
	var uLocal_423 = 4;
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
	var uLocal_438 = 4;
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
	var uLocal_453 = 4;
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
	var uLocal_468 = 4;
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
	var uLocal_483 = 4;
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
	var uLocal_498 = 4;
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
	struct<3> Local_516 = { 0, 0, 0 } ;
	int iLocal_519 = 0;
	int iLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	bool bLocal_524 = 0;
	bool bLocal_525 = 0;
	int iLocal_526 = 0;
	int iLocal_527 = 0;
	int iLocal_528 = 0;
	int iLocal_529 = 0;
	int iLocal_530[5] = { 0, 0, 0, 0, 0 };
	float fLocal_536 = 0f;
	float fLocal_537 = 0f;
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
	var uLocal_552 = 8;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 2;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 8;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 8;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	float fLocal_582 = 0f;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	float fLocal_585 = 0f;
	float fLocal_586 = 0f;
	float fLocal_587 = 0f;
	float fLocal_588 = 0f;
	float fLocal_589 = 0f;
	bool bLocal_590 = 0;
	var uLocal_591 = 35;
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
	var uLocal_907 = 50;
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
	var uLocal_1011 = 40;
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
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
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
	var uLocal_1567 = 1;
	var uLocal_1568 = 0;
	var uLocal_1569 = 1;
	var uLocal_1570 = 1;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 1;
	var uLocal_1575 = 1;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 3;
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
	var uLocal_1597 = 0;
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
	var uLocal_1626 = 4;
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
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
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
	var uLocal_1691 = 2;
	var uLocal_1692 = 0;
	var uLocal_1693 = 4;
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
	var uLocal_1730 = 0;
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
	var uLocal_1759 = 4;
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
	var uLocal_1801 = 0;
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
	var uLocal_1830 = 12;
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
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 3;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	int iLocal_2015 = 0;
	var uLocal_2016 = 0;
	int iLocal_2017 = 0;
	int iLocal_2018 = 0;
	int iLocal_2019 = 0;
	int iLocal_2020 = 0;
	int iLocal_2021 = 0;
	int iLocal_2022 = 0;
	int iLocal_2023 = 0;
	int iLocal_2024 = 0;
	int iLocal_2025 = 0;
	int iLocal_2026 = 0;
	int iLocal_2027 = 0;
	int iLocal_2028 = 0;
	int iLocal_2029 = 0;
	int iLocal_2030 = 0;
	int iLocal_2031 = 0;
	int iLocal_2032 = 0;
	int iLocal_2033 = 0;
	int iLocal_2034 = 0;
	int iLocal_2035 = 0;
	int iLocal_2036 = 0;
	int iLocal_2037 = 0;
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
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	int iLocal_2081[5] = { 0, 0, 0, 0, 0 };
	var uLocal_2087[5] = { 0, 0, 0, 0, 0 };
	var uLocal_2093[5] = { 0, 0, 0, 0, 0 };
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	int iLocal_2101 = 0;
	float fLocal_2102 = 0f;
	int iLocal_2103 = 0;
	int iLocal_2104 = 0;
	int iLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 16;
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
	var uLocal_2246 = 0;
	var uLocal_2247 = 0;
	var uLocal_2248 = 0;
	var uLocal_2249 = 0;
	var uLocal_2250 = 0;
	var uLocal_2251 = 0;
	var uLocal_2252 = 0;
	var uLocal_2253 = 0;
	var uLocal_2254 = 0;
	var uLocal_2255 = 0;
	var uLocal_2256 = 0;
	var uLocal_2257 = 0;
	var uLocal_2258 = 0;
	var uLocal_2259 = 0;
	var uLocal_2260 = 0;
	var uLocal_2261 = 0;
	var uLocal_2262 = 0;
	var uLocal_2263 = 0;
	var uLocal_2264 = 0;
	var uLocal_2265 = 0;
	var uLocal_2266 = 0;
	var uLocal_2267 = 0;
	var uLocal_2268 = 0;
	var uLocal_2269 = 0;
	var uLocal_2270 = 0;
	var uLocal_2271 = 0;
	var uLocal_2272 = 0;
	var uLocal_2273 = 0;
	var uLocal_2274 = 0;
	char* sLocal_2275 = NULL;
	float fLocal_2276 = 0f;
	float fLocal_2277 = 0f;
	bool bLocal_2278 = 0;
	bool bLocal_2279 = 0;
	struct<3> Local_2280 = { 0, 0, 0 } ;
	struct<3> Local_2283 = { 0, 0, 0 } ;
	struct<3> Local_2286 = { 0, 0, 0 } ;
	float fLocal_2289 = 0f;
	float fLocal_2290 = 0f;
	var uLocal_2291 = 0;
	var uLocal_2292 = 0;
	var uLocal_2293 = -1;
	var uLocal_2294 = 0;
	var uLocal_2295 = 0;
	var uLocal_2296 = 0;
	var uLocal_2297 = 0;
	var uLocal_2298 = 0;
	var uLocal_2299 = 0;
	var uLocal_2300 = 1000;
	var uLocal_2301 = 1000;
	var uLocal_2302 = 0;
	char[] cLocal_2303[8] = 0;
	char* sLocal_2304 = NULL;
	bool bLocal_2305 = 0;
	var uLocal_2306 = 0;
	var uLocal_2307 = 0;
	var uLocal_2308 = 0;
	var uLocal_2309 = 0;
	var uLocal_2310 = 0;
	var uLocal_2311 = 0;
	var uLocal_2312 = 0;
	var uLocal_2313 = 0;
	var uLocal_2314 = 0;
	bool bLocal_2315 = 0;
	int iLocal_2316 = 0;
	int iLocal_2317 = 0;
	struct<7> Local_2318 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2325 = 0;
	var uLocal_2326 = 0;
	var uLocal_2327 = 0;
	var uLocal_2328 = 0;
	var uLocal_2329 = 0;
	int iLocal_2330 = 0;
	var uLocal_2331 = 0;
	char* sLocal_2332 = NULL;
	char* sLocal_2333 = NULL;
	char* sLocal_2334 = NULL;
	struct<3> Local_2335 = { 0, 0, 0 } ;
	struct<3> Local_2338 = { 0, 0, 0 } ;
	int iLocal_2341 = 0;
	int iLocal_2342 = 0;
	int iLocal_2343 = 0;
	int iLocal_2344 = 0;
	int iLocal_2345 = 0;
	int iLocal_2346 = 0;
	int iLocal_2347 = 0;
	int iLocal_2348 = 0;
	struct<7> Local_2349 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 0;
	var uLocal_2359 = 1132396544;
	var uLocal_2360 = 1132396544;
	var uLocal_2361 = 1132396544;
	var uLocal_2362 = 0;
	var uLocal_2363 = -1082130432;
	var uLocal_2364 = 0;
	var uLocal_2365 = 0;
	var uLocal_2366 = 8;
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
	var uLocal_2394 = 0;
	var uLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	var uLocal_2405 = 0;
	var uLocal_2406 = 0;
	var uLocal_2407 = 0;
	var uLocal_2408 = 0;
	var uLocal_2409 = 0;
	var uLocal_2410 = 0;
	var uLocal_2411 = 0;
	var uLocal_2412 = 0;
	var uLocal_2413 = 0;
	var uLocal_2414 = 0;
	var uLocal_2415 = 0;
	var uLocal_2416 = 0;
	var uLocal_2417 = 0;
	var uLocal_2418 = 0;
	var uLocal_2419 = 0;
	var uLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = 0;
	var uLocal_2423 = -1;
	var uLocal_2424 = 1092616192;
	var uLocal_2425 = 0;
	var uLocal_2426 = 0;
	var uLocal_2427 = 0;
	var uLocal_2428 = 0;
	var uLocal_2429 = 0;
	var uLocal_2430 = 0;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	int iLocal_2433 = 0;
	int iLocal_2434 = 0;
	bool bLocal_2435 = 0;
	bool bLocal_2436 = 0;
	var uLocal_2437 = 0;
	bool bLocal_2438 = 0;
	int iLocal_2439 = 0;
	struct<2863> Local_2440 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_5303 = 1;
	var uLocal_5304 = 0;
	var uLocal_5305 = 0;
	var uLocal_5306 = 0;
	var uLocal_5307 = 0;
	struct<3> Local_5308 = { 0, 0, 0 } ;
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
	Local_516 = { 500f, 500f, 500f };
	iLocal_519 = -1;
	iLocal_528 = 1;
	fLocal_536 = 0.008f;
	fLocal_537 = 0.013f;
	fLocal_582 = ((0.05f + 0.275f) - 0.01f);
	fLocal_585 = -0.05f;
	fLocal_586 = 0.92f;
	fLocal_587 = 1.94f;
	fLocal_588 = 2.99f;
	fLocal_589 = 3.7f;
	fLocal_2102 = -1f;
	iLocal_2103 = 1;
	fLocal_2276 = 0.2f;
	fLocal_2277 = 0.2f;
	fLocal_2290 = 0f;
	cLocal_2303 = "SPR_UI_FAILD";
	sLocal_2304 = "SPR_UI_FRETRY";
	sLocal_2332 = "CHECKPOINT_NORMAL";
	sLocal_2333 = "CHECKPOINT_MISSED";
	sLocal_2334 = "CHECKPOINT_PERFECT";
	Local_2335 = { 1694.74f, 3276.502f, 41.2796f };
	Local_2338 = { 8.79494f, 0.59893f, 154.8464f };
	bLocal_2435 = true;
	bLocal_2436 = true;
	bLocal_2438 = true;
	Local_5308 = { -1497.708f, -3449.576f, 7.3477f };
	if (unk_0x8D841F1DD3FA555F(114))
	{
		func_569();
	}
	unk_0xAE2A9FD3EEF99954(1);
	Local_2349.f_1 = 0;
	Local_2349.f_5 = 0;
	Local_2349.f_6 = 0;
	while (true)
	{
		func_568();
		switch (Local_2349.f_1)
		{
			case 0:
				if (!func_557())
				{
					Local_2349.f_1 = 1;
				}
				break;
			
			case 1:
				if (!func_1())
				{
					Local_2349.f_1 = 2;
				}
				break;
			
			case 2:
				func_569();
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
	
	if (unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
	}
	if (unk_0x86CCCD2FAE9D5E65(Local_50.f_1))
	{
		if (!unk_0x930F8FBB8E9537CC(Local_50.f_1))
		{
			if (!unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), Local_50.f_1, 0))
			{
				if (unk_0x463E18F5BBDEA9C4(unk_0x81873881071CD9FE()))
				{
					Local_50.f_1 = unk_0xC03D6CD4574382AB(unk_0x81873881071CD9FE());
				}
			}
		}
	}
	else if (unk_0x463E18F5BBDEA9C4(unk_0x81873881071CD9FE()))
	{
		Local_50.f_1 = unk_0xC03D6CD4574382AB(unk_0x81873881071CD9FE());
	}
	else
	{
		Local_50.f_1 = unk_0x19DFFDAF59F973CC(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 10f, joaat("stunt"), 0);
	}
	if (Local_2440.f_2861 != 0)
	{
		Local_2440.f_2862 = (Local_2440.f_2862 - 25);
		if (Local_2440.f_2862 <= 0)
		{
			unk_0x91951D41BCE7B10D(Local_2440.f_2861);
			Local_2440.f_2861 = 0;
			bLocal_2305 = false;
		}
		else
		{
			if (bLocal_2305)
			{
				iVar4 = 6;
			}
			else
			{
				iVar4 = 1;
			}
			func_554(func_555(iVar4), &uVar0, &uVar1, &uVar2, &uVar3);
			unk_0x29EAC729D9697D79(Local_2440.f_2861, uVar0, uVar1, uVar2, func_553(unk_0x11E019C8F43ACC8A((1.5f * IntToFloat(Local_2440.f_2862))), 255));
			unk_0x04C18ECD8113BB60(Local_2440.f_2861, uVar0, uVar1, uVar2, Local_2440.f_2862);
		}
	}
	func_552();
	unk_0x4A9AA1F0D4C786D7("AMMUNATION");
	unk_0xDE1125A413AF241C(0, 99, 1);
	unk_0xDE1125A413AF241C(0, 100, 1);
	if (Local_2349.f_6 == 4)
	{
		unk_0x5DFA9D9EFD236763(unk_0x1329891157A54C63());
		unk_0xCE5ED63F8CA77F8B(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 10f);
		if (unk_0x7404950238A154C2(Local_50.f_1, 0))
		{
			if (unk_0x2D2289DC6C760F31(Local_50.f_1))
			{
				unk_0x1E1EA15BAB00B829(Local_50.f_1);
			}
		}
	}
	switch (Local_2349.f_6)
	{
		case 0:
			unk_0x9E95048D8C96C1EA(0);
			Local_2349.f_0 = -1;
			Local_50.f_10 = 0;
			unk_0x3DD1ED742E99F292(1734.802f, 3224.105f, 41.3709f, 1762.067f, 3258.69f, 40.5188f, 0, 1);
			if (unk_0x86CCCD2FAE9D5E65(Local_50.f_1))
			{
				unk_0xC390A6485FB80923(Local_50.f_1, 1);
				Local_2440.f_2859 = 0;
				Local_2349.f_6 = 3;
			}
			else
			{
				Local_2349.f_6 = 1;
			}
			break;
		
		case 1:
			Local_2349.f_6 = 18;
			break;
		
		case 2:
			if (unk_0x86CCCD2FAE9D5E65(Local_50.f_1))
			{
				unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 0, 512);
				unk_0xC390A6485FB80923(Local_50.f_1, 1);
				Local_2440.f_2859 = 0;
				Local_2349.f_6 = 3;
			}
			break;
		
		case 3:
			if (Local_2440.f_0)
			{
			}
			else if ((unk_0x42E36F2D658EB2FF(uLocal_2074) && unk_0x6B6362BE9BFD1ACA(uLocal_2074)) && unk_0xECDEA377354CBDA4())
			{
				if (unk_0x42E36F2D658EB2FF(Local_2440.f_2858))
				{
					unk_0x35B958B469415A23(Local_2440.f_2858, 0);
				}
				unk_0x7D123BA6B5E0F9B9("MinigameTransitionOut");
				unk_0x45D2AAD93E9AC4B3("MinigameTransitionIn", 0, 1);
				Local_2440.f_2858 = unk_0x6112CFE839591737(26379945, Local_44, Local_47, 34.9705f, 1, 2);
				unk_0x792DEB9B8D2ED499(0);
				unk_0x0D7089406F6A5C6E(false);
				unk_0x45D2AAD93E9AC4B3("MinigameTransitionOut", 0, 0);
				unk_0xD68C8B031E2BDFA7(uLocal_2074, Local_44.f_0, Local_44.f_1, (Local_44.f_2 + 1000f));
				unk_0x19F9FD4DDAD99CB2(uLocal_2074, 90f, Local_47.f_1, Local_47.f_2, 2);
				unk_0x2CD388BEA8B3C5E8(Local_2440.f_2858, uLocal_2074, 500, 1, 1);
				unk_0x35D7948F61AA3FEC(-1, "QUIT_WHOOSH", "HUD_MINI_GAME_SOUNDSET", 1);
				unk_0xFEBF3DDE5E4DC5C5(1, 0, 3000, 1, 0, 0);
			}
			else
			{
				func_551(500);
				if (unk_0x42E36F2D658EB2FF(Local_2440.f_2858))
				{
					unk_0x35B958B469415A23(Local_2440.f_2858, 0);
				}
				Local_2440.f_2858 = unk_0x6112CFE839591737(26379945, Local_44, Local_47, 34.9705f, 1, 2);
				unk_0xFEBF3DDE5E4DC5C5(1, 0, 3000, 1, 0, 0);
			}
			func_550(&uLocal_2325);
			func_549(1);
			unk_0x3E52122FBF3FC64C();
			Local_2349.f_6 = 4;
			break;
		
		case 4:
			if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()) && !unk_0x930F8FBB8E9537CC(Local_50.f_1))
			{
				unk_0x686D6CDC14C4BA6C(Local_50.f_1, 1, 0);
			}
			if (unk_0x913B1C01C1BA6C6F())
			{
				unk_0xDE1125A413AF241C(2, 199, 1);
			}
			unk_0xDE1125A413AF241C(2, 200, 1);
			unk_0x3BF4F473786B0150(0);
			Local_2440.f_2 = Local_2440.f_0;
			if (Local_2440.f_0)
			{
				if (unk_0x86CCCD2FAE9D5E65(Local_2440.f_358[0 /*189*/].f_9))
				{
					unk_0xC390A6485FB80923(Local_2440.f_358[0 /*189*/].f_9, 4);
				}
				iLocal_2018 = 0;
				Local_2440.f_0 = 0;
				func_518();
				Local_2349.f_6 = 8;
			}
			else if (Local_2440.f_2859)
			{
				if (unk_0x98465343DD18A1F7())
				{
					if ((Local_2440.f_2859 && unk_0xB93E207B3C65F1B1(2, 202)) && unk_0x83666F9FB8FEBD4B() > 500)
					{
						unk_0x2BAB5306B0345175(-1, "CANCEL", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
						Local_2440.f_2859 = 0;
						Local_2440.f_2860 = 1;
						func_517(&(Local_50.f_119));
						unk_0xC1B1E9A034A63A62(0);
					}
					if (!Local_2440.f_2860 && func_516(&uLocal_1578))
					{
						Local_2440.f_2860 = 1;
						func_514(Local_2440.f_2860);
					}
					func_452(&(Local_50.f_118), Global_97961, &(Local_50.f_24[Global_97961 /*8*/]));
				}
				else if (func_442(&iLocal_2015, 0))
				{
					Local_2440.f_2859 = 0;
					iLocal_2015 = 0;
					func_517(&(Local_50.f_119));
					unk_0xC1B1E9A034A63A62(0);
				}
			}
			else
			{
				if ((func_409(&Local_2440, 0) && !iLocal_526) && !bLocal_525)
				{
					func_517(&(Local_50.f_119));
				}
				if (iLocal_529 && unk_0x98465343DD18A1F7())
				{
					func_517(&(Local_50.f_119));
					iLocal_529 = 0;
				}
				if ((((!Local_2440.f_2859 && !iLocal_526) && !bLocal_525) && (iLocal_528 || !unk_0x98465343DD18A1F7())) && (unk_0xB93E207B3C65F1B1(2, 211) || unk_0x938788609A5D0621(2, 211)))
				{
					Local_2440.f_2859 = 1;
					unk_0x2BAB5306B0345175(-1, "SELECT", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
					func_408(&uLocal_1578);
					Local_2440.f_2860 = func_516(&uLocal_1578);
					func_514(Local_2440.f_2860);
					unk_0xC1B1E9A034A63A62(0);
				}
				if (func_349(&uLocal_5303, &(Local_2440.f_1)))
				{
					iLocal_2018 = 0;
					if (Local_50.f_10 != -1)
					{
						func_341();
						func_518();
						if (unk_0x515B65C19A5CA9B1(Local_50.f_1, Local_2335, 5f, 5f, 5f, 0, 1, 0))
						{
							if (!unk_0x930F8FBB8E9537CC(Local_50.f_1))
							{
								func_340(&uLocal_5305);
								Local_2349.f_6 = 8;
							}
						}
						else if (!unk_0x930F8FBB8E9537CC(Local_50.f_1))
						{
							Local_2349.f_6 = 8;
						}
					}
					else
					{
						Local_2349.f_6 = 7;
					}
				}
			}
			break;
		
		case 7:
			unk_0xD61D5795530D0627();
			if (unk_0x7404950238A154C2(Local_50.f_1, 0))
			{
				unk_0xFEBF3DDE5E4DC5C5(0, 0, 3000, 1, 0, 0);
				Local_2349.f_6 = 18;
			}
			else
			{
				if (unk_0x86CCCD2FAE9D5E65(Local_2440.f_358[0 /*189*/].f_9))
				{
					unk_0xA8F22633ACC22189(Local_2440.f_358[0 /*189*/].f_9, 0);
				}
				unk_0xB067093BBAF0A747(unk_0x81873881071CD9FE(), Local_2335, 1, 0, 0, 1);
				unk_0x3A45EB0810EBE71C(unk_0x81873881071CD9FE(), Local_2338, 2, 1);
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
				{
					unk_0x5CC9D6711FE01F0D(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0));
				}
				unk_0x270066FDBAF3A458(0f);
				unk_0xEAB527164AD92BF3(0f, 1065353216);
				if (unk_0x86CCCD2FAE9D5E65(Local_2440.f_358[0 /*189*/].f_9))
				{
					if (!unk_0x2CB3B76C90F08111())
					{
						unk_0x7E2FE21B0F846986(Local_2335, unk_0xC99223BD7E489FC6(unk_0x81873881071CD9FE()), 500f, 0);
					}
					if (unk_0xA5C3CFD413D647EA())
					{
						unk_0x5AD73EF670D05F7D();
						Local_2349.f_6 = 18;
					}
				}
				else
				{
					Local_2349.f_6 = 18;
				}
			}
			break;
		
		case 8:
			unk_0x37B8363C1453E921();
			if (Local_50.f_10 == 0)
			{
				unk_0x05ACEF4F060B9B4E(Local_50.f_1);
				if (func_339(iLocal_2316, 16))
				{
					func_337(&iLocal_2316, 16);
				}
				unk_0x686D6CDC14C4BA6C(Local_50.f_1, 1, 1);
				unk_0xDC81A805934C85CD(unk_0x81873881071CD9FE(), Local_50.f_1, -1);
				unk_0x4F7552F76F378DB7(Local_50.f_1);
				func_336();
				uLocal_2074 = unk_0x6112CFE839591737(26379945, 1702.487f, 3279.545f, 41.9968f, -2.9399f, 0f, 110.4428f, 45.0218f, 1, 2);
				unk_0xDD0B0D77CB8995B1(Local_2440.f_2858, 0);
				Local_2349.f_6 = 9;
			}
			else if (func_335(1000))
			{
				unk_0xFEBF3DDE5E4DC5C5(0, 0, 3000, 1, 0, 0);
				unk_0x270066FDBAF3A458(0f);
				unk_0x4F7552F76F378DB7(Local_50.f_1);
				unk_0x05ACEF4F060B9B4E(Local_50.f_1);
				if (unk_0x29AFA2493D7C23D0())
				{
					func_336();
					Local_2349.f_6 = 10;
				}
			}
			break;
		
		case 9:
			if (!((unk_0x6B6362BE9BFD1ACA(uLocal_2074) && unk_0xEBA04D3308C6781F(uLocal_2074)) || (unk_0x6B6362BE9BFD1ACA(Local_2440.f_2858) && unk_0xEBA04D3308C6781F(Local_2440.f_2858))))
			{
				unk_0x4D7278EDFCDA8389(1, 0, 3, 0);
				func_336();
				Local_2349.f_6 = 10;
			}
			break;
		
		case 10:
			Local_2440.f_25 = 0;
			Local_2349.f_6 = 11;
			break;
		
		case 11:
			if (!func_321(&Local_2440))
			{
				func_549(1);
				if (Local_2440.f_2)
				{
					unk_0x7E2FE21B0F846986(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xC99223BD7E489FC6(unk_0x81873881071CD9FE()), 500f, 0);
				}
				if (Local_50.f_10 == 0)
				{
					func_320("SPR_TAXI_GATE", 10000, 1);
					if (!func_339(iLocal_2316, 16))
					{
						func_312(&Local_2440, 0, 1);
						func_311(&iLocal_2316, 16);
					}
					if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
					{
						unk_0xA8F22633ACC22189(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 0);
						unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
					}
					unk_0xF1BC58601CA4A5C7(1);
					unk_0x3BF4F473786B0150(1);
					Local_2349.f_6 = 13;
				}
				else
				{
					Local_2349.f_6 = 13;
				}
				Local_2440.f_2 = 0;
			}
			break;
		
		case 13:
			if (!unk_0x2CB3B76C90F08111() || unk_0xA5C3CFD413D647EA())
			{
				if (unk_0x2CB3B76C90F08111())
				{
					unk_0x5AD73EF670D05F7D();
				}
				unk_0x792DEB9B8D2ED499(0);
				unk_0x0D7089406F6A5C6E(true);
				unk_0xA8F22633ACC22189(Local_2440.f_358[0 /*189*/].f_9, 0);
				func_336();
				if (func_339(iLocal_2316, 16))
				{
					func_337(&iLocal_2316, 16);
				}
				if (Local_50.f_10 == 0)
				{
					if (func_551(500))
					{
						Local_2440.f_26 = 0;
						Local_2349.f_6 = 14;
					}
				}
				else
				{
					func_310(&Local_2440);
					unk_0x270066FDBAF3A458(0f);
					unk_0xEAB527164AD92BF3(0f, 1065353216);
					if (func_551(500))
					{
						Local_2440.f_26 = 0;
						Local_2349.f_6 = 14;
					}
				}
			}
			break;
		
		case 14:
			if (Local_2349.f_0 == 1)
			{
				return 1;
			}
			if (func_24(&Local_2440))
			{
				return 1;
			}
			iLocal_2018 = 3;
			func_23();
			func_13();
			if (!Local_2440.f_0)
			{
				func_10(&(Local_2440.f_6));
				func_9(&(Local_2440.f_358[0 /*189*/]), Local_50.f_3, Local_50.f_6, 0f);
				if (unk_0x86CCCD2FAE9D5E65(Local_2440.f_358[0 /*189*/].f_9))
				{
					unk_0x5CC9D6711FE01F0D(Local_2440.f_358[0 /*189*/].f_9);
				}
				if (unk_0x7E2FE21B0F846986(Local_44, func_8(Local_47), 4500f, 0))
				{
					unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 0, 0);
					while (!unk_0xA5C3CFD413D647EA() && func_5(&(Local_2440.f_6)) < 20f)
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					unk_0x5AD73EF670D05F7D();
					unk_0x367C758C1C7849EF(Local_44, func_8(Local_47));
					func_4(&(Local_2440.f_6));
					Local_2349.f_6 = 15;
				}
				else if (func_2(&(Local_2440.f_6), 20f))
				{
					func_4(&(Local_2440.f_6));
					Local_2349.f_6 = 15;
				}
			}
			else
			{
				Local_2349.f_6 = 3;
			}
			break;
		
		case 15:
			if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
			{
				unk_0xC390A6485FB80923(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 1);
			}
			Local_2440.f_2859 = 0;
			Local_2349.f_6 = 3;
			break;
		
		case 18:
			if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
			{
				unk_0xC390A6485FB80923(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 1);
			}
			func_409(&Local_2440, 1);
			if (unk_0x29AFA2493D7C23D0())
			{
				func_551(1000);
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
	return unk_0x236D8AD7EE179F46(*uParam0, 1);
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
			return (func_6(unk_0x236D8AD7EE179F46(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_6(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x48E480685981C7D4()) / 1000f);
	}
	if (unk_0x1C6DF6AD69BE853E())
	{
		iVar0 = unk_0xD74C7D8D2E5E43D2();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x48E480685981C7D4()) / 1000f);
}

bool func_7(var uParam0)
{
	return unk_0x236D8AD7EE179F46(*uParam0, 2);
}

Vector3 func_8(struct<3> Param0)
{
	return (-unk_0x0BADBFA3B172435F(Param0.f_2) * unk_0xD0FFB162F40A139C(Param0.f_0)), (unk_0xD0FFB162F40A139C(Param0.f_2) * unk_0xD0FFB162F40A139C(Param0.f_0)), unk_0x0BADBFA3B172435F(Param0.f_0);
}

void func_9(var uParam0, struct<3> Param1, var uParam4, float fParam5)
{
	unk_0xB067093BBAF0A747(uParam0->f_9, Param1, 1, 0, 0, 1);
	unk_0xC24172029826A66F(uParam0->f_9, uParam4);
	unk_0x3D24414865131CB8(uParam0->f_9, fParam5);
}

void func_10(var uParam0)
{
	if (!func_3(uParam0))
	{
		func_340(uParam0);
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
	uParam0->f_1 = (func_6(unk_0x236D8AD7EE179F46(*uParam0, 4)) - fParam1);
	unk_0xF3148AAF69AF9CBC(uParam0, 1);
	unk_0xC69E84EBBD7166E6(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_13()
{
	if (Global_98931.f_17657.f_12[4 /*8*/].f_4 == 1)
	{
		if (Global_98931.f_17657.f_6[4] > 0f)
		{
			if (Global_98931.f_17657.f_6[4] <= func_22(4))
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
	if (Global_98931.f_8808[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_98931.f_8808[iParam0 /*12*/].f_6 == 11 || Global_98931.f_8808[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_98931.f_8808[iParam0 /*12*/].f_5 = 1;
		Global_98931.f_8808[iParam0 /*12*/].f_10 = iParam1;
		Global_98931.f_8808[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x3D83BB667D56D187(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x3D83BB667D56D187(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x3D83BB667D56D187(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_98667 = 0;
	Global_98668 = 0;
	Global_98669 = 0;
	Global_98670 = 0;
	Global_98671 = 0;
	Global_98672 = 0;
	Global_98673 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_98931.f_8808.f_3853;
	Global_98931.f_8808.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_98931.f_8808[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_98931.f_8808[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_98667++;
					fVar1 = (fVar1 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_98668++;
					fVar2 = (fVar2 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_98669++;
					fVar3 = (fVar3 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_98670++;
					fVar4 = (fVar4 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_98671++;
					fVar5 = (fVar5 + (Global_98931.f_8808[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_98672++;
					fVar6 = (fVar6 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_98673++;
					fVar7 = (fVar7 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_98650 > 0)
	{
		if (Global_98667 == Global_98650)
		{
			fVar1 = 55f;
		}
	}
	if (Global_98651 > 0)
	{
		if (Global_98668 == Global_98651)
		{
			fVar2 = 10f;
		}
	}
	if (Global_98652 > 0)
	{
		if (Global_98669 == Global_98652)
		{
			fVar3 = 0f;
		}
	}
	if (Global_98653 > 0)
	{
		if (Global_98670 == Global_98653)
		{
			fVar4 = 10f;
		}
	}
	if (Global_98654 > 0)
	{
		if (((Global_98671 == Global_98654 || (Global_98654 * 10 / Global_98671) < 41) || Global_98671 > Global_98657) || Global_98671 == Global_98657)
		{
			if (!unk_0x236D8AD7EE179F46(Global_98931.f_8808.f_3856, 14))
			{
				if (Global_98671 == Global_98654)
				{
					unk_0x3D83BB667D56D187(joaat("num_rndevents_completed"), Global_98654, 0);
					unk_0xF3148AAF69AF9CBC(&(Global_98931.f_8808.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_98655 > 0)
	{
		if (Global_98672 == Global_98655)
		{
			fVar6 = 15f;
		}
	}
	if (Global_98656 > 0)
	{
		if (Global_98673 == Global_98656)
		{
			fVar7 = 5f;
		}
	}
	Global_98931.f_8808.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_98671 > Global_98657 || Global_98671 == Global_98657)
	{
		iVar9 = Global_98657;
	}
	else
	{
		iVar9 = Global_98671;
	}
	unk_0x123B783056E76C4E(joaat("num_missions_completed"), Global_98667, 1);
	unk_0x123B783056E76C4E(joaat("num_missions_available"), Global_98650, 1);
	unk_0x123B783056E76C4E(joaat("num_minigames_completed"), Global_98668, 1);
	unk_0x123B783056E76C4E(joaat("num_minigames_available"), Global_98651, 1);
	unk_0x123B783056E76C4E(joaat("num_oddjobs_completed"), Global_98669, 1);
	unk_0x123B783056E76C4E(joaat("num_oddjobs_available"), Global_98652, 1);
	unk_0x123B783056E76C4E(joaat("num_rndpeople_completed"), Global_98670, 1);
	unk_0x123B783056E76C4E(joaat("num_rndpeople_available"), Global_98653, 1);
	unk_0x123B783056E76C4E(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x123B783056E76C4E(joaat("num_rndevents_available"), Global_98657, 1);
	unk_0x123B783056E76C4E(joaat("num_misc_completed"), (Global_98673 + Global_98672), 1);
	unk_0x123B783056E76C4E(joaat("num_misc_available"), (Global_98656 + Global_98655), 1);
	Global_98674 = (Global_98667 * 100 / Global_98650);
	Global_98676 = ((Global_98669 + Global_98668) * 100 / (Global_98652 + Global_98651));
	Global_98675 = ((Global_98670 + iVar9) * 100 / (Global_98653 + Global_98657));
	Global_98677 = ((Global_98672 + Global_98673) * 100 / (Global_98655 + Global_98656));
	unk_0x7E6C0B47A4041A3A(joaat("total_progress_made"), Global_98931.f_8808.f_3853, 1);
	unk_0x123B783056E76C4E(joaat("percent_story_missions"), Global_98674, 1);
	unk_0x123B783056E76C4E(joaat("percent_ambient_missions"), Global_98675, 1);
	unk_0x123B783056E76C4E(joaat("percent_oddjobs"), Global_98676, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_98931.f_8808.f_3853))
	{
		func_19(13, unk_0xF34EE736CF047844(Global_98931.f_8808.f_3853));
	}
	if (!unk_0x14AA58B411AA05B2())
	{
		if (!Global_69020)
		{
			if (func_18() == 2 == 0 && !unk_0x1C6DF6AD69BE853E())
			{
				if (unk_0x847832409C9B7582())
				{
					Global_98665 = 0;
				}
				if (!Global_55402)
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
	if (Global_90848.f_8)
	{
		if (Global_90848.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90848.f_10 > 1)
	{
		return 0;
	}
	Global_90848.f_10++;
	return 1;
}

bool func_17(bool bParam0)
{
	if (!bParam0 && unk_0x968BF1C2C695B61A(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x236D8AD7EE179F46(Global_69268, 0);
}

int func_18()
{
	return Global_24946;
}

int func_19(int iParam0, int iParam1)
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
	iVar0 = unk_0x0AF2546798051B0F(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x5CF8B8E5AE9ED569(iParam0, iParam1);
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
	var uVar10;
	
	if (iParam2 == -1)
	{
		iParam2 = func_21();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xE307AE970E97417F((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xE527C242A8C1FBA9((iParam0 - 0)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xE307AE970E97417F((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xE527C242A8C1FBA9((iParam0 - 192)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xE307AE970E97417F((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xE527C242A8C1FBA9((iParam0 - 513)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xE307AE970E97417F((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xE527C242A8C1FBA9((iParam0 - 705)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x842AB1A4A6E7A6FD((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xE527C242A8C1FBA9((iParam0 - 3111)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x842AB1A4A6E7A6FD((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xE527C242A8C1FBA9((iParam0 - 2919)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x212AB7197F0FF1D7((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xE527C242A8C1FBA9((iParam0 - 4207)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x212AB7197F0FF1D7((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xE527C242A8C1FBA9((iParam0 - 4335)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6989)
	{
		uVar10 = unk_0x212AB7197F0FF1D7((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xE527C242A8C1FBA9((iParam0 - 6029)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar10, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_21()
{
	return Global_1312729;
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
	iLocal_2341 = 0;
	iLocal_2342 = 0;
	iLocal_2343 = 0;
	iLocal_2344 = 0;
	iLocal_2345 = 0;
	iLocal_2346 = 0;
	iLocal_2347 = 0;
	iLocal_2348 = 0;
}

int func_24(var uParam0)
{
	switch (uParam0->f_26)
	{
		case 0:
			func_337(&iLocal_2316, 4);
			unk_0xC9A352663D97EFC3(2);
			func_309(uParam0);
			uParam0->f_17 = func_308();
			if (Local_50.f_10 == 0)
			{
				if (!func_339(iLocal_2316, 16))
				{
					func_312(uParam0, 0, 1);
					func_312(uParam0, 1, 0);
					func_311(&iLocal_2316, 16);
				}
			}
			else
			{
				func_310(uParam0);
				if (!func_339(iLocal_2316, 16))
				{
					func_312(uParam0, 0, 1);
					func_312(uParam0, 1, 0);
					func_311(&iLocal_2316, 16);
				}
			}
			func_4(&(uParam0->f_14));
			iLocal_2330 = 0;
			unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 0, 0);
			uParam0->f_26 = 1;
			break;
		
		case 1:
			unk_0xC9A352663D97EFC3(2);
			if (Local_50.f_10 == 0)
			{
				if (func_339(iLocal_2316, 16))
				{
					func_337(&iLocal_2316, 16);
				}
				func_306(uParam0);
				uParam0->f_26 = 7;
			}
			else
			{
				func_310(uParam0);
				if (!func_282(&(uParam0->f_14)))
				{
					if (!unk_0x69EDFF600FFB4353())
					{
						unk_0xFEBF3DDE5E4DC5C5(0, 1, 3000, 1, 0, 0);
					}
					if (func_339(iLocal_2316, 16))
					{
						func_337(&iLocal_2316, 16);
					}
					unk_0xF1BC58601CA4A5C7(1);
					func_306(uParam0);
					if (Local_50.f_10 == 0 && (Global_98931.f_17657.f_6[0] > Local_50.f_112[0] || Global_98931.f_17657.f_6[0] == 0f))
					{
						func_281("SPR_HELP_GATE", 10000);
					}
					uParam0->f_26 = 7;
				}
			}
			break;
		
		case 2:
			if (!func_339(iLocal_2316, 1))
			{
				unk_0xC1B1E9A034A63A62(0);
				func_242(uParam0);
				func_241(&(Local_50.f_119), 0, 0, 1, 1);
				func_240(&(Local_50.f_119), "SPR_CONT2", 2, 201, 1, 1, 0);
				func_239(&(Local_50.f_119), 1);
				func_311(&iLocal_2316, 1);
			}
			if (unk_0xA83A609D74168B30())
			{
				unk_0xB8BB626315D394F5(1);
			}
			if (func_238("SPR_RETR_FAIL", 0, 0))
			{
				unk_0xD1C83BD797927DD5();
			}
			if (unk_0xA83A609D74168B30())
			{
				unk_0xB8BB626315D394F5(1);
			}
			if (func_238("SPR_RETR_FAIL", 0, 0))
			{
				unk_0xD1C83BD797927DD5();
			}
			unk_0xC1B1E9A034A63A62(0);
			func_236();
			func_235(0);
			unk_0xA4DB0275D854F239(unk_0x1329891157A54C63());
			unk_0xC8DF9866C0CB38D7(unk_0x1329891157A54C63(), 0);
			unk_0xDE1125A413AF241C(0, 75, 1);
			func_234(1);
			uParam0->f_26 = 4;
			break;
		
		case 4:
			unk_0xDE1125A413AF241C(0, 75, 1);
			func_232();
			if (!unk_0x930F8FBB8E9537CC(uParam0->f_358[0 /*189*/].f_9))
			{
				if (!unk_0x331E7ACCFD0869AD(uParam0->f_358[0 /*189*/].f_9) && unk_0x42E36F2D658EB2FF(uLocal_2075))
				{
					unk_0xD2A638CF3BBA7D92(uLocal_2075, 2);
					unk_0xABA9860C0161F3CD(uParam0->f_358[0 /*189*/].f_9, 0);
					unk_0xA8F22633ACC22189(uParam0->f_358[0 /*189*/].f_9, 1);
					func_231();
				}
			}
			if (!func_217(uParam0, bLocal_2435, bLocal_2436))
			{
				func_231();
				func_216(0);
				unk_0xB8BB626315D394F5(1);
				if (func_339(iLocal_2316, 1))
				{
					func_337(&iLocal_2316, 1);
				}
				func_215(0, 0);
				if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
				{
					unk_0x27CC98B7C879C320(unk_0x81873881071CD9FE());
				}
				unk_0xEAB527164AD92BF3(0f, 1065353216);
				unk_0x270066FDBAF3A458(0f);
				unk_0x9E95048D8C96C1EA(0);
				iLocal_2439 = unk_0xEDDCCC3D357A50F8();
				unk_0x35D7948F61AA3FEC(iLocal_2439, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", 1);
				func_4(&uLocal_2306);
				uParam0->f_26 = 5;
			}
			break;
		
		case 5:
			if (!unk_0x930F8FBB8E9537CC(uParam0->f_358[0 /*189*/].f_9))
			{
				unk_0xB067093BBAF0A747(uParam0->f_358[0 /*189*/].f_9, Local_2335, 1, 0, 0, 1);
				unk_0x3A45EB0810EBE71C(uParam0->f_358[0 /*189*/].f_9, Local_2338, 2, 1);
				unk_0xABA9860C0161F3CD(uParam0->f_358[0 /*189*/].f_9, 1);
				unk_0xDE1125A413AF241C(0, 75, 1);
				unk_0x5CC9D6711FE01F0D(uParam0->f_358[0 /*189*/].f_9);
				unk_0x210A4A0B257F8433(uParam0->f_358[0 /*189*/].f_9, 0);
			}
			iLocal_2434 = 0;
			uParam0->f_26 = 6;
			uParam0->f_358[0 /*189*/].f_23 = 7;
			break;
		
		case 6:
			uParam0->f_26 = 8;
			break;
		
		case 7:
			unk_0xD45896EF84BD41C8(uLocal_2325, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 100, 0);
			if (!func_339(iLocal_2316, 16))
			{
				func_312(uParam0, 0, 1);
				func_312(uParam0, 1, 0);
				func_311(&iLocal_2316, 16);
				func_235(1);
				func_214(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/]);
			}
			if (uParam0->f_1)
			{
				func_187(uParam0);
				func_185(uParam0);
			}
			else
			{
				func_182(&uLocal_2291, 0);
				func_231();
				unk_0x0D7089406F6A5C6E(false);
			}
			if (!func_41(uParam0, Local_50.f_0))
			{
				unk_0x80650551CC58C784("MGSP_END");
				func_28(uParam0);
				func_4(&(uParam0->f_14));
				uParam0->f_26 = 2;
				func_4(&(uParam0->f_22));
			}
			break;
		
		case 8:
			unk_0xDE1125A413AF241C(0, 75, 1);
			func_27(&(uParam0->f_17));
			func_231();
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
		if (func_339(uLocal_2099, iVar0))
		{
			func_337(&uLocal_2099, iVar0);
		}
		if (func_339(uLocal_2100, iVar0))
		{
			func_337(&uLocal_2100, iVar0);
		}
		if (unk_0x86CCCD2FAE9D5E65(uLocal_2087[iVar0]))
		{
			unk_0x5D00E836B6BE8693(&(uLocal_2087[iVar0]));
		}
		if (unk_0x86CCCD2FAE9D5E65(uLocal_2093[iVar0]))
		{
			unk_0xF210D34D7F7152ED(&(uLocal_2093[iVar0]));
		}
		iVar0++;
	}
	func_26(&iLocal_2081);
	iVar0 = 0;
	while (iVar0 < iLocal_2081)
	{
		iLocal_2081[iVar0] = 0;
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
			unk_0x887F4488DA99FD21((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_27(var uParam0)
{
	if (unk_0xCC8E3BAC62A29F42(*uParam0))
	{
		unk_0x4B6F01DE8CCE643E(uParam0);
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
	unk_0x210A4A0B257F8433(uParam0->f_358[0 /*189*/].f_9, 1);
	unk_0xDE1125A413AF241C(0, 75, 1);
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
	if (!unk_0x930F8FBB8E9537CC(uParam0->f_9))
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
		if (!unk_0x930F8FBB8E9537CC(uParam0->f_358[iVar0 /*189*/].f_8))
		{
			if (uParam0->f_358[iVar0 /*189*/].f_8 == unk_0x81873881071CD9FE())
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
	Global_98931.f_17657.f_6[iParam0] = fParam1;
}

void func_34(int iParam0, float fParam1)
{
	Local_50.f_18[iParam0] = fParam1;
}

var func_35(int iParam0)
{
	var uVar0;
	
	uVar0 = Global_98931.f_17657.f_6[iParam0];
	return uVar0;
}

void func_36(int iParam0, var uParam1)
{
	Global_98931.f_17657[iParam0] = uParam1;
}

int func_37(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = Global_98931.f_17657[iParam0];
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
			uParam0->f_358[iVar0 /*189*/].f_13 = (uParam0->f_358[0 /*189*/].f_13 + (IntToFloat((uParam0->f_12 - uParam0->f_358[iVar0 /*189*/].f_11)) * unk_0x3ECD26BA4F631EE2(0.5f, 2.5f)));
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
			uParam0->f_2 = (func_6(unk_0x236D8AD7EE179F46(*uParam0, 4)) - uParam0->f_1);
			unk_0xF3148AAF69AF9CBC(uParam0, 2);
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
			if (func_339(iLocal_2317, 131072))
			{
				unk_0x87319DDAA56E301A(uParam0->f_358[0 /*189*/].f_9, 4);
				func_337(&iLocal_2317, 131072);
			}
		}
		else if (uParam0->f_358[0 /*189*/].f_11 == 1 && !func_339(iLocal_2317, 131072))
		{
			func_281("SPR_INFO_BON", 10000);
			func_311(&iLocal_2317, 131072);
			if (func_339(iLocal_2317, 262144))
			{
				func_337(&iLocal_2317, 262144);
			}
		}
		else if (uParam0->f_358[0 /*189*/].f_11 == 4 && !func_339(iLocal_2317, 262144))
		{
			func_281("SPR_INFO_RESET", 10000);
			func_311(&iLocal_2317, 262144);
		}
	}
	if (func_3(&(uParam0->f_3)))
	{
		fVar0 = func_5(&(uParam0->f_3));
	}
	func_164(uParam0->f_358[0 /*189*/].f_11, uParam0->f_1);
	unk_0xDE1125A413AF241C(0, 75, 1);
	iVar1 = 0;
	while (iVar1 < uParam0->f_13)
	{
		if (uParam0->f_358[iVar1 /*189*/].f_11 < uParam0->f_12)
		{
			bVar23 = false;
			if (uParam0->f_358[iVar1 /*189*/].f_8 == unk_0x81873881071CD9FE())
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
					if (!func_3(&uLocal_2427))
					{
						func_340(&uLocal_2427);
					}
					if (func_5(&uLocal_2430) >= 6.5f)
					{
						if (!unk_0xCAD9951C953F5B2D(2, 222))
						{
							func_11(&uLocal_2427);
						}
						else if (func_5(&uLocal_2427) >= 1.5f)
						{
							uParam0->f_1 = 0;
							func_337(&iLocal_2317, 32768);
							uParam0->f_358[0 /*189*/].f_23 = 6;
						}
					}
					else if (unk_0xCAD9951C953F5B2D(2, 222))
					{
						if (func_5(&(uParam0->f_3)) < 6.5f)
						{
							func_103("SPR_HELP_RST1", &iLocal_2317, 65536, 0);
						}
						else
						{
							func_103("SPR_HELP_RST", &iLocal_2317, 32768, 0);
						}
					}
				}
				if (!unk_0x5FEB513A4402FD59(uParam0->f_358[iVar1 /*189*/].f_8))
				{
					func_101(uParam0, iVar1);
					if (Local_50.f_0 == 0 && func_3(&uLocal_2312))
					{
						return 1;
					}
					if (bVar23)
					{
						if (uParam0->f_358[iVar1 /*189*/].f_14 != 0f)
						{
							func_340(&(uParam0->f_14));
						}
						if (func_339(iLocal_2316, 8))
						{
							func_312(uParam0, iVar22, 1);
							if (iVar22 < (uParam0->f_12 - 1))
							{
								func_312(uParam0, iVar22 + 1, 0);
							}
							func_337(&iLocal_2316, 8);
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
						bLocal_2305 = func_84(uParam0->f_11);
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
									unk_0xD1C83BD797927DD5();
									sLocal_2304 = "SPR_TIME_FAIL";
									uParam0->f_358[0 /*189*/].f_23 = 0;
								}
							}
							else
							{
								func_312(uParam0, iVar22, 1);
								if (iVar22 < (uParam0->f_12 - 1))
								{
									func_312(uParam0, iVar22 + 1, 0);
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
								if (!unk_0x930F8FBB8E9537CC(uParam0->f_358[iVar1 /*189*/].f_8))
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
									if (bLocal_2438)
									{
										if (!unk_0x930F8FBB8E9537CC(uParam0->f_358[iVar1 /*189*/].f_8) && !unk_0x930F8FBB8E9537CC(uParam0->f_358[iVar1 /*189*/].f_9))
										{
											if (unk_0xFA1212DE7C455679(uParam0->f_358[iVar1 /*189*/].f_8, -235832601) == 1)
											{
											}
											else
											{
												unk_0x5E88D7F9F4A81079(uParam0->f_358[iVar1 /*189*/].f_8, uParam0->f_358[iVar1 /*189*/].f_9, &cVar25, 262144, 0, 8, -1, unk_0x5855978686FD0737(uParam0->f_358[iVar1 /*189*/].f_9), 0, 1073741824);
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
		func_65(uParam0, &uLocal_2437);
		func_64(uParam0, &uLocal_2437);
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
	
	if (unk_0x2DD54246D4BB0A20())
	{
		unk_0x3BF4F473786B0150(1);
	}
	if (!func_3(&uLocal_2106))
	{
		iLocal_2104 = 0;
		iLocal_2105 = 0;
		func_340(&uLocal_2106);
	}
	if (unk_0x11E019C8F43ACC8A((uParam0->f_358[0 /*189*/].f_15 * 1000f)) != iLocal_2105)
	{
		iLocal_2104 = (unk_0x11E019C8F43ACC8A((uParam0->f_358[0 /*189*/].f_15 * 1000f)) - iLocal_2105);
		iLocal_2105 = unk_0x11E019C8F43ACC8A((uParam0->f_358[0 /*189*/].f_15 * 1000f));
		func_11(&uLocal_2106);
	}
	iVar0 = (unk_0xF34EE736CF047844((func_5(&(uParam0->f_3)) * 100f)) * 10 - unk_0x11E019C8F43ACC8A((uParam0->f_358[0 /*189*/].f_15 * 1000f)));
	iVar1 = 0;
	if (func_5(&uLocal_2106) <= 2f)
	{
		if (uParam0->f_358[0 /*189*/].f_11 > 0)
		{
			iVar1 = -iLocal_2104;
		}
		else
		{
			iVar1 = 0;
		}
	}
	iVar2 = unk_0xF34EE736CF047844((Global_98931.f_17657.f_6[Local_50.f_10] * 100f)) * 10;
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
		func_51(0, "", iParam27, uParam30, 9, 0, sParam28, 1, fParam29, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	if (iParam14 > -1)
	{
		sVar0 = sParam16;
		if (func_50(sVar0))
		{
			sVar0 = "TIM_DAMAGE";
		}
		func_49(iParam14, iParam15, sVar0, iParam17, iParam27, 8, -1f, -1f, 0, 1, 0, 0, 0, 0, 0, 0);
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
		func_47(iParam5, iParam6, sVar2, iParam9, iParam27, 6, 0, 0, 0, 1);
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
	while (iVar1 <= 9)
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
		Global_1336084.f_1 = 1;
		func_45(7, iVar0);
		Global_1336084.f_3911[iVar0] = iParam0;
		StringCopy(&(Global_1336084.f_3911.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1336084.f_3911.f_172[iVar0] = iParam2;
		Global_1336084.f_3911.f_216[iVar0] = iParam3;
		Global_1336084.f_3911.f_183[iVar0] = uParam4;
		Global_1336084.f_3911.f_194[iVar0] = iParam5;
		Global_1336084.f_3911.f_249[iVar0] = iParam6;
		Global_1336084.f_3911.f_260[iVar0] = iParam7;
		Global_1336084.f_3911.f_205[iVar0] = iParam8;
		Global_1336084.f_3911.f_314[iVar0] = iParam9;
		Global_1336084.f_3911.f_325[iVar0] = iParam10;
		Global_1336084.f_3911.f_357[iVar0] = iParam11;
		Global_1336084.f_3911.f_238[iVar0] = iParam12;
		Global_1336084.f_3911.f_271[iVar0] = iParam13;
	}
}

void func_45(int iParam0, int iParam1)
{
	unk_0xF3148AAF69AF9CBC(&(Global_1336084.f_4506[iParam0]), iParam1);
}

bool func_46(int iParam0, int iParam1)
{
	return unk_0x236D8AD7EE179F46(Global_1336084.f_4506[iParam0], iParam1);
}

void func_47(int iParam0, var uParam1, char* sParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
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
		Global_1336084.f_1 = 1;
		func_45(5, iVar0);
		Global_1336084.f_3067[iVar0] = iParam0;
		Global_1336084.f_3067.f_172[iVar0] = uParam1;
		StringCopy(&(Global_1336084.f_3067.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1336084.f_3067.f_194[iVar0] = uParam3;
		Global_1336084.f_3067.f_183[iVar0] = uParam4;
		Global_1336084.f_3067.f_216[iVar0] = iParam5;
		Global_1336084.f_3067.f_227[iVar0] = iParam6;
		Global_1336084.f_3067.f_270[iVar0] = iParam7;
		Global_1336084.f_3067.f_281[iVar0] = iParam8;
		Global_1336084.f_3067.f_292[iVar0] = iParam9;
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
	while (iVar1 <= 9)
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
		Global_1336084.f_1 = 1;
		func_45(3, iVar0);
		Global_1336084.f_2278[iVar0] = iParam0;
		StringCopy(&(Global_1336084.f_2278.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1336084.f_2278.f_183[iVar0] = uParam3;
		Global_1336084.f_2278.f_172[iVar0] = uParam2;
		Global_1336084.f_2278.f_205[iVar0] = iParam4;
		Global_1336084.f_2278.f_216[iVar0] = iParam5;
		StringCopy(&(Global_1336084.f_2278.f_259[iVar0 /*16*/]), sParam6, 64);
		Global_1336084.f_2278.f_420[iVar0] = iParam7;
		Global_1336084.f_2278.f_453[iVar0] = iParam8;
		Global_1336084.f_2278.f_431[iVar0] = iParam9;
		Global_1336084.f_2278.f_442[iVar0] = iParam10;
	}
}

void func_49(int iParam0, var uParam1, char* sParam2, var uParam3, var uParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
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
		Global_1336084.f_1 = 1;
		func_45(0, iVar0);
		Global_1336084.f_946[iVar0] = iParam0;
		Global_1336084.f_946.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1336084.f_946.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1336084.f_946.f_194[iVar0] = uParam3;
		Global_1336084.f_946.f_183[iVar0] = uParam4;
		Global_1336084.f_946.f_216[iVar0] = iParam5;
		Global_1336084.f_946.f_227[iVar0 /*3*/] = fParam6;
		Global_1336084.f_946.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1336084.f_946.f_258[iVar0] = iParam8;
		Global_1336084.f_946.f_269[iVar0] = iParam9;
		Global_1336084.f_946.f_312[iVar0] = iParam10;
		Global_1336084.f_946.f_323[iVar0] = iParam11;
		Global_1336084.f_946.f_334[iVar0] = iParam12;
		Global_1336084.f_946.f_345[iVar0] = iParam13;
		Global_1336084.f_941 = 1;
		Global_1336084.f_946.f_356[iVar0] = iParam14;
		Global_1336084.f_946.f_367[iVar0] = iParam15;
	}
}

int func_50(char[4] cParam0)
{
	if (unk_0x4357449749A521B1(cParam0))
	{
		return 1;
	}
	else if (unk_0xD994929E13CC1ED5(cParam0, "") || unk_0xD994929E13CC1ED5(cParam0, "0"))
	{
		return 1;
	}
	return 0;
}

void func_51(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
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
			if (func_46(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1336084.f_1 = 1;
		func_45(6, iVar0);
		Global_1336084.f_3370[iVar0] = iParam0;
		StringCopy(&(Global_1336084.f_3370.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1336084.f_3370.f_183[iVar0] = uParam3;
		Global_1336084.f_3370.f_172[iVar0] = uParam2;
		Global_1336084.f_3370.f_260[iVar0] = iParam4;
		Global_1336084.f_3370.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1336084.f_3370.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1336084.f_3370.f_443[iVar0] = iParam7;
		Global_1336084.f_3370.f_454[iVar0] = fParam8;
		Global_1336084.f_3370.f_497[iVar0] = iParam9;
		Global_1336084.f_3370.f_508[iVar0] = iParam10;
		Global_1336084.f_3370.f_205[iVar0] = iParam11;
		Global_1336084.f_3370.f_216[iVar0] = iParam12;
		Global_1336084.f_3370.f_227[iVar0] = iParam13;
		Global_1336084.f_3370.f_238[iVar0] = iParam14;
		Global_1336084.f_3370.f_249[iVar0] = iParam15;
		Global_1336084.f_3370.f_519[iVar0] = iParam16;
		Global_1336084.f_3370.f_530[iVar0] = iParam17;
		if (iParam15 == 4 && func_53())
		{
			Global_1336084.f_941 = 1;
		}
		if (unk_0x913B1C01C1BA6C6F())
		{
			iVar2 = 0;
			unk_0x510185F6AA2AE89F(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1336084.f_945 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1336084.f_944 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1336084.f_941 = 1;
			}
			if (func_52())
			{
				Global_1336084.f_945 = 1;
			}
		}
	}
}

int func_52()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x913B1C01C1BA6C6F())
	{
		unk_0x510185F6AA2AE89F(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_53()
{
	if ((unk_0x45EDE682E0EE8FDF() == 8 || unk_0x45EDE682E0EE8FDF() == 9) || unk_0x45EDE682E0EE8FDF() == 10)
	{
		return 1;
	}
	return 0;
}

int func_54()
{
	return iLocal_2103;
}

void func_55()
{
	Global_1336084.f_941 = 1;
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
		unk_0x10E4F2F3A37EF7EC(0, 0, -1);
		unk_0x10E4F2F3A37EF7EC(1, 0, -1);
		unk_0x10E4F2F3A37EF7EC(2, 0, -1);
		unk_0x10E4F2F3A37EF7EC(3, 0, -1);
	}
}

void func_58(var uParam0)
{
	if (func_5(&(uParam0->f_3)) > 15f)
	{
		if (unk_0xA04824262F150982(uParam0->f_358[0 /*189*/].f_9) < 5f)
		{
			if (!func_3(&uLocal_2309))
			{
				func_10(&uLocal_2309);
			}
			else if (func_5(&uLocal_2309) > 60f)
			{
				func_59("SPR_MOVE_FAIL", 5000, 0, &iLocal_2317, 8192);
				if (uParam0->f_358[0 /*189*/].f_11 <= (uParam0->f_12 - 1))
				{
					if (unk_0xFBACB273AA628CC5(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5))
					{
						unk_0x885CCA7D7CA0FAE3(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5, 0);
					}
				}
				if (uParam0->f_358[0 /*189*/].f_11 + 1 <= (uParam0->f_12 - 2))
				{
					if (unk_0xFBACB273AA628CC5(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5))
					{
						unk_0x885CCA7D7CA0FAE3(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5, 0);
					}
				}
				func_11(&uLocal_2309);
				func_11(&uLocal_2306);
				uParam0->f_1 = 0;
				unk_0xD1C83BD797927DD5();
				sLocal_2304 = "SPR_RETR_IDLE";
				uParam0->f_358[0 /*189*/].f_23 = 0;
			}
			else if (func_5(&uLocal_2309) > 30f)
			{
				if (!func_339(iLocal_2316, 32))
				{
					func_103("SPR_IDLE_WARN", &iLocal_2316, 32, 0);
				}
			}
		}
		else if (func_3(&uLocal_2309))
		{
			func_337(&iLocal_2316, 32);
			func_11(&uLocal_2309);
		}
	}
	else if (func_3(&uLocal_2309))
	{
		func_337(&iLocal_2316, 32);
		func_11(&uLocal_2309);
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
	unk_0x645DF34C4E038370(sParam0);
	unk_0x16885CADDEC73B2E(iParam1, 1);
}

bool func_62(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0;
}

void func_63()
{
	if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0)
	{
		unk_0x49F00D2F32CBC5B5(unk_0x1329891157A54C63());
	}
}

void func_64(var uParam0, var uParam1)
{
	if (uParam0->f_1)
	{
		if ((!unk_0x7404950238A154C2(uParam0->f_358[0 /*189*/].f_9, 0) || unk_0x4DC6EF945236C0F7(uParam0->f_358[0 /*189*/].f_9) < 5) || unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
		{
			func_11(&uLocal_2306);
			if (unk_0xFBACB273AA628CC5(*uParam1))
			{
				unk_0x0A8175F24237A3D4(uParam1);
			}
			if (uParam0->f_358[0 /*189*/].f_11 <= (uParam0->f_12 - 1))
			{
				if (unk_0xFBACB273AA628CC5(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5))
				{
					unk_0x885CCA7D7CA0FAE3(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5, 0);
				}
			}
			if (uParam0->f_358[0 /*189*/].f_11 + 1 <= (uParam0->f_12 - 2))
			{
				if (unk_0xFBACB273AA628CC5(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5))
				{
					unk_0x885CCA7D7CA0FAE3(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5, 0);
				}
			}
			uParam0->f_1 = 0;
			unk_0xD1C83BD797927DD5();
			sLocal_2304 = "SPR_RETR_DES";
			uParam0->f_358[0 /*189*/].f_23 = 0;
		}
		return;
	}
}

void func_65(var uParam0, var uParam1)
{
	if (Local_50.f_0 == 0)
	{
		if (!unk_0x930F8FBB8E9537CC(uParam0->f_358[0 /*189*/].f_9))
		{
			if (!unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
			{
				unk_0xD1C83BD797927DD5();
				unk_0x9E95048D8C96C1EA(0);
				unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 0, 0);
				if (unk_0xFBACB273AA628CC5(*uParam1))
				{
					unk_0x0A8175F24237A3D4(uParam1);
					if (uParam0->f_358[0 /*189*/].f_11 <= (uParam0->f_12 - 1))
					{
						if (unk_0xFBACB273AA628CC5(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5))
						{
							unk_0x885CCA7D7CA0FAE3(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5, 0);
						}
					}
					if (uParam0->f_358[0 /*189*/].f_11 + 1 <= (uParam0->f_12 - 2))
					{
						if (unk_0xFBACB273AA628CC5(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5))
						{
							unk_0x885CCA7D7CA0FAE3(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5, 0);
						}
					}
				}
				uParam0->f_1 = 0;
				unk_0xD1C83BD797927DD5();
				sLocal_2304 = "SPR_RETR_DES";
				func_66(&(Local_50.f_321), 1);
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
	unk_0x9D2B95F4020E5347("OFFMISSION_WASTED", 0);
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
	
	iVar0 = unk_0x4DC6EF945236C0F7(uParam0->f_358[0 /*189*/].f_9);
	if (!unk_0x930F8FBB8E9537CC(uParam0->f_358[0 /*189*/].f_9))
	{
		iVar1 = unk_0xF2DB717A73826179(unk_0xFF463728B23A0037(uParam0->f_358[0 /*189*/].f_9));
	}
	if (IntToFloat(iVar0) < 500f)
	{
		if (Local_50.f_0 == 2)
		{
			if (!unk_0x930F8FBB8E9537CC(uParam0->f_358[0 /*189*/].f_9) && !unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
			{
				if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), uParam0->f_358[0 /*189*/].f_9, 0))
				{
					bLocal_2315 = true;
				}
			}
			if (bLocal_2315)
			{
				if (uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_7 == 6 || uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_7 == 10)
				{
					if (!unk_0xDBD19E93A4D01117())
					{
						func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_2317, 2);
					}
				}
			}
		}
		else
		{
			if (unk_0xDBD19E93A4D01117())
			{
				unk_0xD1C83BD797927DD5();
			}
			func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_2317, 2);
		}
	}
	if (Local_50.f_0 == 1)
	{
		if (IntToFloat(iVar1) < 200f)
		{
			if (unk_0xDBD19E93A4D01117())
			{
				unk_0xD1C83BD797927DD5();
			}
			if (func_71())
			{
				func_69();
			}
			func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_2317, 2);
		}
	}
}

void func_69()
{
	Global_14559 = 0;
	func_70();
}

void func_70()
{
	unk_0xE1BF98267C70D822();
	Global_16704 = 0;
	if ((unk_0xE0A43912E369FFA5() || Global_14394.f_1 == 9) || Global_14393 == 1)
	{
		unk_0x9E95048D8C96C1EA(0);
		Global_15693 = 6;
		Global_14394.f_1 = 3;
		return;
	}
	if (unk_0xE1772957381F609F())
	{
		unk_0x9E95048D8C96C1EA(1);
		Global_15693 = 6;
		return;
	}
}

int func_71()
{
	if (Global_15693 != 0 || unk_0xE1772957381F609F())
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
	fVar6 = unk_0x0D6E79537424BACE(Var0, Var3, 1);
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
	Var8 = { unk_0xB6AE0DAE06D56288(uParam0->f_358[0 /*189*/].f_8, 1) };
	if (func_73(Var3, 0f, 0f, 0f, 1056964608, 0))
	{
		Var11 = { Var0 };
	}
	else
	{
		Var11 = { unk_0xDB7B3806E93C347B(Var8, Var3, Var0, 1) };
	}
	fVar14 = unk_0x0D6E79537424BACE(Var11, Var8, 1);
	bVar15 = fVar14 >= fVar6;
	bVar16 = fVar14 >= fVar7;
	if (Local_50.f_0 == 1)
	{
		if (unk_0xB9AA84B14E04BC20((Var11.f_2 - Var8.f_2)) > 15f)
		{
			bVar15 = true;
		}
	}
	if (bVar16)
	{
		func_11(&uLocal_2306);
		uParam0->f_1 = 0;
		unk_0xD1C83BD797927DD5();
		func_234(1);
		uParam0->f_358[0 /*189*/].f_23 = 0;
		func_241(&(Local_50.f_119), 0, 0, 1, 1);
		func_240(&(Local_50.f_119), "IB_RETRY", 2, 201, 1, 1, 0);
		func_240(&(Local_50.f_119), "FE_HLP16", 2, 202, 1, 1, 0);
		unk_0x80650551CC58C784("MGSP_FAIL");
		sLocal_2304 = "SPR_HELP_FAIL";
	}
	else if (bVar15)
	{
		if (fVar14 <= (fVar7 - 15f))
		{
			func_281("SPR_HELP_RESET", -1);
		}
		if (fVar14 <= (fVar7 - 15f))
		{
			func_59("SPR_HELP_WARN", 5000, 0, &iLocal_2317, 4);
		}
	}
	else
	{
		unk_0xAC6C9BCDC1EB8365("SPR_HELP_WARN");
		if (func_339(iLocal_2317, 4))
		{
			func_337(&iLocal_2317, 4);
		}
	}
}

int func_73(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0xB9AA84B14E04BC20((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0xB9AA84B14E04BC20((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0xB9AA84B14E04BC20((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xB9AA84B14E04BC20((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xB9AA84B14E04BC20((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_74()
{
	if (iLocal_2020 == 1)
	{
		if (func_3(&uLocal_2050))
		{
			if (func_5(&uLocal_2050) <= 2.5f)
			{
				iLocal_2101 = "GATEMISS";
				fLocal_2102 = 5f;
				iLocal_2103 = 1;
			}
			else
			{
				iLocal_2101 = 0;
				fLocal_2102 = -1f;
				iLocal_2103 = 1;
				iLocal_2020 = 0;
			}
		}
	}
	if (iLocal_2021 == 1)
	{
		if (func_3(&uLocal_2056))
		{
			if (func_5(&uLocal_2056) <= 2.5f)
			{
				iLocal_2101 = "GATEINNER";
				fLocal_2102 = 1f;
				iLocal_2103 = 1;
			}
			else
			{
				iLocal_2101 = 0;
				fLocal_2102 = -1f;
				iLocal_2103 = 1;
				iLocal_2021 = 0;
			}
		}
	}
	if (iLocal_2022 == 1)
	{
		if (func_3(&uLocal_2053))
		{
			if (func_5(&uLocal_2053) <= 2.5f)
			{
				iLocal_2101 = "GATEOUTTER";
				fLocal_2102 = 0f;
				iLocal_2103 = 1;
			}
			else
			{
				iLocal_2101 = 0;
				fLocal_2102 = -1f;
				iLocal_2103 = 1;
				iLocal_2022 = 0;
			}
		}
	}
	if (iLocal_2023 == 1)
	{
		if (func_3(&uLocal_2065))
		{
			if (func_5(&uLocal_2065) <= 2.5f)
			{
				iLocal_2101 = "GATEKNIFEINNER";
				fLocal_2102 = 2.5f;
				iLocal_2103 = 1;
			}
			else
			{
				iLocal_2101 = 0;
				fLocal_2102 = -1f;
				iLocal_2103 = 1;
				iLocal_2023 = 0;
			}
		}
	}
	if (iLocal_2024 == 1)
	{
		if (func_3(&uLocal_2068))
		{
			if (func_5(&uLocal_2068) <= 2.5f)
			{
				iLocal_2101 = "GATEINVERTEDIN";
				fLocal_2102 = 3f;
				iLocal_2103 = 1;
			}
			else
			{
				iLocal_2101 = 0;
				fLocal_2102 = -1f;
				iLocal_2103 = 1;
				iLocal_2024 = 0;
			}
		}
	}
	if (iLocal_2025 == 1)
	{
		if (func_3(&uLocal_2059))
		{
			if (func_5(&uLocal_2059) <= 2.5f)
			{
				iLocal_2101 = "GATEKNIFEOUTTER";
				fLocal_2102 = 1.5f;
				iLocal_2103 = 1;
			}
			else
			{
				iLocal_2101 = 0;
				fLocal_2102 = -1f;
				iLocal_2103 = 1;
				iLocal_2025 = 0;
			}
		}
	}
	if (iLocal_2026 == 1)
	{
		if (func_3(&uLocal_2062))
		{
			if (func_5(&uLocal_2062) <= 2.5f)
			{
				iLocal_2101 = "GATEINVERTEDOUT";
				fLocal_2102 = 2f;
				iLocal_2103 = 1;
			}
			else
			{
				iLocal_2101 = 0;
				fLocal_2102 = -1f;
				iLocal_2103 = 1;
				iLocal_2026 = 0;
			}
		}
	}
	if (iLocal_2027 == 1)
	{
		if (func_3(&uLocal_2038))
		{
			if (func_5(&uLocal_2038) <= 2.5f)
			{
				iLocal_2101 = "STUNTKNIFELEFT";
				fLocal_2102 = 4f;
				iLocal_2103 = 1;
			}
			else
			{
				iLocal_2101 = 0;
				fLocal_2102 = -1f;
				iLocal_2103 = 1;
				iLocal_2027 = 0;
			}
		}
	}
	if (iLocal_2028 == 1)
	{
		if (func_3(&uLocal_2038))
		{
			if (func_5(&uLocal_2038) <= 2.5f)
			{
				iLocal_2101 = "STUNTKNIFELEFTHIT";
				fLocal_2102 = 1.5f;
				iLocal_2103 = 1;
			}
			else
			{
				iLocal_2101 = 0;
				fLocal_2102 = -1f;
				iLocal_2103 = 1;
				iLocal_2028 = 0;
			}
		}
	}
	if (iLocal_2029 == 1)
	{
		if (func_3(&uLocal_2038))
		{
			if (func_5(&uLocal_2038) <= 2.5f)
			{
				iLocal_2101 = "STUNTKNIFELEFTMISS";
				fLocal_2102 = 5f;
				iLocal_2103 = 1;
			}
			else
			{
				iLocal_2101 = 0;
				fLocal_2102 = -1f;
				iLocal_2103 = 1;
				iLocal_2029 = 0;
			}
		}
	}
	if (iLocal_2030 == 1)
	{
		if (func_3(&uLocal_2038))
		{
			if (func_5(&uLocal_2038) <= 2.5f)
			{
				iLocal_2101 = "STUNTKNIFERIGHT";
				fLocal_2102 = 4f;
				iLocal_2103 = 1;
			}
			else
			{
				iLocal_2101 = 0;
				fLocal_2102 = -1f;
				iLocal_2103 = 1;
				iLocal_2030 = 0;
			}
		}
	}
	if (iLocal_2031 == 1)
	{
		if (func_3(&uLocal_2038))
		{
			if (func_5(&uLocal_2038) <= 2.5f)
			{
				iLocal_2101 = "STUNTKNIFERIGHTHIT";
				fLocal_2102 = 1.5f;
				iLocal_2103 = 1;
			}
			else
			{
				iLocal_2101 = 0;
				fLocal_2102 = -1f;
				iLocal_2103 = 1;
				iLocal_2031 = 0;
			}
		}
	}
	if (iLocal_2032 == 1)
	{
		if (func_3(&uLocal_2038))
		{
			if (func_5(&uLocal_2038) <= 2.5f)
			{
				iLocal_2101 = "STUNTKNIFERIGHTMISS";
				fLocal_2102 = 5f;
				iLocal_2103 = 1;
			}
			else
			{
				iLocal_2101 = 0;
				fLocal_2102 = -1f;
				iLocal_2103 = 1;
				iLocal_2032 = 0;
			}
		}
	}
	if (iLocal_2033 == 1)
	{
		if (func_3(&uLocal_2041))
		{
			if (func_5(&uLocal_2041) <= 2.5f)
			{
				iLocal_2101 = "STUNTINVERTED";
				fLocal_2102 = 4f;
				iLocal_2103 = 1;
			}
			else
			{
				iLocal_2101 = 0;
				fLocal_2102 = -1f;
				iLocal_2103 = 1;
				iLocal_2033 = 0;
			}
		}
	}
	if (iLocal_2034 == 1)
	{
		if (func_3(&uLocal_2041))
		{
			if (func_5(&uLocal_2041) <= 2.5f)
			{
				iLocal_2101 = "STUNTINVERTEDHIT";
				fLocal_2102 = 1.5f;
				iLocal_2103 = 1;
			}
			else
			{
				iLocal_2101 = 0;
				fLocal_2102 = -1f;
				iLocal_2103 = 1;
				iLocal_2034 = 0;
			}
		}
	}
	if (iLocal_2035 == 1)
	{
		if (func_3(&uLocal_2041))
		{
			if (func_5(&uLocal_2041) <= 2.5f)
			{
				iLocal_2101 = "STUNTINVERTEDMISS";
				fLocal_2102 = 5f;
				iLocal_2103 = 1;
			}
			else
			{
				iLocal_2101 = 0;
				fLocal_2102 = -1f;
				iLocal_2103 = 1;
				iLocal_2035 = 0;
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
	if (!unk_0x930F8FBB8E9537CC(uParam0->f_358[iParam1 /*189*/].f_8))
	{
		if (!unk_0x930F8FBB8E9537CC(uParam0->f_358[iParam1 /*189*/].f_9))
		{
			if (unk_0x04C377C10639B842(uParam0->f_358[iParam1 /*189*/].f_8, uParam0->f_358[iParam1 /*189*/].f_9, 0))
			{
				fVar0 = unk_0x5855978686FD0737(uParam0->f_358[iParam1 /*189*/].f_9);
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
				if (unk_0x58A69336FE7307D8(uParam0->f_358[iParam1 /*189*/].f_8, uParam0->f_358[iParam1 /*189*/].f_9))
				{
					if (unk_0xBEB00EB4ADDC2A33(uParam0->f_358[iParam1 /*189*/].f_9, -1))
					{
						unk_0xDC81A805934C85CD(uParam0->f_358[iParam1 /*189*/].f_8, uParam0->f_358[iParam1 /*189*/].f_9, -1);
						unk_0xB8BE32B6C4B45732(uParam0->f_358[iParam1 /*189*/].f_8, fVar0);
					}
				}
			}
		}
	}
}

void func_76(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam6, int iParam7)
{
	if (!unk_0x930F8FBB8E9537CC(iParam1))
	{
		if (Local_50.f_0 == 1)
		{
			if (!unk_0x930F8FBB8E9537CC(iParam2))
			{
				unk_0x1ABA8A919187E144(iParam1, iParam2, Param3, unk_0x5855978686FD0737(iParam2), 1, 0, 786469, 5f, -1f);
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
		unk_0x91951D41BCE7B10D(*uParam0);
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
		if (bLocal_2305)
		{
			iVar3 = 6;
		}
		else
		{
			iVar3 = 1;
		}
		func_554(func_555(iVar3), &uVar0, &uVar1, &uVar2, uParam2);
		unk_0x29EAC729D9697D79(*uParam1, uVar0, uVar1, uVar2, *uParam2);
		unk_0x04C18ECD8113BB60(*uParam1, uVar0, uVar1, uVar2, *uParam2);
	}
}

void func_82(var uParam0)
{
	func_83(&(uParam0->f_5));
}

void func_83(var uParam0)
{
	if (unk_0xFBACB273AA628CC5(*uParam0))
	{
		unk_0x0A8175F24237A3D4(uParam0);
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
			if (func_3(&uLocal_2050))
			{
				func_89(&uLocal_2050, 3f);
			}
			if (func_3(&uLocal_2044))
			{
				func_89(&uLocal_2044, 3f);
			}
			if (func_3(&uLocal_2038))
			{
				func_89(&uLocal_2038, 3f);
			}
			if (func_3(&uLocal_2047))
			{
				func_89(&uLocal_2047, 3f);
			}
			if (func_3(&uLocal_2041))
			{
				func_89(&uLocal_2041, 3f);
			}
			if (func_3(&uLocal_2053))
			{
				func_89(&uLocal_2053, 3f);
			}
			if (func_3(&uLocal_2056))
			{
				func_89(&uLocal_2056, 3f);
			}
			if (func_3(&uLocal_2059))
			{
				func_89(&uLocal_2059, 3f);
			}
			if (func_3(&uLocal_2062))
			{
				func_89(&uLocal_2062, 3f);
			}
			if (func_3(&uLocal_2065))
			{
				func_89(&uLocal_2065, 3f);
			}
			if (func_3(&uLocal_2068))
			{
				func_89(&uLocal_2068, 3f);
			}
			func_86(uParam0, iParam2);
			switch (iParam2)
			{
				case 7:
					iLocal_2020 = 1;
					func_11(&uLocal_2050);
					break;
				
				case 1:
					iLocal_2021 = 1;
					func_11(&uLocal_2056);
					break;
				
				case 2:
					iLocal_2022 = 1;
					func_11(&uLocal_2053);
					break;
				
				case 3:
					iLocal_2023 = 1;
					func_11(&uLocal_2065);
					break;
				
				case 4:
					iLocal_2024 = 1;
					func_11(&uLocal_2068);
					break;
				
				case 5:
					iLocal_2025 = 1;
					func_11(&uLocal_2059);
					break;
				
				case 6:
					iLocal_2026 = 1;
					func_11(&uLocal_2062);
					break;
				
				case 8:
					iLocal_2027 = 1;
					func_11(&uLocal_2038);
					break;
				
				case 9:
					iLocal_2028 = 1;
					func_11(&uLocal_2047);
					break;
				
				case 10:
					iLocal_2029 = 1;
					func_11(&uLocal_2050);
					break;
				
				case 11:
					iLocal_2030 = 1;
					func_11(&uLocal_2038);
					break;
				
				case 12:
					iLocal_2031 = 1;
					func_11(&uLocal_2047);
					break;
				
				case 13:
					iLocal_2032 = 1;
					func_11(&uLocal_2050);
					break;
				
				case 14:
					iLocal_2033 = 1;
					func_11(&uLocal_2041);
					break;
				
				case 15:
					iLocal_2034 = 1;
					func_11(&uLocal_2047);
					break;
				
				case 16:
					iLocal_2035 = 1;
					func_11(&uLocal_2050);
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
		func_554(func_555(iVar4), &uVar0, &uVar1, &uVar2, &uVar3);
		unk_0x29EAC729D9697D79(uParam0->f_6, uVar0, uVar1, uVar2, func_91(*uParam0, 25, 200));
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
		func_554(func_555(iVar5), &uVar0, &uVar1, &uVar2, &uVar3);
		unk_0x29EAC729D9697D79(uParam1->f_6, uVar0, uVar1, uVar2, func_91(*uParam1, 25, 200));
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
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		fVar2 = unk_0x0D6E79537424BACE(Param0, unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 1);
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
	
	if (unk_0x930F8FBB8E9537CC(uParam0->f_358[0 /*189*/].f_9))
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
						if (!func_339(iLocal_2348, 262144))
						{
							func_98("Gate_PK", &iLocal_2347);
							iLocal_2348 = 0;
							func_311(&iLocal_2348, 262144);
							return iVar12;
						}
						else if (!func_339(iLocal_2348, 524288))
						{
							func_98("Con_PK", &iLocal_2347);
							func_311(&iLocal_2348, 524288);
							return iVar12;
						}
						else if (!func_339(iLocal_2348, 1048576))
						{
							func_98("Con_PK", &iLocal_2347);
							func_311(&iLocal_2348, 1048576);
							return iVar12;
						}
						else
						{
							func_98("Con_PK", &iLocal_2347);
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
						if (!func_339(iLocal_2348, 262144))
						{
							func_98("Gate_PK", &iLocal_2347);
							iLocal_2348 = 0;
							func_311(&iLocal_2348, 262144);
							return iVar12;
						}
						else if (!func_339(iLocal_2348, 524288))
						{
							func_98("Con_PK", &iLocal_2347);
							func_311(&iLocal_2348, 524288);
							return iVar12;
						}
						else if (!func_339(iLocal_2348, 1048576))
						{
							func_98("Con_PK", &iLocal_2347);
							func_311(&iLocal_2348, 1048576);
							return iVar12;
						}
						else
						{
							func_98("Con_PK", &iLocal_2347);
							return iVar12;
						}
					}
				}
				else
				{
					unk_0x7C6E2E604A4A540E(uParam0->f_358[0 /*189*/].f_9, &uVar0, &uVar3, &Var6, &uVar9);
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
							if (!func_339(iLocal_2348, 32768))
							{
								func_98("Gate_PI", &iLocal_2346);
								iLocal_2348 = 0;
								func_311(&iLocal_2348, 32768);
								return iVar12;
							}
							else if (!func_339(iLocal_2348, 65536))
							{
								func_98("Con_PI", &iLocal_2346);
								func_311(&iLocal_2348, 65536);
								return iVar12;
							}
							else if (!func_339(iLocal_2348, 131072))
							{
								func_98("Con_PI", &iLocal_2346);
								func_311(&iLocal_2348, 131072);
								return iVar12;
							}
							else
							{
								func_98("Con_PI", &iLocal_2346);
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
						if (!func_339(iLocal_2348, 4096))
						{
							func_98("Get_Perf", &iLocal_2343);
							iLocal_2348 = 0;
							func_311(&iLocal_2348, 4096);
							return iVar12;
						}
						else if (!func_339(iLocal_2348, 8192))
						{
							func_98("Con_Perf", &iLocal_2343);
							func_311(&iLocal_2348, 8192);
							return iVar12;
						}
						else if (!func_339(iLocal_2348, 16384))
						{
							func_98("Con_Perf", &iLocal_2343);
							func_311(&iLocal_2348, 16384);
							return iVar12;
						}
						else
						{
							func_98("Con_Perf", &iLocal_2343);
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
						if (!func_339(iLocal_2348, 64))
						{
							func_98("Gate_Kni", &iLocal_2345);
							iLocal_2348 = 0;
							func_311(&iLocal_2348, 64);
							return iVar12;
						}
						else if (!func_339(iLocal_2348, 128))
						{
							func_98("Con_Kni", &iLocal_2345);
							func_311(&iLocal_2348, 128);
							return iVar12;
						}
						else if (!func_339(iLocal_2348, 256))
						{
							func_98("Con_Kni", &iLocal_2345);
							func_311(&iLocal_2348, 256);
							return iVar12;
						}
						else
						{
							func_98("Con_Kni", &iLocal_2345);
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
						if (!func_339(iLocal_2348, 64))
						{
							func_98("Gate_Kni", &iLocal_2345);
							iLocal_2348 = 0;
							func_311(&iLocal_2348, 64);
							return iVar12;
						}
						else if (!func_339(iLocal_2348, 128))
						{
							func_98("Con_Kni", &iLocal_2345);
							func_311(&iLocal_2348, 128);
							return iVar12;
						}
						else if (!func_339(iLocal_2348, 256))
						{
							func_98("Con_Kni", &iLocal_2345);
							func_311(&iLocal_2348, 256);
							return iVar12;
						}
						else
						{
							func_98("Con_Kni", &iLocal_2345);
							return iVar12;
						}
					}
				}
				else
				{
					unk_0x7C6E2E604A4A540E(uParam0->f_358[0 /*189*/].f_9, &uVar0, &uVar3, &Var6, &uVar9);
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
							if (!func_339(iLocal_2348, 512))
							{
								func_98("Gate_Inv", &iLocal_2344);
								iLocal_2348 = 0;
								func_311(&iLocal_2348, 512);
								return iVar12;
							}
							else if (!func_339(iLocal_2348, 1024))
							{
								func_98("Con_Inv", &iLocal_2344);
								func_311(&iLocal_2348, 1024);
								return iVar12;
							}
							else if (!func_339(iLocal_2348, 2048))
							{
								func_98("Con_Inv", &iLocal_2344);
								func_311(&iLocal_2348, 2048);
								return iVar12;
							}
							else
							{
								func_98("Con_Inv", &iLocal_2344);
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
						if (!func_339(iLocal_2348, 8))
						{
							func_98("Gate_Hit", &iLocal_2342);
							iLocal_2348 = 0;
							func_311(&iLocal_2348, 8);
							return iVar12;
						}
						else if (!func_339(iLocal_2348, 16))
						{
							func_98("Con_Hit", &iLocal_2342);
							func_311(&iLocal_2348, 16);
							return iVar12;
						}
						else if (!func_339(iLocal_2348, 32))
						{
							func_98("Con_Hit", &iLocal_2342);
							func_311(&iLocal_2348, 32);
							return iVar12;
						}
						else
						{
							func_98("Con_Hit", &iLocal_2342);
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
					if (!func_339(iLocal_2348, 1))
					{
						func_98("Gate_Miss", &iLocal_2341);
						iLocal_2348 = 0;
						func_311(&iLocal_2348, 1);
						return iVar12;
					}
					else if (!func_339(iLocal_2348, 2))
					{
						func_98("Con_Miss", &iLocal_2341);
						func_311(&iLocal_2348, 2);
						return iVar12;
					}
					else if (!func_339(iLocal_2348, 4))
					{
						func_98("Con_Miss", &iLocal_2341);
						func_311(&iLocal_2348, 4);
						return iVar12;
					}
					else
					{
						func_98("Con_Miss", &iLocal_2341);
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
				if (!func_339(iLocal_2348, 1))
				{
					func_98("Gate_Miss", &iLocal_2341);
					iLocal_2348 = 0;
					func_311(&iLocal_2348, 1);
					return iVar12;
				}
				else if (!func_339(iLocal_2348, 2))
				{
					func_98("Con_Miss", &iLocal_2341);
					func_311(&iLocal_2348, 2);
					return iVar12;
				}
				else if (!func_339(iLocal_2348, 4))
				{
					func_98("Con_Miss", &iLocal_2341);
					func_311(&iLocal_2348, 4);
					return iVar12;
				}
				else
				{
					func_98("Con_Miss", &iLocal_2341);
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
	
	if (!func_73(*uParam0, *uParam1, 1056964608, 0))
	{
		fVar0 = (uParam0->f_3 * 5f);
		if (unk_0x515B65C19A5CA9B1(iParam2, *uParam0, fVar0, fVar0, fVar0, 0, 1, 0))
		{
			Var1 = { func_96(*uParam1 - *uParam0) };
			if ((func_95(unk_0xB6AE0DAE06D56288(iParam2, 1), Var1) - func_95(*uParam0, Var1)) > 15f)
			{
				unk_0x35D7948F61AA3FEC(-1, sLocal_2333, "HUD_MINI_GAME_SOUNDSET", 1);
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
	
	if (unk_0x930F8FBB8E9537CC(iParam0))
	{
		return 0;
	}
	unk_0x7C6E2E604A4A540E(iParam0, &uVar0, &Var3, &Var6, &uVar9);
	if (unk_0xB9AA84B14E04BC20(Var6.f_2) > 0.342f)
	{
		return 0;
	}
	return Var3.f_2 < 0f;
}

void func_98(char* sParam0, var uParam1)
{
	char cVar0[16];
	
	StringCopy(&cVar0, "Gate_Miss", 16);
	if (!func_339(*uParam1, 1))
	{
		if (!iLocal_2019)
		{
			iLocal_2019 = 1;
			func_311(uParam1, 1);
			return;
		}
		else
		{
			iLocal_2019 = 0;
			if (unk_0xD994929E13CC1ED5(sParam0, &cVar0))
			{
				func_61("SPR_FAIL_GATE", 7500, 0);
			}
			return;
		}
	}
	if (func_339(*uParam1, 1))
	{
		if (!func_339(*uParam1, 2))
		{
			if (!iLocal_2019)
			{
				iLocal_2019 = 1;
				func_311(uParam1, 2);
				return;
			}
			else
			{
				iLocal_2019 = 0;
				if (unk_0xD994929E13CC1ED5(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (func_339(*uParam1, 2))
	{
		if (!func_339(*uParam1, 4))
		{
			if (!iLocal_2019)
			{
				iLocal_2019 = 1;
				func_311(uParam1, 4);
				return;
			}
			else
			{
				iLocal_2019 = 0;
				if (unk_0xD994929E13CC1ED5(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (func_339(*uParam1, 4))
	{
		if (!func_339(*uParam1, 8))
		{
			if (!iLocal_2019)
			{
				iLocal_2019 = 1;
				func_311(uParam1, 8);
				return;
			}
			else
			{
				iLocal_2019 = 0;
				if (unk_0xD994929E13CC1ED5(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (func_339(*uParam1, 8))
	{
		if (!func_339(*uParam1, 16))
		{
			if (!iLocal_2019)
			{
				iLocal_2019 = 1;
				func_311(uParam1, 16);
				return;
			}
			else
			{
				iLocal_2019 = 0;
				if (unk_0xD994929E13CC1ED5(sParam0, &cVar0))
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
	
	if (unk_0x930F8FBB8E9537CC(iParam0))
	{
		return 0;
	}
	unk_0x7C6E2E604A4A540E(iParam0, &uVar0, &Var3, &Var6, &uVar9);
	if (unk_0xB9AA84B14E04BC20(Var6.f_2) > 0.342f)
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
	unk_0x7C6E2E604A4A540E(iParam1, &Var12, &Var6, &Var9, &Var3);
	Var15 = { Var0 - Var3 };
	fVar18 = unk_0xB9AA84B14E04BC20(func_95(Var15, Var12));
	fVar19 = unk_0xB9AA84B14E04BC20(func_95(Var15, Var9));
	fVar20 = unk_0xB9AA84B14E04BC20(func_95(Var15, Var6));
	fVar21 = ((fVar19 * fVar19) + (fVar20 * fVar20));
	if (fVar18 > 6.5f)
	{
		return 17;
	}
	else
	{
		if (fVar21 > 900f)
		{
			if (iParam1 == unk_0x81873881071CD9FE())
			{
				func_182(&uLocal_2291, 0);
			}
			return 17;
		}
		if (fVar21 > 110f)
		{
			if (iParam1 == unk_0x81873881071CD9FE())
			{
				func_182(&uLocal_2291, 0);
			}
			unk_0x35D7948F61AA3FEC(-1, sLocal_2332, "HUD_MINI_GAME_SOUNDSET", 1);
			return 2;
		}
		else
		{
			if (iParam1 == unk_0x81873881071CD9FE())
			{
				func_182(&uLocal_2291, 0);
			}
			unk_0x35D7948F61AA3FEC(-1, sLocal_2332, "HUD_MINI_GAME_SOUNDSET", 1);
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
			if (!unk_0x930F8FBB8E9537CC(uParam0->f_358[iVar1 /*189*/].f_8) && !unk_0x930F8FBB8E9537CC(Var2.f_8))
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
	if (unk_0x930F8FBB8E9537CC(iParam0))
	{
		return -1f;
	}
	return unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(iParam0, 1), Param1, iParam4);
}

void func_103(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_62(*iParam1, iParam2))
	{
		return;
	}
	if (!bParam3)
	{
		func_281(sParam0, -1);
	}
	else
	{
		func_104(sParam0);
	}
	func_60(iParam1, iParam2);
}

void func_104(char* sParam0)
{
	unk_0x522099B37CAE9E12(sParam0);
	unk_0xC592EBAF1D879BDC(0, 1, 1, -1);
}

int func_105(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	switch (uParam1->f_23)
	{
		case 0:
			func_163(uParam0);
			func_231();
			func_241(&(Local_50.f_119), 0, 0, 1, 1);
			func_240(&(Local_50.f_119), "IB_RETRY", 2, 201, 1, 1, 0);
			func_240(&(Local_50.f_119), "FE_HLP16", 2, 202, 1, 1, 0);
			func_234(1);
			unk_0x80650551CC58C784("MGSP_FAIL");
			uParam1->f_23 = 1;
			break;
		
		case 1:
			if (func_157(&(Local_50.f_321), &(Local_50.f_327), &(uParam0->f_17), cLocal_2303, sLocal_2304, uParam0, 78))
			{
				iLocal_2434 = 0;
				if (!unk_0x930F8FBB8E9537CC(uParam0->f_358[0 /*189*/].f_9))
				{
					unk_0xC390A6485FB80923(uParam0->f_358[0 /*189*/].f_9, 4);
				}
				if (func_238("SPR_HELP_DAMG", 0, 0))
				{
					unk_0xAC6C9BCDC1EB8365("SPR_HELP_DAMG");
				}
				uParam0->f_1 = 0;
				func_66(&(Local_50.f_321), 1);
				if (*uParam0)
				{
					func_150(0, 0);
					func_149(0, 0);
					func_148();
					if (func_238("SPR_RETR_DES", 0, 0))
					{
						unk_0xAC6C9BCDC1EB8365("SPR_RETR_DES");
					}
					func_234(0);
					*uParam0 = 1;
					uParam1->f_23 = 6;
				}
				else
				{
					func_150(0, 0);
					func_149(0, 0);
					func_148();
					func_89(&uLocal_2306, 10f);
					func_234(0);
					*uParam0 = 0;
					uParam1->f_23 = 7;
				}
			}
			break;
		
		case 2:
			func_140(&(Local_50.f_119), 1128792064, 7, 1, 1, 1065353216);
			if (unk_0x093DEAE9A023FAA0(2, 201))
			{
				func_150(0, 0);
				func_149(0, 0);
				func_148();
				iLocal_2439 = unk_0xEDDCCC3D357A50F8();
				unk_0x35D7948F61AA3FEC(iLocal_2439, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", 1);
				if (func_238("SPR_RETR_DES", 0, 0))
				{
					unk_0xAC6C9BCDC1EB8365("SPR_RETR_DES");
				}
				func_234(0);
				*uParam0 = 1;
				uParam1->f_23 = 6;
			}
			else if (unk_0x093DEAE9A023FAA0(2, 202))
			{
				func_150(0, 0);
				func_149(0, 0);
				func_148();
				iLocal_2439 = unk_0xEDDCCC3D357A50F8();
				unk_0x35D7948F61AA3FEC(iLocal_2439, "Phone_Generic_Key_03", "HUD_MINIGAME_SOUNDSET", 1);
				func_89(&uLocal_2306, 10f);
				func_234(0);
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
				if (unk_0x7404950238A154C2(uParam0->f_358[0 /*189*/].f_9, 0))
				{
					unk_0xE5BBA710593FB752(unk_0x1329891157A54C63(), 1);
					unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 0, 0);
					func_241(&(Local_50.f_119), 0, 0, 1, 1);
					func_240(&(Local_50.f_119), "SPR_UI_CONT", 2, 201, 1, 1, 0);
					func_240(&(Local_50.f_119), "IB_NO", 2, 202, 1, 1, 0);
				}
			}
			if (bParam2)
			{
				if (unk_0x7404950238A154C2(uParam0->f_358[0 /*189*/].f_9, 0))
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
			if (!unk_0x930F8FBB8E9537CC(uParam0->f_358[0 /*189*/].f_9))
			{
				unk_0xC390A6485FB80923(uParam0->f_358[0 /*189*/].f_9, 4);
			}
			uParam0->f_1 = 0;
			if (func_5(&uLocal_2306) <= 10f)
			{
				if (bParam2)
				{
					unk_0xC9A352663D97EFC3(9);
					unk_0xC9A352663D97EFC3(7);
					unk_0xDE1125A413AF241C(0, 99, 1);
					unk_0xDE1125A413AF241C(0, 100, 1);
					func_140(&(Local_50.f_119), 1128792064, 1, 0, 1, 1065353216);
					if (unk_0x093DEAE9A023FAA0(2, 201))
					{
						*uParam0 = 1;
						iLocal_2439 = unk_0xEDDCCC3D357A50F8();
						unk_0x35D7948F61AA3FEC(iLocal_2439, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", 1);
						uParam1->f_23 = 6;
					}
					else if (unk_0x093DEAE9A023FAA0(2, 202))
					{
						*uParam0 = 0;
						func_89(&uLocal_2306, 10f);
						iLocal_2439 = unk_0xEDDCCC3D357A50F8();
						unk_0x35D7948F61AA3FEC(iLocal_2439, "Phone_Generic_Key_03", "HUD_MINIGAME_SOUNDSET", 1);
						uParam1->f_23 = 6;
					}
				}
			}
			else
			{
				unk_0xD1C83BD797927DD5();
				sLocal_2304 = "SPR_RETR_DES";
				func_66(&(Local_50.f_321), 1);
				uParam1->f_23 = 14;
			}
			break;
		
		case 6:
			if (func_335(500))
			{
				unk_0xD1C83BD797927DD5();
				unk_0xB8BB626315D394F5(1);
				uParam1->f_23 = 8;
			}
			break;
		
		case 7:
			if (func_3(&(uParam0->f_3)))
			{
				func_4(&(uParam0->f_3));
			}
			if (func_124())
			{
				if (unk_0x29AFA2493D7C23D0())
				{
					func_163(uParam0);
					unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 0, 0);
					if (unk_0x86CCCD2FAE9D5E65(uParam0->f_358[0 /*189*/].f_9))
					{
						unk_0x5FAEE66A01F82335(uParam0->f_358[0 /*189*/].f_9, 0f, 0f, 0f);
						unk_0x9765BF567DB87B5F(uParam0->f_358[0 /*189*/].f_9, unk_0x0FDE1892CC627262(uParam0->f_358[0 /*189*/].f_9));
					}
					uParam1->f_23 = 10;
				}
			}
			break;
		
		case 8:
			if (func_122(uParam1, 1))
			{
				if (*uParam0)
				{
					uParam0->f_26 = 8;
				}
				else
				{
					if (bParam2)
					{
						unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
						if (Local_50.f_0 == 0)
						{
							unk_0xE5BBA710593FB752(unk_0x1329891157A54C63(), 1);
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
					func_120(uParam0, iVar0, 0);
				}
				iVar0++;
			}
			if (bParam2)
			{
				if (!unk_0x930F8FBB8E9537CC(uParam0->f_358[0 /*189*/].f_9) && uParam0->f_358[0 /*189*/].f_11 != -1)
				{
					func_119(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/], uParam0->f_358[0 /*189*/].f_9, uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/], uParam0->f_358[0 /*189*/].f_11 == 0);
				}
				unk_0x270066FDBAF3A458(0f);
				func_11(&uLocal_2430);
				uParam1->f_23 = 11;
			}
			else
			{
				uParam1->f_23 = 13;
			}
			break;
		
		case 10:
			func_150(0, 0);
			func_149(0, 0);
			func_110(uParam1, 1);
			func_9(uParam1, Local_50.f_3, Local_50.f_6, 0f);
			unk_0xC1B1E9A034A63A62(0);
			uParam1->f_23 = 12;
			break;
		
		case 11:
			if (!unk_0x2CB3B76C90F08111() || unk_0xA5C3CFD413D647EA())
			{
				uParam0->f_1 = 1;
				func_11(&uLocal_2430);
				func_108(&(uParam0->f_358[iVar0 /*189*/]), 60f, 0);
				if (func_551(500))
				{
					unk_0x5AD73EF670D05F7D();
					if (!unk_0x930F8FBB8E9537CC(uParam0->f_358[0 /*189*/].f_9))
					{
						unk_0xDC81A805934C85CD(uParam0->f_358[0 /*189*/].f_8, uParam0->f_358[0 /*189*/].f_9, -1);
					}
					if (bParam2 && Local_50.f_0 == 0)
					{
						func_88(&(uParam0->f_358[0 /*189*/]), 5f);
					}
					uParam1->f_23 = 13;
				}
				return 0;
			}
			else if (unk_0x2CB3B76C90F08111())
			{
				if (uParam0->f_358[0 /*189*/].f_11 < uParam0->f_12)
				{
					if (func_3(&uLocal_2430))
					{
						if (func_107(&uLocal_2430) >= 3f)
						{
							unk_0x5AD73EF670D05F7D();
						}
					}
					else
					{
						func_10(&uLocal_2430);
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
				if (!unk_0x930F8FBB8E9537CC(uParam1->f_8))
				{
					if (func_106(uParam1))
					{
						func_11(&uLocal_2306);
						sLocal_2304 = "SPR_RETR_STUK";
						uParam1->f_23 = 0;
						return 1;
					}
				}
			}
			return 0;
		
		case 14:
			func_163(uParam0);
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
		if (!unk_0xE9D49B6420575D0A(unk_0x1329891157A54C63()))
		{
			if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), uParam0->f_9, 0))
			{
				if (unk_0xA04824262F150982(uParam0->f_9) <= 15f)
				{
					if (uParam0->f_22 == joaat("stunt"))
					{
						if (unk_0x2C7FEB2538D88E8C(uParam0->f_9) < 3f || unk_0x03CF5B18BF9EC613(uParam0->f_9))
						{
							if (unk_0x69F59C68E86FDF3D(uParam0->f_9) && unk_0x2C7FEB2538D88E8C(uParam0->f_9) < 1f)
							{
								return 1;
							}
							if (unk_0x088B9F587DA37464(uParam0->f_9, 0, 1000))
							{
								return 1;
							}
							if (unk_0x088B9F587DA37464(uParam0->f_9, 1, 1000))
							{
								return 1;
							}
							if (unk_0x088B9F587DA37464(uParam0->f_9, 2, 10000))
							{
								return 1;
							}
							if (unk_0x088B9F587DA37464(uParam0->f_9, 3, 10000))
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
			return (func_6(unk_0x236D8AD7EE179F46(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_108(var uParam0, float fParam1, bool bParam2)
{
	struct<3> Var0;
	
	if (!unk_0x930F8FBB8E9537CC(uParam0->f_9))
	{
		if (unk_0x1699D7B95446F15C(uParam0->f_22))
		{
			Var0 = { unk_0x1FC13B3C61DF24B9(uParam0->f_9, 2) };
			func_109(uParam0->f_9, fParam1, bParam2, Var0.f_0, 0);
		}
	}
}

void func_109(int iParam0, float fParam1, bool bParam2, float fParam3, float fParam4)
{
	struct<3> Var0;
	bool bVar3;
	float fVar4;
	
	unk_0xDE1125A413AF241C(0, 75, 1);
	if (unk_0x930F8FBB8E9537CC(iParam0))
	{
		return;
	}
	if (unk_0xA04824262F150982(iParam0) < fParam1)
	{
		unk_0x3D24414865131CB8(iParam0, fParam1);
	}
	Var0 = { unk_0x1FC13B3C61DF24B9(iParam0, 2) };
	bVar3 = false;
	if (bParam2)
	{
		fVar4 = (unk_0x8D51D24D214E2FF2() * 45f);
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
		unk_0x3A45EB0810EBE71C(iParam0, Var0, 2, 1);
	}
}

int func_110(var uParam0, bool bParam1)
{
	char cVar0[16];
	
	if (bParam1)
	{
		if (unk_0x86CCCD2FAE9D5E65(uParam0->f_9))
		{
			if (!unk_0x930F8FBB8E9537CC(uParam0->f_9) || !unk_0x7404950238A154C2(uParam0->f_9, 0))
			{
				if (unk_0x04C377C10639B842(uParam0->f_8, uParam0->f_9, 0))
				{
					unk_0x1E2B48EE3EC55DCF(uParam0->f_8);
					unk_0xD768713E73165208(uParam0->f_9, 1, 1);
					unk_0x5D00E836B6BE8693(&(uParam0->f_9));
				}
			}
			else
			{
				if (unk_0x04C377C10639B842(uParam0->f_8, uParam0->f_9, 0))
				{
					unk_0xB067093BBAF0A747(uParam0->f_8, uParam0->f_16, 1, 0, 0, 1);
				}
				if (unk_0x04C377C10639B842(uParam0->f_8, uParam0->f_9, 0))
				{
				}
				else
				{
					unk_0xD768713E73165208(uParam0->f_9, 1, 1);
					unk_0x5D00E836B6BE8693(&(uParam0->f_9));
				}
			}
		}
	}
	if (!unk_0x930F8FBB8E9537CC(uParam0->f_9))
	{
		unk_0x9765BF567DB87B5F(uParam0->f_9, 1000);
		unk_0x4F7552F76F378DB7(uParam0->f_9);
		unk_0xE61FF1947C0507EB(uParam0->f_9, 1000f);
		unk_0xB067093BBAF0A747(uParam0->f_9, uParam0->f_16, 1, 0, 0, 1);
		unk_0xC24172029826A66F(uParam0->f_9, uParam0->f_19);
		unk_0x5CC9D6711FE01F0D(uParam0->f_9);
	}
	else
	{
		if (uParam0->f_22 == 0)
		{
			return 1;
		}
		uParam0->f_9 = unk_0xE00F8DEA9778FC87(joaat("stunt"), uParam0->f_16, uParam0->f_19, 1, 1);
		if (unk_0x930F8FBB8E9537CC(uParam0->f_9))
		{
			return 0;
		}
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			unk_0xC390A6485FB80923(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 4);
		}
		unk_0x50C9C2E3327FDF31(uParam0->f_9, 1);
		func_111(uParam0->f_9, &(Local_50.f_243), 0, 1);
	}
	unk_0x7D82FDFCD6FB355A(uParam0->f_9, 0);
	unk_0x686D6CDC14C4BA6C(uParam0->f_9, 1, 1);
	unk_0x50638C188ABB218B(uParam0->f_9);
	if (!unk_0x930F8FBB8E9537CC(uParam0->f_8))
	{
		if (!unk_0x58A69336FE7307D8(uParam0->f_8, uParam0->f_9))
		{
			unk_0xDC81A805934C85CD(uParam0->f_8, uParam0->f_9, -1);
		}
	}
	if (!unk_0xE86442941AE40E75(uParam0->f_9))
	{
		unk_0xD768713E73165208(uParam0->f_9, 1, 0);
	}
	MemCopy(&cVar0, {*uParam0}, 4);
	StringConCat(&cVar0, "_Veh", 16);
	unk_0x6B646E2E3BEF5D9B(uParam0->f_9, &cVar0);
	if (uParam0->f_20 <= 3)
	{
		unk_0x15C314D0864239A3(uParam0->f_9, 0);
		Local_50.f_1 = uParam0->f_9;
	}
	return 1;
}

void func_111(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (unk_0x7404950238A154C2(iParam0, 0))
	{
		if (unk_0x8DAF7A748E41AD46(&(uParam1->f_1)) != 0)
		{
			unk_0xA9FDEEBC09186222(iParam0, &(uParam1->f_1));
		}
		if (*uParam1 >= 0 && *uParam1 < unk_0x5393C767E0A1742B())
		{
			unk_0x1E6C0DB293E78345(iParam0, *uParam1);
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
		}
		if (unk_0x236D8AD7EE179F46(uParam1->f_77, 13))
		{
			unk_0x80D60E160186B2B6(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xF72A7A302D6CE95C(iParam0);
		}
		if (unk_0x236D8AD7EE179F46(uParam1->f_77, 12))
		{
			unk_0x5D9A3C8DE55806B3(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xC6F2A508D9D94662(iParam0);
		}
		unk_0xFD021BAF9614D437(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0x3CA38E5C9A060AAD(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0x236D8AD7EE179F46(uParam1->f_77, 15) || func_118(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_117())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		unk_0xCAFB5A22098B8EA4(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			unk_0xBA0A17020F825714(iParam0, 0);
		}
		else
		{
			unk_0xBA0A17020F825714(iParam0, 0);
			unk_0xBA0A17020F825714(iParam0, uParam1->f_65);
		}
		unk_0xDD213338390D43E1(iParam0, !unk_0x236D8AD7EE179F46(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0xC390A6485FB80923(iParam0, uParam1->f_70);
		}
		unk_0x34318363F8442B01(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0x797EA5FDEC3CF253(iParam0, 2, unk_0x236D8AD7EE179F46(uParam1->f_77, 28));
		unk_0x797EA5FDEC3CF253(iParam0, 3, unk_0x236D8AD7EE179F46(uParam1->f_77, 29));
		unk_0x797EA5FDEC3CF253(iParam0, 0, unk_0x236D8AD7EE179F46(uParam1->f_77, 30));
		unk_0x797EA5FDEC3CF253(iParam0, 1, unk_0x236D8AD7EE179F46(uParam1->f_77, 31));
		unk_0xF239D177F4EB07F9(iParam0, unk_0x236D8AD7EE179F46(uParam1->f_77, 10));
		if (unk_0x9DCB5D9F2125C30D(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0x24F85A008ECA63FB(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0xD382045D1EFD12D3(unk_0x14B7103DBD149FFE(iParam0)))
			{
				if (unk_0xC5ABD699DDC9D5A0(unk_0x14B7103DBD149FFE(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_116(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_116(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0xD31A4E6B116BE250(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0x1AFB2E2B0F799DD7(iParam0, 1);
			}
			else
			{
				unk_0xC9340C45BD8F401B(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_113(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xE083914AB72DD7CE(uParam1->f_66) && !unk_0x9F59BCFFFEAAD4B1(uParam1->f_66))
		{
			iVar0 = 0;
			while (iVar0 <= 11)
			{
				if (unk_0x236D8AD7EE179F46(uParam1->f_77, func_112(iVar0 + 1)))
				{
					if (!unk_0x5CBBEE14743C3376(iParam0, iVar0 + 1))
					{
						unk_0x90B59F54B0DB5FF7(iParam0, iVar0 + 1, 0);
					}
				}
				else if (unk_0x5CBBEE14743C3376(iParam0, iVar0 + 1))
				{
					unk_0x90B59F54B0DB5FF7(iParam0, iVar0 + 1, 1);
				}
				iVar0++;
			}
		}
		if (unk_0x1699D7B95446F15C(uParam1->f_66))
		{
			if (!unk_0x236D8AD7EE179F46(uParam1->f_77, 23))
			{
				if (unk_0x236D8AD7EE179F46(uParam1->f_77, 22))
				{
					unk_0xDE113FA802D77FA6(iParam0, 2);
				}
				else
				{
					unk_0xDE113FA802D77FA6(iParam0, 3);
				}
			}
			else
			{
				unk_0xDE113FA802D77FA6(iParam0, 4);
			}
		}
		if (unk_0x236D8AD7EE179F46(uParam1->f_77, 27))
		{
			unk_0xDD6B145BC3BFD188(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0xDD6B145BC3BFD188(iParam0, "IgnoredByQuickSave", 0);
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
	
	if (!unk_0x7404950238A154C2(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xBE23E5C609DF6E79(*iParam0) == 0)
	{
		return 0;
	}
	unk_0xF196EBA065B17452(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0xC163DC4217AA2669(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0x64D946BA23568D30(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x5039214D6DAE5ECC(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x323720FEE81B53C0(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x323720FEE81B53C0(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x323720FEE81B53C0(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if ((unk_0x728464249800975B(*iParam0, 38) != 0 && unk_0x728464249800975B(*iParam0, 24) != 0) && unk_0x64D946BA23568D30(*iParam0, 24) != func_115(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x323720FEE81B53C0(*iParam0, 24, func_115(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	if (func_114(*iParam0))
	{
		unk_0xDEE6369ABB2B517A(*iParam0, 1);
		unk_0x50C9C2E3327FDF31(*iParam0, 1);
	}
	return 1;
}

int func_114(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0x86CCCD2FAE9D5E65(iParam0) && unk_0x7404950238A154C2(iParam0, 0)) && unk_0xBE23E5C609DF6E79(iParam0) > 0)
	{
		unk_0xF196EBA065B17452(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x64D946BA23568D30(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0xFAEBBFA35E2022F2(iParam0, iVar1, unk_0x64D946BA23568D30(iParam0, iVar1)), 16);
				iVar2 = unk_0x8DAF7A748E41AD46(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x8DAF7A748E41AD46("MNU_CAGE") || iVar2 == unk_0x8DAF7A748E41AD46("SABRE_CAG"))
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

int func_115(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0x86CCCD2FAE9D5E65(iParam0) && unk_0x7404950238A154C2(iParam0, 0))
	{
		iVar0 = unk_0x728464249800975B(iParam0, 38);
		iVar1 = unk_0x728464249800975B(iParam0, 24);
		fVar2 = (unk_0xBBDA792448DB5A89(iParam1 + 1) / unk_0xBBDA792448DB5A89(iVar0));
		iVar3 = (unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

void func_116(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xBE23E5C609DF6E79(iParam0) > 0)
	{
		unk_0xF196EBA065B17452(iParam0, 0);
		iVar0 = unk_0x64D946BA23568D30(iParam0, 24);
		iVar1 = unk_0xB0BC5473B799F536(iParam0, 24);
		unk_0xE82FEE20AC58682A(iParam0, uParam1);
		if (iVar0 == -1)
		{
			unk_0x5039214D6DAE5ECC(iParam0, 24);
		}
		else
		{
			unk_0x323720FEE81B53C0(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

var func_117()
{
	return unk_0x2D6859674806FDCE(joaat("mpindependence"));
}

int func_118(int iParam0)
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		if (unk_0x7404950238A154C2(iParam0, 0))
		{
			if (unk_0x9C1418C53B05D47B("MPBitset", 3))
			{
				if (unk_0xCEC9D74C9FF51C8C(iParam0, "MPBitset"))
				{
					iVar0 = unk_0x8B4662A1D2DF932C(iParam0, "MPBitset");
				}
				return unk_0x236D8AD7EE179F46(iVar0, 4);
			}
		}
	}
	return 0;
}

void func_119(struct<3> Param0, int iParam3, struct<3> Param4, bool bParam7)
{
	var uVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	struct<3> Var8;
	float fVar11;
	struct<3> Var12;
	
	if (!unk_0x930F8FBB8E9537CC(iParam3))
	{
		if (bParam7 && Local_50.f_10 == 0)
		{
			unk_0xB067093BBAF0A747(iParam3, 1705.039f, 3251.13f, 40.0016f, 1, 0, 0, 1);
		}
		Var12 = { unk_0xB6AE0DAE06D56288(iParam3, 1) };
		unk_0x77428ED9B41A3CAF(Var12);
		unk_0x84426D0C9AE7A434(Var12, &fVar11, 0);
		Var5 = { unk_0xB6AE0DAE06D56288(iParam3, 1) };
		if (bParam7)
		{
			Var8 = { Param0 - Param4 };
		}
		else
		{
			Var8 = { Param4 - Var5 };
		}
		uVar0 = unk_0x097CA9356FED843D(Var8.f_0, Var8.f_1);
		fVar1 = (unk_0x097CA9356FED843D(Var8.f_0, Var8.f_2) - 270f);
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
			fVar1 = -(180f - unk_0xB9AA84B14E04BC20(fVar1));
		}
		if (fVar1 > 90f)
		{
			fVar1 = (180f - unk_0xB9AA84B14E04BC20(fVar1));
		}
		if (unk_0xB9AA84B14E04BC20((Var12.f_2 - fVar11)) < 25f && (fVar1 > 15f || fVar1 < -15f))
		{
			Var12.f_2 = (fVar11 + 25f);
			unk_0xB067093BBAF0A747(iParam3, Var12, 1, 0, 0, 1);
		}
		unk_0xA8F22633ACC22189(iParam3, 1);
		Var2 = { unk_0x1FC13B3C61DF24B9(iParam3, 2) };
		Var2.f_0 = fVar1;
		Var2.f_2 = uVar0;
		unk_0x3A45EB0810EBE71C(iParam3, Var2, 2, 1);
		unk_0xA8F22633ACC22189(iParam3, 0);
		unk_0x7E2FE21B0F846986(Var12, unk_0xC99223BD7E489FC6(iParam3), 500f, 0);
	}
}

void func_120(var uParam0, int iParam1, bool bParam2)
{
	func_121(uParam0, iParam1, (uParam0->f_358[iParam1 /*189*/].f_11 - 1), bParam2);
}

void func_121(var uParam0, int iParam1, int iParam2, bool bParam3)
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
	if (unk_0x930F8FBB8E9537CC(uParam0->f_358[iParam1 /*189*/].f_8))
	{
		return;
	}
	if (uParam0->f_358[iParam1 /*189*/].f_22 != 0)
	{
		if (unk_0x930F8FBB8E9537CC(uParam0->f_358[iParam1 /*189*/].f_9))
		{
			return;
		}
	}
	Var0 = { uParam0->f_27[iParam2 + 1 /*10*/] - uParam0->f_27[iParam2 /*10*/] };
	uVar3 = unk_0x097CA9356FED843D(Var0.f_0, Var0.f_1);
	fVar4 = 0f;
	if (unk_0xC5ABD699DDC9D5A0(uParam0->f_358[iParam1 /*189*/].f_22))
	{
		fVar4 = 0f;
	}
	else if (unk_0x61A26017817C6AED(uParam0->f_358[iParam1 /*189*/].f_22))
	{
		fVar4 = 25f;
	}
	else if (unk_0x1699D7B95446F15C(uParam0->f_358[iParam1 /*189*/].f_22))
	{
		fVar4 = 60f;
	}
	if (bParam3)
	{
	}
	func_9(&(uParam0->f_358[iParam1 /*189*/]), uParam0->f_27[iParam2 /*10*/], uVar3, fVar4);
}

int func_122(var uParam0, bool bParam1)
{
	if (!func_110(uParam0, bParam1) || !func_123(uParam0))
	{
		return 0;
	}
	return 1;
}

int func_123(var uParam0)
{
	char cVar0[16];
	
	if (uParam0->f_21 == 0)
	{
		return 0;
	}
	if (!unk_0x930F8FBB8E9537CC(uParam0->f_8))
	{
		unk_0x9765BF567DB87B5F(uParam0->f_8, 1000);
		if (!unk_0x930F8FBB8E9537CC(uParam0->f_9))
		{
			if (!unk_0x58A69336FE7307D8(uParam0->f_8, uParam0->f_9))
			{
				unk_0xDC81A805934C85CD(uParam0->f_8, uParam0->f_9, -1);
			}
		}
		else
		{
			unk_0xB067093BBAF0A747(uParam0->f_8, uParam0->f_16, 1, 0, 0, 1);
			unk_0xC24172029826A66F(uParam0->f_8, uParam0->f_19);
		}
	}
	else if (!unk_0x930F8FBB8E9537CC(uParam0->f_9))
	{
		uParam0->f_8 = unk_0x4D135F3066A9BF9C(uParam0->f_9, uParam0->f_20, uParam0->f_21, -1, 1, 1);
		if (unk_0x930F8FBB8E9537CC(uParam0->f_8))
		{
			return 0;
		}
	}
	else
	{
		uParam0->f_8 = unk_0x206897C6DBC12488(uParam0->f_20, uParam0->f_21, uParam0->f_16, uParam0->f_19, 1, 1);
		if (unk_0x930F8FBB8E9537CC(uParam0->f_8))
		{
			return 0;
		}
	}
	if (uParam0->f_20 > 3)
	{
		if (!unk_0xE86442941AE40E75(uParam0->f_8))
		{
			unk_0xD768713E73165208(uParam0->f_8, 1, 0);
		}
		MemCopy(&cVar0, {*uParam0}, 4);
		StringConCat(&cVar0, "_Drv", 16);
		unk_0x96B56AFFC92EEC6D(uParam0->f_8, &cVar0);
	}
	return 1;
}

int func_124()
{
	if (!unk_0x236D8AD7EE179F46(iLocal_42, 0) && !unk_0x236D8AD7EE179F46(iLocal_42, 1))
	{
		unk_0xC1B1E9A034A63A62(0);
		func_150(1, 0);
	}
	if (!unk_0x521385D8214D27C4())
	{
		unk_0xD1C83BD797927DD5();
	}
	unk_0xDE1125A413AF241C(2, 199, 1);
	unk_0xDE1125A413AF241C(0, 59, 1);
	unk_0xDE1125A413AF241C(0, 60, 1);
	unk_0xDE1125A413AF241C(0, 37, 1);
	unk_0xDE1125A413AF241C(0, 25, 1);
	unk_0x1918A5BE88E89E5E();
	if (IntToFloat(unk_0x83666F9FB8FEBD4B()) > (1500f * 0.2f))
	{
		if (!unk_0x236D8AD7EE179F46(iLocal_42, 1))
		{
			func_149(1, 0);
			unk_0x5AE11BC36633DE4E(0);
		}
		else if (IntToFloat(unk_0xC9D9444186B5A374()) > (1500f * 0.075f) || unk_0x29AFA2493D7C23D0())
		{
			if (!unk_0x29AFA2493D7C23D0())
			{
				if (!unk_0xC584A413BCB2AA39())
				{
					unk_0x3B283FEBA87FFBEB(1500);
				}
			}
			else if (iLocal_43 == 0)
			{
				iLocal_43 = unk_0x48E480685981C7D4() + 1000;
				if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
				{
					unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 0, 0);
				}
				func_139(0, 2, 1);
				func_132(1, 1, 1, 0);
				func_126(1);
				unk_0x6EE3ABB634B3B982(0);
				unk_0x36886E3D7B19BEE3(0);
				unk_0xB8BB626315D394F5(1);
				unk_0xD1C83BD797927DD5();
				if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
				{
					unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 0, 0);
				}
				func_150(0, 0);
				func_125(0);
			}
			else if (unk_0x48E480685981C7D4() < iLocal_43)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_125(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!unk_0x236D8AD7EE179F46(iLocal_42, 3))
			{
				unk_0xD338B0444EFB8C65(1);
				unk_0xF3148AAF69AF9CBC(&iLocal_42, 3);
			}
		}
		else if (unk_0x236D8AD7EE179F46(iLocal_42, 3))
		{
			unk_0xD338B0444EFB8C65(0);
			unk_0xC69E84EBBD7166E6(&iLocal_42, 3);
		}
	}
}

void func_126(bool bParam0)
{
	if (bParam0)
	{
		func_131();
		if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
		{
			unk_0xF3148AAF69AF9CBC(&Global_2265, 16);
		}
		Global_14394.f_1 = 1;
		if (func_130(0))
		{
			func_127(0);
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

void func_127(int iParam0)
{
	if (Global_14552)
	{
		func_129(0, 0);
	}
	if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2265, 16);
	}
	if (unk_0xE0A43912E369FFA5())
	{
		unk_0x9E95048D8C96C1EA(0);
	}
	Global_15693 = 5;
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2264, 30);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2264, 30);
	}
	if (!func_128())
	{
		Global_14394.f_1 = 3;
	}
}

int func_128()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_129(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_130(0))
		{
			Global_14552 = 1;
			if (bParam1)
			{
				unk_0x2B4380FBF49E1B71(&Global_14331);
			}
			Global_14322 = { Global_14340[Global_14339 /*3*/] };
			unk_0xB30AC22133A50DEE(Global_14322);
		}
	}
	else if (Global_14552 == 1)
	{
		Global_14552 = 0;
		Global_14322 = { Global_14347[Global_14339 /*3*/] };
		if (bParam1)
		{
			unk_0xB30AC22133A50DEE(Global_14331);
		}
		else
		{
			unk_0xB30AC22133A50DEE(Global_14322);
		}
	}
}

int func_130(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14394.f_1 > 3)
		{
			if (unk_0x236D8AD7EE179F46(Global_2264, 14))
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
	if (unk_0x968BF1C2C695B61A(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14394.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_131()
{
	if (Global_14394.f_1 == 9 || Global_14394.f_1 == 10)
	{
		Global_15746 = 0;
		Global_15742 = 1;
	}
}

void func_132(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xA01309A4CCECDBBE(unk_0x1329891157A54C63());
		unk_0x334B670F8C2E871D(unk_0x1329891157A54C63(), 1);
		unk_0x302581C7F63C3DAF(unk_0x1329891157A54C63(), 1);
		func_138(1);
		unk_0x314942833427CBA3();
		unk_0xDF12B8D7DEE2158B();
		if (Global_14394.f_1 > 3)
		{
			if (unk_0xE0A43912E369FFA5())
			{
				unk_0x9E95048D8C96C1EA(0);
			}
			if (!func_128())
			{
				Global_14394.f_1 = 3;
			}
			Global_15693 = 5;
		}
		func_137(1, iParam3, iParam2, 0);
		Global_55408 = 1;
		Global_67713 = 1;
		Global_69018 = 1;
	}
	else
	{
		func_138(0);
		unk_0x6246FB0D4AFA25CC();
		Global_55408 = 0;
		if (bParam1)
		{
			unk_0x5A01C8176534B756();
		}
		unk_0x334B670F8C2E871D(unk_0x1329891157A54C63(), 0);
		unk_0x302581C7F63C3DAF(unk_0x1329891157A54C63(), 0);
		func_137(0, iParam3, iParam2, 0);
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()) && !func_133(unk_0x1329891157A54C63()))
		{
			unk_0x210A4A0B257F8433(unk_0x81873881071CD9FE(), 0);
		}
		Global_69018 = 0;
	}
}

int func_133(int iParam0)
{
	if (func_135(iParam0, 0))
	{
		return 1;
	}
	if (func_134())
	{
		if (iParam0 == unk_0x1329891157A54C63())
		{
			return 1;
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_2414506[iParam0 /*255*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_134()
{
	return unk_0x236D8AD7EE179F46(Global_2359301, 3);
}

bool func_135(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1329891157A54C63())
	{
		bVar0 = func_136(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1585045[iParam0 /*400*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xA89AE5060232966A(iParam0))
		{
			bVar0 = unk_0xCCFDB2B968281FE8(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_136(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_21();
	}
	if (Global_1315870[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312723[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_137(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x913B1C01C1BA6C6F())
	{
		if (unk_0x5FB5CC66497A76D2() != iParam0 && uParam2)
		{
			unk_0xCC69602716E0A325(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_138(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2264, 13);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2264, 13);
	}
}

void func_139(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&iLocal_42, 2);
		if (!unk_0x1C6DF6AD69BE853E())
		{
			if (iParam1 == 1)
			{
				unk_0xCF2F32222FF93448(0.2f);
			}
			else
			{
				unk_0xCF2F32222FF93448(0.075f);
			}
		}
	}
	else
	{
		if (unk_0x236D8AD7EE179F46(iLocal_42, 2) || iParam2)
		{
			if (!unk_0x1C6DF6AD69BE853E())
			{
				unk_0xCF2F32222FF93448(1f);
			}
		}
		unk_0xC69E84EBBD7166E6(&iLocal_42, 2);
	}
}

void func_140(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
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
	
	if (((unk_0xC584A413BCB2AA39() || unk_0xC11AD1609CFCCCE1()) || unk_0x29AFA2493D7C23D0()) || unk_0x3A93B922D5E9060F())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_147(uParam0))
	{
		return;
	}
	unk_0x92260590AAFDE170();
	unk_0x7F3AA121397DEEC9(iParam2);
	if (!func_146(uParam0->f_1, 256) || (func_146(uParam0->f_1, 8192) && unk_0x34C16363C251572E(2)))
	{
		unk_0x21ED0FC9B5CC748B(*uParam0, "SET_CLEAR_SPACE");
		unk_0x518198639630AE08(iParam1);
		unk_0xBA9BA6181F2B6111();
		unk_0x21ED0FC9B5CC748B(*uParam0, "SET_MAX_WIDTH");
		unk_0x518198639630AE08(iParam5);
		unk_0xBA9BA6181F2B6111();
		unk_0x21ED0FC9B5CC748B(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xBA9BA6181F2B6111();
		if (unk_0x913B1C01C1BA6C6F())
		{
			unk_0x21ED0FC9B5CC748B(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			unk_0x75A2A42ADE12FD0E(func_146(uParam0->f_1, 4096));
			unk_0xBA9BA6181F2B6111();
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
					bVar4 = unk_0x3D6272A8E1C449E9(2);
					break;
				
				case 2:
					bVar4 = !unk_0x3D6272A8E1C449E9(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (unk_0x21ED0FC9B5CC748B(*uParam0, "SET_DATA_SLOT"))
				{
					unk_0xBD0C54D89298454E(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						uVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						uVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = unk_0x236D8AD7EE179F46(uParam0->f_2[iVar6 /*15*/].f_13, iVar7);
						if (!unk_0x236D8AD7EE179F46(uParam0->f_2[iVar6 /*15*/].f_12, iVar7))
						{
							uVar3 = unk_0x2576ED87DB06844F(uVar0, uVar1, bVar2);
						}
						else
						{
							uVar3 = unk_0x2ABE9D86108310D2(uVar0, uVar1, bVar2);
						}
						if (!unk_0xB318FDA0D1ABDB20(uVar3))
						{
							func_145(sVar3);
						}
						iVar7++;
					}
					if (!unk_0xB318FDA0D1ABDB20(uParam0->f_2[iVar6 /*15*/]))
					{
						func_144(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0x913B1C01C1BA6C6F())
					{
						if (func_146(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								unk_0x75A2A42ADE12FD0E(true);
								unk_0xBD0C54D89298454E(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								unk_0x75A2A42ADE12FD0E(false);
								unk_0xBD0C54D89298454E(-1);
							}
						}
					}
					unk_0xBA9BA6181F2B6111();
				}
			}
			iVar6++;
		}
		fVar8 = func_143(bParam4, func_143(func_146(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0x21ED0FC9B5CC748B(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x518198639630AE08(fVar8);
		unk_0xBA9BA6181F2B6111();
		unk_0x21ED0FC9B5CC748B(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0x518198639630AE08(0f);
		unk_0x518198639630AE08(0f);
		unk_0x518198639630AE08(0f);
		unk_0x518198639630AE08(80f);
		unk_0xBA9BA6181F2B6111();
		func_142(&(uParam0->f_1), 256);
		func_141(&(uParam0->f_1), 128);
	}
	unk_0x88188CE25DF2572C(*uParam0, 255, 255, 255, 0, 0);
}

void func_141(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_142(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_143(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_144(char* sParam0)
{
	unk_0x6CE839BF5D87A428(sParam0);
	unk_0xC3822F70D0E7940B();
}

void func_145(var uParam0)
{
	unk_0x1F704997074F9C16(uParam0);
}

bool func_146(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_147(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0xCC8E3BAC62A29F42(*uParam0))
		{
			func_142(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

void func_148()
{
	iLocal_42 = 0;
	iLocal_43 = 0;
	func_132(0, 1, 1, 0);
	func_126(1);
}

void func_149(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		func_150(0, 0);
		unk_0x45D2AAD93E9AC4B3("DeathFailOut", 0, 0);
		unk_0xF3148AAF69AF9CBC(&iLocal_42, 1);
		func_139(1, 2, 0);
		unk_0xC3F7C79408CAADF5(2);
	}
	else
	{
		if (unk_0x236D8AD7EE179F46(iLocal_42, 1) || iParam1)
		{
			unk_0x7D123BA6B5E0F9B9("DeathFailOut");
			func_139(0, 2, 1);
			unk_0xC3F7C79408CAADF5(0);
		}
		unk_0xC69E84EBBD7166E6(&iLocal_42, 1);
	}
}

void func_150(int iParam0, int iParam1)
{
	char* sVar0;
	
	switch (func_151())
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
		if (!unk_0x236D8AD7EE179F46(iLocal_42, 0) || iParam1)
		{
			unk_0x45D2AAD93E9AC4B3(sVar0, 0, 0);
			unk_0xF3148AAF69AF9CBC(&iLocal_42, 0);
			func_139(1, 1, 0);
			unk_0xC3F7C79408CAADF5(1);
		}
	}
	else
	{
		if (unk_0x236D8AD7EE179F46(iLocal_42, 0) || iParam1)
		{
			unk_0x7D123BA6B5E0F9B9(sVar0);
			func_139(0, 1, 1);
			unk_0xC3F7C79408CAADF5(0);
		}
		unk_0xC69E84EBBD7166E6(&iLocal_42, 0);
	}
}

int func_151()
{
	func_152();
	return Global_98931.f_1750.f_539.f_3549;
}

void func_152()
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (func_156(Global_98931.f_1750.f_539.f_3549) != unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()))
		{
			iVar0 = func_155(unk_0x81873881071CD9FE());
			if (func_154(iVar0) && (!func_153(14) || Global_97883))
			{
				if (Global_98931.f_1750.f_539.f_3549 != iVar0 && func_154(Global_98931.f_1750.f_539.f_3549))
				{
					Global_98931.f_1750.f_539.f_3550 = Global_98931.f_1750.f_539.f_3549;
				}
				Global_98931.f_1750.f_539.f_3551 = iVar0;
				Global_98931.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_98931.f_1750.f_539.f_3549 != 145)
			{
				Global_98931.f_1750.f_539.f_3551 = Global_98931.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_98931.f_1750.f_539.f_3549 = 145;
}

bool func_153(int iParam0)
{
	return Global_35443 == iParam0;
}

bool func_154(int iParam0)
{
	return iParam0 < 3;
}

int func_155(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		iVar1 = unk_0x14B7103DBD149FFE(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_156(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_156(int iParam0)
{
	if (func_154(iParam0))
	{
		return Global_98931.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_157(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, var uParam5, int iParam6)
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			unk_0xF2A6D4C99549CA85("DEATH_SCENE");
			unk_0x35D7948F61AA3FEC(-1, "ScreenFlash", "WastedSounds", 1);
			func_10(&(uParam0->f_1));
			func_148();
			func_162(uParam1, (0.15f * 0.075f), 0.5f);
			unk_0xCFB703A5F752D1C3(1);
			break;
		
		case 1:
			if (func_124() || unk_0x29AFA2493D7C23D0())
			{
				*uParam0 = 2;
			}
			if (!func_339(uParam0->f_4, 4))
			{
				if (unk_0x9D2B95F4020E5347("OFFMISSION_WASTED", 0))
				{
					unk_0x35D7948F61AA3FEC(-1, "Bed", "WastedSounds", 1);
					func_311(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(unk_0x83666F9FB8FEBD4B()) > (1500f * 0.2f))
			{
				if (!func_339(uParam0->f_4, 2))
				{
					unk_0x35D7948F61AA3FEC(-1, "TextHit", "WastedSounds", 1);
					func_311(&(uParam0->f_4), 2);
				}
				func_159(uParam2, uParam1, sParam3, sParam4, uParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072, 0);
			}
			break;
		
		case 2:
			if (func_159(uParam2, uParam1, sParam3, sParam4, uParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072, 1))
			{
				func_150(0, 1);
				func_149(0, 1);
				func_148();
				if (*uParam5)
				{
					unk_0x710A34BE76734D58(1);
				}
				else if (!uParam0->f_5)
				{
					func_158(0);
				}
				unk_0xCFB703A5F752D1C3(0);
				unk_0x051313E56EE6229D(0);
				*uParam0 = 3;
			}
			break;
		
		case 3:
			if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
			{
				unk_0x3937B60F47657E06(1);
				func_150(0, 1);
				func_149(0, 1);
				unk_0x0C22E352114F699C("DEATH_SCENE");
				unk_0xCFB703A5F752D1C3(0);
				return 1;
			}
			break;
		
		case 4:
			unk_0xCFB703A5F752D1C3(0);
			return 1;
			break;
	}
	return 0;
}

void func_158(bool bParam0)
{
	if ((Global_35443 == 9 || Global_35443 == 10) || Global_35443 == 5)
	{
		Global_97582 = bParam0;
		if (bParam0)
		{
		}
	}
	else
	{
		if (bParam0)
		{
		}
		Global_97582 = 0;
	}
}

int func_159(var uParam0, var uParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)
{
	switch (*uParam1)
	{
		case 0:
			if (!unk_0x29AFA2493D7C23D0() || unk_0xC584A413BCB2AA39())
			{
				unk_0x3B283FEBA87FFBEB(2500);
				unk_0xF4753D4FA13FFE6E();
			}
			if (bParam9)
			{
				unk_0xCFB703A5F752D1C3(1);
			}
			unk_0xCF2F32222FF93448(0.2f);
			if (func_146(iParam5, 4))
			{
				if (unk_0x9D2B95F4020E5347("generic_failed", 0))
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
			unk_0x21ED0FC9B5CC748B(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			unk_0x6CE839BF5D87A428("STRING");
			unk_0xDB5ED960DFB0E4DF(6);
			unk_0x072D7B028D6C7A05(sParam2);
			unk_0xC3822F70D0E7940B();
			func_144(sParam3);
			unk_0xBD0C54D89298454E(100);
			unk_0x75A2A42ADE12FD0E(true);
			unk_0x723E3684EF582590();
			if (func_146(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0x21ED0FC9B5CC748B(*uParam0, "TRANSITION_UP");
					unk_0x518198639630AE08(uParam1->f_134);
					unk_0xBA9BA6181F2B6111();
					uParam1->f_136 = 1;
				}
			}
			if (!func_146(iParam5, 1))
			{
				unk_0xCCA97479FF65110F(0);
			}
			func_241(&(uParam1->f_10), 0, 1, 1, 1);
			func_240(&(uParam1->f_10), "IB_RETRY", 2, 201, 1, 1, 0);
			func_240(&(uParam1->f_10), "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_146(iParam5, 4))
			{
				unk_0x35D7948F61AA3FEC(-1, "ScreenFlash", "MissionFailedSounds", 1);
			}
			if (func_146(iParam5, 8))
			{
				switch (func_151())
				{
					case 0:
						unk_0x45D2AAD93E9AC4B3("MinigameEndMichael", 500, 0);
						break;
					
					case 1:
						unk_0x45D2AAD93E9AC4B3("MinigameEndFranklin", 500, 0);
						break;
					
					case 2:
						unk_0x45D2AAD93E9AC4B3("MinigameEndTrevor", 500, 0);
						break;
					}
			}
			if (!func_3(&(uParam1->f_1)))
			{
				func_340(&(uParam1->f_1));
			}
			if (func_146(iParam5, 2))
			{
				if (!func_3(&(uParam1->f_4)))
				{
					func_340(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		
		case 2:
			unk_0x92260590AAFDE170();
			if (func_146(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0x21ED0FC9B5CC748B(*uParam0, "TRANSITION_UP");
					unk_0x518198639630AE08(uParam1->f_134);
					unk_0xBA9BA6181F2B6111();
					uParam1->f_136 = 1;
				}
			}
			unk_0x7F3AA121397DEEC9(iParam6);
			func_161(uParam0, 0, 0);
			if (!func_146(iParam5, 16) && (func_5(&(uParam1->f_1)) >= uParam1->f_135 || unk_0x29AFA2493D7C23D0()))
			{
				func_140(&(uParam1->f_10), 1128792064, iParam6, bParam7, 1, 1065353216);
				unk_0xA5E37DF3441A38D9();
				if (unk_0xB93E207B3C65F1B1(2, 201))
				{
					uParam1->f_138 = 1;
					unk_0x35D7948F61AA3FEC(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_146(iParam5, 1))
					{
						unk_0x92D4C839E5FC6EE2(0);
					}
					func_160(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
				else if (unk_0xB93E207B3C65F1B1(2, 202))
				{
					uParam1->f_138 = 0;
					unk_0x35D7948F61AA3FEC(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_146(iParam5, 1))
					{
						unk_0x92D4C839E5FC6EE2(0);
					}
					func_160(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			if (func_146(iParam5, 2))
			{
				if (func_5(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_138 = 0;
					unk_0x35D7948F61AA3FEC(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_146(iParam5, 1))
					{
						unk_0x92D4C839E5FC6EE2(0);
					}
					func_160(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		
		case 3:
			func_161(uParam0, 0, 0);
			unk_0xCF2F32222FF93448(1f);
			if (uParam1->f_138 || !((unk_0xD994929E13CC1ED5("stunt_plane_races", unk_0x11CA2334E341B424()) || unk_0xD994929E13CC1ED5("pilot_school", unk_0x11CA2334E341B424())) || (unk_0xD994929E13CC1ED5("bj", unk_0x11CA2334E341B424()) && unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))))
			{
				unk_0xAE2B1C30F8A0B67C(2500);
			}
			if (func_146(iParam5, 64) && uParam1->f_138)
			{
				unk_0x3B283FEBA87FFBEB(500);
			}
			func_11(&(uParam1->f_4));
			if (bParam9)
			{
				unk_0xCFB703A5F752D1C3(0);
			}
			*uParam1 = 4;
			break;
		
		case 4:
			if (func_5(&(uParam1->f_4)) <= 0.1f)
			{
				func_161(uParam0, 0, 0);
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

void func_160(var uParam0)
{
	if (*uParam0 != 0)
	{
		unk_0x4B6F01DE8CCE643E(uParam0);
		*uParam0 = 0;
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
}

int func_161(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_3(&(uParam0->f_2)))
	{
		func_11(&(uParam0->f_2));
	}
	unk_0xC9A352663D97EFC3(14);
	if (!bParam2)
	{
		unk_0x88188CE25DF2572C(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		unk_0x88188CE25DF2572C(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (unk_0xCAD9951C953F5B2D(2, 201))
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

void func_162(var uParam0, float fParam1, float fParam2)
{
	if (func_3(&(uParam0->f_1)))
	{
		func_4(&(uParam0->f_1));
	}
	if (func_3(&(uParam0->f_4)))
	{
		func_4(&(uParam0->f_4));
	}
	func_160(&(uParam0->f_10));
	uParam0->f_134 = fParam1;
	uParam0->f_135 = fParam2;
	uParam0->f_137 = 1;
	uParam0->f_136 = 0;
	*uParam0 = 0;
}

void func_163(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		func_78(uParam0, iVar0);
		iVar0++;
	}
}

void func_164(int iParam0, bool bParam1)
{
	switch (iLocal_2018)
	{
		case 0:
			func_25();
			func_181();
			func_177();
			iLocal_2018 = 1;
			break;
		
		case 1:
			if (func_176())
			{
				iLocal_2018 = 2;
			}
			break;
		
		case 2:
			func_165(iParam0);
			break;
		
		case 3:
			if (bParam1)
			{
				iLocal_2018 = 0;
			}
			break;
	}
}

void func_165(int iParam0)
{
	switch (Local_50.f_10)
	{
		case 3:
			func_175(iParam0);
			func_174(iParam0);
			break;
		
		case 0:
			func_173(iParam0);
			func_172(iParam0);
			break;
		
		case 1:
			func_171(iParam0);
			func_169(iParam0);
			break;
		
		case 2:
			func_168(iParam0);
			func_167(iParam0);
			break;
		
		case 4:
			func_166(iParam0);
			break;
	}
}

void func_166(int iParam0)
{
	if (iParam0 == 5)
	{
		if (!func_339(uLocal_2109, 1))
		{
			func_311(&uLocal_2109, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!func_339(uLocal_2109, 2))
		{
			func_311(&uLocal_2109, 2);
		}
	}
}

void func_167(int iParam0)
{
	if (iParam0 >= 4)
	{
		if (!unk_0x86CCCD2FAE9D5E65(uLocal_2087[0]) && !func_339(uLocal_2099, 1))
		{
			uLocal_2087[0] = unk_0xE00F8DEA9778FC87(joaat("hauler"), -449.6041f, -2271.693f, 6.6086f, 267.5199f, 1, 1);
			uLocal_2087[1] = unk_0xE00F8DEA9778FC87(joaat("tanker"), -449.6041f, -2271.693f, 6.6086f, 267.5199f, 1, 1);
			unk_0x7F5AD17F7679391B(uLocal_2087[0], uLocal_2087[1], 1065353216);
			uLocal_2093[0] = unk_0x4D135F3066A9BF9C(uLocal_2087[0], 4, joaat("s_m_m_dockwork_01"), -1, 1, 1);
			func_311(&uLocal_2099, 1);
		}
		if (unk_0x0F7866B4F5BE7CD4("SPR_Fluff_01"))
		{
			if (!unk_0x930F8FBB8E9537CC(uLocal_2087[0]) && !unk_0x930F8FBB8E9537CC(uLocal_2093[0]))
			{
				if (unk_0xFA1212DE7C455679(uLocal_2093[0], -235832601) == 1)
				{
				}
				else
				{
					unk_0x5E88D7F9F4A81079(uLocal_2093[0], uLocal_2087[0], "SPR_Fluff_01", 786469, 0, 8, -1, unk_0x5855978686FD0737(uLocal_2087[0]), 0, 1073741824);
				}
			}
		}
	}
}

void func_168(int iParam0)
{
	if (iParam0 == 4)
	{
		if (!func_339(uLocal_2109, 1))
		{
			func_311(&uLocal_2109, 1);
		}
	}
	if (iParam0 == 8)
	{
		if (!func_339(uLocal_2109, 2))
		{
			func_311(&uLocal_2109, 2);
		}
	}
}

void func_169(int iParam0)
{
	if (iParam0 >= 1)
	{
		if (!unk_0x86CCCD2FAE9D5E65(uLocal_2087[0]))
		{
			if (!func_339(uLocal_2099, 1))
			{
				if (func_170(&iLocal_2081))
				{
					uLocal_2087[0] = unk_0xE00F8DEA9778FC87(joaat("sanchez"), -2586.901f, 386.4225f, 208.0505f, 349.0836f, 1, 1);
					func_311(&uLocal_2099, 1);
				}
			}
		}
		if (unk_0x86CCCD2FAE9D5E65(uLocal_2087[0]))
		{
			if (!unk_0x86CCCD2FAE9D5E65(uLocal_2093[0]))
			{
				if (!func_339(uLocal_2099, 2))
				{
					uLocal_2093[0] = unk_0x4D135F3066A9BF9C(uLocal_2087[0], 4, joaat("a_m_y_motox_01"), -1, 1, 1);
					func_311(&uLocal_2099, 2);
				}
			}
		}
		if (!unk_0x86CCCD2FAE9D5E65(uLocal_2087[0]) && !unk_0x86CCCD2FAE9D5E65(uLocal_2093[0]))
		{
			if (!unk_0x930F8FBB8E9537CC(uLocal_2087[0]) && !unk_0x930F8FBB8E9537CC(uLocal_2093[0]))
			{
				if (!unk_0x515B65C19A5CA9B1(uLocal_2087[0], -2530.873f, 608.701f, 238.9111f, 3f, 3f, 3f, 0, 1, 0))
				{
					if (unk_0xFA1212DE7C455679(uLocal_2093[0], -1817882002) == 1)
					{
					}
					else
					{
						unk_0x1ABA8A919187E144(uLocal_2093[0], uLocal_2087[0], -2530.873f, 608.701f, 238.9111f, unk_0x5855978686FD0737(uLocal_2087[0]), 0, 0, 262144, -1f, -1f);
					}
				}
			}
		}
	}
	if (iParam0 >= 1)
	{
		if (!unk_0x86CCCD2FAE9D5E65(uLocal_2087[1]))
		{
			if (!func_339(uLocal_2100, 1))
			{
				if (func_170(&iLocal_2081))
				{
					uLocal_2087[1] = unk_0xE00F8DEA9778FC87(joaat("sanchez"), -2582.93f, 384.918f, 208.5764f, 336.8248f, 1, 1);
					func_311(&uLocal_2100, 1);
				}
			}
		}
		if (unk_0x86CCCD2FAE9D5E65(uLocal_2087[1]))
		{
			if (!unk_0x86CCCD2FAE9D5E65(uLocal_2093[1]))
			{
				if (!func_339(uLocal_2100, 2))
				{
					uLocal_2093[1] = unk_0x4D135F3066A9BF9C(uLocal_2087[1], 4, joaat("a_m_y_motox_01"), -1, 1, 1);
					func_311(&uLocal_2100, 2);
				}
			}
		}
		if (!unk_0x86CCCD2FAE9D5E65(uLocal_2087[1]) && !unk_0x86CCCD2FAE9D5E65(uLocal_2093[1]))
		{
			if (!unk_0x930F8FBB8E9537CC(uLocal_2087[1]) && !unk_0x930F8FBB8E9537CC(uLocal_2093[1]))
			{
				if (!unk_0x515B65C19A5CA9B1(uLocal_2087[1], -2527.712f, 609.6833f, 239.2568f, 3f, 3f, 3f, 0, 1, 0))
				{
					if (unk_0xFA1212DE7C455679(uLocal_2093[1], -1817882002) == 1)
					{
					}
					else
					{
						unk_0x1ABA8A919187E144(uLocal_2093[1], uLocal_2087[1], -2527.712f, 609.6833f, 239.2568f, unk_0x5855978686FD0737(uLocal_2087[1]), 0, 0, 262144, -1f, -1f);
					}
				}
			}
		}
	}
}

int func_170(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] != 0)
		{
			if (!unk_0x33ACB874CECA2D4B((*iParam0)[iVar0]))
			{
				if (!unk_0x33ACB874CECA2D4B((*iParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_171(int iParam0)
{
	if (iParam0 == 9)
	{
		if (!func_339(uLocal_2109, 1))
		{
			func_311(&uLocal_2109, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!func_339(uLocal_2109, 2))
		{
			func_311(&uLocal_2109, 2);
		}
	}
}

void func_172(int iParam0)
{
	if (iParam0 == 6)
	{
		if (!unk_0x86CCCD2FAE9D5E65(uLocal_2087[0]) && !func_339(uLocal_2099, 1))
		{
			uLocal_2087[0] = unk_0xE00F8DEA9778FC87(joaat("jetmax"), -1429.102f, 2602.645f, -1.0709f, 85.2614f, 1, 1);
			uLocal_2093[0] = unk_0x4D135F3066A9BF9C(uLocal_2087[0], 4, joaat("s_m_m_dockwork_01"), -1, 1, 1);
			if (!unk_0x930F8FBB8E9537CC(uLocal_2087[0]) && !unk_0x930F8FBB8E9537CC(uLocal_2093[0]))
			{
				if (!unk_0x515B65C19A5CA9B1(uLocal_2087[0], -1552.281f, 2641.609f, -0.8283f, 3f, 3f, 3f, 0, 1, 0))
				{
					if (unk_0xFA1212DE7C455679(uLocal_2093[0], -1273030092) == 1)
					{
					}
					else
					{
						unk_0x73FD8D43B37C0615(uLocal_2093[0], uLocal_2087[0], -1552.281f, 2641.609f, -0.8283f, 4, unk_0x5855978686FD0737(uLocal_2087[0]), 262144, 3f, -1f, 1);
					}
				}
			}
			func_311(&uLocal_2099, 1);
		}
	}
	else if (iParam0 == 12)
	{
		if (func_339(uLocal_2099, 1))
		{
			if (!unk_0x930F8FBB8E9537CC(uLocal_2093[0]))
			{
				unk_0xF210D34D7F7152ED(&(uLocal_2093[0]));
			}
			if (!unk_0x930F8FBB8E9537CC(uLocal_2087[0]))
			{
				unk_0x5D00E836B6BE8693(&(uLocal_2087[0]));
			}
		}
	}
}

void func_173(int iParam0)
{
	if (iParam0 == 7)
	{
		if (!func_339(uLocal_2109, 1))
		{
			func_311(&uLocal_2109, 1);
		}
	}
	if (iParam0 == 11)
	{
		if (!func_339(uLocal_2109, 2))
		{
			func_311(&uLocal_2109, 2);
		}
	}
}

void func_174(int iParam0)
{
	if (!func_339(uLocal_2099, 1))
	{
		if (iParam0 < 3)
		{
			if (unk_0x498998F33897432E(101, "SPRStuntAF"))
			{
				unk_0x77428ED9B41A3CAF(-943.8105f, -3173.692f, 12.9445f);
				if (!unk_0x86CCCD2FAE9D5E65(uLocal_2087[0]))
				{
					uLocal_2087[0] = unk_0xE00F8DEA9778FC87(joaat("jet"), -943.8105f, -3173.692f, 12.9445f, 60.537f, 1, 1);
					unk_0x5CC9D6711FE01F0D(uLocal_2087[0]);
					unk_0x686D6CDC14C4BA6C(uLocal_2087[0], 1, 1);
					if (Local_50.f_0 == 0)
					{
						unk_0x50638C188ABB218B(uLocal_2087[0]);
					}
					uLocal_2093[0] = unk_0x4D135F3066A9BF9C(uLocal_2087[0], 4, joaat("s_m_m_highsec_01"), -1, 1, 1);
				}
				if (!unk_0x930F8FBB8E9537CC(uLocal_2087[0]))
				{
					if (unk_0x515B65C19A5CA9B1(uLocal_2087[0], -943.8105f, -3173.692f, 12.9445f, 20f, 20f, 20f, 0, 1, 0))
					{
						if (!unk_0xE20321A2D7F8960C(uLocal_2087[0]))
						{
							unk_0xC8F62804B10A6701(uLocal_2087[0], 101, "SPRStuntAF", 1);
						}
					}
					else if (!unk_0xE20321A2D7F8960C(uLocal_2087[0]))
					{
						if (!unk_0x930F8FBB8E9537CC(uLocal_2093[0]))
						{
							if (!unk_0xFA1212DE7C455679(uLocal_2093[0], -1817882002) == 1)
							{
								unk_0x1ABA8A919187E144(uLocal_2093[0], uLocal_2087[0], -6793.876f, -557.0385f, 781.0172f, 50f, 0, joaat("jet"), 262144, -1f, -1f);
							}
						}
					}
				}
			}
		}
		else if (!unk_0x930F8FBB8E9537CC(uLocal_2087[0]))
		{
			if (unk_0xE20321A2D7F8960C(uLocal_2087[0]))
			{
				unk_0x05ACEF4F060B9B4E(uLocal_2087[0]);
			}
			else
			{
				unk_0x5D00E836B6BE8693(&(uLocal_2087[0]));
				func_311(&uLocal_2099, 1);
			}
		}
	}
	else if (!unk_0x930F8FBB8E9537CC(uLocal_2087[0]))
	{
		unk_0x77428ED9B41A3CAF(unk_0xB6AE0DAE06D56288(uLocal_2087[0], 1));
	}
}

void func_175(int iParam0)
{
	if (iParam0 == 6)
	{
		if (!func_339(uLocal_2109, 1))
		{
			func_311(&uLocal_2109, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!func_339(uLocal_2109, 2))
		{
			func_311(&uLocal_2109, 2);
		}
	}
}

int func_176()
{
	switch (Local_50.f_10)
	{
		case 3:
			if (func_170(&iLocal_2081) && unk_0x498998F33897432E(101, "SPRStuntAF"))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 0:
			if (func_170(&iLocal_2081))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (func_170(&iLocal_2081))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_170(&iLocal_2081) && unk_0x0F7866B4F5BE7CD4("SPR_Fluff_01"))
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

void func_177()
{
	switch (Local_50.f_10)
	{
		case 3:
			func_179(&iLocal_2081, joaat("jet"));
			func_179(&iLocal_2081, joaat("s_m_m_highsec_01"));
			unk_0x995DCDA796A47049(101, "SPRStuntAF");
			break;
		
		case 0:
			func_179(&iLocal_2081, joaat("jetmax"));
			func_179(&iLocal_2081, joaat("s_m_m_dockwork_01"));
			break;
		
		case 1:
			func_179(&iLocal_2081, joaat("sanchez"));
			func_179(&iLocal_2081, joaat("a_m_y_motox_01"));
			break;
		
		case 2:
			func_179(&iLocal_2081, joaat("hauler"));
			func_179(&iLocal_2081, joaat("tanker"));
			func_179(&iLocal_2081, joaat("s_m_m_dockwork_01"));
			unk_0x2D148CBB17A2B0C7("SPR_Fluff_01");
			break;
		
		case 4:
			break;
	}
	func_178(&iLocal_2081);
}

void func_178(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] != 0)
		{
			unk_0x32A12757CBF48A33((*iParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_179(int iParam0, int iParam1)
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
	iVar1 = func_180(iParam0);
	if (iVar1 < 0 || iVar1 >= *iParam0)
	{
		return 0;
	}
	(*iParam0)[iVar1] = iParam1;
	return 1;
}

int func_180(var uParam0)
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

void func_181()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_339(uLocal_2109, iVar0))
		{
			func_337(&uLocal_2109, iVar0);
		}
		iVar0++;
	}
}

void func_182(var uParam0, int iParam1)
{
	func_183(uParam0, iParam1, 0);
}

void func_183(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x1C6DF6AD69BE853E())
	{
		if (unk_0x236D8AD7EE179F46(Global_2451473.f_4406, 26))
		{
			return;
		}
	}
	if (unk_0xCA020F3125A93EB9())
	{
		unk_0x59E3A6BEFC421137(iParam2);
		unk_0x7D123BA6B5E0F9B9("FocusIn");
		unk_0x0C22E352114F699C("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x45D2AAD93E9AC4B3("FocusOut", 0, 0);
			unk_0x35D7948F61AA3FEC(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x0D7089406F6A5C6E(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x4357449749A521B1(sVar0))
	{
		if (!unk_0x1C6DF6AD69BE853E())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x4357449749A521B1(uParam0->f_3))
	{
		if (func_184(uParam0->f_3))
		{
			unk_0xB8BB626315D394F5(1);
		}
	}
	if (!unk_0x4357449749A521B1(sVar0))
	{
		if (func_184(sVar0))
		{
			unk_0xB8BB626315D394F5(1);
		}
	}
}

bool func_184(char* sParam0)
{
	unk_0xF7F787102FC9BCAC(sParam0);
	return unk_0xEF468B98099969A5(0);
}

void func_185(var uParam0)
{
	float fVar0;
	
	if (uParam0->f_358[0 /*189*/].f_11 >= (uParam0->f_12 - 2))
	{
		fVar0 = unk_0x2A488C176D52CCA5(uParam0->f_27[(uParam0->f_12 - 2) /*10*/], func_186());
		if (!unk_0xA15F4145FFFDF88C(uLocal_2331))
		{
			if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), func_186()) <= ((fVar0 * 1.5f) * (fVar0 * 1.5f)))
			{
				uLocal_2331 = unk_0x7D4E8B75392AD6EC(func_186(), uParam0->f_27[(uParam0->f_12 - 1) /*10*/] - func_186(), 2000f, 12, 127);
			}
		}
		else if (!unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), func_186()) <= ((fVar0 * 2f) * (fVar0 * 2f)))
		{
			func_231();
		}
	}
}

Vector3 func_186()
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

void func_187(var uParam0)
{
	if (func_213())
	{
		if (!Local_2318.f_0)
		{
			Local_2318.f_0 = 1;
			Local_2318.f_1 = 1;
		}
		else
		{
			Local_2318.f_1 = 0;
		}
	}
	else if (func_212())
	{
		if (!Local_2318.f_1 || func_211() >= 1f)
		{
			if (Local_2318.f_0)
			{
				Local_2318.f_0 = 0;
			}
		}
	}
	if (func_212())
	{
		func_210();
	}
	else
	{
		func_209();
	}
	if (Local_2318.f_0)
	{
		if (!func_208(Local_2318.f_2) && !func_206(Local_2318.f_2))
		{
			func_189(&uLocal_2291, Local_2318.f_2);
		}
		else
		{
			if (unk_0x42E36F2D658EB2FF(Local_2318.f_6))
			{
				unk_0x35B958B469415A23(Local_2318.f_6, 0);
			}
			if (func_206(Local_2318.f_2))
			{
				Local_2318.f_2 = { func_188(uParam0) };
			}
			func_182(&uLocal_2291, 0);
			Local_2318.f_0 = 0;
		}
	}
	else if (unk_0x42E36F2D658EB2FF(Local_2318.f_6))
	{
		unk_0x35B958B469415A23(Local_2318.f_6, 0);
	}
	else
	{
		if (func_206(Local_2318.f_2))
		{
			Local_2318.f_2 = { func_188(uParam0) };
		}
		func_182(&uLocal_2291, 0);
		Local_2318.f_0 = 0;
	}
}

Vector3 func_188(var uParam0)
{
	if (uParam0->f_358[0 /*189*/].f_11 < (Local_50.f_11 - 1))
	{
		return uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/];
	}
	return 0f, 0f, 0f;
}

void func_189(var uParam0, struct<3> Param1)
{
	func_190(uParam0, Param1, 0, 0, 1, 1, 1);
}

void func_190(var uParam0, struct<3> Param1, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
	{
		func_183(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_191(uParam0, Param1, iParam4, iParam5, bParam6, iParam7, bParam8);
}

void func_191(var uParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6, var uParam7, bool bParam8)
{
	int iVar0;
	
	if (uParam0->f_1 && unk_0xCA020F3125A93EB9())
	{
		if (unk_0x48E480685981C7D4() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = uParam4;
	if (unk_0x4357449749A521B1(iVar0))
	{
		if (!unk_0x1C6DF6AD69BE853E())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_184(iVar0))
	{
		func_205();
	}
	if (!unk_0xCA020F3125A93EB9())
	{
		if (func_200(uParam0, bParam6, bParam8, 0))
		{
			func_199(uParam0, Param1, iParam5);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_196(iVar0))
			{
				if ((unk_0x4357449749A521B1(uParam0->f_3) && !unk_0x4357449749A521B1(iVar0)) && unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
				{
					if ((unk_0x547A2AA158CA2804(Param1, 1f) && !unk_0xA83A609D74168B30()) && uParam7)
					{
						if (!func_184(iVar0))
						{
							func_281(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xD994929E13CC1ED5("CMN_HINT", iVar0))
							{
								func_195(1);
							}
						}
					}
				}
			}
		}
		else if (func_196(iVar0))
		{
			if (unk_0x4357449749A521B1(uParam0->f_3) && !unk_0x4357449749A521B1(iVar0))
			{
				if ((unk_0x547A2AA158CA2804(Param1, 1f) && !unk_0xA83A609D74168B30()) && uParam7)
				{
					if (!func_184(iVar0))
					{
						func_281(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (unk_0xD994929E13CC1ED5("CMN_HINT", iVar0))
						{
							func_195(1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!unk_0x4357449749A521B1(iVar0))
		{
			if (func_184(iVar0) && unk_0xA83A609D74168B30())
			{
				unk_0xB8BB626315D394F5(1);
			}
		}
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
		{
			if (unk_0x042BDEC3DAAA336A(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7FCE6803A3D23268(3) == 3 || unk_0x7FCE6803A3D23268(3) == 4)
				{
					func_183(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xF8F0C55E476A5A81(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7FCE6803A3D23268(6) == 3 || unk_0x7FCE6803A3D23268(6) == 4)
				{
					func_183(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x25B75802E65C5545(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7FCE6803A3D23268(4) == 3 || unk_0x7FCE6803A3D23268(4) == 4)
				{
					func_183(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x8B66743C57DF7AAA(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7FCE6803A3D23268(5) == 3 || unk_0x7FCE6803A3D23268(5) == 4)
				{
					func_183(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xA5E670E54C660F1A(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7FCE6803A3D23268(2) == 3 || unk_0x7FCE6803A3D23268(2) == 4)
				{
					func_183(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xF18003343B2E8EE9() == 3 || unk_0xF18003343B2E8EE9() == 4)
			{
				func_183(uParam0, iVar0, 1);
			}
		}
		if (!func_200(uParam0, bParam6, bParam8, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_194(uParam0))
			{
				func_192(uParam0);
			}
		}
	}
}

void func_192(var uParam0)
{
	if (func_193(unk_0x81873881071CD9FE()))
	{
		unk_0xF64D185C5B88AF31(unk_0x81873881071CD9FE());
	}
	if (unk_0xCA020F3125A93EB9())
	{
		unk_0x0D7089406F6A5C6E(true);
		unk_0x59E3A6BEFC421137(0);
		unk_0x0C22E352114F699C("HINT_CAM_SCENE");
		unk_0x7D123BA6B5E0F9B9("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x45D2AAD93E9AC4B3("FocusOut", 0, 0);
			unk_0x35D7948F61AA3FEC(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_193(int iParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		if (unk_0xCF8AA94BAD0F766A(iParam0))
		{
			if (unk_0x7404950238A154C2(unk_0x522C7043B2B961F9(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0xCF0C46D719D5302C(iParam0))
		{
			if (!unk_0x5FEB513A4402FD59(unk_0x8F1CCE5AF629C4D3(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x9F76B19299294A0E(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_194(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x48E480685981C7D4()
		{
			return 1;
		}
	}
	return 0;
}

int func_195(bool bParam0)
{
	switch (Global_35443)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_98931.f_8663.f_100++;
			}
			return Global_98931.f_8663.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_98931.f_8663.f_101++;
			}
			return Global_98931.f_8663.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_98931.f_8663.f_102++;
			}
			return Global_98931.f_8663.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_196(char* sParam0)
{
	if (!func_197(1, 1, 0))
	{
		if ((!unk_0xB318FDA0D1ABDB20(sParam0) && func_184(sParam0)) || func_184("CMN_HINT"))
		{
			unk_0xB8BB626315D394F5(1);
		}
		return 0;
	}
	switch (Global_35443)
	{
		case 0:
		case 3:
			if (func_195(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_195(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_195(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_197(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xF33755A765033580())
	{
		return 0;
	}
	if (func_130(0))
	{
		return 0;
	}
	if (func_198())
	{
		return 0;
	}
	if (unk_0x18138B3C6FD07449())
	{
		return 0;
	}
	if (Global_67710)
	{
		return 0;
	}
	if (unk_0x968BF1C2C695B61A(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_52584)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
		{
			if (unk_0x042BDEC3DAAA336A(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7FCE6803A3D23268(3) == 3 || unk_0x7FCE6803A3D23268(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xF8F0C55E476A5A81(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7FCE6803A3D23268(6) == 3 || unk_0x7FCE6803A3D23268(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x25B75802E65C5545(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7FCE6803A3D23268(4) == 3 || unk_0x7FCE6803A3D23268(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8B66743C57DF7AAA(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7FCE6803A3D23268(5) == 3 || unk_0x7FCE6803A3D23268(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xA5E670E54C660F1A(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7FCE6803A3D23268(2) == 3 || unk_0x7FCE6803A3D23268(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xF18003343B2E8EE9() == 3 || unk_0xF18003343B2E8EE9() == 4)
			{
				return 0;
			}
			if (unk_0xA1E64A079AAE6506())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_198()
{
	return unk_0x48E480685981C7D4() <= Global_17238.f_5630 + 100;
}

void func_199(var uParam0, struct<3> Param1, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x0D7089406F6A5C6E(false);
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
	unk_0xAAA62646D54D95EF(Param1, -1, iVar0, iVar1, iParam4);
	iVar2 = 2048;
	iVar3 = 3;
	unk_0x71D4A7422520E90F(unk_0x81873881071CD9FE(), Param1, -1, iVar2, iVar3);
	unk_0x45D2AAD93E9AC4B3("FocusIn", 0, 0);
	unk_0xF2A6D4C99549CA85("HINT_CAM_SCENE");
	unk_0x35D7948F61AA3FEC(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x48E480685981C7D4();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_200(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x48E480685981C7D4() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
				{
					if (func_204(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x48E480685981C7D4();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_203(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x48E480685981C7D4();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_203(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x48E480685981C7D4();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_204(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x48E480685981C7D4();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_194(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x48E480685981C7D4() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
					{
						if (!func_204(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x48E480685981C7D4();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_203(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x48E480685981C7D4();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_203(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x48E480685981C7D4();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_204(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x48E480685981C7D4();
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
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
				{
					if (!func_204(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_203(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_203(bParam1, bParam2, bParam3) || unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1) || unk_0x0F722384DC347983(unk_0x81873881071CD9FE(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_204(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x48E480685981C7D4() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
					{
						if (func_202(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_201(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1) || func_201(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1) || unk_0x0F722384DC347983(unk_0x81873881071CD9FE(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_202(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_194(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_197(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_205();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_201(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_197(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		if (!unk_0x4E8E6ABD17B372AE(unk_0x1329891157A54C63()))
		{
			unk_0xDE1125A413AF241C(0, 140, 1);
			unk_0xDE1125A413AF241C(0, 80, 1);
			if (unk_0x938788609A5D0621(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_202(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_197(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		unk_0xDE1125A413AF241C(0, 80, 1);
		if (unk_0x2AE1029043B25E5E())
		{
			if (unk_0x938788609A5D0621(0, 80))
			{
				unk_0x0D7089406F6A5C6E(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_203(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_197(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		if (!unk_0x4E8E6ABD17B372AE(unk_0x1329891157A54C63()))
		{
			unk_0xDE1125A413AF241C(0, 140, 1);
			unk_0xDE1125A413AF241C(0, 80, 1);
			if (unk_0x70A79CA636F98FA5(0, 80) && unk_0x48E480685981C7D4() > Global_97)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_204(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_197(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		unk_0xDE1125A413AF241C(0, 80, 1);
		if (unk_0x2AE1029043B25E5E())
		{
			if (unk_0x70A79CA636F98FA5(0, 80) && unk_0x48E480685981C7D4() > Global_97)
			{
				unk_0x0D7089406F6A5C6E(false);
				return 1;
			}
		}
	}
	return 0;
}

void func_205()
{
	unk_0xF3148AAF69AF9CBC(&Global_2265, 4);
}

int func_206(struct<3> Param0)
{
	float fVar0;
	
	fVar0 = unk_0xA04824262F150982(unk_0x81873881071CD9FE());
	if (unk_0xB7A628320EFF8E47(Param0, func_207(unk_0x1329891157A54C63())) < (150f + (fVar0 * fVar0)))
	{
		return 1;
	}
	return 0;
}

Vector3 func_207(int iParam0)
{
	return unk_0xB6AE0DAE06D56288(unk_0xE495E987CB2BE7EF(iParam0), 0);
}

int func_208(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_209()
{
	Local_2318.f_5 = 0f;
}

void func_210()
{
	Local_2318.f_5 = (Local_2318.f_5 + unk_0x8D51D24D214E2FF2());
}

float func_211()
{
	return Local_2318.f_5;
}

bool func_212()
{
	return unk_0xB93E207B3C65F1B1(0, 80);
}

bool func_213()
{
	return unk_0xCAD9951C953F5B2D(0, 80);
}

void func_214(struct<3> Param0)
{
	func_182(&uLocal_2291, 0);
	Local_2318.f_2 = { Param0 };
}

void func_215(int iParam0, int iParam1)
{
	Global_90848.f_7 = iParam0;
	Global_90848.f_8 = iParam1;
}

void func_216(int iParam0)
{
	Global_69280 = iParam0;
	Global_69281 = iParam0;
}

int func_217(var uParam0, bool bParam1, bool bParam2)
{
	unk_0xE6A21302467570AE(0);
	switch (iLocal_2017)
	{
		case 0:
			iLocal_528 = 0;
			Local_2283 = { func_186() };
			Local_2286 = { func_230() };
			fLocal_2289 = func_229();
			unk_0x3BF4F473786B0150(0);
			unk_0xB8BB626315D394F5(1);
			unk_0xD1C83BD797927DD5();
			iLocal_2017 = 1;
			break;
		
		case 1:
			if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
			{
				if (func_151() == 0)
				{
					unk_0x45D2AAD93E9AC4B3("MinigameEndMichael", 0, 0);
				}
				else if (func_151() == 1)
				{
					unk_0x45D2AAD93E9AC4B3("MinigameEndFranklin", 0, 0);
				}
				else if (func_151() == 2)
				{
					unk_0x45D2AAD93E9AC4B3("MinigameEndTrevor", 0, 0);
				}
				uLocal_2075 = unk_0x6112CFE839591737(26379945, Local_2283, Local_2286, fLocal_2289, 1, 2);
				unk_0xFEBF3DDE5E4DC5C5(1, 0, 3000, 1, 0, 0);
				if (bParam2)
				{
					unk_0x4BC806FF702341FC(uLocal_2075, "HAND_SHAKE", 0.07f);
				}
				if (unk_0x7404950238A154C2(uParam0->f_358[0 /*189*/].f_9, 0) && unk_0x0752B24E8A13FF0E(uParam0->f_358[0 /*189*/].f_9))
				{
					unk_0x73FD8D43B37C0615(unk_0x81873881071CD9FE(), uParam0->f_358[0 /*189*/].f_9, Local_2283.f_0, Local_2283.f_1, (Local_2283.f_2 + 15f), 4, unk_0xA04824262F150982(uParam0->f_358[0 /*189*/].f_9), 262144, 10f, 10f, 1);
				}
				unk_0xF47648DDA1E045CE(uLocal_2075, unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1));
				iLocal_2017 = 2;
			}
			break;
		
		case 2:
			unk_0x7DAE81B6513B31D7(uLocal_2075);
			func_228(uLocal_2075);
			func_10(&uLocal_2071);
			iLocal_2017 = 3;
			break;
		
		case 3:
			if (func_227(&uLocal_2071, fLocal_2290))
			{
				func_10(&uLocal_2071);
				func_228(uLocal_2075);
				iLocal_2017 = 4;
			}
			break;
		
		case 4:
			if (bParam1)
			{
				if (unk_0x331E7ACCFD0869AD(uParam0->f_358[0 /*189*/].f_9) && unk_0x0752B24E8A13FF0E(uParam0->f_358[0 /*189*/].f_9))
				{
					Local_2280 = { unk_0xB6AE0DAE06D56288(uParam0->f_358[0 /*189*/].f_9, 1) };
					func_10(&uLocal_2071);
				}
				func_224(uLocal_2075, Local_2280);
			}
			if (func_107(&uLocal_2071) >= 1f)
			{
				iLocal_2017 = 5;
			}
			break;
		
		case 5:
			func_11(&uLocal_2071);
			if (unk_0x42E36F2D658EB2FF(uLocal_2074))
			{
				unk_0x35B958B469415A23(uLocal_2074, 0);
			}
			unk_0x45D2AAD93E9AC4B3("MinigameTransitionIn", 0, 1);
			unk_0x19E32192B402B7F9(uLocal_2075, 0);
			Local_2283 = { unk_0xFFD5BB58282E438D(uLocal_2075) };
			Local_2286 = { unk_0xD2A638CF3BBA7D92(uLocal_2075, 2) };
			uLocal_2074 = unk_0x6112CFE839591737(26379945, Local_2283.f_0, Local_2283.f_1, (Local_2283.f_2 + 1000f), 90f, Local_2286.f_1, Local_2286.f_2, fLocal_2289, 0, 2);
			unk_0x2CD388BEA8B3C5E8(uLocal_2074, uLocal_2075, 500, 1, 1);
			unk_0x35D7948F61AA3FEC(-1, "QUIT_WHOOSH", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_2017 = 6;
			break;
		
		case 6:
			if (!unk_0xEBA04D3308C6781F(uLocal_2074) && !unk_0xEBA04D3308C6781F(uLocal_2075))
			{
				if (uParam0->f_358[0 /*189*/].f_13 <= Local_50.f_106[Local_50.f_10])
				{
					unk_0x35D7948F61AA3FEC(-1, "MEDAL_GOLD", "HUD_AWARDS", 1);
				}
				else if (uParam0->f_358[0 /*189*/].f_13 <= (((Local_50.f_106[Local_50.f_10] - Local_50.f_112[Local_50.f_10]) / 2f) + Local_50.f_112[Local_50.f_10]))
				{
					unk_0x35D7948F61AA3FEC(-1, "MEDAL_SILVER", "HUD_AWARDS", 1);
				}
				else if (uParam0->f_358[0 /*189*/].f_13 <= Local_50.f_112[Local_50.f_10])
				{
					unk_0x35D7948F61AA3FEC(-1, "MEDAL_BRONZE", "HUD_AWARDS", 1);
				}
				else
				{
					func_223(1);
				}
				iLocal_2017 = 7;
			}
			break;
		
		case 7:
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				unk_0x49F00D2F32CBC5B5(unk_0x1329891157A54C63());
			}
			func_221(uParam0);
			func_66(&(Local_50.f_321), 1);
			func_11(&uLocal_2071);
			if (unk_0x7404950238A154C2(uParam0->f_358[0 /*189*/].f_9, 0))
			{
				sLocal_2275 = unk_0x85C45E5EB4792D9B();
				unk_0x89540DDA99D7346F(uParam0->f_358[0 /*189*/].f_9, 0);
			}
			iLocal_2017 = 8;
			break;
		
		case 8:
			if (func_220(uParam0))
			{
				iLocal_2017 = 9;
			}
			break;
		
		case 9:
			unk_0x45D2AAD93E9AC4B3("MinigameTransitionOut", 0, 0);
			func_219(&uLocal_2076);
			func_215(1, 0);
			func_218(uParam0);
			func_16();
			func_215(0, 0);
			iLocal_2017 = 0;
			return 0;
			break;
	}
	func_409(uParam0, 0);
	return 1;
}

int func_218(var uParam0)
{
	if (uParam0->f_358[0 /*189*/].f_13 <= Local_50.f_106[Local_50.f_10])
	{
		unk_0x02A6B267064771B1(&(Local_50.f_24[Local_50.f_10 /*8*/]));
		return unk_0x5AC82E478A8B4FCC("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 109, "HUD_MED_UNLKED");
	}
	else if (uParam0->f_358[0 /*189*/].f_13 <= (((Local_50.f_106[Local_50.f_10] - Local_50.f_112[Local_50.f_10]) / 2f) + Local_50.f_112[Local_50.f_10]))
	{
		unk_0x02A6B267064771B1(&(Local_50.f_24[Local_50.f_10 /*8*/]));
		return unk_0x5AC82E478A8B4FCC("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 108, "HUD_MED_UNLKED");
	}
	else if (uParam0->f_358[0 /*189*/].f_13 <= Local_50.f_112[Local_50.f_10])
	{
		unk_0x02A6B267064771B1(&(Local_50.f_24[Local_50.f_10 /*8*/]));
		return unk_0x5AC82E478A8B4FCC("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 107, "HUD_MED_UNLKED");
	}
	return -1;
}

void func_219(var uParam0)
{
	unk_0x4B6F01DE8CCE643E(uParam0);
	*uParam0 = 0;
}

int func_220(var uParam0)
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
	if (!iLocal_2036)
	{
		if (fVar0 > 1f)
		{
			iLocal_2036 = 1;
		}
	}
	if (!iLocal_2037)
	{
		if (fVar0 > 4.25f)
		{
			unk_0x21ED0FC9B5CC748B(uParam0->f_17, "TRANSITION_OUT");
			unk_0x518198639630AE08(0.5f);
			unk_0xBA9BA6181F2B6111();
			iLocal_2037 = 1;
		}
	}
	unk_0x88188CE25DF2572C(uParam0->f_17, 255, 255, 255, 255, 0);
	if (fVar0 > 5f)
	{
		func_4(&(uParam0->f_17.f_2));
		iLocal_2036 = 0;
		iLocal_2037 = 0;
		return 1;
	}
	return 0;
}

void func_221(var uParam0)
{
	char* sVar0;
	
	sVar0 = func_222(2);
	unk_0x21ED0FC9B5CC748B(uParam0->f_17, "RESET_MOVIE");
	unk_0xBA9BA6181F2B6111();
	unk_0x21ED0FC9B5CC748B(uParam0->f_17, sVar0);
	unk_0x6CE839BF5D87A428("STRING");
	unk_0x072D7B028D6C7A05("SPR_UI_PASS");
	unk_0xC3822F70D0E7940B();
	unk_0x6CE839BF5D87A428(&(Local_50.f_24[Local_50.f_10 /*8*/]));
	unk_0xC3822F70D0E7940B();
	unk_0x518198639630AE08(100f);
	unk_0x75A2A42ADE12FD0E(true);
	unk_0xBA9BA6181F2B6111();
	uParam0->f_17.f_1 = 5000;
	func_4(&(uParam0->f_17.f_2));
	iLocal_2036 = 0;
	iLocal_2037 = 0;
}

char* func_222(int iParam0)
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

void func_223(bool bParam0)
{
	char* sVar0;
	
	unk_0x342437AFD16ED2D2(0);
	switch (func_151())
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
	unk_0x4A4ECF9F1FE34021(sVar0);
}

void func_224(var uParam0, struct<3> Param1)
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
	
	if (!unk_0x42E36F2D658EB2FF(uParam0))
	{
		return;
	}
	if (!unk_0x6B6362BE9BFD1ACA(uParam0))
	{
		return;
	}
	Var1 = { unk_0xD2A638CF3BBA7D92(uParam0, 2) };
	Var4 = { unk_0xFFD5BB58282E438D(uParam0) };
	Var7 = { func_8(Var1.f_0, Var1.f_1, (Var1.f_2 + 90f)) };
	Var10 = { Param1 - Var4 };
	Var10 = { func_96(Var10) };
	fVar13 = unk_0x43A2E703A9A654DB((Param1.f_2 - Var4.f_2), unk_0x0D6E79537424BACE(Param1, Var4, 0));
	fVar14 = unk_0x097CA9356FED843D((Param1.f_0 - Var4.f_0), (Param1.f_1 - Var4.f_1));
	fVar14 = func_226(fVar14, -180f, 180f);
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
	if ((bLocal_2279 && fVar13 > Var1.f_0) || (!bLocal_2279 && fVar13 < Var1.f_0))
	{
		if (fVar0 > 0f)
		{
		}
		else if (fVar0 < 0f)
		{
		}
		fLocal_2276 = (fLocal_2276 * 0.9f);
		Var1.f_0 = func_225(Var1.f_0, fVar13, fLocal_2276);
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
	if ((bLocal_2278 && (Var1.f_2 - fVar14) < 0f) || (!bLocal_2278 && (Var1.f_2 - fVar14) > 0f))
	{
		if (!bLocal_2278 && (Var1.f_2 - fVar14) > 0f)
		{
		}
		else if (bLocal_2278 && (Var1.f_2 - fVar14) < 0f)
		{
		}
		fLocal_2277 = (fLocal_2277 * 0.9f);
		Var1.f_2 = func_225(Var1.f_2, fVar14, fLocal_2277);
	}
	unk_0x19F9FD4DDAD99CB2(uParam0, Var1, 2);
}

float func_225(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

float func_226(float fParam0, float fParam1, float fParam2)
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

int func_227(var uParam0, float fParam1)
{
	if (func_2(uParam0, fParam1))
	{
		func_4(uParam0);
		return 1;
	}
	return 0;
}

void func_228(var uParam0)
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
	
	unk_0x7C6E2E604A4A540E(unk_0x81873881071CD9FE(), &Var0, &uVar18, &uVar18, &Var3);
	Var15 = { unk_0xD2A638CF3BBA7D92(uParam0, 2) };
	Var12 = { unk_0xFFD5BB58282E438D(uParam0) };
	Var6 = { func_8((Var15.f_0 + 90f), Var15.f_1, Var15.f_2) };
	Var9 = { func_8(Var15.f_0, Var15.f_1, (Var15.f_2 + 90f)) };
	fLocal_2276 = 0.2f;
	fLocal_2277 = 0.5f;
	Var21 = { unk_0xFFD5BB58282E438D(uParam0) - Var3 };
	Var24 = { Var3 + FtoV(func_95(Var21, Var0)) * Var0 };
	if (Var24.f_2 > Var12.f_2)
	{
		bLocal_2279 = true;
	}
	else
	{
		bLocal_2279 = false;
	}
	fVar27 = func_95(Var24, Var6);
	fVar28 = func_95(Var24, Var9);
	if (fVar27 < 0f)
	{
		bLocal_2278 = true;
	}
	else
	{
		bLocal_2278 = false;
	}
}

float func_229()
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

Vector3 func_230()
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

void func_231()
{
	unk_0x5AD73EF670D05F7D();
	if (unk_0xA15F4145FFFDF88C(uLocal_2331))
	{
		unk_0xE112003C3132147E(uLocal_2331);
	}
}

void func_232()
{
	unk_0xF4753D4FA13FFE6E();
	func_233();
}

void func_233()
{
	Global_17099.f_134 = 1;
}

void func_234(int iParam0)
{
	if (Global_35443 == 9 || Global_35443 == 10)
	{
		Global_97583 = iParam0;
	}
	else
	{
		Global_97583 = 0;
	}
}

void func_235(bool bParam0)
{
	unk_0x0D7089406F6A5C6E(!bParam0);
}

void func_236()
{
	func_237();
	unk_0x0D7089406F6A5C6E(true);
}

void func_237()
{
	Local_2318.f_0 = 0;
	Local_2318.f_1 = 0;
	Local_2318.f_2 = { 0f, 0f, 0f };
	Local_2318.f_6 = 0;
	Local_2318.f_5 = 0f;
}

bool func_238(char* sParam0, int iParam1, char* sParam2)
{
	unk_0x35C3DC3A3BE08CC1(sParam0);
	if (iParam1 == 1)
	{
		unk_0x072D7B028D6C7A05(sParam2);
	}
	return unk_0x8BF06EFC37AF94F0();
}

void func_239(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_142(&(uParam0->f_1), 16);
	}
	else
	{
		func_141(&(uParam0->f_1), 16);
	}
}

int func_240(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_2[iVar1 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_241(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0xFC3CB60815797646("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_142(&(uParam0->f_1), 32);
	}
	if (unk_0xCC8E3BAC62A29F42(*uParam0))
	{
		func_142(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0x305E44AF394FBF91(*uParam0, 1);
		}
	}
	if (unk_0x913B1C01C1BA6C6F())
	{
		if (bParam3)
		{
			func_142(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_142(&(uParam0->f_1), 8192);
	}
}

void func_242(var uParam0)
{
	func_243(uParam0);
	unk_0xC1B1E9A034A63A62(0);
	func_215(1, 0);
	func_16();
}

void func_243(var uParam0)
{
	func_280(&(uParam0->f_1871));
	func_258(&(uParam0->f_1871.f_741));
	func_244(&(uParam0->f_1871));
}

void func_244(var uParam0)
{
	func_257(&(uParam0->f_316[0 /*2*/]), 254f, 74f, 1);
	func_257(&(uParam0->f_316[1 /*2*/]), (257f + func_256(0.0047f, 1280, 1)), 127f, 1);
	func_257(&(uParam0->f_316[2 /*2*/]), (257f + func_256(0.0047f, 1280, 1)), 297f, 1);
	func_257(&(uParam0->f_316[3 /*2*/]), (257f + func_256(0.0047f, 1280, 1)), 324f, 1);
	func_257(&(uParam0->f_316[4 /*2*/]), (257f + func_256(0.0047f, 1280, 1)), 351f, 1);
	func_257(&(uParam0->f_316[5 /*2*/]), (257f + func_256(0.0047f, 1280, 1)), 378f, 1);
	func_257(&(uParam0->f_316[6 /*2*/]), (257f + func_256(0.0047f, 1280, 1)), 405f, 1);
	func_257(&(uParam0->f_316[11 /*2*/]), 257f, 297f, 1);
	func_257(&(uParam0->f_316[12 /*2*/]), 257f, 324f, 1);
	func_257(&(uParam0->f_316[13 /*2*/]), 257f, 351f, 1);
	func_257(&(uParam0->f_316[14 /*2*/]), 257f, 378f, 1);
	func_257(&(uParam0->f_316[15 /*2*/]), 257f, 405f, 1);
	func_257(&(uParam0->f_316[18 /*2*/]), 298f, 567f, 1);
	func_257(&(uParam0->f_316[17 /*2*/]), 384f, 567f, 1);
	func_257(&(uParam0->f_316[16 /*2*/]), 470f, 567f, 1);
	func_253(uParam0[0 /*9*/], 208f, 55f, 864f, 570f, 1);
	func_252(uParam0[0 /*9*/], 0, 0, 0, 255);
	func_253(uParam0[2 /*9*/], 384f, 224f, 256f, 256f, 0);
	func_252(uParam0[2 /*9*/], 255, 255, 255, 255);
	func_253(uParam0[3 /*9*/], 495f, 306f, 32f, 32f, 0);
	func_252(uParam0[3 /*9*/], 255, 255, 255, 255);
	func_253(uParam0[6 /*9*/], 258.5f, 482.5f, 80f, 80f, 1);
	func_252(uParam0[6 /*9*/], 255, 255, 255, 255);
	func_253(uParam0[5 /*9*/], 344f, 482.5f, 80f, 80f, 1);
	func_252(uParam0[5 /*9*/], 255, 255, 255, 255);
	func_253(uParam0[4 /*9*/], 429.5f, 482.5f, 80f, 80f, 1);
	func_252(uParam0[4 /*9*/], 255, 255, 255, 255);
	func_247(&(uParam0->f_420[1 /*8*/]), 257f, 119f, 254f, 5f, 1);
	func_246(&(uParam0->f_420[1 /*8*/]), 70, 70, 130, 255);
	func_247(&(uParam0->f_420[0 /*8*/]), 257f, 124f, 254f, 25f, 1);
	func_246(&(uParam0->f_420[0 /*8*/]), 255, 255, 255, 255);
	func_247(&(uParam0->f_420[2 /*8*/]), 257f, 159f, 254f, 133f, 1);
	func_245(&(uParam0->f_420[2 /*8*/]), 117, 1);
	func_247(&(uParam0->f_420[3 /*8*/]), 257f, 294f, 254f, 25f, 1);
	func_245(&(uParam0->f_420[3 /*8*/]), 117, 1);
	func_247(&(uParam0->f_420[4 /*8*/]), 257f, 321f, 254f, 25f, 1);
	func_245(&(uParam0->f_420[4 /*8*/]), 117, 1);
	func_247(&(uParam0->f_420[5 /*8*/]), 257f, 348f, 254f, 25f, 1);
	func_245(&(uParam0->f_420[5 /*8*/]), 117, 1);
	func_247(&(uParam0->f_420[6 /*8*/]), 257f, 375f, 254f, 25f, 1);
	func_245(&(uParam0->f_420[6 /*8*/]), 117, 1);
	func_247(&(uParam0->f_420[7 /*8*/]), 257f, 402f, 254f, 25f, 1);
	func_245(&(uParam0->f_420[7 /*8*/]), 117, 1);
	func_247(&(uParam0->f_420[8 /*8*/]), 257f, 429f, 254f, 52f, 1);
	func_245(&(uParam0->f_420[8 /*8*/]), 117, 1);
	func_247(&(uParam0->f_420[11 /*8*/]), 257f, 483f, 83f, 84f, 1);
	func_245(&(uParam0->f_420[11 /*8*/]), 117, 1);
	func_247(&(uParam0->f_420[12 /*8*/]), 342f, 483f, 84f, 84f, 1);
	func_245(&(uParam0->f_420[12 /*8*/]), 117, 1);
	func_247(&(uParam0->f_420[13 /*8*/]), 428f, 483f, 83f, 84f, 1);
	func_245(&(uParam0->f_420[13 /*8*/]), 117, 1);
	func_247(&(uParam0->f_420[14 /*8*/]), 428f, 564f, 83f, 25f, 1);
	func_245(&(uParam0->f_420[14 /*8*/]), 107, 1);
	func_247(&(uParam0->f_420[15 /*8*/]), 342f, 564f, 84f, 25f, 1);
	func_245(&(uParam0->f_420[15 /*8*/]), 108, 1);
	func_247(&(uParam0->f_420[16 /*8*/]), 257f, 564f, 83f, 25f, 1);
	func_245(&(uParam0->f_420[16 /*8*/]), 109, 1);
	uParam0->f_986 = 1;
}

void func_245(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0xDFC297A2CE47E495(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_4 = uVar0;
	uParam0->f_5 = uVar1;
	uParam0->f_6 = uVar2;
	if (bParam2)
	{
		uParam0->f_7 = uVar3;
	}
}

void func_246(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	uParam0->f_4 = iParam1;
	uParam0->f_5 = iParam2;
	uParam0->f_6 = iParam3;
	uParam0->f_7 = iParam4;
}

void func_247(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, bool bParam5)
{
	func_251(uParam0, fParam3, fParam4);
	func_248(uParam0, fParam1, fParam2, bParam5);
}

void func_248(var uParam0, float fParam1, float fParam2, bool bParam3)
{
	*uParam0 = func_250(fParam1, 1280);
	uParam0->f_1 = func_249(fParam2, 720);
	if (bParam3)
	{
		*uParam0 = (*uParam0 + (uParam0->f_2 / 2f));
		uParam0->f_1 = (uParam0->f_1 + (uParam0->f_3 / 2f));
	}
}

float func_249(float fParam0, int iParam1)
{
	var uVar0;
	
	if (iParam1 == 0)
	{
		unk_0xF8BA71207732310A(&uVar0, &iParam1);
	}
	return (fParam0 / IntToFloat(iParam1));
}

float func_250(float fParam0, int iParam1)
{
	var uVar0;
	
	if (iParam1 == 0)
	{
		unk_0xF8BA71207732310A(&iParam1, &uVar0);
	}
	return (fParam0 / IntToFloat(iParam1));
}

void func_251(var uParam0, float fParam1, float fParam2)
{
	uParam0->f_2 = func_250(fParam1, 1280);
	uParam0->f_3 = func_249(fParam2, 720);
}

void func_252(float fParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	fParam0->f_4 = iParam1;
	fParam0->f_5 = iParam2;
	fParam0->f_6 = iParam3;
	fParam0->f_7 = iParam4;
}

void func_253(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, bool bParam5)
{
	func_255(fParam0, fParam3, fParam4);
	func_254(fParam0, fParam1, fParam2, bParam5);
}

void func_254(var uParam0, float fParam1, float fParam2, bool bParam3)
{
	*uParam0 = func_250(fParam1, 1280);
	uParam0->f_1 = func_249(fParam2, 720);
	if (bParam3)
	{
		*uParam0 = (*uParam0 + (uParam0->f_2 / 2f));
		uParam0->f_1 = (uParam0->f_1 + (uParam0->f_3 / 2f));
	}
}

void func_255(var uParam0, float fParam1, float fParam2)
{
	uParam0->f_2 = func_250(fParam1, 1280);
	uParam0->f_3 = func_249(fParam2, 720);
}

float func_256(float fParam0, int iParam1, bool bParam2)
{
	var uVar0;
	float fVar1;
	
	if (iParam1 == 0)
	{
		unk_0xF8BA71207732310A(&iParam1, &uVar0);
	}
	fVar1 = (fParam0 * IntToFloat(iParam1));
	if (bParam2)
	{
		return unk_0xBBDA792448DB5A89(unk_0xF2DB717A73826179(fVar1));
	}
	return fVar1;
}

void func_257(var uParam0, float fParam1, float fParam2, bool bParam3)
{
	*uParam0 = func_250(fParam1, 1280);
	uParam0->f_1 = func_249(fParam2, 720);
	if (!bParam3)
	{
	}
}

void func_258(var uParam0)
{
	func_279(uParam0, 0);
	func_278(&(uParam0->f_11), 0);
	func_277(&(uParam0->f_66), 0);
	func_276(&(uParam0->f_77), 0);
	func_275(&(uParam0->f_33), 0);
	func_274(&(uParam0->f_44), 0);
	func_273(&(uParam0->f_55), 0);
	func_272(&(uParam0->f_143), 0);
	func_271(&(uParam0->f_22), 0);
	func_270(&(uParam0->f_154), 0);
	func_269(&(uParam0->f_88), 0, 0);
	func_268(&(uParam0->f_99), 0, 5);
	func_267(&(uParam0->f_110), 0);
	func_266(&(uParam0->f_121), 0);
	func_265(&(uParam0->f_132), 0);
	func_264(&(uParam0->f_165), 0);
	func_263(&(uParam0->f_176), 0);
	func_262(&(uParam0->f_187), 0);
	func_261(&(uParam0->f_198), 0);
	func_260(&(uParam0->f_209), 0);
	func_259(&(uParam0->f_220), 0);
}

void func_259(var uParam0, int iParam1)
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

void func_260(var uParam0, int iParam1)
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

void func_261(var uParam0, int iParam1)
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

void func_262(var uParam0, int iParam1)
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

void func_263(var uParam0, int iParam1)
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

void func_264(var uParam0, int iParam1)
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

void func_265(var uParam0, int iParam1)
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

void func_266(var uParam0, int iParam1)
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

void func_267(var uParam0, int iParam1)
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

void func_268(var uParam0, int iParam1, int iParam2)
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

void func_269(var uParam0, int iParam1, int iParam2)
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

void func_270(var uParam0, int iParam1)
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

void func_271(var uParam0, int iParam1)
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

void func_272(var uParam0, int iParam1)
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

void func_273(var uParam0, int iParam1)
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

void func_274(var uParam0, int iParam1)
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

void func_275(var uParam0, int iParam1)
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

void func_276(var uParam0, int iParam1)
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

void func_277(var uParam0, int iParam1)
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

void func_278(var uParam0, int iParam1)
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

void func_279(var uParam0, int iParam1)
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

void func_280(var uParam0)
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

void func_281(char* sParam0, int iParam1)
{
	unk_0x522099B37CAE9E12(sParam0);
	unk_0xC592EBAF1D879BDC(0, 0, 1, iParam1);
}

int func_282(var uParam0)
{
	func_286();
	switch (iLocal_2330)
	{
		case 0:
			func_10(uParam0);
			func_285(&uLocal_2325, 3);
			iLocal_2330 = 1;
			break;
		
		case 1:
			if (func_2(uParam0, 1f))
			{
				func_283(&uLocal_2325, 1, 0, 1, 3, 1, 0);
				iLocal_2330 = 2;
			}
			break;
		
		case 2:
			if (func_283(&uLocal_2325, 0, 0, 1, 3, 1, 0))
			{
				return 0;
			}
			break;
			return 1;
	}
	return 1;
}

int func_283(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
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
	unk_0x7F3AA121397DEEC9(1);
	unk_0xD45896EF84BD41C8(*uParam0, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 100, 0);
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
	if (!func_339(uParam0->f_1, 8))
	{
		if (iVar4 >= -3 && !func_339(uParam0->f_1, 1))
		{
			func_311(&(uParam0->f_1), 1);
			unk_0x35D7948F61AA3FEC(-1, sVar0, sVar2, 1);
			func_285(uParam0, iVar4);
		}
		else if (iVar4 >= -2 && !func_339(uParam0->f_1, 2))
		{
			func_311(&(uParam0->f_1), 2);
			unk_0x35D7948F61AA3FEC(-1, sVar0, sVar2, 1);
			func_285(uParam0, iVar4);
		}
		else if (iVar4 >= -1 && !func_339(uParam0->f_1, 4))
		{
			func_311(&(uParam0->f_1), 4);
			unk_0x35D7948F61AA3FEC(-1, sVar0, sVar2, 1);
			func_285(uParam0, iVar4);
		}
		else if (iVar4 >= -1 && !func_339(uParam0->f_1, 16))
		{
			if (unk_0xB9AA84B14E04BC20((func_5(&(uParam0->f_2)) - IntToFloat(iParam4))) < 0.65f)
			{
				if (bParam5 || bParam6)
				{
					func_311(&(uParam0->f_1), 16);
					unk_0x35D7948F61AA3FEC(-1, sVar1, sVar2, 1);
				}
			}
		}
		else if (iVar4 >= 0 && !func_339(uParam0->f_1, 8))
		{
			if (!bParam5 && !bParam6)
			{
				unk_0x35D7948F61AA3FEC(-1, sVar1, sVar2, 1);
			}
			func_311(&(uParam0->f_1), 8);
			unk_0xDFC297A2CE47E495(18, &iVar6, &iVar7, &iVar8, &uVar9);
			unk_0x21ED0FC9B5CC748B(*uParam0, "SET_MESSAGE");
			func_144("CNTDWN_GO");
			unk_0xBD0C54D89298454E(iVar6);
			unk_0xBD0C54D89298454E(iVar7);
			unk_0xBD0C54D89298454E(iVar8);
			unk_0x75A2A42ADE12FD0E(true);
			unk_0xBA9BA6181F2B6111();
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
	if ((iParam2 && func_284()) || iVar3 > 5)
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

int func_284()
{
	if (unk_0xDB10DED5ABC4AA20())
	{
		return 0;
	}
	if (unk_0xCAD9951C953F5B2D(0, 18) || unk_0xCAD9951C953F5B2D(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_285(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	unk_0xDFC297A2CE47E495(12, &iVar0, &iVar1, &iVar2, &uVar3);
	unk_0x21ED0FC9B5CC748B(*uParam0, "SET_MESSAGE");
	unk_0xDB5ED960DFB0E4DF(-1);
	unk_0x6CE839BF5D87A428("NUMBER");
	unk_0x6D55FF05D62B91BC(unk_0x013F97B9D88B92CA(iParam1));
	unk_0xC3822F70D0E7940B();
	unk_0xBD0C54D89298454E(iVar0);
	unk_0xBD0C54D89298454E(iVar1);
	unk_0xBD0C54D89298454E(iVar2);
	unk_0x75A2A42ADE12FD0E(true);
	unk_0xBA9BA6181F2B6111();
}

void func_286()
{
	struct<6> Var0;
	int iVar6;
	
	iVar6 = Global_97961;
	func_287(Var0, 0, 0, 0, 0, iVar6);
}

void func_287(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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
	
	if (Global_69274 != 6)
	{
		if (Global_69276 == -1)
		{
			if (func_301(1, Param0))
			{
				if (Global_69277 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_28 > fVar0)
				{
					Global_69276 = unk_0x48E480685981C7D4();
					Local_29 = { unk_0x56A912E9B1F3FCBD(15) };
					fLocal_28 = 0f;
				}
				else
				{
					fLocal_28 = (fLocal_28 + unk_0x8D51D24D214E2FF2());
				}
			}
			else
			{
				fLocal_28 = 0f;
			}
		}
		else
		{
			if (!func_301(0, Param0))
			{
				Global_69276 = (unk_0x48E480685981C7D4() - 9000);
			}
			unk_0xC9A352663D97EFC3(7);
			unk_0xC9A352663D97EFC3(6);
			unk_0xC9A352663D97EFC3(8);
			unk_0xC9A352663D97EFC3(9);
			iVar1 = (unk_0x48E480685981C7D4() - Global_69276);
			if (iVar1 < 9000 && !unk_0x29AFA2493D7C23D0())
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
				switch (Global_69274)
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
				unk_0x700CD125EC59941D(82, 66);
				unk_0x992C39DBBED35AE3(1);
				unk_0x52B16DD1F847B2B9(2);
				iVar12 = func_151();
				if (Global_69277 == 1 && Global_69275 == 62)
				{
					iVar12 = Global_98931.f_1750.f_539.f_3550;
				}
				switch (iVar12)
				{
					case 0:
						unk_0xDFC297A2CE47E495(143, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 1:
						unk_0xDFC297A2CE47E495(144, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 2:
						unk_0xDFC297A2CE47E495(145, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					default:
						iVar8 = 240;
						iVar9 = 200;
						iVar10 = 80;
				}
				unk_0x00793A77639A3BAC(iVar8, iVar9, iVar10, iVar2);
				unk_0x175871A3A52AF528();
				Var4 = { func_290(Global_69275, Global_69277, iParam10) };
				if (fVar7 == -0.014f)
				{
				}
				unk_0x931DC442937495CF(fVar6, fVar7, 0f, 0.01f);
				unk_0x73984E9D23C977BA(0.67f, 0.67f);
				if (!unk_0xA8D3C47114E32A16() && !unk_0x75E5D3D5561067A8())
				{
					fLocal_33 = 0.14f;
				}
				else
				{
					fLocal_33 = 0.17f;
				}
				if (fVar7 == -0.014f)
				{
					if (func_289(&Var4) > fLocal_33)
					{
						if (unk_0x8D774C92D1A59A06(15))
						{
							unk_0xD43E234447A65E08(15, Local_29.f_0, (Local_29.f_1 + fLocal_32));
							Global_69279 = 1;
						}
					}
				}
				unk_0xA004CFE21CA812EA(&Var4);
				unk_0x834054753F171911(fVar6, fVar7, 0);
				unk_0x94CD3CDE7BD3510B();
				if (Global_69278 == 1)
				{
					func_288();
					fLocal_28 = 0f;
				}
			}
			else
			{
				func_288();
				fLocal_28 = 0f;
			}
		}
	}
}

void func_288()
{
	if (Global_69274 != 6)
	{
	}
	if (Global_69279)
	{
		unk_0x5547446287DE314B(15);
		Global_69279 = 0;
		Global_17238.f_7707 = 0;
	}
	Global_69274 = 6;
	Global_69276 = -1;
	Global_69275 = -1;
}

float func_289(var uParam0)
{
	unk_0xB865D57D92832050(uParam0);
	return unk_0x0239B891C698A437(1);
}

struct<2> func_290(int iParam0, int iParam1, int iParam2)
{
	struct<2> Var0;
	int iVar2;
	
	StringCopy(&Var0, "", 8);
	switch (iParam1)
	{
		case 1:
			Var0 = { func_300(iParam0) };
			break;
		
		case 7:
			Var0 = { func_298(iParam0) };
			break;
		
		case 3:
			iVar2 = iParam0;
			switch (iVar2)
			{
				case 0:
					Var0 = { func_297(iParam2) };
					break;
				
				case 8:
					Var0 = { func_296(iParam2) };
					break;
				
				case 7:
					Var0 = { func_295(iParam2) };
					break;
				
				case 10:
					Var0 = { func_294(iParam2) };
					break;
				
				case 5:
					Var0 = { func_293(iParam2) };
					break;
				
				case 4:
					Var0 = { func_292(iParam2) };
					break;
				
				default:
					StringCopy(&Var0, func_291(iVar2), 8);
					break;
			}
			break;
		
		default:
			break;
	}
	return Var0;
}

char* func_291(int iParam0)
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

struct<2> func_292(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0xB318FDA0D1ABDB20(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGOR_", 8);
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
	if (unk_0xB318FDA0D1ABDB20(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGFS_", 8);
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
	if (unk_0xB318FDA0D1ABDB20(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSP_", 8);
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
	if (unk_0xB318FDA0D1ABDB20(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_296(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0xB318FDA0D1ABDB20(&cVar2) || iParam0 == 3)
	{
	}
	else
	{
		StringCopy(&Var0, "MGCR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_297(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0xB318FDA0D1ABDB20(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGBJ_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_298(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_299(iParam0) };
	if (unk_0xB318FDA0D1ABDB20(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_299(int iParam0)
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

struct<2> func_300(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &(Global_81930[iParam0 /*34*/].f_8), 8);
	if (iParam0 == 90)
	{
		switch (Global_98931.f_7699.f_99.f_205[7])
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

int func_301(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	if (((!func_303(0) || Global_69289) || Global_69278 == 1) || !unk_0xECDEA377354CBDA4())
	{
		return 0;
	}
	switch (Global_69274)
	{
		case 0:
			if (unk_0xD994929E13CC1ED5(&uParam1, "NONE") || unk_0xB318FDA0D1ABDB20(&uParam1))
			{
				Global_69274 = 3;
			}
			else
			{
				Global_69274 = 1;
			}
			break;
		
		case 1:
			if (unk_0x0A11B2F86364F5B7())
			{
				Global_69274 = 2;
			}
			break;
		
		case 2:
			if (unk_0x521385D8214D27C4())
			{
				Global_69274 = 4;
				return 1;
			}
			else if (!unk_0xEF7A631CCBD01652())
			{
				Global_69274 = 3;
			}
			break;
		
		case 3:
			if (unk_0x521385D8214D27C4())
			{
			}
			else
			{
				Global_69274 = 5;
				return 1;
			}
			break;
		
		case 4:
			if (unk_0x521385D8214D27C4())
			{
				return 1;
			}
			else if (iParam0 == 1)
			{
				Global_69274 = 5;
			}
			break;
		
		case 5:
			if ((unk_0x521385D8214D27C4() || func_130(0)) || func_302(1))
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

bool func_302(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17099.f_4 && Global_17099.f_104 == 4);
	}
	return Global_17099.f_4;
}

int func_303(int iParam0)
{
	if (Global_35443 == 15)
	{
		return 0;
	}
	if (func_304(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_304(int iParam0)
{
	return func_305(iParam0, Global_35443);
}

int func_305(int iParam0, int iParam1)
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

void func_306(var uParam0)
{
	char cVar0[16];
	int iVar4;
	
	StringCopy(&cVar0, "Offroad_", 16);
	StringIntConCat(&cVar0, Local_50.f_10 + 1, 16);
	func_11(&(uParam0->f_3));
	uParam0->f_358[0 /*189*/].f_15 = 0f;
	iLocal_2105 = 0;
	unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
	if (Local_50.f_0 == 0)
	{
		unk_0xE5BBA710593FB752(unk_0x1329891157A54C63(), 1);
	}
	uParam0->f_1 = 1;
	func_11(&uLocal_2430);
	iVar4 = 0;
	while (iVar4 < uParam0->f_13)
	{
		func_307(&(uParam0->f_358[iVar4 /*189*/]));
		if (Local_50.f_0 != 1)
		{
			if (iVar4 != 0)
			{
				func_76(uParam0, uParam0->f_358[iVar4 /*189*/].f_8, uParam0->f_358[iVar4 /*189*/].f_9, uParam0->f_27[uParam0->f_358[iVar4 /*189*/].f_11 /*10*/], uParam0->f_27[uParam0->f_358[iVar4 /*189*/].f_11 /*10*/].f_7, iVar4);
			}
		}
		else if (bLocal_2438)
		{
			if (iVar4 > 0)
			{
				if (!unk_0x930F8FBB8E9537CC(uParam0->f_358[iVar4 /*189*/].f_8) && !unk_0x930F8FBB8E9537CC(uParam0->f_358[iVar4 /*189*/].f_9))
				{
					if (iVar4 == 1 && Local_50.f_10 == 0)
					{
						StringConCat(&cVar0, "a", 16);
					}
					unk_0x5E88D7F9F4A81079(uParam0->f_358[iVar4 /*189*/].f_8, uParam0->f_358[iVar4 /*189*/].f_9, &cVar0, 262144, 0, 8, -1, unk_0x5855978686FD0737(uParam0->f_358[iVar4 /*189*/].f_9), 0, 1073741824);
				}
			}
		}
		else if (iVar4 != 0)
		{
			func_76(uParam0, uParam0->f_358[iVar4 /*189*/].f_8, uParam0->f_358[iVar4 /*189*/].f_9, uParam0->f_27[uParam0->f_358[iVar4 /*189*/].f_11 /*10*/], uParam0->f_27[uParam0->f_358[iVar4 /*189*/].f_11 /*10*/].f_7, iVar4);
		}
		iVar4++;
	}
	if (unk_0x7404950238A154C2(uParam0->f_358[0 /*189*/].f_9, 0))
	{
		unk_0x89540DDA99D7346F(uParam0->f_358[0 /*189*/].f_9, 1);
		if (!unk_0xB318FDA0D1ABDB20(sLocal_2275))
		{
			unk_0xE3131684E8191AA9(sLocal_2275);
			unk_0xD578599BB87169AA(uParam0->f_358[0 /*189*/].f_9, sLocal_2275);
		}
	}
}

void func_307(var uParam0)
{
	if (!unk_0x930F8FBB8E9537CC(uParam0->f_9))
	{
		if (!unk_0x930F8FBB8E9537CC(uParam0->f_8))
		{
			if (unk_0xE20321A2D7F8960C(uParam0->f_9))
			{
				unk_0x05ACEF4F060B9B4E(uParam0->f_9);
			}
			unk_0x1D15D99A10A15334(uParam0->f_8, 1);
		}
	}
	uParam0->f_11 = 0;
	if (!unk_0x930F8FBB8E9537CC(uParam0->f_9))
	{
		if (!unk_0xC5ABD699DDC9D5A0(uParam0->f_22))
		{
			unk_0x686D6CDC14C4BA6C(uParam0->f_9, 1, 1);
		}
	}
}

var func_308()
{
	return unk_0x95EF972E3A07B525("MP_BIG_MESSAGE_FREEMODE");
}

void func_309(var uParam0)
{
	uParam0->f_12 = uParam0->f_12;
}

void func_310(var uParam0)
{
	int iVar0;
	
	if (unk_0xF26CA0663D2E037E(unk_0xEC537F0C0E8265EE()))
	{
		unk_0x034205BA180B4E43(unk_0xEC537F0C0E8265EE(), 0, 512);
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		func_108(&(uParam0->f_358[iVar0 /*189*/]), 60f, 1);
		iVar0++;
	}
}

void func_311(int iParam0, int iParam1)
{
	func_60(iParam0, iParam1);
}

int func_312(var uParam0, int iParam1, bool bParam2)
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
	if (!func_318(&(uParam0->f_27[iParam1 /*10*/]), iVar3, fVar4, iParam1, uParam0->f_12))
	{
		return 0;
	}
	if (bParam2)
	{
		Var5 = { uParam0->f_27[iParam1 /*10*/] };
		Var8 = { 0f, 0f, 0f };
		if (iParam1 < (uParam0->f_12 - 1))
		{
			if (!func_73(uParam0->f_27[iParam1 /*10*/], uParam0->f_27[iParam1 + 1 /*10*/], 1056964608, 0))
			{
				Var5 = { uParam0->f_27[iParam1 + 1 /*10*/] };
			}
		}
		if (Local_50.f_0 == 1)
		{
			if (Local_50.f_10 == 1)
			{
				if (func_339(uParam0->f_27[8 /*10*/].f_9, 4))
				{
					func_337(&(uParam0->f_27[8 /*10*/].f_9), 4);
				}
			}
		}
		if (iParam1 > 0)
		{
			Var8 = { uParam0->f_27[(iParam1 - 1) /*10*/] };
		}
		if (!func_313(Var8, &(uParam0->f_27[iParam1 /*10*/]), Var5, 16f))
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
			if (!func_313(uParam0->f_27[iParam1 /*10*/], &(uParam0->f_27[iParam1 + 1 /*10*/]), Var0, 16f))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_313(struct<3> Param0, var uParam3, struct<3> Param4, float fParam7)
{
	if (!func_314(Param0, uParam3, Param4, fParam7))
	{
		return 0;
	}
	return 1;
}

int func_314(struct<3> Param0, var uParam3, struct<3> Param4, var uParam7)
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
		uVar0 = func_316(uParam3->f_7, Param0, *uParam3, Param4);
		func_554(func_555(func_92()), &uVar1, &uVar2, &uVar3, &uVar4);
		uParam3->f_6 = unk_0x1C6F499D107A2AAA(uVar0, *uParam3, Param4, uParam7, uVar1, uVar2, uVar3, func_91(*uParam3, 25, 200), 0);
	}
	else if (uParam3->f_7 == 3)
	{
		if (uParam3->f_8 == 2 || uParam3->f_8 == 3)
		{
			func_554(func_555(18), &iVar1, &iVar2, &iVar3, &uVar4);
			uParam3->f_6 = unk_0x1C6F499D107A2AAA(func_315(uParam3->f_7, uParam3->f_8), *uParam3, Param4, uParam7, iVar1, iVar2, iVar3, func_91(*uParam3, 25, 200), 0);
		}
		else if (uParam3->f_8 == 1)
		{
			func_554(func_555(9), &iVar1, &iVar2, &iVar3, &uVar4);
			uParam3->f_6 = unk_0x1C6F499D107A2AAA(func_315(uParam3->f_7, uParam3->f_8), *uParam3, Param4, uParam7, iVar1, iVar2, iVar3, func_91(*uParam3, 25, 200), 0);
		}
	}
	else
	{
		uParam3->f_6 = unk_0x1C6F499D107A2AAA(func_315(uParam3->f_7, uParam3->f_8), *uParam3, Param4, uParam7, 254, 207, 12, func_91(*uParam3, 25, 200), 0);
	}
	if (uParam3->f_6 == 0)
	{
		return 0;
	}
	return 1;
}

int func_315(int iParam0, int iParam1)
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

int func_316(int iParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7)
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
	if (!func_317(Param1, 0f, 0f, 0f, 0))
	{
		Var0 = { Param1 - Param4 };
		Var3 = { Param7 - Param4 };
		fVar6 = unk_0x340B0B7228EC1565(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1);
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

bool func_317(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_318(var uParam0, int iParam1, float fParam2, int iParam3, int iParam4)
{
	if (!func_319(&(uParam0->f_5), *uParam0, iParam1, fParam2, iParam3, iParam4, uParam0->f_8))
	{
		return 0;
	}
	return 1;
}

int func_319(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7, int iParam8)
{
	func_83(uParam0);
	*uParam0 = unk_0xA949BE56543040D2(Param1);
	if (!unk_0xFBACB273AA628CC5(*uParam0))
	{
		return 0;
	}
	if (iParam4 != -1)
	{
		unk_0x8F827BB0F6ED7AA8(*uParam0, iParam4);
	}
	unk_0xD6DF56BB9537BCC5(*uParam0, uParam5);
	unk_0x885CCA7D7CA0FAE3(*uParam0, 4);
	if (iParam8 == 2 || iParam8 == 3)
	{
		unk_0x1B86E7A8766EA6B4(*uParam0, 2);
	}
	if (iParam8 == 1)
	{
		unk_0x1B86E7A8766EA6B4(*uParam0, 3);
	}
	if (iParam6 == (iParam7 - 1))
	{
		unk_0xF8EE50B3E85D24B7("GATEBLIPFIN");
		unk_0xE5C70EC67B67C35E(*uParam0);
	}
	else
	{
		if (iParam8 == 1)
		{
			unk_0xF8EE50B3E85D24B7("GATEBLIPINV");
		}
		else if (iParam8 == 2 || iParam8 == 3)
		{
			unk_0xF8EE50B3E85D24B7("GATEBLIPKNF");
		}
		else
		{
			unk_0xF8EE50B3E85D24B7("GATEBLIPDEF");
		}
		unk_0xE5C70EC67B67C35E(*uParam0);
	}
	return 1;
}

void func_320(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x645DF34C4E038370(sParam0);
	unk_0x16885CADDEC73B2E(iParam1, 0);
}

int func_321(var uParam0)
{
	switch (uParam0->f_25)
	{
		case 0:
			func_126(1);
			unk_0xB711FC19ADBD3C70("MPHUD", 0);
			Local_50.f_118 = func_334();
			switch (Local_50.f_0)
			{
				case 0:
					unk_0xB711FC19ADBD3C70("SPRRaces", 0);
					unk_0xB711FC19ADBD3C70("MPMedals_FEED", 0);
					break;
				
				case 1:
					unk_0xB711FC19ADBD3C70("SPROffroad", 0);
					break;
				
				case 2:
					unk_0xB711FC19ADBD3C70("Triathlon", 0);
					unk_0xB711FC19ADBD3C70("MPMedals_FEED", 0);
					break;
			}
			uParam0->f_25 = 1;
			break;
		
		case 1:
			func_329(uParam0);
			uParam0->f_25 = 2;
			break;
		
		case 2:
			if (func_324(uParam0))
			{
				if (unk_0x682001A921A80123("MPHUD"))
				{
					if (unk_0xCC8E3BAC62A29F42(Local_50.f_118))
					{
						switch (Local_50.f_0)
						{
							case 0:
								if (unk_0x682001A921A80123("SPRRaces") && unk_0x682001A921A80123("MPMedals_FEED"))
								{
									uParam0->f_25 = 3;
								}
								break;
							
							case 1:
								if (unk_0x682001A921A80123("SPROffroad"))
								{
									uParam0->f_25 = 3;
								}
								break;
							
							case 2:
								if (unk_0x682001A921A80123("Triathlon") && unk_0x682001A921A80123("MPMedals_FEED"))
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
			unk_0x773049CADC416D2F(unk_0x1329891157A54C63());
			if (Local_50.f_10 == 0 && !uParam0->f_2)
			{
			}
			else
			{
				func_322(uParam0);
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
				if (unk_0x86CCCD2FAE9D5E65(uParam0->f_358[0 /*189*/].f_9))
				{
					unk_0xA8F22633ACC22189(uParam0->f_358[0 /*189*/].f_9, 1);
				}
				if (!unk_0x2CB3B76C90F08111())
				{
					unk_0x77428ED9B41A3CAF(uParam0->f_358[0 /*189*/].f_16);
					unk_0x7E2FE21B0F846986(uParam0->f_358[0 /*189*/].f_16, unk_0xC99223BD7E489FC6(uParam0->f_358[0 /*189*/].f_9), 5000f, 0);
				}
				if (unk_0xA5C3CFD413D647EA())
				{
					unk_0x5AD73EF670D05F7D();
					if (unk_0x86CCCD2FAE9D5E65(uParam0->f_358[0 /*189*/].f_9))
					{
						unk_0xA8F22633ACC22189(uParam0->f_358[0 /*189*/].f_9, 0);
					}
					func_310(uParam0);
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
	if (iParam1 > 0)
	{
		return func_122(&(uParam0->f_358[iParam1 /*189*/]), 1);
	}
	return func_122(&(uParam0->f_358[iParam1 /*189*/]), 0);
}

int func_324(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		if (!func_325(uParam0, iVar0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_325(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return 0;
	}
	return func_326(&(uParam0->f_358[iParam1 /*189*/]));
}

int func_326(var uParam0)
{
	if (!func_328(uParam0) || !func_327(uParam0))
	{
		return 0;
	}
	return 1;
}

bool func_327(var uParam0)
{
	if (uParam0->f_22 == 0)
	{
		return 1;
	}
	return unk_0x33ACB874CECA2D4B(uParam0->f_22);
}

bool func_328(var uParam0)
{
	if (uParam0->f_21 == 0)
	{
		return 0;
	}
	return unk_0x33ACB874CECA2D4B(uParam0->f_21);
}

void func_329(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		func_330(uParam0, iVar0);
		iVar0++;
	}
}

void func_330(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return;
	}
	func_331(&(uParam0->f_358[iParam1 /*189*/]));
}

void func_331(var uParam0)
{
	func_333(uParam0);
	func_332(uParam0);
}

void func_332(var uParam0)
{
	if (uParam0->f_22 == 0)
	{
		return;
	}
	unk_0x32A12757CBF48A33(uParam0->f_22);
}

void func_333(var uParam0)
{
	if (uParam0->f_21 == 0)
	{
		return;
	}
	unk_0x32A12757CBF48A33(uParam0->f_21);
}

var func_334()
{
	return unk_0x95EF972E3A07B525("SC_LEADERBOARD");
}

int func_335(int iParam0)
{
	if (unk_0xECDEA377354CBDA4())
	{
		unk_0x3B283FEBA87FFBEB(iParam0);
	}
	else if (unk_0x29AFA2493D7C23D0())
	{
		return 1;
	}
	return 0;
}

void func_336()
{
	if (unk_0x42E36F2D658EB2FF(uLocal_2074))
	{
		if (unk_0x6B6362BE9BFD1ACA(uLocal_2074))
		{
			unk_0xFEBF3DDE5E4DC5C5(0, 0, 3000, 1, 0, 0);
			unk_0xDD0B0D77CB8995B1(uLocal_2074, 0);
		}
		unk_0x35B958B469415A23(uLocal_2074, 0);
	}
}

void func_337(int iParam0, int iParam1)
{
	func_338(iParam0, iParam1);
}

void func_338(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

bool func_339(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_340(var uParam0)
{
	if (!func_3(uParam0))
	{
		func_11(uParam0);
	}
}

void func_341()
{
	func_342(&uLocal_1578);
}

void func_342(var uParam0)
{
	if (uParam0->f_4 != 0)
	{
		func_348(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
	}
	if (((*uParam0)[0] != 0 || (*uParam0)[1] != 0) || (*uParam0)[2] != 0)
	{
		func_408(uParam0);
		func_347(uParam0);
		func_346(&Global_1839721);
	}
	if (Global_1835390.f_2708 != 0 || Global_1835390.f_3184)
	{
		func_344();
	}
	if (unk_0x12F24A1A22BF90A7("LEADERBOARD_SCENE"))
	{
		unk_0x0C22E352114F699C("LEADERBOARD_SCENE");
	}
	if (unk_0x1F2C82EFDAD19C5D())
	{
		func_343(&(Global_1840922.f_49));
	}
	Global_2451473.f_3809 = 0;
}

void func_343(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_344()
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
	func_345(&(Global_1835390.f_2780));
	func_343(&(Global_1835390.f_2823));
	Global_1835390.f_2825 = -1;
	Global_1835390.f_2826 = 0;
	func_343(&(Global_1835390.f_2827));
	Global_1835390.f_2829 = 0;
	func_343(&(Global_1835390.f_2830));
	Global_1835390.f_2832 = 0;
	Global_1835390.f_2780.f_28 = 0;
	Global_1835390.f_2780.f_27 = 0;
	Global_1835390.f_3184 = 0;
}

void func_345(var uParam0)
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

void func_346(var uParam0)
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
	func_343(&(Global_1835390.f_2830));
}

void func_347(var uParam0)
{
	int iVar0;
	struct<13> Var1;
	
	uParam0->f_246 = 0;
	uParam0->f_246.f_1 = -1;
	uParam0->f_246.f_2 = 0;
	func_343(&(uParam0->f_246.f_3));
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

void func_348(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = 0;
	*uParam1 = 0;
	Global_1835008 = 0;
	func_343(&(Global_1835008.f_1));
	unk_0xF8F860AB8EB0215D(*uParam2, uParam2->f_1, -1);
}

int func_349(var uParam0, var uParam1)
{
	if (!func_400())
	{
		return 0;
	}
	if (func_394(&bLocal_524, uParam0))
	{
		if (iLocal_526 || bLocal_525)
		{
			unk_0xDC38CC1E35B6A5D7("SPR_QT_PLANE_T", "SPR_QUIT_PLANE", 36, 0, 0, -1, 0, 0, 1);
			if (!*uParam1)
			{
				if (iLocal_526)
				{
					if (func_3(&uLocal_521))
					{
						if (func_227(&uLocal_521, unk_0xBBDA792448DB5A89(0)))
						{
							iLocal_526 = 0;
							bLocal_525 = !bLocal_525;
						}
					}
					else
					{
						func_11(&uLocal_521);
					}
				}
				else
				{
					unk_0xC9A352663D97EFC3(9);
					unk_0xC9A352663D97EFC3(7);
					func_140(&(Local_50.f_119), 1128792064, 1, 0, 1, 1065353216);
				}
			}
		}
		else
		{
			*uParam1 = 0;
			func_354();
		}
		return 0;
	}
	if (bLocal_524)
	{
		func_353();
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			unk_0x57B73553960790B6(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 1);
		}
	}
	else
	{
		Local_50.f_10 = -1;
	}
	func_350();
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		unk_0x57B73553960790B6(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 1);
	}
	return 1;
}

void func_350()
{
	unk_0xB8BB626315D394F5(1);
	unk_0xBEE99C97A1B87F95(3, 1);
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
	}
	if (unk_0x7B8D8507EF8192DA("MinigameTransitionIn"))
	{
		unk_0x7D123BA6B5E0F9B9("MinigameTransitionIn");
	}
	unk_0x45D2AAD93E9AC4B3("MinigameTransitionOut", 0, 0);
	iLocal_520 = 0;
	unk_0xD338B0444EFB8C65(0);
	func_126(0);
	func_351();
}

void func_351()
{
	Global_14559 = 0;
	func_352();
}

void func_352()
{
	if (unk_0xE1772957381F609F())
	{
		unk_0xE1BF98267C70D822();
		Global_16704 = 0;
		unk_0x9E95048D8C96C1EA(1);
		Global_15693 = 6;
		return;
	}
}

void func_353()
{
	switch (Global_97961)
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

void func_354()
{
	unk_0xD61D5795530D0627();
	func_355(&uLocal_591);
}

void func_355(var uParam0)
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
	
	if (!bLocal_590)
	{
		if (!unk_0x913B1C01C1BA6C6F())
		{
			unk_0xAF8F605B6E00615E(1);
		}
	}
	unk_0xC9A352663D97EFC3(9);
	unk_0xC9A352663D97EFC3(7);
	func_140(&(Local_50.f_119), 1128792064, 1, 0, 1, 1065353216);
	func_386("Shared", "BGGradient_32x1024", uParam0[0 /*9*/], 0, 0, 1, 0);
	func_381(uParam0->f_420[0 /*8*/], 0, 0);
	func_381(uParam0->f_420[1 /*8*/], 0, 0);
	func_381(uParam0->f_420[2 /*8*/], 0, 0);
	func_381(uParam0->f_420[3 /*8*/], 0, 0);
	func_381(uParam0->f_420[4 /*8*/], 0, 0);
	func_381(uParam0->f_420[5 /*8*/], 0, 0);
	func_381(uParam0->f_420[6 /*8*/], 0, 0);
	func_381(uParam0->f_420[7 /*8*/], 0, 0);
	func_381(uParam0->f_420[8 /*8*/], 0, 0);
	func_381(uParam0->f_420[6 /*8*/], 0, 0);
	unk_0x7F3AA121397DEEC9(1);
	func_380(&(uParam0->f_741.f_165));
	func_379(&(uParam0->f_316[0 /*2*/]), &(uParam0->f_741.f_165), "SPR_TITLE", 0);
	unk_0x7F3AA121397DEEC9(4);
	func_377(&(uParam0->f_741.f_176));
	func_376(&(uParam0->f_741.f_176), &(uParam0->f_420[0 /*8*/]), 0f, 0f);
	func_374(&(uParam0->f_316[1 /*2*/]), &(uParam0->f_741.f_176), "SPR_CHALLENGES", 1, 0);
	func_373(&(uParam0->f_741.f_176));
	func_376(&(uParam0->f_741.f_176), &(uParam0->f_420[1 /*8*/]), 0f, 0f);
	func_374(&(uParam0->f_316[2 /*2*/]), &(uParam0->f_741.f_176), "SPR_INFO", 1, 0);
	func_373(&(uParam0->f_741.f_176));
	func_376(&(uParam0->f_741.f_176), &(uParam0->f_420[5 /*8*/]), 0f, 0f);
	func_374(&(uParam0->f_316[3 /*2*/]), &(uParam0->f_741.f_176), "SPR_AWARD_TITLE", 1, 0);
	func_373(&(uParam0->f_741.f_176));
	func_380(&(uParam0->f_741.f_198));
	iVar0 = 0;
	iVar1 = 9;
	iVar2 = 17;
	iVar3 = 1;
	func_381(uParam0->f_420[16 /*8*/], 0, 0);
	func_381(uParam0->f_420[17 /*8*/], 0, 0);
	func_381(uParam0->f_420[18 /*8*/], 0, 0);
	func_381(uParam0->f_420[19 /*8*/], 0, 0);
	func_381(uParam0->f_420[20 /*8*/], 0, 0);
	func_381(uParam0->f_420[21 /*8*/], 0, 0);
	bVar4 = true;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 < 5)
		{
			Var14 = { uParam0->f_316[iVar2 /*2*/] };
			if (Global_98931.f_17657.f_6[iVar0] > 0f)
			{
				iLocal_530[iVar0] = unk_0x11E019C8F43ACC8A(Global_98931.f_17657.f_6[iVar0]);
			}
			else
			{
				iLocal_530[iVar0] = -1;
			}
			if (iVar0 == Global_97961)
			{
				func_245(&(uParam0->f_420[iVar1 /*8*/]), 1, 1);
				func_381(uParam0->f_420[iVar1 /*8*/], 0, 0);
				func_377(&(uParam0->f_741.f_198));
				switch (Global_98931.f_17657.f_12[iVar0 /*8*/].f_4)
				{
					case 2:
						break;
					
					case 1:
						if (iVar0 < 5)
						{
							if (Global_98931.f_17657.f_6[iVar0] <= 0f)
							{
								func_253(&Var5, 269f, 0f, 32f, 32f, 0);
								func_252(&Var5, 255, 255, 255, 255);
								Var5.f_1 = (uParam0->f_316[iVar2 /*2*/].f_1 + fLocal_537);
								Var14.f_0 = (Var5.f_0 + fLocal_536);
								if (!bLocal_590)
								{
									func_372(&Var5, 0);
								}
								func_371(&Var5, 1);
								func_386("Shared", "NewStar_32", &Var5, 0, 0, 5, 0);
								if (!bLocal_590)
								{
									func_370(&Var14, &(uParam0->f_741.f_198));
								}
							}
						}
						break;
					
					default:
						bVar4 = false;
						break;
				}
				if (iVar0 == Global_97961)
				{
					func_377(&(uParam0->f_741.f_198));
				}
				func_373(&(uParam0->f_741.f_198));
				func_379(&Var14, &(uParam0->f_741.f_198), &(Local_50.f_24[iVar0 /*8*/]), 0);
				func_380(&(uParam0->f_741.f_198));
				func_371(uParam0[iVar3 /*9*/], 1);
				if (bVar4)
				{
					func_380(&(uParam0->f_741.f_198));
				}
				else
				{
					func_380(&(uParam0->f_741.f_198));
				}
				func_380(&(uParam0->f_741.f_198));
				if (IntToFloat(iLocal_530[iVar0]) <= Local_50.f_106[iVar0] && iLocal_530[iVar0] > 1)
				{
					func_371(uParam0[iVar3 /*9*/], 1);
					func_371(uParam0[9 /*9*/], 1);
					func_386("SPRRaces", "FlightStunt_Gold_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					func_376(&(uParam0->f_741.f_198), &(uParam0->f_420[16 /*8*/]), 0.0047f, 0.0055f);
					unk_0xB9C36653170A5C02(1);
					func_379(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_198), "SPR_sGOLD", 0);
					unk_0xB9C36653170A5C02(0);
					func_373(&(uParam0->f_741.f_198));
				}
				else if (IntToFloat(iLocal_530[iVar0]) <= (((Local_50.f_112[iVar0] - Local_50.f_106[iVar0]) / 2f) + Local_50.f_106[iVar0]) && IntToFloat(iLocal_530[iVar0]) > Local_50.f_106[iVar0])
				{
					func_371(uParam0[iVar3 /*9*/], 1);
					func_371(uParam0[9 /*9*/], 1);
					func_386("SPRRaces", "FlightStunt_Silver_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					func_376(&(uParam0->f_741.f_198), &(uParam0->f_420[16 /*8*/]), 0.0047f, 0.0055f);
					unk_0xB9C36653170A5C02(1);
					func_379(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_198), "SPR_sSILVER", 0);
					unk_0xB9C36653170A5C02(0);
					func_373(&(uParam0->f_741.f_198));
				}
				else if (IntToFloat(iLocal_530[iVar0]) <= Local_50.f_112[iVar0] && IntToFloat(iLocal_530[iVar0]) > (((Local_50.f_112[iVar0] - Local_50.f_106[iVar0]) / 2f) + Local_50.f_106[iVar0]))
				{
					func_371(uParam0[iVar3 /*9*/], 1);
					func_371(uParam0[9 /*9*/], 1);
					func_386("SPRRaces", "FlightStunt_Bronze_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					func_376(&(uParam0->f_741.f_198), &(uParam0->f_420[16 /*8*/]), 0.0047f, 0.0055f);
					unk_0xB9C36653170A5C02(1);
					func_379(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_198), "SPR_sBRONZE", 0);
					unk_0xB9C36653170A5C02(0);
					func_373(&(uParam0->f_741.f_198));
				}
				else if (IntToFloat(iLocal_530[iVar0]) > Local_50.f_112[iVar0] || iLocal_530[iVar0] == -1)
				{
					func_371(uParam0[iVar3 /*9*/], 1);
					func_371(uParam0[9 /*9*/], 1);
					func_376(&(uParam0->f_741.f_198), &(uParam0->f_420[16 /*8*/]), 0.0047f, 0.0055f);
					unk_0xB9C36653170A5C02(1);
					func_379(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_198), "SC_LB_EMPTY", 0);
					unk_0xB9C36653170A5C02(0);
					func_386("SPRRaces", "Empty_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					func_369(uParam0[iVar3 /*9*/]);
				}
				if (IntToFloat(iLocal_530[iVar0]) <= Local_50.f_106[iVar0] && !iLocal_530[iVar0] == -1)
				{
					func_371(uParam0[13 /*9*/], 1);
				}
				else
				{
					(uParam0[13 /*9*/])->f_7 = unk_0xF2DB717A73826179((255f * 0.3f));
				}
				if (IntToFloat(iLocal_530[iVar0]) <= (((Local_50.f_112[iVar0] - Local_50.f_106[iVar0]) / 2f) + Local_50.f_106[iVar0]) && !iLocal_530[iVar0] == -1)
				{
					func_371(uParam0[12 /*9*/], 1);
				}
				else
				{
					(uParam0[12 /*9*/])->f_7 = unk_0xF2DB717A73826179((255f * 0.3f));
				}
				if (IntToFloat(iLocal_530[iVar0]) <= Local_50.f_112[iVar0] && !iLocal_530[iVar0] == -1)
				{
					func_371(uParam0[11 /*9*/], 1);
				}
				else
				{
					(uParam0[11 /*9*/])->f_7 = unk_0xF2DB717A73826179((255f * 0.3f));
				}
				func_386("SPRRaces", "FlightStunt_Bronze_128", uParam0[11 /*9*/], 0, 0, 5, 0);
				func_386("SPRRaces", "FlightStunt_Silver_128", uParam0[12 /*9*/], 0, 0, 5, 0);
				func_386("SPRRaces", "FlightStunt_Gold_128", uParam0[13 /*9*/], 0, 0, 5, 0);
				func_380(&(uParam0->f_741.f_198));
				if (Global_98931.f_17657.f_6[Global_97961] > 0f)
				{
					func_376(&(uParam0->f_741.f_198), &(uParam0->f_420[17 /*8*/]), 0.0047f, 0.0055f);
					unk_0xB9C36653170A5C02(1);
					func_364(&(uParam0->f_316[9 /*2*/]), &(uParam0->f_741.f_198), unk_0xF34EE736CF047844((Global_98931.f_17657.f_6[Global_97961] * 1000f)), 6, "", 0, 1);
					unk_0xB9C36653170A5C02(0);
					func_373(&(uParam0->f_741.f_198));
				}
				else
				{
					func_376(&(uParam0->f_741.f_198), &(uParam0->f_420[17 /*8*/]), 0.0047f, 0.0055f);
					unk_0xB9C36653170A5C02(1);
					func_379(&(uParam0->f_316[9 /*2*/]), &(uParam0->f_741.f_198), "SC_LB_EMPTY", 0);
					unk_0xB9C36653170A5C02(0);
					func_373(&(uParam0->f_741.f_198));
				}
				func_379(&(uParam0->f_316[6 /*2*/]), &(uParam0->f_741.f_198), "SPR_RTIME", 0);
				if (Local_50.f_18[Global_97961] > 0f)
				{
					func_376(&(uParam0->f_741.f_198), &(uParam0->f_420[18 /*8*/]), 0.0047f, 0.0055f);
					unk_0xB9C36653170A5C02(1);
					func_364(&(uParam0->f_316[7 /*2*/]), &(uParam0->f_741.f_198), unk_0xF34EE736CF047844((Local_50.f_18[Global_97961] * 1000f)), 6, "", 0, 1);
					unk_0xB9C36653170A5C02(0);
					func_373(&(uParam0->f_741.f_198));
					func_380(&(uParam0->f_741.f_198));
				}
				else
				{
					func_376(&(uParam0->f_741.f_198), &(uParam0->f_420[18 /*8*/]), 0.0047f, 0.0055f);
					unk_0xB9C36653170A5C02(1);
					func_374(&(uParam0->f_316[7 /*2*/]), &(uParam0->f_741.f_198), "SC_LB_EMPTY", 0, 1);
					unk_0xB9C36653170A5C02(0);
					func_373(&(uParam0->f_741.f_198));
					func_380(&(uParam0->f_741.f_198));
				}
			}
			else
			{
				func_363(&(uParam0->f_420[iVar1 /*8*/]));
				func_245(&(uParam0->f_420[iVar1 /*8*/]), 117, 1);
				func_381(uParam0->f_420[iVar1 /*8*/], 0, 0);
				func_371(uParam0[iVar3 /*9*/], 1);
				switch (Global_98931.f_17657.f_12[iVar0 /*8*/].f_4)
				{
					case 0:
						func_371(uParam0[iVar3 /*9*/], 1);
						func_380(&(uParam0->f_741.f_198));
						break;
					
					case 2:
						break;
					
					case 1:
						if (iVar0 < 5)
						{
							func_380(&(uParam0->f_741.f_198));
							if (Global_98931.f_17657.f_6[iVar0] <= 0f)
							{
								func_253(&Var5, 269f, 0f, 32f, 32f, 0);
								func_252(&Var5, 255, 255, 255, 255);
								Var5.f_1 = (uParam0->f_316[iVar2 /*2*/].f_1 + fLocal_537);
								Var14.f_0 = (Var5.f_0 + fLocal_536);
								if (!bLocal_590)
								{
									func_372(&Var5, 0);
								}
								func_371(&Var5, 1);
								func_386("Shared", "NewStar_32", &Var5, 0, 0, 5, 0);
								if (!bLocal_590)
								{
									func_370(&Var14, &(uParam0->f_741.f_198));
								}
							}
						}
						break;
				}
				if (iVar0 == Global_97961)
				{
					func_377(&(uParam0->f_741.f_198));
				}
				func_373(&(uParam0->f_741.f_198));
				func_379(&Var14, &(uParam0->f_741.f_198), &(Local_50.f_24[iVar0 /*8*/]), 0);
				func_380(&(uParam0->f_741.f_198));
				func_371(uParam0[iVar3 /*9*/], 1);
			}
			if (Global_98931.f_17657.f_12[iVar0 /*8*/].f_4 == 0)
			{
				func_386("Shared", "Locked_Icon_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
			}
			else if (IntToFloat(iLocal_530[iVar0]) > 0f)
			{
				if (IntToFloat(iLocal_530[iVar0]) <= Local_50.f_106[iVar0] && IntToFloat(iLocal_530[iVar0]) <= Local_50.f_112[iVar0])
				{
					func_362(uParam0[iVar3 /*9*/]);
					func_386("Shared", "MedalDot_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
				}
				else if (IntToFloat(iLocal_530[iVar0]) <= (((Local_50.f_112[iVar0] - Local_50.f_106[iVar0]) / 2f) + Local_50.f_106[iVar0]))
				{
					func_361(uParam0[iVar3 /*9*/]);
					func_386("Shared", "MedalDot_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
				}
				else if (IntToFloat(iLocal_530[iVar0]) <= Local_50.f_112[iVar0])
				{
					func_359(uParam0[iVar3 /*9*/]);
					func_386("Shared", "MedalDot_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
				}
			}
			iVar1++;
			iVar2++;
			iVar3++;
		}
		iVar0++;
	}
	iVar16 = 0;
	if (func_358(0))
	{
		unk_0x85C45034BA638694(joaat("sp0_flying_ability"), &iVar16, -1);
	}
	else if (func_358(1))
	{
		unk_0x85C45034BA638694(joaat("sp1_flying_ability"), &iVar16, -1);
	}
	else if (func_358(2))
	{
		unk_0x85C45034BA638694(joaat("sp2_flying_ability"), &iVar16, -1);
	}
	if (iVar16 < 40)
	{
		func_376(&(uParam0->f_741.f_198), &(uParam0->f_420[15 /*8*/]), 0.0047f, 0.0055f);
		unk_0xDA5E01AA73A367E0(1);
		Var17 = { uParam0->f_316[22 /*2*/] };
		Var19 = { uParam0->f_741.f_198 };
		if (!bLocal_590)
		{
			Var19.f_9 = (Var19.f_9 - 0.08f);
			func_370(&Var17, &Var19);
		}
		if (bLocal_590)
		{
			func_356(&(uParam0->f_420[14 /*8*/]), "FLY_STAT_WARN", &Var17, &Var19, 27f, 2f, 5, 159f);
		}
		else
		{
			func_356(&(uParam0->f_420[14 /*8*/]), "FLY_STAT_WARN", &Var17, &Var19, 18f, 1.55f, 5, 106f);
		}
		func_381(uParam0->f_420[14 /*8*/], 0, 0);
		func_386("Shared", "Info_Icon_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
		func_379(&(uParam0->f_316[22 /*2*/]), &(uParam0->f_741.f_198), "FLY_STAT_WARN", 0);
		func_373(&(uParam0->f_741.f_198));
	}
	StringCopy(&Var30, "SPR_DESC_", 16);
	StringIntConCat(&Var30, Global_97961 + 1, 16);
	func_371(uParam0[7 /*9*/], 1);
	func_386("SPRRaces", &Var30, uParam0[7 /*9*/], 0, 0, 5, 0);
	func_376(&(uParam0->f_741.f_198), &(uParam0->f_420[25 /*8*/]), 0.0047f, 0.0055f);
	unk_0xDA5E01AA73A367E0(1);
	StringCopy(&cVar34, "SPR_DESC_", 16);
	if (bVar4)
	{
		StringIntConCat(&cVar34, Global_97961 + 1, 16);
	}
	else
	{
		StringIntConCat(&cVar34, 0, 16);
	}
	Var38 = { uParam0->f_316[16 /*2*/] };
	Var40 = { uParam0->f_741.f_198 };
	if (!bLocal_590)
	{
		Var40.f_9 = (Var40.f_9 - 0.108f);
		func_370(&Var38, &Var40);
	}
	if (bLocal_590)
	{
		func_356(&(uParam0->f_420[25 /*8*/]), &cVar34, &Var38, &Var40, 27f, 2f, 5, 159f);
	}
	else
	{
		func_356(&(uParam0->f_420[25 /*8*/]), &cVar34, &Var38, &Var40, 18f, 1.55f, 5, 106f);
	}
	func_381(uParam0->f_420[25 /*8*/], 0, 0);
	func_379(&(uParam0->f_316[16 /*2*/]), &(uParam0->f_741.f_198), &cVar34, 0);
	func_373(&(uParam0->f_741.f_198));
	func_380(&(uParam0->f_741.f_198));
	func_379(&(uParam0->f_316[4 /*2*/]), &(uParam0->f_741.f_198), "SPR_AWARDS_SUB", 0);
	func_379(&(uParam0->f_316[8 /*2*/]), &(uParam0->f_741.f_198), "SPR_BEST", 0);
	func_377(&(uParam0->f_741.f_198));
	func_381(uParam0->f_420[22 /*8*/], 0, 0);
	func_376(&(uParam0->f_741.f_198), &(uParam0->f_420[22 /*8*/]), 0, 0);
	func_364(&(uParam0->f_316[13 /*2*/]), &(uParam0->f_741.f_198), unk_0xF34EE736CF047844(Local_50.f_112[Global_97961]) * 1000, 6, "", 1, 0);
	func_373(&(uParam0->f_741.f_198));
	func_381(uParam0->f_420[23 /*8*/], 0, 0);
	func_376(&(uParam0->f_741.f_198), &(uParam0->f_420[23 /*8*/]), 0, 0);
	func_364(&(uParam0->f_316[14 /*2*/]), &(uParam0->f_741.f_198), unk_0xF34EE736CF047844((((Local_50.f_112[Global_97961] - Local_50.f_106[Global_97961]) / 2f) + Local_50.f_106[Global_97961])) * 1000, 6, "", 1, 0);
	func_373(&(uParam0->f_741.f_198));
	func_381(uParam0->f_420[24 /*8*/], 0, 0);
	func_376(&(uParam0->f_741.f_198), &(uParam0->f_420[24 /*8*/]), 0, 0);
	func_364(&(uParam0->f_316[15 /*2*/]), &(uParam0->f_741.f_198), unk_0xF34EE736CF047844(Local_50.f_106[Global_97961]) * 1000, 6, "", 1, 0);
	func_373(&(uParam0->f_741.f_198));
	func_380(&(uParam0->f_741.f_198));
}

float func_356(var uParam0, char* sParam1, float fParam2, var uParam3, float fParam4, float fParam5, int iParam6, float fParam7)
{
	int iVar0;
	int iVar1;
	
	func_357(uParam3, 0);
	unk_0x1F1C628562B7BD8A(sParam1);
	iVar0 = unk_0x78C28B5B2055F149(*fParam2, fParam2->f_1);
	iVar1 = 720;
	if (!unk_0xA8D3C47114E32A16())
	{
		iVar1 = 480;
	}
	uParam0->f_3 = func_249(((unk_0xBBDA792448DB5A89(iVar0) * fParam4) - fParam5), iVar1);
	uParam0->f_1 = func_249(((fParam7 + ((unk_0xBBDA792448DB5A89(iParam6) + (unk_0xBBDA792448DB5A89(iVar0) * 0.5f)) * fParam4)) - (fParam5 * 0.5f)), iVar1);
	return 0f;
}

void func_357(var uParam0, bool bParam1)
{
	unk_0x992C39DBBED35AE3(*uParam0);
	if (!uParam0->f_8 == 0f || !uParam0->f_9 == 0f)
	{
		unk_0xD90CB3CB1328F03F(uParam0->f_8, uParam0->f_9);
	}
	unk_0x73984E9D23C977BA(uParam0->f_1, uParam0->f_2);
	unk_0x00793A77639A3BAC(uParam0->f_3, uParam0->f_4, uParam0->f_5, uParam0->f_6);
	switch (uParam0->f_7)
	{
		case 0:
			break;
		
		case 1:
			unk_0x91806FF5BDB1207C();
			unk_0x175871A3A52AF528();
			break;
		
		case 3:
			unk_0x175871A3A52AF528();
			break;
		
		case 2:
			unk_0x91806FF5BDB1207C();
			break;
	}
	if (bParam1)
	{
		unk_0x7F3AA121397DEEC9(4);
	}
}

bool func_358(int iParam0)
{
	func_152();
	return iParam0 == Global_98931.f_1750.f_539.f_3549;
}

void func_359(var uParam0)
{
	func_360(uParam0, 107);
}

void func_360(var uParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0xDFC297A2CE47E495(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_4 = uVar0;
	uParam0->f_5 = uVar1;
	uParam0->f_6 = uVar2;
}

void func_361(var uParam0)
{
	func_360(uParam0, 108);
}

void func_362(var uParam0)
{
	func_360(uParam0, 109);
}

void func_363(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 128;
}

void func_364(var uParam0, var uParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	char* sVar0;
	
	if (func_367())
	{
		func_357(uParam1, 0);
		unk_0xB9C36653170A5C02(iParam6);
		unk_0x2BE2394F62FC653A(iParam5);
		if (func_50(sParam4))
		{
			sVar0 = "STRING";
		}
		else
		{
			sVar0 = sParam4;
		}
		unk_0xA004CFE21CA812EA(sVar0);
		unk_0x628846883063947B(iParam2, iParam3);
		unk_0x834054753F171911(func_366(*uParam0), func_365(uParam0->f_1), 0);
	}
}

float func_365(float fParam0)
{
	return (fParam0 + fLocal_13);
}

float func_366(float fParam0)
{
	return (fParam0 + fLocal_12);
}

int func_367()
{
	if (func_368())
	{
		return 1;
	}
	if (unk_0x29AFA2493D7C23D0())
	{
		return 0;
	}
	if (unk_0xC584A413BCB2AA39() || unk_0xC11AD1609CFCCCE1())
	{
		return 0;
	}
	if (unk_0x3A93B922D5E9060F())
	{
		return 0;
	}
	return 1;
}

bool func_368()
{
	return Global_1312438;
}

void func_369(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 255;
}

void func_370(float fParam0, var uParam1)
{
	*fParam0 = (((*fParam0 - 0.5f) * 1.33f) + 0.5f);
	uParam1->f_8 = (((uParam1->f_8 - 0.5f) * 1.33f) + 0.5f);
	uParam1->f_9 = (((uParam1->f_9 - 0.5f) * 1.33f) + 0.5f);
}

void func_371(float fParam0, int iParam1)
{
	fParam0->f_4 = 255;
	fParam0->f_5 = 255;
	fParam0->f_6 = 255;
	if (iParam1 == 1)
	{
		fParam0->f_7 = 255;
	}
}

void func_372(float fParam0, bool bParam1)
{
	if (!bParam1)
	{
		*fParam0 = (((*fParam0 - 0.5f) * 1.33f) + 0.5f);
	}
	fParam0->f_2 = (fParam0->f_2 * 1.33f);
}

void func_373(var uParam0)
{
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
}

void func_374(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)
{
	var uVar0;
	
	uVar0 = sParam2;
	if (!func_50(uVar0))
	{
		if (func_367())
		{
			func_357(uParam1, 0);
			unk_0xB9C36653170A5C02(iParam4);
			unk_0x2BE2394F62FC653A(iParam3);
			func_375(func_366(*uParam0), func_365(uParam0->f_1), uVar0, 0);
		}
	}
}

void func_375(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0xA004CFE21CA812EA(uParam2);
	unk_0x834054753F171911(uParam0, uParam1, iParam3);
}

void func_376(var uParam0, var uParam1, float fParam2, float fParam3)
{
	uParam0->f_8 = (*uParam1 - (uParam1->f_2 / 2f));
	uParam0->f_9 = (*uParam1 + (uParam1->f_2 / 2f));
	uParam0->f_8 = (uParam0->f_8 + fParam2);
	uParam0->f_9 = (uParam0->f_9 - fParam3);
}

void func_377(var uParam0)
{
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	func_378(uParam0, 2);
}

void func_378(var uParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0xDFC297A2CE47E495(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_3 = uVar0;
	uParam0->f_4 = uVar1;
	uParam0->f_5 = uVar2;
}

void func_379(float fParam0, var uParam1, char* sParam2, bool bParam3)
{
	if (bParam3)
	{
		unk_0x7F3AA121397DEEC9(1);
	}
	func_374(fParam0, uParam1, sParam2, 0, 0);
}

void func_380(var uParam0)
{
	func_378(uParam0, 1);
}

void func_381(struct<8> Param0, int iParam8, int iParam9)
{
	struct<8> Var0;
	
	Var0 = { Param0 };
	switch (iParam8)
	{
		case 2:
			func_385(&Var0);
			break;
		
		case 1:
			func_384(&Var0);
			break;
		
		case 3:
			func_383(&Var0);
			break;
		
		case 4:
			func_382(&Var0);
			break;
	}
	if (func_367())
	{
		if (iParam9 == 1)
		{
			unk_0x0AD1CA312687609D(func_366(Var0.f_0), func_365(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, 0);
		}
		else
		{
			unk_0x0AD1CA312687609D(func_366(Var0.f_0), func_365(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, 0);
		}
	}
}

void func_382(var uParam0)
{
	uParam0->f_4 = 200;
	uParam0->f_5 = 20;
	uParam0->f_6 = 20;
	uParam0->f_7 = 204;
}

void func_383(var uParam0)
{
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = 255;
}

void func_384(var uParam0)
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_385(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 150;
}

void func_386(char* sParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<9> Var0;
	
	Var0 = { *fParam2 };
	switch (iParam4)
	{
		case 0:
			func_393(&Var0);
			break;
		
		case 1:
			func_392(&Var0);
			break;
		
		case 5:
			func_391(&Var0);
			break;
		
		case 6:
			func_390(&Var0);
			break;
		
		case 7:
			func_389(&Var0);
			break;
		
		case 8:
			func_388(&Var0);
			break;
		
		case 9:
			func_387(&Var0);
			break;
	}
	if (func_367())
	{
		unk_0x7F3AA121397DEEC9(iParam5);
		if (iParam3 == 1)
		{
			unk_0xE31E1C3DC82BAC87(sParam0, sParam1, func_366(Var0.f_0), func_365(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		else
		{
			unk_0xE31E1C3DC82BAC87(sParam0, sParam1, func_366(Var0.f_0), func_365(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		unk_0x7F3AA121397DEEC9(4);
	}
}

void func_387(var uParam0)
{
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
}

void func_388(var uParam0)
{
	uParam0->f_7 = 2;
}

void func_389(var uParam0)
{
	uParam0->f_7 = 5;
}

void func_390(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
}

void func_391(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
}

void func_392(var uParam0)
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_393(var uParam0)
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
}

int func_394(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_526 == 1)
	{
		return 1;
	}
	if (iLocal_527)
	{
		return 0;
	}
	if (unk_0x83666F9FB8FEBD4B() < 500)
	{
		return 1;
	}
	if (bLocal_525)
	{
		if (unk_0xB93E207B3C65F1B1(2, 201))
		{
			iLocal_519 = unk_0xEDDCCC3D357A50F8();
			unk_0x35D7948F61AA3FEC(iLocal_519, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			iLocal_526 = 1;
			iLocal_527 = 1;
			*uParam0 = 0;
			return 1;
		}
		else if (unk_0xB93E207B3C65F1B1(2, 202))
		{
			iLocal_519 = unk_0xEDDCCC3D357A50F8();
			unk_0x35D7948F61AA3FEC(iLocal_519, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			unk_0xB8BB626315D394F5(1);
			func_517(&(Local_50.f_119));
			iLocal_526 = 1;
		}
		else
		{
			return 1;
		}
	}
	else if (unk_0xB93E207B3C65F1B1(2, 202) || unk_0xB93E207B3C65F1B1(2, 238))
	{
		iLocal_519 = unk_0xEDDCCC3D357A50F8();
		unk_0x35D7948F61AA3FEC(iLocal_519, "QUIT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		func_241(&(Local_50.f_119), 0, 0, 1, 1);
		func_240(&(Local_50.f_119), "FE_HLP29", 2, 201, 1, 1, 0);
		func_240(&(Local_50.f_119), "FE_HLP31", 2, 202, 1, 1, 0);
		func_4(&uLocal_521);
		iLocal_526 = 1;
		unk_0xB8BB626315D394F5(1);
		return 1;
	}
	iVar0 = 0;
	if (unk_0x913B1C01C1BA6C6F() && bLocal_525 == 0)
	{
		if (unk_0x2705BD3DB0D294CB(2))
		{
			Global_2549109 = func_398(0.201f, 0.222f, 0.198f, 0.0375f, 0.034f, 5, 255, 0, 1);
			func_397(0, Global_97961);
			if (func_396())
			{
				if (Global_2549109 == Global_97961)
				{
					iVar0 = 1;
				}
				else
				{
					iLocal_519 = unk_0xEDDCCC3D357A50F8();
					unk_0x2BAB5306B0345175(iLocal_519, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
					Global_97961 = Global_2549109;
					func_517(&(Local_50.f_119));
				}
			}
		}
	}
	if (unk_0xB93E207B3C65F1B1(2, 201) || iVar0 == 1)
	{
		iVar0 = 0;
		if (Global_98931.f_17657.f_12[Global_97961 /*8*/].f_4 == 0)
		{
			iLocal_519 = unk_0xEDDCCC3D357A50F8();
			unk_0x2BAB5306B0345175(iLocal_519, "CANCEL", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
		}
		else
		{
			iLocal_519 = unk_0xEDDCCC3D357A50F8();
			unk_0x2BAB5306B0345175(iLocal_519, "SELECT", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
			*uParam0 = 1;
			return 0;
		}
	}
	if ((unk_0xB93E207B3C65F1B1(2, 188) || func_395(0, uParam1)) || unk_0x093DEAE9A023FAA0(2, 241))
	{
		iVar1 = (Global_97961 - 1);
		if (iVar1 < 0)
		{
			iVar1 = 4;
		}
		iLocal_519 = unk_0xEDDCCC3D357A50F8();
		unk_0x2BAB5306B0345175(iLocal_519, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
		Global_97961 = iVar1;
		func_517(&(Local_50.f_119));
	}
	if ((unk_0xB93E207B3C65F1B1(2, 187) || func_395(1, uParam1)) || unk_0x093DEAE9A023FAA0(2, 242))
	{
		iVar2 = Global_97961 + 1;
		if (iVar2 > 4)
		{
			iVar2 = 0;
		}
		iLocal_519 = unk_0xEDDCCC3D357A50F8();
		unk_0x2BAB5306B0345175(iLocal_519, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
		Global_97961 = iVar2;
		func_517(&(Local_50.f_119));
	}
	return 1;
}

bool func_395(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = unk_0x0D349187279381B8(2, 195);
	iVar2 = unk_0x0D349187279381B8(2, 196);
	if (unk_0x013F97B9D88B92CA(iVar1) < 28 && unk_0x013F97B9D88B92CA(iVar2) < 28)
	{
		*uParam1 = 1;
		uParam1->f_1 = 0;
		return 0;
	}
	if (unk_0x48E480685981C7D4() < uParam1->f_1 + 250)
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
		uParam1->f_1 = unk_0x48E480685981C7D4();
		*uParam1 = 0;
	}
	return bVar0;
}

int func_396()
{
	if (unk_0x3D6272A8E1C449E9(2))
	{
		if (Global_2549109 > -1)
		{
			if (unk_0x093DEAE9A023FAA0(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_397(int iParam0, var uParam1)
{
	if (!unk_0x3D6272A8E1C449E9(2))
	{
		return 0;
	}
	if (unk_0xDB10DED5ABC4AA20() || unk_0x30D46D6512711A3E())
	{
		return 0;
	}
	unk_0xA5E37DF3441A38D9();
	if (Global_2549109 == -6)
	{
		unk_0xE2A7B0F0438F34BF(4);
		if (iParam0 && unk_0xCAD9951C953F5B2D(2, 237))
		{
			return 1;
		}
		else
		{
			Global_2549109 = -1;
			return 0;
		}
	}
	if (((Global_2549109 > -1 || Global_2549109 == -3) || Global_2549109 == -2) || unk_0x6124DE9C08C85589())
	{
		unk_0xE2A7B0F0438F34BF(1);
		return 0;
	}
	if (Global_2549109 == -1 && iParam0)
	{
		if (unk_0xCAD9951C953F5B2D(2, 237))
		{
			unk_0xE2A7B0F0438F34BF(4);
			Global_2549109 = -6;
			return 1;
		}
		else
		{
			unk_0xE2A7B0F0438F34BF(3);
			return 0;
		}
	}
	unk_0xE2A7B0F0438F34BF(1);
	return 0;
}

int func_398(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, bool bParam7, bool bParam8)
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
	if (!unk_0x3D6272A8E1C449E9(2))
	{
		return -1;
	}
	unk_0xDE1125A413AF241C(2, 200, 1);
	unk_0xA5E37DF3441A38D9();
	if (bParam8)
	{
		if (!unk_0xA8D3C47114E32A16())
		{
			fParam0 = (((fParam0 - 0.5f) * 1.33f) + 0.5f);
			fParam2 = (fParam2 * 1.33f);
		}
	}
	if (bParam7)
	{
		unk_0x700CD125EC59941D(76, 84);
		unk_0x931DC442937495CF(-0.05f, -0.05f, 0f, 0f);
		fVar5 = fParam0;
		fVar6 = fParam1;
		unk_0x2B04133D9C0E9617(fParam0, fParam1, &fParam0, &fParam1);
		unk_0x94CD3CDE7BD3510B();
	}
	fVar0 = (fParam0 + fParam2);
	fVar1 = (fParam1 + (fParam3 * IntToFloat(iParam5)));
	fVar2 = unk_0x208A691F35C2C023(2, 239);
	fVar3 = unk_0x208A691F35C2C023(2, 240);
	if (((fVar2 >= fParam0 && fVar2 <= fVar0) && fVar3 >= fParam1) && fVar3 <= fVar1)
	{
		fVar4 = (fVar3 - fParam1);
		iVar7 = unk_0xF34EE736CF047844((fVar4 / fParam3));
		if (bParam7)
		{
			unk_0x700CD125EC59941D(76, 84);
			unk_0x931DC442937495CF(-0.05f, -0.05f, 0f, 0f);
			func_399(fVar5, (fVar6 + (IntToFloat(iVar7) * fParam3)), fParam2, fParam4, 255, 255, 255, iParam6);
			unk_0x94CD3CDE7BD3510B();
		}
		else
		{
			func_399(fParam0, (fParam1 + (IntToFloat(iVar7) * fParam3)), fParam2, fParam4, 255, 255, 255, iParam6);
		}
		return iVar7;
	}
	return -1;
}

void func_399(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, var uParam7)
{
	unk_0x0AD1CA312687609D((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, uParam7, 0);
}

int func_400()
{
	int iVar0;
	
	switch (iLocal_520)
	{
		case 0:
			unk_0xB8BB626315D394F5(1);
			unk_0x86B83C54AF71BD12("SP_SPR", 3);
			unk_0xB711FC19ADBD3C70("SPRRaces", 0);
			unk_0xB711FC19ADBD3C70("MPHUD", 0);
			iLocal_520 = 1;
			break;
		
		case 1:
			if (unk_0x138E88466113A6BE("SP_SPR", 3))
			{
				if (unk_0x682001A921A80123("SPRRaces"))
				{
					if (unk_0x682001A921A80123("MPHUD"))
					{
						iLocal_520 = 2;
					}
				}
			}
			break;
		
		case 2:
			unk_0x4B6F01DE8CCE643E(&(Local_50.f_119));
			Local_50.f_119 = 0;
			func_517(&(Local_50.f_119));
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 0, 512);
			}
			func_126(1);
			unk_0xFF7EEE3F99F568CD(1);
			unk_0xC390A6485FB80923(Local_50.f_1, 4);
			func_351();
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Local_50.f_11)
			{
				iLocal_530[iVar0] = -1;
				iVar0++;
			}
			func_404(&uLocal_591);
			func_401();
			unk_0x45D2AAD93E9AC4B3("MinigameTransitionIn", 0, 1);
			iLocal_520 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_401()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_98931.f_17657.f_12[iVar0 /*8*/] = { func_403(iVar0) };
		MemCopy(&(Local_50.f_24[iVar0 /*8*/]), {Global_98931.f_17657.f_12[iVar0 /*8*/]}, 8);
		Local_50.f_106[iVar0] = func_402(iVar0);
		Local_50.f_112[iVar0] = func_22(iVar0);
		if (iVar0 < (5 - 1))
		{
			if (Global_98931.f_17657.f_6[iVar0] > Local_50.f_112[iVar0] || Global_98931.f_17657.f_6[iVar0] <= 0f)
			{
				Global_98931.f_17657.f_12[iVar0 + 1 /*8*/].f_4 = 0;
			}
			else
			{
				Global_98931.f_17657.f_12[iVar0 + 1 /*8*/].f_4 = 1;
			}
		}
		iVar0++;
	}
	Global_98931.f_17657.f_12[0 /*8*/].f_4 = 1;
}

float func_402(int iParam0)
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

struct<4> func_403(int iParam0)
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

void func_404(var uParam0)
{
	func_407();
	bLocal_590 = unk_0xA8D3C47114E32A16();
	func_280(uParam0);
	func_258(&(uParam0->f_741));
	func_405(uParam0);
}

void func_405(var uParam0)
{
	bool bVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	
	bVar0 = unk_0xA8D3C47114E32A16();
	func_257(&(uParam0->f_316[0 /*2*/]), 262f, (71f - func_406(0.00278f, 720, 1)), 1);
	func_257(&(uParam0->f_316[1 /*2*/]), (257f + 127f), (125f - func_406(0.00417f, 720, 1)), 1);
	func_257(&(uParam0->f_316[2 /*2*/]), (513f + 127f), (125f - func_406(0.00417f, 720, 1)), 1);
	func_257(&(uParam0->f_316[3 /*2*/]), (769f + 127f), (125f - func_406(0.00417f, 720, 1)), 1);
	func_257(&(uParam0->f_316[17 /*2*/]), (257f + func_256(0.0047f, 1280, 1)), 162f, 1);
	func_257(&(uParam0->f_316[18 /*2*/]), (257f + func_256(0.0047f, 1280, 1)), 189f, 1);
	func_257(&(uParam0->f_316[19 /*2*/]), (257f + func_256(0.0047f, 1280, 1)), 216f, 1);
	func_257(&(uParam0->f_316[20 /*2*/]), (257f + func_256(0.0047f, 1280, 1)), 243f, 1);
	func_257(&(uParam0->f_316[21 /*2*/]), (257f + func_256(0.0047f, 1280, 1)), 270f, 1);
	func_257(&(uParam0->f_316[22 /*2*/]), (257f + func_256(0.0047f, 1280, 1)), 297f, 1);
	func_257(&(uParam0->f_316[16 /*2*/]), (513f + func_256(0.0047f, 1280, 1)), (299f - func_406(0.00278f, 720, 1)), 1);
	func_257(&(uParam0->f_316[4 /*2*/]), (769f + func_256(0.0047f, 1280, 1)), 297f, 1);
	func_257(&(uParam0->f_316[5 /*2*/]), 769f, 297f, 1);
	func_257(&(uParam0->f_316[8 /*2*/]), (769f + func_256(0.0047f, 1280, 1)), 351f, 1);
	func_257(&(uParam0->f_316[9 /*2*/]), 324f, 351f, 1);
	func_257(&(uParam0->f_316[6 /*2*/]), (769f + func_256(0.0047f, 1280, 1)), (324f - func_406(0.00278f, 720, 1)), 1);
	func_257(&(uParam0->f_316[7 /*2*/]), 324f, (324f - func_406(0.00278f, 720, 1)), 1);
	func_257(&(uParam0->f_316[15 /*2*/]), 810f, 459f, 1);
	func_257(&(uParam0->f_316[14 /*2*/]), 896f, 459f, 1);
	func_257(&(uParam0->f_316[13 /*2*/]), 982f, 459f, 1);
	func_253(uParam0[0 /*9*/], 257f, 55f, 766f, 105f, 1);
	unk_0xDFC297A2CE47E495(117, &uVar1, &uVar2, &uVar3, &uVar4);
	func_252(uParam0[0 /*9*/], uVar1, uVar2, uVar3, uVar4);
	func_253(uParam0[1 /*9*/], 496f, 171f, 32f, 32f, 0);
	func_252(uParam0[1 /*9*/], 255, 255, 255, 255);
	func_253(uParam0[2 /*9*/], 496f, 198f, 32f, 32f, 0);
	func_252(uParam0[2 /*9*/], 255, 255, 255, 255);
	func_253(uParam0[3 /*9*/], 496f, 225f, 32f, 32f, 0);
	func_252(uParam0[3 /*9*/], 255, 255, 255, 255);
	func_253(uParam0[4 /*9*/], 496f, 252f, 32f, 32f, 0);
	func_252(uParam0[4 /*9*/], 255, 255, 255, 255);
	func_253(uParam0[5 /*9*/], 496f, 279f, 32f, 32f, 0);
	func_252(uParam0[5 /*9*/], 255, 255, 255, 255);
	func_253(uParam0[6 /*9*/], (486f + func_256(0.0047f, 1280, 1)), 310f, 32f, 32f, 0);
	func_252(uParam0[6 /*9*/], 255, 255, 255, 255);
	func_253(uParam0[7 /*9*/], 640f, 224f, 256f, 256f, 0);
	func_252(uParam0[7 /*9*/], 255, 255, 255, 255);
	func_253(uParam0[9 /*9*/], 896f, 223f, 128f, 128f, 0);
	func_252(uParam0[9 /*9*/], 255, 255, 255, 255);
	func_253(uParam0[13 /*9*/], 770.5f, 374.5f, 80f, 80f, 1);
	func_252(uParam0[13 /*9*/], 255, 255, 255, 255);
	func_253(uParam0[12 /*9*/], 856f, 374.5f, 80f, 80f, 1);
	func_252(uParam0[12 /*9*/], 255, 255, 255, 255);
	func_253(uParam0[11 /*9*/], 941.5f, 374.5f, 80f, 80f, 1);
	func_252(uParam0[11 /*9*/], 255, 255, 255, 255);
	func_247(&(uParam0->f_420[3 /*8*/]), 257f, 114f, 254f, 5f, 1);
	func_246(&(uParam0->f_420[3 /*8*/]), 70, 70, 130, 255);
	func_247(&(uParam0->f_420[4 /*8*/]), 513f, 114f, 254f, 5f, 1);
	func_246(&(uParam0->f_420[4 /*8*/]), 70, 70, 130, 255);
	func_247(&(uParam0->f_420[5 /*8*/]), 769f, 114f, 254f, 5f, 1);
	func_246(&(uParam0->f_420[5 /*8*/]), 70, 70, 130, 255);
	func_247(&(uParam0->f_420[0 /*8*/]), 257f, 119f, 254f, 26f, 1);
	func_245(&(uParam0->f_420[0 /*8*/]), 1, 1);
	func_247(&(uParam0->f_420[1 /*8*/]), 513f, 119f, 254f, 26f, 1);
	func_245(&(uParam0->f_420[1 /*8*/]), 1, 1);
	func_247(&(uParam0->f_420[2 /*8*/]), 769f, 119f, 254f, 26f, 1);
	func_245(&(uParam0->f_420[2 /*8*/]), 1, 1);
	func_247(&(uParam0->f_420[7 /*8*/]), 513f, 159f, 254f, 133f, 1);
	func_245(&(uParam0->f_420[7 /*8*/]), 117, 1);
	func_247(&(uParam0->f_420[8 /*8*/]), 769f, 159f, 254f, 133f, 1);
	func_245(&(uParam0->f_420[8 /*8*/]), 117, 1);
	func_247(&(uParam0->f_420[9 /*8*/]), 257f, 159f, 254f, 25f, 1);
	func_245(&(uParam0->f_420[9 /*8*/]), 117, 1);
	func_247(&(uParam0->f_420[10 /*8*/]), 257f, 186f, 254f, 25f, 1);
	func_245(&(uParam0->f_420[10 /*8*/]), 117, 1);
	func_247(&(uParam0->f_420[11 /*8*/]), 257f, 213f, 254f, 25f, 1);
	func_245(&(uParam0->f_420[11 /*8*/]), 117, 1);
	func_247(&(uParam0->f_420[12 /*8*/]), 257f, 240f, 254f, 25f, 1);
	func_245(&(uParam0->f_420[12 /*8*/]), 117, 1);
	func_247(&(uParam0->f_420[13 /*8*/]), 257f, 267f, 254f, 25f, 1);
	func_245(&(uParam0->f_420[13 /*8*/]), 117, 1);
	func_247(&(uParam0->f_420[26 /*8*/]), 257f, 294f, 254f, 2f, 1);
	func_245(&(uParam0->f_420[26 /*8*/]), 1, 1);
	func_247(&(uParam0->f_420[14 /*8*/]), 257f, 294f, 254f, 75f, 1);
	func_245(&(uParam0->f_420[14 /*8*/]), 117, 1);
	func_247(&(uParam0->f_420[15 /*8*/]), 257f, 294f, (254f - 32f), 75f, 1);
	func_245(&(uParam0->f_420[15 /*8*/]), 1, 1);
	func_247(&(uParam0->f_420[25 /*8*/]), 513f, 294f, 254f, 133f, 1);
	func_245(&(uParam0->f_420[25 /*8*/]), 117, 1);
	func_247(&(uParam0->f_420[16 /*8*/]), 769f, 294f, 254f, 25f, 1);
	func_245(&(uParam0->f_420[16 /*8*/]), 117, 1);
	func_247(&(uParam0->f_420[17 /*8*/]), 769f, 321f, 254f, 25f, 1);
	func_245(&(uParam0->f_420[17 /*8*/]), 117, 1);
	func_247(&(uParam0->f_420[18 /*8*/]), 769f, 348f, 254f, 25f, 1);
	func_245(&(uParam0->f_420[18 /*8*/]), 117, 1);
	func_247(&(uParam0->f_420[21 /*8*/]), 769f, 375f, 83f, 84f, 1);
	func_245(&(uParam0->f_420[21 /*8*/]), 117, 1);
	func_247(&(uParam0->f_420[20 /*8*/]), 854f, 375f, 84f, 84f, 1);
	func_245(&(uParam0->f_420[20 /*8*/]), 117, 1);
	func_247(&(uParam0->f_420[19 /*8*/]), 940f, 375f, 83f, 84f, 1);
	func_245(&(uParam0->f_420[19 /*8*/]), 117, 1);
	func_247(&(uParam0->f_420[22 /*8*/]), 769f, 456f, 83f, 25f, 1);
	func_245(&(uParam0->f_420[22 /*8*/]), 109, 1);
	func_247(&(uParam0->f_420[23 /*8*/]), 854f, 456f, 84f, 25f, 1);
	func_245(&(uParam0->f_420[23 /*8*/]), 108, 1);
	func_247(&(uParam0->f_420[24 /*8*/]), 940f, 456f, 83f, 25f, 1);
	func_245(&(uParam0->f_420[24 /*8*/]), 107, 1);
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

float func_406(float fParam0, int iParam1, bool bParam2)
{
	var uVar0;
	float fVar1;
	
	if (iParam1 == 0)
	{
		unk_0xF8BA71207732310A(&uVar0, &iParam1);
	}
	fVar1 = (fParam0 * IntToFloat(iParam1));
	if (bParam2)
	{
		return unk_0xBBDA792448DB5A89(unk_0xF2DB717A73826179(fVar1));
	}
	return fVar1;
}

void func_407()
{
	int iVar0;
	
	unk_0x753D4A0181B2C174();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1838575.f_81[iVar0] = 0;
		iVar0++;
	}
}

void func_408(var uParam0)
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

int func_409(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (unk_0x98465343DD18A1F7())
	{
		if (!iLocal_528)
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
			func_437(Local_50.f_10, &(Local_50.f_65[Local_50.f_10 /*8*/]));
			if (bParam1)
			{
				func_434(Local_50.f_10, uParam0->f_358[0 /*189*/].f_13, iVar0);
				iLocal_528 = 1;
				return 1;
			}
			else if (func_410(Local_50.f_10, uParam0->f_358[0 /*189*/].f_13, iVar0))
			{
				iLocal_528 = 1;
				return 1;
			}
		}
	}
	else if (bParam1)
	{
		iLocal_528 = 1;
	}
	return 0;
}

int func_410(int iParam0, float fParam1, int iParam2)
{
	if (Global_1835013.f_1 && !Global_1835013.f_2)
	{
		func_434(iParam0, fParam1, iParam2);
		Global_1835013.f_2 = 1;
	}
	if (func_411(&uLocal_1578))
	{
		Global_1835388 = 1;
		return 1;
	}
	return 0;
}

int func_411(var uParam0)
{
	struct<98> Var0;
	struct<4> Var98;
	struct<37> Var106;
	struct<13> Var175;
	int iVar188;
	
	Var0.f_19.f_1 = 4;
	Var106.f_3 = 32;
	Var106.f_36 = 32;
	if (func_433(uParam0->f_44))
	{
		Var175 = { Global_1835013.f_361 };
	}
	else
	{
		Var175 = { func_432(unk_0x1329891157A54C63()) };
	}
	switch (Global_1835013)
	{
		case 0:
			if (func_431(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &Var175))
			{
				func_430(&Var98, &(uParam0->f_44));
				Global_1835013.f_142 = uParam0->f_44;
				Global_1835013.f_142.f_1 = unk_0xF5E17CC349816021(uParam0->f_44, 0);
				iVar188 = 0;
				while (iVar188 < Global_1835013.f_142.f_1)
				{
					if (!func_429(uParam0->f_44, iVar188))
					{
						if (func_428(uParam0->f_44, 4, iVar188))
						{
							unk_0xF3148AAF69AF9CBC(&(Global_1835013.f_142.f_2), iVar188);
						}
						else
						{
							unk_0xC69E84EBBD7166E6(&(Global_1835013.f_142.f_2), iVar188);
						}
					}
					iVar188++;
				}
				if (uParam0->f_5 && unk_0x83AADE55631E4239(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						unk_0xD70C08D94409367B(0, &Var0);
						if (Var0.f_97 != Global_1835013.f_142.f_1)
						{
						}
						if (!func_427(Var0))
						{
							Global_1835013.f_4 = 1;
						}
						else
						{
							iVar188 = 0;
							while (iVar188 < Global_1835013.f_142.f_1)
							{
								if (!func_429(uParam0->f_44, iVar188))
								{
									if (func_428(uParam0->f_44, 4, iVar188))
									{
										Global_1835013.f_73.f_36[iVar188] = unk_0xCE8F7BB4AA22190C(0, iVar188);
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
										Global_1835013.f_73.f_3[iVar188] = unk_0xD10657024EC7DC5A(0, iVar188);
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
					unk_0xEA7EF5E94C3DA740();
				}
				else
				{
					Global_1835013.f_4 = 1;
				}
				Global_1835013 = 1;
				func_348(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 1:
			Global_1835013.f_1 = 1;
			if (Global_1835013.f_2)
			{
				func_426();
				if (Global_1835013.f_4)
				{
					if (func_425(uParam0->f_44))
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
			unk_0xABF93341F624A807(&(Global_1835013.f_73), &(Global_1835013.f_142), &(Global_1835013.f_211));
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
			if (unk_0x1C6DF6AD69BE853E() && func_424())
			{
				if (func_423())
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
			if (func_425(uParam0->f_44))
			{
				Global_1835013.f_280 = { Global_1835013.f_142 };
			}
			else
			{
				Var106.f_0 = Global_1835013.f_142;
				Var106.f_1 = Global_1835013.f_142.f_1;
				Var106.f_2 = Global_1835013.f_142.f_2;
				unk_0xABF93341F624A807(&Var106, &(Global_1835013.f_142), &(Global_1835013.f_280));
			}
			Global_1835013 = 100;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 100:
			if (func_412(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, &Var175, 1, 1, Global_1835013.f_280.f_36[0], Global_1835013.f_280.f_3[0]))
			{
				func_430(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x83AADE55631E4239(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						unk_0xD70C08D94409367B(0, &Var0);
						if (unk_0xD994929E13CC1ED5(&(Var0.f_13), ""))
						{
							Global_975518.f_1 = -1;
						}
						else
						{
							Global_975518.f_1 = Var0.f_96;
						}
					}
					else
					{
						Global_975518.f_1 = -1;
					}
					unk_0xEA7EF5E94C3DA740();
				}
				else
				{
					Global_975518.f_1 = -1;
				}
				Global_1835013 = 999;
				func_348(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 999:
			return 1;
			break;
	}
	return 0;
}

int func_412(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
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
			if (!func_419() && !func_415())
			{
				func_413(*uParam2);
				if (bParam5)
				{
					if (unk_0x236D8AD7EE179F46(Global_1835013.f_142.f_2, 0))
					{
						if (unk_0xE22603BFD1B9459F(uParam2, uVar0, iParam3))
						{
							*uParam0++;
						}
						else
						{
							*uParam1 = 0;
							*uParam0 = 3;
						}
					}
					else if (unk_0x5A36FFC1C1E274F0(uParam2, uVar1, iParam3))
					{
						*uParam0++;
					}
					else
					{
						*uParam1 = 0;
						*uParam0 = 3;
					}
				}
				else if (unk_0x1F7C737EBF3A9716(uParam2, iParam3, uParam4))
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
			if (!unk_0xC67E0AF38C9CA717(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0xEB82BA97438BAC53(*uParam2, uParam2->f_1, 0))
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

void func_413(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)
{
	Global_1835008 = 1;
	func_414(&(Global_1835008.f_1), 1, 0);
	Global_1835008.f_3 = Param0.f_0;
	Global_1835008.f_4 = Param0.f_1;
}

void func_414(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x1C6DF6AD69BE853E() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0xD74C7D8D2E5E43D2();
		}
		else
		{
			*uParam0 = unk_0xE36DF6414E5CCBBF();
		}
	}
	else
	{
		*uParam0 = unk_0x48E480685981C7D4();
	}
	uParam0->f_1 = 1;
}

int func_415()
{
	if (unk_0xDB10DED5ABC4AA20() && !func_416())
	{
		return 1;
	}
	return 0;
}

bool func_416()
{
	return func_417(unk_0x1329891157A54C63());
}

int func_417(int iParam0)
{
	switch (func_418(iParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 38:
		case 33:
		case 36:
		case 39:
			return 0;
		
		default:
	}
	return 1;
}

int func_418(int iParam0)
{
	return Global_1585045[iParam0 /*400*/].f_177;
}

int func_419()
{
	if (unk_0xCD2B9B60F0392D67() || Global_1835008)
	{
		func_420();
		return 1;
	}
	return 0;
}

void func_420()
{
	if (func_421(&(Global_1835008.f_1), 120000, 1))
	{
		unk_0xF8F860AB8EB0215D(Global_1835008.f_3, Global_1835008.f_4, -1);
		Global_1835008 = 0;
		func_343(&(Global_1835008.f_1));
	}
}

int func_421(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_422(uParam0, bParam2, 0);
	if (unk_0x1C6DF6AD69BE853E() && !bParam2)
	{
		if (unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(unk_0x48E480685981C7D4(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_422(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x1C6DF6AD69BE853E() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xD74C7D8D2E5E43D2();
			}
			else
			{
				*uParam0 = unk_0xE36DF6414E5CCBBF();
			}
		}
		else
		{
			*uParam0 = unk_0x48E480685981C7D4();
		}
		uParam0->f_1 = 1;
	}
}

bool func_423()
{
	return unk_0x236D8AD7EE179F46(Global_967557.f_8, 1);
}

var func_424()
{
	return Global_2435406.f_3;
}

int func_425(int iParam0)
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

void func_426()
{
	Global_1835013.f_73 = Global_1835013.f_142;
	Global_1835013.f_73.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_73.f_2 = Global_1835013.f_142.f_2;
	Global_1835013.f_211 = Global_1835013.f_142;
	Global_1835013.f_211.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_211.f_2 = Global_1835013.f_142.f_2;
}

bool func_427(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x7BD139E6ED31A2EB(&uParam0, 13);
}

int func_428(int iParam0, int iParam1, int iParam2)
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
	if (iParam0 == 780)
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
	iVar0 = unk_0x116452815BF6FA48(iParam0, iParam1, iParam2);
	switch (iVar0)
	{
		case 1:
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_429(int iParam0, int iParam1)
{
	if (unk_0xD0CCFE1CBC86E0B7(iParam0, 4, iParam1) == 156)
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

void func_430(var uParam0, var uParam1)
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0;
}

int func_431(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_419() && !func_415())
			{
				func_413(*uParam2);
				if (unk_0xB71D92AE73B8183B(uParam2, uParam3))
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
			if (!unk_0xC67E0AF38C9CA717(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0xEB82BA97438BAC53(*uParam2, uParam2->f_1, 0))
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

struct<13> func_432(int iParam0)
{
	struct<13> Var0;
	
	unk_0x73231AB7B8BD1CD1(iParam0, &Var0, 13);
	return Var0;
}

int func_433(int iParam0)
{
	if (iParam0 == 825 || iParam0 == 828)
	{
		return 1;
	}
	return 0;
}

void func_434(int iParam0, float fParam1, int iParam2)
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
	if (func_436(817, &Var3, &Var22, 3, -1, 1, 0))
	{
		if (iParam2 <= 3 && iParam2 > 0)
		{
			func_435(817, 131, -unk_0x11E019C8F43ACC8A((fParam1 * 100f)) * 10, 0f, 0);
		}
		else
		{
			func_435(817, 131, 0, 0f, 0);
		}
		func_435(817, 96, ((iVar0 * 1 + iVar1 * 2) + iVar2 * 3), 0f, 0);
		func_435(817, 2, unk_0x11E019C8F43ACC8A((fParam1 * 100f)) * 10, 0f, 0);
		func_435(817, 147, unk_0x11E019C8F43ACC8A((fParam1 * 100f)) * 10, 0f, 0);
		func_435(817, 149, 0, 0f, 0);
		func_435(817, 148, 0, 0f, 0);
		func_435(817, 109, 1, 0f, 0);
		func_435(817, 157, iVar0, 0f, 0);
		func_435(817, 158, iVar1, 0f, 0);
		func_435(817, 86, iVar2, 0f, 0);
	}
}

void func_435(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!bParam4)
	{
		unk_0x63CCF741F5F72521(iParam1, iParam2, fParam3);
	}
	if (!Global_1835013.f_3)
	{
		Global_1835013.f_142 = iParam0;
		Global_1835013.f_142.f_1 = unk_0xF5E17CC349816021(Global_1835013.f_142, 0);
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (iVar1 < Global_1835013.f_142.f_1)
			{
				if (iParam1 == 156)
				{
				}
				else if (func_428(iParam0, 4, iVar1))
				{
					unk_0xF3148AAF69AF9CBC(&(Global_1835013.f_142.f_2), iVar1);
				}
				else
				{
					unk_0xC69E84EBBD7166E6(&(Global_1835013.f_142.f_2), iVar1);
				}
			}
			else
			{
				unk_0xC69E84EBBD7166E6(&(Global_1835013.f_142.f_2), iVar1);
			}
			iVar1++;
		}
		Global_1835013.f_3 = 1;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iParam1 == unk_0xD0CCFE1CBC86E0B7(iParam0, 4, iVar1))
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
		unk_0xF3148AAF69AF9CBC(&(Global_1835013.f_142.f_2), iVar0);
	}
	else if (fParam3 != 0f)
	{
		unk_0xC69E84EBBD7166E6(&(Global_1835013.f_142.f_2), iVar0);
	}
}

int func_436(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar68;
	struct<13> Var69;
	var uVar82;
	
	if (!unk_0x1F2C82EFDAD19C5D())
	{
	}
	if ((!unk_0x048404777B43DB4C() && (unk_0x90D70709D2558B5A() || !unk_0x145838334F50DC33())) && unk_0x0E42A3FF41472888())
	{
		Var0.f_2.f_1 = 4;
		Var0.f_0 = iParam0;
		if (iParam4 == -1)
		{
			if (unk_0x80622F5ED5957337())
			{
				Var69 = { func_432(unk_0x1329891157A54C63()) };
				if (unk_0x464883E45616A088(&Var69))
				{
					if (unk_0xEF956A1EC046AA4A(&uVar82, 35, &Var69))
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
			if (unk_0x1C6DF6AD69BE853E() && Global_2435406.f_3)
			{
				unk_0x1FCDB6131A5D6125(&Var0, &(Global_1698884.f_10));
			}
			else
			{
				unk_0x473BB6AF48713A44(&Var0);
			}
		}
		return 1;
	}
	if (unk_0x048404777B43DB4C())
	{
	}
	if (!unk_0x90D70709D2558B5A())
	{
	}
	if (unk_0x145838334F50DC33())
	{
	}
	if (!unk_0x0E42A3FF41472888())
	{
	}
	return 0;
}

void func_437(int iParam0, char[4] cParam1)
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
	func_438(&uLocal_1578, 86, &Var0, cParam1, -1, -1, 0, 0);
}

void func_438(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	struct<8> Var0;
	struct<8> Var8;
	int iVar16;
	struct<6> Var17;
	
	if (!unk_0xB318FDA0D1ABDB20(sParam2))
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
				if (iParam5 > 0 && !func_441())
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
				if (iParam5 > 0 && !func_441())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0xB318FDA0D1ABDB20(sParam3))
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
					if (!unk_0xB318FDA0D1ABDB20(sParam3))
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
				if (iParam5 <= 0 || func_441())
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
					unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
					unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
				if (iParam5 > 0 && !func_441())
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
				if (iParam5 > 0 && !func_441())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0xB318FDA0D1ABDB20(sParam3))
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
					if (!unk_0xB318FDA0D1ABDB20(sParam3))
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
				if (iParam5 <= 0 || func_441())
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
					unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
					unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
				if (iParam5 > 0 && !func_441())
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
					unk_0x2D00A9DFCB53B3E8(unk_0x1329891157A54C63(), &Var17);
					MemCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), {Var17}, 8);
					Global_1835390.f_2780.f_27 = 1;
				}
				if (iParam5 > 0 && !func_441())
				{
					uParam0->f_44.f_3 = 3;
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[2 /*16*/].f_8 = { Var8 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0xB318FDA0D1ABDB20(sParam3))
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
					if (!unk_0xB318FDA0D1ABDB20(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE", 32);
						StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE_NN", 32);
					}
				}
				if (iParam5 <= 0 || func_441())
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
					unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
					unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
				if (iParam5 > 0 && !func_441())
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
				if (iParam5 > 0 && !func_441())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0xB318FDA0D1ABDB20(sParam3))
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
					if (!unk_0xB318FDA0D1ABDB20(sParam3))
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
				if (iParam5 <= 0 || func_441())
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
					unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
					unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 1;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				Global_1835390.f_2779 = 0;
			}
			else if (iParam4 == 3)
			{
				if (iParam5 > 0 && !func_441())
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
				if (iParam5 > 0 && !func_441())
				{
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0xB318FDA0D1ABDB20(sParam3))
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
					if (!unk_0xB318FDA0D1ABDB20(sParam3))
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
				if (iParam5 <= 0 || func_441())
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
					unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
					unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
				if (!unk_0xB318FDA0D1ABDB20(sParam3))
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
				unk_0xC69E84EBBD7166E6(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0xC69E84EBBD7166E6(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
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
				if (!unk_0xB318FDA0D1ABDB20(sParam3))
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
				unk_0xC69E84EBBD7166E6(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0xC69E84EBBD7166E6(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
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
				if (!unk_0xB318FDA0D1ABDB20(sParam3))
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
				unk_0xC69E84EBBD7166E6(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0xC69E84EBBD7166E6(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
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
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
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
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xC69E84EBBD7166E6(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
			unk_0xC69E84EBBD7166E6(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
			if (unk_0xB318FDA0D1ABDB20(sParam3))
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
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
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
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
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
			unk_0xC69E84EBBD7166E6(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xC69E84EBBD7166E6(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
			MemCopy(&(Global_1835390.f_2780.f_9), {func_440(iParam1)}, 16);
			Global_1835390.f_2780.f_25 = 0;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WEAP", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 7;
			Global_1835390.f_2708 = 2;
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
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
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
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
			if (!unk_0xB318FDA0D1ABDB20(sParam3))
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
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
				if (!unk_0xB318FDA0D1ABDB20(sParam3))
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
				unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xC69E84EBBD7166E6(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				Global_1835390.f_2780.f_28 = 6;
				Global_1835390.f_2780.f_29[0] = 5;
				Global_1835390.f_2780.f_29[1] = 11;
				Global_1835390.f_2780.f_29[2] = 4;
				Global_1835390.f_2780.f_29[3] = 5;
				Global_1835390.f_2780.f_29[4] = 5;
			}
			else if (Global_1607808.f_42 == 1)
			{
				uParam0->f_44 = 777;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835390.f_2780 = 1;
				if (!unk_0xB318FDA0D1ABDB20(sParam3))
				{
					if (Global_1607808.f_2 == 5)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else if (Global_1607808.f_2 == 5)
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
				unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
				if (!unk_0xB318FDA0D1ABDB20(sParam3))
				{
					if (Global_1607808.f_2 == 5)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else if (Global_1607808.f_2 == 5)
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
				unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
			if (!unk_0xB318FDA0D1ABDB20(sParam3))
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
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2768), 1);
			Global_1835390.f_2754[1] = -1;
			Global_1835390.f_2710[2] = 2;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 3;
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
			if (!unk_0xB318FDA0D1ABDB20(sParam3))
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
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
					if (!unk_0xB318FDA0D1ABDB20(sParam3))
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
					unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
					if (!unk_0xB318FDA0D1ABDB20(sParam3))
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
					unk_0xC69E84EBBD7166E6(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
					if (!unk_0xB318FDA0D1ABDB20(sParam3))
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
					unk_0xC69E84EBBD7166E6(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
					if (!unk_0xB318FDA0D1ABDB20(sParam3))
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
					unk_0xC69E84EBBD7166E6(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
			if (!unk_0xB318FDA0D1ABDB20(sParam3))
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
			unk_0xC69E84EBBD7166E6(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
			if (!unk_0xB318FDA0D1ABDB20(sParam3))
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
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
			if (!unk_0xB318FDA0D1ABDB20(sParam3))
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
			unk_0xC69E84EBBD7166E6(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xC69E84EBBD7166E6(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
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
			if (!unk_0xB318FDA0D1ABDB20(sParam3))
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
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
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
				unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
				unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
		if (unk_0x236D8AD7EE179F46(Global_1835390.f_2769, Global_1835390.f_2710[iVar16]))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2770), iVar16);
		}
		iVar16++;
	}
	Global_1835390.f_2826 = func_439(Var0, uParam0->f_44, iParam1, iParam4, iParam5, bParam6);
}

int func_439(struct<8> Param0, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	char cVar0[64];
	
	MemCopy(&cVar0, {Param0}, 16);
	StringIntConCat(&cVar0, iParam8, 64);
	StringConCat(&cVar0, "_", 64);
	if (func_433(iParam8))
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
	return unk_0x8DAF7A748E41AD46(&cVar0);
}

struct<6> func_440(int iParam0)
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

int func_441()
{
	if (((((((Global_1607808.f_28668 == 1 || Global_1607808.f_28668 == 3) || Global_1607808.f_28668 == 5) || Global_1607808.f_28668 == 7) || Global_1607808.f_28668 == 8) || Global_1607808.f_28668 == 9) || Global_1607808.f_28668 == 11) || Global_1607808.f_28668 == 13)
	{
		return 1;
	}
	return 0;
}

int func_442(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 2;
	if (Global_1840922.f_2 + 5 < unk_0x5CE96B2C9C8B727F() && Global_1840922.f_2 > 0)
	{
		func_343(&Global_1840922);
		func_343(&(Global_1840922.f_49));
		*uParam0 = 0;
		Global_1840922.f_2 = 0;
		func_451(0);
	}
	Global_1840922.f_2 = unk_0x5CE96B2C9C8B727F();
	iVar1 = -1;
	if (unk_0xEC209B562C5EFDB2())
	{
		if (unk_0xE55A624845E6F922() == 0)
		{
			iVar1 = unk_0x969AEAED8E9E13DC();
		}
	}
	if ((unk_0xEC209B562C5EFDB2() && (((iVar1 == 4 || iVar1 == 2) || iVar1 == 1) || iVar1 == 5)) || (!func_449() && unk_0x1F2C82EFDAD19C5D()))
	{
		if (unk_0x66A7463BEA1F552D())
		{
			func_446(&(Global_1840922.f_3), func_448(&(Global_1840922.f_3)));
			if (!unk_0x236D8AD7EE179F46(*uParam0, 4))
			{
				unk_0xF3148AAF69AF9CBC(uParam0, 4);
				StringCopy(&(Global_1840922.f_3.f_1), "", 64);
				func_444(&(Global_1840922.f_3), 0);
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
			else if (!func_449())
			{
				unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_ROS", iVar0, 0, 0, -1, 0, 0, 1);
			}
			if (!unk_0x236D8AD7EE179F46(*uParam0, 0))
			{
				if (!unk_0xCAD9951C953F5B2D(2, 201))
				{
					unk_0xF3148AAF69AF9CBC(uParam0, 0);
				}
			}
			else if (unk_0xB93E207B3C65F1B1(2, 201))
			{
				func_343(&(Global_1840922.f_49));
				func_343(&Global_1840922);
				*uParam0 = 0;
				Global_1840922.f_2 = 0;
				func_451(0);
				return 1;
			}
		}
	}
	else
	{
		func_446(&(Global_1840922.f_3), func_448(&(Global_1840922.f_3)));
		if ((func_443(&(Global_1840922.f_49)) && !func_421(&(Global_1840922.f_49), 2000, 1)) && !unk_0x1F2C82EFDAD19C5D())
		{
			unk_0xF3148AAF69AF9CBC(uParam0, 3);
			StringCopy(&(Global_1840922.f_3.f_1), "", 64);
			func_444(&(Global_1840922.f_3), 0);
		}
		else if (!unk_0x236D8AD7EE179F46(*uParam0, 3))
		{
			if (!unk_0x236D8AD7EE179F46(*uParam0, 1))
			{
				unk_0xE45B577D7E33E804(0);
				unk_0xF3148AAF69AF9CBC(uParam0, 1);
				StringCopy(&(Global_1840922.f_3.f_1), "", 64);
				func_444(&(Global_1840922.f_3), 0);
			}
		}
		if (func_443(&Global_1840922))
		{
			if (!func_421(&Global_1840922, 4000, 1))
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			if (bParam1)
			{
				if (!unk_0x1F2C82EFDAD19C5D())
				{
					if (unk_0x918F684E7238F75D())
					{
						unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "STORE_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1);
					}
					else
					{
						unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
					}
					if (!unk_0x735E6B6239CDDBEC())
					{
						if (!unk_0x236D8AD7EE179F46(*uParam0, 0))
						{
							if (!unk_0xCAD9951C953F5B2D(2, 201))
							{
								unk_0xF3148AAF69AF9CBC(uParam0, 0);
							}
						}
						else if (unk_0xB93E207B3C65F1B1(2, 201))
						{
							func_343(&Global_1840922);
							*uParam0 = 0;
							Global_1840922.f_2 = 0;
							func_451(0);
							return 1;
						}
					}
				}
				else
				{
					func_343(&Global_1840922);
					*uParam0 = 0;
					Global_1840922.f_2 = 0;
					func_451(0);
					return 1;
				}
			}
			else if (unk_0x236D8AD7EE179F46(*uParam0, 3))
			{
				if (unk_0x918F684E7238F75D())
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_SIGN_OUT", iVar0, 0, 0, -1, 0, 0, 1);
				}
				else
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
				}
				if (!unk_0x236D8AD7EE179F46(*uParam0, 0))
				{
					if (!unk_0xCAD9951C953F5B2D(2, 201))
					{
						unk_0xF3148AAF69AF9CBC(uParam0, 0);
					}
				}
				else if (unk_0xB93E207B3C65F1B1(2, 201))
				{
					func_343(&(Global_1840922.f_49));
					func_343(&Global_1840922);
					*uParam0 = 0;
					Global_1840922.f_2 = 0;
					func_451(0);
					return 1;
				}
			}
			else
			{
				if (unk_0x918F684E7238F75D())
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1);
				}
				else
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
				}
				if (!unk_0x735E6B6239CDDBEC())
				{
					if (!unk_0x236D8AD7EE179F46(*uParam0, 0))
					{
						if (!unk_0xCAD9951C953F5B2D(2, 201))
						{
							unk_0xF3148AAF69AF9CBC(uParam0, 0);
						}
					}
					else if (unk_0xB93E207B3C65F1B1(2, 201))
					{
						func_343(&(Global_1840922.f_49));
						func_343(&Global_1840922);
						*uParam0 = 0;
						Global_1840922.f_2 = 0;
						func_451(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_443(var uParam0)
{
	return uParam0->f_1;
}

void func_444(var uParam0, bool bParam1)
{
	func_445(uParam0);
	if (bParam1)
	{
		func_451(0);
	}
	uParam0->f_35 = 1;
}

void func_445(var uParam0)
{
	struct<46> Var0;
	
	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_446(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_447(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_36)
		{
			unk_0x91418342B226A788(&(uParam0->f_1));
			unk_0x6D55FF05D62B91BC(uParam0->f_33);
			unk_0x6D55FF05D62B91BC(uParam0->f_34);
			unk_0x15F4C49B01222ABB(uParam0->f_41);
		}
		else if (uParam0->f_37)
		{
			unk_0x91418342B226A788(&(uParam0->f_1));
			unk_0x6D55FF05D62B91BC(uParam0->f_33);
			unk_0x15F4C49B01222ABB(uParam0->f_41);
		}
		else if (uParam0->f_39)
		{
			unk_0x91418342B226A788(&(uParam0->f_1));
			unk_0x6222A57F463E8EE7(&(uParam0->f_17));
			unk_0x6D55FF05D62B91BC(uParam0->f_33);
			unk_0x6D55FF05D62B91BC(uParam0->f_34);
			unk_0x15F4C49B01222ABB(uParam0->f_41);
		}
		else if (uParam0->f_38)
		{
			unk_0x91418342B226A788(&(uParam0->f_1));
			unk_0x6222A57F463E8EE7(&(uParam0->f_17));
			unk_0x15F4C49B01222ABB(uParam0->f_41);
		}
		else if (uParam0->f_40)
		{
			unk_0x91418342B226A788(&(uParam0->f_1));
			unk_0x628846883063947B(uParam0->f_33, 70);
			unk_0x15F4C49B01222ABB(uParam0->f_41);
		}
		else
		{
			unk_0x91418342B226A788(&(uParam0->f_1));
			unk_0x15F4C49B01222ABB(uParam0->f_41);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_447(var uParam0)
{
	uParam0->f_35 = 0;
}

int func_448(var uParam0)
{
	return uParam0->f_35;
}

int func_449()
{
	if (func_450())
	{
		return 0;
	}
	if (unk_0x847832409C9B7582() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_450()
{
	return Global_2437061;
}

void func_451(bool bParam0)
{
	unk_0x81B3DBD3862D4A7D();
	if (bParam0)
	{
		unk_0x8EEE41DCB1FA42E8();
	}
}

void func_452(var uParam0, int iParam1, char[4] cParam2)
{
	func_140(&(Local_50.f_119), 1128792064, 1, 0, 1, 1065353216);
	unk_0xC9A352663D97EFC3(9);
	unk_0xC9A352663D97EFC3(7);
	func_437(iParam1, cParam2);
	func_453(uParam0, &uLocal_1578);
}

void func_453(var uParam0, var uParam1)
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
	
	func_414(&(Global_1840922.f_49), 1, 0);
	unk_0xB5BFC55E4F67D18D();
	func_513();
	func_512();
	unk_0xD61D5795530D0627();
	func_510();
	unk_0xC9A352663D97EFC3(10);
	func_509(1);
	func_508(1);
	if (!func_416())
	{
		if (!unk_0x12F24A1A22BF90A7("LEADERBOARD_SCENE"))
		{
			unk_0xF2A6D4C99549CA85("LEADERBOARD_SCENE");
		}
	}
	if (!unk_0x236D8AD7EE179F46(uParam1->f_42, 3))
	{
		*uParam0 = func_334();
		unk_0xF3148AAF69AF9CBC(&(uParam1->f_42), 3);
	}
	Var32 = { func_432(unk_0x1329891157A54C63()) };
	if (unk_0xCC8E3BAC62A29F42(*uParam0))
	{
		if (((!unk_0xFA106675D906ECBC() || !unk_0x98465343DD18A1F7()) || (!unk_0x90D70709D2558B5A() && unk_0x145838334F50DC33())) || Global_1835390.f_2832 != 0)
		{
			if (!unk_0x98465343DD18A1F7())
			{
				if (Global_1835390.f_2829 != 2)
				{
					unk_0xC69E84EBBD7166E6(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 2;
				}
			}
			else if (!unk_0x90D70709D2558B5A() && unk_0x145838334F50DC33())
			{
				if (Global_1835390.f_2829 != 3)
				{
					unk_0xC69E84EBBD7166E6(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 3;
				}
			}
			else if (!unk_0xFA106675D906ECBC())
			{
				if (Global_1835390.f_2829 != 4)
				{
					unk_0xC69E84EBBD7166E6(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 4;
				}
			}
			else if (Global_1835390.f_2832 != 0)
			{
				if (Global_1835390.f_2829 != 5)
				{
					unk_0xC69E84EBBD7166E6(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 5;
				}
			}
			if (!unk_0x236D8AD7EE179F46(uParam1->f_42, 1))
			{
				unk_0x21ED0FC9B5CC748B(*uParam0, "CLEAR_ALL_SLOTS");
				unk_0xBA9BA6181F2B6111();
				func_507(*uParam0, Global_1835390.f_2780);
				if (unk_0x7281387C8D4EC316(&(Global_1835390.f_2780.f_1)))
				{
					if (!func_433(uParam1->f_44))
					{
						if (Global_1835390.f_2780.f_26 > 0)
						{
							cVar9 = { Global_1835390.f_2780.f_9 };
							func_506(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &cVar9, Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							func_506(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					else if (!Global_1835390.f_2780.f_27)
					{
						StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
						if (Global_1835390.f_2780.f_26 > 0)
						{
							func_506(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							func_506(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					else
					{
						StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
						if (Global_1835390.f_2780.f_26 > 0)
						{
							func_506(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							func_506(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					func_505(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
				}
				iVar31 = 0;
				unk_0xF3148AAF69AF9CBC(&iVar31, 4);
				func_504(*uParam0, &iVar6, iVar31, 1, 1);
				iVar31 = 0;
				unk_0xF3148AAF69AF9CBC(&iVar31, 5);
				func_504(*uParam0, &iVar6, iVar31, 1, 1);
				iVar31 = 0;
				unk_0xF3148AAF69AF9CBC(&iVar31, 6);
				func_504(*uParam0, &iVar6, iVar31, 1, 1);
				unk_0xF3148AAF69AF9CBC(&(uParam1->f_42), 1);
				func_503(*uParam0);
				unk_0xC69E84EBBD7166E6(&(uParam1->f_42), 2);
				unk_0xB8BB626315D394F5(1);
			}
			else
			{
				func_503(*uParam0);
			}
		}
		else
		{
			if (Global_1835390.f_2829 != 1)
			{
				unk_0xC69E84EBBD7166E6(&(uParam1->f_42), 1);
				Global_1835390.f_2829 = 1;
			}
			if (!func_475(uParam1))
			{
				uParam1->f_246.f_1 = -1;
				unk_0xC69E84EBBD7166E6(&(uParam1->f_42), 1);
				if (!unk_0x236D8AD7EE179F46(uParam1->f_42, 0))
				{
					unk_0x21ED0FC9B5CC748B(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0xBA9BA6181F2B6111();
					func_507(*uParam0, Global_1835390.f_2780);
					if (unk_0x7281387C8D4EC316(&(Global_1835390.f_2780.f_1)))
					{
						if (!func_433(uParam1->f_44))
						{
							if (Global_1835390.f_2780.f_26 > 0)
							{
								cVar9 = { Global_1835390.f_2780.f_9 };
								func_506(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &cVar9, 1, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_506(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835390.f_2780.f_27)
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_506(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_506(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_506(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_506(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						func_505(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
					}
					unk_0xF3148AAF69AF9CBC(&(uParam1->f_42), 0);
					unk_0xC69E84EBBD7166E6(&(uParam1->f_42), 2);
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
							unk_0xF3148AAF69AF9CBC(&iVar31, 4);
							func_504(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar31 = 0;
							unk_0xF3148AAF69AF9CBC(&iVar31, 5);
							func_504(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar31 = 0;
							unk_0xF3148AAF69AF9CBC(&iVar31, 6);
							func_504(*uParam0, &iVar6, iVar31, 0, 0);
						}
						iVar31 = 0;
						unk_0xF3148AAF69AF9CBC(&iVar31, 7);
						func_474(*uParam0, iVar6, iVar31, &Var51);
						iVar6++;
						iVar0++;
					}
					Global_1835390.f_2825 = 1;
					func_343(&(Global_1835390.f_2823));
				}
				else if (func_421(&(Global_1835390.f_2823), 300, 0))
				{
					StringCopy(&Var57, "SC_LB_DL", 24);
					StringIntConCat(&Var57, Global_1835390.f_2825, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar31 = 0;
							unk_0xF3148AAF69AF9CBC(&iVar31, 4);
							func_504(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar31 = 0;
							unk_0xF3148AAF69AF9CBC(&iVar31, 5);
							func_504(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar31 = 0;
							unk_0xF3148AAF69AF9CBC(&iVar31, 6);
							func_504(*uParam0, &iVar6, iVar31, 0, 0);
						}
						iVar31 = 0;
						unk_0xF3148AAF69AF9CBC(&iVar31, 7);
						func_474(*uParam0, iVar6, iVar31, &Var57);
						iVar6++;
						iVar0++;
					}
					Global_1835390.f_2825++;
					if (Global_1835390.f_2825 > 3)
					{
						Global_1835390.f_2825 = 0;
					}
					func_343(&(Global_1835390.f_2823));
				}
				func_503(*uParam0);
			}
			else
			{
				unk_0xC69E84EBBD7166E6(&(uParam1->f_42), 0);
				if (!unk_0x236D8AD7EE179F46(uParam1->f_42, 1))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						uParam1->f_246.f_187[iVar0] = 0;
						iVar0++;
					}
					unk_0x21ED0FC9B5CC748B(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0xBA9BA6181F2B6111();
					func_507(*uParam0, Global_1835390.f_2780);
					if (unk_0x7281387C8D4EC316(&(Global_1835390.f_2780.f_1)))
					{
						if (!func_433(uParam1->f_44))
						{
							if (Global_1835390.f_2780.f_26 > 0)
							{
								cVar9 = { Global_1835390.f_2780.f_9 };
								func_506(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &cVar9, 1, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_506(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835390.f_2780.f_27)
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_506(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_506(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_506(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_506(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						func_505(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
					}
					if (!unk_0x236D8AD7EE179F46(uParam1->f_42, 6))
					{
						func_346(&Global_1839721);
						func_470(uParam1, &Global_1839721);
						func_469(uParam1, &Global_1839721);
					}
					iVar6 = 0;
					uParam1->f_246.f_2 = 0;
					if ((Global_1835390.f_2704[0] > 1 || (Global_1835390.f_2704[0] > 0 && Global_1835390.f_2775[0] != -1)) || (((Global_1835390.f_2704[0] > 0 && Global_1835390.f_2780.f_27) && func_433(uParam1->f_44)) && Global_1835390.f_2775[0] != -1))
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
									unk_0xF3148AAF69AF9CBC(&iVar31, 4);
									func_504(*uParam0, &iVar6, iVar31, 0, 0);
									iVar27[0] = 1;
								}
							}
							else if (Global_1839721[iVar0 /*100*/].f_75 == 2)
							{
								if (!iVar27[1])
								{
									iVar31 = 0;
									unk_0xF3148AAF69AF9CBC(&iVar31, 5);
									if ((Global_1835390.f_2704[1] < 1 && Global_1835390.f_2775[1] == -1) && !(((Global_1835390.f_2704[1] > 0 && Global_1835390.f_2780.f_27) && func_433(uParam1->f_44)) && Global_1835390.f_2775[1] != -1))
									{
										func_504(*uParam0, &iVar6, iVar31, 1, 0);
										bVar63 = true;
									}
									else
									{
										func_504(*uParam0, &iVar6, iVar31, 0, 0);
									}
									iVar27[1] = 1;
								}
							}
							else if (Global_1839721[iVar0 /*100*/].f_75 == 3)
							{
								if (!iVar27[2])
								{
									iVar31 = 0;
									unk_0xF3148AAF69AF9CBC(&iVar31, 6);
									if (!unk_0x9F80443939366966())
									{
										bVar63 = true;
									}
									else if (!unk_0xB8FFC89E139FFE2E())
									{
										bVar63 = true;
									}
									if ((Global_1835390.f_2704[2] < 2 && Global_1835390.f_2775[2] == -1) && !(((Global_1835390.f_2704[2] > 0 && Global_1835390.f_2780.f_27) && func_433(uParam1->f_44)) && Global_1835390.f_2775[2] != -1))
									{
										bVar63 = true;
									}
									if (bVar63)
									{
										func_504(*uParam0, &iVar6, iVar31, 1, 0);
									}
									else
									{
										func_504(*uParam0, &iVar6, iVar31, 0, 0);
									}
									iVar27[2] = 1;
								}
							}
							if (func_427(Global_1839721[iVar0 /*100*/].f_32))
							{
								if (func_433(uParam1->f_44))
								{
									unk_0x2D00A9DFCB53B3E8(unk_0x1329891157A54C63(), &uVar45);
									if (!Global_1839721[iVar0 /*100*/].f_74 && unk_0xD994929E13CC1ED5(&(uParam1->f_44.f_3.f_1[1 /*16*/].f_8), &uVar45))
									{
										bVar63 = true;
									}
								}
								if (!bVar63)
								{
									iVar31 = 0;
									if (!Global_1835390.f_2780.f_27)
									{
										if (func_468(&(Global_1839721[iVar0 /*100*/].f_32), &Var32))
										{
											unk_0xF3148AAF69AF9CBC(&iVar31, 1);
											if (uParam1->f_246.f_1 == -1)
											{
												bVar7 = true;
												uParam1->f_246.f_1 = iVar0;
												unk_0xF3148AAF69AF9CBC(&iVar31, 3);
											}
										}
									}
									if (func_433(uParam1->f_44))
									{
										cVar9 = { Global_1839721[iVar0 /*100*/] };
										if (!unk_0xB318FDA0D1ABDB20(&(Global_1839721[iVar0 /*100*/].f_84)) && !unk_0xD994929E13CC1ED5(&(Global_1839721[iVar0 /*100*/].f_84), ""))
										{
											StringConCat(&cVar9, "/", 64);
											StringConCat(&cVar9, &(Global_1839721[iVar0 /*100*/].f_84), 64);
										}
										func_467(*uParam0, iVar6, iVar31, Global_1839721[iVar0 /*100*/].f_59, &cVar9, &(Global_1839721[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar6;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar31;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839721[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									else
									{
										func_467(*uParam0, iVar6, iVar31, Global_1839721[iVar0 /*100*/].f_59, &(Global_1839721[iVar0 /*100*/]), &(Global_1839721[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar6;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar31;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839721[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									iVar1 = 0;
									while (iVar1 < Global_1835390.f_2708)
									{
										bVar8 = false;
										if (unk_0x236D8AD7EE179F46(Global_1835390.f_2770, iVar1))
										{
											if (unk_0x236D8AD7EE179F46(Global_1835390.f_2768, iVar1))
											{
												if (Global_1835390.f_2754[iVar1] == Global_1839721[iVar0 /*100*/].f_67[iVar1])
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_462(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_67[iVar1], 0, Global_1839721[iVar0 /*100*/].f_58);
											}
											else
											{
												func_462(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_67[iVar1], Global_1839721[iVar0 /*100*/].f_74, Global_1839721[iVar0 /*100*/].f_58);
											}
										}
										else
										{
											if (unk_0x236D8AD7EE179F46(Global_1835390.f_2768, iVar1))
											{
												if (Global_1835390.f_2761[iVar1] == Global_1839721[iVar0 /*100*/].f_67[iVar1])
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_459(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_60[iVar1], 0);
											}
											else
											{
												func_459(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_60[iVar1], Global_1839721[iVar0 /*100*/].f_74);
											}
										}
										iVar1++;
									}
									func_458();
									uVar2[(Global_1839721[iVar0 /*100*/].f_75 - 1)]++;
									if (uVar2[(Global_1839721[iVar0 /*100*/].f_75 - 1)] == 2)
									{
										if (Global_1839721[iVar0 /*100*/].f_59 > 2)
										{
											unk_0xF3148AAF69AF9CBC(&iVar31, 2);
											unk_0xF3148AAF69AF9CBC(&(uParam1->f_246.f_6[0 /*15*/].f_1), 2);
											func_457(*uParam0, (iVar6 - 1), iVar31);
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
						unk_0xF3148AAF69AF9CBC(&iVar31, 4);
						func_504(*uParam0, &iVar6, iVar31, 1, 0);
						iVar31 = 0;
						unk_0xF3148AAF69AF9CBC(&iVar31, 5);
						func_504(*uParam0, &iVar6, iVar31, 1, 0);
						iVar31 = 0;
						unk_0xF3148AAF69AF9CBC(&iVar31, 6);
						func_504(*uParam0, &iVar6, iVar31, 1, 0);
					}
					unk_0xF3148AAF69AF9CBC(&(uParam1->f_42), 1);
					unk_0xC69E84EBBD7166E6(&(uParam1->f_42), 2);
					func_503(*uParam0);
					unk_0xB8BB626315D394F5(1);
					if (uParam1->f_246.f_1 == -1 && !bVar7 == 1)
					{
						if (Global_1835390.f_2704[0] > 1)
						{
							uParam1->f_246.f_1 = 0;
							unk_0xF3148AAF69AF9CBC(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
							func_457(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					func_503(*uParam0);
					func_454(uParam0, uParam1);
				}
			}
		}
	}
}

void func_454(var uParam0, var uParam1)
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
	if (unk_0x3D6272A8E1C449E9(2))
	{
		unk_0xA5E37DF3441A38D9();
		unk_0x89086B596828ACBE(2, 239);
		unk_0x89086B596828ACBE(2, 240);
		unk_0x89086B596828ACBE(2, 237);
		unk_0x89086B596828ACBE(2, 238);
		unk_0xDE1125A413AF241C(2, 200, 1);
		if (unk_0x70A79CA636F98FA5(2, 241))
		{
			unk_0x776CB0B90EA81285(2, 188, 1f);
		}
		if (unk_0x70A79CA636F98FA5(2, 242))
		{
			unk_0x776CB0B90EA81285(2, 187, 1f);
		}
		if (unk_0xD3E14AFF18E0ECFE(*uParam0, &iVar2, &iVar3, &uVar4))
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
					unk_0x35D7948F61AA3FEC(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					bVar0 = true;
				}
				else
				{
					unk_0x776CB0B90EA81285(2, 217, 1f);
				}
			}
		}
	}
	if (!unk_0x3D6272A8E1C449E9(2))
	{
		func_456(&uVar5, &iVar6, &uVar7, &uVar8, 0);
	}
	if (uParam1->f_246.f_2 > 0)
	{
		if (!unk_0x236D8AD7EE179F46(uParam1->f_246, 0))
		{
			if ((unk_0xCAD9951C953F5B2D(2, 188) || unk_0x70A79CA636F98FA5(2, 188)) || iVar6 < -100)
			{
				unk_0x35D7948F61AA3FEC(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1 = (uParam1->f_246.f_1 + -1);
				unk_0xF3148AAF69AF9CBC(&(uParam1->f_246), 0);
				func_343(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_455(uParam1, 188))
		{
			unk_0xC69E84EBBD7166E6(&(uParam1->f_246), 0);
		}
		if (!unk_0x236D8AD7EE179F46(uParam1->f_246, 1))
		{
			if ((unk_0xCAD9951C953F5B2D(2, 187) || unk_0x70A79CA636F98FA5(2, 187)) || iVar6 > 100)
			{
				unk_0x35D7948F61AA3FEC(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1++;
				unk_0xF3148AAF69AF9CBC(&(uParam1->f_246), 1);
				func_343(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_455(uParam1, 187))
		{
			unk_0xC69E84EBBD7166E6(&(uParam1->f_246), 1);
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
	if (!unk_0x236D8AD7EE179F46(uParam1->f_246, 3))
	{
		if ((unk_0xCAD9951C953F5B2D(2, 204) || unk_0x5BD35B90C0693406(2, 204)) || unk_0x093DEAE9A023FAA0(2, 237))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_246), 3);
			func_343(&(uParam1->f_246.f_3));
			bVar0 = true;
		}
	}
	else if (func_455(uParam1, 204))
	{
		unk_0xC69E84EBBD7166E6(&(uParam1->f_246), 3);
	}
	if (uParam1->f_246.f_1 >= 0)
	{
		if (uParam1->f_246.f_1 != iVar1)
		{
			if (iVar1 >= 0)
			{
				unk_0xC69E84EBBD7166E6(&(uParam1->f_246.f_6[iVar1 /*15*/].f_1), 3);
				func_457(*uParam0, uParam1->f_246.f_6[iVar1 /*15*/], uParam1->f_246.f_6[iVar1 /*15*/].f_1);
			}
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
			func_457(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
			unk_0xC69E84EBBD7166E6(&(uParam1->f_42), 2);
		}
		if (func_427(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2))
		{
			if (!unk_0x236D8AD7EE179F46(uParam1->f_246, 2))
			{
				if (unk_0xCAD9951C953F5B2D(2, 217) || unk_0x5BD35B90C0693406(2, 217))
				{
					if (!unk_0x735E6B6239CDDBEC())
					{
						unk_0x35D7948F61AA3FEC(-1, "SELECT", "HUD_FRONTEND_MP_SOUNDSET", 1);
						unk_0xF3148AAF69AF9CBC(&(uParam1->f_246), 2);
						unk_0xC13E73CAC2C614FF(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2));
					}
				}
			}
			else if (!unk_0xCAD9951C953F5B2D(2, 217))
			{
				unk_0xC69E84EBBD7166E6(&(uParam1->f_246), 2);
			}
		}
	}
}

int func_455(var uParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (iParam1 == 188 || iParam1 == 187)
	{
		func_456(&uVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((!unk_0xCAD9951C953F5B2D(2, iParam1) && !unk_0x70A79CA636F98FA5(2, iParam1)) && (iVar1 < 75 && iVar1 > -75)) || func_421(&(uParam0->f_246.f_3), 250, 0))
		{
			return 1;
		}
	}
	else if ((!unk_0xCAD9951C953F5B2D(2, iParam1) && !unk_0x70A79CA636F98FA5(2, iParam1)) || func_421(&(uParam0->f_246.f_3), 250, 0))
	{
		return 1;
	}
	return 0;
}

void func_456(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x208A691F35C2C023(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x208A691F35C2C023(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x208A691F35C2C023(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x208A691F35C2C023(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0xD7CD731653154101(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0xD7CD731653154101(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0xD7CD731653154101(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0xD7CD731653154101(2, 221) * 127f));
		}
	}
}

void func_457(var uParam0, int iParam1, int iParam2)
{
	unk_0x21ED0FC9B5CC748B(uParam0, "SET_SLOT_STATE");
	unk_0xBD0C54D89298454E(iParam1);
	unk_0xBD0C54D89298454E(iParam2);
	unk_0xBA9BA6181F2B6111();
}

void func_458()
{
	unk_0xBA9BA6181F2B6111();
}

void func_459(struct<30> Param0, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, int iParam43, float fParam44, bool bParam45)
{
	switch (Param0.f_29[iParam43])
	{
		case 4:
			if (bParam45)
			{
				unk_0x6CE839BF5D87A428("NUMBER");
				unk_0xB6F6A8755E3C6180(fParam44, 2);
				unk_0xC3822F70D0E7940B();
			}
			else
			{
				unk_0x6CE839BF5D87A428("SC_LB_EMPTY");
				unk_0xC3822F70D0E7940B();
			}
			break;
		
		case 12:
			if (bParam45)
			{
				unk_0x6CE839BF5D87A428("NUMBER");
				unk_0x6D55FF05D62B91BC(unk_0xF34EE736CF047844(fParam44));
				unk_0xC3822F70D0E7940B();
			}
			else
			{
				unk_0x6CE839BF5D87A428("SC_LB_EMPTY");
				unk_0xC3822F70D0E7940B();
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
				if (!unk_0x32D4891AD2E2D140())
				{
					if (Param0.f_29[iParam43] == 19 || Param0.f_29[iParam43] == 20)
					{
						fParam44 = func_461(fParam44);
					}
					else
					{
						fParam44 = func_460(fParam44);
					}
				}
				unk_0x6CE839BF5D87A428("NUMBER");
				unk_0xB6F6A8755E3C6180(fParam44, 2);
				unk_0xC3822F70D0E7940B();
			}
			else
			{
				unk_0x6CE839BF5D87A428("SC_LB_EMPTY");
				unk_0xC3822F70D0E7940B();
			}
			break;
		
		case 0:
			break;
	}
}

float func_460(float fParam0)
{
	return (fParam0 / 0.3048f);
}

float func_461(float fParam0)
{
	return (fParam0 / 1609.344f);
}

void func_462(struct<30> Param0, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, int iParam43, int iParam44, bool bParam45, bool bParam46)
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
				unk_0x6CE839BF5D87A428("NUMBER");
				unk_0x6D55FF05D62B91BC(iParam44);
				unk_0xC3822F70D0E7940B();
			}
			else
			{
				unk_0x6CE839BF5D87A428("SC_LB_EMPTY");
				unk_0xC3822F70D0E7940B();
			}
			break;
		
		case 7:
			if (bParam45)
			{
				unk_0x6CE839BF5D87A428("NUMBER");
				unk_0x6D55FF05D62B91BC(-iParam44);
				unk_0xC3822F70D0E7940B();
			}
			else
			{
				unk_0x6CE839BF5D87A428("SC_LB_EMPTY");
				unk_0xC3822F70D0E7940B();
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
					unk_0x6CE839BF5D87A428("STRING");
					unk_0x628846883063947B(iParam44, 14);
					unk_0xC3822F70D0E7940B();
				}
				else if (Param0.f_29[iParam43] == 9)
				{
					unk_0x6CE839BF5D87A428("STRING");
					unk_0x628846883063947B(iParam44, 6);
					unk_0xC3822F70D0E7940B();
				}
				else
				{
					unk_0x6CE839BF5D87A428("STRING");
					unk_0x628846883063947B(iParam44, 2055);
					unk_0xC3822F70D0E7940B();
				}
			}
			else
			{
				unk_0x6CE839BF5D87A428("SC_LB_EMPTY");
				unk_0xC3822F70D0E7940B();
			}
			break;
		
		case 6:
			if (bParam45)
			{
				if (iParam44 == 2147483647)
				{
					unk_0x6CE839BF5D87A428("SC_LB_EMPTY");
					unk_0xC3822F70D0E7940B();
				}
				else if (iParam44 >= 3600000 || iParam44 <= -3600000)
				{
					unk_0x6CE839BF5D87A428("STRING");
					unk_0x628846883063947B(iParam44, 14);
					unk_0xC3822F70D0E7940B();
				}
				else
				{
					unk_0x6CE839BF5D87A428("STRING");
					unk_0x628846883063947B(iParam44, 2055);
					unk_0xC3822F70D0E7940B();
				}
			}
			else
			{
				unk_0x6CE839BF5D87A428("SC_LB_EMPTY");
				unk_0xC3822F70D0E7940B();
			}
			break;
		
		case 2:
		case 10:
			if (bParam45)
			{
				iParam44 = (iParam44 * -1);
				if (iParam44 >= 3600000 || iParam44 <= -3600000)
				{
					unk_0x6CE839BF5D87A428("STRING");
					unk_0x628846883063947B(iParam44, 14);
					unk_0xC3822F70D0E7940B();
				}
				else if (Param0.f_29[iParam43] == 10)
				{
					unk_0x6CE839BF5D87A428("STRING");
					unk_0x628846883063947B(iParam44, 6);
					unk_0xC3822F70D0E7940B();
				}
				else
				{
					unk_0x6CE839BF5D87A428("STRING");
					unk_0x628846883063947B(iParam44, 2055);
					unk_0xC3822F70D0E7940B();
				}
			}
			else
			{
				unk_0x6CE839BF5D87A428("SC_LB_EMPTY");
				unk_0xC3822F70D0E7940B();
			}
			break;
		
		case 3:
			if (bParam46)
			{
				if (unk_0xC6F372320BE985CB(iParam44))
				{
					unk_0x6CE839BF5D87A428("SCLB_VEH_CUST");
					unk_0x072D7B028D6C7A05(unk_0x60793BDBCF1CD039(iParam44));
					unk_0xC3822F70D0E7940B();
				}
				else
				{
					unk_0x6CE839BF5D87A428("SC_LB_EMPTY");
					unk_0xC3822F70D0E7940B();
				}
			}
			else if (unk_0xC6F372320BE985CB(iParam44))
			{
				unk_0x6CE839BF5D87A428(unk_0x60793BDBCF1CD039(iParam44));
				unk_0xC3822F70D0E7940B();
			}
			else
			{
				unk_0x6CE839BF5D87A428("SC_LB_EMPTY");
				unk_0xC3822F70D0E7940B();
			}
			break;
		
		case 8:
			if (func_466(iParam44) != 0)
			{
				unk_0x6CE839BF5D87A428(func_463(func_466(iParam44), 0));
				unk_0xC3822F70D0E7940B();
			}
			else
			{
				unk_0x6CE839BF5D87A428("SC_LB_EMPTY");
				unk_0xC3822F70D0E7940B();
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
				if (!unk_0x32D4891AD2E2D140())
				{
					if (Param0.f_29[iParam43] == 15 || Param0.f_29[iParam43] == 16)
					{
						iParam44 = unk_0xF34EE736CF047844(func_461(unk_0xBBDA792448DB5A89(iParam44)));
					}
					else
					{
						iParam44 = unk_0xF34EE736CF047844(func_460(unk_0xBBDA792448DB5A89(iParam44)));
					}
				}
				unk_0x6CE839BF5D87A428("NUMBER");
				unk_0x6D55FF05D62B91BC(iParam44);
				unk_0xC3822F70D0E7940B();
			}
			else
			{
				unk_0x6CE839BF5D87A428("SC_LB_EMPTY");
				unk_0xC3822F70D0E7940B();
			}
			break;
		
		case 0:
			break;
	}
}

char* func_463(int iParam0, bool bParam1)
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
		
		case joaat("weapon_machete"):
			if (bParam1)
			{
				return "WTU_MACHETE";
			}
			else
			{
				return "WT_MACHETE";
			}
			break;
		
		case joaat("weapon_machinepistol"):
			if (bParam1)
			{
				return "WTU_MCHPIST";
			}
			else
			{
				return "WT_MCHPIST";
			}
			break;
		
		case joaat("weapon_flashlight"):
			if (bParam1)
			{
				return "WTU_FLASHLIGHT";
			}
			else
			{
				return "WT_FLASHLIGHT";
			}
			break;
		
		default:
			if (func_465(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_464(&(Var0.f_31));
				}
				else
				{
					return func_464(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_464(var uParam0)
{
	return uParam0;
}

int func_465(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x854E447BB6DC0C78();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0xDA7A61DFB1D6C7E0(iVar0, uParam1))
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

int func_466(int iParam0)
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

void func_467(var uParam0, int iParam1, int iParam2, int iParam3, char[4] cParam4, char[4] cParam5)
{
	unk_0x21ED0FC9B5CC748B(uParam0, "SET_SLOT");
	unk_0xBD0C54D89298454E(iParam1);
	unk_0xBD0C54D89298454E(iParam2);
	if (iParam3 > 0)
	{
		unk_0x6CE839BF5D87A428("NUMBER");
		unk_0x6D55FF05D62B91BC(iParam3);
		unk_0xC3822F70D0E7940B();
	}
	else
	{
		unk_0x6CE839BF5D87A428("SC_LB_EMPTY");
		unk_0xC3822F70D0E7940B();
	}
	unk_0x1F704997074F9C16(cParam4);
	unk_0x1F704997074F9C16(uParam5);
}

int func_468(var uParam0, var uParam1)
{
	if (!func_427(*uParam0))
	{
		return 0;
	}
	if (!func_427(*uParam1))
	{
		return 0;
	}
	if (unk_0x4F493F24AAFFC673(uParam0, uParam1))
	{
		return 1;
	}
	return 0;
}

void func_469(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	var uVar77;
	
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	if (!unk_0x236D8AD7EE179F46(uParam0->f_42, 5) && !unk_0x236D8AD7EE179F46(uParam0->f_42, 6))
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

void func_470(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (!unk_0x236D8AD7EE179F46(uParam0->f_42, 5) && !unk_0x236D8AD7EE179F46(uParam0->f_42, 6))
	{
		iVar4 = 0;
		while (iVar4 < 12)
		{
			if (func_473(uParam1, iVar3, &uVar0, 0))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 1;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_473(uParam1, iVar3, &uVar1, 1))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 2;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_473(uParam1, iVar3, &uVar2, 2))
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
		func_471(uParam1);
	}
}

void func_471(var uParam0)
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
	Var3 = { func_432(unk_0x1329891157A54C63()) };
	if (unk_0xC4A0D76E62E374A1(Global_1835390.f_2826))
	{
		iVar16 = unk_0xF8215064F03558E3(Global_1835390.f_2826);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar16)
		{
			if (iVar0 < 12)
			{
				func_472(&Global_1839591);
				iVar2 = 0;
				unk_0xBAB30E9205E1AC32(Global_1835390.f_2826, iVar0, &Global_1839591);
				*(uParam0[iVar0 /*100*/]) = { Global_1839591.f_1 };
				(uParam0[iVar0 /*100*/])->f_16 = { Global_1839591.f_17 };
				(uParam0[iVar0 /*100*/])->f_32 = { Global_1839591.f_33 };
				(uParam0[iVar0 /*100*/])->f_45 = { Global_1839591.f_46 };
				(uParam0[iVar0 /*100*/])->f_58 = Global_1839591.f_59;
				(uParam0[iVar0 /*100*/])->f_59 = Global_1839591.f_60;
				Global_1835390.f_2708 = Global_1839591.f_62;
				Global_1835390.f_2769 = Global_1839591.f_63;
				iVar2 = 0;
				if (unk_0x236D8AD7EE179F46(Global_1839591.f_61, 1))
				{
					iVar2 = 1;
				}
				else if (unk_0x236D8AD7EE179F46(Global_1839591.f_61, 2))
				{
					iVar2 = 2;
				}
				else if (unk_0x236D8AD7EE179F46(Global_1839591.f_61, 3))
				{
					iVar2 = 3;
				}
				Global_1835390.f_2704[(iVar2 - 1)]++;
				(uParam0[iVar0 /*100*/])->f_75 = iVar2;
				if ((uParam0[iVar0 /*100*/])->f_59 != -1)
				{
					if (unk_0x236D8AD7EE179F46(Global_1839591.f_61, 0))
					{
						(uParam0[iVar0 /*100*/])->f_74 = 1;
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_74 = 0;
					}
					if (func_468(&((uParam0[iVar0 /*100*/])->f_32), &Var3))
					{
						Global_1835390.f_2775[(iVar2 - 1)] = 0;
					}
				}
				iVar1 = 0;
				while (iVar1 < Global_1839591.f_62)
				{
					if (unk_0x236D8AD7EE179F46(Global_1839591.f_63, iVar1))
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

void func_472(var uParam0)
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

int func_473(var uParam0, int iParam1, var uParam2, int iParam3)
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
				StringCopy(uParam0[iParam1 /*100*/], unk_0xB67DF8F35744CF60(unk_0x1329891157A54C63()), 64);
				(uParam0[iParam1 /*100*/])->f_32 = { func_432(unk_0x1329891157A54C63()) };
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

void func_474(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	unk_0xF3148AAF69AF9CBC(&iParam2, 7);
	unk_0x21ED0FC9B5CC748B(uParam0, "SET_SLOT");
	unk_0xBD0C54D89298454E(iParam1);
	unk_0xBD0C54D89298454E(iParam2);
	unk_0x6CE839BF5D87A428(sParam3);
	unk_0x8CE45FC10BB0C41B();
	unk_0xBA9BA6181F2B6111();
}

int func_475(var uParam0)
{
	if (!Global_1835388)
	{
		if (!func_443(&(Global_1835390.f_2827)))
		{
			func_422(&(Global_1835390.f_2827), 1, 0);
			return 0;
		}
		else if (!func_421(&(Global_1835390.f_2827), 1000, 1))
		{
			return 0;
		}
	}
	if (((!unk_0xFA106675D906ECBC() || !unk_0x98465343DD18A1F7()) || (!unk_0x90D70709D2558B5A() && unk_0x145838334F50DC33())) || Global_1835390.f_2832 != 0)
	{
		unk_0xC69E84EBBD7166E6(&(uParam0->f_42), 4);
		return 1;
	}
	if (!unk_0x236D8AD7EE179F46(uParam0->f_42, 4))
	{
		func_502(uParam0);
		unk_0xF3148AAF69AF9CBC(&(uParam0->f_42), 4);
		return 0;
	}
	else if (unk_0x236D8AD7EE179F46(uParam0->f_42, 5))
	{
		(*uParam0)[0] = 2;
		(*uParam0)[1] = 1;
		(*uParam0)[2] = 3;
		return 1;
	}
	if (!func_500(uParam0))
	{
		return 0;
	}
	if (!func_498(uParam0))
	{
		return 0;
	}
	if (!func_491(uParam0))
	{
		return 0;
	}
	if (!unk_0x236D8AD7EE179F46(uParam0->f_42, 6))
	{
		func_346(&Global_1839721);
		func_470(uParam0, &Global_1839721);
		func_469(uParam0, &Global_1839721);
		unk_0xF3148AAF69AF9CBC(&(uParam0->f_42), 6);
	}
	if (!unk_0x236D8AD7EE179F46(uParam0->f_42, 7))
	{
		if (!func_443(&(Global_1835390.f_2830)))
		{
			func_422(&(Global_1835390.f_2830), 1, 0);
		}
		else if (func_421(&(Global_1835390.f_2830), 30000, 1))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_42), 7);
		}
		if (func_488(&Global_1839721))
		{
		}
		else
		{
			return 0;
		}
		if (func_485(&Global_1839721))
		{
		}
		else
		{
			return 0;
		}
		if (func_479(&Global_1839721))
		{
			func_476(&Global_1839721);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_42), 7);
			func_476(&Global_1839721);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_476(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_478(Global_1835390.f_2826);
	if (Global_1838575.f_81[iVar2] != 0)
	{
		func_477(-1, iVar2);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_472(&Global_1839591);
		if ((uParam0[iVar0 /*100*/])->f_75 != 0)
		{
			Global_1839591 = Global_1835390.f_2826;
			Global_1839591.f_1 = { *(uParam0[iVar0 /*100*/]) };
			if (unk_0xD994929E13CC1ED5(&((uParam0[iVar0 /*100*/])->f_16), ""))
			{
				Global_1839591.f_17 = { *(uParam0[iVar0 /*100*/]) };
			}
			else
			{
				Global_1839591.f_17 = { (uParam0[iVar0 /*100*/])->f_16 };
			}
			Global_1839591.f_33 = { (uParam0[iVar0 /*100*/])->f_32 };
			if (func_427((uParam0[iVar0 /*100*/])->f_45))
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
				unk_0xF3148AAF69AF9CBC(&(Global_1839591.f_61), 0);
			}
			else
			{
				unk_0xC69E84EBBD7166E6(&(Global_1839591.f_61), 0);
			}
			unk_0xF3148AAF69AF9CBC(&(Global_1839591.f_61), (uParam0[iVar0 /*100*/])->f_75);
			iVar1 = 0;
			while (iVar1 < Global_1839591.f_62)
			{
				if (unk_0x236D8AD7EE179F46(Global_1839591.f_63, iVar1))
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
			unk_0x14FB8EA886D0BE0C(&Global_1839591);
		}
		iVar0++;
	}
	Global_1838575.f_87[iVar2 /*3*/] = { func_207(unk_0x1329891157A54C63()) };
}

void func_477(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != -1)
	{
		if (unk_0xC4A0D76E62E374A1(Global_1838575.f_81[iParam1]))
		{
			unk_0xE9B785B4873F3F15(Global_1838575.f_81[iParam1]);
		}
		Global_1838575.f_81[iParam1] = 0;
	}
	else if (iParam0 != -1)
	{
		if (unk_0xC4A0D76E62E374A1(iParam0))
		{
			unk_0xE9B785B4873F3F15(iParam0);
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

int func_478(int iParam0)
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
		else if (unk_0xC4A0D76E62E374A1(Global_1838575.f_81[iVar0]))
		{
			iVar3 = unk_0x6179092E964403EB(Global_1838575.f_81[iVar0]);
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

int func_479(var uParam0)
{
	int iVar0;
	int iVar1;
	
	switch ((uParam0[0 /*100*/])->f_76)
	{
		case 0:
			func_483(uParam0);
			if (unk_0xEC209B562C5EFDB2() && !unk_0xBEC1291D6B41868E(0))
			{
				(uParam0[0 /*100*/])->f_76 = 3;
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if (func_427((uParam0[iVar0 /*100*/])->f_32))
				{
					if (!func_482(&((uParam0[iVar0 /*100*/])->f_32), &Global_1841018))
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
			if (func_480(&((uParam0[1 /*100*/])->f_76), &(Global_1841018.f_206), &Global_1841018, &(Global_1841018.f_157)))
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
					if (func_427((uParam0[iVar0 /*100*/])->f_32) && func_427(Global_1841018[iVar1 /*13*/]))
					{
						if (unk_0x4F493F24AAFFC673(&((uParam0[iVar0 /*100*/])->f_32), &(Global_1841018[iVar1 /*13*/])))
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

int func_480(var uParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	int iVar35;
	
	switch (*uParam0)
	{
		case 0:
			if (unk_0x329814B791EE1BB1())
			{
			}
			else
			{
				unk_0x8B8EA339A06AE3B5();
				unk_0xFE33991A2DEAF645(uParam2, *uParam1);
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (!unk_0x329814B791EE1BB1())
			{
				if (unk_0x61E52A1339650021())
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
				if (unk_0x40A23CC17EF95A6B(uParam2[iVar35 /*13*/], &uVar0))
				{
					func_481(&uVar0, uParam3[iVar35 /*4*/]);
				}
				iVar35++;
			}
			if (unk_0x329814B791EE1BB1())
			{
				unk_0xCA39EF79DC08C2B3();
			}
			else
			{
				unk_0x8B8EA339A06AE3B5();
			}
			*uParam0 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_481(var uParam0, var uParam1)
{
	unk_0x99C56C4A7747183E(uParam0, 35, uParam1);
}

int func_482(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_427(*(uParam1[iVar0 /*13*/])))
		{
			if (unk_0x4F493F24AAFFC673(uParam0, uParam1[iVar0 /*13*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_483(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_484(&(Global_1841018[iVar0 /*13*/]));
		StringCopy(&(Global_1841018.f_157[iVar0 /*4*/]), "", 16);
		iVar0++;
	}
	if ((uParam0[0 /*100*/])->f_76 > 0)
	{
		(uParam0[0 /*100*/])->f_76 = 0;
		(uParam0[1 /*100*/])->f_76 = 0;
		if (!unk_0x329814B791EE1BB1())
		{
			unk_0x8B8EA339A06AE3B5();
		}
	}
	if (unk_0x329814B791EE1BB1())
	{
		unk_0xCA39EF79DC08C2B3();
	}
	Global_1841018.f_206 = 0;
}

void func_484(var uParam0)
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

int func_485(var uParam0)
{
	int iVar0;
	
	if (unk_0x913B1C01C1BA6C6F())
	{
		return 1;
	}
	else if (unk_0x3F0C224D3CC05EF2())
	{
		if (!func_487(uParam0))
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_486(&((uParam0[iVar0 /*100*/])->f_78), &((uParam0[iVar0 /*100*/])->f_32), uParam0[iVar0 /*100*/]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_486(var uParam0, var uParam1, char* sParam2)
{
	if (*uParam0 == 2)
	{
		return 1;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_427(*uParam1))
			{
				if (!unk_0x7628BE3C0E25C192(uParam1))
				{
					if (unk_0x3F0C224D3CC05EF2())
					{
						if (unk_0xB2428475A5D17018(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else if (unk_0x9800AF1CCAFA4639())
					{
						if (unk_0xB2428475A5D17018(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam2, unk_0x9406BE068C54E7B6(uParam1), 64);
						if (unk_0x211AF631627DE2C5())
						{
						}
						else if (unk_0xEC209B562C5EFDB2())
						{
						}
						else if (unk_0x913B1C01C1BA6C6F())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam2, unk_0xB67DF8F35744CF60(unk_0x9919379E0C2E8BD3(uParam1)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0x7628BE3C0E25C192(uParam1))
			{
				if (!unk_0xC687AE2751722351())
				{
					if (unk_0x02562AA4D616EBC6())
					{
						StringCopy(sParam2, unk_0x9406BE068C54E7B6(uParam1), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam2, unk_0xB67DF8F35744CF60(unk_0x9919379E0C2E8BD3(uParam1)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_487(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x3F0C224D3CC05EF2())
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
				func_484(&(Global_1835390.f_3026[iVar1 /*13*/]));
				if (func_427((uParam0[iVar1 /*100*/])->f_32))
				{
					Global_1835390.f_3026[Global_1835390.f_3183 /*13*/] = { (uParam0[iVar1 /*100*/])->f_32 };
					Global_1835390.f_3183++;
				}
				iVar1++;
			}
			if (Global_1835390.f_3183 > 0)
			{
				(uParam0[0 /*100*/])->f_79 = unk_0x02B93FDF330D4E8B(&(Global_1835390.f_3026), Global_1835390.f_3183);
				(uParam0[0 /*100*/])->f_78 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0x4F46FE6E82B21672((uParam0[0 /*100*/])->f_79, &(Global_1835390.f_2833), Global_1835390.f_3183);
			if (iVar0 == 0)
			{
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (func_427((uParam0[iVar1 /*100*/])->f_32))
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

int func_488(var uParam0)
{
	int iVar0;
	
	if (unk_0x3F0C224D3CC05EF2())
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_490(&((uParam0[iVar0 /*100*/])->f_77), &((uParam0[iVar0 /*100*/])->f_16), &((uParam0[iVar0 /*100*/])->f_84), &(Global_1835390.f_2833), &((uParam0[iVar0 /*100*/])->f_79)))
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
			if (!func_489(&((uParam0[iVar0 /*100*/])->f_77), (uParam0[iVar0 /*100*/])->f_16, &((uParam0[iVar0 /*100*/])->f_84)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_489(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17)
{
	struct<13> Var0;
	
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0xB318FDA0D1ABDB20(&uParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0xACDA348B13135667(&uParam1, &Var0, 13);
	switch (*uParam0)
	{
		case 0:
			if (func_427(Var0))
			{
				if (!unk_0x7628BE3C0E25C192(&Var0))
				{
					if (unk_0x9800AF1CCAFA4639() || unk_0x3F0C224D3CC05EF2())
					{
						if (unk_0xB2428475A5D17018(&Var0))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam17, unk_0x9406BE068C54E7B6(&Var0), 64);
						if (unk_0x211AF631627DE2C5())
						{
						}
						else if (unk_0xEC209B562C5EFDB2())
						{
						}
						else if (unk_0x913B1C01C1BA6C6F())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam17, unk_0xB67DF8F35744CF60(unk_0x9919379E0C2E8BD3(&Var0)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0x7628BE3C0E25C192(&Var0))
			{
				if (!unk_0xC687AE2751722351())
				{
					if (unk_0x02562AA4D616EBC6())
					{
						StringCopy(sParam17, unk_0x9406BE068C54E7B6(&Var0), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam17, unk_0xB67DF8F35744CF60(unk_0x9919379E0C2E8BD3(&Var0)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_490(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4)
{
	int iVar0;
	struct<13> Var1[1];
	
	if (!unk_0x3F0C224D3CC05EF2())
	{
		return 1;
	}
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0xB318FDA0D1ABDB20(sParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0xACDA348B13135667(sParam1, &(Var1[0 /*13*/]), 13);
	switch (*uParam0)
	{
		case 0:
			StringCopy(uParam3[0 /*16*/], "", 64);
			if (func_427(Var1[0 /*13*/]))
			{
				if (!unk_0x7628BE3C0E25C192(&(Var1[0 /*13*/])))
				{
					*uParam4 = unk_0x02B93FDF330D4E8B(&Var1, 1);
					*uParam0 = 1;
				}
				else
				{
					StringCopy(sParam2, unk_0xB67DF8F35744CF60(unk_0x9919379E0C2E8BD3(&(Var1[0 /*13*/]))), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0x4F46FE6E82B21672(*uParam4, uParam3, 1);
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

int func_491(var uParam0)
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
	Var116 = { func_432(unk_0x1329891157A54C63()) };
	switch ((*uParam0)[iVar113])
	{
		case 0:
			Global_1835390.f_2775[iVar113] = -1;
			Global_1835390.f_2704[iVar113] = 0;
			Global_1835013.f_374 = -1;
			if (unk_0x80622F5ED5957337())
			{
				if (unk_0x464883E45616A088(&Var116))
				{
					if (unk_0xEF956A1EC046AA4A(&(uParam0->f_7), 35, &Var116))
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
			if (func_412(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var116, func_497(), 0, 0, 0))
			{
				func_430(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x83AADE55631E4239(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						iVar111 = 0;
						iVar106 = 0;
						if (func_497())
						{
							iVar111 = 0;
							while (iVar111 < Var98.f_3)
							{
								unk_0xD70C08D94409367B(iVar111, &Var0);
								if (Global_1835013.f_374 < 0)
								{
									if (func_468(&Var0, &Var116) || func_468(&Var0, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var0.f_96;
									}
								}
								if (iVar109 < 0)
								{
									if (unk_0x236D8AD7EE179F46(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0xCE8F7BB4AA22190C(iVar111, 0))
										{
											iVar109 = iVar111;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0xD10657024EC7DC5A(iVar111, 0))
									{
										iVar109 = iVar111;
									}
								}
								func_496(&Var0);
								iVar111++;
							}
							if (iVar109 < 0)
							{
								iVar109 = Var98.f_3;
							}
						}
						iVar111 = 0;
						unk_0xD70C08D94409367B(0, &Var0);
						if (Var0.f_96 <= 1)
						{
							if (Global_1835390.f_2704[iVar113] < 12)
							{
								if (func_497() && iVar109 == 0)
								{
									func_495(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Var0.f_96);
									Global_1835390.f_2775[iVar113] = 0;
									Global_1835390.f_2704[iVar113]++;
								}
								if (func_497() && (func_468(&Var0, &Var116) || func_468(&Var0, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_468(&Var0, &Var116))
									{
										iVar109 = 0;
										Global_1835390.f_2775[iVar113] = 0;
									}
									MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_32 = { Var0 };
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_59 = Var0.f_96;
									if (func_494(uParam0->f_44))
									{
										iVar108 = unk_0xCE8F7BB4AA22190C(0, Global_1835390.f_2709);
										if (iVar108 == 1)
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 0;
										}
									}
									if (func_433(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835390.f_2708)
									{
										if (unk_0x236D8AD7EE179F46(Global_1835390.f_2769, Global_1835390.f_2710[iVar107]))
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_67[iVar107] = unk_0xCE8F7BB4AA22190C(0, Global_1835390.f_2710[iVar107]);
										}
										else
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_60[iVar107] = unk_0xD10657024EC7DC5A(0, Global_1835390.f_2710[iVar107]);
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
						if (!func_497())
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
						func_496(&Var0);
						iVar111 = iVar110;
						while (iVar111 <= (Var98.f_3 - 1))
						{
							unk_0xD70C08D94409367B(iVar111, &Var0);
							if (Global_1835390.f_2704[iVar113] < 12 && Var0.f_96 > 1)
							{
								if (func_497() && iVar109 == iVar111)
								{
									if (!func_468(&(Global_1835390[iVar113 /*901*/][0 /*75*/].f_32), &Var116))
									{
										func_495(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Var0.f_96);
										Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
										Global_1835390.f_2704[iVar113]++;
									}
								}
								if (func_497() && (func_468(&Var0, &Var116) || func_468(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835390.f_2704[iVar113] < 12)
								{
									if (func_427(Var0) && !func_468(&Var0, &(Global_1835390[iVar113 /*901*/][0 /*75*/].f_32)))
									{
										if (func_468(&Var0, &Var116))
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
										if (func_494(uParam0->f_44))
										{
											iVar108 = unk_0xCE8F7BB4AA22190C(iVar111, Global_1835390.f_2709);
											if (iVar108 == 1)
											{
												Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 0;
											}
										}
										if (func_433(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar106 = 0;
										iVar106 = 0;
										while (iVar106 < Global_1835390.f_2708)
										{
											if (unk_0x236D8AD7EE179F46(Global_1835390.f_2769, Global_1835390.f_2710[iVar106]))
											{
												Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_67[iVar106] = unk_0xCE8F7BB4AA22190C(iVar111, Global_1835390.f_2710[iVar106]);
											}
											else
											{
												Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_60[iVar106] = unk_0xD10657024EC7DC5A(iVar111, Global_1835390.f_2710[iVar106]);
											}
											iVar106++;
										}
										Global_1835390.f_2704[iVar113]++;
									}
								}
							}
							func_496(&Var0);
							iVar111++;
						}
						unk_0xEA7EF5E94C3DA740();
						func_348(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar112)
						{
							if (Global_1835390.f_2775[iVar113] == -1 && func_497())
							{
								if (Global_1835390.f_2704[iVar113] >= 1)
								{
									func_495(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_495(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
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
						unk_0xEA7EF5E94C3DA740();
						func_348(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835390.f_2775[iVar113] = -1;
						(*uParam0)[iVar113] = 2;
					}
				}
				else
				{
					func_348(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835390.f_2775[iVar113] = -1;
					(*uParam0)[iVar113] = 2;
					unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2832), iVar113);
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
			if (func_493(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar115))
			{
				func_430(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x83AADE55631E4239(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						iVar106 = 0;
						while (iVar106 < Var98.f_3)
						{
							unk_0xD70C08D94409367B(iVar106, &Var0);
							bVar114 = false;
							if (Global_1835390[iVar113 /*901*/][0 /*75*/].f_59 > 1 || Global_1835390[iVar113 /*901*/][0 /*75*/].f_59 <= 0)
							{
								bVar114 = true;
							}
							if (Global_1835390.f_2704[iVar113] < 12 || bVar114)
							{
								if (func_497() && (func_468(&Var0, &Var116) || func_468(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (iVar106 == 0 || bVar114)
								{
									MemCopy(&(Global_1835390[iVar113 /*901*/][0 /*75*/]), {Var0.f_13}, 16);
									Global_1835390[iVar113 /*901*/][0 /*75*/].f_32 = { Var0 };
									Global_1835390[iVar113 /*901*/][0 /*75*/].f_59 = Var0.f_96;
									if (func_494(uParam0->f_44))
									{
										iVar108 = unk_0xCE8F7BB4AA22190C(0, Global_1835390.f_2709);
										if (iVar108 == 1)
										{
											Global_1835390[iVar113 /*901*/][0 /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar113 /*901*/][0 /*75*/].f_58 = 0;
										}
									}
									if (func_433(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar113 /*901*/][0 /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar113 /*901*/][0 /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835390.f_2708)
									{
										if (unk_0x236D8AD7EE179F46(Global_1835390.f_2769, Global_1835390.f_2710[iVar107]))
										{
											Global_1835390[iVar113 /*901*/][0 /*75*/].f_67[iVar107] = unk_0xCE8F7BB4AA22190C(0, Global_1835390.f_2710[iVar107]);
										}
										else
										{
											Global_1835390[iVar113 /*901*/][0 /*75*/].f_60[iVar107] = unk_0xD10657024EC7DC5A(0, Global_1835390.f_2710[iVar107]);
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
									if (func_494(uParam0->f_44))
									{
										iVar108 = unk_0xCE8F7BB4AA22190C(iVar106, Global_1835390.f_2709);
										if (iVar108 == 1)
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 0;
										}
									}
									if (func_433(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_59 = Var0.f_96;
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835390.f_2708)
									{
										if (unk_0x236D8AD7EE179F46(Global_1835390.f_2769, Global_1835390.f_2710[iVar107]))
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_67[iVar107] = unk_0xCE8F7BB4AA22190C(iVar106, Global_1835390.f_2710[iVar107]);
										}
										else
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_60[iVar107] = unk_0xD10657024EC7DC5A(iVar106, Global_1835390.f_2710[iVar107]);
										}
										iVar107++;
									}
									if (iVar106 != 0)
									{
										Global_1835390.f_2704[iVar113]++;
									}
								}
							}
							func_496(&Var0);
							iVar106++;
						}
					}
					unk_0xEA7EF5E94C3DA740();
					func_348(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar113] = 3;
				}
				else
				{
					unk_0xEA7EF5E94C3DA740();
					func_348(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2832), iVar113);
					Global_1835390.f_2704[iVar113] = 0;
					(*uParam0)[iVar113] = 3;
				}
				if (Global_1835390.f_2775[iVar113] == -1 && func_497())
				{
					if (Global_1835390.f_2704[iVar113] >= 1)
					{
						func_495(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
					}
					else
					{
						func_495(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
					}
					Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
					Global_1835390.f_2704[iVar113]++;
				}
			}
			break;
		
		case 3:
			func_492(iVar113, Global_1835013.f_374);
			(*uParam0)[iVar113] = 4;
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_492(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((func_497() && Global_1835390.f_2704[iParam0] > Global_1835390.f_2775[iParam0]) && Global_1835390.f_2775[iParam0] >= 0)
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
		if (!func_497())
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

int func_493(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_419() && !func_415())
			{
				func_413(*uParam2);
				if (unk_0x454C4DC7394142D9(uParam2, iParam3, iParam4))
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
			if (!unk_0xC67E0AF38C9CA717(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0xEB82BA97438BAC53(*uParam2, uParam2->f_1, 0))
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

int func_494(int iParam0)
{
	if ((((((iParam0 == 815 || iParam0 == 824) || iParam0 == 825) || iParam0 == 826) || iParam0 == 827) || iParam0 == 828) || iParam0 == 849)
	{
		return 1;
	}
	return 0;
}

void func_495(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_433(uParam0->f_44))
	{
		MemCopy(sParam1, {Global_1835013.f_355}, 16);
		sParam1->f_32 = { Global_1835013.f_361 };
		MemCopy(&(sParam1->f_16), {Global_1835013.f_349}, 16);
	}
	else
	{
		StringCopy(sParam1, unk_0xB67DF8F35744CF60(unk_0x1329891157A54C63()), 64);
		sParam1->f_32 = { func_432(unk_0x1329891157A54C63()) };
	}
	sParam1->f_59 = iParam2;
	if (func_494(uParam0->f_44))
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
		if (unk_0x236D8AD7EE179F46(Global_1835013.f_142.f_2, Global_1835390.f_2710[iVar1]))
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

void func_496(var uParam0)
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

int func_497()
{
	if (Global_1835388 && Global_1835389)
	{
		return 1;
	}
	return 0;
}

int func_498(var uParam0)
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
	Var114 = { func_432(unk_0x1329891157A54C63()) };
	switch ((*uParam0)[1])
	{
		case 0:
			iVar107 = unk_0xB5F469DE391974B9();
			Global_1835390.f_2775[1] = -1;
			Global_1835013.f_374 = -1;
			Global_1835390.f_2704[iVar113] = 0;
			if (iVar107 > 0)
			{
				if (func_497())
				{
					bVar112 = false;
				}
				else
				{
					bVar112 = true;
				}
				if (func_499(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &(uParam0->f_113), uParam0->f_113[0 /*66*/], bVar112, 0, 100))
				{
					func_430(&Var98, &(uParam0->f_44));
					if (uParam0->f_5 && unk_0x83AADE55631E4239(&Var98))
					{
						if (func_497())
						{
							iVar110 = 0;
							iVar110 = 0;
							while (iVar110 < Var98.f_3)
							{
								if (iVar108 < 0)
								{
									unk_0xD70C08D94409367B(iVar110, &Var0);
									if (func_433(uParam0->f_44))
									{
										if (Global_1835013.f_374 < 0)
										{
											if (func_468(&Var0, &(Global_1835013.f_361)))
											{
												Global_1835013.f_374 = Var0.f_96;
											}
										}
									}
									if (unk_0x236D8AD7EE179F46(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0xCE8F7BB4AA22190C(iVar110, 0))
										{
											iVar108 = iVar110;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0xD10657024EC7DC5A(iVar110, 0))
									{
										iVar108 = iVar110;
									}
									func_496(&Var0);
								}
								iVar110++;
							}
							if (iVar108 < 0)
							{
								iVar108 = Var98.f_3;
							}
						}
						iVar110 = 0;
						if (func_497() && iVar108 == 0)
						{
							if (Global_1835390.f_2704[iVar113] < 12)
							{
								func_495(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
								Global_1835390.f_2775[iVar113] = 0;
								Global_1835390.f_2704[iVar113]++;
							}
						}
						if (Var98.f_3 > 0)
						{
							unk_0xD70C08D94409367B(0, &Var0);
							if (func_497() && (func_468(&Var0, &Var114) || func_468(&Var0, &(Global_1835013.f_361))))
							{
							}
							else if (func_427(Var0) && Global_1835390.f_2704[iVar113] < 12)
							{
								if (func_468(&Var0, &Var114))
								{
									iVar108 = 0;
									Global_1835390.f_2775[1] = 0;
								}
								MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
								Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_32 = { Var0 };
								Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_59 = 1;
								if (func_494(uParam0->f_44))
								{
									iVar111 = unk_0xCE8F7BB4AA22190C(0, Global_1835390.f_2709);
									if (iVar111 == 1)
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 1;
									}
									else
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 0;
									}
								}
								if (func_433(uParam0->f_44))
								{
									MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
								}
								Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_74 = 1;
								iVar106 = 0;
								while (iVar106 < Global_1835390.f_2708)
								{
									if (unk_0x236D8AD7EE179F46(Global_1835390.f_2769, Global_1835390.f_2710[iVar106]))
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_67[iVar106] = unk_0xCE8F7BB4AA22190C(0, Global_1835390.f_2710[iVar106]);
									}
									else
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_60[iVar106] = unk_0xD10657024EC7DC5A(0, Global_1835390.f_2710[iVar106]);
									}
									iVar106++;
								}
								Global_1835390.f_2704[1]++;
							}
							else
							{
								func_496(&Var0);
								unk_0xEA7EF5E94C3DA740();
								func_348(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
								Global_1835390.f_2704[1] = 0;
								(*uParam0)[1] = 1;
								if (Global_1835390.f_2775[iVar113] == -1 && func_497())
								{
									if (Global_1835390.f_2704[iVar113] >= 1)
									{
										func_495(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
									}
									else
									{
										func_495(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
									}
									Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
									Global_1835390.f_2704[iVar113]++;
								}
								return 0;
							}
							func_496(&Var0);
						}
						else
						{
							Global_1835390.f_2704[1] = 0;
							func_496(&Var0);
							unk_0xEA7EF5E94C3DA740();
							func_348(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
							if (Global_1835390.f_2775[iVar113] == -1 && func_497())
							{
								if (Global_1835390.f_2704[iVar113] >= 1)
								{
									func_495(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_495(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
								}
								Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
								Global_1835390.f_2704[iVar113]++;
							}
							(*uParam0)[1] = 1;
							return 0;
						}
						if (!func_497())
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
							unk_0xD70C08D94409367B(iVar110, &Var0);
							if (Global_1835390.f_2704[iVar113] < 12 && Var0.f_96 > 1)
							{
								if (func_497() && iVar108 == iVar110)
								{
									if (!func_468(&(Global_1835390[iVar113 /*901*/][0 /*75*/].f_32), &Var114))
									{
										func_495(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Var0.f_96);
										Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_59 = iVar110 + 1;
										Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
										Global_1835390.f_2704[iVar113]++;
									}
								}
								if (func_497() && (func_468(&Var0, &Var114) || func_468(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835390.f_2704[1] < 12)
								{
									if (func_427(Var0) && !func_468(&Var0, &(Global_1835390[iVar113 /*901*/][0 /*75*/].f_32)))
									{
										if (func_468(&Var0, &Var114))
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
										if (func_494(uParam0->f_44))
										{
											iVar111 = unk_0xCE8F7BB4AA22190C(iVar110, Global_1835390.f_2709);
											if (iVar111 == 1)
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_58 = 0;
											}
										}
										if (func_433(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar106 = 0;
										while (iVar106 < Global_1835390.f_2708)
										{
											if (unk_0x236D8AD7EE179F46(Global_1835390.f_2769, Global_1835390.f_2710[iVar106]))
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_67[iVar106] = unk_0xCE8F7BB4AA22190C(iVar110, Global_1835390.f_2710[iVar106]);
											}
											else
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_60[iVar106] = unk_0xD10657024EC7DC5A(iVar110, Global_1835390.f_2710[iVar106]);
											}
											iVar106++;
										}
										Global_1835390.f_2704[1]++;
									}
								}
							}
							func_496(&Var0);
							iVar110++;
						}
						unk_0xEA7EF5E94C3DA740();
						func_348(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						(*uParam0)[1] = 1;
						if (Global_1835390.f_2775[iVar113] == -1 && func_497())
						{
							if (Global_1835390.f_2704[iVar113] >= 1)
							{
								func_495(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
							}
							else
							{
								func_495(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
							}
							Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
							Global_1835390.f_2704[iVar113]++;
						}
						return 0;
					}
					else
					{
						func_348(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835390.f_2704[1] = 0;
						(*uParam0)[1] = 1;
						unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2832), 1);
						return 0;
					}
				}
			}
			else
			{
				func_348(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
				Global_1835390.f_2704[1] = 0;
				(*uParam0)[1] = 1;
				return 0;
			}
			break;
		
		case 1:
			func_492(iVar113, Global_1835013.f_374);
			(*uParam0)[iVar113] = 2;
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_499(var uParam0, var uParam1, var* uParam2, var* uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_419() && !func_415())
			{
				func_413(*uParam2);
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
			if (!unk_0xC67E0AF38C9CA717(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0xEB82BA97438BAC53(*uParam2, uParam2->f_1, 0))
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

int func_500(var uParam0)
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
	Var0 = { func_432(unk_0x1329891157A54C63()) };
	switch ((*uParam0)[iVar126])
	{
		case 0:
			Global_1835390.f_2775[iVar126] = -1;
			Global_1835390.f_2704[iVar126] = 0;
			Global_1835013.f_374 = -1;
			Global_1835389 = 0;
			if (func_501(uParam0->f_44))
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
			if (func_412(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var0, func_497(), 0, 0, 0))
			{
				func_430(&Var111, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x83AADE55631E4239(&Var111))
				{
					if (Var111.f_3 > 0)
					{
						iVar124 = 0;
						iVar119 = 0;
						if (func_497())
						{
							iVar124 = 0;
							while (iVar124 < Var111.f_3)
							{
								unk_0xD70C08D94409367B(iVar124, &Var13);
								if (Global_1835013.f_374 < 0)
								{
									if (func_468(&Var13, &Var0) || func_468(&Var13, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var13.f_96;
									}
								}
								if (iVar122 < 0)
								{
									if (unk_0x236D8AD7EE179F46(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0xCE8F7BB4AA22190C(iVar124, 0))
										{
											iVar122 = iVar124;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0xD10657024EC7DC5A(iVar124, 0))
									{
										iVar122 = iVar124;
									}
								}
								func_496(&Var13);
								iVar124++;
							}
							if (iVar122 < 0)
							{
								iVar122 = Var111.f_3;
							}
						}
						iVar124 = 0;
						unk_0xD70C08D94409367B(0, &Var13);
						if (Var13.f_96 <= 1)
						{
							if (Global_1835390.f_2704[iVar126] < 12)
							{
								if (func_497() && iVar122 == 0)
								{
									func_495(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), Var13.f_96);
									Global_1835390.f_2775[iVar126] = 0;
									Global_1835390.f_2704[iVar126]++;
								}
								if (func_497() && (func_468(&Var13, &Var0) || func_468(&Var13, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_468(&Var13, &Var0))
									{
										iVar122 = 0;
										Global_1835390.f_2775[iVar126] = 0;
									}
									MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), {Var13.f_13}, 16);
									Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_32 = { Var13 };
									Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_59 = Var13.f_96;
									if (func_494(uParam0->f_44))
									{
										iVar121 = unk_0xCE8F7BB4AA22190C(0, Global_1835390.f_2709);
										if (iVar121 == 1)
										{
											Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 0;
										}
									}
									if (func_433(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_74 = 1;
									iVar119 = 0;
									while (iVar119 < Global_1835390.f_2708)
									{
										if (unk_0x236D8AD7EE179F46(Global_1835390.f_2769, Global_1835390.f_2710[iVar119]))
										{
											Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_67[iVar119] = unk_0xCE8F7BB4AA22190C(0, Global_1835390.f_2710[iVar119]);
										}
										else
										{
											Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_60[iVar119] = unk_0xD10657024EC7DC5A(0, Global_1835390.f_2710[iVar119]);
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
						if (!func_497())
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
						func_496(&Var13);
						iVar124 = iVar123;
						while (iVar124 <= (Var111.f_3 - 1))
						{
							unk_0xD70C08D94409367B(iVar124, &Var13);
							if (Global_1835390.f_2704[iVar126] < 12 && Var13.f_96 > 1)
							{
								if (func_497() && iVar122 == iVar124)
								{
									if (!func_468(&(Global_1835390[iVar126 /*901*/][0 /*75*/].f_32), &Var13))
									{
										func_495(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), Var13.f_96);
										Global_1835390.f_2775[iVar126] = Global_1835390.f_2704[iVar126];
										Global_1835390.f_2704[iVar126]++;
									}
								}
								if (func_497() && (func_468(&Var13, &Var0) || func_468(&Var13, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835390.f_2704[iVar126] < 12)
								{
									if (func_427(Var13) && !func_468(&(Global_1835390[iVar126 /*901*/][0 /*75*/].f_32), &Var13))
									{
										if (func_468(&Var13, &Var0))
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
										if (func_494(uParam0->f_44))
										{
											iVar121 = unk_0xCE8F7BB4AA22190C(iVar124, Global_1835390.f_2709);
											if (iVar121 == 1)
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 0;
											}
										}
										if (func_433(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar119 = 0;
										iVar119 = 0;
										while (iVar119 < Global_1835390.f_2708)
										{
											if (unk_0x236D8AD7EE179F46(Global_1835390.f_2769, Global_1835390.f_2710[iVar119]))
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_67[iVar119] = unk_0xCE8F7BB4AA22190C(iVar124, Global_1835390.f_2710[iVar119]);
											}
											else
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_60[iVar119] = unk_0xD10657024EC7DC5A(iVar124, Global_1835390.f_2710[iVar119]);
											}
											iVar119++;
										}
										Global_1835390.f_2704[iVar126]++;
									}
								}
							}
							func_496(&Var13);
							iVar124++;
						}
						unk_0xEA7EF5E94C3DA740();
						func_348(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar125)
						{
							if (Global_1835390.f_2775[iVar126] == -1 && func_497())
							{
								if (Global_1835390.f_2704[iVar126] >= 1)
								{
									func_495(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), Global_1835390[iVar126 /*901*/][(Global_1835390.f_2704[iVar126] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_495(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), 1);
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
						unk_0xEA7EF5E94C3DA740();
						func_348(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835390.f_2775[iVar126] = -1;
						(*uParam0)[iVar126] = 1;
					}
				}
				else
				{
					func_348(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835390.f_2775[iVar126] = -1;
					(*uParam0)[iVar126] = 1;
					unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2832), iVar126);
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
			if (func_493(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar128))
			{
				func_430(&Var111, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x83AADE55631E4239(&Var111))
				{
					if (Var111.f_3 > 0)
					{
						iVar119 = 0;
						while (iVar119 < Var111.f_3)
						{
							unk_0xD70C08D94409367B(iVar119, &Var13);
							if (func_497() && (func_468(&Var13, &Var0) || func_468(&Var13, &(Global_1835013.f_361))))
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
										if (func_494(uParam0->f_44))
										{
											iVar121 = unk_0xCE8F7BB4AA22190C(0, Global_1835390.f_2709);
											if (iVar121 == 1)
											{
												Global_1835390[iVar126 /*901*/][0 /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar126 /*901*/][0 /*75*/].f_58 = 0;
											}
										}
										if (func_433(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar126 /*901*/][0 /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1835390[iVar126 /*901*/][0 /*75*/].f_74 = 1;
										iVar120 = 0;
										iVar120 = 0;
										while (iVar120 < Global_1835390.f_2708)
										{
											if (unk_0x236D8AD7EE179F46(Global_1835390.f_2769, Global_1835390.f_2710[iVar120]))
											{
												Global_1835390[iVar126 /*901*/][iVar119 /*75*/].f_67[iVar120] = unk_0xCE8F7BB4AA22190C(iVar119, Global_1835390.f_2710[iVar120]);
											}
											else
											{
												Global_1835390[iVar126 /*901*/][iVar119 /*75*/].f_60[iVar120] = unk_0xD10657024EC7DC5A(iVar119, Global_1835390.f_2710[iVar120]);
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
										if (func_494(uParam0->f_44))
										{
											iVar121 = unk_0xCE8F7BB4AA22190C(iVar119, Global_1835390.f_2709);
											if (iVar121 == 1)
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 0;
											}
										}
										if (func_433(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_59 = Var13.f_96;
										Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_74 = 1;
										iVar120 = 0;
										iVar120 = 0;
										while (iVar120 < Global_1835390.f_2708)
										{
											if (unk_0x236D8AD7EE179F46(Global_1835390.f_2769, Global_1835390.f_2710[iVar120]))
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_67[iVar120] = unk_0xCE8F7BB4AA22190C(iVar119, Global_1835390.f_2710[iVar120]);
											}
											else
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_60[iVar120] = unk_0xD10657024EC7DC5A(iVar119, Global_1835390.f_2710[iVar120]);
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
							func_496(&Var13);
							iVar119++;
						}
					}
					unk_0xEA7EF5E94C3DA740();
					func_348(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar126] = 2;
				}
				else
				{
					unk_0xF3148AAF69AF9CBC(&(Global_1835390.f_2832), iVar126);
					func_348(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835390.f_2704[iVar126] = 0;
					(*uParam0)[iVar126] = 2;
					Global_1835390.f_2704[1] = 0;
					(*uParam0)[1] = 1;
					Global_1835390.f_2704[2] = 0;
					(*uParam0)[2] = 3;
				}
			}
			if (Global_1835390.f_2775[iVar126] == -1 && func_497())
			{
				if (Global_1835390.f_2704[iVar126] >= 1)
				{
					func_495(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), Global_1835390[iVar126 /*901*/][(Global_1835390.f_2704[iVar126] - 1) /*75*/].f_59 + 1);
				}
				else
				{
					func_495(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), 1);
				}
				Global_1835390.f_2775[iVar126] = Global_1835390.f_2704[iVar126];
				Global_1835390.f_2704[iVar126]++;
			}
			break;
		
		case 2:
			func_492(iVar126, Global_1835013.f_374);
			(*uParam0)[iVar126] = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_501(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)
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
						if (!unk_0xD994929E13CC1ED5(&(Global_1835013.f_5.f_2.f_1[iVar0 /*16*/]), &(Param0.f_3.f_1[iVar0 /*16*/])) || !unk_0xD994929E13CC1ED5(&(Global_1835013.f_5.f_2.f_1[iVar0 /*16*/].f_8), &(Param0.f_3.f_1[iVar0 /*16*/].f_8)))
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

void func_502(var uParam0)
{
	int iVar0;
	
	if (unk_0xC4A0D76E62E374A1(Global_1835390.f_2826))
	{
		iVar0 = unk_0x6179092E964403EB(Global_1835390.f_2826);
		if (iVar0 < 300000)
		{
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_42), 5);
		}
		else
		{
			unk_0xC69E84EBBD7166E6(&(uParam0->f_42), 5);
			func_477(Global_1835390.f_2826, -1);
		}
	}
}

void func_503(var uParam0)
{
	if (unk_0xCC8E3BAC62A29F42(uParam0))
	{
		unk_0x88188CE25DF2572C(uParam0, 255, 255, 255, 0, 0);
	}
}

void func_504(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
	if (unk_0x236D8AD7EE179F46(iParam2, 4))
	{
		sVar0 = "SCLB_GLOBAL";
	}
	else if (unk_0x236D8AD7EE179F46(iParam2, 5))
	{
		*iParam1++;
		sVar0 = "SCLB_FRIENDS";
	}
	else if (unk_0x236D8AD7EE179F46(iParam2, 6))
	{
		*iParam1++;
		if (unk_0x1F2C82EFDAD19C5D() && unk_0x80622F5ED5957337())
		{
			if (unk_0xEC209B562C5EFDB2() && !unk_0xBEC1291D6B41868E(0))
			{
				sVar0 = "SCLB_CREW";
			}
			else
			{
				Var53 = { func_432(unk_0x1329891157A54C63()) };
				if (unk_0x464883E45616A088(&Var53))
				{
					unk_0xEF956A1EC046AA4A(&Var1, 35, &Var53);
					if (!unk_0xB318FDA0D1ABDB20(&(Var1.f_1)))
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
	unk_0x21ED0FC9B5CC748B(uParam0, "SET_SLOT");
	unk_0xBD0C54D89298454E(*iParam1);
	unk_0xBD0C54D89298454E(iParam2);
	if (bVar52)
	{
		unk_0x6CE839BF5D87A428(sVar0);
		unk_0x92D1853394E2386A(&Var36);
		unk_0xC3822F70D0E7940B();
	}
	else
	{
		unk_0x6CE839BF5D87A428(sVar0);
		unk_0xC3822F70D0E7940B();
	}
	unk_0xBA9BA6181F2B6111();
	*iParam1++;
	if (bParam4)
	{
		iVar66 = 0;
		unk_0xF3148AAF69AF9CBC(&iVar66, 7);
		unk_0x21ED0FC9B5CC748B(uParam0, "SET_SLOT");
		unk_0xBD0C54D89298454E(*iParam1);
		unk_0xBD0C54D89298454E(iVar66);
		if (!unk_0x1F2C82EFDAD19C5D())
		{
			sVar0 = "SCLB_NOT_ONL";
		}
		else if (!unk_0xFA106675D906ECBC())
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
		unk_0x6CE839BF5D87A428(sVar0);
		unk_0x8CE45FC10BB0C41B();
		unk_0xBA9BA6181F2B6111();
		*iParam1++;
	}
	else if (bParam3)
	{
		if (unk_0x236D8AD7EE179F46(iParam2, 4))
		{
			sVar0 = "SCLB_NO_GLOBAL";
		}
		else if (unk_0x236D8AD7EE179F46(iParam2, 5))
		{
			if (unk_0xB5F469DE391974B9() > 0)
			{
				sVar0 = "SCLB_NO_FRNDS";
			}
			else
			{
				sVar0 = "SCLB_NO_FRNDSb";
			}
		}
		else if (unk_0x236D8AD7EE179F46(iParam2, 6))
		{
			if (unk_0x9F80443939366966())
			{
				if (unk_0xB8FFC89E139FFE2E())
				{
					if (unk_0x1F2C82EFDAD19C5D() && unk_0x80622F5ED5957337())
					{
						if (unk_0xEC209B562C5EFDB2() && !unk_0xBEC1291D6B41868E(0))
						{
							sVar0 = "SCLB_NO_CREWc";
						}
						else
						{
							Var67 = { func_432(unk_0x1329891157A54C63()) };
							if (unk_0x464883E45616A088(&Var67))
							{
								unk_0xEF956A1EC046AA4A(&Var1, 35, &Var67);
								if (!unk_0xB318FDA0D1ABDB20(&(Var1.f_1)))
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
		unk_0xF3148AAF69AF9CBC(&iVar80, 7);
		unk_0x21ED0FC9B5CC748B(uParam0, "SET_SLOT");
		unk_0xBD0C54D89298454E(*iParam1);
		unk_0xBD0C54D89298454E(iVar80);
		if (bVar52)
		{
			unk_0x6CE839BF5D87A428(sVar0);
			unk_0x92D1853394E2386A(&Var36);
			unk_0x8CE45FC10BB0C41B();
		}
		else
		{
			unk_0x6CE839BF5D87A428(sVar0);
			unk_0x8CE45FC10BB0C41B();
		}
		unk_0xBA9BA6181F2B6111();
		*iParam1++;
	}
}

void func_505(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	unk_0x21ED0FC9B5CC748B(uParam0, "SET_TITLE");
	unk_0x6CE839BF5D87A428(sParam1);
	unk_0xC3822F70D0E7940B();
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		unk_0x6CE839BF5D87A428(uParam2[iVar0 /*6*/]);
		unk_0xC3822F70D0E7940B();
		iVar0++;
	}
	unk_0xBA9BA6181F2B6111();
}

void func_506(var uParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	unk_0x21ED0FC9B5CC748B(uParam0, "SET_MULTIPLAYER_TITLE");
	unk_0x6CE839BF5D87A428(uParam1);
	if (!unk_0xB318FDA0D1ABDB20(sParam2))
	{
		unk_0x072D7B028D6C7A05(sParam2);
	}
	if (iParam5 == -1)
	{
		if (bParam4)
		{
			if (!unk_0xB318FDA0D1ABDB20(sParam3))
			{
				unk_0x92D1853394E2386A(sParam3);
			}
		}
		else if (!unk_0xB318FDA0D1ABDB20(sParam3))
		{
			unk_0x072D7B028D6C7A05(sParam3);
		}
	}
	else
	{
		if (bParam4)
		{
			if (!unk_0xB318FDA0D1ABDB20(sParam3))
			{
				unk_0x92D1853394E2386A(sParam3);
			}
		}
		else if (!unk_0xB318FDA0D1ABDB20(sParam3))
		{
			unk_0x072D7B028D6C7A05(sParam3);
		}
		unk_0x6D55FF05D62B91BC(iParam5);
	}
	unk_0xC3822F70D0E7940B();
	unk_0xBA9BA6181F2B6111();
}

void func_507(var uParam0, int iParam1)
{
	unk_0x21ED0FC9B5CC748B(uParam0, "SET_DISPLAY_TYPE");
	unk_0xBD0C54D89298454E(iParam1);
	unk_0xBA9BA6181F2B6111();
}

void func_508(int iParam0)
{
	Global_1318734 = iParam0;
}

void func_509(int iParam0)
{
	Global_1336084.f_932 = iParam0;
}

void func_510()
{
	func_513();
	func_511(4, -1);
	func_511(6, -1);
	func_511(7, -1);
	func_511(3, -1);
	func_511(1, -1);
	func_511(2, -1);
	func_511(11, -1);
	func_511(13, -1);
	func_511(14, -1);
	func_511(16, -1);
}

void func_511(int iParam0, int iParam1)
{
	unk_0xF3148AAF69AF9CBC(&(Global_1334766.f_948), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1334766.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_512()
{
	if (!Global_14394.f_1 == 1)
	{
		if (func_130(0))
		{
			func_127(0);
		}
		unk_0xF3148AAF69AF9CBC(&Global_2265, 2);
	}
}

void func_513()
{
	Global_2451473.f_4374 = 0;
}

void func_514(bool bParam0)
{
	if (bParam0)
	{
		func_241(&(Local_50.f_119), 0, 0, 1, 1);
		func_240(&(Local_50.f_119), "HUD_INPUT53", 2, 202, 1, 1, 0);
		func_240(&(Local_50.f_119), "SCLB_PROFILE", 2, 217, 1, 1, 0);
		func_515(&(Local_50.f_119), 1);
	}
	else
	{
		func_241(&(Local_50.f_119), 0, 0, 1, 1);
		func_240(&(Local_50.f_119), "HUD_INPUT53", 2, 202, 1, 1, 0);
		func_515(&(Local_50.f_119), 1);
	}
}

void func_515(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_142(&(uParam0->f_1), 1024);
	}
	else
	{
		func_141(&(uParam0->f_1), 1024);
	}
}

int func_516(var uParam0)
{
	if ((unk_0x236D8AD7EE179F46(uParam0->f_42, 1) && Global_1835390.f_2704[0] > 0) && uParam0->f_246.f_1 >= 0)
	{
		return 1;
	}
	return 0;
}

void func_517(var uParam0)
{
	if (Global_97961 != 0 && Global_98931.f_17657.f_12[Global_97961 /*8*/].f_4 == 0)
	{
		func_241(uParam0, 0, 0, 1, 1);
		func_240(uParam0, "IB_QUIT", 2, 202, 1, 1, 0);
		if (!unk_0x98465343DD18A1F7())
		{
			func_240(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_529 = 1;
		}
		else if (unk_0x98465343DD18A1F7() && iLocal_528)
		{
			func_240(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_529 = 0;
		}
		else
		{
			iLocal_529 = 0;
		}
	}
	else
	{
		func_241(uParam0, 0, 0, 1, 1);
		func_240(uParam0, "FE_HLP4", 2, 201, 1, 1, 0);
		func_240(uParam0, "IB_QUIT", 2, 202, 1, 1, 0);
		if (!unk_0x98465343DD18A1F7())
		{
			func_240(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_529 = 1;
		}
		else if (unk_0x98465343DD18A1F7() && iLocal_528)
		{
			func_240(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_529 = 0;
		}
		else
		{
			iLocal_529 = 0;
		}
	}
	func_515(&(Local_50.f_119), 1);
}

void func_518()
{
	func_547();
	func_407();
	func_546(&(Local_2440.f_358[0 /*189*/].f_24), 0, 0, "PilotDispatch", 0, 1);
	func_546(&uLocal_2110, 0, 0, "PilotDispatch", 0, 1);
	func_535(&Local_2440);
	func_519(&Local_2440, Local_50.f_10);
	if (unk_0x86CCCD2FAE9D5E65(Local_2440.f_358[0 /*189*/].f_9))
	{
		unk_0xC390A6485FB80923(Local_2440.f_358[0 /*189*/].f_9, 4);
	}
}

void func_519(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_534(&Local_2440);
			break;
		
		case 1:
			func_533(&Local_2440);
			break;
		
		case 2:
			func_532(&Local_2440);
			func_531(&(Local_2440.f_27[2 /*10*/]), 1);
			func_531(&(Local_2440.f_27[3 /*10*/]), 1);
			break;
		
		case 3:
			func_530(&Local_2440);
			break;
		
		case 4:
			func_520(&Local_2440);
			break;
	}
}

void func_520(var uParam0)
{
	func_535(uParam0);
	uParam0->f_12 = 32;
	func_529(&(uParam0->f_27[0 /*10*/]), 947.1314f, 4146.46f, 80.494f, 30f, 2, 0);
	func_529(&(uParam0->f_27[1 /*10*/]), 762.498f, 4589.213f, 105.5935f, 30f, 2, 0);
	func_529(&(uParam0->f_27[2 /*10*/]), 659.2919f, 4806.028f, 175.759f, 30f, 2, 0);
	func_529(&(uParam0->f_27[3 /*10*/]), 621.3849f, 5032.051f, 343.6387f, 30f, 2, 0);
	func_529(&(uParam0->f_27[4 /*10*/]), 503.8404f, 5297.335f, 508.6478f, 30f, 2, 0);
	func_529(&(uParam0->f_27[5 /*10*/]), 555.4404f, 5426.935f, 708.948f, 30f, 2, 0);
	func_529(&(uParam0->f_27[6 /*10*/]), 637.6946f, 5491.08f, 717.522f, 30f, 2, 0);
	func_529(&(uParam0->f_27[7 /*10*/]), 790.3913f, 5491.866f, 566.103f, 30f, 2, 0);
	func_529(&(uParam0->f_27[8 /*10*/]), 910.6804f, 5313.552f, 388.8567f, 30f, 2, 0);
	func_529(&(uParam0->f_27[9 /*10*/]), 1159.749f, 5183.155f, 253.1068f, 30f, 2, 0);
	func_529(&(uParam0->f_27[10 /*10*/]), 1354.13f, 4998.078f, 141.6288f, 30f, 2, 0);
	func_529(&(uParam0->f_27[11 /*10*/]), 1612.532f, 4941.23f, 61.8549f, 30f, 2, 0);
	func_529(&(uParam0->f_27[12 /*10*/]), 2200.396f, 4800.332f, 69.9321f, 30f, 3, 2);
	func_529(&(uParam0->f_27[13 /*10*/]), 2527.632f, 5144.98f, 66.763f, 30f, 3, 2);
	func_529(&(uParam0->f_27[14 /*10*/]), 2527.131f, 5275.334f, 62.3622f, 30f, 2, 0);
	func_529(&(uParam0->f_27[15 /*10*/]), 2413.345f, 5443.203f, 99.4297f, 30f, 2, 0);
	func_529(&(uParam0->f_27[16 /*10*/]), 2236.067f, 5524.246f, 108.3291f, 30f, 2, 0);
	func_529(&(uParam0->f_27[17 /*10*/]), 1944.463f, 5520.007f, 177.2808f, 30f, 2, 0);
	func_529(&(uParam0->f_27[18 /*10*/]), 1712.477f, 5624.937f, 324.9427f, 30f, 2, 0);
	func_529(&(uParam0->f_27[19 /*10*/]), 1601.158f, 5663.75f, 335.8832f, 30f, 2, 0);
	func_529(&(uParam0->f_27[20 /*10*/]), 1410.764f, 5675.836f, 425.9678f, 30f, 2, 0);
	func_529(&(uParam0->f_27[21 /*10*/]), 1225.682f, 5678.654f, 497.3169f, 30f, 2, 0);
	func_529(&(uParam0->f_27[22 /*10*/]), 1094.47f, 5664.07f, 563.0829f, 30f, 2, 0);
	func_529(&(uParam0->f_27[23 /*10*/]), 1001.427f, 5633.827f, 633.2537f, 30f, 2, 0);
	func_529(&(uParam0->f_27[24 /*10*/]), 875.5358f, 5642.667f, 682.5352f, 30f, 2, 0);
	func_529(&(uParam0->f_27[25 /*10*/]), 741.3275f, 5688.046f, 709.5683f, 30f, 2, 0);
	func_529(&(uParam0->f_27[26 /*10*/]), 487.2532f, 5654.821f, 802.0096f, 30f, 3, 1);
	func_529(&(uParam0->f_27[27 /*10*/]), 362.6602f, 5620.538f, 723.2353f, 30f, 2, 0);
	func_529(&(uParam0->f_27[28 /*10*/]), 134.4865f, 5555.637f, 520.3109f, 30f, 2, 0);
	func_529(&(uParam0->f_27[29 /*10*/]), -128.2242f, 5510.46f, 307.4505f, 30f, 2, 0);
	func_529(&(uParam0->f_27[30 /*10*/]), -397.7556f, 5438.69f, 175.4529f, 30f, 2, 0);
	func_529(&(uParam0->f_27[31 /*10*/]), -520.8975f, 5424.283f, 165.285f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_528(&(uParam0->f_358[0 /*189*/]));
	func_527(&(uParam0->f_358[0 /*189*/]), "Player");
	func_523(&(uParam0->f_358[0 /*189*/]), unk_0x81873881071CD9FE(), Local_50.f_1);
	func_522(&(uParam0->f_358[0 /*189*/]), 1135.682f, 3700.644f, 80.494f, 22.3451f);
	func_521(&(uParam0->f_358[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_521(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_20 = iParam1;
	uParam0->f_21 = iParam2;
	uParam0->f_22 = iParam3;
}

void func_522(var uParam0, struct<3> Param1, float fParam4)
{
	uParam0->f_16 = { Param1 };
	uParam0->f_19 = fParam4;
}

void func_523(var uParam0, int iParam1, var uParam2)
{
	uParam0->f_8 = iParam1;
	uParam0->f_9 = uParam2;
	func_524(uParam2, &(Local_50.f_243));
}

void func_524(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x7404950238A154C2(uParam0, 0))
	{
		func_526(uParam1);
		uParam1->f_66 = unk_0x14B7103DBD149FFE(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xE0DCE5625B61B0CC(iParam0), 16);
		*uParam1 = unk_0xBF74E89FC6941108(iParam0);
		unk_0x1D3AAB0507DD3600(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x6942D519F6FE2C32(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xB931B48FB3E13CF0(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x48F64101B58EB7F7(iParam0);
		uParam1->f_67 = unk_0xA3EFB2F9FFCDC48D(iParam0);
		uParam1->f_69 = unk_0xBB644BAE860F67B7(iParam0);
		uParam1->f_70 = unk_0x4AC847D90EBAFAEE(iParam0);
		unk_0x332D9608C3A4D1BE(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x3182B161F39E40BC(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x1CD308F8479FBE52(iParam0, 2))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 28);
		}
		if (unk_0x1CD308F8479FBE52(iParam0, 3))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 29);
		}
		if (unk_0x1CD308F8479FBE52(iParam0, 0))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 30);
		}
		if (unk_0x1CD308F8479FBE52(iParam0, 1))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0xD31A4E6B116BE250(iParam0, 0))
		{
			uParam1->f_68 = unk_0x48D44DDE1A5A9BD7(iParam0);
		}
		if (unk_0x1699D7B95446F15C(uParam1->f_66))
		{
			if (unk_0x923087289F6BA752(iParam0))
			{
				switch (unk_0x3D09A88E72AB7687(iParam0))
				{
					case 2:
					case 0:
						unk_0xC69E84EBBD7166E6(&(uParam1->f_77), 23);
						unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0xC69E84EBBD7166E6(&(uParam1->f_77), 23);
						unk_0xC69E84EBBD7166E6(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x263B56EFBC6AC36C(iParam0))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 9);
		}
		if (unk_0x1E729885E653D827(iParam0))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 10);
		}
		if (unk_0x6E728693163D9496(iParam0))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 13);
			unk_0x4B850687F46D6E15(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x9EBDB9930E2E0600(iParam0))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 12);
		}
		func_525(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x5CBBEE14743C3376(iParam0, iVar0 + 1))
			{
				unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), func_112(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x45AFEFCDD35076F2(iParam0, 0))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xC69E84EBBD7166E6(&(uParam1->f_77), 11);
		}
		if (unk_0xCEC9D74C9FF51C8C(iParam0, "IgnoredByQuickSave") && unk_0x53ABC9BE848EA65A(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xC69E84EBBD7166E6(&(uParam1->f_77), 27);
		}
	}
}

int func_525(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x7404950238A154C2(*uParam0, 0))
	{
		return 0;
	}
	if (unk_0xBE23E5C609DF6E79(*uParam0) == 0)
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
			if (unk_0x91B47E3FC237F24A(*uParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x64D946BA23568D30(*uParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xB0BC5473B799F536(*uParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xB0BC5473B799F536(*uParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_526(var uParam0)
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

void func_527(char* sParam0, char* sParam1)
{
	StringCopy(sParam0, sParam1, 32);
}

void func_528(var uParam0)
{
	uParam0->f_10 = 0;
	uParam0->f_11 = -1;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0f;
	uParam0->f_23 = 13;
}

void func_529(var uParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6)
{
	*uParam0 = { Param1 };
	uParam0->f_3 = fParam4;
	uParam0->f_7 = iParam5;
	uParam0->f_8 = iParam6;
}

void func_530(var uParam0)
{
	func_535(uParam0);
	uParam0->f_12 = 28;
	func_529(&(uParam0->f_27[0 /*10*/]), -1737.725f, -2720.967f, 38f, 30f, 2, 0);
	func_529(&(uParam0->f_27[1 /*10*/]), -1384.515f, -2880.773f, 38f, 30f, 2, 0);
	func_529(&(uParam0->f_27[2 /*10*/]), -1156.435f, -2957.284f, 40f, 30f, 2, 0);
	func_529(&(uParam0->f_27[3 /*10*/]), -795.3043f, -2987.754f, 60f, 30f, 2, 0);
	func_529(&(uParam0->f_27[4 /*10*/]), -429.0231f, -2969.528f, 30f, 30f, 3, 1);
	func_529(&(uParam0->f_27[5 /*10*/]), -15.5168f, -2912.484f, 60f, 30f, 2, 0);
	func_529(&(uParam0->f_27[6 /*10*/]), 656.9059f, -2798.444f, 80f, 30f, 3, 2);
	func_529(&(uParam0->f_27[7 /*10*/]), 990.7529f, -2452.092f, 70f, 30f, 2, 0);
	func_529(&(uParam0->f_27[8 /*10*/]), 1019.531f, -2182.119f, 60f, 30f, 2, 0);
	func_529(&(uParam0->f_27[9 /*10*/]), 1019.899f, -1886.15f, 60f, 30f, 2, 0);
	func_529(&(uParam0->f_27[10 /*10*/]), 944.9045f, -1488.589f, 107.7f, 30f, 2, 0);
	func_529(&(uParam0->f_27[11 /*10*/]), 698.908f, -1013.024f, 100.5f, 30f, 3, 2);
	func_529(&(uParam0->f_27[12 /*10*/]), 388.7276f, -822.8241f, 90f, 30f, 2, 0);
	func_529(&(uParam0->f_27[13 /*10*/]), 20.7016f, -653.9637f, 101.8f, 30f, 3, 2);
	func_529(&(uParam0->f_27[14 /*10*/]), -135.3874f, -670.6069f, 112f, 30f, 3, 3);
	func_529(&(uParam0->f_27[15 /*10*/]), -360.3365f, -655.137f, 90f, 30f, 2, 0);
	func_529(&(uParam0->f_27[16 /*10*/]), -700.3533f, -657.1476f, 70f, 30f, 2, 0);
	func_529(&(uParam0->f_27[17 /*10*/]), -951.5859f, -654.0262f, 68f, 30f, 3, 2);
	func_529(&(uParam0->f_27[18 /*10*/]), -1125.587f, -769.7247f, 67f, 30f, 2, 0);
	func_529(&(uParam0->f_27[19 /*10*/]), -1281.291f, -851.0229f, 82f, 30f, 3, 1);
	func_529(&(uParam0->f_27[20 /*10*/]), -1580.865f, -1009.944f, 40f, 30f, 2, 0);
	func_529(&(uParam0->f_27[21 /*10*/]), -1877.52f, -1152.927f, 30f, 30f, 2, 0);
	func_529(&(uParam0->f_27[22 /*10*/]), -2101.111f, -1330.267f, 20f, 30f, 2, 0);
	func_529(&(uParam0->f_27[23 /*10*/]), -2230.15f, -1555.89f, 10f, 30f, 3, 2);
	func_529(&(uParam0->f_27[24 /*10*/]), -2214.946f, -1978.262f, 10f, 30f, 2, 0);
	func_529(&(uParam0->f_27[25 /*10*/]), -2055.091f, -2359.626f, 20f, 30f, 2, 0);
	func_529(&(uParam0->f_27[26 /*10*/]), -1893.392f, -2559.46f, 22f, 30f, 2, 0);
	func_529(&(uParam0->f_27[27 /*10*/]), -1737.725f, -2720.967f, 83.7f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_528(&(uParam0->f_358[0 /*189*/]));
	func_527(&(uParam0->f_358[0 /*189*/]), "Player");
	func_523(&(uParam0->f_358[0 /*189*/]), unk_0x81873881071CD9FE(), Local_50.f_1);
	func_522(&(uParam0->f_358[0 /*189*/]), -2102.16f, -2556.082f, 38f, 245.6561f);
	func_521(&(uParam0->f_358[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_531(var uParam0, int iParam1)
{
	func_311(&(uParam0->f_9), iParam1);
}

void func_532(var uParam0)
{
	func_535(uParam0);
	uParam0->f_12 = 21;
	func_529(&(uParam0->f_27[0 /*10*/]), 1167.2f, -2557.195f, 90f, 30f, 2, 0);
	func_529(&(uParam0->f_27[1 /*10*/]), 869.9235f, -2613.705f, 57.8325f, 30f, 2, 0);
	func_529(&(uParam0->f_27[2 /*10*/]), 652.3818f, -2651.991f, 54.935f, 30f, 2, 0);
	func_529(&(uParam0->f_27[3 /*10*/]), 249.3849f, -2579.821f, 60.1264f, 30f, 3, 2);
	func_529(&(uParam0->f_27[4 /*10*/]), -31.7179f, -2590.793f, 19.9452f, 30f, 2, 0);
	func_529(&(uParam0->f_27[5 /*10*/]), -317.409f, -2582.66f, 48.7654f, 30f, 3, 3);
	func_529(&(uParam0->f_27[6 /*10*/]), -395.6915f, -2334.057f, 39.3612f, 30f, 2, 0);
	func_529(&(uParam0->f_27[7 /*10*/]), -300.2367f, -2118.431f, 53.3728f, 30f, 2, 0);
	func_529(&(uParam0->f_27[8 /*10*/]), -157.1812f, -1967.885f, 56.4093f, 30f, 3, 2);
	func_529(&(uParam0->f_27[9 /*10*/]), -199.4688f, -1803.328f, 13.6363f, 30f, 2, 0);
	func_529(&(uParam0->f_27[10 /*10*/]), -383.5264f, -1738.067f, 60.8194f, 30f, 2, 0);
	func_529(&(uParam0->f_27[11 /*10*/]), -649.8698f, -1710.374f, 61.3036f, 30f, 2, 0);
	func_529(&(uParam0->f_27[12 /*10*/]), -861.6902f, -1857.194f, 77.0621f, 30f, 3, 2);
	func_529(&(uParam0->f_27[13 /*10*/]), -716.8034f, -2111.744f, 65.9868f, 30f, 2, 0);
	func_529(&(uParam0->f_27[14 /*10*/]), -548.7557f, -2230.616f, 97.2887f, 30f, 2, 0);
	func_529(&(uParam0->f_27[15 /*10*/]), -270.7834f, -2425.144f, 96.7744f, 30f, 3, 1);
	func_529(&(uParam0->f_27[16 /*10*/]), 5.435f, -2665.31f, 46.2903f, 30f, 2, 0);
	func_529(&(uParam0->f_27[17 /*10*/]), 299.0821f, -2834.288f, 27.0191f, 30f, 2, 0);
	func_529(&(uParam0->f_27[18 /*10*/]), 514.295f, -2880.863f, 42.0956f, 30f, 3, 2);
	func_529(&(uParam0->f_27[19 /*10*/]), 842.6024f, -2599.042f, 25.978f, 30f, 2, 0);
	func_529(&(uParam0->f_27[20 /*10*/]), 991.974f, -2468.436f, 87.493f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_528(&(uParam0->f_358[0 /*189*/]));
	func_527(&(uParam0->f_358[0 /*189*/]), "Player");
	func_523(&(uParam0->f_358[0 /*189*/]), unk_0x81873881071CD9FE(), Local_50.f_1);
	func_522(&(uParam0->f_358[0 /*189*/]), 1788.044f, -2438.835f, 130.9346f, 100.0275f);
	func_521(&(uParam0->f_358[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_533(var uParam0)
{
	func_535(uParam0);
	uParam0->f_12 = 19;
	func_529(&(uParam0->f_27[0 /*10*/]), -2819.07f, -81.2779f, 76.1411f, 30f, 2, 0);
	func_529(&(uParam0->f_27[1 /*10*/]), -2737.77f, 342.665f, 175.645f, 30f, 2, 0);
	func_529(&(uParam0->f_27[2 /*10*/]), -2631.929f, 499.7495f, 210.0935f, 30f, 2, 0);
	func_529(&(uParam0->f_27[3 /*10*/]), -2438.01f, 692.3843f, 285.745f, 30f, 3, 3);
	func_529(&(uParam0->f_27[4 /*10*/]), -2039.406f, 708.7898f, 170.6556f, 30f, 2, 0);
	func_529(&(uParam0->f_27[5 /*10*/]), -1633.076f, 751.8171f, 220.188f, 30f, 2, 0);
	func_529(&(uParam0->f_27[6 /*10*/]), -1187.955f, 874.4288f, 246.4972f, 30f, 3, 1);
	func_529(&(uParam0->f_27[7 /*10*/]), -893.826f, 994.239f, 239.512f, 30f, 2, 0);
	func_529(&(uParam0->f_27[8 /*10*/]), -565.788f, 1098.308f, 349.0507f, 30f, 2, 0);
	func_529(&(uParam0->f_27[9 /*10*/]), -326.8564f, 1129.9f, 336.1296f, 30f, 2, 0);
	func_529(&(uParam0->f_27[10 /*10*/]), -155.9212f, 1149.858f, 312.2522f, 30f, 2, 0);
	func_529(&(uParam0->f_27[11 /*10*/]), 145.603f, 1162.599f, 277.7465f, 30f, 3, 1);
	func_529(&(uParam0->f_27[12 /*10*/]), 355.6647f, 1234.464f, 287.6501f, 30f, 2, 0);
	func_529(&(uParam0->f_27[13 /*10*/]), 640.85f, 1191.643f, 329.783f, 30f, 2, 0);
	func_529(&(uParam0->f_27[14 /*10*/]), 783.3697f, 1157.395f, 329.0691f, 30f, 3, 3);
	func_529(&(uParam0->f_27[15 /*10*/]), 1016.378f, 1000.386f, 252.4894f, 30f, 2, 0);
	func_529(&(uParam0->f_27[16 /*10*/]), 1243.37f, 945.084f, 150.5214f, 30f, 2, 0);
	func_529(&(uParam0->f_27[17 /*10*/]), 1494.048f, 863.8886f, 110.4097f, 30f, 2, 0);
	func_529(&(uParam0->f_27[18 /*10*/]), 1751.842f, 687.7875f, 296.787f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_528(&(uParam0->f_358[0 /*189*/]));
	func_527(&(uParam0->f_358[0 /*189*/]), "Player");
	func_523(&(uParam0->f_358[0 /*189*/]), unk_0x81873881071CD9FE(), Local_50.f_1);
	func_522(&(uParam0->f_358[0 /*189*/]), -2818.17f, -500.178f, 76.1411f, 0f);
	func_521(&(uParam0->f_358[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_534(var uParam0)
{
	func_535(uParam0);
	uParam0->f_12 = 18;
	func_529(&(uParam0->f_27[0 /*10*/]), 1025.724f, 3073.133f, 70f, 30f, 2, 0);
	func_529(&(uParam0->f_27[1 /*10*/]), 847.4132f, 3025.239f, 80f, 30f, 2, 0);
	func_529(&(uParam0->f_27[2 /*10*/]), 624.897f, 2968.416f, 80f, 30f, 3, 1);
	func_529(&(uParam0->f_27[3 /*10*/]), 398.5529f, 2921.654f, 75f, 30f, 2, 0);
	func_529(&(uParam0->f_27[4 /*10*/]), 68.1f, 2896.4f, 80f, 30f, 2, 0);
	func_529(&(uParam0->f_27[5 /*10*/]), -290.7f, 2895.4f, 80f, 30f, 2, 0);
	func_529(&(uParam0->f_27[6 /*10*/]), -1033.31f, 2832.959f, 37.5f, 30f, 3, 2);
	func_529(&(uParam0->f_27[7 /*10*/]), -1195.153f, 2729.109f, 18f, 30f, 2, 0);
	func_529(&(uParam0->f_27[8 /*10*/]), -1414.6f, 2636.365f, 8.25f, 30f, 2, 0);
	func_529(&(uParam0->f_27[9 /*10*/]), -1684.856f, 2630.035f, 10f, 30f, 2, 0);
	func_529(&(uParam0->f_27[10 /*10*/]), -2024.536f, 2677.336f, 30f, 30f, 3, 1);
	func_529(&(uParam0->f_27[11 /*10*/]), -2659.106f, 2670.574f, 5.4745f, 30f, 2, 0);
	func_529(&(uParam0->f_27[12 /*10*/]), -2880.136f, 2732.084f, 21.0365f, 30f, 2, 0);
	func_529(&(uParam0->f_27[13 /*10*/]), -3200.826f, 2826.548f, 40f, 30f, 3, 2);
	func_529(&(uParam0->f_27[14 /*10*/]), -3363.374f, 2580.812f, 50f, 30f, 2, 0);
	func_529(&(uParam0->f_27[15 /*10*/]), -3242.432f, 2370.19f, 40f, 30f, 2, 0);
	func_529(&(uParam0->f_27[16 /*10*/]), -2879.09f, 2382.111f, 20f, 30f, 2, 0);
	func_529(&(uParam0->f_27[17 /*10*/]), -2650.532f, 2450.207f, 66.6f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_528(&(uParam0->f_358[0 /*189*/]));
	func_527(&(uParam0->f_358[0 /*189*/]), "Player");
	func_523(&(uParam0->f_358[0 /*189*/]), unk_0x81873881071CD9FE(), Local_50.f_1);
	func_522(&(uParam0->f_358[0 /*189*/]), Local_2335, 154.8464f);
	func_521(&(uParam0->f_358[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_535(var uParam0)
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
	func_543(uParam0);
	uParam0->f_12 = 0;
	func_536(uParam0);
	uParam0->f_13 = 0;
}

void func_536(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		func_537(uParam0, iVar0);
		iVar0++;
	}
}

void func_537(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return;
	}
	func_539(&(uParam0->f_358[iParam1 /*189*/]));
	func_538(&(uParam0->f_358[iParam1 /*189*/]));
}

void func_538(char* sParam0)
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

void func_539(var uParam0)
{
	func_542(uParam0);
	func_541(uParam0);
	func_540(uParam0);
}

void func_540(var uParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam0->f_9))
	{
		if (uParam0->f_9 != Local_50.f_1)
		{
			if (!(unk_0x930F8FBB8E9537CC(uParam0->f_8) || unk_0x930F8FBB8E9537CC(uParam0->f_9)))
			{
				if (unk_0x04C377C10639B842(uParam0->f_8, uParam0->f_9, 0))
				{
					unk_0x1E2B48EE3EC55DCF(uParam0->f_8);
				}
			}
			unk_0x5D00E836B6BE8693(&(uParam0->f_9));
		}
	}
}

void func_541(var uParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam0->f_8))
	{
		if (uParam0->f_8 != unk_0x81873881071CD9FE())
		{
			unk_0xF210D34D7F7152ED(&(uParam0->f_8));
		}
	}
}

void func_542(var uParam0)
{
	func_83(&(uParam0->f_10));
}

void func_543(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		func_544(uParam0, iVar0);
		iVar0++;
	}
}

void func_544(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return;
	}
	func_82(&(uParam0->f_27[iParam1 /*10*/]));
	func_79(&(uParam0->f_27[iParam1 /*10*/]));
	func_545(&(uParam0->f_27[iParam1 /*10*/]));
}

void func_545(var uParam0)
{
	*uParam0 = { Local_50.f_3 };
	uParam0->f_3 = 16f;
	uParam0->f_7 = 0;
	uParam0->f_4 = 10f;
}

void func_546(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69020)
	{
		if (!unk_0x5FEB513A4402FD59(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xE814EBF9E6A3FB47(iParam2, 0);
			}
			else
			{
				unk_0xE814EBF9E6A3FB47(iParam2, 1);
			}
		}
		if (!unk_0x5FEB513A4402FD59(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xA7ED59066FB82067(iParam2, 0);
			}
			else
			{
				unk_0xA7ED59066FB82067(iParam2, 1);
			}
		}
	}
}

void func_547()
{
	struct<68> Var0;
	
	Global_1835013 = 0;
	Global_1835013.f_1 = 0;
	Global_1835013.f_2 = 0;
	Global_1835013.f_3 = 0;
	Global_1835013.f_4 = 0;
	func_548(&(Global_1835013.f_73));
	func_548(&(Global_1835013.f_142));
	func_548(&(Global_1835013.f_211));
	func_548(&(Global_1835013.f_280));
	StringCopy(&(Global_1835013.f_349), "", 24);
	StringCopy(&(Global_1835013.f_355), "", 24);
	func_484(&(Global_1835013.f_361));
	Global_1835013.f_374 = -1;
	Global_1835388 = 0;
	Global_1835389 = 0;
	Var0.f_2.f_1 = 4;
	Global_1835013.f_5 = { Var0 };
}

void func_548(var uParam0)
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

void func_549(bool bParam0)
{
	if (bParam0)
	{
		unk_0x3937B60F47657E06(0);
		unk_0x051313E56EE6229D(1);
		unk_0xAE9199CEEF9AE6D9(0);
		func_158(1);
		Global_86400 = 1;
	}
	else
	{
		unk_0x3937B60F47657E06(1);
		unk_0x051313E56EE6229D(0);
		unk_0xAE9199CEEF9AE6D9(1);
		func_158(0);
		Global_86400 = 0;
	}
}

void func_550(var uParam0)
{
	*uParam0 = unk_0x95EF972E3A07B525("COUNTDOWN");
	unk_0x9D2B95F4020E5347("HUD_321_GO", 1);
}

int func_551(int iParam0)
{
	if (unk_0x29AFA2493D7C23D0())
	{
		unk_0xAE2B1C30F8A0B67C(iParam0);
	}
	else if (unk_0xECDEA377354CBDA4())
	{
		return 1;
	}
	return 0;
}

void func_552()
{
	int iVar0;
	
	if (!iLocal_2434)
	{
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
			{
				iVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
				if (unk_0x86CCCD2FAE9D5E65(iVar0) && !unk_0x930F8FBB8E9537CC(iVar0))
				{
					if (unk_0x0752B24E8A13FF0E(iVar0))
					{
						if (!unk_0x29AFA2493D7C23D0())
						{
							unk_0x80650551CC58C784("MGSP_START");
							iLocal_2434 = 1;
						}
					}
				}
			}
		}
	}
}

int func_553(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_554(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam1 = unk_0x2FBB59A88186C52F(uParam0, 24, 31);
	*uParam2 = unk_0x2FBB59A88186C52F(uParam0, 16, 23);
	*uParam3 = unk_0x2FBB59A88186C52F(uParam0, 8, 15);
	*uParam4 = unk_0x2FBB59A88186C52F(uParam0, 0, 7);
}

var func_555(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0xDFC297A2CE47E495(iParam0, &uVar0, &uVar1, &uVar2, &uVar3);
	return func_556(uVar0, uVar1, uVar2, uVar3);
}

var func_556(var uParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	
	unk_0xD3DEB49D373E1E54(&uVar0, 24, 31, uParam0);
	unk_0xD3DEB49D373E1E54(&uVar0, 16, 23, uParam1);
	unk_0xD3DEB49D373E1E54(&uVar0, 8, 15, uParam2);
	unk_0xD3DEB49D373E1E54(&uVar0, 0, 7, uParam3);
	return uVar0;
}

int func_557()
{
	if (unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		return 0;
	}
	func_567(23, 1);
	func_566(10);
	switch (Local_2349.f_5)
	{
		case 0:
			unk_0x9BAE0FF806E5C2E5(0);
			unk_0x396F0C76E11511A8("EXTRASUNNY", 10f);
			func_565();
			func_564(2, 0);
			func_564(1, 0);
			func_564(3, 0);
			func_564(4, 0);
			func_564(5, 0);
			func_564(6, 0);
			func_564(7, 0);
			unk_0x82695E55A5428216(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 10f, 0);
			unk_0xA450601E968044DB(Local_5308, 600f, 0, 0, 0, 0, 0);
			func_558(&Local_2440, Local_50.f_10);
			unk_0xC8DF9866C0CB38D7(unk_0x1329891157A54C63(), 0);
			unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 0, 512);
			if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) || unk_0x463E18F5BBDEA9C4(unk_0x81873881071CD9FE()))
			{
				Local_2349.f_5 = 2;
			}
			else
			{
				Local_2349.f_5 = 1;
			}
			break;
		
		case 1:
			if (func_335(1000))
			{
				Local_2349.f_5 = 2;
			}
			break;
		
		case 2:
			unk_0x86B83C54AF71BD12("SP_SPR", 3);
			unk_0xB711FC19ADBD3C70("Shared", 0);
			while (!unk_0x682001A921A80123("Shared"))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0x9D2B95F4020E5347("HUD_AWARDS", 0);
			Local_2349.f_5 = 3;
			break;
		
		case 3:
			if (unk_0xCD8DA898314F3016(3))
			{
				Local_2349.f_5 = 4;
			}
			break;
		
		case 4:
			Local_2349.f_5 = 5;
			func_11(&(Local_2349.f_2));
			break;
		
		case 5:
			if (func_2(&(Local_2349.f_2), 0.5f))
			{
				Local_2349.f_5 = 6;
			}
			break;
		
		case 6:
			if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
			{
				Local_2349.f_5 = 9;
			}
			else
			{
				Local_2349.f_5 = 7;
				func_11(&(Local_2349.f_2));
			}
			break;
		
		case 7:
			if (func_2(&(Local_2349.f_2), 0.5f))
			{
				Local_2349.f_5 = 8;
			}
			break;
		
		case 8:
			if (func_551(5000))
			{
				unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
				Local_2349.f_5 = 9;
			}
			break;
		
		case 9:
			func_4(&(Local_2349.f_2));
			return 0;
			break;
		
		case 10:
			return 0;
			break;
	}
	return 1;
}

void func_558(var uParam0, int iParam1)
{
	Local_50.f_0 = 0;
	Local_50.f_1 = 0;
	Local_50.f_2 = 2;
	Local_50.f_3 = { Local_2335 };
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
			func_563(&Local_2440);
			break;
		
		case 1:
			func_562(&Local_2440);
			break;
		
		case 2:
			func_561(&Local_2440);
			break;
		
		case 3:
			func_560(&Local_2440);
			break;
		
		case 4:
			func_559(&Local_2440);
			break;
	}
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

void func_562(var uParam0)
{
}

void func_563(var uParam0)
{
}

void func_564(int iParam0, int iParam1)
{
	unk_0xF3148AAF69AF9CBC(&Global_25103, iParam0);
	StringCopy(&(Global_25104[iParam0 /*6*/]), unk_0x11CA2334E341B424(), 24);
	Global_25159[iParam0] = iParam1;
}

void func_565()
{
	Global_17099.f_5 = 1;
}

void func_566(int iParam0)
{
	func_288();
	Global_69275 = iParam0;
	Global_69274 = 0;
	Global_69277 = 3;
}

void func_567(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_25190, iParam0);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_25190, iParam0);
	}
}

void func_568()
{
}

void func_569()
{
	unk_0xD61D5795530D0627();
	func_341();
	func_407();
	func_547();
	func_567(23, 0);
	func_549(0);
	unk_0x9BAE0FF806E5C2E5(5);
	unk_0x3E52122FBF3FC64C();
	func_288();
	func_216(0);
	func_234(0);
	unk_0x747C6D01EB69DBA8();
	unk_0x9CEDFD70C55A7F8F("MGSP_START");
	unk_0x9CEDFD70C55A7F8F("MGSP_FAIL");
	unk_0x9CEDFD70C55A7F8F("MGTR_COMPLETE");
	unk_0x80650551CC58C784("MGSP_END");
	unk_0xABF33AFE6B2877A8();
	func_577(2, 0);
	func_577(1, 0);
	func_577(3, 0);
	func_577(4, 0);
	func_577(5, 0);
	func_577(6, 0);
	func_577(7, 0);
	unk_0xC8DF9866C0CB38D7(unk_0x1329891157A54C63(), 1);
	unk_0xA5EC8D4B74D54C9B();
	func_575(&(Local_50.f_118));
	unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
	unk_0xE5BBA710593FB752(unk_0x1329891157A54C63(), 0);
	unk_0xBEE99C97A1B87F95(3, 1);
	unk_0x9B331DCFDFC55491("PilotSchool");
	func_573(&Local_2440, 1);
	unk_0x4855165A2773595C(103, "SPRTaxi");
	unk_0x4855165A2773595C(104, "SPRTaxi");
	unk_0xB8BB626315D394F5(1);
	unk_0xD1C83BD797927DD5();
	func_572();
	unk_0xF1BC58601CA4A5C7(1);
	unk_0x3BF4F473786B0150(1);
	func_231();
	unk_0x0D7089406F6A5C6E(true);
	func_570();
	unk_0xC23A229F78DAD92A();
}

void func_570()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_88075[iVar0 /*17*/] && !Global_88075[iVar0 /*17*/].f_1)
		{
			if (Global_88075[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_88075[iVar0 /*17*/].f_5 != 88 && Global_88075[iVar0 /*17*/].f_5 != 89) && Global_88075[iVar0 /*17*/].f_5 != 92)
				{
					func_571(Global_88075[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_571(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_85127[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85127[iParam0 /*2*/] = 0;
	}
}

void func_572()
{
	Global_17099.f_5 = 0;
}

void func_573(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_535(uParam0);
	}
	else
	{
		func_574(uParam0);
	}
	func_126(0);
	func_27(&(uParam0->f_17));
	unk_0xB8BB626315D394F5(1);
	unk_0xD1C83BD797927DD5();
	if (iLocal_2433)
	{
		func_61("SPR_MOVE_FAIL", 5000, 0);
		iLocal_2433 = 0;
	}
}

void func_574(var uParam0)
{
}

void func_575(var uParam0)
{
	func_576(*uParam0);
}

void func_576(var uParam0)
{
	unk_0x4B6F01DE8CCE643E(&uParam0);
}

void func_577(int iParam0, bool bParam1)
{
	if (unk_0x236D8AD7EE179F46(Global_25103, iParam0))
	{
		if (!bParam1)
		{
			unk_0xC69E84EBBD7166E6(&Global_25103, iParam0);
			StringCopy(&(Global_25104[iParam0 /*6*/]), "NULL", 24);
			Global_25159[iParam0] = bParam1;
		}
	}
}

