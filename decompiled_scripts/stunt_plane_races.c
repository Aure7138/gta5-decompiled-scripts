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
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	struct<3> Local_30 = { 0, 0, 0 } ;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	struct<3> Local_45 = { 0, 0, 0 } ;
	struct<3> Local_48 = { 0, 0, 0 } ;
	struct<328> Local_51 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_390 = 8;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 4;
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
	var uLocal_409 = 4;
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
	var uLocal_424 = 4;
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
	var uLocal_439 = 4;
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
	var uLocal_454 = 4;
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
	var uLocal_469 = 4;
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
	var uLocal_484 = 4;
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
	var uLocal_499 = 4;
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
	struct<3> Local_517 = { 0, 0, 0 } ;
	int iLocal_520 = 0;
	int iLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	bool bLocal_525 = 0;
	bool bLocal_526 = 0;
	int iLocal_527 = 0;
	int iLocal_528 = 0;
	int iLocal_529 = 0;
	int iLocal_530 = 0;
	int iLocal_531[5] = { 0, 0, 0, 0, 0 };
	float fLocal_537 = 0f;
	float fLocal_538 = 0f;
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
	var uLocal_557 = 10;
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
	var uLocal_568 = 2;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 8;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 8;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	float fLocal_590 = 0f;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	float fLocal_593 = 0f;
	float fLocal_594 = 0f;
	float fLocal_595 = 0f;
	float fLocal_596 = 0f;
	float fLocal_597 = 0f;
	var uLocal_598 = 0;
	struct<3> Local_599 = { 0, 0, 0 } ;
	float fLocal_602 = 0f;
	struct<3> Local_603 = { 0, 0, 0 } ;
	float fLocal_606 = 0f;
	struct<3> Local_607 = { 0, 0, 0 } ;
	float fLocal_610 = 0f;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	bool bLocal_618 = 0;
	var uLocal_619 = 35;
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
	var uLocal_935 = 50;
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
	var uLocal_1039 = 40;
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
	var uLocal_1595 = 1;
	var uLocal_1596 = 0;
	var uLocal_1597 = 1;
	var uLocal_1598 = 1;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 1;
	var uLocal_1603 = 1;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 3;
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
	var uLocal_1654 = 4;
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
	var uLocal_1719 = 2;
	var uLocal_1720 = 0;
	var uLocal_1721 = 4;
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
	var uLocal_1787 = 4;
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
	var uLocal_1858 = 12;
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
	var uLocal_2039 = 3;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	int iLocal_2043 = 0;
	var uLocal_2044 = 0;
	int iLocal_2045 = 0;
	int iLocal_2046 = 0;
	int iLocal_2047 = 0;
	int iLocal_2048 = 0;
	int iLocal_2049 = 0;
	int iLocal_2050 = 0;
	int iLocal_2051 = 0;
	int iLocal_2052 = 0;
	int iLocal_2053 = 0;
	int iLocal_2054 = 0;
	int iLocal_2055 = 0;
	int iLocal_2056 = 0;
	int iLocal_2057 = 0;
	int iLocal_2058 = 0;
	int iLocal_2059 = 0;
	int iLocal_2060 = 0;
	int iLocal_2061 = 0;
	int iLocal_2062 = 0;
	int iLocal_2063 = 0;
	int iLocal_2064 = 0;
	int iLocal_2065 = 0;
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
	var uLocal_2081 = 0;
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
	int iLocal_2109[5] = { 0, 0, 0, 0, 0 };
	var uLocal_2115[5] = { 0, 0, 0, 0, 0 };
	var uLocal_2121[5] = { 0, 0, 0, 0, 0 };
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	int iLocal_2129 = 0;
	float fLocal_2130 = 0f;
	int iLocal_2131 = 0;
	int iLocal_2132 = 0;
	int iLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 16;
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
	var uLocal_2275 = 0;
	var uLocal_2276 = 0;
	var uLocal_2277 = 0;
	var uLocal_2278 = 0;
	var uLocal_2279 = 0;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	var uLocal_2282 = 0;
	var uLocal_2283 = 0;
	var uLocal_2284 = 0;
	var uLocal_2285 = 0;
	var uLocal_2286 = 0;
	var uLocal_2287 = 0;
	var uLocal_2288 = 0;
	var uLocal_2289 = 0;
	var uLocal_2290 = 0;
	var uLocal_2291 = 0;
	var uLocal_2292 = 0;
	var uLocal_2293 = 0;
	var uLocal_2294 = 0;
	var uLocal_2295 = 0;
	var uLocal_2296 = 0;
	var uLocal_2297 = 0;
	var uLocal_2298 = 0;
	var uLocal_2299 = 0;
	var uLocal_2300 = 0;
	var uLocal_2301 = 0;
	var uLocal_2302 = 0;
	char* sLocal_2303 = NULL;
	float fLocal_2304 = 0f;
	float fLocal_2305 = 0f;
	bool bLocal_2306 = 0;
	bool bLocal_2307 = 0;
	struct<3> Local_2308 = { 0, 0, 0 } ;
	struct<3> Local_2311 = { 0, 0, 0 } ;
	struct<3> Local_2314 = { 0, 0, 0 } ;
	float fLocal_2317 = 0f;
	float fLocal_2318 = 0f;
	var uLocal_2319 = 0;
	var uLocal_2320 = 0;
	var uLocal_2321 = -1;
	var uLocal_2322 = 0;
	var uLocal_2323 = 0;
	var uLocal_2324 = 0;
	var uLocal_2325 = 0;
	var uLocal_2326 = 0;
	var uLocal_2327 = 0;
	var uLocal_2328 = 1000;
	var uLocal_2329 = 1000;
	var uLocal_2330 = 0;
	char[] cLocal_2331[8] = 0;
	char* sLocal_2332 = NULL;
	bool bLocal_2333 = 0;
	var uLocal_2334 = 0;
	var uLocal_2335 = 0;
	var uLocal_2336 = 0;
	var uLocal_2337 = 0;
	var uLocal_2338 = 0;
	var uLocal_2339 = 0;
	var uLocal_2340 = 0;
	var uLocal_2341 = 0;
	var uLocal_2342 = 0;
	bool bLocal_2343 = 0;
	int iLocal_2344 = 0;
	int iLocal_2345 = 0;
	struct<7> Local_2346 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2353 = 0;
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	int iLocal_2358 = 0;
	var uLocal_2359 = 0;
	char* sLocal_2360 = NULL;
	char* sLocal_2361 = NULL;
	char* sLocal_2362 = NULL;
	struct<3> Local_2363 = { 0, 0, 0 } ;
	struct<3> Local_2366 = { 0, 0, 0 } ;
	int iLocal_2369 = 0;
	int iLocal_2370 = 0;
	int iLocal_2371 = 0;
	int iLocal_2372 = 0;
	int iLocal_2373 = 0;
	int iLocal_2374 = 0;
	int iLocal_2375 = 0;
	int iLocal_2376 = 0;
	struct<7> Local_2377 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2384 = 0;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 1132396544;
	var uLocal_2388 = 1132396544;
	var uLocal_2389 = 1132396544;
	var uLocal_2390 = 0;
	var uLocal_2391 = -1082130432;
	var uLocal_2392 = 0;
	var uLocal_2393 = 0;
	var uLocal_2394 = 8;
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
	var uLocal_2423 = 0;
	var uLocal_2424 = 0;
	var uLocal_2425 = 0;
	var uLocal_2426 = 0;
	var uLocal_2427 = 0;
	var uLocal_2428 = 0;
	var uLocal_2429 = 0;
	var uLocal_2430 = 0;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	var uLocal_2434 = 0;
	var uLocal_2435 = 0;
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
	var uLocal_2438 = 0;
	var uLocal_2439 = 0;
	var uLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 0;
	var uLocal_2443 = 0;
	var uLocal_2444 = 0;
	var uLocal_2445 = 0;
	var uLocal_2446 = 0;
	var uLocal_2447 = 0;
	var uLocal_2448 = 0;
	var uLocal_2449 = 0;
	var uLocal_2450 = 0;
	var uLocal_2451 = -1;
	var uLocal_2452 = 1092616192;
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	int iLocal_2461 = 0;
	int iLocal_2462 = 0;
	bool bLocal_2463 = 0;
	bool bLocal_2464 = 0;
	var uLocal_2465 = 0;
	bool bLocal_2466 = 0;
	int iLocal_2467 = 0;
	struct<2863> Local_2468 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_5331 = 1;
	var uLocal_5332 = 0;
	var uLocal_5333 = 0;
	var uLocal_5334 = 0;
	var uLocal_5335 = 0;
	struct<3> Local_5336 = { 0, 0, 0 } ;
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
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_45 = { 1691.228f, 3251.785f, 44.2574f };
	Local_48 = { 2.5652f, 0f, -4.1481f };
	Local_517 = { 500f, 500f, 500f };
	iLocal_520 = -1;
	iLocal_529 = 1;
	fLocal_537 = 0.008f;
	fLocal_538 = 0.013f;
	fLocal_590 = ((0.05f + 0.275f) - 0.01f);
	fLocal_593 = -0.05f;
	fLocal_594 = 0.92f;
	fLocal_595 = 1.94f;
	fLocal_596 = 2.99f;
	fLocal_597 = 3.7f;
	Local_599 = { -0.4f, 0.96f, 0.85f };
	fLocal_602 = 0.95f;
	Local_603 = { 0f, 2f, 2.5f };
	fLocal_606 = 1.75f;
	Local_607 = { 0f, 0f, 120f };
	fLocal_610 = 35.5f;
	fLocal_2130 = -1f;
	iLocal_2131 = 1;
	fLocal_2304 = 0.2f;
	fLocal_2305 = 0.2f;
	fLocal_2318 = 0f;
	cLocal_2331 = "SPR_UI_FAILD";
	sLocal_2332 = "SPR_UI_FRETRY";
	sLocal_2360 = "CHECKPOINT_NORMAL";
	sLocal_2361 = "CHECKPOINT_MISSED";
	sLocal_2362 = "CHECKPOINT_PERFECT";
	Local_2363 = { 1694.74f, 3276.502f, 41.2796f };
	Local_2366 = { 8.79494f, 0.59893f, 154.8464f };
	bLocal_2463 = true;
	bLocal_2464 = true;
	bLocal_2466 = true;
	Local_5336 = { -1497.708f, -3449.576f, 7.3477f };
	if (unk_0xB9B05E900D325C36(114))
	{
		func_580();
	}
	unk_0xB5533C0C8A2B9BF2(1);
	Local_2377.f_1 = 0;
	Local_2377.f_5 = 0;
	Local_2377.f_6 = 0;
	while (true)
	{
		func_579();
		switch (Local_2377.f_1)
		{
			case 0:
				if (!func_568())
				{
					Local_2377.f_1 = 1;
				}
				break;
			
			case 1:
				if (!func_1())
				{
					Local_2377.f_1 = 2;
				}
				break;
			
			case 2:
				func_580();
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
	
	if (unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
	{
	}
	if (unk_0x76B3C79DE564AFC6(Local_51.f_1))
	{
		if (!unk_0x7A6C051038031EFA(Local_51.f_1, 0))
		{
			if (!unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), Local_51.f_1, 0))
			{
				if (unk_0x292D1BF190062D1C(unk_0x0031992CA618A445()))
				{
					Local_51.f_1 = unk_0x882388E2A8356C6F(unk_0x0031992CA618A445());
				}
			}
		}
	}
	else if (unk_0x292D1BF190062D1C(unk_0x0031992CA618A445()))
	{
		Local_51.f_1 = unk_0x882388E2A8356C6F(unk_0x0031992CA618A445());
	}
	else
	{
		Local_51.f_1 = unk_0x2A1786470CB06BC9(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), 10f, joaat("stunt"), 0);
	}
	if (Local_2468.f_2861 != 0)
	{
		Local_2468.f_2862 = (Local_2468.f_2862 - 25);
		if (Local_2468.f_2862 <= 0)
		{
			unk_0x1EC5FCC706B5D133(Local_2468.f_2861);
			Local_2468.f_2861 = 0;
			bLocal_2333 = false;
		}
		else
		{
			if (bLocal_2333)
			{
				iVar4 = 6;
			}
			else
			{
				iVar4 = 1;
			}
			func_565(func_566(iVar4), &uVar0, &uVar1, &uVar2, &uVar3);
			unk_0x91B60F3EC488BE29(Local_2468.f_2861, uVar0, uVar1, uVar2, func_564(unk_0x11E019C8F43ACC8A((1.5f * IntToFloat(Local_2468.f_2862))), 255));
			unk_0x98AAA89ACC7FBB81(Local_2468.f_2861, uVar0, uVar1, uVar2, Local_2468.f_2862);
		}
	}
	func_563();
	unk_0x6A84ABF39E2EBB9D("AMMUNATION");
	unk_0xC9621A9AD282CC14(0, 99, 1);
	unk_0xC9621A9AD282CC14(0, 100, 1);
	if (Local_2377.f_6 == 4)
	{
		unk_0x7EBF60D0132BF685(unk_0x3D35F9864E4640B1());
		unk_0xB8BC2FD710896F98(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), 10f);
		if (unk_0x432757A9E7AAFA96(Local_51.f_1, 0))
		{
			if (unk_0xB3D4A3F00B489CC7(Local_51.f_1))
			{
				unk_0x318C7161DD8722A9(Local_51.f_1);
			}
		}
	}
	switch (Local_2377.f_6)
	{
		case 0:
			unk_0x683F0CB6CA4C99D0(0);
			Local_2377.f_0 = -1;
			Local_51.f_10 = 0;
			unk_0x1ED966252985F895(1734.802f, 3224.105f, 41.3709f, 1762.067f, 3258.69f, 40.5188f, 0, 1);
			if (unk_0x76B3C79DE564AFC6(Local_51.f_1))
			{
				unk_0xFABEFEE17018AE2A(Local_51.f_1, 1);
				Local_2468.f_2859 = 0;
				Local_2377.f_6 = 3;
			}
			else
			{
				Local_2377.f_6 = 1;
			}
			break;
		
		case 1:
			Local_2377.f_6 = 18;
			break;
		
		case 2:
			if (unk_0x76B3C79DE564AFC6(Local_51.f_1))
			{
				unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 0, 512);
				unk_0xFABEFEE17018AE2A(Local_51.f_1, 1);
				Local_2468.f_2859 = 0;
				Local_2377.f_6 = 3;
			}
			break;
		
		case 3:
			if (Local_2468.f_0)
			{
			}
			else if ((unk_0x2A3EA4C0BCED85F2(uLocal_2102) && unk_0x63D9209D70E2F5D5(uLocal_2102)) && unk_0xF9FC07CC13402AEF())
			{
				if (unk_0x2A3EA4C0BCED85F2(Local_2468.f_2858))
				{
					unk_0x46B35AD2F641A4A3(Local_2468.f_2858, 0);
				}
				unk_0xC84CB7879942C3BA("MinigameTransitionOut");
				unk_0xF177BD202464664F("MinigameTransitionIn", 0, 1);
				Local_2468.f_2858 = unk_0x6BE82EFE6EE60BF4(26379945, Local_45, Local_48, 34.9705f, 1, 2);
				unk_0x897D5B38471BAD46(0);
				unk_0xC938B5CB1FF90CA1(false);
				unk_0xF177BD202464664F("MinigameTransitionOut", 0, 0);
				unk_0x9DCCF01CC7010892(uLocal_2102, Local_45.f_0, Local_45.f_1, (Local_45.f_2 + 1000f));
				unk_0x2E8AC89F9A70DEC3(uLocal_2102, 90f, Local_48.f_1, Local_48.f_2, 2);
				unk_0xD0E2527DD961F86C(Local_2468.f_2858, uLocal_2102, 500, 1, 1);
				unk_0x18F1BFAF88AC511B(-1, "QUIT_WHOOSH", "HUD_MINI_GAME_SOUNDSET", 1);
				unk_0x087893C6FCE21842(1, 0, 3000, 1, 0, 0);
			}
			else
			{
				func_562(500);
				if (unk_0x2A3EA4C0BCED85F2(Local_2468.f_2858))
				{
					unk_0x46B35AD2F641A4A3(Local_2468.f_2858, 0);
				}
				Local_2468.f_2858 = unk_0x6BE82EFE6EE60BF4(26379945, Local_45, Local_48, 34.9705f, 1, 2);
				unk_0x087893C6FCE21842(1, 0, 3000, 1, 0, 0);
			}
			func_561(&uLocal_2353);
			func_560(1);
			unk_0xEB3E8FA824A0DE93();
			Local_2377.f_6 = 4;
			break;
		
		case 4:
			if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0) && !unk_0x7A6C051038031EFA(Local_51.f_1, 0))
			{
				unk_0x56B418F469976565(Local_51.f_1, 1, 0, 0);
			}
			if (unk_0x20551D6D924ED04B())
			{
				unk_0xC9621A9AD282CC14(2, 199, 1);
			}
			unk_0xC9621A9AD282CC14(2, 200, 1);
			unk_0x4C4F62CD43971CED(0);
			Local_2468.f_2 = Local_2468.f_0;
			if (Local_2468.f_0)
			{
				if (unk_0x76B3C79DE564AFC6(Local_2468.f_358[0 /*189*/].f_9))
				{
					unk_0xFABEFEE17018AE2A(Local_2468.f_358[0 /*189*/].f_9, 4);
				}
				iLocal_2046 = 0;
				Local_2468.f_0 = 0;
				func_529();
				Local_2377.f_6 = 8;
			}
			else if (Local_2468.f_2859)
			{
				if (unk_0xED5FFF2E0422067E())
				{
					if ((Local_2468.f_2859 && unk_0xBF946CEEECD8C935(2, 202)) && unk_0x83666F9FB8FEBD4B() > 500)
					{
						unk_0xDBD89513C012F1B9(-1, "CANCEL", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
						Local_2468.f_2859 = 0;
						Local_2468.f_2860 = 1;
						func_528(&(Local_51.f_119));
						unk_0xC1B1E9A034A63A62(0);
					}
					if (!Local_2468.f_2860 && func_527(&uLocal_1606))
					{
						Local_2468.f_2860 = 1;
						func_525(Local_2468.f_2860);
					}
					func_463(&(Local_51.f_118), Global_103469, &(Local_51.f_24[Global_103469 /*8*/]));
				}
				else if (func_453(&iLocal_2043, 0))
				{
					Local_2468.f_2859 = 0;
					iLocal_2043 = 0;
					func_528(&(Local_51.f_119));
					unk_0xC1B1E9A034A63A62(0);
				}
			}
			else
			{
				if ((func_416(&Local_2468, 0) && !iLocal_527) && !bLocal_526)
				{
					func_528(&(Local_51.f_119));
				}
				if (iLocal_530 && unk_0xED5FFF2E0422067E())
				{
					func_528(&(Local_51.f_119));
					iLocal_530 = 0;
				}
				if ((((!Local_2468.f_2859 && !iLocal_527) && !bLocal_526) && (iLocal_529 || !unk_0xED5FFF2E0422067E())) && (unk_0xBF946CEEECD8C935(2, 211) || unk_0x0B34E1F8A98046A7(2, 211)))
				{
					Local_2468.f_2859 = 1;
					unk_0xDBD89513C012F1B9(-1, "SELECT", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
					func_415(&uLocal_1606);
					Local_2468.f_2860 = func_527(&uLocal_1606);
					func_525(Local_2468.f_2860);
					unk_0xC1B1E9A034A63A62(0);
				}
				if (func_356(&uLocal_5331, &(Local_2468.f_1)))
				{
					iLocal_2046 = 0;
					if (Local_51.f_10 != -1)
					{
						func_348();
						func_529();
						if (unk_0xF041E50CF58AF6F9(Local_51.f_1, Local_2363, 5f, 5f, 5f, 0, 1, 0))
						{
							if (!unk_0x7A6C051038031EFA(Local_51.f_1, 0))
							{
								func_347(&uLocal_5333);
								Local_2377.f_6 = 8;
							}
						}
						else if (!unk_0x7A6C051038031EFA(Local_51.f_1, 0))
						{
							Local_2377.f_6 = 8;
						}
					}
					else
					{
						Local_2377.f_6 = 7;
					}
				}
			}
			break;
		
		case 7:
			unk_0x7CDDB154852DA508();
			if (unk_0x432757A9E7AAFA96(Local_51.f_1, 0))
			{
				unk_0x087893C6FCE21842(0, 0, 3000, 1, 0, 0);
				Local_2377.f_6 = 18;
			}
			else
			{
				if (unk_0x76B3C79DE564AFC6(Local_2468.f_358[0 /*189*/].f_9))
				{
					unk_0x1F18D3C78C8C1A11(Local_2468.f_358[0 /*189*/].f_9, 0);
				}
				unk_0x0A69FBBF51E1A08F(unk_0x0031992CA618A445(), Local_2363, 1, 0, 0, 1);
				unk_0xB7E3C36A3BE003B5(unk_0x0031992CA618A445(), Local_2366, 2, 1);
				if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
				{
					unk_0x24B72A49849215AE(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), 1084227584);
				}
				unk_0x31F42B23A853582E(0f);
				unk_0xADE985F6BA90AED5(0f, 1065353216);
				if (unk_0x76B3C79DE564AFC6(Local_2468.f_358[0 /*189*/].f_9))
				{
					if (!unk_0x391103C96DB7B6E4())
					{
						unk_0xFA7F74898E78698C(Local_2363, unk_0xE9EAE230056F8FA1(unk_0x0031992CA618A445()), 500f, 0);
					}
					if (unk_0x9177A5D78560369F())
					{
						unk_0xA05EC9D85FA401E6();
						Local_2377.f_6 = 18;
					}
				}
				else
				{
					Local_2377.f_6 = 18;
				}
			}
			break;
		
		case 8:
			unk_0x4D0E578030545817();
			if (Local_51.f_10 == 0)
			{
				unk_0x6562DA95A43F027D(Local_51.f_1);
				if (func_346(iLocal_2344, 16))
				{
					func_344(&iLocal_2344, 16);
				}
				unk_0x56B418F469976565(Local_51.f_1, 1, 1, 0);
				unk_0x7E3C622EB2D4D2E2(unk_0x0031992CA618A445(), Local_51.f_1, -1);
				unk_0xF858E16CD33AF71B(Local_51.f_1);
				func_343();
				uLocal_2102 = unk_0x6BE82EFE6EE60BF4(26379945, 1702.487f, 3279.545f, 41.9968f, -2.9399f, 0f, 110.4428f, 45.0218f, 1, 2);
				unk_0x55CC07D5416539C8(Local_2468.f_2858, 0);
				Local_2377.f_6 = 9;
			}
			else if (func_342(1000))
			{
				unk_0x087893C6FCE21842(0, 0, 3000, 1, 0, 0);
				unk_0x31F42B23A853582E(0f);
				unk_0xF858E16CD33AF71B(Local_51.f_1);
				unk_0x6562DA95A43F027D(Local_51.f_1);
				if (unk_0x5114FCEE2A997B95())
				{
					func_343();
					Local_2377.f_6 = 10;
				}
			}
			break;
		
		case 9:
			if (!((unk_0x63D9209D70E2F5D5(uLocal_2102) && unk_0x0B7CA263460475D0(uLocal_2102)) || (unk_0x63D9209D70E2F5D5(Local_2468.f_2858) && unk_0x0B7CA263460475D0(Local_2468.f_2858))))
			{
				unk_0x6D0D109B83202E2C(1, 0, 3, 0);
				func_343();
				Local_2377.f_6 = 10;
			}
			break;
		
		case 10:
			Local_2468.f_25 = 0;
			Local_2377.f_6 = 11;
			break;
		
		case 11:
			if (!func_328(&Local_2468))
			{
				func_560(1);
				if (Local_2468.f_2)
				{
					unk_0xFA7F74898E78698C(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), unk_0xE9EAE230056F8FA1(unk_0x0031992CA618A445()), 500f, 0);
				}
				if (Local_51.f_10 == 0)
				{
					func_327("SPR_TAXI_GATE", 10000, 1);
					if (!func_346(iLocal_2344, 16))
					{
						func_319(&Local_2468, 0, 1);
						func_318(&iLocal_2344, 16);
					}
					if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
					{
						unk_0x1F18D3C78C8C1A11(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), 0);
						unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 1, 0);
					}
					unk_0x56A844FA6FE745C3(1);
					unk_0x4C4F62CD43971CED(1);
					Local_2377.f_6 = 13;
				}
				else
				{
					Local_2377.f_6 = 13;
				}
				Local_2468.f_2 = 0;
			}
			break;
		
		case 13:
			if (!unk_0x391103C96DB7B6E4() || unk_0x9177A5D78560369F())
			{
				if (unk_0x391103C96DB7B6E4())
				{
					unk_0xA05EC9D85FA401E6();
				}
				unk_0x897D5B38471BAD46(0);
				unk_0xC938B5CB1FF90CA1(true);
				unk_0x1F18D3C78C8C1A11(Local_2468.f_358[0 /*189*/].f_9, 0);
				func_343();
				if (func_346(iLocal_2344, 16))
				{
					func_344(&iLocal_2344, 16);
				}
				if (Local_51.f_10 == 0)
				{
					if (func_562(500))
					{
						Local_2468.f_26 = 0;
						Local_2377.f_6 = 14;
					}
				}
				else
				{
					func_317(&Local_2468);
					unk_0x31F42B23A853582E(0f);
					unk_0xADE985F6BA90AED5(0f, 1065353216);
					if (func_562(500))
					{
						Local_2468.f_26 = 0;
						Local_2377.f_6 = 14;
					}
				}
			}
			break;
		
		case 14:
			if (Local_2377.f_0 == 1)
			{
				return 1;
			}
			if (func_24(&Local_2468))
			{
				return 1;
			}
			iLocal_2046 = 3;
			func_23();
			func_13();
			if (!Local_2468.f_0)
			{
				func_10(&(Local_2468.f_6));
				func_9(&(Local_2468.f_358[0 /*189*/]), Local_51.f_3, Local_51.f_6, 0f);
				if (unk_0x76B3C79DE564AFC6(Local_2468.f_358[0 /*189*/].f_9))
				{
					unk_0x24B72A49849215AE(Local_2468.f_358[0 /*189*/].f_9, 1084227584);
				}
				if (unk_0xFA7F74898E78698C(Local_45, func_8(Local_48), 4500f, 0))
				{
					unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 0, 0);
					while (!unk_0x9177A5D78560369F() && func_5(&(Local_2468.f_6)) < 20f)
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					unk_0xA05EC9D85FA401E6();
					unk_0x65CD3C302DFDB7D7(Local_45, func_8(Local_48));
					func_4(&(Local_2468.f_6));
					Local_2377.f_6 = 15;
				}
				else if (func_2(&(Local_2468.f_6), 20f))
				{
					func_4(&(Local_2468.f_6));
					Local_2377.f_6 = 15;
				}
			}
			else
			{
				Local_2377.f_6 = 3;
			}
			break;
		
		case 15:
			if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
			{
				unk_0xFABEFEE17018AE2A(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), 1);
			}
			Local_2468.f_2859 = 0;
			Local_2377.f_6 = 3;
			break;
		
		case 18:
			if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
			{
				unk_0xFABEFEE17018AE2A(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), 1);
			}
			func_416(&Local_2468, 1);
			if (unk_0x5114FCEE2A997B95())
			{
				func_562(1000);
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
	return unk_0x2A3398C6222EB190(*uParam0, 1);
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
			return (func_6(unk_0x2A3398C6222EB190(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_6(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x31CD6E9F83C10233());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x27CA09C6DFAB1E79())
	{
		iVar2 = unk_0x898811EA80D35DE2();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x31CD6E9F83C10233()) / 1000f);
}

bool func_7(var uParam0)
{
	return unk_0x2A3398C6222EB190(*uParam0, 2);
}

Vector3 func_8(struct<3> Param0)
{
	return (-unk_0x0BADBFA3B172435F(Param0.f_2) * unk_0xD0FFB162F40A139C(Param0.f_0)), (unk_0xD0FFB162F40A139C(Param0.f_2) * unk_0xD0FFB162F40A139C(Param0.f_0)), unk_0x0BADBFA3B172435F(Param0.f_0);
}

void func_9(var uParam0, struct<3> Param1, var uParam4, float fParam5)
{
	unk_0x0A69FBBF51E1A08F(uParam0->f_9, Param1, 1, 0, 0, 1);
	unk_0x5082D1A6D078DB20(uParam0->f_9, uParam4);
	unk_0x5EF58B2B49A4503B(uParam0->f_9, fParam5);
}

void func_10(var uParam0)
{
	if (!func_3(uParam0))
	{
		func_347(uParam0);
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
	uParam0->f_1 = (func_6(unk_0x2A3398C6222EB190(*uParam0, 4)) - fParam1);
	unk_0xCD7E92DE2BFA0B0D(uParam0, 1);
	unk_0xD804ACF2A7171150(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_13()
{
	if (Global_104439.f_18904.f_12[4 /*8*/].f_4 == 1)
	{
		if (Global_104439.f_18904.f_6[4] > 0f)
		{
			if (Global_104439.f_18904.f_6[4] <= func_22(4))
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
	if (Global_104439.f_10055[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_104439.f_10055[iParam0 /*12*/].f_6 == 11 || Global_104439.f_10055[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_104439.f_10055[iParam0 /*12*/].f_5 = 1;
		Global_104439.f_10055[iParam0 /*12*/].f_10 = iParam1;
		Global_104439.f_10055[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x25676C1B212BF4A8(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x25676C1B212BF4A8(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x25676C1B212BF4A8(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_104175 = 0;
	Global_104176 = 0;
	Global_104177 = 0;
	Global_104178 = 0;
	Global_104179 = 0;
	Global_104180 = 0;
	Global_104181 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_104439.f_10055.f_3853;
	Global_104439.f_10055.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_104439.f_10055[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_104439.f_10055[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_104175++;
					fVar1 = (fVar1 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_104176++;
					fVar2 = (fVar2 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_104177++;
					fVar3 = (fVar3 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_104178++;
					fVar4 = (fVar4 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_104179++;
					fVar5 = (fVar5 + (Global_104439.f_10055[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_104180++;
					fVar6 = (fVar6 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_104181++;
					fVar7 = (fVar7 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_104158 > 0)
	{
		if (Global_104175 == Global_104158)
		{
			fVar1 = 55f;
		}
	}
	if (Global_104159 > 0)
	{
		if (Global_104176 == Global_104159)
		{
			fVar2 = 10f;
		}
	}
	if (Global_104160 > 0)
	{
		if (Global_104177 == Global_104160)
		{
			fVar3 = 0f;
		}
	}
	if (Global_104161 > 0)
	{
		if (Global_104178 == Global_104161)
		{
			fVar4 = 10f;
		}
	}
	if (Global_104162 > 0)
	{
		if (((Global_104179 == Global_104162 || (Global_104162 * 10 / Global_104179) < 41) || Global_104179 > Global_104165) || Global_104179 == Global_104165)
		{
			if (!unk_0x2A3398C6222EB190(Global_104439.f_10055.f_3856, 14))
			{
				if (Global_104179 == Global_104162)
				{
					unk_0x25676C1B212BF4A8(joaat("num_rndevents_completed"), Global_104162, 0);
					unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_10055.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_104163 > 0)
	{
		if (Global_104180 == Global_104163)
		{
			fVar6 = 15f;
		}
	}
	if (Global_104164 > 0)
	{
		if (Global_104181 == Global_104164)
		{
			fVar7 = 5f;
		}
	}
	Global_104439.f_10055.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_104179 > Global_104165 || Global_104179 == Global_104165)
	{
		iVar9 = Global_104165;
	}
	else
	{
		iVar9 = Global_104179;
	}
	unk_0xE931A869061F7BD2(joaat("num_missions_completed"), Global_104175, 1);
	unk_0xE931A869061F7BD2(joaat("num_missions_available"), Global_104158, 1);
	unk_0xE931A869061F7BD2(joaat("num_minigames_completed"), Global_104176, 1);
	unk_0xE931A869061F7BD2(joaat("num_minigames_available"), Global_104159, 1);
	unk_0xE931A869061F7BD2(joaat("num_oddjobs_completed"), Global_104177, 1);
	unk_0xE931A869061F7BD2(joaat("num_oddjobs_available"), Global_104160, 1);
	unk_0xE931A869061F7BD2(joaat("num_rndpeople_completed"), Global_104178, 1);
	unk_0xE931A869061F7BD2(joaat("num_rndpeople_available"), Global_104161, 1);
	unk_0xE931A869061F7BD2(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xE931A869061F7BD2(joaat("num_rndevents_available"), Global_104165, 1);
	unk_0xE931A869061F7BD2(joaat("num_misc_completed"), (Global_104181 + Global_104180), 1);
	unk_0xE931A869061F7BD2(joaat("num_misc_available"), (Global_104164 + Global_104163), 1);
	Global_104182 = (Global_104175 * 100 / Global_104158);
	Global_104184 = ((Global_104177 + Global_104176) * 100 / (Global_104160 + Global_104159));
	Global_104183 = ((Global_104178 + iVar9) * 100 / (Global_104161 + Global_104165));
	Global_104185 = ((Global_104180 + Global_104181) * 100 / (Global_104163 + Global_104164));
	unk_0x16E461F1C38154B6(joaat("total_progress_made"), Global_104439.f_10055.f_3853, 1);
	unk_0xE931A869061F7BD2(joaat("percent_story_missions"), Global_104182, 1);
	unk_0xE931A869061F7BD2(joaat("percent_ambient_missions"), Global_104183, 1);
	unk_0xE931A869061F7BD2(joaat("percent_oddjobs"), Global_104184, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_104439.f_10055.f_3853))
	{
		func_19(13, unk_0xF34EE736CF047844(Global_104439.f_10055.f_3853));
	}
	if (!unk_0xCED7B36AA85A9CCD())
	{
		if (!Global_70785)
		{
			if (func_18() == 2 == 0 && !unk_0x27CA09C6DFAB1E79())
			{
				if (unk_0x04F2E3CF902D6F5D())
				{
					Global_104173 = 0;
				}
				if (!Global_55854)
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
	if (Global_92801.f_8)
	{
		if (Global_92801.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_92801.f_10 > 1)
	{
		return 0;
	}
	Global_92801.f_10++;
	return 1;
}

bool func_17(bool bParam0)
{
	if (!bParam0 && unk_0x7832F791572D5809(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x2A3398C6222EB190(Global_71033, 0);
}

int func_18()
{
	return Global_25222;
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
	iVar0 = unk_0x354C8180327FFAF0(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xA1A7D8193599FBBC(iParam0, iParam1);
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
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	
	if (iParam2 == -1)
	{
		iParam2 = func_21();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x6860BB4C0ABA6F86((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xE1499FF97BA2511E((iParam0 - 0)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x6860BB4C0ABA6F86((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xE1499FF97BA2511E((iParam0 - 192)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x6860BB4C0ABA6F86((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xE1499FF97BA2511E((iParam0 - 513)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x6860BB4C0ABA6F86((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xE1499FF97BA2511E((iParam0 - 705)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xA9C89DEEBE79CAD2((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xE1499FF97BA2511E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xA9C89DEEBE79CAD2((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xE1499FF97BA2511E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x001909FFC248179B((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xE1499FF97BA2511E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x001909FFC248179B((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xE1499FF97BA2511E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x001909FFC248179B((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xE1499FF97BA2511E((iParam0 - 6029)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x001909FFC248179B((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xE1499FF97BA2511E((iParam0 - 7385)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x001909FFC248179B((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xE1499FF97BA2511E((iParam0 - 7321)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x001909FFC248179B((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xE1499FF97BA2511E((iParam0 - 9361)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0x001909FFC248179B((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0xE1499FF97BA2511E((iParam0 - 15369)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0x001909FFC248179B((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0xE1499FF97BA2511E((iParam0 - 15562)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0x001909FFC248179B((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0xE1499FF97BA2511E((iParam0 - 15946)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar16, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_21()
{
	return Global_1312735;
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
	iLocal_2369 = 0;
	iLocal_2370 = 0;
	iLocal_2371 = 0;
	iLocal_2372 = 0;
	iLocal_2373 = 0;
	iLocal_2374 = 0;
	iLocal_2375 = 0;
	iLocal_2376 = 0;
}

int func_24(var uParam0)
{
	switch (uParam0->f_26)
	{
		case 0:
			func_344(&iLocal_2344, 4);
			unk_0xBD1C47D856010F09(2);
			func_316(uParam0);
			uParam0->f_17 = func_315();
			if (Local_51.f_10 == 0)
			{
				if (!func_346(iLocal_2344, 16))
				{
					func_319(uParam0, 0, 1);
					func_319(uParam0, 1, 0);
					func_318(&iLocal_2344, 16);
				}
			}
			else
			{
				func_317(uParam0);
				if (!func_346(iLocal_2344, 16))
				{
					func_319(uParam0, 0, 1);
					func_319(uParam0, 1, 0);
					func_318(&iLocal_2344, 16);
				}
			}
			func_4(&(uParam0->f_14));
			iLocal_2358 = 0;
			unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 0, 0);
			uParam0->f_26 = 1;
			break;
		
		case 1:
			unk_0xBD1C47D856010F09(2);
			if (Local_51.f_10 == 0)
			{
				if (func_346(iLocal_2344, 16))
				{
					func_344(&iLocal_2344, 16);
				}
				func_313(uParam0);
				uParam0->f_26 = 7;
			}
			else
			{
				func_317(uParam0);
				if (!func_288(&(uParam0->f_14)))
				{
					if (!unk_0x5B39193A2FD26109())
					{
						unk_0x087893C6FCE21842(0, 1, 3000, 1, 0, 0);
					}
					if (func_346(iLocal_2344, 16))
					{
						func_344(&iLocal_2344, 16);
					}
					unk_0x56A844FA6FE745C3(1);
					func_313(uParam0);
					if (Local_51.f_10 == 0 && (Global_104439.f_18904.f_6[0] > Local_51.f_112[0] || Global_104439.f_18904.f_6[0] == 0f))
					{
						func_287("SPR_HELP_GATE", 10000);
					}
					uParam0->f_26 = 7;
				}
			}
			break;
		
		case 2:
			if (!func_346(iLocal_2344, 1))
			{
				unk_0xC1B1E9A034A63A62(0);
				func_248(uParam0);
				func_247(&(Local_51.f_119), 0, 0, 1, 1);
				func_246(&(Local_51.f_119), "SPR_CONT2", 2, 201, 1, 1, 0);
				func_245(&(Local_51.f_119), 1);
				func_318(&iLocal_2344, 1);
			}
			if (unk_0x068C69D0643C4B95())
			{
				unk_0x8C361F37C04084F4(1);
			}
			if (func_244("SPR_RETR_FAIL", 0, 0))
			{
				unk_0x27FC4121D73AF604();
			}
			if (unk_0x068C69D0643C4B95())
			{
				unk_0x8C361F37C04084F4(1);
			}
			if (func_244("SPR_RETR_FAIL", 0, 0))
			{
				unk_0x27FC4121D73AF604();
			}
			unk_0xC1B1E9A034A63A62(0);
			func_242();
			func_241(0);
			unk_0xC1352A845590F32D(unk_0x3D35F9864E4640B1());
			unk_0x91C7696F82A61D97(unk_0x3D35F9864E4640B1(), 0);
			unk_0xC9621A9AD282CC14(0, 75, 1);
			func_240(1);
			uParam0->f_26 = 4;
			break;
		
		case 4:
			unk_0xC9621A9AD282CC14(0, 75, 1);
			func_238();
			if (!unk_0x7A6C051038031EFA(uParam0->f_358[0 /*189*/].f_9, 0))
			{
				if (!unk_0x4096DB4B0B8A982B(uParam0->f_358[0 /*189*/].f_9) && unk_0x2A3EA4C0BCED85F2(uLocal_2103))
				{
					unk_0x1DD4A2B867676A4E(uLocal_2103, 2);
					unk_0x477513BFF4F0CEC1(uParam0->f_358[0 /*189*/].f_9, 0, 0);
					unk_0x1F18D3C78C8C1A11(uParam0->f_358[0 /*189*/].f_9, 1);
					func_237();
				}
			}
			if (!func_223(uParam0, bLocal_2463, bLocal_2464))
			{
				func_237();
				func_222(0);
				unk_0x8C361F37C04084F4(1);
				if (func_346(iLocal_2344, 1))
				{
					func_344(&iLocal_2344, 1);
				}
				func_221(0, 0);
				if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
				{
					unk_0xD706D9D85701BFBD(unk_0x0031992CA618A445());
				}
				unk_0xADE985F6BA90AED5(0f, 1065353216);
				unk_0x31F42B23A853582E(0f);
				unk_0x683F0CB6CA4C99D0(0);
				iLocal_2467 = unk_0x6307C3D1D866114A();
				unk_0x18F1BFAF88AC511B(iLocal_2467, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", 1);
				func_4(&uLocal_2334);
				uParam0->f_26 = 5;
			}
			break;
		
		case 5:
			if (!unk_0x7A6C051038031EFA(uParam0->f_358[0 /*189*/].f_9, 0))
			{
				unk_0x0A69FBBF51E1A08F(uParam0->f_358[0 /*189*/].f_9, Local_2363, 1, 0, 0, 1);
				unk_0xB7E3C36A3BE003B5(uParam0->f_358[0 /*189*/].f_9, Local_2366, 2, 1);
				unk_0x477513BFF4F0CEC1(uParam0->f_358[0 /*189*/].f_9, 1, 0);
				unk_0xC9621A9AD282CC14(0, 75, 1);
				unk_0x24B72A49849215AE(uParam0->f_358[0 /*189*/].f_9, 1084227584);
				unk_0xC20B73867395D06D(uParam0->f_358[0 /*189*/].f_9, 0);
			}
			iLocal_2462 = 0;
			uParam0->f_26 = 6;
			uParam0->f_358[0 /*189*/].f_23 = 7;
			break;
		
		case 6:
			uParam0->f_26 = 8;
			break;
		
		case 7:
			unk_0x45822700F324A838(uLocal_2353, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 100, 0);
			if (!func_346(iLocal_2344, 16))
			{
				func_319(uParam0, 0, 1);
				func_319(uParam0, 1, 0);
				func_318(&iLocal_2344, 16);
				func_241(1);
				func_220(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/]);
			}
			if (uParam0->f_1)
			{
				func_190(uParam0);
				func_188(uParam0);
			}
			else
			{
				func_185(&uLocal_2319, 0);
				func_237();
				unk_0xC938B5CB1FF90CA1(false);
			}
			if (!func_41(uParam0, Local_51.f_0))
			{
				unk_0x1E420F926A7BC4D2("MGSP_END");
				func_28(uParam0);
				func_4(&(uParam0->f_14));
				uParam0->f_26 = 2;
				func_4(&(uParam0->f_22));
			}
			break;
		
		case 8:
			unk_0xC9621A9AD282CC14(0, 75, 1);
			func_27(&(uParam0->f_17));
			func_237();
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
		if (func_346(uLocal_2127, iVar0))
		{
			func_344(&uLocal_2127, iVar0);
		}
		if (func_346(uLocal_2128, iVar0))
		{
			func_344(&uLocal_2128, iVar0);
		}
		if (unk_0x76B3C79DE564AFC6(uLocal_2115[iVar0]))
		{
			unk_0xE9F8539D5AF6B052(&(uLocal_2115[iVar0]));
		}
		if (unk_0x76B3C79DE564AFC6(uLocal_2121[iVar0]))
		{
			unk_0xA50DE967C5813F23(&(uLocal_2121[iVar0]));
		}
		iVar0++;
	}
	func_26(&iLocal_2109);
	iVar0 = 0;
	while (iVar0 < iLocal_2109)
	{
		iLocal_2109[iVar0] = 0;
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
			unk_0x9793B48C4C8275F8((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_27(var uParam0)
{
	if (unk_0x77FA56883245AD26(*uParam0))
	{
		unk_0x7F165E259CFAC8B8(uParam0);
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
	unk_0xC20B73867395D06D(uParam0->f_358[0 /*189*/].f_9, 1);
	unk_0xC9621A9AD282CC14(0, 75, 1);
	func_39(uParam0);
	if (Local_51.f_0 == 0)
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
	if (!unk_0x7A6C051038031EFA(uParam0->f_9, 0))
	{
		if (Local_51.f_0 != 0)
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
		if (!unk_0x7A6C051038031EFA(uParam0->f_358[iVar0 /*189*/].f_8, 0))
		{
			if (uParam0->f_358[iVar0 /*189*/].f_8 == unk_0x0031992CA618A445())
			{
				iVar1 = func_37(Local_51.f_10);
				if (iVar1 <= 0 || iVar1 > uParam0->f_358[iVar0 /*189*/].f_12)
				{
					func_36(Local_51.f_10, uParam0->f_358[iVar0 /*189*/].f_12);
				}
				fVar2 = func_35(Local_51.f_10);
				func_34(Local_51.f_10, unk_0xBBDA792448DB5A89(unk_0x11E019C8F43ACC8A(uParam0->f_358[0 /*189*/].f_13)));
				if (fVar2 == 0f || fVar2 > uParam0->f_358[0 /*189*/].f_13)
				{
					func_33(Local_51.f_10, unk_0xBBDA792448DB5A89(unk_0x11E019C8F43ACC8A(uParam0->f_358[0 /*189*/].f_13)));
				}
				return;
			}
		}
		iVar0++;
	}
}

void func_33(int iParam0, float fParam1)
{
	Global_104439.f_18904.f_6[iParam0] = fParam1;
}

void func_34(int iParam0, float fParam1)
{
	Local_51.f_18[iParam0] = fParam1;
}

var func_35(int iParam0)
{
	var uVar0;
	
	uVar0 = Global_104439.f_18904.f_6[iParam0];
	return uVar0;
}

void func_36(int iParam0, var uParam1)
{
	Global_104439.f_18904[iParam0] = uParam1;
}

int func_37(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = Global_104439.f_18904[iParam0];
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
			uParam0->f_358[iVar0 /*189*/].f_13 = (uParam0->f_358[0 /*189*/].f_13 + (IntToFloat((uParam0->f_12 - uParam0->f_358[iVar0 /*189*/].f_11)) * unk_0xDFF7E223DB3CBA25(0.5f, 2.5f)));
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
			uParam0->f_2 = (func_6(unk_0x2A3398C6222EB190(*uParam0, 4)) - uParam0->f_1);
			unk_0xCD7E92DE2BFA0B0D(uParam0, 2);
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
	
	if (Local_51.f_10 == 0)
	{
		if (uParam0->f_358[0 /*189*/].f_11 == 0)
		{
			func_11(&(uParam0->f_3));
			if (func_346(iLocal_2345, 131072))
			{
				unk_0x3204FCBC96816462(uParam0->f_358[0 /*189*/].f_9, 4);
				func_344(&iLocal_2345, 131072);
			}
		}
		else if (uParam0->f_358[0 /*189*/].f_11 == 1 && !func_346(iLocal_2345, 131072))
		{
			func_287("SPR_INFO_BON", 10000);
			func_318(&iLocal_2345, 131072);
			if (func_346(iLocal_2345, 262144))
			{
				func_344(&iLocal_2345, 262144);
			}
		}
		else if (uParam0->f_358[0 /*189*/].f_11 == 4 && !func_346(iLocal_2345, 262144))
		{
			func_287("SPR_INFO_RESET", 10000);
			func_318(&iLocal_2345, 262144);
		}
	}
	if (func_3(&(uParam0->f_3)))
	{
		fVar0 = func_5(&(uParam0->f_3));
	}
	func_167(uParam0->f_358[0 /*189*/].f_11, uParam0->f_1);
	unk_0xC9621A9AD282CC14(0, 75, 1);
	iVar1 = 0;
	while (iVar1 < uParam0->f_13)
	{
		if (uParam0->f_358[iVar1 /*189*/].f_11 < uParam0->f_12)
		{
			bVar23 = false;
			if (uParam0->f_358[iVar1 /*189*/].f_8 == unk_0x0031992CA618A445())
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
				if ((bVar23 && uParam0->f_1) && (Local_51.f_10 != 0 || uParam0->f_358[0 /*189*/].f_11 > 0))
				{
					if (!func_3(&uLocal_2455))
					{
						func_347(&uLocal_2455);
					}
					if (func_5(&uLocal_2458) >= 6.5f)
					{
						if (!unk_0x9148803485DEDF45(2, 222))
						{
							func_11(&uLocal_2455);
						}
						else if (func_5(&uLocal_2455) >= 1.5f)
						{
							uParam0->f_1 = 0;
							func_344(&iLocal_2345, 32768);
							uParam0->f_358[0 /*189*/].f_23 = 6;
						}
					}
					else if (unk_0x9148803485DEDF45(2, 222))
					{
						if (func_5(&(uParam0->f_3)) < 6.5f)
						{
							func_103("SPR_HELP_RST1", &iLocal_2345, 65536, 0);
						}
						else
						{
							func_103("SPR_HELP_RST", &iLocal_2345, 32768, 0);
						}
					}
				}
				if (!unk_0x8682D8A6269E52C9(uParam0->f_358[iVar1 /*189*/].f_8))
				{
					func_101(uParam0, iVar1);
					if (Local_51.f_0 == 0 && func_3(&uLocal_2340))
					{
						return 1;
					}
					if (bVar23)
					{
						if (uParam0->f_358[iVar1 /*189*/].f_14 != 0f)
						{
							func_347(&(uParam0->f_14));
						}
						if (func_346(iLocal_2344, 8))
						{
							func_319(uParam0, iVar22, 1);
							if (iVar22 < (uParam0->f_12 - 1))
							{
								func_319(uParam0, iVar22 + 1, 0);
							}
							func_344(&iLocal_2344, 8);
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
						bLocal_2333 = func_84(uParam0->f_11);
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
										if (uParam0->f_358[0 /*189*/].f_13 <= Local_51.f_106[Local_51.f_10])
										{
											iVar24 = 1;
										}
										else if (uParam0->f_358[0 /*189*/].f_13 <= (((Local_51.f_112[Local_51.f_10] - Local_51.f_106[Local_51.f_10]) / 2f) + Local_51.f_106[Local_51.f_10]))
										{
											iVar24 = 2;
										}
										else if (uParam0->f_358[0 /*189*/].f_13 <= Local_51.f_112[Local_51.f_10])
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
									unk_0x27FC4121D73AF604();
									sLocal_2332 = "SPR_TIME_FAIL";
									uParam0->f_358[0 /*189*/].f_23 = 0;
								}
							}
							else
							{
								func_319(uParam0, iVar22, 1);
								if (iVar22 < (uParam0->f_12 - 1))
								{
									func_319(uParam0, iVar22 + 1, 0);
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
							if (Local_51.f_0 != 2)
							{
								if (!unk_0x7A6C051038031EFA(uParam0->f_358[iVar1 /*189*/].f_8, 0))
								{
									func_29(&(uParam0->f_358[iVar1 /*189*/]));
								}
							}
						}
						else
						{
							if (Local_51.f_0 != 1)
							{
								if (iVar1 != 0)
								{
									func_76(uParam0, uParam0->f_358[iVar1 /*189*/].f_8, uParam0->f_358[iVar1 /*189*/].f_9, uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/], uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/].f_7, iVar1);
								}
							}
							else
							{
								StringCopy(&cVar25, "Offroad_", 16);
								StringIntConCat(&cVar25, Local_51.f_10 + 1, 16);
								if (iVar1 == 1)
								{
									StringConCat(&cVar25, "a", 16);
								}
								if (iVar1 > 0)
								{
									if (bLocal_2466)
									{
										if (!unk_0x7A6C051038031EFA(uParam0->f_358[iVar1 /*189*/].f_8, 0) && !unk_0x7A6C051038031EFA(uParam0->f_358[iVar1 /*189*/].f_9, 0))
										{
											if (unk_0xF57D21B49780A7A8(uParam0->f_358[iVar1 /*189*/].f_8, -235832601) == 1)
											{
											}
											else
											{
												unk_0x9EE30C20270C9443(uParam0->f_358[iVar1 /*189*/].f_8, uParam0->f_358[iVar1 /*189*/].f_9, &cVar25, 262144, 0, 8, -1, unk_0xDDBBF868DD242CCE(uParam0->f_358[iVar1 /*189*/].f_9), 0, 1073741824);
											}
										}
									}
									else if (iVar1 != 0)
									{
										func_76(uParam0, uParam0->f_358[iVar1 /*189*/].f_8, uParam0->f_358[iVar1 /*189*/].f_9, uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/], uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/].f_7, iVar1);
									}
								}
							}
							if (Local_51.f_0 != 2)
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
		func_65(uParam0, &uLocal_2465);
		func_64(uParam0, &uLocal_2465);
		func_63();
		func_58(uParam0);
		func_57();
		func_56(uParam0);
		if (uParam0->f_358[0 /*189*/].f_23 != 0)
		{
			if (Local_51.f_10 == 0)
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
	
	if (unk_0x90EEDEFFBABEF36F())
	{
		unk_0x4C4F62CD43971CED(1);
	}
	if (!func_3(&uLocal_2134))
	{
		iLocal_2132 = 0;
		iLocal_2133 = 0;
		func_347(&uLocal_2134);
	}
	if (unk_0x11E019C8F43ACC8A((uParam0->f_358[0 /*189*/].f_15 * 1000f)) != iLocal_2133)
	{
		iLocal_2132 = (unk_0x11E019C8F43ACC8A((uParam0->f_358[0 /*189*/].f_15 * 1000f)) - iLocal_2133);
		iLocal_2133 = unk_0x11E019C8F43ACC8A((uParam0->f_358[0 /*189*/].f_15 * 1000f));
		func_11(&uLocal_2134);
	}
	iVar0 = (unk_0xF34EE736CF047844((func_5(&(uParam0->f_3)) * 100f)) * 10 - unk_0x11E019C8F43ACC8A((uParam0->f_358[0 /*189*/].f_15 * 1000f)));
	iVar1 = 0;
	if (func_5(&uLocal_2134) <= 2f)
	{
		if (uParam0->f_358[0 /*189*/].f_11 > 0)
		{
			iVar1 = -iLocal_2132;
		}
		else
		{
			iVar1 = 0;
		}
	}
	iVar2 = unk_0xF34EE736CF047844((Global_104439.f_18904.f_6[Local_51.f_10] * 100f)) * 10;
	if (iVar2 <= 0)
	{
		iVar2 = -1;
	}
	if (IntToFloat(iVar0) <= (Local_51.f_106[Local_51.f_10] * 1000f))
	{
		iVar3 = unk_0xF34EE736CF047844((Local_51.f_106[Local_51.f_10] * 1000f));
		iVar6 = 3;
		sVar4 = "SPR_GBEST";
		iVar5 = 109;
	}
	else if (IntToFloat(iVar0) <= ((((Local_51.f_112[Local_51.f_10] - Local_51.f_106[Local_51.f_10]) / 2f) + Local_51.f_106[Local_51.f_10]) * 1000f))
	{
		iVar6 = 2;
		iVar3 = unk_0xF34EE736CF047844(((((Local_51.f_112[Local_51.f_10] - Local_51.f_106[Local_51.f_10]) / 2f) + Local_51.f_106[Local_51.f_10]) * 1000f));
		sVar4 = "SPR_SBEST";
		iVar5 = 108;
	}
	else if (IntToFloat(iVar0) <= (Local_51.f_112[Local_51.f_10] * 1000f))
	{
		iVar6 = 1;
		iVar3 = unk_0xF34EE736CF047844((Local_51.f_112[Local_51.f_10] * 1000f));
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
		func_51(0, "", iParam27, uParam30, 9, 0, sParam28, 1, fParam29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0);
	}
	if (iParam14 > -1)
	{
		sVar0 = sParam16;
		if (func_50(sVar0))
		{
			sVar0 = "TIM_DAMAGE";
		}
		func_49(iParam14, iParam15, sVar0, iParam17, iParam27, 8, -1f, -1f, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1);
	}
	if (iParam10 > -1)
	{
		sVar1 = sParam12;
		if (func_50(sVar1))
		{
			sVar1 = "TIM_CHECKPOIN";
		}
		func_48((iParam11 - iParam10), sVar1, iParam27, iParam13, 7, 0, 0, 1, 0, 0, 0, 0);
	}
	if (iParam5 > -1)
	{
		sVar2 = sParam7;
		if (func_50(sVar2))
		{
			sVar2 = "TIM_POSIT";
		}
		func_47(iParam5, iParam6, sVar2, iParam9, iParam27, 6, 0, 0, 0, 1, 0);
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
		func_44(iParam18, sVar4, 0, 1, iParam27, iParam20, 4, 0, iParam21, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	if (iParam22 > -1)
	{
		sVar5 = sParam23;
		if (func_50(sVar5))
		{
			sVar5 = "TIMER_BESTIME";
		}
		func_44(iParam22, sVar5, 0, 1, iParam27, iParam24, 5, 0, iParam25, 0, 0, 0, 0, 0, 0, 0, 0);
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
	func_44(iParam0, &Var6, iParam8, iVar22, iParam27, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
}

void func_44(int iParam0, char* sParam1, int iParam2, int iParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
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
		Global_1356070.f_1 = 1;
		func_45(7, iVar0);
		Global_1356070.f_4366[iVar0] = iParam0;
		StringCopy(&(Global_1356070.f_4366.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1356070.f_4366.f_172[iVar0] = iParam2;
		Global_1356070.f_4366.f_216[iVar0] = iParam3;
		Global_1356070.f_4366.f_183[iVar0] = uParam4;
		Global_1356070.f_4366.f_194[iVar0] = iParam5;
		Global_1356070.f_4366.f_249[iVar0] = iParam6;
		Global_1356070.f_4366.f_260[iVar0] = iParam7;
		Global_1356070.f_4366.f_205[iVar0] = iParam8;
		Global_1356070.f_4366.f_314[iVar0] = iParam9;
		Global_1356070.f_4366.f_325[iVar0] = iParam10;
		Global_1356070.f_4366.f_357[iVar0] = iParam11;
		Global_1356070.f_4366.f_238[iVar0] = iParam12;
		Global_1356070.f_4366.f_271[iVar0] = iParam13;
		Global_1356070.f_4366.f_368[iVar0] = iParam14;
		Global_1356070.f_4366.f_379[iVar0] = iParam15;
		Global_1356070.f_4366.f_390[iVar0] = iParam16;
	}
}

void func_45(int iParam0, int iParam1)
{
	unk_0xCD7E92DE2BFA0B0D(&(Global_1356070.f_5941[iParam0]), iParam1);
}

bool func_46(int iParam0, int iParam1)
{
	return unk_0x2A3398C6222EB190(Global_1356070.f_5941[iParam0], iParam1);
}

void func_47(int iParam0, var uParam1, char* sParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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
		Global_1356070.f_1 = 1;
		func_45(5, iVar0);
		Global_1356070.f_3456[iVar0] = iParam0;
		Global_1356070.f_3456.f_172[iVar0] = uParam1;
		StringCopy(&(Global_1356070.f_3456.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1356070.f_3456.f_194[iVar0] = uParam3;
		Global_1356070.f_3456.f_183[iVar0] = uParam4;
		Global_1356070.f_3456.f_216[iVar0] = iParam5;
		Global_1356070.f_3456.f_227[iVar0] = iParam6;
		Global_1356070.f_3456.f_270[iVar0] = iParam7;
		Global_1356070.f_3456.f_281[iVar0] = iParam8;
		Global_1356070.f_3456.f_292[iVar0] = iParam9;
		Global_1356070.f_3456.f_303[iVar0] = iParam10;
	}
}

void func_48(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
		Global_1356070.f_1 = 1;
		func_45(3, iVar0);
		Global_1356070.f_2623[iVar0] = iParam0;
		StringCopy(&(Global_1356070.f_2623.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1356070.f_2623.f_183[iVar0] = uParam3;
		Global_1356070.f_2623.f_172[iVar0] = uParam2;
		Global_1356070.f_2623.f_205[iVar0] = iParam4;
		Global_1356070.f_2623.f_216[iVar0] = iParam5;
		StringCopy(&(Global_1356070.f_2623.f_259[iVar0 /*16*/]), sParam6, 64);
		Global_1356070.f_2623.f_420[iVar0] = iParam7;
		Global_1356070.f_2623.f_453[iVar0] = iParam8;
		Global_1356070.f_2623.f_431[iVar0] = iParam9;
		Global_1356070.f_2623.f_442[iVar0] = iParam10;
		Global_1356070.f_2623.f_464[iVar0] = iParam11;
	}
}

void func_49(int iParam0, var uParam1, char* sParam2, var uParam3, var uParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23)
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
		Global_1356070.f_1 = 1;
		func_45(0, iVar0);
		Global_1356070.f_1093[iVar0] = iParam0;
		Global_1356070.f_1093.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1356070.f_1093.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1356070.f_1093.f_194[iVar0] = uParam3;
		Global_1356070.f_1093.f_183[iVar0] = uParam4;
		Global_1356070.f_1093.f_216[iVar0] = iParam5;
		Global_1356070.f_1093.f_227[iVar0 /*3*/] = fParam6;
		Global_1356070.f_1093.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1356070.f_1093.f_258[iVar0] = iParam8;
		Global_1356070.f_1093.f_269[iVar0] = iParam9;
		Global_1356070.f_1093.f_312[iVar0] = iParam10;
		Global_1356070.f_1093.f_323[iVar0] = iParam11;
		Global_1356070.f_1093.f_334[iVar0] = iParam12;
		Global_1356070.f_1093.f_345[iVar0] = iParam13;
		Global_1356070.f_1088 = 1;
		Global_1356070.f_1093.f_356[iVar0] = iParam14;
		Global_1356070.f_1093.f_367[iVar0] = iParam15;
		Global_1356070.f_1093.f_378[iVar0] = iParam16;
		Global_1356070.f_1093.f_389[iVar0] = iParam17;
		Global_1356070.f_1093.f_400[iVar0] = iParam18;
		Global_1356070.f_1093.f_411[iVar0] = iParam19;
		Global_1356070.f_1093.f_422[iVar0] = iParam20;
		Global_1356070.f_1093.f_433[iVar0] = iParam21;
		Global_1356070.f_1093.f_444[iVar0] = iParam22;
		Global_1356070.f_1093.f_455[iVar0] = iParam23;
	}
}

int func_50(char[4] cParam0)
{
	if (unk_0x996B09F758C57FBE(cParam0))
	{
		return 1;
	}
	else if (unk_0xB3404E397FF56B3B(cParam0, "") || unk_0xB3404E397FF56B3B(cParam0, "0"))
	{
		return 1;
	}
	return 0;
}

void func_51(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22)
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
		Global_1356070.f_1 = 1;
		func_45(6, iVar0);
		Global_1356070.f_3770[iVar0] = iParam0;
		StringCopy(&(Global_1356070.f_3770.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1356070.f_3770.f_183[iVar0] = uParam3;
		Global_1356070.f_3770.f_172[iVar0] = uParam2;
		Global_1356070.f_3770.f_260[iVar0] = iParam4;
		Global_1356070.f_3770.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1356070.f_3770.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1356070.f_3770.f_443[iVar0] = iParam7;
		Global_1356070.f_3770.f_454[iVar0] = fParam8;
		Global_1356070.f_3770.f_497[iVar0] = iParam9;
		Global_1356070.f_3770.f_508[iVar0] = iParam10;
		Global_1356070.f_3770.f_205[iVar0] = iParam11;
		Global_1356070.f_3770.f_216[iVar0] = iParam12;
		Global_1356070.f_3770.f_227[iVar0] = iParam13;
		Global_1356070.f_3770.f_238[iVar0] = iParam14;
		Global_1356070.f_3770.f_249[iVar0] = iParam15;
		Global_1356070.f_3770.f_519[iVar0] = iParam16;
		Global_1356070.f_3770.f_530[iVar0] = iParam17;
		Global_1356070.f_3770.f_541[iVar0] = iParam18;
		Global_1356070.f_3770.f_552[iVar0] = iParam19;
		Global_1356070.f_3770.f_563[iVar0] = iParam20;
		Global_1356070.f_3770.f_574[iVar0] = iParam21;
		Global_1356070.f_3770.f_585[iVar0] = iParam22;
		if (iParam15 == 5 && func_53())
		{
			Global_1356070.f_1088 = 1;
		}
		if (unk_0x20551D6D924ED04B())
		{
			iVar2 = 0;
			unk_0xD9151D5BCEE2689C(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1356070.f_1092 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1356070.f_1091 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1356070.f_1088 = 1;
			}
			if (func_52())
			{
				Global_1356070.f_1092 = 1;
			}
		}
	}
}

int func_52()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x20551D6D924ED04B())
	{
		unk_0xD9151D5BCEE2689C(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_53()
{
	if ((unk_0x2DA8A432EC3C3D33() == 8 || unk_0x2DA8A432EC3C3D33() == 9) || unk_0x2DA8A432EC3C3D33() == 10)
	{
		return 1;
	}
	return 0;
}

int func_54()
{
	return iLocal_2131;
}

void func_55()
{
	Global_1356070.f_1088 = 1;
}

void func_56(var uParam0)
{
	if (uParam0->f_13 == -1)
	{
	}
}

void func_57()
{
	if (Local_51.f_0 == 0)
	{
		unk_0x12AD9BF8379E04FB(0, 0, -1);
		unk_0x12AD9BF8379E04FB(1, 0, -1);
		unk_0x12AD9BF8379E04FB(2, 0, -1);
		unk_0x12AD9BF8379E04FB(3, 0, -1);
	}
}

void func_58(var uParam0)
{
	if (func_5(&(uParam0->f_3)) > 15f)
	{
		if (unk_0x38A3CC71471EC547(uParam0->f_358[0 /*189*/].f_9) < 5f)
		{
			if (!func_3(&uLocal_2337))
			{
				func_10(&uLocal_2337);
			}
			else if (func_5(&uLocal_2337) > 60f)
			{
				func_59("SPR_MOVE_FAIL", 5000, 0, &iLocal_2345, 8192);
				if (uParam0->f_358[0 /*189*/].f_11 <= (uParam0->f_12 - 1))
				{
					if (unk_0xA761A0B6072010C8(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5))
					{
						unk_0x10B7FEC9D017D330(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5, 0);
					}
				}
				if (uParam0->f_358[0 /*189*/].f_11 + 1 <= (uParam0->f_12 - 2))
				{
					if (unk_0xA761A0B6072010C8(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5))
					{
						unk_0x10B7FEC9D017D330(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5, 0);
					}
				}
				func_11(&uLocal_2337);
				func_11(&uLocal_2334);
				uParam0->f_1 = 0;
				unk_0x27FC4121D73AF604();
				sLocal_2332 = "SPR_RETR_IDLE";
				uParam0->f_358[0 /*189*/].f_23 = 0;
			}
			else if (func_5(&uLocal_2337) > 30f)
			{
				if (!func_346(iLocal_2344, 32))
				{
					func_103("SPR_IDLE_WARN", &iLocal_2344, 32, 0);
				}
			}
		}
		else if (func_3(&uLocal_2337))
		{
			func_344(&iLocal_2344, 32);
			func_11(&uLocal_2337);
		}
	}
	else if (func_3(&uLocal_2337))
	{
		func_344(&iLocal_2344, 32);
		func_11(&uLocal_2337);
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
	unk_0x8F8D0515CEE01015(sParam0);
	unk_0xCA3811E629240D04(iParam1, 1);
}

bool func_62(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0;
}

void func_63()
{
	if (unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()) > 0)
	{
		unk_0x742F5A1F59CA4BC0(unk_0x3D35F9864E4640B1());
	}
}

void func_64(var uParam0, var uParam1)
{
	if (uParam0->f_1)
	{
		if ((!unk_0x432757A9E7AAFA96(uParam0->f_358[0 /*189*/].f_9, 0) || unk_0x8DB158934E64B062(uParam0->f_358[0 /*189*/].f_9) < 5) || unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
		{
			func_11(&uLocal_2334);
			if (unk_0xA761A0B6072010C8(*uParam1))
			{
				unk_0x0C4BDC77192798AE(uParam1);
			}
			if (uParam0->f_358[0 /*189*/].f_11 <= (uParam0->f_12 - 1))
			{
				if (unk_0xA761A0B6072010C8(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5))
				{
					unk_0x10B7FEC9D017D330(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5, 0);
				}
			}
			if (uParam0->f_358[0 /*189*/].f_11 + 1 <= (uParam0->f_12 - 2))
			{
				if (unk_0xA761A0B6072010C8(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5))
				{
					unk_0x10B7FEC9D017D330(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5, 0);
				}
			}
			uParam0->f_1 = 0;
			unk_0x27FC4121D73AF604();
			sLocal_2332 = "SPR_RETR_DES";
			uParam0->f_358[0 /*189*/].f_23 = 0;
		}
		return;
	}
}

void func_65(var uParam0, var uParam1)
{
	if (Local_51.f_0 == 0)
	{
		if (!unk_0x7A6C051038031EFA(uParam0->f_358[0 /*189*/].f_9, 0))
		{
			if (!unk_0x84432DB7C4069064(unk_0x0031992CA618A445()))
			{
				unk_0x27FC4121D73AF604();
				unk_0x683F0CB6CA4C99D0(0);
				unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 0, 0);
				if (unk_0xA761A0B6072010C8(*uParam1))
				{
					unk_0x0C4BDC77192798AE(uParam1);
					if (uParam0->f_358[0 /*189*/].f_11 <= (uParam0->f_12 - 1))
					{
						if (unk_0xA761A0B6072010C8(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5))
						{
							unk_0x10B7FEC9D017D330(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5, 0);
						}
					}
					if (uParam0->f_358[0 /*189*/].f_11 + 1 <= (uParam0->f_12 - 2))
					{
						if (unk_0xA761A0B6072010C8(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5))
						{
							unk_0x10B7FEC9D017D330(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5, 0);
						}
					}
				}
				uParam0->f_1 = 0;
				unk_0x27FC4121D73AF604();
				sLocal_2332 = "SPR_RETR_DES";
				func_66(&(Local_51.f_321), 1);
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
	unk_0x1F1D255CB6501243("OFFMISSION_WASTED", 0, -1);
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
	
	iVar0 = unk_0x8DB158934E64B062(uParam0->f_358[0 /*189*/].f_9);
	if (!unk_0x7A6C051038031EFA(uParam0->f_358[0 /*189*/].f_9, 0))
	{
		iVar1 = unk_0xF2DB717A73826179(unk_0x9944C9C4DBEAB270(uParam0->f_358[0 /*189*/].f_9));
	}
	if (IntToFloat(iVar0) < 500f)
	{
		if (Local_51.f_0 == 2)
		{
			if (!unk_0x7A6C051038031EFA(uParam0->f_358[0 /*189*/].f_9, 0) && !unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
			{
				if (unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), uParam0->f_358[0 /*189*/].f_9, 0))
				{
					bLocal_2343 = true;
				}
			}
			if (bLocal_2343)
			{
				if (uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_7 == 6 || uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_7 == 10)
				{
					if (!unk_0x2C4568A5B00B34DA())
					{
						func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_2345, 2);
					}
				}
			}
		}
		else
		{
			if (unk_0x2C4568A5B00B34DA())
			{
				unk_0x27FC4121D73AF604();
			}
			func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_2345, 2);
		}
	}
	if (Local_51.f_0 == 1)
	{
		if (IntToFloat(iVar1) < 200f)
		{
			if (unk_0x2C4568A5B00B34DA())
			{
				unk_0x27FC4121D73AF604();
			}
			if (func_71())
			{
				func_69();
			}
			func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_2345, 2);
		}
	}
}

void func_69()
{
	Global_14611 = 0;
	func_70();
}

void func_70()
{
	unk_0x8C8894B8C4CFE97F();
	Global_16756 = 0;
	if ((unk_0xCAD6D8C85D0F329B() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x683F0CB6CA4C99D0(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x0065EA0CBFB686EA())
	{
		unk_0x683F0CB6CA4C99D0(1);
		Global_15745 = 6;
		return;
	}
}

int func_71()
{
	if (Global_15745 != 0 || unk_0x0065EA0CBFB686EA())
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
	fVar6 = unk_0x1410333E912D4EC6(Var0, Var3, 1);
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
	Var8 = { unk_0xF177E0DA126D71C8(uParam0->f_358[0 /*189*/].f_8, 1) };
	if (func_73(Var3, 0f, 0f, 0f, 1056964608, 0))
	{
		Var11 = { Var0 };
	}
	else
	{
		Var11 = { unk_0xEB94EBA4572EE9D5(Var8, Var3, Var0, 1) };
	}
	fVar14 = unk_0x1410333E912D4EC6(Var11, Var8, 1);
	bVar15 = fVar14 >= fVar6;
	bVar16 = fVar14 >= fVar7;
	if (Local_51.f_0 == 1)
	{
		if (unk_0x229F35E7CDDBF757((Var11.f_2 - Var8.f_2)) > 15f)
		{
			bVar15 = true;
		}
	}
	if (bVar16)
	{
		func_11(&uLocal_2334);
		uParam0->f_1 = 0;
		unk_0x27FC4121D73AF604();
		func_240(1);
		uParam0->f_358[0 /*189*/].f_23 = 0;
		func_247(&(Local_51.f_119), 0, 0, 1, 1);
		func_246(&(Local_51.f_119), "IB_RETRY", 2, 201, 1, 1, 0);
		func_246(&(Local_51.f_119), "FE_HLP16", 2, 202, 1, 1, 0);
		unk_0x1E420F926A7BC4D2("MGSP_FAIL");
		sLocal_2332 = "SPR_HELP_FAIL";
	}
	else if (bVar15)
	{
		if (fVar14 <= (fVar7 - 15f))
		{
			func_287("SPR_HELP_RESET", -1);
		}
		if (fVar14 <= (fVar7 - 15f))
		{
			func_59("SPR_HELP_WARN", 5000, 0, &iLocal_2345, 4);
		}
	}
	else
	{
		unk_0xEA8C7331F449F129("SPR_HELP_WARN");
		if (func_346(iLocal_2345, 4))
		{
			func_344(&iLocal_2345, 4);
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
		if (unk_0x229F35E7CDDBF757((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x229F35E7CDDBF757((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x229F35E7CDDBF757((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x229F35E7CDDBF757((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x229F35E7CDDBF757((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_74()
{
	if (iLocal_2048 == 1)
	{
		if (func_3(&uLocal_2078))
		{
			if (func_5(&uLocal_2078) <= 2.5f)
			{
				iLocal_2129 = "GATEMISS";
				fLocal_2130 = 5f;
				iLocal_2131 = 1;
			}
			else
			{
				iLocal_2129 = 0;
				fLocal_2130 = -1f;
				iLocal_2131 = 1;
				iLocal_2048 = 0;
			}
		}
	}
	if (iLocal_2049 == 1)
	{
		if (func_3(&uLocal_2084))
		{
			if (func_5(&uLocal_2084) <= 2.5f)
			{
				iLocal_2129 = "GATEINNER";
				fLocal_2130 = 1f;
				iLocal_2131 = 1;
			}
			else
			{
				iLocal_2129 = 0;
				fLocal_2130 = -1f;
				iLocal_2131 = 1;
				iLocal_2049 = 0;
			}
		}
	}
	if (iLocal_2050 == 1)
	{
		if (func_3(&uLocal_2081))
		{
			if (func_5(&uLocal_2081) <= 2.5f)
			{
				iLocal_2129 = "GATEOUTTER";
				fLocal_2130 = 0f;
				iLocal_2131 = 1;
			}
			else
			{
				iLocal_2129 = 0;
				fLocal_2130 = -1f;
				iLocal_2131 = 1;
				iLocal_2050 = 0;
			}
		}
	}
	if (iLocal_2051 == 1)
	{
		if (func_3(&uLocal_2093))
		{
			if (func_5(&uLocal_2093) <= 2.5f)
			{
				iLocal_2129 = "GATEKNIFEINNER";
				fLocal_2130 = 2.5f;
				iLocal_2131 = 1;
			}
			else
			{
				iLocal_2129 = 0;
				fLocal_2130 = -1f;
				iLocal_2131 = 1;
				iLocal_2051 = 0;
			}
		}
	}
	if (iLocal_2052 == 1)
	{
		if (func_3(&uLocal_2096))
		{
			if (func_5(&uLocal_2096) <= 2.5f)
			{
				iLocal_2129 = "GATEINVERTEDIN";
				fLocal_2130 = 3f;
				iLocal_2131 = 1;
			}
			else
			{
				iLocal_2129 = 0;
				fLocal_2130 = -1f;
				iLocal_2131 = 1;
				iLocal_2052 = 0;
			}
		}
	}
	if (iLocal_2053 == 1)
	{
		if (func_3(&uLocal_2087))
		{
			if (func_5(&uLocal_2087) <= 2.5f)
			{
				iLocal_2129 = "GATEKNIFEOUTTER";
				fLocal_2130 = 1.5f;
				iLocal_2131 = 1;
			}
			else
			{
				iLocal_2129 = 0;
				fLocal_2130 = -1f;
				iLocal_2131 = 1;
				iLocal_2053 = 0;
			}
		}
	}
	if (iLocal_2054 == 1)
	{
		if (func_3(&uLocal_2090))
		{
			if (func_5(&uLocal_2090) <= 2.5f)
			{
				iLocal_2129 = "GATEINVERTEDOUT";
				fLocal_2130 = 2f;
				iLocal_2131 = 1;
			}
			else
			{
				iLocal_2129 = 0;
				fLocal_2130 = -1f;
				iLocal_2131 = 1;
				iLocal_2054 = 0;
			}
		}
	}
	if (iLocal_2055 == 1)
	{
		if (func_3(&uLocal_2066))
		{
			if (func_5(&uLocal_2066) <= 2.5f)
			{
				iLocal_2129 = "STUNTKNIFELEFT";
				fLocal_2130 = 4f;
				iLocal_2131 = 1;
			}
			else
			{
				iLocal_2129 = 0;
				fLocal_2130 = -1f;
				iLocal_2131 = 1;
				iLocal_2055 = 0;
			}
		}
	}
	if (iLocal_2056 == 1)
	{
		if (func_3(&uLocal_2066))
		{
			if (func_5(&uLocal_2066) <= 2.5f)
			{
				iLocal_2129 = "STUNTKNIFELEFTHIT";
				fLocal_2130 = 1.5f;
				iLocal_2131 = 1;
			}
			else
			{
				iLocal_2129 = 0;
				fLocal_2130 = -1f;
				iLocal_2131 = 1;
				iLocal_2056 = 0;
			}
		}
	}
	if (iLocal_2057 == 1)
	{
		if (func_3(&uLocal_2066))
		{
			if (func_5(&uLocal_2066) <= 2.5f)
			{
				iLocal_2129 = "STUNTKNIFELEFTMISS";
				fLocal_2130 = 5f;
				iLocal_2131 = 1;
			}
			else
			{
				iLocal_2129 = 0;
				fLocal_2130 = -1f;
				iLocal_2131 = 1;
				iLocal_2057 = 0;
			}
		}
	}
	if (iLocal_2058 == 1)
	{
		if (func_3(&uLocal_2066))
		{
			if (func_5(&uLocal_2066) <= 2.5f)
			{
				iLocal_2129 = "STUNTKNIFERIGHT";
				fLocal_2130 = 4f;
				iLocal_2131 = 1;
			}
			else
			{
				iLocal_2129 = 0;
				fLocal_2130 = -1f;
				iLocal_2131 = 1;
				iLocal_2058 = 0;
			}
		}
	}
	if (iLocal_2059 == 1)
	{
		if (func_3(&uLocal_2066))
		{
			if (func_5(&uLocal_2066) <= 2.5f)
			{
				iLocal_2129 = "STUNTKNIFERIGHTHIT";
				fLocal_2130 = 1.5f;
				iLocal_2131 = 1;
			}
			else
			{
				iLocal_2129 = 0;
				fLocal_2130 = -1f;
				iLocal_2131 = 1;
				iLocal_2059 = 0;
			}
		}
	}
	if (iLocal_2060 == 1)
	{
		if (func_3(&uLocal_2066))
		{
			if (func_5(&uLocal_2066) <= 2.5f)
			{
				iLocal_2129 = "STUNTKNIFERIGHTMISS";
				fLocal_2130 = 5f;
				iLocal_2131 = 1;
			}
			else
			{
				iLocal_2129 = 0;
				fLocal_2130 = -1f;
				iLocal_2131 = 1;
				iLocal_2060 = 0;
			}
		}
	}
	if (iLocal_2061 == 1)
	{
		if (func_3(&uLocal_2069))
		{
			if (func_5(&uLocal_2069) <= 2.5f)
			{
				iLocal_2129 = "STUNTINVERTED";
				fLocal_2130 = 4f;
				iLocal_2131 = 1;
			}
			else
			{
				iLocal_2129 = 0;
				fLocal_2130 = -1f;
				iLocal_2131 = 1;
				iLocal_2061 = 0;
			}
		}
	}
	if (iLocal_2062 == 1)
	{
		if (func_3(&uLocal_2069))
		{
			if (func_5(&uLocal_2069) <= 2.5f)
			{
				iLocal_2129 = "STUNTINVERTEDHIT";
				fLocal_2130 = 1.5f;
				iLocal_2131 = 1;
			}
			else
			{
				iLocal_2129 = 0;
				fLocal_2130 = -1f;
				iLocal_2131 = 1;
				iLocal_2062 = 0;
			}
		}
	}
	if (iLocal_2063 == 1)
	{
		if (func_3(&uLocal_2069))
		{
			if (func_5(&uLocal_2069) <= 2.5f)
			{
				iLocal_2129 = "STUNTINVERTEDMISS";
				fLocal_2130 = 5f;
				iLocal_2131 = 1;
			}
			else
			{
				iLocal_2129 = 0;
				fLocal_2130 = -1f;
				iLocal_2131 = 1;
				iLocal_2063 = 0;
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
	if (!unk_0x7A6C051038031EFA(uParam0->f_358[iParam1 /*189*/].f_8, 0))
	{
		if (!unk_0x7A6C051038031EFA(uParam0->f_358[iParam1 /*189*/].f_9, 0))
		{
			if (unk_0xA32DC7E16AD1DFB7(uParam0->f_358[iParam1 /*189*/].f_8, uParam0->f_358[iParam1 /*189*/].f_9, 0))
			{
				fVar0 = unk_0xDDBBF868DD242CCE(uParam0->f_358[iParam1 /*189*/].f_9);
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
				if (unk_0x26D7BF365BA84F9C(uParam0->f_358[iParam1 /*189*/].f_8, uParam0->f_358[iParam1 /*189*/].f_9))
				{
					if (unk_0x00E962E9D49FD6C4(uParam0->f_358[iParam1 /*189*/].f_9, -1, 0))
					{
						unk_0x7E3C622EB2D4D2E2(uParam0->f_358[iParam1 /*189*/].f_8, uParam0->f_358[iParam1 /*189*/].f_9, -1);
						unk_0xDCDAEB946BEBD18C(uParam0->f_358[iParam1 /*189*/].f_8, fVar0);
					}
				}
			}
		}
	}
}

void func_76(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam6, int iParam7)
{
	if (!unk_0x7A6C051038031EFA(iParam1, 0))
	{
		if (Local_51.f_0 == 1)
		{
			if (!unk_0x7A6C051038031EFA(iParam2, 0))
			{
				unk_0x9EA0A7060EF3D099(iParam1, iParam2, Param3, unk_0xDDBBF868DD242CCE(iParam2), 1, 0, 786469, 5f, -1f);
			}
		}
		else if (Local_51.f_0 == 2)
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
		unk_0x1EC5FCC706B5D133(*uParam0);
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
		if (bLocal_2333)
		{
			iVar3 = 6;
		}
		else
		{
			iVar3 = 1;
		}
		func_565(func_566(iVar3), &uVar0, &uVar1, &uVar2, uParam2);
		unk_0x91B60F3EC488BE29(*uParam1, uVar0, uVar1, uVar2, *uParam2);
		unk_0x98AAA89ACC7FBB81(*uParam1, uVar0, uVar1, uVar2, *uParam2);
	}
}

void func_82(var uParam0)
{
	func_83(&(uParam0->f_5));
}

void func_83(var uParam0)
{
	if (unk_0xA761A0B6072010C8(*uParam0))
	{
		unk_0x0C4BDC77192798AE(uParam0);
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
		if (Local_51.f_0 == 0)
		{
			if (func_3(&uLocal_2078))
			{
				func_89(&uLocal_2078, 3f);
			}
			if (func_3(&uLocal_2072))
			{
				func_89(&uLocal_2072, 3f);
			}
			if (func_3(&uLocal_2066))
			{
				func_89(&uLocal_2066, 3f);
			}
			if (func_3(&uLocal_2075))
			{
				func_89(&uLocal_2075, 3f);
			}
			if (func_3(&uLocal_2069))
			{
				func_89(&uLocal_2069, 3f);
			}
			if (func_3(&uLocal_2081))
			{
				func_89(&uLocal_2081, 3f);
			}
			if (func_3(&uLocal_2084))
			{
				func_89(&uLocal_2084, 3f);
			}
			if (func_3(&uLocal_2087))
			{
				func_89(&uLocal_2087, 3f);
			}
			if (func_3(&uLocal_2090))
			{
				func_89(&uLocal_2090, 3f);
			}
			if (func_3(&uLocal_2093))
			{
				func_89(&uLocal_2093, 3f);
			}
			if (func_3(&uLocal_2096))
			{
				func_89(&uLocal_2096, 3f);
			}
			func_86(uParam0, iParam2);
			switch (iParam2)
			{
				case 7:
					iLocal_2048 = 1;
					func_11(&uLocal_2078);
					break;
				
				case 1:
					iLocal_2049 = 1;
					func_11(&uLocal_2084);
					break;
				
				case 2:
					iLocal_2050 = 1;
					func_11(&uLocal_2081);
					break;
				
				case 3:
					iLocal_2051 = 1;
					func_11(&uLocal_2093);
					break;
				
				case 4:
					iLocal_2052 = 1;
					func_11(&uLocal_2096);
					break;
				
				case 5:
					iLocal_2053 = 1;
					func_11(&uLocal_2087);
					break;
				
				case 6:
					iLocal_2054 = 1;
					func_11(&uLocal_2090);
					break;
				
				case 8:
					iLocal_2055 = 1;
					func_11(&uLocal_2066);
					break;
				
				case 9:
					iLocal_2056 = 1;
					func_11(&uLocal_2075);
					break;
				
				case 10:
					iLocal_2057 = 1;
					func_11(&uLocal_2078);
					break;
				
				case 11:
					iLocal_2058 = 1;
					func_11(&uLocal_2066);
					break;
				
				case 12:
					iLocal_2059 = 1;
					func_11(&uLocal_2075);
					break;
				
				case 13:
					iLocal_2060 = 1;
					func_11(&uLocal_2078);
					break;
				
				case 14:
					iLocal_2061 = 1;
					func_11(&uLocal_2069);
					break;
				
				case 15:
					iLocal_2062 = 1;
					func_11(&uLocal_2075);
					break;
				
				case 16:
					iLocal_2063 = 1;
					func_11(&uLocal_2078);
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
		func_565(func_566(iVar4), &uVar0, &uVar1, &uVar2, &uVar3);
		unk_0x91B60F3EC488BE29(uParam0->f_6, uVar0, uVar1, uVar2, func_91(*uParam0, 25, 200));
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
		func_565(func_566(iVar5), &uVar0, &uVar1, &uVar2, &uVar3);
		unk_0x91B60F3EC488BE29(uParam1->f_6, uVar0, uVar1, uVar2, func_91(*uParam1, 25, 200));
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
	if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
	{
		fVar2 = unk_0x1410333E912D4EC6(Param0, unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), 1);
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
	
	if (unk_0x7A6C051038031EFA(uParam0->f_358[0 /*189*/].f_9, 0))
	{
		return -1;
	}
	iVar12 = func_100(uParam1, iParam3);
	if (Local_51.f_0 == 0)
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
						if (!func_346(iLocal_2376, 262144))
						{
							func_98("Gate_PK", &iLocal_2375);
							iLocal_2376 = 0;
							func_318(&iLocal_2376, 262144);
							return iVar12;
						}
						else if (!func_346(iLocal_2376, 524288))
						{
							func_98("Con_PK", &iLocal_2375);
							func_318(&iLocal_2376, 524288);
							return iVar12;
						}
						else if (!func_346(iLocal_2376, 1048576))
						{
							func_98("Con_PK", &iLocal_2375);
							func_318(&iLocal_2376, 1048576);
							return iVar12;
						}
						else
						{
							func_98("Con_PK", &iLocal_2375);
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
						if (!func_346(iLocal_2376, 262144))
						{
							func_98("Gate_PK", &iLocal_2375);
							iLocal_2376 = 0;
							func_318(&iLocal_2376, 262144);
							return iVar12;
						}
						else if (!func_346(iLocal_2376, 524288))
						{
							func_98("Con_PK", &iLocal_2375);
							func_318(&iLocal_2376, 524288);
							return iVar12;
						}
						else if (!func_346(iLocal_2376, 1048576))
						{
							func_98("Con_PK", &iLocal_2375);
							func_318(&iLocal_2376, 1048576);
							return iVar12;
						}
						else
						{
							func_98("Con_PK", &iLocal_2375);
							return iVar12;
						}
					}
				}
				else
				{
					unk_0x907B49D8EE914AED(uParam0->f_358[0 /*189*/].f_9, &uVar0, &uVar3, &Var6, &uVar9);
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
							if (!func_346(iLocal_2376, 32768))
							{
								func_98("Gate_PI", &iLocal_2374);
								iLocal_2376 = 0;
								func_318(&iLocal_2376, 32768);
								return iVar12;
							}
							else if (!func_346(iLocal_2376, 65536))
							{
								func_98("Con_PI", &iLocal_2374);
								func_318(&iLocal_2376, 65536);
								return iVar12;
							}
							else if (!func_346(iLocal_2376, 131072))
							{
								func_98("Con_PI", &iLocal_2374);
								func_318(&iLocal_2376, 131072);
								return iVar12;
							}
							else
							{
								func_98("Con_PI", &iLocal_2374);
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
						if (!func_346(iLocal_2376, 4096))
						{
							func_98("Get_Perf", &iLocal_2371);
							iLocal_2376 = 0;
							func_318(&iLocal_2376, 4096);
							return iVar12;
						}
						else if (!func_346(iLocal_2376, 8192))
						{
							func_98("Con_Perf", &iLocal_2371);
							func_318(&iLocal_2376, 8192);
							return iVar12;
						}
						else if (!func_346(iLocal_2376, 16384))
						{
							func_98("Con_Perf", &iLocal_2371);
							func_318(&iLocal_2376, 16384);
							return iVar12;
						}
						else
						{
							func_98("Con_Perf", &iLocal_2371);
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
						if (!func_346(iLocal_2376, 64))
						{
							func_98("Gate_Kni", &iLocal_2373);
							iLocal_2376 = 0;
							func_318(&iLocal_2376, 64);
							return iVar12;
						}
						else if (!func_346(iLocal_2376, 128))
						{
							func_98("Con_Kni", &iLocal_2373);
							func_318(&iLocal_2376, 128);
							return iVar12;
						}
						else if (!func_346(iLocal_2376, 256))
						{
							func_98("Con_Kni", &iLocal_2373);
							func_318(&iLocal_2376, 256);
							return iVar12;
						}
						else
						{
							func_98("Con_Kni", &iLocal_2373);
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
						if (!func_346(iLocal_2376, 64))
						{
							func_98("Gate_Kni", &iLocal_2373);
							iLocal_2376 = 0;
							func_318(&iLocal_2376, 64);
							return iVar12;
						}
						else if (!func_346(iLocal_2376, 128))
						{
							func_98("Con_Kni", &iLocal_2373);
							func_318(&iLocal_2376, 128);
							return iVar12;
						}
						else if (!func_346(iLocal_2376, 256))
						{
							func_98("Con_Kni", &iLocal_2373);
							func_318(&iLocal_2376, 256);
							return iVar12;
						}
						else
						{
							func_98("Con_Kni", &iLocal_2373);
							return iVar12;
						}
					}
				}
				else
				{
					unk_0x907B49D8EE914AED(uParam0->f_358[0 /*189*/].f_9, &uVar0, &uVar3, &Var6, &uVar9);
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
							if (!func_346(iLocal_2376, 512))
							{
								func_98("Gate_Inv", &iLocal_2372);
								iLocal_2376 = 0;
								func_318(&iLocal_2376, 512);
								return iVar12;
							}
							else if (!func_346(iLocal_2376, 1024))
							{
								func_98("Con_Inv", &iLocal_2372);
								func_318(&iLocal_2376, 1024);
								return iVar12;
							}
							else if (!func_346(iLocal_2376, 2048))
							{
								func_98("Con_Inv", &iLocal_2372);
								func_318(&iLocal_2376, 2048);
								return iVar12;
							}
							else
							{
								func_98("Con_Inv", &iLocal_2372);
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
						if (!func_346(iLocal_2376, 8))
						{
							func_98("Gate_Hit", &iLocal_2370);
							iLocal_2376 = 0;
							func_318(&iLocal_2376, 8);
							return iVar12;
						}
						else if (!func_346(iLocal_2376, 16))
						{
							func_98("Con_Hit", &iLocal_2370);
							func_318(&iLocal_2376, 16);
							return iVar12;
						}
						else if (!func_346(iLocal_2376, 32))
						{
							func_98("Con_Hit", &iLocal_2370);
							func_318(&iLocal_2376, 32);
							return iVar12;
						}
						else
						{
							func_98("Con_Hit", &iLocal_2370);
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
					if (!func_346(iLocal_2376, 1))
					{
						func_98("Gate_Miss", &iLocal_2369);
						iLocal_2376 = 0;
						func_318(&iLocal_2376, 1);
						return iVar12;
					}
					else if (!func_346(iLocal_2376, 2))
					{
						func_98("Con_Miss", &iLocal_2369);
						func_318(&iLocal_2376, 2);
						return iVar12;
					}
					else if (!func_346(iLocal_2376, 4))
					{
						func_98("Con_Miss", &iLocal_2369);
						func_318(&iLocal_2376, 4);
						return iVar12;
					}
					else
					{
						func_98("Con_Miss", &iLocal_2369);
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
				if (!func_346(iLocal_2376, 1))
				{
					func_98("Gate_Miss", &iLocal_2369);
					iLocal_2376 = 0;
					func_318(&iLocal_2376, 1);
					return iVar12;
				}
				else if (!func_346(iLocal_2376, 2))
				{
					func_98("Con_Miss", &iLocal_2369);
					func_318(&iLocal_2376, 2);
					return iVar12;
				}
				else if (!func_346(iLocal_2376, 4))
				{
					func_98("Con_Miss", &iLocal_2369);
					func_318(&iLocal_2376, 4);
					return iVar12;
				}
				else
				{
					func_98("Con_Miss", &iLocal_2369);
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
		if (unk_0xF041E50CF58AF6F9(iParam2, *uParam0, fVar0, fVar0, fVar0, 0, 1, 0))
		{
			Var1 = { func_96(*uParam1 - *uParam0) };
			if ((func_95(unk_0xF177E0DA126D71C8(iParam2, 1), Var1) - func_95(*uParam0, Var1)) > 15f)
			{
				unk_0x18F1BFAF88AC511B(-1, sLocal_2361, "HUD_MINI_GAME_SOUNDSET", 1);
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
	
	if (unk_0x7A6C051038031EFA(iParam0, 0))
	{
		return 0;
	}
	unk_0x907B49D8EE914AED(iParam0, &uVar0, &Var3, &Var6, &uVar9);
	if (unk_0x229F35E7CDDBF757(Var6.f_2) > 0.342f)
	{
		return 0;
	}
	return Var3.f_2 < 0f;
}

void func_98(char* sParam0, var uParam1)
{
	char cVar0[16];
	
	StringCopy(&cVar0, "Gate_Miss", 16);
	if (!func_346(*uParam1, 1))
	{
		if (!iLocal_2047)
		{
			iLocal_2047 = 1;
			func_318(uParam1, 1);
			return;
		}
		else
		{
			iLocal_2047 = 0;
			if (unk_0xB3404E397FF56B3B(sParam0, &cVar0))
			{
				func_61("SPR_FAIL_GATE", 7500, 0);
			}
			return;
		}
	}
	if (func_346(*uParam1, 1))
	{
		if (!func_346(*uParam1, 2))
		{
			if (!iLocal_2047)
			{
				iLocal_2047 = 1;
				func_318(uParam1, 2);
				return;
			}
			else
			{
				iLocal_2047 = 0;
				if (unk_0xB3404E397FF56B3B(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (func_346(*uParam1, 2))
	{
		if (!func_346(*uParam1, 4))
		{
			if (!iLocal_2047)
			{
				iLocal_2047 = 1;
				func_318(uParam1, 4);
				return;
			}
			else
			{
				iLocal_2047 = 0;
				if (unk_0xB3404E397FF56B3B(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (func_346(*uParam1, 4))
	{
		if (!func_346(*uParam1, 8))
		{
			if (!iLocal_2047)
			{
				iLocal_2047 = 1;
				func_318(uParam1, 8);
				return;
			}
			else
			{
				iLocal_2047 = 0;
				if (unk_0xB3404E397FF56B3B(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (func_346(*uParam1, 8))
	{
		if (!func_346(*uParam1, 16))
		{
			if (!iLocal_2047)
			{
				iLocal_2047 = 1;
				func_318(uParam1, 16);
				return;
			}
			else
			{
				iLocal_2047 = 0;
				if (unk_0xB3404E397FF56B3B(sParam0, &cVar0))
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
	
	if (unk_0x7A6C051038031EFA(iParam0, 0))
	{
		return 0;
	}
	unk_0x907B49D8EE914AED(iParam0, &uVar0, &Var3, &Var6, &uVar9);
	if (unk_0x229F35E7CDDBF757(Var6.f_2) > 0.342f)
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
	unk_0x907B49D8EE914AED(iParam1, &Var12, &Var6, &Var9, &Var3);
	Var15 = { Var0 - Var3 };
	fVar18 = unk_0x229F35E7CDDBF757(func_95(Var15, Var12));
	fVar19 = unk_0x229F35E7CDDBF757(func_95(Var15, Var9));
	fVar20 = unk_0x229F35E7CDDBF757(func_95(Var15, Var6));
	fVar21 = ((fVar19 * fVar19) + (fVar20 * fVar20));
	if (fVar18 > 6.5f)
	{
		return 17;
	}
	else
	{
		if (fVar21 > 900f)
		{
			if (iParam1 == unk_0x0031992CA618A445())
			{
				func_185(&uLocal_2319, 0);
			}
			return 17;
		}
		if (fVar21 > 110f)
		{
			if (iParam1 == unk_0x0031992CA618A445())
			{
				func_185(&uLocal_2319, 0);
			}
			unk_0x18F1BFAF88AC511B(-1, sLocal_2360, "HUD_MINI_GAME_SOUNDSET", 1);
			return 2;
		}
		else
		{
			if (iParam1 == unk_0x0031992CA618A445())
			{
				func_185(&uLocal_2319, 0);
			}
			unk_0x18F1BFAF88AC511B(-1, sLocal_2360, "HUD_MINI_GAME_SOUNDSET", 1);
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
			if (!unk_0x7A6C051038031EFA(uParam0->f_358[iVar1 /*189*/].f_8, 0) && !unk_0x7A6C051038031EFA(Var2.f_8, 0))
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
	if (unk_0x7A6C051038031EFA(iParam0, 0))
	{
		return -1f;
	}
	return unk_0x1410333E912D4EC6(unk_0xF177E0DA126D71C8(iParam0, 1), Param1, iParam4);
}

void func_103(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_62(*iParam1, iParam2))
	{
		return;
	}
	if (!bParam3)
	{
		func_287(sParam0, -1);
	}
	else
	{
		func_104(sParam0);
	}
	func_60(iParam1, iParam2);
}

void func_104(char* sParam0)
{
	unk_0x5FFD0DFFE53FB210(sParam0);
	unk_0xF3AF8AF4E207A0FD(0, 1, 1, -1);
}

int func_105(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	switch (uParam1->f_23)
	{
		case 0:
			func_166(uParam0);
			func_237();
			func_247(&(Local_51.f_119), 0, 0, 1, 1);
			func_246(&(Local_51.f_119), "IB_RETRY", 2, 201, 1, 1, 0);
			func_246(&(Local_51.f_119), "FE_HLP16", 2, 202, 1, 1, 0);
			func_240(1);
			unk_0x1E420F926A7BC4D2("MGSP_FAIL");
			uParam1->f_23 = 1;
			break;
		
		case 1:
			if (func_160(&(Local_51.f_321), &(Local_51.f_327), &(uParam0->f_17), cLocal_2331, sLocal_2332, uParam0, 78))
			{
				iLocal_2462 = 0;
				if (!unk_0x7A6C051038031EFA(uParam0->f_358[0 /*189*/].f_9, 0))
				{
					unk_0xFABEFEE17018AE2A(uParam0->f_358[0 /*189*/].f_9, 4);
				}
				if (func_244("SPR_HELP_DAMG", 0, 0))
				{
					unk_0xEA8C7331F449F129("SPR_HELP_DAMG");
				}
				uParam0->f_1 = 0;
				func_66(&(Local_51.f_321), 1);
				if (*uParam0)
				{
					func_153(0, 0);
					func_152(0, 0);
					func_151();
					if (func_244("SPR_RETR_DES", 0, 0))
					{
						unk_0xEA8C7331F449F129("SPR_RETR_DES");
					}
					func_240(0);
					*uParam0 = 1;
					uParam1->f_23 = 6;
				}
				else
				{
					func_153(0, 0);
					func_152(0, 0);
					func_151();
					func_89(&uLocal_2334, 10f);
					func_240(0);
					*uParam0 = 0;
					uParam1->f_23 = 7;
				}
			}
			break;
		
		case 2:
			func_143(&(Local_51.f_119), 1128792064, 7, 1, 1, 1065353216);
			if (unk_0xD887E21676314450(2, 201))
			{
				func_153(0, 0);
				func_152(0, 0);
				func_151();
				iLocal_2467 = unk_0x6307C3D1D866114A();
				unk_0x18F1BFAF88AC511B(iLocal_2467, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", 1);
				if (func_244("SPR_RETR_DES", 0, 0))
				{
					unk_0xEA8C7331F449F129("SPR_RETR_DES");
				}
				func_240(0);
				*uParam0 = 1;
				uParam1->f_23 = 6;
			}
			else if (unk_0xD887E21676314450(2, 202))
			{
				func_153(0, 0);
				func_152(0, 0);
				func_151();
				iLocal_2467 = unk_0x6307C3D1D866114A();
				unk_0x18F1BFAF88AC511B(iLocal_2467, "Phone_Generic_Key_03", "HUD_MINIGAME_SOUNDSET", 1);
				func_89(&uLocal_2334, 10f);
				func_240(0);
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
				if (unk_0x432757A9E7AAFA96(uParam0->f_358[0 /*189*/].f_9, 0))
				{
					unk_0x94EB0EFC2C10DAF6(unk_0x3D35F9864E4640B1(), 1);
					unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 0, 0);
					func_247(&(Local_51.f_119), 0, 0, 1, 1);
					func_246(&(Local_51.f_119), "SPR_UI_CONT", 2, 201, 1, 1, 0);
					func_246(&(Local_51.f_119), "IB_NO", 2, 202, 1, 1, 0);
				}
			}
			if (bParam2)
			{
				if (unk_0x432757A9E7AAFA96(uParam0->f_358[0 /*189*/].f_9, 0))
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
			if (!unk_0x7A6C051038031EFA(uParam0->f_358[0 /*189*/].f_9, 0))
			{
				unk_0xFABEFEE17018AE2A(uParam0->f_358[0 /*189*/].f_9, 4);
			}
			uParam0->f_1 = 0;
			if (func_5(&uLocal_2334) <= 10f)
			{
				if (bParam2)
				{
					unk_0xBD1C47D856010F09(9);
					unk_0xBD1C47D856010F09(7);
					unk_0xC9621A9AD282CC14(0, 99, 1);
					unk_0xC9621A9AD282CC14(0, 100, 1);
					func_143(&(Local_51.f_119), 1128792064, 1, 0, 1, 1065353216);
					if (unk_0xD887E21676314450(2, 201))
					{
						*uParam0 = 1;
						iLocal_2467 = unk_0x6307C3D1D866114A();
						unk_0x18F1BFAF88AC511B(iLocal_2467, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", 1);
						uParam1->f_23 = 6;
					}
					else if (unk_0xD887E21676314450(2, 202))
					{
						*uParam0 = 0;
						func_89(&uLocal_2334, 10f);
						iLocal_2467 = unk_0x6307C3D1D866114A();
						unk_0x18F1BFAF88AC511B(iLocal_2467, "Phone_Generic_Key_03", "HUD_MINIGAME_SOUNDSET", 1);
						uParam1->f_23 = 6;
					}
				}
			}
			else
			{
				unk_0x27FC4121D73AF604();
				sLocal_2332 = "SPR_RETR_DES";
				func_66(&(Local_51.f_321), 1);
				uParam1->f_23 = 14;
			}
			break;
		
		case 6:
			if (func_342(500))
			{
				unk_0x27FC4121D73AF604();
				unk_0x8C361F37C04084F4(1);
				uParam1->f_23 = 8;
			}
			break;
		
		case 7:
			if (func_3(&(uParam0->f_3)))
			{
				func_4(&(uParam0->f_3));
			}
			if (func_126())
			{
				if (unk_0x5114FCEE2A997B95())
				{
					func_166(uParam0);
					unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 0, 0);
					if (unk_0x76B3C79DE564AFC6(uParam0->f_358[0 /*189*/].f_9))
					{
						unk_0x793D1EBF578BE386(uParam0->f_358[0 /*189*/].f_9, 0f, 0f, 0f);
						unk_0x990879ED64ED4138(uParam0->f_358[0 /*189*/].f_9, unk_0x45411D8FDCCD61EF(uParam0->f_358[0 /*189*/].f_9));
					}
					uParam1->f_23 = 10;
				}
			}
			break;
		
		case 8:
			if (func_124(uParam1, 1))
			{
				if (*uParam0)
				{
					uParam0->f_26 = 8;
				}
				else
				{
					if (bParam2)
					{
						unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 1, 0);
						if (Local_51.f_0 == 0)
						{
							unk_0x94EB0EFC2C10DAF6(unk_0x3D35F9864E4640B1(), 1);
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
					func_122(uParam0, iVar0, 0);
				}
				iVar0++;
			}
			if (bParam2)
			{
				if (!unk_0x7A6C051038031EFA(uParam0->f_358[0 /*189*/].f_9, 0) && uParam0->f_358[0 /*189*/].f_11 != -1)
				{
					func_121(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/], uParam0->f_358[0 /*189*/].f_9, uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/], uParam0->f_358[0 /*189*/].f_11 == 0);
				}
				unk_0x31F42B23A853582E(0f);
				func_11(&uLocal_2458);
				uParam1->f_23 = 11;
			}
			else
			{
				uParam1->f_23 = 13;
			}
			break;
		
		case 10:
			func_153(0, 0);
			func_152(0, 0);
			func_110(uParam1, 1);
			func_9(uParam1, Local_51.f_3, Local_51.f_6, 0f);
			unk_0xC1B1E9A034A63A62(0);
			uParam1->f_23 = 12;
			break;
		
		case 11:
			if (!unk_0x391103C96DB7B6E4() || unk_0x9177A5D78560369F())
			{
				uParam0->f_1 = 1;
				func_11(&uLocal_2458);
				func_108(&(uParam0->f_358[iVar0 /*189*/]), 60f, 0);
				if (func_562(500))
				{
					unk_0xA05EC9D85FA401E6();
					if (!unk_0x7A6C051038031EFA(uParam0->f_358[0 /*189*/].f_9, 0))
					{
						unk_0x7E3C622EB2D4D2E2(uParam0->f_358[0 /*189*/].f_8, uParam0->f_358[0 /*189*/].f_9, -1);
					}
					if (bParam2 && Local_51.f_0 == 0)
					{
						func_88(&(uParam0->f_358[0 /*189*/]), 5f);
					}
					uParam1->f_23 = 13;
				}
				return 0;
			}
			else if (unk_0x391103C96DB7B6E4())
			{
				if (uParam0->f_358[0 /*189*/].f_11 < uParam0->f_12)
				{
					if (func_3(&uLocal_2458))
					{
						if (func_107(&uLocal_2458) >= 3f)
						{
							unk_0xA05EC9D85FA401E6();
						}
					}
					else
					{
						func_10(&uLocal_2458);
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
				if (!unk_0x7A6C051038031EFA(uParam1->f_8, 0))
				{
					if (func_106(uParam1))
					{
						func_11(&uLocal_2334);
						sLocal_2332 = "SPR_RETR_STUK";
						uParam1->f_23 = 0;
						return 1;
					}
				}
			}
			return 0;
		
		case 14:
			func_166(uParam0);
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
		if (!unk_0xE33BF8B30BC14A7C(unk_0x3D35F9864E4640B1()))
		{
			if (unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), uParam0->f_9, 0))
			{
				if (unk_0x38A3CC71471EC547(uParam0->f_9) <= 15f)
				{
					if (uParam0->f_22 == joaat("stunt"))
					{
						if (unk_0x1F445308DE0FA3E1(uParam0->f_9) < 3f || unk_0x79B378EDDA36AA08(uParam0->f_9))
						{
							if (unk_0x95E4E33CFB8D32BE(uParam0->f_9) && unk_0x1F445308DE0FA3E1(uParam0->f_9) < 1f)
							{
								return 1;
							}
							if (unk_0xDECC749CB8B5AAB6(uParam0->f_9, 0, 1000))
							{
								return 1;
							}
							if (unk_0xDECC749CB8B5AAB6(uParam0->f_9, 1, 1000))
							{
								return 1;
							}
							if (unk_0xDECC749CB8B5AAB6(uParam0->f_9, 2, 10000))
							{
								return 1;
							}
							if (unk_0xDECC749CB8B5AAB6(uParam0->f_9, 3, 10000))
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
			return (func_6(unk_0x2A3398C6222EB190(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_108(var uParam0, float fParam1, bool bParam2)
{
	struct<3> Var0;
	
	if (!unk_0x7A6C051038031EFA(uParam0->f_9, 0))
	{
		if (unk_0xF9CDF5CA6A1D6756(uParam0->f_22))
		{
			Var0 = { unk_0xC82AF3CAB48E70F0(uParam0->f_9, 2) };
			func_109(uParam0->f_9, fParam1, bParam2, Var0.f_0, 0);
		}
	}
}

void func_109(int iParam0, float fParam1, bool bParam2, float fParam3, float fParam4)
{
	struct<3> Var0;
	bool bVar3;
	float fVar4;
	
	unk_0xC9621A9AD282CC14(0, 75, 1);
	if (unk_0x7A6C051038031EFA(iParam0, 0))
	{
		return;
	}
	if (unk_0x38A3CC71471EC547(iParam0) < fParam1)
	{
		unk_0x5EF58B2B49A4503B(iParam0, fParam1);
	}
	Var0 = { unk_0xC82AF3CAB48E70F0(iParam0, 2) };
	bVar3 = false;
	if (bParam2)
	{
		fVar4 = (unk_0xCD70DA50CCD55658() * 45f);
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
		unk_0xB7E3C36A3BE003B5(iParam0, Var0, 2, 1);
	}
}

int func_110(var uParam0, bool bParam1)
{
	char cVar0[16];
	
	if (bParam1)
	{
		if (unk_0x76B3C79DE564AFC6(uParam0->f_9))
		{
			if (!unk_0x7A6C051038031EFA(uParam0->f_9, 0) || !unk_0x432757A9E7AAFA96(uParam0->f_9, 0))
			{
				if (unk_0xA32DC7E16AD1DFB7(uParam0->f_8, uParam0->f_9, 0))
				{
					unk_0x3000ECF14A659126(uParam0->f_8);
					unk_0x1581691D748490F3(uParam0->f_9, 1, 1);
					unk_0xE9F8539D5AF6B052(&(uParam0->f_9));
				}
			}
			else
			{
				if (unk_0xA32DC7E16AD1DFB7(uParam0->f_8, uParam0->f_9, 0))
				{
					unk_0x0A69FBBF51E1A08F(uParam0->f_8, uParam0->f_16, 1, 0, 0, 1);
				}
				if (unk_0xA32DC7E16AD1DFB7(uParam0->f_8, uParam0->f_9, 0))
				{
				}
				else
				{
					unk_0x1581691D748490F3(uParam0->f_9, 1, 1);
					unk_0xE9F8539D5AF6B052(&(uParam0->f_9));
				}
			}
		}
	}
	if (!unk_0x7A6C051038031EFA(uParam0->f_9, 0))
	{
		unk_0x990879ED64ED4138(uParam0->f_9, 1000);
		unk_0xF858E16CD33AF71B(uParam0->f_9);
		unk_0xCB78392CBBC0CB2F(uParam0->f_9, 1000f);
		unk_0x0A69FBBF51E1A08F(uParam0->f_9, uParam0->f_16, 1, 0, 0, 1);
		unk_0x5082D1A6D078DB20(uParam0->f_9, uParam0->f_19);
		unk_0x24B72A49849215AE(uParam0->f_9, 1084227584);
	}
	else
	{
		if (uParam0->f_22 == 0)
		{
			return 1;
		}
		uParam0->f_9 = unk_0x5129A9193468FF77(joaat("stunt"), uParam0->f_16, uParam0->f_19, 1, 1, 0);
		if (unk_0x7A6C051038031EFA(uParam0->f_9, 0))
		{
			return 0;
		}
		if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
		{
			unk_0xFABEFEE17018AE2A(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), 4);
		}
		unk_0x014C5648BA70BF8B(uParam0->f_9, 1);
		func_111(uParam0->f_9, &(Local_51.f_243), 0, 1);
	}
	unk_0x334E4EAEC907DAE0(uParam0->f_9, 0);
	unk_0x56B418F469976565(uParam0->f_9, 1, 1, 0);
	unk_0x6CDFA9B556069FD7(uParam0->f_9);
	if (!unk_0x7A6C051038031EFA(uParam0->f_8, 0))
	{
		if (!unk_0x26D7BF365BA84F9C(uParam0->f_8, uParam0->f_9))
		{
			unk_0x7E3C622EB2D4D2E2(uParam0->f_8, uParam0->f_9, -1);
		}
	}
	if (!unk_0xCC234795142FC2D2(uParam0->f_9))
	{
		unk_0x1581691D748490F3(uParam0->f_9, 1, 0);
	}
	MemCopy(&cVar0, {*uParam0}, 4);
	StringConCat(&cVar0, "_Veh", 16);
	unk_0x69EA9E9E30F2854F(uParam0->f_9, &cVar0);
	if (uParam0->f_20 <= 3)
	{
		unk_0xA246E5E0483055DD(uParam0->f_9, 0);
		Local_51.f_1 = uParam0->f_9;
	}
	return 1;
}

void func_111(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x432757A9E7AAFA96(iParam0, 0))
	{
		if (unk_0x50B7853132D8438E(&(uParam1->f_1)) != 0)
		{
			unk_0x3F8A1297DC6573A7(iParam0, &(uParam1->f_1));
		}
		if (*uParam1 >= 0 && *uParam1 < unk_0xE10B4E7E4009175A())
		{
			unk_0xD84C2B9A469EBB35(iParam0, *uParam1);
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (unk_0x2A3398C6222EB190(uParam1->f_77, func_120(iVar0 + 1)))
			{
			}
			else
			{
				unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), func_120(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0x2A3398C6222EB190(uParam1->f_77, func_120(iVar1 + 1)))
			{
			}
			else
			{
				unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), func_120(iVar1 + 1));
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			unk_0xDDCE14D69DD34587(iParam0, 0);
			if (unk_0xBE7294CB9B3BEC34(iParam0, 5) != -1)
			{
				unk_0xDDCE14D69DD34587(iParam0, 1);
			}
		}
		if (unk_0x2A3398C6222EB190(uParam1->f_77, 13))
		{
			unk_0xB42601D692EB8047(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xC459B9A3E3C57829(iParam0);
		}
		if (unk_0x2A3398C6222EB190(uParam1->f_77, 12))
		{
			unk_0xFE4330842941D50F(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x4E06F09BF15B5520(iParam0);
		}
		unk_0xBF9154ADAF4F11E1(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0xD6B0D4015CC61FF4(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0x2A3398C6222EB190(uParam1->f_77, 15) || func_119(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_118())
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
		unk_0xDBEB3DBC65F0B19E(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			unk_0x79C5F51FA95DC57C(iParam0, 0);
		}
		else
		{
			unk_0x79C5F51FA95DC57C(iParam0, 0);
			unk_0x79C5F51FA95DC57C(iParam0, uParam1->f_65);
		}
		unk_0xC587296050B2CA93(iParam0, !unk_0x2A3398C6222EB190(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0xFABEFEE17018AE2A(iParam0, uParam1->f_70);
		}
		unk_0x368756789FF0788C(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0xA199088C3081D928(iParam0, 2, unk_0x2A3398C6222EB190(uParam1->f_77, 28));
		unk_0xA199088C3081D928(iParam0, 3, unk_0x2A3398C6222EB190(uParam1->f_77, 29));
		unk_0xA199088C3081D928(iParam0, 0, unk_0x2A3398C6222EB190(uParam1->f_77, 30));
		unk_0xA199088C3081D928(iParam0, 1, unk_0x2A3398C6222EB190(uParam1->f_77, 31));
		unk_0x5028E664ECBD1407(iParam0, unk_0x2A3398C6222EB190(uParam1->f_77, 10));
		if (unk_0xD546CB3F87365B85(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0xE4707C143B24BAB3(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x1B9B48622A4D3FC0(unk_0xE9559A12052415BE(iParam0)))
			{
				if (unk_0x34C854420D02F57B(unk_0xE9559A12052415BE(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_117(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_117(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0x949DE8C96217A79B(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0x2808AF25A6A6B7CE(iParam0, 1);
			}
			else
			{
				unk_0x1C22AE46A9DC4530(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_112(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0x1DBFCF939B3B47D0(uParam1->f_66) && !unk_0x9C4740BA7F0AF553(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0x2A3398C6222EB190(uParam1->f_77, func_120(iVar2 + 1)))
				{
					if (!unk_0x3BE354A1A1BD6623(iParam0, iVar2 + 1))
					{
						unk_0x9B48A5E9A884175D(iParam0, iVar2 + 1, 0);
					}
				}
				else if (unk_0x3BE354A1A1BD6623(iParam0, iVar2 + 1))
				{
					unk_0x9B48A5E9A884175D(iParam0, iVar2 + 1, 1);
				}
				iVar2++;
			}
		}
		if ((unk_0xE9559A12052415BE(iParam0) == joaat("sheava") || unk_0xE9559A12052415BE(iParam0) == joaat("omnis")) || unk_0xE9559A12052415BE(iParam0) == joaat("le7b"))
		{
			if (unk_0xBE7294CB9B3BEC34(iParam0, 0) == -1)
			{
				unk_0x9B48A5E9A884175D(iParam0, 1, 0);
			}
		}
		if (unk_0xF9CDF5CA6A1D6756(uParam1->f_66) && unk_0xE43701C36CAFF1A4(iParam0))
		{
			if (!unk_0x2A3398C6222EB190(uParam1->f_77, 23))
			{
				if (unk_0x2A3398C6222EB190(uParam1->f_77, 22))
				{
					unk_0xC82776FBB5D72B5A(iParam0, 2);
				}
				else
				{
					unk_0xC82776FBB5D72B5A(iParam0, 3);
				}
			}
			else
			{
				unk_0xC82776FBB5D72B5A(iParam0, 4);
			}
		}
		if (unk_0x2A3398C6222EB190(uParam1->f_77, 27))
		{
			unk_0xEE33BB634B0CC618(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0xEE33BB634B0CC618(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_112(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x432757A9E7AAFA96(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x5583DCB5A49F0E53(*iParam0) == 0)
	{
		return 0;
	}
	unk_0x9B0BD13ABD4E15D1(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0xF4E4907109CEF0EC(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0xBE7294CB9B3BEC34(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0xFB84A01F8B3E62E6(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x5A814851114E34FB(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x5A814851114E34FB(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x5A814851114E34FB(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_116(unk_0xE9559A12052415BE(*iParam0), 1) && unk_0xBE7294CB9B3BEC34(*iParam0, 24) != func_115(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x5A814851114E34FB(*iParam0, 24, func_115(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_114(iParam0);
	if (func_113(*iParam0))
	{
		unk_0x9DFCC19370F919F3(*iParam0, 1);
		unk_0x014C5648BA70BF8B(*iParam0, 1);
	}
	return 1;
}

int func_113(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0x76B3C79DE564AFC6(iParam0) && unk_0x432757A9E7AAFA96(iParam0, 0)) && unk_0x5583DCB5A49F0E53(iParam0) > 0)
	{
		unk_0x9B0BD13ABD4E15D1(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0xBE7294CB9B3BEC34(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x961891FDFDEF0C10(iParam0, iVar1, unk_0xBE7294CB9B3BEC34(iParam0, iVar1)), 16);
				iVar2 = unk_0x50B7853132D8438E(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x50B7853132D8438E("MNU_CAGE") || iVar2 == unk_0x50B7853132D8438E("SABRE_CAG"))
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

void func_114(var uParam0)
{
	switch (unk_0xE9559A12052415BE(*uParam0))
	{
		case joaat("starling"):
			if (unk_0xBE7294CB9B3BEC34(*uParam0, 4) == 0)
			{
				unk_0x5A814851114E34FB(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0xFB84A01F8B3E62E6(*uParam0, 13);
			}
			break;
	}
}

int func_115(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0x76B3C79DE564AFC6(iParam0) && unk_0x432757A9E7AAFA96(iParam0, 0))
	{
		switch (unk_0xE9559A12052415BE(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
						break;
					
					case 2:
						return 2;
						break;
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = unk_0x43CF7C22C63E44EA(iParam0, 38);
		iVar1 = unk_0x43CF7C22C63E44EA(iParam0, 24);
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

int func_116(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_13339)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_13340)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_13338)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_13341)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_13343)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_13342)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_17784)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_17786)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_17790)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_17787)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_17794)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_17792)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_17797)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_19649)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_19650)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
	}
	return 0;
}

void func_117(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x5583DCB5A49F0E53(iParam0) > 0)
	{
		unk_0x9B0BD13ABD4E15D1(iParam0, 0);
		iVar0 = unk_0xBE7294CB9B3BEC34(iParam0, 24);
		iVar1 = unk_0xE69CED5522DA627F(iParam0, 24);
		unk_0x61038A1B29CB9EEB(iParam0, uParam1);
		if (unk_0xE9559A12052415BE(iParam0) == joaat("tornado6"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0xFB84A01F8B3E62E6(iParam0, 24);
		}
		else
		{
			unk_0x5A814851114E34FB(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

var func_118()
{
	return unk_0x43456EBBDC27D696(joaat("mpindependence"));
}

int func_119(int iParam0)
{
	int iVar0;
	
	if (unk_0x76B3C79DE564AFC6(iParam0))
	{
		if (unk_0x432757A9E7AAFA96(iParam0, 0))
		{
			if (unk_0x496D18970B708258("MPBitset", 3))
			{
				if (unk_0x8B0523D9EF9595C2(iParam0, "MPBitset"))
				{
					iVar0 = unk_0x9E69E04AC6AD5C49(iParam0, "MPBitset");
				}
				return unk_0x2A3398C6222EB190(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_120(int iParam0)
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

void func_121(struct<3> Param0, int iParam3, struct<3> Param4, bool bParam7)
{
	var uVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	struct<3> Var8;
	float fVar11;
	struct<3> Var12;
	
	if (!unk_0x7A6C051038031EFA(iParam3, 0))
	{
		if (bParam7 && Local_51.f_10 == 0)
		{
			unk_0x0A69FBBF51E1A08F(iParam3, 1705.039f, 3251.13f, 40.0016f, 1, 0, 0, 1);
		}
		Var12 = { unk_0xF177E0DA126D71C8(iParam3, 1) };
		unk_0xE99C878AD7B8CED6(Var12);
		unk_0x6192E81E5C0DCC27(Var12, &fVar11, 0);
		Var5 = { unk_0xF177E0DA126D71C8(iParam3, 1) };
		if (bParam7)
		{
			Var8 = { Param0 - Param4 };
		}
		else
		{
			Var8 = { Param4 - Var5 };
		}
		uVar0 = unk_0x5E9D1531733B27F6(Var8.f_0, Var8.f_1);
		fVar1 = (unk_0x5E9D1531733B27F6(Var8.f_0, Var8.f_2) - 270f);
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
			fVar1 = -(180f - unk_0x229F35E7CDDBF757(fVar1));
		}
		if (fVar1 > 90f)
		{
			fVar1 = (180f - unk_0x229F35E7CDDBF757(fVar1));
		}
		if (unk_0x229F35E7CDDBF757((Var12.f_2 - fVar11)) < 25f && (fVar1 > 15f || fVar1 < -15f))
		{
			Var12.f_2 = (fVar11 + 25f);
			unk_0x0A69FBBF51E1A08F(iParam3, Var12, 1, 0, 0, 1);
		}
		unk_0x1F18D3C78C8C1A11(iParam3, 1);
		Var2 = { unk_0xC82AF3CAB48E70F0(iParam3, 2) };
		Var2.f_0 = fVar1;
		Var2.f_2 = uVar0;
		unk_0xB7E3C36A3BE003B5(iParam3, Var2, 2, 1);
		unk_0x1F18D3C78C8C1A11(iParam3, 0);
		unk_0xFA7F74898E78698C(Var12, unk_0xE9EAE230056F8FA1(iParam3), 500f, 0);
	}
}

void func_122(var uParam0, int iParam1, bool bParam2)
{
	func_123(uParam0, iParam1, (uParam0->f_358[iParam1 /*189*/].f_11 - 1), bParam2);
}

void func_123(var uParam0, int iParam1, int iParam2, bool bParam3)
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
	if (unk_0x7A6C051038031EFA(uParam0->f_358[iParam1 /*189*/].f_8, 0))
	{
		return;
	}
	if (uParam0->f_358[iParam1 /*189*/].f_22 != 0)
	{
		if (unk_0x7A6C051038031EFA(uParam0->f_358[iParam1 /*189*/].f_9, 0))
		{
			return;
		}
	}
	Var0 = { uParam0->f_27[iParam2 + 1 /*10*/] - uParam0->f_27[iParam2 /*10*/] };
	uVar3 = unk_0x5E9D1531733B27F6(Var0.f_0, Var0.f_1);
	fVar4 = 0f;
	if (unk_0x34C854420D02F57B(uParam0->f_358[iParam1 /*189*/].f_22))
	{
		fVar4 = 0f;
	}
	else if (unk_0x2076012573940835(uParam0->f_358[iParam1 /*189*/].f_22))
	{
		fVar4 = 25f;
	}
	else if (unk_0xF9CDF5CA6A1D6756(uParam0->f_358[iParam1 /*189*/].f_22))
	{
		fVar4 = 60f;
	}
	if (bParam3)
	{
	}
	func_9(&(uParam0->f_358[iParam1 /*189*/]), uParam0->f_27[iParam2 /*10*/], uVar3, fVar4);
}

int func_124(var uParam0, bool bParam1)
{
	if (!func_110(uParam0, bParam1) || !func_125(uParam0))
	{
		return 0;
	}
	return 1;
}

int func_125(var uParam0)
{
	char cVar0[16];
	
	if (uParam0->f_21 == 0)
	{
		return 0;
	}
	if (!unk_0x7A6C051038031EFA(uParam0->f_8, 0))
	{
		unk_0x990879ED64ED4138(uParam0->f_8, 1000);
		if (!unk_0x7A6C051038031EFA(uParam0->f_9, 0))
		{
			if (!unk_0x26D7BF365BA84F9C(uParam0->f_8, uParam0->f_9))
			{
				unk_0x7E3C622EB2D4D2E2(uParam0->f_8, uParam0->f_9, -1);
			}
		}
		else
		{
			unk_0x0A69FBBF51E1A08F(uParam0->f_8, uParam0->f_16, 1, 0, 0, 1);
			unk_0x5082D1A6D078DB20(uParam0->f_8, uParam0->f_19);
		}
	}
	else if (!unk_0x7A6C051038031EFA(uParam0->f_9, 0))
	{
		uParam0->f_8 = unk_0x4E2448BB7576232A(uParam0->f_9, uParam0->f_20, uParam0->f_21, -1, 1, 1);
		if (unk_0x7A6C051038031EFA(uParam0->f_8, 0))
		{
			return 0;
		}
	}
	else
	{
		uParam0->f_8 = unk_0x5618B819E5B9C053(uParam0->f_20, uParam0->f_21, uParam0->f_16, uParam0->f_19, 1, 1);
		if (unk_0x7A6C051038031EFA(uParam0->f_8, 0))
		{
			return 0;
		}
	}
	if (uParam0->f_20 > 3)
	{
		if (!unk_0xCC234795142FC2D2(uParam0->f_8))
		{
			unk_0x1581691D748490F3(uParam0->f_8, 1, 0);
		}
		MemCopy(&cVar0, {*uParam0}, 4);
		StringConCat(&cVar0, "_Drv", 16);
		unk_0x2E8F82DEEA1D25B8(uParam0->f_8, &cVar0);
	}
	return 1;
}

int func_126()
{
	if (!unk_0x2A3398C6222EB190(iLocal_43, 0) && !unk_0x2A3398C6222EB190(iLocal_43, 1))
	{
		unk_0xC1B1E9A034A63A62(0);
		func_153(1, 0);
	}
	if (!unk_0x136B42AA35650CB6())
	{
		unk_0x27FC4121D73AF604();
	}
	unk_0xC9621A9AD282CC14(2, 199, 1);
	unk_0xC9621A9AD282CC14(0, 59, 1);
	unk_0xC9621A9AD282CC14(0, 60, 1);
	unk_0xC9621A9AD282CC14(0, 37, 1);
	unk_0xC9621A9AD282CC14(0, 25, 1);
	unk_0x06F99F9713C9E32C();
	if (IntToFloat(unk_0x83666F9FB8FEBD4B()) > (1500f * 0.2f))
	{
		if (!unk_0x2A3398C6222EB190(iLocal_43, 1))
		{
			func_152(1, 0);
			unk_0x5AE11BC36633DE4E(0);
		}
		else if (IntToFloat(unk_0xC9D9444186B5A374()) > (1500f * 0.075f) || unk_0x5114FCEE2A997B95())
		{
			if (!unk_0x5114FCEE2A997B95())
			{
				if (!unk_0x229840854A80E0D9())
				{
					unk_0x8351F65655759E0C(1500);
				}
			}
			else if (iLocal_44 == 0)
			{
				iLocal_44 = unk_0x31CD6E9F83C10233() + 1000;
				if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
				{
					unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 0, 0);
				}
				func_142(0, 2, 1);
				func_134(1, 1, 1, 0);
				func_128(1);
				unk_0x63952BAA4328B246(0);
				unk_0x32C32CC28457089C(0);
				unk_0x8C361F37C04084F4(1);
				unk_0x27FC4121D73AF604();
				if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
				{
					unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 0, 0);
				}
				func_153(0, 0);
				func_127(0);
			}
			else if (unk_0x31CD6E9F83C10233() < iLocal_44)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_127(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!unk_0x2A3398C6222EB190(iLocal_43, 3))
			{
				unk_0x5BF9AA7BD6376F82(1);
				unk_0xCD7E92DE2BFA0B0D(&iLocal_43, 3);
			}
		}
		else if (unk_0x2A3398C6222EB190(iLocal_43, 3))
		{
			unk_0x5BF9AA7BD6376F82(0);
			unk_0xD804ACF2A7171150(&iLocal_43, 3);
		}
	}
}

void func_128(bool bParam0)
{
	if (bParam0)
	{
		func_133();
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
		{
			unk_0xCD7E92DE2BFA0B0D(&Global_2314, 16);
		}
		Global_14443.f_1 = 1;
		if (func_132(0))
		{
			func_129(0);
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

void func_129(int iParam0)
{
	if (Global_14604)
	{
		func_131(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_2314, 16);
	}
	if (unk_0xCAD6D8C85D0F329B())
	{
		unk_0x683F0CB6CA4C99D0(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_2313, 30);
	}
	else
	{
		unk_0xD804ACF2A7171150(&Global_2313, 30);
	}
	if (!func_130())
	{
		Global_14443.f_1 = 3;
	}
}

int func_130()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_131(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_132(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x4EBACDA5E9A0E784(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x99C19CAA37B6F6D3(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x99C19CAA37B6F6D3(Global_14380);
		}
		else
		{
			unk_0x99C19CAA37B6F6D3(Global_14371);
		}
	}
}

int func_132(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x2A3398C6222EB190(Global_2313, 14))
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
	if (unk_0x7832F791572D5809(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_133()
{
	if (Global_14443.f_1 == 9 || Global_14443.f_1 == 10)
	{
		Global_15798 = 0;
		Global_15794 = 1;
	}
}

void func_134(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x19118E4FD77F8B01(unk_0x3D35F9864E4640B1());
		unk_0x49499782410B8CE3(unk_0x3D35F9864E4640B1(), 1);
		unk_0x064117622D142B20(unk_0x3D35F9864E4640B1(), 1);
		func_141(1);
		unk_0x94C26352258B001C();
		unk_0x7E403E6B20B0F65E();
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xCAD6D8C85D0F329B())
			{
				unk_0x683F0CB6CA4C99D0(0);
			}
			if (!func_130())
			{
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_140(1, iParam3, iParam2, 0);
		Global_55860 = 1;
		Global_68168 = 1;
		Global_70783 = 1;
	}
	else
	{
		func_141(0);
		unk_0xA82338775E53641E();
		Global_55860 = 0;
		if (bParam1)
		{
			unk_0x074C8061E9FD0B90();
		}
		unk_0x49499782410B8CE3(unk_0x3D35F9864E4640B1(), 0);
		unk_0x064117622D142B20(unk_0x3D35F9864E4640B1(), 0);
		func_140(0, iParam3, iParam2, 0);
		if (unk_0x27CA09C6DFAB1E79())
		{
			if (((!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()) && !func_138(unk_0x3D35F9864E4640B1())) && !func_136(unk_0x3D35F9864E4640B1(), 0)) && !func_135())
			{
				unk_0xC20B73867395D06D(unk_0x0031992CA618A445(), 0);
			}
		}
		else if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()) && !func_138(unk_0x3D35F9864E4640B1()))
		{
			unk_0xC20B73867395D06D(unk_0x0031992CA618A445(), 0);
		}
		Global_70783 = 0;
	}
}

bool func_135()
{
	return unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_39.f_18, 14);
}

bool func_136(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x3D35F9864E4640B1())
	{
		bVar0 = func_137(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1593076[iParam0 /*647*/].f_204 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x80BA8E3CC61A8625(iParam0))
		{
			bVar0 = unk_0xB5E2A107E006EC7A(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_137(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_21();
	}
	if (Global_1312833[iVar1] == 1)
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

int func_138(int iParam0)
{
	if (func_136(iParam0, 0))
	{
		return 1;
	}
	if (func_139())
	{
		if (iParam0 == unk_0x3D35F9864E4640B1())
		{
			return 1;
		}
	}
	if (unk_0x2A3398C6222EB190(Global_2422142[iParam0 /*399*/].f_204, 2))
	{
		return 1;
	}
	return 0;
}

bool func_139()
{
	return unk_0x2A3398C6222EB190(Global_2359302, 3);
}

int func_140(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x20551D6D924ED04B())
	{
		if (unk_0xF1246FB9A9397227() != iParam0 && uParam2)
		{
			unk_0xC17B06EB7D180D8E(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_141(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_2313, 13);
	}
	else
	{
		unk_0xD804ACF2A7171150(&Global_2313, 13);
	}
}

void func_142(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 1)
	{
		unk_0xCD7E92DE2BFA0B0D(&iLocal_43, 2);
		if (!unk_0x27CA09C6DFAB1E79())
		{
			if (iParam1 == 1)
			{
				unk_0x8DF1001322B980EF(0.2f);
			}
			else
			{
				unk_0x8DF1001322B980EF(0.075f);
			}
		}
	}
	else
	{
		if (unk_0x2A3398C6222EB190(iLocal_43, 2) || iParam2)
		{
			if (!unk_0x27CA09C6DFAB1E79())
			{
				unk_0x8DF1001322B980EF(1f);
			}
		}
		unk_0xD804ACF2A7171150(&iLocal_43, 2);
	}
}

void func_143(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
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
	
	if (((unk_0x229840854A80E0D9() || unk_0x4413A34F0AAF1146()) || unk_0x5114FCEE2A997B95()) || unk_0xC19E9068E7E4F6B0())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_150(uParam0))
	{
		return;
	}
	unk_0x2745EC8E79BD57E0();
	unk_0x38C75B31337B3454(iParam2);
	if (!func_149(uParam0->f_1, 256) || (func_149(uParam0->f_1, 8192) && unk_0xDE25F26B6B16CF7A(2)))
	{
		unk_0xEBD23F68B1A617FC(*uParam0, "SET_CLEAR_SPACE");
		unk_0x90495002CD46BD88(iParam1);
		unk_0x1C703A54AB4B12F6();
		unk_0xEBD23F68B1A617FC(*uParam0, "SET_MAX_WIDTH");
		unk_0x90495002CD46BD88(iParam5);
		unk_0x1C703A54AB4B12F6();
		unk_0xEBD23F68B1A617FC(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x1C703A54AB4B12F6();
		if (unk_0x20551D6D924ED04B())
		{
			unk_0xEBD23F68B1A617FC(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			unk_0xE8240315678FDE8E(func_149(uParam0->f_1, 4096));
			unk_0x1C703A54AB4B12F6();
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
					bVar4 = unk_0xFF512A008EA368FF(2);
					break;
				
				case 2:
					bVar4 = !unk_0xFF512A008EA368FF(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (unk_0xEBD23F68B1A617FC(*uParam0, "SET_DATA_SLOT"))
				{
					unk_0x32F9127910F63DFA(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						uVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						uVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = unk_0x2A3398C6222EB190(uParam0->f_2[iVar6 /*15*/].f_13, iVar7);
						if (!unk_0x2A3398C6222EB190(uParam0->f_2[iVar6 /*15*/].f_12, iVar7))
						{
							uVar3 = unk_0xE344F89A3A395F9C(uVar0, uVar1, bVar2);
						}
						else
						{
							uVar3 = unk_0x295E4023D39A7295(uVar0, uVar1, bVar2);
						}
						if (!unk_0x0BD3CCFB6C6CFA91(uVar3))
						{
							func_148(sVar3);
						}
						iVar7++;
					}
					if (!unk_0x0BD3CCFB6C6CFA91(uParam0->f_2[iVar6 /*15*/]))
					{
						func_147(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0x20551D6D924ED04B())
					{
						if (func_149(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								unk_0xE8240315678FDE8E(true);
								unk_0x32F9127910F63DFA(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								unk_0xE8240315678FDE8E(false);
								unk_0x32F9127910F63DFA(-1);
							}
						}
					}
					unk_0x1C703A54AB4B12F6();
				}
			}
			iVar6++;
		}
		fVar8 = func_146(bParam4, func_146(func_149(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0xEBD23F68B1A617FC(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x90495002CD46BD88(fVar8);
		unk_0x1C703A54AB4B12F6();
		unk_0xEBD23F68B1A617FC(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0x90495002CD46BD88(0f);
		unk_0x90495002CD46BD88(0f);
		unk_0x90495002CD46BD88(0f);
		unk_0x90495002CD46BD88(80f);
		unk_0x1C703A54AB4B12F6();
		func_145(&(uParam0->f_1), 256);
		func_144(&(uParam0->f_1), 128);
	}
	unk_0x4237E72FB80FD332(*uParam0, 255, 255, 255, 0, 0);
}

void func_144(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_145(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_146(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_147(char* sParam0)
{
	unk_0x9BC6C9E77AAC792E(sParam0);
	unk_0xCC5EB3A492FB7D4B();
}

void func_148(var uParam0)
{
	unk_0x8E394933209D820A(uParam0);
}

bool func_149(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_150(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0x77FA56883245AD26(*uParam0))
		{
			func_145(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

void func_151()
{
	iLocal_43 = 0;
	iLocal_44 = 0;
	func_134(0, 1, 1, 0);
	func_128(1);
}

void func_152(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		func_153(0, 0);
		unk_0xF177BD202464664F("DeathFailOut", 0, 0);
		unk_0xCD7E92DE2BFA0B0D(&iLocal_43, 1);
		func_142(1, 2, 0);
		unk_0x2574693E62D7AA45(2);
	}
	else
	{
		if (unk_0x2A3398C6222EB190(iLocal_43, 1) || iParam1)
		{
			unk_0xC84CB7879942C3BA("DeathFailOut");
			func_142(0, 2, 1);
			unk_0x2574693E62D7AA45(0);
		}
		unk_0xD804ACF2A7171150(&iLocal_43, 1);
	}
}

void func_153(int iParam0, int iParam1)
{
	char* sVar0;
	
	switch (func_154())
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
		if (!unk_0x2A3398C6222EB190(iLocal_43, 0) || iParam1)
		{
			unk_0xF177BD202464664F(sVar0, 0, 0);
			unk_0xCD7E92DE2BFA0B0D(&iLocal_43, 0);
			func_142(1, 1, 0);
			unk_0x2574693E62D7AA45(1);
		}
	}
	else
	{
		if (unk_0x2A3398C6222EB190(iLocal_43, 0) || iParam1)
		{
			unk_0xC84CB7879942C3BA(sVar0);
			func_142(0, 1, 1);
			unk_0x2574693E62D7AA45(0);
		}
		unk_0xD804ACF2A7171150(&iLocal_43, 0);
	}
}

int func_154()
{
	func_155();
	return Global_104439.f_2244.f_539.f_4301;
}

void func_155()
{
	int iVar0;
	
	if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()))
	{
		if (func_159(Global_104439.f_2244.f_539.f_4301) != unk_0xE9559A12052415BE(unk_0x0031992CA618A445()))
		{
			iVar0 = func_158(unk_0x0031992CA618A445());
			if (func_157(iVar0) && (!func_156(14) || Global_103390))
			{
				if (Global_104439.f_2244.f_539.f_4301 != iVar0 && func_157(Global_104439.f_2244.f_539.f_4301))
				{
					Global_104439.f_2244.f_539.f_4302 = Global_104439.f_2244.f_539.f_4301;
				}
				Global_104439.f_2244.f_539.f_4303 = iVar0;
				Global_104439.f_2244.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104439.f_2244.f_539.f_4301 != 145)
			{
				Global_104439.f_2244.f_539.f_4303 = Global_104439.f_2244.f_539.f_4301;
			}
			return;
		}
	}
	Global_104439.f_2244.f_539.f_4301 = 145;
}

bool func_156(int iParam0)
{
	return Global_35813 == iParam0;
}

bool func_157(int iParam0)
{
	return iParam0 < 3;
}

int func_158(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x76B3C79DE564AFC6(iParam0))
	{
		iVar1 = unk_0xE9559A12052415BE(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_159(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_159(int iParam0)
{
	if (func_157(iParam0))
	{
		return Global_104439.f_27911[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_160(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, var uParam5, int iParam6)
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			unk_0xFD69BDF108B32E5B("DEATH_SCENE");
			unk_0x18F1BFAF88AC511B(-1, "ScreenFlash", "WastedSounds", 1);
			func_10(&(uParam0->f_1));
			func_151();
			func_165(uParam1, (0.15f * 0.075f), 0.5f);
			unk_0xCF304E352457AD63(1);
			break;
		
		case 1:
			if (func_126() || unk_0x5114FCEE2A997B95())
			{
				*uParam0 = 2;
			}
			if (!func_346(uParam0->f_4, 4))
			{
				if (unk_0x1F1D255CB6501243("OFFMISSION_WASTED", 0, -1))
				{
					unk_0x18F1BFAF88AC511B(-1, "Bed", "WastedSounds", 1);
					func_318(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(unk_0x83666F9FB8FEBD4B()) > (1500f * 0.2f))
			{
				if (!func_346(uParam0->f_4, 2))
				{
					unk_0x18F1BFAF88AC511B(-1, "TextHit", "WastedSounds", 1);
					func_318(&(uParam0->f_4), 2);
				}
				func_162(uParam2, uParam1, sParam3, sParam4, uParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072, 0);
			}
			break;
		
		case 2:
			if (func_162(uParam2, uParam1, sParam3, sParam4, uParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072, 1))
			{
				func_153(0, 1);
				func_152(0, 1);
				func_151();
				if (*uParam5)
				{
					unk_0x84C42B5E51362D55(1);
				}
				else if (!uParam0->f_5)
				{
					func_161(0);
				}
				unk_0xCF304E352457AD63(0);
				unk_0x1DB9F932FA9835B4(0);
				*uParam0 = 3;
			}
			break;
		
		case 3:
			if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
			{
				unk_0x4FE3D138860DAC8B(1);
				func_153(0, 1);
				func_152(0, 1);
				unk_0xB3E27A9E412BBDF8("DEATH_SCENE");
				unk_0xCF304E352457AD63(0);
				return 1;
			}
			break;
		
		case 4:
			unk_0xCF304E352457AD63(0);
			return 1;
			break;
	}
	return 0;
}

void func_161(bool bParam0)
{
	if ((Global_35813 == 9 || Global_35813 == 10) || Global_35813 == 5)
	{
		Global_103088 = bParam0;
		if (bParam0)
		{
		}
	}
	else
	{
		if (bParam0)
		{
		}
		Global_103088 = 0;
	}
}

int func_162(var uParam0, var uParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)
{
	switch (*uParam1)
	{
		case 0:
			if (!unk_0x5114FCEE2A997B95() || unk_0x229840854A80E0D9())
			{
				unk_0x8351F65655759E0C(2500);
				unk_0x5535802AD071DF09();
			}
			if (bParam9)
			{
				unk_0xCF304E352457AD63(1);
			}
			unk_0x8DF1001322B980EF(0.2f);
			if (func_149(iParam5, 4))
			{
				if (unk_0x1F1D255CB6501243("generic_failed", 0, -1))
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
			unk_0xEBD23F68B1A617FC(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			unk_0x9BC6C9E77AAC792E("STRING");
			unk_0xDBB8FCB00B701798(6);
			unk_0x7C8A7ECFBAD2C8C4(sParam2);
			unk_0xCC5EB3A492FB7D4B();
			func_147(sParam3);
			unk_0x32F9127910F63DFA(100);
			unk_0xE8240315678FDE8E(true);
			unk_0xF55F467DF47A6BB8();
			if (func_149(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0xEBD23F68B1A617FC(*uParam0, "TRANSITION_UP");
					unk_0x90495002CD46BD88(uParam1->f_134);
					unk_0x1C703A54AB4B12F6();
					uParam1->f_136 = 1;
				}
			}
			if (!func_149(iParam5, 1))
			{
				unk_0xC0E1B08F53665F80(0);
			}
			func_247(&(uParam1->f_10), 0, 1, 1, 1);
			func_246(&(uParam1->f_10), "IB_RETRY", 2, 201, 1, 1, 0);
			func_246(&(uParam1->f_10), "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_149(iParam5, 4))
			{
				unk_0x18F1BFAF88AC511B(-1, "ScreenFlash", "MissionFailedSounds", 1);
			}
			if (func_149(iParam5, 8))
			{
				switch (func_154())
				{
					case 0:
						unk_0xF177BD202464664F("MinigameEndMichael", 500, 0);
						break;
					
					case 1:
						unk_0xF177BD202464664F("MinigameEndFranklin", 500, 0);
						break;
					
					case 2:
						unk_0xF177BD202464664F("MinigameEndTrevor", 500, 0);
						break;
					}
			}
			if (!func_3(&(uParam1->f_1)))
			{
				func_347(&(uParam1->f_1));
			}
			if (func_149(iParam5, 2))
			{
				if (!func_3(&(uParam1->f_4)))
				{
					func_347(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		
		case 2:
			unk_0x2745EC8E79BD57E0();
			if (func_149(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0xEBD23F68B1A617FC(*uParam0, "TRANSITION_UP");
					unk_0x90495002CD46BD88(uParam1->f_134);
					unk_0x1C703A54AB4B12F6();
					uParam1->f_136 = 1;
				}
			}
			unk_0x38C75B31337B3454(iParam6);
			func_164(uParam0, 0, 0);
			if (!func_149(iParam5, 16) && (func_5(&(uParam1->f_1)) >= uParam1->f_135 || unk_0x5114FCEE2A997B95()))
			{
				func_143(&(uParam1->f_10), 1128792064, iParam6, bParam7, 1, 1065353216);
				unk_0xB540BA8B3C93460F();
				if (unk_0xBF946CEEECD8C935(2, 201))
				{
					uParam1->f_138 = 1;
					unk_0x18F1BFAF88AC511B(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_149(iParam5, 1))
					{
						unk_0x654A781ED6F7372B(0);
					}
					func_163(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
				else if (unk_0xBF946CEEECD8C935(2, 202))
				{
					uParam1->f_138 = 0;
					unk_0x18F1BFAF88AC511B(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_149(iParam5, 1))
					{
						unk_0x654A781ED6F7372B(0);
					}
					func_163(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			if (func_149(iParam5, 2))
			{
				if (func_5(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_138 = 0;
					unk_0x18F1BFAF88AC511B(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_149(iParam5, 1))
					{
						unk_0x654A781ED6F7372B(0);
					}
					func_163(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		
		case 3:
			func_164(uParam0, 0, 0);
			unk_0x8DF1001322B980EF(1f);
			if (uParam1->f_138 || !((unk_0xB3404E397FF56B3B("stunt_plane_races", unk_0x49CAADAD1ABAB70A()) || unk_0xB3404E397FF56B3B("pilot_school", unk_0x49CAADAD1ABAB70A())) || (unk_0xB3404E397FF56B3B("bj", unk_0x49CAADAD1ABAB70A()) && unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))))
			{
				unk_0x18D7C8000EDEAAB4(2500);
			}
			if (func_149(iParam5, 64) && uParam1->f_138)
			{
				unk_0x8351F65655759E0C(500);
			}
			func_11(&(uParam1->f_4));
			if (bParam9)
			{
				unk_0xCF304E352457AD63(0);
			}
			*uParam1 = 4;
			break;
		
		case 4:
			if (func_5(&(uParam1->f_4)) <= 0.1f)
			{
				func_164(uParam0, 0, 0);
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

void func_163(var uParam0)
{
	if (*uParam0 != 0)
	{
		unk_0x7F165E259CFAC8B8(uParam0);
		*uParam0 = 0;
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
}

int func_164(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_3(&(uParam0->f_2)))
	{
		func_11(&(uParam0->f_2));
	}
	unk_0xBD1C47D856010F09(14);
	if (!bParam2)
	{
		unk_0x4237E72FB80FD332(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		unk_0x4237E72FB80FD332(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (unk_0x9148803485DEDF45(2, 201))
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

void func_165(var uParam0, float fParam1, float fParam2)
{
	if (func_3(&(uParam0->f_1)))
	{
		func_4(&(uParam0->f_1));
	}
	if (func_3(&(uParam0->f_4)))
	{
		func_4(&(uParam0->f_4));
	}
	func_163(&(uParam0->f_10));
	uParam0->f_134 = fParam1;
	uParam0->f_135 = fParam2;
	uParam0->f_137 = 1;
	uParam0->f_136 = 0;
	*uParam0 = 0;
}

void func_166(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		func_78(uParam0, iVar0);
		iVar0++;
	}
}

void func_167(int iParam0, bool bParam1)
{
	switch (iLocal_2046)
	{
		case 0:
			func_25();
			func_184();
			func_180();
			iLocal_2046 = 1;
			break;
		
		case 1:
			if (func_179())
			{
				iLocal_2046 = 2;
			}
			break;
		
		case 2:
			func_168(iParam0);
			break;
		
		case 3:
			if (bParam1)
			{
				iLocal_2046 = 0;
			}
			break;
	}
}

void func_168(int iParam0)
{
	switch (Local_51.f_10)
	{
		case 3:
			func_178(iParam0);
			func_177(iParam0);
			break;
		
		case 0:
			func_176(iParam0);
			func_175(iParam0);
			break;
		
		case 1:
			func_174(iParam0);
			func_172(iParam0);
			break;
		
		case 2:
			func_171(iParam0);
			func_170(iParam0);
			break;
		
		case 4:
			func_169(iParam0);
			break;
	}
}

void func_169(int iParam0)
{
	if (iParam0 == 5)
	{
		if (!func_346(uLocal_2137, 1))
		{
			func_318(&uLocal_2137, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!func_346(uLocal_2137, 2))
		{
			func_318(&uLocal_2137, 2);
		}
	}
}

void func_170(int iParam0)
{
	if (iParam0 >= 4)
	{
		if (!unk_0x76B3C79DE564AFC6(uLocal_2115[0]) && !func_346(uLocal_2127, 1))
		{
			uLocal_2115[0] = unk_0x5129A9193468FF77(joaat("hauler"), -449.6041f, -2271.693f, 6.6086f, 267.5199f, 1, 1, 0);
			uLocal_2115[1] = unk_0x5129A9193468FF77(joaat("tanker"), -449.6041f, -2271.693f, 6.6086f, 267.5199f, 1, 1, 0);
			unk_0xB2EE2140E86F2DDC(uLocal_2115[0], uLocal_2115[1], 1065353216);
			uLocal_2121[0] = unk_0x4E2448BB7576232A(uLocal_2115[0], 4, joaat("s_m_m_dockwork_01"), -1, 1, 1);
			func_318(&uLocal_2127, 1);
		}
		if (unk_0x44731FF13F4F33EF("SPR_Fluff_01"))
		{
			if (!unk_0x7A6C051038031EFA(uLocal_2115[0], 0) && !unk_0x7A6C051038031EFA(uLocal_2121[0], 0))
			{
				if (unk_0xF57D21B49780A7A8(uLocal_2121[0], -235832601) == 1)
				{
				}
				else
				{
					unk_0x9EE30C20270C9443(uLocal_2121[0], uLocal_2115[0], "SPR_Fluff_01", 786469, 0, 8, -1, unk_0xDDBBF868DD242CCE(uLocal_2115[0]), 0, 1073741824);
				}
			}
		}
	}
}

void func_171(int iParam0)
{
	if (iParam0 == 4)
	{
		if (!func_346(uLocal_2137, 1))
		{
			func_318(&uLocal_2137, 1);
		}
	}
	if (iParam0 == 8)
	{
		if (!func_346(uLocal_2137, 2))
		{
			func_318(&uLocal_2137, 2);
		}
	}
}

void func_172(int iParam0)
{
	if (iParam0 >= 1)
	{
		if (!unk_0x76B3C79DE564AFC6(uLocal_2115[0]))
		{
			if (!func_346(uLocal_2127, 1))
			{
				if (func_173(&iLocal_2109))
				{
					uLocal_2115[0] = unk_0x5129A9193468FF77(joaat("sanchez"), -2586.901f, 386.4225f, 208.0505f, 349.0836f, 1, 1, 0);
					func_318(&uLocal_2127, 1);
				}
			}
		}
		if (unk_0x76B3C79DE564AFC6(uLocal_2115[0]))
		{
			if (!unk_0x76B3C79DE564AFC6(uLocal_2121[0]))
			{
				if (!func_346(uLocal_2127, 2))
				{
					uLocal_2121[0] = unk_0x4E2448BB7576232A(uLocal_2115[0], 4, joaat("a_m_y_motox_01"), -1, 1, 1);
					func_318(&uLocal_2127, 2);
				}
			}
		}
		if (!unk_0x76B3C79DE564AFC6(uLocal_2115[0]) && !unk_0x76B3C79DE564AFC6(uLocal_2121[0]))
		{
			if (!unk_0x7A6C051038031EFA(uLocal_2115[0], 0) && !unk_0x7A6C051038031EFA(uLocal_2121[0], 0))
			{
				if (!unk_0xF041E50CF58AF6F9(uLocal_2115[0], -2530.873f, 608.701f, 238.9111f, 3f, 3f, 3f, 0, 1, 0))
				{
					if (unk_0xF57D21B49780A7A8(uLocal_2121[0], -1817882002) == 1)
					{
					}
					else
					{
						unk_0x9EA0A7060EF3D099(uLocal_2121[0], uLocal_2115[0], -2530.873f, 608.701f, 238.9111f, unk_0xDDBBF868DD242CCE(uLocal_2115[0]), 0, 0, 262144, -1f, -1f);
					}
				}
			}
		}
	}
	if (iParam0 >= 1)
	{
		if (!unk_0x76B3C79DE564AFC6(uLocal_2115[1]))
		{
			if (!func_346(uLocal_2128, 1))
			{
				if (func_173(&iLocal_2109))
				{
					uLocal_2115[1] = unk_0x5129A9193468FF77(joaat("sanchez"), -2582.93f, 384.918f, 208.5764f, 336.8248f, 1, 1, 0);
					func_318(&uLocal_2128, 1);
				}
			}
		}
		if (unk_0x76B3C79DE564AFC6(uLocal_2115[1]))
		{
			if (!unk_0x76B3C79DE564AFC6(uLocal_2121[1]))
			{
				if (!func_346(uLocal_2128, 2))
				{
					uLocal_2121[1] = unk_0x4E2448BB7576232A(uLocal_2115[1], 4, joaat("a_m_y_motox_01"), -1, 1, 1);
					func_318(&uLocal_2128, 2);
				}
			}
		}
		if (!unk_0x76B3C79DE564AFC6(uLocal_2115[1]) && !unk_0x76B3C79DE564AFC6(uLocal_2121[1]))
		{
			if (!unk_0x7A6C051038031EFA(uLocal_2115[1], 0) && !unk_0x7A6C051038031EFA(uLocal_2121[1], 0))
			{
				if (!unk_0xF041E50CF58AF6F9(uLocal_2115[1], -2527.712f, 609.6833f, 239.2568f, 3f, 3f, 3f, 0, 1, 0))
				{
					if (unk_0xF57D21B49780A7A8(uLocal_2121[1], -1817882002) == 1)
					{
					}
					else
					{
						unk_0x9EA0A7060EF3D099(uLocal_2121[1], uLocal_2115[1], -2527.712f, 609.6833f, 239.2568f, unk_0xDDBBF868DD242CCE(uLocal_2115[1]), 0, 0, 262144, -1f, -1f);
					}
				}
			}
		}
	}
}

int func_173(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] != 0)
		{
			if (!unk_0x772F801619C83779((*iParam0)[iVar0]))
			{
				if (!unk_0x772F801619C83779((*iParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_174(int iParam0)
{
	if (iParam0 == 9)
	{
		if (!func_346(uLocal_2137, 1))
		{
			func_318(&uLocal_2137, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!func_346(uLocal_2137, 2))
		{
			func_318(&uLocal_2137, 2);
		}
	}
}

void func_175(int iParam0)
{
	if (iParam0 == 6)
	{
		if (!unk_0x76B3C79DE564AFC6(uLocal_2115[0]) && !func_346(uLocal_2127, 1))
		{
			uLocal_2115[0] = unk_0x5129A9193468FF77(joaat("jetmax"), -1429.102f, 2602.645f, -1.0709f, 85.2614f, 1, 1, 0);
			uLocal_2121[0] = unk_0x4E2448BB7576232A(uLocal_2115[0], 4, joaat("s_m_m_dockwork_01"), -1, 1, 1);
			if (!unk_0x7A6C051038031EFA(uLocal_2115[0], 0) && !unk_0x7A6C051038031EFA(uLocal_2121[0], 0))
			{
				if (!unk_0xF041E50CF58AF6F9(uLocal_2115[0], -1552.281f, 2641.609f, -0.8283f, 3f, 3f, 3f, 0, 1, 0))
				{
					if (unk_0xF57D21B49780A7A8(uLocal_2121[0], -1273030092) == 1)
					{
					}
					else
					{
						unk_0x07291D38009EE0D2(uLocal_2121[0], uLocal_2115[0], -1552.281f, 2641.609f, -0.8283f, 4, unk_0xDDBBF868DD242CCE(uLocal_2115[0]), 262144, 3f, -1f, 1);
					}
				}
			}
			func_318(&uLocal_2127, 1);
		}
	}
	else if (iParam0 == 12)
	{
		if (func_346(uLocal_2127, 1))
		{
			if (!unk_0x7A6C051038031EFA(uLocal_2121[0], 0))
			{
				unk_0xA50DE967C5813F23(&(uLocal_2121[0]));
			}
			if (!unk_0x7A6C051038031EFA(uLocal_2115[0], 0))
			{
				unk_0xE9F8539D5AF6B052(&(uLocal_2115[0]));
			}
		}
	}
}

void func_176(int iParam0)
{
	if (iParam0 == 7)
	{
		if (!func_346(uLocal_2137, 1))
		{
			func_318(&uLocal_2137, 1);
		}
	}
	if (iParam0 == 11)
	{
		if (!func_346(uLocal_2137, 2))
		{
			func_318(&uLocal_2137, 2);
		}
	}
}

void func_177(int iParam0)
{
	if (!func_346(uLocal_2127, 1))
	{
		if (iParam0 < 3)
		{
			if (unk_0x4B59C07015859DF4(101, "SPRStuntAF"))
			{
				unk_0xE99C878AD7B8CED6(-943.8105f, -3173.692f, 12.9445f);
				if (!unk_0x76B3C79DE564AFC6(uLocal_2115[0]))
				{
					uLocal_2115[0] = unk_0x5129A9193468FF77(joaat("jet"), -943.8105f, -3173.692f, 12.9445f, 60.537f, 1, 1, 0);
					unk_0x24B72A49849215AE(uLocal_2115[0], 1084227584);
					unk_0x56B418F469976565(uLocal_2115[0], 1, 1, 0);
					if (Local_51.f_0 == 0)
					{
						unk_0x6CDFA9B556069FD7(uLocal_2115[0]);
					}
					uLocal_2121[0] = unk_0x4E2448BB7576232A(uLocal_2115[0], 4, joaat("s_m_m_highsec_01"), -1, 1, 1);
				}
				if (!unk_0x7A6C051038031EFA(uLocal_2115[0], 0))
				{
					if (unk_0xF041E50CF58AF6F9(uLocal_2115[0], -943.8105f, -3173.692f, 12.9445f, 20f, 20f, 20f, 0, 1, 0))
					{
						if (!unk_0x6459D7B9F825DBCF(uLocal_2115[0]))
						{
							unk_0xFC8BF5BFAA9D0B8D(uLocal_2115[0], 101, "SPRStuntAF", 1);
						}
					}
					else if (!unk_0x6459D7B9F825DBCF(uLocal_2115[0]))
					{
						if (!unk_0x7A6C051038031EFA(uLocal_2121[0], 0))
						{
							if (!unk_0xF57D21B49780A7A8(uLocal_2121[0], -1817882002) == 1)
							{
								unk_0x9EA0A7060EF3D099(uLocal_2121[0], uLocal_2115[0], -6793.876f, -557.0385f, 781.0172f, 50f, 0, joaat("jet"), 262144, -1f, -1f);
							}
						}
					}
				}
			}
		}
		else if (!unk_0x7A6C051038031EFA(uLocal_2115[0], 0))
		{
			if (unk_0x6459D7B9F825DBCF(uLocal_2115[0]))
			{
				unk_0x6562DA95A43F027D(uLocal_2115[0]);
			}
			else
			{
				unk_0xE9F8539D5AF6B052(&(uLocal_2115[0]));
				func_318(&uLocal_2127, 1);
			}
		}
	}
	else if (!unk_0x7A6C051038031EFA(uLocal_2115[0], 0))
	{
		unk_0xE99C878AD7B8CED6(unk_0xF177E0DA126D71C8(uLocal_2115[0], 1));
	}
}

void func_178(int iParam0)
{
	if (iParam0 == 6)
	{
		if (!func_346(uLocal_2137, 1))
		{
			func_318(&uLocal_2137, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!func_346(uLocal_2137, 2))
		{
			func_318(&uLocal_2137, 2);
		}
	}
}

int func_179()
{
	switch (Local_51.f_10)
	{
		case 3:
			if (func_173(&iLocal_2109) && unk_0x4B59C07015859DF4(101, "SPRStuntAF"))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 0:
			if (func_173(&iLocal_2109))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (func_173(&iLocal_2109))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_173(&iLocal_2109) && unk_0x44731FF13F4F33EF("SPR_Fluff_01"))
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

void func_180()
{
	switch (Local_51.f_10)
	{
		case 3:
			func_182(&iLocal_2109, joaat("jet"));
			func_182(&iLocal_2109, joaat("s_m_m_highsec_01"));
			unk_0xB1F4C6EA4D59C5D0(101, "SPRStuntAF");
			break;
		
		case 0:
			func_182(&iLocal_2109, joaat("jetmax"));
			func_182(&iLocal_2109, joaat("s_m_m_dockwork_01"));
			break;
		
		case 1:
			func_182(&iLocal_2109, joaat("sanchez"));
			func_182(&iLocal_2109, joaat("a_m_y_motox_01"));
			break;
		
		case 2:
			func_182(&iLocal_2109, joaat("hauler"));
			func_182(&iLocal_2109, joaat("tanker"));
			func_182(&iLocal_2109, joaat("s_m_m_dockwork_01"));
			unk_0x8EC6855B27DBF450("SPR_Fluff_01");
			break;
		
		case 4:
			break;
	}
	func_181(&iLocal_2109);
}

void func_181(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] != 0)
		{
			unk_0xBE91026C1FC72180((*iParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_182(int iParam0, int iParam1)
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
	iVar1 = func_183(iParam0);
	if (iVar1 < 0 || iVar1 >= *iParam0)
	{
		return 0;
	}
	(*iParam0)[iVar1] = iParam1;
	return 1;
}

int func_183(var uParam0)
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

void func_184()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_346(uLocal_2137, iVar0))
		{
			func_344(&uLocal_2137, iVar0);
		}
		iVar0++;
	}
}

void func_185(var uParam0, int iParam1)
{
	func_186(uParam0, iParam1, 0);
}

void func_186(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x27CA09C6DFAB1E79())
	{
		if (unk_0x2A3398C6222EB190(Global_2501777.f_4545, 26))
		{
			return;
		}
	}
	if (unk_0x154C8F16279FF849())
	{
		unk_0x59FA14CE9944B95A(iParam2);
		unk_0xC84CB7879942C3BA("FocusIn");
		unk_0xB3E27A9E412BBDF8("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0xF177BD202464664F("FocusOut", 0, 0);
			unk_0x18F1BFAF88AC511B(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0xC938B5CB1FF90CA1(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x996B09F758C57FBE(sVar0))
	{
		if (!unk_0x27CA09C6DFAB1E79())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x996B09F758C57FBE(uParam0->f_3))
	{
		if (func_187(uParam0->f_3))
		{
			unk_0x8C361F37C04084F4(1);
		}
	}
	if (!unk_0x996B09F758C57FBE(sVar0))
	{
		if (func_187(sVar0))
		{
			unk_0x8C361F37C04084F4(1);
		}
	}
}

bool func_187(char* sParam0)
{
	unk_0x92C5C77953D80467(sParam0);
	return unk_0x602E6661A0F13A13(0);
}

void func_188(var uParam0)
{
	float fVar0;
	
	if (uParam0->f_358[0 /*189*/].f_11 >= (uParam0->f_12 - 2))
	{
		fVar0 = unk_0x2A488C176D52CCA5(uParam0->f_27[(uParam0->f_12 - 2) /*10*/], func_189());
		if (!unk_0x0029E1C070813DB8(uLocal_2359))
		{
			if (unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), func_189()) <= ((fVar0 * 1.5f) * (fVar0 * 1.5f)))
			{
				uLocal_2359 = unk_0x33CE65AA6F4C9162(func_189(), uParam0->f_27[(uParam0->f_12 - 1) /*10*/] - func_189(), 2000f, 12, 127);
			}
		}
		else if (!unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), func_189()) <= ((fVar0 * 2f) * (fVar0 * 2f)))
		{
			func_237();
		}
	}
}

Vector3 func_189()
{
	switch (Local_51.f_10)
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

void func_190(var uParam0)
{
	if (func_219())
	{
		if (!Local_2346.f_0)
		{
			Local_2346.f_0 = 1;
			Local_2346.f_1 = 1;
		}
		else
		{
			Local_2346.f_1 = 0;
		}
	}
	else if (func_218())
	{
		if (!Local_2346.f_1 || func_217() >= 1f)
		{
			if (Local_2346.f_0)
			{
				Local_2346.f_0 = 0;
			}
		}
	}
	if (func_218())
	{
		func_216();
	}
	else
	{
		func_215();
	}
	if (Local_2346.f_0)
	{
		if (!func_214(Local_2346.f_2) && !func_212(Local_2346.f_2))
		{
			func_192(&uLocal_2319, Local_2346.f_2);
		}
		else
		{
			if (unk_0x2A3EA4C0BCED85F2(Local_2346.f_6))
			{
				unk_0x46B35AD2F641A4A3(Local_2346.f_6, 0);
			}
			if (func_212(Local_2346.f_2))
			{
				Local_2346.f_2 = { func_191(uParam0) };
			}
			func_185(&uLocal_2319, 0);
			Local_2346.f_0 = 0;
		}
	}
	else if (unk_0x2A3EA4C0BCED85F2(Local_2346.f_6))
	{
		unk_0x46B35AD2F641A4A3(Local_2346.f_6, 0);
	}
	else
	{
		if (func_212(Local_2346.f_2))
		{
			Local_2346.f_2 = { func_191(uParam0) };
		}
		func_185(&uLocal_2319, 0);
		Local_2346.f_0 = 0;
	}
}

Vector3 func_191(var uParam0)
{
	if (uParam0->f_358[0 /*189*/].f_11 < (Local_51.f_11 - 1))
	{
		return uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/];
	}
	return 0f, 0f, 0f;
}

void func_192(var uParam0, struct<3> Param1)
{
	func_193(uParam0, Param1, 0, 0, 1, 1, 1);
}

void func_193(var uParam0, struct<3> Param1, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
	{
		func_186(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_194(uParam0, Param1, iParam4, iParam5, bParam6, iParam7, bParam8);
}

void func_194(var uParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6, var uParam7, bool bParam8)
{
	int iVar0;
	
	if (uParam0->f_1 && unk_0x154C8F16279FF849())
	{
		if (unk_0x31CD6E9F83C10233() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = uParam4;
	if (unk_0x996B09F758C57FBE(iVar0))
	{
		if (!unk_0x27CA09C6DFAB1E79())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_187(iVar0))
	{
		func_211();
	}
	if (!unk_0x154C8F16279FF849())
	{
		if (func_206(uParam0, bParam6, bParam8, 0))
		{
			func_205(uParam0, Param1, iParam5);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_199(iVar0))
			{
				if ((unk_0x996B09F758C57FBE(uParam0->f_3) && !unk_0x996B09F758C57FBE(iVar0)) && unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
				{
					if ((unk_0xAD2B8127B12C130D(Param1, 1f) && !unk_0x068C69D0643C4B95()) && uParam7)
					{
						if (!func_187(iVar0))
						{
							func_287(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xB3404E397FF56B3B("CMN_HINT", iVar0))
							{
								func_198(1);
							}
						}
					}
				}
			}
		}
		else if (func_199(iVar0))
		{
			if (unk_0x996B09F758C57FBE(uParam0->f_3) && !unk_0x996B09F758C57FBE(iVar0))
			{
				if ((unk_0xAD2B8127B12C130D(Param1, 1f) && !unk_0x068C69D0643C4B95()) && uParam7)
				{
					if (!func_187(iVar0))
					{
						func_287(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (unk_0xB3404E397FF56B3B("CMN_HINT", iVar0))
						{
							func_198(1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!unk_0x996B09F758C57FBE(iVar0))
		{
			if (func_187(iVar0) && unk_0x068C69D0643C4B95())
			{
				unk_0x8C361F37C04084F4(1);
			}
		}
		if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
		{
			if (unk_0x2567AB9A647DE5A7(unk_0x0031992CA618A445()))
			{
				if (unk_0xE2378BA63E191ED9(3) == 3 || unk_0xE2378BA63E191ED9(3) == 4)
				{
					func_186(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x9FA0D3FBA715E011(unk_0x0031992CA618A445()))
			{
				if (unk_0xE2378BA63E191ED9(6) == 3 || unk_0xE2378BA63E191ED9(6) == 4)
				{
					func_186(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xF43A22E8C53B2D1E(unk_0x0031992CA618A445()))
			{
				if (unk_0xE2378BA63E191ED9(4) == 3 || unk_0xE2378BA63E191ED9(4) == 4)
				{
					func_186(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x57C2859D2506D4A1(unk_0x0031992CA618A445()))
			{
				if (unk_0xE2378BA63E191ED9(5) == 3 || unk_0xE2378BA63E191ED9(5) == 4)
				{
					func_186(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x140FF1DD7B3CB531(unk_0x0031992CA618A445()))
			{
				if (unk_0xE2378BA63E191ED9(2) == 3 || unk_0xE2378BA63E191ED9(2) == 4)
				{
					func_186(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x7190CD5D1E49A125() == 3 || unk_0x7190CD5D1E49A125() == 4)
			{
				func_186(uParam0, iVar0, 1);
			}
		}
		if (!func_206(uParam0, bParam6, bParam8, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_197(uParam0))
			{
				func_195(uParam0);
			}
		}
	}
}

void func_195(var uParam0)
{
	if (func_196(unk_0x0031992CA618A445()))
	{
		unk_0xCFA3B07B6CEEF62C(unk_0x0031992CA618A445());
	}
	if (unk_0x154C8F16279FF849())
	{
		unk_0xC938B5CB1FF90CA1(true);
		unk_0x59FA14CE9944B95A(0);
		unk_0xB3E27A9E412BBDF8("HINT_CAM_SCENE");
		unk_0xC84CB7879942C3BA("FocusIn");
		if (uParam0->f_11)
		{
			unk_0xF177BD202464664F("FocusOut", 0, 0);
			unk_0x18F1BFAF88AC511B(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_196(int iParam0)
{
	if (unk_0x76B3C79DE564AFC6(iParam0))
	{
		if (unk_0x036E1D5EA494CEB2(iParam0))
		{
			if (unk_0x432757A9E7AAFA96(unk_0x89C1AD6422029361(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x269F274F1955DE87(iParam0))
		{
			if (!unk_0x8682D8A6269E52C9(unk_0x4849801147A2BA1E(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0xC207EA827E8CD735(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_197(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x31CD6E9F83C10233()
		{
			return 1;
		}
	}
	return 0;
}

int func_198(bool bParam0)
{
	switch (Global_35813)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_104439.f_9910.f_100++;
			}
			return Global_104439.f_9910.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_104439.f_9910.f_101++;
			}
			return Global_104439.f_9910.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_104439.f_9910.f_102++;
			}
			return Global_104439.f_9910.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_199(char* sParam0)
{
	if (!func_200(1, 1, 0))
	{
		if ((!unk_0x0BD3CCFB6C6CFA91(sParam0) && func_187(sParam0)) || func_187("CMN_HINT"))
		{
			unk_0x8C361F37C04084F4(1);
		}
		return 0;
	}
	switch (Global_35813)
	{
		case 0:
		case 3:
			if (func_198(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_198(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_198(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_200(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0x46F4AE18D5506B08(unk_0x3D35F9864E4640B1()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x003E46CBEF6CE07A())
	{
		return 0;
	}
	if (func_132(0))
	{
		return 0;
	}
	if (func_204())
	{
		return 0;
	}
	if (unk_0xFCFC2645B6CF6425())
	{
		return 0;
	}
	if (Global_68165)
	{
		return 0;
	}
	if (unk_0x7832F791572D5809(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_53035)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
		{
			if (unk_0x2567AB9A647DE5A7(unk_0x0031992CA618A445()))
			{
				if (unk_0xE2378BA63E191ED9(3) == 3 || unk_0xE2378BA63E191ED9(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x9FA0D3FBA715E011(unk_0x0031992CA618A445()))
			{
				if (unk_0xE2378BA63E191ED9(6) == 3 || unk_0xE2378BA63E191ED9(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xF43A22E8C53B2D1E(unk_0x0031992CA618A445()))
			{
				if (unk_0xE2378BA63E191ED9(4) == 3 || unk_0xE2378BA63E191ED9(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x57C2859D2506D4A1(unk_0x0031992CA618A445()))
			{
				if (unk_0xE2378BA63E191ED9(5) == 3 || unk_0xE2378BA63E191ED9(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x140FF1DD7B3CB531(unk_0x0031992CA618A445()))
			{
				if (unk_0xE2378BA63E191ED9(2) == 3 || unk_0xE2378BA63E191ED9(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x7190CD5D1E49A125() == 3 || unk_0x7190CD5D1E49A125() == 4)
			{
				return 0;
			}
			if (unk_0xCE65BA0D5E39A5CB())
			{
				return 0;
			}
		}
	}
	if (func_203() || func_202(Global_1641087.f_116067))
	{
		if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
		{
			if (unk_0xCF432047F5AFBA06(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), func_201(unk_0x0031992CA618A445(), 0)) || (unk_0xE9559A12052415BE(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0)) == joaat("apc") && func_201(unk_0x0031992CA618A445(), 0) != -1))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_201(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x8682D8A6269E52C9(iParam0))
	{
		if (unk_0x90219307C9D2728D(iParam0, iParam1))
		{
			iVar0 = unk_0xCFA31F1E461A6BB5(iParam0, iParam1);
			if (unk_0x76B3C79DE564AFC6(iVar0))
			{
				iVar1 = unk_0x09139F011D2AE2D0(unk_0xE9559A12052415BE(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x00E962E9D49FD6C4(iVar0, iVar3, 0))
					{
						if (unk_0x3251C2B06497863C(iVar0, iVar3, 0) == iParam0)
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

bool func_202(int iParam0)
{
	return iParam0 == 51;
}

var func_203()
{
	return Global_2445582.f_13;
}

bool func_204()
{
	return unk_0x31CD6E9F83C10233() <= Global_17290.f_5745 + 100;
}

void func_205(var uParam0, struct<3> Param1, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xC938B5CB1FF90CA1(false);
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
	unk_0x8F2CE47533FA85A1(Param1, -1, iVar0, iVar1, iParam4);
	iVar2 = 2048;
	iVar3 = 3;
	unk_0xC5F8FCBA959CFCF8(unk_0x0031992CA618A445(), Param1, -1, iVar2, iVar3);
	unk_0xF177BD202464664F("FocusIn", 0, 0);
	unk_0xFD69BDF108B32E5B("HINT_CAM_SCENE");
	unk_0x18F1BFAF88AC511B(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x31CD6E9F83C10233();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_206(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x31CD6E9F83C10233() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
				{
					if (func_210(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x31CD6E9F83C10233();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_209(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x31CD6E9F83C10233();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_209(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x31CD6E9F83C10233();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_210(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x31CD6E9F83C10233();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_197(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x31CD6E9F83C10233() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
					{
						if (!func_210(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x31CD6E9F83C10233();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_209(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x31CD6E9F83C10233();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_209(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x31CD6E9F83C10233();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_210(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x31CD6E9F83C10233();
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
				if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
				{
					if (!func_210(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_209(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_209(bParam1, bParam2, bParam3) || unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1) || unk_0xB37AB4AC3AD45AD8(unk_0x0031992CA618A445(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_210(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x31CD6E9F83C10233() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
					{
						if (func_208(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_207(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1) || func_207(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1) || unk_0xB37AB4AC3AD45AD8(unk_0x0031992CA618A445(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_208(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_197(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_200(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_211();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_207(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_200(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		if (!unk_0x70C39849FCDB03D4(unk_0x3D35F9864E4640B1()))
		{
			unk_0xC9621A9AD282CC14(0, 140, 1);
			unk_0xC9621A9AD282CC14(0, 80, 1);
			if (unk_0x0B34E1F8A98046A7(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_208(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_200(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		unk_0xC9621A9AD282CC14(0, 80, 1);
		if (unk_0x13C9F293A578AEF5())
		{
			if (unk_0x0B34E1F8A98046A7(0, 80))
			{
				unk_0xC938B5CB1FF90CA1(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_209(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_200(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		if (!unk_0x70C39849FCDB03D4(unk_0x3D35F9864E4640B1()))
		{
			unk_0xC9621A9AD282CC14(0, 140, 1);
			unk_0xC9621A9AD282CC14(0, 80, 1);
			if (unk_0x59ABF4F2C485FC38(0, 80) && unk_0x31CD6E9F83C10233() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_210(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_200(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		unk_0xC9621A9AD282CC14(0, 80, 1);
		if (unk_0x13C9F293A578AEF5())
		{
			if (unk_0x59ABF4F2C485FC38(0, 80) && unk_0x31CD6E9F83C10233() > Global_116)
			{
				unk_0xC938B5CB1FF90CA1(false);
				return 1;
			}
		}
	}
	return 0;
}

void func_211()
{
	unk_0xCD7E92DE2BFA0B0D(&Global_2314, 4);
}

int func_212(struct<3> Param0)
{
	float fVar0;
	
	fVar0 = unk_0x38A3CC71471EC547(unk_0x0031992CA618A445());
	if (unk_0xB7A628320EFF8E47(Param0, func_213(unk_0x3D35F9864E4640B1())) < (150f + (fVar0 * fVar0)))
	{
		return 1;
	}
	return 0;
}

Vector3 func_213(int iParam0)
{
	return unk_0xF177E0DA126D71C8(unk_0xD33F4BC17EB987E5(iParam0), 0);
}

int func_214(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_215()
{
	Local_2346.f_5 = 0f;
}

void func_216()
{
	Local_2346.f_5 = (Local_2346.f_5 + unk_0xCD70DA50CCD55658());
}

float func_217()
{
	return Local_2346.f_5;
}

bool func_218()
{
	return unk_0xBF946CEEECD8C935(0, 80);
}

bool func_219()
{
	return unk_0x9148803485DEDF45(0, 80);
}

void func_220(struct<3> Param0)
{
	func_185(&uLocal_2319, 0);
	Local_2346.f_2 = { Param0 };
}

void func_221(int iParam0, int iParam1)
{
	Global_92801.f_7 = iParam0;
	Global_92801.f_8 = iParam1;
}

void func_222(int iParam0)
{
	Global_71045 = iParam0;
	Global_71046 = iParam0;
}

int func_223(var uParam0, bool bParam1, bool bParam2)
{
	unk_0x5FFEE0EAFDFD65FA(0);
	switch (iLocal_2045)
	{
		case 0:
			iLocal_529 = 0;
			Local_2311 = { func_189() };
			Local_2314 = { func_236() };
			fLocal_2317 = func_235();
			unk_0x4C4F62CD43971CED(0);
			unk_0x8C361F37C04084F4(1);
			unk_0x27FC4121D73AF604();
			iLocal_2045 = 1;
			break;
		
		case 1:
			if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
			{
				if (func_154() == 0)
				{
					unk_0xF177BD202464664F("MinigameEndMichael", 0, 0);
				}
				else if (func_154() == 1)
				{
					unk_0xF177BD202464664F("MinigameEndFranklin", 0, 0);
				}
				else if (func_154() == 2)
				{
					unk_0xF177BD202464664F("MinigameEndTrevor", 0, 0);
				}
				uLocal_2103 = unk_0x6BE82EFE6EE60BF4(26379945, Local_2311, Local_2314, fLocal_2317, 1, 2);
				unk_0x087893C6FCE21842(1, 0, 3000, 1, 0, 0);
				if (bParam2)
				{
					unk_0xE983D49A61E9F0FF(uLocal_2103, "HAND_SHAKE", 0.07f);
				}
				if (unk_0x432757A9E7AAFA96(uParam0->f_358[0 /*189*/].f_9, 0) && unk_0xF6C6ED9F9C63AEC0(uParam0->f_358[0 /*189*/].f_9))
				{
					unk_0x07291D38009EE0D2(unk_0x0031992CA618A445(), uParam0->f_358[0 /*189*/].f_9, Local_2311.f_0, Local_2311.f_1, (Local_2311.f_2 + 15f), 4, unk_0x38A3CC71471EC547(uParam0->f_358[0 /*189*/].f_9), 262144, 10f, 10f, 1);
				}
				unk_0x52BA2DC698AEF919(uLocal_2103, unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1));
				iLocal_2045 = 2;
			}
			break;
		
		case 2:
			unk_0xAEF31518B1C24BD9(uLocal_2103);
			func_234(uLocal_2103);
			func_10(&uLocal_2099);
			iLocal_2045 = 3;
			break;
		
		case 3:
			if (func_233(&uLocal_2099, fLocal_2318))
			{
				func_10(&uLocal_2099);
				func_234(uLocal_2103);
				iLocal_2045 = 4;
			}
			break;
		
		case 4:
			if (bParam1)
			{
				if (unk_0x4096DB4B0B8A982B(uParam0->f_358[0 /*189*/].f_9) && unk_0xF6C6ED9F9C63AEC0(uParam0->f_358[0 /*189*/].f_9))
				{
					Local_2308 = { unk_0xF177E0DA126D71C8(uParam0->f_358[0 /*189*/].f_9, 1) };
					func_10(&uLocal_2099);
				}
				func_230(uLocal_2103, Local_2308);
			}
			if (func_107(&uLocal_2099) >= 1f)
			{
				iLocal_2045 = 5;
			}
			break;
		
		case 5:
			func_11(&uLocal_2099);
			if (unk_0x2A3EA4C0BCED85F2(uLocal_2102))
			{
				unk_0x46B35AD2F641A4A3(uLocal_2102, 0);
			}
			unk_0xF177BD202464664F("MinigameTransitionIn", 0, 1);
			unk_0xACEAE8DF401C6CEB(uLocal_2103, 0);
			Local_2311 = { unk_0x38DF2609B97769FB(uLocal_2103) };
			Local_2314 = { unk_0x1DD4A2B867676A4E(uLocal_2103, 2) };
			uLocal_2102 = unk_0x6BE82EFE6EE60BF4(26379945, Local_2311.f_0, Local_2311.f_1, (Local_2311.f_2 + 1000f), 90f, Local_2314.f_1, Local_2314.f_2, fLocal_2317, 0, 2);
			unk_0xD0E2527DD961F86C(uLocal_2102, uLocal_2103, 500, 1, 1);
			unk_0x18F1BFAF88AC511B(-1, "QUIT_WHOOSH", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_2045 = 6;
			break;
		
		case 6:
			if (!unk_0x0B7CA263460475D0(uLocal_2102) && !unk_0x0B7CA263460475D0(uLocal_2103))
			{
				if (uParam0->f_358[0 /*189*/].f_13 <= Local_51.f_106[Local_51.f_10])
				{
					unk_0x18F1BFAF88AC511B(-1, "MEDAL_GOLD", "HUD_AWARDS", 1);
				}
				else if (uParam0->f_358[0 /*189*/].f_13 <= (((Local_51.f_106[Local_51.f_10] - Local_51.f_112[Local_51.f_10]) / 2f) + Local_51.f_112[Local_51.f_10]))
				{
					unk_0x18F1BFAF88AC511B(-1, "MEDAL_SILVER", "HUD_AWARDS", 1);
				}
				else if (uParam0->f_358[0 /*189*/].f_13 <= Local_51.f_112[Local_51.f_10])
				{
					unk_0x18F1BFAF88AC511B(-1, "MEDAL_BRONZE", "HUD_AWARDS", 1);
				}
				else
				{
					func_229(1);
				}
				iLocal_2045 = 7;
			}
			break;
		
		case 7:
			if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
			{
				unk_0x742F5A1F59CA4BC0(unk_0x3D35F9864E4640B1());
			}
			func_227(uParam0);
			func_66(&(Local_51.f_321), 1);
			func_11(&uLocal_2099);
			if (unk_0x432757A9E7AAFA96(uParam0->f_358[0 /*189*/].f_9, 0))
			{
				sLocal_2303 = unk_0x5EB500590B7B4F22();
				unk_0xF73BCDB7C058F04E(uParam0->f_358[0 /*189*/].f_9, 0);
			}
			iLocal_2045 = 8;
			break;
		
		case 8:
			if (func_226(uParam0))
			{
				iLocal_2045 = 9;
			}
			break;
		
		case 9:
			unk_0xF177BD202464664F("MinigameTransitionOut", 0, 0);
			func_225(&uLocal_2104);
			func_221(1, 0);
			func_224(uParam0);
			func_16();
			func_221(0, 0);
			iLocal_2045 = 0;
			return 0;
			break;
	}
	func_416(uParam0, 0);
	return 1;
}

int func_224(var uParam0)
{
	if (uParam0->f_358[0 /*189*/].f_13 <= Local_51.f_106[Local_51.f_10])
	{
		unk_0xC8EBA5D7FC75C1C0(&(Local_51.f_24[Local_51.f_10 /*8*/]));
		return unk_0x0164D5E8BC8CD781("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 109, "HUD_MED_UNLKED");
	}
	else if (uParam0->f_358[0 /*189*/].f_13 <= (((Local_51.f_106[Local_51.f_10] - Local_51.f_112[Local_51.f_10]) / 2f) + Local_51.f_112[Local_51.f_10]))
	{
		unk_0xC8EBA5D7FC75C1C0(&(Local_51.f_24[Local_51.f_10 /*8*/]));
		return unk_0x0164D5E8BC8CD781("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 108, "HUD_MED_UNLKED");
	}
	else if (uParam0->f_358[0 /*189*/].f_13 <= Local_51.f_112[Local_51.f_10])
	{
		unk_0xC8EBA5D7FC75C1C0(&(Local_51.f_24[Local_51.f_10 /*8*/]));
		return unk_0x0164D5E8BC8CD781("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 107, "HUD_MED_UNLKED");
	}
	return -1;
}

void func_225(var uParam0)
{
	unk_0x7F165E259CFAC8B8(uParam0);
	*uParam0 = 0;
}

int func_226(var uParam0)
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
	if (!iLocal_2064)
	{
		if (fVar0 > 1f)
		{
			iLocal_2064 = 1;
		}
	}
	if (!iLocal_2065)
	{
		if (fVar0 > 4.25f)
		{
			unk_0xEBD23F68B1A617FC(uParam0->f_17, "TRANSITION_OUT");
			unk_0x90495002CD46BD88(0.5f);
			unk_0x1C703A54AB4B12F6();
			iLocal_2065 = 1;
		}
	}
	unk_0x4237E72FB80FD332(uParam0->f_17, 255, 255, 255, 255, 0);
	if (fVar0 > 5f)
	{
		func_4(&(uParam0->f_17.f_2));
		iLocal_2064 = 0;
		iLocal_2065 = 0;
		return 1;
	}
	return 0;
}

void func_227(var uParam0)
{
	char* sVar0;
	
	sVar0 = func_228(2);
	unk_0xEBD23F68B1A617FC(uParam0->f_17, "RESET_MOVIE");
	unk_0x1C703A54AB4B12F6();
	unk_0xEBD23F68B1A617FC(uParam0->f_17, sVar0);
	unk_0x9BC6C9E77AAC792E("STRING");
	unk_0x7C8A7ECFBAD2C8C4("SPR_UI_PASS");
	unk_0xCC5EB3A492FB7D4B();
	unk_0x9BC6C9E77AAC792E(&(Local_51.f_24[Local_51.f_10 /*8*/]));
	unk_0xCC5EB3A492FB7D4B();
	unk_0x90495002CD46BD88(100f);
	unk_0xE8240315678FDE8E(true);
	unk_0x1C703A54AB4B12F6();
	uParam0->f_17.f_1 = 5000;
	func_4(&(uParam0->f_17.f_2));
	iLocal_2064 = 0;
	iLocal_2065 = 0;
}

char* func_228(int iParam0)
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

void func_229(bool bParam0)
{
	char* sVar0;
	
	unk_0x8EF7C3B8BFF23680(0);
	switch (func_154())
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
	unk_0xE784DA9DBB23459B(sVar0);
}

void func_230(var uParam0, struct<3> Param1)
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
	
	if (!unk_0x2A3EA4C0BCED85F2(uParam0))
	{
		return;
	}
	if (!unk_0x63D9209D70E2F5D5(uParam0))
	{
		return;
	}
	Var1 = { unk_0x1DD4A2B867676A4E(uParam0, 2) };
	Var4 = { unk_0x38DF2609B97769FB(uParam0) };
	Var7 = { func_8(Var1.f_0, Var1.f_1, (Var1.f_2 + 90f)) };
	Var10 = { Param1 - Var4 };
	Var10 = { func_96(Var10) };
	fVar13 = unk_0x3056DED407548E89((Param1.f_2 - Var4.f_2), unk_0x1410333E912D4EC6(Param1, Var4, 0));
	fVar14 = unk_0x5E9D1531733B27F6((Param1.f_0 - Var4.f_0), (Param1.f_1 - Var4.f_1));
	fVar14 = func_232(fVar14, -180f, 180f);
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
	if ((bLocal_2307 && fVar13 > Var1.f_0) || (!bLocal_2307 && fVar13 < Var1.f_0))
	{
		if (fVar0 > 0f)
		{
		}
		else if (fVar0 < 0f)
		{
		}
		fLocal_2304 = (fLocal_2304 * 0.9f);
		Var1.f_0 = func_231(Var1.f_0, fVar13, fLocal_2304);
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
	if ((bLocal_2306 && (Var1.f_2 - fVar14) < 0f) || (!bLocal_2306 && (Var1.f_2 - fVar14) > 0f))
	{
		if (!bLocal_2306 && (Var1.f_2 - fVar14) > 0f)
		{
		}
		else if (bLocal_2306 && (Var1.f_2 - fVar14) < 0f)
		{
		}
		fLocal_2305 = (fLocal_2305 * 0.9f);
		Var1.f_2 = func_231(Var1.f_2, fVar14, fLocal_2305);
	}
	unk_0x2E8AC89F9A70DEC3(uParam0, Var1, 2);
}

float func_231(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

float func_232(float fParam0, float fParam1, float fParam2)
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

int func_233(var uParam0, float fParam1)
{
	if (func_2(uParam0, fParam1))
	{
		func_4(uParam0);
		return 1;
	}
	return 0;
}

void func_234(var uParam0)
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
	
	unk_0x907B49D8EE914AED(unk_0x0031992CA618A445(), &Var0, &uVar18, &uVar18, &Var3);
	Var15 = { unk_0x1DD4A2B867676A4E(uParam0, 2) };
	Var12 = { unk_0x38DF2609B97769FB(uParam0) };
	Var6 = { func_8((Var15.f_0 + 90f), Var15.f_1, Var15.f_2) };
	Var9 = { func_8(Var15.f_0, Var15.f_1, (Var15.f_2 + 90f)) };
	fLocal_2304 = 0.2f;
	fLocal_2305 = 0.5f;
	Var21 = { unk_0x38DF2609B97769FB(uParam0) - Var3 };
	Var24 = { Var3 + FtoV(func_95(Var21, Var0)) * Var0 };
	if (Var24.f_2 > Var12.f_2)
	{
		bLocal_2307 = true;
	}
	else
	{
		bLocal_2307 = false;
	}
	fVar27 = func_95(Var24, Var6);
	fVar28 = func_95(Var24, Var9);
	if (fVar27 < 0f)
	{
		bLocal_2306 = true;
	}
	else
	{
		bLocal_2306 = false;
	}
}

float func_235()
{
	switch (Local_51.f_10)
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

Vector3 func_236()
{
	switch (Local_51.f_10)
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

void func_237()
{
	unk_0xA05EC9D85FA401E6();
	if (unk_0x0029E1C070813DB8(uLocal_2359))
	{
		unk_0xD695CA0F92333FAF(uLocal_2359);
	}
}

void func_238()
{
	unk_0x5535802AD071DF09();
	func_239();
}

void func_239()
{
	Global_17151.f_134 = 1;
}

void func_240(int iParam0)
{
	if (Global_35813 == 9 || Global_35813 == 10)
	{
		Global_103089 = iParam0;
	}
	else
	{
		Global_103089 = 0;
	}
}

void func_241(bool bParam0)
{
	unk_0xC938B5CB1FF90CA1(!bParam0);
}

void func_242()
{
	func_243();
	unk_0xC938B5CB1FF90CA1(true);
}

void func_243()
{
	Local_2346.f_0 = 0;
	Local_2346.f_1 = 0;
	Local_2346.f_2 = { 0f, 0f, 0f };
	Local_2346.f_6 = 0;
	Local_2346.f_5 = 0f;
}

bool func_244(char* sParam0, int iParam1, char* sParam2)
{
	unk_0xDDF591880CC70341(sParam0);
	if (iParam1 == 1)
	{
		unk_0x7C8A7ECFBAD2C8C4(sParam2);
	}
	return unk_0xD140B300704DB2C2();
}

void func_245(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_145(&(uParam0->f_1), 16);
	}
	else
	{
		func_144(&(uParam0->f_1), 16);
	}
}

int func_246(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_2[iVar1 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_247(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0xA429A9A606DF2BC3("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_145(&(uParam0->f_1), 32);
	}
	if (unk_0x77FA56883245AD26(*uParam0))
	{
		func_145(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0xA51E81D5CF49E5C7(*uParam0, 1);
		}
	}
	if (unk_0x20551D6D924ED04B())
	{
		if (bParam3)
		{
			func_145(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_145(&(uParam0->f_1), 8192);
	}
}

void func_248(var uParam0)
{
	func_249(uParam0);
	unk_0xC1B1E9A034A63A62(0);
	func_221(1, 0);
	func_16();
}

void func_249(var uParam0)
{
	func_286(&(uParam0->f_1871));
	func_264(&(uParam0->f_1871.f_741));
	func_250(&(uParam0->f_1871));
}

void func_250(var uParam0)
{
	func_263(&(uParam0->f_316[0 /*2*/]), 254f, 74f, 1);
	func_263(&(uParam0->f_316[1 /*2*/]), (257f + func_262(0.0047f, 1280, 1)), 127f, 1);
	func_263(&(uParam0->f_316[2 /*2*/]), (257f + func_262(0.0047f, 1280, 1)), 297f, 1);
	func_263(&(uParam0->f_316[3 /*2*/]), (257f + func_262(0.0047f, 1280, 1)), 324f, 1);
	func_263(&(uParam0->f_316[4 /*2*/]), (257f + func_262(0.0047f, 1280, 1)), 351f, 1);
	func_263(&(uParam0->f_316[5 /*2*/]), (257f + func_262(0.0047f, 1280, 1)), 378f, 1);
	func_263(&(uParam0->f_316[6 /*2*/]), (257f + func_262(0.0047f, 1280, 1)), 405f, 1);
	func_263(&(uParam0->f_316[11 /*2*/]), 257f, 297f, 1);
	func_263(&(uParam0->f_316[12 /*2*/]), 257f, 324f, 1);
	func_263(&(uParam0->f_316[13 /*2*/]), 257f, 351f, 1);
	func_263(&(uParam0->f_316[14 /*2*/]), 257f, 378f, 1);
	func_263(&(uParam0->f_316[15 /*2*/]), 257f, 405f, 1);
	func_263(&(uParam0->f_316[18 /*2*/]), 298f, 567f, 1);
	func_263(&(uParam0->f_316[17 /*2*/]), 384f, 567f, 1);
	func_263(&(uParam0->f_316[16 /*2*/]), 470f, 567f, 1);
	func_259(uParam0[0 /*9*/], 208f, 55f, 864f, 570f, 1);
	func_258(uParam0[0 /*9*/], 0, 0, 0, 255);
	func_259(uParam0[2 /*9*/], 384f, 224f, 256f, 256f, 0);
	func_258(uParam0[2 /*9*/], 255, 255, 255, 255);
	func_259(uParam0[3 /*9*/], 495f, 306f, 32f, 32f, 0);
	func_258(uParam0[3 /*9*/], 255, 255, 255, 255);
	func_259(uParam0[6 /*9*/], 258.5f, 482.5f, 80f, 80f, 1);
	func_258(uParam0[6 /*9*/], 255, 255, 255, 255);
	func_259(uParam0[5 /*9*/], 344f, 482.5f, 80f, 80f, 1);
	func_258(uParam0[5 /*9*/], 255, 255, 255, 255);
	func_259(uParam0[4 /*9*/], 429.5f, 482.5f, 80f, 80f, 1);
	func_258(uParam0[4 /*9*/], 255, 255, 255, 255);
	func_253(&(uParam0->f_420[1 /*8*/]), 257f, 119f, 254f, 5f, 1);
	func_252(&(uParam0->f_420[1 /*8*/]), 70, 70, 130, 255);
	func_253(&(uParam0->f_420[0 /*8*/]), 257f, 124f, 254f, 25f, 1);
	func_252(&(uParam0->f_420[0 /*8*/]), 255, 255, 255, 255);
	func_253(&(uParam0->f_420[2 /*8*/]), 257f, 159f, 254f, 133f, 1);
	func_251(&(uParam0->f_420[2 /*8*/]), 117, 1);
	func_253(&(uParam0->f_420[3 /*8*/]), 257f, 294f, 254f, 25f, 1);
	func_251(&(uParam0->f_420[3 /*8*/]), 117, 1);
	func_253(&(uParam0->f_420[4 /*8*/]), 257f, 321f, 254f, 25f, 1);
	func_251(&(uParam0->f_420[4 /*8*/]), 117, 1);
	func_253(&(uParam0->f_420[5 /*8*/]), 257f, 348f, 254f, 25f, 1);
	func_251(&(uParam0->f_420[5 /*8*/]), 117, 1);
	func_253(&(uParam0->f_420[6 /*8*/]), 257f, 375f, 254f, 25f, 1);
	func_251(&(uParam0->f_420[6 /*8*/]), 117, 1);
	func_253(&(uParam0->f_420[7 /*8*/]), 257f, 402f, 254f, 25f, 1);
	func_251(&(uParam0->f_420[7 /*8*/]), 117, 1);
	func_253(&(uParam0->f_420[8 /*8*/]), 257f, 429f, 254f, 52f, 1);
	func_251(&(uParam0->f_420[8 /*8*/]), 117, 1);
	func_253(&(uParam0->f_420[11 /*8*/]), 257f, 483f, 83f, 84f, 1);
	func_251(&(uParam0->f_420[11 /*8*/]), 117, 1);
	func_253(&(uParam0->f_420[12 /*8*/]), 342f, 483f, 84f, 84f, 1);
	func_251(&(uParam0->f_420[12 /*8*/]), 117, 1);
	func_253(&(uParam0->f_420[13 /*8*/]), 428f, 483f, 83f, 84f, 1);
	func_251(&(uParam0->f_420[13 /*8*/]), 117, 1);
	func_253(&(uParam0->f_420[14 /*8*/]), 428f, 564f, 83f, 25f, 1);
	func_251(&(uParam0->f_420[14 /*8*/]), 107, 1);
	func_253(&(uParam0->f_420[15 /*8*/]), 342f, 564f, 84f, 25f, 1);
	func_251(&(uParam0->f_420[15 /*8*/]), 108, 1);
	func_253(&(uParam0->f_420[16 /*8*/]), 257f, 564f, 83f, 25f, 1);
	func_251(&(uParam0->f_420[16 /*8*/]), 109, 1);
	uParam0->f_986 = 1;
}

void func_251(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0xB922891BFD232C45(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_4 = uVar0;
	uParam0->f_5 = uVar1;
	uParam0->f_6 = uVar2;
	if (bParam2)
	{
		uParam0->f_7 = uVar3;
	}
}

void func_252(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	uParam0->f_4 = iParam1;
	uParam0->f_5 = iParam2;
	uParam0->f_6 = iParam3;
	uParam0->f_7 = iParam4;
}

void func_253(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, bool bParam5)
{
	func_257(uParam0, fParam3, fParam4);
	func_254(uParam0, fParam1, fParam2, bParam5);
}

void func_254(var uParam0, float fParam1, float fParam2, bool bParam3)
{
	*uParam0 = func_256(fParam1, 1280);
	uParam0->f_1 = func_255(fParam2, 720);
	if (bParam3)
	{
		*uParam0 = (*uParam0 + (uParam0->f_2 / 2f));
		uParam0->f_1 = (uParam0->f_1 + (uParam0->f_3 / 2f));
	}
}

float func_255(float fParam0, int iParam1)
{
	var uVar0;
	
	if (iParam1 == 0)
	{
		unk_0x68824FF629FFAE6D(&uVar0, &iParam1);
	}
	return (fParam0 / IntToFloat(iParam1));
}

float func_256(float fParam0, int iParam1)
{
	var uVar0;
	
	if (iParam1 == 0)
	{
		unk_0x68824FF629FFAE6D(&iParam1, &uVar0);
	}
	return (fParam0 / IntToFloat(iParam1));
}

void func_257(var uParam0, float fParam1, float fParam2)
{
	uParam0->f_2 = func_256(fParam1, 1280);
	uParam0->f_3 = func_255(fParam2, 720);
}

void func_258(float fParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	fParam0->f_4 = iParam1;
	fParam0->f_5 = iParam2;
	fParam0->f_6 = iParam3;
	fParam0->f_7 = iParam4;
}

void func_259(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, bool bParam5)
{
	func_261(fParam0, fParam3, fParam4);
	func_260(fParam0, fParam1, fParam2, bParam5);
}

void func_260(var uParam0, float fParam1, float fParam2, bool bParam3)
{
	*uParam0 = func_256(fParam1, 1280);
	uParam0->f_1 = func_255(fParam2, 720);
	if (bParam3)
	{
		*uParam0 = (*uParam0 + (uParam0->f_2 / 2f));
		uParam0->f_1 = (uParam0->f_1 + (uParam0->f_3 / 2f));
	}
}

void func_261(var uParam0, float fParam1, float fParam2)
{
	uParam0->f_2 = func_256(fParam1, 1280);
	uParam0->f_3 = func_255(fParam2, 720);
}

float func_262(float fParam0, int iParam1, bool bParam2)
{
	var uVar0;
	float fVar1;
	
	if (iParam1 == 0)
	{
		unk_0x68824FF629FFAE6D(&iParam1, &uVar0);
	}
	fVar1 = (fParam0 * IntToFloat(iParam1));
	if (bParam2)
	{
		return unk_0xBBDA792448DB5A89(unk_0xF2DB717A73826179(fVar1));
	}
	return fVar1;
}

void func_263(var uParam0, float fParam1, float fParam2, bool bParam3)
{
	*uParam0 = func_256(fParam1, 1280);
	uParam0->f_1 = func_255(fParam2, 720);
	if (!bParam3)
	{
	}
}

void func_264(var uParam0)
{
	func_285(uParam0, 0);
	func_284(&(uParam0->f_11), 0);
	func_283(&(uParam0->f_66), 0);
	func_282(&(uParam0->f_77), 0);
	func_281(&(uParam0->f_33), 0);
	func_280(&(uParam0->f_44), 0);
	func_279(&(uParam0->f_55), 0);
	func_278(&(uParam0->f_143), 0);
	func_277(&(uParam0->f_22), 0);
	func_276(&(uParam0->f_154), 0);
	func_275(&(uParam0->f_88), 0, 0);
	func_274(&(uParam0->f_99), 0, 5);
	func_273(&(uParam0->f_110), 0);
	func_272(&(uParam0->f_121), 0);
	func_271(&(uParam0->f_132), 0);
	func_270(&(uParam0->f_165), 0);
	func_269(&(uParam0->f_176), 0);
	func_268(&(uParam0->f_187), 0);
	func_267(&(uParam0->f_198), 0);
	func_266(&(uParam0->f_209), 0);
	func_265(&(uParam0->f_220), 0);
}

void func_265(var uParam0, int iParam1)
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

void func_266(var uParam0, int iParam1)
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

void func_267(var uParam0, int iParam1)
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

void func_268(var uParam0, int iParam1)
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

void func_269(var uParam0, int iParam1)
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

void func_270(var uParam0, int iParam1)
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

void func_271(var uParam0, int iParam1)
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

void func_272(var uParam0, int iParam1)
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

void func_273(var uParam0, int iParam1)
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

void func_274(var uParam0, int iParam1, int iParam2)
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

void func_275(var uParam0, int iParam1, int iParam2)
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

void func_276(var uParam0, int iParam1)
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

void func_277(var uParam0, int iParam1)
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

void func_278(var uParam0, int iParam1)
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

void func_279(var uParam0, int iParam1)
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

void func_280(var uParam0, int iParam1)
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

void func_281(var uParam0, int iParam1)
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

void func_282(var uParam0, int iParam1)
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

void func_283(var uParam0, int iParam1)
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

void func_284(var uParam0, int iParam1)
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

void func_285(var uParam0, int iParam1)
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

void func_286(var uParam0)
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

void func_287(char* sParam0, int iParam1)
{
	unk_0x5FFD0DFFE53FB210(sParam0);
	unk_0xF3AF8AF4E207A0FD(0, 0, 1, iParam1);
}

int func_288(var uParam0)
{
	func_293();
	switch (iLocal_2358)
	{
		case 0:
			func_10(uParam0);
			func_292(&uLocal_2353, 3);
			iLocal_2358 = 1;
			break;
		
		case 1:
			if (func_2(uParam0, 1f))
			{
				func_289(&uLocal_2353, 1, 0, 1, 3, 1, 0, 0);
				iLocal_2358 = 2;
			}
			break;
		
		case 2:
			if (func_289(&uLocal_2353, 0, 0, 1, 3, 1, 0, 0))
			{
				return 0;
			}
			break;
			return 1;
	}
	return 1;
}

int func_289(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	
	if (bParam7)
	{
		func_291(&(uParam0->f_2), 1);
	}
	if (!func_3(&(uParam0->f_2)))
	{
		func_11(&(uParam0->f_2));
	}
	unk_0x38C75B31337B3454(1);
	unk_0x45822700F324A838(*uParam0, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 100, 0);
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
	if (bParam7)
	{
		if (func_3(&(uParam0->f_2)))
		{
			if (func_7(&(uParam0->f_2)))
			{
				fVar3 = uParam0->f_2.f_2;
			}
			else
			{
				fVar3 = (func_6(1) - uParam0->f_2.f_1);
				if (fVar3 < 0f)
				{
					fVar3 = 0f;
					func_4(&(uParam0->f_2));
					if (func_346(uParam0->f_1, 1))
					{
						func_318(&(uParam0->f_1), 8);
						unk_0xB922891BFD232C45(18, &iVar5, &iVar6, &iVar7, &uVar8);
						unk_0xEBD23F68B1A617FC(*uParam0, "SET_MESSAGE");
						func_147("CNTDWN_GO");
						unk_0x32F9127910F63DFA(iVar5);
						unk_0x32F9127910F63DFA(iVar6);
						unk_0x32F9127910F63DFA(iVar7);
						unk_0xE8240315678FDE8E(true);
						unk_0x1C703A54AB4B12F6();
						return 1;
					}
					func_11(&(uParam0->f_2));
				}
			}
		}
		else
		{
			fVar3 = uParam0->f_2.f_1;
		}
		iVar4 = unk_0xF34EE736CF047844(fVar3);
	}
	else
	{
		iVar4 = unk_0xF34EE736CF047844(func_5(&(uParam0->f_2)));
	}
	iVar9 = (iVar4 - iParam4);
	bVar10 = false;
	if (!func_346(uParam0->f_1, 8))
	{
		if (iVar9 >= -3 && !func_346(uParam0->f_1, 1))
		{
			func_318(&(uParam0->f_1), 1);
			unk_0x18F1BFAF88AC511B(-1, sVar0, sVar2, 1);
			func_292(uParam0, iVar9);
		}
		else if (iVar9 >= -2 && !func_346(uParam0->f_1, 2))
		{
			func_318(&(uParam0->f_1), 2);
			unk_0x18F1BFAF88AC511B(-1, sVar0, sVar2, 1);
			func_292(uParam0, iVar9);
		}
		else if (iVar9 >= -1 && !func_346(uParam0->f_1, 4))
		{
			func_318(&(uParam0->f_1), 4);
			unk_0x18F1BFAF88AC511B(-1, sVar0, sVar2, 1);
			func_292(uParam0, iVar9);
		}
		else if (iVar9 >= -1 && !func_346(uParam0->f_1, 16))
		{
			if (unk_0x229F35E7CDDBF757((func_5(&(uParam0->f_2)) - IntToFloat(iParam4))) < 0.65f)
			{
				if (bParam5 || bParam6)
				{
					func_318(&(uParam0->f_1), 16);
					unk_0x18F1BFAF88AC511B(-1, sVar1, sVar2, 1);
				}
			}
		}
		else if (iVar9 >= 0 && !func_346(uParam0->f_1, 8))
		{
			if (!bParam5 && !bParam6)
			{
				unk_0x18F1BFAF88AC511B(-1, sVar1, sVar2, 1);
			}
			func_318(&(uParam0->f_1), 8);
			unk_0xB922891BFD232C45(18, &iVar11, &iVar12, &iVar13, &uVar14);
			unk_0xEBD23F68B1A617FC(*uParam0, "SET_MESSAGE");
			func_147("CNTDWN_GO");
			unk_0x32F9127910F63DFA(iVar11);
			unk_0x32F9127910F63DFA(iVar12);
			unk_0x32F9127910F63DFA(iVar13);
			unk_0xE8240315678FDE8E(true);
			unk_0x1C703A54AB4B12F6();
			if (!bParam1)
			{
				bVar10 = true;
			}
		}
	}
	else if (iVar9 == 1)
	{
		bVar10 = true;
	}
	if ((iParam2 && func_290()) || iVar4 > 5)
	{
		bVar10 = true;
	}
	if (bVar10)
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

int func_290()
{
	if (unk_0x957E53BB191CB24D())
	{
		return 0;
	}
	if (unk_0x9148803485DEDF45(0, 18) || unk_0x9148803485DEDF45(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_291(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xCD7E92DE2BFA0B0D(uParam0, 4);
	}
	else
	{
		unk_0xD804ACF2A7171150(uParam0, 4);
	}
	if (unk_0x2A3398C6222EB190(*uParam0, 4))
	{
	}
}

void func_292(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	unk_0xB922891BFD232C45(12, &iVar0, &iVar1, &iVar2, &uVar3);
	unk_0xEBD23F68B1A617FC(*uParam0, "SET_MESSAGE");
	unk_0xDBB8FCB00B701798(-1);
	unk_0x9BC6C9E77AAC792E("NUMBER");
	unk_0x96577CAA1D1E72DB(unk_0x0C58CE21DE9AD283(iParam1));
	unk_0xCC5EB3A492FB7D4B();
	unk_0x32F9127910F63DFA(iVar0);
	unk_0x32F9127910F63DFA(iVar1);
	unk_0x32F9127910F63DFA(iVar2);
	unk_0xE8240315678FDE8E(true);
	unk_0x1C703A54AB4B12F6();
}

void func_293()
{
	struct<6> Var0;
	int iVar6;
	
	iVar6 = Global_103469;
	func_294(Var0, 0, 0, 0, 0, iVar6);
}

void func_294(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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
	
	if (Global_71039 != 6)
	{
		if (Global_71041 == -1)
		{
			if (func_308(1, Param0))
			{
				if (Global_71042 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_29 > fVar0)
				{
					Global_71041 = unk_0x31CD6E9F83C10233();
					Local_30 = { unk_0x4D7D98763DE1BCA0(15) };
					fLocal_29 = 0f;
				}
				else
				{
					fLocal_29 = (fLocal_29 + unk_0xCD70DA50CCD55658());
				}
			}
			else
			{
				fLocal_29 = 0f;
			}
		}
		else
		{
			if (!func_308(0, Param0))
			{
				Global_71041 = (unk_0x31CD6E9F83C10233() - 9000);
			}
			unk_0xBD1C47D856010F09(7);
			unk_0xBD1C47D856010F09(6);
			unk_0xBD1C47D856010F09(8);
			unk_0xBD1C47D856010F09(9);
			iVar1 = (unk_0x31CD6E9F83C10233() - Global_71041);
			if (iVar1 < 9000 && !unk_0x5114FCEE2A997B95())
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
				switch (Global_71039)
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
				unk_0x661705F074A804D1(82, 66);
				unk_0x4E250FE9E4D8720F(1);
				unk_0x41D772AFFBD36843(2);
				iVar12 = func_154();
				if (Global_71042 == 1 && Global_71040 == 62)
				{
					iVar12 = Global_104439.f_2244.f_539.f_4302;
				}
				switch (iVar12)
				{
					case 0:
						unk_0xB922891BFD232C45(143, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 1:
						unk_0xB922891BFD232C45(144, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 2:
						unk_0xB922891BFD232C45(145, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					default:
						iVar8 = 240;
						iVar9 = 200;
						iVar10 = 80;
				}
				unk_0x52D4D0409C49DF8C(iVar8, iVar9, iVar10, iVar2);
				unk_0x473B15F195A283BE();
				Var4 = { func_297(Global_71040, Global_71042, iParam10) };
				if (fVar7 == -0.014f)
				{
				}
				unk_0x399D1A0AE11E61E3(fVar6, fVar7, 0f, 0.01f);
				unk_0xD1F2C9FF58856AEC(0.67f, 0.67f);
				if (!unk_0x3CCF948E5BFC63FE() && !unk_0x21E65D3A8A35D09E())
				{
					fLocal_34 = 0.14f;
				}
				else
				{
					fLocal_34 = 0.17f;
				}
				if (fVar7 == -0.014f)
				{
					if (func_296(&Var4) > fLocal_34)
					{
						if (unk_0x183B017AEEB40CB9(15))
						{
							unk_0xB8281495D778DB56(15, Local_30.f_0, (Local_30.f_1 + fLocal_33));
							Global_71044 = 1;
						}
					}
				}
				unk_0x0B8B91F21AE25854(&Var4);
				unk_0x7E43DE6F9866B44B(fVar6, fVar7, 0);
				unk_0x26742F01C78031C2();
				if (Global_71043 == 1)
				{
					func_295();
					fLocal_29 = 0f;
				}
			}
			else
			{
				func_295();
				fLocal_29 = 0f;
			}
		}
	}
}

void func_295()
{
	if (Global_71039 != 6)
	{
	}
	if (Global_71044)
	{
		unk_0xC030DF4B187326D7(15);
		Global_71044 = 0;
		Global_17290.f_7931 = 0;
	}
	Global_71039 = 6;
	Global_71041 = -1;
	Global_71040 = -1;
}

float func_296(var uParam0)
{
	unk_0x54412EEBDB162F5C(uParam0);
	return unk_0x51C2CBAC9E5D95A4(1);
}

struct<2> func_297(int iParam0, int iParam1, int iParam2)
{
	struct<2> Var0;
	int iVar2;
	
	StringCopy(&Var0, "", 8);
	switch (iParam1)
	{
		case 1:
			Var0 = { func_307(iParam0) };
			break;
		
		case 7:
			Var0 = { func_305(iParam0) };
			break;
		
		case 3:
			iVar2 = iParam0;
			switch (iVar2)
			{
				case 0:
					Var0 = { func_304(iParam2) };
					break;
				
				case 8:
					Var0 = { func_303(iParam2) };
					break;
				
				case 7:
					Var0 = { func_302(iParam2) };
					break;
				
				case 10:
					Var0 = { func_301(iParam2) };
					break;
				
				case 5:
					Var0 = { func_300(iParam2) };
					break;
				
				case 4:
					Var0 = { func_299(iParam2) };
					break;
				
				default:
					StringCopy(&Var0, func_298(iVar2), 8);
					break;
			}
			break;
		
		default:
			break;
	}
	return Var0;
}

char* func_298(int iParam0)
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

struct<2> func_299(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0x0BD3CCFB6C6CFA91(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGOR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_300(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0x0BD3CCFB6C6CFA91(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGFS_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_301(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0x0BD3CCFB6C6CFA91(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSP_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_302(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0x0BD3CCFB6C6CFA91(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_303(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0x0BD3CCFB6C6CFA91(&cVar2) || iParam0 == 3)
	{
	}
	else
	{
		StringCopy(&Var0, "MGCR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_304(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0x0BD3CCFB6C6CFA91(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGBJ_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_305(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_306(iParam0) };
	if (unk_0x0BD3CCFB6C6CFA91(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_306(int iParam0)
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

struct<2> func_307(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &(Global_83695[iParam0 /*34*/].f_8), 8);
	if (iParam0 == 90)
	{
		switch (Global_104439.f_8946.f_99.f_205[7])
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

int func_308(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	if (((!func_310(0) || Global_71054) || Global_71043 == 1) || !unk_0xF9FC07CC13402AEF())
	{
		return 0;
	}
	switch (Global_71039)
	{
		case 0:
			if (unk_0xB3404E397FF56B3B(&uParam1, "NONE") || unk_0x0BD3CCFB6C6CFA91(&uParam1))
			{
				Global_71039 = 3;
			}
			else
			{
				Global_71039 = 1;
			}
			break;
		
		case 1:
			if (unk_0xAACBB62174DAE158())
			{
				Global_71039 = 2;
			}
			break;
		
		case 2:
			if (unk_0x136B42AA35650CB6())
			{
				Global_71039 = 4;
				return 1;
			}
			else if (!unk_0x9063DC17918D346A())
			{
				Global_71039 = 3;
			}
			break;
		
		case 3:
			if (unk_0x136B42AA35650CB6())
			{
			}
			else
			{
				Global_71039 = 5;
				return 1;
			}
			break;
		
		case 4:
			if (unk_0x136B42AA35650CB6())
			{
				return 1;
			}
			else if (iParam0 == 1)
			{
				Global_71039 = 5;
			}
			break;
		
		case 5:
			if ((unk_0x136B42AA35650CB6() || func_132(0)) || func_309(1))
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

bool func_309(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17151.f_4 && Global_17151.f_104 == 4);
	}
	return Global_17151.f_4;
}

int func_310(int iParam0)
{
	if (Global_35813 == 15)
	{
		return 0;
	}
	if (func_311(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_311(int iParam0)
{
	return func_312(iParam0, Global_35813);
}

int func_312(int iParam0, int iParam1)
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

void func_313(var uParam0)
{
	char cVar0[16];
	int iVar4;
	
	StringCopy(&cVar0, "Offroad_", 16);
	StringIntConCat(&cVar0, Local_51.f_10 + 1, 16);
	func_11(&(uParam0->f_3));
	uParam0->f_358[0 /*189*/].f_15 = 0f;
	iLocal_2133 = 0;
	unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 1, 0);
	if (Local_51.f_0 == 0)
	{
		unk_0x94EB0EFC2C10DAF6(unk_0x3D35F9864E4640B1(), 1);
	}
	uParam0->f_1 = 1;
	func_11(&uLocal_2458);
	iVar4 = 0;
	while (iVar4 < uParam0->f_13)
	{
		func_314(&(uParam0->f_358[iVar4 /*189*/]));
		if (Local_51.f_0 != 1)
		{
			if (iVar4 != 0)
			{
				func_76(uParam0, uParam0->f_358[iVar4 /*189*/].f_8, uParam0->f_358[iVar4 /*189*/].f_9, uParam0->f_27[uParam0->f_358[iVar4 /*189*/].f_11 /*10*/], uParam0->f_27[uParam0->f_358[iVar4 /*189*/].f_11 /*10*/].f_7, iVar4);
			}
		}
		else if (bLocal_2466)
		{
			if (iVar4 > 0)
			{
				if (!unk_0x7A6C051038031EFA(uParam0->f_358[iVar4 /*189*/].f_8, 0) && !unk_0x7A6C051038031EFA(uParam0->f_358[iVar4 /*189*/].f_9, 0))
				{
					if (iVar4 == 1 && Local_51.f_10 == 0)
					{
						StringConCat(&cVar0, "a", 16);
					}
					unk_0x9EE30C20270C9443(uParam0->f_358[iVar4 /*189*/].f_8, uParam0->f_358[iVar4 /*189*/].f_9, &cVar0, 262144, 0, 8, -1, unk_0xDDBBF868DD242CCE(uParam0->f_358[iVar4 /*189*/].f_9), 0, 1073741824);
				}
			}
		}
		else if (iVar4 != 0)
		{
			func_76(uParam0, uParam0->f_358[iVar4 /*189*/].f_8, uParam0->f_358[iVar4 /*189*/].f_9, uParam0->f_27[uParam0->f_358[iVar4 /*189*/].f_11 /*10*/], uParam0->f_27[uParam0->f_358[iVar4 /*189*/].f_11 /*10*/].f_7, iVar4);
		}
		iVar4++;
	}
	if (unk_0x432757A9E7AAFA96(uParam0->f_358[0 /*189*/].f_9, 0))
	{
		unk_0xF73BCDB7C058F04E(uParam0->f_358[0 /*189*/].f_9, 1);
		if (!unk_0x0BD3CCFB6C6CFA91(sLocal_2303))
		{
			unk_0x925DD855308C5F32(sLocal_2303);
			unk_0x3A34071ED707A472(uParam0->f_358[0 /*189*/].f_9, sLocal_2303);
		}
	}
}

void func_314(var uParam0)
{
	if (!unk_0x7A6C051038031EFA(uParam0->f_9, 0))
	{
		if (!unk_0x7A6C051038031EFA(uParam0->f_8, 0))
		{
			if (unk_0x6459D7B9F825DBCF(uParam0->f_9))
			{
				unk_0x6562DA95A43F027D(uParam0->f_9);
			}
			unk_0xEB9B39274C401888(uParam0->f_8, 1);
		}
	}
	uParam0->f_11 = 0;
	if (!unk_0x7A6C051038031EFA(uParam0->f_9, 0))
	{
		if (!unk_0x34C854420D02F57B(uParam0->f_22))
		{
			unk_0x56B418F469976565(uParam0->f_9, 1, 1, 0);
		}
	}
}

var func_315()
{
	return unk_0xB1E69EFAB6CB45A3("MP_BIG_MESSAGE_FREEMODE");
}

void func_316(var uParam0)
{
	uParam0->f_12 = uParam0->f_12;
}

void func_317(var uParam0)
{
	int iVar0;
	
	if (unk_0x46F4AE18D5506B08(unk_0xED1168B8D2D313FA()))
	{
		unk_0xB568492AC80B8832(unk_0xED1168B8D2D313FA(), 0, 512);
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		func_108(&(uParam0->f_358[iVar0 /*189*/]), 60f, 1);
		iVar0++;
	}
}

void func_318(int iParam0, int iParam1)
{
	func_60(iParam0, iParam1);
}

int func_319(var uParam0, int iParam1, bool bParam2)
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
	if (!func_325(&(uParam0->f_27[iParam1 /*10*/]), iVar3, fVar4, iParam1, uParam0->f_12))
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
		if (Local_51.f_0 == 1)
		{
			if (Local_51.f_10 == 1)
			{
				if (func_346(uParam0->f_27[8 /*10*/].f_9, 4))
				{
					func_344(&(uParam0->f_27[8 /*10*/].f_9), 4);
				}
			}
		}
		if (iParam1 > 0)
		{
			Var8 = { uParam0->f_27[(iParam1 - 1) /*10*/] };
		}
		if (!func_320(Var8, &(uParam0->f_27[iParam1 /*10*/]), Var5, 16f))
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
			if (!func_320(uParam0->f_27[iParam1 /*10*/], &(uParam0->f_27[iParam1 + 1 /*10*/]), Var0, 16f))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_320(struct<3> Param0, var uParam3, struct<3> Param4, float fParam7)
{
	if (!func_321(Param0, uParam3, Param4, fParam7))
	{
		return 0;
	}
	return 1;
}

int func_321(struct<3> Param0, var uParam3, struct<3> Param4, var uParam7)
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
		uVar0 = func_323(uParam3->f_7, Param0, *uParam3, Param4);
		func_565(func_566(func_92()), &uVar1, &uVar2, &uVar3, &uVar4);
		uParam3->f_6 = unk_0x73B683754FB54A17(uVar0, *uParam3, Param4, uParam7, uVar1, uVar2, uVar3, func_91(*uParam3, 25, 200), 0);
	}
	else if (uParam3->f_7 == 3)
	{
		if (uParam3->f_8 == 2 || uParam3->f_8 == 3)
		{
			func_565(func_566(18), &iVar1, &iVar2, &iVar3, &uVar4);
			uParam3->f_6 = unk_0x73B683754FB54A17(func_322(uParam3->f_7, uParam3->f_8), *uParam3, Param4, uParam7, iVar1, iVar2, iVar3, func_91(*uParam3, 25, 200), 0);
		}
		else if (uParam3->f_8 == 1)
		{
			func_565(func_566(9), &iVar1, &iVar2, &iVar3, &uVar4);
			uParam3->f_6 = unk_0x73B683754FB54A17(func_322(uParam3->f_7, uParam3->f_8), *uParam3, Param4, uParam7, iVar1, iVar2, iVar3, func_91(*uParam3, 25, 200), 0);
		}
	}
	else
	{
		uParam3->f_6 = unk_0x73B683754FB54A17(func_322(uParam3->f_7, uParam3->f_8), *uParam3, Param4, uParam7, 254, 207, 12, func_91(*uParam3, 25, 200), 0);
	}
	if (uParam3->f_6 == 0)
	{
		return 0;
	}
	return 1;
}

int func_322(int iParam0, int iParam1)
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

int func_323(int iParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7)
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
	if (!func_324(Param1, 0f, 0f, 0f, 0))
	{
		Var0 = { Param1 - Param4 };
		Var3 = { Param7 - Param4 };
		fVar6 = unk_0x65543A6B8B143988(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1);
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

bool func_324(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_325(var uParam0, int iParam1, float fParam2, int iParam3, int iParam4)
{
	if (!func_326(&(uParam0->f_5), *uParam0, iParam1, fParam2, iParam3, iParam4, uParam0->f_8))
	{
		return 0;
	}
	return 1;
}

int func_326(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7, int iParam8)
{
	func_83(uParam0);
	*uParam0 = unk_0x97AC4FC1EEAC7A8B(Param1);
	if (!unk_0xA761A0B6072010C8(*uParam0))
	{
		return 0;
	}
	if (iParam4 != -1)
	{
		unk_0x3B815A6E8530D3A5(*uParam0, iParam4);
	}
	unk_0x067D86058370B7EB(*uParam0, uParam5);
	unk_0x10B7FEC9D017D330(*uParam0, 4);
	if (iParam8 == 2 || iParam8 == 3)
	{
		unk_0xEB934A06DDA5027D(*uParam0, 2);
	}
	if (iParam8 == 1)
	{
		unk_0xEB934A06DDA5027D(*uParam0, 3);
	}
	if (iParam6 == (iParam7 - 1))
	{
		unk_0xA23268A8852A45E8("GATEBLIPFIN");
		unk_0x05064114393805B9(*uParam0);
	}
	else
	{
		if (iParam8 == 1)
		{
			unk_0xA23268A8852A45E8("GATEBLIPINV");
		}
		else if (iParam8 == 2 || iParam8 == 3)
		{
			unk_0xA23268A8852A45E8("GATEBLIPKNF");
		}
		else
		{
			unk_0xA23268A8852A45E8("GATEBLIPDEF");
		}
		unk_0x05064114393805B9(*uParam0);
	}
	return 1;
}

void func_327(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x8F8D0515CEE01015(sParam0);
	unk_0xCA3811E629240D04(iParam1, 0);
}

int func_328(var uParam0)
{
	switch (uParam0->f_25)
	{
		case 0:
			func_128(1);
			unk_0x59B2F61C9D01132B("MPHUD", 0);
			Local_51.f_118 = func_341();
			switch (Local_51.f_0)
			{
				case 0:
					unk_0x59B2F61C9D01132B("SPRRaces", 0);
					unk_0x59B2F61C9D01132B("MPMedals_FEED", 0);
					break;
				
				case 1:
					unk_0x59B2F61C9D01132B("SPROffroad", 0);
					break;
				
				case 2:
					unk_0x59B2F61C9D01132B("Triathlon", 0);
					unk_0x59B2F61C9D01132B("MPMedals_FEED", 0);
					break;
			}
			uParam0->f_25 = 1;
			break;
		
		case 1:
			func_336(uParam0);
			uParam0->f_25 = 2;
			break;
		
		case 2:
			if (func_331(uParam0))
			{
				if (unk_0xB56F0E1C89B9E069("MPHUD"))
				{
					if (unk_0x77FA56883245AD26(Local_51.f_118))
					{
						switch (Local_51.f_0)
						{
							case 0:
								if (unk_0xB56F0E1C89B9E069("SPRRaces") && unk_0xB56F0E1C89B9E069("MPMedals_FEED"))
								{
									uParam0->f_25 = 3;
								}
								break;
							
							case 1:
								if (unk_0xB56F0E1C89B9E069("SPROffroad"))
								{
									uParam0->f_25 = 3;
								}
								break;
							
							case 2:
								if (unk_0xB56F0E1C89B9E069("Triathlon") && unk_0xB56F0E1C89B9E069("MPMedals_FEED"))
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
			unk_0x7415F7E0896D14F5(unk_0x3D35F9864E4640B1());
			if (Local_51.f_10 == 0 && !uParam0->f_2)
			{
			}
			else
			{
				func_329(uParam0);
			}
			uParam0->f_25 = 4;
			break;
		
		case 4:
			if (Local_51.f_10 == 0)
			{
				return 0;
			}
			else
			{
				if (unk_0x76B3C79DE564AFC6(uParam0->f_358[0 /*189*/].f_9))
				{
					unk_0x1F18D3C78C8C1A11(uParam0->f_358[0 /*189*/].f_9, 1);
				}
				if (!unk_0x391103C96DB7B6E4())
				{
					unk_0xE99C878AD7B8CED6(uParam0->f_358[0 /*189*/].f_16);
					unk_0xFA7F74898E78698C(uParam0->f_358[0 /*189*/].f_16, unk_0xE9EAE230056F8FA1(uParam0->f_358[0 /*189*/].f_9), 5000f, 0);
				}
				if (unk_0x9177A5D78560369F())
				{
					unk_0xA05EC9D85FA401E6();
					if (unk_0x76B3C79DE564AFC6(uParam0->f_358[0 /*189*/].f_9))
					{
						unk_0x1F18D3C78C8C1A11(uParam0->f_358[0 /*189*/].f_9, 0);
					}
					func_317(uParam0);
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

int func_329(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		if (!func_330(uParam0, iVar0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_330(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return 0;
	}
	if (iParam1 > 0)
	{
		return func_124(&(uParam0->f_358[iParam1 /*189*/]), 1);
	}
	return func_124(&(uParam0->f_358[iParam1 /*189*/]), 0);
}

int func_331(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		if (!func_332(uParam0, iVar0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_332(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return 0;
	}
	return func_333(&(uParam0->f_358[iParam1 /*189*/]));
}

int func_333(var uParam0)
{
	if (!func_335(uParam0) || !func_334(uParam0))
	{
		return 0;
	}
	return 1;
}

bool func_334(var uParam0)
{
	if (uParam0->f_22 == 0)
	{
		return 1;
	}
	return unk_0x772F801619C83779(uParam0->f_22);
}

bool func_335(var uParam0)
{
	if (uParam0->f_21 == 0)
	{
		return 0;
	}
	return unk_0x772F801619C83779(uParam0->f_21);
}

void func_336(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		func_337(uParam0, iVar0);
		iVar0++;
	}
}

void func_337(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return;
	}
	func_338(&(uParam0->f_358[iParam1 /*189*/]));
}

void func_338(var uParam0)
{
	func_340(uParam0);
	func_339(uParam0);
}

void func_339(var uParam0)
{
	if (uParam0->f_22 == 0)
	{
		return;
	}
	unk_0xBE91026C1FC72180(uParam0->f_22);
}

void func_340(var uParam0)
{
	if (uParam0->f_21 == 0)
	{
		return;
	}
	unk_0xBE91026C1FC72180(uParam0->f_21);
}

var func_341()
{
	return unk_0xB1E69EFAB6CB45A3("SC_LEADERBOARD");
}

int func_342(int iParam0)
{
	if (unk_0xF9FC07CC13402AEF())
	{
		unk_0x8351F65655759E0C(iParam0);
	}
	else if (unk_0x5114FCEE2A997B95())
	{
		return 1;
	}
	return 0;
}

void func_343()
{
	if (unk_0x2A3EA4C0BCED85F2(uLocal_2102))
	{
		if (unk_0x63D9209D70E2F5D5(uLocal_2102))
		{
			unk_0x087893C6FCE21842(0, 0, 3000, 1, 0, 0);
			unk_0x55CC07D5416539C8(uLocal_2102, 0);
		}
		unk_0x46B35AD2F641A4A3(uLocal_2102, 0);
	}
}

void func_344(int iParam0, int iParam1)
{
	func_345(iParam0, iParam1);
}

void func_345(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

bool func_346(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_347(var uParam0)
{
	if (!func_3(uParam0))
	{
		func_11(uParam0);
	}
}

void func_348()
{
	func_349(&uLocal_1606);
}

void func_349(var uParam0)
{
	if (uParam0->f_4 != 0)
	{
		func_355(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
	}
	if (((*uParam0)[0] != 0 || (*uParam0)[1] != 0) || (*uParam0)[2] != 0)
	{
		func_415(uParam0);
		func_354(uParam0);
		func_353(&Global_1839721);
	}
	if (Global_1835390.f_2708 != 0 || Global_1835390.f_3184)
	{
		func_351();
	}
	if (unk_0x3A7B47D96E536F61("LEADERBOARD_SCENE"))
	{
		unk_0xB3E27A9E412BBDF8("LEADERBOARD_SCENE");
	}
	if (unk_0xE096BC82D913B3DB())
	{
		func_350(&(Global_1840922.f_49));
	}
	Global_2501777.f_3924 = 0;
}

void func_350(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_351()
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
	func_352(&(Global_1835390.f_2780));
	func_350(&(Global_1835390.f_2823));
	Global_1835390.f_2825 = -1;
	Global_1835390.f_2826 = 0;
	func_350(&(Global_1835390.f_2827));
	Global_1835390.f_2829 = 0;
	func_350(&(Global_1835390.f_2830));
	Global_1835390.f_2832 = 0;
	Global_1835390.f_2780.f_28 = 0;
	Global_1835390.f_2780.f_27 = 0;
	Global_1835390.f_3184 = 0;
}

void func_352(var uParam0)
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

void func_353(var uParam0)
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
	func_350(&(Global_1835390.f_2830));
}

void func_354(var uParam0)
{
	int iVar0;
	struct<13> Var1;
	
	uParam0->f_246 = 0;
	uParam0->f_246.f_1 = -1;
	uParam0->f_246.f_2 = 0;
	func_350(&(uParam0->f_246.f_3));
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

void func_355(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = 0;
	*uParam1 = 0;
	Global_1835008 = 0;
	func_350(&(Global_1835008.f_1));
	unk_0x6D26D20288D66A19(*uParam2, uParam2->f_1, -1);
}

int func_356(var uParam0, var uParam1)
{
	if (!func_407())
	{
		return 0;
	}
	if (func_401(&bLocal_525, uParam0))
	{
		if (iLocal_527 || bLocal_526)
		{
			unk_0xDC38CC1E35B6A5D7("SPR_QT_PLANE_T", "SPR_QUIT_PLANE", 36, 0, 0, -1, 0, 0, 1);
			if (!*uParam1)
			{
				if (iLocal_527)
				{
					if (func_3(&uLocal_522))
					{
						if (func_233(&uLocal_522, unk_0xBBDA792448DB5A89(0)))
						{
							iLocal_527 = 0;
							bLocal_526 = !bLocal_526;
						}
					}
					else
					{
						func_11(&uLocal_522);
					}
				}
				else
				{
					unk_0xBD1C47D856010F09(9);
					unk_0xBD1C47D856010F09(7);
					func_143(&(Local_51.f_119), 1128792064, 1, 0, 1, 1065353216);
				}
			}
		}
		else
		{
			*uParam1 = 0;
			func_361();
		}
		return 0;
	}
	if (bLocal_525)
	{
		func_360();
		if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
		{
			unk_0x8903B4129E141B11(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), 1);
		}
	}
	else
	{
		Local_51.f_10 = -1;
	}
	func_357();
	if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		unk_0x8903B4129E141B11(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), 1);
	}
	return 1;
}

void func_357()
{
	unk_0x8C361F37C04084F4(1);
	unk_0x84D19A34E1A97ABC(3, 1);
	if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 1, 0);
	}
	if (unk_0xCDAD9EE48B886E60("MinigameTransitionIn"))
	{
		unk_0xC84CB7879942C3BA("MinigameTransitionIn");
	}
	unk_0xF177BD202464664F("MinigameTransitionOut", 0, 0);
	iLocal_521 = 0;
	unk_0x5BF9AA7BD6376F82(0);
	func_128(0);
	func_358();
}

void func_358()
{
	Global_14611 = 0;
	func_359();
}

void func_359()
{
	if (unk_0x0065EA0CBFB686EA())
	{
		unk_0x8C8894B8C4CFE97F();
		Global_16756 = 0;
		unk_0x683F0CB6CA4C99D0(1);
		Global_15745 = 6;
		return;
	}
}

void func_360()
{
	switch (Global_103469)
	{
		case 0:
			Local_51.f_10 = 0;
			break;
		
		case 1:
			Local_51.f_10 = 1;
			break;
		
		case 2:
			Local_51.f_10 = 2;
			break;
		
		case 3:
			Local_51.f_10 = 3;
			break;
		
		case 4:
			Local_51.f_10 = 4;
			break;
	}
}

void func_361()
{
	unk_0x7CDDB154852DA508();
	func_362(&uLocal_619);
}

void func_362(var uParam0)
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
	
	if (!bLocal_618)
	{
		if (!unk_0x20551D6D924ED04B())
		{
			unk_0xBEF4436D691A1491(1);
		}
	}
	unk_0xBD1C47D856010F09(9);
	unk_0xBD1C47D856010F09(7);
	func_143(&(Local_51.f_119), 1128792064, 1, 0, 1, 1065353216);
	func_393("Shared", "BGGradient_32x1024", uParam0[0 /*9*/], 0, 0, 1, 0);
	func_388(uParam0->f_420[0 /*8*/], 0, 0);
	func_388(uParam0->f_420[1 /*8*/], 0, 0);
	func_388(uParam0->f_420[2 /*8*/], 0, 0);
	func_388(uParam0->f_420[3 /*8*/], 0, 0);
	func_388(uParam0->f_420[4 /*8*/], 0, 0);
	func_388(uParam0->f_420[5 /*8*/], 0, 0);
	func_388(uParam0->f_420[6 /*8*/], 0, 0);
	func_388(uParam0->f_420[7 /*8*/], 0, 0);
	func_388(uParam0->f_420[8 /*8*/], 0, 0);
	func_388(uParam0->f_420[6 /*8*/], 0, 0);
	unk_0x38C75B31337B3454(1);
	func_387(&(uParam0->f_741.f_165));
	func_386(&(uParam0->f_316[0 /*2*/]), &(uParam0->f_741.f_165), "SPR_TITLE", 0);
	unk_0x38C75B31337B3454(4);
	func_384(&(uParam0->f_741.f_176));
	func_383(&(uParam0->f_741.f_176), &(uParam0->f_420[0 /*8*/]), 0f, 0f);
	func_381(&(uParam0->f_316[1 /*2*/]), &(uParam0->f_741.f_176), "SPR_CHALLENGES", 1, 0);
	func_380(&(uParam0->f_741.f_176));
	func_383(&(uParam0->f_741.f_176), &(uParam0->f_420[1 /*8*/]), 0f, 0f);
	func_381(&(uParam0->f_316[2 /*2*/]), &(uParam0->f_741.f_176), "SPR_INFO", 1, 0);
	func_380(&(uParam0->f_741.f_176));
	func_383(&(uParam0->f_741.f_176), &(uParam0->f_420[5 /*8*/]), 0f, 0f);
	func_381(&(uParam0->f_316[3 /*2*/]), &(uParam0->f_741.f_176), "SPR_AWARD_TITLE", 1, 0);
	func_380(&(uParam0->f_741.f_176));
	func_387(&(uParam0->f_741.f_198));
	iVar0 = 0;
	iVar1 = 9;
	iVar2 = 17;
	iVar3 = 1;
	func_388(uParam0->f_420[16 /*8*/], 0, 0);
	func_388(uParam0->f_420[17 /*8*/], 0, 0);
	func_388(uParam0->f_420[18 /*8*/], 0, 0);
	func_388(uParam0->f_420[19 /*8*/], 0, 0);
	func_388(uParam0->f_420[20 /*8*/], 0, 0);
	func_388(uParam0->f_420[21 /*8*/], 0, 0);
	bVar4 = true;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 < 5)
		{
			Var14 = { uParam0->f_316[iVar2 /*2*/] };
			if (Global_104439.f_18904.f_6[iVar0] > 0f)
			{
				iLocal_531[iVar0] = unk_0x11E019C8F43ACC8A(Global_104439.f_18904.f_6[iVar0]);
			}
			else
			{
				iLocal_531[iVar0] = -1;
			}
			if (iVar0 == Global_103469)
			{
				func_251(&(uParam0->f_420[iVar1 /*8*/]), 1, 1);
				func_388(uParam0->f_420[iVar1 /*8*/], 0, 0);
				func_384(&(uParam0->f_741.f_198));
				switch (Global_104439.f_18904.f_12[iVar0 /*8*/].f_4)
				{
					case 2:
						break;
					
					case 1:
						if (iVar0 < 5)
						{
							if (Global_104439.f_18904.f_6[iVar0] <= 0f)
							{
								func_259(&Var5, 269f, 0f, 32f, 32f, 0);
								func_258(&Var5, 255, 255, 255, 255);
								Var5.f_1 = (uParam0->f_316[iVar2 /*2*/].f_1 + fLocal_538);
								Var14.f_0 = (Var5.f_0 + fLocal_537);
								if (!bLocal_618)
								{
									func_379(&Var5, 0);
								}
								func_378(&Var5, 1);
								func_393("Shared", "NewStar_32", &Var5, 0, 0, 5, 0);
								if (!bLocal_618)
								{
									func_377(&Var14, &(uParam0->f_741.f_198));
								}
							}
						}
						break;
					
					default:
						bVar4 = false;
						break;
				}
				if (iVar0 == Global_103469)
				{
					func_384(&(uParam0->f_741.f_198));
				}
				func_380(&(uParam0->f_741.f_198));
				func_386(&Var14, &(uParam0->f_741.f_198), &(Local_51.f_24[iVar0 /*8*/]), 0);
				func_387(&(uParam0->f_741.f_198));
				func_378(uParam0[iVar3 /*9*/], 1);
				if (bVar4)
				{
					func_387(&(uParam0->f_741.f_198));
				}
				else
				{
					func_387(&(uParam0->f_741.f_198));
				}
				func_387(&(uParam0->f_741.f_198));
				if (IntToFloat(iLocal_531[iVar0]) <= Local_51.f_106[iVar0] && iLocal_531[iVar0] > 1)
				{
					func_378(uParam0[iVar3 /*9*/], 1);
					func_378(uParam0[9 /*9*/], 1);
					func_393("SPRRaces", "FlightStunt_Gold_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					func_383(&(uParam0->f_741.f_198), &(uParam0->f_420[16 /*8*/]), 0.0047f, 0.0055f);
					unk_0x9AC742C2470DD649(1);
					func_386(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_198), "SPR_sGOLD", 0);
					unk_0x9AC742C2470DD649(0);
					func_380(&(uParam0->f_741.f_198));
				}
				else if (IntToFloat(iLocal_531[iVar0]) <= (((Local_51.f_112[iVar0] - Local_51.f_106[iVar0]) / 2f) + Local_51.f_106[iVar0]) && IntToFloat(iLocal_531[iVar0]) > Local_51.f_106[iVar0])
				{
					func_378(uParam0[iVar3 /*9*/], 1);
					func_378(uParam0[9 /*9*/], 1);
					func_393("SPRRaces", "FlightStunt_Silver_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					func_383(&(uParam0->f_741.f_198), &(uParam0->f_420[16 /*8*/]), 0.0047f, 0.0055f);
					unk_0x9AC742C2470DD649(1);
					func_386(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_198), "SPR_sSILVER", 0);
					unk_0x9AC742C2470DD649(0);
					func_380(&(uParam0->f_741.f_198));
				}
				else if (IntToFloat(iLocal_531[iVar0]) <= Local_51.f_112[iVar0] && IntToFloat(iLocal_531[iVar0]) > (((Local_51.f_112[iVar0] - Local_51.f_106[iVar0]) / 2f) + Local_51.f_106[iVar0]))
				{
					func_378(uParam0[iVar3 /*9*/], 1);
					func_378(uParam0[9 /*9*/], 1);
					func_393("SPRRaces", "FlightStunt_Bronze_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					func_383(&(uParam0->f_741.f_198), &(uParam0->f_420[16 /*8*/]), 0.0047f, 0.0055f);
					unk_0x9AC742C2470DD649(1);
					func_386(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_198), "SPR_sBRONZE", 0);
					unk_0x9AC742C2470DD649(0);
					func_380(&(uParam0->f_741.f_198));
				}
				else if (IntToFloat(iLocal_531[iVar0]) > Local_51.f_112[iVar0] || iLocal_531[iVar0] == -1)
				{
					func_378(uParam0[iVar3 /*9*/], 1);
					func_378(uParam0[9 /*9*/], 1);
					func_383(&(uParam0->f_741.f_198), &(uParam0->f_420[16 /*8*/]), 0.0047f, 0.0055f);
					unk_0x9AC742C2470DD649(1);
					func_386(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_198), "SC_LB_EMPTY", 0);
					unk_0x9AC742C2470DD649(0);
					func_393("SPRRaces", "Empty_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					func_376(uParam0[iVar3 /*9*/]);
				}
				if (IntToFloat(iLocal_531[iVar0]) <= Local_51.f_106[iVar0] && !iLocal_531[iVar0] == -1)
				{
					func_378(uParam0[13 /*9*/], 1);
				}
				else
				{
					(uParam0[13 /*9*/])->f_7 = unk_0xF2DB717A73826179((255f * 0.3f));
				}
				if (IntToFloat(iLocal_531[iVar0]) <= (((Local_51.f_112[iVar0] - Local_51.f_106[iVar0]) / 2f) + Local_51.f_106[iVar0]) && !iLocal_531[iVar0] == -1)
				{
					func_378(uParam0[12 /*9*/], 1);
				}
				else
				{
					(uParam0[12 /*9*/])->f_7 = unk_0xF2DB717A73826179((255f * 0.3f));
				}
				if (IntToFloat(iLocal_531[iVar0]) <= Local_51.f_112[iVar0] && !iLocal_531[iVar0] == -1)
				{
					func_378(uParam0[11 /*9*/], 1);
				}
				else
				{
					(uParam0[11 /*9*/])->f_7 = unk_0xF2DB717A73826179((255f * 0.3f));
				}
				func_393("SPRRaces", "FlightStunt_Bronze_128", uParam0[11 /*9*/], 0, 0, 5, 0);
				func_393("SPRRaces", "FlightStunt_Silver_128", uParam0[12 /*9*/], 0, 0, 5, 0);
				func_393("SPRRaces", "FlightStunt_Gold_128", uParam0[13 /*9*/], 0, 0, 5, 0);
				func_387(&(uParam0->f_741.f_198));
				if (Global_104439.f_18904.f_6[Global_103469] > 0f)
				{
					func_383(&(uParam0->f_741.f_198), &(uParam0->f_420[17 /*8*/]), 0.0047f, 0.0055f);
					unk_0x9AC742C2470DD649(1);
					func_371(&(uParam0->f_316[9 /*2*/]), &(uParam0->f_741.f_198), unk_0xF34EE736CF047844((Global_104439.f_18904.f_6[Global_103469] * 1000f)), 6, "", 0, 1);
					unk_0x9AC742C2470DD649(0);
					func_380(&(uParam0->f_741.f_198));
				}
				else
				{
					func_383(&(uParam0->f_741.f_198), &(uParam0->f_420[17 /*8*/]), 0.0047f, 0.0055f);
					unk_0x9AC742C2470DD649(1);
					func_386(&(uParam0->f_316[9 /*2*/]), &(uParam0->f_741.f_198), "SC_LB_EMPTY", 0);
					unk_0x9AC742C2470DD649(0);
					func_380(&(uParam0->f_741.f_198));
				}
				func_386(&(uParam0->f_316[6 /*2*/]), &(uParam0->f_741.f_198), "SPR_RTIME", 0);
				if (Local_51.f_18[Global_103469] > 0f)
				{
					func_383(&(uParam0->f_741.f_198), &(uParam0->f_420[18 /*8*/]), 0.0047f, 0.0055f);
					unk_0x9AC742C2470DD649(1);
					func_371(&(uParam0->f_316[7 /*2*/]), &(uParam0->f_741.f_198), unk_0xF34EE736CF047844((Local_51.f_18[Global_103469] * 1000f)), 6, "", 0, 1);
					unk_0x9AC742C2470DD649(0);
					func_380(&(uParam0->f_741.f_198));
					func_387(&(uParam0->f_741.f_198));
				}
				else
				{
					func_383(&(uParam0->f_741.f_198), &(uParam0->f_420[18 /*8*/]), 0.0047f, 0.0055f);
					unk_0x9AC742C2470DD649(1);
					func_381(&(uParam0->f_316[7 /*2*/]), &(uParam0->f_741.f_198), "SC_LB_EMPTY", 0, 1);
					unk_0x9AC742C2470DD649(0);
					func_380(&(uParam0->f_741.f_198));
					func_387(&(uParam0->f_741.f_198));
				}
			}
			else
			{
				func_370(&(uParam0->f_420[iVar1 /*8*/]));
				func_251(&(uParam0->f_420[iVar1 /*8*/]), 117, 1);
				func_388(uParam0->f_420[iVar1 /*8*/], 0, 0);
				func_378(uParam0[iVar3 /*9*/], 1);
				switch (Global_104439.f_18904.f_12[iVar0 /*8*/].f_4)
				{
					case 0:
						func_378(uParam0[iVar3 /*9*/], 1);
						func_387(&(uParam0->f_741.f_198));
						break;
					
					case 2:
						break;
					
					case 1:
						if (iVar0 < 5)
						{
							func_387(&(uParam0->f_741.f_198));
							if (Global_104439.f_18904.f_6[iVar0] <= 0f)
							{
								func_259(&Var5, 269f, 0f, 32f, 32f, 0);
								func_258(&Var5, 255, 255, 255, 255);
								Var5.f_1 = (uParam0->f_316[iVar2 /*2*/].f_1 + fLocal_538);
								Var14.f_0 = (Var5.f_0 + fLocal_537);
								if (!bLocal_618)
								{
									func_379(&Var5, 0);
								}
								func_378(&Var5, 1);
								func_393("Shared", "NewStar_32", &Var5, 0, 0, 5, 0);
								if (!bLocal_618)
								{
									func_377(&Var14, &(uParam0->f_741.f_198));
								}
							}
						}
						break;
				}
				if (iVar0 == Global_103469)
				{
					func_384(&(uParam0->f_741.f_198));
				}
				func_380(&(uParam0->f_741.f_198));
				func_386(&Var14, &(uParam0->f_741.f_198), &(Local_51.f_24[iVar0 /*8*/]), 0);
				func_387(&(uParam0->f_741.f_198));
				func_378(uParam0[iVar3 /*9*/], 1);
			}
			if (Global_104439.f_18904.f_12[iVar0 /*8*/].f_4 == 0)
			{
				func_393("Shared", "Locked_Icon_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
			}
			else if (IntToFloat(iLocal_531[iVar0]) > 0f)
			{
				if (IntToFloat(iLocal_531[iVar0]) <= Local_51.f_106[iVar0] && IntToFloat(iLocal_531[iVar0]) <= Local_51.f_112[iVar0])
				{
					func_369(uParam0[iVar3 /*9*/]);
					func_393("Shared", "MedalDot_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
				}
				else if (IntToFloat(iLocal_531[iVar0]) <= (((Local_51.f_112[iVar0] - Local_51.f_106[iVar0]) / 2f) + Local_51.f_106[iVar0]))
				{
					func_368(uParam0[iVar3 /*9*/]);
					func_393("Shared", "MedalDot_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
				}
				else if (IntToFloat(iLocal_531[iVar0]) <= Local_51.f_112[iVar0])
				{
					func_366(uParam0[iVar3 /*9*/]);
					func_393("Shared", "MedalDot_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
				}
			}
			iVar1++;
			iVar2++;
			iVar3++;
		}
		iVar0++;
	}
	iVar16 = 0;
	if (func_365(0))
	{
		unk_0x2553A7EB99AABF55(joaat("sp0_flying_ability"), &iVar16, -1);
	}
	else if (func_365(1))
	{
		unk_0x2553A7EB99AABF55(joaat("sp1_flying_ability"), &iVar16, -1);
	}
	else if (func_365(2))
	{
		unk_0x2553A7EB99AABF55(joaat("sp2_flying_ability"), &iVar16, -1);
	}
	if (iVar16 < 40)
	{
		func_383(&(uParam0->f_741.f_198), &(uParam0->f_420[15 /*8*/]), 0.0047f, 0.0055f);
		unk_0x77F7F57845720991(1);
		Var17 = { uParam0->f_316[22 /*2*/] };
		Var19 = { uParam0->f_741.f_198 };
		if (!bLocal_618)
		{
			Var19.f_9 = (Var19.f_9 - 0.08f);
			func_377(&Var17, &Var19);
		}
		if (bLocal_618)
		{
			func_363(&(uParam0->f_420[14 /*8*/]), "FLY_STAT_WARN", &Var17, &Var19, 27f, 2f, 5, 159f);
		}
		else
		{
			func_363(&(uParam0->f_420[14 /*8*/]), "FLY_STAT_WARN", &Var17, &Var19, 18f, 1.55f, 5, 106f);
		}
		func_388(uParam0->f_420[14 /*8*/], 0, 0);
		func_393("Shared", "Info_Icon_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
		func_386(&(uParam0->f_316[22 /*2*/]), &(uParam0->f_741.f_198), "FLY_STAT_WARN", 0);
		func_380(&(uParam0->f_741.f_198));
	}
	StringCopy(&Var30, "SPR_DESC_", 16);
	StringIntConCat(&Var30, Global_103469 + 1, 16);
	func_378(uParam0[7 /*9*/], 1);
	func_393("SPRRaces", &Var30, uParam0[7 /*9*/], 0, 0, 5, 0);
	func_383(&(uParam0->f_741.f_198), &(uParam0->f_420[25 /*8*/]), 0.0047f, 0.0055f);
	unk_0x77F7F57845720991(1);
	StringCopy(&cVar34, "SPR_DESC_", 16);
	if (bVar4)
	{
		StringIntConCat(&cVar34, Global_103469 + 1, 16);
	}
	else
	{
		StringIntConCat(&cVar34, 0, 16);
	}
	Var38 = { uParam0->f_316[16 /*2*/] };
	Var40 = { uParam0->f_741.f_198 };
	if (!bLocal_618)
	{
		Var40.f_9 = (Var40.f_9 - 0.108f);
		func_377(&Var38, &Var40);
	}
	if (bLocal_618)
	{
		func_363(&(uParam0->f_420[25 /*8*/]), &cVar34, &Var38, &Var40, 27f, 2f, 5, 159f);
	}
	else
	{
		func_363(&(uParam0->f_420[25 /*8*/]), &cVar34, &Var38, &Var40, 18f, 1.55f, 5, 106f);
	}
	func_388(uParam0->f_420[25 /*8*/], 0, 0);
	func_386(&(uParam0->f_316[16 /*2*/]), &(uParam0->f_741.f_198), &cVar34, 0);
	func_380(&(uParam0->f_741.f_198));
	func_387(&(uParam0->f_741.f_198));
	func_386(&(uParam0->f_316[4 /*2*/]), &(uParam0->f_741.f_198), "SPR_AWARDS_SUB", 0);
	func_386(&(uParam0->f_316[8 /*2*/]), &(uParam0->f_741.f_198), "SPR_BEST", 0);
	func_384(&(uParam0->f_741.f_198));
	func_388(uParam0->f_420[22 /*8*/], 0, 0);
	func_383(&(uParam0->f_741.f_198), &(uParam0->f_420[22 /*8*/]), 0, 0);
	func_371(&(uParam0->f_316[13 /*2*/]), &(uParam0->f_741.f_198), unk_0xF34EE736CF047844(Local_51.f_112[Global_103469]) * 1000, 6, "", 1, 0);
	func_380(&(uParam0->f_741.f_198));
	func_388(uParam0->f_420[23 /*8*/], 0, 0);
	func_383(&(uParam0->f_741.f_198), &(uParam0->f_420[23 /*8*/]), 0, 0);
	func_371(&(uParam0->f_316[14 /*2*/]), &(uParam0->f_741.f_198), unk_0xF34EE736CF047844((((Local_51.f_112[Global_103469] - Local_51.f_106[Global_103469]) / 2f) + Local_51.f_106[Global_103469])) * 1000, 6, "", 1, 0);
	func_380(&(uParam0->f_741.f_198));
	func_388(uParam0->f_420[24 /*8*/], 0, 0);
	func_383(&(uParam0->f_741.f_198), &(uParam0->f_420[24 /*8*/]), 0, 0);
	func_371(&(uParam0->f_316[15 /*2*/]), &(uParam0->f_741.f_198), unk_0xF34EE736CF047844(Local_51.f_106[Global_103469]) * 1000, 6, "", 1, 0);
	func_380(&(uParam0->f_741.f_198));
	func_387(&(uParam0->f_741.f_198));
}

float func_363(var uParam0, char* sParam1, float fParam2, var uParam3, float fParam4, float fParam5, int iParam6, float fParam7)
{
	int iVar0;
	int iVar1;
	
	func_364(uParam3, 0);
	unk_0x1099CBF49396B795(sParam1);
	iVar0 = unk_0xDCC26C786B8D41DB(*fParam2, fParam2->f_1);
	iVar1 = 720;
	if (!unk_0x3CCF948E5BFC63FE())
	{
		iVar1 = 480;
	}
	uParam0->f_3 = func_255(((unk_0xBBDA792448DB5A89(iVar0) * fParam4) - fParam5), iVar1);
	uParam0->f_1 = func_255(((fParam7 + ((unk_0xBBDA792448DB5A89(iParam6) + (unk_0xBBDA792448DB5A89(iVar0) * 0.5f)) * fParam4)) - (fParam5 * 0.5f)), iVar1);
	return 0f;
}

void func_364(var uParam0, bool bParam1)
{
	unk_0x4E250FE9E4D8720F(*uParam0);
	if (!uParam0->f_8 == 0f || !uParam0->f_9 == 0f)
	{
		unk_0x7A1F4BBECE23C9E3(uParam0->f_8, uParam0->f_9);
	}
	unk_0xD1F2C9FF58856AEC(uParam0->f_1, uParam0->f_2);
	unk_0x52D4D0409C49DF8C(uParam0->f_3, uParam0->f_4, uParam0->f_5, uParam0->f_6);
	switch (uParam0->f_7)
	{
		case 0:
			break;
		
		case 1:
			unk_0xC281192783C5BD3D();
			unk_0x473B15F195A283BE();
			break;
		
		case 3:
			unk_0x473B15F195A283BE();
			break;
		
		case 2:
			unk_0xC281192783C5BD3D();
			break;
	}
	if (bParam1)
	{
		unk_0x38C75B31337B3454(4);
	}
}

bool func_365(int iParam0)
{
	func_155();
	return iParam0 == Global_104439.f_2244.f_539.f_4301;
}

void func_366(var uParam0)
{
	func_367(uParam0, 107);
}

void func_367(var uParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0xB922891BFD232C45(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_4 = uVar0;
	uParam0->f_5 = uVar1;
	uParam0->f_6 = uVar2;
}

void func_368(var uParam0)
{
	func_367(uParam0, 108);
}

void func_369(var uParam0)
{
	func_367(uParam0, 109);
}

void func_370(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 128;
}

void func_371(var uParam0, var uParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	char* sVar0;
	
	if (func_374())
	{
		func_364(uParam1, 0);
		unk_0x9AC742C2470DD649(iParam6);
		unk_0xAC1B647E90E8412A(iParam5);
		if (func_50(sParam4))
		{
			sVar0 = "STRING";
		}
		else
		{
			sVar0 = sParam4;
		}
		unk_0x0B8B91F21AE25854(sVar0);
		unk_0xC2D818A5754306C0(iParam2, iParam3);
		unk_0x7E43DE6F9866B44B(func_373(*uParam0), func_372(uParam0->f_1), 0);
	}
}

float func_372(float fParam0)
{
	return (fParam0 + fLocal_13);
}

float func_373(float fParam0)
{
	return (fParam0 + fLocal_12);
}

int func_374()
{
	if (func_375())
	{
		return 1;
	}
	if (unk_0x5114FCEE2A997B95())
	{
		return 0;
	}
	if (unk_0x229840854A80E0D9() || unk_0x4413A34F0AAF1146())
	{
		return 0;
	}
	if (unk_0xC19E9068E7E4F6B0())
	{
		return 0;
	}
	return 1;
}

bool func_375()
{
	return Global_1312438;
}

void func_376(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 255;
}

void func_377(float fParam0, var uParam1)
{
	*fParam0 = (((*fParam0 - 0.5f) * 1.33f) + 0.5f);
	uParam1->f_8 = (((uParam1->f_8 - 0.5f) * 1.33f) + 0.5f);
	uParam1->f_9 = (((uParam1->f_9 - 0.5f) * 1.33f) + 0.5f);
}

void func_378(float fParam0, int iParam1)
{
	fParam0->f_4 = 255;
	fParam0->f_5 = 255;
	fParam0->f_6 = 255;
	if (iParam1 == 1)
	{
		fParam0->f_7 = 255;
	}
}

void func_379(float fParam0, bool bParam1)
{
	if (!bParam1)
	{
		*fParam0 = (((*fParam0 - 0.5f) * 1.33f) + 0.5f);
	}
	fParam0->f_2 = (fParam0->f_2 * 1.33f);
}

void func_380(var uParam0)
{
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
}

void func_381(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)
{
	var uVar0;
	
	uVar0 = sParam2;
	if (!func_50(uVar0))
	{
		if (func_374())
		{
			func_364(uParam1, 0);
			unk_0x9AC742C2470DD649(iParam4);
			unk_0xAC1B647E90E8412A(iParam3);
			func_382(func_373(*uParam0), func_372(uParam0->f_1), uVar0, 0);
		}
	}
}

void func_382(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0x0B8B91F21AE25854(uParam2);
	unk_0x7E43DE6F9866B44B(uParam0, uParam1, iParam3);
}

void func_383(var uParam0, var uParam1, float fParam2, float fParam3)
{
	uParam0->f_8 = (*uParam1 - (uParam1->f_2 / 2f));
	uParam0->f_9 = (*uParam1 + (uParam1->f_2 / 2f));
	uParam0->f_8 = (uParam0->f_8 + fParam2);
	uParam0->f_9 = (uParam0->f_9 - fParam3);
}

void func_384(var uParam0)
{
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	func_385(uParam0, 2);
}

void func_385(var uParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0xB922891BFD232C45(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_3 = uVar0;
	uParam0->f_4 = uVar1;
	uParam0->f_5 = uVar2;
}

void func_386(float fParam0, var uParam1, char* sParam2, bool bParam3)
{
	if (bParam3)
	{
		unk_0x38C75B31337B3454(1);
	}
	func_381(fParam0, uParam1, sParam2, 0, 0);
}

void func_387(var uParam0)
{
	func_385(uParam0, 1);
}

void func_388(struct<8> Param0, int iParam8, int iParam9)
{
	struct<8> Var0;
	
	Var0 = { Param0 };
	switch (iParam8)
	{
		case 2:
			func_392(&Var0);
			break;
		
		case 1:
			func_391(&Var0);
			break;
		
		case 3:
			func_390(&Var0);
			break;
		
		case 4:
			func_389(&Var0);
			break;
	}
	if (func_374())
	{
		if (iParam9 == 1)
		{
			unk_0x45A34FA87FBE9599(func_373(Var0.f_0), func_372(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, 0);
		}
		else
		{
			unk_0x45A34FA87FBE9599(func_373(Var0.f_0), func_372(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, 0);
		}
	}
}

void func_389(var uParam0)
{
	uParam0->f_4 = 200;
	uParam0->f_5 = 20;
	uParam0->f_6 = 20;
	uParam0->f_7 = 204;
}

void func_390(var uParam0)
{
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = 255;
}

void func_391(var uParam0)
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_392(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 150;
}

void func_393(char* sParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<9> Var0;
	
	Var0 = { *fParam2 };
	switch (iParam4)
	{
		case 0:
			func_400(&Var0);
			break;
		
		case 1:
			func_399(&Var0);
			break;
		
		case 5:
			func_398(&Var0);
			break;
		
		case 6:
			func_397(&Var0);
			break;
		
		case 7:
			func_396(&Var0);
			break;
		
		case 8:
			func_395(&Var0);
			break;
		
		case 9:
			func_394(&Var0);
			break;
	}
	if (func_374())
	{
		unk_0x38C75B31337B3454(iParam5);
		if (iParam3 == 1)
		{
			unk_0x1638116285563DAD(sParam0, sParam1, func_373(Var0.f_0), func_372(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		else
		{
			unk_0x1638116285563DAD(sParam0, sParam1, func_373(Var0.f_0), func_372(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		unk_0x38C75B31337B3454(4);
	}
}

void func_394(var uParam0)
{
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
}

void func_395(var uParam0)
{
	uParam0->f_7 = 2;
}

void func_396(var uParam0)
{
	uParam0->f_7 = 5;
}

void func_397(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
}

void func_398(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
}

void func_399(var uParam0)
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_400(var uParam0)
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
}

int func_401(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_527 == 1)
	{
		return 1;
	}
	if (iLocal_528)
	{
		return 0;
	}
	if (unk_0x83666F9FB8FEBD4B() < 500)
	{
		return 1;
	}
	if (bLocal_526)
	{
		if (unk_0xBF946CEEECD8C935(2, 201))
		{
			iLocal_520 = unk_0x6307C3D1D866114A();
			unk_0x18F1BFAF88AC511B(iLocal_520, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			iLocal_527 = 1;
			iLocal_528 = 1;
			*uParam0 = 0;
			return 1;
		}
		else if (unk_0xBF946CEEECD8C935(2, 202))
		{
			iLocal_520 = unk_0x6307C3D1D866114A();
			unk_0x18F1BFAF88AC511B(iLocal_520, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			unk_0x8C361F37C04084F4(1);
			func_528(&(Local_51.f_119));
			iLocal_527 = 1;
		}
		else
		{
			return 1;
		}
	}
	else if (unk_0xBF946CEEECD8C935(2, 202) || unk_0xBF946CEEECD8C935(2, 238))
	{
		iLocal_520 = unk_0x6307C3D1D866114A();
		unk_0x18F1BFAF88AC511B(iLocal_520, "QUIT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		func_247(&(Local_51.f_119), 0, 0, 1, 1);
		func_246(&(Local_51.f_119), "FE_HLP29", 2, 201, 1, 1, 0);
		func_246(&(Local_51.f_119), "FE_HLP31", 2, 202, 1, 1, 0);
		func_4(&uLocal_522);
		iLocal_527 = 1;
		unk_0x8C361F37C04084F4(1);
		return 1;
	}
	iVar0 = 0;
	if (unk_0x20551D6D924ED04B() && bLocal_526 == 0)
	{
		if (unk_0x8A984DAE7D3362C5(2))
		{
			Global_2606874 = func_405(0.201f, 0.222f, 0.198f, 0.0375f, 0.034f, 5, 255, 0, 1);
			func_404(0, Global_103469, 1);
			if (func_403())
			{
				if (Global_2606874 == Global_103469)
				{
					iVar0 = 1;
				}
				else
				{
					iLocal_520 = unk_0x6307C3D1D866114A();
					unk_0xDBD89513C012F1B9(iLocal_520, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
					Global_103469 = Global_2606874;
					func_528(&(Local_51.f_119));
				}
			}
		}
	}
	if (unk_0xBF946CEEECD8C935(2, 201) || iVar0 == 1)
	{
		iVar0 = 0;
		if (Global_104439.f_18904.f_12[Global_103469 /*8*/].f_4 == 0)
		{
			iLocal_520 = unk_0x6307C3D1D866114A();
			unk_0xDBD89513C012F1B9(iLocal_520, "CANCEL", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
		}
		else
		{
			iLocal_520 = unk_0x6307C3D1D866114A();
			unk_0xDBD89513C012F1B9(iLocal_520, "SELECT", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
			*uParam0 = 1;
			return 0;
		}
	}
	if ((unk_0xBF946CEEECD8C935(2, 188) || func_402(0, uParam1)) || unk_0xD887E21676314450(2, 241))
	{
		iVar1 = (Global_103469 - 1);
		if (iVar1 < 0)
		{
			iVar1 = 4;
		}
		iLocal_520 = unk_0x6307C3D1D866114A();
		unk_0xDBD89513C012F1B9(iLocal_520, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
		Global_103469 = iVar1;
		func_528(&(Local_51.f_119));
	}
	if ((unk_0xBF946CEEECD8C935(2, 187) || func_402(1, uParam1)) || unk_0xD887E21676314450(2, 242))
	{
		iVar2 = Global_103469 + 1;
		if (iVar2 > 4)
		{
			iVar2 = 0;
		}
		iLocal_520 = unk_0x6307C3D1D866114A();
		unk_0xDBD89513C012F1B9(iLocal_520, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
		Global_103469 = iVar2;
		func_528(&(Local_51.f_119));
	}
	return 1;
}

bool func_402(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = unk_0xCDDADACC00BB60FC(2, 195);
	iVar2 = unk_0xCDDADACC00BB60FC(2, 196);
	if (unk_0x0C58CE21DE9AD283(iVar1) < 28 && unk_0x0C58CE21DE9AD283(iVar2) < 28)
	{
		*uParam1 = 1;
		uParam1->f_1 = 0;
		return 0;
	}
	if (unk_0x31CD6E9F83C10233() < uParam1->f_1 + 250)
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
		uParam1->f_1 = unk_0x31CD6E9F83C10233();
		*uParam1 = 0;
	}
	return bVar0;
}

int func_403()
{
	if (unk_0xFF512A008EA368FF(2))
	{
		if (Global_2606874 > -1)
		{
			if (unk_0xD887E21676314450(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_404(int iParam0, var uParam1, bool bParam2)
{
	if (!unk_0xFF512A008EA368FF(2))
	{
		return 0;
	}
	if (unk_0x957E53BB191CB24D() || unk_0x0CF4609684193305())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0xB540BA8B3C93460F();
	}
	if (Global_2606874 == -6)
	{
		unk_0x9658C2750CEDC927(4);
		if (iParam0 && unk_0x9148803485DEDF45(2, 237))
		{
			return 1;
		}
		else
		{
			Global_2606874 = -1;
			return 0;
		}
	}
	if (((Global_2606874 > -1 || Global_2606874 == -3) || Global_2606874 == -2) || unk_0x6D21C4D608240FA2())
	{
		unk_0x9658C2750CEDC927(1);
		return 0;
	}
	if (Global_2606874 == -1 && iParam0)
	{
		if (unk_0x9148803485DEDF45(2, 237))
		{
			unk_0x9658C2750CEDC927(4);
			Global_2606874 = -6;
			return 1;
		}
		else
		{
			unk_0x9658C2750CEDC927(3);
			return 0;
		}
	}
	unk_0x9658C2750CEDC927(1);
	return 0;
}

int func_405(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, bool bParam7, bool bParam8)
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
	if (!unk_0xFF512A008EA368FF(2))
	{
		return -1;
	}
	unk_0xC9621A9AD282CC14(2, 200, 1);
	unk_0xB540BA8B3C93460F();
	if (bParam8)
	{
		if (!unk_0x3CCF948E5BFC63FE())
		{
			fParam0 = (((fParam0 - 0.5f) * 1.33f) + 0.5f);
			fParam2 = (fParam2 * 1.33f);
		}
	}
	if (bParam7)
	{
		unk_0x661705F074A804D1(76, 84);
		unk_0x399D1A0AE11E61E3(-0.05f, -0.05f, 0f, 0f);
		fVar5 = fParam0;
		fVar6 = fParam1;
		unk_0x1CACB3334011FEAC(fParam0, fParam1, &fParam0, &fParam1);
		unk_0x26742F01C78031C2();
	}
	fVar0 = (fParam0 + fParam2);
	fVar1 = (fParam1 + (fParam3 * IntToFloat(iParam5)));
	fVar2 = unk_0xB3878AEB2FF752C6(2, 239);
	fVar3 = unk_0xB3878AEB2FF752C6(2, 240);
	if (((fVar2 >= fParam0 && fVar2 <= fVar0) && fVar3 >= fParam1) && fVar3 <= fVar1)
	{
		fVar4 = (fVar3 - fParam1);
		iVar7 = unk_0xF34EE736CF047844((fVar4 / fParam3));
		if (bParam7)
		{
			unk_0x661705F074A804D1(76, 84);
			unk_0x399D1A0AE11E61E3(-0.05f, -0.05f, 0f, 0f);
			func_406(fVar5, (fVar6 + (IntToFloat(iVar7) * fParam3)), fParam2, fParam4, 255, 255, 255, iParam6);
			unk_0x26742F01C78031C2();
		}
		else
		{
			func_406(fParam0, (fParam1 + (IntToFloat(iVar7) * fParam3)), fParam2, fParam4, 255, 255, 255, iParam6);
		}
		return iVar7;
	}
	return -1;
}

void func_406(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, var uParam7)
{
	unk_0x45A34FA87FBE9599((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, uParam7, 0);
}

int func_407()
{
	int iVar0;
	
	switch (iLocal_521)
	{
		case 0:
			unk_0x8C361F37C04084F4(1);
			unk_0x1D69C39ECF71C85C("SP_SPR", 3);
			unk_0x59B2F61C9D01132B("SPRRaces", 0);
			unk_0x59B2F61C9D01132B("MPHUD", 0);
			iLocal_521 = 1;
			break;
		
		case 1:
			if (unk_0x880B947519D91525("SP_SPR", 3))
			{
				if (unk_0xB56F0E1C89B9E069("SPRRaces"))
				{
					if (unk_0xB56F0E1C89B9E069("MPHUD"))
					{
						iLocal_521 = 2;
					}
				}
			}
			break;
		
		case 2:
			unk_0x7F165E259CFAC8B8(&(Local_51.f_119));
			Local_51.f_119 = 0;
			func_528(&(Local_51.f_119));
			if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
			{
				unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 0, 512);
			}
			func_128(1);
			unk_0xC61BAD7EEC1AD940(1);
			unk_0xFABEFEE17018AE2A(Local_51.f_1, 4);
			func_358();
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Local_51.f_11)
			{
				iLocal_531[iVar0] = -1;
				iVar0++;
			}
			func_411(&uLocal_619);
			func_408();
			unk_0xF177BD202464664F("MinigameTransitionIn", 0, 1);
			iLocal_521 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_408()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_104439.f_18904.f_12[iVar0 /*8*/] = { func_410(iVar0) };
		MemCopy(&(Local_51.f_24[iVar0 /*8*/]), {Global_104439.f_18904.f_12[iVar0 /*8*/]}, 8);
		Local_51.f_106[iVar0] = func_409(iVar0);
		Local_51.f_112[iVar0] = func_22(iVar0);
		if (iVar0 < (5 - 1))
		{
			if (Global_104439.f_18904.f_6[iVar0] > Local_51.f_112[iVar0] || Global_104439.f_18904.f_6[iVar0] <= 0f)
			{
				Global_104439.f_18904.f_12[iVar0 + 1 /*8*/].f_4 = 0;
			}
			else
			{
				Global_104439.f_18904.f_12[iVar0 + 1 /*8*/].f_4 = 1;
			}
		}
		iVar0++;
	}
	Global_104439.f_18904.f_12[0 /*8*/].f_4 = 1;
}

float func_409(int iParam0)
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

struct<4> func_410(int iParam0)
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

void func_411(var uParam0)
{
	func_414();
	bLocal_618 = unk_0x3CCF948E5BFC63FE();
	func_286(uParam0);
	func_264(&(uParam0->f_741));
	func_412(uParam0);
}

void func_412(var uParam0)
{
	bool bVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	
	bVar0 = unk_0x3CCF948E5BFC63FE();
	func_263(&(uParam0->f_316[0 /*2*/]), 262f, (71f - func_413(0.00278f, 720, 1)), 1);
	func_263(&(uParam0->f_316[1 /*2*/]), (257f + 127f), (125f - func_413(0.00417f, 720, 1)), 1);
	func_263(&(uParam0->f_316[2 /*2*/]), (513f + 127f), (125f - func_413(0.00417f, 720, 1)), 1);
	func_263(&(uParam0->f_316[3 /*2*/]), (769f + 127f), (125f - func_413(0.00417f, 720, 1)), 1);
	func_263(&(uParam0->f_316[17 /*2*/]), (257f + func_262(0.0047f, 1280, 1)), 162f, 1);
	func_263(&(uParam0->f_316[18 /*2*/]), (257f + func_262(0.0047f, 1280, 1)), 189f, 1);
	func_263(&(uParam0->f_316[19 /*2*/]), (257f + func_262(0.0047f, 1280, 1)), 216f, 1);
	func_263(&(uParam0->f_316[20 /*2*/]), (257f + func_262(0.0047f, 1280, 1)), 243f, 1);
	func_263(&(uParam0->f_316[21 /*2*/]), (257f + func_262(0.0047f, 1280, 1)), 270f, 1);
	func_263(&(uParam0->f_316[22 /*2*/]), (257f + func_262(0.0047f, 1280, 1)), 297f, 1);
	func_263(&(uParam0->f_316[16 /*2*/]), (513f + func_262(0.0047f, 1280, 1)), (299f - func_413(0.00278f, 720, 1)), 1);
	func_263(&(uParam0->f_316[4 /*2*/]), (769f + func_262(0.0047f, 1280, 1)), 297f, 1);
	func_263(&(uParam0->f_316[5 /*2*/]), 769f, 297f, 1);
	func_263(&(uParam0->f_316[8 /*2*/]), (769f + func_262(0.0047f, 1280, 1)), 351f, 1);
	func_263(&(uParam0->f_316[9 /*2*/]), 324f, 351f, 1);
	func_263(&(uParam0->f_316[6 /*2*/]), (769f + func_262(0.0047f, 1280, 1)), (324f - func_413(0.00278f, 720, 1)), 1);
	func_263(&(uParam0->f_316[7 /*2*/]), 324f, (324f - func_413(0.00278f, 720, 1)), 1);
	func_263(&(uParam0->f_316[15 /*2*/]), 810f, 459f, 1);
	func_263(&(uParam0->f_316[14 /*2*/]), 896f, 459f, 1);
	func_263(&(uParam0->f_316[13 /*2*/]), 982f, 459f, 1);
	func_259(uParam0[0 /*9*/], 257f, 55f, 766f, 105f, 1);
	unk_0xB922891BFD232C45(117, &uVar1, &uVar2, &uVar3, &uVar4);
	func_258(uParam0[0 /*9*/], uVar1, uVar2, uVar3, uVar4);
	func_259(uParam0[1 /*9*/], 496f, 171f, 32f, 32f, 0);
	func_258(uParam0[1 /*9*/], 255, 255, 255, 255);
	func_259(uParam0[2 /*9*/], 496f, 198f, 32f, 32f, 0);
	func_258(uParam0[2 /*9*/], 255, 255, 255, 255);
	func_259(uParam0[3 /*9*/], 496f, 225f, 32f, 32f, 0);
	func_258(uParam0[3 /*9*/], 255, 255, 255, 255);
	func_259(uParam0[4 /*9*/], 496f, 252f, 32f, 32f, 0);
	func_258(uParam0[4 /*9*/], 255, 255, 255, 255);
	func_259(uParam0[5 /*9*/], 496f, 279f, 32f, 32f, 0);
	func_258(uParam0[5 /*9*/], 255, 255, 255, 255);
	func_259(uParam0[6 /*9*/], (486f + func_262(0.0047f, 1280, 1)), 310f, 32f, 32f, 0);
	func_258(uParam0[6 /*9*/], 255, 255, 255, 255);
	func_259(uParam0[7 /*9*/], 640f, 224f, 256f, 256f, 0);
	func_258(uParam0[7 /*9*/], 255, 255, 255, 255);
	func_259(uParam0[9 /*9*/], 896f, 223f, 128f, 128f, 0);
	func_258(uParam0[9 /*9*/], 255, 255, 255, 255);
	func_259(uParam0[13 /*9*/], 770.5f, 374.5f, 80f, 80f, 1);
	func_258(uParam0[13 /*9*/], 255, 255, 255, 255);
	func_259(uParam0[12 /*9*/], 856f, 374.5f, 80f, 80f, 1);
	func_258(uParam0[12 /*9*/], 255, 255, 255, 255);
	func_259(uParam0[11 /*9*/], 941.5f, 374.5f, 80f, 80f, 1);
	func_258(uParam0[11 /*9*/], 255, 255, 255, 255);
	func_253(&(uParam0->f_420[3 /*8*/]), 257f, 114f, 254f, 5f, 1);
	func_252(&(uParam0->f_420[3 /*8*/]), 70, 70, 130, 255);
	func_253(&(uParam0->f_420[4 /*8*/]), 513f, 114f, 254f, 5f, 1);
	func_252(&(uParam0->f_420[4 /*8*/]), 70, 70, 130, 255);
	func_253(&(uParam0->f_420[5 /*8*/]), 769f, 114f, 254f, 5f, 1);
	func_252(&(uParam0->f_420[5 /*8*/]), 70, 70, 130, 255);
	func_253(&(uParam0->f_420[0 /*8*/]), 257f, 119f, 254f, 26f, 1);
	func_251(&(uParam0->f_420[0 /*8*/]), 1, 1);
	func_253(&(uParam0->f_420[1 /*8*/]), 513f, 119f, 254f, 26f, 1);
	func_251(&(uParam0->f_420[1 /*8*/]), 1, 1);
	func_253(&(uParam0->f_420[2 /*8*/]), 769f, 119f, 254f, 26f, 1);
	func_251(&(uParam0->f_420[2 /*8*/]), 1, 1);
	func_253(&(uParam0->f_420[7 /*8*/]), 513f, 159f, 254f, 133f, 1);
	func_251(&(uParam0->f_420[7 /*8*/]), 117, 1);
	func_253(&(uParam0->f_420[8 /*8*/]), 769f, 159f, 254f, 133f, 1);
	func_251(&(uParam0->f_420[8 /*8*/]), 117, 1);
	func_253(&(uParam0->f_420[9 /*8*/]), 257f, 159f, 254f, 25f, 1);
	func_251(&(uParam0->f_420[9 /*8*/]), 117, 1);
	func_253(&(uParam0->f_420[10 /*8*/]), 257f, 186f, 254f, 25f, 1);
	func_251(&(uParam0->f_420[10 /*8*/]), 117, 1);
	func_253(&(uParam0->f_420[11 /*8*/]), 257f, 213f, 254f, 25f, 1);
	func_251(&(uParam0->f_420[11 /*8*/]), 117, 1);
	func_253(&(uParam0->f_420[12 /*8*/]), 257f, 240f, 254f, 25f, 1);
	func_251(&(uParam0->f_420[12 /*8*/]), 117, 1);
	func_253(&(uParam0->f_420[13 /*8*/]), 257f, 267f, 254f, 25f, 1);
	func_251(&(uParam0->f_420[13 /*8*/]), 117, 1);
	func_253(&(uParam0->f_420[26 /*8*/]), 257f, 294f, 254f, 2f, 1);
	func_251(&(uParam0->f_420[26 /*8*/]), 1, 1);
	func_253(&(uParam0->f_420[14 /*8*/]), 257f, 294f, 254f, 75f, 1);
	func_251(&(uParam0->f_420[14 /*8*/]), 117, 1);
	func_253(&(uParam0->f_420[15 /*8*/]), 257f, 294f, (254f - 32f), 75f, 1);
	func_251(&(uParam0->f_420[15 /*8*/]), 1, 1);
	func_253(&(uParam0->f_420[25 /*8*/]), 513f, 294f, 254f, 133f, 1);
	func_251(&(uParam0->f_420[25 /*8*/]), 117, 1);
	func_253(&(uParam0->f_420[16 /*8*/]), 769f, 294f, 254f, 25f, 1);
	func_251(&(uParam0->f_420[16 /*8*/]), 117, 1);
	func_253(&(uParam0->f_420[17 /*8*/]), 769f, 321f, 254f, 25f, 1);
	func_251(&(uParam0->f_420[17 /*8*/]), 117, 1);
	func_253(&(uParam0->f_420[18 /*8*/]), 769f, 348f, 254f, 25f, 1);
	func_251(&(uParam0->f_420[18 /*8*/]), 117, 1);
	func_253(&(uParam0->f_420[21 /*8*/]), 769f, 375f, 83f, 84f, 1);
	func_251(&(uParam0->f_420[21 /*8*/]), 117, 1);
	func_253(&(uParam0->f_420[20 /*8*/]), 854f, 375f, 84f, 84f, 1);
	func_251(&(uParam0->f_420[20 /*8*/]), 117, 1);
	func_253(&(uParam0->f_420[19 /*8*/]), 940f, 375f, 83f, 84f, 1);
	func_251(&(uParam0->f_420[19 /*8*/]), 117, 1);
	func_253(&(uParam0->f_420[22 /*8*/]), 769f, 456f, 83f, 25f, 1);
	func_251(&(uParam0->f_420[22 /*8*/]), 109, 1);
	func_253(&(uParam0->f_420[23 /*8*/]), 854f, 456f, 84f, 25f, 1);
	func_251(&(uParam0->f_420[23 /*8*/]), 108, 1);
	func_253(&(uParam0->f_420[24 /*8*/]), 940f, 456f, 83f, 25f, 1);
	func_251(&(uParam0->f_420[24 /*8*/]), 107, 1);
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

float func_413(float fParam0, int iParam1, bool bParam2)
{
	var uVar0;
	float fVar1;
	
	if (iParam1 == 0)
	{
		unk_0x68824FF629FFAE6D(&uVar0, &iParam1);
	}
	fVar1 = (fParam0 * IntToFloat(iParam1));
	if (bParam2)
	{
		return unk_0xBBDA792448DB5A89(unk_0xF2DB717A73826179(fVar1));
	}
	return fVar1;
}

void func_414()
{
	int iVar0;
	
	unk_0x5B96F424DF975F3A();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1838575.f_81[iVar0] = 0;
		iVar0++;
	}
}

void func_415(var uParam0)
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

int func_416(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (unk_0xED5FFF2E0422067E())
	{
		if (!iLocal_529)
		{
			iVar0 = 0;
			if (uParam0->f_358[0 /*189*/].f_13 > 0f)
			{
				if (uParam0->f_358[0 /*189*/].f_13 <= Local_51.f_106[Local_51.f_10])
				{
					iVar0 = 1;
				}
				else if (uParam0->f_358[0 /*189*/].f_13 <= (((Local_51.f_112[Local_51.f_10] - Local_51.f_106[Local_51.f_10]) / 2f) + Local_51.f_106[Local_51.f_10]))
				{
					iVar0 = 2;
				}
				else if (uParam0->f_358[0 /*189*/].f_13 <= Local_51.f_112[Local_51.f_10])
				{
					iVar0 = 3;
				}
			}
			if (iVar0 == 0)
			{
			}
			func_444(Local_51.f_10, &(Local_51.f_65[Local_51.f_10 /*8*/]));
			if (bParam1)
			{
				func_441(Local_51.f_10, uParam0->f_358[0 /*189*/].f_13, iVar0);
				iLocal_529 = 1;
				return 1;
			}
			else if (func_417(Local_51.f_10, uParam0->f_358[0 /*189*/].f_13, iVar0))
			{
				iLocal_529 = 1;
				return 1;
			}
		}
	}
	else if (bParam1)
	{
		iLocal_529 = 1;
	}
	return 0;
}

int func_417(int iParam0, float fParam1, int iParam2)
{
	if (Global_1835013.f_1 && !Global_1835013.f_2)
	{
		func_441(iParam0, fParam1, iParam2);
		Global_1835013.f_2 = 1;
	}
	if (func_418(&uLocal_1606))
	{
		Global_1835388 = 1;
		return 1;
	}
	return 0;
}

int func_418(var uParam0)
{
	struct<98> Var0;
	struct<4> Var98;
	struct<37> Var106;
	struct<13> Var175;
	int iVar188;
	
	Var0.f_19.f_1 = 4;
	Var106.f_3 = 32;
	Var106.f_36 = 32;
	if (func_440(uParam0->f_44))
	{
		Var175 = { Global_1835013.f_361 };
	}
	else
	{
		Var175 = { func_439(unk_0x3D35F9864E4640B1()) };
	}
	switch (Global_1835013)
	{
		case 0:
			if (func_438(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &Var175))
			{
				func_437(&Var98, &(uParam0->f_44));
				Global_1835013.f_142 = uParam0->f_44;
				Global_1835013.f_142.f_1 = unk_0x0B897325D9A93642(uParam0->f_44, 0);
				iVar188 = 0;
				while (iVar188 < Global_1835013.f_142.f_1)
				{
					if (!func_436(uParam0->f_44, iVar188))
					{
						if (func_435(uParam0->f_44, 4, iVar188))
						{
							unk_0xCD7E92DE2BFA0B0D(&(Global_1835013.f_142.f_2), iVar188);
						}
						else
						{
							unk_0xD804ACF2A7171150(&(Global_1835013.f_142.f_2), iVar188);
						}
					}
					iVar188++;
				}
				if (uParam0->f_5 && unk_0x360655C8E2BDFEC1(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						unk_0xC2F7B578646A3EC1(0, &Var0);
						if (Var0.f_97 != Global_1835013.f_142.f_1)
						{
						}
						if (!func_434(Var0))
						{
							Global_1835013.f_4 = 1;
						}
						else
						{
							iVar188 = 0;
							while (iVar188 < Global_1835013.f_142.f_1)
							{
								if (!func_436(uParam0->f_44, iVar188))
								{
									if (func_435(uParam0->f_44, 4, iVar188))
									{
										Global_1835013.f_73.f_36[iVar188] = unk_0xF8062BE67BAF24C8(0, iVar188);
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
										Global_1835013.f_73.f_3[iVar188] = unk_0xB5BFE902D3C42807(0, iVar188);
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
					unk_0xFD293D325337DBD7();
				}
				else
				{
					Global_1835013.f_4 = 1;
				}
				Global_1835013 = 1;
				func_355(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 1:
			Global_1835013.f_1 = 1;
			if (Global_1835013.f_2)
			{
				func_433();
				if (Global_1835013.f_4)
				{
					if (func_432(uParam0->f_44))
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
			unk_0x092AA112D47FE733(&(Global_1835013.f_73), &(Global_1835013.f_142), &(Global_1835013.f_211));
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
			if (unk_0x27CA09C6DFAB1E79() && func_431())
			{
				if (func_430())
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
			if (func_432(uParam0->f_44))
			{
				Global_1835013.f_280 = { Global_1835013.f_142 };
			}
			else
			{
				Var106.f_0 = Global_1835013.f_142;
				Var106.f_1 = Global_1835013.f_142.f_1;
				Var106.f_2 = Global_1835013.f_142.f_2;
				unk_0x092AA112D47FE733(&Var106, &(Global_1835013.f_142), &(Global_1835013.f_280));
			}
			Global_1835013 = 100;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 100:
			if (func_419(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, &Var175, 1, 1, Global_1835013.f_280.f_36[0], Global_1835013.f_280.f_3[0]))
			{
				func_437(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x360655C8E2BDFEC1(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						unk_0xC2F7B578646A3EC1(0, &Var0);
						if (unk_0xB3404E397FF56B3B(&(Var0.f_13), ""))
						{
							Global_979575.f_1 = -1;
						}
						else
						{
							Global_979575.f_1 = Var0.f_96;
						}
					}
					else
					{
						Global_979575.f_1 = -1;
					}
					unk_0xFD293D325337DBD7();
				}
				else
				{
					Global_979575.f_1 = -1;
				}
				Global_1835013 = 999;
				func_355(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 999:
			return 1;
			break;
	}
	return 0;
}

int func_419(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
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
			if (!func_426() && !func_422())
			{
				func_420(*uParam2);
				if (bParam5)
				{
					if (unk_0x2A3398C6222EB190(Global_1835013.f_142.f_2, 0))
					{
						if (unk_0xEB8700D3E849D9FD(uParam2, uVar0, iParam3))
						{
							*uParam0++;
						}
						else
						{
							*uParam1 = 0;
							*uParam0 = 3;
						}
					}
					else if (unk_0xE64A80A161C007AD(uParam2, uVar1, iParam3))
					{
						*uParam0++;
					}
					else
					{
						*uParam1 = 0;
						*uParam0 = 3;
					}
				}
				else if (unk_0x97519B8E5ABDB709(uParam2, iParam3, uParam4))
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
			if (!unk_0x483FB87EA49EC813(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x96F7B8B36FDB1B9C(*uParam2, uParam2->f_1, 0))
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

void func_420(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)
{
	Global_1835008 = 1;
	func_421(&(Global_1835008.f_1), 1, 0);
	Global_1835008.f_3 = Param0.f_0;
	Global_1835008.f_4 = Param0.f_1;
}

void func_421(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x27CA09C6DFAB1E79() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x898811EA80D35DE2();
		}
		else
		{
			*uParam0 = unk_0x51A193745FDE917D();
		}
	}
	else
	{
		*uParam0 = unk_0x31CD6E9F83C10233();
	}
	uParam0->f_1 = 1;
}

int func_422()
{
	if (unk_0x957E53BB191CB24D() && !func_423())
	{
		return 1;
	}
	return 0;
}

bool func_423()
{
	return func_424(unk_0x3D35F9864E4640B1());
}

int func_424(int iParam0)
{
	switch (func_425(iParam0))
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

int func_425(int iParam0)
{
	return Global_1593076[iParam0 /*647*/].f_189;
}

int func_426()
{
	if (unk_0x50EECC0E29B921C3() || Global_1835008)
	{
		func_427();
		return 1;
	}
	return 0;
}

void func_427()
{
	if (func_428(&(Global_1835008.f_1), 120000, 1))
	{
		unk_0x6D26D20288D66A19(Global_1835008.f_3, Global_1835008.f_4, -1);
		Global_1835008 = 0;
		func_350(&(Global_1835008.f_1));
	}
}

int func_428(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_429(uParam0, bParam2, 0);
	if (unk_0x27CA09C6DFAB1E79() && !bParam2)
	{
		if (unk_0x0C58CE21DE9AD283(unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x0C58CE21DE9AD283(unk_0xBC0BAC39A2995602(unk_0x31CD6E9F83C10233(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_429(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x27CA09C6DFAB1E79() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x898811EA80D35DE2();
			}
			else
			{
				*uParam0 = unk_0x51A193745FDE917D();
			}
		}
		else
		{
			*uParam0 = unk_0x31CD6E9F83C10233();
		}
		uParam0->f_1 = 1;
	}
}

bool func_430()
{
	return unk_0x2A3398C6222EB190(Global_970998.f_8, 1);
}

var func_431()
{
	return Global_2453457.f_3;
}

int func_432(int iParam0)
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

void func_433()
{
	Global_1835013.f_73 = Global_1835013.f_142;
	Global_1835013.f_73.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_73.f_2 = Global_1835013.f_142.f_2;
	Global_1835013.f_211 = Global_1835013.f_142;
	Global_1835013.f_211.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_211.f_2 = Global_1835013.f_142.f_2;
}

bool func_434(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x3E72C35EA9759781(&uParam0, 13);
}

int func_435(int iParam0, int iParam1, int iParam2)
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
	iVar0 = unk_0xDB2AB5CF39682F77(iParam0, iParam1, iParam2);
	switch (iVar0)
	{
		case 1:
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_436(int iParam0, int iParam1)
{
	if (unk_0x73B3A7F61ADF183E(iParam0, 4, iParam1) == 156)
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

void func_437(var uParam0, var uParam1)
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0;
}

int func_438(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_426() && !func_422())
			{
				func_420(*uParam2);
				if (unk_0x3BEA079A30B0761A(uParam2, uParam3))
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
			if (!unk_0x483FB87EA49EC813(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x96F7B8B36FDB1B9C(*uParam2, uParam2->f_1, 0))
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

struct<13> func_439(int iParam0)
{
	struct<13> Var0;
	
	unk_0xA82433D60351864D(iParam0, &Var0, 13);
	return Var0;
}

int func_440(int iParam0)
{
	if (iParam0 == 825 || iParam0 == 828)
	{
		return 1;
	}
	return 0;
}

void func_441(int iParam0, float fParam1, int iParam2)
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
	if (func_443(817, &Var3, &Var22, 3, -1, 1, 0))
	{
		if (iParam2 <= 3 && iParam2 > 0)
		{
			func_442(817, 131, -unk_0x11E019C8F43ACC8A((fParam1 * 100f)) * 10, 0f, 0);
		}
		else
		{
			func_442(817, 131, 0, 0f, 0);
		}
		func_442(817, 96, ((iVar0 * 1 + iVar1 * 2) + iVar2 * 3), 0f, 0);
		func_442(817, 2, unk_0x11E019C8F43ACC8A((fParam1 * 100f)) * 10, 0f, 0);
		func_442(817, 147, unk_0x11E019C8F43ACC8A((fParam1 * 100f)) * 10, 0f, 0);
		func_442(817, 149, 0, 0f, 0);
		func_442(817, 148, 0, 0f, 0);
		func_442(817, 109, 1, 0f, 0);
		func_442(817, 157, iVar0, 0f, 0);
		func_442(817, 158, iVar1, 0f, 0);
		func_442(817, 86, iVar2, 0f, 0);
	}
}

void func_442(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!bParam4)
	{
		unk_0x2AFDA789DC65D05E(iParam1, iParam2, fParam3);
	}
	if (!Global_1835013.f_3)
	{
		Global_1835013.f_142 = iParam0;
		Global_1835013.f_142.f_1 = unk_0x0B897325D9A93642(Global_1835013.f_142, 0);
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (iVar1 < Global_1835013.f_142.f_1)
			{
				if (iParam1 == 156)
				{
				}
				else if (func_435(iParam0, 4, iVar1))
				{
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835013.f_142.f_2), iVar1);
				}
				else
				{
					unk_0xD804ACF2A7171150(&(Global_1835013.f_142.f_2), iVar1);
				}
			}
			else
			{
				unk_0xD804ACF2A7171150(&(Global_1835013.f_142.f_2), iVar1);
			}
			iVar1++;
		}
		Global_1835013.f_3 = 1;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iParam1 == unk_0x73B3A7F61ADF183E(iParam0, 4, iVar1))
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
		unk_0xCD7E92DE2BFA0B0D(&(Global_1835013.f_142.f_2), iVar0);
	}
	else if (fParam3 != 0f)
	{
		unk_0xD804ACF2A7171150(&(Global_1835013.f_142.f_2), iVar0);
	}
}

int func_443(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar68;
	struct<13> Var69;
	var uVar82;
	
	if (!unk_0xE096BC82D913B3DB())
	{
	}
	if ((!unk_0x1E8C067EDC3AD10F() && (unk_0xF60A5AF58996CED2() || !unk_0xFEF369FFF9545F0F())) && unk_0x74EEAA6B0390949D())
	{
		Var0.f_2.f_1 = 4;
		Var0.f_0 = iParam0;
		if (iParam4 == -1)
		{
			if (unk_0x1AE803DF5F9B30C9())
			{
				Var69 = { func_439(unk_0x3D35F9864E4640B1()) };
				if (unk_0xF3F1AD16A136B115(&Var69))
				{
					if (unk_0x7838EB8661A32D68(&uVar82, 35, &Var69))
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
			if (unk_0x27CA09C6DFAB1E79() && Global_2453457.f_3)
			{
				unk_0x1FF7CB24A8A7BA22(&Var0, &(Global_1767185.f_10));
			}
			else
			{
				unk_0xC7DC4053FD4EB147(&Var0);
			}
		}
		return 1;
	}
	if (unk_0x1E8C067EDC3AD10F())
	{
	}
	if (!unk_0xF60A5AF58996CED2())
	{
	}
	if (unk_0xFEF369FFF9545F0F())
	{
	}
	if (!unk_0x74EEAA6B0390949D())
	{
	}
	return 0;
}

void func_444(int iParam0, char[4] cParam1)
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
	func_445(&uLocal_1606, 86, &Var0, cParam1, -1, -1, 0, 0);
}

void func_445(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	struct<8> Var0;
	struct<8> Var8;
	int iVar16;
	struct<6> Var17;
	
	if (!unk_0x0BD3CCFB6C6CFA91(sParam2))
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
				if (iParam5 > 0 && !func_452())
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
				if (iParam5 > 0 && !func_452())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
					if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
				if (iParam5 <= 0 || func_452())
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
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
				if (iParam5 > 0 && !func_452())
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
				if (iParam5 > 0 && !func_452())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
					if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
				if (iParam5 <= 0 || func_452())
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
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
				if (iParam5 > 0 && !func_452())
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
					unk_0x5C8EC7D9A566E1C4(unk_0x3D35F9864E4640B1(), &Var17);
					MemCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), {Var17}, 8);
					Global_1835390.f_2780.f_27 = 1;
				}
				if (iParam5 > 0 && !func_452())
				{
					uParam0->f_44.f_3 = 3;
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[2 /*16*/].f_8 = { Var8 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
					if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE", 32);
						StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE_NN", 32);
					}
				}
				if (iParam5 <= 0 || func_452())
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
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
				if (iParam5 > 0 && !func_452())
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
				if (iParam5 > 0 && !func_452())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
					if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
				if (iParam5 <= 0 || func_452())
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
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 1;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				Global_1835390.f_2779 = 0;
			}
			else if (iParam4 == 3)
			{
				if (iParam5 > 0 && !func_452())
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
				if (iParam5 > 0 && !func_452())
				{
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
					if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
				if (iParam5 <= 0 || func_452())
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
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
				if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
				unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
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
				if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
				unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
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
				if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
				unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
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
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
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
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
			unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
			if (unk_0x0BD3CCFB6C6CFA91(sParam3))
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
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
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
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
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
			unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
			MemCopy(&(Global_1835390.f_2780.f_9), {func_451(iParam1)}, 16);
			Global_1835390.f_2780.f_25 = 0;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WEAP", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 7;
			Global_1835390.f_2708 = 2;
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
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
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
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
			if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
				if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				Global_1835390.f_2780.f_28 = 6;
				Global_1835390.f_2780.f_29[0] = 5;
				Global_1835390.f_2780.f_29[1] = 11;
				Global_1835390.f_2780.f_29[2] = 4;
				Global_1835390.f_2780.f_29[3] = 5;
				Global_1835390.f_2780.f_29[4] = 5;
			}
			else if (Global_1641087.f_54 == 1)
			{
				uParam0->f_44 = 777;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835390.f_2780 = 1;
				if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
				{
					if (Global_1641087.f_2 == 5)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else if (Global_1641087.f_2 == 5)
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
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
				if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
				{
					if (Global_1641087.f_2 == 5)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else if (Global_1641087.f_2 == 5)
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				if (func_450(Global_1641087.f_116067) || func_447(Global_1641087.f_116067))
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 0;
					Global_1835390.f_2710[1] = 2;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2708 = 2;
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					Global_1835390.f_2780.f_28 = 4;
					Global_1835390.f_2780.f_29[0] = 5;
					Global_1835390.f_2780.f_29[1] = 5;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1835390.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 0;
					Global_1835390.f_2710[1] = 1;
					Global_1835390.f_2710[2] = 2;
					Global_1835390.f_2710[3] = 0;
					Global_1835390.f_2708 = 3;
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 5;
					Global_1835390.f_2780.f_29[1] = 5;
					Global_1835390.f_2780.f_29[2] = 5;
					Global_1835390.f_2780.f_29[3] = 5;
				}
			}
			break;
		
		case 8:
			uParam0->f_44 = 795;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835390.f_2780 = 1;
			if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2768), 1);
			Global_1835390.f_2754[1] = -1;
			Global_1835390.f_2710[2] = 2;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 3;
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
			if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
					if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
					if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
					unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
					if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
					unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
					if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
					unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
			if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
			unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
			if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
			if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
			unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xD804ACF2A7171150(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
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
			if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
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
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
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
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
		if (unk_0x2A3398C6222EB190(Global_1835390.f_2769, Global_1835390.f_2710[iVar16]))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2770), iVar16);
		}
		iVar16++;
	}
	Global_1835390.f_2826 = func_446(Var0, uParam0->f_44, iParam1, iParam4, iParam5, bParam6);
}

int func_446(struct<8> Param0, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	char cVar0[64];
	
	MemCopy(&cVar0, {Param0}, 16);
	StringIntConCat(&cVar0, iParam8, 64);
	StringConCat(&cVar0, "_", 64);
	if (func_440(iParam8))
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
	return unk_0x50B7853132D8438E(&cVar0);
}

var func_447(int iParam0)
{
	return (func_449(iParam0) || func_448(iParam0));
}

bool func_448(int iParam0)
{
	return iParam0 == 44;
}

bool func_449(int iParam0)
{
	return iParam0 == 45;
}

bool func_450(int iParam0)
{
	return iParam0 == 12;
}

struct<6> func_451(int iParam0)
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

int func_452()
{
	if (((((((Global_1641087.f_46375 == 1 || Global_1641087.f_46375 == 3) || Global_1641087.f_46375 == 5) || Global_1641087.f_46375 == 7) || Global_1641087.f_46375 == 8) || Global_1641087.f_46375 == 9) || Global_1641087.f_46375 == 11) || Global_1641087.f_46375 == 13)
	{
		return 1;
	}
	return 0;
}

int func_453(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 2;
	if (Global_1840922.f_2 + 5 < unk_0xA83FFA3FA7711E6D() && Global_1840922.f_2 > 0)
	{
		func_350(&Global_1840922);
		func_350(&(Global_1840922.f_49));
		*uParam0 = 0;
		Global_1840922.f_2 = 0;
		func_462(0);
	}
	Global_1840922.f_2 = unk_0xA83FFA3FA7711E6D();
	iVar1 = -1;
	if (unk_0x43F4A6D2081CC5ED())
	{
		if (unk_0xA62421972698424D() == 0)
		{
			iVar1 = unk_0x0B6EBEB489CB4646();
		}
	}
	if ((unk_0x43F4A6D2081CC5ED() && (((iVar1 == 4 || iVar1 == 2) || iVar1 == 1) || iVar1 == 5)) || (!func_460() && unk_0xE096BC82D913B3DB()))
	{
		if (unk_0x4EB878E178DC1C9A())
		{
			func_457(&(Global_1840922.f_3), func_459(&(Global_1840922.f_3)));
			if (!unk_0x2A3398C6222EB190(*uParam0, 4))
			{
				unk_0xCD7E92DE2BFA0B0D(uParam0, 4);
				StringCopy(&(Global_1840922.f_3.f_1), "", 64);
				func_455(&(Global_1840922.f_3), 0);
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
			else if (!func_460())
			{
				unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_ROS", iVar0, 0, 0, -1, 0, 0, 1);
			}
			if (!unk_0x2A3398C6222EB190(*uParam0, 0))
			{
				if (!unk_0x9148803485DEDF45(2, 201))
				{
					unk_0xCD7E92DE2BFA0B0D(uParam0, 0);
				}
			}
			else if (unk_0xBF946CEEECD8C935(2, 201))
			{
				func_350(&(Global_1840922.f_49));
				func_350(&Global_1840922);
				*uParam0 = 0;
				Global_1840922.f_2 = 0;
				func_462(0);
				return 1;
			}
		}
	}
	else
	{
		func_457(&(Global_1840922.f_3), func_459(&(Global_1840922.f_3)));
		if ((func_454(&(Global_1840922.f_49)) && !func_428(&(Global_1840922.f_49), 2000, 1)) && !unk_0xE096BC82D913B3DB())
		{
			unk_0xCD7E92DE2BFA0B0D(uParam0, 3);
			StringCopy(&(Global_1840922.f_3.f_1), "", 64);
			func_455(&(Global_1840922.f_3), 0);
		}
		else if (!unk_0x2A3398C6222EB190(*uParam0, 3))
		{
			if (!unk_0x2A3398C6222EB190(*uParam0, 1))
			{
				unk_0x40FB16B5061B30EC(0);
				unk_0xCD7E92DE2BFA0B0D(uParam0, 1);
				StringCopy(&(Global_1840922.f_3.f_1), "", 64);
				func_455(&(Global_1840922.f_3), 0);
			}
		}
		if (func_454(&Global_1840922))
		{
			if (!func_428(&Global_1840922, 4000, 1))
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			if (bParam1)
			{
				if (!unk_0xE096BC82D913B3DB())
				{
					if (unk_0x1F580D23FDC2CC88())
					{
						unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "STORE_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1);
					}
					else
					{
						unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
					}
					if (!unk_0x4E5CFAAEE4D157CF())
					{
						if (!unk_0x2A3398C6222EB190(*uParam0, 0))
						{
							if (!unk_0x9148803485DEDF45(2, 201))
							{
								unk_0xCD7E92DE2BFA0B0D(uParam0, 0);
							}
						}
						else if (unk_0xBF946CEEECD8C935(2, 201))
						{
							func_350(&Global_1840922);
							*uParam0 = 0;
							Global_1840922.f_2 = 0;
							func_462(0);
							return 1;
						}
					}
				}
				else
				{
					func_350(&Global_1840922);
					*uParam0 = 0;
					Global_1840922.f_2 = 0;
					func_462(0);
					return 1;
				}
			}
			else if (unk_0x2A3398C6222EB190(*uParam0, 3))
			{
				if (unk_0x1F580D23FDC2CC88())
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_SIGN_OUT", iVar0, 0, 0, -1, 0, 0, 1);
				}
				else
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
				}
				if (!unk_0x2A3398C6222EB190(*uParam0, 0))
				{
					if (!unk_0x9148803485DEDF45(2, 201))
					{
						unk_0xCD7E92DE2BFA0B0D(uParam0, 0);
					}
				}
				else if (unk_0xBF946CEEECD8C935(2, 201))
				{
					func_350(&(Global_1840922.f_49));
					func_350(&Global_1840922);
					*uParam0 = 0;
					Global_1840922.f_2 = 0;
					func_462(0);
					return 1;
				}
			}
			else
			{
				if (unk_0x1F580D23FDC2CC88())
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1);
				}
				else
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
				}
				if (!unk_0x4E5CFAAEE4D157CF())
				{
					if (!unk_0x2A3398C6222EB190(*uParam0, 0))
					{
						if (!unk_0x9148803485DEDF45(2, 201))
						{
							unk_0xCD7E92DE2BFA0B0D(uParam0, 0);
						}
					}
					else if (unk_0xBF946CEEECD8C935(2, 201))
					{
						func_350(&(Global_1840922.f_49));
						func_350(&Global_1840922);
						*uParam0 = 0;
						Global_1840922.f_2 = 0;
						func_462(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_454(var uParam0)
{
	return uParam0->f_1;
}

void func_455(var uParam0, bool bParam1)
{
	func_456(uParam0);
	if (bParam1)
	{
		func_462(0);
	}
	uParam0->f_35 = 1;
}

void func_456(var uParam0)
{
	struct<46> Var0;
	
	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_457(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_458(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_36)
		{
			unk_0x06B4553661AF4E5A(&(uParam0->f_1));
			unk_0x96577CAA1D1E72DB(uParam0->f_33);
			unk_0x96577CAA1D1E72DB(uParam0->f_34);
			unk_0x84E9918555B2F8B5(uParam0->f_41);
		}
		else if (uParam0->f_37)
		{
			unk_0x06B4553661AF4E5A(&(uParam0->f_1));
			unk_0x96577CAA1D1E72DB(uParam0->f_33);
			unk_0x84E9918555B2F8B5(uParam0->f_41);
		}
		else if (uParam0->f_39)
		{
			unk_0x06B4553661AF4E5A(&(uParam0->f_1));
			unk_0x50B3C23D0902259F(&(uParam0->f_17));
			unk_0x96577CAA1D1E72DB(uParam0->f_33);
			unk_0x96577CAA1D1E72DB(uParam0->f_34);
			unk_0x84E9918555B2F8B5(uParam0->f_41);
		}
		else if (uParam0->f_38)
		{
			unk_0x06B4553661AF4E5A(&(uParam0->f_1));
			unk_0x50B3C23D0902259F(&(uParam0->f_17));
			unk_0x84E9918555B2F8B5(uParam0->f_41);
		}
		else if (uParam0->f_40)
		{
			unk_0x06B4553661AF4E5A(&(uParam0->f_1));
			unk_0xC2D818A5754306C0(uParam0->f_33, 70);
			unk_0x84E9918555B2F8B5(uParam0->f_41);
		}
		else
		{
			unk_0x06B4553661AF4E5A(&(uParam0->f_1));
			unk_0x84E9918555B2F8B5(uParam0->f_41);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_458(var uParam0)
{
	uParam0->f_35 = 0;
}

int func_459(var uParam0)
{
	return uParam0->f_35;
}

int func_460()
{
	if (func_461())
	{
		return 0;
	}
	if (unk_0x04F2E3CF902D6F5D() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_461()
{
	return Global_2455609;
}

void func_462(bool bParam0)
{
	unk_0xFE185FFD730A31A1();
	if (bParam0)
	{
		unk_0x794851316BEA60A1();
	}
}

void func_463(var uParam0, int iParam1, char[4] cParam2)
{
	func_143(&(Local_51.f_119), 1128792064, 1, 0, 1, 1065353216);
	unk_0xBD1C47D856010F09(9);
	unk_0xBD1C47D856010F09(7);
	func_444(iParam1, cParam2);
	func_464(uParam0, &uLocal_1606);
}

void func_464(var uParam0, var uParam1)
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
	
	func_421(&(Global_1840922.f_49), 1, 0);
	unk_0x390920286F8D4571();
	func_524();
	func_523(0);
	unk_0x7CDDB154852DA508();
	func_521();
	unk_0xBD1C47D856010F09(10);
	func_520(1);
	func_519(1);
	if (!func_423())
	{
		if (!unk_0x3A7B47D96E536F61("LEADERBOARD_SCENE"))
		{
			unk_0xFD69BDF108B32E5B("LEADERBOARD_SCENE");
		}
	}
	if (!unk_0x2A3398C6222EB190(uParam1->f_42, 3))
	{
		*uParam0 = func_341();
		unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_42), 3);
	}
	Var32 = { func_439(unk_0x3D35F9864E4640B1()) };
	if (unk_0x77FA56883245AD26(*uParam0))
	{
		if (((!unk_0xD69069794497409F() || !unk_0xED5FFF2E0422067E()) || (!unk_0xF60A5AF58996CED2() && unk_0xFEF369FFF9545F0F())) || Global_1835390.f_2832 != 0)
		{
			if (!unk_0xED5FFF2E0422067E())
			{
				if (Global_1835390.f_2829 != 2)
				{
					unk_0xD804ACF2A7171150(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 2;
				}
			}
			else if (!unk_0xF60A5AF58996CED2() && unk_0xFEF369FFF9545F0F())
			{
				if (Global_1835390.f_2829 != 3)
				{
					unk_0xD804ACF2A7171150(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 3;
				}
			}
			else if (!unk_0xD69069794497409F())
			{
				if (Global_1835390.f_2829 != 4)
				{
					unk_0xD804ACF2A7171150(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 4;
				}
			}
			else if (Global_1835390.f_2832 != 0)
			{
				if (Global_1835390.f_2829 != 5)
				{
					unk_0xD804ACF2A7171150(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 5;
				}
			}
			if (!unk_0x2A3398C6222EB190(uParam1->f_42, 1))
			{
				unk_0xEBD23F68B1A617FC(*uParam0, "CLEAR_ALL_SLOTS");
				unk_0x1C703A54AB4B12F6();
				func_518(*uParam0, Global_1835390.f_2780);
				if (unk_0xA56C5821F50C3275(&(Global_1835390.f_2780.f_1)))
				{
					if (!func_440(uParam1->f_44))
					{
						if (Global_1835390.f_2780.f_26 > 0)
						{
							cVar9 = { Global_1835390.f_2780.f_9 };
							func_517(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &cVar9, Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							func_517(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					else if (!Global_1835390.f_2780.f_27)
					{
						StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
						if (Global_1835390.f_2780.f_26 > 0)
						{
							func_517(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							func_517(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					else
					{
						StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
						if (Global_1835390.f_2780.f_26 > 0)
						{
							func_517(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							func_517(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					func_516(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
				}
				iVar31 = 0;
				unk_0xCD7E92DE2BFA0B0D(&iVar31, 4);
				func_515(*uParam0, &iVar6, iVar31, 1, 1);
				iVar31 = 0;
				unk_0xCD7E92DE2BFA0B0D(&iVar31, 5);
				func_515(*uParam0, &iVar6, iVar31, 1, 1);
				iVar31 = 0;
				unk_0xCD7E92DE2BFA0B0D(&iVar31, 6);
				func_515(*uParam0, &iVar6, iVar31, 1, 1);
				unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_42), 1);
				func_514(*uParam0);
				unk_0xD804ACF2A7171150(&(uParam1->f_42), 2);
				unk_0x8C361F37C04084F4(1);
			}
			else
			{
				func_514(*uParam0);
			}
		}
		else
		{
			if (Global_1835390.f_2829 != 1)
			{
				unk_0xD804ACF2A7171150(&(uParam1->f_42), 1);
				Global_1835390.f_2829 = 1;
			}
			if (!func_486(uParam1))
			{
				uParam1->f_246.f_1 = -1;
				unk_0xD804ACF2A7171150(&(uParam1->f_42), 1);
				if (!unk_0x2A3398C6222EB190(uParam1->f_42, 0))
				{
					unk_0xEBD23F68B1A617FC(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0x1C703A54AB4B12F6();
					func_518(*uParam0, Global_1835390.f_2780);
					if (unk_0xA56C5821F50C3275(&(Global_1835390.f_2780.f_1)))
					{
						if (!func_440(uParam1->f_44))
						{
							if (Global_1835390.f_2780.f_26 > 0)
							{
								cVar9 = { Global_1835390.f_2780.f_9 };
								func_517(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &cVar9, 1, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_517(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835390.f_2780.f_27)
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_517(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_517(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_517(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_517(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						func_516(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
					}
					unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_42), 0);
					unk_0xD804ACF2A7171150(&(uParam1->f_42), 2);
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
							unk_0xCD7E92DE2BFA0B0D(&iVar31, 4);
							func_515(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar31 = 0;
							unk_0xCD7E92DE2BFA0B0D(&iVar31, 5);
							func_515(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar31 = 0;
							unk_0xCD7E92DE2BFA0B0D(&iVar31, 6);
							func_515(*uParam0, &iVar6, iVar31, 0, 0);
						}
						iVar31 = 0;
						unk_0xCD7E92DE2BFA0B0D(&iVar31, 7);
						func_485(*uParam0, iVar6, iVar31, &Var51);
						iVar6++;
						iVar0++;
					}
					Global_1835390.f_2825 = 1;
					func_350(&(Global_1835390.f_2823));
				}
				else if (func_428(&(Global_1835390.f_2823), 300, 0))
				{
					StringCopy(&Var57, "SC_LB_DL", 24);
					StringIntConCat(&Var57, Global_1835390.f_2825, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar31 = 0;
							unk_0xCD7E92DE2BFA0B0D(&iVar31, 4);
							func_515(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar31 = 0;
							unk_0xCD7E92DE2BFA0B0D(&iVar31, 5);
							func_515(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar31 = 0;
							unk_0xCD7E92DE2BFA0B0D(&iVar31, 6);
							func_515(*uParam0, &iVar6, iVar31, 0, 0);
						}
						iVar31 = 0;
						unk_0xCD7E92DE2BFA0B0D(&iVar31, 7);
						func_485(*uParam0, iVar6, iVar31, &Var57);
						iVar6++;
						iVar0++;
					}
					Global_1835390.f_2825++;
					if (Global_1835390.f_2825 > 3)
					{
						Global_1835390.f_2825 = 0;
					}
					func_350(&(Global_1835390.f_2823));
				}
				func_514(*uParam0);
			}
			else
			{
				unk_0xD804ACF2A7171150(&(uParam1->f_42), 0);
				if (!unk_0x2A3398C6222EB190(uParam1->f_42, 1))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						uParam1->f_246.f_187[iVar0] = 0;
						iVar0++;
					}
					unk_0xEBD23F68B1A617FC(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0x1C703A54AB4B12F6();
					func_518(*uParam0, Global_1835390.f_2780);
					if (unk_0xA56C5821F50C3275(&(Global_1835390.f_2780.f_1)))
					{
						if (!func_440(uParam1->f_44))
						{
							if (Global_1835390.f_2780.f_26 > 0)
							{
								cVar9 = { Global_1835390.f_2780.f_9 };
								func_517(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &cVar9, 1, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_517(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835390.f_2780.f_27)
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_517(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_517(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_517(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_517(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						func_516(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
					}
					if (!unk_0x2A3398C6222EB190(uParam1->f_42, 6))
					{
						func_353(&Global_1839721);
						func_481(uParam1, &Global_1839721);
						func_480(uParam1, &Global_1839721);
					}
					iVar6 = 0;
					uParam1->f_246.f_2 = 0;
					if ((Global_1835390.f_2704[0] > 1 || (Global_1835390.f_2704[0] > 0 && Global_1835390.f_2775[0] != -1)) || (((Global_1835390.f_2704[0] > 0 && Global_1835390.f_2780.f_27) && func_440(uParam1->f_44)) && Global_1835390.f_2775[0] != -1))
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
									unk_0xCD7E92DE2BFA0B0D(&iVar31, 4);
									func_515(*uParam0, &iVar6, iVar31, 0, 0);
									iVar27[0] = 1;
								}
							}
							else if (Global_1839721[iVar0 /*100*/].f_75 == 2)
							{
								if (!iVar27[1])
								{
									iVar31 = 0;
									unk_0xCD7E92DE2BFA0B0D(&iVar31, 5);
									if ((Global_1835390.f_2704[1] < 1 && Global_1835390.f_2775[1] == -1) && !(((Global_1835390.f_2704[1] > 0 && Global_1835390.f_2780.f_27) && func_440(uParam1->f_44)) && Global_1835390.f_2775[1] != -1))
									{
										func_515(*uParam0, &iVar6, iVar31, 1, 0);
										bVar63 = true;
									}
									else
									{
										func_515(*uParam0, &iVar6, iVar31, 0, 0);
									}
									iVar27[1] = 1;
								}
							}
							else if (Global_1839721[iVar0 /*100*/].f_75 == 3)
							{
								if (!iVar27[2])
								{
									iVar31 = 0;
									unk_0xCD7E92DE2BFA0B0D(&iVar31, 6);
									if (!unk_0x4FB79719141588E9())
									{
										bVar63 = true;
									}
									else if (!unk_0x0B26CCD382388F16())
									{
										bVar63 = true;
									}
									if ((Global_1835390.f_2704[2] < 2 && Global_1835390.f_2775[2] == -1) && !(((Global_1835390.f_2704[2] > 0 && Global_1835390.f_2780.f_27) && func_440(uParam1->f_44)) && Global_1835390.f_2775[2] != -1))
									{
										bVar63 = true;
									}
									if (bVar63)
									{
										func_515(*uParam0, &iVar6, iVar31, 1, 0);
									}
									else
									{
										func_515(*uParam0, &iVar6, iVar31, 0, 0);
									}
									iVar27[2] = 1;
								}
							}
							if (func_434(Global_1839721[iVar0 /*100*/].f_32))
							{
								if (func_440(uParam1->f_44))
								{
									unk_0x5C8EC7D9A566E1C4(unk_0x3D35F9864E4640B1(), &uVar45);
									if (!Global_1839721[iVar0 /*100*/].f_74 && unk_0xB3404E397FF56B3B(&(uParam1->f_44.f_3.f_1[1 /*16*/].f_8), &uVar45))
									{
										bVar63 = true;
									}
								}
								if (!bVar63)
								{
									iVar31 = 0;
									if (!Global_1835390.f_2780.f_27)
									{
										if (func_479(&(Global_1839721[iVar0 /*100*/].f_32), &Var32))
										{
											unk_0xCD7E92DE2BFA0B0D(&iVar31, 1);
											if (uParam1->f_246.f_1 == -1)
											{
												bVar7 = true;
												uParam1->f_246.f_1 = iVar0;
												unk_0xCD7E92DE2BFA0B0D(&iVar31, 3);
											}
										}
									}
									if (func_440(uParam1->f_44))
									{
										cVar9 = { Global_1839721[iVar0 /*100*/] };
										if (!unk_0x0BD3CCFB6C6CFA91(&(Global_1839721[iVar0 /*100*/].f_84)) && !unk_0xB3404E397FF56B3B(&(Global_1839721[iVar0 /*100*/].f_84), ""))
										{
											StringConCat(&cVar9, "/", 64);
											StringConCat(&cVar9, &(Global_1839721[iVar0 /*100*/].f_84), 64);
										}
										func_478(*uParam0, iVar6, iVar31, Global_1839721[iVar0 /*100*/].f_59, &cVar9, &(Global_1839721[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar6;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar31;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839721[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									else
									{
										func_478(*uParam0, iVar6, iVar31, Global_1839721[iVar0 /*100*/].f_59, &(Global_1839721[iVar0 /*100*/]), &(Global_1839721[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar6;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar31;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839721[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									iVar1 = 0;
									while (iVar1 < Global_1835390.f_2708)
									{
										bVar8 = false;
										if (unk_0x2A3398C6222EB190(Global_1835390.f_2770, iVar1))
										{
											if (unk_0x2A3398C6222EB190(Global_1835390.f_2768, iVar1))
											{
												if (Global_1835390.f_2754[iVar1] == Global_1839721[iVar0 /*100*/].f_67[iVar1])
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_473(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_67[iVar1], 0, Global_1839721[iVar0 /*100*/].f_58);
											}
											else
											{
												func_473(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_67[iVar1], Global_1839721[iVar0 /*100*/].f_74, Global_1839721[iVar0 /*100*/].f_58);
											}
										}
										else
										{
											if (unk_0x2A3398C6222EB190(Global_1835390.f_2768, iVar1))
											{
												if (Global_1835390.f_2761[iVar1] == Global_1839721[iVar0 /*100*/].f_67[iVar1])
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_470(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_60[iVar1], 0);
											}
											else
											{
												func_470(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_60[iVar1], Global_1839721[iVar0 /*100*/].f_74);
											}
										}
										iVar1++;
									}
									func_469();
									uVar2[(Global_1839721[iVar0 /*100*/].f_75 - 1)]++;
									if (uVar2[(Global_1839721[iVar0 /*100*/].f_75 - 1)] == 2)
									{
										if (Global_1839721[iVar0 /*100*/].f_59 > 2)
										{
											unk_0xCD7E92DE2BFA0B0D(&iVar31, 2);
											unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_246.f_6[0 /*15*/].f_1), 2);
											func_468(*uParam0, (iVar6 - 1), iVar31);
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
						unk_0xCD7E92DE2BFA0B0D(&iVar31, 4);
						func_515(*uParam0, &iVar6, iVar31, 1, 0);
						iVar31 = 0;
						unk_0xCD7E92DE2BFA0B0D(&iVar31, 5);
						func_515(*uParam0, &iVar6, iVar31, 1, 0);
						iVar31 = 0;
						unk_0xCD7E92DE2BFA0B0D(&iVar31, 6);
						func_515(*uParam0, &iVar6, iVar31, 1, 0);
					}
					unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_42), 1);
					unk_0xD804ACF2A7171150(&(uParam1->f_42), 2);
					func_514(*uParam0);
					unk_0x8C361F37C04084F4(1);
					if (uParam1->f_246.f_1 == -1 && !bVar7 == 1)
					{
						if (Global_1835390.f_2704[0] > 1)
						{
							uParam1->f_246.f_1 = 0;
							unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
							func_468(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					func_514(*uParam0);
					func_465(uParam0, uParam1);
				}
			}
		}
	}
}

void func_465(var uParam0, var uParam1)
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
	if (unk_0xFF512A008EA368FF(2))
	{
		unk_0xB540BA8B3C93460F();
		unk_0x8662FAB20C4C3CFB(2, 239);
		unk_0x8662FAB20C4C3CFB(2, 240);
		unk_0x8662FAB20C4C3CFB(2, 237);
		unk_0x8662FAB20C4C3CFB(2, 238);
		unk_0xC9621A9AD282CC14(2, 200, 1);
		if (unk_0x59ABF4F2C485FC38(2, 241))
		{
			unk_0xDE3AEA05A09ABFFC(2, 188, 1f);
		}
		if (unk_0x59ABF4F2C485FC38(2, 242))
		{
			unk_0xDE3AEA05A09ABFFC(2, 187, 1f);
		}
		if (unk_0x2F7BBD8CD73835A3(*uParam0, &iVar2, &iVar3, &uVar4))
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
					unk_0x18F1BFAF88AC511B(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					bVar0 = true;
				}
				else
				{
					unk_0xDE3AEA05A09ABFFC(2, 217, 1f);
				}
			}
		}
	}
	if (!unk_0xFF512A008EA368FF(2))
	{
		func_467(&uVar5, &iVar6, &uVar7, &uVar8, 0);
	}
	if (uParam1->f_246.f_2 > 0)
	{
		if (!unk_0x2A3398C6222EB190(uParam1->f_246, 0))
		{
			if ((unk_0x9148803485DEDF45(2, 188) || unk_0x59ABF4F2C485FC38(2, 188)) || iVar6 < -100)
			{
				unk_0x18F1BFAF88AC511B(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1 = (uParam1->f_246.f_1 + -1);
				unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_246), 0);
				func_350(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_466(uParam1, 188))
		{
			unk_0xD804ACF2A7171150(&(uParam1->f_246), 0);
		}
		if (!unk_0x2A3398C6222EB190(uParam1->f_246, 1))
		{
			if ((unk_0x9148803485DEDF45(2, 187) || unk_0x59ABF4F2C485FC38(2, 187)) || iVar6 > 100)
			{
				unk_0x18F1BFAF88AC511B(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1++;
				unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_246), 1);
				func_350(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_466(uParam1, 187))
		{
			unk_0xD804ACF2A7171150(&(uParam1->f_246), 1);
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
	if (!unk_0x2A3398C6222EB190(uParam1->f_246, 3))
	{
		if ((unk_0x9148803485DEDF45(2, 204) || unk_0x42F812C5F1AA300A(2, 204)) || unk_0xD887E21676314450(2, 237))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_246), 3);
			func_350(&(uParam1->f_246.f_3));
			bVar0 = true;
		}
	}
	else if (func_466(uParam1, 204))
	{
		unk_0xD804ACF2A7171150(&(uParam1->f_246), 3);
	}
	if (uParam1->f_246.f_1 >= 0)
	{
		if (uParam1->f_246.f_1 != iVar1)
		{
			if (iVar1 >= 0)
			{
				unk_0xD804ACF2A7171150(&(uParam1->f_246.f_6[iVar1 /*15*/].f_1), 3);
				func_468(*uParam0, uParam1->f_246.f_6[iVar1 /*15*/], uParam1->f_246.f_6[iVar1 /*15*/].f_1);
			}
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
			func_468(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
			unk_0xD804ACF2A7171150(&(uParam1->f_42), 2);
		}
		if (func_434(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2))
		{
			if (!unk_0x2A3398C6222EB190(uParam1->f_246, 2))
			{
				if (unk_0x9148803485DEDF45(2, 217) || unk_0x42F812C5F1AA300A(2, 217))
				{
					if (!unk_0x4E5CFAAEE4D157CF())
					{
						unk_0x18F1BFAF88AC511B(-1, "SELECT", "HUD_FRONTEND_MP_SOUNDSET", 1);
						unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_246), 2);
						unk_0xE6BB194246178292(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2));
					}
				}
			}
			else if (!unk_0x9148803485DEDF45(2, 217))
			{
				unk_0xD804ACF2A7171150(&(uParam1->f_246), 2);
			}
		}
	}
}

int func_466(var uParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (iParam1 == 188 || iParam1 == 187)
	{
		func_467(&uVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((!unk_0x9148803485DEDF45(2, iParam1) && !unk_0x59ABF4F2C485FC38(2, iParam1)) && (iVar1 < 75 && iVar1 > -75)) || func_428(&(uParam0->f_246.f_3), 250, 0))
		{
			return 1;
		}
	}
	else if ((!unk_0x9148803485DEDF45(2, iParam1) && !unk_0x59ABF4F2C485FC38(2, iParam1)) || func_428(&(uParam0->f_246.f_3), 250, 0))
	{
		return 1;
	}
	return 0;
}

void func_467(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0xB3878AEB2FF752C6(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0xB3878AEB2FF752C6(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0xB3878AEB2FF752C6(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0xB3878AEB2FF752C6(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0xF227625A36477D1C(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0xF227625A36477D1C(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0xF227625A36477D1C(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0xF227625A36477D1C(2, 221) * 127f));
		}
	}
}

void func_468(var uParam0, int iParam1, int iParam2)
{
	unk_0xEBD23F68B1A617FC(uParam0, "SET_SLOT_STATE");
	unk_0x32F9127910F63DFA(iParam1);
	unk_0x32F9127910F63DFA(iParam2);
	unk_0x1C703A54AB4B12F6();
}

void func_469()
{
	unk_0x1C703A54AB4B12F6();
}

void func_470(struct<30> Param0, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, int iParam43, float fParam44, bool bParam45)
{
	switch (Param0.f_29[iParam43])
	{
		case 4:
			if (bParam45)
			{
				unk_0x9BC6C9E77AAC792E("NUMBER");
				unk_0x5E66471E79E6D3ED(fParam44, 2);
				unk_0xCC5EB3A492FB7D4B();
			}
			else
			{
				unk_0x9BC6C9E77AAC792E("SC_LB_EMPTY");
				unk_0xCC5EB3A492FB7D4B();
			}
			break;
		
		case 12:
			if (bParam45)
			{
				unk_0x9BC6C9E77AAC792E("NUMBER");
				unk_0x96577CAA1D1E72DB(unk_0xF34EE736CF047844(fParam44));
				unk_0xCC5EB3A492FB7D4B();
			}
			else
			{
				unk_0x9BC6C9E77AAC792E("SC_LB_EMPTY");
				unk_0xCC5EB3A492FB7D4B();
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
				if (!unk_0xE42DE35DC4399ED5())
				{
					if (Param0.f_29[iParam43] == 19 || Param0.f_29[iParam43] == 20)
					{
						fParam44 = func_472(fParam44);
					}
					else
					{
						fParam44 = func_471(fParam44);
					}
				}
				unk_0x9BC6C9E77AAC792E("NUMBER");
				unk_0x5E66471E79E6D3ED(fParam44, 2);
				unk_0xCC5EB3A492FB7D4B();
			}
			else
			{
				unk_0x9BC6C9E77AAC792E("SC_LB_EMPTY");
				unk_0xCC5EB3A492FB7D4B();
			}
			break;
		
		case 0:
			break;
	}
}

float func_471(float fParam0)
{
	return (fParam0 / 0.3048f);
}

float func_472(float fParam0)
{
	return (fParam0 / 1609.344f);
}

void func_473(struct<30> Param0, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, int iParam43, int iParam44, bool bParam45, bool bParam46)
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
				unk_0x9BC6C9E77AAC792E("NUMBER");
				unk_0x96577CAA1D1E72DB(iParam44);
				unk_0xCC5EB3A492FB7D4B();
			}
			else
			{
				unk_0x9BC6C9E77AAC792E("SC_LB_EMPTY");
				unk_0xCC5EB3A492FB7D4B();
			}
			break;
		
		case 7:
			if (bParam45)
			{
				unk_0x9BC6C9E77AAC792E("NUMBER");
				unk_0x96577CAA1D1E72DB(-iParam44);
				unk_0xCC5EB3A492FB7D4B();
			}
			else
			{
				unk_0x9BC6C9E77AAC792E("SC_LB_EMPTY");
				unk_0xCC5EB3A492FB7D4B();
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
					unk_0x9BC6C9E77AAC792E("STRING");
					unk_0xC2D818A5754306C0(iParam44, 14);
					unk_0xCC5EB3A492FB7D4B();
				}
				else if (Param0.f_29[iParam43] == 9)
				{
					unk_0x9BC6C9E77AAC792E("STRING");
					unk_0xC2D818A5754306C0(iParam44, 6);
					unk_0xCC5EB3A492FB7D4B();
				}
				else
				{
					unk_0x9BC6C9E77AAC792E("STRING");
					unk_0xC2D818A5754306C0(iParam44, 2055);
					unk_0xCC5EB3A492FB7D4B();
				}
			}
			else
			{
				unk_0x9BC6C9E77AAC792E("SC_LB_EMPTY");
				unk_0xCC5EB3A492FB7D4B();
			}
			break;
		
		case 6:
			if (bParam45)
			{
				if (iParam44 == 2147483647)
				{
					unk_0x9BC6C9E77AAC792E("SC_LB_EMPTY");
					unk_0xCC5EB3A492FB7D4B();
				}
				else if (iParam44 >= 3600000 || iParam44 <= -3600000)
				{
					unk_0x9BC6C9E77AAC792E("STRING");
					unk_0xC2D818A5754306C0(iParam44, 14);
					unk_0xCC5EB3A492FB7D4B();
				}
				else
				{
					unk_0x9BC6C9E77AAC792E("STRING");
					unk_0xC2D818A5754306C0(iParam44, 2055);
					unk_0xCC5EB3A492FB7D4B();
				}
			}
			else
			{
				unk_0x9BC6C9E77AAC792E("SC_LB_EMPTY");
				unk_0xCC5EB3A492FB7D4B();
			}
			break;
		
		case 2:
		case 10:
			if (bParam45)
			{
				iParam44 = (iParam44 * -1);
				if (iParam44 >= 3600000 || iParam44 <= -3600000)
				{
					unk_0x9BC6C9E77AAC792E("STRING");
					unk_0xC2D818A5754306C0(iParam44, 14);
					unk_0xCC5EB3A492FB7D4B();
				}
				else if (Param0.f_29[iParam43] == 10)
				{
					unk_0x9BC6C9E77AAC792E("STRING");
					unk_0xC2D818A5754306C0(iParam44, 6);
					unk_0xCC5EB3A492FB7D4B();
				}
				else
				{
					unk_0x9BC6C9E77AAC792E("STRING");
					unk_0xC2D818A5754306C0(iParam44, 2055);
					unk_0xCC5EB3A492FB7D4B();
				}
			}
			else
			{
				unk_0x9BC6C9E77AAC792E("SC_LB_EMPTY");
				unk_0xCC5EB3A492FB7D4B();
			}
			break;
		
		case 3:
			if (bParam46)
			{
				if (unk_0x41BB80C0DBFA1AA4(iParam44))
				{
					unk_0x9BC6C9E77AAC792E("SCLB_VEH_CUST");
					unk_0x7C8A7ECFBAD2C8C4(unk_0x0C9AAE7EC92AB471(iParam44));
					unk_0xCC5EB3A492FB7D4B();
				}
				else
				{
					unk_0x9BC6C9E77AAC792E("SC_LB_EMPTY");
					unk_0xCC5EB3A492FB7D4B();
				}
			}
			else if (unk_0x41BB80C0DBFA1AA4(iParam44))
			{
				unk_0x9BC6C9E77AAC792E(unk_0x0C9AAE7EC92AB471(iParam44));
				unk_0xCC5EB3A492FB7D4B();
			}
			else
			{
				unk_0x9BC6C9E77AAC792E("SC_LB_EMPTY");
				unk_0xCC5EB3A492FB7D4B();
			}
			break;
		
		case 8:
			if (func_477(iParam44) != 0)
			{
				unk_0x9BC6C9E77AAC792E(func_474(func_477(iParam44), 0));
				unk_0xCC5EB3A492FB7D4B();
			}
			else
			{
				unk_0x9BC6C9E77AAC792E("SC_LB_EMPTY");
				unk_0xCC5EB3A492FB7D4B();
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
				if (!unk_0xE42DE35DC4399ED5())
				{
					if (Param0.f_29[iParam43] == 15 || Param0.f_29[iParam43] == 16)
					{
						iParam44 = unk_0xF34EE736CF047844(func_472(unk_0xBBDA792448DB5A89(iParam44)));
					}
					else
					{
						iParam44 = unk_0xF34EE736CF047844(func_471(unk_0xBBDA792448DB5A89(iParam44)));
					}
				}
				unk_0x9BC6C9E77AAC792E("NUMBER");
				unk_0x96577CAA1D1E72DB(iParam44);
				unk_0xCC5EB3A492FB7D4B();
			}
			else
			{
				unk_0x9BC6C9E77AAC792E("SC_LB_EMPTY");
				unk_0xCC5EB3A492FB7D4B();
			}
			break;
		
		case 0:
			break;
	}
}

char* func_474(int iParam0, bool bParam1)
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
		
		case joaat("weapon_railgun"):
			if (bParam1)
			{
				return "WTU_RAILGUN";
			}
			else
			{
				return "WT_RAILGUN";
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
		
		case joaat("weapon_bullpuprifle"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE";
			}
			else
			{
				return "WT_BULLRIFLE";
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
		
		case joaat("weapon_dbshotgun"):
			if (bParam1)
			{
				return "WTU_DBSHGN";
			}
			else
			{
				return "WT_DBSHGN";
			}
			break;
		
		case joaat("weapon_compactrifle"):
			if (bParam1)
			{
				return "WTU_CMPRIFLE";
			}
			else
			{
				return "WT_CMPRIFLE";
			}
			break;
		
		case joaat("weapon_switchblade"):
			if (bParam1)
			{
				return "WTU_SWBLADE";
			}
			else
			{
				return "WT_SWBLADE";
			}
			break;
		
		case joaat("weapon_revolver"):
			if (bParam1)
			{
				return "WTU_REVOLVER";
			}
			else
			{
				return "WT_REVOLVER";
			}
			break;
		
		case joaat("weapon_autoshotgun"):
			if (bParam1)
			{
				return "WTU_AUTOSHGN";
			}
			else
			{
				return "WT_AUTOSHGN";
			}
			break;
		
		case joaat("weapon_battleaxe"):
			if (bParam1)
			{
				return "WTU_BATTLEAXE";
			}
			else
			{
				return "WT_BATTLEAXE";
			}
			break;
		
		case joaat("weapon_compactlauncher"):
			if (bParam1)
			{
				return "WTU_CMPGL";
			}
			else
			{
				return "WT_CMPGL";
			}
			break;
		
		case joaat("weapon_minismg"):
			if (bParam1)
			{
				return "WTU_MINISMG";
			}
			else
			{
				return "WT_MINISMG";
			}
			break;
		
		case joaat("weapon_pipebomb"):
			if (bParam1)
			{
				return "WTU_PIPEBOMB";
			}
			else
			{
				return "WT_PIPEBOMB";
			}
			break;
		
		case joaat("weapon_poolcue"):
			if (bParam1)
			{
				return "WTU_POOLCUE";
			}
			else
			{
				return "WT_POOLCUE";
			}
			break;
		
		case joaat("weapon_wrench"):
			if (bParam1)
			{
				return "WTU_WRENCH";
			}
			else
			{
				return "WT_WRENCH";
			}
			break;
		
		case joaat("weapon_cougar"):
			return "WT_RAGE";
			break;
		
		case -159960575:
			return "WT_VEH_WEP";
			break;
		
		case joaat("weapon_pistol_mk2"):
			if (bParam1)
			{
				return "WTU_PIST2";
			}
			else
			{
				return "WT_PIST2";
			}
			break;
		
		case joaat("weapon_smg_mk2"):
			if (bParam1)
			{
				return "WTU_SMG2";
			}
			else
			{
				return "WT_SMG2";
			}
			break;
		
		case joaat("weapon_heavysniper_mk2"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY2";
			}
			else
			{
				return "WT_SNIP_HVY2";
			}
			break;
		
		case joaat("weapon_combatmg_mk2"):
			if (bParam1)
			{
				return "WTU_MG_CBT2";
			}
			else
			{
				return "WT_MG_CBT2";
			}
			break;
		
		case joaat("weapon_assaultrifle_mk2"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL2";
			}
			else
			{
				return "WT_RIFLE_ASL2";
			}
			break;
		
		case joaat("weapon_carbinerifle_mk2"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN2";
			}
			else
			{
				return "WT_RIFLE_CBN2";
			}
			break;
		
		default:
			if (func_476(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_475(&(Var0.f_31));
				}
				else
				{
					return func_475(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_475(var uParam0)
{
	return uParam0;
}

int func_476(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x5AF51568FFC04EE8();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x4BEBDDD8F31C07D6(iVar0, uParam1))
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

int func_477(int iParam0)
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

void func_478(var uParam0, int iParam1, int iParam2, int iParam3, char[4] cParam4, char[4] cParam5)
{
	unk_0xEBD23F68B1A617FC(uParam0, "SET_SLOT");
	unk_0x32F9127910F63DFA(iParam1);
	unk_0x32F9127910F63DFA(iParam2);
	if (iParam3 > 0)
	{
		unk_0x9BC6C9E77AAC792E("NUMBER");
		unk_0x96577CAA1D1E72DB(iParam3);
		unk_0xCC5EB3A492FB7D4B();
	}
	else
	{
		unk_0x9BC6C9E77AAC792E("SC_LB_EMPTY");
		unk_0xCC5EB3A492FB7D4B();
	}
	unk_0x8E394933209D820A(cParam4);
	unk_0x8E394933209D820A(uParam5);
}

int func_479(var uParam0, var uParam1)
{
	if (!func_434(*uParam0))
	{
		return 0;
	}
	if (!func_434(*uParam1))
	{
		return 0;
	}
	if (unk_0xD996CD68BF90147F(uParam0, uParam1))
	{
		return 1;
	}
	return 0;
}

void func_480(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	var uVar77;
	
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	if (!unk_0x2A3398C6222EB190(uParam0->f_42, 5) && !unk_0x2A3398C6222EB190(uParam0->f_42, 6))
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

void func_481(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (!unk_0x2A3398C6222EB190(uParam0->f_42, 5) && !unk_0x2A3398C6222EB190(uParam0->f_42, 6))
	{
		iVar4 = 0;
		while (iVar4 < 12)
		{
			if (func_484(uParam1, iVar3, &uVar0, 0))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 1;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_484(uParam1, iVar3, &uVar1, 1))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 2;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_484(uParam1, iVar3, &uVar2, 2))
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
		func_482(uParam1);
	}
}

void func_482(var uParam0)
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
	Var3 = { func_439(unk_0x3D35F9864E4640B1()) };
	if (unk_0x93AEABCDA4C3C026(Global_1835390.f_2826))
	{
		iVar16 = unk_0x02015DE32A0ACA07(Global_1835390.f_2826);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar16)
		{
			if (iVar0 < 12)
			{
				func_483(&Global_1839591);
				iVar2 = 0;
				unk_0x59DA7685088AF59D(Global_1835390.f_2826, iVar0, &Global_1839591);
				*(uParam0[iVar0 /*100*/]) = { Global_1839591.f_1 };
				(uParam0[iVar0 /*100*/])->f_16 = { Global_1839591.f_17 };
				(uParam0[iVar0 /*100*/])->f_32 = { Global_1839591.f_33 };
				(uParam0[iVar0 /*100*/])->f_45 = { Global_1839591.f_46 };
				(uParam0[iVar0 /*100*/])->f_58 = Global_1839591.f_59;
				(uParam0[iVar0 /*100*/])->f_59 = Global_1839591.f_60;
				Global_1835390.f_2708 = Global_1839591.f_62;
				Global_1835390.f_2769 = Global_1839591.f_63;
				iVar2 = 0;
				if (unk_0x2A3398C6222EB190(Global_1839591.f_61, 1))
				{
					iVar2 = 1;
				}
				else if (unk_0x2A3398C6222EB190(Global_1839591.f_61, 2))
				{
					iVar2 = 2;
				}
				else if (unk_0x2A3398C6222EB190(Global_1839591.f_61, 3))
				{
					iVar2 = 3;
				}
				Global_1835390.f_2704[(iVar2 - 1)]++;
				(uParam0[iVar0 /*100*/])->f_75 = iVar2;
				if ((uParam0[iVar0 /*100*/])->f_59 != -1)
				{
					if (unk_0x2A3398C6222EB190(Global_1839591.f_61, 0))
					{
						(uParam0[iVar0 /*100*/])->f_74 = 1;
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_74 = 0;
					}
					if (func_479(&((uParam0[iVar0 /*100*/])->f_32), &Var3))
					{
						Global_1835390.f_2775[(iVar2 - 1)] = 0;
					}
				}
				iVar1 = 0;
				while (iVar1 < Global_1839591.f_62)
				{
					if (unk_0x2A3398C6222EB190(Global_1839591.f_63, iVar1))
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

void func_483(var uParam0)
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

int func_484(var uParam0, int iParam1, var uParam2, int iParam3)
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
				StringCopy(uParam0[iParam1 /*100*/], unk_0x06D7899D9C1F422F(unk_0x3D35F9864E4640B1()), 64);
				(uParam0[iParam1 /*100*/])->f_32 = { func_439(unk_0x3D35F9864E4640B1()) };
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

void func_485(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	unk_0xCD7E92DE2BFA0B0D(&iParam2, 7);
	unk_0xEBD23F68B1A617FC(uParam0, "SET_SLOT");
	unk_0x32F9127910F63DFA(iParam1);
	unk_0x32F9127910F63DFA(iParam2);
	unk_0x9BC6C9E77AAC792E(sParam3);
	unk_0x48B999C33828FA82();
	unk_0x1C703A54AB4B12F6();
}

int func_486(var uParam0)
{
	if (!Global_1835388)
	{
		if (!func_454(&(Global_1835390.f_2827)))
		{
			func_429(&(Global_1835390.f_2827), 1, 0);
			return 0;
		}
		else if (!func_428(&(Global_1835390.f_2827), 1000, 1))
		{
			return 0;
		}
	}
	if (((!unk_0xD69069794497409F() || !unk_0xED5FFF2E0422067E()) || (!unk_0xF60A5AF58996CED2() && unk_0xFEF369FFF9545F0F())) || Global_1835390.f_2832 != 0)
	{
		unk_0xD804ACF2A7171150(&(uParam0->f_42), 4);
		return 1;
	}
	if (!unk_0x2A3398C6222EB190(uParam0->f_42, 4))
	{
		func_513(uParam0);
		unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_42), 4);
		return 0;
	}
	else if (unk_0x2A3398C6222EB190(uParam0->f_42, 5))
	{
		(*uParam0)[0] = 2;
		(*uParam0)[1] = 1;
		(*uParam0)[2] = 3;
		return 1;
	}
	if (!func_511(uParam0))
	{
		return 0;
	}
	if (!func_509(uParam0))
	{
		return 0;
	}
	if (!func_502(uParam0))
	{
		return 0;
	}
	if (!unk_0x2A3398C6222EB190(uParam0->f_42, 6))
	{
		func_353(&Global_1839721);
		func_481(uParam0, &Global_1839721);
		func_480(uParam0, &Global_1839721);
		unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_42), 6);
	}
	if (!unk_0x2A3398C6222EB190(uParam0->f_42, 7))
	{
		if (!func_454(&(Global_1835390.f_2830)))
		{
			func_429(&(Global_1835390.f_2830), 1, 0);
		}
		else if (func_428(&(Global_1835390.f_2830), 30000, 1))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_42), 7);
		}
		if (func_499(&Global_1839721))
		{
		}
		else
		{
			return 0;
		}
		if (func_496(&Global_1839721))
		{
		}
		else
		{
			return 0;
		}
		if (func_490(&Global_1839721))
		{
			func_487(&Global_1839721);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_42), 7);
			func_487(&Global_1839721);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_487(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_489(Global_1835390.f_2826);
	if (Global_1838575.f_81[iVar2] != 0)
	{
		func_488(-1, iVar2);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_483(&Global_1839591);
		if ((uParam0[iVar0 /*100*/])->f_75 != 0)
		{
			Global_1839591 = Global_1835390.f_2826;
			Global_1839591.f_1 = { *(uParam0[iVar0 /*100*/]) };
			if (unk_0xB3404E397FF56B3B(&((uParam0[iVar0 /*100*/])->f_16), ""))
			{
				Global_1839591.f_17 = { *(uParam0[iVar0 /*100*/]) };
			}
			else
			{
				Global_1839591.f_17 = { (uParam0[iVar0 /*100*/])->f_16 };
			}
			Global_1839591.f_33 = { (uParam0[iVar0 /*100*/])->f_32 };
			if (func_434((uParam0[iVar0 /*100*/])->f_45))
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
				unk_0xCD7E92DE2BFA0B0D(&(Global_1839591.f_61), 0);
			}
			else
			{
				unk_0xD804ACF2A7171150(&(Global_1839591.f_61), 0);
			}
			unk_0xCD7E92DE2BFA0B0D(&(Global_1839591.f_61), (uParam0[iVar0 /*100*/])->f_75);
			iVar1 = 0;
			while (iVar1 < Global_1839591.f_62)
			{
				if (unk_0x2A3398C6222EB190(Global_1839591.f_63, iVar1))
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
			unk_0xC29C637A32074B95(&Global_1839591);
		}
		iVar0++;
	}
	Global_1838575.f_87[iVar2 /*3*/] = { func_213(unk_0x3D35F9864E4640B1()) };
}

void func_488(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != -1)
	{
		if (unk_0x93AEABCDA4C3C026(Global_1838575.f_81[iParam1]))
		{
			unk_0x8B76A81F41DE7F64(Global_1838575.f_81[iParam1]);
		}
		Global_1838575.f_81[iParam1] = 0;
	}
	else if (iParam0 != -1)
	{
		if (unk_0x93AEABCDA4C3C026(iParam0))
		{
			unk_0x8B76A81F41DE7F64(iParam0);
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

int func_489(int iParam0)
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
		else if (unk_0x93AEABCDA4C3C026(Global_1838575.f_81[iVar0]))
		{
			iVar3 = unk_0x3A86D36AC82C3C8E(Global_1838575.f_81[iVar0]);
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

int func_490(var uParam0)
{
	int iVar0;
	int iVar1;
	
	switch ((uParam0[0 /*100*/])->f_76)
	{
		case 0:
			func_494(uParam0);
			if (unk_0x43F4A6D2081CC5ED() && !unk_0x4C69E6D9E2ED0169(0))
			{
				(uParam0[0 /*100*/])->f_76 = 3;
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if (func_434((uParam0[iVar0 /*100*/])->f_32))
				{
					if (!func_493(&((uParam0[iVar0 /*100*/])->f_32), &Global_1841018))
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
			if (func_491(&((uParam0[1 /*100*/])->f_76), &(Global_1841018.f_206), &Global_1841018, &(Global_1841018.f_157)))
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
					if (func_434((uParam0[iVar0 /*100*/])->f_32) && func_434(Global_1841018[iVar1 /*13*/]))
					{
						if (unk_0xD996CD68BF90147F(&((uParam0[iVar0 /*100*/])->f_32), &(Global_1841018[iVar1 /*13*/])))
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

int func_491(var uParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	int iVar35;
	
	switch (*uParam0)
	{
		case 0:
			if (unk_0x4A4751AFCB4615B0())
			{
			}
			else
			{
				unk_0xC5AAB53287726EAB();
				unk_0x0619630953F0E013(uParam2, *uParam1);
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (!unk_0x4A4751AFCB4615B0())
			{
				if (unk_0x3A5F88AE9F3EB441())
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
				if (unk_0x05EA1572EDF5EFC7(uParam2[iVar35 /*13*/], &uVar0))
				{
					func_492(&uVar0, uParam3[iVar35 /*4*/]);
				}
				iVar35++;
			}
			if (unk_0x4A4751AFCB4615B0())
			{
				unk_0x6F54087FD4584338();
			}
			else
			{
				unk_0xC5AAB53287726EAB();
			}
			*uParam0 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_492(var uParam0, var uParam1)
{
	unk_0x0F370EC372A05844(uParam0, 35, uParam1);
}

int func_493(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_434(*(uParam1[iVar0 /*13*/])))
		{
			if (unk_0xD996CD68BF90147F(uParam0, uParam1[iVar0 /*13*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_494(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_495(&(Global_1841018[iVar0 /*13*/]));
		StringCopy(&(Global_1841018.f_157[iVar0 /*4*/]), "", 16);
		iVar0++;
	}
	if ((uParam0[0 /*100*/])->f_76 > 0)
	{
		(uParam0[0 /*100*/])->f_76 = 0;
		(uParam0[1 /*100*/])->f_76 = 0;
		if (!unk_0x4A4751AFCB4615B0())
		{
			unk_0xC5AAB53287726EAB();
		}
	}
	if (unk_0x4A4751AFCB4615B0())
	{
		unk_0x6F54087FD4584338();
	}
	Global_1841018.f_206 = 0;
}

void func_495(var uParam0)
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

int func_496(var uParam0)
{
	int iVar0;
	
	if (unk_0x20551D6D924ED04B())
	{
		return 1;
	}
	else if (unk_0x9D3EA2635512FD6B())
	{
		if (!func_498(uParam0))
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_497(&((uParam0[iVar0 /*100*/])->f_78), &((uParam0[iVar0 /*100*/])->f_32), uParam0[iVar0 /*100*/]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_497(var uParam0, var uParam1, char* sParam2)
{
	if (*uParam0 == 2)
	{
		return 1;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_434(*uParam1))
			{
				if (!unk_0x7B30C254A284990A(uParam1))
				{
					if (unk_0x9D3EA2635512FD6B())
					{
						if (unk_0xEA6B0CDF3239D9F0(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else if (unk_0x8BCF3CDD10AB0F3C())
					{
						if (unk_0xEA6B0CDF3239D9F0(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam2, unk_0x35CB7C2688760B5F(uParam1), 64);
						if (unk_0x6EC0C21CF01F429C())
						{
						}
						else if (unk_0x43F4A6D2081CC5ED())
						{
						}
						else if (unk_0x20551D6D924ED04B())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam2, unk_0x06D7899D9C1F422F(unk_0x999CF6F4F06C277B(uParam1)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0x7B30C254A284990A(uParam1))
			{
				if (!unk_0xA5B6C6FB5C1C3257())
				{
					if (unk_0x7CD84FE38600AF35())
					{
						StringCopy(sParam2, unk_0x35CB7C2688760B5F(uParam1), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam2, unk_0x06D7899D9C1F422F(unk_0x999CF6F4F06C277B(uParam1)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_498(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x9D3EA2635512FD6B())
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
				func_495(&(Global_1835390.f_3026[iVar1 /*13*/]));
				if (func_434((uParam0[iVar1 /*100*/])->f_32))
				{
					Global_1835390.f_3026[Global_1835390.f_3183 /*13*/] = { (uParam0[iVar1 /*100*/])->f_32 };
					Global_1835390.f_3183++;
				}
				iVar1++;
			}
			if (Global_1835390.f_3183 > 0)
			{
				(uParam0[0 /*100*/])->f_79 = unk_0x3022B3A95EDAABC0(&(Global_1835390.f_3026), Global_1835390.f_3183);
				(uParam0[0 /*100*/])->f_78 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0xB7A035708B8E1A14((uParam0[0 /*100*/])->f_79, &(Global_1835390.f_2833), Global_1835390.f_3183);
			if (iVar0 == 0)
			{
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (func_434((uParam0[iVar1 /*100*/])->f_32))
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

int func_499(var uParam0)
{
	int iVar0;
	
	if (unk_0x9D3EA2635512FD6B())
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_501(&((uParam0[iVar0 /*100*/])->f_77), &((uParam0[iVar0 /*100*/])->f_16), &((uParam0[iVar0 /*100*/])->f_84), &(Global_1835390.f_2833), &((uParam0[iVar0 /*100*/])->f_79)))
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
			if (!func_500(&((uParam0[iVar0 /*100*/])->f_77), (uParam0[iVar0 /*100*/])->f_16, &((uParam0[iVar0 /*100*/])->f_84)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_500(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17)
{
	struct<13> Var0;
	
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0x0BD3CCFB6C6CFA91(&uParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0xE0C9ED1D7789738E(&uParam1, &Var0, 13);
	switch (*uParam0)
	{
		case 0:
			if (func_434(Var0))
			{
				if (!unk_0x7B30C254A284990A(&Var0))
				{
					if (unk_0x8BCF3CDD10AB0F3C() || unk_0x9D3EA2635512FD6B())
					{
						if (unk_0xEA6B0CDF3239D9F0(&Var0))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam17, unk_0x35CB7C2688760B5F(&Var0), 64);
						if (unk_0x6EC0C21CF01F429C())
						{
						}
						else if (unk_0x43F4A6D2081CC5ED())
						{
						}
						else if (unk_0x20551D6D924ED04B())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam17, unk_0x06D7899D9C1F422F(unk_0x999CF6F4F06C277B(&Var0)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0x7B30C254A284990A(&Var0))
			{
				if (!unk_0xA5B6C6FB5C1C3257())
				{
					if (unk_0x7CD84FE38600AF35())
					{
						StringCopy(sParam17, unk_0x35CB7C2688760B5F(&Var0), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam17, unk_0x06D7899D9C1F422F(unk_0x999CF6F4F06C277B(&Var0)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_501(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4)
{
	int iVar0;
	struct<13> Var1[1];
	
	if (!unk_0x9D3EA2635512FD6B())
	{
		return 1;
	}
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0x0BD3CCFB6C6CFA91(sParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0xE0C9ED1D7789738E(sParam1, &(Var1[0 /*13*/]), 13);
	switch (*uParam0)
	{
		case 0:
			StringCopy(uParam3[0 /*16*/], "", 64);
			if (func_434(Var1[0 /*13*/]))
			{
				if (!unk_0x7B30C254A284990A(&(Var1[0 /*13*/])))
				{
					*uParam4 = unk_0x3022B3A95EDAABC0(&Var1, 1);
					*uParam0 = 1;
				}
				else
				{
					StringCopy(sParam2, unk_0x06D7899D9C1F422F(unk_0x999CF6F4F06C277B(&(Var1[0 /*13*/]))), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0xB7A035708B8E1A14(*uParam4, uParam3, 1);
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

int func_502(var uParam0)
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
	Var116 = { func_439(unk_0x3D35F9864E4640B1()) };
	switch ((*uParam0)[iVar113])
	{
		case 0:
			Global_1835390.f_2775[iVar113] = -1;
			Global_1835390.f_2704[iVar113] = 0;
			Global_1835013.f_374 = -1;
			if (unk_0x1AE803DF5F9B30C9())
			{
				if (unk_0xF3F1AD16A136B115(&Var116))
				{
					if (unk_0x7838EB8661A32D68(&(uParam0->f_7), 35, &Var116))
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
			if (func_419(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var116, func_508(), 0, 0, 0))
			{
				func_437(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x360655C8E2BDFEC1(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						iVar111 = 0;
						iVar106 = 0;
						if (func_508())
						{
							iVar111 = 0;
							while (iVar111 < Var98.f_3)
							{
								unk_0xC2F7B578646A3EC1(iVar111, &Var0);
								if (Global_1835013.f_374 < 0)
								{
									if (func_479(&Var0, &Var116) || func_479(&Var0, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var0.f_96;
									}
								}
								if (iVar109 < 0)
								{
									if (unk_0x2A3398C6222EB190(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0xF8062BE67BAF24C8(iVar111, 0))
										{
											iVar109 = iVar111;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0xB5BFE902D3C42807(iVar111, 0))
									{
										iVar109 = iVar111;
									}
								}
								func_507(&Var0);
								iVar111++;
							}
							if (iVar109 < 0)
							{
								iVar109 = Var98.f_3;
							}
						}
						iVar111 = 0;
						unk_0xC2F7B578646A3EC1(0, &Var0);
						if (Var0.f_96 <= 1)
						{
							if (Global_1835390.f_2704[iVar113] < 12)
							{
								if (func_508() && iVar109 == 0)
								{
									func_506(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Var0.f_96);
									Global_1835390.f_2775[iVar113] = 0;
									Global_1835390.f_2704[iVar113]++;
								}
								if (func_508() && (func_479(&Var0, &Var116) || func_479(&Var0, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_479(&Var0, &Var116))
									{
										iVar109 = 0;
										Global_1835390.f_2775[iVar113] = 0;
									}
									MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_32 = { Var0 };
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_59 = Var0.f_96;
									if (func_505(uParam0->f_44))
									{
										iVar108 = unk_0xF8062BE67BAF24C8(0, Global_1835390.f_2709);
										if (iVar108 == 1)
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 0;
										}
									}
									if (func_440(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835390.f_2708)
									{
										if (unk_0x2A3398C6222EB190(Global_1835390.f_2769, Global_1835390.f_2710[iVar107]))
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_67[iVar107] = unk_0xF8062BE67BAF24C8(0, Global_1835390.f_2710[iVar107]);
										}
										else
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_60[iVar107] = unk_0xB5BFE902D3C42807(0, Global_1835390.f_2710[iVar107]);
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
						if (!func_508())
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
						func_507(&Var0);
						iVar111 = iVar110;
						while (iVar111 <= (Var98.f_3 - 1))
						{
							unk_0xC2F7B578646A3EC1(iVar111, &Var0);
							if (Global_1835390.f_2704[iVar113] < 12 && Var0.f_96 > 1)
							{
								if (func_508() && iVar109 == iVar111)
								{
									if (!func_479(&(Global_1835390[iVar113 /*901*/][0 /*75*/].f_32), &Var116))
									{
										func_506(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Var0.f_96);
										Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
										Global_1835390.f_2704[iVar113]++;
									}
								}
								if (func_508() && (func_479(&Var0, &Var116) || func_479(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835390.f_2704[iVar113] < 12)
								{
									if (func_434(Var0) && !func_479(&Var0, &(Global_1835390[iVar113 /*901*/][0 /*75*/].f_32)))
									{
										if (func_479(&Var0, &Var116))
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
										if (func_505(uParam0->f_44))
										{
											iVar108 = unk_0xF8062BE67BAF24C8(iVar111, Global_1835390.f_2709);
											if (iVar108 == 1)
											{
												Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 0;
											}
										}
										if (func_440(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar106 = 0;
										iVar106 = 0;
										while (iVar106 < Global_1835390.f_2708)
										{
											if (unk_0x2A3398C6222EB190(Global_1835390.f_2769, Global_1835390.f_2710[iVar106]))
											{
												Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_67[iVar106] = unk_0xF8062BE67BAF24C8(iVar111, Global_1835390.f_2710[iVar106]);
											}
											else
											{
												Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_60[iVar106] = unk_0xB5BFE902D3C42807(iVar111, Global_1835390.f_2710[iVar106]);
											}
											iVar106++;
										}
										Global_1835390.f_2704[iVar113]++;
									}
								}
							}
							func_507(&Var0);
							iVar111++;
						}
						unk_0xFD293D325337DBD7();
						func_355(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar112)
						{
							if (Global_1835390.f_2775[iVar113] == -1 && func_508())
							{
								if (Global_1835390.f_2704[iVar113] >= 1)
								{
									func_506(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_506(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
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
						unk_0xFD293D325337DBD7();
						func_355(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835390.f_2775[iVar113] = -1;
						(*uParam0)[iVar113] = 2;
					}
				}
				else
				{
					func_355(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835390.f_2775[iVar113] = -1;
					(*uParam0)[iVar113] = 2;
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2832), iVar113);
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
			if (func_504(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar115))
			{
				func_437(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x360655C8E2BDFEC1(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						iVar106 = 0;
						while (iVar106 < Var98.f_3)
						{
							unk_0xC2F7B578646A3EC1(iVar106, &Var0);
							bVar114 = false;
							if (Global_1835390[iVar113 /*901*/][0 /*75*/].f_59 > 1 || Global_1835390[iVar113 /*901*/][0 /*75*/].f_59 <= 0)
							{
								bVar114 = true;
							}
							if (Global_1835390.f_2704[iVar113] < 12 || bVar114)
							{
								if (func_508() && (func_479(&Var0, &Var116) || func_479(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (iVar106 == 0 || bVar114)
								{
									MemCopy(&(Global_1835390[iVar113 /*901*/][0 /*75*/]), {Var0.f_13}, 16);
									Global_1835390[iVar113 /*901*/][0 /*75*/].f_32 = { Var0 };
									Global_1835390[iVar113 /*901*/][0 /*75*/].f_59 = Var0.f_96;
									if (func_505(uParam0->f_44))
									{
										iVar108 = unk_0xF8062BE67BAF24C8(0, Global_1835390.f_2709);
										if (iVar108 == 1)
										{
											Global_1835390[iVar113 /*901*/][0 /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar113 /*901*/][0 /*75*/].f_58 = 0;
										}
									}
									if (func_440(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar113 /*901*/][0 /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar113 /*901*/][0 /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835390.f_2708)
									{
										if (unk_0x2A3398C6222EB190(Global_1835390.f_2769, Global_1835390.f_2710[iVar107]))
										{
											Global_1835390[iVar113 /*901*/][0 /*75*/].f_67[iVar107] = unk_0xF8062BE67BAF24C8(0, Global_1835390.f_2710[iVar107]);
										}
										else
										{
											Global_1835390[iVar113 /*901*/][0 /*75*/].f_60[iVar107] = unk_0xB5BFE902D3C42807(0, Global_1835390.f_2710[iVar107]);
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
									if (func_505(uParam0->f_44))
									{
										iVar108 = unk_0xF8062BE67BAF24C8(iVar106, Global_1835390.f_2709);
										if (iVar108 == 1)
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 0;
										}
									}
									if (func_440(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_59 = Var0.f_96;
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835390.f_2708)
									{
										if (unk_0x2A3398C6222EB190(Global_1835390.f_2769, Global_1835390.f_2710[iVar107]))
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_67[iVar107] = unk_0xF8062BE67BAF24C8(iVar106, Global_1835390.f_2710[iVar107]);
										}
										else
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_60[iVar107] = unk_0xB5BFE902D3C42807(iVar106, Global_1835390.f_2710[iVar107]);
										}
										iVar107++;
									}
									if (iVar106 != 0)
									{
										Global_1835390.f_2704[iVar113]++;
									}
								}
							}
							func_507(&Var0);
							iVar106++;
						}
					}
					unk_0xFD293D325337DBD7();
					func_355(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar113] = 3;
				}
				else
				{
					unk_0xFD293D325337DBD7();
					func_355(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2832), iVar113);
					Global_1835390.f_2704[iVar113] = 0;
					(*uParam0)[iVar113] = 3;
				}
				if (Global_1835390.f_2775[iVar113] == -1 && func_508())
				{
					if (Global_1835390.f_2704[iVar113] >= 1)
					{
						func_506(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
					}
					else
					{
						func_506(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
					}
					Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
					Global_1835390.f_2704[iVar113]++;
				}
			}
			break;
		
		case 3:
			func_503(iVar113, Global_1835013.f_374);
			(*uParam0)[iVar113] = 4;
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_503(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((func_508() && Global_1835390.f_2704[iParam0] > Global_1835390.f_2775[iParam0]) && Global_1835390.f_2775[iParam0] >= 0)
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
		if (!func_508())
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

int func_504(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_426() && !func_422())
			{
				func_420(*uParam2);
				if (unk_0xC651B7C97F161BBE(uParam2, iParam3, iParam4))
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
			if (!unk_0x483FB87EA49EC813(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x96F7B8B36FDB1B9C(*uParam2, uParam2->f_1, 0))
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

int func_505(int iParam0)
{
	if ((((((iParam0 == 815 || iParam0 == 824) || iParam0 == 825) || iParam0 == 826) || iParam0 == 827) || iParam0 == 828) || iParam0 == 849)
	{
		return 1;
	}
	return 0;
}

void func_506(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_440(uParam0->f_44))
	{
		MemCopy(sParam1, {Global_1835013.f_355}, 16);
		sParam1->f_32 = { Global_1835013.f_361 };
		MemCopy(&(sParam1->f_16), {Global_1835013.f_349}, 16);
	}
	else
	{
		StringCopy(sParam1, unk_0x06D7899D9C1F422F(unk_0x3D35F9864E4640B1()), 64);
		sParam1->f_32 = { func_439(unk_0x3D35F9864E4640B1()) };
	}
	sParam1->f_59 = iParam2;
	if (func_505(uParam0->f_44))
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
		if (unk_0x2A3398C6222EB190(Global_1835013.f_142.f_2, Global_1835390.f_2710[iVar1]))
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

void func_507(var uParam0)
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

int func_508()
{
	if (Global_1835388 && Global_1835389)
	{
		return 1;
	}
	return 0;
}

int func_509(var uParam0)
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
	Var114 = { func_439(unk_0x3D35F9864E4640B1()) };
	switch ((*uParam0)[1])
	{
		case 0:
			iVar107 = unk_0x87482CCFC1C6709F();
			Global_1835390.f_2775[1] = -1;
			Global_1835013.f_374 = -1;
			Global_1835390.f_2704[iVar113] = 0;
			if (iVar107 > 0)
			{
				if (func_508())
				{
					bVar112 = false;
				}
				else
				{
					bVar112 = true;
				}
				if (func_510(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &(uParam0->f_113), uParam0->f_113[0 /*66*/], bVar112, 0, 100))
				{
					func_437(&Var98, &(uParam0->f_44));
					if (uParam0->f_5 && unk_0x360655C8E2BDFEC1(&Var98))
					{
						if (func_508())
						{
							iVar110 = 0;
							iVar110 = 0;
							while (iVar110 < Var98.f_3)
							{
								if (iVar108 < 0)
								{
									unk_0xC2F7B578646A3EC1(iVar110, &Var0);
									if (func_440(uParam0->f_44))
									{
										if (Global_1835013.f_374 < 0)
										{
											if (func_479(&Var0, &(Global_1835013.f_361)))
											{
												Global_1835013.f_374 = Var0.f_96;
											}
										}
									}
									if (unk_0x2A3398C6222EB190(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0xF8062BE67BAF24C8(iVar110, 0))
										{
											iVar108 = iVar110;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0xB5BFE902D3C42807(iVar110, 0))
									{
										iVar108 = iVar110;
									}
									func_507(&Var0);
								}
								iVar110++;
							}
							if (iVar108 < 0)
							{
								iVar108 = Var98.f_3;
							}
						}
						iVar110 = 0;
						if (func_508() && iVar108 == 0)
						{
							if (Global_1835390.f_2704[iVar113] < 12)
							{
								func_506(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
								Global_1835390.f_2775[iVar113] = 0;
								Global_1835390.f_2704[iVar113]++;
							}
						}
						if (Var98.f_3 > 0)
						{
							unk_0xC2F7B578646A3EC1(0, &Var0);
							if (func_508() && (func_479(&Var0, &Var114) || func_479(&Var0, &(Global_1835013.f_361))))
							{
							}
							else if (func_434(Var0) && Global_1835390.f_2704[iVar113] < 12)
							{
								if (func_479(&Var0, &Var114))
								{
									iVar108 = 0;
									Global_1835390.f_2775[1] = 0;
								}
								MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
								Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_32 = { Var0 };
								Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_59 = 1;
								if (func_505(uParam0->f_44))
								{
									iVar111 = unk_0xF8062BE67BAF24C8(0, Global_1835390.f_2709);
									if (iVar111 == 1)
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 1;
									}
									else
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 0;
									}
								}
								if (func_440(uParam0->f_44))
								{
									MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
								}
								Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_74 = 1;
								iVar106 = 0;
								while (iVar106 < Global_1835390.f_2708)
								{
									if (unk_0x2A3398C6222EB190(Global_1835390.f_2769, Global_1835390.f_2710[iVar106]))
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_67[iVar106] = unk_0xF8062BE67BAF24C8(0, Global_1835390.f_2710[iVar106]);
									}
									else
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_60[iVar106] = unk_0xB5BFE902D3C42807(0, Global_1835390.f_2710[iVar106]);
									}
									iVar106++;
								}
								Global_1835390.f_2704[1]++;
							}
							else
							{
								func_507(&Var0);
								unk_0xFD293D325337DBD7();
								func_355(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
								Global_1835390.f_2704[1] = 0;
								(*uParam0)[1] = 1;
								if (Global_1835390.f_2775[iVar113] == -1 && func_508())
								{
									if (Global_1835390.f_2704[iVar113] >= 1)
									{
										func_506(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
									}
									else
									{
										func_506(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
									}
									Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
									Global_1835390.f_2704[iVar113]++;
								}
								return 0;
							}
							func_507(&Var0);
						}
						else
						{
							Global_1835390.f_2704[1] = 0;
							func_507(&Var0);
							unk_0xFD293D325337DBD7();
							func_355(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
							if (Global_1835390.f_2775[iVar113] == -1 && func_508())
							{
								if (Global_1835390.f_2704[iVar113] >= 1)
								{
									func_506(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_506(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
								}
								Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
								Global_1835390.f_2704[iVar113]++;
							}
							(*uParam0)[1] = 1;
							return 0;
						}
						if (!func_508())
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
							unk_0xC2F7B578646A3EC1(iVar110, &Var0);
							if (Global_1835390.f_2704[iVar113] < 12 && Var0.f_96 > 1)
							{
								if (func_508() && iVar108 == iVar110)
								{
									if (!func_479(&(Global_1835390[iVar113 /*901*/][0 /*75*/].f_32), &Var114))
									{
										func_506(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Var0.f_96);
										Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_59 = iVar110 + 1;
										Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
										Global_1835390.f_2704[iVar113]++;
									}
								}
								if (func_508() && (func_479(&Var0, &Var114) || func_479(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835390.f_2704[1] < 12)
								{
									if (func_434(Var0) && !func_479(&Var0, &(Global_1835390[iVar113 /*901*/][0 /*75*/].f_32)))
									{
										if (func_479(&Var0, &Var114))
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
										if (func_505(uParam0->f_44))
										{
											iVar111 = unk_0xF8062BE67BAF24C8(iVar110, Global_1835390.f_2709);
											if (iVar111 == 1)
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_58 = 0;
											}
										}
										if (func_440(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar106 = 0;
										while (iVar106 < Global_1835390.f_2708)
										{
											if (unk_0x2A3398C6222EB190(Global_1835390.f_2769, Global_1835390.f_2710[iVar106]))
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_67[iVar106] = unk_0xF8062BE67BAF24C8(iVar110, Global_1835390.f_2710[iVar106]);
											}
											else
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_60[iVar106] = unk_0xB5BFE902D3C42807(iVar110, Global_1835390.f_2710[iVar106]);
											}
											iVar106++;
										}
										Global_1835390.f_2704[1]++;
									}
								}
							}
							func_507(&Var0);
							iVar110++;
						}
						unk_0xFD293D325337DBD7();
						func_355(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						(*uParam0)[1] = 1;
						if (Global_1835390.f_2775[iVar113] == -1 && func_508())
						{
							if (Global_1835390.f_2704[iVar113] >= 1)
							{
								func_506(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
							}
							else
							{
								func_506(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
							}
							Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
							Global_1835390.f_2704[iVar113]++;
						}
						return 0;
					}
					else
					{
						func_355(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835390.f_2704[1] = 0;
						(*uParam0)[1] = 1;
						unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2832), 1);
						return 0;
					}
				}
			}
			else
			{
				func_355(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
				Global_1835390.f_2704[1] = 0;
				(*uParam0)[1] = 1;
				return 0;
			}
			break;
		
		case 1:
			func_503(iVar113, Global_1835013.f_374);
			(*uParam0)[1] = 2;
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_510(var uParam0, var uParam1, var* uParam2, var* uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_426() && !func_422())
			{
				func_420(*uParam2);
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
			if (!unk_0x483FB87EA49EC813(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x96F7B8B36FDB1B9C(*uParam2, uParam2->f_1, 0))
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

int func_511(var uParam0)
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
	Var0 = { func_439(unk_0x3D35F9864E4640B1()) };
	switch ((*uParam0)[iVar126])
	{
		case 0:
			Global_1835390.f_2775[iVar126] = -1;
			Global_1835390.f_2704[iVar126] = 0;
			Global_1835013.f_374 = -1;
			Global_1835389 = 0;
			if (func_512(uParam0->f_44))
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
			if (func_419(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var0, func_508(), 0, 0, 0))
			{
				func_437(&Var111, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x360655C8E2BDFEC1(&Var111))
				{
					if (Var111.f_3 > 0)
					{
						iVar124 = 0;
						iVar119 = 0;
						if (func_508())
						{
							iVar124 = 0;
							while (iVar124 < Var111.f_3)
							{
								unk_0xC2F7B578646A3EC1(iVar124, &Var13);
								if (Global_1835013.f_374 < 0)
								{
									if (func_479(&Var13, &Var0) || func_479(&Var13, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var13.f_96;
									}
								}
								if (iVar122 < 0)
								{
									if (unk_0x2A3398C6222EB190(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0xF8062BE67BAF24C8(iVar124, 0))
										{
											iVar122 = iVar124;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0xB5BFE902D3C42807(iVar124, 0))
									{
										iVar122 = iVar124;
									}
								}
								func_507(&Var13);
								iVar124++;
							}
							if (iVar122 < 0)
							{
								iVar122 = Var111.f_3;
							}
						}
						iVar124 = 0;
						unk_0xC2F7B578646A3EC1(0, &Var13);
						if (Var13.f_96 <= 1)
						{
							if (Global_1835390.f_2704[iVar126] < 12)
							{
								if (func_508() && iVar122 == 0)
								{
									func_506(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), Var13.f_96);
									Global_1835390.f_2775[iVar126] = 0;
									Global_1835390.f_2704[iVar126]++;
								}
								if (func_508() && (func_479(&Var13, &Var0) || func_479(&Var13, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_479(&Var13, &Var0))
									{
										iVar122 = 0;
										Global_1835390.f_2775[iVar126] = 0;
									}
									MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), {Var13.f_13}, 16);
									Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_32 = { Var13 };
									Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_59 = Var13.f_96;
									if (func_505(uParam0->f_44))
									{
										iVar121 = unk_0xF8062BE67BAF24C8(0, Global_1835390.f_2709);
										if (iVar121 == 1)
										{
											Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 0;
										}
									}
									if (func_440(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_74 = 1;
									iVar119 = 0;
									while (iVar119 < Global_1835390.f_2708)
									{
										if (unk_0x2A3398C6222EB190(Global_1835390.f_2769, Global_1835390.f_2710[iVar119]))
										{
											Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_67[iVar119] = unk_0xF8062BE67BAF24C8(0, Global_1835390.f_2710[iVar119]);
										}
										else
										{
											Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_60[iVar119] = unk_0xB5BFE902D3C42807(0, Global_1835390.f_2710[iVar119]);
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
						if (!func_508())
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
						func_507(&Var13);
						iVar124 = iVar123;
						while (iVar124 <= (Var111.f_3 - 1))
						{
							unk_0xC2F7B578646A3EC1(iVar124, &Var13);
							if (Global_1835390.f_2704[iVar126] < 12 && Var13.f_96 > 1)
							{
								if (func_508() && iVar122 == iVar124)
								{
									if (!func_479(&(Global_1835390[iVar126 /*901*/][0 /*75*/].f_32), &Var13))
									{
										func_506(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), Var13.f_96);
										Global_1835390.f_2775[iVar126] = Global_1835390.f_2704[iVar126];
										Global_1835390.f_2704[iVar126]++;
									}
								}
								if (func_508() && (func_479(&Var13, &Var0) || func_479(&Var13, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835390.f_2704[iVar126] < 12)
								{
									if (func_434(Var13) && !func_479(&(Global_1835390[iVar126 /*901*/][0 /*75*/].f_32), &Var13))
									{
										if (func_479(&Var13, &Var0))
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
										if (func_505(uParam0->f_44))
										{
											iVar121 = unk_0xF8062BE67BAF24C8(iVar124, Global_1835390.f_2709);
											if (iVar121 == 1)
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 0;
											}
										}
										if (func_440(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar119 = 0;
										iVar119 = 0;
										while (iVar119 < Global_1835390.f_2708)
										{
											if (unk_0x2A3398C6222EB190(Global_1835390.f_2769, Global_1835390.f_2710[iVar119]))
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_67[iVar119] = unk_0xF8062BE67BAF24C8(iVar124, Global_1835390.f_2710[iVar119]);
											}
											else
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_60[iVar119] = unk_0xB5BFE902D3C42807(iVar124, Global_1835390.f_2710[iVar119]);
											}
											iVar119++;
										}
										Global_1835390.f_2704[iVar126]++;
									}
								}
							}
							func_507(&Var13);
							iVar124++;
						}
						unk_0xFD293D325337DBD7();
						func_355(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar125)
						{
							if (Global_1835390.f_2775[iVar126] == -1 && func_508())
							{
								if (Global_1835390.f_2704[iVar126] >= 1)
								{
									func_506(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), Global_1835390[iVar126 /*901*/][(Global_1835390.f_2704[iVar126] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_506(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), 1);
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
						unk_0xFD293D325337DBD7();
						func_355(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835390.f_2775[iVar126] = -1;
						(*uParam0)[iVar126] = 1;
					}
				}
				else
				{
					func_355(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835390.f_2775[iVar126] = -1;
					(*uParam0)[iVar126] = 1;
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2832), iVar126);
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
			if (func_504(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar128))
			{
				func_437(&Var111, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x360655C8E2BDFEC1(&Var111))
				{
					if (Var111.f_3 > 0)
					{
						iVar119 = 0;
						while (iVar119 < Var111.f_3)
						{
							unk_0xC2F7B578646A3EC1(iVar119, &Var13);
							if (func_508() && (func_479(&Var13, &Var0) || func_479(&Var13, &(Global_1835013.f_361))))
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
										if (func_505(uParam0->f_44))
										{
											iVar121 = unk_0xF8062BE67BAF24C8(0, Global_1835390.f_2709);
											if (iVar121 == 1)
											{
												Global_1835390[iVar126 /*901*/][0 /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar126 /*901*/][0 /*75*/].f_58 = 0;
											}
										}
										if (func_440(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar126 /*901*/][0 /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1835390[iVar126 /*901*/][0 /*75*/].f_74 = 1;
										iVar120 = 0;
										iVar120 = 0;
										while (iVar120 < Global_1835390.f_2708)
										{
											if (unk_0x2A3398C6222EB190(Global_1835390.f_2769, Global_1835390.f_2710[iVar120]))
											{
												Global_1835390[iVar126 /*901*/][iVar119 /*75*/].f_67[iVar120] = unk_0xF8062BE67BAF24C8(iVar119, Global_1835390.f_2710[iVar120]);
											}
											else
											{
												Global_1835390[iVar126 /*901*/][iVar119 /*75*/].f_60[iVar120] = unk_0xB5BFE902D3C42807(iVar119, Global_1835390.f_2710[iVar120]);
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
										if (func_505(uParam0->f_44))
										{
											iVar121 = unk_0xF8062BE67BAF24C8(iVar119, Global_1835390.f_2709);
											if (iVar121 == 1)
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 0;
											}
										}
										if (func_440(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_59 = Var13.f_96;
										Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_74 = 1;
										iVar120 = 0;
										iVar120 = 0;
										while (iVar120 < Global_1835390.f_2708)
										{
											if (unk_0x2A3398C6222EB190(Global_1835390.f_2769, Global_1835390.f_2710[iVar120]))
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_67[iVar120] = unk_0xF8062BE67BAF24C8(iVar119, Global_1835390.f_2710[iVar120]);
											}
											else
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_60[iVar120] = unk_0xB5BFE902D3C42807(iVar119, Global_1835390.f_2710[iVar120]);
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
							func_507(&Var13);
							iVar119++;
						}
					}
					unk_0xFD293D325337DBD7();
					func_355(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar126] = 2;
				}
				else
				{
					unk_0xCD7E92DE2BFA0B0D(&(Global_1835390.f_2832), iVar126);
					func_355(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835390.f_2704[iVar126] = 0;
					(*uParam0)[iVar126] = 2;
					Global_1835390.f_2704[1] = 0;
					(*uParam0)[1] = 1;
					Global_1835390.f_2704[2] = 0;
					(*uParam0)[2] = 3;
				}
			}
			if (Global_1835390.f_2775[iVar126] == -1 && func_508())
			{
				if (Global_1835390.f_2704[iVar126] >= 1)
				{
					func_506(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), Global_1835390[iVar126 /*901*/][(Global_1835390.f_2704[iVar126] - 1) /*75*/].f_59 + 1);
				}
				else
				{
					func_506(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), 1);
				}
				Global_1835390.f_2775[iVar126] = Global_1835390.f_2704[iVar126];
				Global_1835390.f_2704[iVar126]++;
			}
			break;
		
		case 2:
			func_503(iVar126, Global_1835013.f_374);
			(*uParam0)[iVar126] = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_512(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)
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
						if (!unk_0xB3404E397FF56B3B(&(Global_1835013.f_5.f_2.f_1[iVar0 /*16*/]), &(Param0.f_3.f_1[iVar0 /*16*/])) || !unk_0xB3404E397FF56B3B(&(Global_1835013.f_5.f_2.f_1[iVar0 /*16*/].f_8), &(Param0.f_3.f_1[iVar0 /*16*/].f_8)))
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

void func_513(var uParam0)
{
	int iVar0;
	
	if (unk_0x93AEABCDA4C3C026(Global_1835390.f_2826))
	{
		iVar0 = unk_0x3A86D36AC82C3C8E(Global_1835390.f_2826);
		if (iVar0 < 300000)
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_42), 5);
		}
		else
		{
			unk_0xD804ACF2A7171150(&(uParam0->f_42), 5);
			func_488(Global_1835390.f_2826, -1);
		}
	}
}

void func_514(var uParam0)
{
	if (unk_0x77FA56883245AD26(uParam0))
	{
		unk_0x4237E72FB80FD332(uParam0, 255, 255, 255, 0, 0);
	}
}

void func_515(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
	if (unk_0x2A3398C6222EB190(iParam2, 4))
	{
		sVar0 = "SCLB_GLOBAL";
	}
	else if (unk_0x2A3398C6222EB190(iParam2, 5))
	{
		*iParam1++;
		sVar0 = "SCLB_FRIENDS";
	}
	else if (unk_0x2A3398C6222EB190(iParam2, 6))
	{
		*iParam1++;
		if (unk_0xE096BC82D913B3DB() && unk_0x1AE803DF5F9B30C9())
		{
			if (unk_0x43F4A6D2081CC5ED() && !unk_0x4C69E6D9E2ED0169(0))
			{
				sVar0 = "SCLB_CREW";
			}
			else
			{
				Var53 = { func_439(unk_0x3D35F9864E4640B1()) };
				if (unk_0xF3F1AD16A136B115(&Var53))
				{
					unk_0x7838EB8661A32D68(&Var1, 35, &Var53);
					if (!unk_0x0BD3CCFB6C6CFA91(&(Var1.f_1)))
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
	unk_0xEBD23F68B1A617FC(uParam0, "SET_SLOT");
	unk_0x32F9127910F63DFA(*iParam1);
	unk_0x32F9127910F63DFA(iParam2);
	if (bVar52)
	{
		unk_0x9BC6C9E77AAC792E(sVar0);
		unk_0xA9895403BC230880(&Var36);
		unk_0xCC5EB3A492FB7D4B();
	}
	else
	{
		unk_0x9BC6C9E77AAC792E(sVar0);
		unk_0xCC5EB3A492FB7D4B();
	}
	unk_0x1C703A54AB4B12F6();
	*iParam1++;
	if (bParam4)
	{
		iVar66 = 0;
		unk_0xCD7E92DE2BFA0B0D(&iVar66, 7);
		unk_0xEBD23F68B1A617FC(uParam0, "SET_SLOT");
		unk_0x32F9127910F63DFA(*iParam1);
		unk_0x32F9127910F63DFA(iVar66);
		if (!unk_0xE096BC82D913B3DB())
		{
			sVar0 = "SCLB_NOT_ONL";
		}
		else if (!unk_0xD69069794497409F())
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
		unk_0x9BC6C9E77AAC792E(sVar0);
		unk_0x48B999C33828FA82();
		unk_0x1C703A54AB4B12F6();
		*iParam1++;
	}
	else if (bParam3)
	{
		if (unk_0x2A3398C6222EB190(iParam2, 4))
		{
			sVar0 = "SCLB_NO_GLOBAL";
		}
		else if (unk_0x2A3398C6222EB190(iParam2, 5))
		{
			if (unk_0x87482CCFC1C6709F() > 0)
			{
				sVar0 = "SCLB_NO_FRNDS";
			}
			else
			{
				sVar0 = "SCLB_NO_FRNDSb";
			}
		}
		else if (unk_0x2A3398C6222EB190(iParam2, 6))
		{
			if (unk_0x4FB79719141588E9())
			{
				if (unk_0x0B26CCD382388F16())
				{
					if (unk_0xE096BC82D913B3DB() && unk_0x1AE803DF5F9B30C9())
					{
						if (unk_0x43F4A6D2081CC5ED() && !unk_0x4C69E6D9E2ED0169(0))
						{
							sVar0 = "SCLB_NO_CREWc";
						}
						else
						{
							Var67 = { func_439(unk_0x3D35F9864E4640B1()) };
							if (unk_0xF3F1AD16A136B115(&Var67))
							{
								unk_0x7838EB8661A32D68(&Var1, 35, &Var67);
								if (!unk_0x0BD3CCFB6C6CFA91(&(Var1.f_1)))
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
		unk_0xCD7E92DE2BFA0B0D(&iVar80, 7);
		unk_0xEBD23F68B1A617FC(uParam0, "SET_SLOT");
		unk_0x32F9127910F63DFA(*iParam1);
		unk_0x32F9127910F63DFA(iVar80);
		if (bVar52)
		{
			unk_0x9BC6C9E77AAC792E(sVar0);
			unk_0xA9895403BC230880(&Var36);
			unk_0x48B999C33828FA82();
		}
		else
		{
			unk_0x9BC6C9E77AAC792E(sVar0);
			unk_0x48B999C33828FA82();
		}
		unk_0x1C703A54AB4B12F6();
		*iParam1++;
	}
}

void func_516(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	unk_0xEBD23F68B1A617FC(uParam0, "SET_TITLE");
	unk_0x9BC6C9E77AAC792E(sParam1);
	unk_0xCC5EB3A492FB7D4B();
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		unk_0x9BC6C9E77AAC792E(uParam2[iVar0 /*6*/]);
		unk_0xCC5EB3A492FB7D4B();
		iVar0++;
	}
	unk_0x1C703A54AB4B12F6();
}

void func_517(var uParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	unk_0xEBD23F68B1A617FC(uParam0, "SET_MULTIPLAYER_TITLE");
	unk_0x9BC6C9E77AAC792E(uParam1);
	if (!unk_0x0BD3CCFB6C6CFA91(sParam2))
	{
		unk_0x7C8A7ECFBAD2C8C4(sParam2);
	}
	if (iParam5 == -1)
	{
		if (bParam4)
		{
			if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
			{
				unk_0xA9895403BC230880(sParam3);
			}
		}
		else if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
		{
			unk_0x7C8A7ECFBAD2C8C4(sParam3);
		}
	}
	else
	{
		if (bParam4)
		{
			if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
			{
				unk_0xA9895403BC230880(sParam3);
			}
		}
		else if (!unk_0x0BD3CCFB6C6CFA91(sParam3))
		{
			unk_0x7C8A7ECFBAD2C8C4(sParam3);
		}
		unk_0x96577CAA1D1E72DB(iParam5);
	}
	unk_0xCC5EB3A492FB7D4B();
	unk_0x1C703A54AB4B12F6();
}

void func_518(var uParam0, int iParam1)
{
	unk_0xEBD23F68B1A617FC(uParam0, "SET_DISPLAY_TYPE");
	unk_0x32F9127910F63DFA(iParam1);
	unk_0x1C703A54AB4B12F6();
}

void func_519(int iParam0)
{
	Global_1315691 = iParam0;
}

void func_520(int iParam0)
{
	Global_1356070.f_1079 = iParam0;
}

void func_521()
{
	func_524();
	func_522(4, -1);
	func_522(6, -1);
	func_522(7, -1);
	func_522(3, -1);
	func_522(1, -1);
	func_522(2, -1);
	func_522(11, -1);
	func_522(13, -1);
	func_522(14, -1);
	func_522(16, -1);
}

void func_522(int iParam0, int iParam1)
{
	unk_0xCD7E92DE2BFA0B0D(&(Global_1354565.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1354565.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_523(int iParam0)
{
	if (!Global_14443.f_1 == 1)
	{
		if (func_132(0))
		{
			func_129(iParam0);
		}
		unk_0xCD7E92DE2BFA0B0D(&Global_2314, 2);
	}
}

void func_524()
{
	Global_2501777.f_4489 = 0;
}

void func_525(bool bParam0)
{
	if (bParam0)
	{
		func_247(&(Local_51.f_119), 0, 0, 1, 1);
		func_246(&(Local_51.f_119), "HUD_INPUT53", 2, 202, 1, 1, 0);
		func_246(&(Local_51.f_119), "SCLB_PROFILE", 2, 217, 1, 1, 0);
		func_526(&(Local_51.f_119), 1);
	}
	else
	{
		func_247(&(Local_51.f_119), 0, 0, 1, 1);
		func_246(&(Local_51.f_119), "HUD_INPUT53", 2, 202, 1, 1, 0);
		func_526(&(Local_51.f_119), 1);
	}
}

void func_526(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_145(&(uParam0->f_1), 1024);
	}
	else
	{
		func_144(&(uParam0->f_1), 1024);
	}
}

int func_527(var uParam0)
{
	if ((unk_0x2A3398C6222EB190(uParam0->f_42, 1) && Global_1835390.f_2704[0] > 0) && uParam0->f_246.f_1 >= 0)
	{
		return 1;
	}
	return 0;
}

void func_528(var uParam0)
{
	if (Global_103469 != 0 && Global_104439.f_18904.f_12[Global_103469 /*8*/].f_4 == 0)
	{
		func_247(uParam0, 0, 0, 1, 1);
		func_246(uParam0, "IB_QUIT", 2, 202, 1, 1, 0);
		if (!unk_0xED5FFF2E0422067E())
		{
			func_246(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_530 = 1;
		}
		else if (unk_0xED5FFF2E0422067E() && iLocal_529)
		{
			func_246(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_530 = 0;
		}
		else
		{
			iLocal_530 = 0;
		}
	}
	else
	{
		func_247(uParam0, 0, 0, 1, 1);
		func_246(uParam0, "FE_HLP4", 2, 201, 1, 1, 0);
		func_246(uParam0, "IB_QUIT", 2, 202, 1, 1, 0);
		if (!unk_0xED5FFF2E0422067E())
		{
			func_246(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_530 = 1;
		}
		else if (unk_0xED5FFF2E0422067E() && iLocal_529)
		{
			func_246(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_530 = 0;
		}
		else
		{
			iLocal_530 = 0;
		}
	}
	func_526(&(Local_51.f_119), 1);
}

void func_529()
{
	func_558();
	func_414();
	func_557(&(Local_2468.f_358[0 /*189*/].f_24), 0, 0, "PilotDispatch", 0, 1);
	func_557(&uLocal_2138, 0, 0, "PilotDispatch", 0, 1);
	func_546(&Local_2468);
	func_530(&Local_2468, Local_51.f_10);
	if (unk_0x76B3C79DE564AFC6(Local_2468.f_358[0 /*189*/].f_9))
	{
		unk_0xFABEFEE17018AE2A(Local_2468.f_358[0 /*189*/].f_9, 4);
	}
}

void func_530(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_545(&Local_2468);
			break;
		
		case 1:
			func_544(&Local_2468);
			break;
		
		case 2:
			func_543(&Local_2468);
			func_542(&(Local_2468.f_27[2 /*10*/]), 1);
			func_542(&(Local_2468.f_27[3 /*10*/]), 1);
			break;
		
		case 3:
			func_541(&Local_2468);
			break;
		
		case 4:
			func_531(&Local_2468);
			break;
	}
}

void func_531(var uParam0)
{
	func_546(uParam0);
	uParam0->f_12 = 32;
	func_540(&(uParam0->f_27[0 /*10*/]), 947.1314f, 4146.46f, 80.494f, 30f, 2, 0);
	func_540(&(uParam0->f_27[1 /*10*/]), 762.498f, 4589.213f, 105.5935f, 30f, 2, 0);
	func_540(&(uParam0->f_27[2 /*10*/]), 659.2919f, 4806.028f, 175.759f, 30f, 2, 0);
	func_540(&(uParam0->f_27[3 /*10*/]), 621.3849f, 5032.051f, 343.6387f, 30f, 2, 0);
	func_540(&(uParam0->f_27[4 /*10*/]), 503.8404f, 5297.335f, 508.6478f, 30f, 2, 0);
	func_540(&(uParam0->f_27[5 /*10*/]), 555.4404f, 5426.935f, 708.948f, 30f, 2, 0);
	func_540(&(uParam0->f_27[6 /*10*/]), 637.6946f, 5491.08f, 717.522f, 30f, 2, 0);
	func_540(&(uParam0->f_27[7 /*10*/]), 790.3913f, 5491.866f, 566.103f, 30f, 2, 0);
	func_540(&(uParam0->f_27[8 /*10*/]), 910.6804f, 5313.552f, 388.8567f, 30f, 2, 0);
	func_540(&(uParam0->f_27[9 /*10*/]), 1159.749f, 5183.155f, 253.1068f, 30f, 2, 0);
	func_540(&(uParam0->f_27[10 /*10*/]), 1354.13f, 4998.078f, 141.6288f, 30f, 2, 0);
	func_540(&(uParam0->f_27[11 /*10*/]), 1612.532f, 4941.23f, 61.8549f, 30f, 2, 0);
	func_540(&(uParam0->f_27[12 /*10*/]), 2200.396f, 4800.332f, 69.9321f, 30f, 3, 2);
	func_540(&(uParam0->f_27[13 /*10*/]), 2527.632f, 5144.98f, 66.763f, 30f, 3, 2);
	func_540(&(uParam0->f_27[14 /*10*/]), 2527.131f, 5275.334f, 62.3622f, 30f, 2, 0);
	func_540(&(uParam0->f_27[15 /*10*/]), 2413.345f, 5443.203f, 99.4297f, 30f, 2, 0);
	func_540(&(uParam0->f_27[16 /*10*/]), 2236.067f, 5524.246f, 108.3291f, 30f, 2, 0);
	func_540(&(uParam0->f_27[17 /*10*/]), 1944.463f, 5520.007f, 177.2808f, 30f, 2, 0);
	func_540(&(uParam0->f_27[18 /*10*/]), 1712.477f, 5624.937f, 324.9427f, 30f, 2, 0);
	func_540(&(uParam0->f_27[19 /*10*/]), 1601.158f, 5663.75f, 335.8832f, 30f, 2, 0);
	func_540(&(uParam0->f_27[20 /*10*/]), 1410.764f, 5675.836f, 425.9678f, 30f, 2, 0);
	func_540(&(uParam0->f_27[21 /*10*/]), 1225.682f, 5678.654f, 497.3169f, 30f, 2, 0);
	func_540(&(uParam0->f_27[22 /*10*/]), 1094.47f, 5664.07f, 563.0829f, 30f, 2, 0);
	func_540(&(uParam0->f_27[23 /*10*/]), 1001.427f, 5633.827f, 633.2537f, 30f, 2, 0);
	func_540(&(uParam0->f_27[24 /*10*/]), 875.5358f, 5642.667f, 682.5352f, 30f, 2, 0);
	func_540(&(uParam0->f_27[25 /*10*/]), 741.3275f, 5688.046f, 709.5683f, 30f, 2, 0);
	func_540(&(uParam0->f_27[26 /*10*/]), 487.2532f, 5654.821f, 802.0096f, 30f, 3, 1);
	func_540(&(uParam0->f_27[27 /*10*/]), 362.6602f, 5620.538f, 723.2353f, 30f, 2, 0);
	func_540(&(uParam0->f_27[28 /*10*/]), 134.4865f, 5555.637f, 520.3109f, 30f, 2, 0);
	func_540(&(uParam0->f_27[29 /*10*/]), -128.2242f, 5510.46f, 307.4505f, 30f, 2, 0);
	func_540(&(uParam0->f_27[30 /*10*/]), -397.7556f, 5438.69f, 175.4529f, 30f, 2, 0);
	func_540(&(uParam0->f_27[31 /*10*/]), -520.8975f, 5424.283f, 165.285f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_539(&(uParam0->f_358[0 /*189*/]));
	func_538(&(uParam0->f_358[0 /*189*/]), "Player");
	func_534(&(uParam0->f_358[0 /*189*/]), unk_0x0031992CA618A445(), Local_51.f_1);
	func_533(&(uParam0->f_358[0 /*189*/]), 1135.682f, 3700.644f, 80.494f, 22.3451f);
	func_532(&(uParam0->f_358[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_532(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_20 = iParam1;
	uParam0->f_21 = iParam2;
	uParam0->f_22 = iParam3;
}

void func_533(var uParam0, struct<3> Param1, float fParam4)
{
	uParam0->f_16 = { Param1 };
	uParam0->f_19 = fParam4;
}

void func_534(var uParam0, int iParam1, var uParam2)
{
	uParam0->f_8 = iParam1;
	uParam0->f_9 = uParam2;
	func_535(uParam2, &(Local_51.f_243));
}

void func_535(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x432757A9E7AAFA96(uParam0, 0))
	{
		func_537(uParam1);
		uParam1->f_66 = unk_0xE9559A12052415BE(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xCF9C6545E179C4AD(iParam0), 16);
		*uParam1 = unk_0x3863090BB0402D29(iParam0);
		unk_0xB3EEFAD2583A0B39(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xCC1E6825E8AEFA91(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xB6CD70E75256F4B4(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x92D3D399848DA022(iParam0);
		uParam1->f_67 = unk_0x27F913045BB0E0C6(iParam0);
		uParam1->f_69 = unk_0x0B56976C59C0773F(iParam0);
		uParam1->f_70 = unk_0xB026720421512310(iParam0);
		unk_0x807574B316B857A4(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x6B1D7C9564AA9095(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x429138BE60703CCA(iParam0, 2))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 28);
		}
		if (unk_0x429138BE60703CCA(iParam0, 3))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 29);
		}
		if (unk_0x429138BE60703CCA(iParam0, 0))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 30);
		}
		if (unk_0x429138BE60703CCA(iParam0, 1))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x949DE8C96217A79B(iParam0, 0))
		{
			uParam1->f_68 = unk_0x727C05A2BF43A1DA(iParam0);
		}
		if (unk_0xF9CDF5CA6A1D6756(uParam1->f_66))
		{
			if (unk_0xB24748D4EDC0E921(iParam0))
			{
				switch (unk_0x04A9D89D1A4A6CCC(iParam0))
				{
					case 2:
					case 0:
						unk_0xD804ACF2A7171150(&(uParam1->f_77), 23);
						unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0xD804ACF2A7171150(&(uParam1->f_77), 23);
						unk_0xD804ACF2A7171150(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x95C125C85B156194(iParam0))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 9);
		}
		if (unk_0x09F06C3C37B36D10(iParam0))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 10);
		}
		if (unk_0x973A322D4D80E2D1(iParam0))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 13);
			unk_0xE22FB988FAA3CC86(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0xD19B16472550A083(iParam0))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 12);
		}
		func_536(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x3BE354A1A1BD6623(iParam0, iVar0 + 1))
			{
				unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), func_120(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x66FE8ED1424CB0E3(iParam0, 0))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xD804ACF2A7171150(&(uParam1->f_77), 11);
		}
		if (unk_0x8B0523D9EF9595C2(iParam0, "IgnoredByQuickSave") && unk_0x0E340E113E76A82F(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xD804ACF2A7171150(&(uParam1->f_77), 27);
		}
	}
}

int func_536(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x432757A9E7AAFA96(*uParam0, 0))
	{
		return 0;
	}
	if (unk_0x5583DCB5A49F0E53(*uParam0) == 0)
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
			if (unk_0xEB185A7D2320BECE(*uParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0xBE7294CB9B3BEC34(*uParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xE69CED5522DA627F(*uParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xE69CED5522DA627F(*uParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_537(var uParam0)
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

void func_538(char* sParam0, char* sParam1)
{
	StringCopy(sParam0, sParam1, 32);
}

void func_539(var uParam0)
{
	uParam0->f_10 = 0;
	uParam0->f_11 = -1;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0f;
	uParam0->f_23 = 13;
}

void func_540(var uParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6)
{
	*uParam0 = { Param1 };
	uParam0->f_3 = fParam4;
	uParam0->f_7 = iParam5;
	uParam0->f_8 = iParam6;
}

void func_541(var uParam0)
{
	func_546(uParam0);
	uParam0->f_12 = 28;
	func_540(&(uParam0->f_27[0 /*10*/]), -1737.725f, -2720.967f, 38f, 30f, 2, 0);
	func_540(&(uParam0->f_27[1 /*10*/]), -1384.515f, -2880.773f, 38f, 30f, 2, 0);
	func_540(&(uParam0->f_27[2 /*10*/]), -1156.435f, -2957.284f, 40f, 30f, 2, 0);
	func_540(&(uParam0->f_27[3 /*10*/]), -795.3043f, -2987.754f, 60f, 30f, 2, 0);
	func_540(&(uParam0->f_27[4 /*10*/]), -429.0231f, -2969.528f, 30f, 30f, 3, 1);
	func_540(&(uParam0->f_27[5 /*10*/]), -15.5168f, -2912.484f, 60f, 30f, 2, 0);
	func_540(&(uParam0->f_27[6 /*10*/]), 656.9059f, -2798.444f, 80f, 30f, 3, 2);
	func_540(&(uParam0->f_27[7 /*10*/]), 990.7529f, -2452.092f, 70f, 30f, 2, 0);
	func_540(&(uParam0->f_27[8 /*10*/]), 1019.531f, -2182.119f, 60f, 30f, 2, 0);
	func_540(&(uParam0->f_27[9 /*10*/]), 1019.899f, -1886.15f, 60f, 30f, 2, 0);
	func_540(&(uParam0->f_27[10 /*10*/]), 944.9045f, -1488.589f, 107.7f, 30f, 2, 0);
	func_540(&(uParam0->f_27[11 /*10*/]), 698.908f, -1013.024f, 100.5f, 30f, 3, 2);
	func_540(&(uParam0->f_27[12 /*10*/]), 388.7276f, -822.8241f, 90f, 30f, 2, 0);
	func_540(&(uParam0->f_27[13 /*10*/]), 20.7016f, -653.9637f, 101.8f, 30f, 3, 2);
	func_540(&(uParam0->f_27[14 /*10*/]), -135.3874f, -670.6069f, 112f, 30f, 3, 3);
	func_540(&(uParam0->f_27[15 /*10*/]), -360.3365f, -655.137f, 90f, 30f, 2, 0);
	func_540(&(uParam0->f_27[16 /*10*/]), -700.3533f, -657.1476f, 70f, 30f, 2, 0);
	func_540(&(uParam0->f_27[17 /*10*/]), -951.5859f, -654.0262f, 68f, 30f, 3, 2);
	func_540(&(uParam0->f_27[18 /*10*/]), -1125.587f, -769.7247f, 67f, 30f, 2, 0);
	func_540(&(uParam0->f_27[19 /*10*/]), -1281.291f, -851.0229f, 82f, 30f, 3, 1);
	func_540(&(uParam0->f_27[20 /*10*/]), -1580.865f, -1009.944f, 40f, 30f, 2, 0);
	func_540(&(uParam0->f_27[21 /*10*/]), -1877.52f, -1152.927f, 30f, 30f, 2, 0);
	func_540(&(uParam0->f_27[22 /*10*/]), -2101.111f, -1330.267f, 20f, 30f, 2, 0);
	func_540(&(uParam0->f_27[23 /*10*/]), -2230.15f, -1555.89f, 10f, 30f, 3, 2);
	func_540(&(uParam0->f_27[24 /*10*/]), -2214.946f, -1978.262f, 10f, 30f, 2, 0);
	func_540(&(uParam0->f_27[25 /*10*/]), -2055.091f, -2359.626f, 20f, 30f, 2, 0);
	func_540(&(uParam0->f_27[26 /*10*/]), -1893.392f, -2559.46f, 22f, 30f, 2, 0);
	func_540(&(uParam0->f_27[27 /*10*/]), -1737.725f, -2720.967f, 83.7f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_539(&(uParam0->f_358[0 /*189*/]));
	func_538(&(uParam0->f_358[0 /*189*/]), "Player");
	func_534(&(uParam0->f_358[0 /*189*/]), unk_0x0031992CA618A445(), Local_51.f_1);
	func_533(&(uParam0->f_358[0 /*189*/]), -2102.16f, -2556.082f, 38f, 245.6561f);
	func_532(&(uParam0->f_358[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_542(var uParam0, int iParam1)
{
	func_318(&(uParam0->f_9), iParam1);
}

void func_543(var uParam0)
{
	func_546(uParam0);
	uParam0->f_12 = 21;
	func_540(&(uParam0->f_27[0 /*10*/]), 1167.2f, -2557.195f, 90f, 30f, 2, 0);
	func_540(&(uParam0->f_27[1 /*10*/]), 869.9235f, -2613.705f, 57.8325f, 30f, 2, 0);
	func_540(&(uParam0->f_27[2 /*10*/]), 652.3818f, -2651.991f, 54.935f, 30f, 2, 0);
	func_540(&(uParam0->f_27[3 /*10*/]), 249.3849f, -2579.821f, 60.1264f, 30f, 3, 2);
	func_540(&(uParam0->f_27[4 /*10*/]), -31.7179f, -2590.793f, 19.9452f, 30f, 2, 0);
	func_540(&(uParam0->f_27[5 /*10*/]), -317.409f, -2582.66f, 48.7654f, 30f, 3, 3);
	func_540(&(uParam0->f_27[6 /*10*/]), -395.6915f, -2334.057f, 39.3612f, 30f, 2, 0);
	func_540(&(uParam0->f_27[7 /*10*/]), -300.2367f, -2118.431f, 53.3728f, 30f, 2, 0);
	func_540(&(uParam0->f_27[8 /*10*/]), -157.1812f, -1967.885f, 56.4093f, 30f, 3, 2);
	func_540(&(uParam0->f_27[9 /*10*/]), -199.4688f, -1803.328f, 13.6363f, 30f, 2, 0);
	func_540(&(uParam0->f_27[10 /*10*/]), -383.5264f, -1738.067f, 60.8194f, 30f, 2, 0);
	func_540(&(uParam0->f_27[11 /*10*/]), -649.8698f, -1710.374f, 61.3036f, 30f, 2, 0);
	func_540(&(uParam0->f_27[12 /*10*/]), -861.6902f, -1857.194f, 77.0621f, 30f, 3, 2);
	func_540(&(uParam0->f_27[13 /*10*/]), -716.8034f, -2111.744f, 65.9868f, 30f, 2, 0);
	func_540(&(uParam0->f_27[14 /*10*/]), -548.7557f, -2230.616f, 97.2887f, 30f, 2, 0);
	func_540(&(uParam0->f_27[15 /*10*/]), -270.7834f, -2425.144f, 96.7744f, 30f, 3, 1);
	func_540(&(uParam0->f_27[16 /*10*/]), 5.435f, -2665.31f, 46.2903f, 30f, 2, 0);
	func_540(&(uParam0->f_27[17 /*10*/]), 299.0821f, -2834.288f, 27.0191f, 30f, 2, 0);
	func_540(&(uParam0->f_27[18 /*10*/]), 514.295f, -2880.863f, 42.0956f, 30f, 3, 2);
	func_540(&(uParam0->f_27[19 /*10*/]), 842.6024f, -2599.042f, 25.978f, 30f, 2, 0);
	func_540(&(uParam0->f_27[20 /*10*/]), 991.974f, -2468.436f, 87.493f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_539(&(uParam0->f_358[0 /*189*/]));
	func_538(&(uParam0->f_358[0 /*189*/]), "Player");
	func_534(&(uParam0->f_358[0 /*189*/]), unk_0x0031992CA618A445(), Local_51.f_1);
	func_533(&(uParam0->f_358[0 /*189*/]), 1788.044f, -2438.835f, 130.9346f, 100.0275f);
	func_532(&(uParam0->f_358[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_544(var uParam0)
{
	func_546(uParam0);
	uParam0->f_12 = 19;
	func_540(&(uParam0->f_27[0 /*10*/]), -2819.07f, -81.2779f, 76.1411f, 30f, 2, 0);
	func_540(&(uParam0->f_27[1 /*10*/]), -2737.77f, 342.665f, 175.645f, 30f, 2, 0);
	func_540(&(uParam0->f_27[2 /*10*/]), -2631.929f, 499.7495f, 210.0935f, 30f, 2, 0);
	func_540(&(uParam0->f_27[3 /*10*/]), -2438.01f, 692.3843f, 285.745f, 30f, 3, 3);
	func_540(&(uParam0->f_27[4 /*10*/]), -2039.406f, 708.7898f, 170.6556f, 30f, 2, 0);
	func_540(&(uParam0->f_27[5 /*10*/]), -1633.076f, 751.8171f, 220.188f, 30f, 2, 0);
	func_540(&(uParam0->f_27[6 /*10*/]), -1187.955f, 874.4288f, 246.4972f, 30f, 3, 1);
	func_540(&(uParam0->f_27[7 /*10*/]), -893.826f, 994.239f, 239.512f, 30f, 2, 0);
	func_540(&(uParam0->f_27[8 /*10*/]), -565.788f, 1098.308f, 349.0507f, 30f, 2, 0);
	func_540(&(uParam0->f_27[9 /*10*/]), -326.8564f, 1129.9f, 336.1296f, 30f, 2, 0);
	func_540(&(uParam0->f_27[10 /*10*/]), -155.9212f, 1149.858f, 312.2522f, 30f, 2, 0);
	func_540(&(uParam0->f_27[11 /*10*/]), 145.603f, 1162.599f, 277.7465f, 30f, 3, 1);
	func_540(&(uParam0->f_27[12 /*10*/]), 355.6647f, 1234.464f, 287.6501f, 30f, 2, 0);
	func_540(&(uParam0->f_27[13 /*10*/]), 640.85f, 1191.643f, 329.783f, 30f, 2, 0);
	func_540(&(uParam0->f_27[14 /*10*/]), 783.3697f, 1157.395f, 329.0691f, 30f, 3, 3);
	func_540(&(uParam0->f_27[15 /*10*/]), 1016.378f, 1000.386f, 252.4894f, 30f, 2, 0);
	func_540(&(uParam0->f_27[16 /*10*/]), 1243.37f, 945.084f, 150.5214f, 30f, 2, 0);
	func_540(&(uParam0->f_27[17 /*10*/]), 1494.048f, 863.8886f, 110.4097f, 30f, 2, 0);
	func_540(&(uParam0->f_27[18 /*10*/]), 1751.842f, 687.7875f, 296.787f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_539(&(uParam0->f_358[0 /*189*/]));
	func_538(&(uParam0->f_358[0 /*189*/]), "Player");
	func_534(&(uParam0->f_358[0 /*189*/]), unk_0x0031992CA618A445(), Local_51.f_1);
	func_533(&(uParam0->f_358[0 /*189*/]), -2818.17f, -500.178f, 76.1411f, 0f);
	func_532(&(uParam0->f_358[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_545(var uParam0)
{
	func_546(uParam0);
	uParam0->f_12 = 18;
	func_540(&(uParam0->f_27[0 /*10*/]), 1025.724f, 3073.133f, 70f, 30f, 2, 0);
	func_540(&(uParam0->f_27[1 /*10*/]), 847.4132f, 3025.239f, 80f, 30f, 2, 0);
	func_540(&(uParam0->f_27[2 /*10*/]), 624.897f, 2968.416f, 80f, 30f, 3, 1);
	func_540(&(uParam0->f_27[3 /*10*/]), 398.5529f, 2921.654f, 75f, 30f, 2, 0);
	func_540(&(uParam0->f_27[4 /*10*/]), 68.1f, 2896.4f, 80f, 30f, 2, 0);
	func_540(&(uParam0->f_27[5 /*10*/]), -290.7f, 2895.4f, 80f, 30f, 2, 0);
	func_540(&(uParam0->f_27[6 /*10*/]), -1033.31f, 2832.959f, 37.5f, 30f, 3, 2);
	func_540(&(uParam0->f_27[7 /*10*/]), -1195.153f, 2729.109f, 18f, 30f, 2, 0);
	func_540(&(uParam0->f_27[8 /*10*/]), -1414.6f, 2636.365f, 8.25f, 30f, 2, 0);
	func_540(&(uParam0->f_27[9 /*10*/]), -1684.856f, 2630.035f, 10f, 30f, 2, 0);
	func_540(&(uParam0->f_27[10 /*10*/]), -2024.536f, 2677.336f, 30f, 30f, 3, 1);
	func_540(&(uParam0->f_27[11 /*10*/]), -2659.106f, 2670.574f, 5.4745f, 30f, 2, 0);
	func_540(&(uParam0->f_27[12 /*10*/]), -2880.136f, 2732.084f, 21.0365f, 30f, 2, 0);
	func_540(&(uParam0->f_27[13 /*10*/]), -3200.826f, 2826.548f, 40f, 30f, 3, 2);
	func_540(&(uParam0->f_27[14 /*10*/]), -3363.374f, 2580.812f, 50f, 30f, 2, 0);
	func_540(&(uParam0->f_27[15 /*10*/]), -3242.432f, 2370.19f, 40f, 30f, 2, 0);
	func_540(&(uParam0->f_27[16 /*10*/]), -2879.09f, 2382.111f, 20f, 30f, 2, 0);
	func_540(&(uParam0->f_27[17 /*10*/]), -2650.532f, 2450.207f, 66.6f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_539(&(uParam0->f_358[0 /*189*/]));
	func_538(&(uParam0->f_358[0 /*189*/]), "Player");
	func_534(&(uParam0->f_358[0 /*189*/]), unk_0x0031992CA618A445(), Local_51.f_1);
	func_533(&(uParam0->f_358[0 /*189*/]), Local_2363, 154.8464f);
	func_532(&(uParam0->f_358[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_546(var uParam0)
{
	float fVar0;
	
	func_4(&(uParam0->f_3));
	if (Local_51.f_10 != -1)
	{
		fVar0 = func_35(Local_51.f_10);
		if (fVar0 <= 0f || fVar0 > Local_51.f_12[Local_51.f_10])
		{
			fVar0 = Local_51.f_12[Local_51.f_10];
		}
		uParam0->f_9 = fVar0;
		uParam0->f_10 = (uParam0->f_9 / 2f);
	}
	func_554(uParam0);
	uParam0->f_12 = 0;
	func_547(uParam0);
	uParam0->f_13 = 0;
}

void func_547(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		func_548(uParam0, iVar0);
		iVar0++;
	}
}

void func_548(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return;
	}
	func_550(&(uParam0->f_358[iParam1 /*189*/]));
	func_549(&(uParam0->f_358[iParam1 /*189*/]));
}

void func_549(char* sParam0)
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
	sParam0->f_16 = { Local_51.f_3 };
	sParam0->f_19 = Local_51.f_6;
	sParam0->f_20 = Local_51.f_7;
	sParam0->f_21 = Local_51.f_8;
	sParam0->f_22 = Local_51.f_9;
}

void func_550(var uParam0)
{
	func_553(uParam0);
	func_552(uParam0);
	func_551(uParam0);
}

void func_551(var uParam0)
{
	if (unk_0x76B3C79DE564AFC6(uParam0->f_9))
	{
		if (uParam0->f_9 != Local_51.f_1)
		{
			if (!(unk_0x7A6C051038031EFA(uParam0->f_8, 0) || unk_0x7A6C051038031EFA(uParam0->f_9, 0)))
			{
				if (unk_0xA32DC7E16AD1DFB7(uParam0->f_8, uParam0->f_9, 0))
				{
					unk_0x3000ECF14A659126(uParam0->f_8);
				}
			}
			unk_0xE9F8539D5AF6B052(&(uParam0->f_9));
		}
	}
}

void func_552(var uParam0)
{
	if (unk_0x76B3C79DE564AFC6(uParam0->f_8))
	{
		if (uParam0->f_8 != unk_0x0031992CA618A445())
		{
			unk_0xA50DE967C5813F23(&(uParam0->f_8));
		}
	}
}

void func_553(var uParam0)
{
	func_83(&(uParam0->f_10));
}

void func_554(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		func_555(uParam0, iVar0);
		iVar0++;
	}
}

void func_555(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return;
	}
	func_82(&(uParam0->f_27[iParam1 /*10*/]));
	func_79(&(uParam0->f_27[iParam1 /*10*/]));
	func_556(&(uParam0->f_27[iParam1 /*10*/]));
}

void func_556(var uParam0)
{
	*uParam0 = { Local_51.f_3 };
	uParam0->f_3 = 16f;
	uParam0->f_7 = 0;
	uParam0->f_4 = 10f;
}

void func_557(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_70785)
	{
		if (!unk_0x8682D8A6269E52C9(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x9C8949CB342B3559(iParam2, 0);
			}
			else
			{
				unk_0x9C8949CB342B3559(iParam2, 1);
			}
		}
		if (!unk_0x8682D8A6269E52C9(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x82D2A771C96871C8(iParam2, 0);
			}
			else
			{
				unk_0x82D2A771C96871C8(iParam2, 1);
			}
		}
	}
}

void func_558()
{
	struct<68> Var0;
	
	Global_1835013 = 0;
	Global_1835013.f_1 = 0;
	Global_1835013.f_2 = 0;
	Global_1835013.f_3 = 0;
	Global_1835013.f_4 = 0;
	func_559(&(Global_1835013.f_73));
	func_559(&(Global_1835013.f_142));
	func_559(&(Global_1835013.f_211));
	func_559(&(Global_1835013.f_280));
	StringCopy(&(Global_1835013.f_349), "", 24);
	StringCopy(&(Global_1835013.f_355), "", 24);
	func_495(&(Global_1835013.f_361));
	Global_1835013.f_374 = -1;
	Global_1835388 = 0;
	Global_1835389 = 0;
	Var0.f_2.f_1 = 4;
	Global_1835013.f_5 = { Var0 };
}

void func_559(var uParam0)
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

void func_560(bool bParam0)
{
	if (bParam0)
	{
		unk_0x4FE3D138860DAC8B(0);
		unk_0x1DB9F932FA9835B4(1);
		unk_0xA1346CD938144786(0);
		func_161(1);
		Global_88165 = 1;
	}
	else
	{
		unk_0x4FE3D138860DAC8B(1);
		unk_0x1DB9F932FA9835B4(0);
		unk_0xA1346CD938144786(1);
		func_161(0);
		Global_88165 = 0;
	}
}

void func_561(var uParam0)
{
	*uParam0 = unk_0xB1E69EFAB6CB45A3("COUNTDOWN");
	unk_0x1F1D255CB6501243("HUD_321_GO", 0, -1);
}

int func_562(int iParam0)
{
	if (unk_0x5114FCEE2A997B95())
	{
		unk_0x18D7C8000EDEAAB4(iParam0);
	}
	else if (unk_0xF9FC07CC13402AEF())
	{
		return 1;
	}
	return 0;
}

void func_563()
{
	int iVar0;
	
	if (!iLocal_2462)
	{
		if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
		{
			if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
			{
				iVar0 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
				if (unk_0x76B3C79DE564AFC6(iVar0) && !unk_0x7A6C051038031EFA(iVar0, 0))
				{
					if (unk_0xF6C6ED9F9C63AEC0(iVar0))
					{
						if (!unk_0x5114FCEE2A997B95())
						{
							unk_0x1E420F926A7BC4D2("MGSP_START");
							iLocal_2462 = 1;
						}
					}
				}
			}
		}
	}
}

int func_564(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_565(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam1 = unk_0xB58C3EF64476C1BC(uParam0, 24, 31);
	*uParam2 = unk_0xB58C3EF64476C1BC(uParam0, 16, 23);
	*uParam3 = unk_0xB58C3EF64476C1BC(uParam0, 8, 15);
	*uParam4 = unk_0xB58C3EF64476C1BC(uParam0, 0, 7);
}

var func_566(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0xB922891BFD232C45(iParam0, &uVar0, &uVar1, &uVar2, &uVar3);
	return func_567(uVar0, uVar1, uVar2, uVar3);
}

var func_567(var uParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	
	unk_0x9C6C4BCC24073048(&uVar0, 24, 31, uParam0);
	unk_0x9C6C4BCC24073048(&uVar0, 16, 23, uParam1);
	unk_0x9C6C4BCC24073048(&uVar0, 8, 15, uParam2);
	unk_0x9C6C4BCC24073048(&uVar0, 0, 7, uParam3);
	return uVar0;
}

int func_568()
{
	if (unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
	{
		return 0;
	}
	func_578(23, 1);
	func_577(10);
	switch (Local_2377.f_5)
	{
		case 0:
			unk_0x438B2E6B2BAD6A0D(0);
			unk_0x69467534947705D0("EXTRASUNNY", 10f);
			func_576();
			func_575(2, 0);
			func_575(1, 0);
			func_575(3, 0);
			func_575(4, 0);
			func_575(5, 0);
			func_575(6, 0);
			func_575(7, 0);
			unk_0xEC025B0914244C52(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), 10f, 0);
			unk_0xE882E0C18562237F(Local_5336, 600f, 0, 0, 0, 0, 0, 0);
			func_569(&Local_2468, Local_51.f_10);
			unk_0x91C7696F82A61D97(unk_0x3D35F9864E4640B1(), 0);
			unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 0, 512);
			if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0) || unk_0x292D1BF190062D1C(unk_0x0031992CA618A445()))
			{
				Local_2377.f_5 = 2;
			}
			else
			{
				Local_2377.f_5 = 1;
			}
			break;
		
		case 1:
			if (func_342(1000))
			{
				Local_2377.f_5 = 2;
			}
			break;
		
		case 2:
			unk_0x1D69C39ECF71C85C("SP_SPR", 3);
			unk_0x59B2F61C9D01132B("Shared", 0);
			while (!unk_0xB56F0E1C89B9E069("Shared"))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0x1F1D255CB6501243("HUD_AWARDS", 0, -1);
			Local_2377.f_5 = 3;
			break;
		
		case 3:
			if (unk_0xF376F1492C8D737F(3))
			{
				Local_2377.f_5 = 4;
			}
			break;
		
		case 4:
			Local_2377.f_5 = 5;
			func_11(&(Local_2377.f_2));
			break;
		
		case 5:
			if (func_2(&(Local_2377.f_2), 0.5f))
			{
				Local_2377.f_5 = 6;
			}
			break;
		
		case 6:
			if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
			{
				Local_2377.f_5 = 9;
			}
			else
			{
				Local_2377.f_5 = 7;
				func_11(&(Local_2377.f_2));
			}
			break;
		
		case 7:
			if (func_2(&(Local_2377.f_2), 0.5f))
			{
				Local_2377.f_5 = 8;
			}
			break;
		
		case 8:
			if (func_562(5000))
			{
				unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 1, 0);
				Local_2377.f_5 = 9;
			}
			break;
		
		case 9:
			func_4(&(Local_2377.f_2));
			return 0;
			break;
		
		case 10:
			return 0;
			break;
	}
	return 1;
}

void func_569(var uParam0, int iParam1)
{
	Local_51.f_0 = 0;
	Local_51.f_1 = 0;
	Local_51.f_2 = 2;
	Local_51.f_3 = { Local_2363 };
	Local_51.f_6 = 154.8464f;
	Local_51.f_7 = 4;
	Local_51.f_8 = joaat("a_m_y_genstreet_01");
	Local_51.f_9 = joaat("stunt");
	StringCopy(&(Local_51.f_24[0 /*8*/]), "AIRPORT", 32);
	Local_51.f_12[0] = 165f;
	StringCopy(&(Local_51.f_24[1 /*8*/]), "BRIDGEBINGE", 32);
	Local_51.f_12[1] = 80f;
	StringCopy(&(Local_51.f_24[2 /*8*/]), "VINEWOOD", 32);
	Local_51.f_12[2] = 165f;
	StringCopy(&(Local_51.f_24[3 /*8*/]), "BRIDGEWORK", 32);
	Local_51.f_12[3] = 165f;
	StringCopy(&(Local_51.f_24[4 /*8*/]), "ALTITUDE", 32);
	Local_51.f_12[4] = 165f;
	switch (iParam1)
	{
		case 0:
			func_574(&Local_2468);
			break;
		
		case 1:
			func_573(&Local_2468);
			break;
		
		case 2:
			func_572(&Local_2468);
			break;
		
		case 3:
			func_571(&Local_2468);
			break;
		
		case 4:
			func_570(&Local_2468);
			break;
	}
}

void func_570(var uParam0)
{
}

void func_571(var uParam0)
{
}

void func_572(var uParam0)
{
}

void func_573(var uParam0)
{
}

void func_574(var uParam0)
{
}

void func_575(int iParam0, int iParam1)
{
	unk_0xCD7E92DE2BFA0B0D(&Global_25379, iParam0);
	StringCopy(&(Global_25380[iParam0 /*6*/]), unk_0x49CAADAD1ABAB70A(), 24);
	Global_25435[iParam0] = iParam1;
}

void func_576()
{
	Global_17151.f_5 = 1;
}

void func_577(int iParam0)
{
	func_295();
	Global_71040 = iParam0;
	Global_71039 = 0;
	Global_71042 = 3;
}

void func_578(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_25466, iParam0);
	}
	else
	{
		unk_0xD804ACF2A7171150(&Global_25466, iParam0);
	}
}

void func_579()
{
}

void func_580()
{
	unk_0x7CDDB154852DA508();
	func_348();
	func_414();
	func_558();
	func_578(23, 0);
	func_560(0);
	unk_0x438B2E6B2BAD6A0D(5);
	unk_0xEB3E8FA824A0DE93();
	func_295();
	func_222(0);
	func_240(0);
	unk_0xD796E6028AF71DE8();
	unk_0xC21CF0B7B81DAE04("MGSP_START");
	unk_0xC21CF0B7B81DAE04("MGSP_FAIL");
	unk_0xC21CF0B7B81DAE04("MGTR_COMPLETE");
	unk_0x1E420F926A7BC4D2("MGSP_END");
	unk_0x616FBCC20E22C43A();
	func_588(2, 0);
	func_588(1, 0);
	func_588(3, 0);
	func_588(4, 0);
	func_588(5, 0);
	func_588(6, 0);
	func_588(7, 0);
	unk_0x91C7696F82A61D97(unk_0x3D35F9864E4640B1(), 1);
	unk_0x3ABBFAAA200C0B6F();
	func_586(&(Local_51.f_118));
	unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 1, 0);
	unk_0x94EB0EFC2C10DAF6(unk_0x3D35F9864E4640B1(), 0);
	unk_0x84D19A34E1A97ABC(3, 1);
	unk_0x40C8D24AE8508DEC("PilotSchool");
	func_584(&Local_2468, 1);
	unk_0x0EA5304CED5FD5D1(103, "SPRTaxi");
	unk_0x0EA5304CED5FD5D1(104, "SPRTaxi");
	unk_0x8C361F37C04084F4(1);
	unk_0x27FC4121D73AF604();
	func_583();
	unk_0x56A844FA6FE745C3(1);
	unk_0x4C4F62CD43971CED(1);
	func_237();
	unk_0xC938B5CB1FF90CA1(true);
	func_581();
	unk_0xBEE2834559A8897A();
}

void func_581()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_89840[iVar0 /*17*/] && !Global_89840[iVar0 /*17*/].f_1)
		{
			if (Global_89840[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_89840[iVar0 /*17*/].f_5 != 88 && Global_89840[iVar0 /*17*/].f_5 != 89) && Global_89840[iVar0 /*17*/].f_5 != 92)
				{
					func_582(Global_89840[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_582(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_86892[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_86892[iParam0 /*2*/] = 0;
	}
}

void func_583()
{
	Global_17151.f_5 = 0;
}

void func_584(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_546(uParam0);
	}
	else
	{
		func_585(uParam0);
	}
	func_128(0);
	func_27(&(uParam0->f_17));
	unk_0x8C361F37C04084F4(1);
	unk_0x27FC4121D73AF604();
	if (iLocal_2461)
	{
		func_61("SPR_MOVE_FAIL", 5000, 0);
		iLocal_2461 = 0;
	}
}

void func_585(var uParam0)
{
}

void func_586(var uParam0)
{
	func_587(*uParam0);
}

void func_587(var uParam0)
{
	unk_0x7F165E259CFAC8B8(&uParam0);
}

void func_588(int iParam0, bool bParam1)
{
	if (unk_0x2A3398C6222EB190(Global_25379, iParam0))
	{
		if (!bParam1)
		{
			unk_0xD804ACF2A7171150(&Global_25379, iParam0);
			StringCopy(&(Global_25380[iParam0 /*6*/]), "NULL", 24);
			Global_25435[iParam0] = bParam1;
		}
	}
}

