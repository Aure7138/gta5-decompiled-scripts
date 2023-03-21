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
	var uLocal_593 = 0;
	bool bLocal_594 = 0;
	var uLocal_595 = 35;
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
	var uLocal_911 = 50;
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
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 40;
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
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 1;
	var uLocal_1572 = 0;
	var uLocal_1573 = 1;
	var uLocal_1574 = 1;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 1;
	var uLocal_1579 = 1;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 3;
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
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 4;
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
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 2;
	var uLocal_1696 = 0;
	var uLocal_1697 = 4;
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
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 4;
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
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 12;
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
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 3;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	int iLocal_2019 = 0;
	var uLocal_2020 = 0;
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
	int iLocal_2038 = 0;
	int iLocal_2039 = 0;
	int iLocal_2040 = 0;
	int iLocal_2041 = 0;
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
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	int iLocal_2085[5] = { 0, 0, 0, 0, 0 };
	var uLocal_2091[5] = { 0, 0, 0, 0, 0 };
	var uLocal_2097[5] = { 0, 0, 0, 0, 0 };
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	int iLocal_2105 = 0;
	float fLocal_2106 = 0f;
	int iLocal_2107 = 0;
	int iLocal_2108 = 0;
	int iLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 0;
	var uLocal_2114 = 16;
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
	var uLocal_2275 = 0;
	var uLocal_2276 = 0;
	var uLocal_2277 = 0;
	var uLocal_2278 = 0;
	char* sLocal_2279 = NULL;
	float fLocal_2280 = 0f;
	float fLocal_2281 = 0f;
	bool bLocal_2282 = 0;
	bool bLocal_2283 = 0;
	struct<3> Local_2284 = { 0, 0, 0 } ;
	struct<3> Local_2287 = { 0, 0, 0 } ;
	struct<3> Local_2290 = { 0, 0, 0 } ;
	float fLocal_2293 = 0f;
	float fLocal_2294 = 0f;
	var uLocal_2295 = 0;
	var uLocal_2296 = 0;
	var uLocal_2297 = -1;
	var uLocal_2298 = 0;
	var uLocal_2299 = 0;
	var uLocal_2300 = 0;
	var uLocal_2301 = 0;
	var uLocal_2302 = 0;
	var uLocal_2303 = 0;
	var uLocal_2304 = 1000;
	var uLocal_2305 = 1000;
	var uLocal_2306 = 0;
	char[] cLocal_2307[8] = 0;
	char* sLocal_2308 = NULL;
	bool bLocal_2309 = 0;
	var uLocal_2310 = 0;
	var uLocal_2311 = 0;
	var uLocal_2312 = 0;
	var uLocal_2313 = 0;
	var uLocal_2314 = 0;
	var uLocal_2315 = 0;
	var uLocal_2316 = 0;
	var uLocal_2317 = 0;
	var uLocal_2318 = 0;
	bool bLocal_2319 = 0;
	int iLocal_2320 = 0;
	int iLocal_2321 = 0;
	struct<7> Local_2322 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2329 = 0;
	var uLocal_2330 = 0;
	var uLocal_2331 = 0;
	var uLocal_2332 = 0;
	var uLocal_2333 = 0;
	int iLocal_2334 = 0;
	var uLocal_2335 = 0;
	char* sLocal_2336 = NULL;
	char* sLocal_2337 = NULL;
	char* sLocal_2338 = NULL;
	struct<3> Local_2339 = { 0, 0, 0 } ;
	struct<3> Local_2342 = { 0, 0, 0 } ;
	int iLocal_2345 = 0;
	int iLocal_2346 = 0;
	int iLocal_2347 = 0;
	int iLocal_2348 = 0;
	int iLocal_2349 = 0;
	int iLocal_2350 = 0;
	int iLocal_2351 = 0;
	int iLocal_2352 = 0;
	struct<7> Local_2353 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2360 = 0;
	var uLocal_2361 = 0;
	var uLocal_2362 = 0;
	var uLocal_2363 = 1132396544;
	var uLocal_2364 = 1132396544;
	var uLocal_2365 = 1132396544;
	var uLocal_2366 = 0;
	var uLocal_2367 = -1082130432;
	var uLocal_2368 = 0;
	var uLocal_2369 = 0;
	var uLocal_2370 = 8;
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
	var uLocal_2423 = 0;
	var uLocal_2424 = 0;
	var uLocal_2425 = 0;
	var uLocal_2426 = 0;
	var uLocal_2427 = -1;
	var uLocal_2428 = 1092616192;
	var uLocal_2429 = 0;
	var uLocal_2430 = 0;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	var uLocal_2434 = 0;
	var uLocal_2435 = 0;
	var uLocal_2436 = 0;
	int iLocal_2437 = 0;
	int iLocal_2438 = 0;
	bool bLocal_2439 = 0;
	bool bLocal_2440 = 0;
	var uLocal_2441 = 0;
	bool bLocal_2442 = 0;
	int iLocal_2443 = 0;
	struct<2863> Local_2444 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_5307 = 1;
	var uLocal_5308 = 0;
	var uLocal_5309 = 0;
	var uLocal_5310 = 0;
	var uLocal_5311 = 0;
	struct<3> Local_5312 = { 0, 0, 0 } ;
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
	fLocal_2106 = -1f;
	iLocal_2107 = 1;
	fLocal_2280 = 0.2f;
	fLocal_2281 = 0.2f;
	fLocal_2294 = 0f;
	cLocal_2307 = "SPR_UI_FAILD";
	sLocal_2308 = "SPR_UI_FRETRY";
	sLocal_2336 = "CHECKPOINT_NORMAL";
	sLocal_2337 = "CHECKPOINT_MISSED";
	sLocal_2338 = "CHECKPOINT_PERFECT";
	Local_2339 = { 1694.74f, 3276.502f, 41.2796f };
	Local_2342 = { 8.79494f, 0.59893f, 154.8464f };
	bLocal_2439 = true;
	bLocal_2440 = true;
	bLocal_2442 = true;
	Local_5312 = { -1497.708f, -3449.576f, 7.3477f };
	if (unk_0x76BF814AB8D4CAB8(114))
	{
		func_591();
	}
	unk_0x955FF17089AF6072(1);
	Local_2353.f_1 = 0;
	Local_2353.f_5 = 0;
	Local_2353.f_6 = 0;
	while (true)
	{
		func_590();
		switch (Local_2353.f_1)
		{
			case 0:
				if (!func_579())
				{
					Local_2353.f_1 = 1;
				}
				break;
			
			case 1:
				if (!func_1())
				{
					Local_2353.f_1 = 2;
				}
				break;
			
			case 2:
				func_591();
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
	
	if (unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
	}
	if (unk_0x31F12808DC47A9E5(Local_51.f_1))
	{
		if (!unk_0x74C2FE037DFC8B4A(Local_51.f_1, 0))
		{
			if (!unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), Local_51.f_1, 0))
			{
				if (unk_0xDB5E52F2078862CA(unk_0x18F7BE9ACB7D08F4()))
				{
					Local_51.f_1 = unk_0x9EA0BBD07AFF816B(unk_0x18F7BE9ACB7D08F4());
				}
			}
		}
	}
	else if (unk_0xDB5E52F2078862CA(unk_0x18F7BE9ACB7D08F4()))
	{
		Local_51.f_1 = unk_0x9EA0BBD07AFF816B(unk_0x18F7BE9ACB7D08F4());
	}
	else
	{
		Local_51.f_1 = unk_0x048A9E2FC8C538E3(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), 10f, joaat("stunt"), 0);
	}
	if (Local_2444.f_2861 != 0)
	{
		Local_2444.f_2862 = (Local_2444.f_2862 - 25);
		if (Local_2444.f_2862 <= 0)
		{
			unk_0x56E53E946C215724(Local_2444.f_2861);
			Local_2444.f_2861 = 0;
			bLocal_2309 = false;
		}
		else
		{
			if (bLocal_2309)
			{
				iVar4 = 6;
			}
			else
			{
				iVar4 = 1;
			}
			func_576(func_577(iVar4), &uVar0, &uVar1, &uVar2, &uVar3);
			unk_0x65F3FD8A3EEA2375(Local_2444.f_2861, uVar0, uVar1, uVar2, func_575(unk_0x11E019C8F43ACC8A((1.5f * IntToFloat(Local_2444.f_2862))), 255));
			unk_0x49D4527220809B29(Local_2444.f_2861, uVar0, uVar1, uVar2, Local_2444.f_2862);
		}
	}
	func_574();
	unk_0x5B8E7771AF96EA2F("AMMUNATION");
	unk_0x9C7EE7DE7041A3F4(0, 99, 1);
	unk_0x9C7EE7DE7041A3F4(0, 100, 1);
	if (Local_2353.f_6 == 4)
	{
		unk_0x41C542213B94067C(unk_0x8CFC7D6E1DA5D304());
		unk_0x65A28A348055034B(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), 10f);
		if (unk_0xC4B84EB67F78C1F0(Local_51.f_1, 0))
		{
			if (unk_0x25A40FAC128F45B0(Local_51.f_1))
			{
				unk_0x64F60654362EB9D6(Local_51.f_1);
			}
		}
	}
	switch (Local_2353.f_6)
	{
		case 0:
			unk_0xBE97F4E2B659331B(0);
			Local_2353.f_0 = -1;
			Local_51.f_10 = 0;
			unk_0x3B4B46A2A779D56E(1734.802f, 3224.105f, 41.3709f, 1762.067f, 3258.69f, 40.5188f, 0, 1);
			if (unk_0x31F12808DC47A9E5(Local_51.f_1))
			{
				unk_0xA2B45B1D3EE42178(Local_51.f_1, 1);
				Local_2444.f_2859 = 0;
				Local_2353.f_6 = 3;
			}
			else
			{
				Local_2353.f_6 = 1;
			}
			break;
		
		case 1:
			Local_2353.f_6 = 18;
			break;
		
		case 2:
			if (unk_0x31F12808DC47A9E5(Local_51.f_1))
			{
				unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 0, 512);
				unk_0xA2B45B1D3EE42178(Local_51.f_1, 1);
				Local_2444.f_2859 = 0;
				Local_2353.f_6 = 3;
			}
			break;
		
		case 3:
			if (Local_2444.f_0)
			{
			}
			else if ((unk_0x5400DC5FAEBF30F0(uLocal_2078) && unk_0xEFEFF8C622C1C559(uLocal_2078)) && unk_0xC8AB6A5E6C1E6613())
			{
				if (unk_0x5400DC5FAEBF30F0(Local_2444.f_2858))
				{
					unk_0x13AD763DBD687842(Local_2444.f_2858, 0);
				}
				unk_0x605B63B87CCF606F("MinigameTransitionOut");
				unk_0x9575CEFF222148A6("MinigameTransitionIn", 0, 1);
				Local_2444.f_2858 = unk_0x2F192286DA6346A2(26379945, Local_45, Local_48, 34.9705f, 1, 2);
				unk_0xCFFAB52C7897F700(0);
				unk_0x9A8BE560E024CAB0(false);
				unk_0x9575CEFF222148A6("MinigameTransitionOut", 0, 0);
				unk_0xF6910B463A17E809(uLocal_2078, Local_45.f_0, Local_45.f_1, (Local_45.f_2 + 1000f));
				unk_0xA5D79F87520FD826(uLocal_2078, 90f, Local_48.f_1, Local_48.f_2, 2);
				unk_0x544D4FC2BDA00B32(Local_2444.f_2858, uLocal_2078, 500, 1, 1);
				unk_0x929C3CBA660376D5(-1, "QUIT_WHOOSH", "HUD_MINI_GAME_SOUNDSET", 1);
				unk_0xF5F744EF9F4DB21E(1, 0, 3000, 1, 0, 0);
			}
			else
			{
				func_573(500);
				if (unk_0x5400DC5FAEBF30F0(Local_2444.f_2858))
				{
					unk_0x13AD763DBD687842(Local_2444.f_2858, 0);
				}
				Local_2444.f_2858 = unk_0x2F192286DA6346A2(26379945, Local_45, Local_48, 34.9705f, 1, 2);
				unk_0xF5F744EF9F4DB21E(1, 0, 3000, 1, 0, 0);
			}
			func_572(&uLocal_2329);
			func_571(1);
			unk_0x4A918952774CFC67();
			Local_2353.f_6 = 4;
			break;
		
		case 4:
			if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0) && !unk_0x74C2FE037DFC8B4A(Local_51.f_1, 0))
			{
				unk_0x0F3F86C855582784(Local_51.f_1, 1, 0, 0);
			}
			if (unk_0xC339C5C5B5E8BC5B())
			{
				unk_0x9C7EE7DE7041A3F4(2, 199, 1);
			}
			unk_0x9C7EE7DE7041A3F4(2, 200, 1);
			unk_0x77B57B2BB7F3EA0A(0);
			Local_2444.f_2 = Local_2444.f_0;
			if (Local_2444.f_0)
			{
				if (unk_0x31F12808DC47A9E5(Local_2444.f_358[0 /*189*/].f_9))
				{
					unk_0xA2B45B1D3EE42178(Local_2444.f_358[0 /*189*/].f_9, 4);
				}
				iLocal_2022 = 0;
				Local_2444.f_0 = 0;
				func_540();
				Local_2353.f_6 = 8;
			}
			else if (Local_2444.f_2859)
			{
				if (unk_0x60D6796E6B9FD3DB())
				{
					if ((Local_2444.f_2859 && unk_0x3469AD51EA8B9583(2, 202)) && unk_0x83666F9FB8FEBD4B() > 500)
					{
						unk_0x0E3DA46EE7F36F9D(-1, "CANCEL", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
						Local_2444.f_2859 = 0;
						Local_2444.f_2860 = 1;
						func_539(&(Local_51.f_119));
						unk_0xC1B1E9A034A63A62(0);
					}
					if (!Local_2444.f_2860 && func_538(&uLocal_1582))
					{
						Local_2444.f_2860 = 1;
						func_536(Local_2444.f_2860);
					}
					func_474(&(Local_51.f_118), Global_103581, &(Local_51.f_24[Global_103581 /*8*/]));
				}
				else if (func_464(&iLocal_2019, 0))
				{
					Local_2444.f_2859 = 0;
					iLocal_2019 = 0;
					func_539(&(Local_51.f_119));
					unk_0xC1B1E9A034A63A62(0);
				}
			}
			else
			{
				if ((func_427(&Local_2444, 0) && !iLocal_527) && !bLocal_526)
				{
					func_539(&(Local_51.f_119));
				}
				if (iLocal_530 && unk_0x60D6796E6B9FD3DB())
				{
					func_539(&(Local_51.f_119));
					iLocal_530 = 0;
				}
				if ((((!Local_2444.f_2859 && !iLocal_527) && !bLocal_526) && (iLocal_529 || !unk_0x60D6796E6B9FD3DB())) && (unk_0x3469AD51EA8B9583(2, 211) || unk_0x1A3F4FBE2944681B(2, 211)))
				{
					Local_2444.f_2859 = 1;
					unk_0x0E3DA46EE7F36F9D(-1, "SELECT", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
					func_426(&uLocal_1582);
					Local_2444.f_2860 = func_538(&uLocal_1582);
					func_536(Local_2444.f_2860);
					unk_0xC1B1E9A034A63A62(0);
				}
				if (func_367(&uLocal_5307, &(Local_2444.f_1)))
				{
					iLocal_2022 = 0;
					if (Local_51.f_10 != -1)
					{
						func_359();
						func_540();
						if (unk_0x8673F2F1802ADEF7(Local_51.f_1, Local_2339, 5f, 5f, 5f, 0, 1, 0))
						{
							if (!unk_0x74C2FE037DFC8B4A(Local_51.f_1, 0))
							{
								func_358(&uLocal_5309);
								Local_2353.f_6 = 8;
							}
						}
						else if (!unk_0x74C2FE037DFC8B4A(Local_51.f_1, 0))
						{
							Local_2353.f_6 = 8;
						}
					}
					else
					{
						Local_2353.f_6 = 7;
					}
				}
			}
			break;
		
		case 7:
			unk_0x3F19B70555683951();
			if (unk_0xC4B84EB67F78C1F0(Local_51.f_1, 0))
			{
				unk_0xF5F744EF9F4DB21E(0, 0, 3000, 1, 0, 0);
				Local_2353.f_6 = 18;
			}
			else
			{
				if (unk_0x31F12808DC47A9E5(Local_2444.f_358[0 /*189*/].f_9))
				{
					unk_0x73D7E57BF0ED7FEB(Local_2444.f_358[0 /*189*/].f_9, 0);
				}
				unk_0x990FFD4FB6ADD630(unk_0x18F7BE9ACB7D08F4(), Local_2339, 1, 0, 0, 1);
				unk_0x58F6B49606932378(unk_0x18F7BE9ACB7D08F4(), Local_2342, 2, 1);
				if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
				{
					unk_0x9B53B2691E2B1F79(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), 1084227584);
				}
				unk_0xA3F41A1968319181(0f);
				unk_0x4CCECEB2EA5D6A82(0f, 1065353216);
				if (unk_0x31F12808DC47A9E5(Local_2444.f_358[0 /*189*/].f_9))
				{
					if (!unk_0x8BDE5BE4E46BA35F())
					{
						unk_0xBD320BAA5701BEC0(Local_2339, unk_0x9B40AD9E8738972C(unk_0x18F7BE9ACB7D08F4()), 500f, 0);
					}
					if (unk_0x34CC31673AD34B53())
					{
						unk_0xC7BB901E267A910A();
						Local_2353.f_6 = 18;
					}
				}
				else
				{
					Local_2353.f_6 = 18;
				}
			}
			break;
		
		case 8:
			unk_0xB00FC2F2EFCF5239();
			if (Local_51.f_10 == 0)
			{
				unk_0xF2106D7D1A77DBA8(Local_51.f_1);
				if (func_357(iLocal_2320, 16))
				{
					func_355(&iLocal_2320, 16);
				}
				unk_0x0F3F86C855582784(Local_51.f_1, 1, 1, 0);
				unk_0x8D77EFA08616AD64(unk_0x18F7BE9ACB7D08F4(), Local_51.f_1, -1);
				unk_0x0901CE00CFBB408F(Local_51.f_1);
				func_354();
				uLocal_2078 = unk_0x2F192286DA6346A2(26379945, 1702.487f, 3279.545f, 41.9968f, -2.9399f, 0f, 110.4428f, 45.0218f, 1, 2);
				unk_0x2C535610856B3F4D(Local_2444.f_2858, 0);
				Local_2353.f_6 = 9;
			}
			else if (func_353(1000))
			{
				unk_0xF5F744EF9F4DB21E(0, 0, 3000, 1, 0, 0);
				unk_0xA3F41A1968319181(0f);
				unk_0x0901CE00CFBB408F(Local_51.f_1);
				unk_0xF2106D7D1A77DBA8(Local_51.f_1);
				if (unk_0xEC0ECEF2AF3FDA8D())
				{
					func_354();
					Local_2353.f_6 = 10;
				}
			}
			break;
		
		case 9:
			if (!((unk_0xEFEFF8C622C1C559(uLocal_2078) && unk_0x644D3EC290513DA9(uLocal_2078)) || (unk_0xEFEFF8C622C1C559(Local_2444.f_2858) && unk_0x644D3EC290513DA9(Local_2444.f_2858))))
			{
				unk_0x7602D16A5C4D379B(1, 0, 3, 0);
				func_354();
				Local_2353.f_6 = 10;
			}
			break;
		
		case 10:
			Local_2444.f_25 = 0;
			Local_2353.f_6 = 11;
			break;
		
		case 11:
			if (!func_339(&Local_2444))
			{
				func_571(1);
				if (Local_2444.f_2)
				{
					unk_0xBD320BAA5701BEC0(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), unk_0x9B40AD9E8738972C(unk_0x18F7BE9ACB7D08F4()), 500f, 0);
				}
				if (Local_51.f_10 == 0)
				{
					func_338("SPR_TAXI_GATE", 10000, 1);
					if (!func_357(iLocal_2320, 16))
					{
						func_330(&Local_2444, 0, 1);
						func_329(&iLocal_2320, 16);
					}
					if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
					{
						unk_0x73D7E57BF0ED7FEB(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), 0);
						unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
					}
					unk_0x4A3AD9384F0AAEA0(1);
					unk_0x77B57B2BB7F3EA0A(1);
					Local_2353.f_6 = 13;
				}
				else
				{
					Local_2353.f_6 = 13;
				}
				Local_2444.f_2 = 0;
			}
			break;
		
		case 13:
			if (!unk_0x8BDE5BE4E46BA35F() || unk_0x34CC31673AD34B53())
			{
				if (unk_0x8BDE5BE4E46BA35F())
				{
					unk_0xC7BB901E267A910A();
				}
				unk_0xCFFAB52C7897F700(0);
				unk_0x9A8BE560E024CAB0(true);
				unk_0x73D7E57BF0ED7FEB(Local_2444.f_358[0 /*189*/].f_9, 0);
				func_354();
				if (func_357(iLocal_2320, 16))
				{
					func_355(&iLocal_2320, 16);
				}
				if (Local_51.f_10 == 0)
				{
					if (func_573(500))
					{
						Local_2444.f_26 = 0;
						Local_2353.f_6 = 14;
					}
				}
				else
				{
					func_328(&Local_2444);
					unk_0xA3F41A1968319181(0f);
					unk_0x4CCECEB2EA5D6A82(0f, 1065353216);
					if (func_573(500))
					{
						Local_2444.f_26 = 0;
						Local_2353.f_6 = 14;
					}
				}
			}
			break;
		
		case 14:
			if (Local_2353.f_0 == 1)
			{
				return 1;
			}
			if (func_24(&Local_2444))
			{
				return 1;
			}
			iLocal_2022 = 3;
			func_23();
			func_13();
			if (!Local_2444.f_0)
			{
				func_10(&(Local_2444.f_6));
				func_9(&(Local_2444.f_358[0 /*189*/]), Local_51.f_3, Local_51.f_6, 0f);
				if (unk_0x31F12808DC47A9E5(Local_2444.f_358[0 /*189*/].f_9))
				{
					unk_0x9B53B2691E2B1F79(Local_2444.f_358[0 /*189*/].f_9, 1084227584);
				}
				if (unk_0xBD320BAA5701BEC0(Local_45, func_8(Local_48), 4500f, 0))
				{
					unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 0, 0);
					while (!unk_0x34CC31673AD34B53() && func_5(&(Local_2444.f_6)) < 20f)
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					unk_0xC7BB901E267A910A();
					unk_0x73808E1273F0FC1F(Local_45, func_8(Local_48));
					func_4(&(Local_2444.f_6));
					Local_2353.f_6 = 15;
				}
				else if (func_2(&(Local_2444.f_6), 20f))
				{
					func_4(&(Local_2444.f_6));
					Local_2353.f_6 = 15;
				}
			}
			else
			{
				Local_2353.f_6 = 3;
			}
			break;
		
		case 15:
			if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
			{
				unk_0xA2B45B1D3EE42178(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), 1);
			}
			Local_2444.f_2859 = 0;
			Local_2353.f_6 = 3;
			break;
		
		case 18:
			if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
			{
				unk_0xA2B45B1D3EE42178(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), 1);
			}
			func_427(&Local_2444, 1);
			if (unk_0xEC0ECEF2AF3FDA8D())
			{
				func_573(1000);
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
	return unk_0xB03A1684359C50A1(*uParam0, 1);
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
			return (func_6(unk_0xB03A1684359C50A1(*uParam0, 4)) - uParam0->f_1);
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
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x5AFB8ED811F05E4D());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x44243F2E2F58B8E3())
	{
		iVar2 = unk_0xE92FCF3C05C2EF1D();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x5AFB8ED811F05E4D()) / 1000f);
}

bool func_7(var uParam0)
{
	return unk_0xB03A1684359C50A1(*uParam0, 2);
}

Vector3 func_8(struct<3> Param0)
{
	return (-unk_0x0BADBFA3B172435F(Param0.f_2) * unk_0xD0FFB162F40A139C(Param0.f_0)), (unk_0xD0FFB162F40A139C(Param0.f_2) * unk_0xD0FFB162F40A139C(Param0.f_0)), unk_0x0BADBFA3B172435F(Param0.f_0);
}

void func_9(var uParam0, struct<3> Param1, var uParam4, float fParam5)
{
	unk_0x990FFD4FB6ADD630(uParam0->f_9, Param1, 1, 0, 0, 1);
	unk_0xB88121FF8A34A66F(uParam0->f_9, uParam4);
	unk_0xFBD899EB9A2EF7F4(uParam0->f_9, fParam5);
}

void func_10(var uParam0)
{
	if (!func_3(uParam0))
	{
		func_358(uParam0);
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
	uParam0->f_1 = (func_6(unk_0xB03A1684359C50A1(*uParam0, 4)) - fParam1);
	unk_0xD2A9C3F486236CC5(uParam0, 1);
	unk_0x62148293B793073B(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_13()
{
	if (Global_104551.f_19013.f_12[4 /*8*/].f_4 == 1)
	{
		if (Global_104551.f_19013.f_6[4] > 0f)
		{
			if (Global_104551.f_19013.f_6[4] <= func_22(4))
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
	if (Global_104551.f_10164[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_104551.f_10164[iParam0 /*12*/].f_6 == 11 || Global_104551.f_10164[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_104551.f_10164[iParam0 /*12*/].f_5 = 1;
		Global_104551.f_10164[iParam0 /*12*/].f_10 = iParam1;
		Global_104551.f_10164[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x251A50BCC815FD98(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x251A50BCC815FD98(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x251A50BCC815FD98(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_104287 = 0;
	Global_104288 = 0;
	Global_104289 = 0;
	Global_104290 = 0;
	Global_104291 = 0;
	Global_104292 = 0;
	Global_104293 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_104551.f_10164.f_3853;
	Global_104551.f_10164.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_104551.f_10164[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_104551.f_10164[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_104287++;
					fVar1 = (fVar1 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_104288++;
					fVar2 = (fVar2 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_104289++;
					fVar3 = (fVar3 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_104290++;
					fVar4 = (fVar4 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_104291++;
					fVar5 = (fVar5 + (Global_104551.f_10164[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_104292++;
					fVar6 = (fVar6 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_104293++;
					fVar7 = (fVar7 + Global_104551.f_10164[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_104270 > 0)
	{
		if (Global_104287 == Global_104270)
		{
			fVar1 = 55f;
		}
	}
	if (Global_104271 > 0)
	{
		if (Global_104288 == Global_104271)
		{
			fVar2 = 10f;
		}
	}
	if (Global_104272 > 0)
	{
		if (Global_104289 == Global_104272)
		{
			fVar3 = 0f;
		}
	}
	if (Global_104273 > 0)
	{
		if (Global_104290 == Global_104273)
		{
			fVar4 = 10f;
		}
	}
	if (Global_104274 > 0)
	{
		if (((Global_104291 == Global_104274 || (Global_104274 * 10 / Global_104291) < 41) || Global_104291 > Global_104277) || Global_104291 == Global_104277)
		{
			if (!unk_0xB03A1684359C50A1(Global_104551.f_10164.f_3856, 14))
			{
				if (Global_104291 == Global_104274)
				{
					unk_0x251A50BCC815FD98(joaat("num_rndevents_completed"), Global_104274, 0);
					unk_0xD2A9C3F486236CC5(&(Global_104551.f_10164.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_104275 > 0)
	{
		if (Global_104292 == Global_104275)
		{
			fVar6 = 15f;
		}
	}
	if (Global_104276 > 0)
	{
		if (Global_104293 == Global_104276)
		{
			fVar7 = 5f;
		}
	}
	Global_104551.f_10164.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_104291 > Global_104277 || Global_104291 == Global_104277)
	{
		iVar9 = Global_104277;
	}
	else
	{
		iVar9 = Global_104291;
	}
	unk_0xD92C8D8AF3C67820(joaat("num_missions_completed"), Global_104287, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_missions_available"), Global_104270, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_minigames_completed"), Global_104288, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_minigames_available"), Global_104271, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_oddjobs_completed"), Global_104289, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_oddjobs_available"), Global_104272, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndpeople_completed"), Global_104290, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndpeople_available"), Global_104273, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_rndevents_available"), Global_104277, 1);
	unk_0xD92C8D8AF3C67820(joaat("num_misc_completed"), (Global_104293 + Global_104292), 1);
	unk_0xD92C8D8AF3C67820(joaat("num_misc_available"), (Global_104276 + Global_104275), 1);
	Global_104294 = (Global_104287 * 100 / Global_104270);
	Global_104296 = ((Global_104289 + Global_104288) * 100 / (Global_104272 + Global_104271));
	Global_104295 = ((Global_104290 + iVar9) * 100 / (Global_104273 + Global_104277));
	Global_104297 = ((Global_104292 + Global_104293) * 100 / (Global_104275 + Global_104276));
	unk_0xEB08A76786EAA075(joaat("total_progress_made"), Global_104551.f_10164.f_3853, 1);
	unk_0xD92C8D8AF3C67820(joaat("percent_story_missions"), Global_104294, 1);
	unk_0xD92C8D8AF3C67820(joaat("percent_ambient_missions"), Global_104295, 1);
	unk_0xD92C8D8AF3C67820(joaat("percent_oddjobs"), Global_104296, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_104551.f_10164.f_3853))
	{
		func_19(13, unk_0xF34EE736CF047844(Global_104551.f_10164.f_3853));
	}
	if (!unk_0x24BDFF94FAF6CE49())
	{
		if (!Global_70852)
		{
			if (func_18() == 2 == 0 && !unk_0x44243F2E2F58B8E3())
			{
				if (unk_0x9D67C2091DFDB507())
				{
					Global_104285 = 0;
				}
				if (!Global_55901)
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
	if (Global_92868.f_8)
	{
		if (Global_92868.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_92868.f_10 > 1)
	{
		return 0;
	}
	Global_92868.f_10++;
	return 1;
}

bool func_17(bool bParam0)
{
	if (!bParam0 && unk_0xE7FAF8E78F7D3A73(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB03A1684359C50A1(Global_71100, 0);
}

int func_18()
{
	return Global_25233;
}

int func_19(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x5D740A70A96E81DD(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x1CAB2C92E22EBFB2(iParam0, iParam1);
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
	var uVar17;
	
	if (iParam2 == -1)
	{
		iParam2 = func_21();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x88E3F30217D2CB3E((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xC83BD3A121E79D9F((iParam0 - 0)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x88E3F30217D2CB3E((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xC83BD3A121E79D9F((iParam0 - 192)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x88E3F30217D2CB3E((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xC83BD3A121E79D9F((iParam0 - 513)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x88E3F30217D2CB3E((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xC83BD3A121E79D9F((iParam0 - 705)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xBAF51F55DF57C4B2((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xC83BD3A121E79D9F((iParam0 - 3111)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xBAF51F55DF57C4B2((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xC83BD3A121E79D9F((iParam0 - 2919)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x45DE926FA3E8434A((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xC83BD3A121E79D9F((iParam0 - 4207)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x45DE926FA3E8434A((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xC83BD3A121E79D9F((iParam0 - 4335)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x45DE926FA3E8434A((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xC83BD3A121E79D9F((iParam0 - 6029)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x45DE926FA3E8434A((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xC83BD3A121E79D9F((iParam0 - 7385)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x45DE926FA3E8434A((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xC83BD3A121E79D9F((iParam0 - 7321)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x45DE926FA3E8434A((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xC83BD3A121E79D9F((iParam0 - 9361)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0x45DE926FA3E8434A((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0xC83BD3A121E79D9F((iParam0 - 15369)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0x45DE926FA3E8434A((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0xC83BD3A121E79D9F((iParam0 - 15562)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0x45DE926FA3E8434A((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0xC83BD3A121E79D9F((iParam0 - 15946)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = unk_0x45DE926FA3E8434A((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0xC83BD3A121E79D9F((iParam0 - 18098)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar17, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_21()
{
	return Global_1312736;
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
	iLocal_2345 = 0;
	iLocal_2346 = 0;
	iLocal_2347 = 0;
	iLocal_2348 = 0;
	iLocal_2349 = 0;
	iLocal_2350 = 0;
	iLocal_2351 = 0;
	iLocal_2352 = 0;
}

int func_24(var uParam0)
{
	switch (uParam0->f_26)
	{
		case 0:
			func_355(&iLocal_2320, 4);
			unk_0xE05212008FE9A018(2);
			func_327(uParam0);
			uParam0->f_17 = func_326();
			if (Local_51.f_10 == 0)
			{
				if (!func_357(iLocal_2320, 16))
				{
					func_330(uParam0, 0, 1);
					func_330(uParam0, 1, 0);
					func_329(&iLocal_2320, 16);
				}
			}
			else
			{
				func_328(uParam0);
				if (!func_357(iLocal_2320, 16))
				{
					func_330(uParam0, 0, 1);
					func_330(uParam0, 1, 0);
					func_329(&iLocal_2320, 16);
				}
			}
			func_4(&(uParam0->f_14));
			iLocal_2334 = 0;
			unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 0, 0);
			uParam0->f_26 = 1;
			break;
		
		case 1:
			unk_0xE05212008FE9A018(2);
			if (Local_51.f_10 == 0)
			{
				if (func_357(iLocal_2320, 16))
				{
					func_355(&iLocal_2320, 16);
				}
				func_324(uParam0);
				uParam0->f_26 = 7;
			}
			else
			{
				func_328(uParam0);
				if (!func_299(&(uParam0->f_14)))
				{
					if (!unk_0x8C7DADAE0E79F2DF())
					{
						unk_0xF5F744EF9F4DB21E(0, 1, 3000, 1, 0, 0);
					}
					if (func_357(iLocal_2320, 16))
					{
						func_355(&iLocal_2320, 16);
					}
					unk_0x4A3AD9384F0AAEA0(1);
					func_324(uParam0);
					if (Local_51.f_10 == 0 && (Global_104551.f_19013.f_6[0] > Local_51.f_112[0] || Global_104551.f_19013.f_6[0] == 0f))
					{
						func_298("SPR_HELP_GATE", 10000);
					}
					uParam0->f_26 = 7;
				}
			}
			break;
		
		case 2:
			if (!func_357(iLocal_2320, 1))
			{
				unk_0xC1B1E9A034A63A62(0);
				func_259(uParam0);
				func_258(&(Local_51.f_119), 0, 0, 1, 1);
				func_257(&(Local_51.f_119), "SPR_CONT2", 2, 201, 1, 1, 0);
				func_256(&(Local_51.f_119), 1);
				func_329(&iLocal_2320, 1);
			}
			if (unk_0x622E10ED992CEB95())
			{
				unk_0xEFF1F12403847394(1);
			}
			if (func_255("SPR_RETR_FAIL", 0, 0))
			{
				unk_0x08FC50794202A47C();
			}
			if (unk_0x622E10ED992CEB95())
			{
				unk_0xEFF1F12403847394(1);
			}
			if (func_255("SPR_RETR_FAIL", 0, 0))
			{
				unk_0x08FC50794202A47C();
			}
			unk_0xC1B1E9A034A63A62(0);
			func_253();
			func_252(0);
			unk_0xD3DA12823F23AEE1(unk_0x8CFC7D6E1DA5D304());
			unk_0xBCF8B669BC41925E(unk_0x8CFC7D6E1DA5D304(), 0);
			unk_0x9C7EE7DE7041A3F4(0, 75, 1);
			func_251(1);
			uParam0->f_26 = 4;
			break;
		
		case 4:
			unk_0x9C7EE7DE7041A3F4(0, 75, 1);
			func_249();
			if (!unk_0x74C2FE037DFC8B4A(uParam0->f_358[0 /*189*/].f_9, 0))
			{
				if (!unk_0x3AAE8FF7FB37F69E(uParam0->f_358[0 /*189*/].f_9) && unk_0x5400DC5FAEBF30F0(uLocal_2079))
				{
					unk_0xE691D59BC5B164BB(uLocal_2079, 2);
					unk_0xA12407EB7D7CF146(uParam0->f_358[0 /*189*/].f_9, 0, 0);
					unk_0x73D7E57BF0ED7FEB(uParam0->f_358[0 /*189*/].f_9, 1);
					func_248();
				}
			}
			if (!func_234(uParam0, bLocal_2439, bLocal_2440))
			{
				func_248();
				func_233(0);
				unk_0xEFF1F12403847394(1);
				if (func_357(iLocal_2320, 1))
				{
					func_355(&iLocal_2320, 1);
				}
				func_232(0, 0);
				if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
				{
					unk_0x267F7A2DFDFFB077(unk_0x18F7BE9ACB7D08F4());
				}
				unk_0x4CCECEB2EA5D6A82(0f, 1065353216);
				unk_0xA3F41A1968319181(0f);
				unk_0xBE97F4E2B659331B(0);
				iLocal_2443 = unk_0x2D524E0AFDB169D5();
				unk_0x929C3CBA660376D5(iLocal_2443, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", 1);
				func_4(&uLocal_2310);
				uParam0->f_26 = 5;
			}
			break;
		
		case 5:
			if (!unk_0x74C2FE037DFC8B4A(uParam0->f_358[0 /*189*/].f_9, 0))
			{
				unk_0x990FFD4FB6ADD630(uParam0->f_358[0 /*189*/].f_9, Local_2339, 1, 0, 0, 1);
				unk_0x58F6B49606932378(uParam0->f_358[0 /*189*/].f_9, Local_2342, 2, 1);
				unk_0xA12407EB7D7CF146(uParam0->f_358[0 /*189*/].f_9, 1, 0);
				unk_0x9C7EE7DE7041A3F4(0, 75, 1);
				unk_0x9B53B2691E2B1F79(uParam0->f_358[0 /*189*/].f_9, 1084227584);
				unk_0xF74B493CCF90C997(uParam0->f_358[0 /*189*/].f_9, 0);
			}
			iLocal_2438 = 0;
			uParam0->f_26 = 6;
			uParam0->f_358[0 /*189*/].f_23 = 7;
			break;
		
		case 6:
			uParam0->f_26 = 8;
			break;
		
		case 7:
			unk_0xC1C40A3B8772D9BA(uLocal_2329, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 100, 0);
			if (!func_357(iLocal_2320, 16))
			{
				func_330(uParam0, 0, 1);
				func_330(uParam0, 1, 0);
				func_329(&iLocal_2320, 16);
				func_252(1);
				func_231(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/]);
			}
			if (uParam0->f_1)
			{
				func_198(uParam0);
				func_196(uParam0);
			}
			else
			{
				func_193(&uLocal_2295, 0);
				func_248();
				unk_0x9A8BE560E024CAB0(false);
			}
			if (!func_41(uParam0, Local_51.f_0))
			{
				unk_0x9BEA833CAF67289C("MGSP_END");
				func_28(uParam0);
				func_4(&(uParam0->f_14));
				uParam0->f_26 = 2;
				func_4(&(uParam0->f_22));
			}
			break;
		
		case 8:
			unk_0x9C7EE7DE7041A3F4(0, 75, 1);
			func_27(&(uParam0->f_17));
			func_248();
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
		if (func_357(uLocal_2103, iVar0))
		{
			func_355(&uLocal_2103, iVar0);
		}
		if (func_357(uLocal_2104, iVar0))
		{
			func_355(&uLocal_2104, iVar0);
		}
		if (unk_0x31F12808DC47A9E5(uLocal_2091[iVar0]))
		{
			unk_0xBECECD970F645217(&(uLocal_2091[iVar0]));
		}
		if (unk_0x31F12808DC47A9E5(uLocal_2097[iVar0]))
		{
			unk_0x63C116C2153FAA3C(&(uLocal_2097[iVar0]));
		}
		iVar0++;
	}
	func_26(&iLocal_2085);
	iVar0 = 0;
	while (iVar0 < iLocal_2085)
	{
		iLocal_2085[iVar0] = 0;
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
			unk_0x419C9117019F2E5A((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_27(var uParam0)
{
	if (unk_0x5C716BBF766E1C70(*uParam0))
	{
		unk_0xEBE532BFFE618875(uParam0);
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
	unk_0xF74B493CCF90C997(uParam0->f_358[0 /*189*/].f_9, 1);
	unk_0x9C7EE7DE7041A3F4(0, 75, 1);
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
	if (!unk_0x74C2FE037DFC8B4A(uParam0->f_9, 0))
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
		if (!unk_0x74C2FE037DFC8B4A(uParam0->f_358[iVar0 /*189*/].f_8, 0))
		{
			if (uParam0->f_358[iVar0 /*189*/].f_8 == unk_0x18F7BE9ACB7D08F4())
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
	Global_104551.f_19013.f_6[iParam0] = fParam1;
}

void func_34(int iParam0, float fParam1)
{
	Local_51.f_18[iParam0] = fParam1;
}

var func_35(int iParam0)
{
	var uVar0;
	
	uVar0 = Global_104551.f_19013.f_6[iParam0];
	return uVar0;
}

void func_36(int iParam0, var uParam1)
{
	Global_104551.f_19013[iParam0] = uParam1;
}

int func_37(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = Global_104551.f_19013[iParam0];
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
			uParam0->f_358[iVar0 /*189*/].f_13 = (uParam0->f_358[0 /*189*/].f_13 + (IntToFloat((uParam0->f_12 - uParam0->f_358[iVar0 /*189*/].f_11)) * unk_0x3D81861E1A1652A9(0.5f, 2.5f)));
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
			uParam0->f_2 = (func_6(unk_0xB03A1684359C50A1(*uParam0, 4)) - uParam0->f_1);
			unk_0xD2A9C3F486236CC5(uParam0, 2);
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
			if (func_357(iLocal_2321, 131072))
			{
				unk_0xFBD2D2B0B14F862E(uParam0->f_358[0 /*189*/].f_9, 4);
				func_355(&iLocal_2321, 131072);
			}
		}
		else if (uParam0->f_358[0 /*189*/].f_11 == 1 && !func_357(iLocal_2321, 131072))
		{
			func_298("SPR_INFO_BON", 10000);
			func_329(&iLocal_2321, 131072);
			if (func_357(iLocal_2321, 262144))
			{
				func_355(&iLocal_2321, 262144);
			}
		}
		else if (uParam0->f_358[0 /*189*/].f_11 == 4 && !func_357(iLocal_2321, 262144))
		{
			func_298("SPR_INFO_RESET", 10000);
			func_329(&iLocal_2321, 262144);
		}
	}
	if (func_3(&(uParam0->f_3)))
	{
		fVar0 = func_5(&(uParam0->f_3));
	}
	func_175(uParam0->f_358[0 /*189*/].f_11, uParam0->f_1);
	unk_0x9C7EE7DE7041A3F4(0, 75, 1);
	iVar1 = 0;
	while (iVar1 < uParam0->f_13)
	{
		if (uParam0->f_358[iVar1 /*189*/].f_11 < uParam0->f_12)
		{
			bVar23 = false;
			if (uParam0->f_358[iVar1 /*189*/].f_8 == unk_0x18F7BE9ACB7D08F4())
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
					if (!func_3(&uLocal_2431))
					{
						func_358(&uLocal_2431);
					}
					if (func_5(&uLocal_2434) >= 6.5f)
					{
						if (!unk_0x02EA7C5633421A0F(2, 222))
						{
							func_11(&uLocal_2431);
						}
						else if (func_5(&uLocal_2431) >= 1.5f)
						{
							uParam0->f_1 = 0;
							func_355(&iLocal_2321, 32768);
							uParam0->f_358[0 /*189*/].f_23 = 6;
						}
					}
					else if (unk_0x02EA7C5633421A0F(2, 222))
					{
						if (func_5(&(uParam0->f_3)) < 6.5f)
						{
							func_103("SPR_HELP_RST1", &iLocal_2321, 65536, 0);
						}
						else
						{
							func_103("SPR_HELP_RST", &iLocal_2321, 32768, 0);
						}
					}
				}
				if (!unk_0x0FAE113CE72ED842(uParam0->f_358[iVar1 /*189*/].f_8))
				{
					func_101(uParam0, iVar1);
					if (Local_51.f_0 == 0 && func_3(&uLocal_2316))
					{
						return 1;
					}
					if (bVar23)
					{
						if (uParam0->f_358[iVar1 /*189*/].f_14 != 0f)
						{
							func_358(&(uParam0->f_14));
						}
						if (func_357(iLocal_2320, 8))
						{
							func_330(uParam0, iVar22, 1);
							if (iVar22 < (uParam0->f_12 - 1))
							{
								func_330(uParam0, iVar22 + 1, 0);
							}
							func_355(&iLocal_2320, 8);
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
						bLocal_2309 = func_84(uParam0->f_11);
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
									unk_0x08FC50794202A47C();
									sLocal_2308 = "SPR_TIME_FAIL";
									uParam0->f_358[0 /*189*/].f_23 = 0;
								}
							}
							else
							{
								func_330(uParam0, iVar22, 1);
								if (iVar22 < (uParam0->f_12 - 1))
								{
									func_330(uParam0, iVar22 + 1, 0);
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
								if (!unk_0x74C2FE037DFC8B4A(uParam0->f_358[iVar1 /*189*/].f_8, 0))
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
									if (bLocal_2442)
									{
										if (!unk_0x74C2FE037DFC8B4A(uParam0->f_358[iVar1 /*189*/].f_8, 0) && !unk_0x74C2FE037DFC8B4A(uParam0->f_358[iVar1 /*189*/].f_9, 0))
										{
											if (unk_0x2BBAA45ECDE3DAE2(uParam0->f_358[iVar1 /*189*/].f_8, -235832601) == 1)
											{
											}
											else
											{
												unk_0xAF7956D9C892AC2E(uParam0->f_358[iVar1 /*189*/].f_8, uParam0->f_358[iVar1 /*189*/].f_9, &cVar25, 262144, 0, 8, -1, unk_0xB64E14DD74D484C1(uParam0->f_358[iVar1 /*189*/].f_9), 0, 1073741824);
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
		func_65(uParam0, &uLocal_2441);
		func_64(uParam0, &uLocal_2441);
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
	
	if (unk_0x834A29018EBFDCB3())
	{
		unk_0x77B57B2BB7F3EA0A(1);
	}
	if (!func_3(&uLocal_2110))
	{
		iLocal_2108 = 0;
		iLocal_2109 = 0;
		func_358(&uLocal_2110);
	}
	if (unk_0x11E019C8F43ACC8A((uParam0->f_358[0 /*189*/].f_15 * 1000f)) != iLocal_2109)
	{
		iLocal_2108 = (unk_0x11E019C8F43ACC8A((uParam0->f_358[0 /*189*/].f_15 * 1000f)) - iLocal_2109);
		iLocal_2109 = unk_0x11E019C8F43ACC8A((uParam0->f_358[0 /*189*/].f_15 * 1000f));
		func_11(&uLocal_2110);
	}
	iVar0 = (unk_0xF34EE736CF047844((func_5(&(uParam0->f_3)) * 100f)) * 10 - unk_0x11E019C8F43ACC8A((uParam0->f_358[0 /*189*/].f_15 * 1000f)));
	iVar1 = 0;
	if (func_5(&uLocal_2110) <= 2f)
	{
		if (uParam0->f_358[0 /*189*/].f_11 > 0)
		{
			iVar1 = -iLocal_2108;
		}
		else
		{
			iVar1 = 0;
		}
	}
	iVar2 = unk_0xF34EE736CF047844((Global_104551.f_19013.f_6[Local_51.f_10] * 100f)) * 10;
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
		Global_1358718.f_1 = 1;
		func_45(7, iVar0);
		Global_1358718.f_4366[iVar0] = iParam0;
		StringCopy(&(Global_1358718.f_4366.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1358718.f_4366.f_172[iVar0] = iParam2;
		Global_1358718.f_4366.f_216[iVar0] = iParam3;
		Global_1358718.f_4366.f_183[iVar0] = uParam4;
		Global_1358718.f_4366.f_194[iVar0] = iParam5;
		Global_1358718.f_4366.f_249[iVar0] = iParam6;
		Global_1358718.f_4366.f_260[iVar0] = iParam7;
		Global_1358718.f_4366.f_205[iVar0] = iParam8;
		Global_1358718.f_4366.f_314[iVar0] = iParam9;
		Global_1358718.f_4366.f_325[iVar0] = iParam10;
		Global_1358718.f_4366.f_357[iVar0] = iParam11;
		Global_1358718.f_4366.f_238[iVar0] = iParam12;
		Global_1358718.f_4366.f_271[iVar0] = iParam13;
		Global_1358718.f_4366.f_368[iVar0] = iParam14;
		Global_1358718.f_4366.f_379[iVar0] = iParam15;
		Global_1358718.f_4366.f_390[iVar0] = iParam16;
	}
}

void func_45(int iParam0, int iParam1)
{
	unk_0xD2A9C3F486236CC5(&(Global_1358718.f_6097[iParam0]), iParam1);
}

bool func_46(int iParam0, int iParam1)
{
	return unk_0xB03A1684359C50A1(Global_1358718.f_6097[iParam0], iParam1);
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
		Global_1358718.f_1 = 1;
		func_45(5, iVar0);
		Global_1358718.f_3456[iVar0] = iParam0;
		Global_1358718.f_3456.f_172[iVar0] = uParam1;
		StringCopy(&(Global_1358718.f_3456.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1358718.f_3456.f_194[iVar0] = uParam3;
		Global_1358718.f_3456.f_183[iVar0] = uParam4;
		Global_1358718.f_3456.f_216[iVar0] = iParam5;
		Global_1358718.f_3456.f_227[iVar0] = iParam6;
		Global_1358718.f_3456.f_270[iVar0] = iParam7;
		Global_1358718.f_3456.f_281[iVar0] = iParam8;
		Global_1358718.f_3456.f_292[iVar0] = iParam9;
		Global_1358718.f_3456.f_303[iVar0] = iParam10;
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
		Global_1358718.f_1 = 1;
		func_45(3, iVar0);
		Global_1358718.f_2623[iVar0] = iParam0;
		StringCopy(&(Global_1358718.f_2623.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1358718.f_2623.f_183[iVar0] = uParam3;
		Global_1358718.f_2623.f_172[iVar0] = uParam2;
		Global_1358718.f_2623.f_205[iVar0] = iParam4;
		Global_1358718.f_2623.f_216[iVar0] = iParam5;
		StringCopy(&(Global_1358718.f_2623.f_259[iVar0 /*16*/]), sParam6, 64);
		Global_1358718.f_2623.f_420[iVar0] = iParam7;
		Global_1358718.f_2623.f_453[iVar0] = iParam8;
		Global_1358718.f_2623.f_431[iVar0] = iParam9;
		Global_1358718.f_2623.f_442[iVar0] = iParam10;
		Global_1358718.f_2623.f_464[iVar0] = iParam11;
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
		Global_1358718.f_1 = 1;
		func_45(0, iVar0);
		Global_1358718.f_1093[iVar0] = iParam0;
		Global_1358718.f_1093.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1358718.f_1093.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1358718.f_1093.f_194[iVar0] = uParam3;
		Global_1358718.f_1093.f_183[iVar0] = uParam4;
		Global_1358718.f_1093.f_216[iVar0] = iParam5;
		Global_1358718.f_1093.f_227[iVar0 /*3*/] = fParam6;
		Global_1358718.f_1093.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1358718.f_1093.f_258[iVar0] = iParam8;
		Global_1358718.f_1093.f_269[iVar0] = iParam9;
		Global_1358718.f_1093.f_312[iVar0] = iParam10;
		Global_1358718.f_1093.f_323[iVar0] = iParam11;
		Global_1358718.f_1093.f_334[iVar0] = iParam12;
		Global_1358718.f_1093.f_345[iVar0] = iParam13;
		Global_1358718.f_1088 = 1;
		Global_1358718.f_1093.f_356[iVar0] = iParam14;
		Global_1358718.f_1093.f_367[iVar0] = iParam15;
		Global_1358718.f_1093.f_378[iVar0] = iParam16;
		Global_1358718.f_1093.f_389[iVar0] = iParam17;
		Global_1358718.f_1093.f_400[iVar0] = iParam18;
		Global_1358718.f_1093.f_411[iVar0] = iParam19;
		Global_1358718.f_1093.f_422[iVar0] = iParam20;
		Global_1358718.f_1093.f_433[iVar0] = iParam21;
		Global_1358718.f_1093.f_444[iVar0] = iParam22;
		Global_1358718.f_1093.f_455[iVar0] = iParam23;
	}
}

int func_50(char[4] cParam0)
{
	if (unk_0xE0C4A595CD61B7F2(cParam0))
	{
		return 1;
	}
	else if (unk_0x9D39145AD645E383(cParam0, "") || unk_0x9D39145AD645E383(cParam0, "0"))
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
		Global_1358718.f_1 = 1;
		func_45(6, iVar0);
		Global_1358718.f_3770[iVar0] = iParam0;
		StringCopy(&(Global_1358718.f_3770.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1358718.f_3770.f_183[iVar0] = uParam3;
		Global_1358718.f_3770.f_172[iVar0] = uParam2;
		Global_1358718.f_3770.f_260[iVar0] = iParam4;
		Global_1358718.f_3770.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1358718.f_3770.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1358718.f_3770.f_443[iVar0] = iParam7;
		Global_1358718.f_3770.f_454[iVar0] = fParam8;
		Global_1358718.f_3770.f_497[iVar0] = iParam9;
		Global_1358718.f_3770.f_508[iVar0] = iParam10;
		Global_1358718.f_3770.f_205[iVar0] = iParam11;
		Global_1358718.f_3770.f_216[iVar0] = iParam12;
		Global_1358718.f_3770.f_227[iVar0] = iParam13;
		Global_1358718.f_3770.f_238[iVar0] = iParam14;
		Global_1358718.f_3770.f_249[iVar0] = iParam15;
		Global_1358718.f_3770.f_519[iVar0] = iParam16;
		Global_1358718.f_3770.f_530[iVar0] = iParam17;
		Global_1358718.f_3770.f_541[iVar0] = iParam18;
		Global_1358718.f_3770.f_552[iVar0] = iParam19;
		Global_1358718.f_3770.f_563[iVar0] = iParam20;
		Global_1358718.f_3770.f_574[iVar0] = iParam21;
		Global_1358718.f_3770.f_585[iVar0] = iParam22;
		if (iParam15 == 5 && func_53())
		{
			Global_1358718.f_1088 = 1;
		}
		if (unk_0xC339C5C5B5E8BC5B())
		{
			iVar2 = 0;
			unk_0xA320869CAE52B097(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1358718.f_1092 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1358718.f_1091 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1358718.f_1088 = 1;
			}
			if (func_52())
			{
				Global_1358718.f_1092 = 1;
			}
		}
	}
}

int func_52()
{
	int iVar0;
	var uVar1;
	
	if (unk_0xC339C5C5B5E8BC5B())
	{
		unk_0xA320869CAE52B097(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_53()
{
	if (((unk_0xE7A981467BC975BA() == 8 || unk_0xE7A981467BC975BA() == 9) || unk_0xE7A981467BC975BA() == 10) || unk_0xE7A981467BC975BA() == 12)
	{
		return 1;
	}
	return 0;
}

int func_54()
{
	return iLocal_2107;
}

void func_55()
{
	Global_1358718.f_1088 = 1;
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
		unk_0x4C7AD56AD6A8E131(0, 0, -1);
		unk_0x4C7AD56AD6A8E131(1, 0, -1);
		unk_0x4C7AD56AD6A8E131(2, 0, -1);
		unk_0x4C7AD56AD6A8E131(3, 0, -1);
	}
}

void func_58(var uParam0)
{
	if (func_5(&(uParam0->f_3)) > 15f)
	{
		if (unk_0x2A72627520A107B5(uParam0->f_358[0 /*189*/].f_9) < 5f)
		{
			if (!func_3(&uLocal_2313))
			{
				func_10(&uLocal_2313);
			}
			else if (func_5(&uLocal_2313) > 60f)
			{
				func_59("SPR_MOVE_FAIL", 5000, 0, &iLocal_2321, 8192);
				if (uParam0->f_358[0 /*189*/].f_11 <= (uParam0->f_12 - 1))
				{
					if (unk_0xE769D9B5158D0F11(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5))
					{
						unk_0x4925D19C5D509CE1(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5, 0);
					}
				}
				if (uParam0->f_358[0 /*189*/].f_11 + 1 <= (uParam0->f_12 - 2))
				{
					if (unk_0xE769D9B5158D0F11(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5))
					{
						unk_0x4925D19C5D509CE1(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5, 0);
					}
				}
				func_11(&uLocal_2313);
				func_11(&uLocal_2310);
				uParam0->f_1 = 0;
				unk_0x08FC50794202A47C();
				sLocal_2308 = "SPR_RETR_IDLE";
				uParam0->f_358[0 /*189*/].f_23 = 0;
			}
			else if (func_5(&uLocal_2313) > 30f)
			{
				if (!func_357(iLocal_2320, 32))
				{
					func_103("SPR_IDLE_WARN", &iLocal_2320, 32, 0);
				}
			}
		}
		else if (func_3(&uLocal_2313))
		{
			func_355(&iLocal_2320, 32);
			func_11(&uLocal_2313);
		}
	}
	else if (func_3(&uLocal_2313))
	{
		func_355(&iLocal_2320, 32);
		func_11(&uLocal_2313);
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
	unk_0x74D144ED1523F85D(sParam0);
	unk_0x0ADA506C37566A2D(iParam1, 1);
}

bool func_62(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0;
}

void func_63()
{
	if (unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) > 0)
	{
		unk_0x3987E3ADA8E87AD8(unk_0x8CFC7D6E1DA5D304());
	}
}

void func_64(var uParam0, var uParam1)
{
	if (uParam0->f_1)
	{
		if ((!unk_0xC4B84EB67F78C1F0(uParam0->f_358[0 /*189*/].f_9, 0) || unk_0x0A088F357EF627CA(uParam0->f_358[0 /*189*/].f_9) < 5) || unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
		{
			func_11(&uLocal_2310);
			if (unk_0xE769D9B5158D0F11(*uParam1))
			{
				unk_0x40D517D991458154(uParam1);
			}
			if (uParam0->f_358[0 /*189*/].f_11 <= (uParam0->f_12 - 1))
			{
				if (unk_0xE769D9B5158D0F11(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5))
				{
					unk_0x4925D19C5D509CE1(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5, 0);
				}
			}
			if (uParam0->f_358[0 /*189*/].f_11 + 1 <= (uParam0->f_12 - 2))
			{
				if (unk_0xE769D9B5158D0F11(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5))
				{
					unk_0x4925D19C5D509CE1(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5, 0);
				}
			}
			uParam0->f_1 = 0;
			unk_0x08FC50794202A47C();
			sLocal_2308 = "SPR_RETR_DES";
			uParam0->f_358[0 /*189*/].f_23 = 0;
		}
		return;
	}
}

void func_65(var uParam0, var uParam1)
{
	if (Local_51.f_0 == 0)
	{
		if (!unk_0x74C2FE037DFC8B4A(uParam0->f_358[0 /*189*/].f_9, 0))
		{
			if (!unk_0x1A7B277A2CBA7ADF(unk_0x18F7BE9ACB7D08F4()))
			{
				unk_0x08FC50794202A47C();
				unk_0xBE97F4E2B659331B(0);
				unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 0, 0);
				if (unk_0xE769D9B5158D0F11(*uParam1))
				{
					unk_0x40D517D991458154(uParam1);
					if (uParam0->f_358[0 /*189*/].f_11 <= (uParam0->f_12 - 1))
					{
						if (unk_0xE769D9B5158D0F11(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5))
						{
							unk_0x4925D19C5D509CE1(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5, 0);
						}
					}
					if (uParam0->f_358[0 /*189*/].f_11 + 1 <= (uParam0->f_12 - 2))
					{
						if (unk_0xE769D9B5158D0F11(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5))
						{
							unk_0x4925D19C5D509CE1(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5, 0);
						}
					}
				}
				uParam0->f_1 = 0;
				unk_0x08FC50794202A47C();
				sLocal_2308 = "SPR_RETR_DES";
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
	unk_0xFF22FE9205F44FB6("OFFMISSION_WASTED", 0, -1);
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
	
	iVar0 = unk_0x0A088F357EF627CA(uParam0->f_358[0 /*189*/].f_9);
	if (!unk_0x74C2FE037DFC8B4A(uParam0->f_358[0 /*189*/].f_9, 0))
	{
		iVar1 = unk_0xF2DB717A73826179(unk_0x5719E0F2FB0A1A07(uParam0->f_358[0 /*189*/].f_9));
	}
	if (IntToFloat(iVar0) < 500f)
	{
		if (Local_51.f_0 == 2)
		{
			if (!unk_0x74C2FE037DFC8B4A(uParam0->f_358[0 /*189*/].f_9, 0) && !unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
			{
				if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), uParam0->f_358[0 /*189*/].f_9, 0))
				{
					bLocal_2319 = true;
				}
			}
			if (bLocal_2319)
			{
				if (uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_7 == 6 || uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_7 == 10)
				{
					if (!unk_0xC45919BF593ACF15())
					{
						func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_2321, 2);
					}
				}
			}
		}
		else
		{
			if (unk_0xC45919BF593ACF15())
			{
				unk_0x08FC50794202A47C();
			}
			func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_2321, 2);
		}
	}
	if (Local_51.f_0 == 1)
	{
		if (IntToFloat(iVar1) < 200f)
		{
			if (unk_0xC45919BF593ACF15())
			{
				unk_0x08FC50794202A47C();
			}
			if (func_71())
			{
				func_69();
			}
			func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_2321, 2);
		}
	}
}

void func_69()
{
	Global_14622 = 0;
	func_70();
}

void func_70()
{
	unk_0x815093B4702C59D8();
	Global_16767 = 0;
	if ((unk_0x36328FCBA2944E1F() || Global_14453.f_1 == 9) || Global_14452 == 1)
	{
		unk_0xBE97F4E2B659331B(0);
		Global_15756 = 6;
		Global_14453.f_1 = 3;
		return;
	}
	if (unk_0x85FDEF76CDBAD589())
	{
		unk_0xBE97F4E2B659331B(1);
		Global_15756 = 6;
		return;
	}
}

int func_71()
{
	if (Global_15756 != 0 || unk_0x85FDEF76CDBAD589())
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
	fVar6 = unk_0x15EE504466B7BBD3(Var0, Var3, 1);
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
	Var8 = { unk_0x761660F5CE986DC4(uParam0->f_358[0 /*189*/].f_8, 1) };
	if (func_73(Var3, 0f, 0f, 0f, 1056964608, 0))
	{
		Var11 = { Var0 };
	}
	else
	{
		Var11 = { unk_0x69633CC0514DD57D(Var8, Var3, Var0, 1) };
	}
	fVar14 = unk_0x15EE504466B7BBD3(Var11, Var8, 1);
	bVar15 = fVar14 >= fVar6;
	bVar16 = fVar14 >= fVar7;
	if (Local_51.f_0 == 1)
	{
		if (unk_0x36E1A96E1D63ED91((Var11.f_2 - Var8.f_2)) > 15f)
		{
			bVar15 = true;
		}
	}
	if (bVar16)
	{
		func_11(&uLocal_2310);
		uParam0->f_1 = 0;
		unk_0x08FC50794202A47C();
		func_251(1);
		uParam0->f_358[0 /*189*/].f_23 = 0;
		func_258(&(Local_51.f_119), 0, 0, 1, 1);
		func_257(&(Local_51.f_119), "IB_RETRY", 2, 201, 1, 1, 0);
		func_257(&(Local_51.f_119), "FE_HLP16", 2, 202, 1, 1, 0);
		unk_0x9BEA833CAF67289C("MGSP_FAIL");
		sLocal_2308 = "SPR_HELP_FAIL";
	}
	else if (bVar15)
	{
		if (fVar14 <= (fVar7 - 15f))
		{
			func_298("SPR_HELP_RESET", -1);
		}
		if (fVar14 <= (fVar7 - 15f))
		{
			func_59("SPR_HELP_WARN", 5000, 0, &iLocal_2321, 4);
		}
	}
	else
	{
		unk_0x9A279C737383BE86("SPR_HELP_WARN");
		if (func_357(iLocal_2321, 4))
		{
			func_355(&iLocal_2321, 4);
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
		if (unk_0x36E1A96E1D63ED91((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x36E1A96E1D63ED91((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x36E1A96E1D63ED91((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x36E1A96E1D63ED91((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x36E1A96E1D63ED91((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_74()
{
	if (iLocal_2024 == 1)
	{
		if (func_3(&uLocal_2054))
		{
			if (func_5(&uLocal_2054) <= 2.5f)
			{
				iLocal_2105 = "GATEMISS";
				fLocal_2106 = 5f;
				iLocal_2107 = 1;
			}
			else
			{
				iLocal_2105 = 0;
				fLocal_2106 = -1f;
				iLocal_2107 = 1;
				iLocal_2024 = 0;
			}
		}
	}
	if (iLocal_2025 == 1)
	{
		if (func_3(&uLocal_2060))
		{
			if (func_5(&uLocal_2060) <= 2.5f)
			{
				iLocal_2105 = "GATEINNER";
				fLocal_2106 = 1f;
				iLocal_2107 = 1;
			}
			else
			{
				iLocal_2105 = 0;
				fLocal_2106 = -1f;
				iLocal_2107 = 1;
				iLocal_2025 = 0;
			}
		}
	}
	if (iLocal_2026 == 1)
	{
		if (func_3(&uLocal_2057))
		{
			if (func_5(&uLocal_2057) <= 2.5f)
			{
				iLocal_2105 = "GATEOUTTER";
				fLocal_2106 = 0f;
				iLocal_2107 = 1;
			}
			else
			{
				iLocal_2105 = 0;
				fLocal_2106 = -1f;
				iLocal_2107 = 1;
				iLocal_2026 = 0;
			}
		}
	}
	if (iLocal_2027 == 1)
	{
		if (func_3(&uLocal_2069))
		{
			if (func_5(&uLocal_2069) <= 2.5f)
			{
				iLocal_2105 = "GATEKNIFEINNER";
				fLocal_2106 = 2.5f;
				iLocal_2107 = 1;
			}
			else
			{
				iLocal_2105 = 0;
				fLocal_2106 = -1f;
				iLocal_2107 = 1;
				iLocal_2027 = 0;
			}
		}
	}
	if (iLocal_2028 == 1)
	{
		if (func_3(&uLocal_2072))
		{
			if (func_5(&uLocal_2072) <= 2.5f)
			{
				iLocal_2105 = "GATEINVERTEDIN";
				fLocal_2106 = 3f;
				iLocal_2107 = 1;
			}
			else
			{
				iLocal_2105 = 0;
				fLocal_2106 = -1f;
				iLocal_2107 = 1;
				iLocal_2028 = 0;
			}
		}
	}
	if (iLocal_2029 == 1)
	{
		if (func_3(&uLocal_2063))
		{
			if (func_5(&uLocal_2063) <= 2.5f)
			{
				iLocal_2105 = "GATEKNIFEOUTTER";
				fLocal_2106 = 1.5f;
				iLocal_2107 = 1;
			}
			else
			{
				iLocal_2105 = 0;
				fLocal_2106 = -1f;
				iLocal_2107 = 1;
				iLocal_2029 = 0;
			}
		}
	}
	if (iLocal_2030 == 1)
	{
		if (func_3(&uLocal_2066))
		{
			if (func_5(&uLocal_2066) <= 2.5f)
			{
				iLocal_2105 = "GATEINVERTEDOUT";
				fLocal_2106 = 2f;
				iLocal_2107 = 1;
			}
			else
			{
				iLocal_2105 = 0;
				fLocal_2106 = -1f;
				iLocal_2107 = 1;
				iLocal_2030 = 0;
			}
		}
	}
	if (iLocal_2031 == 1)
	{
		if (func_3(&uLocal_2042))
		{
			if (func_5(&uLocal_2042) <= 2.5f)
			{
				iLocal_2105 = "STUNTKNIFELEFT";
				fLocal_2106 = 4f;
				iLocal_2107 = 1;
			}
			else
			{
				iLocal_2105 = 0;
				fLocal_2106 = -1f;
				iLocal_2107 = 1;
				iLocal_2031 = 0;
			}
		}
	}
	if (iLocal_2032 == 1)
	{
		if (func_3(&uLocal_2042))
		{
			if (func_5(&uLocal_2042) <= 2.5f)
			{
				iLocal_2105 = "STUNTKNIFELEFTHIT";
				fLocal_2106 = 1.5f;
				iLocal_2107 = 1;
			}
			else
			{
				iLocal_2105 = 0;
				fLocal_2106 = -1f;
				iLocal_2107 = 1;
				iLocal_2032 = 0;
			}
		}
	}
	if (iLocal_2033 == 1)
	{
		if (func_3(&uLocal_2042))
		{
			if (func_5(&uLocal_2042) <= 2.5f)
			{
				iLocal_2105 = "STUNTKNIFELEFTMISS";
				fLocal_2106 = 5f;
				iLocal_2107 = 1;
			}
			else
			{
				iLocal_2105 = 0;
				fLocal_2106 = -1f;
				iLocal_2107 = 1;
				iLocal_2033 = 0;
			}
		}
	}
	if (iLocal_2034 == 1)
	{
		if (func_3(&uLocal_2042))
		{
			if (func_5(&uLocal_2042) <= 2.5f)
			{
				iLocal_2105 = "STUNTKNIFERIGHT";
				fLocal_2106 = 4f;
				iLocal_2107 = 1;
			}
			else
			{
				iLocal_2105 = 0;
				fLocal_2106 = -1f;
				iLocal_2107 = 1;
				iLocal_2034 = 0;
			}
		}
	}
	if (iLocal_2035 == 1)
	{
		if (func_3(&uLocal_2042))
		{
			if (func_5(&uLocal_2042) <= 2.5f)
			{
				iLocal_2105 = "STUNTKNIFERIGHTHIT";
				fLocal_2106 = 1.5f;
				iLocal_2107 = 1;
			}
			else
			{
				iLocal_2105 = 0;
				fLocal_2106 = -1f;
				iLocal_2107 = 1;
				iLocal_2035 = 0;
			}
		}
	}
	if (iLocal_2036 == 1)
	{
		if (func_3(&uLocal_2042))
		{
			if (func_5(&uLocal_2042) <= 2.5f)
			{
				iLocal_2105 = "STUNTKNIFERIGHTMISS";
				fLocal_2106 = 5f;
				iLocal_2107 = 1;
			}
			else
			{
				iLocal_2105 = 0;
				fLocal_2106 = -1f;
				iLocal_2107 = 1;
				iLocal_2036 = 0;
			}
		}
	}
	if (iLocal_2037 == 1)
	{
		if (func_3(&uLocal_2045))
		{
			if (func_5(&uLocal_2045) <= 2.5f)
			{
				iLocal_2105 = "STUNTINVERTED";
				fLocal_2106 = 4f;
				iLocal_2107 = 1;
			}
			else
			{
				iLocal_2105 = 0;
				fLocal_2106 = -1f;
				iLocal_2107 = 1;
				iLocal_2037 = 0;
			}
		}
	}
	if (iLocal_2038 == 1)
	{
		if (func_3(&uLocal_2045))
		{
			if (func_5(&uLocal_2045) <= 2.5f)
			{
				iLocal_2105 = "STUNTINVERTEDHIT";
				fLocal_2106 = 1.5f;
				iLocal_2107 = 1;
			}
			else
			{
				iLocal_2105 = 0;
				fLocal_2106 = -1f;
				iLocal_2107 = 1;
				iLocal_2038 = 0;
			}
		}
	}
	if (iLocal_2039 == 1)
	{
		if (func_3(&uLocal_2045))
		{
			if (func_5(&uLocal_2045) <= 2.5f)
			{
				iLocal_2105 = "STUNTINVERTEDMISS";
				fLocal_2106 = 5f;
				iLocal_2107 = 1;
			}
			else
			{
				iLocal_2105 = 0;
				fLocal_2106 = -1f;
				iLocal_2107 = 1;
				iLocal_2039 = 0;
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
	if (!unk_0x74C2FE037DFC8B4A(uParam0->f_358[iParam1 /*189*/].f_8, 0))
	{
		if (!unk_0x74C2FE037DFC8B4A(uParam0->f_358[iParam1 /*189*/].f_9, 0))
		{
			if (unk_0x88B79D32B518C327(uParam0->f_358[iParam1 /*189*/].f_8, uParam0->f_358[iParam1 /*189*/].f_9, 0))
			{
				fVar0 = unk_0xB64E14DD74D484C1(uParam0->f_358[iParam1 /*189*/].f_9);
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
				if (unk_0x160400EAEE246B4D(uParam0->f_358[iParam1 /*189*/].f_8, uParam0->f_358[iParam1 /*189*/].f_9))
				{
					if (unk_0x74B8CA477787A438(uParam0->f_358[iParam1 /*189*/].f_9, -1, 0))
					{
						unk_0x8D77EFA08616AD64(uParam0->f_358[iParam1 /*189*/].f_8, uParam0->f_358[iParam1 /*189*/].f_9, -1);
						unk_0x9128498462268F73(uParam0->f_358[iParam1 /*189*/].f_8, fVar0);
					}
				}
			}
		}
	}
}

void func_76(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam6, int iParam7)
{
	if (!unk_0x74C2FE037DFC8B4A(iParam1, 0))
	{
		if (Local_51.f_0 == 1)
		{
			if (!unk_0x74C2FE037DFC8B4A(iParam2, 0))
			{
				unk_0x0F36ED260B9B4408(iParam1, iParam2, Param3, unk_0xB64E14DD74D484C1(iParam2), 1, 0, 786469, 5f, -1f);
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
		unk_0x56E53E946C215724(*uParam0);
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
		if (bLocal_2309)
		{
			iVar3 = 6;
		}
		else
		{
			iVar3 = 1;
		}
		func_576(func_577(iVar3), &uVar0, &uVar1, &uVar2, uParam2);
		unk_0x65F3FD8A3EEA2375(*uParam1, uVar0, uVar1, uVar2, *uParam2);
		unk_0x49D4527220809B29(*uParam1, uVar0, uVar1, uVar2, *uParam2);
	}
}

void func_82(var uParam0)
{
	func_83(&(uParam0->f_5));
}

void func_83(var uParam0)
{
	if (unk_0xE769D9B5158D0F11(*uParam0))
	{
		unk_0x40D517D991458154(uParam0);
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
			if (func_3(&uLocal_2054))
			{
				func_89(&uLocal_2054, 3f);
			}
			if (func_3(&uLocal_2048))
			{
				func_89(&uLocal_2048, 3f);
			}
			if (func_3(&uLocal_2042))
			{
				func_89(&uLocal_2042, 3f);
			}
			if (func_3(&uLocal_2051))
			{
				func_89(&uLocal_2051, 3f);
			}
			if (func_3(&uLocal_2045))
			{
				func_89(&uLocal_2045, 3f);
			}
			if (func_3(&uLocal_2057))
			{
				func_89(&uLocal_2057, 3f);
			}
			if (func_3(&uLocal_2060))
			{
				func_89(&uLocal_2060, 3f);
			}
			if (func_3(&uLocal_2063))
			{
				func_89(&uLocal_2063, 3f);
			}
			if (func_3(&uLocal_2066))
			{
				func_89(&uLocal_2066, 3f);
			}
			if (func_3(&uLocal_2069))
			{
				func_89(&uLocal_2069, 3f);
			}
			if (func_3(&uLocal_2072))
			{
				func_89(&uLocal_2072, 3f);
			}
			func_86(uParam0, iParam2);
			switch (iParam2)
			{
				case 7:
					iLocal_2024 = 1;
					func_11(&uLocal_2054);
					break;
				
				case 1:
					iLocal_2025 = 1;
					func_11(&uLocal_2060);
					break;
				
				case 2:
					iLocal_2026 = 1;
					func_11(&uLocal_2057);
					break;
				
				case 3:
					iLocal_2027 = 1;
					func_11(&uLocal_2069);
					break;
				
				case 4:
					iLocal_2028 = 1;
					func_11(&uLocal_2072);
					break;
				
				case 5:
					iLocal_2029 = 1;
					func_11(&uLocal_2063);
					break;
				
				case 6:
					iLocal_2030 = 1;
					func_11(&uLocal_2066);
					break;
				
				case 8:
					iLocal_2031 = 1;
					func_11(&uLocal_2042);
					break;
				
				case 9:
					iLocal_2032 = 1;
					func_11(&uLocal_2051);
					break;
				
				case 10:
					iLocal_2033 = 1;
					func_11(&uLocal_2054);
					break;
				
				case 11:
					iLocal_2034 = 1;
					func_11(&uLocal_2042);
					break;
				
				case 12:
					iLocal_2035 = 1;
					func_11(&uLocal_2051);
					break;
				
				case 13:
					iLocal_2036 = 1;
					func_11(&uLocal_2054);
					break;
				
				case 14:
					iLocal_2037 = 1;
					func_11(&uLocal_2045);
					break;
				
				case 15:
					iLocal_2038 = 1;
					func_11(&uLocal_2051);
					break;
				
				case 16:
					iLocal_2039 = 1;
					func_11(&uLocal_2054);
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
		func_576(func_577(iVar4), &uVar0, &uVar1, &uVar2, &uVar3);
		unk_0x65F3FD8A3EEA2375(uParam0->f_6, uVar0, uVar1, uVar2, func_91(*uParam0, 25, 200));
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
		func_576(func_577(iVar5), &uVar0, &uVar1, &uVar2, &uVar3);
		unk_0x65F3FD8A3EEA2375(uParam1->f_6, uVar0, uVar1, uVar2, func_91(*uParam1, 25, 200));
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
	if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		fVar2 = unk_0x15EE504466B7BBD3(Param0, unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), 1);
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
	
	if (unk_0x74C2FE037DFC8B4A(uParam0->f_358[0 /*189*/].f_9, 0))
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
						if (!func_357(iLocal_2352, 262144))
						{
							func_98("Gate_PK", &iLocal_2351);
							iLocal_2352 = 0;
							func_329(&iLocal_2352, 262144);
							return iVar12;
						}
						else if (!func_357(iLocal_2352, 524288))
						{
							func_98("Con_PK", &iLocal_2351);
							func_329(&iLocal_2352, 524288);
							return iVar12;
						}
						else if (!func_357(iLocal_2352, 1048576))
						{
							func_98("Con_PK", &iLocal_2351);
							func_329(&iLocal_2352, 1048576);
							return iVar12;
						}
						else
						{
							func_98("Con_PK", &iLocal_2351);
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
						if (!func_357(iLocal_2352, 262144))
						{
							func_98("Gate_PK", &iLocal_2351);
							iLocal_2352 = 0;
							func_329(&iLocal_2352, 262144);
							return iVar12;
						}
						else if (!func_357(iLocal_2352, 524288))
						{
							func_98("Con_PK", &iLocal_2351);
							func_329(&iLocal_2352, 524288);
							return iVar12;
						}
						else if (!func_357(iLocal_2352, 1048576))
						{
							func_98("Con_PK", &iLocal_2351);
							func_329(&iLocal_2352, 1048576);
							return iVar12;
						}
						else
						{
							func_98("Con_PK", &iLocal_2351);
							return iVar12;
						}
					}
				}
				else
				{
					unk_0x329E96299AF0B054(uParam0->f_358[0 /*189*/].f_9, &uVar0, &uVar3, &Var6, &uVar9);
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
							if (!func_357(iLocal_2352, 32768))
							{
								func_98("Gate_PI", &iLocal_2350);
								iLocal_2352 = 0;
								func_329(&iLocal_2352, 32768);
								return iVar12;
							}
							else if (!func_357(iLocal_2352, 65536))
							{
								func_98("Con_PI", &iLocal_2350);
								func_329(&iLocal_2352, 65536);
								return iVar12;
							}
							else if (!func_357(iLocal_2352, 131072))
							{
								func_98("Con_PI", &iLocal_2350);
								func_329(&iLocal_2352, 131072);
								return iVar12;
							}
							else
							{
								func_98("Con_PI", &iLocal_2350);
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
						if (!func_357(iLocal_2352, 4096))
						{
							func_98("Get_Perf", &iLocal_2347);
							iLocal_2352 = 0;
							func_329(&iLocal_2352, 4096);
							return iVar12;
						}
						else if (!func_357(iLocal_2352, 8192))
						{
							func_98("Con_Perf", &iLocal_2347);
							func_329(&iLocal_2352, 8192);
							return iVar12;
						}
						else if (!func_357(iLocal_2352, 16384))
						{
							func_98("Con_Perf", &iLocal_2347);
							func_329(&iLocal_2352, 16384);
							return iVar12;
						}
						else
						{
							func_98("Con_Perf", &iLocal_2347);
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
						if (!func_357(iLocal_2352, 64))
						{
							func_98("Gate_Kni", &iLocal_2349);
							iLocal_2352 = 0;
							func_329(&iLocal_2352, 64);
							return iVar12;
						}
						else if (!func_357(iLocal_2352, 128))
						{
							func_98("Con_Kni", &iLocal_2349);
							func_329(&iLocal_2352, 128);
							return iVar12;
						}
						else if (!func_357(iLocal_2352, 256))
						{
							func_98("Con_Kni", &iLocal_2349);
							func_329(&iLocal_2352, 256);
							return iVar12;
						}
						else
						{
							func_98("Con_Kni", &iLocal_2349);
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
						if (!func_357(iLocal_2352, 64))
						{
							func_98("Gate_Kni", &iLocal_2349);
							iLocal_2352 = 0;
							func_329(&iLocal_2352, 64);
							return iVar12;
						}
						else if (!func_357(iLocal_2352, 128))
						{
							func_98("Con_Kni", &iLocal_2349);
							func_329(&iLocal_2352, 128);
							return iVar12;
						}
						else if (!func_357(iLocal_2352, 256))
						{
							func_98("Con_Kni", &iLocal_2349);
							func_329(&iLocal_2352, 256);
							return iVar12;
						}
						else
						{
							func_98("Con_Kni", &iLocal_2349);
							return iVar12;
						}
					}
				}
				else
				{
					unk_0x329E96299AF0B054(uParam0->f_358[0 /*189*/].f_9, &uVar0, &uVar3, &Var6, &uVar9);
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
							if (!func_357(iLocal_2352, 512))
							{
								func_98("Gate_Inv", &iLocal_2348);
								iLocal_2352 = 0;
								func_329(&iLocal_2352, 512);
								return iVar12;
							}
							else if (!func_357(iLocal_2352, 1024))
							{
								func_98("Con_Inv", &iLocal_2348);
								func_329(&iLocal_2352, 1024);
								return iVar12;
							}
							else if (!func_357(iLocal_2352, 2048))
							{
								func_98("Con_Inv", &iLocal_2348);
								func_329(&iLocal_2352, 2048);
								return iVar12;
							}
							else
							{
								func_98("Con_Inv", &iLocal_2348);
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
						if (!func_357(iLocal_2352, 8))
						{
							func_98("Gate_Hit", &iLocal_2346);
							iLocal_2352 = 0;
							func_329(&iLocal_2352, 8);
							return iVar12;
						}
						else if (!func_357(iLocal_2352, 16))
						{
							func_98("Con_Hit", &iLocal_2346);
							func_329(&iLocal_2352, 16);
							return iVar12;
						}
						else if (!func_357(iLocal_2352, 32))
						{
							func_98("Con_Hit", &iLocal_2346);
							func_329(&iLocal_2352, 32);
							return iVar12;
						}
						else
						{
							func_98("Con_Hit", &iLocal_2346);
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
					if (!func_357(iLocal_2352, 1))
					{
						func_98("Gate_Miss", &iLocal_2345);
						iLocal_2352 = 0;
						func_329(&iLocal_2352, 1);
						return iVar12;
					}
					else if (!func_357(iLocal_2352, 2))
					{
						func_98("Con_Miss", &iLocal_2345);
						func_329(&iLocal_2352, 2);
						return iVar12;
					}
					else if (!func_357(iLocal_2352, 4))
					{
						func_98("Con_Miss", &iLocal_2345);
						func_329(&iLocal_2352, 4);
						return iVar12;
					}
					else
					{
						func_98("Con_Miss", &iLocal_2345);
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
				if (!func_357(iLocal_2352, 1))
				{
					func_98("Gate_Miss", &iLocal_2345);
					iLocal_2352 = 0;
					func_329(&iLocal_2352, 1);
					return iVar12;
				}
				else if (!func_357(iLocal_2352, 2))
				{
					func_98("Con_Miss", &iLocal_2345);
					func_329(&iLocal_2352, 2);
					return iVar12;
				}
				else if (!func_357(iLocal_2352, 4))
				{
					func_98("Con_Miss", &iLocal_2345);
					func_329(&iLocal_2352, 4);
					return iVar12;
				}
				else
				{
					func_98("Con_Miss", &iLocal_2345);
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
		if (unk_0x8673F2F1802ADEF7(iParam2, *uParam0, fVar0, fVar0, fVar0, 0, 1, 0))
		{
			Var1 = { func_96(*uParam1 - *uParam0) };
			if ((func_95(unk_0x761660F5CE986DC4(iParam2, 1), Var1) - func_95(*uParam0, Var1)) > 15f)
			{
				unk_0x929C3CBA660376D5(-1, sLocal_2337, "HUD_MINI_GAME_SOUNDSET", 1);
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
	
	if (unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		return 0;
	}
	unk_0x329E96299AF0B054(iParam0, &uVar0, &Var3, &Var6, &uVar9);
	if (unk_0x36E1A96E1D63ED91(Var6.f_2) > 0.342f)
	{
		return 0;
	}
	return Var3.f_2 < 0f;
}

void func_98(char* sParam0, var uParam1)
{
	char cVar0[16];
	
	StringCopy(&cVar0, "Gate_Miss", 16);
	if (!func_357(*uParam1, 1))
	{
		if (!iLocal_2023)
		{
			iLocal_2023 = 1;
			func_329(uParam1, 1);
			return;
		}
		else
		{
			iLocal_2023 = 0;
			if (unk_0x9D39145AD645E383(sParam0, &cVar0))
			{
				func_61("SPR_FAIL_GATE", 7500, 0);
			}
			return;
		}
	}
	if (func_357(*uParam1, 1))
	{
		if (!func_357(*uParam1, 2))
		{
			if (!iLocal_2023)
			{
				iLocal_2023 = 1;
				func_329(uParam1, 2);
				return;
			}
			else
			{
				iLocal_2023 = 0;
				if (unk_0x9D39145AD645E383(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (func_357(*uParam1, 2))
	{
		if (!func_357(*uParam1, 4))
		{
			if (!iLocal_2023)
			{
				iLocal_2023 = 1;
				func_329(uParam1, 4);
				return;
			}
			else
			{
				iLocal_2023 = 0;
				if (unk_0x9D39145AD645E383(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (func_357(*uParam1, 4))
	{
		if (!func_357(*uParam1, 8))
		{
			if (!iLocal_2023)
			{
				iLocal_2023 = 1;
				func_329(uParam1, 8);
				return;
			}
			else
			{
				iLocal_2023 = 0;
				if (unk_0x9D39145AD645E383(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (func_357(*uParam1, 8))
	{
		if (!func_357(*uParam1, 16))
		{
			if (!iLocal_2023)
			{
				iLocal_2023 = 1;
				func_329(uParam1, 16);
				return;
			}
			else
			{
				iLocal_2023 = 0;
				if (unk_0x9D39145AD645E383(sParam0, &cVar0))
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
	
	if (unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		return 0;
	}
	unk_0x329E96299AF0B054(iParam0, &uVar0, &Var3, &Var6, &uVar9);
	if (unk_0x36E1A96E1D63ED91(Var6.f_2) > 0.342f)
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
	unk_0x329E96299AF0B054(iParam1, &Var12, &Var6, &Var9, &Var3);
	Var15 = { Var0 - Var3 };
	fVar18 = unk_0x36E1A96E1D63ED91(func_95(Var15, Var12));
	fVar19 = unk_0x36E1A96E1D63ED91(func_95(Var15, Var9));
	fVar20 = unk_0x36E1A96E1D63ED91(func_95(Var15, Var6));
	fVar21 = ((fVar19 * fVar19) + (fVar20 * fVar20));
	if (fVar18 > 6.5f)
	{
		return 17;
	}
	else
	{
		if (fVar21 > 900f)
		{
			if (iParam1 == unk_0x18F7BE9ACB7D08F4())
			{
				func_193(&uLocal_2295, 0);
			}
			return 17;
		}
		if (fVar21 > 110f)
		{
			if (iParam1 == unk_0x18F7BE9ACB7D08F4())
			{
				func_193(&uLocal_2295, 0);
			}
			unk_0x929C3CBA660376D5(-1, sLocal_2336, "HUD_MINI_GAME_SOUNDSET", 1);
			return 2;
		}
		else
		{
			if (iParam1 == unk_0x18F7BE9ACB7D08F4())
			{
				func_193(&uLocal_2295, 0);
			}
			unk_0x929C3CBA660376D5(-1, sLocal_2336, "HUD_MINI_GAME_SOUNDSET", 1);
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
			if (!unk_0x74C2FE037DFC8B4A(uParam0->f_358[iVar1 /*189*/].f_8, 0) && !unk_0x74C2FE037DFC8B4A(Var2.f_8, 0))
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
	if (unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		return -1f;
	}
	return unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(iParam0, 1), Param1, iParam4);
}

void func_103(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_62(*iParam1, iParam2))
	{
		return;
	}
	if (!bParam3)
	{
		func_298(sParam0, -1);
	}
	else
	{
		func_104(sParam0);
	}
	func_60(iParam1, iParam2);
}

void func_104(char* sParam0)
{
	unk_0x2202872EA73499C3(sParam0);
	unk_0xF764171B43EBA5E4(0, 1, 1, -1);
}

int func_105(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	switch (uParam1->f_23)
	{
		case 0:
			func_174(uParam0);
			func_248();
			func_258(&(Local_51.f_119), 0, 0, 1, 1);
			func_257(&(Local_51.f_119), "IB_RETRY", 2, 201, 1, 1, 0);
			func_257(&(Local_51.f_119), "FE_HLP16", 2, 202, 1, 1, 0);
			func_251(1);
			unk_0x9BEA833CAF67289C("MGSP_FAIL");
			uParam1->f_23 = 1;
			break;
		
		case 1:
			if (func_168(&(Local_51.f_321), &(Local_51.f_327), &(uParam0->f_17), cLocal_2307, sLocal_2308, uParam0, 78))
			{
				iLocal_2438 = 0;
				if (!unk_0x74C2FE037DFC8B4A(uParam0->f_358[0 /*189*/].f_9, 0))
				{
					unk_0xA2B45B1D3EE42178(uParam0->f_358[0 /*189*/].f_9, 4);
				}
				if (func_255("SPR_HELP_DAMG", 0, 0))
				{
					unk_0x9A279C737383BE86("SPR_HELP_DAMG");
				}
				uParam0->f_1 = 0;
				func_66(&(Local_51.f_321), 1);
				if (*uParam0)
				{
					func_161(0, 0);
					func_160(0, 0);
					func_159();
					if (func_255("SPR_RETR_DES", 0, 0))
					{
						unk_0x9A279C737383BE86("SPR_RETR_DES");
					}
					func_251(0);
					*uParam0 = 1;
					uParam1->f_23 = 6;
				}
				else
				{
					func_161(0, 0);
					func_160(0, 0);
					func_159();
					func_89(&uLocal_2310, 10f);
					func_251(0);
					*uParam0 = 0;
					uParam1->f_23 = 7;
				}
			}
			break;
		
		case 2:
			func_151(&(Local_51.f_119), 1128792064, 7, 1, 1, 1065353216);
			if (unk_0xFC0C00F9DE2AEC93(2, 201))
			{
				func_161(0, 0);
				func_160(0, 0);
				func_159();
				iLocal_2443 = unk_0x2D524E0AFDB169D5();
				unk_0x929C3CBA660376D5(iLocal_2443, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", 1);
				if (func_255("SPR_RETR_DES", 0, 0))
				{
					unk_0x9A279C737383BE86("SPR_RETR_DES");
				}
				func_251(0);
				*uParam0 = 1;
				uParam1->f_23 = 6;
			}
			else if (unk_0xFC0C00F9DE2AEC93(2, 202))
			{
				func_161(0, 0);
				func_160(0, 0);
				func_159();
				iLocal_2443 = unk_0x2D524E0AFDB169D5();
				unk_0x929C3CBA660376D5(iLocal_2443, "Phone_Generic_Key_03", "HUD_MINIGAME_SOUNDSET", 1);
				func_89(&uLocal_2310, 10f);
				func_251(0);
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
				if (unk_0xC4B84EB67F78C1F0(uParam0->f_358[0 /*189*/].f_9, 0))
				{
					unk_0x36643EAE6212D16F(unk_0x8CFC7D6E1DA5D304(), 1);
					unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 0, 0);
					func_258(&(Local_51.f_119), 0, 0, 1, 1);
					func_257(&(Local_51.f_119), "SPR_UI_CONT", 2, 201, 1, 1, 0);
					func_257(&(Local_51.f_119), "IB_NO", 2, 202, 1, 1, 0);
				}
			}
			if (bParam2)
			{
				if (unk_0xC4B84EB67F78C1F0(uParam0->f_358[0 /*189*/].f_9, 0))
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
			if (!unk_0x74C2FE037DFC8B4A(uParam0->f_358[0 /*189*/].f_9, 0))
			{
				unk_0xA2B45B1D3EE42178(uParam0->f_358[0 /*189*/].f_9, 4);
			}
			uParam0->f_1 = 0;
			if (func_5(&uLocal_2310) <= 10f)
			{
				if (bParam2)
				{
					unk_0xE05212008FE9A018(9);
					unk_0xE05212008FE9A018(7);
					unk_0x9C7EE7DE7041A3F4(0, 99, 1);
					unk_0x9C7EE7DE7041A3F4(0, 100, 1);
					func_151(&(Local_51.f_119), 1128792064, 1, 0, 1, 1065353216);
					if (unk_0xFC0C00F9DE2AEC93(2, 201))
					{
						*uParam0 = 1;
						iLocal_2443 = unk_0x2D524E0AFDB169D5();
						unk_0x929C3CBA660376D5(iLocal_2443, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", 1);
						uParam1->f_23 = 6;
					}
					else if (unk_0xFC0C00F9DE2AEC93(2, 202))
					{
						*uParam0 = 0;
						func_89(&uLocal_2310, 10f);
						iLocal_2443 = unk_0x2D524E0AFDB169D5();
						unk_0x929C3CBA660376D5(iLocal_2443, "Phone_Generic_Key_03", "HUD_MINIGAME_SOUNDSET", 1);
						uParam1->f_23 = 6;
					}
				}
			}
			else
			{
				unk_0x08FC50794202A47C();
				sLocal_2308 = "SPR_RETR_DES";
				func_66(&(Local_51.f_321), 1);
				uParam1->f_23 = 14;
			}
			break;
		
		case 6:
			if (func_353(500))
			{
				unk_0x08FC50794202A47C();
				unk_0xEFF1F12403847394(1);
				uParam1->f_23 = 8;
			}
			break;
		
		case 7:
			if (func_3(&(uParam0->f_3)))
			{
				func_4(&(uParam0->f_3));
			}
			if (func_134())
			{
				if (unk_0xEC0ECEF2AF3FDA8D())
				{
					func_174(uParam0);
					unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 0, 0);
					if (unk_0x31F12808DC47A9E5(uParam0->f_358[0 /*189*/].f_9))
					{
						unk_0x39787AEDE56EFEA9(uParam0->f_358[0 /*189*/].f_9, 0f, 0f, 0f);
						unk_0x874004759C4BE8DC(uParam0->f_358[0 /*189*/].f_9, unk_0x35FCCFE3A385AD85(uParam0->f_358[0 /*189*/].f_9));
					}
					uParam1->f_23 = 10;
				}
			}
			break;
		
		case 8:
			if (func_132(uParam1, 1))
			{
				if (*uParam0)
				{
					uParam0->f_26 = 8;
				}
				else
				{
					if (bParam2)
					{
						unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
						if (Local_51.f_0 == 0)
						{
							unk_0x36643EAE6212D16F(unk_0x8CFC7D6E1DA5D304(), 1);
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
					func_130(uParam0, iVar0, 0);
				}
				iVar0++;
			}
			if (bParam2)
			{
				if (!unk_0x74C2FE037DFC8B4A(uParam0->f_358[0 /*189*/].f_9, 0) && uParam0->f_358[0 /*189*/].f_11 != -1)
				{
					func_129(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/], uParam0->f_358[0 /*189*/].f_9, uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/], uParam0->f_358[0 /*189*/].f_11 == 0);
				}
				unk_0xA3F41A1968319181(0f);
				func_11(&uLocal_2434);
				uParam1->f_23 = 11;
			}
			else
			{
				uParam1->f_23 = 13;
			}
			break;
		
		case 10:
			func_161(0, 0);
			func_160(0, 0);
			func_110(uParam1, 1);
			func_9(uParam1, Local_51.f_3, Local_51.f_6, 0f);
			unk_0xC1B1E9A034A63A62(0);
			uParam1->f_23 = 12;
			break;
		
		case 11:
			if (!unk_0x8BDE5BE4E46BA35F() || unk_0x34CC31673AD34B53())
			{
				uParam0->f_1 = 1;
				func_11(&uLocal_2434);
				func_108(&(uParam0->f_358[iVar0 /*189*/]), 60f, 0);
				if (func_573(500))
				{
					unk_0xC7BB901E267A910A();
					if (!unk_0x74C2FE037DFC8B4A(uParam0->f_358[0 /*189*/].f_9, 0))
					{
						unk_0x8D77EFA08616AD64(uParam0->f_358[0 /*189*/].f_8, uParam0->f_358[0 /*189*/].f_9, -1);
					}
					if (bParam2 && Local_51.f_0 == 0)
					{
						func_88(&(uParam0->f_358[0 /*189*/]), 5f);
					}
					uParam1->f_23 = 13;
				}
				return 0;
			}
			else if (unk_0x8BDE5BE4E46BA35F())
			{
				if (uParam0->f_358[0 /*189*/].f_11 < uParam0->f_12)
				{
					if (func_3(&uLocal_2434))
					{
						if (func_107(&uLocal_2434) >= 3f)
						{
							unk_0xC7BB901E267A910A();
						}
					}
					else
					{
						func_10(&uLocal_2434);
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
				if (!unk_0x74C2FE037DFC8B4A(uParam1->f_8, 0))
				{
					if (func_106(uParam1))
					{
						func_11(&uLocal_2310);
						sLocal_2308 = "SPR_RETR_STUK";
						uParam1->f_23 = 0;
						return 1;
					}
				}
			}
			return 0;
		
		case 14:
			func_174(uParam0);
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
		if (!unk_0xA43E30AC0AF7BE76(unk_0x8CFC7D6E1DA5D304()))
		{
			if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), uParam0->f_9, 0))
			{
				if (unk_0x2A72627520A107B5(uParam0->f_9) <= 15f)
				{
					if (uParam0->f_22 == joaat("stunt"))
					{
						if (unk_0xC2A319FA5560AFF3(uParam0->f_9) < 3f || unk_0x5BEDB1779AE301BA(uParam0->f_9))
						{
							if (unk_0xA8CA97883F68F589(uParam0->f_9) && unk_0xC2A319FA5560AFF3(uParam0->f_9) < 1f)
							{
								return 1;
							}
							if (unk_0x08438F954B83E80B(uParam0->f_9, 0, 1000))
							{
								return 1;
							}
							if (unk_0x08438F954B83E80B(uParam0->f_9, 1, 1000))
							{
								return 1;
							}
							if (unk_0x08438F954B83E80B(uParam0->f_9, 2, 10000))
							{
								return 1;
							}
							if (unk_0x08438F954B83E80B(uParam0->f_9, 3, 10000))
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
			return (func_6(unk_0xB03A1684359C50A1(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_108(var uParam0, float fParam1, bool bParam2)
{
	struct<3> Var0;
	
	if (!unk_0x74C2FE037DFC8B4A(uParam0->f_9, 0))
	{
		if (unk_0xD8BB60C76D29E4BB(uParam0->f_22))
		{
			Var0 = { unk_0x26A3403C90A0B224(uParam0->f_9, 2) };
			func_109(uParam0->f_9, fParam1, bParam2, Var0.f_0, 0);
		}
	}
}

void func_109(int iParam0, float fParam1, bool bParam2, float fParam3, float fParam4)
{
	struct<3> Var0;
	bool bVar3;
	float fVar4;
	
	unk_0x9C7EE7DE7041A3F4(0, 75, 1);
	if (unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		return;
	}
	if (unk_0x2A72627520A107B5(iParam0) < fParam1)
	{
		unk_0xFBD899EB9A2EF7F4(iParam0, fParam1);
	}
	Var0 = { unk_0x26A3403C90A0B224(iParam0, 2) };
	bVar3 = false;
	if (bParam2)
	{
		fVar4 = (unk_0x64031EF2AE5F9603() * 45f);
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
		unk_0x58F6B49606932378(iParam0, Var0, 2, 1);
	}
}

int func_110(var uParam0, bool bParam1)
{
	char cVar0[16];
	
	if (bParam1)
	{
		if (unk_0x31F12808DC47A9E5(uParam0->f_9))
		{
			if (!unk_0x74C2FE037DFC8B4A(uParam0->f_9, 0) || !unk_0xC4B84EB67F78C1F0(uParam0->f_9, 0))
			{
				if (unk_0x88B79D32B518C327(uParam0->f_8, uParam0->f_9, 0))
				{
					unk_0xD9FCA20C1C5553F7(uParam0->f_8);
					unk_0x337F2213526139E0(uParam0->f_9, 1, 1);
					unk_0xBECECD970F645217(&(uParam0->f_9));
				}
			}
			else
			{
				if (unk_0x88B79D32B518C327(uParam0->f_8, uParam0->f_9, 0))
				{
					unk_0x990FFD4FB6ADD630(uParam0->f_8, uParam0->f_16, 1, 0, 0, 1);
				}
				if (unk_0x88B79D32B518C327(uParam0->f_8, uParam0->f_9, 0))
				{
				}
				else
				{
					unk_0x337F2213526139E0(uParam0->f_9, 1, 1);
					unk_0xBECECD970F645217(&(uParam0->f_9));
				}
			}
		}
	}
	if (!unk_0x74C2FE037DFC8B4A(uParam0->f_9, 0))
	{
		unk_0x874004759C4BE8DC(uParam0->f_9, 1000);
		unk_0x0901CE00CFBB408F(uParam0->f_9);
		unk_0x1A9F0BE7AECEABB1(uParam0->f_9, 1000f);
		unk_0x990FFD4FB6ADD630(uParam0->f_9, uParam0->f_16, 1, 0, 0, 1);
		unk_0xB88121FF8A34A66F(uParam0->f_9, uParam0->f_19);
		unk_0x9B53B2691E2B1F79(uParam0->f_9, 1084227584);
	}
	else
	{
		if (uParam0->f_22 == 0)
		{
			return 1;
		}
		uParam0->f_9 = unk_0x3064CCF56C6C32BC(joaat("stunt"), uParam0->f_16, uParam0->f_19, 1, 1, 0);
		if (unk_0x74C2FE037DFC8B4A(uParam0->f_9, 0))
		{
			return 0;
		}
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			unk_0xA2B45B1D3EE42178(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), 4);
		}
		unk_0xE58E53D56F33BF17(uParam0->f_9, 1);
		func_111(uParam0->f_9, &(Local_51.f_243), 0, 1);
	}
	unk_0xFC79E17A8D0DCF99(uParam0->f_9, 0);
	unk_0x0F3F86C855582784(uParam0->f_9, 1, 1, 0);
	unk_0xBCB52670CAA2819B(uParam0->f_9);
	if (!unk_0x74C2FE037DFC8B4A(uParam0->f_8, 0))
	{
		if (!unk_0x160400EAEE246B4D(uParam0->f_8, uParam0->f_9))
		{
			unk_0x8D77EFA08616AD64(uParam0->f_8, uParam0->f_9, -1);
		}
	}
	if (!unk_0x90D1FDC9D31B7BE1(uParam0->f_9))
	{
		unk_0x337F2213526139E0(uParam0->f_9, 1, 0);
	}
	MemCopy(&cVar0, {*uParam0}, 4);
	StringConCat(&cVar0, "_Veh", 16);
	unk_0x0E6143894F71C00C(uParam0->f_9, &cVar0);
	if (uParam0->f_20 <= 3)
	{
		unk_0x6501F75B615637C8(uParam0->f_9, 0);
		Local_51.f_1 = uParam0->f_9;
	}
	return 1;
}

void func_111(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		if (!func_121(iParam0))
		{
			if (unk_0x6E987D62C8535B6E(&(uParam1->f_1)) != 0)
			{
				unk_0x1C4B08C81FA52071(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < unk_0x1F5FE6436A0EC41B())
			{
				unk_0x98347A9DB184A9E3(iParam0, *uParam1);
			}
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
			if (unk_0xB03A1684359C50A1(uParam1->f_77, func_120(iVar0 + 1)))
			{
			}
			else
			{
				unk_0xD2A9C3F486236CC5(&(uParam1->f_77), func_120(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0xB03A1684359C50A1(uParam1->f_77, func_120(iVar1 + 1)))
			{
			}
			else
			{
				unk_0xD2A9C3F486236CC5(&(uParam1->f_77), func_120(iVar1 + 1));
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			unk_0xF423B67DFD20BCA9(iParam0, 0);
			if (unk_0x2FA7EA3CA1AD2BF9(iParam0, 5) != -1)
			{
				unk_0xF423B67DFD20BCA9(iParam0, 1);
			}
		}
		if (unk_0xB03A1684359C50A1(uParam1->f_77, 13))
		{
			unk_0x0A0A6CC3A8BAD4E2(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x922D3A1033F467B3(iParam0);
		}
		if (unk_0xB03A1684359C50A1(uParam1->f_77, 12))
		{
			unk_0xE185F21936CEEAE1(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xBC56E64DD6367C93(iParam0);
		}
		unk_0x62270578972B4C56(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0xD7C3FB938E520431(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0xB03A1684359C50A1(uParam1->f_77, 15) || func_119(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_118())
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
		unk_0xB5F6C7EFD3748488(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			unk_0x9F91D8B05EF0ED7C(iParam0, 0);
		}
		else
		{
			unk_0x9F91D8B05EF0ED7C(iParam0, 0);
			unk_0x9F91D8B05EF0ED7C(iParam0, uParam1->f_65);
		}
		unk_0x5D41CFDE94DA9F49(iParam0, !unk_0xB03A1684359C50A1(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0xA2B45B1D3EE42178(iParam0, uParam1->f_70);
		}
		unk_0xC7E45A561A9E1BA4(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0x3184374ACA6B725F(iParam0, 2, unk_0xB03A1684359C50A1(uParam1->f_77, 28));
		unk_0x3184374ACA6B725F(iParam0, 3, unk_0xB03A1684359C50A1(uParam1->f_77, 29));
		unk_0x3184374ACA6B725F(iParam0, 0, unk_0xB03A1684359C50A1(uParam1->f_77, 30));
		unk_0x3184374ACA6B725F(iParam0, 1, unk_0xB03A1684359C50A1(uParam1->f_77, 31));
		unk_0x0BF4E270537B1A96(iParam0, unk_0xB03A1684359C50A1(uParam1->f_77, 10));
		if (unk_0x299CF4427BA55484(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0xCB8AD4899214D0E6(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x93CA7A248A4D402A(unk_0x4F69FBD64CDF125B(iParam0)))
			{
				if (unk_0x422717A3330EA45D(unk_0x4F69FBD64CDF125B(iParam0)))
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
		if (unk_0x7C094ED2B27D253F(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0xEBF8B8510CD7F80B(iParam0, 1);
			}
			else
			{
				unk_0x7EC79A4EBA8F7EF4(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_112(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xB6353CAE3EBC0919(uParam1->f_66) && !unk_0x9605D2F02FA93911(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0xB03A1684359C50A1(uParam1->f_77, func_120(iVar2 + 1)))
				{
					if (!unk_0x6276BF0E9518E43A(iParam0, iVar2 + 1))
					{
						unk_0xDE2241F5D2C60ED8(iParam0, iVar2 + 1, 0);
					}
				}
				else if (unk_0x6276BF0E9518E43A(iParam0, iVar2 + 1))
				{
					unk_0xDE2241F5D2C60ED8(iParam0, iVar2 + 1, 1);
				}
				iVar2++;
			}
		}
		if ((unk_0x4F69FBD64CDF125B(iParam0) == joaat("sheava") || unk_0x4F69FBD64CDF125B(iParam0) == joaat("omnis")) || unk_0x4F69FBD64CDF125B(iParam0) == joaat("le7b"))
		{
			if (unk_0x2FA7EA3CA1AD2BF9(iParam0, 0) == -1)
			{
				unk_0xDE2241F5D2C60ED8(iParam0, 1, 0);
			}
		}
		if (((unk_0xD8BB60C76D29E4BB(uParam1->f_66) && unk_0x3619CAA2EDF23557(iParam0)) && !unk_0x0665EB554F07889E(iParam0, joaat("avenger"))) && !((Global_1646129.f_49002 == 6 || Global_1646129.f_49002 == 7) && unk_0xB03A1684359C50A1(Global_1646129.f_26, 8)))
		{
			if (!unk_0xB03A1684359C50A1(uParam1->f_77, 23))
			{
				if (unk_0xB03A1684359C50A1(uParam1->f_77, 22))
				{
					unk_0x6E397FC4BBDF1484(iParam0, 2);
				}
				else
				{
					unk_0x6E397FC4BBDF1484(iParam0, 3);
				}
			}
			else
			{
				unk_0x6E397FC4BBDF1484(iParam0, 4);
			}
		}
		if (unk_0xB03A1684359C50A1(uParam1->f_77, 27))
		{
			unk_0x9B3EE748523D62C3(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0x9B3EE748523D62C3(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_112(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xC4B84EB67F78C1F0(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x8A27C3C945C9E921(*iParam0) == 0)
	{
		return 0;
	}
	unk_0xD8A3CA4A1B092413(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0x4D9CCED3A1C96367(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0x2FA7EA3CA1AD2BF9(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x814DFE1772D11095(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x6819ABF1BBD7D728(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x6819ABF1BBD7D728(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x6819ABF1BBD7D728(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_116(unk_0x4F69FBD64CDF125B(*iParam0), 1) && unk_0x2FA7EA3CA1AD2BF9(*iParam0, 24) != func_115(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x6819ABF1BBD7D728(*iParam0, 24, func_115(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_114(iParam0);
	if (func_113(*iParam0))
	{
		unk_0xF321DFA4C895508B(*iParam0, 1);
		unk_0xE58E53D56F33BF17(*iParam0, 1);
	}
	return 1;
}

int func_113(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0x31F12808DC47A9E5(iParam0) && unk_0xC4B84EB67F78C1F0(iParam0, 0)) && unk_0x8A27C3C945C9E921(iParam0) > 0)
	{
		unk_0xD8A3CA4A1B092413(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x2FA7EA3CA1AD2BF9(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0xEC0D634C701696DE(iParam0, iVar1, unk_0x2FA7EA3CA1AD2BF9(iParam0, iVar1)), 16);
				iVar2 = unk_0x6E987D62C8535B6E(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x6E987D62C8535B6E("MNU_CAGE") || iVar2 == unk_0x6E987D62C8535B6E("SABRE_CAG"))
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
	switch (unk_0x4F69FBD64CDF125B(*uParam0))
	{
		case joaat("starling"):
			if (unk_0x2FA7EA3CA1AD2BF9(*uParam0, 4) == 0)
			{
				unk_0x6819ABF1BBD7D728(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0x814DFE1772D11095(*uParam0, 13);
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
	
	if (unk_0x31F12808DC47A9E5(iParam0) && unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		switch (unk_0x4F69FBD64CDF125B(iParam0))
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
		iVar0 = unk_0xEBA4C479CD632515(iParam0, 38);
		iVar1 = unk_0xEBA4C479CD632515(iParam0, 24);
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
			if (!Global_262145.f_13364)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_13365)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_13363)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_13366)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_13368)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_13367)
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
			if (Global_262145.f_17809)
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
			if (Global_262145.f_17811)
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
			if (Global_262145.f_17815)
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
			if (Global_262145.f_17812)
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
			if (Global_262145.f_17819)
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
			if (Global_262145.f_17817)
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
			if (Global_262145.f_17822)
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
			if (Global_262145.f_19694)
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
			if (Global_262145.f_19695)
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
	
	if (unk_0x8A27C3C945C9E921(iParam0) > 0)
	{
		unk_0xD8A3CA4A1B092413(iParam0, 0);
		iVar0 = unk_0x2FA7EA3CA1AD2BF9(iParam0, 24);
		iVar1 = unk_0x8730A3E327DA8627(iParam0, 24);
		unk_0xE047CE9047B91786(iParam0, uParam1);
		if (unk_0x4F69FBD64CDF125B(iParam0) == joaat("tornado6"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0x814DFE1772D11095(iParam0, 24);
		}
		else
		{
			unk_0x6819ABF1BBD7D728(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

var func_118()
{
	return unk_0x5E02CD27DBE77D67(joaat("mpindependence"));
}

int func_119(int iParam0)
{
	int iVar0;
	
	if (unk_0x31F12808DC47A9E5(iParam0))
	{
		if (unk_0xC4B84EB67F78C1F0(iParam0, 0))
		{
			if (unk_0x23E808B211571A22("MPBitset", 3))
			{
				if (unk_0x788C6B35BB3FCF53(iParam0, "MPBitset"))
				{
					iVar0 = unk_0xFE0F5B815FB9D3D1(iParam0, "MPBitset");
				}
				return unk_0xB03A1684359C50A1(iVar0, 4);
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

int func_121(int iParam0)
{
	if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (!func_127(unk_0x8CFC7D6E1DA5D304(), -1))
		{
			iParam0 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
		}
	}
	if (!unk_0x31F12808DC47A9E5(iParam0))
	{
		return 0;
	}
	if (unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		return 0;
	}
	if (func_123(unk_0x8CFC7D6E1DA5D304()) == 3)
	{
		if (unk_0x31F12808DC47A9E5(iParam0) && unk_0xC4B84EB67F78C1F0(iParam0, 0))
		{
			if (func_122(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_122(int iParam0)
{
	if (unk_0x23E808B211571A22("FMDeliverableID", 3))
	{
		if (unk_0x788C6B35BB3FCF53(iParam0, "FMDeliverableID"))
		{
			return unk_0xFE0F5B815FB9D3D1(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_123(int iParam0)
{
	if (func_126(iParam0) == 233)
	{
		return func_124(iParam0);
	}
	return -1;
}

int func_124(int iParam0)
{
	if (func_125(iParam0, 0))
	{
		return Global_1627460[iParam0 /*530*/].f_11.f_176;
	}
	return -1;
}

int func_125(int iParam0, int iParam1)
{
	if (Global_1627460[iParam0 /*530*/].f_11.f_33 != -1 || (iParam1 && Global_1627460[iParam0 /*530*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_126(int iParam0)
{
	if (func_125(iParam0, 0))
	{
		return Global_1627460[iParam0 /*530*/].f_11.f_33;
	}
	return -1;
}

int func_127(int iParam0, int iParam1)
{
	var uVar0;
	
	if (func_128(iParam0, 1, 1))
	{
		if (unk_0x657B649BA2AD3582(unk_0x6604E096142B4B55(iParam0), 0))
		{
			uVar0 = unk_0x5AD687C3474F04B4(unk_0x6604E096142B4B55(iParam0), 0);
			if (unk_0xC4B84EB67F78C1F0(uVar0, 0))
			{
				if (unk_0x18F7BE9ACB7D08F4() == unk_0x4983F8C51A0C0AF3(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_128(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x4AF13BCD120BCDBC(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x557001354138B7FB(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2436169.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_129(struct<3> Param0, int iParam3, struct<3> Param4, bool bParam7)
{
	var uVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	struct<3> Var8;
	float fVar11;
	struct<3> Var12;
	
	if (!unk_0x74C2FE037DFC8B4A(iParam3, 0))
	{
		if (bParam7 && Local_51.f_10 == 0)
		{
			unk_0x990FFD4FB6ADD630(iParam3, 1705.039f, 3251.13f, 40.0016f, 1, 0, 0, 1);
		}
		Var12 = { unk_0x761660F5CE986DC4(iParam3, 1) };
		unk_0x597B99EA7336BDBE(Var12);
		unk_0xB5E0B10B5D88A8F5(Var12, &fVar11, 0, 0);
		Var5 = { unk_0x761660F5CE986DC4(iParam3, 1) };
		if (bParam7)
		{
			Var8 = { Param0 - Param4 };
		}
		else
		{
			Var8 = { Param4 - Var5 };
		}
		uVar0 = unk_0x7F21F40674579303(Var8.f_0, Var8.f_1);
		fVar1 = (unk_0x7F21F40674579303(Var8.f_0, Var8.f_2) - 270f);
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
			fVar1 = -(180f - unk_0x36E1A96E1D63ED91(fVar1));
		}
		if (fVar1 > 90f)
		{
			fVar1 = (180f - unk_0x36E1A96E1D63ED91(fVar1));
		}
		if (unk_0x36E1A96E1D63ED91((Var12.f_2 - fVar11)) < 25f && (fVar1 > 15f || fVar1 < -15f))
		{
			Var12.f_2 = (fVar11 + 25f);
			unk_0x990FFD4FB6ADD630(iParam3, Var12, 1, 0, 0, 1);
		}
		unk_0x73D7E57BF0ED7FEB(iParam3, 1);
		Var2 = { unk_0x26A3403C90A0B224(iParam3, 2) };
		Var2.f_0 = fVar1;
		Var2.f_2 = uVar0;
		unk_0x58F6B49606932378(iParam3, Var2, 2, 1);
		unk_0x73D7E57BF0ED7FEB(iParam3, 0);
		unk_0xBD320BAA5701BEC0(Var12, unk_0x9B40AD9E8738972C(iParam3), 500f, 0);
	}
}

void func_130(var uParam0, int iParam1, bool bParam2)
{
	func_131(uParam0, iParam1, (uParam0->f_358[iParam1 /*189*/].f_11 - 1), bParam2);
}

void func_131(var uParam0, int iParam1, int iParam2, bool bParam3)
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
	if (unk_0x74C2FE037DFC8B4A(uParam0->f_358[iParam1 /*189*/].f_8, 0))
	{
		return;
	}
	if (uParam0->f_358[iParam1 /*189*/].f_22 != 0)
	{
		if (unk_0x74C2FE037DFC8B4A(uParam0->f_358[iParam1 /*189*/].f_9, 0))
		{
			return;
		}
	}
	Var0 = { uParam0->f_27[iParam2 + 1 /*10*/] - uParam0->f_27[iParam2 /*10*/] };
	uVar3 = unk_0x7F21F40674579303(Var0.f_0, Var0.f_1);
	fVar4 = 0f;
	if (unk_0x422717A3330EA45D(uParam0->f_358[iParam1 /*189*/].f_22))
	{
		fVar4 = 0f;
	}
	else if (unk_0x881022B41FD53CD6(uParam0->f_358[iParam1 /*189*/].f_22))
	{
		fVar4 = 25f;
	}
	else if (unk_0xD8BB60C76D29E4BB(uParam0->f_358[iParam1 /*189*/].f_22))
	{
		fVar4 = 60f;
	}
	if (bParam3)
	{
	}
	func_9(&(uParam0->f_358[iParam1 /*189*/]), uParam0->f_27[iParam2 /*10*/], uVar3, fVar4);
}

int func_132(var uParam0, bool bParam1)
{
	if (!func_110(uParam0, bParam1) || !func_133(uParam0))
	{
		return 0;
	}
	return 1;
}

int func_133(var uParam0)
{
	char cVar0[16];
	
	if (uParam0->f_21 == 0)
	{
		return 0;
	}
	if (!unk_0x74C2FE037DFC8B4A(uParam0->f_8, 0))
	{
		unk_0x874004759C4BE8DC(uParam0->f_8, 1000);
		if (!unk_0x74C2FE037DFC8B4A(uParam0->f_9, 0))
		{
			if (!unk_0x160400EAEE246B4D(uParam0->f_8, uParam0->f_9))
			{
				unk_0x8D77EFA08616AD64(uParam0->f_8, uParam0->f_9, -1);
			}
		}
		else
		{
			unk_0x990FFD4FB6ADD630(uParam0->f_8, uParam0->f_16, 1, 0, 0, 1);
			unk_0xB88121FF8A34A66F(uParam0->f_8, uParam0->f_19);
		}
	}
	else if (!unk_0x74C2FE037DFC8B4A(uParam0->f_9, 0))
	{
		uParam0->f_8 = unk_0xC52E83A4C0F88DAB(uParam0->f_9, uParam0->f_20, uParam0->f_21, -1, 1, 1);
		if (unk_0x74C2FE037DFC8B4A(uParam0->f_8, 0))
		{
			return 0;
		}
	}
	else
	{
		uParam0->f_8 = unk_0x364B87C5C64BD100(uParam0->f_20, uParam0->f_21, uParam0->f_16, uParam0->f_19, 1, 1);
		if (unk_0x74C2FE037DFC8B4A(uParam0->f_8, 0))
		{
			return 0;
		}
	}
	if (uParam0->f_20 > 3)
	{
		if (!unk_0x90D1FDC9D31B7BE1(uParam0->f_8))
		{
			unk_0x337F2213526139E0(uParam0->f_8, 1, 0);
		}
		MemCopy(&cVar0, {*uParam0}, 4);
		StringConCat(&cVar0, "_Drv", 16);
		unk_0x97236214E312A8E7(uParam0->f_8, &cVar0);
	}
	return 1;
}

int func_134()
{
	if (!unk_0xB03A1684359C50A1(iLocal_43, 0) && !unk_0xB03A1684359C50A1(iLocal_43, 1))
	{
		unk_0xC1B1E9A034A63A62(0);
		func_161(1, 0);
	}
	if (!unk_0xEAE1A41FBC3984B1())
	{
		unk_0x08FC50794202A47C();
	}
	unk_0x9C7EE7DE7041A3F4(2, 199, 1);
	unk_0x9C7EE7DE7041A3F4(0, 59, 1);
	unk_0x9C7EE7DE7041A3F4(0, 60, 1);
	unk_0x9C7EE7DE7041A3F4(0, 37, 1);
	unk_0x9C7EE7DE7041A3F4(0, 25, 1);
	unk_0xCD1021B106F38DA8();
	if (IntToFloat(unk_0x83666F9FB8FEBD4B()) > (1500f * 0.2f))
	{
		if (!unk_0xB03A1684359C50A1(iLocal_43, 1))
		{
			func_160(1, 0);
			unk_0x5AE11BC36633DE4E(0);
		}
		else if (IntToFloat(unk_0xC9D9444186B5A374()) > (1500f * 0.075f) || unk_0xEC0ECEF2AF3FDA8D())
		{
			if (!unk_0xEC0ECEF2AF3FDA8D())
			{
				if (!unk_0xBC13F084F3B1B544())
				{
					unk_0xFF91FEC6E57575E4(1500);
				}
			}
			else if (iLocal_44 == 0)
			{
				iLocal_44 = unk_0x5AFB8ED811F05E4D() + 1000;
				if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
				{
					unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 0, 0);
				}
				func_150(0, 2, 1);
				func_142(1, 1, 1, 0);
				func_136(1);
				unk_0xC7BACA18BF4E6E29(0);
				unk_0x179552E54EF979F6(0);
				unk_0xEFF1F12403847394(1);
				unk_0x08FC50794202A47C();
				if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
				{
					unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 0, 0);
				}
				func_161(0, 0);
				func_135(0);
			}
			else if (unk_0x5AFB8ED811F05E4D() < iLocal_44)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_135(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!unk_0xB03A1684359C50A1(iLocal_43, 3))
			{
				unk_0xDF94C6DB72E69D64(1);
				unk_0xD2A9C3F486236CC5(&iLocal_43, 3);
			}
		}
		else if (unk_0xB03A1684359C50A1(iLocal_43, 3))
		{
			unk_0xDF94C6DB72E69D64(0);
			unk_0x62148293B793073B(&iLocal_43, 3);
		}
	}
}

void func_136(bool bParam0)
{
	if (bParam0)
	{
		func_141();
		if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
		{
			unk_0xD2A9C3F486236CC5(&Global_2324, 16);
		}
		Global_14453.f_1 = 1;
		if (func_140(0))
		{
			func_137(0);
		}
	}
	else if (Global_14453.f_1 == 1)
	{
		if (!Global_14453.f_1 == 0)
		{
			Global_14453.f_1 = 3;
		}
	}
}

void func_137(int iParam0)
{
	if (Global_14615)
	{
		func_139(0, 0);
	}
	if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
	{
		unk_0xD2A9C3F486236CC5(&Global_2324, 16);
	}
	if (unk_0x36328FCBA2944E1F())
	{
		unk_0xBE97F4E2B659331B(0);
	}
	Global_15756 = 5;
	if (iParam0 == 1)
	{
		unk_0xD2A9C3F486236CC5(&Global_2323, 30);
	}
	else
	{
		unk_0x62148293B793073B(&Global_2323, 30);
	}
	if (!func_138())
	{
		Global_14453.f_1 = 3;
	}
}

int func_138()
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_139(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_140(0))
		{
			Global_14615 = 1;
			if (bParam1)
			{
				unk_0xE0F240E99D061E79(&Global_14390);
			}
			Global_14381 = { Global_14399[Global_14398 /*3*/] };
			unk_0x1F7EA74AE820583A(Global_14381);
		}
	}
	else if (Global_14615 == 1)
	{
		Global_14615 = 0;
		Global_14381 = { Global_14406[Global_14398 /*3*/] };
		if (bParam1)
		{
			unk_0x1F7EA74AE820583A(Global_14390);
		}
		else
		{
			unk_0x1F7EA74AE820583A(Global_14381);
		}
	}
}

int func_140(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14453.f_1 > 3)
		{
			if (unk_0xB03A1684359C50A1(Global_2323, 14))
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
	if (unk_0xE7FAF8E78F7D3A73(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_141()
{
	if (Global_14453.f_1 == 9 || Global_14453.f_1 == 10)
	{
		Global_15809 = 0;
		Global_15805 = 1;
	}
}

void func_142(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x23E72737746790F6(unk_0x8CFC7D6E1DA5D304());
		unk_0x9A63F1CF5AD1028E(unk_0x8CFC7D6E1DA5D304(), 1);
		unk_0x10196728B08EFD0D(unk_0x8CFC7D6E1DA5D304(), 1);
		func_149(1);
		unk_0x11E17A11B13AC43A();
		unk_0x6F202559EF4E43CE();
		if (Global_14453.f_1 > 3)
		{
			if (unk_0x36328FCBA2944E1F())
			{
				unk_0xBE97F4E2B659331B(0);
			}
			if (!func_138())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_148(1, iParam3, iParam2, 0);
		Global_55907 = 1;
		Global_68216 = 1;
		Global_70850 = 1;
	}
	else
	{
		func_149(0);
		unk_0x100AF4FA3B247263();
		Global_55907 = 0;
		if (bParam1)
		{
			unk_0x5D7F2DFCC7EFF8A1();
		}
		unk_0x9A63F1CF5AD1028E(unk_0x8CFC7D6E1DA5D304(), 0);
		unk_0x10196728B08EFD0D(unk_0x8CFC7D6E1DA5D304(), 0);
		func_148(0, iParam3, iParam2, 0);
		if (unk_0x44243F2E2F58B8E3())
		{
			if (((!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && !func_146(unk_0x8CFC7D6E1DA5D304())) && !func_144(unk_0x8CFC7D6E1DA5D304(), 0)) && !func_143())
			{
				unk_0xF74B493CCF90C997(unk_0x18F7BE9ACB7D08F4(), 0);
			}
		}
		else if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && !func_146(unk_0x8CFC7D6E1DA5D304()))
		{
			unk_0xF74B493CCF90C997(unk_0x18F7BE9ACB7D08F4(), 0);
		}
		Global_70850 = 0;
	}
}

bool func_143()
{
	return unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_39.f_18, 14);
}

bool func_144(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x8CFC7D6E1DA5D304())
	{
		bVar0 = func_145(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1595681[iParam0 /*678*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x4AF13BCD120BCDBC(iParam0))
		{
			bVar0 = unk_0x1BE7B010C9B9841E(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_145(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_21();
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

int func_146(int iParam0)
{
	if (func_144(iParam0, 0))
	{
		return 1;
	}
	if (func_147())
	{
		if (iParam0 == unk_0x8CFC7D6E1DA5D304())
		{
			return 1;
		}
	}
	if (unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_210, 2))
	{
		return 1;
	}
	return 0;
}

bool func_147()
{
	return unk_0xB03A1684359C50A1(Global_2359302, 3);
}

int func_148(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xC339C5C5B5E8BC5B())
	{
		if (unk_0x511092EDBCB2F66B() != iParam0 && uParam2)
		{
			unk_0x0602616B0914EF8A(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_149(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xD2A9C3F486236CC5(&Global_2323, 13);
	}
	else
	{
		unk_0x62148293B793073B(&Global_2323, 13);
	}
}

void func_150(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 1)
	{
		unk_0xD2A9C3F486236CC5(&iLocal_43, 2);
		if (!unk_0x44243F2E2F58B8E3())
		{
			if (iParam1 == 1)
			{
				unk_0x3F9FBB0647D763E2(0.2f);
			}
			else
			{
				unk_0x3F9FBB0647D763E2(0.075f);
			}
		}
	}
	else
	{
		if (unk_0xB03A1684359C50A1(iLocal_43, 2) || iParam2)
		{
			if (!unk_0x44243F2E2F58B8E3())
			{
				unk_0x3F9FBB0647D763E2(1f);
			}
		}
		unk_0x62148293B793073B(&iLocal_43, 2);
	}
}

void func_151(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
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
	
	if (((unk_0xBC13F084F3B1B544() || unk_0x610450B2545892B5()) || unk_0xEC0ECEF2AF3FDA8D()) || unk_0xC5B946266AEC83EB())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_158(uParam0))
	{
		return;
	}
	unk_0xE52EBB41DB0E0329();
	unk_0x31B38BBC4423BEAF(iParam2);
	if (!func_157(uParam0->f_1, 256) || (func_157(uParam0->f_1, 8192) && unk_0x32085AF1EB302CDD(2)))
	{
		unk_0x76F4FB5EFF5BDED5(*uParam0, "SET_CLEAR_SPACE");
		unk_0x954263F3D07BEFC2(iParam1);
		unk_0xE2B30EB9B14EEAB2();
		unk_0x76F4FB5EFF5BDED5(*uParam0, "SET_MAX_WIDTH");
		unk_0x954263F3D07BEFC2(iParam5);
		unk_0xE2B30EB9B14EEAB2();
		unk_0x76F4FB5EFF5BDED5(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xE2B30EB9B14EEAB2();
		if (unk_0xC339C5C5B5E8BC5B())
		{
			unk_0x76F4FB5EFF5BDED5(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			unk_0xD6F1BD29497A51C8(func_157(uParam0->f_1, 4096));
			unk_0xE2B30EB9B14EEAB2();
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
					bVar4 = unk_0xC9FF45E740135482(2);
					break;
				
				case 2:
					bVar4 = !unk_0xC9FF45E740135482(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (unk_0x76F4FB5EFF5BDED5(*uParam0, "SET_DATA_SLOT"))
				{
					unk_0x22DD5585E00B80C3(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						uVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						uVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = unk_0xB03A1684359C50A1(uParam0->f_2[iVar6 /*15*/].f_13, iVar7);
						if (!unk_0xB03A1684359C50A1(uParam0->f_2[iVar6 /*15*/].f_12, iVar7))
						{
							uVar3 = unk_0x305BC30EAC3E9BF4(uVar0, uVar1, bVar2);
						}
						else
						{
							uVar3 = unk_0x33206AC5E51B4373(uVar0, uVar1, bVar2);
						}
						if (!unk_0xFAFFA408239A026B(uVar3))
						{
							func_156(sVar3);
						}
						iVar7++;
					}
					if (!unk_0xFAFFA408239A026B(uParam0->f_2[iVar6 /*15*/]))
					{
						func_155(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0xC339C5C5B5E8BC5B())
					{
						if (func_157(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								unk_0xD6F1BD29497A51C8(true);
								unk_0x22DD5585E00B80C3(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								unk_0xD6F1BD29497A51C8(false);
								unk_0x22DD5585E00B80C3(-1);
							}
						}
					}
					unk_0xE2B30EB9B14EEAB2();
				}
			}
			iVar6++;
		}
		fVar8 = func_154(bParam4, func_154(func_157(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0x76F4FB5EFF5BDED5(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x954263F3D07BEFC2(fVar8);
		unk_0xE2B30EB9B14EEAB2();
		unk_0x76F4FB5EFF5BDED5(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0x954263F3D07BEFC2(0f);
		unk_0x954263F3D07BEFC2(0f);
		unk_0x954263F3D07BEFC2(0f);
		unk_0x954263F3D07BEFC2(80f);
		unk_0xE2B30EB9B14EEAB2();
		func_153(&(uParam0->f_1), 256);
		func_152(&(uParam0->f_1), 128);
	}
	unk_0x5E70D9959D6F2350(*uParam0, 255, 255, 255, 0, 0);
}

void func_152(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_153(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_154(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_155(char* sParam0)
{
	unk_0x0ECBA72FAFCEBA59(sParam0);
	unk_0xC30401186AC91B01();
}

void func_156(var uParam0)
{
	unk_0xC34A54899652DAAF(uParam0);
}

bool func_157(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_158(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0x5C716BBF766E1C70(*uParam0))
		{
			func_153(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

void func_159()
{
	iLocal_43 = 0;
	iLocal_44 = 0;
	func_142(0, 1, 1, 0);
	func_136(1);
}

void func_160(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		func_161(0, 0);
		unk_0x9575CEFF222148A6("DeathFailOut", 0, 0);
		unk_0xD2A9C3F486236CC5(&iLocal_43, 1);
		func_150(1, 2, 0);
		unk_0x9D22D73B4AF4DB93(2);
	}
	else
	{
		if (unk_0xB03A1684359C50A1(iLocal_43, 1) || iParam1)
		{
			unk_0x605B63B87CCF606F("DeathFailOut");
			func_150(0, 2, 1);
			unk_0x9D22D73B4AF4DB93(0);
		}
		unk_0x62148293B793073B(&iLocal_43, 1);
	}
}

void func_161(int iParam0, int iParam1)
{
	char* sVar0;
	
	switch (func_162())
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
		if (!unk_0xB03A1684359C50A1(iLocal_43, 0) || iParam1)
		{
			unk_0x9575CEFF222148A6(sVar0, 0, 0);
			unk_0xD2A9C3F486236CC5(&iLocal_43, 0);
			func_150(1, 1, 0);
			unk_0x9D22D73B4AF4DB93(1);
		}
	}
	else
	{
		if (unk_0xB03A1684359C50A1(iLocal_43, 0) || iParam1)
		{
			unk_0x605B63B87CCF606F(sVar0);
			func_150(0, 1, 1);
			unk_0x9D22D73B4AF4DB93(0);
		}
		unk_0x62148293B793073B(&iLocal_43, 0);
	}
}

int func_162()
{
	func_163();
	return Global_104551.f_2353.f_539.f_4301;
}

void func_163()
{
	int iVar0;
	
	if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
	{
		if (func_167(Global_104551.f_2353.f_539.f_4301) != unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()))
		{
			iVar0 = func_166(unk_0x18F7BE9ACB7D08F4());
			if (func_165(iVar0) && (!func_164(14) || Global_103502))
			{
				if (Global_104551.f_2353.f_539.f_4301 != iVar0 && func_165(Global_104551.f_2353.f_539.f_4301))
				{
					Global_104551.f_2353.f_539.f_4302 = Global_104551.f_2353.f_539.f_4301;
				}
				Global_104551.f_2353.f_539.f_4303 = iVar0;
				Global_104551.f_2353.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104551.f_2353.f_539.f_4301 != 145)
			{
				Global_104551.f_2353.f_539.f_4303 = Global_104551.f_2353.f_539.f_4301;
			}
			return;
		}
	}
	Global_104551.f_2353.f_539.f_4301 = 145;
}

bool func_164(int iParam0)
{
	return Global_35859 == iParam0;
}

bool func_165(int iParam0)
{
	return iParam0 < 3;
}

int func_166(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x31F12808DC47A9E5(iParam0))
	{
		iVar1 = unk_0x4F69FBD64CDF125B(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_167(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_167(int iParam0)
{
	if (func_165(iParam0))
	{
		return Global_104551.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_168(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, var uParam5, int iParam6)
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			unk_0x64D773F3BE6DC50A("DEATH_SCENE");
			unk_0x929C3CBA660376D5(-1, "ScreenFlash", "WastedSounds", 1);
			func_10(&(uParam0->f_1));
			func_159();
			func_173(uParam1, (0.15f * 0.075f), 0.5f);
			unk_0x3B82047F26E2CEDB(1);
			break;
		
		case 1:
			if (func_134() || unk_0xEC0ECEF2AF3FDA8D())
			{
				*uParam0 = 2;
			}
			if (!func_357(uParam0->f_4, 4))
			{
				if (unk_0xFF22FE9205F44FB6("OFFMISSION_WASTED", 0, -1))
				{
					unk_0x929C3CBA660376D5(-1, "Bed", "WastedSounds", 1);
					func_329(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(unk_0x83666F9FB8FEBD4B()) > (1500f * 0.2f))
			{
				if (!func_357(uParam0->f_4, 2))
				{
					unk_0x929C3CBA660376D5(-1, "TextHit", "WastedSounds", 1);
					func_329(&(uParam0->f_4), 2);
				}
				func_170(uParam2, uParam1, sParam3, sParam4, uParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072, 0);
			}
			break;
		
		case 2:
			if (func_170(uParam2, uParam1, sParam3, sParam4, uParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072, 1))
			{
				func_161(0, 1);
				func_160(0, 1);
				func_159();
				if (*uParam5)
				{
					unk_0x33537D95B422F0A2(1);
				}
				else if (!uParam0->f_5)
				{
					func_169(0);
				}
				unk_0x3B82047F26E2CEDB(0);
				unk_0x35DF1961E23AC6F3(0);
				*uParam0 = 3;
			}
			break;
		
		case 3:
			if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
			{
				unk_0x3388DD13675FEE27(1);
				func_161(0, 1);
				func_160(0, 1);
				unk_0xA11D9B06B99FE786("DEATH_SCENE");
				unk_0x3B82047F26E2CEDB(0);
				return 1;
			}
			break;
		
		case 4:
			unk_0x3B82047F26E2CEDB(0);
			return 1;
			break;
	}
	return 0;
}

void func_169(bool bParam0)
{
	if ((Global_35859 == 9 || Global_35859 == 10) || Global_35859 == 5)
	{
		Global_103200 = bParam0;
		if (bParam0)
		{
		}
	}
	else
	{
		if (bParam0)
		{
		}
		Global_103200 = 0;
	}
}

int func_170(var uParam0, var uParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)
{
	switch (*uParam1)
	{
		case 0:
			if (!unk_0xEC0ECEF2AF3FDA8D() || unk_0xBC13F084F3B1B544())
			{
				unk_0xFF91FEC6E57575E4(2500);
				unk_0x0A4CB1D4A63A7528();
			}
			if (bParam9)
			{
				unk_0x3B82047F26E2CEDB(1);
			}
			unk_0x3F9FBB0647D763E2(0.2f);
			if (func_157(iParam5, 4))
			{
				if (unk_0xFF22FE9205F44FB6("generic_failed", 0, -1))
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
			unk_0x76F4FB5EFF5BDED5(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			unk_0x0ECBA72FAFCEBA59("STRING");
			unk_0x70A9E4720D71C2D5(6);
			unk_0xBEFD1ED9B6BE5127(sParam2);
			unk_0xC30401186AC91B01();
			func_155(sParam3);
			unk_0x22DD5585E00B80C3(100);
			unk_0xD6F1BD29497A51C8(true);
			unk_0xA2A6B56DFF85AF55();
			if (func_157(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0x76F4FB5EFF5BDED5(*uParam0, "TRANSITION_UP");
					unk_0x954263F3D07BEFC2(uParam1->f_134);
					unk_0xE2B30EB9B14EEAB2();
					uParam1->f_136 = 1;
				}
			}
			if (!func_157(iParam5, 1))
			{
				unk_0x2E46E316136A29F6(0);
			}
			func_258(&(uParam1->f_10), 0, 1, 1, 1);
			func_257(&(uParam1->f_10), "IB_RETRY", 2, 201, 1, 1, 0);
			func_257(&(uParam1->f_10), "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_157(iParam5, 4))
			{
				unk_0x929C3CBA660376D5(-1, "ScreenFlash", "MissionFailedSounds", 1);
			}
			if (func_157(iParam5, 8))
			{
				switch (func_162())
				{
					case 0:
						unk_0x9575CEFF222148A6("MinigameEndMichael", 500, 0);
						break;
					
					case 1:
						unk_0x9575CEFF222148A6("MinigameEndFranklin", 500, 0);
						break;
					
					case 2:
						unk_0x9575CEFF222148A6("MinigameEndTrevor", 500, 0);
						break;
					}
			}
			if (!func_3(&(uParam1->f_1)))
			{
				func_358(&(uParam1->f_1));
			}
			if (func_157(iParam5, 2))
			{
				if (!func_3(&(uParam1->f_4)))
				{
					func_358(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		
		case 2:
			unk_0xE52EBB41DB0E0329();
			if (func_157(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0x76F4FB5EFF5BDED5(*uParam0, "TRANSITION_UP");
					unk_0x954263F3D07BEFC2(uParam1->f_134);
					unk_0xE2B30EB9B14EEAB2();
					uParam1->f_136 = 1;
				}
			}
			unk_0x31B38BBC4423BEAF(iParam6);
			func_172(uParam0, 0, 0);
			if (!func_157(iParam5, 16) && (func_5(&(uParam1->f_1)) >= uParam1->f_135 || unk_0xEC0ECEF2AF3FDA8D()))
			{
				func_151(&(uParam1->f_10), 1128792064, iParam6, bParam7, 1, 1065353216);
				unk_0x3C97A09EF6BCD140();
				if (unk_0x3469AD51EA8B9583(2, 201))
				{
					uParam1->f_138 = 1;
					unk_0x929C3CBA660376D5(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_157(iParam5, 1))
					{
						unk_0xE04A693397BA738B(0);
					}
					func_171(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
				else if (unk_0x3469AD51EA8B9583(2, 202))
				{
					uParam1->f_138 = 0;
					unk_0x929C3CBA660376D5(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_157(iParam5, 1))
					{
						unk_0xE04A693397BA738B(0);
					}
					func_171(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			if (func_157(iParam5, 2))
			{
				if (func_5(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_138 = 0;
					unk_0x929C3CBA660376D5(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_157(iParam5, 1))
					{
						unk_0xE04A693397BA738B(0);
					}
					func_171(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		
		case 3:
			func_172(uParam0, 0, 0);
			unk_0x3F9FBB0647D763E2(1f);
			if (uParam1->f_138 || !((unk_0x9D39145AD645E383("stunt_plane_races", unk_0xFCA64981FEF7C913()) || unk_0x9D39145AD645E383("pilot_school", unk_0xFCA64981FEF7C913())) || (unk_0x9D39145AD645E383("bj", unk_0xFCA64981FEF7C913()) && unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))))
			{
				unk_0x8359CF51370FC969(2500);
			}
			if (func_157(iParam5, 64) && uParam1->f_138)
			{
				unk_0xFF91FEC6E57575E4(500);
			}
			func_11(&(uParam1->f_4));
			if (bParam9)
			{
				unk_0x3B82047F26E2CEDB(0);
			}
			*uParam1 = 4;
			break;
		
		case 4:
			if (func_5(&(uParam1->f_4)) <= 0.1f)
			{
				func_172(uParam0, 0, 0);
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

void func_171(var uParam0)
{
	if (*uParam0 != 0)
	{
		unk_0xEBE532BFFE618875(uParam0);
		*uParam0 = 0;
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
}

int func_172(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_3(&(uParam0->f_2)))
	{
		func_11(&(uParam0->f_2));
	}
	unk_0xE05212008FE9A018(14);
	if (!bParam2)
	{
		unk_0x5E70D9959D6F2350(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		unk_0x5E70D9959D6F2350(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (unk_0x02EA7C5633421A0F(2, 201))
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

void func_173(var uParam0, float fParam1, float fParam2)
{
	if (func_3(&(uParam0->f_1)))
	{
		func_4(&(uParam0->f_1));
	}
	if (func_3(&(uParam0->f_4)))
	{
		func_4(&(uParam0->f_4));
	}
	func_171(&(uParam0->f_10));
	uParam0->f_134 = fParam1;
	uParam0->f_135 = fParam2;
	uParam0->f_137 = 1;
	uParam0->f_136 = 0;
	*uParam0 = 0;
}

void func_174(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		func_78(uParam0, iVar0);
		iVar0++;
	}
}

void func_175(int iParam0, bool bParam1)
{
	switch (iLocal_2022)
	{
		case 0:
			func_25();
			func_192();
			func_188();
			iLocal_2022 = 1;
			break;
		
		case 1:
			if (func_187())
			{
				iLocal_2022 = 2;
			}
			break;
		
		case 2:
			func_176(iParam0);
			break;
		
		case 3:
			if (bParam1)
			{
				iLocal_2022 = 0;
			}
			break;
	}
}

void func_176(int iParam0)
{
	switch (Local_51.f_10)
	{
		case 3:
			func_186(iParam0);
			func_185(iParam0);
			break;
		
		case 0:
			func_184(iParam0);
			func_183(iParam0);
			break;
		
		case 1:
			func_182(iParam0);
			func_180(iParam0);
			break;
		
		case 2:
			func_179(iParam0);
			func_178(iParam0);
			break;
		
		case 4:
			func_177(iParam0);
			break;
	}
}

void func_177(int iParam0)
{
	if (iParam0 == 5)
	{
		if (!func_357(uLocal_2113, 1))
		{
			func_329(&uLocal_2113, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!func_357(uLocal_2113, 2))
		{
			func_329(&uLocal_2113, 2);
		}
	}
}

void func_178(int iParam0)
{
	if (iParam0 >= 4)
	{
		if (!unk_0x31F12808DC47A9E5(uLocal_2091[0]) && !func_357(uLocal_2103, 1))
		{
			uLocal_2091[0] = unk_0x3064CCF56C6C32BC(joaat("hauler"), -449.6041f, -2271.693f, 6.6086f, 267.5199f, 1, 1, 0);
			uLocal_2091[1] = unk_0x3064CCF56C6C32BC(joaat("tanker"), -449.6041f, -2271.693f, 6.6086f, 267.5199f, 1, 1, 0);
			unk_0x947BB7093DF96619(uLocal_2091[0], uLocal_2091[1], 1065353216);
			uLocal_2097[0] = unk_0xC52E83A4C0F88DAB(uLocal_2091[0], 4, joaat("s_m_m_dockwork_01"), -1, 1, 1);
			func_329(&uLocal_2103, 1);
		}
		if (unk_0x9BE1DFFE71D3D3DA("SPR_Fluff_01"))
		{
			if (!unk_0x74C2FE037DFC8B4A(uLocal_2091[0], 0) && !unk_0x74C2FE037DFC8B4A(uLocal_2097[0], 0))
			{
				if (unk_0x2BBAA45ECDE3DAE2(uLocal_2097[0], -235832601) == 1)
				{
				}
				else
				{
					unk_0xAF7956D9C892AC2E(uLocal_2097[0], uLocal_2091[0], "SPR_Fluff_01", 786469, 0, 8, -1, unk_0xB64E14DD74D484C1(uLocal_2091[0]), 0, 1073741824);
				}
			}
		}
	}
}

void func_179(int iParam0)
{
	if (iParam0 == 4)
	{
		if (!func_357(uLocal_2113, 1))
		{
			func_329(&uLocal_2113, 1);
		}
	}
	if (iParam0 == 8)
	{
		if (!func_357(uLocal_2113, 2))
		{
			func_329(&uLocal_2113, 2);
		}
	}
}

void func_180(int iParam0)
{
	if (iParam0 >= 1)
	{
		if (!unk_0x31F12808DC47A9E5(uLocal_2091[0]))
		{
			if (!func_357(uLocal_2103, 1))
			{
				if (func_181(&iLocal_2085))
				{
					uLocal_2091[0] = unk_0x3064CCF56C6C32BC(joaat("sanchez"), -2586.901f, 386.4225f, 208.0505f, 349.0836f, 1, 1, 0);
					func_329(&uLocal_2103, 1);
				}
			}
		}
		if (unk_0x31F12808DC47A9E5(uLocal_2091[0]))
		{
			if (!unk_0x31F12808DC47A9E5(uLocal_2097[0]))
			{
				if (!func_357(uLocal_2103, 2))
				{
					uLocal_2097[0] = unk_0xC52E83A4C0F88DAB(uLocal_2091[0], 4, joaat("a_m_y_motox_01"), -1, 1, 1);
					func_329(&uLocal_2103, 2);
				}
			}
		}
		if (!unk_0x31F12808DC47A9E5(uLocal_2091[0]) && !unk_0x31F12808DC47A9E5(uLocal_2097[0]))
		{
			if (!unk_0x74C2FE037DFC8B4A(uLocal_2091[0], 0) && !unk_0x74C2FE037DFC8B4A(uLocal_2097[0], 0))
			{
				if (!unk_0x8673F2F1802ADEF7(uLocal_2091[0], -2530.873f, 608.701f, 238.9111f, 3f, 3f, 3f, 0, 1, 0))
				{
					if (unk_0x2BBAA45ECDE3DAE2(uLocal_2097[0], -1817882002) == 1)
					{
					}
					else
					{
						unk_0x0F36ED260B9B4408(uLocal_2097[0], uLocal_2091[0], -2530.873f, 608.701f, 238.9111f, unk_0xB64E14DD74D484C1(uLocal_2091[0]), 0, 0, 262144, -1f, -1f);
					}
				}
			}
		}
	}
	if (iParam0 >= 1)
	{
		if (!unk_0x31F12808DC47A9E5(uLocal_2091[1]))
		{
			if (!func_357(uLocal_2104, 1))
			{
				if (func_181(&iLocal_2085))
				{
					uLocal_2091[1] = unk_0x3064CCF56C6C32BC(joaat("sanchez"), -2582.93f, 384.918f, 208.5764f, 336.8248f, 1, 1, 0);
					func_329(&uLocal_2104, 1);
				}
			}
		}
		if (unk_0x31F12808DC47A9E5(uLocal_2091[1]))
		{
			if (!unk_0x31F12808DC47A9E5(uLocal_2097[1]))
			{
				if (!func_357(uLocal_2104, 2))
				{
					uLocal_2097[1] = unk_0xC52E83A4C0F88DAB(uLocal_2091[1], 4, joaat("a_m_y_motox_01"), -1, 1, 1);
					func_329(&uLocal_2104, 2);
				}
			}
		}
		if (!unk_0x31F12808DC47A9E5(uLocal_2091[1]) && !unk_0x31F12808DC47A9E5(uLocal_2097[1]))
		{
			if (!unk_0x74C2FE037DFC8B4A(uLocal_2091[1], 0) && !unk_0x74C2FE037DFC8B4A(uLocal_2097[1], 0))
			{
				if (!unk_0x8673F2F1802ADEF7(uLocal_2091[1], -2527.712f, 609.6833f, 239.2568f, 3f, 3f, 3f, 0, 1, 0))
				{
					if (unk_0x2BBAA45ECDE3DAE2(uLocal_2097[1], -1817882002) == 1)
					{
					}
					else
					{
						unk_0x0F36ED260B9B4408(uLocal_2097[1], uLocal_2091[1], -2527.712f, 609.6833f, 239.2568f, unk_0xB64E14DD74D484C1(uLocal_2091[1]), 0, 0, 262144, -1f, -1f);
					}
				}
			}
		}
	}
}

int func_181(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] != 0)
		{
			if (!unk_0xEDFE27D1AEA0EA7F((*iParam0)[iVar0]))
			{
				if (!unk_0xEDFE27D1AEA0EA7F((*iParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_182(int iParam0)
{
	if (iParam0 == 9)
	{
		if (!func_357(uLocal_2113, 1))
		{
			func_329(&uLocal_2113, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!func_357(uLocal_2113, 2))
		{
			func_329(&uLocal_2113, 2);
		}
	}
}

void func_183(int iParam0)
{
	if (iParam0 == 6)
	{
		if (!unk_0x31F12808DC47A9E5(uLocal_2091[0]) && !func_357(uLocal_2103, 1))
		{
			uLocal_2091[0] = unk_0x3064CCF56C6C32BC(joaat("jetmax"), -1429.102f, 2602.645f, -1.0709f, 85.2614f, 1, 1, 0);
			uLocal_2097[0] = unk_0xC52E83A4C0F88DAB(uLocal_2091[0], 4, joaat("s_m_m_dockwork_01"), -1, 1, 1);
			if (!unk_0x74C2FE037DFC8B4A(uLocal_2091[0], 0) && !unk_0x74C2FE037DFC8B4A(uLocal_2097[0], 0))
			{
				if (!unk_0x8673F2F1802ADEF7(uLocal_2091[0], -1552.281f, 2641.609f, -0.8283f, 3f, 3f, 3f, 0, 1, 0))
				{
					if (unk_0x2BBAA45ECDE3DAE2(uLocal_2097[0], -1273030092) == 1)
					{
					}
					else
					{
						unk_0xA0C0358B9D284C3C(uLocal_2097[0], uLocal_2091[0], -1552.281f, 2641.609f, -0.8283f, 4, unk_0xB64E14DD74D484C1(uLocal_2091[0]), 262144, 3f, -1f, 1);
					}
				}
			}
			func_329(&uLocal_2103, 1);
		}
	}
	else if (iParam0 == 12)
	{
		if (func_357(uLocal_2103, 1))
		{
			if (!unk_0x74C2FE037DFC8B4A(uLocal_2097[0], 0))
			{
				unk_0x63C116C2153FAA3C(&(uLocal_2097[0]));
			}
			if (!unk_0x74C2FE037DFC8B4A(uLocal_2091[0], 0))
			{
				unk_0xBECECD970F645217(&(uLocal_2091[0]));
			}
		}
	}
}

void func_184(int iParam0)
{
	if (iParam0 == 7)
	{
		if (!func_357(uLocal_2113, 1))
		{
			func_329(&uLocal_2113, 1);
		}
	}
	if (iParam0 == 11)
	{
		if (!func_357(uLocal_2113, 2))
		{
			func_329(&uLocal_2113, 2);
		}
	}
}

void func_185(int iParam0)
{
	if (!func_357(uLocal_2103, 1))
	{
		if (iParam0 < 3)
		{
			if (unk_0x53500A7D168BF5F6(101, "SPRStuntAF"))
			{
				unk_0x597B99EA7336BDBE(-943.8105f, -3173.692f, 12.9445f);
				if (!unk_0x31F12808DC47A9E5(uLocal_2091[0]))
				{
					uLocal_2091[0] = unk_0x3064CCF56C6C32BC(joaat("jet"), -943.8105f, -3173.692f, 12.9445f, 60.537f, 1, 1, 0);
					unk_0x9B53B2691E2B1F79(uLocal_2091[0], 1084227584);
					unk_0x0F3F86C855582784(uLocal_2091[0], 1, 1, 0);
					if (Local_51.f_0 == 0)
					{
						unk_0xBCB52670CAA2819B(uLocal_2091[0]);
					}
					uLocal_2097[0] = unk_0xC52E83A4C0F88DAB(uLocal_2091[0], 4, joaat("s_m_m_highsec_01"), -1, 1, 1);
				}
				if (!unk_0x74C2FE037DFC8B4A(uLocal_2091[0], 0))
				{
					if (unk_0x8673F2F1802ADEF7(uLocal_2091[0], -943.8105f, -3173.692f, 12.9445f, 20f, 20f, 20f, 0, 1, 0))
					{
						if (!unk_0xCD9EC66924076C1B(uLocal_2091[0]))
						{
							unk_0xF81720737A9C0B6E(uLocal_2091[0], 101, "SPRStuntAF", 1);
						}
					}
					else if (!unk_0xCD9EC66924076C1B(uLocal_2091[0]))
					{
						if (!unk_0x74C2FE037DFC8B4A(uLocal_2097[0], 0))
						{
							if (!unk_0x2BBAA45ECDE3DAE2(uLocal_2097[0], -1817882002) == 1)
							{
								unk_0x0F36ED260B9B4408(uLocal_2097[0], uLocal_2091[0], -6793.876f, -557.0385f, 781.0172f, 50f, 0, joaat("jet"), 262144, -1f, -1f);
							}
						}
					}
				}
			}
		}
		else if (!unk_0x74C2FE037DFC8B4A(uLocal_2091[0], 0))
		{
			if (unk_0xCD9EC66924076C1B(uLocal_2091[0]))
			{
				unk_0xF2106D7D1A77DBA8(uLocal_2091[0]);
			}
			else
			{
				unk_0xBECECD970F645217(&(uLocal_2091[0]));
				func_329(&uLocal_2103, 1);
			}
		}
	}
	else if (!unk_0x74C2FE037DFC8B4A(uLocal_2091[0], 0))
	{
		unk_0x597B99EA7336BDBE(unk_0x761660F5CE986DC4(uLocal_2091[0], 1));
	}
}

void func_186(int iParam0)
{
	if (iParam0 == 6)
	{
		if (!func_357(uLocal_2113, 1))
		{
			func_329(&uLocal_2113, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!func_357(uLocal_2113, 2))
		{
			func_329(&uLocal_2113, 2);
		}
	}
}

int func_187()
{
	switch (Local_51.f_10)
	{
		case 3:
			if (func_181(&iLocal_2085) && unk_0x53500A7D168BF5F6(101, "SPRStuntAF"))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 0:
			if (func_181(&iLocal_2085))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (func_181(&iLocal_2085))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_181(&iLocal_2085) && unk_0x9BE1DFFE71D3D3DA("SPR_Fluff_01"))
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

void func_188()
{
	switch (Local_51.f_10)
	{
		case 3:
			func_190(&iLocal_2085, joaat("jet"));
			func_190(&iLocal_2085, joaat("s_m_m_highsec_01"));
			unk_0xAE5F484E08487A0F(101, "SPRStuntAF");
			break;
		
		case 0:
			func_190(&iLocal_2085, joaat("jetmax"));
			func_190(&iLocal_2085, joaat("s_m_m_dockwork_01"));
			break;
		
		case 1:
			func_190(&iLocal_2085, joaat("sanchez"));
			func_190(&iLocal_2085, joaat("a_m_y_motox_01"));
			break;
		
		case 2:
			func_190(&iLocal_2085, joaat("hauler"));
			func_190(&iLocal_2085, joaat("tanker"));
			func_190(&iLocal_2085, joaat("s_m_m_dockwork_01"));
			unk_0x556D5BBBB0AC3BCB("SPR_Fluff_01");
			break;
		
		case 4:
			break;
	}
	func_189(&iLocal_2085);
}

void func_189(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] != 0)
		{
			unk_0x9016574B77A748EE((*iParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_190(int iParam0, int iParam1)
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
	iVar1 = func_191(iParam0);
	if (iVar1 < 0 || iVar1 >= *iParam0)
	{
		return 0;
	}
	(*iParam0)[iVar1] = iParam1;
	return 1;
}

int func_191(var uParam0)
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

void func_192()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_357(uLocal_2113, iVar0))
		{
			func_355(&uLocal_2113, iVar0);
		}
		iVar0++;
	}
}

void func_193(var uParam0, int iParam1)
{
	func_194(uParam0, iParam1, 0);
}

void func_194(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x44243F2E2F58B8E3())
	{
		if (unk_0xB03A1684359C50A1(Global_2512581.f_4556, 26))
		{
			return;
		}
	}
	if (unk_0x76AF8AC551A53D4C())
	{
		unk_0xBC3C2A3068412290(iParam2);
		unk_0x605B63B87CCF606F("FocusIn");
		unk_0xA11D9B06B99FE786("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x9575CEFF222148A6("FocusOut", 0, 0);
			unk_0x929C3CBA660376D5(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x9A8BE560E024CAB0(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xE0C4A595CD61B7F2(sVar0))
	{
		if (!unk_0x44243F2E2F58B8E3())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xE0C4A595CD61B7F2(uParam0->f_3))
	{
		if (func_195(uParam0->f_3))
		{
			unk_0xEFF1F12403847394(1);
		}
	}
	if (!unk_0xE0C4A595CD61B7F2(sVar0))
	{
		if (func_195(sVar0))
		{
			unk_0xEFF1F12403847394(1);
		}
	}
}

bool func_195(char* sParam0)
{
	unk_0x24BB6189982CE7D6(sParam0);
	return unk_0xF2850FB50EE28440(0);
}

void func_196(var uParam0)
{
	float fVar0;
	
	if (uParam0->f_358[0 /*189*/].f_11 >= (uParam0->f_12 - 2))
	{
		fVar0 = unk_0x2A488C176D52CCA5(uParam0->f_27[(uParam0->f_12 - 2) /*10*/], func_197());
		if (!unk_0x8CDCFAFBE5805880(uLocal_2335))
		{
			if (unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), func_197()) <= ((fVar0 * 1.5f) * (fVar0 * 1.5f)))
			{
				uLocal_2335 = unk_0x1CB41B7700116EBE(func_197(), uParam0->f_27[(uParam0->f_12 - 1) /*10*/] - func_197(), 2000f, 12, 127);
			}
		}
		else if (!unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), func_197()) <= ((fVar0 * 2f) * (fVar0 * 2f)))
		{
			func_248();
		}
	}
}

Vector3 func_197()
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

void func_198(var uParam0)
{
	if (func_230())
	{
		if (!Local_2322.f_0)
		{
			Local_2322.f_0 = 1;
			Local_2322.f_1 = 1;
		}
		else
		{
			Local_2322.f_1 = 0;
		}
	}
	else if (func_229())
	{
		if (!Local_2322.f_1 || func_228() >= 1f)
		{
			if (Local_2322.f_0)
			{
				Local_2322.f_0 = 0;
			}
		}
	}
	if (func_229())
	{
		func_227();
	}
	else
	{
		func_226();
	}
	if (Local_2322.f_0)
	{
		if (!func_225(Local_2322.f_2) && !func_223(Local_2322.f_2))
		{
			func_200(&uLocal_2295, Local_2322.f_2);
		}
		else
		{
			if (unk_0x5400DC5FAEBF30F0(Local_2322.f_6))
			{
				unk_0x13AD763DBD687842(Local_2322.f_6, 0);
			}
			if (func_223(Local_2322.f_2))
			{
				Local_2322.f_2 = { func_199(uParam0) };
			}
			func_193(&uLocal_2295, 0);
			Local_2322.f_0 = 0;
		}
	}
	else if (unk_0x5400DC5FAEBF30F0(Local_2322.f_6))
	{
		unk_0x13AD763DBD687842(Local_2322.f_6, 0);
	}
	else
	{
		if (func_223(Local_2322.f_2))
		{
			Local_2322.f_2 = { func_199(uParam0) };
		}
		func_193(&uLocal_2295, 0);
		Local_2322.f_0 = 0;
	}
}

Vector3 func_199(var uParam0)
{
	if (uParam0->f_358[0 /*189*/].f_11 < (Local_51.f_11 - 1))
	{
		return uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/];
	}
	return 0f, 0f, 0f;
}

void func_200(var uParam0, struct<3> Param1)
{
	func_201(uParam0, Param1, 0, 0, 1, 1, 1);
}

void func_201(var uParam0, struct<3> Param1, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
	{
		func_194(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_202(uParam0, Param1, iParam4, iParam5, bParam6, iParam7, bParam8);
}

void func_202(var uParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6, var uParam7, bool bParam8)
{
	int iVar0;
	
	if (uParam0->f_1 && unk_0x76AF8AC551A53D4C())
	{
		if (unk_0x5AFB8ED811F05E4D() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = uParam4;
	if (unk_0xE0C4A595CD61B7F2(iVar0))
	{
		if (!unk_0x44243F2E2F58B8E3())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_195(iVar0))
	{
		func_222();
	}
	if (!unk_0x76AF8AC551A53D4C())
	{
		if (func_217(uParam0, bParam6, bParam8, 0))
		{
			func_216(uParam0, Param1, iParam5);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_207(iVar0))
			{
				if ((unk_0xE0C4A595CD61B7F2(uParam0->f_3) && !unk_0xE0C4A595CD61B7F2(iVar0)) && unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
				{
					if ((unk_0x6157232E032EBC56(Param1, 1f) && !unk_0x622E10ED992CEB95()) && uParam7)
					{
						if (!func_195(iVar0))
						{
							func_298(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x9D39145AD645E383("CMN_HINT", iVar0))
							{
								func_206(1);
							}
						}
					}
				}
			}
		}
		else if (func_207(iVar0))
		{
			if (unk_0xE0C4A595CD61B7F2(uParam0->f_3) && !unk_0xE0C4A595CD61B7F2(iVar0))
			{
				if ((unk_0x6157232E032EBC56(Param1, 1f) && !unk_0x622E10ED992CEB95()) && uParam7)
				{
					if (!func_195(iVar0))
					{
						func_298(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (unk_0x9D39145AD645E383("CMN_HINT", iVar0))
						{
							func_206(1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!unk_0xE0C4A595CD61B7F2(iVar0))
		{
			if (func_195(iVar0) && unk_0x622E10ED992CEB95())
			{
				unk_0xEFF1F12403847394(1);
			}
		}
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
		{
			if (unk_0x38E433ABCF3784A4(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0xC345D9AB8BB3AB24(3) == 3 || unk_0xC345D9AB8BB3AB24(3) == 4)
				{
					func_194(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x8E8D5D5EC87F35D7(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0xC345D9AB8BB3AB24(6) == 3 || unk_0xC345D9AB8BB3AB24(6) == 4)
				{
					func_194(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x3C08111698DB7162(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0xC345D9AB8BB3AB24(4) == 3 || unk_0xC345D9AB8BB3AB24(4) == 4)
				{
					func_194(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xFC305F382E42BCD0(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0xC345D9AB8BB3AB24(5) == 3 || unk_0xC345D9AB8BB3AB24(5) == 4)
				{
					func_194(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xB160CAD76325B7F1(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0xC345D9AB8BB3AB24(2) == 3 || unk_0xC345D9AB8BB3AB24(2) == 4)
				{
					func_194(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x8AD89EE461B50C14() == 3 || unk_0x8AD89EE461B50C14() == 4)
			{
				func_194(uParam0, iVar0, 1);
			}
		}
		if (!func_217(uParam0, bParam6, bParam8, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_205(uParam0))
			{
				func_203(uParam0);
			}
		}
	}
}

void func_203(var uParam0)
{
	if (func_204(unk_0x18F7BE9ACB7D08F4()))
	{
		unk_0x81D9C52E2A8DA464(unk_0x18F7BE9ACB7D08F4());
	}
	if (unk_0x76AF8AC551A53D4C())
	{
		unk_0x9A8BE560E024CAB0(true);
		unk_0xBC3C2A3068412290(0);
		unk_0xA11D9B06B99FE786("HINT_CAM_SCENE");
		unk_0x605B63B87CCF606F("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x9575CEFF222148A6("FocusOut", 0, 0);
			unk_0x929C3CBA660376D5(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_204(int iParam0)
{
	if (unk_0x31F12808DC47A9E5(iParam0))
	{
		if (unk_0x978B4E1292EBBE41(iParam0))
		{
			if (unk_0xC4B84EB67F78C1F0(unk_0x00ABCA0241A97143(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0xB6C2454233C8F532(iParam0))
		{
			if (!unk_0x0FAE113CE72ED842(unk_0x6DE4035D8BAB73B4(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x2E4A20D66F5AD135(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_205(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x5AFB8ED811F05E4D()
		{
			return 1;
		}
	}
	return 0;
}

int func_206(bool bParam0)
{
	switch (Global_35859)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_104551.f_10019.f_100++;
			}
			return Global_104551.f_10019.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_104551.f_10019.f_101++;
			}
			return Global_104551.f_10019.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_104551.f_10019.f_102++;
			}
			return Global_104551.f_10019.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_207(char* sParam0)
{
	if (!func_208(1, 1, 0))
	{
		if ((!unk_0xFAFFA408239A026B(sParam0) && func_195(sParam0)) || func_195("CMN_HINT"))
		{
			unk_0xEFF1F12403847394(1);
		}
		return 0;
	}
	switch (Global_35859)
	{
		case 0:
		case 3:
			if (func_206(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_206(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_206(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_208(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x51CFE20A158947F4())
	{
		return 0;
	}
	if (func_140(0))
	{
		return 0;
	}
	if (func_215())
	{
		return 0;
	}
	if (unk_0x91A08229665C71F1())
	{
		return 0;
	}
	if (Global_68213)
	{
		return 0;
	}
	if (unk_0xE7FAF8E78F7D3A73(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_53082)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
		{
			if (unk_0x38E433ABCF3784A4(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0xC345D9AB8BB3AB24(3) == 3 || unk_0xC345D9AB8BB3AB24(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8E8D5D5EC87F35D7(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0xC345D9AB8BB3AB24(6) == 3 || unk_0xC345D9AB8BB3AB24(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x3C08111698DB7162(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0xC345D9AB8BB3AB24(4) == 3 || unk_0xC345D9AB8BB3AB24(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xFC305F382E42BCD0(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0xC345D9AB8BB3AB24(5) == 3 || unk_0xC345D9AB8BB3AB24(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xB160CAD76325B7F1(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0xC345D9AB8BB3AB24(2) == 3 || unk_0xC345D9AB8BB3AB24(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8AD89EE461B50C14() == 3 || unk_0x8AD89EE461B50C14() == 4)
			{
				return 0;
			}
			if (unk_0xE368D11FD9469808())
			{
				return 0;
			}
		}
	}
	if ((func_214() || func_213(Global_1646129.f_138609)) || func_212())
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if ((unk_0xF8DAA7AB81AFC008(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), func_211(unk_0x18F7BE9ACB7D08F4(), 0)) || (unk_0x4F69FBD64CDF125B(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0)) == joaat("apc") && func_211(unk_0x18F7BE9ACB7D08F4(), 0) != -1)) || (unk_0x4F69FBD64CDF125B(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0)) == joaat("akula") && func_211(unk_0x18F7BE9ACB7D08F4(), 0) != -1))
			{
				return 0;
			}
		}
	}
	if (func_209(unk_0x8CFC7D6E1DA5D304()))
	{
		return 0;
	}
	return 1;
}

int func_209(int iParam0)
{
	if (iParam0 != func_210())
	{
		if (func_128(iParam0, 1, 1))
		{
			return Global_2422724[iParam0 /*420*/].f_324.f_1 != -1;
		}
		else if ((Global_1312854 && iParam0 == unk_0x8CFC7D6E1DA5D304()) && func_128(iParam0, 1, 0))
		{
			return Global_2422724[iParam0 /*420*/].f_324.f_1 != -1;
		}
	}
	return 0;
}

int func_210()
{
	return -1;
}

int func_211(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x0FAE113CE72ED842(iParam0))
	{
		if (unk_0x657B649BA2AD3582(iParam0, iParam1))
		{
			iVar0 = unk_0x5AD687C3474F04B4(iParam0, iParam1);
			if (unk_0x31F12808DC47A9E5(iVar0))
			{
				iVar1 = unk_0x80F48E43F37DD7DD(unk_0x4F69FBD64CDF125B(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x74B8CA477787A438(iVar0, iVar3, 0))
					{
						if (unk_0x4983F8C51A0C0AF3(iVar0, iVar3, 0) == iParam0)
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

var func_212()
{
	return Global_2447128.f_16;
}

bool func_213(int iParam0)
{
	return iParam0 == 51;
}

var func_214()
{
	return Global_2447128.f_15;
}

bool func_215()
{
	return unk_0x5AFB8ED811F05E4D() <= Global_17301.f_5745 + 100;
}

void func_216(var uParam0, struct<3> Param1, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x9A8BE560E024CAB0(false);
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
	unk_0x14156ED1026104AB(Param1, -1, iVar0, iVar1, iParam4);
	iVar2 = 2048;
	iVar3 = 3;
	unk_0x13C89D4679DD9966(unk_0x18F7BE9ACB7D08F4(), Param1, -1, iVar2, iVar3);
	unk_0x9575CEFF222148A6("FocusIn", 0, 0);
	unk_0x64D773F3BE6DC50A("HINT_CAM_SCENE");
	unk_0x929C3CBA660376D5(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x5AFB8ED811F05E4D();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_217(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x5AFB8ED811F05E4D() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
				{
					if (func_221(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x5AFB8ED811F05E4D();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_220(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x5AFB8ED811F05E4D();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_220(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x5AFB8ED811F05E4D();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_221(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x5AFB8ED811F05E4D();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_205(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x5AFB8ED811F05E4D() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
					{
						if (!func_221(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x5AFB8ED811F05E4D();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_220(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x5AFB8ED811F05E4D();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_220(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x5AFB8ED811F05E4D();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_221(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x5AFB8ED811F05E4D();
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
				if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
				{
					if (!func_221(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_220(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_220(bParam1, bParam2, bParam3) || unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1) || unk_0x879BEE8D3501CA4E(unk_0x18F7BE9ACB7D08F4(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_221(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x5AFB8ED811F05E4D() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
					{
						if (func_219(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_218(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1) || func_218(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1) || unk_0x879BEE8D3501CA4E(unk_0x18F7BE9ACB7D08F4(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_219(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_205(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_208(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_222();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_218(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_208(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (!unk_0x536B0B7C52D20BC8(unk_0x8CFC7D6E1DA5D304()))
		{
			unk_0x9C7EE7DE7041A3F4(0, 140, 1);
			unk_0x9C7EE7DE7041A3F4(0, 80, 1);
			if (unk_0x1A3F4FBE2944681B(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_219(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_208(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		unk_0x9C7EE7DE7041A3F4(0, 80, 1);
		if (unk_0x32BB425845F5FFF7())
		{
			if (unk_0x1A3F4FBE2944681B(0, 80))
			{
				unk_0x9A8BE560E024CAB0(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_220(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_208(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (!unk_0x536B0B7C52D20BC8(unk_0x8CFC7D6E1DA5D304()))
		{
			unk_0x9C7EE7DE7041A3F4(0, 140, 1);
			unk_0x9C7EE7DE7041A3F4(0, 80, 1);
			if (unk_0xBAEF57A3E716CC8D(0, 80) && unk_0x5AFB8ED811F05E4D() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_221(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_208(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		unk_0x9C7EE7DE7041A3F4(0, 80, 1);
		if (unk_0x32BB425845F5FFF7())
		{
			if (unk_0xBAEF57A3E716CC8D(0, 80) && unk_0x5AFB8ED811F05E4D() > Global_116)
			{
				unk_0x9A8BE560E024CAB0(false);
				return 1;
			}
		}
	}
	return 0;
}

void func_222()
{
	unk_0xD2A9C3F486236CC5(&Global_2324, 4);
}

int func_223(struct<3> Param0)
{
	float fVar0;
	
	fVar0 = unk_0x2A72627520A107B5(unk_0x18F7BE9ACB7D08F4());
	if (unk_0xB7A628320EFF8E47(Param0, func_224(unk_0x8CFC7D6E1DA5D304())) < (150f + (fVar0 * fVar0)))
	{
		return 1;
	}
	return 0;
}

Vector3 func_224(int iParam0)
{
	return unk_0x761660F5CE986DC4(unk_0x6604E096142B4B55(iParam0), 0);
}

int func_225(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_226()
{
	Local_2322.f_5 = 0f;
}

void func_227()
{
	Local_2322.f_5 = (Local_2322.f_5 + unk_0x64031EF2AE5F9603());
}

float func_228()
{
	return Local_2322.f_5;
}

bool func_229()
{
	return unk_0x3469AD51EA8B9583(0, 80);
}

bool func_230()
{
	return unk_0x02EA7C5633421A0F(0, 80);
}

void func_231(struct<3> Param0)
{
	func_193(&uLocal_2295, 0);
	Local_2322.f_2 = { Param0 };
}

void func_232(int iParam0, int iParam1)
{
	Global_92868.f_7 = iParam0;
	Global_92868.f_8 = iParam1;
}

void func_233(int iParam0)
{
	Global_71112 = iParam0;
	Global_71113 = iParam0;
}

int func_234(var uParam0, bool bParam1, bool bParam2)
{
	unk_0x86F19D940AA2DC6C(0);
	switch (iLocal_2021)
	{
		case 0:
			iLocal_529 = 0;
			Local_2287 = { func_197() };
			Local_2290 = { func_247() };
			fLocal_2293 = func_246();
			unk_0x77B57B2BB7F3EA0A(0);
			unk_0xEFF1F12403847394(1);
			unk_0x08FC50794202A47C();
			iLocal_2021 = 1;
			break;
		
		case 1:
			if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
			{
				if (func_162() == 0)
				{
					unk_0x9575CEFF222148A6("MinigameEndMichael", 0, 0);
				}
				else if (func_162() == 1)
				{
					unk_0x9575CEFF222148A6("MinigameEndFranklin", 0, 0);
				}
				else if (func_162() == 2)
				{
					unk_0x9575CEFF222148A6("MinigameEndTrevor", 0, 0);
				}
				uLocal_2079 = unk_0x2F192286DA6346A2(26379945, Local_2287, Local_2290, fLocal_2293, 1, 2);
				unk_0xF5F744EF9F4DB21E(1, 0, 3000, 1, 0, 0);
				if (bParam2)
				{
					unk_0x24144CB94D75CE91(uLocal_2079, "HAND_SHAKE", 0.07f);
				}
				if (unk_0xC4B84EB67F78C1F0(uParam0->f_358[0 /*189*/].f_9, 0) && unk_0x2409C4B1759B2661(uParam0->f_358[0 /*189*/].f_9))
				{
					unk_0xA0C0358B9D284C3C(unk_0x18F7BE9ACB7D08F4(), uParam0->f_358[0 /*189*/].f_9, Local_2287.f_0, Local_2287.f_1, (Local_2287.f_2 + 15f), 4, unk_0x2A72627520A107B5(uParam0->f_358[0 /*189*/].f_9), 262144, 10f, 10f, 1);
				}
				unk_0xA865CEEF4B403792(uLocal_2079, unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1));
				iLocal_2021 = 2;
			}
			break;
		
		case 2:
			unk_0x2FCBAABE7B847216(uLocal_2079);
			func_245(uLocal_2079);
			func_10(&uLocal_2075);
			iLocal_2021 = 3;
			break;
		
		case 3:
			if (func_244(&uLocal_2075, fLocal_2294))
			{
				func_10(&uLocal_2075);
				func_245(uLocal_2079);
				iLocal_2021 = 4;
			}
			break;
		
		case 4:
			if (bParam1)
			{
				if (unk_0x3AAE8FF7FB37F69E(uParam0->f_358[0 /*189*/].f_9) && unk_0x2409C4B1759B2661(uParam0->f_358[0 /*189*/].f_9))
				{
					Local_2284 = { unk_0x761660F5CE986DC4(uParam0->f_358[0 /*189*/].f_9, 1) };
					func_10(&uLocal_2075);
				}
				func_241(uLocal_2079, Local_2284);
			}
			if (func_107(&uLocal_2075) >= 1f)
			{
				iLocal_2021 = 5;
			}
			break;
		
		case 5:
			func_11(&uLocal_2075);
			if (unk_0x5400DC5FAEBF30F0(uLocal_2078))
			{
				unk_0x13AD763DBD687842(uLocal_2078, 0);
			}
			unk_0x9575CEFF222148A6("MinigameTransitionIn", 0, 1);
			unk_0xA41F88BA20F1376F(uLocal_2079, 0);
			Local_2287 = { unk_0xB6E76298CC2D1D84(uLocal_2079) };
			Local_2290 = { unk_0xE691D59BC5B164BB(uLocal_2079, 2) };
			uLocal_2078 = unk_0x2F192286DA6346A2(26379945, Local_2287.f_0, Local_2287.f_1, (Local_2287.f_2 + 1000f), 90f, Local_2290.f_1, Local_2290.f_2, fLocal_2293, 0, 2);
			unk_0x544D4FC2BDA00B32(uLocal_2078, uLocal_2079, 500, 1, 1);
			unk_0x929C3CBA660376D5(-1, "QUIT_WHOOSH", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_2021 = 6;
			break;
		
		case 6:
			if (!unk_0x644D3EC290513DA9(uLocal_2078) && !unk_0x644D3EC290513DA9(uLocal_2079))
			{
				if (uParam0->f_358[0 /*189*/].f_13 <= Local_51.f_106[Local_51.f_10])
				{
					unk_0x929C3CBA660376D5(-1, "MEDAL_GOLD", "HUD_AWARDS", 1);
				}
				else if (uParam0->f_358[0 /*189*/].f_13 <= (((Local_51.f_106[Local_51.f_10] - Local_51.f_112[Local_51.f_10]) / 2f) + Local_51.f_112[Local_51.f_10]))
				{
					unk_0x929C3CBA660376D5(-1, "MEDAL_SILVER", "HUD_AWARDS", 1);
				}
				else if (uParam0->f_358[0 /*189*/].f_13 <= Local_51.f_112[Local_51.f_10])
				{
					unk_0x929C3CBA660376D5(-1, "MEDAL_BRONZE", "HUD_AWARDS", 1);
				}
				else
				{
					func_240(1);
				}
				iLocal_2021 = 7;
			}
			break;
		
		case 7:
			if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				unk_0x3987E3ADA8E87AD8(unk_0x8CFC7D6E1DA5D304());
			}
			func_238(uParam0);
			func_66(&(Local_51.f_321), 1);
			func_11(&uLocal_2075);
			if (unk_0xC4B84EB67F78C1F0(uParam0->f_358[0 /*189*/].f_9, 0))
			{
				sLocal_2279 = unk_0x4E4B5ABBAFD1784D();
				unk_0xA0611ED281CB47AA(uParam0->f_358[0 /*189*/].f_9, 0);
			}
			iLocal_2021 = 8;
			break;
		
		case 8:
			if (func_237(uParam0))
			{
				iLocal_2021 = 9;
			}
			break;
		
		case 9:
			unk_0x9575CEFF222148A6("MinigameTransitionOut", 0, 0);
			func_236(&uLocal_2080);
			func_232(1, 0);
			func_235(uParam0);
			func_16();
			func_232(0, 0);
			iLocal_2021 = 0;
			return 0;
			break;
	}
	func_427(uParam0, 0);
	return 1;
}

int func_235(var uParam0)
{
	if (uParam0->f_358[0 /*189*/].f_13 <= Local_51.f_106[Local_51.f_10])
	{
		unk_0x55E6536147AC42E6(&(Local_51.f_24[Local_51.f_10 /*8*/]));
		return unk_0x75A8519FB3114BF0("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 109, "HUD_MED_UNLKED");
	}
	else if (uParam0->f_358[0 /*189*/].f_13 <= (((Local_51.f_106[Local_51.f_10] - Local_51.f_112[Local_51.f_10]) / 2f) + Local_51.f_112[Local_51.f_10]))
	{
		unk_0x55E6536147AC42E6(&(Local_51.f_24[Local_51.f_10 /*8*/]));
		return unk_0x75A8519FB3114BF0("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 108, "HUD_MED_UNLKED");
	}
	else if (uParam0->f_358[0 /*189*/].f_13 <= Local_51.f_112[Local_51.f_10])
	{
		unk_0x55E6536147AC42E6(&(Local_51.f_24[Local_51.f_10 /*8*/]));
		return unk_0x75A8519FB3114BF0("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 107, "HUD_MED_UNLKED");
	}
	return -1;
}

void func_236(var uParam0)
{
	unk_0xEBE532BFFE618875(uParam0);
	*uParam0 = 0;
}

int func_237(var uParam0)
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
	if (!iLocal_2040)
	{
		if (fVar0 > 1f)
		{
			iLocal_2040 = 1;
		}
	}
	if (!iLocal_2041)
	{
		if (fVar0 > 4.25f)
		{
			unk_0x76F4FB5EFF5BDED5(uParam0->f_17, "TRANSITION_OUT");
			unk_0x954263F3D07BEFC2(0.5f);
			unk_0xE2B30EB9B14EEAB2();
			iLocal_2041 = 1;
		}
	}
	unk_0x5E70D9959D6F2350(uParam0->f_17, 255, 255, 255, 255, 0);
	if (fVar0 > 5f)
	{
		func_4(&(uParam0->f_17.f_2));
		iLocal_2040 = 0;
		iLocal_2041 = 0;
		return 1;
	}
	return 0;
}

void func_238(var uParam0)
{
	char* sVar0;
	
	sVar0 = func_239(2);
	unk_0x76F4FB5EFF5BDED5(uParam0->f_17, "RESET_MOVIE");
	unk_0xE2B30EB9B14EEAB2();
	unk_0x76F4FB5EFF5BDED5(uParam0->f_17, sVar0);
	unk_0x0ECBA72FAFCEBA59("STRING");
	unk_0xBEFD1ED9B6BE5127("SPR_UI_PASS");
	unk_0xC30401186AC91B01();
	unk_0x0ECBA72FAFCEBA59(&(Local_51.f_24[Local_51.f_10 /*8*/]));
	unk_0xC30401186AC91B01();
	unk_0x954263F3D07BEFC2(100f);
	unk_0xD6F1BD29497A51C8(true);
	unk_0xE2B30EB9B14EEAB2();
	uParam0->f_17.f_1 = 5000;
	func_4(&(uParam0->f_17.f_2));
	iLocal_2040 = 0;
	iLocal_2041 = 0;
}

char* func_239(int iParam0)
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

void func_240(bool bParam0)
{
	char* sVar0;
	
	unk_0xD2F6D4358B6E3AD0(0);
	switch (func_162())
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
	unk_0x493A8C2D2771C668(sVar0);
}

void func_241(var uParam0, struct<3> Param1)
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
	
	if (!unk_0x5400DC5FAEBF30F0(uParam0))
	{
		return;
	}
	if (!unk_0xEFEFF8C622C1C559(uParam0))
	{
		return;
	}
	Var1 = { unk_0xE691D59BC5B164BB(uParam0, 2) };
	Var4 = { unk_0xB6E76298CC2D1D84(uParam0) };
	Var7 = { func_8(Var1.f_0, Var1.f_1, (Var1.f_2 + 90f)) };
	Var10 = { Param1 - Var4 };
	Var10 = { func_96(Var10) };
	fVar13 = unk_0xE3269852A87D46D2((Param1.f_2 - Var4.f_2), unk_0x15EE504466B7BBD3(Param1, Var4, 0));
	fVar14 = unk_0x7F21F40674579303((Param1.f_0 - Var4.f_0), (Param1.f_1 - Var4.f_1));
	fVar14 = func_243(fVar14, -180f, 180f);
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
	if ((bLocal_2283 && fVar13 > Var1.f_0) || (!bLocal_2283 && fVar13 < Var1.f_0))
	{
		if (fVar0 > 0f)
		{
		}
		else if (fVar0 < 0f)
		{
		}
		fLocal_2280 = (fLocal_2280 * 0.9f);
		Var1.f_0 = func_242(Var1.f_0, fVar13, fLocal_2280);
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
	if ((bLocal_2282 && (Var1.f_2 - fVar14) < 0f) || (!bLocal_2282 && (Var1.f_2 - fVar14) > 0f))
	{
		if (!bLocal_2282 && (Var1.f_2 - fVar14) > 0f)
		{
		}
		else if (bLocal_2282 && (Var1.f_2 - fVar14) < 0f)
		{
		}
		fLocal_2281 = (fLocal_2281 * 0.9f);
		Var1.f_2 = func_242(Var1.f_2, fVar14, fLocal_2281);
	}
	unk_0xA5D79F87520FD826(uParam0, Var1, 2);
}

float func_242(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

float func_243(float fParam0, float fParam1, float fParam2)
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

int func_244(var uParam0, float fParam1)
{
	if (func_2(uParam0, fParam1))
	{
		func_4(uParam0);
		return 1;
	}
	return 0;
}

void func_245(var uParam0)
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
	
	unk_0x329E96299AF0B054(unk_0x18F7BE9ACB7D08F4(), &Var0, &uVar18, &uVar18, &Var3);
	Var15 = { unk_0xE691D59BC5B164BB(uParam0, 2) };
	Var12 = { unk_0xB6E76298CC2D1D84(uParam0) };
	Var6 = { func_8((Var15.f_0 + 90f), Var15.f_1, Var15.f_2) };
	Var9 = { func_8(Var15.f_0, Var15.f_1, (Var15.f_2 + 90f)) };
	fLocal_2280 = 0.2f;
	fLocal_2281 = 0.5f;
	Var21 = { unk_0xB6E76298CC2D1D84(uParam0) - Var3 };
	Var24 = { Var3 + FtoV(func_95(Var21, Var0)) * Var0 };
	if (Var24.f_2 > Var12.f_2)
	{
		bLocal_2283 = true;
	}
	else
	{
		bLocal_2283 = false;
	}
	fVar27 = func_95(Var24, Var6);
	fVar28 = func_95(Var24, Var9);
	if (fVar27 < 0f)
	{
		bLocal_2282 = true;
	}
	else
	{
		bLocal_2282 = false;
	}
}

float func_246()
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

Vector3 func_247()
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

void func_248()
{
	unk_0xC7BB901E267A910A();
	if (unk_0x8CDCFAFBE5805880(uLocal_2335))
	{
		unk_0x8F5B598E94E51DEB(uLocal_2335);
	}
}

void func_249()
{
	unk_0x0A4CB1D4A63A7528();
	func_250();
}

void func_250()
{
	Global_17162.f_134 = 1;
}

void func_251(int iParam0)
{
	if (Global_35859 == 9 || Global_35859 == 10)
	{
		Global_103201 = iParam0;
	}
	else
	{
		Global_103201 = 0;
	}
}

void func_252(bool bParam0)
{
	unk_0x9A8BE560E024CAB0(!bParam0);
}

void func_253()
{
	func_254();
	unk_0x9A8BE560E024CAB0(true);
}

void func_254()
{
	Local_2322.f_0 = 0;
	Local_2322.f_1 = 0;
	Local_2322.f_2 = { 0f, 0f, 0f };
	Local_2322.f_6 = 0;
	Local_2322.f_5 = 0f;
}

bool func_255(char* sParam0, int iParam1, char* sParam2)
{
	unk_0x096CAD0A8332D384(sParam0);
	if (iParam1 == 1)
	{
		unk_0xBEFD1ED9B6BE5127(sParam2);
	}
	return unk_0x45CD208BAEE25DF4();
}

void func_256(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_153(&(uParam0->f_1), 16);
	}
	else
	{
		func_152(&(uParam0->f_1), 16);
	}
}

int func_257(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			unk_0xD2A9C3F486236CC5(&(uParam0->f_2[iVar1 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_258(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0xC6483FE5035615A1("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_153(&(uParam0->f_1), 32);
	}
	if (unk_0x5C716BBF766E1C70(*uParam0))
	{
		func_153(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0x874AA5FC7D37BA36(*uParam0, 1);
		}
	}
	if (unk_0xC339C5C5B5E8BC5B())
	{
		if (bParam3)
		{
			func_153(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_153(&(uParam0->f_1), 8192);
	}
}

void func_259(var uParam0)
{
	func_260(uParam0);
	unk_0xC1B1E9A034A63A62(0);
	func_232(1, 0);
	func_16();
}

void func_260(var uParam0)
{
	func_297(&(uParam0->f_1871));
	func_275(&(uParam0->f_1871.f_741));
	func_261(&(uParam0->f_1871));
}

void func_261(var uParam0)
{
	func_274(&(uParam0->f_316[0 /*2*/]), 254f, 74f, 1);
	func_274(&(uParam0->f_316[1 /*2*/]), (257f + func_273(0.0047f, 1280, 1)), 127f, 1);
	func_274(&(uParam0->f_316[2 /*2*/]), (257f + func_273(0.0047f, 1280, 1)), 297f, 1);
	func_274(&(uParam0->f_316[3 /*2*/]), (257f + func_273(0.0047f, 1280, 1)), 324f, 1);
	func_274(&(uParam0->f_316[4 /*2*/]), (257f + func_273(0.0047f, 1280, 1)), 351f, 1);
	func_274(&(uParam0->f_316[5 /*2*/]), (257f + func_273(0.0047f, 1280, 1)), 378f, 1);
	func_274(&(uParam0->f_316[6 /*2*/]), (257f + func_273(0.0047f, 1280, 1)), 405f, 1);
	func_274(&(uParam0->f_316[11 /*2*/]), 257f, 297f, 1);
	func_274(&(uParam0->f_316[12 /*2*/]), 257f, 324f, 1);
	func_274(&(uParam0->f_316[13 /*2*/]), 257f, 351f, 1);
	func_274(&(uParam0->f_316[14 /*2*/]), 257f, 378f, 1);
	func_274(&(uParam0->f_316[15 /*2*/]), 257f, 405f, 1);
	func_274(&(uParam0->f_316[18 /*2*/]), 298f, 567f, 1);
	func_274(&(uParam0->f_316[17 /*2*/]), 384f, 567f, 1);
	func_274(&(uParam0->f_316[16 /*2*/]), 470f, 567f, 1);
	func_270(uParam0[0 /*9*/], 208f, 55f, 864f, 570f, 1);
	func_269(uParam0[0 /*9*/], 0, 0, 0, 255);
	func_270(uParam0[2 /*9*/], 384f, 224f, 256f, 256f, 0);
	func_269(uParam0[2 /*9*/], 255, 255, 255, 255);
	func_270(uParam0[3 /*9*/], 495f, 306f, 32f, 32f, 0);
	func_269(uParam0[3 /*9*/], 255, 255, 255, 255);
	func_270(uParam0[6 /*9*/], 258.5f, 482.5f, 80f, 80f, 1);
	func_269(uParam0[6 /*9*/], 255, 255, 255, 255);
	func_270(uParam0[5 /*9*/], 344f, 482.5f, 80f, 80f, 1);
	func_269(uParam0[5 /*9*/], 255, 255, 255, 255);
	func_270(uParam0[4 /*9*/], 429.5f, 482.5f, 80f, 80f, 1);
	func_269(uParam0[4 /*9*/], 255, 255, 255, 255);
	func_264(&(uParam0->f_420[1 /*8*/]), 257f, 119f, 254f, 5f, 1);
	func_263(&(uParam0->f_420[1 /*8*/]), 70, 70, 130, 255);
	func_264(&(uParam0->f_420[0 /*8*/]), 257f, 124f, 254f, 25f, 1);
	func_263(&(uParam0->f_420[0 /*8*/]), 255, 255, 255, 255);
	func_264(&(uParam0->f_420[2 /*8*/]), 257f, 159f, 254f, 133f, 1);
	func_262(&(uParam0->f_420[2 /*8*/]), 117, 1);
	func_264(&(uParam0->f_420[3 /*8*/]), 257f, 294f, 254f, 25f, 1);
	func_262(&(uParam0->f_420[3 /*8*/]), 117, 1);
	func_264(&(uParam0->f_420[4 /*8*/]), 257f, 321f, 254f, 25f, 1);
	func_262(&(uParam0->f_420[4 /*8*/]), 117, 1);
	func_264(&(uParam0->f_420[5 /*8*/]), 257f, 348f, 254f, 25f, 1);
	func_262(&(uParam0->f_420[5 /*8*/]), 117, 1);
	func_264(&(uParam0->f_420[6 /*8*/]), 257f, 375f, 254f, 25f, 1);
	func_262(&(uParam0->f_420[6 /*8*/]), 117, 1);
	func_264(&(uParam0->f_420[7 /*8*/]), 257f, 402f, 254f, 25f, 1);
	func_262(&(uParam0->f_420[7 /*8*/]), 117, 1);
	func_264(&(uParam0->f_420[8 /*8*/]), 257f, 429f, 254f, 52f, 1);
	func_262(&(uParam0->f_420[8 /*8*/]), 117, 1);
	func_264(&(uParam0->f_420[11 /*8*/]), 257f, 483f, 83f, 84f, 1);
	func_262(&(uParam0->f_420[11 /*8*/]), 117, 1);
	func_264(&(uParam0->f_420[12 /*8*/]), 342f, 483f, 84f, 84f, 1);
	func_262(&(uParam0->f_420[12 /*8*/]), 117, 1);
	func_264(&(uParam0->f_420[13 /*8*/]), 428f, 483f, 83f, 84f, 1);
	func_262(&(uParam0->f_420[13 /*8*/]), 117, 1);
	func_264(&(uParam0->f_420[14 /*8*/]), 428f, 564f, 83f, 25f, 1);
	func_262(&(uParam0->f_420[14 /*8*/]), 107, 1);
	func_264(&(uParam0->f_420[15 /*8*/]), 342f, 564f, 84f, 25f, 1);
	func_262(&(uParam0->f_420[15 /*8*/]), 108, 1);
	func_264(&(uParam0->f_420[16 /*8*/]), 257f, 564f, 83f, 25f, 1);
	func_262(&(uParam0->f_420[16 /*8*/]), 109, 1);
	uParam0->f_986 = 1;
}

void func_262(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0x954894782056D6CB(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_4 = uVar0;
	uParam0->f_5 = uVar1;
	uParam0->f_6 = uVar2;
	if (bParam2)
	{
		uParam0->f_7 = uVar3;
	}
}

void func_263(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	uParam0->f_4 = iParam1;
	uParam0->f_5 = iParam2;
	uParam0->f_6 = iParam3;
	uParam0->f_7 = iParam4;
}

void func_264(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, bool bParam5)
{
	func_268(uParam0, fParam3, fParam4);
	func_265(uParam0, fParam1, fParam2, bParam5);
}

void func_265(var uParam0, float fParam1, float fParam2, bool bParam3)
{
	*uParam0 = func_267(fParam1, 1280);
	uParam0->f_1 = func_266(fParam2, 720);
	if (bParam3)
	{
		*uParam0 = (*uParam0 + (uParam0->f_2 / 2f));
		uParam0->f_1 = (uParam0->f_1 + (uParam0->f_3 / 2f));
	}
}

float func_266(float fParam0, int iParam1)
{
	var uVar0;
	
	if (iParam1 == 0)
	{
		unk_0x22D0D3B91B10E6E4(&uVar0, &iParam1);
	}
	return (fParam0 / IntToFloat(iParam1));
}

float func_267(float fParam0, int iParam1)
{
	var uVar0;
	
	if (iParam1 == 0)
	{
		unk_0x22D0D3B91B10E6E4(&iParam1, &uVar0);
	}
	return (fParam0 / IntToFloat(iParam1));
}

void func_268(var uParam0, float fParam1, float fParam2)
{
	uParam0->f_2 = func_267(fParam1, 1280);
	uParam0->f_3 = func_266(fParam2, 720);
}

void func_269(float fParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	fParam0->f_4 = iParam1;
	fParam0->f_5 = iParam2;
	fParam0->f_6 = iParam3;
	fParam0->f_7 = iParam4;
}

void func_270(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, bool bParam5)
{
	func_272(fParam0, fParam3, fParam4);
	func_271(fParam0, fParam1, fParam2, bParam5);
}

void func_271(var uParam0, float fParam1, float fParam2, bool bParam3)
{
	*uParam0 = func_267(fParam1, 1280);
	uParam0->f_1 = func_266(fParam2, 720);
	if (bParam3)
	{
		*uParam0 = (*uParam0 + (uParam0->f_2 / 2f));
		uParam0->f_1 = (uParam0->f_1 + (uParam0->f_3 / 2f));
	}
}

void func_272(var uParam0, float fParam1, float fParam2)
{
	uParam0->f_2 = func_267(fParam1, 1280);
	uParam0->f_3 = func_266(fParam2, 720);
}

float func_273(float fParam0, int iParam1, bool bParam2)
{
	var uVar0;
	float fVar1;
	
	if (iParam1 == 0)
	{
		unk_0x22D0D3B91B10E6E4(&iParam1, &uVar0);
	}
	fVar1 = (fParam0 * IntToFloat(iParam1));
	if (bParam2)
	{
		return unk_0xBBDA792448DB5A89(unk_0xF2DB717A73826179(fVar1));
	}
	return fVar1;
}

void func_274(var uParam0, float fParam1, float fParam2, bool bParam3)
{
	*uParam0 = func_267(fParam1, 1280);
	uParam0->f_1 = func_266(fParam2, 720);
	if (!bParam3)
	{
	}
}

void func_275(var uParam0)
{
	func_296(uParam0, 0);
	func_295(&(uParam0->f_11), 0);
	func_294(&(uParam0->f_66), 0);
	func_293(&(uParam0->f_77), 0);
	func_292(&(uParam0->f_33), 0);
	func_291(&(uParam0->f_44), 0);
	func_290(&(uParam0->f_55), 0);
	func_289(&(uParam0->f_143), 0);
	func_288(&(uParam0->f_22), 0);
	func_287(&(uParam0->f_154), 0);
	func_286(&(uParam0->f_88), 0, 0);
	func_285(&(uParam0->f_99), 0, 5);
	func_284(&(uParam0->f_110), 0);
	func_283(&(uParam0->f_121), 0);
	func_282(&(uParam0->f_132), 0);
	func_281(&(uParam0->f_165), 0);
	func_280(&(uParam0->f_176), 0);
	func_279(&(uParam0->f_187), 0);
	func_278(&(uParam0->f_198), 0);
	func_277(&(uParam0->f_209), 0);
	func_276(&(uParam0->f_220), 0);
}

void func_276(var uParam0, int iParam1)
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

void func_277(var uParam0, int iParam1)
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

void func_278(var uParam0, int iParam1)
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

void func_279(var uParam0, int iParam1)
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

void func_280(var uParam0, int iParam1)
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

void func_281(var uParam0, int iParam1)
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

void func_282(var uParam0, int iParam1)
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

void func_283(var uParam0, int iParam1)
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

void func_284(var uParam0, int iParam1)
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

void func_285(var uParam0, int iParam1, int iParam2)
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

void func_286(var uParam0, int iParam1, int iParam2)
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

void func_287(var uParam0, int iParam1)
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

void func_288(var uParam0, int iParam1)
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

void func_289(var uParam0, int iParam1)
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

void func_290(var uParam0, int iParam1)
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

void func_291(var uParam0, int iParam1)
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

void func_292(var uParam0, int iParam1)
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

void func_293(var uParam0, int iParam1)
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

void func_294(var uParam0, int iParam1)
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

void func_295(var uParam0, int iParam1)
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

void func_296(var uParam0, int iParam1)
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

void func_297(var uParam0)
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

void func_298(char* sParam0, int iParam1)
{
	unk_0x2202872EA73499C3(sParam0);
	unk_0xF764171B43EBA5E4(0, 0, 1, iParam1);
}

int func_299(var uParam0)
{
	func_304();
	switch (iLocal_2334)
	{
		case 0:
			func_10(uParam0);
			func_303(&uLocal_2329, 3);
			iLocal_2334 = 1;
			break;
		
		case 1:
			if (func_2(uParam0, 1f))
			{
				func_300(&uLocal_2329, 1, 0, 1, 3, 1, 0, 0);
				iLocal_2334 = 2;
			}
			break;
		
		case 2:
			if (func_300(&uLocal_2329, 0, 0, 1, 3, 1, 0, 0))
			{
				return 0;
			}
			break;
			return 1;
	}
	return 1;
}

int func_300(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
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
		func_302(&(uParam0->f_2), 1);
	}
	if (!func_3(&(uParam0->f_2)))
	{
		func_11(&(uParam0->f_2));
	}
	unk_0x31B38BBC4423BEAF(1);
	unk_0xC1C40A3B8772D9BA(*uParam0, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 100, 0);
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
					if (func_357(uParam0->f_1, 1))
					{
						func_329(&(uParam0->f_1), 8);
						unk_0x954894782056D6CB(18, &iVar5, &iVar6, &iVar7, &uVar8);
						unk_0x76F4FB5EFF5BDED5(*uParam0, "SET_MESSAGE");
						func_155("CNTDWN_GO");
						unk_0x22DD5585E00B80C3(iVar5);
						unk_0x22DD5585E00B80C3(iVar6);
						unk_0x22DD5585E00B80C3(iVar7);
						unk_0xD6F1BD29497A51C8(true);
						unk_0xE2B30EB9B14EEAB2();
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
	if (!func_357(uParam0->f_1, 8))
	{
		if (iVar9 >= -3 && !func_357(uParam0->f_1, 1))
		{
			func_329(&(uParam0->f_1), 1);
			unk_0x929C3CBA660376D5(-1, sVar0, sVar2, 1);
			func_303(uParam0, iVar9);
		}
		else if (iVar9 >= -2 && !func_357(uParam0->f_1, 2))
		{
			func_329(&(uParam0->f_1), 2);
			unk_0x929C3CBA660376D5(-1, sVar0, sVar2, 1);
			func_303(uParam0, iVar9);
		}
		else if (iVar9 >= -1 && !func_357(uParam0->f_1, 4))
		{
			func_329(&(uParam0->f_1), 4);
			unk_0x929C3CBA660376D5(-1, sVar0, sVar2, 1);
			func_303(uParam0, iVar9);
		}
		else if (iVar9 >= -1 && !func_357(uParam0->f_1, 16))
		{
			if (unk_0x36E1A96E1D63ED91((func_5(&(uParam0->f_2)) - IntToFloat(iParam4))) < 0.65f)
			{
				if (bParam5 || bParam6)
				{
					func_329(&(uParam0->f_1), 16);
					unk_0x929C3CBA660376D5(-1, sVar1, sVar2, 1);
				}
			}
		}
		else if (iVar9 >= 0 && !func_357(uParam0->f_1, 8))
		{
			if (!bParam5 && !bParam6)
			{
				unk_0x929C3CBA660376D5(-1, sVar1, sVar2, 1);
			}
			func_329(&(uParam0->f_1), 8);
			unk_0x954894782056D6CB(18, &iVar11, &iVar12, &iVar13, &uVar14);
			unk_0x76F4FB5EFF5BDED5(*uParam0, "SET_MESSAGE");
			func_155("CNTDWN_GO");
			unk_0x22DD5585E00B80C3(iVar11);
			unk_0x22DD5585E00B80C3(iVar12);
			unk_0x22DD5585E00B80C3(iVar13);
			unk_0xD6F1BD29497A51C8(true);
			unk_0xE2B30EB9B14EEAB2();
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
	if ((iParam2 && func_301()) || iVar4 > 5)
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

int func_301()
{
	if (unk_0xC83C302702976DCB())
	{
		return 0;
	}
	if (unk_0x02EA7C5633421A0F(0, 18) || unk_0x02EA7C5633421A0F(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_302(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xD2A9C3F486236CC5(uParam0, 4);
	}
	else
	{
		unk_0x62148293B793073B(uParam0, 4);
	}
	if (unk_0xB03A1684359C50A1(*uParam0, 4))
	{
	}
}

void func_303(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	unk_0x954894782056D6CB(12, &iVar0, &iVar1, &iVar2, &uVar3);
	unk_0x76F4FB5EFF5BDED5(*uParam0, "SET_MESSAGE");
	unk_0x70A9E4720D71C2D5(-1);
	unk_0x0ECBA72FAFCEBA59("NUMBER");
	unk_0x3A12001DBF78DC62(unk_0x18DD02B781D4AD2F(iParam1));
	unk_0xC30401186AC91B01();
	unk_0x22DD5585E00B80C3(iVar0);
	unk_0x22DD5585E00B80C3(iVar1);
	unk_0x22DD5585E00B80C3(iVar2);
	unk_0xD6F1BD29497A51C8(true);
	unk_0xE2B30EB9B14EEAB2();
}

void func_304()
{
	struct<6> Var0;
	int iVar6;
	
	iVar6 = Global_103581;
	func_305(Var0, 0, 0, 0, 0, iVar6);
}

void func_305(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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
	
	if (Global_71106 != 6)
	{
		if (Global_71108 == -1)
		{
			if (func_319(1, Param0))
			{
				if (Global_71109 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_29 > fVar0)
				{
					Global_71108 = unk_0x5AFB8ED811F05E4D();
					Local_30 = { unk_0xE267A67F10EB9BBA(15) };
					fLocal_29 = 0f;
				}
				else
				{
					fLocal_29 = (fLocal_29 + unk_0x64031EF2AE5F9603());
				}
			}
			else
			{
				fLocal_29 = 0f;
			}
		}
		else
		{
			if (!func_319(0, Param0))
			{
				Global_71108 = (unk_0x5AFB8ED811F05E4D() - 9000);
			}
			unk_0xE05212008FE9A018(7);
			unk_0xE05212008FE9A018(6);
			unk_0xE05212008FE9A018(8);
			unk_0xE05212008FE9A018(9);
			iVar1 = (unk_0x5AFB8ED811F05E4D() - Global_71108);
			if (iVar1 < 9000 && !unk_0xEC0ECEF2AF3FDA8D())
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
				switch (Global_71106)
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
				unk_0x09EF2EB55114981C(82, 66);
				unk_0x03FBCA33C223558B(1);
				unk_0xA3F605DDB63EE4B8(2);
				iVar12 = func_162();
				if (Global_71109 == 1 && Global_71107 == 62)
				{
					iVar12 = Global_104551.f_2353.f_539.f_4302;
				}
				switch (iVar12)
				{
					case 0:
						unk_0x954894782056D6CB(143, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 1:
						unk_0x954894782056D6CB(144, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 2:
						unk_0x954894782056D6CB(145, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					default:
						iVar8 = 240;
						iVar9 = 200;
						iVar10 = 80;
				}
				unk_0xE14EBFD640A207D8(iVar8, iVar9, iVar10, iVar2);
				unk_0x632C4C6180AD48B8();
				Var4 = { func_308(Global_71107, Global_71109, iParam10) };
				if (fVar7 == -0.014f)
				{
				}
				unk_0xBECA8293AEA680BD(fVar6, fVar7, 0f, 0.01f);
				unk_0x61EA61920DAA51B8(0.67f, 0.67f);
				if (!unk_0x33CE899911FC2AD8() && !unk_0x01644127B7400345())
				{
					fLocal_34 = 0.14f;
				}
				else
				{
					fLocal_34 = 0.17f;
				}
				if (fVar7 == -0.014f)
				{
					if (func_307(&Var4) > fLocal_34)
					{
						if (unk_0xA9CC0DE677D82334(15))
						{
							unk_0x83B36F3602F99423(15, Local_30.f_0, (Local_30.f_1 + fLocal_33));
							Global_71111 = 1;
						}
					}
				}
				unk_0xD74B746610C55548(&Var4);
				unk_0x5D7608D88BED248F(fVar6, fVar7, 0);
				unk_0x3E233EDF605C23C0();
				if (Global_71110 == 1)
				{
					func_306();
					fLocal_29 = 0f;
				}
			}
			else
			{
				func_306();
				fLocal_29 = 0f;
			}
		}
	}
}

void func_306()
{
	if (Global_71106 != 6)
	{
	}
	if (Global_71111)
	{
		unk_0xB9C0BA93B50CE575(15);
		Global_71111 = 0;
		Global_17301.f_7931 = 0;
	}
	Global_71106 = 6;
	Global_71108 = -1;
	Global_71107 = -1;
}

float func_307(var uParam0)
{
	unk_0xA5738E964D2E2159(uParam0);
	return unk_0x1BD3A365A7E4BA14(1);
}

struct<2> func_308(int iParam0, int iParam1, int iParam2)
{
	struct<2> Var0;
	int iVar2;
	
	StringCopy(&Var0, "", 8);
	switch (iParam1)
	{
		case 1:
			Var0 = { func_318(iParam0) };
			break;
		
		case 7:
			Var0 = { func_316(iParam0) };
			break;
		
		case 3:
			iVar2 = iParam0;
			switch (iVar2)
			{
				case 0:
					Var0 = { func_315(iParam2) };
					break;
				
				case 8:
					Var0 = { func_314(iParam2) };
					break;
				
				case 7:
					Var0 = { func_313(iParam2) };
					break;
				
				case 10:
					Var0 = { func_312(iParam2) };
					break;
				
				case 5:
					Var0 = { func_311(iParam2) };
					break;
				
				case 4:
					Var0 = { func_310(iParam2) };
					break;
				
				default:
					StringCopy(&Var0, func_309(iVar2), 8);
					break;
			}
			break;
		
		default:
			break;
	}
	return Var0;
}

char* func_309(int iParam0)
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

struct<2> func_310(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0xFAFFA408239A026B(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGOR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_311(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0xFAFFA408239A026B(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGFS_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_312(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0xFAFFA408239A026B(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSP_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_313(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0xFAFFA408239A026B(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_314(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0xFAFFA408239A026B(&cVar2) || iParam0 == 3)
	{
	}
	else
	{
		StringCopy(&Var0, "MGCR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_315(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0xFAFFA408239A026B(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGBJ_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_316(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_317(iParam0) };
	if (unk_0xFAFFA408239A026B(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_317(int iParam0)
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

struct<2> func_318(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &(Global_83762[iParam0 /*34*/].f_8), 8);
	if (iParam0 == 90)
	{
		switch (Global_104551.f_9055.f_99.f_205[7])
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

int func_319(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	if (((!func_321(0) || Global_71121) || Global_71110 == 1) || !unk_0xC8AB6A5E6C1E6613())
	{
		return 0;
	}
	switch (Global_71106)
	{
		case 0:
			if (unk_0x9D39145AD645E383(&uParam1, "NONE") || unk_0xFAFFA408239A026B(&uParam1))
			{
				Global_71106 = 3;
			}
			else
			{
				Global_71106 = 1;
			}
			break;
		
		case 1:
			if (unk_0xF76283B558B032AE())
			{
				Global_71106 = 2;
			}
			break;
		
		case 2:
			if (unk_0xEAE1A41FBC3984B1())
			{
				Global_71106 = 4;
				return 1;
			}
			else if (!unk_0x61F9977B378C43BF())
			{
				Global_71106 = 3;
			}
			break;
		
		case 3:
			if (unk_0xEAE1A41FBC3984B1())
			{
			}
			else
			{
				Global_71106 = 5;
				return 1;
			}
			break;
		
		case 4:
			if (unk_0xEAE1A41FBC3984B1())
			{
				return 1;
			}
			else if (iParam0 == 1)
			{
				Global_71106 = 5;
			}
			break;
		
		case 5:
			if ((unk_0xEAE1A41FBC3984B1() || func_140(0)) || func_320(1))
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

bool func_320(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17162.f_4 && Global_17162.f_104 == 4);
	}
	return Global_17162.f_4;
}

int func_321(int iParam0)
{
	if (Global_35859 == 15)
	{
		return 0;
	}
	if (func_322(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_322(int iParam0)
{
	return func_323(iParam0, Global_35859);
}

int func_323(int iParam0, int iParam1)
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

void func_324(var uParam0)
{
	char cVar0[16];
	int iVar4;
	
	StringCopy(&cVar0, "Offroad_", 16);
	StringIntConCat(&cVar0, Local_51.f_10 + 1, 16);
	func_11(&(uParam0->f_3));
	uParam0->f_358[0 /*189*/].f_15 = 0f;
	iLocal_2109 = 0;
	unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
	if (Local_51.f_0 == 0)
	{
		unk_0x36643EAE6212D16F(unk_0x8CFC7D6E1DA5D304(), 1);
	}
	uParam0->f_1 = 1;
	func_11(&uLocal_2434);
	iVar4 = 0;
	while (iVar4 < uParam0->f_13)
	{
		func_325(&(uParam0->f_358[iVar4 /*189*/]));
		if (Local_51.f_0 != 1)
		{
			if (iVar4 != 0)
			{
				func_76(uParam0, uParam0->f_358[iVar4 /*189*/].f_8, uParam0->f_358[iVar4 /*189*/].f_9, uParam0->f_27[uParam0->f_358[iVar4 /*189*/].f_11 /*10*/], uParam0->f_27[uParam0->f_358[iVar4 /*189*/].f_11 /*10*/].f_7, iVar4);
			}
		}
		else if (bLocal_2442)
		{
			if (iVar4 > 0)
			{
				if (!unk_0x74C2FE037DFC8B4A(uParam0->f_358[iVar4 /*189*/].f_8, 0) && !unk_0x74C2FE037DFC8B4A(uParam0->f_358[iVar4 /*189*/].f_9, 0))
				{
					if (iVar4 == 1 && Local_51.f_10 == 0)
					{
						StringConCat(&cVar0, "a", 16);
					}
					unk_0xAF7956D9C892AC2E(uParam0->f_358[iVar4 /*189*/].f_8, uParam0->f_358[iVar4 /*189*/].f_9, &cVar0, 262144, 0, 8, -1, unk_0xB64E14DD74D484C1(uParam0->f_358[iVar4 /*189*/].f_9), 0, 1073741824);
				}
			}
		}
		else if (iVar4 != 0)
		{
			func_76(uParam0, uParam0->f_358[iVar4 /*189*/].f_8, uParam0->f_358[iVar4 /*189*/].f_9, uParam0->f_27[uParam0->f_358[iVar4 /*189*/].f_11 /*10*/], uParam0->f_27[uParam0->f_358[iVar4 /*189*/].f_11 /*10*/].f_7, iVar4);
		}
		iVar4++;
	}
	if (unk_0xC4B84EB67F78C1F0(uParam0->f_358[0 /*189*/].f_9, 0))
	{
		unk_0xA0611ED281CB47AA(uParam0->f_358[0 /*189*/].f_9, 1);
		if (!unk_0xFAFFA408239A026B(sLocal_2279))
		{
			unk_0x2014AD5B93F436B5(sLocal_2279);
			unk_0x0C479E1994DA8B57(uParam0->f_358[0 /*189*/].f_9, sLocal_2279);
		}
	}
}

void func_325(var uParam0)
{
	if (!unk_0x74C2FE037DFC8B4A(uParam0->f_9, 0))
	{
		if (!unk_0x74C2FE037DFC8B4A(uParam0->f_8, 0))
		{
			if (unk_0xCD9EC66924076C1B(uParam0->f_9))
			{
				unk_0xF2106D7D1A77DBA8(uParam0->f_9);
			}
			unk_0x40E2910BAF39B1C7(uParam0->f_8, 1);
		}
	}
	uParam0->f_11 = 0;
	if (!unk_0x74C2FE037DFC8B4A(uParam0->f_9, 0))
	{
		if (!unk_0x422717A3330EA45D(uParam0->f_22))
		{
			unk_0x0F3F86C855582784(uParam0->f_9, 1, 1, 0);
		}
	}
}

var func_326()
{
	return unk_0xBD7D7877C82BE42F("MP_BIG_MESSAGE_FREEMODE");
}

void func_327(var uParam0)
{
	uParam0->f_12 = uParam0->f_12;
}

void func_328(var uParam0)
{
	int iVar0;
	
	if (unk_0xA126D857D0E10968(unk_0x0A91D180DDC7A1B8()))
	{
		unk_0xF70DE7344EBF0825(unk_0x0A91D180DDC7A1B8(), 0, 512);
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		func_108(&(uParam0->f_358[iVar0 /*189*/]), 60f, 1);
		iVar0++;
	}
}

void func_329(int iParam0, int iParam1)
{
	func_60(iParam0, iParam1);
}

int func_330(var uParam0, int iParam1, bool bParam2)
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
	if (!func_336(&(uParam0->f_27[iParam1 /*10*/]), iVar3, fVar4, iParam1, uParam0->f_12))
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
				if (func_357(uParam0->f_27[8 /*10*/].f_9, 4))
				{
					func_355(&(uParam0->f_27[8 /*10*/].f_9), 4);
				}
			}
		}
		if (iParam1 > 0)
		{
			Var8 = { uParam0->f_27[(iParam1 - 1) /*10*/] };
		}
		if (!func_331(Var8, &(uParam0->f_27[iParam1 /*10*/]), Var5, 16f))
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
			if (!func_331(uParam0->f_27[iParam1 /*10*/], &(uParam0->f_27[iParam1 + 1 /*10*/]), Var0, 16f))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_331(struct<3> Param0, var uParam3, struct<3> Param4, float fParam7)
{
	if (!func_332(Param0, uParam3, Param4, fParam7))
	{
		return 0;
	}
	return 1;
}

int func_332(struct<3> Param0, var uParam3, struct<3> Param4, var uParam7)
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
		uVar0 = func_334(uParam3->f_7, Param0, *uParam3, Param4);
		func_576(func_577(func_92()), &uVar1, &uVar2, &uVar3, &uVar4);
		uParam3->f_6 = unk_0x66A47E33F930D9E5(uVar0, *uParam3, Param4, uParam7, uVar1, uVar2, uVar3, func_91(*uParam3, 25, 200), 0);
	}
	else if (uParam3->f_7 == 3)
	{
		if (uParam3->f_8 == 2 || uParam3->f_8 == 3)
		{
			func_576(func_577(18), &iVar1, &iVar2, &iVar3, &uVar4);
			uParam3->f_6 = unk_0x66A47E33F930D9E5(func_333(uParam3->f_7, uParam3->f_8), *uParam3, Param4, uParam7, iVar1, iVar2, iVar3, func_91(*uParam3, 25, 200), 0);
		}
		else if (uParam3->f_8 == 1)
		{
			func_576(func_577(9), &iVar1, &iVar2, &iVar3, &uVar4);
			uParam3->f_6 = unk_0x66A47E33F930D9E5(func_333(uParam3->f_7, uParam3->f_8), *uParam3, Param4, uParam7, iVar1, iVar2, iVar3, func_91(*uParam3, 25, 200), 0);
		}
	}
	else
	{
		uParam3->f_6 = unk_0x66A47E33F930D9E5(func_333(uParam3->f_7, uParam3->f_8), *uParam3, Param4, uParam7, 254, 207, 12, func_91(*uParam3, 25, 200), 0);
	}
	if (uParam3->f_6 == 0)
	{
		return 0;
	}
	return 1;
}

int func_333(int iParam0, int iParam1)
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

int func_334(int iParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7)
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
	if (!func_335(Param1, 0f, 0f, 0f, 0))
	{
		Var0 = { Param1 - Param4 };
		Var3 = { Param7 - Param4 };
		fVar6 = unk_0x828D7620A6039793(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1);
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

bool func_335(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_336(var uParam0, int iParam1, float fParam2, int iParam3, int iParam4)
{
	if (!func_337(&(uParam0->f_5), *uParam0, iParam1, fParam2, iParam3, iParam4, uParam0->f_8))
	{
		return 0;
	}
	return 1;
}

int func_337(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7, int iParam8)
{
	func_83(uParam0);
	*uParam0 = unk_0x29F0B4D7EFF08BF6(Param1);
	if (!unk_0xE769D9B5158D0F11(*uParam0))
	{
		return 0;
	}
	if (iParam4 != -1)
	{
		unk_0xDC0EBFC7730AA226(*uParam0, iParam4);
	}
	unk_0x0590222010A36CE4(*uParam0, uParam5);
	unk_0x4925D19C5D509CE1(*uParam0, 4);
	if (iParam8 == 2 || iParam8 == 3)
	{
		unk_0x71925FF3194E84CE(*uParam0, 2);
	}
	if (iParam8 == 1)
	{
		unk_0x71925FF3194E84CE(*uParam0, 3);
	}
	if (iParam6 == (iParam7 - 1))
	{
		unk_0x262BA3D6F3CF3F59("GATEBLIPFIN");
		unk_0x732B30F79C8AF491(*uParam0);
	}
	else
	{
		if (iParam8 == 1)
		{
			unk_0x262BA3D6F3CF3F59("GATEBLIPINV");
		}
		else if (iParam8 == 2 || iParam8 == 3)
		{
			unk_0x262BA3D6F3CF3F59("GATEBLIPKNF");
		}
		else
		{
			unk_0x262BA3D6F3CF3F59("GATEBLIPDEF");
		}
		unk_0x732B30F79C8AF491(*uParam0);
	}
	return 1;
}

void func_338(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x74D144ED1523F85D(sParam0);
	unk_0x0ADA506C37566A2D(iParam1, 0);
}

int func_339(var uParam0)
{
	switch (uParam0->f_25)
	{
		case 0:
			func_136(1);
			unk_0x1E7BE791ACBDDC05("MPHUD", 0);
			Local_51.f_118 = func_352();
			switch (Local_51.f_0)
			{
				case 0:
					unk_0x1E7BE791ACBDDC05("SPRRaces", 0);
					unk_0x1E7BE791ACBDDC05("MPMedals_FEED", 0);
					break;
				
				case 1:
					unk_0x1E7BE791ACBDDC05("SPROffroad", 0);
					break;
				
				case 2:
					unk_0x1E7BE791ACBDDC05("Triathlon", 0);
					unk_0x1E7BE791ACBDDC05("MPMedals_FEED", 0);
					break;
			}
			uParam0->f_25 = 1;
			break;
		
		case 1:
			func_347(uParam0);
			uParam0->f_25 = 2;
			break;
		
		case 2:
			if (func_342(uParam0))
			{
				if (unk_0x1865CC0DAB5F6A86("MPHUD"))
				{
					if (unk_0x5C716BBF766E1C70(Local_51.f_118))
					{
						switch (Local_51.f_0)
						{
							case 0:
								if (unk_0x1865CC0DAB5F6A86("SPRRaces") && unk_0x1865CC0DAB5F6A86("MPMedals_FEED"))
								{
									uParam0->f_25 = 3;
								}
								break;
							
							case 1:
								if (unk_0x1865CC0DAB5F6A86("SPROffroad"))
								{
									uParam0->f_25 = 3;
								}
								break;
							
							case 2:
								if (unk_0x1865CC0DAB5F6A86("Triathlon") && unk_0x1865CC0DAB5F6A86("MPMedals_FEED"))
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
			unk_0x96A5886C14FA57E4(unk_0x8CFC7D6E1DA5D304());
			if (Local_51.f_10 == 0 && !uParam0->f_2)
			{
			}
			else
			{
				func_340(uParam0);
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
				if (unk_0x31F12808DC47A9E5(uParam0->f_358[0 /*189*/].f_9))
				{
					unk_0x73D7E57BF0ED7FEB(uParam0->f_358[0 /*189*/].f_9, 1);
				}
				if (!unk_0x8BDE5BE4E46BA35F())
				{
					unk_0x597B99EA7336BDBE(uParam0->f_358[0 /*189*/].f_16);
					unk_0xBD320BAA5701BEC0(uParam0->f_358[0 /*189*/].f_16, unk_0x9B40AD9E8738972C(uParam0->f_358[0 /*189*/].f_9), 5000f, 0);
				}
				if (unk_0x34CC31673AD34B53())
				{
					unk_0xC7BB901E267A910A();
					if (unk_0x31F12808DC47A9E5(uParam0->f_358[0 /*189*/].f_9))
					{
						unk_0x73D7E57BF0ED7FEB(uParam0->f_358[0 /*189*/].f_9, 0);
					}
					func_328(uParam0);
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

int func_340(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		if (!func_341(uParam0, iVar0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_341(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return 0;
	}
	if (iParam1 > 0)
	{
		return func_132(&(uParam0->f_358[iParam1 /*189*/]), 1);
	}
	return func_132(&(uParam0->f_358[iParam1 /*189*/]), 0);
}

int func_342(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		if (!func_343(uParam0, iVar0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_343(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return 0;
	}
	return func_344(&(uParam0->f_358[iParam1 /*189*/]));
}

int func_344(var uParam0)
{
	if (!func_346(uParam0) || !func_345(uParam0))
	{
		return 0;
	}
	return 1;
}

bool func_345(var uParam0)
{
	if (uParam0->f_22 == 0)
	{
		return 1;
	}
	return unk_0xEDFE27D1AEA0EA7F(uParam0->f_22);
}

bool func_346(var uParam0)
{
	if (uParam0->f_21 == 0)
	{
		return 0;
	}
	return unk_0xEDFE27D1AEA0EA7F(uParam0->f_21);
}

void func_347(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		func_348(uParam0, iVar0);
		iVar0++;
	}
}

void func_348(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return;
	}
	func_349(&(uParam0->f_358[iParam1 /*189*/]));
}

void func_349(var uParam0)
{
	func_351(uParam0);
	func_350(uParam0);
}

void func_350(var uParam0)
{
	if (uParam0->f_22 == 0)
	{
		return;
	}
	unk_0x9016574B77A748EE(uParam0->f_22);
}

void func_351(var uParam0)
{
	if (uParam0->f_21 == 0)
	{
		return;
	}
	unk_0x9016574B77A748EE(uParam0->f_21);
}

var func_352()
{
	return unk_0xBD7D7877C82BE42F("SC_LEADERBOARD");
}

int func_353(int iParam0)
{
	if (unk_0xC8AB6A5E6C1E6613())
	{
		unk_0xFF91FEC6E57575E4(iParam0);
	}
	else if (unk_0xEC0ECEF2AF3FDA8D())
	{
		return 1;
	}
	return 0;
}

void func_354()
{
	if (unk_0x5400DC5FAEBF30F0(uLocal_2078))
	{
		if (unk_0xEFEFF8C622C1C559(uLocal_2078))
		{
			unk_0xF5F744EF9F4DB21E(0, 0, 3000, 1, 0, 0);
			unk_0x2C535610856B3F4D(uLocal_2078, 0);
		}
		unk_0x13AD763DBD687842(uLocal_2078, 0);
	}
}

void func_355(int iParam0, int iParam1)
{
	func_356(iParam0, iParam1);
}

void func_356(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

bool func_357(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_358(var uParam0)
{
	if (!func_3(uParam0))
	{
		func_11(uParam0);
	}
}

void func_359()
{
	func_360(&uLocal_1582);
}

void func_360(var uParam0)
{
	if (uParam0->f_4 != 0)
	{
		func_366(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
	}
	if (((*uParam0)[0] != 0 || (*uParam0)[1] != 0) || (*uParam0)[2] != 0)
	{
		func_426(uParam0);
		func_365(uParam0);
		func_364(&Global_1839721);
	}
	if (Global_1835390.f_2708 != 0 || Global_1835390.f_3184)
	{
		func_362();
	}
	if (unk_0x36CC410474001FBC("LEADERBOARD_SCENE"))
	{
		unk_0xA11D9B06B99FE786("LEADERBOARD_SCENE");
	}
	if (unk_0xA1C84586015AE5DB())
	{
		func_361(&(Global_1840922.f_49));
	}
	Global_2512581.f_3935 = 0;
}

void func_361(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_362()
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
	func_363(&(Global_1835390.f_2780));
	func_361(&(Global_1835390.f_2823));
	Global_1835390.f_2825 = -1;
	Global_1835390.f_2826 = 0;
	func_361(&(Global_1835390.f_2827));
	Global_1835390.f_2829 = 0;
	func_361(&(Global_1835390.f_2830));
	Global_1835390.f_2832 = 0;
	Global_1835390.f_2780.f_28 = 0;
	Global_1835390.f_2780.f_27 = 0;
	Global_1835390.f_3184 = 0;
}

void func_363(var uParam0)
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

void func_364(var uParam0)
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
	func_361(&(Global_1835390.f_2830));
}

void func_365(var uParam0)
{
	int iVar0;
	struct<13> Var1;
	
	uParam0->f_246 = 0;
	uParam0->f_246.f_1 = -1;
	uParam0->f_246.f_2 = 0;
	func_361(&(uParam0->f_246.f_3));
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

void func_366(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = 0;
	*uParam1 = 0;
	Global_1835008 = 0;
	func_361(&(Global_1835008.f_1));
	unk_0xA81761EAC59012E4(*uParam2, uParam2->f_1, -1);
}

int func_367(var uParam0, var uParam1)
{
	if (!func_418())
	{
		return 0;
	}
	if (func_412(&bLocal_525, uParam0))
	{
		if (iLocal_527 || bLocal_526)
		{
			unk_0xDC38CC1E35B6A5D7("SPR_QT_PLANE_T", "SPR_QUIT_PLANE", 36, 0, false, -1, 0, 0, true, 0);
			if (!*uParam1)
			{
				if (iLocal_527)
				{
					if (func_3(&uLocal_522))
					{
						if (func_244(&uLocal_522, unk_0xBBDA792448DB5A89(0)))
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
					unk_0xE05212008FE9A018(9);
					unk_0xE05212008FE9A018(7);
					func_151(&(Local_51.f_119), 1128792064, 1, 0, 1, 1065353216);
				}
			}
		}
		else
		{
			*uParam1 = 0;
			func_372();
		}
		return 0;
	}
	if (bLocal_525)
	{
		func_371();
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			unk_0x5F1E15DC35404E1B(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), 1);
		}
	}
	else
	{
		Local_51.f_10 = -1;
	}
	func_368();
	if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		unk_0x5F1E15DC35404E1B(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), 1);
	}
	return 1;
}

void func_368()
{
	unk_0xEFF1F12403847394(1);
	unk_0x000ED7BEBF44F5EA(3, 1);
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
	}
	if (unk_0xD511F6E12C152681("MinigameTransitionIn"))
	{
		unk_0x605B63B87CCF606F("MinigameTransitionIn");
	}
	unk_0x9575CEFF222148A6("MinigameTransitionOut", 0, 0);
	iLocal_521 = 0;
	unk_0xDF94C6DB72E69D64(0);
	func_136(0);
	func_369();
}

void func_369()
{
	Global_14622 = 0;
	func_370();
}

void func_370()
{
	if (unk_0x85FDEF76CDBAD589())
	{
		unk_0x815093B4702C59D8();
		Global_16767 = 0;
		unk_0xBE97F4E2B659331B(1);
		Global_15756 = 6;
		return;
	}
}

void func_371()
{
	switch (Global_103581)
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

void func_372()
{
	unk_0x3F19B70555683951();
	func_373(&uLocal_595);
}

void func_373(var uParam0)
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
	
	if (!bLocal_594)
	{
		if (!unk_0xC339C5C5B5E8BC5B())
		{
			unk_0x976B98A883F3C14B(1);
		}
	}
	unk_0xE05212008FE9A018(9);
	unk_0xE05212008FE9A018(7);
	func_151(&(Local_51.f_119), 1128792064, 1, 0, 1, 1065353216);
	func_404("Shared", "BGGradient_32x1024", uParam0[0 /*9*/], 0, 0, 1, 0);
	func_399(uParam0->f_420[0 /*8*/], 0, 0);
	func_399(uParam0->f_420[1 /*8*/], 0, 0);
	func_399(uParam0->f_420[2 /*8*/], 0, 0);
	func_399(uParam0->f_420[3 /*8*/], 0, 0);
	func_399(uParam0->f_420[4 /*8*/], 0, 0);
	func_399(uParam0->f_420[5 /*8*/], 0, 0);
	func_399(uParam0->f_420[6 /*8*/], 0, 0);
	func_399(uParam0->f_420[7 /*8*/], 0, 0);
	func_399(uParam0->f_420[8 /*8*/], 0, 0);
	func_399(uParam0->f_420[6 /*8*/], 0, 0);
	unk_0x31B38BBC4423BEAF(1);
	func_398(&(uParam0->f_741.f_165));
	func_397(&(uParam0->f_316[0 /*2*/]), &(uParam0->f_741.f_165), "SPR_TITLE", 0);
	unk_0x31B38BBC4423BEAF(4);
	func_395(&(uParam0->f_741.f_176));
	func_394(&(uParam0->f_741.f_176), &(uParam0->f_420[0 /*8*/]), 0f, 0f);
	func_392(&(uParam0->f_316[1 /*2*/]), &(uParam0->f_741.f_176), "SPR_CHALLENGES", 1, 0);
	func_391(&(uParam0->f_741.f_176));
	func_394(&(uParam0->f_741.f_176), &(uParam0->f_420[1 /*8*/]), 0f, 0f);
	func_392(&(uParam0->f_316[2 /*2*/]), &(uParam0->f_741.f_176), "SPR_INFO", 1, 0);
	func_391(&(uParam0->f_741.f_176));
	func_394(&(uParam0->f_741.f_176), &(uParam0->f_420[5 /*8*/]), 0f, 0f);
	func_392(&(uParam0->f_316[3 /*2*/]), &(uParam0->f_741.f_176), "SPR_AWARD_TITLE", 1, 0);
	func_391(&(uParam0->f_741.f_176));
	func_398(&(uParam0->f_741.f_198));
	iVar0 = 0;
	iVar1 = 9;
	iVar2 = 17;
	iVar3 = 1;
	func_399(uParam0->f_420[16 /*8*/], 0, 0);
	func_399(uParam0->f_420[17 /*8*/], 0, 0);
	func_399(uParam0->f_420[18 /*8*/], 0, 0);
	func_399(uParam0->f_420[19 /*8*/], 0, 0);
	func_399(uParam0->f_420[20 /*8*/], 0, 0);
	func_399(uParam0->f_420[21 /*8*/], 0, 0);
	bVar4 = true;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 < 5)
		{
			Var14 = { uParam0->f_316[iVar2 /*2*/] };
			if (Global_104551.f_19013.f_6[iVar0] > 0f)
			{
				iLocal_531[iVar0] = unk_0x11E019C8F43ACC8A(Global_104551.f_19013.f_6[iVar0]);
			}
			else
			{
				iLocal_531[iVar0] = -1;
			}
			if (iVar0 == Global_103581)
			{
				func_262(&(uParam0->f_420[iVar1 /*8*/]), 1, 1);
				func_399(uParam0->f_420[iVar1 /*8*/], 0, 0);
				func_395(&(uParam0->f_741.f_198));
				switch (Global_104551.f_19013.f_12[iVar0 /*8*/].f_4)
				{
					case 2:
						break;
					
					case 1:
						if (iVar0 < 5)
						{
							if (Global_104551.f_19013.f_6[iVar0] <= 0f)
							{
								func_270(&Var5, 269f, 0f, 32f, 32f, 0);
								func_269(&Var5, 255, 255, 255, 255);
								Var5.f_1 = (uParam0->f_316[iVar2 /*2*/].f_1 + fLocal_538);
								Var14.f_0 = (Var5.f_0 + fLocal_537);
								if (!bLocal_594)
								{
									func_390(&Var5, 0);
								}
								func_389(&Var5, 1);
								func_404("Shared", "NewStar_32", &Var5, 0, 0, 5, 0);
								if (!bLocal_594)
								{
									func_388(&Var14, &(uParam0->f_741.f_198));
								}
							}
						}
						break;
					
					default:
						bVar4 = false;
						break;
				}
				if (iVar0 == Global_103581)
				{
					func_395(&(uParam0->f_741.f_198));
				}
				func_391(&(uParam0->f_741.f_198));
				func_397(&Var14, &(uParam0->f_741.f_198), &(Local_51.f_24[iVar0 /*8*/]), 0);
				func_398(&(uParam0->f_741.f_198));
				func_389(uParam0[iVar3 /*9*/], 1);
				if (bVar4)
				{
					func_398(&(uParam0->f_741.f_198));
				}
				else
				{
					func_398(&(uParam0->f_741.f_198));
				}
				func_398(&(uParam0->f_741.f_198));
				if (IntToFloat(iLocal_531[iVar0]) <= Local_51.f_106[iVar0] && iLocal_531[iVar0] > 1)
				{
					func_389(uParam0[iVar3 /*9*/], 1);
					func_389(uParam0[9 /*9*/], 1);
					func_404("SPRRaces", "FlightStunt_Gold_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					func_394(&(uParam0->f_741.f_198), &(uParam0->f_420[16 /*8*/]), 0.0047f, 0.0055f);
					unk_0x89BA3A5009D05B43(1);
					func_397(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_198), "SPR_sGOLD", 0);
					unk_0x89BA3A5009D05B43(0);
					func_391(&(uParam0->f_741.f_198));
				}
				else if (IntToFloat(iLocal_531[iVar0]) <= (((Local_51.f_112[iVar0] - Local_51.f_106[iVar0]) / 2f) + Local_51.f_106[iVar0]) && IntToFloat(iLocal_531[iVar0]) > Local_51.f_106[iVar0])
				{
					func_389(uParam0[iVar3 /*9*/], 1);
					func_389(uParam0[9 /*9*/], 1);
					func_404("SPRRaces", "FlightStunt_Silver_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					func_394(&(uParam0->f_741.f_198), &(uParam0->f_420[16 /*8*/]), 0.0047f, 0.0055f);
					unk_0x89BA3A5009D05B43(1);
					func_397(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_198), "SPR_sSILVER", 0);
					unk_0x89BA3A5009D05B43(0);
					func_391(&(uParam0->f_741.f_198));
				}
				else if (IntToFloat(iLocal_531[iVar0]) <= Local_51.f_112[iVar0] && IntToFloat(iLocal_531[iVar0]) > (((Local_51.f_112[iVar0] - Local_51.f_106[iVar0]) / 2f) + Local_51.f_106[iVar0]))
				{
					func_389(uParam0[iVar3 /*9*/], 1);
					func_389(uParam0[9 /*9*/], 1);
					func_404("SPRRaces", "FlightStunt_Bronze_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					func_394(&(uParam0->f_741.f_198), &(uParam0->f_420[16 /*8*/]), 0.0047f, 0.0055f);
					unk_0x89BA3A5009D05B43(1);
					func_397(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_198), "SPR_sBRONZE", 0);
					unk_0x89BA3A5009D05B43(0);
					func_391(&(uParam0->f_741.f_198));
				}
				else if (IntToFloat(iLocal_531[iVar0]) > Local_51.f_112[iVar0] || iLocal_531[iVar0] == -1)
				{
					func_389(uParam0[iVar3 /*9*/], 1);
					func_389(uParam0[9 /*9*/], 1);
					func_394(&(uParam0->f_741.f_198), &(uParam0->f_420[16 /*8*/]), 0.0047f, 0.0055f);
					unk_0x89BA3A5009D05B43(1);
					func_397(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_198), "SC_LB_EMPTY", 0);
					unk_0x89BA3A5009D05B43(0);
					func_404("SPRRaces", "Empty_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					func_387(uParam0[iVar3 /*9*/]);
				}
				if (IntToFloat(iLocal_531[iVar0]) <= Local_51.f_106[iVar0] && !iLocal_531[iVar0] == -1)
				{
					func_389(uParam0[13 /*9*/], 1);
				}
				else
				{
					(uParam0[13 /*9*/])->f_7 = unk_0xF2DB717A73826179((255f * 0.3f));
				}
				if (IntToFloat(iLocal_531[iVar0]) <= (((Local_51.f_112[iVar0] - Local_51.f_106[iVar0]) / 2f) + Local_51.f_106[iVar0]) && !iLocal_531[iVar0] == -1)
				{
					func_389(uParam0[12 /*9*/], 1);
				}
				else
				{
					(uParam0[12 /*9*/])->f_7 = unk_0xF2DB717A73826179((255f * 0.3f));
				}
				if (IntToFloat(iLocal_531[iVar0]) <= Local_51.f_112[iVar0] && !iLocal_531[iVar0] == -1)
				{
					func_389(uParam0[11 /*9*/], 1);
				}
				else
				{
					(uParam0[11 /*9*/])->f_7 = unk_0xF2DB717A73826179((255f * 0.3f));
				}
				func_404("SPRRaces", "FlightStunt_Bronze_128", uParam0[11 /*9*/], 0, 0, 5, 0);
				func_404("SPRRaces", "FlightStunt_Silver_128", uParam0[12 /*9*/], 0, 0, 5, 0);
				func_404("SPRRaces", "FlightStunt_Gold_128", uParam0[13 /*9*/], 0, 0, 5, 0);
				func_398(&(uParam0->f_741.f_198));
				if (Global_104551.f_19013.f_6[Global_103581] > 0f)
				{
					func_394(&(uParam0->f_741.f_198), &(uParam0->f_420[17 /*8*/]), 0.0047f, 0.0055f);
					unk_0x89BA3A5009D05B43(1);
					func_382(&(uParam0->f_316[9 /*2*/]), &(uParam0->f_741.f_198), unk_0xF34EE736CF047844((Global_104551.f_19013.f_6[Global_103581] * 1000f)), 6, "", 0, 1);
					unk_0x89BA3A5009D05B43(0);
					func_391(&(uParam0->f_741.f_198));
				}
				else
				{
					func_394(&(uParam0->f_741.f_198), &(uParam0->f_420[17 /*8*/]), 0.0047f, 0.0055f);
					unk_0x89BA3A5009D05B43(1);
					func_397(&(uParam0->f_316[9 /*2*/]), &(uParam0->f_741.f_198), "SC_LB_EMPTY", 0);
					unk_0x89BA3A5009D05B43(0);
					func_391(&(uParam0->f_741.f_198));
				}
				func_397(&(uParam0->f_316[6 /*2*/]), &(uParam0->f_741.f_198), "SPR_RTIME", 0);
				if (Local_51.f_18[Global_103581] > 0f)
				{
					func_394(&(uParam0->f_741.f_198), &(uParam0->f_420[18 /*8*/]), 0.0047f, 0.0055f);
					unk_0x89BA3A5009D05B43(1);
					func_382(&(uParam0->f_316[7 /*2*/]), &(uParam0->f_741.f_198), unk_0xF34EE736CF047844((Local_51.f_18[Global_103581] * 1000f)), 6, "", 0, 1);
					unk_0x89BA3A5009D05B43(0);
					func_391(&(uParam0->f_741.f_198));
					func_398(&(uParam0->f_741.f_198));
				}
				else
				{
					func_394(&(uParam0->f_741.f_198), &(uParam0->f_420[18 /*8*/]), 0.0047f, 0.0055f);
					unk_0x89BA3A5009D05B43(1);
					func_392(&(uParam0->f_316[7 /*2*/]), &(uParam0->f_741.f_198), "SC_LB_EMPTY", 0, 1);
					unk_0x89BA3A5009D05B43(0);
					func_391(&(uParam0->f_741.f_198));
					func_398(&(uParam0->f_741.f_198));
				}
			}
			else
			{
				func_381(&(uParam0->f_420[iVar1 /*8*/]));
				func_262(&(uParam0->f_420[iVar1 /*8*/]), 117, 1);
				func_399(uParam0->f_420[iVar1 /*8*/], 0, 0);
				func_389(uParam0[iVar3 /*9*/], 1);
				switch (Global_104551.f_19013.f_12[iVar0 /*8*/].f_4)
				{
					case 0:
						func_389(uParam0[iVar3 /*9*/], 1);
						func_398(&(uParam0->f_741.f_198));
						break;
					
					case 2:
						break;
					
					case 1:
						if (iVar0 < 5)
						{
							func_398(&(uParam0->f_741.f_198));
							if (Global_104551.f_19013.f_6[iVar0] <= 0f)
							{
								func_270(&Var5, 269f, 0f, 32f, 32f, 0);
								func_269(&Var5, 255, 255, 255, 255);
								Var5.f_1 = (uParam0->f_316[iVar2 /*2*/].f_1 + fLocal_538);
								Var14.f_0 = (Var5.f_0 + fLocal_537);
								if (!bLocal_594)
								{
									func_390(&Var5, 0);
								}
								func_389(&Var5, 1);
								func_404("Shared", "NewStar_32", &Var5, 0, 0, 5, 0);
								if (!bLocal_594)
								{
									func_388(&Var14, &(uParam0->f_741.f_198));
								}
							}
						}
						break;
				}
				if (iVar0 == Global_103581)
				{
					func_395(&(uParam0->f_741.f_198));
				}
				func_391(&(uParam0->f_741.f_198));
				func_397(&Var14, &(uParam0->f_741.f_198), &(Local_51.f_24[iVar0 /*8*/]), 0);
				func_398(&(uParam0->f_741.f_198));
				func_389(uParam0[iVar3 /*9*/], 1);
			}
			if (Global_104551.f_19013.f_12[iVar0 /*8*/].f_4 == 0)
			{
				func_404("Shared", "Locked_Icon_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
			}
			else if (IntToFloat(iLocal_531[iVar0]) > 0f)
			{
				if (IntToFloat(iLocal_531[iVar0]) <= Local_51.f_106[iVar0] && IntToFloat(iLocal_531[iVar0]) <= Local_51.f_112[iVar0])
				{
					func_380(uParam0[iVar3 /*9*/]);
					func_404("Shared", "MedalDot_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
				}
				else if (IntToFloat(iLocal_531[iVar0]) <= (((Local_51.f_112[iVar0] - Local_51.f_106[iVar0]) / 2f) + Local_51.f_106[iVar0]))
				{
					func_379(uParam0[iVar3 /*9*/]);
					func_404("Shared", "MedalDot_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
				}
				else if (IntToFloat(iLocal_531[iVar0]) <= Local_51.f_112[iVar0])
				{
					func_377(uParam0[iVar3 /*9*/]);
					func_404("Shared", "MedalDot_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
				}
			}
			iVar1++;
			iVar2++;
			iVar3++;
		}
		iVar0++;
	}
	iVar16 = 0;
	if (func_376(0))
	{
		unk_0xD194C635833AC189(joaat("sp0_flying_ability"), &iVar16, -1);
	}
	else if (func_376(1))
	{
		unk_0xD194C635833AC189(joaat("sp1_flying_ability"), &iVar16, -1);
	}
	else if (func_376(2))
	{
		unk_0xD194C635833AC189(joaat("sp2_flying_ability"), &iVar16, -1);
	}
	if (iVar16 < 40)
	{
		func_394(&(uParam0->f_741.f_198), &(uParam0->f_420[15 /*8*/]), 0.0047f, 0.0055f);
		unk_0x758E707C181FC6C1(1);
		Var17 = { uParam0->f_316[22 /*2*/] };
		Var19 = { uParam0->f_741.f_198 };
		if (!bLocal_594)
		{
			Var19.f_9 = (Var19.f_9 - 0.08f);
			func_388(&Var17, &Var19);
		}
		if (bLocal_594)
		{
			func_374(&(uParam0->f_420[14 /*8*/]), "FLY_STAT_WARN", &Var17, &Var19, 27f, 2f, 5, 159f);
		}
		else
		{
			func_374(&(uParam0->f_420[14 /*8*/]), "FLY_STAT_WARN", &Var17, &Var19, 18f, 1.55f, 5, 106f);
		}
		func_399(uParam0->f_420[14 /*8*/], 0, 0);
		func_404("Shared", "Info_Icon_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
		func_397(&(uParam0->f_316[22 /*2*/]), &(uParam0->f_741.f_198), "FLY_STAT_WARN", 0);
		func_391(&(uParam0->f_741.f_198));
	}
	StringCopy(&Var30, "SPR_DESC_", 16);
	StringIntConCat(&Var30, Global_103581 + 1, 16);
	func_389(uParam0[7 /*9*/], 1);
	func_404("SPRRaces", &Var30, uParam0[7 /*9*/], 0, 0, 5, 0);
	func_394(&(uParam0->f_741.f_198), &(uParam0->f_420[25 /*8*/]), 0.0047f, 0.0055f);
	unk_0x758E707C181FC6C1(1);
	StringCopy(&cVar34, "SPR_DESC_", 16);
	if (bVar4)
	{
		StringIntConCat(&cVar34, Global_103581 + 1, 16);
	}
	else
	{
		StringIntConCat(&cVar34, 0, 16);
	}
	Var38 = { uParam0->f_316[16 /*2*/] };
	Var40 = { uParam0->f_741.f_198 };
	if (!bLocal_594)
	{
		Var40.f_9 = (Var40.f_9 - 0.108f);
		func_388(&Var38, &Var40);
	}
	if (bLocal_594)
	{
		func_374(&(uParam0->f_420[25 /*8*/]), &cVar34, &Var38, &Var40, 27f, 2f, 5, 159f);
	}
	else
	{
		func_374(&(uParam0->f_420[25 /*8*/]), &cVar34, &Var38, &Var40, 18f, 1.55f, 5, 106f);
	}
	func_399(uParam0->f_420[25 /*8*/], 0, 0);
	func_397(&(uParam0->f_316[16 /*2*/]), &(uParam0->f_741.f_198), &cVar34, 0);
	func_391(&(uParam0->f_741.f_198));
	func_398(&(uParam0->f_741.f_198));
	func_397(&(uParam0->f_316[4 /*2*/]), &(uParam0->f_741.f_198), "SPR_AWARDS_SUB", 0);
	func_397(&(uParam0->f_316[8 /*2*/]), &(uParam0->f_741.f_198), "SPR_BEST", 0);
	func_395(&(uParam0->f_741.f_198));
	func_399(uParam0->f_420[22 /*8*/], 0, 0);
	func_394(&(uParam0->f_741.f_198), &(uParam0->f_420[22 /*8*/]), 0, 0);
	func_382(&(uParam0->f_316[13 /*2*/]), &(uParam0->f_741.f_198), unk_0xF34EE736CF047844(Local_51.f_112[Global_103581]) * 1000, 6, "", 1, 0);
	func_391(&(uParam0->f_741.f_198));
	func_399(uParam0->f_420[23 /*8*/], 0, 0);
	func_394(&(uParam0->f_741.f_198), &(uParam0->f_420[23 /*8*/]), 0, 0);
	func_382(&(uParam0->f_316[14 /*2*/]), &(uParam0->f_741.f_198), unk_0xF34EE736CF047844((((Local_51.f_112[Global_103581] - Local_51.f_106[Global_103581]) / 2f) + Local_51.f_106[Global_103581])) * 1000, 6, "", 1, 0);
	func_391(&(uParam0->f_741.f_198));
	func_399(uParam0->f_420[24 /*8*/], 0, 0);
	func_394(&(uParam0->f_741.f_198), &(uParam0->f_420[24 /*8*/]), 0, 0);
	func_382(&(uParam0->f_316[15 /*2*/]), &(uParam0->f_741.f_198), unk_0xF34EE736CF047844(Local_51.f_106[Global_103581]) * 1000, 6, "", 1, 0);
	func_391(&(uParam0->f_741.f_198));
	func_398(&(uParam0->f_741.f_198));
}

float func_374(var uParam0, char* sParam1, float fParam2, var uParam3, float fParam4, float fParam5, int iParam6, float fParam7)
{
	int iVar0;
	int iVar1;
	
	func_375(uParam3, 0);
	unk_0x780BA79C46FB8FF0(sParam1);
	iVar0 = unk_0x72FADEA10CAEDC8D(*fParam2, fParam2->f_1);
	iVar1 = 720;
	if (!unk_0x33CE899911FC2AD8())
	{
		iVar1 = 480;
	}
	uParam0->f_3 = func_266(((unk_0xBBDA792448DB5A89(iVar0) * fParam4) - fParam5), iVar1);
	uParam0->f_1 = func_266(((fParam7 + ((unk_0xBBDA792448DB5A89(iParam6) + (unk_0xBBDA792448DB5A89(iVar0) * 0.5f)) * fParam4)) - (fParam5 * 0.5f)), iVar1);
	return 0f;
}

void func_375(var uParam0, bool bParam1)
{
	unk_0x03FBCA33C223558B(*uParam0);
	if (!uParam0->f_8 == 0f || !uParam0->f_9 == 0f)
	{
		unk_0x36D27769309D1050(uParam0->f_8, uParam0->f_9);
	}
	unk_0x61EA61920DAA51B8(uParam0->f_1, uParam0->f_2);
	unk_0xE14EBFD640A207D8(uParam0->f_3, uParam0->f_4, uParam0->f_5, uParam0->f_6);
	switch (uParam0->f_7)
	{
		case 0:
			break;
		
		case 1:
			unk_0x74B84CCD2AFADBC5();
			unk_0x632C4C6180AD48B8();
			break;
		
		case 3:
			unk_0x632C4C6180AD48B8();
			break;
		
		case 2:
			unk_0x74B84CCD2AFADBC5();
			break;
	}
	if (bParam1)
	{
		unk_0x31B38BBC4423BEAF(4);
	}
}

bool func_376(int iParam0)
{
	func_163();
	return iParam0 == Global_104551.f_2353.f_539.f_4301;
}

void func_377(var uParam0)
{
	func_378(uParam0, 107);
}

void func_378(var uParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0x954894782056D6CB(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_4 = uVar0;
	uParam0->f_5 = uVar1;
	uParam0->f_6 = uVar2;
}

void func_379(var uParam0)
{
	func_378(uParam0, 108);
}

void func_380(var uParam0)
{
	func_378(uParam0, 109);
}

void func_381(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 128;
}

void func_382(var uParam0, var uParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	char* sVar0;
	
	if (func_385())
	{
		func_375(uParam1, 0);
		unk_0x89BA3A5009D05B43(iParam6);
		unk_0xD2E1707404EC2AFA(iParam5);
		if (func_50(sParam4))
		{
			sVar0 = "STRING";
		}
		else
		{
			sVar0 = sParam4;
		}
		unk_0xD74B746610C55548(sVar0);
		unk_0x1635DC214B2BB352(iParam2, iParam3);
		unk_0x5D7608D88BED248F(func_384(*uParam0), func_383(uParam0->f_1), 0);
	}
}

float func_383(float fParam0)
{
	return (fParam0 + fLocal_13);
}

float func_384(float fParam0)
{
	return (fParam0 + fLocal_12);
}

int func_385()
{
	if (func_386())
	{
		return 1;
	}
	if (unk_0xEC0ECEF2AF3FDA8D())
	{
		return 0;
	}
	if (unk_0xBC13F084F3B1B544() || unk_0x610450B2545892B5())
	{
		return 0;
	}
	if (unk_0xC5B946266AEC83EB())
	{
		return 0;
	}
	return 1;
}

bool func_386()
{
	return Global_1312438;
}

void func_387(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 255;
}

void func_388(float fParam0, var uParam1)
{
	*fParam0 = (((*fParam0 - 0.5f) * 1.33f) + 0.5f);
	uParam1->f_8 = (((uParam1->f_8 - 0.5f) * 1.33f) + 0.5f);
	uParam1->f_9 = (((uParam1->f_9 - 0.5f) * 1.33f) + 0.5f);
}

void func_389(float fParam0, int iParam1)
{
	fParam0->f_4 = 255;
	fParam0->f_5 = 255;
	fParam0->f_6 = 255;
	if (iParam1 == 1)
	{
		fParam0->f_7 = 255;
	}
}

void func_390(float fParam0, bool bParam1)
{
	if (!bParam1)
	{
		*fParam0 = (((*fParam0 - 0.5f) * 1.33f) + 0.5f);
	}
	fParam0->f_2 = (fParam0->f_2 * 1.33f);
}

void func_391(var uParam0)
{
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
}

void func_392(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)
{
	var uVar0;
	
	uVar0 = sParam2;
	if (!func_50(uVar0))
	{
		if (func_385())
		{
			func_375(uParam1, 0);
			unk_0x89BA3A5009D05B43(iParam4);
			unk_0xD2E1707404EC2AFA(iParam3);
			func_393(func_384(*uParam0), func_383(uParam0->f_1), uVar0, 0);
		}
	}
}

void func_393(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0xD74B746610C55548(uParam2);
	unk_0x5D7608D88BED248F(uParam0, uParam1, iParam3);
}

void func_394(var uParam0, var uParam1, float fParam2, float fParam3)
{
	uParam0->f_8 = (*uParam1 - (uParam1->f_2 / 2f));
	uParam0->f_9 = (*uParam1 + (uParam1->f_2 / 2f));
	uParam0->f_8 = (uParam0->f_8 + fParam2);
	uParam0->f_9 = (uParam0->f_9 - fParam3);
}

void func_395(var uParam0)
{
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	func_396(uParam0, 2);
}

void func_396(var uParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0x954894782056D6CB(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_3 = uVar0;
	uParam0->f_4 = uVar1;
	uParam0->f_5 = uVar2;
}

void func_397(float fParam0, var uParam1, char* sParam2, bool bParam3)
{
	if (bParam3)
	{
		unk_0x31B38BBC4423BEAF(1);
	}
	func_392(fParam0, uParam1, sParam2, 0, 0);
}

void func_398(var uParam0)
{
	func_396(uParam0, 1);
}

void func_399(struct<8> Param0, int iParam8, int iParam9)
{
	struct<8> Var0;
	
	Var0 = { Param0 };
	switch (iParam8)
	{
		case 2:
			func_403(&Var0);
			break;
		
		case 1:
			func_402(&Var0);
			break;
		
		case 3:
			func_401(&Var0);
			break;
		
		case 4:
			func_400(&Var0);
			break;
	}
	if (func_385())
	{
		if (iParam9 == 1)
		{
			unk_0x754933C14FFBA8EB(func_384(Var0.f_0), func_383(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, 0);
		}
		else
		{
			unk_0x754933C14FFBA8EB(func_384(Var0.f_0), func_383(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, 0);
		}
	}
}

void func_400(var uParam0)
{
	uParam0->f_4 = 200;
	uParam0->f_5 = 20;
	uParam0->f_6 = 20;
	uParam0->f_7 = 204;
}

void func_401(var uParam0)
{
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = 255;
}

void func_402(var uParam0)
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_403(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 150;
}

void func_404(char* sParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<9> Var0;
	
	Var0 = { *fParam2 };
	switch (iParam4)
	{
		case 0:
			func_411(&Var0);
			break;
		
		case 1:
			func_410(&Var0);
			break;
		
		case 5:
			func_409(&Var0);
			break;
		
		case 6:
			func_408(&Var0);
			break;
		
		case 7:
			func_407(&Var0);
			break;
		
		case 8:
			func_406(&Var0);
			break;
		
		case 9:
			func_405(&Var0);
			break;
	}
	if (func_385())
	{
		unk_0x31B38BBC4423BEAF(iParam5);
		if (iParam3 == 1)
		{
			unk_0x27CD91E03FF596E2(sParam0, sParam1, func_384(Var0.f_0), func_383(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		else
		{
			unk_0x27CD91E03FF596E2(sParam0, sParam1, func_384(Var0.f_0), func_383(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		unk_0x31B38BBC4423BEAF(4);
	}
}

void func_405(var uParam0)
{
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
}

void func_406(var uParam0)
{
	uParam0->f_7 = 2;
}

void func_407(var uParam0)
{
	uParam0->f_7 = 5;
}

void func_408(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
}

void func_409(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
}

void func_410(var uParam0)
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_411(var uParam0)
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
}

int func_412(var uParam0, var uParam1)
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
		if (unk_0x3469AD51EA8B9583(2, 201))
		{
			iLocal_520 = unk_0x2D524E0AFDB169D5();
			unk_0x929C3CBA660376D5(iLocal_520, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			iLocal_527 = 1;
			iLocal_528 = 1;
			*uParam0 = 0;
			return 1;
		}
		else if (unk_0x3469AD51EA8B9583(2, 202))
		{
			iLocal_520 = unk_0x2D524E0AFDB169D5();
			unk_0x929C3CBA660376D5(iLocal_520, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			unk_0xEFF1F12403847394(1);
			func_539(&(Local_51.f_119));
			iLocal_527 = 1;
		}
		else
		{
			return 1;
		}
	}
	else if (unk_0x3469AD51EA8B9583(2, 202) || unk_0x3469AD51EA8B9583(2, 238))
	{
		iLocal_520 = unk_0x2D524E0AFDB169D5();
		unk_0x929C3CBA660376D5(iLocal_520, "QUIT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		func_258(&(Local_51.f_119), 0, 0, 1, 1);
		func_257(&(Local_51.f_119), "FE_HLP29", 2, 201, 1, 1, 0);
		func_257(&(Local_51.f_119), "FE_HLP31", 2, 202, 1, 1, 0);
		func_4(&uLocal_522);
		iLocal_527 = 1;
		unk_0xEFF1F12403847394(1);
		return 1;
	}
	iVar0 = 0;
	if (unk_0xC339C5C5B5E8BC5B() && bLocal_526 == 0)
	{
		if (unk_0x51B842F5244C55D8(2))
		{
			Global_4265875 = func_416(0.201f, 0.222f, 0.198f, 0.0375f, 0.034f, 5, 255, 0, 1);
			func_415(0, Global_103581, 1);
			if (func_414())
			{
				if (Global_4265875 == Global_103581)
				{
					iVar0 = 1;
				}
				else
				{
					iLocal_520 = unk_0x2D524E0AFDB169D5();
					unk_0x0E3DA46EE7F36F9D(iLocal_520, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
					Global_103581 = Global_4265875;
					func_539(&(Local_51.f_119));
				}
			}
		}
	}
	if (unk_0x3469AD51EA8B9583(2, 201) || iVar0 == 1)
	{
		iVar0 = 0;
		if (Global_104551.f_19013.f_12[Global_103581 /*8*/].f_4 == 0)
		{
			iLocal_520 = unk_0x2D524E0AFDB169D5();
			unk_0x0E3DA46EE7F36F9D(iLocal_520, "CANCEL", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
		}
		else
		{
			iLocal_520 = unk_0x2D524E0AFDB169D5();
			unk_0x0E3DA46EE7F36F9D(iLocal_520, "SELECT", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
			*uParam0 = 1;
			return 0;
		}
	}
	if ((unk_0x3469AD51EA8B9583(2, 188) || func_413(0, uParam1)) || unk_0xFC0C00F9DE2AEC93(2, 241))
	{
		iVar1 = (Global_103581 - 1);
		if (iVar1 < 0)
		{
			iVar1 = 4;
		}
		iLocal_520 = unk_0x2D524E0AFDB169D5();
		unk_0x0E3DA46EE7F36F9D(iLocal_520, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
		Global_103581 = iVar1;
		func_539(&(Local_51.f_119));
	}
	if ((unk_0x3469AD51EA8B9583(2, 187) || func_413(1, uParam1)) || unk_0xFC0C00F9DE2AEC93(2, 242))
	{
		iVar2 = Global_103581 + 1;
		if (iVar2 > 4)
		{
			iVar2 = 0;
		}
		iLocal_520 = unk_0x2D524E0AFDB169D5();
		unk_0x0E3DA46EE7F36F9D(iLocal_520, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
		Global_103581 = iVar2;
		func_539(&(Local_51.f_119));
	}
	return 1;
}

bool func_413(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = unk_0xFBA7BDC53CCB8FC2(2, 195);
	iVar2 = unk_0xFBA7BDC53CCB8FC2(2, 196);
	if (unk_0x18DD02B781D4AD2F(iVar1) < 28 && unk_0x18DD02B781D4AD2F(iVar2) < 28)
	{
		*uParam1 = 1;
		uParam1->f_1 = 0;
		return 0;
	}
	if (unk_0x5AFB8ED811F05E4D() < uParam1->f_1 + 250)
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
		uParam1->f_1 = unk_0x5AFB8ED811F05E4D();
		*uParam1 = 0;
	}
	return bVar0;
}

int func_414()
{
	if (unk_0xC9FF45E740135482(2))
	{
		if (Global_4265875 > -1)
		{
			if (unk_0xFC0C00F9DE2AEC93(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_415(int iParam0, var uParam1, bool bParam2)
{
	if (!unk_0xC9FF45E740135482(2))
	{
		return 0;
	}
	if (unk_0xC83C302702976DCB() || unk_0xF45F7A07410EF1F5())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0x3C97A09EF6BCD140();
	}
	if (Global_4265875 == -6)
	{
		unk_0x851FC14BAA61DC87(4);
		if (iParam0 && unk_0x02EA7C5633421A0F(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4265875 = -1;
			return 0;
		}
	}
	if (((Global_4265875 > -1 || Global_4265875 == -3) || Global_4265875 == -2) || unk_0x06BEA8ED8C1CD1FB())
	{
		unk_0x851FC14BAA61DC87(1);
		return 0;
	}
	if (Global_4265875 == -1 && iParam0)
	{
		if (unk_0x02EA7C5633421A0F(2, 237))
		{
			unk_0x851FC14BAA61DC87(4);
			Global_4265875 = -6;
			return 1;
		}
		else
		{
			unk_0x851FC14BAA61DC87(3);
			return 0;
		}
	}
	unk_0x851FC14BAA61DC87(1);
	return 0;
}

int func_416(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, bool bParam7, bool bParam8)
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
	if (!unk_0xC9FF45E740135482(2))
	{
		return -1;
	}
	unk_0x9C7EE7DE7041A3F4(2, 200, 1);
	unk_0x3C97A09EF6BCD140();
	if (bParam8)
	{
		if (!unk_0x33CE899911FC2AD8())
		{
			fParam0 = (((fParam0 - 0.5f) * 1.33f) + 0.5f);
			fParam2 = (fParam2 * 1.33f);
		}
	}
	if (bParam7)
	{
		unk_0x09EF2EB55114981C(76, 84);
		unk_0xBECA8293AEA680BD(-0.05f, -0.05f, 0f, 0f);
		fVar5 = fParam0;
		fVar6 = fParam1;
		unk_0x4825D153175149E8(fParam0, fParam1, &fParam0, &fParam1);
		unk_0x3E233EDF605C23C0();
	}
	fVar0 = (fParam0 + fParam2);
	fVar1 = (fParam1 + (fParam3 * IntToFloat(iParam5)));
	fVar2 = unk_0x53E8174ABB57602F(2, 239);
	fVar3 = unk_0x53E8174ABB57602F(2, 240);
	if (((fVar2 >= fParam0 && fVar2 <= fVar0) && fVar3 >= fParam1) && fVar3 <= fVar1)
	{
		fVar4 = (fVar3 - fParam1);
		iVar7 = unk_0xF34EE736CF047844((fVar4 / fParam3));
		if (bParam7)
		{
			unk_0x09EF2EB55114981C(76, 84);
			unk_0xBECA8293AEA680BD(-0.05f, -0.05f, 0f, 0f);
			func_417(fVar5, (fVar6 + (IntToFloat(iVar7) * fParam3)), fParam2, fParam4, 255, 255, 255, iParam6);
			unk_0x3E233EDF605C23C0();
		}
		else
		{
			func_417(fParam0, (fParam1 + (IntToFloat(iVar7) * fParam3)), fParam2, fParam4, 255, 255, 255, iParam6);
		}
		return iVar7;
	}
	return -1;
}

void func_417(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, var uParam7)
{
	unk_0x754933C14FFBA8EB((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, uParam7, 0);
}

int func_418()
{
	int iVar0;
	
	switch (iLocal_521)
	{
		case 0:
			unk_0xEFF1F12403847394(1);
			unk_0x8E058779F430F4D7("SP_SPR", 3);
			unk_0x1E7BE791ACBDDC05("SPRRaces", 0);
			unk_0x1E7BE791ACBDDC05("MPHUD", 0);
			iLocal_521 = 1;
			break;
		
		case 1:
			if (unk_0x04BF76BDE53874AF("SP_SPR", 3))
			{
				if (unk_0x1865CC0DAB5F6A86("SPRRaces"))
				{
					if (unk_0x1865CC0DAB5F6A86("MPHUD"))
					{
						iLocal_521 = 2;
					}
				}
			}
			break;
		
		case 2:
			unk_0xEBE532BFFE618875(&(Local_51.f_119));
			Local_51.f_119 = 0;
			func_539(&(Local_51.f_119));
			if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 0, 512);
			}
			func_136(1);
			unk_0xDA841BEEB88A7B9C(1);
			unk_0xA2B45B1D3EE42178(Local_51.f_1, 4);
			func_369();
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Local_51.f_11)
			{
				iLocal_531[iVar0] = -1;
				iVar0++;
			}
			func_422(&uLocal_595);
			func_419();
			unk_0x9575CEFF222148A6("MinigameTransitionIn", 0, 1);
			iLocal_521 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_419()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_104551.f_19013.f_12[iVar0 /*8*/] = { func_421(iVar0) };
		MemCopy(&(Local_51.f_24[iVar0 /*8*/]), {Global_104551.f_19013.f_12[iVar0 /*8*/]}, 8);
		Local_51.f_106[iVar0] = func_420(iVar0);
		Local_51.f_112[iVar0] = func_22(iVar0);
		if (iVar0 < (5 - 1))
		{
			if (Global_104551.f_19013.f_6[iVar0] > Local_51.f_112[iVar0] || Global_104551.f_19013.f_6[iVar0] <= 0f)
			{
				Global_104551.f_19013.f_12[iVar0 + 1 /*8*/].f_4 = 0;
			}
			else
			{
				Global_104551.f_19013.f_12[iVar0 + 1 /*8*/].f_4 = 1;
			}
		}
		iVar0++;
	}
	Global_104551.f_19013.f_12[0 /*8*/].f_4 = 1;
}

float func_420(int iParam0)
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

struct<4> func_421(int iParam0)
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

void func_422(var uParam0)
{
	func_425();
	bLocal_594 = unk_0x33CE899911FC2AD8();
	func_297(uParam0);
	func_275(&(uParam0->f_741));
	func_423(uParam0);
}

void func_423(var uParam0)
{
	bool bVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	
	bVar0 = unk_0x33CE899911FC2AD8();
	func_274(&(uParam0->f_316[0 /*2*/]), 262f, (71f - func_424(0.00278f, 720, 1)), 1);
	func_274(&(uParam0->f_316[1 /*2*/]), (257f + 127f), (125f - func_424(0.00417f, 720, 1)), 1);
	func_274(&(uParam0->f_316[2 /*2*/]), (513f + 127f), (125f - func_424(0.00417f, 720, 1)), 1);
	func_274(&(uParam0->f_316[3 /*2*/]), (769f + 127f), (125f - func_424(0.00417f, 720, 1)), 1);
	func_274(&(uParam0->f_316[17 /*2*/]), (257f + func_273(0.0047f, 1280, 1)), 162f, 1);
	func_274(&(uParam0->f_316[18 /*2*/]), (257f + func_273(0.0047f, 1280, 1)), 189f, 1);
	func_274(&(uParam0->f_316[19 /*2*/]), (257f + func_273(0.0047f, 1280, 1)), 216f, 1);
	func_274(&(uParam0->f_316[20 /*2*/]), (257f + func_273(0.0047f, 1280, 1)), 243f, 1);
	func_274(&(uParam0->f_316[21 /*2*/]), (257f + func_273(0.0047f, 1280, 1)), 270f, 1);
	func_274(&(uParam0->f_316[22 /*2*/]), (257f + func_273(0.0047f, 1280, 1)), 297f, 1);
	func_274(&(uParam0->f_316[16 /*2*/]), (513f + func_273(0.0047f, 1280, 1)), (299f - func_424(0.00278f, 720, 1)), 1);
	func_274(&(uParam0->f_316[4 /*2*/]), (769f + func_273(0.0047f, 1280, 1)), 297f, 1);
	func_274(&(uParam0->f_316[5 /*2*/]), 769f, 297f, 1);
	func_274(&(uParam0->f_316[8 /*2*/]), (769f + func_273(0.0047f, 1280, 1)), 351f, 1);
	func_274(&(uParam0->f_316[9 /*2*/]), 324f, 351f, 1);
	func_274(&(uParam0->f_316[6 /*2*/]), (769f + func_273(0.0047f, 1280, 1)), (324f - func_424(0.00278f, 720, 1)), 1);
	func_274(&(uParam0->f_316[7 /*2*/]), 324f, (324f - func_424(0.00278f, 720, 1)), 1);
	func_274(&(uParam0->f_316[15 /*2*/]), 810f, 459f, 1);
	func_274(&(uParam0->f_316[14 /*2*/]), 896f, 459f, 1);
	func_274(&(uParam0->f_316[13 /*2*/]), 982f, 459f, 1);
	func_270(uParam0[0 /*9*/], 257f, 55f, 766f, 105f, 1);
	unk_0x954894782056D6CB(117, &uVar1, &uVar2, &uVar3, &uVar4);
	func_269(uParam0[0 /*9*/], uVar1, uVar2, uVar3, uVar4);
	func_270(uParam0[1 /*9*/], 496f, 171f, 32f, 32f, 0);
	func_269(uParam0[1 /*9*/], 255, 255, 255, 255);
	func_270(uParam0[2 /*9*/], 496f, 198f, 32f, 32f, 0);
	func_269(uParam0[2 /*9*/], 255, 255, 255, 255);
	func_270(uParam0[3 /*9*/], 496f, 225f, 32f, 32f, 0);
	func_269(uParam0[3 /*9*/], 255, 255, 255, 255);
	func_270(uParam0[4 /*9*/], 496f, 252f, 32f, 32f, 0);
	func_269(uParam0[4 /*9*/], 255, 255, 255, 255);
	func_270(uParam0[5 /*9*/], 496f, 279f, 32f, 32f, 0);
	func_269(uParam0[5 /*9*/], 255, 255, 255, 255);
	func_270(uParam0[6 /*9*/], (486f + func_273(0.0047f, 1280, 1)), 310f, 32f, 32f, 0);
	func_269(uParam0[6 /*9*/], 255, 255, 255, 255);
	func_270(uParam0[7 /*9*/], 640f, 224f, 256f, 256f, 0);
	func_269(uParam0[7 /*9*/], 255, 255, 255, 255);
	func_270(uParam0[9 /*9*/], 896f, 223f, 128f, 128f, 0);
	func_269(uParam0[9 /*9*/], 255, 255, 255, 255);
	func_270(uParam0[13 /*9*/], 770.5f, 374.5f, 80f, 80f, 1);
	func_269(uParam0[13 /*9*/], 255, 255, 255, 255);
	func_270(uParam0[12 /*9*/], 856f, 374.5f, 80f, 80f, 1);
	func_269(uParam0[12 /*9*/], 255, 255, 255, 255);
	func_270(uParam0[11 /*9*/], 941.5f, 374.5f, 80f, 80f, 1);
	func_269(uParam0[11 /*9*/], 255, 255, 255, 255);
	func_264(&(uParam0->f_420[3 /*8*/]), 257f, 114f, 254f, 5f, 1);
	func_263(&(uParam0->f_420[3 /*8*/]), 70, 70, 130, 255);
	func_264(&(uParam0->f_420[4 /*8*/]), 513f, 114f, 254f, 5f, 1);
	func_263(&(uParam0->f_420[4 /*8*/]), 70, 70, 130, 255);
	func_264(&(uParam0->f_420[5 /*8*/]), 769f, 114f, 254f, 5f, 1);
	func_263(&(uParam0->f_420[5 /*8*/]), 70, 70, 130, 255);
	func_264(&(uParam0->f_420[0 /*8*/]), 257f, 119f, 254f, 26f, 1);
	func_262(&(uParam0->f_420[0 /*8*/]), 1, 1);
	func_264(&(uParam0->f_420[1 /*8*/]), 513f, 119f, 254f, 26f, 1);
	func_262(&(uParam0->f_420[1 /*8*/]), 1, 1);
	func_264(&(uParam0->f_420[2 /*8*/]), 769f, 119f, 254f, 26f, 1);
	func_262(&(uParam0->f_420[2 /*8*/]), 1, 1);
	func_264(&(uParam0->f_420[7 /*8*/]), 513f, 159f, 254f, 133f, 1);
	func_262(&(uParam0->f_420[7 /*8*/]), 117, 1);
	func_264(&(uParam0->f_420[8 /*8*/]), 769f, 159f, 254f, 133f, 1);
	func_262(&(uParam0->f_420[8 /*8*/]), 117, 1);
	func_264(&(uParam0->f_420[9 /*8*/]), 257f, 159f, 254f, 25f, 1);
	func_262(&(uParam0->f_420[9 /*8*/]), 117, 1);
	func_264(&(uParam0->f_420[10 /*8*/]), 257f, 186f, 254f, 25f, 1);
	func_262(&(uParam0->f_420[10 /*8*/]), 117, 1);
	func_264(&(uParam0->f_420[11 /*8*/]), 257f, 213f, 254f, 25f, 1);
	func_262(&(uParam0->f_420[11 /*8*/]), 117, 1);
	func_264(&(uParam0->f_420[12 /*8*/]), 257f, 240f, 254f, 25f, 1);
	func_262(&(uParam0->f_420[12 /*8*/]), 117, 1);
	func_264(&(uParam0->f_420[13 /*8*/]), 257f, 267f, 254f, 25f, 1);
	func_262(&(uParam0->f_420[13 /*8*/]), 117, 1);
	func_264(&(uParam0->f_420[26 /*8*/]), 257f, 294f, 254f, 2f, 1);
	func_262(&(uParam0->f_420[26 /*8*/]), 1, 1);
	func_264(&(uParam0->f_420[14 /*8*/]), 257f, 294f, 254f, 75f, 1);
	func_262(&(uParam0->f_420[14 /*8*/]), 117, 1);
	func_264(&(uParam0->f_420[15 /*8*/]), 257f, 294f, (254f - 32f), 75f, 1);
	func_262(&(uParam0->f_420[15 /*8*/]), 1, 1);
	func_264(&(uParam0->f_420[25 /*8*/]), 513f, 294f, 254f, 133f, 1);
	func_262(&(uParam0->f_420[25 /*8*/]), 117, 1);
	func_264(&(uParam0->f_420[16 /*8*/]), 769f, 294f, 254f, 25f, 1);
	func_262(&(uParam0->f_420[16 /*8*/]), 117, 1);
	func_264(&(uParam0->f_420[17 /*8*/]), 769f, 321f, 254f, 25f, 1);
	func_262(&(uParam0->f_420[17 /*8*/]), 117, 1);
	func_264(&(uParam0->f_420[18 /*8*/]), 769f, 348f, 254f, 25f, 1);
	func_262(&(uParam0->f_420[18 /*8*/]), 117, 1);
	func_264(&(uParam0->f_420[21 /*8*/]), 769f, 375f, 83f, 84f, 1);
	func_262(&(uParam0->f_420[21 /*8*/]), 117, 1);
	func_264(&(uParam0->f_420[20 /*8*/]), 854f, 375f, 84f, 84f, 1);
	func_262(&(uParam0->f_420[20 /*8*/]), 117, 1);
	func_264(&(uParam0->f_420[19 /*8*/]), 940f, 375f, 83f, 84f, 1);
	func_262(&(uParam0->f_420[19 /*8*/]), 117, 1);
	func_264(&(uParam0->f_420[22 /*8*/]), 769f, 456f, 83f, 25f, 1);
	func_262(&(uParam0->f_420[22 /*8*/]), 109, 1);
	func_264(&(uParam0->f_420[23 /*8*/]), 854f, 456f, 84f, 25f, 1);
	func_262(&(uParam0->f_420[23 /*8*/]), 108, 1);
	func_264(&(uParam0->f_420[24 /*8*/]), 940f, 456f, 83f, 25f, 1);
	func_262(&(uParam0->f_420[24 /*8*/]), 107, 1);
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

float func_424(float fParam0, int iParam1, bool bParam2)
{
	var uVar0;
	float fVar1;
	
	if (iParam1 == 0)
	{
		unk_0x22D0D3B91B10E6E4(&uVar0, &iParam1);
	}
	fVar1 = (fParam0 * IntToFloat(iParam1));
	if (bParam2)
	{
		return unk_0xBBDA792448DB5A89(unk_0xF2DB717A73826179(fVar1));
	}
	return fVar1;
}

void func_425()
{
	int iVar0;
	
	unk_0xE477A67BBD4B4A92();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1838575.f_81[iVar0] = 0;
		iVar0++;
	}
}

void func_426(var uParam0)
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

int func_427(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (unk_0x60D6796E6B9FD3DB())
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
			func_455(Local_51.f_10, &(Local_51.f_65[Local_51.f_10 /*8*/]));
			if (bParam1)
			{
				func_452(Local_51.f_10, uParam0->f_358[0 /*189*/].f_13, iVar0);
				iLocal_529 = 1;
				return 1;
			}
			else if (func_428(Local_51.f_10, uParam0->f_358[0 /*189*/].f_13, iVar0))
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

int func_428(int iParam0, float fParam1, int iParam2)
{
	if (Global_1835013.f_1 && !Global_1835013.f_2)
	{
		func_452(iParam0, fParam1, iParam2);
		Global_1835013.f_2 = 1;
	}
	if (func_429(&uLocal_1582))
	{
		Global_1835388 = 1;
		return 1;
	}
	return 0;
}

int func_429(var uParam0)
{
	struct<98> Var0;
	struct<4> Var98;
	struct<37> Var106;
	struct<13> Var175;
	int iVar188;
	
	Var0.f_19.f_1 = 4;
	Var106.f_3 = 32;
	Var106.f_36 = 32;
	if (func_451(uParam0->f_44))
	{
		Var175 = { Global_1835013.f_361 };
	}
	else
	{
		Var175 = { func_450(unk_0x8CFC7D6E1DA5D304()) };
	}
	switch (Global_1835013)
	{
		case 0:
			if (func_449(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &Var175))
			{
				func_448(&Var98, &(uParam0->f_44));
				Global_1835013.f_142 = uParam0->f_44;
				Global_1835013.f_142.f_1 = unk_0x4B6E6D23F8AD680F(uParam0->f_44, 0);
				iVar188 = 0;
				while (iVar188 < Global_1835013.f_142.f_1)
				{
					if (!func_447(uParam0->f_44, iVar188))
					{
						if (func_446(uParam0->f_44, 4, iVar188))
						{
							unk_0xD2A9C3F486236CC5(&(Global_1835013.f_142.f_2), iVar188);
						}
						else
						{
							unk_0x62148293B793073B(&(Global_1835013.f_142.f_2), iVar188);
						}
					}
					iVar188++;
				}
				if (uParam0->f_5 && unk_0x87C1B430F044CFAC(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						unk_0x27784D25EDAE6D24(0, &Var0);
						if (Var0.f_97 != Global_1835013.f_142.f_1)
						{
						}
						if (!func_445(Var0))
						{
							Global_1835013.f_4 = 1;
						}
						else
						{
							iVar188 = 0;
							while (iVar188 < Global_1835013.f_142.f_1)
							{
								if (!func_447(uParam0->f_44, iVar188))
								{
									if (func_446(uParam0->f_44, 4, iVar188))
									{
										Global_1835013.f_73.f_36[iVar188] = unk_0x41ECC212062282FF(0, iVar188);
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
										Global_1835013.f_73.f_3[iVar188] = unk_0x99A322ED74E76285(0, iVar188);
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
					unk_0x4FE4CE1E2DF52382();
				}
				else
				{
					Global_1835013.f_4 = 1;
				}
				Global_1835013 = 1;
				func_366(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 1:
			Global_1835013.f_1 = 1;
			if (Global_1835013.f_2)
			{
				func_444();
				if (Global_1835013.f_4)
				{
					if (func_443(uParam0->f_44))
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
			unk_0x488DB57DAE22C447(&(Global_1835013.f_73), &(Global_1835013.f_142), &(Global_1835013.f_211));
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
			if (unk_0x44243F2E2F58B8E3() && func_442())
			{
				if (func_441())
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
			if (func_443(uParam0->f_44))
			{
				Global_1835013.f_280 = { Global_1835013.f_142 };
			}
			else
			{
				Var106.f_0 = Global_1835013.f_142;
				Var106.f_1 = Global_1835013.f_142.f_1;
				Var106.f_2 = Global_1835013.f_142.f_2;
				unk_0x488DB57DAE22C447(&Var106, &(Global_1835013.f_142), &(Global_1835013.f_280));
			}
			Global_1835013 = 100;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 100:
			if (func_430(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, &Var175, 1, 1, Global_1835013.f_280.f_36[0], Global_1835013.f_280.f_3[0]))
			{
				func_448(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x87C1B430F044CFAC(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						unk_0x27784D25EDAE6D24(0, &Var0);
						if (unk_0x9D39145AD645E383(&(Var0.f_13), ""))
						{
							Global_979642.f_1 = -1;
						}
						else
						{
							Global_979642.f_1 = Var0.f_96;
						}
					}
					else
					{
						Global_979642.f_1 = -1;
					}
					unk_0x4FE4CE1E2DF52382();
				}
				else
				{
					Global_979642.f_1 = -1;
				}
				Global_1835013 = 999;
				func_366(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 999:
			return 1;
			break;
	}
	return 0;
}

int func_430(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
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
			if (!func_437() && !func_433())
			{
				func_431(*uParam2);
				if (bParam5)
				{
					if (unk_0xB03A1684359C50A1(Global_1835013.f_142.f_2, 0))
					{
						if (unk_0x9333B1BD362578C9(uParam2, uVar0, iParam3))
						{
							*uParam0++;
						}
						else
						{
							*uParam1 = 0;
							*uParam0 = 3;
						}
					}
					else if (unk_0x9E97AF4AC6ACE39E(uParam2, uVar1, iParam3))
					{
						*uParam0++;
					}
					else
					{
						*uParam1 = 0;
						*uParam0 = 3;
					}
				}
				else if (unk_0x06297F5C47778213(uParam2, iParam3, uParam4))
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
			if (!unk_0x50FF74F38183101F(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x4CABACA7D7715244(*uParam2, uParam2->f_1, 0))
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

void func_431(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)
{
	Global_1835008 = 1;
	func_432(&(Global_1835008.f_1), 1, 0);
	Global_1835008.f_3 = Param0.f_0;
	Global_1835008.f_4 = Param0.f_1;
}

void func_432(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x44243F2E2F58B8E3() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0xE92FCF3C05C2EF1D();
		}
		else
		{
			*uParam0 = unk_0x5E1037C28AA2B562();
		}
	}
	else
	{
		*uParam0 = unk_0x5AFB8ED811F05E4D();
	}
	uParam0->f_1 = 1;
}

int func_433()
{
	if (unk_0xC83C302702976DCB() && !func_434())
	{
		return 1;
	}
	return 0;
}

bool func_434()
{
	return func_435(unk_0x8CFC7D6E1DA5D304());
}

int func_435(int iParam0)
{
	switch (func_436(iParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 39:
		case 34:
		case 37:
		case 40:
			return 0;
		
		default:
	}
	return 1;
}

int func_436(int iParam0)
{
	return Global_1595681[iParam0 /*678*/].f_196;
}

int func_437()
{
	if (unk_0x8CF7F40A4CC84117() || Global_1835008)
	{
		func_438();
		return 1;
	}
	return 0;
}

void func_438()
{
	if (func_439(&(Global_1835008.f_1), 120000, 1))
	{
		unk_0xA81761EAC59012E4(Global_1835008.f_3, Global_1835008.f_4, -1);
		Global_1835008 = 0;
		func_361(&(Global_1835008.f_1));
	}
}

int func_439(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_440(uParam0, bParam2, 0);
	if (unk_0x44243F2E2F58B8E3() && !bParam2)
	{
		if (unk_0x18DD02B781D4AD2F(unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x18DD02B781D4AD2F(unk_0xB34837A3BB15AB69(unk_0x5AFB8ED811F05E4D(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_440(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x44243F2E2F58B8E3() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xE92FCF3C05C2EF1D();
			}
			else
			{
				*uParam0 = unk_0x5E1037C28AA2B562();
			}
		}
		else
		{
			*uParam0 = unk_0x5AFB8ED811F05E4D();
		}
		uParam0->f_1 = 1;
	}
}

bool func_441()
{
	return unk_0xB03A1684359C50A1(Global_971063.f_8, 1);
}

var func_442()
{
	return Global_2455103.f_3;
}

int func_443(int iParam0)
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

void func_444()
{
	Global_1835013.f_73 = Global_1835013.f_142;
	Global_1835013.f_73.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_73.f_2 = Global_1835013.f_142.f_2;
	Global_1835013.f_211 = Global_1835013.f_142;
	Global_1835013.f_211.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_211.f_2 = Global_1835013.f_142.f_2;
}

bool func_445(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xBD82AF3F842B99A5(&uParam0, 13);
}

int func_446(int iParam0, int iParam1, int iParam2)
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
	iVar0 = unk_0x31DDF93D7647279B(iParam0, iParam1, iParam2);
	switch (iVar0)
	{
		case 1:
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_447(int iParam0, int iParam1)
{
	if (unk_0xA6F947EF97C7E3CD(iParam0, 4, iParam1) == 156)
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

void func_448(var uParam0, var uParam1)
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0;
}

int func_449(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_437() && !func_433())
			{
				func_431(*uParam2);
				if (unk_0xFFE163C3723C0C74(uParam2, uParam3))
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
			if (!unk_0x50FF74F38183101F(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x4CABACA7D7715244(*uParam2, uParam2->f_1, 0))
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

struct<13> func_450(int iParam0)
{
	struct<13> Var0;
	
	unk_0xAFA03929DD14DF46(iParam0, &Var0, 13);
	return Var0;
}

int func_451(int iParam0)
{
	if (iParam0 == 825 || iParam0 == 828)
	{
		return 1;
	}
	return 0;
}

void func_452(int iParam0, float fParam1, int iParam2)
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
	if (func_454(817, &Var3, &Var22, 3, -1, 1, 0))
	{
		if (iParam2 <= 3 && iParam2 > 0)
		{
			func_453(817, 131, -unk_0x11E019C8F43ACC8A((fParam1 * 100f)) * 10, 0f, 0);
		}
		else
		{
			func_453(817, 131, 0, 0f, 0);
		}
		func_453(817, 96, ((iVar0 * 1 + iVar1 * 2) + iVar2 * 3), 0f, 0);
		func_453(817, 2, unk_0x11E019C8F43ACC8A((fParam1 * 100f)) * 10, 0f, 0);
		func_453(817, 147, unk_0x11E019C8F43ACC8A((fParam1 * 100f)) * 10, 0f, 0);
		func_453(817, 149, 0, 0f, 0);
		func_453(817, 148, 0, 0f, 0);
		func_453(817, 109, 1, 0f, 0);
		func_453(817, 157, iVar0, 0f, 0);
		func_453(817, 158, iVar1, 0f, 0);
		func_453(817, 86, iVar2, 0f, 0);
	}
}

void func_453(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!bParam4)
	{
		unk_0x83AB023FACFAD852(iParam1, iParam2, fParam3);
	}
	if (!Global_1835013.f_3)
	{
		Global_1835013.f_142 = iParam0;
		Global_1835013.f_142.f_1 = unk_0x4B6E6D23F8AD680F(Global_1835013.f_142, 0);
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (iVar1 < Global_1835013.f_142.f_1)
			{
				if (iParam1 == 156)
				{
				}
				else if (func_446(iParam0, 4, iVar1))
				{
					unk_0xD2A9C3F486236CC5(&(Global_1835013.f_142.f_2), iVar1);
				}
				else
				{
					unk_0x62148293B793073B(&(Global_1835013.f_142.f_2), iVar1);
				}
			}
			else
			{
				unk_0x62148293B793073B(&(Global_1835013.f_142.f_2), iVar1);
			}
			iVar1++;
		}
		Global_1835013.f_3 = 1;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iParam1 == unk_0xA6F947EF97C7E3CD(iParam0, 4, iVar1))
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
		unk_0xD2A9C3F486236CC5(&(Global_1835013.f_142.f_2), iVar0);
	}
	else if (fParam3 != 0f)
	{
		unk_0x62148293B793073B(&(Global_1835013.f_142.f_2), iVar0);
	}
}

int func_454(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar68;
	struct<13> Var69;
	var uVar82;
	
	if (!unk_0xA1C84586015AE5DB())
	{
	}
	if ((!unk_0x12E47521EE5A4E11() && (unk_0x1D206D9B095EA01E() || !unk_0xE9A69EF13B00AA9D())) && unk_0xE1317949F8AC19DF())
	{
		Var0.f_2.f_1 = 4;
		Var0.f_0 = iParam0;
		if (iParam4 == -1)
		{
			if (unk_0xE906D9FB40E35957())
			{
				Var69 = { func_450(unk_0x8CFC7D6E1DA5D304()) };
				if (unk_0x9FDA5C5DFB3FE364(&Var69))
				{
					if (unk_0x4AEF279CFD4A57C6(&uVar82, 35, &Var69))
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
			if (unk_0x44243F2E2F58B8E3() && Global_2455103.f_3)
			{
				unk_0x087FE1D41F346D59(&Var0, &(Global_1794960.f_10));
			}
			else
			{
				unk_0x61E186D8E4DA6351(&Var0);
			}
		}
		return 1;
	}
	if (unk_0x12E47521EE5A4E11())
	{
	}
	if (!unk_0x1D206D9B095EA01E())
	{
	}
	if (unk_0xE9A69EF13B00AA9D())
	{
	}
	if (!unk_0xE1317949F8AC19DF())
	{
	}
	return 0;
}

void func_455(int iParam0, char[4] cParam1)
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
	func_456(&uLocal_1582, 86, &Var0, cParam1, -1, -1, 0, 0);
}

void func_456(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	struct<8> Var0;
	struct<8> Var8;
	int iVar16;
	struct<6> Var17;
	
	if (!unk_0xFAFFA408239A026B(sParam2))
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
				if (iParam5 > 0 && !func_463())
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
				if (iParam5 > 0 && !func_463())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0xFAFFA408239A026B(sParam3))
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
					if (!unk_0xFAFFA408239A026B(sParam3))
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
				if (iParam5 <= 0 || func_463())
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
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
				if (iParam5 > 0 && !func_463())
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
				if (iParam5 > 0 && !func_463())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0xFAFFA408239A026B(sParam3))
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
					if (!unk_0xFAFFA408239A026B(sParam3))
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
				if (iParam5 <= 0 || func_463())
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
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
				if (iParam5 > 0 && !func_463())
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
					unk_0xC386FB5661F5C27E(unk_0x8CFC7D6E1DA5D304(), &Var17);
					MemCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), {Var17}, 8);
					Global_1835390.f_2780.f_27 = 1;
				}
				if (iParam5 > 0 && !func_463())
				{
					uParam0->f_44.f_3 = 3;
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[2 /*16*/].f_8 = { Var8 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0xFAFFA408239A026B(sParam3))
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
					if (!unk_0xFAFFA408239A026B(sParam3))
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE", 32);
						StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_RRCE_NN", 32);
					}
				}
				if (iParam5 <= 0 || func_463())
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
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
				if (iParam5 > 0 && !func_463())
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
				if (iParam5 > 0 && !func_463())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0xFAFFA408239A026B(sParam3))
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
					if (!unk_0xFAFFA408239A026B(sParam3))
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
				if (iParam5 <= 0 || func_463())
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
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					Global_1835390.f_2780.f_28 = 5;
					Global_1835390.f_2780.f_29[0] = 1;
					Global_1835390.f_2780.f_29[1] = 1;
					Global_1835390.f_2780.f_29[2] = 5;
				}
				Global_1835390.f_2779 = 0;
			}
			else if (iParam4 == 3)
			{
				if (iParam5 > 0 && !func_463())
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
				if (iParam5 > 0 && !func_463())
				{
					Global_1835390.f_2780.f_26 = iParam5;
					if (!unk_0xFAFFA408239A026B(sParam3))
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
					if (!unk_0xFAFFA408239A026B(sParam3))
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
				if (iParam5 <= 0 || func_463())
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
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
				if (!unk_0xFAFFA408239A026B(sParam3))
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
				unk_0x62148293B793073B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0x62148293B793073B(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
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
				if (!unk_0xFAFFA408239A026B(sParam3))
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
				unk_0x62148293B793073B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0x62148293B793073B(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
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
				if (!unk_0xFAFFA408239A026B(sParam3))
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
				unk_0x62148293B793073B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0x62148293B793073B(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
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
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
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
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x62148293B793073B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
			unk_0x62148293B793073B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
			if (unk_0xFAFFA408239A026B(sParam3))
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
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
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
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
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
			unk_0x62148293B793073B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0x62148293B793073B(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
			MemCopy(&(Global_1835390.f_2780.f_9), {func_462(iParam1)}, 16);
			Global_1835390.f_2780.f_25 = 0;
			StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_WEAP", 24);
			Global_1835390.f_2710[0] = 0;
			Global_1835390.f_2710[1] = 7;
			Global_1835390.f_2708 = 2;
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
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
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
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
			if (!unk_0xFAFFA408239A026B(sParam3))
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
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
				if (!unk_0xFAFFA408239A026B(sParam3))
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
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0x62148293B793073B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
				Global_1835390.f_2780.f_28 = 6;
				Global_1835390.f_2780.f_29[0] = 5;
				Global_1835390.f_2780.f_29[1] = 11;
				Global_1835390.f_2780.f_29[2] = 4;
				Global_1835390.f_2780.f_29[3] = 5;
				Global_1835390.f_2780.f_29[4] = 5;
			}
			else if (Global_1646129.f_55 == 1)
			{
				uParam0->f_44 = 777;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835390.f_2780 = 1;
				if (!unk_0xFAFFA408239A026B(sParam3))
				{
					if (Global_1646129.f_2 == 5)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else if (Global_1646129.f_2 == 5)
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
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
				if (!unk_0xFAFFA408239A026B(sParam3))
				{
					if (Global_1646129.f_2 == 5)
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835390.f_2780.f_9), sParam3, 64);
				}
				else if (Global_1646129.f_2 == 5)
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835390.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				if (func_461(Global_1646129.f_138609) || func_458(Global_1646129.f_138609))
				{
					StringCopy(&(Global_1835390.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835390.f_2717[1 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1835390.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835390.f_2710[0] = 0;
					Global_1835390.f_2710[1] = 2;
					Global_1835390.f_2710[2] = 0;
					Global_1835390.f_2708 = 2;
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
			if (!unk_0xFAFFA408239A026B(sParam3))
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
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2768), 1);
			Global_1835390.f_2754[1] = -1;
			Global_1835390.f_2710[2] = 2;
			Global_1835390.f_2710[3] = 0;
			Global_1835390.f_2708 = 3;
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
			if (!unk_0xFAFFA408239A026B(sParam3))
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
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
					if (!unk_0xFAFFA408239A026B(sParam3))
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
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
					if (!unk_0xFAFFA408239A026B(sParam3))
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
					unk_0x62148293B793073B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
					if (!unk_0xFAFFA408239A026B(sParam3))
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
					unk_0x62148293B793073B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
					if (!unk_0xFAFFA408239A026B(sParam3))
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
					unk_0x62148293B793073B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
			if (!unk_0xFAFFA408239A026B(sParam3))
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
			unk_0x62148293B793073B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
			if (!unk_0xFAFFA408239A026B(sParam3))
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
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
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
			if (!unk_0xFAFFA408239A026B(sParam3))
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
			unk_0x62148293B793073B(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
			unk_0x62148293B793073B(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[3]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[4]);
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[5]);
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
			if (!unk_0xFAFFA408239A026B(sParam3))
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
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
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
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
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
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[0]);
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[1]);
				unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2769), Global_1835390.f_2710[2]);
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
		if (unk_0xB03A1684359C50A1(Global_1835390.f_2769, Global_1835390.f_2710[iVar16]))
		{
			unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2770), iVar16);
		}
		iVar16++;
	}
	Global_1835390.f_2826 = func_457(Var0, uParam0->f_44, iParam1, iParam4, iParam5, bParam6);
}

int func_457(struct<8> Param0, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	char cVar0[64];
	
	MemCopy(&cVar0, {Param0}, 16);
	StringIntConCat(&cVar0, iParam8, 64);
	StringConCat(&cVar0, "_", 64);
	if (func_451(iParam8))
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
	return unk_0x6E987D62C8535B6E(&cVar0);
}

var func_458(int iParam0)
{
	return (func_460(iParam0) || func_459(iParam0));
}

bool func_459(int iParam0)
{
	return iParam0 == 44;
}

bool func_460(int iParam0)
{
	return iParam0 == 45;
}

bool func_461(int iParam0)
{
	return iParam0 == 12;
}

struct<6> func_462(int iParam0)
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

int func_463()
{
	if (((((((Global_1646129.f_49002 == 1 || Global_1646129.f_49002 == 3) || Global_1646129.f_49002 == 5) || Global_1646129.f_49002 == 7) || Global_1646129.f_49002 == 8) || Global_1646129.f_49002 == 9) || Global_1646129.f_49002 == 11) || Global_1646129.f_49002 == 13)
	{
		return 1;
	}
	return 0;
}

int func_464(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 2;
	if (Global_1840922.f_2 + 5 < unk_0x756DE011CEDBBD7E() && Global_1840922.f_2 > 0)
	{
		func_361(&Global_1840922);
		func_361(&(Global_1840922.f_49));
		*uParam0 = 0;
		Global_1840922.f_2 = 0;
		func_473(0);
	}
	Global_1840922.f_2 = unk_0x756DE011CEDBBD7E();
	iVar1 = -1;
	if (unk_0x0A8A596EB9C068FA())
	{
		if (unk_0x3AAF2B12B8A85B11() == 0)
		{
			iVar1 = unk_0x5AF8F50724C6068D();
		}
	}
	if ((unk_0x0A8A596EB9C068FA() && (((iVar1 == 4 || iVar1 == 2) || iVar1 == 1) || iVar1 == 5)) || (!func_471() && unk_0xA1C84586015AE5DB()))
	{
		if (unk_0x2573387FC1093A00())
		{
			func_468(&(Global_1840922.f_3), func_470(&(Global_1840922.f_3)));
			if (!unk_0xB03A1684359C50A1(*uParam0, 4))
			{
				unk_0xD2A9C3F486236CC5(uParam0, 4);
				StringCopy(&(Global_1840922.f_3.f_1), "", 64);
				func_466(&(Global_1840922.f_3), 0);
			}
		}
		else
		{
			if (iVar1 == 4)
			{
				unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "HUD_PROFILECHNG", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			else if (iVar1 == 2)
			{
				unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "HUD_GAMEUPD_G", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			else if (iVar1 == 1)
			{
				unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "HUD_SYSTUPD_G", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			else if (iVar1 == 5)
			{
				unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			else if (!func_471())
			{
				unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_ROS", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			if (!unk_0xB03A1684359C50A1(*uParam0, 0))
			{
				if (!unk_0x02EA7C5633421A0F(2, 201))
				{
					unk_0xD2A9C3F486236CC5(uParam0, 0);
				}
			}
			else if (unk_0x3469AD51EA8B9583(2, 201))
			{
				func_361(&(Global_1840922.f_49));
				func_361(&Global_1840922);
				*uParam0 = 0;
				Global_1840922.f_2 = 0;
				func_473(0);
				return 1;
			}
		}
	}
	else
	{
		func_468(&(Global_1840922.f_3), func_470(&(Global_1840922.f_3)));
		if ((func_465(&(Global_1840922.f_49)) && !func_439(&(Global_1840922.f_49), 2000, 1)) && !unk_0xA1C84586015AE5DB())
		{
			unk_0xD2A9C3F486236CC5(uParam0, 3);
			StringCopy(&(Global_1840922.f_3.f_1), "", 64);
			func_466(&(Global_1840922.f_3), 0);
		}
		else if (!unk_0xB03A1684359C50A1(*uParam0, 3))
		{
			if (!unk_0xB03A1684359C50A1(*uParam0, 1))
			{
				unk_0xEA4C0FEA5D3F7821(0);
				unk_0xD2A9C3F486236CC5(uParam0, 1);
				StringCopy(&(Global_1840922.f_3.f_1), "", 64);
				func_466(&(Global_1840922.f_3), 0);
			}
		}
		if (func_465(&Global_1840922))
		{
			if (!func_439(&Global_1840922, 4000, 1))
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			if (bParam1)
			{
				if (!unk_0xA1C84586015AE5DB())
				{
					if (unk_0x8F1CB5DBD209E2ED())
					{
						unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "STORE_NOT_ONL", iVar0, 0, false, -1, 0, 0, true, 0);
					}
					else
					{
						unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
					}
					if (!unk_0xD89462DDD07112E7())
					{
						if (!unk_0xB03A1684359C50A1(*uParam0, 0))
						{
							if (!unk_0x02EA7C5633421A0F(2, 201))
							{
								unk_0xD2A9C3F486236CC5(uParam0, 0);
							}
						}
						else if (unk_0x3469AD51EA8B9583(2, 201))
						{
							func_361(&Global_1840922);
							*uParam0 = 0;
							Global_1840922.f_2 = 0;
							func_473(0);
							return 1;
						}
					}
				}
				else
				{
					func_361(&Global_1840922);
					*uParam0 = 0;
					Global_1840922.f_2 = 0;
					func_473(0);
					return 1;
				}
			}
			else if (unk_0xB03A1684359C50A1(*uParam0, 3))
			{
				if (unk_0x8F1CB5DBD209E2ED())
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_SIGN_OUT", iVar0, 0, false, -1, 0, 0, true, 0);
				}
				else
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
				}
				if (!unk_0xB03A1684359C50A1(*uParam0, 0))
				{
					if (!unk_0x02EA7C5633421A0F(2, 201))
					{
						unk_0xD2A9C3F486236CC5(uParam0, 0);
					}
				}
				else if (unk_0x3469AD51EA8B9583(2, 201))
				{
					func_361(&(Global_1840922.f_49));
					func_361(&Global_1840922);
					*uParam0 = 0;
					Global_1840922.f_2 = 0;
					func_473(0);
					return 1;
				}
			}
			else
			{
				if (unk_0x8F1CB5DBD209E2ED())
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NOT_ONL", iVar0, 0, false, -1, 0, 0, true, 0);
				}
				else
				{
					unk_0xDC38CC1E35B6A5D7("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
				}
				if (!unk_0xD89462DDD07112E7())
				{
					if (!unk_0xB03A1684359C50A1(*uParam0, 0))
					{
						if (!unk_0x02EA7C5633421A0F(2, 201))
						{
							unk_0xD2A9C3F486236CC5(uParam0, 0);
						}
					}
					else if (unk_0x3469AD51EA8B9583(2, 201))
					{
						func_361(&(Global_1840922.f_49));
						func_361(&Global_1840922);
						*uParam0 = 0;
						Global_1840922.f_2 = 0;
						func_473(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_465(var uParam0)
{
	return uParam0->f_1;
}

void func_466(var uParam0, bool bParam1)
{
	func_467(uParam0);
	if (bParam1)
	{
		func_473(0);
	}
	uParam0->f_35 = 1;
}

void func_467(var uParam0)
{
	struct<46> Var0;
	
	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_468(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_469(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_36)
		{
			unk_0x050C400D3EE57D3C(&(uParam0->f_1));
			unk_0x3A12001DBF78DC62(uParam0->f_33);
			unk_0x3A12001DBF78DC62(uParam0->f_34);
			unk_0x022533BB19481F62(uParam0->f_41);
		}
		else if (uParam0->f_37)
		{
			unk_0x050C400D3EE57D3C(&(uParam0->f_1));
			unk_0x3A12001DBF78DC62(uParam0->f_33);
			unk_0x022533BB19481F62(uParam0->f_41);
		}
		else if (uParam0->f_39)
		{
			unk_0x050C400D3EE57D3C(&(uParam0->f_1));
			unk_0xB4179F7E88F4C4BF(&(uParam0->f_17));
			unk_0x3A12001DBF78DC62(uParam0->f_33);
			unk_0x3A12001DBF78DC62(uParam0->f_34);
			unk_0x022533BB19481F62(uParam0->f_41);
		}
		else if (uParam0->f_38)
		{
			unk_0x050C400D3EE57D3C(&(uParam0->f_1));
			unk_0xB4179F7E88F4C4BF(&(uParam0->f_17));
			unk_0x022533BB19481F62(uParam0->f_41);
		}
		else if (uParam0->f_40)
		{
			unk_0x050C400D3EE57D3C(&(uParam0->f_1));
			unk_0x1635DC214B2BB352(uParam0->f_33, 70);
			unk_0x022533BB19481F62(uParam0->f_41);
		}
		else
		{
			unk_0x050C400D3EE57D3C(&(uParam0->f_1));
			unk_0x022533BB19481F62(uParam0->f_41);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_469(var uParam0)
{
	uParam0->f_35 = 0;
}

int func_470(var uParam0)
{
	return uParam0->f_35;
}

int func_471()
{
	if (func_472())
	{
		return 0;
	}
	if (unk_0x9D67C2091DFDB507() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_472()
{
	return Global_2457277;
}

void func_473(bool bParam0)
{
	unk_0x3D889DC768CF362B();
	if (bParam0)
	{
		unk_0x245A0B1CE203AC4B();
	}
}

void func_474(var uParam0, int iParam1, char[4] cParam2)
{
	func_151(&(Local_51.f_119), 1128792064, 1, 0, 1, 1065353216);
	unk_0xE05212008FE9A018(9);
	unk_0xE05212008FE9A018(7);
	func_455(iParam1, cParam2);
	func_475(uParam0, &uLocal_1582);
}

void func_475(var uParam0, var uParam1)
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
	
	func_432(&(Global_1840922.f_49), 1, 0);
	unk_0xCA68B0AB8A5AF85A();
	func_535();
	func_534(0);
	unk_0x3F19B70555683951();
	func_532();
	unk_0xE05212008FE9A018(10);
	func_531(1);
	func_530(1);
	if (!func_434())
	{
		if (!unk_0x36CC410474001FBC("LEADERBOARD_SCENE"))
		{
			unk_0x64D773F3BE6DC50A("LEADERBOARD_SCENE");
		}
	}
	if (!unk_0xB03A1684359C50A1(uParam1->f_42, 3))
	{
		*uParam0 = func_352();
		unk_0xD2A9C3F486236CC5(&(uParam1->f_42), 3);
	}
	Var32 = { func_450(unk_0x8CFC7D6E1DA5D304()) };
	if (unk_0x5C716BBF766E1C70(*uParam0))
	{
		if (((!unk_0xABC550EBCFE96BBC() || !unk_0x60D6796E6B9FD3DB()) || (!unk_0x1D206D9B095EA01E() && unk_0xE9A69EF13B00AA9D())) || Global_1835390.f_2832 != 0)
		{
			if (!unk_0x60D6796E6B9FD3DB())
			{
				if (Global_1835390.f_2829 != 2)
				{
					unk_0x62148293B793073B(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 2;
				}
			}
			else if (!unk_0x1D206D9B095EA01E() && unk_0xE9A69EF13B00AA9D())
			{
				if (Global_1835390.f_2829 != 3)
				{
					unk_0x62148293B793073B(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 3;
				}
			}
			else if (!unk_0xABC550EBCFE96BBC())
			{
				if (Global_1835390.f_2829 != 4)
				{
					unk_0x62148293B793073B(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 4;
				}
			}
			else if (Global_1835390.f_2832 != 0)
			{
				if (Global_1835390.f_2829 != 5)
				{
					unk_0x62148293B793073B(&(uParam1->f_42), 1);
					Global_1835390.f_2829 = 5;
				}
			}
			if (!unk_0xB03A1684359C50A1(uParam1->f_42, 1))
			{
				unk_0x76F4FB5EFF5BDED5(*uParam0, "CLEAR_ALL_SLOTS");
				unk_0xE2B30EB9B14EEAB2();
				func_529(*uParam0, Global_1835390.f_2780);
				if (unk_0xD76CFACBF6A6F21E(&(Global_1835390.f_2780.f_1)))
				{
					if (!func_451(uParam1->f_44))
					{
						if (Global_1835390.f_2780.f_26 > 0)
						{
							cVar9 = { Global_1835390.f_2780.f_9 };
							func_528(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &cVar9, Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							func_528(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					else if (!Global_1835390.f_2780.f_27)
					{
						StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
						if (Global_1835390.f_2780.f_26 > 0)
						{
							func_528(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							func_528(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					else
					{
						StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
						if (Global_1835390.f_2780.f_26 > 0)
						{
							func_528(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
						}
						else
						{
							func_528(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
						}
					}
					func_527(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
				}
				iVar31 = 0;
				unk_0xD2A9C3F486236CC5(&iVar31, 4);
				func_526(*uParam0, &iVar6, iVar31, 1, 1);
				iVar31 = 0;
				unk_0xD2A9C3F486236CC5(&iVar31, 5);
				func_526(*uParam0, &iVar6, iVar31, 1, 1);
				iVar31 = 0;
				unk_0xD2A9C3F486236CC5(&iVar31, 6);
				func_526(*uParam0, &iVar6, iVar31, 1, 1);
				unk_0xD2A9C3F486236CC5(&(uParam1->f_42), 1);
				func_525(*uParam0);
				unk_0x62148293B793073B(&(uParam1->f_42), 2);
				unk_0xEFF1F12403847394(1);
			}
			else
			{
				func_525(*uParam0);
			}
		}
		else
		{
			if (Global_1835390.f_2829 != 1)
			{
				unk_0x62148293B793073B(&(uParam1->f_42), 1);
				Global_1835390.f_2829 = 1;
			}
			if (!func_497(uParam1))
			{
				uParam1->f_246.f_1 = -1;
				unk_0x62148293B793073B(&(uParam1->f_42), 1);
				if (!unk_0xB03A1684359C50A1(uParam1->f_42, 0))
				{
					unk_0x76F4FB5EFF5BDED5(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0xE2B30EB9B14EEAB2();
					func_529(*uParam0, Global_1835390.f_2780);
					if (unk_0xD76CFACBF6A6F21E(&(Global_1835390.f_2780.f_1)))
					{
						if (!func_451(uParam1->f_44))
						{
							if (Global_1835390.f_2780.f_26 > 0)
							{
								cVar9 = { Global_1835390.f_2780.f_9 };
								func_528(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &cVar9, 1, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_528(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835390.f_2780.f_27)
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_528(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_528(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_528(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_528(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						func_527(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
					}
					unk_0xD2A9C3F486236CC5(&(uParam1->f_42), 0);
					unk_0x62148293B793073B(&(uParam1->f_42), 2);
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
							unk_0xD2A9C3F486236CC5(&iVar31, 4);
							func_526(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar31 = 0;
							unk_0xD2A9C3F486236CC5(&iVar31, 5);
							func_526(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar31 = 0;
							unk_0xD2A9C3F486236CC5(&iVar31, 6);
							func_526(*uParam0, &iVar6, iVar31, 0, 0);
						}
						iVar31 = 0;
						unk_0xD2A9C3F486236CC5(&iVar31, 7);
						func_496(*uParam0, iVar6, iVar31, &Var51);
						iVar6++;
						iVar0++;
					}
					Global_1835390.f_2825 = 1;
					func_361(&(Global_1835390.f_2823));
				}
				else if (func_439(&(Global_1835390.f_2823), 300, 0))
				{
					StringCopy(&Var57, "SC_LB_DL", 24);
					StringIntConCat(&Var57, Global_1835390.f_2825, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar31 = 0;
							unk_0xD2A9C3F486236CC5(&iVar31, 4);
							func_526(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar31 = 0;
							unk_0xD2A9C3F486236CC5(&iVar31, 5);
							func_526(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar31 = 0;
							unk_0xD2A9C3F486236CC5(&iVar31, 6);
							func_526(*uParam0, &iVar6, iVar31, 0, 0);
						}
						iVar31 = 0;
						unk_0xD2A9C3F486236CC5(&iVar31, 7);
						func_496(*uParam0, iVar6, iVar31, &Var57);
						iVar6++;
						iVar0++;
					}
					Global_1835390.f_2825++;
					if (Global_1835390.f_2825 > 3)
					{
						Global_1835390.f_2825 = 0;
					}
					func_361(&(Global_1835390.f_2823));
				}
				func_525(*uParam0);
			}
			else
			{
				unk_0x62148293B793073B(&(uParam1->f_42), 0);
				if (!unk_0xB03A1684359C50A1(uParam1->f_42, 1))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						uParam1->f_246.f_187[iVar0] = 0;
						iVar0++;
					}
					unk_0x76F4FB5EFF5BDED5(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0xE2B30EB9B14EEAB2();
					func_529(*uParam0, Global_1835390.f_2780);
					if (unk_0xD76CFACBF6A6F21E(&(Global_1835390.f_2780.f_1)))
					{
						if (!func_451(uParam1->f_44))
						{
							if (Global_1835390.f_2780.f_26 > 0)
							{
								cVar9 = { Global_1835390.f_2780.f_9 };
								func_528(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &cVar9, 1, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_528(*uParam0, &(Global_1835390.f_2780.f_1), &cVar25, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835390.f_2780.f_27)
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_528(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_528(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
							if (Global_1835390.f_2780.f_26 > 0)
							{
								func_528(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, Global_1835390.f_2780.f_26);
							}
							else
							{
								func_528(*uParam0, &(Global_1835390.f_2780.f_1), &cVar9, &(Global_1835390.f_2780.f_9), Global_1835390.f_2780.f_25, -1);
							}
						}
						func_527(*uParam0, "SCLB_C_RANK", &(Global_1835390.f_2717), Global_1835390.f_2708);
					}
					if (!unk_0xB03A1684359C50A1(uParam1->f_42, 6))
					{
						func_364(&Global_1839721);
						func_492(uParam1, &Global_1839721);
						func_491(uParam1, &Global_1839721);
					}
					iVar6 = 0;
					uParam1->f_246.f_2 = 0;
					if ((Global_1835390.f_2704[0] > 1 || (Global_1835390.f_2704[0] > 0 && Global_1835390.f_2775[0] != -1)) || (((Global_1835390.f_2704[0] > 0 && Global_1835390.f_2780.f_27) && func_451(uParam1->f_44)) && Global_1835390.f_2775[0] != -1))
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
									unk_0xD2A9C3F486236CC5(&iVar31, 4);
									func_526(*uParam0, &iVar6, iVar31, 0, 0);
									iVar27[0] = 1;
								}
							}
							else if (Global_1839721[iVar0 /*100*/].f_75 == 2)
							{
								if (!iVar27[1])
								{
									iVar31 = 0;
									unk_0xD2A9C3F486236CC5(&iVar31, 5);
									if ((Global_1835390.f_2704[1] < 1 && Global_1835390.f_2775[1] == -1) && !(((Global_1835390.f_2704[1] > 0 && Global_1835390.f_2780.f_27) && func_451(uParam1->f_44)) && Global_1835390.f_2775[1] != -1))
									{
										func_526(*uParam0, &iVar6, iVar31, 1, 0);
										bVar63 = true;
									}
									else
									{
										func_526(*uParam0, &iVar6, iVar31, 0, 0);
									}
									iVar27[1] = 1;
								}
							}
							else if (Global_1839721[iVar0 /*100*/].f_75 == 3)
							{
								if (!iVar27[2])
								{
									iVar31 = 0;
									unk_0xD2A9C3F486236CC5(&iVar31, 6);
									if (!unk_0xA8AC70C7EA782CC4())
									{
										bVar63 = true;
									}
									else if (!unk_0x8B446F9745A99E13())
									{
										bVar63 = true;
									}
									if ((Global_1835390.f_2704[2] < 2 && Global_1835390.f_2775[2] == -1) && !(((Global_1835390.f_2704[2] > 0 && Global_1835390.f_2780.f_27) && func_451(uParam1->f_44)) && Global_1835390.f_2775[2] != -1))
									{
										bVar63 = true;
									}
									if (bVar63)
									{
										func_526(*uParam0, &iVar6, iVar31, 1, 0);
									}
									else
									{
										func_526(*uParam0, &iVar6, iVar31, 0, 0);
									}
									iVar27[2] = 1;
								}
							}
							if (func_445(Global_1839721[iVar0 /*100*/].f_32))
							{
								if (func_451(uParam1->f_44))
								{
									unk_0xC386FB5661F5C27E(unk_0x8CFC7D6E1DA5D304(), &uVar45);
									if (!Global_1839721[iVar0 /*100*/].f_74 && unk_0x9D39145AD645E383(&(uParam1->f_44.f_3.f_1[1 /*16*/].f_8), &uVar45))
									{
										bVar63 = true;
									}
								}
								if (!bVar63)
								{
									iVar31 = 0;
									if (!Global_1835390.f_2780.f_27)
									{
										if (func_490(&(Global_1839721[iVar0 /*100*/].f_32), &Var32))
										{
											unk_0xD2A9C3F486236CC5(&iVar31, 1);
											if (uParam1->f_246.f_1 == -1)
											{
												bVar7 = true;
												uParam1->f_246.f_1 = iVar0;
												unk_0xD2A9C3F486236CC5(&iVar31, 3);
											}
										}
									}
									if (func_451(uParam1->f_44))
									{
										cVar9 = { Global_1839721[iVar0 /*100*/] };
										if (!unk_0xFAFFA408239A026B(&(Global_1839721[iVar0 /*100*/].f_84)) && !unk_0x9D39145AD645E383(&(Global_1839721[iVar0 /*100*/].f_84), ""))
										{
											StringConCat(&cVar9, "/", 64);
											StringConCat(&cVar9, &(Global_1839721[iVar0 /*100*/].f_84), 64);
										}
										func_489(*uParam0, iVar6, iVar31, Global_1839721[iVar0 /*100*/].f_59, &cVar9, &(Global_1839721[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar6;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar31;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839721[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									else
									{
										func_489(*uParam0, iVar6, iVar31, Global_1839721[iVar0 /*100*/].f_59, &(Global_1839721[iVar0 /*100*/]), &(Global_1839721[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar6;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar31;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839721[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									iVar1 = 0;
									while (iVar1 < Global_1835390.f_2708)
									{
										bVar8 = false;
										if (unk_0xB03A1684359C50A1(Global_1835390.f_2770, iVar1))
										{
											if (unk_0xB03A1684359C50A1(Global_1835390.f_2768, iVar1))
											{
												if (Global_1835390.f_2754[iVar1] == Global_1839721[iVar0 /*100*/].f_67[iVar1])
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_484(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_67[iVar1], 0, Global_1839721[iVar0 /*100*/].f_58);
											}
											else
											{
												func_484(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_67[iVar1], Global_1839721[iVar0 /*100*/].f_74, Global_1839721[iVar0 /*100*/].f_58);
											}
										}
										else
										{
											if (unk_0xB03A1684359C50A1(Global_1835390.f_2768, iVar1))
											{
												if (Global_1835390.f_2761[iVar1] == Global_1839721[iVar0 /*100*/].f_67[iVar1])
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_481(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_60[iVar1], 0);
											}
											else
											{
												func_481(Global_1835390.f_2780, iVar1, Global_1839721[iVar0 /*100*/].f_60[iVar1], Global_1839721[iVar0 /*100*/].f_74);
											}
										}
										iVar1++;
									}
									func_480();
									uVar2[(Global_1839721[iVar0 /*100*/].f_75 - 1)]++;
									if (uVar2[(Global_1839721[iVar0 /*100*/].f_75 - 1)] == 2)
									{
										if (Global_1839721[iVar0 /*100*/].f_59 > 2)
										{
											unk_0xD2A9C3F486236CC5(&iVar31, 2);
											unk_0xD2A9C3F486236CC5(&(uParam1->f_246.f_6[0 /*15*/].f_1), 2);
											func_479(*uParam0, (iVar6 - 1), iVar31);
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
						unk_0xD2A9C3F486236CC5(&iVar31, 4);
						func_526(*uParam0, &iVar6, iVar31, 1, 0);
						iVar31 = 0;
						unk_0xD2A9C3F486236CC5(&iVar31, 5);
						func_526(*uParam0, &iVar6, iVar31, 1, 0);
						iVar31 = 0;
						unk_0xD2A9C3F486236CC5(&iVar31, 6);
						func_526(*uParam0, &iVar6, iVar31, 1, 0);
					}
					unk_0xD2A9C3F486236CC5(&(uParam1->f_42), 1);
					unk_0x62148293B793073B(&(uParam1->f_42), 2);
					func_525(*uParam0);
					unk_0xEFF1F12403847394(1);
					if (uParam1->f_246.f_1 == -1 && !bVar7 == 1)
					{
						if (Global_1835390.f_2704[0] > 1)
						{
							uParam1->f_246.f_1 = 0;
							unk_0xD2A9C3F486236CC5(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
							func_479(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					func_525(*uParam0);
					func_476(uParam0, uParam1);
				}
			}
		}
	}
}

void func_476(var uParam0, var uParam1)
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
	if (unk_0xC9FF45E740135482(2))
	{
		unk_0x3C97A09EF6BCD140();
		unk_0xFCBDBEB257C6D3FB(2, 239);
		unk_0xFCBDBEB257C6D3FB(2, 240);
		unk_0xFCBDBEB257C6D3FB(2, 237);
		unk_0xFCBDBEB257C6D3FB(2, 238);
		unk_0x9C7EE7DE7041A3F4(2, 200, 1);
		if (unk_0xBAEF57A3E716CC8D(2, 241))
		{
			unk_0xB88A45766E89D996(2, 188, 1f);
		}
		if (unk_0xBAEF57A3E716CC8D(2, 242))
		{
			unk_0xB88A45766E89D996(2, 187, 1f);
		}
		if (unk_0x3D77D6EA086968DE(*uParam0, &iVar2, &iVar3, &uVar4))
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
					unk_0x929C3CBA660376D5(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					bVar0 = true;
				}
				else
				{
					unk_0xB88A45766E89D996(2, 217, 1f);
				}
			}
		}
	}
	if (!unk_0xC9FF45E740135482(2))
	{
		func_478(&uVar5, &iVar6, &uVar7, &uVar8, 0);
	}
	if (uParam1->f_246.f_2 > 0)
	{
		if (!unk_0xB03A1684359C50A1(uParam1->f_246, 0))
		{
			if ((unk_0x02EA7C5633421A0F(2, 188) || unk_0xBAEF57A3E716CC8D(2, 188)) || iVar6 < -100)
			{
				unk_0x929C3CBA660376D5(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1 = (uParam1->f_246.f_1 + -1);
				unk_0xD2A9C3F486236CC5(&(uParam1->f_246), 0);
				func_361(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_477(uParam1, 188))
		{
			unk_0x62148293B793073B(&(uParam1->f_246), 0);
		}
		if (!unk_0xB03A1684359C50A1(uParam1->f_246, 1))
		{
			if ((unk_0x02EA7C5633421A0F(2, 187) || unk_0xBAEF57A3E716CC8D(2, 187)) || iVar6 > 100)
			{
				unk_0x929C3CBA660376D5(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1++;
				unk_0xD2A9C3F486236CC5(&(uParam1->f_246), 1);
				func_361(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_477(uParam1, 187))
		{
			unk_0x62148293B793073B(&(uParam1->f_246), 1);
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
	if (!unk_0xB03A1684359C50A1(uParam1->f_246, 3))
	{
		if ((unk_0x02EA7C5633421A0F(2, 204) || unk_0x3199F4F904C324F9(2, 204)) || unk_0xFC0C00F9DE2AEC93(2, 237))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_246), 3);
			func_361(&(uParam1->f_246.f_3));
			bVar0 = true;
		}
	}
	else if (func_477(uParam1, 204))
	{
		unk_0x62148293B793073B(&(uParam1->f_246), 3);
	}
	if (uParam1->f_246.f_1 >= 0)
	{
		if (uParam1->f_246.f_1 != iVar1)
		{
			if (iVar1 >= 0)
			{
				unk_0x62148293B793073B(&(uParam1->f_246.f_6[iVar1 /*15*/].f_1), 3);
				func_479(*uParam0, uParam1->f_246.f_6[iVar1 /*15*/], uParam1->f_246.f_6[iVar1 /*15*/].f_1);
			}
			unk_0xD2A9C3F486236CC5(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
			func_479(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
			unk_0x62148293B793073B(&(uParam1->f_42), 2);
		}
		if (func_445(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2))
		{
			if (!unk_0xB03A1684359C50A1(uParam1->f_246, 2))
			{
				if (unk_0x02EA7C5633421A0F(2, 217) || unk_0x3199F4F904C324F9(2, 217))
				{
					if (!unk_0xD89462DDD07112E7())
					{
						unk_0x929C3CBA660376D5(-1, "SELECT", "HUD_FRONTEND_MP_SOUNDSET", 1);
						unk_0xD2A9C3F486236CC5(&(uParam1->f_246), 2);
						unk_0xBE8CB05EBCC31FDB(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2));
					}
				}
			}
			else if (!unk_0x02EA7C5633421A0F(2, 217))
			{
				unk_0x62148293B793073B(&(uParam1->f_246), 2);
			}
		}
	}
}

int func_477(var uParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (iParam1 == 188 || iParam1 == 187)
	{
		func_478(&uVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((!unk_0x02EA7C5633421A0F(2, iParam1) && !unk_0xBAEF57A3E716CC8D(2, iParam1)) && (iVar1 < 75 && iVar1 > -75)) || func_439(&(uParam0->f_246.f_3), 250, 0))
		{
			return 1;
		}
	}
	else if ((!unk_0x02EA7C5633421A0F(2, iParam1) && !unk_0xBAEF57A3E716CC8D(2, iParam1)) || func_439(&(uParam0->f_246.f_3), 250, 0))
	{
		return 1;
	}
	return 0;
}

void func_478(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x53E8174ABB57602F(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x53E8174ABB57602F(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x53E8174ABB57602F(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x53E8174ABB57602F(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x9163677583862019(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0x9163677583862019(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x9163677583862019(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0x9163677583862019(2, 221) * 127f));
		}
	}
}

void func_479(var uParam0, int iParam1, int iParam2)
{
	unk_0x76F4FB5EFF5BDED5(uParam0, "SET_SLOT_STATE");
	unk_0x22DD5585E00B80C3(iParam1);
	unk_0x22DD5585E00B80C3(iParam2);
	unk_0xE2B30EB9B14EEAB2();
}

void func_480()
{
	unk_0xE2B30EB9B14EEAB2();
}

void func_481(struct<30> Param0, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, int iParam43, float fParam44, bool bParam45)
{
	switch (Param0.f_29[iParam43])
	{
		case 4:
			if (bParam45)
			{
				unk_0x0ECBA72FAFCEBA59("NUMBER");
				unk_0xEF512794542297CA(fParam44, 2);
				unk_0xC30401186AC91B01();
			}
			else
			{
				unk_0x0ECBA72FAFCEBA59("SC_LB_EMPTY");
				unk_0xC30401186AC91B01();
			}
			break;
		
		case 12:
			if (bParam45)
			{
				unk_0x0ECBA72FAFCEBA59("NUMBER");
				unk_0x3A12001DBF78DC62(unk_0xF34EE736CF047844(fParam44));
				unk_0xC30401186AC91B01();
			}
			else
			{
				unk_0x0ECBA72FAFCEBA59("SC_LB_EMPTY");
				unk_0xC30401186AC91B01();
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
				if (!unk_0x46DAE6F28FA8E185())
				{
					if (Param0.f_29[iParam43] == 19 || Param0.f_29[iParam43] == 20)
					{
						fParam44 = func_483(fParam44);
					}
					else
					{
						fParam44 = func_482(fParam44);
					}
				}
				unk_0x0ECBA72FAFCEBA59("NUMBER");
				unk_0xEF512794542297CA(fParam44, 2);
				unk_0xC30401186AC91B01();
			}
			else
			{
				unk_0x0ECBA72FAFCEBA59("SC_LB_EMPTY");
				unk_0xC30401186AC91B01();
			}
			break;
		
		case 0:
			break;
	}
}

float func_482(float fParam0)
{
	return (fParam0 / 0.3048f);
}

float func_483(float fParam0)
{
	return (fParam0 / 1609.344f);
}

void func_484(struct<30> Param0, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, int iParam43, int iParam44, bool bParam45, bool bParam46)
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
				unk_0x0ECBA72FAFCEBA59("NUMBER");
				unk_0x3A12001DBF78DC62(iParam44);
				unk_0xC30401186AC91B01();
			}
			else
			{
				unk_0x0ECBA72FAFCEBA59("SC_LB_EMPTY");
				unk_0xC30401186AC91B01();
			}
			break;
		
		case 7:
			if (bParam45)
			{
				unk_0x0ECBA72FAFCEBA59("NUMBER");
				unk_0x3A12001DBF78DC62(-iParam44);
				unk_0xC30401186AC91B01();
			}
			else
			{
				unk_0x0ECBA72FAFCEBA59("SC_LB_EMPTY");
				unk_0xC30401186AC91B01();
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
					unk_0x0ECBA72FAFCEBA59("STRING");
					unk_0x1635DC214B2BB352(iParam44, 14);
					unk_0xC30401186AC91B01();
				}
				else if (Param0.f_29[iParam43] == 9)
				{
					unk_0x0ECBA72FAFCEBA59("STRING");
					unk_0x1635DC214B2BB352(iParam44, 6);
					unk_0xC30401186AC91B01();
				}
				else
				{
					unk_0x0ECBA72FAFCEBA59("STRING");
					unk_0x1635DC214B2BB352(iParam44, 2055);
					unk_0xC30401186AC91B01();
				}
			}
			else
			{
				unk_0x0ECBA72FAFCEBA59("SC_LB_EMPTY");
				unk_0xC30401186AC91B01();
			}
			break;
		
		case 6:
			if (bParam45)
			{
				if (iParam44 == 2147483647)
				{
					unk_0x0ECBA72FAFCEBA59("SC_LB_EMPTY");
					unk_0xC30401186AC91B01();
				}
				else if (iParam44 >= 3600000 || iParam44 <= -3600000)
				{
					unk_0x0ECBA72FAFCEBA59("STRING");
					unk_0x1635DC214B2BB352(iParam44, 14);
					unk_0xC30401186AC91B01();
				}
				else
				{
					unk_0x0ECBA72FAFCEBA59("STRING");
					unk_0x1635DC214B2BB352(iParam44, 2055);
					unk_0xC30401186AC91B01();
				}
			}
			else
			{
				unk_0x0ECBA72FAFCEBA59("SC_LB_EMPTY");
				unk_0xC30401186AC91B01();
			}
			break;
		
		case 2:
		case 10:
			if (bParam45)
			{
				iParam44 = (iParam44 * -1);
				if (iParam44 >= 3600000 || iParam44 <= -3600000)
				{
					unk_0x0ECBA72FAFCEBA59("STRING");
					unk_0x1635DC214B2BB352(iParam44, 14);
					unk_0xC30401186AC91B01();
				}
				else if (Param0.f_29[iParam43] == 10)
				{
					unk_0x0ECBA72FAFCEBA59("STRING");
					unk_0x1635DC214B2BB352(iParam44, 6);
					unk_0xC30401186AC91B01();
				}
				else
				{
					unk_0x0ECBA72FAFCEBA59("STRING");
					unk_0x1635DC214B2BB352(iParam44, 2055);
					unk_0xC30401186AC91B01();
				}
			}
			else
			{
				unk_0x0ECBA72FAFCEBA59("SC_LB_EMPTY");
				unk_0xC30401186AC91B01();
			}
			break;
		
		case 3:
			if (bParam46)
			{
				if (unk_0xC542C0B6386400EF(iParam44))
				{
					unk_0x0ECBA72FAFCEBA59("SCLB_VEH_CUST");
					unk_0xBEFD1ED9B6BE5127(unk_0x89CCD0AB60278D90(iParam44));
					unk_0xC30401186AC91B01();
				}
				else
				{
					unk_0x0ECBA72FAFCEBA59("SC_LB_EMPTY");
					unk_0xC30401186AC91B01();
				}
			}
			else if (unk_0xC542C0B6386400EF(iParam44))
			{
				unk_0x0ECBA72FAFCEBA59(unk_0x89CCD0AB60278D90(iParam44));
				unk_0xC30401186AC91B01();
			}
			else
			{
				unk_0x0ECBA72FAFCEBA59("SC_LB_EMPTY");
				unk_0xC30401186AC91B01();
			}
			break;
		
		case 8:
			if (func_488(iParam44) != 0)
			{
				unk_0x0ECBA72FAFCEBA59(func_485(func_488(iParam44), 0));
				unk_0xC30401186AC91B01();
			}
			else
			{
				unk_0x0ECBA72FAFCEBA59("SC_LB_EMPTY");
				unk_0xC30401186AC91B01();
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
				if (!unk_0x46DAE6F28FA8E185())
				{
					if (Param0.f_29[iParam43] == 15 || Param0.f_29[iParam43] == 16)
					{
						iParam44 = unk_0xF34EE736CF047844(func_483(unk_0xBBDA792448DB5A89(iParam44)));
					}
					else
					{
						iParam44 = unk_0xF34EE736CF047844(func_482(unk_0xBBDA792448DB5A89(iParam44)));
					}
				}
				unk_0x0ECBA72FAFCEBA59("NUMBER");
				unk_0x3A12001DBF78DC62(iParam44);
				unk_0xC30401186AC91B01();
			}
			else
			{
				unk_0x0ECBA72FAFCEBA59("SC_LB_EMPTY");
				unk_0xC30401186AC91B01();
			}
			break;
		
		case 0:
			break;
	}
}

char* func_485(int iParam0, bool bParam1)
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
		
		case joaat("weapon_pumpshotgun_mk2"):
			if (bParam1)
			{
				return "WTU_SG_PMP2";
			}
			else
			{
				return "WT_SG_PMP2";
			}
			break;
		
		case joaat("weapon_specialcarbine_mk2"):
			if (bParam1)
			{
				return "WTU_SPCARBINE2";
			}
			else
			{
				return "WT_SPCARBINE2";
			}
			break;
		
		case joaat("weapon_snspistol_mk2"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL2";
			}
			else
			{
				return "WT_SNSPISTOL2";
			}
			break;
		
		case joaat("weapon_marksmanrifle_mk2"):
			if (bParam1)
			{
				return "WTU_MKRIFLE2";
			}
			else
			{
				return "WT_MKRIFLE2";
			}
			break;
		
		case joaat("weapon_revolver_mk2"):
			if (bParam1)
			{
				return "WTU_REVOLVER2";
			}
			else
			{
				return "WT_REVOLVER2";
			}
			break;
		
		case joaat("weapon_bullpuprifle_mk2"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE2";
			}
			else
			{
				return "WT_BULLRIFLE2";
			}
			break;
		
		case joaat("weapon_doubleaction"):
			if (bParam1)
			{
				return "WTU_REV_DA";
			}
			else
			{
				return "WT_REV_DA";
			}
			break;
		
		default:
			if (func_487(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_486(&(Var0.f_31));
				}
				else
				{
					return func_486(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_486(var uParam0)
{
	return uParam0;
}

int func_487(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0xA3657E0D395F8A0F();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x5C134543285617E0(iVar0, uParam1))
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

int func_488(int iParam0)
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

void func_489(var uParam0, int iParam1, int iParam2, int iParam3, char[4] cParam4, char[4] cParam5)
{
	unk_0x76F4FB5EFF5BDED5(uParam0, "SET_SLOT");
	unk_0x22DD5585E00B80C3(iParam1);
	unk_0x22DD5585E00B80C3(iParam2);
	if (iParam3 > 0)
	{
		unk_0x0ECBA72FAFCEBA59("NUMBER");
		unk_0x3A12001DBF78DC62(iParam3);
		unk_0xC30401186AC91B01();
	}
	else
	{
		unk_0x0ECBA72FAFCEBA59("SC_LB_EMPTY");
		unk_0xC30401186AC91B01();
	}
	unk_0xC34A54899652DAAF(cParam4);
	unk_0xC34A54899652DAAF(uParam5);
}

int func_490(var uParam0, var uParam1)
{
	if (!func_445(*uParam0))
	{
		return 0;
	}
	if (!func_445(*uParam1))
	{
		return 0;
	}
	if (unk_0x9BFCAB639B5DFD02(uParam0, uParam1))
	{
		return 1;
	}
	return 0;
}

void func_491(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	var uVar77;
	
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	if (!unk_0xB03A1684359C50A1(uParam0->f_42, 5) && !unk_0xB03A1684359C50A1(uParam0->f_42, 6))
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

void func_492(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (!unk_0xB03A1684359C50A1(uParam0->f_42, 5) && !unk_0xB03A1684359C50A1(uParam0->f_42, 6))
	{
		iVar4 = 0;
		while (iVar4 < 12)
		{
			if (func_495(uParam1, iVar3, &uVar0, 0))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 1;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_495(uParam1, iVar3, &uVar1, 1))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 2;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_495(uParam1, iVar3, &uVar2, 2))
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
		func_493(uParam1);
	}
}

void func_493(var uParam0)
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
	Var3 = { func_450(unk_0x8CFC7D6E1DA5D304()) };
	if (unk_0x9FAAEDE0F02BD27F(Global_1835390.f_2826))
	{
		iVar16 = unk_0x4C05869FE8EE41E6(Global_1835390.f_2826);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar16)
		{
			if (iVar0 < 12)
			{
				func_494(&Global_1839591);
				iVar2 = 0;
				unk_0x35F8BB728ED5BEB5(Global_1835390.f_2826, iVar0, &Global_1839591);
				*(uParam0[iVar0 /*100*/]) = { Global_1839591.f_1 };
				(uParam0[iVar0 /*100*/])->f_16 = { Global_1839591.f_17 };
				(uParam0[iVar0 /*100*/])->f_32 = { Global_1839591.f_33 };
				(uParam0[iVar0 /*100*/])->f_45 = { Global_1839591.f_46 };
				(uParam0[iVar0 /*100*/])->f_58 = Global_1839591.f_59;
				(uParam0[iVar0 /*100*/])->f_59 = Global_1839591.f_60;
				Global_1835390.f_2708 = Global_1839591.f_62;
				Global_1835390.f_2769 = Global_1839591.f_63;
				iVar2 = 0;
				if (unk_0xB03A1684359C50A1(Global_1839591.f_61, 1))
				{
					iVar2 = 1;
				}
				else if (unk_0xB03A1684359C50A1(Global_1839591.f_61, 2))
				{
					iVar2 = 2;
				}
				else if (unk_0xB03A1684359C50A1(Global_1839591.f_61, 3))
				{
					iVar2 = 3;
				}
				Global_1835390.f_2704[(iVar2 - 1)]++;
				(uParam0[iVar0 /*100*/])->f_75 = iVar2;
				if ((uParam0[iVar0 /*100*/])->f_59 != -1)
				{
					if (unk_0xB03A1684359C50A1(Global_1839591.f_61, 0))
					{
						(uParam0[iVar0 /*100*/])->f_74 = 1;
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_74 = 0;
					}
					if (func_490(&((uParam0[iVar0 /*100*/])->f_32), &Var3))
					{
						Global_1835390.f_2775[(iVar2 - 1)] = 0;
					}
				}
				iVar1 = 0;
				while (iVar1 < Global_1839591.f_62)
				{
					if (unk_0xB03A1684359C50A1(Global_1839591.f_63, iVar1))
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

void func_494(var uParam0)
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

int func_495(var uParam0, int iParam1, var uParam2, int iParam3)
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
				StringCopy(uParam0[iParam1 /*100*/], unk_0x3E8AA4B2B7764D27(unk_0x8CFC7D6E1DA5D304()), 64);
				(uParam0[iParam1 /*100*/])->f_32 = { func_450(unk_0x8CFC7D6E1DA5D304()) };
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

void func_496(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	unk_0xD2A9C3F486236CC5(&iParam2, 7);
	unk_0x76F4FB5EFF5BDED5(uParam0, "SET_SLOT");
	unk_0x22DD5585E00B80C3(iParam1);
	unk_0x22DD5585E00B80C3(iParam2);
	unk_0x0ECBA72FAFCEBA59(sParam3);
	unk_0x27FC18DF46755EFC();
	unk_0xE2B30EB9B14EEAB2();
}

int func_497(var uParam0)
{
	if (!Global_1835388)
	{
		if (!func_465(&(Global_1835390.f_2827)))
		{
			func_440(&(Global_1835390.f_2827), 1, 0);
			return 0;
		}
		else if (!func_439(&(Global_1835390.f_2827), 1000, 1))
		{
			return 0;
		}
	}
	if (((!unk_0xABC550EBCFE96BBC() || !unk_0x60D6796E6B9FD3DB()) || (!unk_0x1D206D9B095EA01E() && unk_0xE9A69EF13B00AA9D())) || Global_1835390.f_2832 != 0)
	{
		unk_0x62148293B793073B(&(uParam0->f_42), 4);
		return 1;
	}
	if (!unk_0xB03A1684359C50A1(uParam0->f_42, 4))
	{
		func_524(uParam0);
		unk_0xD2A9C3F486236CC5(&(uParam0->f_42), 4);
		return 0;
	}
	else if (unk_0xB03A1684359C50A1(uParam0->f_42, 5))
	{
		(*uParam0)[0] = 2;
		(*uParam0)[1] = 1;
		(*uParam0)[2] = 3;
		return 1;
	}
	if (!func_522(uParam0))
	{
		return 0;
	}
	if (!func_520(uParam0))
	{
		return 0;
	}
	if (!func_513(uParam0))
	{
		return 0;
	}
	if (!unk_0xB03A1684359C50A1(uParam0->f_42, 6))
	{
		func_364(&Global_1839721);
		func_492(uParam0, &Global_1839721);
		func_491(uParam0, &Global_1839721);
		unk_0xD2A9C3F486236CC5(&(uParam0->f_42), 6);
	}
	if (!unk_0xB03A1684359C50A1(uParam0->f_42, 7))
	{
		if (!func_465(&(Global_1835390.f_2830)))
		{
			func_440(&(Global_1835390.f_2830), 1, 0);
		}
		else if (func_439(&(Global_1835390.f_2830), 30000, 1))
		{
			unk_0xD2A9C3F486236CC5(&(uParam0->f_42), 7);
		}
		if (func_510(&Global_1839721))
		{
		}
		else
		{
			return 0;
		}
		if (func_507(&Global_1839721))
		{
		}
		else
		{
			return 0;
		}
		if (func_501(&Global_1839721))
		{
			func_498(&Global_1839721);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_42), 7);
			func_498(&Global_1839721);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_498(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_500(Global_1835390.f_2826);
	if (Global_1838575.f_81[iVar2] != 0)
	{
		func_499(-1, iVar2);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_494(&Global_1839591);
		if ((uParam0[iVar0 /*100*/])->f_75 != 0)
		{
			Global_1839591 = Global_1835390.f_2826;
			Global_1839591.f_1 = { *(uParam0[iVar0 /*100*/]) };
			if (unk_0x9D39145AD645E383(&((uParam0[iVar0 /*100*/])->f_16), ""))
			{
				Global_1839591.f_17 = { *(uParam0[iVar0 /*100*/]) };
			}
			else
			{
				Global_1839591.f_17 = { (uParam0[iVar0 /*100*/])->f_16 };
			}
			Global_1839591.f_33 = { (uParam0[iVar0 /*100*/])->f_32 };
			if (func_445((uParam0[iVar0 /*100*/])->f_45))
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
				unk_0xD2A9C3F486236CC5(&(Global_1839591.f_61), 0);
			}
			else
			{
				unk_0x62148293B793073B(&(Global_1839591.f_61), 0);
			}
			unk_0xD2A9C3F486236CC5(&(Global_1839591.f_61), (uParam0[iVar0 /*100*/])->f_75);
			iVar1 = 0;
			while (iVar1 < Global_1839591.f_62)
			{
				if (unk_0xB03A1684359C50A1(Global_1839591.f_63, iVar1))
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
			unk_0x3EC7F1B6EC17E298(&Global_1839591);
		}
		iVar0++;
	}
	Global_1838575.f_87[iVar2 /*3*/] = { func_224(unk_0x8CFC7D6E1DA5D304()) };
}

void func_499(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != -1)
	{
		if (unk_0x9FAAEDE0F02BD27F(Global_1838575.f_81[iParam1]))
		{
			unk_0xF92334065A9E69CA(Global_1838575.f_81[iParam1]);
		}
		Global_1838575.f_81[iParam1] = 0;
	}
	else if (iParam0 != -1)
	{
		if (unk_0x9FAAEDE0F02BD27F(iParam0))
		{
			unk_0xF92334065A9E69CA(iParam0);
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

int func_500(int iParam0)
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
		else if (unk_0x9FAAEDE0F02BD27F(Global_1838575.f_81[iVar0]))
		{
			iVar3 = unk_0xE9A7A913C79C982B(Global_1838575.f_81[iVar0]);
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

int func_501(var uParam0)
{
	int iVar0;
	int iVar1;
	
	switch ((uParam0[0 /*100*/])->f_76)
	{
		case 0:
			func_505(uParam0);
			if (unk_0x0A8A596EB9C068FA() && !unk_0xC8543F17BC4C0591(0))
			{
				(uParam0[0 /*100*/])->f_76 = 3;
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if (func_445((uParam0[iVar0 /*100*/])->f_32))
				{
					if (!func_504(&((uParam0[iVar0 /*100*/])->f_32), &Global_1841018))
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
			if (func_502(&((uParam0[1 /*100*/])->f_76), &(Global_1841018.f_206), &Global_1841018, &(Global_1841018.f_157)))
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
					if (func_445((uParam0[iVar0 /*100*/])->f_32) && func_445(Global_1841018[iVar1 /*13*/]))
					{
						if (unk_0x9BFCAB639B5DFD02(&((uParam0[iVar0 /*100*/])->f_32), &(Global_1841018[iVar1 /*13*/])))
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

int func_502(var uParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	int iVar35;
	
	switch (*uParam0)
	{
		case 0:
			if (unk_0x67D53270E2FB68B6())
			{
			}
			else
			{
				unk_0xD6A8CEFE346F0C89();
				unk_0xC778ABC46341814D(uParam2, *uParam1);
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (!unk_0x67D53270E2FB68B6())
			{
				if (unk_0x2942BD516B84C7AE())
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
				if (unk_0xBA128286B07F1082(uParam2[iVar35 /*13*/], &uVar0))
				{
					func_503(&uVar0, uParam3[iVar35 /*4*/]);
				}
				iVar35++;
			}
			if (unk_0x67D53270E2FB68B6())
			{
				unk_0x4307673313754440();
			}
			else
			{
				unk_0xD6A8CEFE346F0C89();
			}
			*uParam0 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_503(var uParam0, var uParam1)
{
	unk_0x14FE7512F6617D5D(uParam0, 35, uParam1);
}

int func_504(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_445(*(uParam1[iVar0 /*13*/])))
		{
			if (unk_0x9BFCAB639B5DFD02(uParam0, uParam1[iVar0 /*13*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_505(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_506(&(Global_1841018[iVar0 /*13*/]));
		StringCopy(&(Global_1841018.f_157[iVar0 /*4*/]), "", 16);
		iVar0++;
	}
	if ((uParam0[0 /*100*/])->f_76 > 0)
	{
		(uParam0[0 /*100*/])->f_76 = 0;
		(uParam0[1 /*100*/])->f_76 = 0;
		if (!unk_0x67D53270E2FB68B6())
		{
			unk_0xD6A8CEFE346F0C89();
		}
	}
	if (unk_0x67D53270E2FB68B6())
	{
		unk_0x4307673313754440();
	}
	Global_1841018.f_206 = 0;
}

void func_506(var uParam0)
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

int func_507(var uParam0)
{
	int iVar0;
	
	if (unk_0xC339C5C5B5E8BC5B())
	{
		return 1;
	}
	else if (unk_0x929A0C5D6A986B4F())
	{
		if (!func_509(uParam0))
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_508(&((uParam0[iVar0 /*100*/])->f_78), &((uParam0[iVar0 /*100*/])->f_32), uParam0[iVar0 /*100*/]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_508(var uParam0, var uParam1, char* sParam2)
{
	if (*uParam0 == 2)
	{
		return 1;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_445(*uParam1))
			{
				if (!unk_0x72F5C6AABDE4CB75(uParam1))
				{
					if (unk_0x929A0C5D6A986B4F())
					{
						if (unk_0x3958E8BDD430EA82(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else if (unk_0x35D499EE14C3D367())
					{
						if (unk_0x3958E8BDD430EA82(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam2, unk_0xBC706206837F4A11(uParam1), 64);
						if (unk_0xC57A05B38A912073())
						{
						}
						else if (unk_0x0A8A596EB9C068FA())
						{
						}
						else if (unk_0xC339C5C5B5E8BC5B())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam2, unk_0x3E8AA4B2B7764D27(unk_0x7370302DFEE7F45E(uParam1)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0x72F5C6AABDE4CB75(uParam1))
			{
				if (!unk_0x18BFCE3B69004616())
				{
					if (unk_0x948C0172AFA8332E())
					{
						StringCopy(sParam2, unk_0xBC706206837F4A11(uParam1), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam2, unk_0x3E8AA4B2B7764D27(unk_0x7370302DFEE7F45E(uParam1)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_509(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x929A0C5D6A986B4F())
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
				func_506(&(Global_1835390.f_3026[iVar1 /*13*/]));
				if (func_445((uParam0[iVar1 /*100*/])->f_32))
				{
					Global_1835390.f_3026[Global_1835390.f_3183 /*13*/] = { (uParam0[iVar1 /*100*/])->f_32 };
					Global_1835390.f_3183++;
				}
				iVar1++;
			}
			if (Global_1835390.f_3183 > 0)
			{
				(uParam0[0 /*100*/])->f_79 = unk_0x00BC2C8602FC8E92(&(Global_1835390.f_3026), Global_1835390.f_3183);
				(uParam0[0 /*100*/])->f_78 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0x6E013013A50C48A6((uParam0[0 /*100*/])->f_79, &(Global_1835390.f_2833), Global_1835390.f_3183);
			if (iVar0 == 0)
			{
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (func_445((uParam0[iVar1 /*100*/])->f_32))
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

int func_510(var uParam0)
{
	int iVar0;
	
	if (unk_0x929A0C5D6A986B4F())
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_512(&((uParam0[iVar0 /*100*/])->f_77), &((uParam0[iVar0 /*100*/])->f_16), &((uParam0[iVar0 /*100*/])->f_84), &(Global_1835390.f_2833), &((uParam0[iVar0 /*100*/])->f_79)))
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
			if (!func_511(&((uParam0[iVar0 /*100*/])->f_77), (uParam0[iVar0 /*100*/])->f_16, &((uParam0[iVar0 /*100*/])->f_84)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_511(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17)
{
	struct<13> Var0;
	
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0xFAFFA408239A026B(&uParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0xCCC0AAF1E92BD78D(&uParam1, &Var0, 13);
	switch (*uParam0)
	{
		case 0:
			if (func_445(Var0))
			{
				if (!unk_0x72F5C6AABDE4CB75(&Var0))
				{
					if (unk_0x35D499EE14C3D367() || unk_0x929A0C5D6A986B4F())
					{
						if (unk_0x3958E8BDD430EA82(&Var0))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam17, unk_0xBC706206837F4A11(&Var0), 64);
						if (unk_0xC57A05B38A912073())
						{
						}
						else if (unk_0x0A8A596EB9C068FA())
						{
						}
						else if (unk_0xC339C5C5B5E8BC5B())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam17, unk_0x3E8AA4B2B7764D27(unk_0x7370302DFEE7F45E(&Var0)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0x72F5C6AABDE4CB75(&Var0))
			{
				if (!unk_0x18BFCE3B69004616())
				{
					if (unk_0x948C0172AFA8332E())
					{
						StringCopy(sParam17, unk_0xBC706206837F4A11(&Var0), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam17, unk_0x3E8AA4B2B7764D27(unk_0x7370302DFEE7F45E(&Var0)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_512(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4)
{
	int iVar0;
	struct<13> Var1[1];
	
	if (!unk_0x929A0C5D6A986B4F())
	{
		return 1;
	}
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0xFAFFA408239A026B(sParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0xCCC0AAF1E92BD78D(sParam1, &(Var1[0 /*13*/]), 13);
	switch (*uParam0)
	{
		case 0:
			StringCopy(uParam3[0 /*16*/], "", 64);
			if (func_445(Var1[0 /*13*/]))
			{
				if (!unk_0x72F5C6AABDE4CB75(&(Var1[0 /*13*/])))
				{
					*uParam4 = unk_0x00BC2C8602FC8E92(&Var1, 1);
					*uParam0 = 1;
				}
				else
				{
					StringCopy(sParam2, unk_0x3E8AA4B2B7764D27(unk_0x7370302DFEE7F45E(&(Var1[0 /*13*/]))), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0x6E013013A50C48A6(*uParam4, uParam3, 1);
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

int func_513(var uParam0)
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
	Var116 = { func_450(unk_0x8CFC7D6E1DA5D304()) };
	switch ((*uParam0)[iVar113])
	{
		case 0:
			Global_1835390.f_2775[iVar113] = -1;
			Global_1835390.f_2704[iVar113] = 0;
			Global_1835013.f_374 = -1;
			if (unk_0xE906D9FB40E35957())
			{
				if (unk_0x9FDA5C5DFB3FE364(&Var116))
				{
					if (unk_0x4AEF279CFD4A57C6(&(uParam0->f_7), 35, &Var116))
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
			if (func_430(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var116, func_519(), 0, 0, 0))
			{
				func_448(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x87C1B430F044CFAC(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						iVar111 = 0;
						iVar106 = 0;
						if (func_519())
						{
							iVar111 = 0;
							while (iVar111 < Var98.f_3)
							{
								unk_0x27784D25EDAE6D24(iVar111, &Var0);
								if (Global_1835013.f_374 < 0)
								{
									if (func_490(&Var0, &Var116) || func_490(&Var0, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var0.f_96;
									}
								}
								if (iVar109 < 0)
								{
									if (unk_0xB03A1684359C50A1(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0x41ECC212062282FF(iVar111, 0))
										{
											iVar109 = iVar111;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0x99A322ED74E76285(iVar111, 0))
									{
										iVar109 = iVar111;
									}
								}
								func_518(&Var0);
								iVar111++;
							}
							if (iVar109 < 0)
							{
								iVar109 = Var98.f_3;
							}
						}
						iVar111 = 0;
						unk_0x27784D25EDAE6D24(0, &Var0);
						if (Var0.f_96 <= 1)
						{
							if (Global_1835390.f_2704[iVar113] < 12)
							{
								if (func_519() && iVar109 == 0)
								{
									func_517(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Var0.f_96);
									Global_1835390.f_2775[iVar113] = 0;
									Global_1835390.f_2704[iVar113]++;
								}
								if (func_519() && (func_490(&Var0, &Var116) || func_490(&Var0, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_490(&Var0, &Var116))
									{
										iVar109 = 0;
										Global_1835390.f_2775[iVar113] = 0;
									}
									MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_32 = { Var0 };
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_59 = Var0.f_96;
									if (func_516(uParam0->f_44))
									{
										iVar108 = unk_0x41ECC212062282FF(0, Global_1835390.f_2709);
										if (iVar108 == 1)
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 0;
										}
									}
									if (func_451(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835390.f_2708)
									{
										if (unk_0xB03A1684359C50A1(Global_1835390.f_2769, Global_1835390.f_2710[iVar107]))
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_67[iVar107] = unk_0x41ECC212062282FF(0, Global_1835390.f_2710[iVar107]);
										}
										else
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_60[iVar107] = unk_0x99A322ED74E76285(0, Global_1835390.f_2710[iVar107]);
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
						if (!func_519())
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
						func_518(&Var0);
						iVar111 = iVar110;
						while (iVar111 <= (Var98.f_3 - 1))
						{
							unk_0x27784D25EDAE6D24(iVar111, &Var0);
							if (Global_1835390.f_2704[iVar113] < 12 && Var0.f_96 > 1)
							{
								if (func_519() && iVar109 == iVar111)
								{
									if (!func_490(&(Global_1835390[iVar113 /*901*/][0 /*75*/].f_32), &Var116))
									{
										func_517(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Var0.f_96);
										Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
										Global_1835390.f_2704[iVar113]++;
									}
								}
								if (func_519() && (func_490(&Var0, &Var116) || func_490(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835390.f_2704[iVar113] < 12)
								{
									if (func_445(Var0) && !func_490(&Var0, &(Global_1835390[iVar113 /*901*/][0 /*75*/].f_32)))
									{
										if (func_490(&Var0, &Var116))
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
										if (func_516(uParam0->f_44))
										{
											iVar108 = unk_0x41ECC212062282FF(iVar111, Global_1835390.f_2709);
											if (iVar108 == 1)
											{
												Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 0;
											}
										}
										if (func_451(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar106 = 0;
										iVar106 = 0;
										while (iVar106 < Global_1835390.f_2708)
										{
											if (unk_0xB03A1684359C50A1(Global_1835390.f_2769, Global_1835390.f_2710[iVar106]))
											{
												Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_67[iVar106] = unk_0x41ECC212062282FF(iVar111, Global_1835390.f_2710[iVar106]);
											}
											else
											{
												Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_60[iVar106] = unk_0x99A322ED74E76285(iVar111, Global_1835390.f_2710[iVar106]);
											}
											iVar106++;
										}
										Global_1835390.f_2704[iVar113]++;
									}
								}
							}
							func_518(&Var0);
							iVar111++;
						}
						unk_0x4FE4CE1E2DF52382();
						func_366(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar112)
						{
							if (Global_1835390.f_2775[iVar113] == -1 && func_519())
							{
								if (Global_1835390.f_2704[iVar113] >= 1)
								{
									func_517(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_517(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
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
						unk_0x4FE4CE1E2DF52382();
						func_366(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835390.f_2775[iVar113] = -1;
						(*uParam0)[iVar113] = 2;
					}
				}
				else
				{
					func_366(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835390.f_2775[iVar113] = -1;
					(*uParam0)[iVar113] = 2;
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2832), iVar113);
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
			if (func_515(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar115))
			{
				func_448(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x87C1B430F044CFAC(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						iVar106 = 0;
						while (iVar106 < Var98.f_3)
						{
							unk_0x27784D25EDAE6D24(iVar106, &Var0);
							bVar114 = false;
							if (Global_1835390[iVar113 /*901*/][0 /*75*/].f_59 > 1 || Global_1835390[iVar113 /*901*/][0 /*75*/].f_59 <= 0)
							{
								bVar114 = true;
							}
							if (Global_1835390.f_2704[iVar113] < 12 || bVar114)
							{
								if (func_519() && (func_490(&Var0, &Var116) || func_490(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (iVar106 == 0 || bVar114)
								{
									MemCopy(&(Global_1835390[iVar113 /*901*/][0 /*75*/]), {Var0.f_13}, 16);
									Global_1835390[iVar113 /*901*/][0 /*75*/].f_32 = { Var0 };
									Global_1835390[iVar113 /*901*/][0 /*75*/].f_59 = Var0.f_96;
									if (func_516(uParam0->f_44))
									{
										iVar108 = unk_0x41ECC212062282FF(0, Global_1835390.f_2709);
										if (iVar108 == 1)
										{
											Global_1835390[iVar113 /*901*/][0 /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar113 /*901*/][0 /*75*/].f_58 = 0;
										}
									}
									if (func_451(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar113 /*901*/][0 /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar113 /*901*/][0 /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835390.f_2708)
									{
										if (unk_0xB03A1684359C50A1(Global_1835390.f_2769, Global_1835390.f_2710[iVar107]))
										{
											Global_1835390[iVar113 /*901*/][0 /*75*/].f_67[iVar107] = unk_0x41ECC212062282FF(0, Global_1835390.f_2710[iVar107]);
										}
										else
										{
											Global_1835390[iVar113 /*901*/][0 /*75*/].f_60[iVar107] = unk_0x99A322ED74E76285(0, Global_1835390.f_2710[iVar107]);
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
									if (func_516(uParam0->f_44))
									{
										iVar108 = unk_0x41ECC212062282FF(iVar106, Global_1835390.f_2709);
										if (iVar108 == 1)
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 0;
										}
									}
									if (func_451(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_59 = Var0.f_96;
									Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835390.f_2708)
									{
										if (unk_0xB03A1684359C50A1(Global_1835390.f_2769, Global_1835390.f_2710[iVar107]))
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_67[iVar107] = unk_0x41ECC212062282FF(iVar106, Global_1835390.f_2710[iVar107]);
										}
										else
										{
											Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_60[iVar107] = unk_0x99A322ED74E76285(iVar106, Global_1835390.f_2710[iVar107]);
										}
										iVar107++;
									}
									if (iVar106 != 0)
									{
										Global_1835390.f_2704[iVar113]++;
									}
								}
							}
							func_518(&Var0);
							iVar106++;
						}
					}
					unk_0x4FE4CE1E2DF52382();
					func_366(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar113] = 3;
				}
				else
				{
					unk_0x4FE4CE1E2DF52382();
					func_366(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2832), iVar113);
					Global_1835390.f_2704[iVar113] = 0;
					(*uParam0)[iVar113] = 3;
				}
				if (Global_1835390.f_2775[iVar113] == -1 && func_519())
				{
					if (Global_1835390.f_2704[iVar113] >= 1)
					{
						func_517(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
					}
					else
					{
						func_517(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
					}
					Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
					Global_1835390.f_2704[iVar113]++;
				}
			}
			break;
		
		case 3:
			func_514(iVar113, Global_1835013.f_374);
			(*uParam0)[iVar113] = 4;
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_514(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((func_519() && Global_1835390.f_2704[iParam0] > Global_1835390.f_2775[iParam0]) && Global_1835390.f_2775[iParam0] >= 0)
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
		if (!func_519())
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

int func_515(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_437() && !func_433())
			{
				func_431(*uParam2);
				if (unk_0x510A1AC549A7A003(uParam2, iParam3, iParam4))
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
			if (!unk_0x50FF74F38183101F(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x4CABACA7D7715244(*uParam2, uParam2->f_1, 0))
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

int func_516(int iParam0)
{
	if ((((((iParam0 == 815 || iParam0 == 824) || iParam0 == 825) || iParam0 == 826) || iParam0 == 827) || iParam0 == 828) || iParam0 == 849)
	{
		return 1;
	}
	return 0;
}

void func_517(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_451(uParam0->f_44))
	{
		MemCopy(sParam1, {Global_1835013.f_355}, 16);
		sParam1->f_32 = { Global_1835013.f_361 };
		MemCopy(&(sParam1->f_16), {Global_1835013.f_349}, 16);
	}
	else
	{
		StringCopy(sParam1, unk_0x3E8AA4B2B7764D27(unk_0x8CFC7D6E1DA5D304()), 64);
		sParam1->f_32 = { func_450(unk_0x8CFC7D6E1DA5D304()) };
	}
	sParam1->f_59 = iParam2;
	if (func_516(uParam0->f_44))
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
		if (unk_0xB03A1684359C50A1(Global_1835013.f_142.f_2, Global_1835390.f_2710[iVar1]))
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

void func_518(var uParam0)
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

int func_519()
{
	if (Global_1835388 && Global_1835389)
	{
		return 1;
	}
	return 0;
}

int func_520(var uParam0)
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
	Var114 = { func_450(unk_0x8CFC7D6E1DA5D304()) };
	switch ((*uParam0)[1])
	{
		case 0:
			iVar107 = unk_0x924E5AC4702D8B8C();
			Global_1835390.f_2775[1] = -1;
			Global_1835013.f_374 = -1;
			Global_1835390.f_2704[iVar113] = 0;
			if (iVar107 > 0)
			{
				if (func_519())
				{
					bVar112 = false;
				}
				else
				{
					bVar112 = true;
				}
				if (func_521(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &(uParam0->f_113), uParam0->f_113[0 /*66*/], bVar112, 0, 100))
				{
					func_448(&Var98, &(uParam0->f_44));
					if (uParam0->f_5 && unk_0x87C1B430F044CFAC(&Var98))
					{
						if (func_519())
						{
							iVar110 = 0;
							iVar110 = 0;
							while (iVar110 < Var98.f_3)
							{
								if (iVar108 < 0)
								{
									unk_0x27784D25EDAE6D24(iVar110, &Var0);
									if (func_451(uParam0->f_44))
									{
										if (Global_1835013.f_374 < 0)
										{
											if (func_490(&Var0, &(Global_1835013.f_361)))
											{
												Global_1835013.f_374 = Var0.f_96;
											}
										}
									}
									if (unk_0xB03A1684359C50A1(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0x41ECC212062282FF(iVar110, 0))
										{
											iVar108 = iVar110;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0x99A322ED74E76285(iVar110, 0))
									{
										iVar108 = iVar110;
									}
									func_518(&Var0);
								}
								iVar110++;
							}
							if (iVar108 < 0)
							{
								iVar108 = Var98.f_3;
							}
						}
						iVar110 = 0;
						if (func_519() && iVar108 == 0)
						{
							if (Global_1835390.f_2704[iVar113] < 12)
							{
								func_517(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
								Global_1835390.f_2775[iVar113] = 0;
								Global_1835390.f_2704[iVar113]++;
							}
						}
						if (Var98.f_3 > 0)
						{
							unk_0x27784D25EDAE6D24(0, &Var0);
							if (func_519() && (func_490(&Var0, &Var114) || func_490(&Var0, &(Global_1835013.f_361))))
							{
							}
							else if (func_445(Var0) && Global_1835390.f_2704[iVar113] < 12)
							{
								if (func_490(&Var0, &Var114))
								{
									iVar108 = 0;
									Global_1835390.f_2775[1] = 0;
								}
								MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
								Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_32 = { Var0 };
								Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_59 = 1;
								if (func_516(uParam0->f_44))
								{
									iVar111 = unk_0x41ECC212062282FF(0, Global_1835390.f_2709);
									if (iVar111 == 1)
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 1;
									}
									else
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_58 = 0;
									}
								}
								if (func_451(uParam0->f_44))
								{
									MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
								}
								Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_74 = 1;
								iVar106 = 0;
								while (iVar106 < Global_1835390.f_2708)
								{
									if (unk_0xB03A1684359C50A1(Global_1835390.f_2769, Global_1835390.f_2710[iVar106]))
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_67[iVar106] = unk_0x41ECC212062282FF(0, Global_1835390.f_2710[iVar106]);
									}
									else
									{
										Global_1835390[1 /*901*/][Global_1835390.f_2704[iVar113] /*75*/].f_60[iVar106] = unk_0x99A322ED74E76285(0, Global_1835390.f_2710[iVar106]);
									}
									iVar106++;
								}
								Global_1835390.f_2704[1]++;
							}
							else
							{
								func_518(&Var0);
								unk_0x4FE4CE1E2DF52382();
								func_366(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
								Global_1835390.f_2704[1] = 0;
								(*uParam0)[1] = 1;
								if (Global_1835390.f_2775[iVar113] == -1 && func_519())
								{
									if (Global_1835390.f_2704[iVar113] >= 1)
									{
										func_517(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
									}
									else
									{
										func_517(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
									}
									Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
									Global_1835390.f_2704[iVar113]++;
								}
								return 0;
							}
							func_518(&Var0);
						}
						else
						{
							Global_1835390.f_2704[1] = 0;
							func_518(&Var0);
							unk_0x4FE4CE1E2DF52382();
							func_366(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
							if (Global_1835390.f_2775[iVar113] == -1 && func_519())
							{
								if (Global_1835390.f_2704[iVar113] >= 1)
								{
									func_517(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_517(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
								}
								Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
								Global_1835390.f_2704[iVar113]++;
							}
							(*uParam0)[1] = 1;
							return 0;
						}
						if (!func_519())
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
							unk_0x27784D25EDAE6D24(iVar110, &Var0);
							if (Global_1835390.f_2704[iVar113] < 12 && Var0.f_96 > 1)
							{
								if (func_519() && iVar108 == iVar110)
								{
									if (!func_490(&(Global_1835390[iVar113 /*901*/][0 /*75*/].f_32), &Var114))
									{
										func_517(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Var0.f_96);
										Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_59 = iVar110 + 1;
										Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
										Global_1835390.f_2704[iVar113]++;
									}
								}
								if (func_519() && (func_490(&Var0, &Var114) || func_490(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835390.f_2704[1] < 12)
								{
									if (func_445(Var0) && !func_490(&Var0, &(Global_1835390[iVar113 /*901*/][0 /*75*/].f_32)))
									{
										if (func_490(&Var0, &Var114))
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
										if (func_516(uParam0->f_44))
										{
											iVar111 = unk_0x41ECC212062282FF(iVar110, Global_1835390.f_2709);
											if (iVar111 == 1)
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_58 = 0;
											}
										}
										if (func_451(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar106 = 0;
										while (iVar106 < Global_1835390.f_2708)
										{
											if (unk_0xB03A1684359C50A1(Global_1835390.f_2769, Global_1835390.f_2710[iVar106]))
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_67[iVar106] = unk_0x41ECC212062282FF(iVar110, Global_1835390.f_2710[iVar106]);
											}
											else
											{
												Global_1835390[1 /*901*/][Global_1835390.f_2704[1] /*75*/].f_60[iVar106] = unk_0x99A322ED74E76285(iVar110, Global_1835390.f_2710[iVar106]);
											}
											iVar106++;
										}
										Global_1835390.f_2704[1]++;
									}
								}
							}
							func_518(&Var0);
							iVar110++;
						}
						unk_0x4FE4CE1E2DF52382();
						func_366(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						(*uParam0)[1] = 1;
						if (Global_1835390.f_2775[iVar113] == -1 && func_519())
						{
							if (Global_1835390.f_2704[iVar113] >= 1)
							{
								func_517(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), Global_1835390[iVar113 /*901*/][(Global_1835390.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
							}
							else
							{
								func_517(uParam0, &(Global_1835390[iVar113 /*901*/][Global_1835390.f_2704[iVar113] /*75*/]), 1);
							}
							Global_1835390.f_2775[iVar113] = Global_1835390.f_2704[iVar113];
							Global_1835390.f_2704[iVar113]++;
						}
						return 0;
					}
					else
					{
						func_366(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835390.f_2704[1] = 0;
						(*uParam0)[1] = 1;
						unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2832), 1);
						return 0;
					}
				}
			}
			else
			{
				func_366(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
				Global_1835390.f_2704[1] = 0;
				(*uParam0)[1] = 1;
				return 0;
			}
			break;
		
		case 1:
			func_514(iVar113, Global_1835013.f_374);
			(*uParam0)[1] = 2;
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_521(var uParam0, var uParam1, var* uParam2, var* uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_437() && !func_433())
			{
				func_431(*uParam2);
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
			if (!unk_0x50FF74F38183101F(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x4CABACA7D7715244(*uParam2, uParam2->f_1, 0))
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

int func_522(var uParam0)
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
	Var0 = { func_450(unk_0x8CFC7D6E1DA5D304()) };
	switch ((*uParam0)[iVar126])
	{
		case 0:
			Global_1835390.f_2775[iVar126] = -1;
			Global_1835390.f_2704[iVar126] = 0;
			Global_1835013.f_374 = -1;
			Global_1835389 = 0;
			if (func_523(uParam0->f_44))
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
			if (func_430(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var0, func_519(), 0, 0, 0))
			{
				func_448(&Var111, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x87C1B430F044CFAC(&Var111))
				{
					if (Var111.f_3 > 0)
					{
						iVar124 = 0;
						iVar119 = 0;
						if (func_519())
						{
							iVar124 = 0;
							while (iVar124 < Var111.f_3)
							{
								unk_0x27784D25EDAE6D24(iVar124, &Var13);
								if (Global_1835013.f_374 < 0)
								{
									if (func_490(&Var13, &Var0) || func_490(&Var13, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var13.f_96;
									}
								}
								if (iVar122 < 0)
								{
									if (unk_0xB03A1684359C50A1(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0x41ECC212062282FF(iVar124, 0))
										{
											iVar122 = iVar124;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0x99A322ED74E76285(iVar124, 0))
									{
										iVar122 = iVar124;
									}
								}
								func_518(&Var13);
								iVar124++;
							}
							if (iVar122 < 0)
							{
								iVar122 = Var111.f_3;
							}
						}
						iVar124 = 0;
						unk_0x27784D25EDAE6D24(0, &Var13);
						if (Var13.f_96 <= 1)
						{
							if (Global_1835390.f_2704[iVar126] < 12)
							{
								if (func_519() && iVar122 == 0)
								{
									func_517(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), Var13.f_96);
									Global_1835390.f_2775[iVar126] = 0;
									Global_1835390.f_2704[iVar126]++;
								}
								if (func_519() && (func_490(&Var13, &Var0) || func_490(&Var13, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_490(&Var13, &Var0))
									{
										iVar122 = 0;
										Global_1835390.f_2775[iVar126] = 0;
									}
									MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), {Var13.f_13}, 16);
									Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_32 = { Var13 };
									Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_59 = Var13.f_96;
									if (func_516(uParam0->f_44))
									{
										iVar121 = unk_0x41ECC212062282FF(0, Global_1835390.f_2709);
										if (iVar121 == 1)
										{
											Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 0;
										}
									}
									if (func_451(uParam0->f_44))
									{
										MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_74 = 1;
									iVar119 = 0;
									while (iVar119 < Global_1835390.f_2708)
									{
										if (unk_0xB03A1684359C50A1(Global_1835390.f_2769, Global_1835390.f_2710[iVar119]))
										{
											Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_67[iVar119] = unk_0x41ECC212062282FF(0, Global_1835390.f_2710[iVar119]);
										}
										else
										{
											Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_60[iVar119] = unk_0x99A322ED74E76285(0, Global_1835390.f_2710[iVar119]);
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
						if (!func_519())
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
						func_518(&Var13);
						iVar124 = iVar123;
						while (iVar124 <= (Var111.f_3 - 1))
						{
							unk_0x27784D25EDAE6D24(iVar124, &Var13);
							if (Global_1835390.f_2704[iVar126] < 12 && Var13.f_96 > 1)
							{
								if (func_519() && iVar122 == iVar124)
								{
									if (!func_490(&(Global_1835390[iVar126 /*901*/][0 /*75*/].f_32), &Var13))
									{
										func_517(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), Var13.f_96);
										Global_1835390.f_2775[iVar126] = Global_1835390.f_2704[iVar126];
										Global_1835390.f_2704[iVar126]++;
									}
								}
								if (func_519() && (func_490(&Var13, &Var0) || func_490(&Var13, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835390.f_2704[iVar126] < 12)
								{
									if (func_445(Var13) && !func_490(&(Global_1835390[iVar126 /*901*/][0 /*75*/].f_32), &Var13))
									{
										if (func_490(&Var13, &Var0))
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
										if (func_516(uParam0->f_44))
										{
											iVar121 = unk_0x41ECC212062282FF(iVar124, Global_1835390.f_2709);
											if (iVar121 == 1)
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 0;
											}
										}
										if (func_451(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar119 = 0;
										iVar119 = 0;
										while (iVar119 < Global_1835390.f_2708)
										{
											if (unk_0xB03A1684359C50A1(Global_1835390.f_2769, Global_1835390.f_2710[iVar119]))
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_67[iVar119] = unk_0x41ECC212062282FF(iVar124, Global_1835390.f_2710[iVar119]);
											}
											else
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_60[iVar119] = unk_0x99A322ED74E76285(iVar124, Global_1835390.f_2710[iVar119]);
											}
											iVar119++;
										}
										Global_1835390.f_2704[iVar126]++;
									}
								}
							}
							func_518(&Var13);
							iVar124++;
						}
						unk_0x4FE4CE1E2DF52382();
						func_366(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar125)
						{
							if (Global_1835390.f_2775[iVar126] == -1 && func_519())
							{
								if (Global_1835390.f_2704[iVar126] >= 1)
								{
									func_517(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), Global_1835390[iVar126 /*901*/][(Global_1835390.f_2704[iVar126] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_517(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), 1);
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
						unk_0x4FE4CE1E2DF52382();
						func_366(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835390.f_2775[iVar126] = -1;
						(*uParam0)[iVar126] = 1;
					}
				}
				else
				{
					func_366(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835390.f_2775[iVar126] = -1;
					(*uParam0)[iVar126] = 1;
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2832), iVar126);
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
			if (func_515(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar128))
			{
				func_448(&Var111, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0x87C1B430F044CFAC(&Var111))
				{
					if (Var111.f_3 > 0)
					{
						iVar119 = 0;
						while (iVar119 < Var111.f_3)
						{
							unk_0x27784D25EDAE6D24(iVar119, &Var13);
							if (func_519() && (func_490(&Var13, &Var0) || func_490(&Var13, &(Global_1835013.f_361))))
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
										if (func_516(uParam0->f_44))
										{
											iVar121 = unk_0x41ECC212062282FF(0, Global_1835390.f_2709);
											if (iVar121 == 1)
											{
												Global_1835390[iVar126 /*901*/][0 /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar126 /*901*/][0 /*75*/].f_58 = 0;
											}
										}
										if (func_451(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar126 /*901*/][0 /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1835390[iVar126 /*901*/][0 /*75*/].f_74 = 1;
										iVar120 = 0;
										iVar120 = 0;
										while (iVar120 < Global_1835390.f_2708)
										{
											if (unk_0xB03A1684359C50A1(Global_1835390.f_2769, Global_1835390.f_2710[iVar120]))
											{
												Global_1835390[iVar126 /*901*/][iVar119 /*75*/].f_67[iVar120] = unk_0x41ECC212062282FF(iVar119, Global_1835390.f_2710[iVar120]);
											}
											else
											{
												Global_1835390[iVar126 /*901*/][iVar119 /*75*/].f_60[iVar120] = unk_0x99A322ED74E76285(iVar119, Global_1835390.f_2710[iVar120]);
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
										if (func_516(uParam0->f_44))
										{
											iVar121 = unk_0x41ECC212062282FF(iVar119, Global_1835390.f_2709);
											if (iVar121 == 1)
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_58 = 0;
											}
										}
										if (func_451(uParam0->f_44))
										{
											MemCopy(&(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_59 = Var13.f_96;
										Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_74 = 1;
										iVar120 = 0;
										iVar120 = 0;
										while (iVar120 < Global_1835390.f_2708)
										{
											if (unk_0xB03A1684359C50A1(Global_1835390.f_2769, Global_1835390.f_2710[iVar120]))
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_67[iVar120] = unk_0x41ECC212062282FF(iVar119, Global_1835390.f_2710[iVar120]);
											}
											else
											{
												Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/].f_60[iVar120] = unk_0x99A322ED74E76285(iVar119, Global_1835390.f_2710[iVar120]);
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
							func_518(&Var13);
							iVar119++;
						}
					}
					unk_0x4FE4CE1E2DF52382();
					func_366(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar126] = 2;
				}
				else
				{
					unk_0xD2A9C3F486236CC5(&(Global_1835390.f_2832), iVar126);
					func_366(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835390.f_2704[iVar126] = 0;
					(*uParam0)[iVar126] = 2;
					Global_1835390.f_2704[1] = 0;
					(*uParam0)[1] = 1;
					Global_1835390.f_2704[2] = 0;
					(*uParam0)[2] = 3;
				}
			}
			if (Global_1835390.f_2775[iVar126] == -1 && func_519())
			{
				if (Global_1835390.f_2704[iVar126] >= 1)
				{
					func_517(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), Global_1835390[iVar126 /*901*/][(Global_1835390.f_2704[iVar126] - 1) /*75*/].f_59 + 1);
				}
				else
				{
					func_517(uParam0, &(Global_1835390[iVar126 /*901*/][Global_1835390.f_2704[iVar126] /*75*/]), 1);
				}
				Global_1835390.f_2775[iVar126] = Global_1835390.f_2704[iVar126];
				Global_1835390.f_2704[iVar126]++;
			}
			break;
		
		case 2:
			func_514(iVar126, Global_1835013.f_374);
			(*uParam0)[iVar126] = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_523(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)
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
						if (!unk_0x9D39145AD645E383(&(Global_1835013.f_5.f_2.f_1[iVar0 /*16*/]), &(Param0.f_3.f_1[iVar0 /*16*/])) || !unk_0x9D39145AD645E383(&(Global_1835013.f_5.f_2.f_1[iVar0 /*16*/].f_8), &(Param0.f_3.f_1[iVar0 /*16*/].f_8)))
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

void func_524(var uParam0)
{
	int iVar0;
	
	if (unk_0x9FAAEDE0F02BD27F(Global_1835390.f_2826))
	{
		iVar0 = unk_0xE9A7A913C79C982B(Global_1835390.f_2826);
		if (iVar0 < 300000)
		{
			unk_0xD2A9C3F486236CC5(&(uParam0->f_42), 5);
		}
		else
		{
			unk_0x62148293B793073B(&(uParam0->f_42), 5);
			func_499(Global_1835390.f_2826, -1);
		}
	}
}

void func_525(var uParam0)
{
	if (unk_0x5C716BBF766E1C70(uParam0))
	{
		unk_0x5E70D9959D6F2350(uParam0, 255, 255, 255, 0, 0);
	}
}

void func_526(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
	if (unk_0xB03A1684359C50A1(iParam2, 4))
	{
		sVar0 = "SCLB_GLOBAL";
	}
	else if (unk_0xB03A1684359C50A1(iParam2, 5))
	{
		*iParam1++;
		sVar0 = "SCLB_FRIENDS";
	}
	else if (unk_0xB03A1684359C50A1(iParam2, 6))
	{
		*iParam1++;
		if (unk_0xA1C84586015AE5DB() && unk_0xE906D9FB40E35957())
		{
			if (unk_0x0A8A596EB9C068FA() && !unk_0xC8543F17BC4C0591(0))
			{
				sVar0 = "SCLB_CREW";
			}
			else
			{
				Var53 = { func_450(unk_0x8CFC7D6E1DA5D304()) };
				if (unk_0x9FDA5C5DFB3FE364(&Var53))
				{
					unk_0x4AEF279CFD4A57C6(&Var1, 35, &Var53);
					if (!unk_0xFAFFA408239A026B(&(Var1.f_1)))
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
	unk_0x76F4FB5EFF5BDED5(uParam0, "SET_SLOT");
	unk_0x22DD5585E00B80C3(*iParam1);
	unk_0x22DD5585E00B80C3(iParam2);
	if (bVar52)
	{
		unk_0x0ECBA72FAFCEBA59(sVar0);
		unk_0x6F8D47F40E94DBED(&Var36);
		unk_0xC30401186AC91B01();
	}
	else
	{
		unk_0x0ECBA72FAFCEBA59(sVar0);
		unk_0xC30401186AC91B01();
	}
	unk_0xE2B30EB9B14EEAB2();
	*iParam1++;
	if (bParam4)
	{
		iVar66 = 0;
		unk_0xD2A9C3F486236CC5(&iVar66, 7);
		unk_0x76F4FB5EFF5BDED5(uParam0, "SET_SLOT");
		unk_0x22DD5585E00B80C3(*iParam1);
		unk_0x22DD5585E00B80C3(iVar66);
		if (!unk_0xA1C84586015AE5DB())
		{
			sVar0 = "SCLB_NOT_ONL";
		}
		else if (!unk_0xABC550EBCFE96BBC())
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
		unk_0x0ECBA72FAFCEBA59(sVar0);
		unk_0x27FC18DF46755EFC();
		unk_0xE2B30EB9B14EEAB2();
		*iParam1++;
	}
	else if (bParam3)
	{
		if (unk_0xB03A1684359C50A1(iParam2, 4))
		{
			sVar0 = "SCLB_NO_GLOBAL";
		}
		else if (unk_0xB03A1684359C50A1(iParam2, 5))
		{
			if (unk_0x924E5AC4702D8B8C() > 0)
			{
				sVar0 = "SCLB_NO_FRNDS";
			}
			else
			{
				sVar0 = "SCLB_NO_FRNDSb";
			}
		}
		else if (unk_0xB03A1684359C50A1(iParam2, 6))
		{
			if (unk_0xA8AC70C7EA782CC4())
			{
				if (unk_0x8B446F9745A99E13())
				{
					if (unk_0xA1C84586015AE5DB() && unk_0xE906D9FB40E35957())
					{
						if (unk_0x0A8A596EB9C068FA() && !unk_0xC8543F17BC4C0591(0))
						{
							sVar0 = "SCLB_NO_CREWc";
						}
						else
						{
							Var67 = { func_450(unk_0x8CFC7D6E1DA5D304()) };
							if (unk_0x9FDA5C5DFB3FE364(&Var67))
							{
								unk_0x4AEF279CFD4A57C6(&Var1, 35, &Var67);
								if (!unk_0xFAFFA408239A026B(&(Var1.f_1)))
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
		unk_0xD2A9C3F486236CC5(&iVar80, 7);
		unk_0x76F4FB5EFF5BDED5(uParam0, "SET_SLOT");
		unk_0x22DD5585E00B80C3(*iParam1);
		unk_0x22DD5585E00B80C3(iVar80);
		if (bVar52)
		{
			unk_0x0ECBA72FAFCEBA59(sVar0);
			unk_0x6F8D47F40E94DBED(&Var36);
			unk_0x27FC18DF46755EFC();
		}
		else
		{
			unk_0x0ECBA72FAFCEBA59(sVar0);
			unk_0x27FC18DF46755EFC();
		}
		unk_0xE2B30EB9B14EEAB2();
		*iParam1++;
	}
}

void func_527(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	unk_0x76F4FB5EFF5BDED5(uParam0, "SET_TITLE");
	unk_0x0ECBA72FAFCEBA59(sParam1);
	unk_0xC30401186AC91B01();
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		unk_0x0ECBA72FAFCEBA59(uParam2[iVar0 /*6*/]);
		unk_0xC30401186AC91B01();
		iVar0++;
	}
	unk_0xE2B30EB9B14EEAB2();
}

void func_528(var uParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	unk_0x76F4FB5EFF5BDED5(uParam0, "SET_MULTIPLAYER_TITLE");
	unk_0x0ECBA72FAFCEBA59(uParam1);
	if (!unk_0xFAFFA408239A026B(sParam2))
	{
		unk_0xBEFD1ED9B6BE5127(sParam2);
	}
	if (iParam5 == -1)
	{
		if (bParam4)
		{
			if (!unk_0xFAFFA408239A026B(sParam3))
			{
				unk_0x6F8D47F40E94DBED(sParam3);
			}
		}
		else if (!unk_0xFAFFA408239A026B(sParam3))
		{
			unk_0xBEFD1ED9B6BE5127(sParam3);
		}
	}
	else
	{
		if (bParam4)
		{
			if (!unk_0xFAFFA408239A026B(sParam3))
			{
				unk_0x6F8D47F40E94DBED(sParam3);
			}
		}
		else if (!unk_0xFAFFA408239A026B(sParam3))
		{
			unk_0xBEFD1ED9B6BE5127(sParam3);
		}
		unk_0x3A12001DBF78DC62(iParam5);
	}
	unk_0xC30401186AC91B01();
	unk_0xE2B30EB9B14EEAB2();
}

void func_529(var uParam0, int iParam1)
{
	unk_0x76F4FB5EFF5BDED5(uParam0, "SET_DISPLAY_TYPE");
	unk_0x22DD5585E00B80C3(iParam1);
	unk_0xE2B30EB9B14EEAB2();
}

void func_530(int iParam0)
{
	Global_1315692 = iParam0;
}

void func_531(int iParam0)
{
	Global_1358718.f_1079 = iParam0;
}

void func_532()
{
	func_535();
	func_533(4, -1);
	func_533(6, -1);
	func_533(7, -1);
	func_533(3, -1);
	func_533(1, -1);
	func_533(2, -1);
	func_533(11, -1);
	func_533(13, -1);
	func_533(14, -1);
	func_533(16, -1);
}

void func_533(int iParam0, int iParam1)
{
	unk_0xD2A9C3F486236CC5(&(Global_1357213.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1357213.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_534(int iParam0)
{
	if (!Global_14453.f_1 == 1)
	{
		if (func_140(0))
		{
			func_137(iParam0);
		}
		unk_0xD2A9C3F486236CC5(&Global_2324, 2);
	}
}

void func_535()
{
	Global_2512581.f_4500 = 0;
}

void func_536(bool bParam0)
{
	if (bParam0)
	{
		func_258(&(Local_51.f_119), 0, 0, 1, 1);
		func_257(&(Local_51.f_119), "HUD_INPUT53", 2, 202, 1, 1, 0);
		func_257(&(Local_51.f_119), "SCLB_PROFILE", 2, 217, 1, 1, 0);
		func_537(&(Local_51.f_119), 1);
	}
	else
	{
		func_258(&(Local_51.f_119), 0, 0, 1, 1);
		func_257(&(Local_51.f_119), "HUD_INPUT53", 2, 202, 1, 1, 0);
		func_537(&(Local_51.f_119), 1);
	}
}

void func_537(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_153(&(uParam0->f_1), 1024);
	}
	else
	{
		func_152(&(uParam0->f_1), 1024);
	}
}

int func_538(var uParam0)
{
	if ((unk_0xB03A1684359C50A1(uParam0->f_42, 1) && Global_1835390.f_2704[0] > 0) && uParam0->f_246.f_1 >= 0)
	{
		return 1;
	}
	return 0;
}

void func_539(var uParam0)
{
	if (Global_103581 != 0 && Global_104551.f_19013.f_12[Global_103581 /*8*/].f_4 == 0)
	{
		func_258(uParam0, 0, 0, 1, 1);
		func_257(uParam0, "IB_QUIT", 2, 202, 1, 1, 0);
		if (!unk_0x60D6796E6B9FD3DB())
		{
			func_257(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_530 = 1;
		}
		else if (unk_0x60D6796E6B9FD3DB() && iLocal_529)
		{
			func_257(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_530 = 0;
		}
		else
		{
			iLocal_530 = 0;
		}
	}
	else
	{
		func_258(uParam0, 0, 0, 1, 1);
		func_257(uParam0, "FE_HLP4", 2, 201, 1, 1, 0);
		func_257(uParam0, "IB_QUIT", 2, 202, 1, 1, 0);
		if (!unk_0x60D6796E6B9FD3DB())
		{
			func_257(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_530 = 1;
		}
		else if (unk_0x60D6796E6B9FD3DB() && iLocal_529)
		{
			func_257(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_530 = 0;
		}
		else
		{
			iLocal_530 = 0;
		}
	}
	func_537(&(Local_51.f_119), 1);
}

void func_540()
{
	func_569();
	func_425();
	func_568(&(Local_2444.f_358[0 /*189*/].f_24), 0, 0, "PilotDispatch", 0, 1);
	func_568(&uLocal_2114, 0, 0, "PilotDispatch", 0, 1);
	func_557(&Local_2444);
	func_541(&Local_2444, Local_51.f_10);
	if (unk_0x31F12808DC47A9E5(Local_2444.f_358[0 /*189*/].f_9))
	{
		unk_0xA2B45B1D3EE42178(Local_2444.f_358[0 /*189*/].f_9, 4);
	}
}

void func_541(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_556(&Local_2444);
			break;
		
		case 1:
			func_555(&Local_2444);
			break;
		
		case 2:
			func_554(&Local_2444);
			func_553(&(Local_2444.f_27[2 /*10*/]), 1);
			func_553(&(Local_2444.f_27[3 /*10*/]), 1);
			break;
		
		case 3:
			func_552(&Local_2444);
			break;
		
		case 4:
			func_542(&Local_2444);
			break;
	}
}

void func_542(var uParam0)
{
	func_557(uParam0);
	uParam0->f_12 = 32;
	func_551(&(uParam0->f_27[0 /*10*/]), 947.1314f, 4146.46f, 80.494f, 30f, 2, 0);
	func_551(&(uParam0->f_27[1 /*10*/]), 762.498f, 4589.213f, 105.5935f, 30f, 2, 0);
	func_551(&(uParam0->f_27[2 /*10*/]), 659.2919f, 4806.028f, 175.759f, 30f, 2, 0);
	func_551(&(uParam0->f_27[3 /*10*/]), 621.3849f, 5032.051f, 343.6387f, 30f, 2, 0);
	func_551(&(uParam0->f_27[4 /*10*/]), 503.8404f, 5297.335f, 508.6478f, 30f, 2, 0);
	func_551(&(uParam0->f_27[5 /*10*/]), 555.4404f, 5426.935f, 708.948f, 30f, 2, 0);
	func_551(&(uParam0->f_27[6 /*10*/]), 637.6946f, 5491.08f, 717.522f, 30f, 2, 0);
	func_551(&(uParam0->f_27[7 /*10*/]), 790.3913f, 5491.866f, 566.103f, 30f, 2, 0);
	func_551(&(uParam0->f_27[8 /*10*/]), 910.6804f, 5313.552f, 388.8567f, 30f, 2, 0);
	func_551(&(uParam0->f_27[9 /*10*/]), 1159.749f, 5183.155f, 253.1068f, 30f, 2, 0);
	func_551(&(uParam0->f_27[10 /*10*/]), 1354.13f, 4998.078f, 141.6288f, 30f, 2, 0);
	func_551(&(uParam0->f_27[11 /*10*/]), 1612.532f, 4941.23f, 61.8549f, 30f, 2, 0);
	func_551(&(uParam0->f_27[12 /*10*/]), 2200.396f, 4800.332f, 69.9321f, 30f, 3, 2);
	func_551(&(uParam0->f_27[13 /*10*/]), 2527.632f, 5144.98f, 66.763f, 30f, 3, 2);
	func_551(&(uParam0->f_27[14 /*10*/]), 2527.131f, 5275.334f, 62.3622f, 30f, 2, 0);
	func_551(&(uParam0->f_27[15 /*10*/]), 2413.345f, 5443.203f, 99.4297f, 30f, 2, 0);
	func_551(&(uParam0->f_27[16 /*10*/]), 2236.067f, 5524.246f, 108.3291f, 30f, 2, 0);
	func_551(&(uParam0->f_27[17 /*10*/]), 1944.463f, 5520.007f, 177.2808f, 30f, 2, 0);
	func_551(&(uParam0->f_27[18 /*10*/]), 1712.477f, 5624.937f, 324.9427f, 30f, 2, 0);
	func_551(&(uParam0->f_27[19 /*10*/]), 1601.158f, 5663.75f, 335.8832f, 30f, 2, 0);
	func_551(&(uParam0->f_27[20 /*10*/]), 1410.764f, 5675.836f, 425.9678f, 30f, 2, 0);
	func_551(&(uParam0->f_27[21 /*10*/]), 1225.682f, 5678.654f, 497.3169f, 30f, 2, 0);
	func_551(&(uParam0->f_27[22 /*10*/]), 1094.47f, 5664.07f, 563.0829f, 30f, 2, 0);
	func_551(&(uParam0->f_27[23 /*10*/]), 1001.427f, 5633.827f, 633.2537f, 30f, 2, 0);
	func_551(&(uParam0->f_27[24 /*10*/]), 875.5358f, 5642.667f, 682.5352f, 30f, 2, 0);
	func_551(&(uParam0->f_27[25 /*10*/]), 741.3275f, 5688.046f, 709.5683f, 30f, 2, 0);
	func_551(&(uParam0->f_27[26 /*10*/]), 487.2532f, 5654.821f, 802.0096f, 30f, 3, 1);
	func_551(&(uParam0->f_27[27 /*10*/]), 362.6602f, 5620.538f, 723.2353f, 30f, 2, 0);
	func_551(&(uParam0->f_27[28 /*10*/]), 134.4865f, 5555.637f, 520.3109f, 30f, 2, 0);
	func_551(&(uParam0->f_27[29 /*10*/]), -128.2242f, 5510.46f, 307.4505f, 30f, 2, 0);
	func_551(&(uParam0->f_27[30 /*10*/]), -397.7556f, 5438.69f, 175.4529f, 30f, 2, 0);
	func_551(&(uParam0->f_27[31 /*10*/]), -520.8975f, 5424.283f, 165.285f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_550(&(uParam0->f_358[0 /*189*/]));
	func_549(&(uParam0->f_358[0 /*189*/]), "Player");
	func_545(&(uParam0->f_358[0 /*189*/]), unk_0x18F7BE9ACB7D08F4(), Local_51.f_1);
	func_544(&(uParam0->f_358[0 /*189*/]), 1135.682f, 3700.644f, 80.494f, 22.3451f);
	func_543(&(uParam0->f_358[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_543(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_20 = iParam1;
	uParam0->f_21 = iParam2;
	uParam0->f_22 = iParam3;
}

void func_544(var uParam0, struct<3> Param1, float fParam4)
{
	uParam0->f_16 = { Param1 };
	uParam0->f_19 = fParam4;
}

void func_545(var uParam0, int iParam1, var uParam2)
{
	uParam0->f_8 = iParam1;
	uParam0->f_9 = uParam2;
	func_546(uParam2, &(Local_51.f_243));
}

void func_546(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xC4B84EB67F78C1F0(uParam0, 0))
	{
		func_548(uParam1);
		uParam1->f_66 = unk_0x4F69FBD64CDF125B(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xE6A2C60E19ABFD84(iParam0), 16);
		*uParam1 = unk_0x2B07F86D9BC57D14(iParam0);
		unk_0xC2CED850D0B7AE40(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x939E5110724C9FF5(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x5DEE36C41FD07639(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x5B416ECA8172648C(iParam0);
		uParam1->f_67 = unk_0x178913209B5C278C(iParam0);
		uParam1->f_69 = unk_0x459703DBCA7E4F90(iParam0);
		uParam1->f_70 = unk_0xA15463616D2BE67B(iParam0);
		unk_0x868FCC1ABD0392E2(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0xC501B2A5F74552E1(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x6BF5E4054292013A(iParam0, 2))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 28);
		}
		if (unk_0x6BF5E4054292013A(iParam0, 3))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 29);
		}
		if (unk_0x6BF5E4054292013A(iParam0, 0))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 30);
		}
		if (unk_0x6BF5E4054292013A(iParam0, 1))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x7C094ED2B27D253F(iParam0, 0))
		{
			uParam1->f_68 = unk_0xB5305F9F7739856F(iParam0);
		}
		if (unk_0xD8BB60C76D29E4BB(uParam1->f_66))
		{
			if (unk_0xAD1AE6AEE26C1B5B(iParam0))
			{
				switch (unk_0xF0623119822BFA16(iParam0))
				{
					case 2:
					case 0:
						unk_0x62148293B793073B(&(uParam1->f_77), 23);
						unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0x62148293B793073B(&(uParam1->f_77), 23);
						unk_0x62148293B793073B(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xDCACEB538A650DBE(iParam0))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 9);
		}
		if (unk_0x43AB555BD9D432EA(iParam0))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 10);
		}
		if (unk_0x598942D690303B92(iParam0))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 13);
			unk_0x9F7E6674DE4C23B5(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0xFD2F81E6B2E852DA(iParam0))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 12);
		}
		func_547(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x6276BF0E9518E43A(iParam0, iVar0 + 1))
			{
				unk_0xD2A9C3F486236CC5(&(uParam1->f_77), func_120(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x6D111CD3D2767A08(iParam0, 0))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x62148293B793073B(&(uParam1->f_77), 11);
		}
		if (unk_0x788C6B35BB3FCF53(iParam0, "IgnoredByQuickSave") && unk_0x3C32210A85B95B19(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x62148293B793073B(&(uParam1->f_77), 27);
		}
	}
}

int func_547(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xC4B84EB67F78C1F0(*uParam0, 0))
	{
		return 0;
	}
	if (unk_0x8A27C3C945C9E921(*uParam0) == 0)
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
			if (unk_0xFA82454B8C070DBB(*uParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x2FA7EA3CA1AD2BF9(*uParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x8730A3E327DA8627(*uParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x8730A3E327DA8627(*uParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_548(var uParam0)
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

void func_549(char* sParam0, char* sParam1)
{
	StringCopy(sParam0, sParam1, 32);
}

void func_550(var uParam0)
{
	uParam0->f_10 = 0;
	uParam0->f_11 = -1;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0f;
	uParam0->f_23 = 13;
}

void func_551(var uParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6)
{
	*uParam0 = { Param1 };
	uParam0->f_3 = fParam4;
	uParam0->f_7 = iParam5;
	uParam0->f_8 = iParam6;
}

void func_552(var uParam0)
{
	func_557(uParam0);
	uParam0->f_12 = 28;
	func_551(&(uParam0->f_27[0 /*10*/]), -1737.725f, -2720.967f, 38f, 30f, 2, 0);
	func_551(&(uParam0->f_27[1 /*10*/]), -1384.515f, -2880.773f, 38f, 30f, 2, 0);
	func_551(&(uParam0->f_27[2 /*10*/]), -1156.435f, -2957.284f, 40f, 30f, 2, 0);
	func_551(&(uParam0->f_27[3 /*10*/]), -795.3043f, -2987.754f, 60f, 30f, 2, 0);
	func_551(&(uParam0->f_27[4 /*10*/]), -429.0231f, -2969.528f, 30f, 30f, 3, 1);
	func_551(&(uParam0->f_27[5 /*10*/]), -15.5168f, -2912.484f, 60f, 30f, 2, 0);
	func_551(&(uParam0->f_27[6 /*10*/]), 656.9059f, -2798.444f, 80f, 30f, 3, 2);
	func_551(&(uParam0->f_27[7 /*10*/]), 990.7529f, -2452.092f, 70f, 30f, 2, 0);
	func_551(&(uParam0->f_27[8 /*10*/]), 1019.531f, -2182.119f, 60f, 30f, 2, 0);
	func_551(&(uParam0->f_27[9 /*10*/]), 1019.899f, -1886.15f, 60f, 30f, 2, 0);
	func_551(&(uParam0->f_27[10 /*10*/]), 944.9045f, -1488.589f, 107.7f, 30f, 2, 0);
	func_551(&(uParam0->f_27[11 /*10*/]), 698.908f, -1013.024f, 100.5f, 30f, 3, 2);
	func_551(&(uParam0->f_27[12 /*10*/]), 388.7276f, -822.8241f, 90f, 30f, 2, 0);
	func_551(&(uParam0->f_27[13 /*10*/]), 20.7016f, -653.9637f, 101.8f, 30f, 3, 2);
	func_551(&(uParam0->f_27[14 /*10*/]), -135.3874f, -670.6069f, 112f, 30f, 3, 3);
	func_551(&(uParam0->f_27[15 /*10*/]), -360.3365f, -655.137f, 90f, 30f, 2, 0);
	func_551(&(uParam0->f_27[16 /*10*/]), -700.3533f, -657.1476f, 70f, 30f, 2, 0);
	func_551(&(uParam0->f_27[17 /*10*/]), -951.5859f, -654.0262f, 68f, 30f, 3, 2);
	func_551(&(uParam0->f_27[18 /*10*/]), -1125.587f, -769.7247f, 67f, 30f, 2, 0);
	func_551(&(uParam0->f_27[19 /*10*/]), -1281.291f, -851.0229f, 82f, 30f, 3, 1);
	func_551(&(uParam0->f_27[20 /*10*/]), -1580.865f, -1009.944f, 40f, 30f, 2, 0);
	func_551(&(uParam0->f_27[21 /*10*/]), -1877.52f, -1152.927f, 30f, 30f, 2, 0);
	func_551(&(uParam0->f_27[22 /*10*/]), -2101.111f, -1330.267f, 20f, 30f, 2, 0);
	func_551(&(uParam0->f_27[23 /*10*/]), -2230.15f, -1555.89f, 10f, 30f, 3, 2);
	func_551(&(uParam0->f_27[24 /*10*/]), -2214.946f, -1978.262f, 10f, 30f, 2, 0);
	func_551(&(uParam0->f_27[25 /*10*/]), -2055.091f, -2359.626f, 20f, 30f, 2, 0);
	func_551(&(uParam0->f_27[26 /*10*/]), -1893.392f, -2559.46f, 22f, 30f, 2, 0);
	func_551(&(uParam0->f_27[27 /*10*/]), -1737.725f, -2720.967f, 83.7f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_550(&(uParam0->f_358[0 /*189*/]));
	func_549(&(uParam0->f_358[0 /*189*/]), "Player");
	func_545(&(uParam0->f_358[0 /*189*/]), unk_0x18F7BE9ACB7D08F4(), Local_51.f_1);
	func_544(&(uParam0->f_358[0 /*189*/]), -2102.16f, -2556.082f, 38f, 245.6561f);
	func_543(&(uParam0->f_358[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_553(var uParam0, int iParam1)
{
	func_329(&(uParam0->f_9), iParam1);
}

void func_554(var uParam0)
{
	func_557(uParam0);
	uParam0->f_12 = 21;
	func_551(&(uParam0->f_27[0 /*10*/]), 1167.2f, -2557.195f, 90f, 30f, 2, 0);
	func_551(&(uParam0->f_27[1 /*10*/]), 869.9235f, -2613.705f, 57.8325f, 30f, 2, 0);
	func_551(&(uParam0->f_27[2 /*10*/]), 652.3818f, -2651.991f, 54.935f, 30f, 2, 0);
	func_551(&(uParam0->f_27[3 /*10*/]), 249.3849f, -2579.821f, 60.1264f, 30f, 3, 2);
	func_551(&(uParam0->f_27[4 /*10*/]), -31.7179f, -2590.793f, 19.9452f, 30f, 2, 0);
	func_551(&(uParam0->f_27[5 /*10*/]), -317.409f, -2582.66f, 48.7654f, 30f, 3, 3);
	func_551(&(uParam0->f_27[6 /*10*/]), -395.6915f, -2334.057f, 39.3612f, 30f, 2, 0);
	func_551(&(uParam0->f_27[7 /*10*/]), -300.2367f, -2118.431f, 53.3728f, 30f, 2, 0);
	func_551(&(uParam0->f_27[8 /*10*/]), -157.1812f, -1967.885f, 56.4093f, 30f, 3, 2);
	func_551(&(uParam0->f_27[9 /*10*/]), -199.4688f, -1803.328f, 13.6363f, 30f, 2, 0);
	func_551(&(uParam0->f_27[10 /*10*/]), -383.5264f, -1738.067f, 60.8194f, 30f, 2, 0);
	func_551(&(uParam0->f_27[11 /*10*/]), -649.8698f, -1710.374f, 61.3036f, 30f, 2, 0);
	func_551(&(uParam0->f_27[12 /*10*/]), -861.6902f, -1857.194f, 77.0621f, 30f, 3, 2);
	func_551(&(uParam0->f_27[13 /*10*/]), -716.8034f, -2111.744f, 65.9868f, 30f, 2, 0);
	func_551(&(uParam0->f_27[14 /*10*/]), -548.7557f, -2230.616f, 97.2887f, 30f, 2, 0);
	func_551(&(uParam0->f_27[15 /*10*/]), -270.7834f, -2425.144f, 96.7744f, 30f, 3, 1);
	func_551(&(uParam0->f_27[16 /*10*/]), 5.435f, -2665.31f, 46.2903f, 30f, 2, 0);
	func_551(&(uParam0->f_27[17 /*10*/]), 299.0821f, -2834.288f, 27.0191f, 30f, 2, 0);
	func_551(&(uParam0->f_27[18 /*10*/]), 514.295f, -2880.863f, 42.0956f, 30f, 3, 2);
	func_551(&(uParam0->f_27[19 /*10*/]), 842.6024f, -2599.042f, 25.978f, 30f, 2, 0);
	func_551(&(uParam0->f_27[20 /*10*/]), 991.974f, -2468.436f, 87.493f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_550(&(uParam0->f_358[0 /*189*/]));
	func_549(&(uParam0->f_358[0 /*189*/]), "Player");
	func_545(&(uParam0->f_358[0 /*189*/]), unk_0x18F7BE9ACB7D08F4(), Local_51.f_1);
	func_544(&(uParam0->f_358[0 /*189*/]), 1788.044f, -2438.835f, 130.9346f, 100.0275f);
	func_543(&(uParam0->f_358[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_555(var uParam0)
{
	func_557(uParam0);
	uParam0->f_12 = 19;
	func_551(&(uParam0->f_27[0 /*10*/]), -2819.07f, -81.2779f, 76.1411f, 30f, 2, 0);
	func_551(&(uParam0->f_27[1 /*10*/]), -2737.77f, 342.665f, 175.645f, 30f, 2, 0);
	func_551(&(uParam0->f_27[2 /*10*/]), -2631.929f, 499.7495f, 210.0935f, 30f, 2, 0);
	func_551(&(uParam0->f_27[3 /*10*/]), -2438.01f, 692.3843f, 285.745f, 30f, 3, 3);
	func_551(&(uParam0->f_27[4 /*10*/]), -2039.406f, 708.7898f, 170.6556f, 30f, 2, 0);
	func_551(&(uParam0->f_27[5 /*10*/]), -1633.076f, 751.8171f, 220.188f, 30f, 2, 0);
	func_551(&(uParam0->f_27[6 /*10*/]), -1187.955f, 874.4288f, 246.4972f, 30f, 3, 1);
	func_551(&(uParam0->f_27[7 /*10*/]), -893.826f, 994.239f, 239.512f, 30f, 2, 0);
	func_551(&(uParam0->f_27[8 /*10*/]), -565.788f, 1098.308f, 349.0507f, 30f, 2, 0);
	func_551(&(uParam0->f_27[9 /*10*/]), -326.8564f, 1129.9f, 336.1296f, 30f, 2, 0);
	func_551(&(uParam0->f_27[10 /*10*/]), -155.9212f, 1149.858f, 312.2522f, 30f, 2, 0);
	func_551(&(uParam0->f_27[11 /*10*/]), 145.603f, 1162.599f, 277.7465f, 30f, 3, 1);
	func_551(&(uParam0->f_27[12 /*10*/]), 355.6647f, 1234.464f, 287.6501f, 30f, 2, 0);
	func_551(&(uParam0->f_27[13 /*10*/]), 640.85f, 1191.643f, 329.783f, 30f, 2, 0);
	func_551(&(uParam0->f_27[14 /*10*/]), 783.3697f, 1157.395f, 329.0691f, 30f, 3, 3);
	func_551(&(uParam0->f_27[15 /*10*/]), 1016.378f, 1000.386f, 252.4894f, 30f, 2, 0);
	func_551(&(uParam0->f_27[16 /*10*/]), 1243.37f, 945.084f, 150.5214f, 30f, 2, 0);
	func_551(&(uParam0->f_27[17 /*10*/]), 1494.048f, 863.8886f, 110.4097f, 30f, 2, 0);
	func_551(&(uParam0->f_27[18 /*10*/]), 1751.842f, 687.7875f, 296.787f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_550(&(uParam0->f_358[0 /*189*/]));
	func_549(&(uParam0->f_358[0 /*189*/]), "Player");
	func_545(&(uParam0->f_358[0 /*189*/]), unk_0x18F7BE9ACB7D08F4(), Local_51.f_1);
	func_544(&(uParam0->f_358[0 /*189*/]), -2818.17f, -500.178f, 76.1411f, 0f);
	func_543(&(uParam0->f_358[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_556(var uParam0)
{
	func_557(uParam0);
	uParam0->f_12 = 18;
	func_551(&(uParam0->f_27[0 /*10*/]), 1025.724f, 3073.133f, 70f, 30f, 2, 0);
	func_551(&(uParam0->f_27[1 /*10*/]), 847.4132f, 3025.239f, 80f, 30f, 2, 0);
	func_551(&(uParam0->f_27[2 /*10*/]), 624.897f, 2968.416f, 80f, 30f, 3, 1);
	func_551(&(uParam0->f_27[3 /*10*/]), 398.5529f, 2921.654f, 75f, 30f, 2, 0);
	func_551(&(uParam0->f_27[4 /*10*/]), 68.1f, 2896.4f, 80f, 30f, 2, 0);
	func_551(&(uParam0->f_27[5 /*10*/]), -290.7f, 2895.4f, 80f, 30f, 2, 0);
	func_551(&(uParam0->f_27[6 /*10*/]), -1033.31f, 2832.959f, 37.5f, 30f, 3, 2);
	func_551(&(uParam0->f_27[7 /*10*/]), -1195.153f, 2729.109f, 18f, 30f, 2, 0);
	func_551(&(uParam0->f_27[8 /*10*/]), -1414.6f, 2636.365f, 8.25f, 30f, 2, 0);
	func_551(&(uParam0->f_27[9 /*10*/]), -1684.856f, 2630.035f, 10f, 30f, 2, 0);
	func_551(&(uParam0->f_27[10 /*10*/]), -2024.536f, 2677.336f, 30f, 30f, 3, 1);
	func_551(&(uParam0->f_27[11 /*10*/]), -2659.106f, 2670.574f, 5.4745f, 30f, 2, 0);
	func_551(&(uParam0->f_27[12 /*10*/]), -2880.136f, 2732.084f, 21.0365f, 30f, 2, 0);
	func_551(&(uParam0->f_27[13 /*10*/]), -3200.826f, 2826.548f, 40f, 30f, 3, 2);
	func_551(&(uParam0->f_27[14 /*10*/]), -3363.374f, 2580.812f, 50f, 30f, 2, 0);
	func_551(&(uParam0->f_27[15 /*10*/]), -3242.432f, 2370.19f, 40f, 30f, 2, 0);
	func_551(&(uParam0->f_27[16 /*10*/]), -2879.09f, 2382.111f, 20f, 30f, 2, 0);
	func_551(&(uParam0->f_27[17 /*10*/]), -2650.532f, 2450.207f, 66.6f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_550(&(uParam0->f_358[0 /*189*/]));
	func_549(&(uParam0->f_358[0 /*189*/]), "Player");
	func_545(&(uParam0->f_358[0 /*189*/]), unk_0x18F7BE9ACB7D08F4(), Local_51.f_1);
	func_544(&(uParam0->f_358[0 /*189*/]), Local_2339, 154.8464f);
	func_543(&(uParam0->f_358[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_557(var uParam0)
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
	func_565(uParam0);
	uParam0->f_12 = 0;
	func_558(uParam0);
	uParam0->f_13 = 0;
}

void func_558(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		func_559(uParam0, iVar0);
		iVar0++;
	}
}

void func_559(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return;
	}
	func_561(&(uParam0->f_358[iParam1 /*189*/]));
	func_560(&(uParam0->f_358[iParam1 /*189*/]));
}

void func_560(char* sParam0)
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

void func_561(var uParam0)
{
	func_564(uParam0);
	func_563(uParam0);
	func_562(uParam0);
}

void func_562(var uParam0)
{
	if (unk_0x31F12808DC47A9E5(uParam0->f_9))
	{
		if (uParam0->f_9 != Local_51.f_1)
		{
			if (!(unk_0x74C2FE037DFC8B4A(uParam0->f_8, 0) || unk_0x74C2FE037DFC8B4A(uParam0->f_9, 0)))
			{
				if (unk_0x88B79D32B518C327(uParam0->f_8, uParam0->f_9, 0))
				{
					unk_0xD9FCA20C1C5553F7(uParam0->f_8);
				}
			}
			unk_0xBECECD970F645217(&(uParam0->f_9));
		}
	}
}

void func_563(var uParam0)
{
	if (unk_0x31F12808DC47A9E5(uParam0->f_8))
	{
		if (uParam0->f_8 != unk_0x18F7BE9ACB7D08F4())
		{
			unk_0x63C116C2153FAA3C(&(uParam0->f_8));
		}
	}
}

void func_564(var uParam0)
{
	func_83(&(uParam0->f_10));
}

void func_565(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		func_566(uParam0, iVar0);
		iVar0++;
	}
}

void func_566(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return;
	}
	func_82(&(uParam0->f_27[iParam1 /*10*/]));
	func_79(&(uParam0->f_27[iParam1 /*10*/]));
	func_567(&(uParam0->f_27[iParam1 /*10*/]));
}

void func_567(var uParam0)
{
	*uParam0 = { Local_51.f_3 };
	uParam0->f_3 = 16f;
	uParam0->f_7 = 0;
	uParam0->f_4 = 10f;
}

void func_568(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_70852)
	{
		if (!unk_0x0FAE113CE72ED842(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x38ADC0C5F4F08C6D(iParam2, 0);
			}
			else
			{
				unk_0x38ADC0C5F4F08C6D(iParam2, 1);
			}
		}
		if (!unk_0x0FAE113CE72ED842(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x971E3DC2097859E3(iParam2, 0);
			}
			else
			{
				unk_0x971E3DC2097859E3(iParam2, 1);
			}
		}
	}
}

void func_569()
{
	struct<68> Var0;
	
	Global_1835013 = 0;
	Global_1835013.f_1 = 0;
	Global_1835013.f_2 = 0;
	Global_1835013.f_3 = 0;
	Global_1835013.f_4 = 0;
	func_570(&(Global_1835013.f_73));
	func_570(&(Global_1835013.f_142));
	func_570(&(Global_1835013.f_211));
	func_570(&(Global_1835013.f_280));
	StringCopy(&(Global_1835013.f_349), "", 24);
	StringCopy(&(Global_1835013.f_355), "", 24);
	func_506(&(Global_1835013.f_361));
	Global_1835013.f_374 = -1;
	Global_1835388 = 0;
	Global_1835389 = 0;
	Var0.f_2.f_1 = 4;
	Global_1835013.f_5 = { Var0 };
}

void func_570(var uParam0)
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

void func_571(bool bParam0)
{
	if (bParam0)
	{
		unk_0x3388DD13675FEE27(0);
		unk_0x35DF1961E23AC6F3(1);
		unk_0xD236BB37B2A8EBBC(0);
		func_169(1);
		Global_88232 = 1;
	}
	else
	{
		unk_0x3388DD13675FEE27(1);
		unk_0x35DF1961E23AC6F3(0);
		unk_0xD236BB37B2A8EBBC(1);
		func_169(0);
		Global_88232 = 0;
	}
}

void func_572(var uParam0)
{
	*uParam0 = unk_0xBD7D7877C82BE42F("COUNTDOWN");
	unk_0xFF22FE9205F44FB6("HUD_321_GO", 0, -1);
}

int func_573(int iParam0)
{
	if (unk_0xEC0ECEF2AF3FDA8D())
	{
		unk_0x8359CF51370FC969(iParam0);
	}
	else if (unk_0xC8AB6A5E6C1E6613())
	{
		return 1;
	}
	return 0;
}

void func_574()
{
	int iVar0;
	
	if (!iLocal_2438)
	{
		if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
			{
				iVar0 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
				if (unk_0x31F12808DC47A9E5(iVar0) && !unk_0x74C2FE037DFC8B4A(iVar0, 0))
				{
					if (unk_0x2409C4B1759B2661(iVar0))
					{
						if (!unk_0xEC0ECEF2AF3FDA8D())
						{
							unk_0x9BEA833CAF67289C("MGSP_START");
							iLocal_2438 = 1;
						}
					}
				}
			}
		}
	}
}

int func_575(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_576(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam1 = unk_0x9181F138EF2F0C5F(uParam0, 24, 31);
	*uParam2 = unk_0x9181F138EF2F0C5F(uParam0, 16, 23);
	*uParam3 = unk_0x9181F138EF2F0C5F(uParam0, 8, 15);
	*uParam4 = unk_0x9181F138EF2F0C5F(uParam0, 0, 7);
}

var func_577(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0x954894782056D6CB(iParam0, &uVar0, &uVar1, &uVar2, &uVar3);
	return func_578(uVar0, uVar1, uVar2, uVar3);
}

var func_578(var uParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	
	unk_0xBAA2C106496CDB45(&uVar0, 24, 31, uParam0);
	unk_0xBAA2C106496CDB45(&uVar0, 16, 23, uParam1);
	unk_0xBAA2C106496CDB45(&uVar0, 8, 15, uParam2);
	unk_0xBAA2C106496CDB45(&uVar0, 0, 7, uParam3);
	return uVar0;
}

int func_579()
{
	if (unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		return 0;
	}
	func_589(23, 1);
	func_588(10);
	switch (Local_2353.f_5)
	{
		case 0:
			unk_0x945880A1F9FE9E4F(0);
			unk_0xD7C3C869A650A1D6("EXTRASUNNY", 10f);
			func_587();
			func_586(2, 0);
			func_586(1, 0);
			func_586(3, 0);
			func_586(4, 0);
			func_586(5, 0);
			func_586(6, 0);
			func_586(7, 0);
			unk_0x8DE1BAABD1480350(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), 10f, 0);
			unk_0xE54597236B7D8C63(Local_5312, 600f, 0, 0, 0, 0, 0, 0);
			func_580(&Local_2444, Local_51.f_10);
			unk_0xBCF8B669BC41925E(unk_0x8CFC7D6E1DA5D304(), 0);
			unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 0, 512);
			if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0) || unk_0xDB5E52F2078862CA(unk_0x18F7BE9ACB7D08F4()))
			{
				Local_2353.f_5 = 2;
			}
			else
			{
				Local_2353.f_5 = 1;
			}
			break;
		
		case 1:
			if (func_353(1000))
			{
				Local_2353.f_5 = 2;
			}
			break;
		
		case 2:
			unk_0x8E058779F430F4D7("SP_SPR", 3);
			unk_0x1E7BE791ACBDDC05("Shared", 0);
			while (!unk_0x1865CC0DAB5F6A86("Shared"))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0xFF22FE9205F44FB6("HUD_AWARDS", 0, -1);
			Local_2353.f_5 = 3;
			break;
		
		case 3:
			if (unk_0x9F22E45F3CF7EACA(3))
			{
				Local_2353.f_5 = 4;
			}
			break;
		
		case 4:
			Local_2353.f_5 = 5;
			func_11(&(Local_2353.f_2));
			break;
		
		case 5:
			if (func_2(&(Local_2353.f_2), 0.5f))
			{
				Local_2353.f_5 = 6;
			}
			break;
		
		case 6:
			if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
			{
				Local_2353.f_5 = 9;
			}
			else
			{
				Local_2353.f_5 = 7;
				func_11(&(Local_2353.f_2));
			}
			break;
		
		case 7:
			if (func_2(&(Local_2353.f_2), 0.5f))
			{
				Local_2353.f_5 = 8;
			}
			break;
		
		case 8:
			if (func_573(5000))
			{
				unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
				Local_2353.f_5 = 9;
			}
			break;
		
		case 9:
			func_4(&(Local_2353.f_2));
			return 0;
			break;
		
		case 10:
			return 0;
			break;
	}
	return 1;
}

void func_580(var uParam0, int iParam1)
{
	Local_51.f_0 = 0;
	Local_51.f_1 = 0;
	Local_51.f_2 = 2;
	Local_51.f_3 = { Local_2339 };
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
			func_585(&Local_2444);
			break;
		
		case 1:
			func_584(&Local_2444);
			break;
		
		case 2:
			func_583(&Local_2444);
			break;
		
		case 3:
			func_582(&Local_2444);
			break;
		
		case 4:
			func_581(&Local_2444);
			break;
	}
}

void func_581(var uParam0)
{
}

void func_582(var uParam0)
{
}

void func_583(var uParam0)
{
}

void func_584(var uParam0)
{
}

void func_585(var uParam0)
{
}

void func_586(int iParam0, int iParam1)
{
	unk_0xD2A9C3F486236CC5(&Global_25390, iParam0);
	StringCopy(&(Global_25391[iParam0 /*6*/]), unk_0xFCA64981FEF7C913(), 24);
	Global_25446[iParam0] = iParam1;
}

void func_587()
{
	Global_17162.f_5 = 1;
}

void func_588(int iParam0)
{
	func_306();
	Global_71107 = iParam0;
	Global_71106 = 0;
	Global_71109 = 3;
}

void func_589(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xD2A9C3F486236CC5(&Global_25477, iParam0);
	}
	else
	{
		unk_0x62148293B793073B(&Global_25477, iParam0);
	}
}

void func_590()
{
}

void func_591()
{
	unk_0x3F19B70555683951();
	func_359();
	func_425();
	func_569();
	func_589(23, 0);
	func_571(0);
	unk_0x945880A1F9FE9E4F(5);
	unk_0x4A918952774CFC67();
	func_306();
	func_233(0);
	func_251(0);
	unk_0x5E16FDDF59CA03E6();
	unk_0x633C8E78F68C0DAE("MGSP_START");
	unk_0x633C8E78F68C0DAE("MGSP_FAIL");
	unk_0x633C8E78F68C0DAE("MGTR_COMPLETE");
	unk_0x9BEA833CAF67289C("MGSP_END");
	unk_0x6279F6030B6B0475();
	func_599(2, 0);
	func_599(1, 0);
	func_599(3, 0);
	func_599(4, 0);
	func_599(5, 0);
	func_599(6, 0);
	func_599(7, 0);
	unk_0xBCF8B669BC41925E(unk_0x8CFC7D6E1DA5D304(), 1);
	unk_0x66D835F69B7842DC();
	func_597(&(Local_51.f_118));
	unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
	unk_0x36643EAE6212D16F(unk_0x8CFC7D6E1DA5D304(), 0);
	unk_0x000ED7BEBF44F5EA(3, 1);
	unk_0x1D492DC0B64A955F("PilotSchool");
	func_595(&Local_2444, 1);
	unk_0xFD32699B58C2E7EF(103, "SPRTaxi");
	unk_0xFD32699B58C2E7EF(104, "SPRTaxi");
	unk_0xEFF1F12403847394(1);
	unk_0x08FC50794202A47C();
	func_594();
	unk_0x4A3AD9384F0AAEA0(1);
	unk_0x77B57B2BB7F3EA0A(1);
	func_248();
	unk_0x9A8BE560E024CAB0(true);
	func_592();
	unk_0x810C5D6462DD69E6();
}

void func_592()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_89907[iVar0 /*17*/] && !Global_89907[iVar0 /*17*/].f_1)
		{
			if (Global_89907[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_89907[iVar0 /*17*/].f_5 != 88 && Global_89907[iVar0 /*17*/].f_5 != 89) && Global_89907[iVar0 /*17*/].f_5 != 92)
				{
					func_593(Global_89907[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_593(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_86959[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_86959[iParam0 /*2*/] = 0;
	}
}

void func_594()
{
	Global_17162.f_5 = 0;
}

void func_595(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_557(uParam0);
	}
	else
	{
		func_596(uParam0);
	}
	func_136(0);
	func_27(&(uParam0->f_17));
	unk_0xEFF1F12403847394(1);
	unk_0x08FC50794202A47C();
	if (iLocal_2437)
	{
		func_61("SPR_MOVE_FAIL", 5000, 0);
		iLocal_2437 = 0;
	}
}

void func_596(var uParam0)
{
}

void func_597(var uParam0)
{
	func_598(*uParam0);
}

void func_598(var uParam0)
{
	unk_0xEBE532BFFE618875(&uParam0);
}

void func_599(int iParam0, bool bParam1)
{
	if (unk_0xB03A1684359C50A1(Global_25390, iParam0))
	{
		if (!bParam1)
		{
			unk_0x62148293B793073B(&Global_25390, iParam0);
			StringCopy(&(Global_25391[iParam0 /*6*/]), "NULL", 24);
			Global_25446[iParam0] = bParam1;
		}
	}
}

