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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	int iLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	float fLocal_36 = 0f;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	char* sLocal_51 = NULL;
	int iLocal_52 = 0;
	bool bLocal_53 = 0;
	bool bLocal_54 = 0;
	int iLocal_55 = 0;
	bool bLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	struct<3> Local_71 = { 0, 0, 0 } ;
	float fLocal_74 = 0f;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	bool bLocal_77 = 0;
	int iLocal_78[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<165> Local_89 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char[] cLocal_254[8] = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	var uLocal_257 = 0;
	bool bLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	bool bLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	bool bLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	var uLocal_270 = 0;
	int iLocal_271 = 0;
	float fLocal_272 = 0f;
	float fLocal_273 = 0f;
	struct<3> Local_274 = { 0, 0, 0 } ;
	struct<3> Local_277 = { 0, 0, 0 } ;
	int iLocal_280 = 0;
	struct<5> Local_281[31];
	int iLocal_437 = 0;
	int iLocal_438 = 0;
	int iLocal_439 = 0;
	int iLocal_440 = 0;
	int iLocal_441 = 0;
	int iLocal_442 = 0;
	int iLocal_443 = 0;
	struct<5> Local_444[61];
	float fLocal_750 = 0f;
	int iLocal_751 = 0;
	struct<3> Local_752 = { 0, 0, 0 } ;
	struct<33> Local_755[26];
	int iLocal_1614 = 0;
	int iLocal_1615 = 0;
	int iLocal_1616 = 0;
	int iLocal_1617 = 0;
	int iLocal_1618 = 0;
	struct<24> Local_1619[26];
	struct<3> Local_2244 = { 0, 0, 0 } ;
	struct<3> Local_2247 = { 0, 0, 0 } ;
	struct<3> Local_2250 = { 0, 0, 0 } ;
	struct<3> Local_2253 = { 0, 0, 0 } ;
	struct<3> Local_2256 = { 0, 0, 0 } ;
	struct<3> Local_2259 = { 0, 0, 0 } ;
	struct<3> Local_2262 = { 0, 0, 0 } ;
	struct<3> Local_2265 = { 0, 0, 0 } ;
	struct<3> Local_2268 = { 0, 0, 0 } ;
	struct<3> Local_2271 = { 0, 0, 0 } ;
	struct<3> Local_2274[21];
	char[] cLocal_2338[8] = 0;
	bool bLocal_2339 = 0;
	int iLocal_2340 = 0;
	bool bLocal_2341 = 0;
	int iLocal_2342 = 0;
	struct<6> Local_2343[6];
	struct<18> Local_2380[4];
	float fLocal_2453 = 0f;
	int iLocal_2454 = 0;
	int iLocal_2455[4] = { 0, 0, 0, 0 };
	int iLocal_2460[4] = { 0, 0, 0, 0 };
	struct<3> Local_2465[13];
	int iLocal_2505 = 0;
	int iLocal_2506 = 0;
	int iLocal_2507 = 0;
	int iLocal_2508 = 0;
	int iLocal_2509 = 0;
	int iLocal_2510 = 0;
	int iLocal_2511 = 0;
	int iLocal_2512 = 0;
	char* sLocal_2513 = NULL;
	bool bLocal_2514 = 0;
	struct<6> Local_2515[20];
	int iLocal_2636 = 0;
	var uLocal_2637 = 0;
	int iLocal_2638 = 0;
	float fLocal_2639 = 0f;
	int iLocal_2640 = 0;
	int iLocal_2641 = 0;
	int iLocal_2642 = 0;
	int iLocal_2643 = 0;
	int iLocal_2644 = 0;
	int iLocal_2645 = 0;
	int iLocal_2646 = 0;
	bool bLocal_2647 = 0;
	int iLocal_2648 = 0;
	int iLocal_2649 = 0;
	var uLocal_2650 = 0;
	int iLocal_2651[5] = { 0, 0, 0, 0, 0 };
	int iLocal_2657[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_2668 = 0;
	struct<3> Local_2669 = { 0, 0, 0 } ;
	var uLocal_2672 = 0;
	int iLocal_2673 = 0;
	float fLocal_2674 = 0f;
	var uLocal_2675 = 0;
	int iLocal_2676 = 0;
	var uLocal_2677 = 0;
	int iLocal_2678 = 0;
	int iLocal_2679 = 0;
	int iLocal_2680 = 0;
	int iLocal_2681 = 0;
	int iLocal_2682 = 0;
	struct<7> Local_2683 = { 0, 3, 0, 0, 0, 0, 0 } ;
	var uLocal_2690 = 1092616192;
	var uLocal_2691 = 1101004800;
	var uLocal_2692 = 0;
	var uLocal_2693 = 0;
	var uLocal_2694 = 0;
	var uLocal_2695 = 0;
	var uLocal_2696 = 0;
	var uLocal_2697 = 0;
	var uLocal_2698 = 0;
	var uLocal_2699 = 0;
	var uLocal_2700 = 3;
	var uLocal_2701 = 0;
	var uLocal_2702 = 0;
	var uLocal_2703 = 0;
	var uLocal_2704 = 0;
	var uLocal_2705 = 0;
	var uLocal_2706 = 0;
	var uLocal_2707 = 0;
	var uLocal_2708 = 16;
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
	int iLocal_2873 = 0;
	int iLocal_2874 = 0;
	int iLocal_2875 = 0;
	int iLocal_2876 = 0;
	int iLocal_2877 = 0;
	int iLocal_2878 = 0;
	int iLocal_2879 = 0;
	int iLocal_2880 = 0;
	int iLocal_2881 = 0;
	int iLocal_2882 = 0;
	int iLocal_2883 = 0;
	int iLocal_2884 = 0;
	int iLocal_2885 = 0;
	int iLocal_2886 = 0;
	int iLocal_2887 = 0;
	int iLocal_2888 = 0;
	struct<3> Local_2889[9];
	struct<10> Local_2917[20];
	bool bLocal_3118 = 0;
	int iLocal_3119 = 0;
	struct<8> Local_3120[27];
	struct<4> Local_3337[5];
	struct<7> Local_3358[17];
	struct<3> Local_3478[4];
	int iLocal_3491 = 0;
	char cLocal_3492[24] = "";
	var uLocal_3495 = 0;
	var uLocal_3496 = 0;
	var uLocal_3497 = 0;
	struct<3> Local_3498 = { 0, 0, 0 } ;
	var uLocal_3501 = 0;
	var uLocal_3502 = 0;
	var uLocal_3503 = 0;
	int iLocal_3504 = 0;
	int iLocal_3505 = 0;
	int iLocal_3506 = 0;
	int iLocal_3507 = 0;
	int iLocal_3508 = 0;
	char* sLocal_3509 = NULL;
	char* sLocal_3510 = NULL;
	int iLocal_3511[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_3522 = 16;
	var uLocal_3523 = 0;
	var uLocal_3524 = 0;
	var uLocal_3525 = 0;
	var uLocal_3526 = 0;
	var uLocal_3527 = 0;
	var uLocal_3528 = 0;
	var uLocal_3529 = 0;
	var uLocal_3530 = 0;
	var uLocal_3531 = 0;
	var uLocal_3532 = 0;
	var uLocal_3533 = 0;
	var uLocal_3534 = 0;
	var uLocal_3535 = 0;
	var uLocal_3536 = 0;
	var uLocal_3537 = 0;
	var uLocal_3538 = 0;
	var uLocal_3539 = 0;
	var uLocal_3540 = 0;
	var uLocal_3541 = 0;
	var uLocal_3542 = 0;
	var uLocal_3543 = 0;
	var uLocal_3544 = 0;
	var uLocal_3545 = 0;
	var uLocal_3546 = 0;
	var uLocal_3547 = 0;
	var uLocal_3548 = 0;
	var uLocal_3549 = 0;
	var uLocal_3550 = 0;
	var uLocal_3551 = 0;
	var uLocal_3552 = 0;
	var uLocal_3553 = 0;
	var uLocal_3554 = 0;
	var uLocal_3555 = 0;
	var uLocal_3556 = 0;
	var uLocal_3557 = 0;
	var uLocal_3558 = 0;
	var uLocal_3559 = 0;
	var uLocal_3560 = 0;
	var uLocal_3561 = 0;
	var uLocal_3562 = 0;
	var uLocal_3563 = 0;
	var uLocal_3564 = 0;
	var uLocal_3565 = 0;
	var uLocal_3566 = 0;
	var uLocal_3567 = 0;
	var uLocal_3568 = 0;
	var uLocal_3569 = 0;
	var uLocal_3570 = 0;
	var uLocal_3571 = 0;
	var uLocal_3572 = 0;
	var uLocal_3573 = 0;
	var uLocal_3574 = 0;
	var uLocal_3575 = 0;
	var uLocal_3576 = 0;
	var uLocal_3577 = 0;
	var uLocal_3578 = 0;
	var uLocal_3579 = 0;
	var uLocal_3580 = 0;
	var uLocal_3581 = 0;
	var uLocal_3582 = 0;
	var uLocal_3583 = 0;
	var uLocal_3584 = 0;
	var uLocal_3585 = 0;
	var uLocal_3586 = 0;
	var uLocal_3587 = 0;
	var uLocal_3588 = 0;
	var uLocal_3589 = 0;
	var uLocal_3590 = 0;
	var uLocal_3591 = 0;
	var uLocal_3592 = 0;
	var uLocal_3593 = 0;
	var uLocal_3594 = 0;
	var uLocal_3595 = 0;
	var uLocal_3596 = 0;
	var uLocal_3597 = 0;
	var uLocal_3598 = 0;
	var uLocal_3599 = 0;
	var uLocal_3600 = 0;
	var uLocal_3601 = 0;
	var uLocal_3602 = 0;
	var uLocal_3603 = 0;
	var uLocal_3604 = 0;
	var uLocal_3605 = 0;
	var uLocal_3606 = 0;
	var uLocal_3607 = 0;
	var uLocal_3608 = 0;
	var uLocal_3609 = 0;
	var uLocal_3610 = 0;
	var uLocal_3611 = 0;
	var uLocal_3612 = 0;
	var uLocal_3613 = 0;
	var uLocal_3614 = 0;
	var uLocal_3615 = 0;
	var uLocal_3616 = 0;
	var uLocal_3617 = 0;
	var uLocal_3618 = 0;
	var uLocal_3619 = 0;
	var uLocal_3620 = 0;
	var uLocal_3621 = 0;
	var uLocal_3622 = 0;
	var uLocal_3623 = 0;
	var uLocal_3624 = 0;
	var uLocal_3625 = 0;
	var uLocal_3626 = 0;
	var uLocal_3627 = 0;
	var uLocal_3628 = 0;
	var uLocal_3629 = 0;
	var uLocal_3630 = 0;
	var uLocal_3631 = 0;
	var uLocal_3632 = 0;
	var uLocal_3633 = 0;
	var uLocal_3634 = 0;
	var uLocal_3635 = 0;
	var uLocal_3636 = 0;
	var uLocal_3637 = 0;
	var uLocal_3638 = 0;
	var uLocal_3639 = 0;
	var uLocal_3640 = 0;
	var uLocal_3641 = 0;
	var uLocal_3642 = 0;
	var uLocal_3643 = 0;
	var uLocal_3644 = 0;
	var uLocal_3645 = 0;
	var uLocal_3646 = 0;
	var uLocal_3647 = 0;
	var uLocal_3648 = 0;
	var uLocal_3649 = 0;
	var uLocal_3650 = 0;
	var uLocal_3651 = 0;
	var uLocal_3652 = 0;
	var uLocal_3653 = 0;
	var uLocal_3654 = 0;
	var uLocal_3655 = 0;
	var uLocal_3656 = 0;
	var uLocal_3657 = 0;
	var uLocal_3658 = 0;
	var uLocal_3659 = 0;
	var uLocal_3660 = 0;
	var uLocal_3661 = 0;
	var uLocal_3662 = 0;
	var uLocal_3663 = 0;
	var uLocal_3664 = 0;
	var uLocal_3665 = 0;
	var uLocal_3666 = 0;
	var uLocal_3667 = 0;
	var uLocal_3668 = 0;
	var uLocal_3669 = 0;
	var uLocal_3670 = 0;
	var uLocal_3671 = 0;
	var uLocal_3672 = 0;
	var uLocal_3673 = 0;
	var uLocal_3674 = 0;
	var uLocal_3675 = 0;
	var uLocal_3676 = 0;
	var uLocal_3677 = 0;
	var uLocal_3678 = 0;
	var uLocal_3679 = 0;
	var uLocal_3680 = 0;
	var uLocal_3681 = 0;
	var uLocal_3682 = 0;
	var uLocal_3683 = 0;
	var uLocal_3684 = 0;
	var uLocal_3685 = 0;
	var uLocal_3686 = 0;
	int iLocal_3687 = 0;
	int iLocal_3688 = 0;
	int iLocal_3689 = 0;
	int iLocal_3690 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_31 = 3;
	fLocal_34 = 80f;
	fLocal_35 = 140f;
	fLocal_36 = 180f;
	iLocal_42 = 1;
	iLocal_43 = 65;
	iLocal_44 = 49;
	iLocal_45 = 64;
	uLocal_49 = unk_0xD401739A5899EC1B();
	uLocal_50 = unk_0xF90D5D0199B23D8A();
	iLocal_61 = -1;
	iLocal_62 = -1;
	bLocal_77 = true;
	iLocal_266 = -1;
	iLocal_269 = -1;
	fLocal_272 = 0.5f;
	fLocal_273 = 0f;
	iLocal_438 = 1;
	fLocal_750 = 160f;
	cLocal_2338 = "CHI2AUD";
	iLocal_2676 = -1;
	iLocal_2884 = -1;
	unk_0x7E34CF542225E666(1);
	if (unk_0xBCA819F9975BEDFA(3))
	{
		func_414();
		func_413(2);
	}
	fLocal_750 = 160f;
	while (true)
	{
		if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
		{
			func_129();
			func_127();
			if (iLocal_2511 >= 7)
			{
				func_119();
			}
			func_117();
			func_78();
			func_3();
			func_2();
			func_1();
			unk_0x31683E0D6DBB707E("m_Chinese2", 0);
		}
		iLocal_3687 = 0;
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	if (iLocal_3505)
	{
		if (unk_0x1F02DB541727C048(iLocal_3504))
		{
			unk_0xB746CFFEAA8CB784(iLocal_3504);
			iLocal_3505 = 0;
		}
	}
}

int func_2()
{
	if (iLocal_3506)
	{
		if (iLocal_3507)
		{
			if (unk_0x5823F1F25CE33C5D(sLocal_3509))
			{
				if (unk_0x5BE53482EFD49141(sLocal_3509))
				{
					iLocal_3506 = 0;
					iLocal_3507 = 0;
					return 1;
				}
			}
		}
		else if (unk_0x5BE53482EFD49141(sLocal_3509))
		{
			iLocal_3506 = 0;
			return 1;
		}
	}
	else if (iLocal_3508)
	{
		if (unk_0x5823F1F25CE33C5D(sLocal_3510))
		{
			iLocal_3508 = 0;
		}
	}
	return 0;
}

void func_3()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < Local_2515.f_0)
	{
		if (Local_2515[iVar0 /*6*/].f_1 == 1)
		{
			switch (Local_2515[iVar0 /*6*/])
			{
				case 0:
					switch (Local_2515[iVar0 /*6*/].f_2)
					{
						case 0:
							if (unk_0x1B76B77EDF24A933())
							{
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 1:
							func_69(1992.804f, 3053.31f, 45.77715f, 1989.681f, 3055.295f, 49.09001f, 3.25f, 1995.202f, 3062.156f, 46.0491f, 59.7235f, 10f, 20f, 9f, 1, 1, 1, 0, 0);
							func_69(1994.427f, 3045.136f, 45.34013f, 1981.903f, 3053.235f, 49.79153f, 9.5f, 1995.202f, 3062.156f, 46.0491f, 59.7235f, 10f, 20f, 9f, 1, 1, 1, 0, 0);
							func_69(1985.404f, 3075.057f, 44.84953f, 2017.102f, 3057.435f, 53.71896f, 33f, 1995.202f, 3062.156f, 46.0491f, 59.7235f, 10f, 20f, 9f, 1, 1, 1, 0, 0);
							iLocal_2506 = unk_0x0C00E753D78DEA62();
							if (func_68(iLocal_2506) && func_67(iLocal_2506, 1995.202f, 3062.156f, 46.0491f, 1) < 5f)
							{
								unk_0xA56CF5F719228F25(unk_0x0324EEB10F81965F(iLocal_2506), 3);
							}
							Local_2515[iVar0 /*6*/].f_1 = 0;
							break;
					}
					break;
				
				case 2:
					if (iLocal_2511 >= 3)
					{
						Local_2515[iVar0 /*6*/].f_2 = -1;
					}
					switch (Local_2515[iVar0 /*6*/].f_2)
					{
						case -1:
							func_66();
							func_64();
							break;
						
						case 0:
							if (func_67(unk_0x17B5CC8A8615737D(), 2442.55f, 4967.51f, 54.35f, 1) < 1300f || func_63(39))
							{
								if (func_67(unk_0x17B5CC8A8615737D(), 2442.55f, 4967.51f, 54.35f, 1) > 500f)
								{
									Local_2515[iVar0 /*6*/].f_2++;
								}
							}
							break;
						
						case 1:
							if (func_60("PHN2", 1, unk_0x17B5CC8A8615737D(), "Trevor", 8, 0, "ONEIL", -1, 0, 0))
							{
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							if (!func_59())
							{
								if (func_35("CHI2_ONEILPH", 1, unk_0x17B5CC8A8615737D(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_2515[iVar0 /*6*/].f_1 = 0;
								}
							}
							break;
					}
					break;
				
				case 3:
					if (iLocal_2511 >= 3)
					{
						Local_2515[iVar0 /*6*/].f_2 = -1;
						Local_2515[iVar0 /*6*/].f_1 = 0;
					}
					switch (Local_2515[iVar0 /*6*/].f_2)
					{
						case 0:
							if (func_35("CHI2_boom", 1, unk_0x17B5CC8A8615737D(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_2515[iVar0 /*6*/].f_2++;
							}
							iLocal_2888 = 0;
							Local_2515[iVar0 /*6*/].f_5 = unk_0x94E3E074F38DF86C() + 3000;
							break;
						
						case 1:
							if (!func_59())
							{
								if (!func_34())
								{
									if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
									{
										if (unk_0x94E3E074F38DF86C() > Local_2515[iVar0 /*6*/].f_5)
										{
											if (iLocal_2888 < 13)
											{
												if (func_35("DRI1", 2, unk_0x17B5CC8A8615737D(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
												{
													iLocal_2888++;
													Local_2515[iVar0 /*6*/].f_5 = (unk_0x94E3E074F38DF86C() + unk_0x0E29C61F26D96FDB(4000, 10000));
												}
											}
											else
											{
												Local_2515[iVar0 /*6*/].f_1 = 0;
											}
										}
									}
								}
							}
							break;
					}
					break;
				
				case 4:
					if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
					{
						uVar1 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
						if (!unk_0x14E01C4EC4170496(uVar1))
						{
							if (func_33(6f, 2))
							{
								unk_0x83150B7E65C16AFE(unk_0x17B5CC8A8615737D(), 0, 0);
								Local_2515[iVar0 /*6*/].f_1 = 0;
							}
						}
					}
					else
					{
						Local_2515[iVar0 /*6*/].f_1 = 0;
					}
					break;
				
				case 5:
					switch (Local_2515[iVar0 /*6*/].f_2)
					{
						case -20:
							if (unk_0x3DC4639D5F23DEA2(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 2460.073f, 4964.176f, 46.2405f, 1) < 250f)
							{
								unk_0xE1324F59713746FA(joaat("a_m_m_hillbilly_01"));
								unk_0xE1324F59713746FA(joaat("prop_pallet_pile_01"));
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -19:
							if (unk_0x9F746898F7881612(joaat("a_m_m_hillbilly_01")) && unk_0x9F746898F7881612(joaat("prop_pallet_pile_01")))
							{
								unk_0xE1324F59713746FA(joaat("a_m_m_hillbilly_02"));
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -18:
							if (unk_0x9F746898F7881612(joaat("a_m_m_hillbilly_02")))
							{
								unk_0xE1324F59713746FA(joaat("burrito"));
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -17:
							if (unk_0x9F746898F7881612(joaat("burrito")))
							{
								unk_0xE1324F59713746FA(joaat("a_m_y_methhead_01"));
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -16:
							if (unk_0x9F746898F7881612(joaat("a_m_y_methhead_01")))
							{
								unk_0xE1324F59713746FA(joaat("prop_ld_can_01"));
								unk_0xE1324F59713746FA(joaat("prop_cs_fertilizer"));
								unk_0xE1324F59713746FA(joaat("prop_cs_beer_bot_01"));
								unk_0xE1324F59713746FA(joaat("prop_phone_ing"));
								unk_0xE1324F59713746FA(joaat("dubsta"));
								unk_0xA0E7D0E8FE126EE8("misschinese2_bank5");
								unk_0xA0E7D0E8FE126EE8("misschinese2_bank1");
								unk_0xA0E7D0E8FE126EE8("reaction@male_stand@big_variations@b");
								unk_0xA0E7D0E8FE126EE8("reaction@male_stand@big_intro@left");
								unk_0xA0E7D0E8FE126EE8("reaction@male_stand@big_intro@right");
								unk_0xA0E7D0E8FE126EE8("reaction@male_stand@big_intro@backward");
								unk_0xA0E7D0E8FE126EE8("misschinese2_barrelRoll");
								unk_0xEFA1E47456B98380("move_m@gangster@var_e");
								unk_0xEFA1E47456B98380("move_m@gangster@var_f");
								unk_0xEFA1E47456B98380("move_m@gangster@generic");
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -15:
							if (unk_0x9F746898F7881612(joaat("dubsta")))
							{
								func_32(22, 0);
								func_32(8, 0);
								unk_0xE6FC8C18754D8C2D(Vector(44.8113f, 4961.045f, 2469.985f) - Vector(100f, 100f, 100f), Vector(44.8113f, 4961.045f, 2469.985f) + Vector(100f, 100f, 100f), 0, 1);
								Local_2515[iVar0 /*6*/].f_2 = 1;
							}
							break;
						
						case 0:
							if (unk_0x3DC4639D5F23DEA2(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 2460.073f, 4964.176f, 46.2405f, 1) < 250f)
							{
								unk_0xE1324F59713746FA(joaat("a_m_m_hillbilly_01"));
								unk_0xE1324F59713746FA(joaat("a_m_m_hillbilly_02"));
								unk_0xE1324F59713746FA(joaat("a_m_y_methhead_01"));
								unk_0xE1324F59713746FA(joaat("prop_ld_can_01"));
								unk_0xE1324F59713746FA(joaat("prop_cs_fertilizer"));
								unk_0xE1324F59713746FA(joaat("burrito"));
								unk_0xE1324F59713746FA(joaat("prop_cs_beer_bot_01"));
								if (iLocal_2511 <= 3)
								{
									unk_0xE1324F59713746FA(joaat("prop_phone_ing"));
									unk_0xE1324F59713746FA(joaat("dubsta"));
								}
								unk_0xA0E7D0E8FE126EE8("misschinese2_bank5");
								unk_0xA0E7D0E8FE126EE8("misschinese2_bank1");
								unk_0xA0E7D0E8FE126EE8("reaction@male_stand@big_variations@b");
								unk_0xA0E7D0E8FE126EE8("reaction@male_stand@big_intro@left");
								unk_0xA0E7D0E8FE126EE8("reaction@male_stand@big_intro@right");
								unk_0xA0E7D0E8FE126EE8("reaction@male_stand@big_intro@backward");
								unk_0xA0E7D0E8FE126EE8("misschinese2_barrelRoll");
								unk_0xEFA1E47456B98380("move_m@gangster@var_e");
								unk_0xEFA1E47456B98380("move_m@gangster@var_f");
								unk_0xEFA1E47456B98380("move_m@gangster@generic");
								func_32(22, 0);
								func_32(8, 0);
								unk_0xE6FC8C18754D8C2D(Vector(44.8113f, 4961.045f, 2469.985f) - Vector(100f, 100f, 100f), Vector(44.8113f, 4961.045f, 2469.985f) + Vector(100f, 100f, 100f), 0, 1);
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 1:
							if (((((((((((((((unk_0x9F746898F7881612(joaat("a_m_m_hillbilly_01")) && unk_0x9F746898F7881612(joaat("a_m_m_hillbilly_02"))) && unk_0x9F746898F7881612(joaat("a_m_y_methhead_01"))) && unk_0x9F746898F7881612(joaat("burrito"))) && unk_0x9F746898F7881612(joaat("prop_cs_fertilizer"))) && unk_0x9F746898F7881612(joaat("prop_cs_beer_bot_01"))) && unk_0x9F746898F7881612(joaat("prop_ld_can_01"))) && unk_0xF4F8AE8DD0F08C1E("misschinese2_bank5")) && unk_0xF4F8AE8DD0F08C1E("misschinese2_bank1")) && unk_0xF4F8AE8DD0F08C1E("misschinese2_barrelRoll")) && unk_0xF4F8AE8DD0F08C1E("reaction@male_stand@big_variations@b")) && unk_0xF4F8AE8DD0F08C1E("reaction@male_stand@big_intro@left")) && unk_0xF4F8AE8DD0F08C1E("reaction@male_stand@big_intro@right")) && unk_0xF4F8AE8DD0F08C1E("reaction@male_stand@big_intro@backward")) && ((iLocal_2511 <= 3 && unk_0x9F746898F7881612(joaat("prop_phone_ing"))) || iLocal_2511 > 3)) && ((iLocal_2511 <= 3 && unk_0x9F746898F7881612(joaat("dubsta"))) || iLocal_2511 > 3))
							{
								Local_2515[iVar0 /*6*/].f_2 = 4;
							}
							if (unk_0x3DC4639D5F23DEA2(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 2460.073f, 4964.176f, 46.2405f, 1) > 300f)
							{
								unk_0x924CDE68BA2ED3BA(joaat("a_m_m_hillbilly_01"));
								unk_0x924CDE68BA2ED3BA(joaat("a_m_m_hillbilly_02"));
								unk_0x924CDE68BA2ED3BA(joaat("a_m_y_methhead_01"));
								unk_0x924CDE68BA2ED3BA(joaat("burrito"));
								unk_0x924CDE68BA2ED3BA(joaat("prop_cs_fertilizer"));
								unk_0x924CDE68BA2ED3BA(joaat("prop_cs_beer_bot_01"));
								unk_0x924CDE68BA2ED3BA(joaat("prop_ld_can_01"));
								unk_0xF9FFB9857F3120F8("misschinese2_bank5");
								unk_0xF9FFB9857F3120F8("misschinese2_bank1");
								unk_0xF9FFB9857F3120F8("reaction@male_stand@big_variations@b");
								unk_0xF9FFB9857F3120F8("reaction@male_stand@big_intro@left");
								unk_0xF9FFB9857F3120F8("reaction@male_stand@big_intro@right");
								unk_0xF9FFB9857F3120F8("reaction@male_stand@big_intro@backward");
								unk_0xF9FFB9857F3120F8("misschinese2_barrelRoll");
								unk_0xA617A761C0955C65("move_m@gangster@var_e");
								unk_0xA617A761C0955C65("move_m@gangster@var_f");
								unk_0xA617A761C0955C65("move_m@gangster@generic");
								unk_0x924CDE68BA2ED3BA(joaat("prop_phone_ing"));
								unk_0x924CDE68BA2ED3BA(joaat("dubsta"));
								unk_0xE6FC8C18754D8C2D(Vector(44.8113f, 4961.045f, 2469.985f) - Vector(100f, 100f, 100f), Vector(44.8113f, 4961.045f, 2469.985f) + Vector(100f, 100f, 100f), 1, 1);
								func_31(22, 1);
								func_31(8, 1);
								if (iLocal_2678 != 0)
								{
									unk_0xDD5B92F304023AEF(iLocal_2678);
									iLocal_2678 = 0;
								}
								Local_2515[iVar0 /*6*/].f_2 = -20;
							}
							break;
						
						case 4:
							if (unk_0x3DC4639D5F23DEA2(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 2460.073f, 4964.176f, 46.2405f, 1) > 300f)
							{
								Local_2515[iVar0 /*6*/].f_2 = 1;
							}
							else if (iLocal_2511 >= 3 && !func_30(22))
							{
								func_27();
								Local_2515[iVar0 /*6*/].f_1 = 0;
							}
							break;
						
						case 5:
							break;
					}
					break;
				
				case 22:
					switch (Local_2515[iVar0 /*6*/].f_2)
					{
						case -1:
							if (iLocal_2678 != 0)
							{
								unk_0xDD5B92F304023AEF(iLocal_2678);
							}
							iLocal_2678 = 0;
							break;
						
						case 0:
							iLocal_2678 = unk_0x1A4C1C534F86E06A(2440.492f, 4969.948f, 52.5247f);
							Local_2515[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (!unk_0x623BDE1B17A9D9E3(iLocal_2678))
							{
								iLocal_2678 = unk_0x1A4C1C534F86E06A(2440.492f, 4969.948f, 52.5247f);
							}
							else
							{
								unk_0xB746CFFEAA8CB784(iLocal_2678);
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							Local_2515[iVar0 /*6*/].f_1 = 0;
							break;
					}
					break;
				
				case 6:
					switch (Local_2515[iVar0 /*6*/].f_2)
					{
						case 0:
							func_19(50, 0, 0, 1, 0);
							func_19(51, 0, 0, 1, 0);
							func_19(52, 0, 0, 1, 0);
							func_19(53, 0, 0, 1, 0);
							func_19(54, 1, 0, 1, 0);
							Local_2515[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							break;
					}
					break;
				
				case 7:
					if (Local_2515[iVar0 /*6*/].f_2 == 0)
					{
						iVar2 = func_18(8);
						if (iVar2 != -1)
						{
							if (!unk_0xCA41A00932714525(Local_755[iVar2 /*33*/]))
							{
								if (unk_0x1F8F07D86DA1A701(Local_755[iVar2 /*33*/], 1785177548) == 7)
								{
									iVar2 = func_18(9);
									if (iVar2 != -1)
									{
										if (!unk_0xCA41A00932714525(Local_755[iVar2 /*33*/]))
										{
											if (unk_0x1F8F07D86DA1A701(Local_755[iVar2 /*33*/], 1785177548) == 7)
											{
												unk_0xF9FFB9857F3120F8("misschinese2_bank5");
												Local_2515[iVar0 /*6*/].f_1 = 0;
											}
										}
									}
								}
							}
							else
							{
								iVar2 = func_18(9);
								if (iVar2 != -1)
								{
									if (!unk_0xCA41A00932714525(Local_755[iVar2 /*33*/]))
									{
										if (unk_0x1F8F07D86DA1A701(Local_755[iVar2 /*33*/], 1785177548) == 7)
										{
											unk_0xF9FFB9857F3120F8("misschinese2_bank5");
											Local_2515[iVar0 /*6*/].f_1 = 0;
										}
									}
									else
									{
										unk_0xF9FFB9857F3120F8("misschinese2_bank5");
									}
								}
							}
						}
					}
					break;
				
				case 8:
					switch (Local_2515[iVar0 /*6*/].f_2)
					{
						case -1:
							unk_0xCC76050C3A61CF48();
							break;
						
						case 0:
							unk_0xD1D19967E553E144(Vector(58.6179f, 4972.897f, 2445.654f) - Vector(100f, 100f, 100f), Vector(58.6179f, 4972.897f, 2445.654f) + Vector(100f, 100f, 100f), 0, 1, 1, 1);
							Local_2515[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
							{
								if (unk_0x3DC4639D5F23DEA2(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 0), 2473.061f, 4981.482f, 24.64584f, 1) < 250f)
								{
									Local_2515[iVar0 /*6*/].f_2++;
								}
							}
							break;
						
						case 2:
							unk_0x4547FC28D02AD087(0f);
							unk_0x5BD872FA7F0EC076(0f);
							unk_0x6CCF43768046B678(0f, 0f);
							if (unk_0x3DC4639D5F23DEA2(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 0), 2473.061f, 4981.482f, 24.64584f, 1) > 250f)
							{
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
					}
					break;
				
				case 9:
					switch (Local_2515[iVar0 /*6*/].f_2)
					{
						case -1:
							unk_0xFCBD7340FBF1FE46(3, 1);
							unk_0xFCBD7340FBF1FE46(5, 1);
							unk_0xFCBD7340FBF1FE46(1, 1);
							unk_0xFCBD7340FBF1FE46(7, 1);
							break;
						
						case 0:
							if (func_67(unk_0x17B5CC8A8615737D(), 2578.523f, 4982.284f, 51.4416f, 1) < 500f)
							{
								unk_0xFCBD7340FBF1FE46(3, 0);
								unk_0xFCBD7340FBF1FE46(5, 0);
								unk_0xFCBD7340FBF1FE46(1, 0);
								unk_0xFCBD7340FBF1FE46(7, 0);
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 1:
							if (func_67(unk_0x17B5CC8A8615737D(), 2578.523f, 4982.284f, 51.4416f, 1) > 500f)
							{
								unk_0xFCBD7340FBF1FE46(3, 1);
								unk_0xFCBD7340FBF1FE46(5, 1);
								unk_0xFCBD7340FBF1FE46(1, 1);
								unk_0xFCBD7340FBF1FE46(7, 1);
								Local_2515[iVar0 /*6*/].f_2 = 0;
							}
							break;
					}
					break;
				
				case 25:
					switch (Local_2515[iVar0 /*6*/].f_2)
					{
						case 0:
							func_17(unk_0x17B5CC8A8615737D(), 149);
							Local_2515[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
							{
								iVar3 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
								func_17(iVar3, 152);
								func_16(iVar3, -1);
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
							{
								func_17(0, 152);
								func_16(0, -1);
								Local_2515[iVar0 /*6*/].f_2 = 1;
							}
							break;
					}
					break;
				
				case 10:
					break;
				
				case 11:
					break;
				
				case 14:
					switch (Local_2515[iVar0 /*6*/].f_2)
					{
						case 0:
							Local_2515[iVar0 /*6*/].f_5 = unk_0x94E3E074F38DF86C() + 7000;
							Local_2515[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (unk_0x94E3E074F38DF86C() > Local_2515[iVar0 /*6*/].f_5)
							{
								unk_0x5DC8C2F2F8A363C2(unk_0x17B5CC8A8615737D(), 2466.385f, 4953.096f, 44.1228f, 1, 0, 0, 1);
								unk_0x0608D50823C6AA6D(unk_0x17B5CC8A8615737D(), 221f);
								unk_0x9C16B2DABAEC929A(unk_0x17B5CC8A8615737D(), 2475.075f, 4945.965f, 44.0228f, 1f, 20000, 1193033728, 1056964608);
								unk_0x44B1CF13D39D96CE(unk_0x17B5CC8A8615737D(), joaat("MotionState_Walk"), 0, 0, 0);
								Local_2515[iVar0 /*6*/].f_1 = 0;
							}
							break;
					}
					break;
				
				case 13:
					if (unk_0xAA18627F95EFB68D("CHINESE2_FARMHOUSE_EXPLOSION_MOLOTOV_MASTER", 0))
					{
						unk_0x49219669A551245B();
						Local_2515[iVar0 /*6*/].f_1 = 0;
					}
					break;
				
				case 12:
					switch (Local_2515[iVar0 /*6*/].f_2)
					{
						case 0:
							uLocal_2672 = unk_0x0CE2297975A4AE38(2457.15f, 4968.79f, 48.677f, 45f, "DES_FarmHs");
							if (unk_0xF1DEF26108040848(uLocal_2672))
							{
								unk_0x08B6ECD80C6BD224(uLocal_2672, 2);
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 1:
							if (unk_0x46995C6DD9E9DF8F(uLocal_2672) == 3)
							{
								unk_0x08B6ECD80C6BD224(uLocal_2672, 4);
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							if (iLocal_2673 == 1)
							{
								if (unk_0x46995C6DD9E9DF8F(uLocal_2672) == 5)
								{
									unk_0x08B6ECD80C6BD224(uLocal_2672, 6);
									unk_0x4A5D4AD0FE6ACF73("CHI_2_RAYFIRE");
									unk_0xB30185B1BE926A58(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrm"), 1);
									unk_0xB30185B1BE926A58(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrmsml"), 1);
									unk_0xB30185B1BE926A58(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassairfrm"), 0);
									Local_2515[iVar0 /*6*/].f_2++;
								}
							}
							break;
						
						case 3:
							func_15("CHN2_EXPLODE", 1, "CHN2_EXPLODE");
							Local_2515[iVar0 /*6*/].f_1 = 0;
							break;
					}
					break;
				
				case 16:
					if (Local_2515[iVar0 /*6*/].f_2 != -1)
					{
						if (!unk_0x509A3191A6C4EB38(unk_0x17B5CC8A8615737D(), joaat("weapon_petrolcan"), 0) || !unk_0xAF6D1E258B973F1D(uLocal_2675))
						{
							iLocal_2679 = unk_0x29280EF6724677F5(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 20f, unk_0xD5D69CE5364D1F97(joaat("weapon_petrolcan")), 0, 0, 1);
							if (iLocal_2679 != 0)
							{
								if (unk_0xA3794949321E107C(uLocal_2677))
								{
									unk_0x020DF7300725ECAB(&uLocal_2677);
								}
								uLocal_2677 = func_13(iLocal_2679);
								func_12(1);
								func_11(0, 157);
							}
						}
						else
						{
							Local_2515[iVar0 /*6*/].f_5 = 0;
							func_12(0);
							if (unk_0xA3794949321E107C(uLocal_2677))
							{
								unk_0x020DF7300725ECAB(&uLocal_2677);
							}
							func_10(157, 0);
							if (iLocal_2649 == 0)
							{
								iLocal_2649 = unk_0x034EB52F6D89BFA0(unk_0x17B5CC8A8615737D(), joaat("weapon_petrolcan"));
							}
							else
							{
								func_9(158, (iLocal_2649 - unk_0x034EB52F6D89BFA0(unk_0x17B5CC8A8615737D(), joaat("weapon_petrolcan"))), 1);
							}
						}
						if (func_8())
						{
							func_11(0, 157);
							Local_2515[iVar0 /*6*/].f_1 = 0;
							func_32(17, 0);
						}
					}
					break;
				
				case 18:
					break;
				
				case 17:
					if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 2447.671f, 4951.438f, 43.25576f, 2454.664f, 4957.856f, 47.89117f, 6.8125f, 0, 1, 0) && unk_0x94E3E074F38DF86C() > Local_2515[iVar0 /*6*/].f_5)
					{
						if (unk_0xA3794949321E107C(uLocal_2677))
						{
							unk_0x020DF7300725ECAB(&uLocal_2677);
						}
						Local_2515[iVar0 /*6*/].f_1 = 0;
					}
					else
					{
						switch (Local_2515[iVar0 /*6*/].f_2)
						{
							case 0:
								if (!func_59())
								{
									func_7("FRMSHP", 7500, 1);
									Local_2515[iVar0 /*6*/].f_5 = unk_0x94E3E074F38DF86C() + 2000;
									uLocal_2677 = func_5(2450f, 4954f, 45f, 0);
									Local_2515[iVar0 /*6*/].f_2++;
								}
								break;
							}
					}
					break;
				
				case 20:
					if (!unk_0x48B8265059381CD0(Local_2515[iVar0 /*6*/].f_5, 0))
					{
						iLocal_2885 = func_18(4);
						if (iLocal_2885 != -1)
						{
							unk_0xEB79FECD9022AAF0(&(Local_2515[iVar0 /*6*/].f_5), 0);
						}
					}
					else if (!unk_0x48B8265059381CD0(Local_2515[iVar0 /*6*/].f_5, 1))
					{
						if (!unk_0xCA41A00932714525(Local_755[iLocal_2885 /*33*/]) && unk_0x23E9113C762466ED(Local_755[iLocal_2885 /*33*/].f_20))
						{
							if (unk_0x5132972D2BBC5A62(Local_755[iLocal_2885 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3) && unk_0xDDBA7A42B9B819EE(Local_755[iLocal_2885 /*33*/].f_20))
							{
								unk_0xEB79FECD9022AAF0(&(Local_2515[iVar0 /*6*/].f_5), 1);
							}
						}
					}
					else if (!unk_0x48B8265059381CD0(Local_2515[iVar0 /*6*/].f_5, 2))
					{
						if (unk_0xCA41A00932714525(Local_755[iLocal_2885 /*33*/]))
						{
							unk_0xEB79FECD9022AAF0(&(Local_2515[iVar0 /*6*/].f_5), 2);
						}
						if (!unk_0xCA41A00932714525(Local_755[iLocal_2885 /*33*/]))
						{
							if (!unk_0x5132972D2BBC5A62(Local_755[iLocal_2885 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3))
							{
								unk_0xEB79FECD9022AAF0(&(Local_2515[iVar0 /*6*/].f_5), 2);
							}
							if (unk_0x1F8F07D86DA1A701(Local_755[iLocal_2885 /*33*/], -2017877118) == 2 || unk_0x1F8F07D86DA1A701(Local_755[iLocal_2885 /*33*/], -2017877118) == 7)
							{
								unk_0xEB79FECD9022AAF0(&(Local_2515[iVar0 /*6*/].f_5), 2);
							}
							if (unk_0x018477A7947BC4B4(Local_755[iLocal_2885 /*33*/], unk_0x17B5CC8A8615737D()) || Local_1619[iLocal_2885 /*24*/].f_3 > 3)
							{
								unk_0xEB79FECD9022AAF0(&(Local_2515[iVar0 /*6*/].f_5), 2);
							}
						}
					}
					else if (unk_0x23E9113C762466ED(Local_755[iLocal_2885 /*33*/].f_20) && unk_0xDDBA7A42B9B819EE(Local_755[iLocal_2885 /*33*/].f_20))
					{
						unk_0xB2E72B5CFE1EC372(Local_755[iLocal_2885 /*33*/].f_20, 0, 0);
					}
					if (!unk_0x48B8265059381CD0(Local_2515[iVar0 /*6*/].f_5, 4))
					{
						iLocal_2886 = func_18(5);
						if (iLocal_2886 != -1)
						{
							unk_0xEB79FECD9022AAF0(&(Local_2515[iVar0 /*6*/].f_5), 4);
						}
					}
					else if (!unk_0x48B8265059381CD0(Local_2515[iVar0 /*6*/].f_5, 5))
					{
						if (!unk_0xCA41A00932714525(Local_755[iLocal_2886 /*33*/]))
						{
							if (unk_0x23E9113C762466ED(Local_755[iLocal_2886 /*33*/].f_20))
							{
								if (unk_0x5132972D2BBC5A62(Local_755[iLocal_2886 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
								{
									if (unk_0xDDBA7A42B9B819EE(Local_755[iLocal_2886 /*33*/].f_20))
									{
										unk_0xEB79FECD9022AAF0(&(Local_2515[iVar0 /*6*/].f_5), 5);
									}
								}
							}
						}
					}
					else if (!unk_0x48B8265059381CD0(Local_2515[iVar0 /*6*/].f_5, 6))
					{
						if (unk_0xCA41A00932714525(Local_755[iLocal_2886 /*33*/]))
						{
							unk_0xEB79FECD9022AAF0(&(Local_2515[iVar0 /*6*/].f_5), 6);
						}
						if (!unk_0xCA41A00932714525(Local_755[iLocal_2886 /*33*/]))
						{
							if (!unk_0x5132972D2BBC5A62(Local_755[iLocal_2886 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
							{
								unk_0xEB79FECD9022AAF0(&(Local_2515[iVar0 /*6*/].f_5), 6);
							}
							if (unk_0x1F8F07D86DA1A701(Local_755[iLocal_2886 /*33*/], -2017877118) == 2 || unk_0x1F8F07D86DA1A701(Local_755[iLocal_2886 /*33*/], -2017877118) == 7)
							{
								unk_0xEB79FECD9022AAF0(&(Local_2515[iVar0 /*6*/].f_5), 6);
							}
							if (unk_0x018477A7947BC4B4(Local_755[iLocal_2886 /*33*/], unk_0x17B5CC8A8615737D()) || Local_1619[iLocal_2886 /*24*/].f_3 > 3)
							{
								unk_0xEB79FECD9022AAF0(&(Local_2515[iVar0 /*6*/].f_5), 6);
							}
						}
					}
					else if (unk_0x23E9113C762466ED(Local_755[iLocal_2886 /*33*/].f_20) && unk_0xDDBA7A42B9B819EE(Local_755[iLocal_2886 /*33*/].f_20))
					{
						unk_0xB2E72B5CFE1EC372(Local_755[iLocal_2886 /*33*/].f_20, 0, 0);
					}
					break;
				
				case 21:
					break;
				
				case 23:
					iVar4 = 0;
					switch (Local_2515[iVar0 /*6*/].f_2)
					{
						case 1:
							iLocal_2657[0] = unk_0x89241A4EA7EE46D2(joaat("prop_ld_can_01"), 2494.496f, 4970.916f, 44.5112f, 1, 1, 0);
							unk_0x04A5FAE5B1EB8E28(iLocal_2657[0], -3.44f, 0f, 38.88f, 2, 1);
							iLocal_2657[1] = unk_0x89241A4EA7EE46D2(joaat("prop_ld_can_01"), 2494.863f, 4970.595f, 44.5425f, 1, 1, 0);
							unk_0x04A5FAE5B1EB8E28(iLocal_2657[1], -3.44f, 0f, 38.88f, 2, 1);
							iLocal_2657[2] = unk_0x89241A4EA7EE46D2(joaat("prop_ld_can_01"), 2494.896f, 4970.417f, 44.5475f, 1, 1, 0);
							unk_0x04A5FAE5B1EB8E28(iLocal_2657[2], -3.44f, 0f, 38.88f, 2, 1);
							iLocal_2657[3] = unk_0x89241A4EA7EE46D2(joaat("prop_ld_can_01"), 2494.795f, 4970.246f, 44.5525f, 1, 1, 0);
							unk_0x04A5FAE5B1EB8E28(iLocal_2657[3], -3.44f, 0f, 38.88f, 2, 1);
							iLocal_2657[4] = unk_0x89241A4EA7EE46D2(joaat("prop_ld_can_01"), 2494.204f, 4970.269f, 44.5201f, 1, 1, 0);
							unk_0x04A5FAE5B1EB8E28(iLocal_2657[4], -3.44f, 0f, 38.88f, 2, 1);
							iLocal_2657[5] = unk_0x89241A4EA7EE46D2(joaat("prop_ld_can_01"), 2494.372f, 4970.744f, 44.51f, 1, 1, 0);
							unk_0x04A5FAE5B1EB8E28(iLocal_2657[5], -3.44f, 0f, 38.88f, 2, 1);
							iLocal_2657[6] = unk_0x89241A4EA7EE46D2(joaat("prop_ld_can_01"), 2494.372f, 4971.092f, 44.4987f, 1, 1, 0);
							unk_0x04A5FAE5B1EB8E28(iLocal_2657[6], -3.44f, 0f, 38.88f, 2, 1);
							iLocal_2657[7] = unk_0x89241A4EA7EE46D2(joaat("prop_ld_can_01"), 2493.77f, 4971f, 44.6287f, 1, 1, 0);
							unk_0x04A5FAE5B1EB8E28(iLocal_2657[7], 3.955f, 0f, 139.68f, 2, 1);
							iLocal_2657[8] = unk_0x89241A4EA7EE46D2(joaat("prop_ld_can_01"), 2493.98f, 4971.279f, 44.6038f, 1, 1, 0);
							unk_0x04A5FAE5B1EB8E28(iLocal_2657[8], 3.955f, 0f, 139.68f, 2, 1);
							iLocal_2657[9] = unk_0x89241A4EA7EE46D2(joaat("prop_ld_can_01"), 2494.104f, 4971.438f, 44.5826f, 1, 1, 0);
							unk_0x04A5FAE5B1EB8E28(iLocal_2657[9], 3.955f, 0f, 139.68f, 2, 1);
							iVar4 = 0;
							while (iVar4 < iLocal_2657)
							{
								unk_0x46B421AC0DE69583(iLocal_2657[iVar4], 1);
								unk_0x98F0FA127445E343(iLocal_2657[iVar4], 1);
								iVar4++;
							}
							Local_2515[iVar0 /*6*/].f_2++;
							break;
						
						case 0:
							if (!unk_0x23E9113C762466ED(iLocal_2680) && !unk_0x23E9113C762466ED(iLocal_2681))
							{
								if (unk_0x8B98C3C1BE2D3F12(2493.5f, 4969.2f, 43.9f, 1f, joaat("prop_barrel_pile_03"), 0) && unk_0x8B98C3C1BE2D3F12(2493.4f, 4971.8f, 43.6f, 1f, joaat("prop_pallet_pile_01"), 0))
								{
									iLocal_2680 = unk_0x29280EF6724677F5(2493.5f, 4969.2f, 43.9f, 1f, joaat("prop_barrel_pile_03"), 1, 0, 1);
									unk_0x98F0FA127445E343(iLocal_2680, 1);
									unk_0xB30185B1BE926A58(2493.4f, 4971.8f, 43.6f, 1f, joaat("prop_pallet_pile_01"), 0);
									iLocal_2681 = unk_0x521A82CF998EDB21(joaat("prop_pallet_pile_01"), 2493.427f, 4971.729f, 43.54362f, 1, 1, 0);
									unk_0x04A5FAE5B1EB8E28(iLocal_2681, -1.436373f, 0.176147f, -36.6601f, 2, 1);
									unk_0x98F0FA127445E343(iLocal_2681, 1);
									func_32(24, 0);
									Local_2515[iVar0 /*6*/].f_2++;
								}
							}
							else
							{
								unk_0x1AAFEA627BB9C402(&iLocal_2681);
								iLocal_2681 = unk_0x521A82CF998EDB21(joaat("prop_pallet_pile_01"), 2493.427f, 4971.729f, 43.54362f, 1, 1, 0);
								unk_0x04A5FAE5B1EB8E28(iLocal_2681, -1.436373f, 0.176147f, -36.6601f, 2, 1);
								unk_0x98F0FA127445E343(iLocal_2681, 1);
								func_32(24, 0);
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							iVar4 = 0;
							iVar4 = 0;
							while (iVar4 < iLocal_2657)
							{
								if (unk_0x23E9113C762466ED(iLocal_2657[iVar4]))
								{
									unk_0x98F0FA127445E343(iLocal_2657[iVar4], 0);
								}
								iVar4++;
							}
							Local_2515[iVar0 /*6*/].f_1 = 0;
							Local_2515[iVar0 /*6*/].f_1 = 0;
							break;
					}
					break;
				
				case 24:
					if (!unk_0x48B8265059381CD0(Local_2515[iVar0 /*6*/].f_5, 0))
					{
						if (unk_0x23E9113C762466ED(iLocal_2680))
						{
							if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
							{
								if (unk_0xC017443DBE6DA4D6(iLocal_2680, unk_0x17B5CC8A8615737D(), 1) || func_4(unk_0x17B5CC8A8615737D(), iLocal_2680, 1) < 30f)
								{
									unk_0x98F0FA127445E343(iLocal_2680, 0);
									unk_0xEB79FECD9022AAF0(&(Local_2515[iVar0 /*6*/].f_5), 0);
								}
							}
						}
					}
					if (!unk_0x48B8265059381CD0(Local_2515[iVar0 /*6*/].f_5, 1))
					{
						if (unk_0x23E9113C762466ED(iLocal_2681))
						{
							if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
							{
								if (unk_0xC017443DBE6DA4D6(iLocal_2681, unk_0x17B5CC8A8615737D(), 1) || func_4(unk_0x17B5CC8A8615737D(), iLocal_2681, 1) < 30f)
								{
									unk_0x98F0FA127445E343(iLocal_2681, 0);
									unk_0xEB79FECD9022AAF0(&(Local_2515[iVar0 /*6*/].f_5), 1);
								}
							}
						}
					}
					if ((unk_0x48B8265059381CD0(Local_2515[iVar0 /*6*/].f_5, 0) && unk_0x48B8265059381CD0(Local_2515[iVar0 /*6*/].f_5, 1)) || iLocal_2511 == 6)
					{
						if (unk_0x23E9113C762466ED(iLocal_2680))
						{
							unk_0x98F0FA127445E343(iLocal_2680, 0);
						}
						if (unk_0x23E9113C762466ED(iLocal_2681))
						{
							unk_0x98F0FA127445E343(iLocal_2681, 0);
						}
						Local_2515[iVar0 /*6*/].f_1 = 0;
					}
					break;
				
				case 26:
					switch (Local_2515[iVar0 /*6*/].f_2)
					{
						case -1:
							if (unk_0x23E9113C762466ED(Local_755[12 /*33*/]))
							{
								unk_0x478AE709A466CB7E(&(Local_755[12 /*33*/]));
							}
							if (unk_0x23E9113C762466ED(Local_755[13 /*33*/]))
							{
								unk_0x478AE709A466CB7E(&(Local_755[13 /*33*/]));
							}
							if (unk_0x23E9113C762466ED(Local_755[14 /*33*/]))
							{
								unk_0x478AE709A466CB7E(&(Local_755[14 /*33*/]));
							}
							unk_0x924CDE68BA2ED3BA(joaat("ig_janet"));
							unk_0x924CDE68BA2ED3BA(joaat("ig_old_man1a"));
							unk_0x924CDE68BA2ED3BA(joaat("ig_old_man2"));
							Local_2515[iVar0 /*6*/].f_1 = 0;
							break;
						
						case 0:
							unk_0xA0E7D0E8FE126EE8("MISSChinese2_crystalMazeMCS1_IG");
							Local_2515[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (unk_0xF4F8AE8DD0F08C1E("MISSChinese2_crystalMazeMCS1_IG"))
							{
								if (unk_0xB116D5E6F24B8406() || !unk_0x1B76B77EDF24A933())
								{
									if (unk_0x23E9113C762466ED(Local_755[13 /*33*/]) && !unk_0xCA41A00932714525(Local_755[13 /*33*/]))
									{
										unk_0x5DC8C2F2F8A363C2(Local_755[13 /*33*/], 1986.06f, 3051.708f, 46.2151f, 1, 0, 0, 1);
									}
									if (unk_0x23E9113C762466ED(Local_755[14 /*33*/]) && !unk_0xCA41A00932714525(Local_755[14 /*33*/]))
									{
										unk_0x5DC8C2F2F8A363C2(Local_755[14 /*33*/], 1986.105f, 3051.659f, 46.2151f, 1, 0, 0, 1);
									}
									Local_2515[iVar0 /*6*/].f_2++;
								}
							}
							break;
						
						case 2:
							if (unk_0x3F1EB7756B4EA5B4(1984.89f, 3052.46f, 46.98f, 0.3f, 1) && unk_0x3F1EB7756B4EA5B4(1985.322f, 3053.087f, 46.98f, 0.3f, 1))
							{
								if (!unk_0x23E9113C762466ED(Local_755[13 /*33*/]))
								{
									Local_755[13 /*33*/] = unk_0x2AD5F4170F4ACBEB(26, joaat("ig_old_man1a"), 1987.231f, 3052.741f, 46.214f, 0, 1, 1);
								}
								if (!unk_0x23E9113C762466ED(Local_755[14 /*33*/]))
								{
									Local_755[14 /*33*/] = unk_0x2AD5F4170F4ACBEB(26, joaat("ig_old_man2"), 1987.231f, 3052.741f, 46.214f, 0, 1, 1);
								}
								if (!unk_0x23E9113C762466ED(Local_755[12 /*33*/]))
								{
									Local_755[12 /*33*/] = unk_0x2AD5F4170F4ACBEB(26, joaat("ig_janet"), 1987.231f, 3052.741f, 46.214f, 0, 1, 1);
								}
								unk_0xEB79FECD9022AAF0(&(Local_2515[iVar0 /*6*/].f_5), 1);
								unk_0xA2CF3F29D091EFF2(Local_755[14 /*33*/], 1984.89f, 3052.46f, 46.98f, 0.3f, 0);
								unk_0xDEAF24B058321A05(Local_755[14 /*33*/], 1, 1);
								unk_0xCC61640A821F277C(Local_755[14 /*33*/], 0);
								unk_0xEB79FECD9022AAF0(&(Local_2515[iVar0 /*6*/].f_5), 0);
								unk_0xA2CF3F29D091EFF2(Local_755[13 /*33*/], 1985.322f, 3053.087f, 46.98f, 0.3f, 0);
								unk_0xDEAF24B058321A05(Local_755[13 /*33*/], 1, 1);
								unk_0xCC61640A821F277C(Local_755[13 /*33*/], 0);
								if (!unk_0x00743AFDA92F3B04(Local_2515[iVar0 /*6*/].f_5))
								{
									Local_2515[iVar0 /*6*/].f_5 = unk_0x356EABB012B22D07(1987.231f, 3052.741f, 46.214f, 0f, 0f, 57.6f, 2);
									unk_0x8B06F7FDDA8B98FB(Local_2515[iVar0 /*6*/].f_5, 1);
								}
								unk_0xA17D768ED938600C(Local_755[12 /*33*/], Local_2515[iVar0 /*6*/].f_5, "MISSChinese2_crystalMazeMCS1_IG", "bar_peds_action_janet", 1000f, -1000f, 1, 0, 1148846080, 0);
								unk_0xDEAF24B058321A05(Local_755[12 /*33*/], 1, 1);
								unk_0xCC61640A821F277C(Local_755[12 /*33*/], 0);
								Local_2515[iVar0 /*6*/].f_5 = 0;
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 3:
							if (unk_0xB116D5E6F24B8406() || !unk_0x1B76B77EDF24A933())
							{
							}
							if (!unk_0xCA41A00932714525(Local_755[13 /*33*/]) && !unk_0xCA41A00932714525(Local_755[14 /*33*/]))
							{
								unk_0x6018E338F7ABCE75(Local_755[13 /*33*/], 152, 1);
								unk_0x6018E338F7ABCE75(Local_755[14 /*33*/], 152, 1);
								if (unk_0x48B8265059381CD0(Local_2515[iVar0 /*6*/].f_5, 0) && unk_0x48B8265059381CD0(Local_2515[iVar0 /*6*/].f_5, 1))
								{
									Local_2515[iVar0 /*6*/].f_2++;
								}
								else
								{
									if (unk_0x1F8F07D86DA1A701(Local_755[13 /*33*/], 993674639) != 1)
									{
										if (unk_0x3F1EB7756B4EA5B4(1984.89f, 3052.46f, 46.98f, 0.3f, 1))
										{
											unk_0xEB79FECD9022AAF0(&(Local_2515[iVar0 /*6*/].f_5), 0);
											unk_0xA2CF3F29D091EFF2(Local_755[13 /*33*/], 1984.89f, 3052.46f, 46.98f, 0.3f, 0);
											unk_0xCC61640A821F277C(Local_755[13 /*33*/], 0);
										}
									}
									else
									{
										unk_0xEB79FECD9022AAF0(&(Local_2515[iVar0 /*6*/].f_5), 0);
									}
									if (unk_0x1F8F07D86DA1A701(Local_755[14 /*33*/], 993674639) != 1)
									{
										if (unk_0x3F1EB7756B4EA5B4(1985.322f, 3053.087f, 46.98f, 0.3f, 1))
										{
											unk_0xEB79FECD9022AAF0(&(Local_2515[iVar0 /*6*/].f_5), 1);
											unk_0xA2CF3F29D091EFF2(Local_755[14 /*33*/], 1985.322f, 3053.087f, 46.98f, 0.3f, 0);
											unk_0xCC61640A821F277C(Local_755[14 /*33*/], 0);
										}
									}
									else
									{
										unk_0xEB79FECD9022AAF0(&(Local_2515[iVar0 /*6*/].f_5), 1);
									}
								}
							}
							break;
						
						case 4:
							if (func_67(unk_0x17B5CC8A8615737D(), 1991.419f, 3054.915f, 47.533f, 1) > 150f)
							{
								Local_2515[iVar0 /*6*/].f_2 = -1;
							}
							break;
						
						case 6:
							if (!unk_0xCA41A00932714525(Local_755[12 /*33*/]))
							{
								unk_0xCA58071CE9CCE891(Local_755[12 /*33*/], unk_0x17B5CC8A8615737D(), 100f, -1, 0, 0);
								unk_0x650BB0E111420EAF(Local_755[12 /*33*/], 1);
								unk_0x6500ADB01E821BC0(&(Local_755[12 /*33*/]));
							}
							if (!unk_0xCA41A00932714525(Local_755[13 /*33*/]))
							{
								unk_0xCA58071CE9CCE891(Local_755[13 /*33*/], unk_0x17B5CC8A8615737D(), 100f, -1, 0, 0);
								unk_0x650BB0E111420EAF(Local_755[13 /*33*/], 1);
								unk_0x6500ADB01E821BC0(&(Local_755[13 /*33*/]));
							}
							if (!unk_0xCA41A00932714525(Local_755[14 /*33*/]))
							{
								unk_0xCA58071CE9CCE891(Local_755[14 /*33*/], unk_0x17B5CC8A8615737D(), 100f, -1, 0, 0);
								unk_0x650BB0E111420EAF(Local_755[14 /*33*/], 1);
								unk_0x6500ADB01E821BC0(&(Local_755[14 /*33*/]));
							}
							Local_2515[iVar0 /*6*/].f_2 = 7;
							break;
						
						case 7:
							if (func_67(unk_0x17B5CC8A8615737D(), 1991.419f, 3054.915f, 47.533f, 1) > 150f)
							{
								Local_2515[iVar0 /*6*/].f_2 = -1;
							}
							break;
					}
					break;
				
				case 27:
					unk_0x9ADE91E3B3EF91ED(2444.176f, 4974.077f, 56.4066f, 30f, joaat("v_ilev_fh_door03"), 1);
					unk_0x9ADE91E3B3EF91ED(2444.176f, 4974.077f, 56.4066f, 30f, joaat("v_ilev_fh_frntdoor"), 1);
					Local_2515[iVar0 /*6*/].f_1 = 0;
					break;
				
				case 29:
					break;
			}
			if (Local_2515[iVar0 /*6*/].f_2 == -1)
			{
				Local_2515[iVar0 /*6*/].f_1 = 0;
				Local_2515[iVar0 /*6*/].f_2 = 0;
				Local_2515[iVar0 /*6*/].f_3 = 0;
				Local_2515[iVar0 /*6*/].f_4 = 0;
				Local_2515[iVar0 /*6*/].f_5 = 0;
			}
		}
		iVar0++;
	}
}

float func_4(int iParam0, int iParam1, int iParam2)
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

var func_5(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x9213703D695C6A7A(Param0);
	unk_0x00EA14207118EEE2(uVar0, func_6(unk_0x63C468D583002D23(), 1f, 1f));
	unk_0x5ACBCE67F0494242(uVar0, iParam3);
	return uVar0;
}

float func_6(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_7(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x7F755B97D75D9B44(sParam0);
	unk_0x6EBC181C75DC822D(iParam1, 0);
}

int func_8()
{
	if (iLocal_269 == 0)
	{
		return 1;
	}
	return 0;
}

void func_9(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67917)
	{
		if (Global_67918[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_67918[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_67918[iVar0 /*9*/].f_1 = (Global_67918[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_67918[iVar0 /*9*/] != -1)
	{
		if (Global_56047[Global_67918[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_67918[iVar0 /*9*/].f_1 > 1)
			{
				Global_67918[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_67918[iVar0 /*9*/].f_1 < 0)
			{
				Global_67918[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

void func_10(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_55832 = iParam0;
	if (!Global_55830)
	{
		Global_55830 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67917)
		{
			if (Global_67918[iVar0 /*9*/] == iParam0)
			{
				Global_67918[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_11(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_55830)
	{
	}
	Global_55830 = 0;
	if (bParam0)
	{
		Global_55831 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67917)
		{
			if (Global_56047[Global_67918[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_67918[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_67917)
		{
			if (Global_67918[iVar0 /*9*/] > 0)
			{
				if (Global_67918[iVar0 /*9*/] == iParam1)
				{
					Global_67918[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_12(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 1)
	{
		if (iLocal_262 == 0)
		{
			iVar0 = 0;
			while (iVar0 < Local_444.f_0)
			{
				if (unk_0xA3794949321E107C(Local_444[iVar0 /*5*/].f_3))
				{
					if (unk_0xC6F9754C5842E80A(Local_444[iVar0 /*5*/].f_3) < 255)
					{
						unk_0x020DF7300725ECAB(&(Local_444[iVar0 /*5*/].f_3));
					}
					else
					{
						unk_0x5F97CFBDE7F2B599(Local_444[iVar0 /*5*/].f_3, 0);
					}
				}
				iVar0++;
			}
			iLocal_262 = 1;
		}
	}
	else if (iLocal_262)
	{
		iVar0 = 0;
		while (iVar0 < Local_444.f_0)
		{
			if (unk_0xA3794949321E107C(Local_444[iVar0 /*5*/].f_3))
			{
				unk_0x5F97CFBDE7F2B599(Local_444[iVar0 /*5*/].f_3, 255);
			}
			else
			{
				Local_444[iVar0 /*5*/].f_3 = func_5(Local_444[iVar0 /*5*/], 0);
				unk_0x5202472B608D60CC(Local_444[iVar0 /*5*/].f_3, 1);
				unk_0x00EA14207118EEE2(Local_444[iVar0 /*5*/].f_3, 0.4f);
				unk_0x5F97CFBDE7F2B599(Local_444[iVar0 /*5*/].f_3, 0);
				unk_0xCC930AE12D020496(Local_444[iVar0 /*5*/].f_3, 5);
				unk_0x1441D969BF79AD61(Local_444[iVar0 /*5*/].f_3, 0);
			}
			iVar0++;
		}
		iLocal_262 = 0;
	}
}

int func_13(int iParam0)
{
	return func_14(iParam0, 1, 0);
}

int func_14(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x23E9113C762466ED(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xF1FE04D602EA392E(iParam0);
	if (unk_0x3983CCB0D958159C(iParam0))
	{
		unk_0x00EA14207118EEE2(uVar0, func_6(unk_0x63C468D583002D23(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xB8F5F7438C07CC5E(uVar0, bParam1);
		}
		else
		{
			unk_0xCC930AE12D020496(uVar0, 2);
		}
	}
	else if (unk_0x80E9CA64E9C8E070(iParam0))
	{
		unk_0x00EA14207118EEE2(uVar0, func_6(unk_0x63C468D583002D23(), 0.7f, 0.7f));
		unk_0xB8F5F7438C07CC5E(uVar0, bParam1);
	}
	else if (unk_0x1461B0B259D86067(iParam0))
	{
		unk_0x00EA14207118EEE2(uVar0, func_6(unk_0x63C468D583002D23(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_15(char* sParam0, int iParam1, char* sParam2)
{
	iLocal_3506 = 1;
	iLocal_3507 = iParam1;
	sLocal_3509 = sParam0;
	sLocal_3510 = sParam2;
}

void func_16(int iParam0, int iParam1)
{
	Global_55833 = iParam0;
	Global_55834 = iParam1;
}

void func_17(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_55835 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_67917)
	{
		if (iParam1 == -1 || Global_67918[iVar0 /*9*/] == iParam1)
		{
			if (Global_67918[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_67918[iVar0 /*9*/].f_6 = iParam0;
				Global_67918[iVar0 /*9*/].f_7 = 1;
				Global_67918[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

int func_18(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_755.f_0)
	{
		if (Local_755[iVar0 /*33*/].f_2 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_19(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam0 != 198)
	{
		if (Global_69702)
		{
			Global_2433125.f_74.f_227[iParam0] = iParam1;
		}
		else
		{
			Global_101700.f_6220.f_227[iParam0] = iParam1;
		}
		Global_32749[iParam0] = iParam2;
		Global_32948[iParam0] = 1;
		func_22(iParam0, bParam3, iParam4, 0);
		func_20(iParam0, iParam1);
	}
}

void func_20(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 12:
			if (iParam1 == 0)
			{
				unk_0x911A2E2113B99B78("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0, 0);
			}
			else
			{
				unk_0x911A2E2113B99B78("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 1, 0);
			}
			break;
		
		case 71:
			if (iParam1 != 1)
			{
				unk_0xD68AE97C94873C2B("HEIST_SWEATSHOP_ZONES", 0, 0);
			}
			else
			{
				unk_0xD68AE97C94873C2B("HEIST_SWEATSHOP_ZONES", 1, 0);
			}
			break;
		
		case 65:
			if (iParam1 == 1)
			{
				func_21(0, 0);
			}
			else
			{
				func_21(0, 1);
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				unk_0x911A2E2113B99B78("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 1, 0);
			}
			else
			{
				unk_0x911A2E2113B99B78("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0, 0);
			}
			break;
		
		case 174:
			if (iParam1 == 2)
			{
				unk_0xB1F3FFD33B3C25FD("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			}
			break;
		
		case 37:
			if (iParam1 == 1)
			{
				unk_0x396A8DEFD6DBA5FC("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0);
				unk_0x396A8DEFD6DBA5FC("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0);
				unk_0x396A8DEFD6DBA5FC("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0);
				unk_0x396A8DEFD6DBA5FC("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0);
			}
			break;
	}
}

void func_21(int iParam0, bool bParam1)
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

bool func_22(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	var uVar98;
	bool bVar99;
	int iVar100;
	
	bVar0 = false;
	Var3.f_4 = 3;
	Var3.f_8 = 3;
	Var3.f_64 = 3;
	Var3.f_75 = 3;
	Var3.f_91 = 3;
	func_26(&Var3, iParam0);
	if (func_23())
	{
		iVar1 = Global_101700.f_6220.f_227[iParam0];
	}
	else
	{
		iVar1 = Global_2433125.f_74.f_227[iParam0];
	}
	iVar2 = Global_33147[iParam0];
	if (unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()) && !bParam3)
	{
	}
	else
	{
		bVar99 = true;
		if (unk_0x765F5B806B517045(unk_0x6AF6B39BFDB53CB5()) != unk_0x765F5B806B517045("standard_global_reg"))
		{
			if (iParam2 == 0)
			{
				if (Global_32749[iParam0] && unk_0x3DC4639D5F23DEA2(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 0), Var3, 1) < 200f)
				{
					bVar99 = false;
				}
				if (!unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()) || unk_0x8ABAB1F335EBFAC2(unk_0x17B5CC8A8615737D()))
				{
					if (!unk_0x25BD4C26D84038CD())
					{
						bVar99 = false;
					}
				}
			}
		}
		if (unk_0xE41614517B6436B2() && (!unk_0xE9E6B5364105A000() || unk_0x4DA93F059B47A9FA() != 5))
		{
			bVar99 = false;
		}
		if (bVar99)
		{
			switch (Var3.f_3)
			{
				case 0:
					if (iVar1 == 2)
					{
					}
					else
					{
						if (Var3.f_4[iVar1] != 0)
						{
							unk_0x55718AC3667F2A7D(Var3, 10f, Var3.f_4[iVar1], 0);
						}
						if (Var3.f_4[iVar2] != 0)
						{
							unk_0xB30185B1BE926A58(Var3, 10f, Var3.f_4[iVar2], 1);
						}
						Global_34343[iParam0] = 1;
					}
					bVar0 = true;
					break;
				
				case 1:
					if (iVar1 == 0)
					{
						if (unk_0x765F5B806B517045(&(Var3.f_8[1 /*8*/])) != unk_0x765F5B806B517045("") && unk_0x765F5B806B517045(&(Var3.f_8[1 /*8*/])) != unk_0x765F5B806B517045(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x4C30048D7CAD04A5(&(Var3.f_8[1 /*8*/])))
							{
								unk_0xE6A366D0E2B7DE39(&(Var3.f_8[1 /*8*/]));
							}
						}
						if ((unk_0x765F5B806B517045(&(Var3.f_8[2 /*8*/])) != unk_0x765F5B806B517045("") && unk_0x765F5B806B517045(&(Var3.f_8[2 /*8*/])) != unk_0x765F5B806B517045("REMOVE_ALL_STATES")) && unk_0x765F5B806B517045(&(Var3.f_8[2 /*8*/])) != unk_0x765F5B806B517045(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x4C30048D7CAD04A5(&(Var3.f_8[2 /*8*/])))
							{
								unk_0xE6A366D0E2B7DE39(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (unk_0x765F5B806B517045(&(Var3.f_8[0 /*8*/])) != unk_0x765F5B806B517045(""))
						{
							if (!unk_0x4C30048D7CAD04A5(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x059B8D797D20327B(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (unk_0x765F5B806B517045(&(Var3.f_34)) != unk_0x765F5B806B517045(""))
						{
							if (!unk_0x4C30048D7CAD04A5(&(Var3.f_34)))
							{
								unk_0x059B8D797D20327B(&(Var3.f_34));
							}
						}
					}
					else if (iVar1 == 1)
					{
						if (unk_0x765F5B806B517045(&(Var3.f_34)) != unk_0x765F5B806B517045(""))
						{
							if (unk_0x4C30048D7CAD04A5(&(Var3.f_34)))
							{
								unk_0xE6A366D0E2B7DE39(&(Var3.f_34));
							}
						}
						if (unk_0x765F5B806B517045(&(Var3.f_8[0 /*8*/])) != unk_0x765F5B806B517045("") && unk_0x765F5B806B517045(&(Var3.f_8[0 /*8*/])) != unk_0x765F5B806B517045(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x4C30048D7CAD04A5(&(Var3.f_8[0 /*8*/])))
							{
								unk_0xE6A366D0E2B7DE39(&(Var3.f_8[0 /*8*/]));
							}
						}
						if ((unk_0x765F5B806B517045(&(Var3.f_8[2 /*8*/])) != unk_0x765F5B806B517045("") && unk_0x765F5B806B517045(&(Var3.f_8[2 /*8*/])) != unk_0x765F5B806B517045("REMOVE_ALL_STATES")) && unk_0x765F5B806B517045(&(Var3.f_8[2 /*8*/])) != unk_0x765F5B806B517045(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x4C30048D7CAD04A5(&(Var3.f_8[2 /*8*/])))
							{
								unk_0xE6A366D0E2B7DE39(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (unk_0x765F5B806B517045(&(Var3.f_8[1 /*8*/])) != unk_0x765F5B806B517045(""))
						{
							if (!unk_0x4C30048D7CAD04A5(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x059B8D797D20327B(&(Var3.f_8[1 /*8*/]));
							}
						}
					}
					else if (iVar1 == 2)
					{
						if (unk_0x765F5B806B517045(&(Var3.f_34)) != unk_0x765F5B806B517045(""))
						{
							if (unk_0x4C30048D7CAD04A5(&(Var3.f_34)))
							{
								unk_0xE6A366D0E2B7DE39(&(Var3.f_34));
							}
						}
						if (unk_0x765F5B806B517045(&(Var3.f_8[0 /*8*/])) != unk_0x765F5B806B517045("") && unk_0x765F5B806B517045(&(Var3.f_8[0 /*8*/])) != unk_0x765F5B806B517045(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x4C30048D7CAD04A5(&(Var3.f_8[0 /*8*/])))
							{
								unk_0xE6A366D0E2B7DE39(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (unk_0x765F5B806B517045(&(Var3.f_8[1 /*8*/])) != unk_0x765F5B806B517045("") && unk_0x765F5B806B517045(&(Var3.f_8[1 /*8*/])) != unk_0x765F5B806B517045(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x4C30048D7CAD04A5(&(Var3.f_8[1 /*8*/])))
							{
								unk_0xE6A366D0E2B7DE39(&(Var3.f_8[1 /*8*/]));
							}
						}
						if (unk_0x765F5B806B517045(&(Var3.f_8[2 /*8*/])) != unk_0x765F5B806B517045("") && unk_0x765F5B806B517045(&(Var3.f_8[2 /*8*/])) != unk_0x765F5B806B517045("REMOVE_ALL_STATES"))
						{
							if (!unk_0x4C30048D7CAD04A5(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x059B8D797D20327B(&(Var3.f_8[2 /*8*/]));
							}
						}
					}
					Global_34144[iParam0] = 1;
					Global_34343[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 2:
					iVar100 = unk_0xCA0D2B42E97CB506(Var3, &(Var3.f_42));
					if (iVar100 != 0)
					{
						if (unk_0x765F5B806B517045(&(Var3.f_50)) != unk_0x765F5B806B517045(""))
						{
							if (unk_0xE3C122250634A582(iVar100, &(Var3.f_50)))
							{
								unk_0x9AEED011E34D9C65(iVar100, &(Var3.f_50));
							}
						}
						if (iVar1 == 0)
						{
							if (unk_0x765F5B806B517045(&(Var3.f_8[1 /*8*/])) != unk_0x765F5B806B517045(""))
							{
								if (unk_0xE3C122250634A582(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x9AEED011E34D9C65(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
							if ((unk_0x765F5B806B517045(&(Var3.f_8[2 /*8*/])) != unk_0x765F5B806B517045("") && unk_0x765F5B806B517045(&(Var3.f_8[2 /*8*/])) != unk_0x765F5B806B517045("REMOVE_ALL_STATES")) && unk_0x765F5B806B517045(&(Var3.f_8[2 /*8*/])) != unk_0x765F5B806B517045(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0xE3C122250634A582(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x9AEED011E34D9C65(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0x765F5B806B517045(&(Var3.f_8[0 /*8*/])) != unk_0x765F5B806B517045(""))
							{
								if (!unk_0xE3C122250634A582(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x874DE19CF8659CF5(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
						}
						else if (iVar1 == 1)
						{
							if (unk_0x765F5B806B517045(&(Var3.f_8[0 /*8*/])) != unk_0x765F5B806B517045(""))
							{
								if (unk_0xE3C122250634A582(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x9AEED011E34D9C65(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
							if ((unk_0x765F5B806B517045(&(Var3.f_8[2 /*8*/])) != unk_0x765F5B806B517045("") && unk_0x765F5B806B517045(&(Var3.f_8[2 /*8*/])) != unk_0x765F5B806B517045("REMOVE_ALL_STATES")) && unk_0x765F5B806B517045(&(Var3.f_8[2 /*8*/])) != unk_0x765F5B806B517045(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0xE3C122250634A582(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x9AEED011E34D9C65(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0x765F5B806B517045(&(Var3.f_8[1 /*8*/])) != unk_0x765F5B806B517045(""))
							{
								if (!unk_0xE3C122250634A582(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x874DE19CF8659CF5(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
						}
						else if (iVar1 == 2)
						{
							if (unk_0x765F5B806B517045(&(Var3.f_8[0 /*8*/])) != unk_0x765F5B806B517045(""))
							{
								if (unk_0xE3C122250634A582(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x9AEED011E34D9C65(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
							if (unk_0x765F5B806B517045(&(Var3.f_8[1 /*8*/])) != unk_0x765F5B806B517045(""))
							{
								if (unk_0xE3C122250634A582(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x9AEED011E34D9C65(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
							if (unk_0x765F5B806B517045(&(Var3.f_8[2 /*8*/])) != unk_0x765F5B806B517045("") && unk_0x765F5B806B517045(&(Var3.f_8[2 /*8*/])) != unk_0x765F5B806B517045("REMOVE_ALL_STATES"))
							{
								if (!unk_0xE3C122250634A582(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x874DE19CF8659CF5(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
						}
						if (bParam1)
						{
							unk_0xCA6CBCAD7B35C261(iVar100);
						}
					}
					Global_34343[iParam0] = 1;
					Global_34144[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 3:
					if (unk_0x3DC4639D5F23DEA2(Var3, unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 0), 1) < 250f)
					{
						uVar98 = unk_0x0CE2297975A4AE38(Var3, 25f, &(Var3.f_8[0 /*8*/]));
						if (unk_0xF1DEF26108040848(uVar98))
						{
							if (iVar1 == 0)
							{
								unk_0x08B6ECD80C6BD224(uVar98, 3);
								Global_34343[iParam0] = 1;
								bVar0 = true;
							}
							else if (iVar1 == 1)
							{
								if ((unk_0x46995C6DD9E9DF8F(uVar98) != 6 && unk_0x46995C6DD9E9DF8F(uVar98) != 7) && unk_0x46995C6DD9E9DF8F(uVar98) != 8)
								{
									unk_0x08B6ECD80C6BD224(uVar98, 10);
									Global_34343[iParam0] = 1;
									bVar0 = true;
								}
							}
							else if (iVar1 == 2)
							{
								bVar0 = true;
							}
						}
					}
					break;
				
				case 4:
					if (iVar1 == 0)
					{
						unk_0xBFB926900526C8A5(Var3, 50f, Var3.f_4[1], Var3.f_4[0], 0);
						unk_0x21E7933CCC7B3724(&(Global_32495[(iParam0 / 32)]), (iParam0 % 32));
					}
					else if (iVar1 == 1)
					{
						unk_0x95D497EEDCDA9DD1(Var3, 50f, Var3.f_4[0], Var3.f_4[1], 1);
						unk_0xEB79FECD9022AAF0(&(Global_32495[(iParam0 / 32)]), (iParam0 % 32));
					}
					bVar0 = true;
					break;
			}
			if (bVar0)
			{
				Global_32948[iParam0] = 0;
				Global_33147[iParam0] = iVar1;
				if (!func_23())
				{
					if (!Global_33744[iParam0])
					{
						Global_33744[iParam0] = 1;
						Global_33943++;
					}
				}
			}
		}
	}
	return bVar0;
}

int func_23()
{
	if ((func_25() == -1 || func_25() == 999) && !func_24() == 0)
	{
		return 1;
	}
	return 0;
}

int func_24()
{
	return Global_25191;
}

int func_25()
{
	return Global_25190;
}

int func_26(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_4[iVar0] = 0;
		StringCopy(&(uParam0->f_8[iVar0 /*8*/]), "", 32);
		uParam0->f_64[iVar0] = 0;
		uParam0->f_75[iVar0] = 0;
		uParam0->f_91[iVar0] = 0;
		iVar0++;
	}
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0;
	uParam0->f_33 = 0;
	StringCopy(&(uParam0->f_34), "", 32);
	StringCopy(&(uParam0->f_42), "", 32);
	StringCopy(&(uParam0->f_50), "", 32);
	uParam0->f_58 = { 0f, 0f, 0f };
	uParam0->f_61 = { 0f, 0f, 0f };
	uParam0->f_68 = { 0f, 0f, 0f };
	uParam0->f_71 = { 0f, 0f, 0f };
	uParam0->f_74 = 0f;
	uParam0->f_79 = { 0f, 0f, 0f };
	uParam0->f_82 = { 0f, 0f, 0f };
	uParam0->f_85 = { 0f, 0f, 0f };
	uParam0->f_88 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 3:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TRV1_Trail_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TRV1_Trail_end", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TRV1_Trail_Finish", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 4:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS3_05_water_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_05_water_grp2", 32);
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 0:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "gasstation_ipl_group1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasstation_ipl_group2", 32);
			*uParam0 = { -93.4f, 6410.9f, 36.8f };
			break;
		
		case 1:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_Smash2_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_Smash2_endimap", 32);
			*uParam0 = { 890.3647f, -2367.289f, 28.10582f };
			break;
		
		case 2:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_StiltHouse_imapstart", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_StiltHouse_imapend", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "des_stilthouse_rebuild", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1020.5f, 663.41f, 154.75f };
			uParam0->f_58 = { -1018.913f, 603.2904f, 105.6611f };
			uParam0->f_61 = { -1038.913f, 639.2904f, 135.6611f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			break;
		
		case 5:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bnkheist_apt_norm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest", 32);
			break;
		
		case 196:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest_vfx", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			break;
		
		case 6:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "crashed_cargoplane", 32);
			break;
		
		case 7:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_jb700_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 8:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_entityXF_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 9:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_cheetah_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 10:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_ztype_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 11:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_48_Killed_Michael", 32);
			break;
		
		case 12:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cargoship", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "sunkcargoship", 32);
			uParam0->f_68 = { -162.8918f, -2365.769f, 0f };
			uParam0->f_71 = { 190.75f, 31.25f, 21f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 13:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ship_occ_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ship_occ_grp2", 32);
			break;
		
		case 14:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "smboat", 32);
			break;
		
		case 15:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasparticle_grp2", 32);
			*uParam0 = { -95.2f, 6411.3f, 31.5f };
			break;
		
		case 16:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_02_cf_offmission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission1", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 17:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission2", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 18:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission3", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 19:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission4", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 20:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jetstealtunnel", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 801.7f, -1810.8f, 23.3f };
			break;
		
		case 21:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Jetsteal_ipl_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jetsteal_ipl_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 787.3967f, -1808.858f, 29.8532f };
			uParam0->f_58 = { 814f, -1750f, 20f };
			uParam0->f_61 = { 790f, -1899f, 35f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			uParam0->f_64[2] = 0;
			break;
		
		case 22:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "BH1_47_JoshHse_UnBurnt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_47_JoshHse_Burnt", 32);
			break;
		
		case 23:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bh1_47_joshhse_firevfx", 32);
			break;
		
		case 24:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_30_Keep_Closed", 32);
			break;
		
		case 25:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "triathlon2_VBprops", 32);
			break;
		
		case 26:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_REQUEST", 32);
			*uParam0 = { 163.4f, -745.7f, 251f };
			break;
		
		case 27:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FBI_colPLUG", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 28:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FBI_repair", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 29:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_build1_h");
			uParam0->f_4[1] = joaat("dt1_05_build1_damage");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 30:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = -112041596;
			uParam0->f_4[1] = joaat("dt1_05_build1_damage_lod");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 31:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_slod");
			uParam0->f_4[1] = joaat("dt1_05_damage_slod");
			*uParam0 = { 178.534f, -668.835f, 37.2113f };
			break;
		
		case 32:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIB_heist_lights", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 33:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIB_heist_dmg", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 34:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_rubble", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 35:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIBlobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIBlobby", 32);
			*uParam0 = { 105.4557f, -745.4835f, 44.7548f };
			break;
		
		case 36:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_HC_REMOVE", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_HC_REQ", 32);
			*uParam0 = { 169f, -670.3f, 41.9f };
			break;
		
		case 37:
			uParam0->f_3 = 1;
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			uParam0->f_79 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_82 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_85 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_88 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			break;
		
		case 38:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkA_grp2", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 39:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 40:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkB_grp2", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 41:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 42:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkC_grp2", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 43:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 44:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkD_grp2", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 45:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 46:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkE_grp2", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 47:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 48:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_34), "des_methtrailer", 32);
			StringCopy(&(uParam0->f_8[0 /*8*/]), "methtrailer_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "methtrailer_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "methtrailer_grp3", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			uParam0->f_68 = { 31.134f, 3738.783f, 39.062f };
			uParam0->f_71 = { 13.6f, 20f, 8.9f };
			uParam0->f_74 = 48f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 1;
			break;
		
		case 49:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_meth_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			break;
		
		case 50:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_endimap", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			uParam0->f_79 = { 2383.756f, 4929.988f, 39.52461f };
			uParam0->f_82 = { 2505.756f, 5023.988f, 67.52461f };
			break;
		
		case 55:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_start_occl", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_end_occl", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			break;
		
		case 51:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2444.8f, 4976.4f, 50.5f };
			break;
		
		case 52:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm_props", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt_props", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 53:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 54:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farmint_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farmint", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 56:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "tankerexp_grp0", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp3", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 57:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp1", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 58:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp2", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 59:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_tankerexp", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 60:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "dockcrane1", 32);
			*uParam0 = { 889.3f, -2910.9f, 40f };
			break;
		
		case 61:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CanyonRvrShallow", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CanyonRvrDeep", 32);
			*uParam0 = { -1600.619f, 4443.457f, 0.725f };
			break;
		
		case 62:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Garage_door_locked", 32);
			*uParam0 = { 966.1f, -114.8f, 75.2f };
			break;
		
		case 63:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ch1_02_closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ch1_02_open", 32);
			*uParam0 = { -3086.428f, 339.2523f, 6.3717f };
			break;
		
		case 64:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ferris_finale_Anim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1675.178f, -1143.605f, 12.0175f };
			break;
		
		case 65:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "railing_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "railing_end", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 66:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "canyonriver01", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "canyonriver01_traincrash", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 67:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_WOFFM", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_FIB2_Mission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "DT1_05_WOFFM", 32);
			*uParam0 = { 131.29f, -631.22f, 261.85f };
			break;
		
		case 68:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "coronertrash", 32);
			*uParam0 = { 233.9f, -1355f, 30.3f };
			break;
		
		case 69:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Coroner_Int_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Coroner_Int_on", 32);
			*uParam0 = { 234.4f, -1355.6f, 40.5f };
			break;
		
		case 70:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "id2_14_pre_no_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 71:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during1", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_during2", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 72:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_on_fire", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_post_no_int", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 73:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during_door", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 74:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "burnt_switch_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 75:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_Default", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "RC12B_Destroyed", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "RC12B_Fixed", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 76:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_HospitalInterior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 105:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SM_15_BldGRAF1", 32);
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 106:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CH3_RD2_BishopsChickenGraffiti", 32);
			*uParam0 = { 1861.28f, 2402.11f, 58.53f };
			break;
		
		case 107:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FruitBB", 32);
			*uParam0 = { -1327.46f, -274.82f, 54.25f };
			break;
		
		case 108:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_04_MazeBillboardGraffiti", 32);
			*uParam0 = { 2697.32f, 3162.18f, 58.1f };
			break;
		
		case 109:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_Roads_RonOilGraffiti", 32);
			*uParam0 = { 2119.12f, 3058.21f, 53.25f };
			break;
		
		case 110:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ap1_03_bbrd_dcl", 32);
			*uParam0 = { -804.25f, -2276.88f, 23.59f };
			break;
		
		case 111:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_02_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_02_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 112:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_Emissive_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_Emissive_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 77:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 480.9554f, -1321.21f, 28.2037f };
			uParam0->f_85 = { 508.3f, -1299.3f, 39.4f };
			uParam0->f_88 = { 459.9f, -1363.2f, 21.4f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 0;
			break;
		
		case 78:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TrevorsTrailer", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TrevorsTrailerTrash", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TrevorsTrailerTidy", 32);
			*uParam0 = { 1973f, 3815f, 34f };
			uParam0->f_33 = 0;
			break;
		
		case joaat("mpsv_lp0_31"):
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "scafstartimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "scafendimap", 32);
			*uParam0 = { -1088.6f, -1650.6f, 6.4f };
			break;
		
		case 80:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chop_props", 32);
			*uParam0 = { -13.83f, -1455.45f, 31.81f };
			break;
		
		case 113:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "AP1_04_TriAf01", 32);
			*uParam0 = { -1277.629f, -2030.913f, 1.2823f };
			break;
		
		case 114:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS2_06_TriAf02", 32);
			*uParam0 = { 2384.969f, 4277.583f, 30.379f };
			break;
		
		case 115:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS4_04_TriAf03", 32);
			*uParam0 = { 1577.881f, 3836.107f, 30.7717f };
			break;
		
		case 87:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_21_prop_lift_on", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -180.5771f, -1016.928f, 28.2893f };
			break;
		
		case 88:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jewel2fake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "post_hiest_unload", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "bh1_16_refurb", 32);
			*uParam0 = { -630.4205f, -236.7843f, 37.057f };
			uParam0->f_79 = { (-623.6868f - 11f), (-231.935f - 11f), (40.30703f - 3.25f) };
			uParam0->f_82 = { (-623.6868f + 11f), (-231.935f + 11f), (40.30703f + 3.25f) };
			break;
		
		case 89:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bh1_16_doors_shut", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "refit_unload", 32);
			*uParam0 = { -583.1606f, -282.3967f, 35.394f };
			break;
		
		case 90:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "v_tunnel_hole_swap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "v_tunnel_hole", 32);
			*uParam0 = { -14.651f, -604.3639f, 25.1823f };
			break;
		
		case 91:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cs5_4_trains", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2773.61f, 2835.327f, 35.1903f };
			break;
		
		case 94:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "airfield", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 1743.682f, 3286.251f, 40.0875f };
			break;
		
		case 95:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1222.9f, 1877.9f, 79.9f };
			uParam0->f_58 = { 1206.8f, 1803f, 43.9f };
			uParam0->f_61 = { 1329f, 2060.4f, 143.9f };
			uParam0->f_64[0] = 0;
			uParam0->f_64[1] = 1;
			uParam0->f_64[2] = 0;
			break;
		
		case 104:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_01_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_01_NewBill", 32);
			*uParam0 = { -351f, -1324f, 44.02f };
			break;
		
		case 103:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_17_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_17_NewBill", 32);
			*uParam0 = { 391.81f, -962.71f, 41.97f };
			break;
		
		case 102:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_14_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_14_NewBill", 32);
			*uParam0 = { 424.2f, -1944.31f, 33.09f };
			break;
		
		case 92:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_01_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 93:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_02_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 118:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_M_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 116:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_D_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_D_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 117:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_S_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_S_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 119:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_L_Items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_L_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 120:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 122:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_FameShame", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 121:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_JewelHeist", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 123:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Michael_premier", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 124:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_plane_ticket", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 170:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "burgershot_yoga", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 171:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_Scuba", 32);
			StringCopy(&(uParam0->f_42), "V_Michael_Garage", 32);
			*uParam0 = { -810.5301f, 187.7868f, 71.4786f };
			break;
		
		case 125:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_bed_tidy", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_bed_Messy", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 164:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jewel_Gasmasks", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 165:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency _Overalls", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 166:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency_Blueprint", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 167:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_KitBag", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 168:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Body_Armour", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 169:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Fireman", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 126:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 127:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 128:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 129:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 130:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 131:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 132:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 133:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 134:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 179:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shutter_open", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "shutter_closed", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -30.8793f, -1088.336f, 25.4221f };
			uParam0->f_68 = { -29.3f, -1086.35f, 25.57f };
			uParam0->f_71 = { 5.5f, 3f, 2f };
			uParam0->f_74 = -10f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 174:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "csr_beforeMission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "csr_afterMissionA", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "csr_afterMissionB", 32);
			StringCopy(&(uParam0->f_50), "csr_inMission", 32);
			uParam0->f_33 = 0;
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 175:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_68 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_71 = { 2.5f, 3f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 176:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_68 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_71 = { 3f, 1f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 177:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_68 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_71 = { 1f, 3f, 2f };
			uParam0->f_74 = -45f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 178:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "carshowroom_broken", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "carshowroom_boarded", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 173:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shr_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "fakeint", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 180:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Shutter", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "", 32);
			*uParam0 = { 23.9346f, -669.7552f, 30.8853f };
			break;
		
		case 181:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Hospitaldoorsanim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "Hospitaldoorsfixed", 32);
			StringCopy(&(uParam0->f_42), "v_hospital", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 300.9423f, -586.1784f, 42.2919f };
			break;
		
		case 135:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_clean_apt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 136:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 137:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_C", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 138:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_sextoys_a", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 139:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_wade_shit", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 140:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_wade_sofa_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 141:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "layer_debra_pic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 142:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_torture", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 143:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_sofa_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_sofa_B", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 144:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_whiskey", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 145:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_mrJam_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 146:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_C", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 147:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "vb_30_emissive", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_murder", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 148:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_crimetape", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 149:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "sheriff_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 1856.029f, 3682.998f, 33.2675f };
			break;
		
		case 150:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_16_Sheriff_Cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -440.5073f, 6018.766f, 30.49f };
			break;
		
		case 151:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 152:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo_eye", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 153:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_57_FranklinStuff", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Franklin_LEFT", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 154:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_GangBandana", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 155:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Safari", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 172:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_19_Trevor_Mess", 32);
			StringCopy(&(uParam0->f_42), "v_strip3", 32);
			*uParam0 = { 96.4811f, -1291.294f, 28.2688f };
			break;
		
		case 182:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 139.5795f, -3092.962f, 8.64631f };
			uParam0->f_79 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_82 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_85 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_88 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 1;
			break;
		
		case 183:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 203.7784f, -3131.767f, 7.041344f };
			uParam0->f_79 = { Vector(7.041344f, -3131.767f, 203.7784f) - Vector(2.5625f, 2.75f, 4.875f) };
			uParam0->f_82 = { Vector(7.041344f, -3131.767f, 203.7784f) + Vector(2.5625f, 2.75f, 4.875f) };
			break;
		
		case 184:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 144.7706f, -2982.659f, 7.952507f };
			uParam0->f_79 = { Vector(7.952507f, -2982.659f, 144.7706f) - Vector(3.125f, 3.4375f, 5.3125f) };
			uParam0->f_82 = { Vector(7.952507f, -2982.659f, 144.7706f) + Vector(3.125f, 3.4375f, 5.3125f) };
			break;
		
		case 185:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_79 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_82 = { -1158.965f, -1524.983f, 11.63273f };
			break;
		
		case 187:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_79 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_82 = { -1048.064f, 368.0221f, 70.9128f };
			break;
		
		case 186:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_79 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_82 = { 1983.45f, 3830.78f, 36.2726f };
			break;
		
		case 188:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_79 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_82 = { -1076.233f, 92.1041f, 60.0617f };
			break;
		
		case 81:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KorizTempWalls", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2199.138f, 223.4648f, 181.1118f };
			break;
		
		case 82:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "mic3_chopper_debris", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2242.785f, 263.4779f, 173.6154f };
			break;
		
		case 83:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "chemgrill_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 3832.9f, 3665.5f, -23.4f };
			break;
		
		case 84:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Plane_crash_trench", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 2814.7f, 4758.5f, 47.9f };
			break;
		
		case 85:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "golfflags", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1096.505f, 4.5754f, 49.8103f };
			break;
		
		case 86:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "yogagame", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -781.6566f, 186.8937f, 71.8352f };
			break;
		
		case 189:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Carwash_with_spinners", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Carwash_without_spinners", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 55.7f, -1391.3f, 30.5f };
			break;
		
		case 190:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "KT_CarWash", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KT_CarWash_NoBrush", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 700.091f, -933.641f, 20.308f };
			break;
		
		case 191:
			uParam0->f_3 = 1;
			*uParam0 = { -1096.381f, -836.17f, 36.6755f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 192:
			uParam0->f_3 = 1;
			*uParam0 = { 449.6558f, -980.1375f, 42.6918f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 193:
			uParam0->f_3 = 1;
			*uParam0 = { 363.0175f, -1598.079f, 35.9502f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 194:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_07_MPGates", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { -1601.424f, 2808.213f, 16.2598f };
			break;
		
		case 97:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Gr_Closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 23.7318f, -647.2123f, 37.9549f };
			break;
		
		case 98:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FINBANK", 32);
			*uParam0 = { 12.9689f, -648.4698f, 9.7693f };
			break;
		
		case 99:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "PAPER1_RCM_ALT", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "PAPER1_RCM", 32);
			*uParam0 = { -1459.127f, 486.1281f, 115.2016f };
			break;
		
		case 100:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SP1_10_fake_interior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SP1_10_real_interior", 32);
			*uParam0 = { -248.4916f, -2010.509f, 34.5743f };
			break;
		
		case 101:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "facelobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "facelobby", 32);
			*uParam0 = { -1081.347f, -263.1502f, 38.7152f };
			break;
		
		case 195:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "atriumglstatic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "atriumglmission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "atriumglcut", 32);
			*uParam0 = { 136.1795f, -750.701f, 262.0516f };
			break;
		
		case 197:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "racetrack01", 32);
			*uParam0 = { 2096f, 3168.7f, 42.9f };
			break;
	}
	switch (iParam1)
	{
		case 156:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "showhome_only", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 157:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_unpacking", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 158:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_settled", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 163:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tshirt", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 159:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bong_and_wine", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 161:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_flyer", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 162:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tux", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 160:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "locked", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "unlocked", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 96:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chophillskennel", 32);
			*uParam0 = { 19.0568f, 536.4818f, 169.6277f };
			break;
	}
	return 1;
}

void func_27()
{
	int iVar0;
	
	func_32(27, 0);
	unk_0x1B60289D0F2A2E3C(2479.875f, 4980.868f, 44.82052f, 60f, 1, 0, 0, 0);
	iLocal_2507 = unk_0x692A2891A2BA7352(joaat("burrito"), 2479.579f, 4980.503f, 44.8051f, 341.8158f, 1, 1);
	unk_0xEF9B9F466C3E73F6(iLocal_2507, 1);
	unk_0x866129976ECB1FB9(iLocal_2507, 2);
	unk_0x482AE8C0EAF5AE07(iLocal_2507, 1084227584);
	if (iLocal_2511 < 5)
	{
		func_29(1, 1, 4);
		func_29(1, 1, 5);
		func_29(1, 1, 2);
		func_29(1, 1, 1);
		func_29(1, 1, 6);
		func_29(1, 1, 7);
		func_29(1, 1, 3);
		func_29(1, 1, 0);
		func_29(1, 1, 8);
		func_29(1, 1, 9);
	}
	if (iLocal_2511 < 6)
	{
		func_29(2, 1, 10);
		func_29(2, 1, 11);
		func_29(2, 1, 18);
		func_29(2, 1, 19);
	}
	if (iLocal_2511 < 7)
	{
		func_29(2, 1, 12);
		func_29(2, 1, 13);
		func_29(2, 1, 14);
		func_29(2, 1, 15);
		func_29(2, 1, 16);
		func_29(2, 1, 17);
		func_29(2, 1, 20);
		func_29(5, 1, 23);
	}
	if (iLocal_2511 == 7)
	{
		unk_0xA0E7D0E8FE126EE8("DEAD");
		while (!unk_0xF4F8AE8DD0F08C1E("DEAD"))
		{
			func_28(323, 1);
		}
		Local_755[15 /*33*/] = unk_0x2AD5F4170F4ACBEB(26, joaat("a_m_y_methhead_01"), 2436.901f, 4959.1f, 45.8106f, 209.7559f, 1, 1);
		unk_0xEB1EFACA68933402(Local_755[15 /*33*/], "DEAD", "DEAD_C", 1000f, -1000f, -1, 1, 0, 0, 0, 0);
		unk_0xDEAF24B058321A05(Local_755[15 /*33*/], 1, 0);
		unk_0xC114CBAEC75AFD9E(Local_755[15 /*33*/], 1);
		Local_755[16 /*33*/] = unk_0x2AD5F4170F4ACBEB(26, joaat("a_m_m_hillbilly_01"), 2440.266f, 4970.705f, 45.8306f, 15.7982f, 1, 1);
		unk_0xEB1EFACA68933402(Local_755[16 /*33*/], "DEAD", "DEAD_D", 1000f, -1000f, -1, 1, 0, 0, 0, 0);
		unk_0xDEAF24B058321A05(Local_755[16 /*33*/], 1, 0);
		unk_0xC114CBAEC75AFD9E(Local_755[16 /*33*/], 1);
		Local_755[17 /*33*/] = unk_0x2AD5F4170F4ACBEB(26, joaat("a_m_m_hillbilly_02"), 2443.42f, 4974.523f, 45.8106f, 121.834f, 1, 1);
		unk_0xEB1EFACA68933402(Local_755[17 /*33*/], "DEAD", "DEAD_E", 1000f, -1000f, -1, 1, 0, 0, 0, 0);
		unk_0xDEAF24B058321A05(Local_755[17 /*33*/], 1, 0);
		unk_0xC114CBAEC75AFD9E(Local_755[17 /*33*/], 1);
		Local_755[18 /*33*/] = unk_0x2AD5F4170F4ACBEB(26, joaat("a_m_y_methhead_01"), 2448.888f, 4971.561f, 45.8106f, 194.7676f, 1, 1);
		unk_0xEB1EFACA68933402(Local_755[18 /*33*/], "DEAD", "DEAD_G", 1000f, -1000f, -1, 1, 0, 0, 0, 0);
		unk_0xDEAF24B058321A05(Local_755[18 /*33*/], 1, 0);
		unk_0xC114CBAEC75AFD9E(Local_755[18 /*33*/], 1);
		while (((!unk_0x5132972D2BBC5A62(Local_755[15 /*33*/], "DEAD", "DEAD_C", 3) || !unk_0x5132972D2BBC5A62(Local_755[16 /*33*/], "DEAD", "DEAD_D", 3)) || !unk_0x5132972D2BBC5A62(Local_755[17 /*33*/], "DEAD", "DEAD_E", 3)) || !unk_0x5132972D2BBC5A62(Local_755[18 /*33*/], "DEAD", "DEAD_G", 3))
		{
			func_28(54343, 1);
			if (((!unk_0xCA41A00932714525(Local_755[15 /*33*/]) && !unk_0xCA41A00932714525(Local_755[16 /*33*/])) && !unk_0xCA41A00932714525(Local_755[17 /*33*/])) && !unk_0xCA41A00932714525(Local_755[18 /*33*/]))
			{
			}
		}
		unk_0x4B04B4FAE554FA03(Local_755[15 /*33*/], 0);
		unk_0x4B04B4FAE554FA03(Local_755[16 /*33*/], 0);
		unk_0x4B04B4FAE554FA03(Local_755[17 /*33*/], 0);
		unk_0x4B04B4FAE554FA03(Local_755[18 /*33*/], 0);
		unk_0xF9FFB9857F3120F8("DEAD");
	}
	func_32(23, 0);
	iVar0 = 0;
	unk_0xEB79FECD9022AAF0(&iVar0, 3);
	unk_0xEB79FECD9022AAF0(&iVar0, 8);
	unk_0xEB79FECD9022AAF0(&iVar0, 1);
	unk_0xEB79FECD9022AAF0(&iVar0, 2);
	unk_0xEB79FECD9022AAF0(&iVar0, 4);
	uLocal_2650 = unk_0xA26C2D9EE51CAC7D(joaat("pickup_health_standard"), 2446.896f, 4990.972f, 45.5477f, iVar0, -1, 1, 0);
	if (!unk_0x33CB7E3A2B3E527C(iLocal_2510))
	{
		iLocal_2510 = unk_0x8655B796E2C96969(2464.956f, 4990.051f, 44.48415f, 2.5f, 3.125f, 2.0625f, 0f, 0, 7);
	}
	iLocal_2651[0] = unk_0xC70DFF4A4A4D72AB(joaat("pickup_health_standard"), 2444.497f, 4975.956f, 50.565f, 0f, 0f, 100f, iVar0, -1, 2, 1, 0);
	unk_0x85C3B935EDEA6E23(iLocal_2651[0], "V_8_Bed1Rm");
	iLocal_2651[1] = unk_0xC70DFF4A4A4D72AB(joaat("pickup_health_standard"), 2443.4f, 4978.52f, 46.8107f, 0f, 0f, 100f, iVar0, -1, 2, 1, 0);
	unk_0x85C3B935EDEA6E23(iLocal_2651[1], "V_8_KitchnRm");
	iLocal_2651[3] = unk_0xC70DFF4A4A4D72AB(joaat("pickup_health_standard"), 2441.028f, 4963.851f, 46.5605f, 0f, 0f, -80.6f, iVar0, -1, 2, 1, 0);
	unk_0x85C3B935EDEA6E23(iLocal_2651[3], "V_8_StudyRm");
	iLocal_2651[4] = unk_0xC70DFF4A4A4D72AB(joaat("pickup_health_standard"), 2435.165f, 4971.467f, 45.91f, 0f, 0f, -50.4f, iVar0, -1, 2, 1, 0);
	unk_0x85C3B935EDEA6E23(iLocal_2651[4], "V_8_Hall2Rm");
	iVar0 = 0;
	unk_0xEB79FECD9022AAF0(&iVar0, 2);
	unk_0xEB79FECD9022AAF0(&iVar0, 1);
	unk_0xEB79FECD9022AAF0(&iVar0, 3);
	iLocal_2651[2] = unk_0xC70DFF4A4A4D72AB(joaat("pickup_weapon_sawnoffshotgun"), 2438.788f, 4970.79f, 50.565f, 0f, 0f, 0f, iVar0, -1, 2, 1, 0);
	unk_0x85C3B935EDEA6E23(iLocal_2651[2], "V_8_Bed1Rm");
}

void func_28(int iParam0, int iParam1)
{
	iParam0 = iParam0;
	iParam1 = iParam1;
	unk_0x4EDE34FBADD967A6(0);
}

void func_29(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = iParam2;
	Local_755[iVar0 /*33*/].f_1 = iParam0;
	Local_755[iVar0 /*33*/].f_3 = iParam1;
	Local_755[iVar0 /*33*/].f_2 = iParam2;
	Local_755[iVar0 /*33*/].f_5 = 0;
}

int func_30(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_2515.f_0)
	{
		if (Local_2515[iVar0 /*6*/].f_1 == 1)
		{
			if (Local_2515[iVar0 /*6*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_31(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_2515.f_0)
	{
		if (Local_2515[iVar0 /*6*/] == iParam0)
		{
			Local_2515[iVar0 /*6*/].f_2 = -1;
			if (!bParam1)
			{
				Local_2515[iVar0 /*6*/].f_1 = 0;
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_32(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_2515.f_0)
	{
		if (Local_2515[iVar0 /*6*/].f_1 == 1)
		{
			if (Local_2515[iVar0 /*6*/] == iParam0)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_2515.f_0)
	{
		if (Local_2515[iVar0 /*6*/].f_1 == 0)
		{
			Local_2515[iVar0 /*6*/].f_1 = 1;
			Local_2515[iVar0 /*6*/] = iParam0;
			Local_2515[iVar0 /*6*/].f_2 = 0;
			Local_2515[iVar0 /*6*/].f_3 = iParam1;
			Local_2515[iVar0 /*6*/].f_4 = 0;
			Local_2515[iVar0 /*6*/].f_5 = 0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_33(float fParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		return 1;
	}
	iVar0 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
	if (unk_0x45CD66F0A131E554(iVar0, 0))
	{
		if (unk_0x17206B315923243C(iVar0, -1, 0) == unk_0x17B5CC8A8615737D())
		{
			if (!unk_0x71427D1CF2654C68(iVar0))
			{
				unk_0xEEA9C8F490BB3507(iVar0, fParam0, iParam1, 0);
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	if (unk_0x078054927A8129E2(unk_0x17B5CC8A8615737D()))
	{
		return 1;
	}
	if (unk_0x45CD66F0A131E554(iVar0, 0))
	{
		if (unk_0x71427D1CF2654C68(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_34()
{
	return Global_91543.f_303 > 0;
}

int func_35(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, char* sParam12, int iParam13)
{
	if (!iLocal_3687)
	{
		iLocal_3687 = 1;
		Local_3478[0 /*3*/] = iParam1;
		Local_3478[0 /*3*/].f_1 = iParam2;
		Local_3478[0 /*3*/].f_2 = sParam3;
		Local_3478[1 /*3*/] = iParam4;
		Local_3478[1 /*3*/].f_1 = iParam5;
		Local_3478[1 /*3*/].f_2 = sParam6;
		Local_3478[2 /*3*/] = iParam7;
		Local_3478[2 /*3*/].f_1 = iParam8;
		Local_3478[2 /*3*/].f_2 = sParam9;
		Local_3478[3 /*3*/] = iParam10;
		Local_3478[3 /*3*/].f_1 = iParam11;
		Local_3478[3 /*3*/].f_2 = sParam12;
		func_58(sParam0, iParam1, iParam4, iParam7, iParam10);
		func_55(iParam1, iParam2, sParam3);
		if (iParam4 != -1)
		{
			func_55(iParam4, iParam5, sParam6);
		}
		if (iParam7 != -1)
		{
			func_55(iParam7, iParam8, sParam9);
		}
		if (iParam10 != -1)
		{
			func_55(iParam10, iParam11, sParam12);
		}
		if (!func_53())
		{
			if (unk_0x75342B3CD0FB5275() && unk_0xDA5E060432EE0B26())
			{
				if (func_36(&uLocal_3522, "CHI2AUD", sParam0, iParam13, 1, 0, 0))
				{
					iLocal_3491 = 1;
					return 1;
				}
			}
			else if (func_36(&uLocal_3522, "CHI2AUD", sParam0, iParam13, 0, 0, 0))
			{
				iLocal_3491 = 0;
				return 1;
			}
		}
	}
	return 0;
}

bool func_36(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_52(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_37(sParam2, iParam3, 0);
}

int func_37(char* sParam0, int iParam1, bool bParam2)
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
					func_51();
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
		if (func_50(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_49();
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
				func_42();
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
				if (func_41())
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
			if (func_40())
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
			func_39();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_38();
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
		func_51();
	}
	return 0;
}

void func_38()
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

void func_39()
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

int func_40()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_41()
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

void func_42()
{
	if (func_48(14))
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
		Global_14443 = func_43();
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

int func_43()
{
	func_44();
	return Global_101700.f_2095.f_539.f_3549;
}

void func_44()
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
	{
		if (func_47(Global_101700.f_2095.f_539.f_3549) != unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()))
		{
			iVar0 = func_46(unk_0x17B5CC8A8615737D());
			if (func_45(iVar0) && (!func_48(14) || Global_100652))
			{
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_45(Global_101700.f_2095.f_539.f_3549))
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

bool func_45(int iParam0)
{
	return iParam0 < 3;
}

int func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x23E9113C762466ED(iParam0))
	{
		iVar1 = unk_0x0324EEB10F81965F(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_47(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_47(int iParam0)
{
	if (func_45(iParam0))
	{
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_48(int iParam0)
{
	return Global_35781 == iParam0;
}

void func_49()
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

bool func_50(int iParam0, int iParam1)
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

void func_51()
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

void func_52(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_53()
{
	struct<3> Var0;
	
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	if (func_54())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x4EA69F96033BA4FB(&Var0);
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

int func_54()
{
	if (unk_0x82F1A060D8F4583B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_55(int iParam0, int iParam1, char* sParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_3511)
	{
		if (iLocal_3511[iVar0] == iParam1)
		{
			func_57(&uLocal_3522, iVar0);
			iLocal_3511[iVar0] = 0;
		}
		iVar0++;
	}
	if (iLocal_3511[iParam0] != 0)
	{
		func_57(&uLocal_3522, iParam0);
	}
	func_56(&uLocal_3522, iParam0, iParam1, sParam2, 0, 1);
	iLocal_3511[iParam0] = iParam1;
}

void func_56(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_57(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_58(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (unk_0x9C88EB7B70229335(uLocal_51) || !unk_0x6A7B0D91FD88D9EE(uLocal_51, uParam0))
	{
		sLocal_51 = sParam0;
		iVar0 = 0;
		while (iVar0 <= 15)
		{
			if (Local_89[iVar0 /*10*/].f_7)
			{
				if (((iVar0 != iParam1 && iVar0 != iParam2) && iVar0 != iParam3) && iVar0 != iParam4)
				{
					func_57(&Local_89, iVar0);
				}
			}
			iVar0++;
		}
	}
}

int func_59()
{
	if (Global_15745 != 0 || unk_0x55C74612BE548D78())
	{
		return 1;
	}
	return 0;
}

int func_60(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9)
{
	if (!unk_0x75342B3CD0FB5275() || unk_0xDA5E060432EE0B26())
	{
		if (func_62(iParam1) != iParam2 || iParam2 == 0)
		{
			func_55(iParam1, iParam2, sParam3);
		}
		if (iParam4 != -1)
		{
			if (func_62(iParam4) != iParam5 || iParam5 == 0)
			{
				func_55(iParam4, iParam5, sParam6);
			}
		}
		if (iParam7 != -1)
		{
			if (func_62(iParam7) != iParam8 || iParam8 == 0)
			{
				func_55(iParam7, iParam8, sParam9);
			}
		}
		if (func_61(&uLocal_3522, 39, "CHI2AUD", sParam0, 9, 0, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

bool func_61(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_52(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_37(sParam3, iParam4, bParam7);
}

int func_62(int iParam0)
{
	return iLocal_3511[iParam0];
}

int func_63(int iParam0)
{
	if ((Global_16859 || Global_16858) || Global_16860)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		if (Global_14443.f_1 == 10)
		{
			if (Global_1628 == iParam0)
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
	return 0;
}

void func_64()
{
	Global_14611 = 0;
	func_65();
}

void func_65()
{
	if (unk_0x3ED8A07C6FA41E1B() || Global_14442 == 1)
	{
		unk_0x5FB0B609B3A49840();
		Global_16756 = 0;
		unk_0x660E8E7836E95077(0);
		Global_15745 = 6;
		Global_14443.f_1 = Global_14445;
		return;
	}
}

void func_66()
{
	Global_14611 = 0;
	func_51();
}

float func_67(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xA929B2923D14E2F8(iParam0, 0))
	{
		Var0 = { unk_0x57240623C1BC6E88(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x57240623C1BC6E88(iParam0, 0) };
	}
	return unk_0x3DC4639D5F23DEA2(Var0, Param1, iParam4);
}

int func_68(int iParam0)
{
	if (unk_0x23E9113C762466ED(iParam0))
	{
		if (unk_0x45CD66F0A131E554(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_69(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	func_70(Param0, Param3, fParam6, Param7, fParam10, Param11, bParam14, bParam15, bParam16, bParam17, bParam18);
}

void func_70(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (bParam15)
	{
		bParam15 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = unk_0x0C00E753D78DEA62();
	if (unk_0x23E9113C762466ED(iVar0))
	{
		if (!unk_0xC26429B504BA534D(iVar0))
		{
			unk_0xF0F77C99098F999B(iVar0, 1, 0);
			iVar3 = 1;
		}
		if (unk_0x45CD66F0A131E554(iVar0, 0))
		{
			if (bParam18)
			{
				func_77(iVar0);
			}
			if (unk_0x70A9F320A34FAC28(iVar0, Param0, Param3, fParam6, 0, 1, 0))
			{
				bVar1 = true;
			}
			else
			{
				Var10 = { unk_0x57240623C1BC6E88(iVar0, 1) };
				if ((Var10.f_2 > Param0.f_2 && Var10.f_2 < Param3.f_2) || (Var10.f_2 > Param3.f_2 && Var10.f_2 < Param0.f_2))
				{
					if (func_74(iVar0, Param0, Param3, fParam6))
					{
						bVar1 = true;
					}
				}
			}
			if (unk_0x45CD66F0A131E554(iVar0, 0))
			{
				if (unk_0x5AF6E4F22F4B49C3(iVar0, joaat("taxi")))
				{
					if (unk_0x17206B315923243C(iVar0, -1, 0) != unk_0x17B5CC8A8615737D() && unk_0x17206B315923243C(iVar0, -1, 0) != 0)
					{
						if (unk_0x3DC4639D5F23DEA2(Param0 + Param3 / Vector(2f, 2f, 2f), unk_0x57240623C1BC6E88(iVar0, 1), 1) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam16)
			{
				if (func_72(iVar0, func_43(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_71(Param11))
				{
					if (unk_0x45CD66F0A131E554(iVar0, 0))
					{
						iVar13 = unk_0x0324EEB10F81965F(iVar0);
						unk_0x397665926E912F5B(iVar0, &Var4, &Var7);
						if (unk_0xC5082382D5482C0C(iVar13))
						{
							Param11.f_0 = (Param11.f_0 + 3f);
							Param11.f_1 = (Param11.f_1 + 3f);
						}
						if (((iVar13 == joaat("zentorno") || iVar13 == joaat("btype")) || iVar13 == joaat("dubsta3")) || iVar13 == joaat("monster"))
						{
							Param11 = { Param11 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar13 == joaat("t20") || iVar13 == joaat("virgo"))
						{
							Param11 = { Param11 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((Var7.f_0 - Var4.f_0) > Param11.f_0)
						{
							bVar2 = false;
						}
						else if ((Var7.f_1 - Var4.f_1) > Param11.f_1)
						{
							bVar2 = false;
						}
						else if ((Var7.f_2 - Var4.f_2) > Param11.f_2)
						{
							bVar2 = false;
						}
					}
				}
				if (unk_0x45CD66F0A131E554(iVar0, 0))
				{
					if (bVar2)
					{
						unk_0x0668B21A0C3A4821(Param7, 5f, 0, 0, 0, 0, 0);
						unk_0x0608D50823C6AA6D(iVar0, uParam10);
						unk_0x5DC8C2F2F8A363C2(iVar0, Param7, 1, 0, 0, 1);
						unk_0x482AE8C0EAF5AE07(iVar0, 1084227584);
						if (bParam17)
						{
							unk_0x524A422B74847594(iVar0, 0, 1, 0);
							unk_0x016C65ED12A14D44(iVar0, 1);
						}
					}
					else
					{
						if (!unk_0xC26429B504BA534D(iVar0) || !unk_0x45CA7F42CA715849(iVar0, 1))
						{
							unk_0xF0F77C99098F999B(iVar0, 1, 1);
						}
						if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iVar0, 0))
						{
							unk_0x5DC8C2F2F8A363C2(unk_0x17B5CC8A8615737D(), unk_0x57240623C1BC6E88(iVar0, 1), 1, 0, 0, 1);
						}
						unk_0x813865264334331D(&iVar0);
					}
				}
			}
			if (bParam14)
			{
				unk_0x2A5905FD3A0ED2A0(Param0, Param3, fParam6, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (unk_0x23E9113C762466ED(iVar0))
				{
					if (unk_0xC26429B504BA534D(iVar0))
					{
						unk_0x921CF98C637B0043(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!unk_0xC26429B504BA534D(iVar0))
			{
				unk_0xF0F77C99098F999B(iVar0, 1, 0);
			}
			iVar14 = unk_0x17206B315923243C(iVar0, -1, 0);
			if (unk_0x23E9113C762466ED(iVar14) && !unk_0xCA41A00932714525(iVar14))
			{
				unk_0x5DC8C2F2F8A363C2(iVar14, unk_0x57240623C1BC6E88(iVar14, 1), 1, 0, 0, 1);
			}
			iVar15 = unk_0x74EBEFF57C45B722(unk_0x0324EEB10F81965F(iVar0));
			if (iVar15 <= 2)
			{
				iVar14 = unk_0x17206B315923243C(iVar0, 0, 0);
				if (unk_0x23E9113C762466ED(iVar14) && !unk_0xCA41A00932714525(iVar14))
				{
					unk_0x5DC8C2F2F8A363C2(iVar14, unk_0x57240623C1BC6E88(iVar14, 1), 1, 0, 0, 1);
				}
			}
			if (iVar15 <= 4)
			{
				iVar14 = unk_0x17206B315923243C(iVar0, 1, 0);
				if (unk_0x23E9113C762466ED(iVar14) && !unk_0xCA41A00932714525(iVar14))
				{
					unk_0x5DC8C2F2F8A363C2(iVar14, unk_0x57240623C1BC6E88(iVar14, 1), 1, 0, 0, 1);
				}
				iVar14 = unk_0x17206B315923243C(iVar0, 2, 0);
				if (unk_0x23E9113C762466ED(iVar14) && !unk_0xCA41A00932714525(iVar14))
				{
					unk_0x5DC8C2F2F8A363C2(iVar14, unk_0x57240623C1BC6E88(iVar14, 1), 1, 0, 0, 1);
				}
			}
			unk_0x813865264334331D(&iVar0);
		}
	}
}

int func_71(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_72(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x23E9113C762466ED(iParam0) || !unk_0x45CD66F0A131E554(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_73(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x48B8265059381CD0(Global_101700.f_6188[iVar9], 0))
		{
			if (unk_0xA3342DAAC0684FAC(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_73(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_74(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18[4];
	struct<2> Var31;
	struct<2> Var34;
	
	if (unk_0x45CD66F0A131E554(iParam0, 0))
	{
		Param1.f_2 = Param4.f_2;
		Var0 = { func_76(Param1 - Param4) };
		Var3 = { Var0 };
		Var0.f_0 = -Var3.f_1;
		Var0.f_1 = Var3.f_0;
		Var0.f_2 = 0f;
		Var6 = { Param1 - Var0 * FtoV((fParam7 / 2f)) };
		Var9 = { Param1 + Var0 * FtoV((fParam7 / 2f)) };
		Var12 = { Param4 - Var0 * FtoV((fParam7 / 2f)) };
		Var15 = { Param4 + Var0 * FtoV((fParam7 / 2f)) };
		unk_0x9475086C69ACF470(unk_0x0324EEB10F81965F(iParam0), &Var31, &Var34);
		Var18[0 /*3*/] = { unk_0x854ED33E6D715648(iParam0, Var31.f_0, Var31.f_1, 0f) };
		Var18[1 /*3*/] = { unk_0x854ED33E6D715648(iParam0, Var31.f_0, Var34.f_1, 0f) };
		Var18[2 /*3*/] = { unk_0x854ED33E6D715648(iParam0, Var34.f_0, Var31.f_1, 0f) };
		Var18[3 /*3*/] = { unk_0x854ED33E6D715648(iParam0, Var34.f_0, Var34.f_1, 0f) };
		if (((((((((((((((func_75(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var9) || func_75(Var18[0 /*3*/], Var18[1 /*3*/], Var9, Var15)) || func_75(Var18[0 /*3*/], Var18[1 /*3*/], Var12, Var15)) || func_75(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var12)) || func_75(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var9)) || func_75(Var18[1 /*3*/], Var18[3 /*3*/], Var9, Var15)) || func_75(Var18[1 /*3*/], Var18[3 /*3*/], Var12, Var15)) || func_75(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var12)) || func_75(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var9)) || func_75(Var18[3 /*3*/], Var18[2 /*3*/], Var9, Var15)) || func_75(Var18[3 /*3*/], Var18[2 /*3*/], Var12, Var15)) || func_75(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var12)) || func_75(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var9)) || func_75(Var18[2 /*3*/], Var18[0 /*3*/], Var9, Var15)) || func_75(Var18[2 /*3*/], Var18[0 /*3*/], Var12, Var15)) || func_75(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var12))
		{
			return 1;
		}
	}
	return 0;
}

int func_75(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11)
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
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	fVar0 = Param0.f_0;
	fVar1 = Param0.f_1;
	fVar2 = Param3.f_0;
	fVar3 = Param3.f_1;
	fVar4 = Param6.f_0;
	fVar5 = Param6.f_1;
	fVar6 = Param9.f_0;
	fVar7 = Param9.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_76(struct<3> Param0)
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

void func_77(int iParam0)
{
	if (unk_0x23E9113C762466ED(uParam0))
	{
		if (unk_0x45CD66F0A131E554(iParam0, 0))
		{
			if (unk_0x27CB4A87DBB58E6E(iParam0) <= 200f)
			{
				unk_0xEC0212C05F98C1DF(iParam0, 500f);
			}
			if (unk_0x1667F287C40D3CA4(iParam0) <= 700f)
			{
				unk_0xEC0212C05F98C1DF(iParam0, 900f);
			}
			if (unk_0xB5DF060B138CD2EA(iParam0) < 200)
			{
				unk_0xEC0212C05F98C1DF(iParam0, 500f);
			}
		}
	}
}

void func_78()
{
	if (iLocal_2511 >= 3)
	{
		if (iLocal_2511 > 3)
		{
			func_103(&Local_1619, &Local_2274, Local_2253, Local_2256, Local_2259, Local_2262, Local_2250, Local_2271, Local_2244, Local_2247, Local_2265, Local_2268);
		}
		func_79();
	}
}

void func_79()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 0;
	while (iVar0 < Local_1619.f_0)
	{
		if ((!unk_0xCA41A00932714525(Local_755[iVar0 /*33*/]) && !unk_0xE34CF180A5429DEA(Local_755[iVar0 /*33*/], 1)) || Local_1619[iVar0 /*24*/].f_3 == 1)
		{
			switch (Local_1619[iVar0 /*24*/].f_3)
			{
				case 1:
					switch (Local_755[iVar0 /*33*/].f_1)
					{
						case 1:
							switch (Local_755[iVar0 /*33*/].f_2)
							{
								case 2:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2451.818f, 4985.704f, 50.5678f, 227.842f, joaat("weapon_assaultrifle"), 1, 0))
									{
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 0, 1, 0);
										func_99(iVar0, 5, 0, 0);
									}
									break;
								
								case 1:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2455.085f, 4974.466f, 50.5677f, 246.051f, joaat("weapon_assaultrifle"), 1, 0))
									{
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 0, 1, 0);
										func_99(iVar0, 14, 0, 0);
									}
									break;
								
								case 6:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2461.609f, 4993.675f, 44.9821f, -90f, joaat("weapon_assaultrifle"), 1, 0))
									{
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 0, 0, 0);
										func_99(iVar0, 7, 0, 0);
										Local_755[iVar0 /*33*/].f_4 = 7;
									}
									break;
								
								case 7:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2462.887f, 4993.614f, 44.9474f, 89.8899f, joaat("weapon_assaultrifle"), 1, 0))
									{
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 0, 0, 0);
										func_99(iVar0, 7, 1, 0);
										Local_755[iVar0 /*33*/].f_4 = 7;
									}
									break;
								
								case 3:
									if (func_101(iVar0, joaat("a_m_y_methhead_01"), 2460.651f, 4970.813f, 45.5765f, 240.2054f, joaat("weapon_assaultrifle"), 0, 0))
									{
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 1, 0, 0);
										func_99(iVar0, 16, 0, 0);
									}
									break;
								
								case 0:
									if (func_101(iVar0, joaat("a_m_y_methhead_01"), 2443.138f, 4966.709f, 50.5677f, 246.051f, joaat("weapon_assaultrifle"), 1, 0))
									{
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 1, 1, 0);
										func_99(iVar0, 15, 0, 0);
									}
									break;
								
								case 4:
									if (iLocal_2511 == 3)
									{
										if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2457.098f, 4954.283f, 44.1304f, 316.5498f, joaat("weapon_pistol"), 0, 0))
										{
											Local_755[iVar0 /*33*/].f_20 = unk_0x521A82CF998EDB21(joaat("prop_cs_fertilizer"), 2460.098f, 4957.283f, 44.1304f, 1, 1, 0);
											Local_755[iVar0 /*33*/].f_5 = 1;
											func_99(iVar0, 3, 0, 0);
										}
									}
									else if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2478.32f, 4982.325f, 44.8913f, 49.5021f, joaat("weapon_pistol"), 0, 0))
									{
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 0, 0, 0);
										Local_755[iVar0 /*33*/].f_20 = unk_0x521A82CF998EDB21(joaat("prop_cs_fertilizer"), 2478.444f, 4976.921f, 44.5614f, 1, 1, 0);
										Local_755[iVar0 /*33*/].f_5 = 1;
										func_99(iVar0, 2, 0, 0);
									}
									break;
								
								case 5:
									if (iLocal_2511 == 3)
									{
										if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2454.753f, 4951.719f, 44.1445f, 316.5541f, joaat("weapon_pistol"), 0, 0))
										{
											Local_755[iVar0 /*33*/].f_20 = unk_0x521A82CF998EDB21(joaat("prop_cs_fertilizer"), 2455.753f, 4952.719f, 44.1445f, 1, 1, 0);
											Local_755[iVar0 /*33*/].f_5 = 1;
											func_99(iVar0, 3, 0, 0);
										}
									}
									else if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2475.873f, 4984.426f, 45.0916f, 45.8993f, joaat("weapon_pistol"), 0, 0))
									{
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 0, 0, 0);
										Local_755[iVar0 /*33*/].f_20 = unk_0x521A82CF998EDB21(joaat("prop_cs_fertilizer"), 2476.582f, 4978.492f, 44.5734f, 1, 1, 0);
										Local_755[iVar0 /*33*/].f_5++;
										func_99(iVar0, 2, 0, 0);
									}
									break;
								
								case 8:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2505.451f, 4970.663f, 43.548f, 49.5021f, joaat("weapon_pistol"), 1, 0))
									{
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 0, 0, 0);
										Local_755[iVar0 /*33*/].f_14 = unk_0x356EABB012B22D07(2505.451f, 4970.663f, 43.548f, 0f, 0f, 88.725f, 2);
										func_98(Local_755[iVar0 /*33*/], 20f, 5f, 90f, -90f, 60f);
										unk_0xA0E70AC53ABAB207(Local_755[iVar0 /*33*/], "A_M_M_HillBilly_02_WHITE_MINI_02");
										unk_0xA17D768ED938600C(Local_755[iVar0 /*33*/], Local_755[iVar0 /*33*/].f_14, "misschinese2_bank5", "peds_shootcans_a", 1000f, -4f, 1, 0, 1148846080, 0);
										unk_0x8B06F7FDDA8B98FB(Local_755[iVar0 /*33*/].f_14, 1);
										unk_0xDEAF24B058321A05(Local_755[iVar0 /*33*/], 0, 0);
										func_99(iVar0, 4, 0, Local_755[iVar0 /*33*/].f_14);
										func_32(7, 0);
									}
									break;
								
								case 9:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2505.451f, 4970.663f, 43.548f, 49.5021f, joaat("weapon_pistol"), 1, 0))
									{
										Local_755[iVar0 /*33*/].f_14 = unk_0x356EABB012B22D07(2507.879f, 4970.188f, 43.5f, 0f, 0f, 93.42f, 2);
										unk_0x8B06F7FDDA8B98FB(Local_755[iVar0 /*33*/].f_14, 1);
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 0, 0, 0);
										unk_0xA17D768ED938600C(Local_755[iVar0 /*33*/], Local_755[iVar0 /*33*/].f_14, "misschinese2_bank5", "peds_shootcans_b", 1000f, -4f, 1, 0, 1148846080, 0);
										unk_0xDEAF24B058321A05(Local_755[iVar0 /*33*/], 0, 0);
										func_99(iVar0, 4, 0, Local_755[iVar0 /*33*/].f_14);
									}
									break;
							}
							if (unk_0x23E9113C762466ED(Local_755[iVar0 /*33*/]))
							{
								unk_0x4114B83B329702FF(Local_755[iVar0 /*33*/], 1);
								unk_0xAA70EB198C6F2985(Local_755[iVar0 /*33*/], 1);
							}
							break;
						
						case 2:
							switch (Local_755[iVar0 /*33*/].f_2)
							{
								case 10:
									if (iLocal_2511 < 5)
									{
										if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2458.57f, 4987.584f, 45.8107f, 233.842f, joaat("weapon_pistol"), 0, 0))
										{
											func_99(iVar0, 14, 0, 0);
											func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 0, 1, 0);
										}
									}
									else if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2454.627f, 4995.726f, 45.2011f, 233.842f, joaat("weapon_pistol"), 0, 0))
									{
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 0, 1, 0);
										func_99(iVar0, 23, 0, 0);
									}
									break;
								
								case 11:
									if (iLocal_2511 < 5)
									{
										if (func_101(iVar0, joaat("a_m_y_methhead_01"), 2442.994f, 4985.164f, 45.8103f, 303.409f, joaat("weapon_microsmg"), 0, 0))
										{
											func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 1, 1, 0);
											func_99(iVar0, 14, 0, 0);
										}
									}
									else if (func_101(iVar0, joaat("a_m_y_methhead_01"), 2450.371f, 4995.103f, 44.9282f, 303.409f, joaat("weapon_microsmg"), 0, 0))
									{
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 1, 1, 0);
										func_99(iVar0, 23, 0, 0);
									}
									break;
								
								case 12:
									if (func_101(iVar0, joaat("a_m_y_methhead_01"), 2433.124f, 4967.804f, 46.293f, 63.7673f, joaat("weapon_pumpshotgun"), 0, 1))
									{
										func_99(iVar0, 25, 0, 0);
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 13:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2432.091f, 4968.833f, 46.298f, 63.7673f, joaat("weapon_pistol"), 0, 1))
									{
										func_99(iVar0, 25, 0, 0);
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 14:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2431.485f, 4964.779f, 45.8106f, -137.5f, joaat("weapon_pistol"), 0, 1))
									{
										func_99(iVar0, 25, 0, 0);
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 15:
									if (func_101(iVar0, joaat("a_m_y_methhead_01"), 2440.385f, 4965.429f, 45.8106f, 63.7673f, joaat("weapon_pumpshotgun"), 0, 1))
									{
										func_99(iVar0, 25, 0, 0);
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 16:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2439.741f, 4964.89f, 45.8106f, 130.3988f, joaat("weapon_microsmg"), 0, 1))
									{
										func_99(iVar0, 25, 0, 0);
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 17:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2438.707f, 4964.094f, 45.8106f, 127.6523f, joaat("weapon_pistol"), 0, 1))
									{
										unk_0xFA4023BBD5BCB8B5(Local_755[iVar0 /*33*/], 5);
										func_99(iVar0, 25, 0, 0);
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 18:
									if (iLocal_2511 < 5)
									{
										if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2440.929f, 4976.921f, 45.8106f, -130f, joaat("weapon_pistol"), 0, 1))
										{
											func_99(iVar0, 7, 0, 0);
											Local_755[iVar0 /*33*/].f_4 = 7;
											func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 0, 0, 0);
										}
									}
									else if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2452.052f, 4956.689f, 43.8957f, 230.7673f, joaat("weapon_pistol"), 0, 1))
									{
										func_99(iVar0, 23, 0, 0);
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 0, 0, 0);
									}
									break;
								
								case 19:
									if (iLocal_2511 < 5)
									{
										if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2442.926f, 4975.148f, 45.8106f, 46.7673f, joaat("weapon_pistol"), 0, 1))
										{
											func_99(iVar0, 7, 0, 0);
											func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 0, 0, 0);
											Local_755[iVar0 /*33*/].f_4 = 7;
										}
									}
									else if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2449.338f, 4954.127f, 43.9299f, 46.7673f, joaat("weapon_pistol"), 0, 1))
									{
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 0, 0, 0);
										func_99(iVar0, 23, 0, 0);
									}
									break;
								
								case 20:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2449.114f, 4981.984f, 45.8102f, 130.7673f, joaat("weapon_microsmg"), 0, 1))
									{
										func_99(iVar0, 7, 0, 0);
										Local_755[iVar0 /*33*/].f_4 = 32;
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 1, 0, 0);
									}
									break;
								
								case 21:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2447.553f, 4980.515f, 45.8096f, 311.7673f, joaat("weapon_microsmg"), 0, 1))
									{
										func_99(iVar0, 7, 0, 0);
										Local_755[iVar0 /*33*/].f_4 = 7;
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 1, 0, 0);
									}
									break;
							}
							if (!unk_0xCA41A00932714525(Local_755[iVar0 /*33*/]))
							{
								unk_0x4114B83B329702FF(Local_755[iVar0 /*33*/], 1);
							}
							break;
						
						case 5:
							switch (Local_755[iVar0 /*33*/].f_2)
							{
								case 22:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2439.258f, 4976.201f, 45.8106f, 116.815f, joaat("weapon_unarmed"), 0, 1))
									{
										func_99(iVar0, 28, 0, 0);
									}
									break;
								
								case 23:
									if (func_101(iVar0, joaat("a_m_y_methhead_01"), 2433.292f, 4968.534f, 42.348f, 105.5f, joaat("weapon_unarmed"), 0, 1))
									{
										func_99(iVar0, 30, 0, 0);
									}
									break;
							}
							break;
					}
					if (!unk_0xCA41A00932714525(Local_755[iVar0 /*33*/]))
					{
						unk_0xBDE4C59FD939CE4E(Local_755[iVar0 /*33*/], 1);
						Local_1619[iVar0 /*24*/].f_3 = 3;
						iVar0 = (iVar0 - 1);
					}
					break;
				
				case 3:
					if (Local_1619[iVar0 /*24*/].f_3 <= 3)
					{
						switch (Local_755[iVar0 /*33*/].f_3)
						{
							case 3:
								switch (Local_755[iVar0 /*33*/].f_5)
								{
									case 0:
										if (unk_0x23E9113C762466ED(Local_755[iVar0 /*33*/].f_20))
										{
											if (unk_0x187275C7EBD45454(Local_755[iVar0 /*33*/].f_20) && unk_0x4720158F9AAE8C56(Local_755[iVar0 /*33*/].f_20))
											{
												unk_0x593C85206F061E3E(Local_755[iVar0 /*33*/].f_20, Local_755[iVar0 /*33*/], unk_0x0FC45085FB4E85B8(Local_755[iVar0 /*33*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
												Local_755[iVar0 /*33*/].f_5++;
											}
											if (unk_0x23E9113C762466ED(Local_755[iVar0 /*33*/].f_20))
											{
												if (Local_755[iVar0 /*33*/].f_2 == 4)
												{
													unk_0xEB1EFACA68933402(Local_755[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 1000f, -1f, -1, 1, 0, 0, 0, 0);
												}
												else
												{
													unk_0xEB1EFACA68933402(Local_755[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 1000f, -1f, -1, 1, 0, 0, 0, 0);
												}
												unk_0x4114B83B329702FF(Local_755[iVar0 /*33*/], 1);
												unk_0xDEAF24B058321A05(Local_755[iVar0 /*33*/], 0, 0);
												Local_755[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 1:
										break;
								}
								break;
							
							case 2:
								if (Local_755[iVar0 /*33*/].f_5 < 7)
								{
									func_97(Local_755[iVar0 /*33*/], &(Local_755[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1);
								}
								if (unk_0x5132972D2BBC5A62(Local_755[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3))
								{
									unk_0x64E8BCBA7FB39814(Local_755[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 1.4f);
								}
								if (unk_0x5132972D2BBC5A62(Local_755[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
								{
									unk_0x64E8BCBA7FB39814(Local_755[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 1.4f);
								}
								if (unk_0x23E9113C762466ED(Local_755[iVar0 /*33*/].f_20))
								{
									if (Local_755[iVar0 /*33*/].f_5 > 2 && Local_755[iVar0 /*33*/].f_5 <= 6)
									{
										if (unk_0xDDBA7A42B9B819EE(Local_755[iVar0 /*33*/].f_20))
										{
											Local_755[iVar0 /*33*/].f_12 = (func_96(unk_0x57240623C1BC6E88(Local_755[iVar0 /*33*/], 1), Local_755[iVar0 /*33*/].f_6, 1) - unk_0x638527C9799F2AE4(Local_755[iVar0 /*33*/]));
											Local_755[iVar0 /*33*/].f_12 = func_95((Local_755[iVar0 /*33*/].f_12 / 4f), -15f, 15f);
											if (!unk_0x7F4AE93855973529(Local_755[iVar0 /*33*/]))
											{
												unk_0x0608D50823C6AA6D(Local_755[iVar0 /*33*/], (unk_0x638527C9799F2AE4(Local_755[iVar0 /*33*/]) + (unk_0x0000000050597EE2() * Local_755[iVar0 /*33*/].f_12)));
											}
										}
									}
								}
								switch (Local_755[iVar0 /*33*/].f_5)
								{
									case 0:
										if (unk_0x23E9113C762466ED(Local_755[iVar0 /*33*/].f_20))
										{
											if (unk_0x187275C7EBD45454(Local_755[iVar0 /*33*/].f_20) && unk_0x4720158F9AAE8C56(Local_755[iVar0 /*33*/].f_20))
											{
												unk_0x593C85206F061E3E(Local_755[iVar0 /*33*/].f_20, Local_755[iVar0 /*33*/], unk_0x0FC45085FB4E85B8(Local_755[iVar0 /*33*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
												func_32(20, 0);
												Local_755[iVar0 /*33*/].f_5++;
											}
										}
									
									case 1:
										if (unk_0x23E9113C762466ED(Local_755[iVar0 /*33*/].f_20))
										{
											if (func_67(Local_755[iVar0 /*33*/], 2495.779f, 5004.715f, 43.87337f, 1) < 99f)
											{
												if (Local_755[iVar0 /*33*/].f_2 == 4)
												{
													unk_0xEB1EFACA68933402(Local_755[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 1000f, -1f, -1, 1, 0, 0, 0, 0);
												}
												else
												{
													unk_0xEB1EFACA68933402(Local_755[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 1000f, -1f, -1, 1, 0, 0, 0, 0);
												}
												unk_0xDEAF24B058321A05(Local_755[iVar0 /*33*/], 0, 0);
												unk_0x4114B83B329702FF(Local_755[iVar0 /*33*/], 1);
												Local_755[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 2:
										if (unk_0x5132972D2BBC5A62(Local_755[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3) || unk_0x5132972D2BBC5A62(Local_755[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
										{
											Local_755[iVar0 /*33*/].f_6 = { 2466.903f, 4996.254f, 45.5443f };
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										if (unk_0x1C34CE8087E3897C(Local_755[iVar0 /*33*/], Local_755[iVar0 /*33*/].f_6, 1.5f, 1.5f, 2f, 0, 1, 0))
										{
											Local_755[iVar0 /*33*/].f_6 = { 2461.332f, 4998.94f, 45.359f };
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 4:
										if (unk_0x1C34CE8087E3897C(Local_755[iVar0 /*33*/], Local_755[iVar0 /*33*/].f_6, 1.5f, 1.5f, 2f, 0, 1, 0))
										{
											Local_755[iVar0 /*33*/].f_6 = { 2455.984f, 4997.404f, 45.2645f };
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 5:
										if (unk_0x1C34CE8087E3897C(Local_755[iVar0 /*33*/], Local_755[iVar0 /*33*/].f_6, 1.5f, 1.5f, 2f, 0, 1, 0))
										{
											if (Local_755[iVar0 /*33*/].f_2 == 5)
											{
												Local_755[iVar0 /*33*/].f_6 = { 2452.091f, 4993.674f, 45.1404f };
												Local_755[iVar0 /*33*/].f_5++;
											}
											else
											{
												Local_755[iVar0 /*33*/].f_6 = { 2454.091f, 4995.674f, 45.1404f };
												Local_755[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 6:
										if (unk_0x1C34CE8087E3897C(Local_755[iVar0 /*33*/], Local_755[iVar0 /*33*/].f_6, 1.5f, 1.5f, 2f, 0, 1, 0))
										{
											if (unk_0x5132972D2BBC5A62(Local_755[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3))
											{
												unk_0xA587396DD8FB936E(Local_755[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", -1.5f);
											}
											if (unk_0x5132972D2BBC5A62(Local_755[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
											{
												unk_0xA587396DD8FB936E(Local_755[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", -1.5f);
											}
											Local_755[iVar0 /*33*/].f_6 = { 0f, 0f, 0f };
											if (unk_0x23E9113C762466ED(Local_755[iVar0 /*33*/].f_20))
											{
												unk_0xB2E72B5CFE1EC372(Local_755[iVar0 /*33*/].f_20, 0, 1);
											}
											if (func_68(iLocal_2507))
											{
												if (Local_755[iVar0 /*33*/].f_2 == 4)
												{
													unk_0x64A85DB6D037D644(Local_755[iVar0 /*33*/], "move_m@gangster@var_e", 1048576000);
													unk_0x3AD5401AC8DD9226(Local_755[iVar0 /*33*/], iLocal_2507, -1, -1, 1f, 1, 0);
													func_99(func_18(6), 14, 0, 0);
													func_99(func_18(7), 33, 0, 0);
												}
												else
												{
													unk_0x64A85DB6D037D644(Local_755[iVar0 /*33*/], "move_m@gangster@var_f", 1048576000);
													unk_0x3AD5401AC8DD9226(Local_755[iVar0 /*33*/], iLocal_2507, -1, 0, 1f, 1, 0);
												}
											}
											Local_755[iVar0 /*33*/].f_5++;
											Local_755[iVar0 /*33*/].f_14 = 0;
											Local_755[iVar0 /*33*/].f_15 = 0;
										}
										break;
									
									case 7:
										func_94(iVar0);
										if (unk_0xFD0FE723227D5AB6(Local_755[iVar0 /*33*/], 0))
										{
											unk_0x4114B83B329702FF(Local_755[iVar0 /*33*/], 0);
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 8:
										if (func_68(iLocal_2507))
										{
											if (!unk_0xC0FA8EEF6413F866(iLocal_2507, -1, 0))
											{
												if (Local_755[iVar0 /*33*/].f_2 == 4)
												{
													if (!unk_0xC0FA8EEF6413F866(iLocal_2507, 0, 0))
													{
														iVar1 = func_18(5);
														if (iVar1 >= 0)
														{
															if (!unk_0xCA41A00932714525(Local_755[iVar1 /*33*/]))
															{
																if (unk_0xD035C652F0986F10(Local_755[iVar1 /*33*/]))
																{
																	func_93();
																	unk_0xBAEDE72EB6870B58(0, iLocal_2507, 2367.668f, 5098.645f, 46.8185f, 12f, 0, joaat("burrito"), 786599, 5f, 5f);
																	unk_0x9178B6CFE95D27C6(0, iLocal_2507, 19f, 786599);
																	func_92(&(Local_755[iVar0 /*33*/]), 0);
																	func_91(25, 1);
																	Local_755[iVar0 /*33*/].f_5++;
																}
															}
														}
													}
												}
											}
											if (!unk_0xC0FA8EEF6413F866(iLocal_2507, 0, 0))
											{
												if (Local_755[iVar0 /*33*/].f_2 == 5)
												{
													Local_755[iVar0 /*33*/].f_5++;
												}
											}
										}
										break;
									
									case 9:
										break;
								}
								break;
							
							case 5:
								switch (Local_755[iVar0 /*33*/].f_5)
								{
									case 0:
										func_93();
										unk_0x084522380FECC554(0, 2459.646f, 4977.735f, 50.5678f, 1f, 20000, 0.25f, 0, 1193033728);
										unk_0x084522380FECC554(0, 2456.221f, 4974.685f, 50.5678f, 1f, 20000, 0.25f, 0, 1193033728);
										unk_0x80DF1844839BB179(0, 2456.221f, 4974.685f, 50.5678f, 92.5678f, 1061158912);
										unk_0x3DB139C144156433(0, 92.5678f, 0);
										func_92(&(Local_755[iVar0 /*33*/]), 0);
										Local_755[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (unk_0x1F8F07D86DA1A701(Local_755[iVar0 /*33*/], 242628503) == 7)
										{
											func_99(iVar0, 7, 0, 9000);
											iVar2 = 1;
											if (iVar2 != -1)
											{
												func_99(iVar2, 7, 0, 9000);
											}
										}
										break;
									
									case 2:
										func_93();
										unk_0x084522380FECC554(0, 2450.491f, 4986.83f, 50.5677f, 1f, 20000, 0.25f, 0, 1193033728);
										unk_0x3DB139C144156433(0, 309.5567f, 0);
										unk_0xC47A71ED8C26841E(0, 2000);
										func_92(&(Local_755[iVar0 /*33*/]), 0);
										Local_755[iVar0 /*33*/].f_5++;
										break;
									
									case 3:
										if (unk_0x1F8F07D86DA1A701(Local_755[iVar0 /*33*/], 242628503) == 7)
										{
											Local_755[iVar0 /*33*/].f_5 = 0;
										}
										break;
								}
								break;
							
							case 6:
								if (unk_0x1F8F07D86DA1A701(Local_755[iVar0 /*33*/], 993674639) == 7 && Local_755[iVar0 /*33*/].f_5 > 1)
								{
									Local_755[iVar0 /*33*/].f_5 = 0;
								}
								switch (Local_755[iVar0 /*33*/].f_5)
								{
									case 0:
										unk_0x0B25AB3A7FA0683C(Local_755[iVar0 /*33*/], joaat("weapon_unarmed"), 1);
										unk_0x3DB139C144156433(Local_755[iVar0 /*33*/], 219f, 1500);
										Local_755[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (unk_0x1F8F07D86DA1A701(Local_755[iVar0 /*33*/], 1920390111) == 7)
										{
											unk_0xBD415ADB0A08F6EF(Local_755[iVar0 /*33*/], "WORLD_HUMAN_GUARD_STAND_ARMY", 0, 0);
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							
							case 32:
								if (!unk_0xCA41A00932714525(Local_755[iVar0 /*33*/]))
								{
									if (Local_755[iVar0 /*33*/].f_1 == 1 || func_4(unk_0x17B5CC8A8615737D(), Local_755[iVar0 /*33*/], 1) < 20f)
									{
										func_97(Local_755[iVar0 /*33*/], &(Local_755[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1);
									}
									if (Local_755[iVar0 /*33*/].f_5 < 10)
									{
									}
									switch (Local_755[iVar0 /*33*/].f_5)
									{
										case 0:
											unk_0xBD415ADB0A08F6EF(Local_755[iVar0 /*33*/], "WORLD_HUMAN_AA_SMOKE", Local_755[iVar0 /*33*/].f_14, 0);
											Local_755[iVar0 /*33*/].f_5++;
											break;
										
										case 1:
											if (func_4(unk_0x17B5CC8A8615737D(), Local_755[iVar0 /*33*/], 1) < 10f)
											{
												iVar3 = unk_0x0E29C61F26D96FDB(0, 3);
												if (iVar3 == 0)
												{
													unk_0xECF05B7D463A3321(Local_755[iVar0 /*33*/], "GENERIC_CURSE_MED", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", 0);
												}
												else if (iVar3 == 1)
												{
													unk_0xECF05B7D463A3321(Local_755[iVar0 /*33*/], "GENERIC_INSULT_MED", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", 0);
												}
												else
												{
													unk_0xECF05B7D463A3321(Local_755[iVar0 /*33*/], "CHAT_STATE", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", 0);
												}
												Local_755[iVar0 /*33*/].f_5++;
												Local_755[iVar0 /*33*/].f_14 = (unk_0x94E3E074F38DF86C() + unk_0x0E29C61F26D96FDB(5000, 10000));
											}
											break;
										
										case 2:
											if (unk_0x94E3E074F38DF86C() > Local_755[iVar0 /*33*/].f_14)
											{
												Local_755[iVar0 /*33*/].f_5 = 1;
											}
											break;
										
										case 10:
											if (func_35("CHI2_hear", 8, Local_755[iVar0 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_755[iVar0 /*33*/].f_5++;
												Local_755[iVar0 /*33*/].f_14 = unk_0x94E3E074F38DF86C() + 1000;
											}
											break;
										
										case 11:
											if (unk_0x94E3E074F38DF86C() > Local_755[iVar0 /*33*/].f_14)
											{
												unk_0x9F7BF6124414BCF4(Local_755[iVar0 /*33*/], unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 5000);
												Local_755[iVar0 /*33*/].f_5++;
												Local_755[iVar0 /*33*/].f_14 = unk_0x94E3E074F38DF86C() + 5000;
											}
											break;
										
										case 12:
											if (unk_0xAD0529AB45195362(unk_0xBE369BE1BC57A796(), Local_755[iVar0 /*33*/]) && func_67(Local_755[iVar0 /*33*/], 2448.003f, 4982.305f, 45.8519f, 1) < 10f)
											{
												if (unk_0x94E3E074F38DF86C() > (Local_755[iVar0 /*33*/].f_14 - 3000))
												{
													unk_0x084522380FECC554(Local_755[iVar0 /*33*/], unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 1f, 20000, 0.25f, 0, 1193033728);
													Local_755[iVar0 /*33*/].f_5 = 15;
												}
											}
											else if (unk_0x94E3E074F38DF86C() > Local_755[iVar0 /*33*/].f_14)
											{
												if (func_35("CHI2_nope", 8, Local_755[iVar0 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
												{
													Local_755[iVar0 /*33*/].f_5++;
												}
											}
											break;
										
										case 13:
											func_93();
											unk_0x084522380FECC554(0, 2449.114f, 4981.984f, 45.8102f, 1f, 20000, 0.25f, 0, 1193033728);
											unk_0x3DB139C144156433(0, 127.6328f, 3000);
											func_92(&(Local_755[iVar0 /*33*/]), 0);
											Local_755[iVar0 /*33*/].f_14 = unk_0x94E3E074F38DF86C() + 3000;
											Local_755[iVar0 /*33*/].f_5++;
											break;
										
										case 14:
											if (unk_0x94E3E074F38DF86C() > Local_755[iVar0 /*33*/].f_14 || unk_0x1F8F07D86DA1A701(Local_755[iVar0 /*33*/], 242628503) == 7)
											{
												Local_755[iVar0 /*33*/].f_5 = 0;
											}
											break;
										
										case 15:
											if (func_35("CHI2_hear", 8, Local_755[iVar0 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_755[iVar0 /*33*/].f_5++;
											}
											break;
										
										case 16:
											if (unk_0x1F8F07D86DA1A701(Local_755[iVar0 /*33*/], 713668775) == 7)
											{
												Local_755[iVar0 /*33*/].f_14 = unk_0x94E3E074F38DF86C() + 3000;
												Local_755[iVar0 /*33*/].f_5 = 12;
											}
											break;
										}
								}
								break;
							
							case 33:
								switch (Local_755[iVar0 /*33*/].f_5)
								{
									case 0:
										Local_755[iVar0 /*33*/].f_14 = unk_0x94E3E074F38DF86C() + 3000;
										Local_755[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (unk_0x94E3E074F38DF86C() > Local_755[iVar0 /*33*/].f_14)
										{
											if (func_68(iLocal_2507))
											{
												unk_0x3AD5401AC8DD9226(Local_755[iVar0 /*33*/], iLocal_2507, 20000, 1, 1f, 1, 0);
												Local_755[iVar0 /*33*/].f_5++;
												Local_755[iVar0 /*33*/].f_14 = 0;
												Local_755[iVar0 /*33*/].f_15 = 0;
											}
										}
										break;
									
									case 2:
										func_94(iVar0);
										break;
								}
								break;
							
							case 7:
								if (Local_755[iVar0 /*33*/].f_1 == 1 || func_4(unk_0x17B5CC8A8615737D(), Local_755[iVar0 /*33*/], 1) < 20f)
								{
									func_97(Local_755[iVar0 /*33*/], &(Local_755[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1);
								}
								switch (Local_755[iVar0 /*33*/].f_5)
								{
									case 0:
										iVar4 = joaat("weapon_unarmed");
										if (unk_0x5CD8291F2C5E0AD1(Local_755[iVar0 /*33*/], &iVar4, 1))
										{
											unk_0x977CFCF6269F9ABF(Local_755[iVar0 /*33*/], 0);
										}
										Local_755[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (!unk_0x5CD8291F2C5E0AD1(Local_755[iVar0 /*33*/], &iVar4, 1))
										{
											func_93();
											if (iVar0 == 1)
											{
												if (!unk_0xCA41A00932714525(Local_755[2 /*33*/]))
												{
													unk_0x6349785089ED32B4(0, Local_755[2 /*33*/], 2000);
												}
											}
											else if (iVar0 == 2)
											{
												if (!unk_0xCA41A00932714525(Local_755[1 /*33*/]))
												{
													unk_0x6349785089ED32B4(0, Local_755[1 /*33*/], 2000);
												}
											}
											else if (iVar0 == 6)
											{
												if (!unk_0xCA41A00932714525(Local_755[7 /*33*/]))
												{
													unk_0x6349785089ED32B4(0, Local_755[7 /*33*/], 2000);
												}
											}
											else if (iVar0 == 7)
											{
												if (!unk_0xCA41A00932714525(Local_755[6 /*33*/]))
												{
													unk_0x6349785089ED32B4(0, Local_755[6 /*33*/], 2000);
												}
											}
											if (Local_755[iVar0 /*33*/].f_14 != 0)
											{
												unk_0xBD415ADB0A08F6EF(0, "WORLD_HUMAN_HANG_OUT_STREET", Local_755[iVar0 /*33*/].f_14, 0);
											}
											else
											{
												unk_0xBD415ADB0A08F6EF(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 0);
											}
											func_92(&(Local_755[iVar0 /*33*/]), 0);
											Local_755[iVar0 /*33*/].f_5++;
											Local_755[iVar0 /*33*/].f_15 = unk_0x94E3E074F38DF86C() + 15000;
										}
										break;
									
									case 2:
										if (unk_0x1F8F07D86DA1A701(Local_755[iVar0 /*33*/], 242628503) == 7 || unk_0x94E3E074F38DF86C() > Local_755[iVar0 /*33*/].f_15)
										{
											unk_0x15848523A8959DBC(Local_755[iVar0 /*33*/]);
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										if (unk_0x1F8F07D86DA1A701(Local_755[iVar0 /*33*/], 242628503) == 7)
										{
											if (Local_755[iVar0 /*33*/].f_4 == 5)
											{
												unk_0x977CFCF6269F9ABF(Local_755[iVar0 /*33*/], 1);
												Local_755[iVar0 /*33*/].f_5++;
											}
											else
											{
												Local_755[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 4:
										if (unk_0x1F8F07D86DA1A701(Local_755[iVar0 /*33*/], 716706914) == 7)
										{
											if (Local_755[iVar0 /*33*/].f_4 == 5)
											{
												func_99(iVar0, Local_755[iVar0 /*33*/].f_4, 2, 0);
											}
											else
											{
												func_99(iVar0, Local_755[iVar0 /*33*/].f_4, 0, 0);
											}
										}
										break;
								}
								break;
							
							case 13:
								switch (Local_755[iVar0 /*33*/].f_5)
								{
									case 0:
										unk_0xBD415ADB0A08F6EF(Local_755[iVar0 /*33*/], "WORLD_HUMAN_GUARD_STAND", 0, 0);
										unk_0xDEAF24B058321A05(Local_755[iVar0 /*33*/], 0, 0);
										Local_755[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 14:
								switch (Local_755[iVar0 /*33*/].f_5)
								{
									case 0:
										unk_0xBD415ADB0A08F6EF(Local_755[iVar0 /*33*/], "WORLD_HUMAN_AA_SMOKE", 0, 0);
										unk_0xDEAF24B058321A05(Local_755[iVar0 /*33*/], 0, 0);
										Local_755[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (unk_0x1F8F07D86DA1A701(Local_755[iVar0 /*33*/], 993674639) == 7)
										{
											Local_755[iVar0 /*33*/].f_5 = 0;
										}
										break;
								}
								break;
							
							case 15:
								switch (Local_755[iVar0 /*33*/].f_5)
								{
									case 0:
										unk_0xBD415ADB0A08F6EF(Local_755[iVar0 /*33*/], "WORLD_HUMAN_BINOCULARS", 0, 0);
										unk_0xDEAF24B058321A05(Local_755[iVar0 /*33*/], 0, 0);
										Local_755[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 16:
								switch (Local_755[iVar0 /*33*/].f_5)
								{
									case 0:
										unk_0xBD415ADB0A08F6EF(Local_755[iVar0 /*33*/], "WORLD_HUMAN_DRINKING", 0, 0);
										unk_0xDEAF24B058321A05(Local_755[iVar0 /*33*/], 0, 0);
										Local_755[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 17:
								if (Local_755[iVar0 /*33*/].f_5 < 10)
								{
									if (unk_0xAD0529AB45195362(unk_0xBE369BE1BC57A796(), Local_755[iVar0 /*33*/]))
									{
										Local_755[iVar0 /*33*/].f_5 = 10;
									}
								}
								switch (Local_755[iVar0 /*33*/].f_5)
								{
									case 0:
										unk_0xA0E7D0E8FE126EE8("misscarsteal2peeing");
										Local_755[iVar0 /*33*/].f_5++;
										Local_755[iVar0 /*33*/].f_14 = 0;
										break;
									
									case 1:
										if (unk_0xF4F8AE8DD0F08C1E("misscarsteal2peeing"))
										{
											unk_0xBD415ADB0A08F6EF(Local_755[iVar0 /*33*/], "WORLD_HUMAN_DRINKING", 0, 1);
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 2:
										if (func_4(unk_0x17B5CC8A8615737D(), Local_755[iVar0 /*33*/], 1) < 21.6f)
										{
											unk_0xEB1EFACA68933402(Local_755[iVar0 /*33*/], "misscarsteal2peeing", "peeing_loop", 8f, -8f, 25000, 1, 0, 0, 0, 0);
											Local_755[iVar0 /*33*/].f_5++;
											Local_755[iVar0 /*33*/].f_14 = unk_0x94E3E074F38DF86C() + 23000;
										}
										break;
									
									case 3:
										if (unk_0x94E3E074F38DF86C() > Local_755[iVar0 /*33*/].f_14)
										{
											Local_755[iVar0 /*33*/].f_14 = -1;
											unk_0xBD415ADB0A08F6EF(Local_755[iVar0 /*33*/], "WORLD_HUMAN_DRINKING", 0, 1);
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							
							case 18:
								switch (Local_755[iVar0 /*33*/].f_5)
								{
									case 0:
										func_93();
										unk_0x084522380FECC554(0, 2434.891f, 4973.864f, 50.5679f, 1f, 20000, 0.25f, 0, 1193033728);
										unk_0xBD415ADB0A08F6EF(0, "WORLD_HUMAN_BINOCULARS", 0, 0);
										func_92(&(Local_755[iVar0 /*33*/]), 0);
										Local_755[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 25:
								switch (Local_755[iVar0 /*33*/].f_5)
								{
									case 0:
										switch (Local_755[iVar0 /*33*/].f_2)
										{
											case 12:
												if (unk_0x3F1EB7756B4EA5B4(2433.04f, 4967.87f, 46.28f, 0.8f, 0))
												{
													unk_0xA2CF3F29D091EFF2(Local_755[iVar0 /*33*/], 2433.04f, 4967.87f, 46.28f, 0.8f, 0);
													Local_755[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 13:
												if (unk_0x3F1EB7756B4EA5B4(2432.56f, 4968.38f, 46.27f, 0.8f, 0))
												{
													unk_0xA2CF3F29D091EFF2(Local_755[iVar0 /*33*/], 2432.56f, 4968.38f, 46.27f, 0.8f, 0);
													Local_755[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 14:
												if (unk_0x3F1EB7756B4EA5B4(2433.12f, 4965.59f, 46.27f, 0.8f, 0))
												{
													unk_0xA2CF3F29D091EFF2(Local_755[iVar0 /*33*/], 2433.12f, 4965.59f, 46.27f, 0.8f, 0);
													Local_755[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 15:
												if (unk_0x3F1EB7756B4EA5B4(2439.61f, 4960.99f, 46.27f, 0.4f, 0))
												{
													unk_0xA2CF3F29D091EFF2(Local_755[iVar0 /*33*/], 2439.697f, 4960.996f, 46.28f, 0.4f, 0);
													Local_755[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 16:
												if (unk_0x3F1EB7756B4EA5B4(2440.16f, 4962.99f, 46.27f, 0.4f, 0))
												{
													unk_0xA2CF3F29D091EFF2(Local_755[iVar0 /*33*/], 2440.16f, 4962.99f, 46.27f, 0.4f, 0);
													Local_755[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 17:
												if (unk_0x3F1EB7756B4EA5B4(2438.23f, 4962.25f, 46.27f, 0.4f, 0))
												{
													unk_0xA2CF3F29D091EFF2(Local_755[iVar0 /*33*/], 2438.23f, 4962.25f, 46.27f, 0.4f, 0);
													Local_755[iVar0 /*33*/].f_5++;
												}
												break;
										}
										break;
									
									case 1:
										if (unk_0x1F8F07D86DA1A701(Local_755[iVar0 /*33*/], 1647992574) == 7)
										{
											Local_755[iVar0 /*33*/].f_5 = 0;
										}
										break;
								}
								break;
							
							case 28:
								switch (Local_755[iVar0 /*33*/].f_5)
								{
									case 0:
										if (unk_0x5ADC20A7C6AB8336(unk_0xBE369BE1BC57A796(), Local_755[iVar0 /*33*/]) || (func_90(unk_0x57240623C1BC6E88(Local_755[iVar0 /*33*/], 1), 1f, 1120403456) && unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 2448.583f, 4969.292f, 45.1856f, 2439.538f, 4978.061f, 46.82762f, 5.75f, 0, 1, 0)))
										{
											unk_0xD3C1FC2A6E8F1095(Local_755[iVar0 /*33*/], 20000, 0, -1, 0);
											Local_755[iVar0 /*33*/].f_5 = 2;
										}
										break;
									
									case 2:
										if (func_35("WRK1", 1, Local_755[iVar0 /*33*/], "CHIN2Goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										if (unk_0x5ADC20A7C6AB8336(unk_0xBE369BE1BC57A796(), Local_755[iVar0 /*33*/]) || (func_90(unk_0x57240623C1BC6E88(Local_755[iVar0 /*33*/], 1), 1f, 1120403456) && unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 2448.583f, 4969.292f, 45.1856f, 2439.538f, 4978.061f, 46.82762f, 5.75f, 0, 1, 0)))
										{
											if (func_35("TRV1", 1, unk_0x17B5CC8A8615737D(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_755[iVar0 /*33*/].f_5++;
												Local_755[iVar0 /*33*/].f_14 = unk_0x94E3E074F38DF86C() + 2000;
											}
										}
										else
										{
											Local_755[iVar0 /*33*/].f_5++;
											Local_755[iVar0 /*33*/].f_14 = unk_0x94E3E074F38DF86C() + 2000;
										}
										break;
									
									case 4:
										if (unk_0x94E3E074F38DF86C() > Local_755[iVar0 /*33*/].f_14)
										{
											unk_0xCA58071CE9CCE891(Local_755[iVar0 /*33*/], unk_0x17B5CC8A8615737D(), 200f, 200000, 0, 0);
											unk_0x650BB0E111420EAF(Local_755[iVar0 /*33*/], 1);
											unk_0x6500ADB01E821BC0(&(Local_755[iVar0 /*33*/]));
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							
							case 30:
								if (!unk_0xCA41A00932714525(Local_755[iVar0 /*33*/]))
								{
									if (Local_755[iVar0 /*33*/].f_5 < 8)
									{
										if (unk_0xD5C8AEE22F8A47C7(Local_755[iVar0 /*33*/], 0, 2))
										{
											if (!unk_0x509A3191A6C4EB38(Local_755[iVar0 /*33*/], 0, 2))
											{
												unk_0xC1B7B5C6FDC0755B(Local_755[iVar0 /*33*/], joaat("weapon_pistol"), -1, 0, 1);
												unk_0x7DD7196E1A0C1D43(Local_755[iVar0 /*33*/], unk_0x17B5CC8A8615737D(), 0, 16);
												func_88();
												unk_0xCC61640A821F277C(Local_755[iVar0 /*33*/], 0);
												unk_0x7DD7196E1A0C1D43(Local_755[iVar0 /*33*/], unk_0x17B5CC8A8615737D(), 0, 16);
												unk_0x3BB70315907D9456(Local_755[iVar0 /*33*/], iLocal_1616);
												Local_755[iVar0 /*33*/].f_5 = 999;
											}
										}
									}
								}
								switch (Local_755[iVar0 /*33*/].f_5)
								{
									case 0:
										unk_0xA0E7D0E8FE126EE8("misschinese2_crystalmaze");
										unk_0xD0001D3ECB0CB35E(joaat("weapon_sawnoffshotgun"), 31, 0);
										unk_0xCC61640A821F277C(Local_755[iVar0 /*33*/], 1);
										unk_0x3BB70315907D9456(Local_755[iVar0 /*33*/], iLocal_1616);
										Local_755[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (unk_0xF4F8AE8DD0F08C1E("misschinese2_crystalmaze") && unk_0xC1C884D9C9FA3699(joaat("weapon_sawnoffshotgun")))
										{
											if (!unk_0xCA41A00932714525(Local_755[iVar0 /*33*/]))
											{
												uLocal_2875 = unk_0x356EABB012B22D07(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
												unk_0x8B06F7FDDA8B98FB(uLocal_2875, 1);
												unk_0xA17D768ED938600C(Local_755[iVar0 /*33*/], iLocal_2875, "misschinese2_crystalmaze", "_cower_loop", 1000f, -8f, 0, 0, 1148846080, 0);
												if (!unk_0x23E9113C762466ED(iLocal_2878))
												{
													iLocal_2878 = unk_0xF6AE9814F412E86C(joaat("weapon_sawnoffshotgun"), 40, 2433.59f, 4969.7f, 42.1854f, 1, 1065353216, 0, 0, 1);
													unk_0x04A5FAE5B1EB8E28(iLocal_2878, 90f, 0f, 0f, 2, 1);
												}
												unk_0x4718A774D9248520(Local_755[iVar0 /*33*/], unk_0x17B5CC8A8615737D(), -1, 0, 2);
												Local_755[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 2:
										if ((iLocal_2511 == 4 || iLocal_2511 == 5) || iLocal_2511 == 6)
										{
											if (func_87(11))
											{
												Local_755[iVar0 /*33*/].f_5++;
											}
										}
										if (iLocal_2511 > 6)
										{
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										uLocal_2874 = unk_0x356EABB012B22D07(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
										unk_0xA17D768ED938600C(Local_755[iVar0 /*33*/], uLocal_2874, "misschinese2_crystalmaze", "_cower_to_stand", 4f, -8f, 0, 0, 1148846080, 0);
										unk_0x4718A774D9248520(Local_755[iVar0 /*33*/], unk_0x17B5CC8A8615737D(), -1, 0, 2);
										Local_755[iVar0 /*33*/].f_5++;
										break;
									
									case 4:
										if (func_35("CHI2_DALE", 4, Local_755[iVar0 /*33*/], "ONEIL", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_755[iVar0 /*33*/].f_5++;
										}
										if ((unk_0x00743AFDA92F3B04(iLocal_2874) && unk_0x96F65998C0685177(iLocal_2874) > 0.98f) || !unk_0x00743AFDA92F3B04(iLocal_2874))
										{
											Local_755[iVar0 /*33*/].f_5 = 5;
										}
										break;
									
									case 5:
										if ((unk_0x00743AFDA92F3B04(iLocal_2874) && unk_0x96F65998C0685177(iLocal_2874) > 0.98f) || !unk_0x00743AFDA92F3B04(iLocal_2874))
										{
											iLocal_2873 = unk_0x356EABB012B22D07(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
											unk_0x8B06F7FDDA8B98FB(iLocal_2873, 1);
											unk_0xA17D768ED938600C(Local_755[iVar0 /*33*/], iLocal_2873, "misschinese2_crystalmaze", "_stand_loop", 4f, -8f, 0, 0, 1148846080, 0);
											Local_755[iVar0 /*33*/].f_5++;
											Local_755[iVar0 /*33*/].f_14 = (unk_0x94E3E074F38DF86C() + unk_0x0E29C61F26D96FDB(1000, 2000));
										}
										break;
									
									case 6:
										if (!unk_0x00743AFDA92F3B04(iLocal_2876) || iLocal_2876 == 0)
										{
											if (unk_0x94E3E074F38DF86C() > Local_755[iVar0 /*33*/].f_14)
											{
												iLocal_2876 = unk_0x356EABB012B22D07(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
												if (unk_0x0E29C61F26D96FDB(0, 2) == 1)
												{
													unk_0xA17D768ED938600C(Local_755[iVar0 /*33*/], iLocal_2876, "misschinese2_crystalmaze", "_stand_loop_a", 4f, -8f, 0, 0, 1148846080, 0);
												}
												else
												{
													unk_0xA17D768ED938600C(Local_755[iVar0 /*33*/], iLocal_2876, "misschinese2_crystalmaze", "_stand_loop_b", 4f, -8f, 0, 0, 1148846080, 0);
												}
											}
										}
										if (!unk_0x00743AFDA92F3B04(iLocal_2873) || iLocal_2873 == 0)
										{
											if ((unk_0x00743AFDA92F3B04(iLocal_2876) && unk_0x96F65998C0685177(iLocal_2876) > 0.98f) || !unk_0x00743AFDA92F3B04(iLocal_2876))
											{
												iLocal_2873 = unk_0x356EABB012B22D07(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
												unk_0x8B06F7FDDA8B98FB(iLocal_2873, 1);
												unk_0xA17D768ED938600C(Local_755[iVar0 /*33*/], iLocal_2873, "misschinese2_crystalmaze", "_stand_loop", 4f, -8f, 0, 0, 1148846080, 0);
												Local_755[iVar0 /*33*/].f_14 = (unk_0x94E3E074F38DF86C() + unk_0x0E29C61F26D96FDB(1000, 2000));
											}
										}
										if (!func_59() || (func_67(unk_0x17B5CC8A8615737D(), 2430.09f, 4965.93f, 41.55f, 1) > 3.438f && !unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 2427.079f, 4964.971f, 41.81169f, 2432.589f, 4959.331f, 48.7548f, 3.3125f, 0, 1, 0)))
										{
											func_85();
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 7:
										if (func_35("CHI2_DALEG", 4, Local_755[iVar0 /*33*/], "ONEIL", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 8:
										iLocal_2877 = unk_0x356EABB012B22D07(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
										unk_0xA17D768ED938600C(Local_755[iVar0 /*33*/], iLocal_2877, "misschinese2_crystalmaze", "_stand_to_aim", 4f, -8f, 0, 0, 1148846080, 0);
										unk_0x9FBE0CDB60B9F058(iLocal_2878, Local_755[iVar0 /*33*/]);
										Local_755[iVar0 /*33*/].f_5++;
										break;
									
									case 9:
										if ((unk_0x00743AFDA92F3B04(iLocal_2877) && unk_0x96F65998C0685177(iLocal_2877) > 0.98f) || !unk_0x00743AFDA92F3B04(iLocal_2877))
										{
											unk_0xE1F5F70A15CF94CB(Local_755[iVar0 /*33*/], 1);
											unk_0x15848523A8959DBC(Local_755[iVar0 /*33*/]);
											unk_0xC62C6BBB860531B7(Local_755[iVar0 /*33*/], unk_0x17B5CC8A8615737D(), -1, 1);
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 10:
										if (!func_59())
										{
											if (func_35("CHI2_DALEA", 4, Local_755[iVar0 /*33*/], "ONEIL", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												unk_0xCC61640A821F277C(Local_755[iVar0 /*33*/], 0);
												unk_0x7DD7196E1A0C1D43(Local_755[iVar0 /*33*/], unk_0x17B5CC8A8615737D(), 0, 16);
												Local_755[iVar0 /*33*/].f_14 = (unk_0x94E3E074F38DF86C() + unk_0x0E29C61F26D96FDB(3000, 4000));
												Local_755[iVar0 /*33*/].f_15 = 0;
												Local_755[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 11:
										if (unk_0x94E3E074F38DF86C() > Local_755[iVar0 /*33*/].f_14)
										{
											if (Local_755[iVar0 /*33*/].f_15 < 4)
											{
												if (func_35("CHI2_DALEA", 4, Local_755[iVar0 /*33*/], "ONEIL", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
												{
													Local_755[iVar0 /*33*/].f_5++;
													Local_755[iVar0 /*33*/].f_14 = (unk_0x94E3E074F38DF86C() + unk_0x0E29C61F26D96FDB(3000, 4000));
													Local_755[iVar0 /*33*/].f_15++;
												}
											}
										}
										break;
									
									case 999:
										if (func_35("CHI2_DALEA", 4, Local_755[iVar0 /*33*/], "ONEIL", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							
							case 31:
								if (!unk_0xCA41A00932714525(Local_755[iVar0 /*33*/]))
								{
									if (unk_0x579A94EB2BF9398F(unk_0x57240623C1BC6E88(Local_755[iVar0 /*33*/], 1), 2f, 1))
									{
										Local_755[iVar0 /*33*/].f_5 = 5;
									}
								}
								switch (Local_755[iVar0 /*33*/].f_5)
								{
									case 0:
										if (func_84("FRMFLC", 0, 0))
										{
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 1:
										if (func_35("WRK2", 1, Local_755[iVar0 /*33*/], "oneilcook", 2, unk_0x17B5CC8A8615737D(), "trevor", -1, 0, 0, -1, 0, 0, 8))
										{
											Local_755[iVar0 /*33*/].f_5++;
											Local_755[iVar0 /*33*/].f_14 = unk_0x94E3E074F38DF86C() + 1300;
										}
										break;
									
									case 2:
										if (unk_0x94E3E074F38DF86C() > Local_755[iVar0 /*33*/].f_14)
										{
											unk_0xD3C1FC2A6E8F1095(Local_755[iVar0 /*33*/], 20000, 0, -1, 0);
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										if (!func_59())
										{
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 4:
										if (!func_59())
										{
											func_99(iVar0, 27, 0, 0);
										}
										break;
									
									case 5:
										unk_0xCA58071CE9CCE891(Local_755[iVar0 /*33*/], unk_0x17B5CC8A8615737D(), 50f, 1000, 0, 0);
										Local_755[iVar0 /*33*/].f_5++;
										break;
									
									case 6:
										if (func_82("WRK2"))
										{
											if (unk_0xD8D502167864F70D() == 1 || unk_0xD8D502167864F70D() == 5)
											{
												func_81(0);
											}
											else
											{
												func_81(1);
											}
										}
										func_99(iVar0, 27, 0, 0);
										break;
								}
								break;
							
							case 27:
								switch (Local_755[iVar0 /*33*/].f_5)
								{
									case 0:
										func_93();
										unk_0x29DA211B1C795F27(0, 1);
										unk_0xCA58071CE9CCE891(0, unk_0x17B5CC8A8615737D(), 200f, 999999, 0, 0);
										unk_0x4E61D536D3C86A36(0, -1);
										func_92(&(Local_755[iVar0 /*33*/]), 0);
										unk_0x650BB0E111420EAF(Local_755[iVar0 /*33*/], 1);
										unk_0x6500ADB01E821BC0(&(Local_755[iVar0 /*33*/]));
										if (unk_0xA3794949321E107C(Local_755[iVar0 /*33*/].f_19))
										{
											unk_0x020DF7300725ECAB(&(Local_755[iVar0 /*33*/].f_19));
										}
										Local_755[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 4:
								if (iLocal_2881 == 1)
								{
									if (unk_0x00743AFDA92F3B04(Local_755[iVar0 /*33*/].f_14))
									{
										unk_0xCE49D4A5BC766F78(Local_755[iVar0 /*33*/].f_14, 0.69f);
									}
									if (iVar0 == 9)
									{
										iLocal_2881 = 0;
									}
								}
								if (iLocal_2882 == 1)
								{
									if (unk_0x00743AFDA92F3B04(Local_755[iVar0 /*33*/].f_14))
									{
										unk_0xCE49D4A5BC766F78(Local_755[iVar0 /*33*/].f_14, 0f);
									}
									if (iVar0 == 9)
									{
										iLocal_2882 = 0;
									}
									Local_755[iVar0 /*33*/].f_5 = 0;
								}
								if (Local_755[iVar0 /*33*/].f_2 == 8)
								{
									if (unk_0x00743AFDA92F3B04(Local_755[iVar0 /*33*/].f_14))
									{
										if (Local_755[iVar0 /*33*/].f_5 == 0)
										{
											if (!func_30(23) || iLocal_2511 == 3)
											{
												if (unk_0x1F8F07D86DA1A701(Local_755[iVar0 /*33*/], 1785177548) == 1)
												{
													if (unk_0x96F65998C0685177(Local_755[iVar0 /*33*/].f_14) > 0.024f && unk_0x96F65998C0685177(Local_755[iVar0 /*33*/].f_14) < 0.033f)
													{
														iVar5 = 0;
														if (!unk_0xCA41A00932714525(Local_755[iVar0 /*33*/]))
														{
															iVar6 = joaat("weapon_unarmed");
															if (unk_0x5CD8291F2C5E0AD1(Local_755[iVar0 /*33*/], &iVar6, 1))
															{
																unk_0xFA4023BBD5BCB8B5(Local_755[iVar0 /*33*/], 100);
																if (iVar6 == joaat("weapon_pistol"))
																{
																	if (func_80(&iVar5))
																	{
																		unk_0xACC235DBD5C9F713(Local_755[iVar0 /*33*/], joaat("weapon_pistol"), 12);
																		unk_0xC3EA0842372A4F90(Local_755[iVar0 /*33*/], unk_0x57240623C1BC6E88(iLocal_2657[iVar5], 1), 0);
																		func_97(Local_755[iVar0 /*33*/], &(Local_755[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1);
																		Local_755[iVar0 /*33*/].f_5 = 1;
																	}
																	else
																	{
																		unk_0xACC235DBD5C9F713(Local_755[iVar0 /*33*/], joaat("weapon_pistol"), 12);
																		unk_0xC3EA0842372A4F90(Local_755[iVar0 /*33*/], 2493.1f, 4971f, 44.9f, 0);
																		func_97(Local_755[iVar0 /*33*/], &(Local_755[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1);
																		Local_755[iVar0 /*33*/].f_5 = 1;
																	}
																}
															}
														}
													}
												}
											}
										}
										else if (Local_755[iVar0 /*33*/].f_5 == 1)
										{
											if (unk_0x96F65998C0685177(Local_755[iVar0 /*33*/].f_14) > 0.04f)
											{
												Local_755[iVar0 /*33*/].f_5 = 2;
												if (iLocal_2879 == 0)
												{
													unk_0xECF05B7D463A3321(Local_755[iVar0 /*33*/], "generic_cheer", "A_M_M_Hillbilly_01_White_mini_02", "SPEECH_PARAMS_FORCE_SHOUTED", 0);
												}
											}
										}
										else if (Local_755[iVar0 /*33*/].f_5 == 2)
										{
											if (unk_0x96F65998C0685177(Local_755[iVar0 /*33*/].f_14) > 0.6f)
											{
												Local_755[iVar0 /*33*/].f_5 = 0;
											}
										}
									}
								}
								if (Local_755[iVar0 /*33*/].f_5 == 3)
								{
									if (unk_0x1F8F07D86DA1A701(Local_755[iVar0 /*33*/], 2106541073) == 7)
									{
										func_99(iVar0, 7, 0, 0);
									}
								}
								break;
							}
					}
					break;
				
				case 5:
				case 6:
					if (Local_1619[iVar0 /*24*/].f_20)
					{
						switch (Local_755[iVar0 /*33*/].f_2)
						{
							case 20:
							case 21:
							case 16:
							case 12:
							case 13:
							case 14:
								switch (Local_1619[iVar0 /*24*/].f_4)
								{
									case 1:
										unk_0x7DFA2BDB740BB1B6(Local_755[iVar0 /*33*/], 2431.704f, 4961.62f, 45.33136f, 2455.376f, 4985.934f, 48.68555f, 13.5625f, 0, 0);
										unk_0x7DD7196E1A0C1D43(Local_755[iVar0 /*33*/], unk_0x17B5CC8A8615737D(), 0, 16);
										unk_0xE1F5F70A15CF94CB(Local_755[iVar0 /*33*/], 1);
										unk_0xC96275575DC981A9(Local_755[iVar0 /*33*/], 50, 1);
										Local_1619[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							
							case 17:
								switch (Local_1619[iVar0 /*24*/].f_4)
								{
									case 1:
										unk_0x7DFA2BDB740BB1B6(Local_755[iVar0 /*33*/], 2431.704f, 4961.62f, 45.33136f, 2455.376f, 4985.934f, 48.68555f, 13.5625f, 0, 0);
										unk_0x7DD7196E1A0C1D43(Local_755[iVar0 /*33*/], unk_0x17B5CC8A8615737D(), 0, 16);
										unk_0xE1F5F70A15CF94CB(Local_755[iVar0 /*33*/], 1);
										unk_0xC96275575DC981A9(Local_755[iVar0 /*33*/], 50, 1);
										Local_1619[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							
							case 15:
								switch (Local_1619[iVar0 /*24*/].f_4)
								{
									case 1:
										unk_0x7DFA2BDB740BB1B6(Local_755[iVar0 /*33*/], 2437.982f, 4959.021f, 45.31057f, 2432.93f, 4961.941f, 48.69256f, 3.1875f, 0, 0);
										unk_0x7DD7196E1A0C1D43(Local_755[iVar0 /*33*/], unk_0x17B5CC8A8615737D(), 0, 16);
										unk_0xE1F5F70A15CF94CB(Local_755[iVar0 /*33*/], 1);
										Local_1619[iVar0 /*24*/].f_4++;
										break;
									
									case 2:
										if (func_87(18))
										{
											unk_0x844F37B6504C4747(Local_755[iVar0 /*33*/], 0);
											Local_1619[iVar0 /*24*/].f_4++;
										}
										break;
								}
								break;
							
							case 10:
							case 18:
							case 19:
							case 11:
								switch (Local_1619[iVar0 /*24*/].f_4)
								{
									case 1:
										unk_0x7DD7196E1A0C1D43(Local_755[iVar0 /*33*/], unk_0x17B5CC8A8615737D(), 0, 16);
										unk_0xE1F5F70A15CF94CB(Local_755[iVar0 /*33*/], 1);
										unk_0xC96275575DC981A9(Local_755[iVar0 /*33*/], 50, 1);
										if (iLocal_1614 == 0)
										{
											unk_0x844F37B6504C4747(Local_755[iVar0 /*33*/], 0);
											unk_0x6DE4D679A0565F8A(Local_755[iVar0 /*33*/], 2451.677f, 4954.251f, 44.988f, 3f, 0, 0);
											iLocal_1614++;
											Local_1619[iVar0 /*24*/].f_4++;
										}
										else
										{
											Local_1619[iVar0 /*24*/].f_4 = (unk_0x94E3E074F38DF86C() + iLocal_1614 * 4000);
											iLocal_1614++;
										}
										Local_755[iVar0 /*33*/].f_1 = 1;
										break;
									
									case 2:
										if (func_67(Local_755[iVar0 /*33*/], 2451.677f, 4954.251f, 44.988f, 1) < 3f)
										{
											unk_0x844F37B6504C4747(Local_755[iVar0 /*33*/], 0);
											Local_1619[iVar0 /*24*/].f_4++;
										}
										break;
									
									case 3:
										break;
									
									default:
										if (unk_0x94E3E074F38DF86C() > Local_1619[iVar0 /*24*/].f_4)
										{
											unk_0x844F37B6504C4747(Local_755[iVar0 /*33*/], 0);
											unk_0x6DE4D679A0565F8A(Local_755[iVar0 /*33*/], 2451.677f, 4954.251f, 44.988f, 3f, 0, 0);
											Local_1619[iVar0 /*24*/].f_4 = 2;
										}
										break;
								}
								break;
							
							case 1:
								switch (Local_1619[iVar0 /*24*/].f_4)
								{
									case 1:
										unk_0x7DFA2BDB740BB1B6(Local_755[iVar0 /*33*/], 2453.084f, 4969.897f, 50.44285f, 2460.996f, 4977.822f, 53.38035f, 2.9375f, 0, 0);
										unk_0x7DD7196E1A0C1D43(Local_755[iVar0 /*33*/], unk_0x17B5CC8A8615737D(), 0, 16);
										unk_0xE1F5F70A15CF94CB(Local_755[iVar0 /*33*/], 1);
										Local_1619[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							
							case 0:
								switch (Local_1619[iVar0 /*24*/].f_4)
								{
									case 1:
										unk_0x7DFA2BDB740BB1B6(Local_755[iVar0 /*33*/], 2442.963f, 4964.217f, 50.44285f, 2449.251f, 4970.534f, 53.38035f, 2f, 0, 0);
										unk_0x7DD7196E1A0C1D43(Local_755[iVar0 /*33*/], unk_0x17B5CC8A8615737D(), 0, 16);
										unk_0xE1F5F70A15CF94CB(Local_755[iVar0 /*33*/], 1);
										Local_1619[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							
							case 2:
								switch (Local_1619[iVar0 /*24*/].f_4)
								{
									case 1:
										unk_0x7DFA2BDB740BB1B6(Local_755[iVar0 /*33*/], 2461.362f, 4976.084f, 50.44285f, 2448.743f, 4988.774f, 53.60143f, 2f, 0, 0);
										unk_0x7DD7196E1A0C1D43(Local_755[iVar0 /*33*/], unk_0x17B5CC8A8615737D(), 0, 16);
										unk_0xE1F5F70A15CF94CB(Local_755[iVar0 /*33*/], 1);
										Local_1619[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							}
					}
					break;
				}
		}
		iVar0++;
	}
}

int func_80(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	*iParam0 = 0;
	iVar0 = 0;
	*iParam0 = unk_0x0E29C61F26D96FDB(0, 10);
	bVar1 = false;
	while (!bVar1)
	{
		if (unk_0x23E9113C762466ED(iLocal_2657[*iParam0]) && unk_0x70A9F320A34FAC28(iLocal_2657[*iParam0], 2495.017f, 4970.17f, 44.21808f, 2493.501f, 4971.556f, 45.40248f, 1.375f, 0, 1, 0))
		{
			return 1;
		}
		else
		{
			*iParam0++;
			iVar0++;
			if (*iParam0 == iLocal_2657)
			{
				*iParam0 = 0;
			}
		}
		if (iVar0 == 10)
		{
			return 0;
		}
	}
	return 0;
}

void func_81(bool bParam0)
{
	iLocal_3491 = 0;
	if (bParam0)
	{
		func_85();
	}
	else
	{
		func_88();
	}
}

int func_82(char* sParam0)
{
	struct<6> Var0;
	
	Var0 = { func_83() };
	if (unk_0x6A7B0D91FD88D9EE(&Var0, sParam0))
	{
		return 1;
	}
	return 0;
}

struct<6> func_83()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15745 == 4)
	{
		return Global_15364;
	}
	return Var0;
}

bool func_84(char* sParam0, int iParam1, int iParam2)
{
	unk_0x5A99EA84320AB387(sParam0);
	if (iParam1 == 1)
	{
		unk_0x34D84D73B5DF8E80(iParam2);
	}
	return unk_0x2B886121A03F928A();
}

void func_85()
{
	Global_14611 = 0;
	func_86();
}

void func_86()
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

int func_87(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_3120[0 /*8*/]);
	if (iVar0 >= 0 && iVar0 < Local_3120.f_0)
	{
		if (Local_3120[iVar0 /*8*/] == iParam0)
		{
			if (Local_3120[iVar0 /*8*/].f_2)
			{
				return 1;
			}
		}
		else if (Local_3120[iVar0 /*8*/] != 0)
		{
		}
	}
	return 0;
}

void func_88()
{
	Global_14611 = 0;
	func_89();
}

void func_89()
{
	unk_0x5FB0B609B3A49840();
	Global_16756 = 0;
	if (unk_0x55C74612BE548D78())
	{
		unk_0x660E8E7836E95077(0);
		Global_15745 = 6;
	}
}

int func_90(struct<3> Param0, float fParam3, float fParam4)
{
	if (unk_0xF7E1BD8196545EE3(Param0, fParam3))
	{
		if (!unk_0x1C34CE8087E3897C(unk_0x17B5CC8A8615737D(), Param0, fParam4, fParam4, fParam4, 0, 0, 0))
		{
			return 0;
		}
		else if (unk_0x25BD4C26D84038CD())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_91(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_3120.f_0)
	{
		if (iParam0 == Local_3120[iVar0 /*8*/])
		{
			if (iParam1 == 1)
			{
				Local_3120[iVar0 /*8*/].f_2 = 1;
			}
			else
			{
				Local_3120[iVar0 /*8*/].f_2 = 0;
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_92(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x85111902FC00A5CF(uLocal_257, 1);
	}
	unk_0x007AE2AA9E15FA7B(uLocal_257);
	if (!unk_0xE34CF180A5429DEA(*iParam0, 1))
	{
		unk_0x00E85C3B3BD34B10(*iParam0, uLocal_257);
	}
	unk_0x08377FB2AE4C6899(&uLocal_257);
}

void func_93()
{
	unk_0x86DD54980FE55567(&uLocal_257);
}

void func_94(int iParam0)
{
	Local_755[iParam0 /*33*/].f_15 = (Local_755[iParam0 /*33*/].f_15 + unk_0xF34EE736CF047844((unk_0x0000000050597EE2() * 1000f)));
	switch (Local_755[iParam0 /*33*/].f_2)
	{
		case 7:
			if (Local_755[iParam0 /*33*/].f_15 > 2000 && !unk_0x48B8265059381CD0(Local_755[iParam0 /*33*/].f_14, 0))
			{
				unk_0x0D322CDF37087C0E(Local_755[iParam0 /*33*/], 2505.634f, 4996.994f, 46.6624f, 4000, 0, 2);
				unk_0xEB79FECD9022AAF0(&(Local_755[iParam0 /*33*/].f_14), 0);
			}
			else if (Local_755[iParam0 /*33*/].f_15 > 8000 && !unk_0x48B8265059381CD0(Local_755[iParam0 /*33*/].f_14, 1))
			{
				unk_0x0D322CDF37087C0E(Local_755[iParam0 /*33*/], 2472.297f, 4962.687f, 47.2297f, 6000, 0, 2);
				unk_0xEB79FECD9022AAF0(&(Local_755[iParam0 /*33*/].f_14), 1);
			}
			break;
		
		case 5:
			if (Local_755[iParam0 /*33*/].f_15 > 3000 && !unk_0x48B8265059381CD0(Local_755[iParam0 /*33*/].f_14, 0))
			{
				if (!unk_0xCA41A00932714525(Local_755[6 /*33*/]))
				{
					unk_0x4718A774D9248520(Local_755[iParam0 /*33*/], Local_755[6 /*33*/], 4000, 0, 2);
					unk_0xEB79FECD9022AAF0(&(Local_755[iParam0 /*33*/].f_14), 0);
				}
			}
			else if (Local_755[iParam0 /*33*/].f_15 > 11000 && !unk_0x48B8265059381CD0(Local_755[iParam0 /*33*/].f_14, 1))
			{
				unk_0x0D322CDF37087C0E(Local_755[iParam0 /*33*/], 2494.634f, 5001.994f, 46.6624f, 7000, 0, 2);
				unk_0xEB79FECD9022AAF0(&(Local_755[iParam0 /*33*/].f_14), 1);
			}
			else if (Local_755[iParam0 /*33*/].f_15 > 20000 && !unk_0x48B8265059381CD0(Local_755[iParam0 /*33*/].f_14, 2))
			{
				unk_0x0D322CDF37087C0E(Local_755[iParam0 /*33*/], 2477.634f, 4966.994f, 46.6624f, 7000, 0, 2);
				unk_0xEB79FECD9022AAF0(&(Local_755[iParam0 /*33*/].f_14), 2);
			}
			break;
		
		case 4:
			if (Local_755[iParam0 /*33*/].f_15 > 3000 && !unk_0x48B8265059381CD0(Local_755[iParam0 /*33*/].f_14, 0))
			{
				unk_0x0D322CDF37087C0E(Local_755[iParam0 /*33*/], 2505.634f, 4996.994f, 46.6624f, 5000, 0, 2);
				unk_0xEB79FECD9022AAF0(&(Local_755[iParam0 /*33*/].f_14), 0);
			}
			else if (Local_755[iParam0 /*33*/].f_15 > 10000 && !unk_0x48B8265059381CD0(Local_755[iParam0 /*33*/].f_14, 1))
			{
				unk_0x0D322CDF37087C0E(Local_755[iParam0 /*33*/], 2461.449f, 4977.48f, 51.7483f, 6000, 0, 2);
				unk_0xEB79FECD9022AAF0(&(Local_755[iParam0 /*33*/].f_14), 1);
			}
			else if (Local_755[iParam0 /*33*/].f_15 > 18000 && !unk_0x48B8265059381CD0(Local_755[iParam0 /*33*/].f_14, 2))
			{
				unk_0x0D322CDF37087C0E(Local_755[iParam0 /*33*/], 2505.634f, 4996.994f, 46.6624f, 6000, 0, 2);
				unk_0xEB79FECD9022AAF0(&(Local_755[iParam0 /*33*/].f_14), 2);
			}
			break;
	}
}

float func_95(float fParam0, float fParam1, float fParam2)
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

float func_96(struct<2> Param0, float fParam2, struct<2> Param3, float fParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param3.f_0 - Param0.f_0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0xB318EAE363BA0C2D(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

int func_97(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0x592069F95C314814();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0xCA41A00932714525(iParam0))
	{
		if (!unk_0x708B478711FA7649(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0x53D9FD8A3418C8E9(iParam0, 1);
			}
			else
			{
				unk_0x20DA9B5EBDD69183(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x7E0E4A8CBE4A8769(iParam0, iParam2);
			unk_0xC49F45795B7AFEEA(iParam0, fParam6);
			if (unk_0xA3794949321E107C(*uParam1))
			{
				unk_0x84DAB725836026C6(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x8F033B85B9F09390(iParam0, iParam9);
		}
		unk_0xB9B7F383FB2453E6(iParam0, iParam4);
		unk_0xB04373FE92ECD69C(iParam0, iParam5);
		*uParam1 = unk_0x4DFA608A26DB4230(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0xA3794949321E107C(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0xCC930AE12D020496(*uParam1, iParam8);
				}
				unk_0x457AECF7F7E33610("STRING");
				if (bParam10)
				{
					unk_0xBAB00B98D1E61BEE(iParam7);
				}
				else
				{
					unk_0x34D84D73B5DF8E80(iParam7);
				}
				unk_0xB58BBC88882D90A6(*uParam1);
				unk_0x84DAB725836026C6(*uParam1, 7);
			}
		}
		if (!unk_0x48B8265059381CD0(uParam1->f_6, 2))
		{
			if (unk_0xA3794949321E107C(*uParam1))
			{
				if (!unk_0x9C88EB7B70229335(iParam7))
				{
					unk_0x457AECF7F7E33610("STRING");
					if (bParam10)
					{
						unk_0xBAB00B98D1E61BEE(iParam7);
					}
					else
					{
						unk_0x34D84D73B5DF8E80(iParam7);
					}
					unk_0xB58BBC88882D90A6(*uParam1);
				}
				unk_0xEB79FECD9022AAF0(&(uParam1->f_6), 2);
			}
		}
		if (unk_0xFD0FE723227D5AB6(iParam0, 0))
		{
			uParam1->f_1 = unk_0x3329BF35D4BD3992(iParam0);
			if (!unk_0x48B8265059381CD0(uParam1->f_6, 3))
			{
				if (unk_0xA3794949321E107C(uParam1->f_1))
				{
					unk_0x84DAB725836026C6(uParam1->f_1, 7);
					unk_0xEB79FECD9022AAF0(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0xA3794949321E107C(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x21E7933CCC7B3724(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_98(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (!unk_0xCA41A00932714525(iParam0))
	{
		unk_0x9593ABA7B045F264(iParam0, fParam1);
		unk_0xE5B08A5C0283C229(iParam0, fParam2);
		unk_0xCC2DA14A520CC195(iParam0, (fParam3 / 2f));
		unk_0xBF3335C87BD4D491(iParam0, fParam4);
		unk_0x1C9759DCD0A0CAE4(iParam0, fParam5);
	}
}

void func_99(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!unk_0xCA41A00932714525(Local_755[iParam0 /*33*/]))
	{
		if (iParam0 >= 0)
		{
			Local_755[iParam0 /*33*/].f_4 = Local_755[iParam0 /*33*/].f_3;
			Local_755[iParam0 /*33*/].f_3 = iParam1;
			Local_755[iParam0 /*33*/].f_5 = iParam2;
			Local_755[iParam0 /*33*/].f_6 = { 0f, 0f, 0f };
			Local_755[iParam0 /*33*/].f_9 = { 0f, 0f, 0f };
			Local_755[iParam0 /*33*/].f_12 = 0f;
			Local_755[iParam0 /*33*/].f_13 = 0f;
			Local_755[iParam0 /*33*/].f_14 = iParam3;
			Local_755[iParam0 /*33*/].f_15 = 0;
			Local_1619[iParam0 /*24*/].f_3 = 3;
		}
	}
}

void func_100(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	(*iParam0)[iParam1 /*24*/] = uParam2;
	(iParam0[iParam1 /*24*/])->f_8 = iParam3;
	(iParam0[iParam1 /*24*/])->f_20 = iParam4;
	(iParam0[iParam1 /*24*/])->f_21 = iParam5;
	if (iParam1 > iLocal_52)
	{
		iLocal_52 = iParam1 + 1;
	}
}

int func_101(int iParam0, int iParam1, struct<3> Param2, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	
	iParam1 = iParam1;
	iParam8 = iParam8;
	if (Local_755[iParam0 /*33*/].f_1 != 1 && Local_755[iParam0 /*33*/].f_1 != 0)
	{
		iVar0 = unk_0x1A4C1C534F86E06A(Param2);
		if (iVar0 == 0)
		{
			return 0;
		}
		else if (!unk_0x1F02DB541727C048(iVar0))
		{
			return 0;
		}
	}
	switch (iLocal_751)
	{
		case 0:
			Local_755[iParam0 /*33*/] = unk_0x2AD5F4170F4ACBEB(26, joaat("a_m_m_hillbilly_01"), Param2, iParam5, 1, 1);
			unk_0x7F73E2B58861632F(Local_755[iParam0 /*33*/]);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 0, 0, 1, 0);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 2, 0, 1, 0);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 3, 1, 1, 0);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 4, 1, 1, 0);
			break;
		
		case 1:
			Local_755[iParam0 /*33*/] = unk_0x2AD5F4170F4ACBEB(26, joaat("a_m_m_hillbilly_02"), Param2, iParam5, 1, 1);
			unk_0x7F73E2B58861632F(Local_755[iParam0 /*33*/]);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 2, 1, 0, 0);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 4, 0, 1, 0);
			break;
		
		case 2:
			Local_755[iParam0 /*33*/] = unk_0x2AD5F4170F4ACBEB(26, joaat("a_m_y_methhead_01"), Param2, iParam5, 1, 1);
			unk_0x7F73E2B58861632F(Local_755[iParam0 /*33*/]);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 0, 0, 1, 0);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 3, 1, 0, 0);
			break;
		
		case 3:
			Local_755[iParam0 /*33*/] = unk_0x2AD5F4170F4ACBEB(26, joaat("a_m_m_hillbilly_01"), Param2, iParam5, 1, 1);
			unk_0x7F73E2B58861632F(Local_755[iParam0 /*33*/]);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 0, 0, 2, 0);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 2, 1, 2, 0);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 3, 1, 0, 0);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 4, 1, 0, 0);
			break;
		
		case 4:
			Local_755[iParam0 /*33*/] = unk_0x2AD5F4170F4ACBEB(26, joaat("a_m_m_hillbilly_02"), Param2, iParam5, 1, 1);
			unk_0x7F73E2B58861632F(Local_755[iParam0 /*33*/]);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 0, 0, 2, 0);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 3, 1, 0, 0);
			break;
		
		case 5:
			Local_755[iParam0 /*33*/] = unk_0x2AD5F4170F4ACBEB(26, joaat("a_m_y_methhead_01"), Param2, iParam5, 1, 1);
			unk_0x7F73E2B58861632F(Local_755[iParam0 /*33*/]);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 4, 1, 2, 0);
			break;
		
		case 6:
			Local_755[iParam0 /*33*/] = unk_0x2AD5F4170F4ACBEB(26, joaat("a_m_m_hillbilly_01"), Param2, iParam5, 1, 1);
			unk_0x7F73E2B58861632F(Local_755[iParam0 /*33*/]);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 2, 1, 0, 0);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 3, 0, 1, 0);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 4, 0, 1, 0);
			break;
		
		case 7:
			Local_755[iParam0 /*33*/] = unk_0x2AD5F4170F4ACBEB(26, joaat("a_m_m_hillbilly_02"), Param2, iParam5, 1, 1);
			unk_0x7F73E2B58861632F(Local_755[iParam0 /*33*/]);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 0, 0, 1, 0);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 2, 2, 0, 0);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 3, 2, 0, 0);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 4, 0, 2, 0);
			break;
		
		case 8:
			Local_755[iParam0 /*33*/] = unk_0x2AD5F4170F4ACBEB(26, joaat("a_m_y_methhead_01"), Param2, iParam5, 1, 1);
			unk_0x7F73E2B58861632F(Local_755[iParam0 /*33*/]);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 3, 1, 0, 0);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 4, 1, 0, 0);
			break;
		
		case 9:
			Local_755[iParam0 /*33*/] = unk_0x2AD5F4170F4ACBEB(26, joaat("a_m_m_hillbilly_02"), Param2, iParam5, 1, 1);
			unk_0x7F73E2B58861632F(Local_755[iParam0 /*33*/]);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 0, 0, 2, 0);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 3, 1, 2, 0);
			break;
		
		case 10:
			Local_755[iParam0 /*33*/] = unk_0x2AD5F4170F4ACBEB(26, joaat("a_m_y_methhead_01"), Param2, iParam5, 1, 1);
			unk_0x7F73E2B58861632F(Local_755[iParam0 /*33*/]);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 3, 0, 1, 0);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 4, 0, 1, 0);
			break;
		
		case 11:
			Local_755[iParam0 /*33*/] = unk_0x2AD5F4170F4ACBEB(26, joaat("a_m_m_hillbilly_02"), Param2, iParam5, 1, 1);
			unk_0x7F73E2B58861632F(Local_755[iParam0 /*33*/]);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 2, 2, 0, 0);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 3, 2, 2, 0);
			break;
		
		case 12:
			Local_755[iParam0 /*33*/] = unk_0x2AD5F4170F4ACBEB(26, joaat("a_m_m_hillbilly_01"), Param2, iParam5, 1, 1);
			unk_0x7F73E2B58861632F(Local_755[iParam0 /*33*/]);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 0, 0, 2, 0);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 2, 0, 2, 0);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 3, 1, 2, 0);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 4, 1, 2, 0);
			break;
		
		case 13:
			Local_755[iParam0 /*33*/] = unk_0x2AD5F4170F4ACBEB(26, joaat("a_m_m_hillbilly_02"), Param2, iParam5, 1, 1);
			unk_0x7F73E2B58861632F(Local_755[iParam0 /*33*/]);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 0, 0, 1, 0);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 2, 1, 0, 0);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 3, 1, 1, 0);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 4, 0, 2, 0);
			break;
		
		case 14:
			Local_755[iParam0 /*33*/] = unk_0x2AD5F4170F4ACBEB(26, joaat("a_m_y_methhead_01"), Param2, iParam5, 1, 1);
			unk_0x7F73E2B58861632F(Local_755[iParam0 /*33*/]);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 0, 0, 1, 0);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 3, 0, 2, 0);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 4, 0, 2, 0);
			break;
		
		case 15:
			Local_755[iParam0 /*33*/] = unk_0x2AD5F4170F4ACBEB(26, joaat("a_m_m_hillbilly_02"), Param2, iParam5, 1, 1);
			unk_0x7F73E2B58861632F(Local_755[iParam0 /*33*/]);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 0, 0, 1, 0);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 2, 2, 0, 0);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 4, 0, 2, 0);
			break;
		
		case 16:
			Local_755[iParam0 /*33*/] = unk_0x2AD5F4170F4ACBEB(26, joaat("a_m_y_methhead_01"), Param2, iParam5, 1, 1);
			unk_0x7F73E2B58861632F(Local_755[iParam0 /*33*/]);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 0, 0, 2, 0);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 3, 0, 1, 0);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 4, 1, 1, 0);
			break;
		
		case 17:
			Local_755[iParam0 /*33*/] = unk_0x2AD5F4170F4ACBEB(26, joaat("a_m_m_hillbilly_02"), Param2, iParam5, 1, 1);
			unk_0x7F73E2B58861632F(Local_755[iParam0 /*33*/]);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 0, 0, 2, 0);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 2, 2, 0, 0);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 3, 1, 2, 0);
			unk_0x2F933BB106547968(Local_755[iParam0 /*33*/], 4, 0, 1, 0);
			break;
	}
	if (iLocal_751 > 17)
	{
		Local_755[iParam0 /*33*/] = unk_0x2AD5F4170F4ACBEB(26, joaat("a_m_y_methhead_01"), Param2, iParam5, 1, 1);
		unk_0x38FF4F54BBF14419(Local_755[iParam0 /*33*/], 0);
	}
	iLocal_751++;
	if (Local_755[iParam0 /*33*/].f_1 == 5)
	{
		unk_0xCC61640A821F277C(Local_755[iParam0 /*33*/], 1);
		unk_0x3BB70315907D9456(Local_755[iParam0 /*33*/], iLocal_1617);
	}
	else
	{
		unk_0xC1B7B5C6FDC0755B(Local_755[iParam0 /*33*/], iParam6, 3000, iParam7, 1);
		unk_0x3BB70315907D9456(Local_755[iParam0 /*33*/], iLocal_1616);
		unk_0xCCEA0D9BEB843226(Local_755[iParam0 /*33*/], 1);
		unk_0xC96275575DC981A9(Local_755[iParam0 /*33*/], 9, 1);
		unk_0xB84298F7B203EA5A(Local_755[iParam0 /*33*/], 120f);
		unk_0x9593ABA7B045F264(Local_755[iParam0 /*33*/], 22f);
		unk_0x1247C00E9DC4EDDD(Local_755[iParam0 /*33*/], 22f);
		unk_0x6018E338F7ABCE75(Local_755[iParam0 /*33*/], 118, 0);
		unk_0x601DD91B5FAE848C(Local_755[iParam0 /*33*/], 14, 3f);
		if (Local_755[iParam0 /*33*/].f_1 == 2)
		{
			unk_0xFA4023BBD5BCB8B5(Local_755[iParam0 /*33*/], 12);
		}
		else
		{
			unk_0xFA4023BBD5BCB8B5(Local_755[iParam0 /*33*/], 45);
		}
		unk_0x9DFD53125A4416A3(Local_755[iParam0 /*33*/], 1);
		unk_0x6FE87B0CB5BE8FB1(Local_755[iParam0 /*33*/], 1);
		unk_0xC96275575DC981A9(Local_755[iParam0 /*33*/], 15, 0);
		unk_0xC96275575DC981A9(Local_755[iParam0 /*33*/], 17, 0);
		func_102(Local_755[iParam0 /*33*/], 1);
	}
	unk_0xF084FF26364E8DEF(Local_755[iParam0 /*33*/]);
	unk_0xBDE4C59FD939CE4E(Local_755[iParam0 /*33*/], 1);
	unk_0x1F1174C36C9DE30C(Local_755[iParam0 /*33*/], 0f, 0f, 0f);
	unk_0xCCEFBEC38863B41D(Local_755[iParam0 /*33*/], 1);
	unk_0x6E3CF926D359D531(Local_755[iParam0 /*33*/], 1);
	unk_0x4B04B4FAE554FA03(Local_755[iParam0 /*33*/], 150);
	return 1;
}

void func_102(int iParam0, bool bParam1)
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
			if (Global_55852[iVar0 /*2*/] != 0)
			{
				if (Global_55852[iVar0 /*2*/] == iParam0)
				{
					return;
				}
			}
			iVar0++;
		}
	}
	if (64 == Global_55851)
	{
		return;
	}
	iVar1 = -1;
	iVar2 = 0;
	while (iVar1 == -1 && iVar2 != 64)
	{
		if (Global_55852[iVar2 /*2*/] == 0)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 == -1)
	{
		return;
	}
	Global_55852[iVar1 /*2*/] = iParam0;
	Global_55852[iVar1 /*2*/].f_1 = 7;
	Global_55851++;
}

void func_103(var uParam0, var uParam1, struct<3> Param2, struct<3> Param5, struct<3> Param8, struct<3> Param11, struct<3> Param14, struct<3> Param17, struct<3> Param20, struct<3> Param23, struct<3> Param26, struct<3> Param29)
{
	if (iLocal_52 > 0)
	{
		func_115(uParam0, Param20, Param23, Param14, Param17);
		func_107(uParam0, uParam1, Param2, Param5, Param8);
		func_104(uParam0, Param11, Param14, Param17, Param20, Param23, Param26, Param29);
	}
}

void func_104(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, struct<3> Param13, struct<3> Param16, struct<3> Param19)
{
	if (unk_0x354EBDB72A54F91B())
	{
		if (bLocal_77)
		{
			if (((iLocal_60 > iLocal_68 || iLocal_69 != iLocal_61) || (iLocal_60 < iLocal_68 && iLocal_60 == 8)) || (iLocal_60 == 10 && bLocal_53 == 0))
			{
				iLocal_67 = 1;
				iLocal_68 = iLocal_60;
				iLocal_69 = iLocal_61;
			}
			switch (iLocal_67)
			{
				case 1:
					if (iLocal_61 > -1)
					{
						if (!unk_0xE34CF180A5429DEA((*uParam0)[iLocal_61 /*24*/], 1))
						{
							switch (iLocal_60)
							{
								case 8:
									if (!bLocal_53)
									{
										if (!bLocal_56)
										{
											if (!iLocal_76)
											{
												if (!func_82(Param13.f_1))
												{
													func_88();
													if (func_105(Param13.f_1, Param13.f_2, (*uParam0)[iLocal_61 /*24*/], Param13.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
													{
														iLocal_67 = 2;
													}
												}
											}
											else
											{
												iLocal_67 = 2;
											}
										}
										else if (!func_82(Param10.f_1))
										{
											func_88();
											if (func_105(Param10.f_1, Param10.f_2, (*uParam0)[iLocal_61 /*24*/], Param10.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_67 = 2;
											}
										}
									}
									else
									{
										iLocal_67 = 2;
									}
									break;
								
								case 7:
									iLocal_76 = 0;
									func_88();
									if (func_105(Param1.f_1, Param1.f_2, (*uParam0)[iLocal_61 /*24*/], Param1.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										iLocal_67 = 2;
									}
									break;
								
								case 5:
									iLocal_76 = 0;
									func_88();
									if (func_105(Param16.f_1, Param16.f_2, (*uParam0)[iLocal_61 /*24*/], Param16.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										iLocal_67 = 2;
									}
									break;
								
								case 3:
									if (!bLocal_53 && !iLocal_76)
									{
										func_88();
										if (func_105(Param19.f_1, Param19.f_2, (*uParam0)[iLocal_61 /*24*/], Param19.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											iLocal_67 = 2;
										}
									}
									else
									{
										iLocal_67 = 2;
									}
									break;
								
								case 6:
									if (!bLocal_56)
									{
										if (((!func_82(Param4.f_1) && !func_82(Param7.f_1)) && !func_82(Param10.f_1)) && !func_82(Param13.f_1))
										{
											iLocal_76 = 0;
											func_88();
											if (func_105(Param4.f_1, Param4.f_2, (*uParam0)[iLocal_61 /*24*/], Param4.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_67 = 2;
											}
										}
									}
									else
									{
										iLocal_67 = 2;
									}
									break;
								
								case 10:
								case 9:
									if (!bLocal_56)
									{
										if (((!func_82(Param4.f_1) && !func_82(Param7.f_1)) && !func_82(Param10.f_1)) && !func_82(Param13.f_1))
										{
											iLocal_76 = 0;
											func_88();
											if (func_105(Param7.f_1, Param7.f_2, (*uParam0)[iLocal_61 /*24*/], Param7.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_67 = 2;
											}
										}
									}
									else
									{
										if (!bLocal_53)
										{
											if (func_105(Param10.f_1, Param10.f_2, (*uParam0)[iLocal_61 /*24*/], Param10.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_76 = 0;
												iLocal_67 = 2;
											}
										}
										iLocal_67 = 2;
									}
									break;
							}
						}
						else
						{
							iLocal_67 = 2;
						}
					}
					else
					{
						iLocal_67 = 2;
					}
					break;
				
				case 2:
					if (!func_59())
					{
						iLocal_67 = 0;
					}
					break;
				}
			}
	}
}

int func_105(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, char* sParam12, int iParam13)
{
	func_58(sParam0, iParam1, iParam4, iParam7, iParam10);
	func_106(iParam1, iParam2, sParam3);
	if (iParam4 != -1)
	{
		func_106(iParam4, iParam5, sParam6);
	}
	if (iParam7 != -1)
	{
		func_106(iParam7, iParam8, sParam9);
	}
	if (iParam10 != -1)
	{
		func_106(iParam10, iParam11, sParam12);
	}
	if (!func_53())
	{
		if (!unk_0x75342B3CD0FB5275())
		{
			if (func_36(&Local_89, cLocal_254, sParam0, iParam13, 0, 0, 0))
			{
				iLocal_256 = 0;
				return 1;
			}
			else if (iLocal_255 != unk_0x94E3E074F38DF86C())
			{
				iLocal_256++;
				iLocal_255 = unk_0x94E3E074F38DF86C();
				if (iLocal_256 >= 10)
				{
					iLocal_256 = 0;
					return 1;
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
	return 0;
}

void func_106(int iParam0, int iParam1, char* sParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_78)
	{
		if (iLocal_78[iVar0] == iParam1)
		{
			func_57(&Local_89, iVar0);
			iLocal_78[iVar0] = 0;
		}
		iVar0++;
	}
	if (iLocal_78[iParam0] != 0)
	{
		func_57(&Local_89, iParam0);
	}
	func_56(&Local_89, iParam0, iParam1, sParam2, 0, 1);
	iLocal_78[iParam0] = iParam1;
}

void func_107(var uParam0, var uParam1, struct<3> Param2, struct<3> Param5, struct<3> Param8)
{
	int iVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	int iVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	bool bVar14;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0xE34CF180A5429DEA((*uParam0)[iVar0 /*24*/], 1) && !unk_0x3AA552083DC1AF0A((*uParam0)[iVar0 /*24*/]))
		{
			if (!(uParam0[iVar0 /*24*/])->f_21)
			{
				switch ((uParam0[iVar0 /*24*/])->f_3)
				{
					case 4:
						if ((unk_0xA2E55F41F8746CEB((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_CHAIR") || unk_0xA2E55F41F8746CEB((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_ARMCHAIR")) || unk_0x1F8F07D86DA1A701((*uParam0)[iVar0 /*24*/], 1785177548) == 1)
						{
							if (!unk_0xCA41A00932714525((*uParam0)[iVar0 /*24*/]))
							{
								unk_0x15848523A8959DBC((*uParam0)[iVar0 /*24*/]);
							}
							if (!unk_0xE34CF180A5429DEA((*uParam0)[iVar0 /*24*/], 1))
							{
								unk_0xD4D420EA885FC154((*uParam0)[iVar0 /*24*/]);
							}
						}
						else if (unk_0x1F8F07D86DA1A701((*uParam0)[iVar0 /*24*/], 1647992574) == 7)
						{
							switch ((uParam0[iVar0 /*24*/])->f_4)
							{
								case 0:
									if (!unk_0xE34CF180A5429DEA((*uParam0)[iVar0 /*24*/], 1))
									{
										unk_0xD4D420EA885FC154((*uParam0)[iVar0 /*24*/]);
									}
									if (!unk_0xA2E55F41F8746CEB((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_CHAIR") && !unk_0xA2E55F41F8746CEB((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_ARMCHAIR"))
									{
										if (unk_0xFD0FE723227D5AB6((*uParam0)[iVar0 /*24*/], 0))
										{
											iVar2 = unk_0xFD05A5AA90984873((*uParam0)[iVar0 /*24*/]);
											if (unk_0x45CD66F0A131E554(iVar2, 0))
											{
												if (unk_0x72222684DEA44B9F(iVar2))
												{
													Var3 = { unk_0xACA666C39EA49E82(iVar2) };
													unk_0x394D4A83F07AE208(iVar2);
													unk_0x7B846714372D2EEF(iVar2, Var3);
													unk_0x83150B7E65C16AFE((*uParam0)[iVar0 /*24*/], 0, 0);
												}
											}
										}
										if (!unk_0xFD0FE723227D5AB6((*uParam0)[iVar0 /*24*/], 0))
										{
											switch ((uParam0[iVar0 /*24*/])->f_1)
											{
												case 2:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															if ((uParam0[iVar0 /*24*/])->f_10 >= 0)
															{
																if (unk_0x23E9113C762466ED((*uParam0)[(uParam0[iVar0 /*24*/])->f_10 /*24*/]))
																{
																	fVar1 = func_113((*uParam0)[iVar0 /*24*/], (*uParam0)[(uParam0[iVar0 /*24*/])->f_10 /*24*/]);
																	if (fVar1 > -45f && fVar1 < 45f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 1;
																	}
																	else if (fVar1 > -135f && fVar1 <= -45f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 2;
																	}
																	else if (fVar1 >= 45f && fVar1 <= 135f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 3;
																	}
																	else
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 4;
																	}
																	(uParam0[iVar0 /*24*/])->f_11 = unk_0x94E3E074F38DF86C() + 500;
																}
																else
																{
																	(uParam0[iVar0 /*24*/])->f_1 = 0;
																}
															}
															break;
														
														case 1:
															if (unk_0x94E3E074F38DF86C() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_93();
																unk_0x29DA211B1C795F27(0, 1);
																unk_0xEB1EFACA68933402(0, "misschinese2_bank1", "react_forward_small_intro_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
																unk_0x29DA211B1C795F27(0, 0);
																func_92(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
														
														case 2:
															if (unk_0x94E3E074F38DF86C() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_93();
																unk_0x29DA211B1C795F27(0, 1);
																unk_0xEB1EFACA68933402(0, "misschinese2_bank1", "react_left_small_intro_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
																unk_0x29DA211B1C795F27(0, 0);
																func_92(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
														
														case 3:
															if (unk_0x94E3E074F38DF86C() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_93();
																unk_0x29DA211B1C795F27(0, 1);
																unk_0xEB1EFACA68933402(0, "misschinese2_bank1", "react_right_small_intro_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
																unk_0x29DA211B1C795F27(0, 0);
																func_92(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
														
														case 4:
															if (unk_0x94E3E074F38DF86C() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_93();
																unk_0x29DA211B1C795F27(0, 1);
																unk_0xEB1EFACA68933402(0, "misschinese2_bank1", "react_backward_small_intro_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
																unk_0x29DA211B1C795F27(0, 0);
																func_92(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
													}
													break;
												
												case 7:
													if ((uParam0[iVar0 /*24*/])->f_5 < 2)
													{
														unk_0x15848523A8959DBC((*uParam0)[iVar0 /*24*/]);
														(uParam0[iVar0 /*24*/])->f_5 = iLocal_63;
														iLocal_63++;
														if (iLocal_63 == 2)
														{
															iLocal_63 = 0;
														}
													}
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															unk_0x0B25AB3A7FA0683C((*uParam0)[iVar0 /*24*/], unk_0xF3C119E091C0DFEC((*uParam0)[iVar0 /*24*/], 0), 1);
															func_93();
															if (!unk_0xFD0FE723227D5AB6((*uParam0)[iVar0 /*24*/], 1))
															{
																unk_0x29DA211B1C795F27(0, 1);
																unk_0xEB1EFACA68933402(0, "misschinese2_bank1", "buddy_shot_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
																unk_0x29DA211B1C795F27(0, 0);
															}
															else
															{
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															unk_0x97B2F6B96CC03922(0, 200f, 0);
															func_92(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = unk_0x94E3E074F38DF86C() + 3000;
															break;
														
														case 1:
															func_93();
															unk_0x29DA211B1C795F27(0, 1);
															iVar6 = func_112();
															unk_0x29DA211B1C795F27(0, 0);
															unk_0x97B2F6B96CC03922(0, 200f, 0);
															func_92(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = (unk_0x94E3E074F38DF86C() + iVar6);
															break;
														
														default:
															if (unk_0x5132972D2BBC5A62((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 3))
															{
																if (unk_0x8E978F99E8F731CB((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b") < 0.2f)
																{
																	unk_0x87CD14ED799DFD65((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 0.2f);
																}
															}
															if (unk_0x94E3E074F38DF86C() > (uParam0[iVar0 /*24*/])->f_5)
															{
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
													}
													break;
												
												case 5:
													if ((uParam0[iVar0 /*24*/])->f_5 <= 2)
													{
														(uParam0[iVar0 /*24*/])->f_5 = iLocal_64;
														iLocal_64++;
														if (iLocal_64 == 2)
														{
															iLocal_64 = 0;
														}
													}
													if (!unk_0xFD0FE723227D5AB6((*uParam0)[iVar0 /*24*/], 1))
													{
														switch ((uParam0[iVar0 /*24*/])->f_5)
														{
															case 0:
																unk_0xCC61640A821F277C((*uParam0)[iVar0 /*24*/], 1);
																unk_0xEB1EFACA68933402((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot", 4f, -4f, -1, 8, 0, 0, 0, 0);
																(uParam0[iVar0 /*24*/])->f_5 = 3;
																break;
															
															case 1:
																unk_0xCC61640A821F277C((*uParam0)[iVar0 /*24*/], 1);
																unk_0xEB1EFACA68933402((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 4f, -4f, -1, 8, 0, 0, 0, 0);
																unk_0x0B25AB3A7FA0683C((*uParam0)[iVar0 /*24*/], unk_0xF3C119E091C0DFEC((*uParam0)[iVar0 /*24*/], 0), 1);
																(uParam0[iVar0 /*24*/])->f_5 = 3;
																break;
															
															case 3:
																if (unk_0x5132972D2BBC5A62((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot", 3))
																{
																	if (unk_0x8E978F99E8F731CB((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot") > 0.95f)
																	{
																		if (func_110(iVar0, uParam0, 0))
																		{
																			(uParam0[iVar0 /*24*/])->f_5 = 4;
																		}
																		else
																		{
																			unk_0xEB1EFACA68933402((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_d", 4f, -2f, unk_0x0E29C61F26D96FDB(4000, 6000), 8, 0, 0, 0, 0);
																			(uParam0[iVar0 /*24*/])->f_5 = 6;
																		}
																	}
																}
																if (unk_0x5132972D2BBC5A62((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 3))
																{
																	if (unk_0x8E978F99E8F731CB((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b") > 0.95f)
																	{
																		if (func_110(iVar0, uParam0, 0))
																		{
																			(uParam0[iVar0 /*24*/])->f_5 = 5;
																		}
																		else
																		{
																			unk_0xEB1EFACA68933402((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_e", 4f, -2f, unk_0x0E29C61F26D96FDB(4000, 6000), 8, 0, 0, 0, 0);
																			(uParam0[iVar0 /*24*/])->f_5 = 6;
																		}
																	}
																}
																break;
															
															case 4:
																if (unk_0xE851F22ED3518011((unk_0x638527C9799F2AE4((*uParam0)[iVar0 /*24*/]) - (uParam0[iVar0 /*24*/])->f_18)) < 10f)
																{
																	unk_0xEB1EFACA68933402((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_d", 4f, -2f, unk_0x0E29C61F26D96FDB(6000, 9000), 8, 0, 0, 0, 0);
																	(uParam0[iVar0 /*24*/])->f_5 = 6;
																}
																break;
															
															case 5:
																if (unk_0xE851F22ED3518011((unk_0x638527C9799F2AE4((*uParam0)[iVar0 /*24*/]) - (uParam0[iVar0 /*24*/])->f_18)) < 10f)
																{
																	unk_0xEB1EFACA68933402((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_f", 4f, -2f, unk_0x0E29C61F26D96FDB(6000, 9000), 8, 0, 0, 0, 0);
																	(uParam0[iVar0 /*24*/])->f_5 = 6;
																}
																break;
															
															case 6:
																if (unk_0x1F8F07D86DA1A701((*uParam0)[iVar0 /*24*/], -2017877118) == 7)
																{
																	(uParam0[iVar0 /*24*/])->f_5 = 0;
																	(uParam0[iVar0 /*24*/])->f_4++;
																}
																break;
														}
													}
													else
													{
														(uParam0[iVar0 /*24*/])->f_5 = 0;
														(uParam0[iVar0 /*24*/])->f_4++;
													}
													break;
												
												case 4:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															(uParam0[iVar0 /*24*/])->f_5 = (unk_0x94E3E074F38DF86C() + unk_0x0E29C61F26D96FDB(0, 2000));
															break;
														
														default:
															if (unk_0x94E3E074F38DF86C() > (uParam0[iVar0 /*24*/])->f_5)
															{
																(uParam0[iVar0 /*24*/])->f_3 = 5;
																(uParam0[iVar0 /*24*/])->f_1 = 0;
																(uParam0[iVar0 /*24*/])->f_4 = 0;
															}
															break;
													}
													break;
												
												case 8:
													if ((uParam0[iVar0 /*24*/])->f_3 != 6 && (uParam0[iVar0 /*24*/])->f_3 != 5)
													{
														(uParam0[iVar0 /*24*/])->f_3 = 5;
														(uParam0[iVar0 /*24*/])->f_4 = 0;
													}
													break;
												
												case 10:
													if ((uParam0[iVar0 /*24*/])->f_3 != 6)
													{
														(uParam0[iVar0 /*24*/])->f_3 = 6;
														(uParam0[iVar0 /*24*/])->f_4 = 0;
													}
													break;
												
												case 3:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															(uParam0[iVar0 /*24*/])->f_5 = (unk_0x94E3E074F38DF86C() + unk_0x0E29C61F26D96FDB(0, 2000));
															break;
														
														default:
															if (unk_0x94E3E074F38DF86C() > (uParam0[iVar0 /*24*/])->f_5)
															{
																if ((uParam0[iVar0 /*24*/])->f_3 != 6 && (uParam0[iVar0 /*24*/])->f_3 != 5)
																{
																	(uParam0[iVar0 /*24*/])->f_3 = 5;
																	(uParam0[iVar0 /*24*/])->f_1 = 0;
																	(uParam0[iVar0 /*24*/])->f_4 = 0;
																}
															}
															break;
													}
													break;
												
												case 1:
													iLocal_62 = iVar0;
													if (func_109(iVar0, uParam0, "", Param2, Param5, Param8, 0))
													{
														(uParam0[iVar0 /*24*/])->f_3 = 5;
														(uParam0[iVar0 /*24*/])->f_1 = 0;
														(uParam0[iVar0 /*24*/])->f_4 = 0;
													}
													break;
												
												case 6:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															if (iLocal_65 == 0)
															{
																if (!unk_0xFD0FE723227D5AB6((*uParam0)[iVar0 /*24*/], 1))
																{
																	Var7 = { unk_0x57240623C1BC6E88((*uParam0)[iVar0 /*24*/], 1) };
																	Var10 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
																	fVar13 = unk_0xE471FC6362377F86(((Var10.f_2 - Var7.f_2) / func_4((*uParam0)[iVar0 /*24*/], unk_0x17B5CC8A8615737D(), 0)));
																	if (fVar13 > 20f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 1;
																	}
																	else if (fVar13 < -20f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 2;
																	}
																	else
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 3;
																	}
																}
																else
																{
																	(uParam0[iVar0 /*24*/])->f_3 = 6;
																	(uParam0[iVar0 /*24*/])->f_1 = 10;
																	(uParam0[iVar0 /*24*/])->f_4 = 0;
																}
																iLocal_65++;
															}
															else
															{
																(uParam0[iVar0 /*24*/])->f_3 = 6;
																(uParam0[iVar0 /*24*/])->f_1 = 10;
																(uParam0[iVar0 /*24*/])->f_4 = 0;
															}
															break;
														
														case 1:
															func_93();
															unk_0x29DA211B1C795F27(0, 1);
															unk_0x6349785089ED32B4(0, unk_0x17B5CC8A8615737D(), 1000);
															unk_0xEB1EFACA68933402(0, "misschinese2_bank1", "spot_high", 4f, -8f, -1, 0, 0, 0, 0, 0);
															unk_0x29DA211B1C795F27(0, 0);
															func_92(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = 4;
															break;
														
														case 2:
															func_93();
															unk_0x29DA211B1C795F27(0, 1);
															unk_0x6349785089ED32B4(0, unk_0x17B5CC8A8615737D(), 1000);
															unk_0xEB1EFACA68933402(0, "misschinese2_bank1", "spot_low", 4f, -8f, -1, 0, 0, 0, 0, 0);
															unk_0x29DA211B1C795F27(0, 0);
															func_92(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = 4;
															break;
														
														case 3:
															func_93();
															unk_0x29DA211B1C795F27(0, 1);
															unk_0x6349785089ED32B4(0, unk_0x17B5CC8A8615737D(), 1000);
															unk_0xEB1EFACA68933402(0, "misschinese2_bank1", "spot_mid", 4f, -8f, -1, 0, 0, 0, 0, 0);
															unk_0x29DA211B1C795F27(0, 0);
															func_92(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = 4;
															break;
														
														case 4:
															if (bLocal_56)
															{
																if (unk_0xE851F22ED3518011(func_113((*uParam0)[iVar0 /*24*/], unk_0x17B5CC8A8615737D())) < 20f)
																{
																	if (unk_0x5132972D2BBC5A62((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_high", 3))
																	{
																		if (unk_0x8E978F99E8F731CB((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_high") > func_108(((func_4((*uParam0)[iVar0 /*24*/], unk_0x17B5CC8A8615737D(), 1) + 5f) / 35f), 0.27f, 0.9f))
																		{
																			(uParam0[iVar0 /*24*/])->f_3 = 6;
																			(uParam0[iVar0 /*24*/])->f_1 = 10;
																			(uParam0[iVar0 /*24*/])->f_4 = 0;
																		}
																	}
																	if (unk_0x5132972D2BBC5A62((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_mid", 3))
																	{
																		if (unk_0x8E978F99E8F731CB((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_mid") > func_108(((func_4((*uParam0)[iVar0 /*24*/], unk_0x17B5CC8A8615737D(), 1) + 5f) / 35f), 0.27f, 0.9f))
																		{
																			(uParam0[iVar0 /*24*/])->f_3 = 6;
																			(uParam0[iVar0 /*24*/])->f_1 = 10;
																			(uParam0[iVar0 /*24*/])->f_4 = 0;
																		}
																	}
																	if (unk_0x5132972D2BBC5A62((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_low", 3))
																	{
																		if (unk_0x8E978F99E8F731CB((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_low") > func_108(((func_4((*uParam0)[iVar0 /*24*/], unk_0x17B5CC8A8615737D(), 1) + 5f) / 35f), 0.27f, 0.9f))
																		{
																			(uParam0[iVar0 /*24*/])->f_3 = 6;
																			(uParam0[iVar0 /*24*/])->f_1 = 10;
																			(uParam0[iVar0 /*24*/])->f_4 = 0;
																		}
																	}
																}
																else
																{
																	(uParam0[iVar0 /*24*/])->f_3 = 6;
																	(uParam0[iVar0 /*24*/])->f_1 = 10;
																	(uParam0[iVar0 /*24*/])->f_4 = 0;
																}
															}
															break;
													}
													break;
											}
										}
										else
										{
											(uParam0[iVar0 /*24*/])->f_4++;
										}
									}
									break;
								
								case 1:
									if (!(uParam0[iVar0 /*24*/])->f_21)
									{
										if (unk_0x5132972D2BBC5A62((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot", 3))
										{
											bVar14 = true;
											if (unk_0x8E978F99E8F731CB((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot") > 0.9f)
											{
												bVar14 = false;
											}
										}
										if (unk_0x5132972D2BBC5A62((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 3))
										{
											bVar14 = true;
											if (unk_0x8E978F99E8F731CB((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b") > 0.9f)
											{
												bVar14 = false;
											}
										}
										if (unk_0x5132972D2BBC5A62((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "reaction_forward_big_intro_a", 3))
										{
											bVar14 = true;
											if (unk_0x8E978F99E8F731CB((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "reaction_forward_big_intro_a") > 0.9f)
											{
												bVar14 = false;
											}
										}
										if (unk_0x5132972D2BBC5A62((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_body", 3))
										{
											bVar14 = true;
											if (unk_0x8E978F99E8F731CB((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_body") > 0.9f)
											{
												bVar14 = false;
											}
										}
										if (unk_0x5132972D2BBC5A62((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_forward_small_intro_a", 3))
										{
											bVar14 = true;
											if (unk_0x8E978F99E8F731CB((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_forward_small_intro_a") > 0.9f)
											{
												bVar14 = false;
											}
										}
										if (unk_0x5132972D2BBC5A62((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_backward_small_intro_a", 3))
										{
											bVar14 = true;
											if (unk_0x8E978F99E8F731CB((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_backward_small_intro_a") > 0.9f)
											{
												bVar14 = false;
											}
										}
										if (unk_0x5132972D2BBC5A62((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_left_small_intro_a", 3))
										{
											bVar14 = true;
											if (unk_0x8E978F99E8F731CB((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_left_small_intro_a") > 0.9f)
											{
												bVar14 = false;
											}
										}
										if (unk_0x5132972D2BBC5A62((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_right_small_intro_a", 3))
										{
											bVar14 = true;
											if (unk_0x8E978F99E8F731CB((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_right_small_intro_a") > 0.9f)
											{
												bVar14 = false;
											}
										}
										if (!bVar14)
										{
											(uParam0[iVar0 /*24*/])->f_4 = 2;
											(uParam0[iVar0 /*24*/])->f_5 = unk_0x94E3E074F38DF86C() + 2000;
											unk_0x7DD7196E1A0C1D43((*uParam0)[iVar0 /*24*/], unk_0x17B5CC8A8615737D(), 0, 16);
											unk_0x4114B83B329702FF((*uParam0)[iVar0 /*24*/], 1);
											unk_0xE1F5F70A15CF94CB((*uParam0)[iVar0 /*24*/], 1);
										}
									}
									break;
								
								case 2:
									if (unk_0x94E3E074F38DF86C() > (uParam0[iVar0 /*24*/])->f_5)
									{
										(uParam0[iVar0 /*24*/])->f_3 = 5;
										(uParam0[iVar0 /*24*/])->f_1 = 0;
										(uParam0[iVar0 /*24*/])->f_4 = 0;
									}
									break;
								}
						}
						break;
					
					case 5:
					case 6:
						if (unk_0xA2E55F41F8746CEB((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_CHAIR") || unk_0x0B1B005A46EF4C32((*uParam0)[iVar0 /*24*/]))
						{
							if (!unk_0xCA41A00932714525((*uParam0)[iVar0 /*24*/]))
							{
								unk_0x15848523A8959DBC((*uParam0)[iVar0 /*24*/]);
							}
						}
						else
						{
							switch ((uParam0[iVar0 /*24*/])->f_4)
							{
								case 0:
									(uParam0[iVar0 /*24*/])->f_11 = 0;
									if ((iVar0 == 12 || iVar0 == 13) || iVar0 == 14)
									{
									}
									unk_0x0B25AB3A7FA0683C((*uParam0)[iVar0 /*24*/], unk_0xF3C119E091C0DFEC((*uParam0)[iVar0 /*24*/], 0), 1);
									unk_0xCC61640A821F277C((*uParam0)[iVar0 /*24*/], 0);
									unk_0x7CEB7C943DD6C8EF((*uParam0)[iVar0 /*24*/]);
									unk_0xC96275575DC981A9((*uParam0)[iVar0 /*24*/], 50, 1);
									unk_0xB195EE9DB37DA7F2((*uParam0)[iVar0 /*24*/], 512, 1);
									(uParam0[iVar0 /*24*/])->f_4++;
									break;
								
								case 1:
									if (!(uParam0[iVar0 /*24*/])->f_20)
									{
										*(uParam1[0 /*3*/]) = { *(uParam1[0 /*3*/]) };
										iLocal_66 = iLocal_66;
										uLocal_70 = uLocal_70;
										unk_0x7DD7196E1A0C1D43((*uParam0)[iVar0 /*24*/], unk_0x17B5CC8A8615737D(), 0, 16);
										unk_0x4114B83B329702FF((*uParam0)[iVar0 /*24*/], 1);
										unk_0xE1F5F70A15CF94CB((*uParam0)[iVar0 /*24*/], 1);
										(uParam0[iVar0 /*24*/])->f_4++;
										(uParam0[iVar0 /*24*/])->f_11 = (unk_0x94E3E074F38DF86C() + unk_0x0E29C61F26D96FDB(20000, 35000));
									}
									break;
								}
						}
						break;
					}
				}
		}
		iVar0++;
	}
}

float func_108(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 < fParam1)
	{
		return fParam1;
	}
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	return fParam0;
}

int func_109(int iParam0, var uParam1, char* sParam2, struct<3> Param3, struct<3> Param6, struct<3> Param9, bool bParam12)
{
	switch ((uParam1[iParam0 /*24*/])->f_5)
	{
		case 0:
			if (!unk_0x6A7B0D91FD88D9EE("chi2_hear", Param3.f_1))
			{
				if (func_59())
				{
					if (!func_82(Param3.f_1))
					{
						func_85();
					}
				}
				if (func_105(Param3.f_1, Param3.f_2, (*uParam1)[iParam0 /*24*/], Param3.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
				{
					(uParam1[iParam0 /*24*/])->f_12 = { unk_0x57240623C1BC6E88((*uParam1)[iParam0 /*24*/], 1) };
					(uParam1[iParam0 /*24*/])->f_18 = unk_0x638527C9799F2AE4((*uParam1)[iParam0 /*24*/]);
					(uParam1[iParam0 /*24*/])->f_5 = 0;
					(uParam1[iParam0 /*24*/])->f_5++;
					(uParam1[iParam0 /*24*/])->f_11 = unk_0x94E3E074F38DF86C() + 1000;
				}
			}
			else
			{
				(uParam1[iParam0 /*24*/])->f_12 = { unk_0x57240623C1BC6E88((*uParam1)[iParam0 /*24*/], 1) };
				(uParam1[iParam0 /*24*/])->f_18 = unk_0x638527C9799F2AE4((*uParam1)[iParam0 /*24*/]);
				(uParam1[iParam0 /*24*/])->f_5++;
			}
			break;
		
		case 1:
			if (unk_0x94E3E074F38DF86C() > (uParam1[iParam0 /*24*/])->f_11)
			{
				unk_0x9F7BF6124414BCF4((*uParam1)[iParam0 /*24*/], unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 5000);
				(uParam1[iParam0 /*24*/])->f_5++;
				(uParam1[iParam0 /*24*/])->f_11 = unk_0x94E3E074F38DF86C() + 5000;
			}
			break;
		
		case 2:
			if (!unk_0x6A7B0D91FD88D9EE("chi2_hear", Param3.f_1))
			{
				if ((unk_0xAD0529AB45195362(unk_0xBE369BE1BC57A796(), (*uParam1)[iParam0 /*24*/]) || iLocal_75 == 1) && func_67((*uParam1)[iParam0 /*24*/], (uParam1[iParam0 /*24*/])->f_12, 1) < (uParam1[iParam0 /*24*/])->f_19)
				{
					if (unk_0x94E3E074F38DF86C() > ((uParam1[iParam0 /*24*/])->f_11 - 3000))
					{
						unk_0x084522380FECC554((*uParam1)[iParam0 /*24*/], unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 1f, 20000, 0.1f, 0, 1193033728);
						(uParam1[iParam0 /*24*/])->f_15 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
						(uParam1[iParam0 /*24*/])->f_5 = 5;
					}
				}
				else if (unk_0x94E3E074F38DF86C() > (uParam1[iParam0 /*24*/])->f_11)
				{
					if (func_105(Param9.f_1, Param9.f_2, (*uParam1)[iParam0 /*24*/], Param9.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						if (bParam12)
						{
						}
						(uParam1[iParam0 /*24*/])->f_5++;
					}
				}
			}
			else if (unk_0x94E3E074F38DF86C() > (uParam1[iParam0 /*24*/])->f_11)
			{
				unk_0x3DB139C144156433((*uParam1)[iParam0 /*24*/], (uParam1[iParam0 /*24*/])->f_18, 2000);
				(uParam1[iParam0 /*24*/])->f_5 = 4;
			}
			break;
		
		case 3:
			func_93();
			unk_0x084522380FECC554(0, (uParam1[iParam0 /*24*/])->f_12, 1f, 20000, 0.2f, 4096, 1193033728);
			unk_0x3DB139C144156433(0, (uParam1[iParam0 /*24*/])->f_18, 2000);
			func_92(uParam1[iParam0 /*24*/], 0);
			(uParam1[iParam0 /*24*/])->f_11 = unk_0x94E3E074F38DF86C() + 3000;
			(uParam1[iParam0 /*24*/])->f_5++;
			break;
		
		case 4:
			if (unk_0x1F8F07D86DA1A701((*uParam1)[iParam0 /*24*/], 242628503) == 7 || (unk_0x6A7B0D91FD88D9EE("chi2_hear", Param3.f_1) && unk_0x1F8F07D86DA1A701((*uParam1)[iParam0 /*24*/], 1920390111) == 7))
			{
				if (!unk_0x6A7B0D91FD88D9EE(sParam2, ""))
				{
					unk_0xBD415ADB0A08F6EF((*uParam1)[iParam0 /*24*/], sParam2, 0, 1);
				}
				(uParam1[iParam0 /*24*/])->f_4 = 0;
				(uParam1[iParam0 /*24*/])->f_5 = 0;
				(uParam1[iParam0 /*24*/])->f_1 = 0;
				(uParam1[iParam0 /*24*/])->f_2 = 0;
				if (unk_0x6A7B0D91FD88D9EE("chi2_hear", Param3.f_1))
				{
					(uParam1[iParam0 /*24*/])->f_3 = 3;
				}
				else
				{
					(uParam1[iParam0 /*24*/])->f_3 = 2;
				}
				iLocal_62 = -1;
			}
			break;
		
		case 5:
			if (func_105(Param3.f_1, Param6.f_2, (*uParam1)[iParam0 /*24*/], Param3.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
			{
				(uParam1[iParam0 /*24*/])->f_5++;
			}
			break;
		
		case 6:
			if (func_67((*uParam1)[iParam0 /*24*/], (uParam1[iParam0 /*24*/])->f_15, 1) < 2f || unk_0x1F8F07D86DA1A701((*uParam1)[iParam0 /*24*/], 713668775) == 7)
			{
				if (!unk_0xCA41A00932714525((*uParam1)[iParam0 /*24*/]))
				{
					unk_0x15848523A8959DBC((*uParam1)[iParam0 /*24*/]);
					func_93();
					unk_0x0D322CDF37087C0E(0, unk_0x854ED33E6D715648((*uParam1)[iParam0 /*24*/], -5f, 3f, 0f), 2500, 0, 2);
					unk_0x0D322CDF37087C0E(0, unk_0x854ED33E6D715648((*uParam1)[iParam0 /*24*/], 5f, 3f, 0f), 2500, 0, 2);
					func_92(uParam1[iParam0 /*24*/], 0);
					(uParam1[iParam0 /*24*/])->f_11 = unk_0x94E3E074F38DF86C() + 3000;
					(uParam1[iParam0 /*24*/])->f_5 = 2;
				}
			}
			break;
	}
	return 0;
}

int func_110(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar1 = 1000f;
	iVar3 = -1;
	if (!unk_0xE34CF180A5429DEA((*uParam1)[iParam0 /*24*/], 1))
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (unk_0xE34CF180A5429DEA((*uParam1)[iVar0 /*24*/], 1) && unk_0x23E9113C762466ED((*uParam1)[iVar0 /*24*/]))
			{
				fVar2 = func_4((*uParam1)[iVar0 /*24*/], (*uParam1)[iParam0 /*24*/], 1);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iVar3 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar3 == -1)
		{
			return 0;
		}
		else
		{
			(uParam1[iParam0 /*24*/])->f_18 = func_113((*uParam1)[iParam0 /*24*/], (*uParam1)[iVar3 /*24*/]);
			if (unk_0xE851F22ED3518011((uParam1[iParam0 /*24*/])->f_18) > 20f)
			{
				if (bParam2)
				{
					unk_0x6349785089ED32B4(0, (*uParam1)[iVar3 /*24*/], 0);
				}
				else
				{
					unk_0x6349785089ED32B4((*uParam1)[iParam0 /*24*/], (*uParam1)[iVar3 /*24*/], 0);
				}
				(uParam1[iParam0 /*24*/])->f_18 = func_111((*uParam1)[iParam0 /*24*/], (*uParam1)[iVar3 /*24*/], 1);
				return 1;
			}
		}
	}
	return 0;
}

float func_111(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0x57240623C1BC6E88(iParam0, 0) };
	Var3 = { unk_0x57240623C1BC6E88(iParam1, 0) };
	return func_96(Var0, Var3, iParam2);
}

int func_112()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = -1;
	unk_0xEB1EFACA68933402(0, "misschinese2_bank1", "reaction_forward_big_intro_a", 4f, -2f, 1400, 0, 0, 0, 0, 0);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar2 = unk_0x0E29C61F26D96FDB(0, 3);
		iVar3 = unk_0x0E29C61F26D96FDB(1100, 1800);
		iVar4 = (iVar4 + iVar3);
		if (iVar2 == iVar1)
		{
			iVar2++;
			if (iVar2 > 2)
			{
				iVar2 = 0;
			}
		}
		iVar1 = iVar2;
		switch (iVar2)
		{
			case 0:
				iVar2 = unk_0x0E29C61F26D96FDB(0, 4);
				switch (iVar2)
				{
					case 0:
						unk_0xEB1EFACA68933402(0, "reaction@male_stand@big_intro@left", "reaction_left_big_intro_a", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 1:
						unk_0xEB1EFACA68933402(0, "reaction@male_stand@big_intro@left", "reaction_left_big_intro_b", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 2:
						unk_0xEB1EFACA68933402(0, "reaction@male_stand@big_intro@left", "reaction_left_big_intro_c", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
				}
				break;
			
			case 1:
				iVar2 = unk_0x0E29C61F26D96FDB(0, 4);
				switch (iVar2)
				{
					case 0:
						unk_0xEB1EFACA68933402(0, "reaction@male_stand@big_intro@right", "reaction_right_big_intro_a", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 1:
						unk_0xEB1EFACA68933402(0, "reaction@male_stand@big_intro@right", "reaction_right_big_intro_b", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 2:
						unk_0xEB1EFACA68933402(0, "reaction@male_stand@big_intro@right", "reaction_right_big_intro_c", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
				}
				break;
			
			case 2:
				iVar2 = unk_0x0E29C61F26D96FDB(0, 4);
				switch (iVar2)
				{
					case 0:
						unk_0xEB1EFACA68933402(0, "reaction@male_stand@big_intro@backward", "reaction_backward_big_intro_a", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 1:
						unk_0xEB1EFACA68933402(0, "reaction@male_stand@big_intro@backward", "reaction_backward_big_intro_b", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 2:
						unk_0xEB1EFACA68933402(0, "reaction@male_stand@big_intro@backward", "reaction_backward_big_intro_c", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
				}
				break;
		}
		iVar0++;
	}
	return iVar4;
}

float func_113(int iParam0, int iParam1)
{
	if (unk_0x23E9113C762466ED(iParam0) && unk_0x23E9113C762466ED(iParam1))
	{
		return func_114(iParam0, unk_0x57240623C1BC6E88(iParam1, 0));
	}
	return 0f;
}

float func_114(int iParam0, struct<3> Param1)
{
	float fVar0;
	
	if (unk_0x23E9113C762466ED(iParam0))
	{
		if (!unk_0xA929B2923D14E2F8(iParam0, 0))
		{
			fVar0 = func_96(unk_0x57240623C1BC6E88(iParam0, 0), Param1, 1);
			return (fVar0 - unk_0x638527C9799F2AE4(iParam0));
		}
	}
	return 0f;
}

void func_115(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, struct<2> Param7, var uParam9, struct<2> Param10, var uParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	float fVar16;
	int iVar17;
	
	if (!bLocal_53 == 1)
	{
		bLocal_258 = false;
		if (unk_0x1B30FA4AAC96F398(unk_0x17B5CC8A8615737D()) || unk_0x79888727131C6854(0, 24))
		{
			iVar0 = 0;
			while (iVar0 < *uParam0)
			{
				if (!unk_0xE34CF180A5429DEA((*uParam0)[iVar0 /*24*/], 1))
				{
					iVar1++;
				}
				iVar0++;
			}
			if (iLocal_259 == 0)
			{
				iLocal_259 = iVar1;
			}
			if (iVar1 < iLocal_259)
			{
				iLocal_259 = iVar1;
				bLocal_258 = true;
			}
		}
		iVar2 = 4;
		while (iVar2 > 0)
		{
			if (!unk_0xE34CF180A5429DEA((*uParam0)[iLocal_58 /*24*/], 1))
			{
				if ((uParam0[iLocal_58 /*24*/])->f_3 > 3 && (uParam0[iLocal_58 /*24*/])->f_1 > 1)
				{
					iVar0 = 0;
					while (iVar0 < *uParam0)
					{
						if (!unk_0xE34CF180A5429DEA((*uParam0)[iVar0 /*24*/], 1))
						{
							if (iVar0 != iLocal_58)
							{
								if ((uParam0[iVar0 /*24*/])->f_3 <= 4)
								{
									if (func_4((*uParam0)[iVar0 /*24*/], (*uParam0)[iLocal_58 /*24*/], 1) < 8f)
									{
										if ((unk_0xF34287B610CF02CA((*uParam0)[iLocal_58 /*24*/]) != 0 && unk_0xF34287B610CF02CA((*uParam0)[iVar0 /*24*/]) != 0) || (unk_0xF34287B610CF02CA((*uParam0)[iLocal_58 /*24*/]) == 0 && unk_0xF34287B610CF02CA((*uParam0)[iVar0 /*24*/]) == 0))
										{
											Var3 = { unk_0x57240623C1BC6E88((*uParam0)[iVar0 /*24*/], 1) };
											Var6 = { unk_0x57240623C1BC6E88((*uParam0)[iLocal_58 /*24*/], 0) };
											if (unk_0xE851F22ED3518011((Var3.f_2 - Var6.f_2)) < 2f)
											{
												(uParam0[iVar0 /*24*/])->f_7 = 1;
												(uParam0[iVar0 /*24*/])->f_10 = iLocal_58;
											}
										}
									}
								}
							}
						}
						iVar0++;
					}
				}
				else
				{
					fVar9 = 10f;
					fVar10 = 11f;
					(uParam0[iLocal_58 /*24*/])->f_22 = -1;
					(uParam0[iLocal_58 /*24*/])->f_23 = -1;
					iVar0 = 0;
					while (iVar0 < *uParam0)
					{
						if (iVar0 != iLocal_58)
						{
							if (unk_0x23E9113C762466ED((*uParam0)[iVar0 /*24*/]))
							{
								fVar11 = func_4((*uParam0)[iVar0 /*24*/], (*uParam0)[iLocal_58 /*24*/], 1);
								if (fVar11 < 10f)
								{
									fVar12 = func_113((*uParam0)[iLocal_58 /*24*/], (*uParam0)[iVar0 /*24*/]);
									if (fVar12 > -90f && fVar12 < 90f)
									{
										if (fVar11 < fVar9)
										{
											(uParam0[iLocal_58 /*24*/])->f_23 = (uParam0[iLocal_58 /*24*/])->f_22;
											(uParam0[iLocal_58 /*24*/])->f_22 = iVar0;
											fVar10 = fVar9;
											fVar9 = fVar11;
										}
										else if (fVar11 < fVar10)
										{
											fVar10 = fVar11;
											(uParam0[iLocal_58 /*24*/])->f_23 = iVar0;
										}
									}
								}
							}
						}
						iVar0++;
					}
				}
			}
			iLocal_58++;
			if (iLocal_58 >= *uParam0)
			{
				iLocal_58 = 0;
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (unk_0x8EC3C2BC25ED8ECA(unk_0x17B5CC8A8615737D()))
	{
		iVar13 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
		if (unk_0x45CD66F0A131E554(iVar13, 0))
		{
			if (unk_0x5DEB532E62B5680C(iVar13))
			{
				iVar14 = 1;
			}
		}
	}
	if (unk_0x3C04DDC5730997E5(-1, Local_71, fLocal_74))
	{
		bLocal_54 = true;
	}
	if (!iLocal_55)
	{
		if (func_82(Param1.f_1) || func_82(Param4.f_1))
		{
			iLocal_59 = unk_0x94E3E074F38DF86C() + 1000;
			iLocal_55 = 1;
		}
		if (func_82(Param7.f_1) || func_82(Param10.f_1))
		{
			iLocal_59 = unk_0x94E3E074F38DF86C() + 1000;
			iLocal_55 = 1;
		}
	}
	else if (((!func_82(Param1.f_1) && !func_82(Param4.f_1)) && !func_82(Param7.f_1)) && !func_82(Param10.f_1))
	{
		iLocal_55 = 0;
	}
	else if (unk_0x94E3E074F38DF86C() > iLocal_59)
	{
		if (func_82(Param1.f_1) || func_82(Param4.f_1))
		{
			bLocal_53 = true;
		}
		if (func_82(Param7.f_1) || func_82(Param10.f_1))
		{
			bLocal_56 = true;
		}
	}
	iLocal_60 = 0;
	iVar15 = -1;
	fVar16 = 13f;
	iLocal_57 = 0;
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		iVar17 = unk_0xFD05A5AA90984873(unk_0x17B5CC8A8615737D());
	}
	if (iLocal_62 == -1)
	{
		iLocal_75 = 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0xE34CF180A5429DEA((*uParam0)[iVar0 /*24*/], 1))
		{
			if ((uParam0[iVar0 /*24*/])->f_3 != 7)
			{
				(uParam0[iVar0 /*24*/])->f_2 = (uParam0[iVar0 /*24*/])->f_1;
				(uParam0[iVar0 /*24*/])->f_1 = 0;
				if ((uParam0[iVar0 /*24*/])->f_3 <= 4)
				{
					if (iLocal_62 == -1)
					{
						if (unk_0x45CD66F0A131E554(iVar17, 0))
						{
							if (unk_0x5DEB532E62B5680C(iVar17))
							{
								iLocal_75 = 1;
								fVar16 = 20f;
							}
							if (unk_0xA06AE352748BB860(iVar17))
							{
								iLocal_75 = 1;
								fVar16 = 50f;
							}
						}
						if (unk_0xAD0529AB45195362(unk_0xBE369BE1BC57A796(), (*uParam0)[iVar0 /*24*/]) || (unk_0x45CD66F0A131E554(iVar17, 0) && unk_0x5DEB532E62B5680C(iVar17)))
						{
							if (func_4(unk_0x17B5CC8A8615737D(), (*uParam0)[iVar0 /*24*/], 1) < fVar16)
							{
								if ((uParam0[iVar0 /*24*/])->f_8)
								{
									if (unk_0xF34287B610CF02CA(unk_0x17B5CC8A8615737D()) == unk_0xF34287B610CF02CA((*uParam0)[iVar0 /*24*/]))
									{
										fVar16 = func_4(unk_0x17B5CC8A8615737D(), (*uParam0)[iVar0 /*24*/], 1);
										iVar15 = iVar0;
										(uParam0[iVar0 /*24*/])->f_1 = 1;
										(uParam0[iVar0 /*24*/])->f_19 = (fVar16 + 5f);
									}
								}
							}
						}
					}
					if ((uParam0[iVar0 /*24*/])->f_7)
					{
						(uParam0[iVar0 /*24*/])->f_7 = 0;
						(uParam0[iVar0 /*24*/])->f_1 = 2;
					}
					if (bLocal_54)
					{
						(uParam0[iVar0 /*24*/])->f_1 = 3;
					}
					if (bLocal_53)
					{
						(uParam0[iVar0 /*24*/])->f_1 = 4;
					}
					if (bLocal_258)
					{
					}
					if (!bLocal_258 && !unk_0x7F4AE93855973529((*uParam0)[iVar0 /*24*/]))
					{
						if (unk_0xE82C1D96F3EA52AF((*uParam0)[iVar0 /*24*/], 123))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
						if (unk_0x080A2F4FECE019B1((*uParam0)[iVar0 /*24*/], 123))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
							if (unk_0xE82C1D96F3EA52AF((*uParam0)[iVar0 /*24*/], 17))
							{
							}
						}
						if ((uParam0[iVar0 /*24*/])->f_9)
						{
							if (unk_0x5193E99B6917C701(unk_0x57240623C1BC6E88((*uParam0)[iVar0 /*24*/], 1), 4f, 1, 1))
							{
								(uParam0[iVar0 /*24*/])->f_1 = 7;
							}
						}
						else if (unk_0x5193E99B6917C701(unk_0x57240623C1BC6E88((*uParam0)[iVar0 /*24*/], 1), 6f, 1, 1))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
						if (unk_0xE82C1D96F3EA52AF((*uParam0)[iVar0 /*24*/], 124))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
						if (unk_0x579A94EB2BF9398F(unk_0x57240623C1BC6E88((*uParam0)[iVar0 /*24*/], 1), 1f, 1))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
					}
					if ((uParam0[iVar0 /*24*/])->f_3 < 4)
					{
						if ((uParam0[iVar0 /*24*/])->f_22 != -1)
						{
							if (unk_0x23E9113C762466ED((*uParam0)[(uParam0[iVar0 /*24*/])->f_22 /*24*/]))
							{
								if (unk_0xE34CF180A5429DEA((*uParam0)[(uParam0[iVar0 /*24*/])->f_22 /*24*/], 1))
								{
									if (unk_0xBFA45A07A3FB8280((*uParam0)[iVar0 /*24*/], (*uParam0)[(uParam0[iVar0 /*24*/])->f_22 /*24*/]))
									{
										(uParam0[iVar0 /*24*/])->f_1 = 5;
									}
								}
							}
						}
						if ((uParam0[iVar0 /*24*/])->f_23 != -1)
						{
							if (unk_0x23E9113C762466ED((*uParam0)[(uParam0[iVar0 /*24*/])->f_23 /*24*/]))
							{
								if (unk_0xE34CF180A5429DEA((*uParam0)[(uParam0[iVar0 /*24*/])->f_23 /*24*/], 1))
								{
									if (unk_0xBFA45A07A3FB8280((*uParam0)[iVar0 /*24*/], (*uParam0)[(uParam0[iVar0 /*24*/])->f_23 /*24*/]))
									{
										(uParam0[iVar0 /*24*/])->f_1 = 5;
									}
								}
							}
						}
					}
				}
				if ((uParam0[iVar0 /*24*/])->f_3 <= 5)
				{
					if ((uParam0[iVar0 /*24*/])->f_1 == 0)
					{
						if ((uParam0[iVar0 /*24*/])->f_3 > 4 || unk_0x018477A7947BC4B4((*uParam0)[iVar0 /*24*/], 0))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 8;
						}
					}
					if (((unk_0xE82C1D96F3EA52AF((*uParam0)[iVar0 /*24*/], 1) || unk_0x080A2F4FECE019B1((*uParam0)[iVar0 /*24*/], 1)) || (unk_0x018477A7947BC4B4((*uParam0)[iVar0 /*24*/], 0) && unk_0x3D27B054244F08CD((*uParam0)[iVar0 /*24*/], unk_0x17B5CC8A8615737D()))) || (func_116((*uParam0)[iVar0 /*24*/]) && unk_0x080A2F4FECE019B1((*uParam0)[iVar0 /*24*/], 1)))
					{
						if ((uParam0[iVar0 /*24*/])->f_3 > 4)
						{
							(uParam0[iVar0 /*24*/])->f_1 = 9;
						}
						else
						{
							(uParam0[iVar0 /*24*/])->f_1 = 6;
						}
					}
				}
				if (iVar14 && func_4(unk_0x17B5CC8A8615737D(), (*uParam0)[iVar0 /*24*/], 1) < 50f)
				{
					(uParam0[iVar0 /*24*/])->f_1 = 6;
				}
				if ((uParam0[iVar0 /*24*/])->f_3 <= 6)
				{
					if (bLocal_56)
					{
						(uParam0[iVar0 /*24*/])->f_1 = 10;
					}
				}
				if ((uParam0[iVar0 /*24*/])->f_1 <= (uParam0[iVar0 /*24*/])->f_2)
				{
					(uParam0[iVar0 /*24*/])->f_1 = (uParam0[iVar0 /*24*/])->f_2;
				}
				else
				{
					(uParam0[iVar0 /*24*/])->f_3 = 4;
					(uParam0[iVar0 /*24*/])->f_4 = 0;
					(uParam0[iVar0 /*24*/])->f_5 = 0;
				}
				if ((uParam0[iVar0 /*24*/])->f_1 > iLocal_60)
				{
					iLocal_60 = (uParam0[iVar0 /*24*/])->f_1;
					iLocal_61 = iVar0;
				}
			}
			else
			{
				(uParam0[iVar0 /*24*/])->f_3 = 0;
				(uParam0[iVar0 /*24*/])->f_1 = 0;
			}
			if ((uParam0[iVar0 /*24*/])->f_3 > 3)
			{
				iLocal_57 = 1;
			}
		}
		iVar0++;
	}
	if (iLocal_62 == -1)
	{
		if (iVar15 != -1)
		{
			if (1 > (uParam0[iVar15 /*24*/])->f_1)
			{
				(uParam0[iVar15 /*24*/])->f_1 = 1;
				iLocal_62 = iVar15;
			}
		}
	}
	else if (unk_0xE34CF180A5429DEA((*uParam0)[iLocal_62 /*24*/], 1))
	{
		iLocal_62 = -1;
	}
}

int func_116(var uParam0)
{
	if (unk_0x5132972D2BBC5A62(uParam0, "misschinese2_bank1", "alert_gunshot", 3))
	{
		return 1;
	}
	if (unk_0x5132972D2BBC5A62(uParam0, "misschinese2_bank1", "buddy_shot_b", 3))
	{
		return 1;
	}
	if (unk_0x5132972D2BBC5A62(uParam0, "misschinese2_bank1", "reaction_forward_big_intro_a", 3))
	{
		return 1;
	}
	if (unk_0x5132972D2BBC5A62(uParam0, "misschinese2_bank1", "alert_body", 3))
	{
		return 1;
	}
	if (unk_0x5132972D2BBC5A62(uParam0, "misschinese2_bank1", "react_forward_small_intro_a", 3))
	{
		return 1;
	}
	if (unk_0x5132972D2BBC5A62(uParam0, "misschinese2_bank1", "react_backward_small_intro_a", 3))
	{
		return 1;
	}
	if (unk_0x5132972D2BBC5A62(uParam0, "misschinese2_bank1", "react_left_small_intro_a", 3))
	{
		return 1;
	}
	if (unk_0x5132972D2BBC5A62(uParam0, "misschinese2_bank1", "react_right_small_intro_a", 3))
	{
		return 1;
	}
	return 0;
}

void func_117()
{
	if (iLocal_3491)
	{
		if (unk_0x9C88EB7B70229335(&Local_3498))
		{
			if (func_59())
			{
				if (unk_0x55C74612BE548D78())
				{
					if (!unk_0x75342B3CD0FB5275())
					{
						cLocal_3492 = { func_118() };
						Local_3498 = { func_83() };
						StringCopy(&Local_3498, "", 24);
						if (!unk_0x9C88EB7B70229335(&cLocal_3492) && !unk_0x6A7B0D91FD88D9EE(&cLocal_3492, "NULL"))
						{
							Local_3498 = { func_83() };
							func_85();
						}
						else
						{
							iLocal_3491 = 0;
							StringCopy(&Local_3498, "", 24);
							StringCopy(&cLocal_3492, "", 24);
						}
					}
				}
			}
			else
			{
				iLocal_3491 = 0;
				StringCopy(&Local_3498, "", 24);
				StringCopy(&cLocal_3492, "", 24);
			}
		}
		else
		{
			if (unk_0x55C74612BE548D78())
			{
				if (!func_82(&Local_3498))
				{
					iLocal_3491 = 0;
					StringCopy(&Local_3498, "", 24);
					StringCopy(&cLocal_3492, "", 24);
				}
			}
			if (!unk_0x9C88EB7B70229335(&Local_3498))
			{
				Local_3478[0 /*3*/] = { Local_3478[0 /*3*/] };
			}
		}
	}
}

struct<6> func_118()
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

void func_119()
{
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		func_126();
		func_125();
		func_123();
		func_120();
	}
}

void func_120()
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	Var1 = { 0f, 0f, 0f };
	if (iLocal_437 == 0)
	{
		if (unk_0xC17DD6C225DE4EB8(&Var1, Local_444[0 /*5*/]))
		{
			fVar4 = 0f;
			fVar7 = 999999f;
			iVar0 = 0;
			while (iVar0 < Local_444.f_0)
			{
				if (iVar0 > 0)
				{
					fVar4 = (fVar4 + unk_0x3DC4639D5F23DEA2(Local_444[(iVar0 - 1) /*5*/], Local_444[iVar0 /*5*/], 1));
				}
				if (Local_444[iVar0 /*5*/].f_4)
				{
					if (unk_0xC17DD6C225DE4EB8(&Var1, Local_444[iVar0 /*5*/]))
					{
						fVar6 = unk_0x3DC4639D5F23DEA2(Local_444[iVar0 /*5*/], Var1, 1);
						if (fVar6 < fVar7)
						{
							fVar7 = fVar6;
							fVar8 = fVar4;
							iVar5 = iVar0;
						}
					}
				}
				iVar0++;
			}
			if (fVar7 < fLocal_272)
			{
				iVar5 = iVar5;
				iLocal_437 = 1;
				iLocal_439 = unk_0x94E3E074F38DF86C();
				fVar8 = fVar8;
				Local_277 = { Local_444[iVar5 /*5*/] };
				iLocal_280 = iVar5;
				iLocal_440 = iVar5 * 2;
				iLocal_442 = iLocal_440;
				iLocal_443 = iLocal_440;
				if (iLocal_443 < 0)
				{
					iLocal_443 = 0;
				}
				if (iLocal_442 >= Local_444.f_0 * 2)
				{
					iLocal_442 = (Local_444.f_0 * 2 - 1);
				}
			}
		}
	}
	if (iLocal_437 == 1)
	{
		unk_0x5957C9922BF60463();
		fVar9 = (unk_0xBBDA792448DB5A89((unk_0x94E3E074F38DF86C() - iLocal_439)) / fLocal_750);
		iVar10 = (unk_0xF34EE736CF047844((fVar9 / (1f / 2f))) - 1);
		iVar11 = (iLocal_440 + iVar10);
		iVar12 = (iLocal_440 - iVar10);
		if (iVar11 >= 122)
		{
			iVar11 = 121;
		}
		if (iVar12 < 0)
		{
			iVar12 = 0;
		}
		if (iVar11 > iLocal_442)
		{
			iVar0 = iLocal_442 + 1;
			while (iVar0 <= iVar11)
			{
				iVar13 = (iVar0 / 2);
				if (iVar13 < Local_444.f_0)
				{
					if (Local_444[iVar13 /*5*/].f_4)
					{
						func_121(iVar0, 1);
					}
					else
					{
						iVar11 = (iVar0 - 1);
						iVar0 = iVar11 + 1;
					}
				}
				iVar0++;
			}
			iLocal_442 = iVar11;
		}
		if (iVar12 < iLocal_443)
		{
			iVar0 = (iLocal_443 - 1);
			while (iVar0 >= iVar12)
			{
				iVar13 = (iVar0 / 2);
				if (iVar13 < Local_444.f_0)
				{
					if (Local_444[iVar13 /*5*/].f_4)
					{
						func_121(iVar0, 1);
					}
					else
					{
						iVar12 = iVar0 + 1;
						iVar0 = (iVar12 - 1);
					}
				}
				iVar0 = (iVar0 + -1);
			}
			iLocal_443 = iVar12;
		}
		iVar0 = 0;
		while (iVar0 < Local_281.f_0)
		{
			if ((unk_0x94E3E074F38DF86C() - Local_281[iVar0 /*5*/].f_4) > 1000)
			{
				unk_0x2478F071547F0C76(Local_281[iVar0 /*5*/].f_1, 0.4f, 1f);
			}
			if ((unk_0x94E3E074F38DF86C() - Local_281[iVar0 /*5*/].f_4) > 6000)
			{
				unk_0x44E994D596DB215A(Local_281[iVar0 /*5*/]);
			}
			iVar0++;
		}
	}
}

void func_121(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		if ((iParam0 % 2) == 1)
		{
			iVar0 = (iParam0 / 2);
			if (iVar0 + 1 < 61)
			{
				func_122(Local_444[(iParam0 / 2) /*5*/] + Local_444[(iParam0 / 2) + 1 /*5*/] / Vector(2f, 2f, 2f) + Vector(fLocal_273, fLocal_273, fLocal_273), iParam1);
			}
		}
		else if ((iParam0 / 2) < 61)
		{
			func_122(Local_444[(iParam0 / 2) /*5*/] + Vector(fLocal_273, fLocal_273, fLocal_273), iParam1);
		}
	}
}

void func_122(struct<3> Param0, int iParam3)
{
	if (iLocal_438 == 0)
	{
		iParam3 = 0;
	}
	unk_0x44E994D596DB215A(Local_281[iLocal_441 /*5*/]);
	if (Local_281[iLocal_441 /*5*/].f_4 != 0)
	{
		unk_0x2478F071547F0C76(Local_281[iLocal_441 /*5*/].f_1, 0.4f, 1f);
	}
	Local_281[iLocal_441 /*5*/].f_4 = unk_0x94E3E074F38DF86C();
	Local_281[iLocal_441 /*5*/].f_1 = { Param0 };
	Local_281[iLocal_441 /*5*/] = unk_0x8A89734A265B8974(Param0, uLocal_270, iParam3);
	iLocal_441++;
	if (iLocal_441 >= 31)
	{
		iLocal_441 = 0;
	}
}

void func_123()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	
	if (bLocal_265)
	{
		unk_0x5CD8291F2C5E0AD1(unk_0x17B5CC8A8615737D(), &iVar1, 1);
		if (iVar1 == joaat("weapon_petrolcan"))
		{
			if (unk_0x79888727131C6854(0, 24) && unk_0x1B30FA4AAC96F398(unk_0x17B5CC8A8615737D()))
			{
				if (iLocal_271 == 0)
				{
					unk_0x2DE9FDD822EE641B(2f, 8f, 4);
					iLocal_271 = unk_0x94E3E074F38DF86C() + 250;
				}
				if (unk_0x94E3E074F38DF86C() > iLocal_271)
				{
					if (!bLocal_261)
					{
						fVar4 = 9999.9f;
						Local_274 = { func_124() };
						iVar0 = 0;
						while (iVar0 < Local_444.f_0)
						{
							if (unk_0xA3794949321E107C(Local_444[iVar0 /*5*/].f_3))
							{
								fVar2 = unk_0x3DC4639D5F23DEA2(Local_274, unk_0xCC1DFCD030782230(Local_444[iVar0 /*5*/].f_3), 1);
								fVar3 = unk_0x3DC4639D5F23DEA2(Local_444[iVar0 /*5*/], unk_0xCC1DFCD030782230(Local_444[iVar0 /*5*/].f_3), 1);
								if (fVar3 == 0f || fVar2 < fVar3)
								{
									if (fVar2 < 2f)
									{
										Local_444[iVar0 /*5*/] = { Local_274 };
									}
								}
								if (fVar2 < fVar4)
								{
									fVar4 = fVar2;
									iVar5 = iVar0;
								}
							}
							iVar0++;
						}
						if (fVar4 < 2f)
						{
							if (iLocal_267 != -1)
							{
								if (unk_0x049F77DED8AE0AF4((iLocal_268 - iVar5)) > 1)
								{
									iLocal_268 = -1;
								}
								if (iLocal_268 == -1)
								{
									iLocal_268 = iLocal_267;
								}
								if (unk_0x049F77DED8AE0AF4((iLocal_268 - iVar5)) < 3 && unk_0x049F77DED8AE0AF4((iLocal_268 - iVar5)) > 0)
								{
									if (iLocal_268 < iVar5)
									{
										iVar6 = iLocal_268;
										while (iVar6 <= (iVar5 - 1))
										{
											if (unk_0xA3794949321E107C(Local_444[iVar6 /*5*/].f_3))
											{
												if (unk_0xC6F9754C5842E80A(Local_444[iVar6 /*5*/].f_3) > 0)
												{
													unk_0x5F97CFBDE7F2B599(Local_444[iVar6 /*5*/].f_3, 0);
													Local_444[iVar6 /*5*/].f_4 = 1;
													iLocal_269 = (iLocal_269 - 1);
												}
											}
											iVar6++;
										}
									}
									else
									{
										iVar6 = iVar5 + 1;
										while (iVar6 <= iLocal_268)
										{
											if (unk_0xA3794949321E107C(Local_444[iVar6 /*5*/].f_3))
											{
												if (unk_0xC6F9754C5842E80A(Local_444[iVar6 /*5*/].f_3) > 0)
												{
													unk_0x5F97CFBDE7F2B599(Local_444[iVar6 /*5*/].f_3, 0);
													Local_444[iVar6 /*5*/].f_4 = 1;
													iLocal_269 = (iLocal_269 - 1);
												}
											}
											iVar6++;
										}
									}
									iLocal_268 = iLocal_267;
								}
								if (iVar5 == 0)
								{
									if (unk_0xA3794949321E107C(Local_444[iVar5 /*5*/].f_3))
									{
										if (unk_0xC6F9754C5842E80A(Local_444[iVar5 /*5*/].f_3) > 0)
										{
											unk_0x5F97CFBDE7F2B599(Local_444[iVar5 /*5*/].f_3, 0);
											Local_444[iVar5 /*5*/].f_4 = 1;
											iLocal_269 = (iLocal_269 - 1);
										}
									}
								}
								if (iVar5 == 60)
								{
									if (unk_0xA3794949321E107C(Local_444[iVar5 /*5*/].f_3))
									{
										if (unk_0xC6F9754C5842E80A(Local_444[iVar5 /*5*/].f_3) > 0)
										{
											unk_0x5F97CFBDE7F2B599(Local_444[iVar5 /*5*/].f_3, 0);
											Local_444[iVar5 /*5*/].f_4 = 1;
											iLocal_269 = (iLocal_269 - 1);
										}
									}
								}
								if (iVar5 < 60)
								{
									if (func_71(Local_444[iVar5 + 1 /*5*/]))
									{
										if (unk_0xA3794949321E107C(Local_444[iVar5 /*5*/].f_3))
										{
											if (unk_0xC6F9754C5842E80A(Local_444[iVar5 /*5*/].f_3) > 0)
											{
												unk_0x5F97CFBDE7F2B599(Local_444[iVar5 /*5*/].f_3, 0);
												Local_444[iVar5 /*5*/].f_4 = 1;
												iLocal_269 = (iLocal_269 - 1);
											}
										}
									}
								}
							}
							iLocal_267 = iVar5;
						}
					}
				}
			}
			else
			{
				iLocal_267 = -1;
				iLocal_268 = -1;
				iLocal_271 = 0;
			}
		}
	}
}

Vector3 func_124()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	var uVar8;
	
	iVar0 = unk_0x8AEC1EA268158819(unk_0x17B5CC8A8615737D());
	if (unk_0x23E9113C762466ED(iVar0))
	{
		iVar1 = unk_0x36ACE2C7E56D90D6(iVar0, "Gun_Nuzzle");
		iVar1 = 1;
		Var2 = { unk_0xE9833D7A09D570F1(iVar0, iVar1) };
		Var2 = { unk_0x3CE07141081BBC2B(Var2, unk_0x638527C9799F2AE4(iVar0), 0.35f, 0f, -0.15f) };
		unk_0x4F34E573D7F5024B(Var2, &uVar8, 0);
		Var5 = { Var2.f_0, Var2.f_1, uVar8 };
	}
	return Var5;
}

void func_125()
{
	int iVar0;
	
	if (iLocal_263)
	{
		if (iLocal_437)
		{
			iVar0 = 0;
			while (iVar0 < Local_281.f_0)
			{
				unk_0x44E994D596DB215A(Local_281[iVar0 /*5*/]);
				iVar0++;
			}
		}
		iLocal_263 = 0;
		iLocal_437 = 1;
		iLocal_439 = unk_0x94E3E074F38DF86C();
		iVar0 = 0;
		while (iVar0 < Local_444.f_0)
		{
			Local_444[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		if (iLocal_266 != -1)
		{
			iLocal_443 = iLocal_266;
			iLocal_442 = iLocal_266;
			iLocal_440 = iLocal_266;
		}
		else
		{
			iLocal_443 = -1;
			iLocal_442 = -1;
			iLocal_440 = iLocal_266;
		}
		iLocal_441 = 1;
	}
}

void func_126()
{
	if (!iLocal_264)
	{
		iLocal_264 = 1;
	}
}

void func_127()
{
	int iVar0;
	
	if (iLocal_2511 >= 4)
	{
		iVar0 = 0;
		while (iVar0 < Local_755.f_0)
		{
			if (unk_0x23E9113C762466ED(Local_755[iVar0 /*33*/]))
			{
				if (!Local_755[iVar0 /*33*/].f_23)
				{
					if (unk_0xCA41A00932714525(Local_755[iVar0 /*33*/]))
					{
						Local_755[iVar0 /*33*/].f_23 = 1;
						func_9(151, 1, 0);
					}
				}
				if (unk_0x7B619B0C33282280(Local_755[iVar0 /*33*/]) == iLocal_1616)
				{
					func_97(Local_755[iVar0 /*33*/], &(Local_755[iVar0 /*33*/].f_25), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1);
				}
			}
			else if (Local_755[iVar0 /*33*/] != 0)
			{
				func_128(&(Local_755[iVar0 /*33*/].f_25));
				Local_755[iVar0 /*33*/] = 0;
			}
			iVar0++;
		}
	}
}

void func_128(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xA3794949321E107C(*uParam0))
	{
		unk_0x020DF7300725ECAB(uParam0);
		bVar0 = true;
	}
	if (unk_0xA3794949321E107C(uParam0->f_1))
	{
		unk_0x020DF7300725ECAB(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x23E9113C762466ED(uParam0->f_7))
	{
		if (!unk_0xCA41A00932714525(uParam0->f_7))
		{
			if (unk_0x708B478711FA7649(uParam0->f_7))
			{
				unk_0x53D9FD8A3418C8E9(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

void func_129()
{
	int iVar0;
	
	iVar0 = iLocal_2511;
	func_351();
	switch (iLocal_2511)
	{
		case 0:
			func_264();
			break;
		
		case 1:
			func_261();
			break;
		
		case 2:
			func_216();
			break;
		
		case 3:
			func_201();
			break;
		
		case 4:
			func_200();
			break;
		
		case 5:
			func_200();
			break;
		
		case 6:
			func_200();
			break;
		
		case 7:
			func_196();
			break;
		
		case 8:
			func_175();
			break;
		
		case 9:
			func_143();
			break;
	}
	if (iLocal_2511 != iVar0)
	{
		iLocal_2512 = 0;
	}
	if (bLocal_2514)
	{
		func_130(0);
	}
}

void func_130(char* sParam0)
{
	while (!unk_0x5BE53482EFD49141("CHN2_MISSION_FAIL"))
	{
		func_28(21, 1);
	}
	if (!unk_0x9C88EB7B70229335(sParam0))
	{
		sLocal_2513 = sParam0;
	}
	if (unk_0xD3115E7F7876D6E6(sLocal_2513))
	{
		sLocal_2513 = "CHFAIL";
	}
	func_132(sLocal_2513);
	while (!func_131())
	{
		func_28(2, 0);
	}
	func_413(1);
}

int func_131()
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

void func_132(char* sParam0)
{
	func_142(sParam0);
	func_133(0);
}

void func_133(int iParam0)
{
	int iVar0;
	
	if (Global_101700.f_8044 || func_141(0))
	{
		iVar0 = func_140();
		if (!func_134(iVar0))
		{
			return;
		}
		unk_0xEB79FECD9022AAF0(&(Global_82576[iVar0 /*5*/].f_1), 5);
		Global_91527 = iParam0;
	}
}

int func_134(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_139();
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		unk_0x21F9081DAE2F8AF5(5000);
	}
	iVar0 = Global_82576[iParam0 /*5*/];
	iVar1 = Global_69971.f_109[iVar0 /*4*/];
	func_138(iVar1, 1);
	unk_0xF6B2E0D2CFCE7923(unk_0xBE369BE1BC57A796());
	unk_0xC23C2ED7CCA1618F(unk_0xBE369BE1BC57A796());
	func_135(&(Global_101700.f_2095.f_539), iVar1);
	if (Global_85999 == Global_91528)
	{
		Global_101700.f_8044.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0x48B8265059381CD0(Global_82612[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			unk_0x2359C336802E3CB4(0);
		}
	}
	Global_101700.f_8044.f_330[iVar1 /*6*/].f_2++;
	Global_85999 = Global_91528;
	if (iParam0 == -1)
	{
		if (Global_101700.f_8044)
		{
		}
		return 0;
	}
	if (unk_0x48B8265059381CD0(Global_82576[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0x48B8265059381CD0(Global_82576[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_135(var uParam0, int iParam1)
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
		iVar1 = Global_101700.f_17492[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0x48B8265059381CD0(Global_101700.f_8044.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_137(Global_101700.f_17492[iVar0], &Var2, &fVar5))
			{
				Global_101700.f_17492[iVar0] = 318;
				func_136(&(uParam0->f_1524[iVar0]));
				uParam0->f_1528[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1538[iVar0] = 0f;
				uParam0->f_1542[iVar0] = 0;
				uParam0->f_1546[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1556[iVar0] = 0;
				Global_89214[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_89214[iVar0 /*29*/].f_9 = 0f;
				Global_89214[iVar0 /*29*/].f_12 = 0f;
				Global_89214[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_89214[iVar0 /*29*/].f_10 = 0f;
				Global_89214[iVar0 /*29*/].f_13 = 0f;
				Global_89214[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_89214[iVar0 /*29*/].f_11 = 0f;
				Global_89214[iVar0 /*29*/].f_14 = 0f;
				Global_89214[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_89214[iVar0 /*29*/].f_26 = 0f;
				Global_89214[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_89214[iVar0 /*29*/].f_27 = 0f;
				Global_89214[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_89214[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_136(var uParam0)
{
	*uParam0 = -15;
}

int func_137(int iParam0, var uParam1, float fParam2)
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
			return func_137(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_137(8, uParam1, fParam2);
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

void func_138(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_85809[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85809[iParam0 /*2*/] = 0;
	}
}

void func_139()
{
	Global_91526 = 1;
	if (unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1))
	{
		if (unk_0x9C88EB7B70229335(&Global_69934))
		{
			switch (func_43())
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
			switch (func_43())
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

int func_140()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0x48B8265059381CD0(Global_82576[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_141(bool bParam0)
{
	if (!bParam0 && unk_0x82F1A060D8F4583B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x48B8265059381CD0(Global_69950, 0);
}

void func_142(char* sParam0)
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

void func_143()
{
	func_170(46, 52);
	func_160(1, 49, 0, 2, 48, 1, 0, 1, 0, 1, 0);
	func_160(2, 52, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(3, 53, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(4, 54, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(5, 55, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_157(0, 27, 0, 0, 1, 0, 1, 0, 1, 0);
	func_149(0, 12, 0, 0, 1, 0, 1, 0);
	func_148();
	if (func_147(1, 49))
	{
		func_144();
	}
}

void func_144()
{
	unk_0xD12BCC85C2F8B1DE();
	func_145(0, 0);
	func_413(0);
}

void func_145(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_55824)
	{
		Global_55824 = iParam1;
	}
	if (bParam0)
	{
		if ((func_141(0) && Global_69948.f_1 == 1) && func_146(Global_69948))
		{
		}
		else
		{
			Global_55822 = 1;
		}
	}
	if (Global_101700.f_8044 || func_141(0))
	{
		iVar0 = func_140();
		iVar1 = Global_82576[iVar0 /*5*/];
		uVar2 = Global_69971.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_101700.f_8044)
			{
			}
			return;
		}
		if (unk_0x48B8265059381CD0(Global_82576[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0x48B8265059381CD0(Global_82576[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0xEB79FECD9022AAF0(&(Global_82576[iVar0 /*5*/].f_1), 4);
		unk_0xEB79FECD9022AAF0(&Global_69950, 1);
		Global_69966 = uVar2;
		Global_69967 = unk_0x94E3E074F38DF86C();
	}
}

int func_146(int iParam0)
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

int func_147(int iParam0, int iParam1)
{
	if (Local_2917[iParam0 /*10*/] == iParam1)
	{
		if (Local_2917[iParam0 /*10*/].f_3 == 1)
		{
			return 1;
		}
	}
	return 0;
}

void func_148()
{
	struct<3> Var0;
	
	Var0 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
	if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 2432.476f, 4953.242f, 43.05545f, 2466.34f, 4986.15f, 57.25303f, 14.4375f, 0, 1, 0))
	{
		if (Var0.f_2 < 50f)
		{
			if ((((unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 2436.762f, 4956.011f, 44.49009f, 2443.38f, 4962.625f, 48.2233f, 1.5f, 0, 1, 0) || unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 2447.669f, 4966.554f, 44.95141f, 2452.497f, 4969.825f, 48.89074f, 2.3125f, 0, 1, 0)) || unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 2454.863f, 4968.686f, 44.95141f, 2460.505f, 4974.409f, 48.82641f, 1.6875f, 0, 1, 0)) || unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 2459.058f, 4977.546f, 44.95141f, 2460.411f, 4979.302f, 48.82641f, 1.6875f, 0, 1, 0)) || unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 2457.602f, 4984.746f, 44.73669f, 2461.977f, 4989.49f, 48.47844f, 1.6875f, 0, 1, 0))
			{
				if (!unk_0x03767DFC5EE2B0C6(unk_0x17B5CC8A8615737D()))
				{
					unk_0x5EE43194AFB65DCC(unk_0x17B5CC8A8615737D());
				}
			}
		}
		else if ((((((unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 2454.179f, 4995.281f, 44.54151f, 2453.096f, 4993.905f, 48.32043f, 1.6875f, 0, 1, 0) || unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 2449.401f, 4990.354f, 44.92924f, 2447.717f, 4988.865f, 48.82129f, 1.6875f, 0, 1, 0)) || unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 2443.906f, 4990.104f, 44.4446f, 2439.007f, 4985.271f, 48.30458f, 1.6875f, 0, 1, 0)) || unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 2439.602f, 4982.387f, 44.95141f, 2440.797f, 4981.365f, 48.82642f, 1.6875f, 0, 1, 0)) || unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 2440.259f, 4980.671f, 44.95142f, 2434.769f, 4975.055f, 48.82642f, 1.6875f, 0, 1, 0)) || unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 2432.165f, 4972.586f, 44.29909f, 2430.114f, 4970.545f, 48.21086f, 1.6875f, 0, 1, 0)) || unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 2428.46f, 4968.569f, 44.81597f, 2426.632f, 4966.603f, 48.29342f, 1.6875f, 0, 1, 0))
		{
			if (!unk_0x03767DFC5EE2B0C6(unk_0x17B5CC8A8615737D()))
			{
				unk_0x5EE43194AFB65DCC(unk_0x17B5CC8A8615737D());
			}
		}
	}
	else if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 2455.487f, 4997.566f, 43.1101f, 2423.653f, 4962.837f, 57.34888f, 14.4375f, 0, 1, 0))
	{
		if (Var0.f_2 < 50f)
		{
			if ((unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 2442.913f, 4965.273f, 50.15687f, 2444.49f, 4967.41f, 53.81783f, 1.6875f, 0, 1, 0) || unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 2445.239f, 4969.07f, 49.94284f, 2450.365f, 4972.188f, 54.03251f, 2.375f, 0, 1, 0)) || unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 2452.332f, 4971.817f, 49.94283f, 2457.977f, 4977.583f, 53.88097f, 2.375f, 0, 1, 0))
			{
				if (!unk_0x03767DFC5EE2B0C6(unk_0x17B5CC8A8615737D()))
				{
					unk_0x5EE43194AFB65DCC(unk_0x17B5CC8A8615737D());
				}
			}
		}
		else if ((unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 2457.621f, 4978.462f, 49.94283f, 2453.932f, 4982.161f, 53.81783f, 2.375f, 0, 1, 0) || unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 2452.054f, 4984.156f, 49.94283f, 2448.12f, 4987.809f, 53.81316f, 2.375f, 0, 1, 0)) || unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 2442.014f, 4980.539f, 49.94283f, 2435.796f, 4971.945f, 53.90388f, 2.375f, 0, 1, 0))
		{
			if (!unk_0x03767DFC5EE2B0C6(unk_0x17B5CC8A8615737D()))
			{
				unk_0x5EE43194AFB65DCC(unk_0x17B5CC8A8615737D());
			}
		}
	}
}

void func_149(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	if (Local_3337[iParam0 /*4*/] != iParam1)
	{
		Local_3337[iParam0 /*4*/].f_1 = 0;
		Local_3337[iParam0 /*4*/] = iParam1;
	}
	if (!Local_3337[iParam0 /*4*/].f_1)
	{
		if (func_152(iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, 1, 0))
		{
			switch (Local_3337[iParam0 /*4*/])
			{
				case 0:
					break;
				
				case 1:
					if (!unk_0x9E123D5FF2973C60())
					{
						unk_0x774EBBE5B3122792(2f);
						Local_3337[iParam0 /*4*/].f_1 = 1;
					}
					break;
				
				case 4:
					if (unk_0x78D8C60E9FBA1AA8(unk_0xBE369BE1BC57A796()))
					{
						if (unk_0xF23B2033129FFCF0(0))
						{
							func_151("USESPEC_KM", -1);
						}
						else
						{
							func_151("USESPEC", -1);
						}
					}
					Local_3337[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 3:
					switch (Local_3337[iParam0 /*4*/].f_2)
					{
						case 0:
							func_151("FRMFLE", -1);
							Local_3337[iParam0 /*4*/].f_1 = 1;
							break;
					}
					break;
				
				case 5:
					if (!func_59() && !unk_0x75342B3CD0FB5275())
					{
						func_7("FRMLK", 7500, 1);
						Local_3337[iParam0 /*4*/].f_1 = 1;
					}
					break;
				
				case 2:
					func_7("FRMSNP", 7500, 1);
					Local_3337[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 11:
					switch (Local_3337[iParam0 /*4*/].f_2)
					{
						case 0:
							if (unk_0x4BF0D40F31431B8F(unk_0x17B5CC8A8615737D()))
							{
								Local_3337[iParam0 /*4*/].f_3 = unk_0x94E3E074F38DF86C() + 1000;
								Local_3337[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 1:
							if (unk_0x94E3E074F38DF86C() > Local_3337[iParam0 /*4*/].f_3)
							{
								if (unk_0xF23B2033129FFCF0(0))
								{
									func_151("FRMSTLTH_KM", -1);
								}
								else
								{
									func_151("FRMSTLTH", -1);
								}
								Local_3337[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 6:
					switch (Local_3337[iParam0 /*4*/].f_2)
					{
						case 0:
							if (unk_0xBE675F7A607B46B0(211) != 0)
							{
								Local_3337[iParam0 /*4*/].f_3 = unk_0x94E3E074F38DF86C() + 4000;
								Local_3337[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 1:
							if (unk_0x94E3E074F38DF86C() > Local_3337[iParam0 /*4*/].f_3)
							{
								iVar0 = joaat("weapon_unarmed");
								unk_0x5CD8291F2C5E0AD1(unk_0x17B5CC8A8615737D(), &iVar0, 1);
								if ((iVar0 != joaat("weapon_sniperrifle") && iVar0 != joaat("weapon_heavysniper")) && iVar0 != joaat("weapon_unarmed"))
								{
									if (!unk_0x75342B3CD0FB5275() && !unk_0x9E123D5FF2973C60())
									{
										if (!func_59())
										{
											if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
											{
												func_151("FRMSHOT", -1);
												Local_3337[iParam0 /*4*/].f_1 = 1;
											}
										}
									}
								}
							}
							break;
					}
					break;
				
				case 7:
					func_7("FRMFLC", 7500, 1);
					unk_0xAAF15482D9DB27D9(uLocal_2677, "FRMBLIPB");
					Local_3337[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 8:
					switch (Local_3337[iParam0 /*4*/].f_2)
					{
						case 0:
							func_151("FRMPET2", -1);
							Local_3337[iParam0 /*4*/].f_2++;
							break;
						
						case 1:
							if (!func_59())
							{
								func_150("FRMTRL", 7500, 1);
								Local_3337[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 2:
							iVar1 = joaat("weapon_unarmed");
							if (unk_0x5CD8291F2C5E0AD1(unk_0x17B5CC8A8615737D(), &iVar1, 1))
							{
								if (iVar1 == joaat("weapon_petrolcan"))
								{
									if (unk_0x79888727131C6854(0, 24))
									{
										unk_0x2E2945F5602A744F(1);
									}
								}
							}
							if (!unk_0x9E123D5FF2973C60())
							{
								func_151("FRMTRL2", -1);
								Local_3337[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 3:
							if (func_8())
							{
								if (!func_59())
								{
									if (unk_0xF34287B610CF02CA(unk_0x17B5CC8A8615737D()) != 0)
									{
										if (!unk_0xA3794949321E107C(uLocal_2677))
										{
											unk_0xD12BCC85C2F8B1DE();
											func_7("FRMSHP", 7500, 1);
											uLocal_2677 = func_5(2454.895f, 4950.895f, 44.1488f, 0);
										}
									}
									else if (func_67(unk_0x17B5CC8A8615737D(), 2454.895f, 4950.895f, 44.1488f, 1) < 5f)
									{
										unk_0xD12BCC85C2F8B1DE();
										if (unk_0xA3794949321E107C(uLocal_2677))
										{
											unk_0x020DF7300725ECAB(&uLocal_2677);
										}
										func_7("FRMIGN", 7500, 1);
										unk_0x4A5D4AD0FE6ACF73("CHI_2_SHOOT_GAS");
										Local_3337[iParam0 /*4*/].f_2++;
									}
								}
							}
							break;
						
						case 4:
							if (func_87(37))
							{
								if (func_84("FRMIGN", 0, 0))
								{
									unk_0xD12BCC85C2F8B1DE();
								}
							}
							if (unk_0xF34287B610CF02CA(unk_0x17B5CC8A8615737D()) != 0)
							{
								Local_3337[iParam0 /*4*/].f_2 = 3;
							}
							break;
					}
					break;
				
				case 9:
					func_151("FRMMISS", -1);
					Local_3337[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 10:
					if (func_87(34))
					{
						func_7("FRMFRH", 7500, 1);
					}
					else
					{
						func_7("FRMFRG", 7500, 1);
					}
					Local_3337[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 12:
					func_7("FRMLEAVE", 1, 1);
					if (func_87(48))
					{
						unk_0xD12BCC85C2F8B1DE();
						Local_3337[iParam0 /*4*/].f_1 = 1;
					}
					break;
				
				case 13:
					func_7("LOSE_WANTED", 7500, 1);
					break;
				}
			}
	}
}

void func_150(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x7F755B97D75D9B44(sParam0);
	unk_0x6EBC181C75DC822D(iParam1, 1);
}

void func_151(char* sParam0, int iParam1)
{
	unk_0x252D021C9D92DBA9(sParam0);
	unk_0x8B1500AADBA665BD(0, 0, 1, iParam1);
}

int func_152(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bLocal_3118 = false;
	iLocal_3119 = 0;
	if (func_153(&bLocal_3118, &iLocal_3119, iParam0, iParam1))
	{
		if (func_153(&bLocal_3118, &iLocal_3119, iParam2, iParam3))
		{
			if (func_153(&bLocal_3118, &iLocal_3119, iParam4, iParam5))
			{
				if (func_153(&bLocal_3118, &iLocal_3119, iParam6, iParam7))
				{
				}
			}
		}
	}
	if (bLocal_3118)
	{
		return 1;
	}
	return 0;
}

int func_153(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam2)
	{
		case 0:
			*iParam0 = 1;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			if (iParam3 == 0 || (iParam3 != 0 && func_87(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		
		case 3:
			if (iParam3 == 0 || (iParam3 != 0 && func_156(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		
		case 6:
			if (iParam3 == 0 || (iParam3 != 0 && func_87(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		
		case 8:
			if (*iParam0)
			{
				return 0;
			}
			else
			{
				*iParam1 = 1;
				if (iParam3 == 0 || (iParam3 != 0 && func_87(iParam3)))
				{
					*iParam0 = 1;
				}
			}
			break;
		
		case 4:
			if (iParam3 != 0 && func_156(iParam3))
			{
				*iParam0 = 0;
			}
			break;
		
		case 5:
			if (iParam3 != 0 && func_87(iParam3))
			{
				*iParam0 = 0;
			}
			break;
		
		case 7:
			if (func_155(iParam3))
			{
				if (func_156(iParam3))
				{
					*iParam0 = 1;
				}
				else
				{
					*iParam0 = 0;
				}
			}
			else
			{
				if (func_87(iParam3))
				{
					func_154(iParam3);
				}
				*iParam0 = 0;
			}
			break;
	}
	return 1;
}

void func_154(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_3120[0 /*8*/]);
	if (Local_3120[iVar0 /*8*/] == iParam0)
	{
		Local_3120[iVar0 /*8*/].f_3 = 1;
	}
}

int func_155(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_3120[0 /*8*/]);
	if (Local_3120[iVar0 /*8*/] == iParam0)
	{
		if (Local_3120[iVar0 /*8*/].f_3)
		{
			return 1;
		}
	}
	return 0;
}

int func_156(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_3120[0 /*8*/]);
	if (iVar0 >= 0 && iVar0 < Local_3120.f_0)
	{
		if (Local_3120[iVar0 /*8*/] == iParam0)
		{
			if (!Local_3120[iVar0 /*8*/].f_2)
			{
				return 1;
			}
		}
		else if (Local_3120[iVar0 /*8*/] != 0)
		{
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_157(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	
	if (Local_3358[iParam0 /*7*/] != iParam1)
	{
		Local_3358[iParam0 /*7*/].f_1 = 0;
		Local_3358[iParam0 /*7*/] = iParam1;
	}
	if (!Local_3358[iParam0 /*7*/].f_1)
	{
		if (func_152(iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9))
		{
			if (!Local_3358[iParam0 /*7*/].f_2)
			{
				Local_3358[iParam0 /*7*/].f_2 = 1;
			}
			switch (Local_3358[iParam0 /*7*/])
			{
				case 0:
					break;
				
				case 1:
					if (func_35("TRV_WTF", 1, unk_0x17B5CC8A8615737D(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_3358[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 2:
					switch (Local_3358[iParam0 /*7*/].f_3)
					{
						case 0:
							Local_3358[iParam0 /*7*/].f_4 = unk_0x94E3E074F38DF86C() + 2000;
							Local_3358[iParam0 /*7*/].f_3++;
							break;
						
						case 1:
							if (unk_0x94E3E074F38DF86C() > Local_3358[iParam0 /*7*/].f_4)
							{
								if (func_59())
								{
									Local_3358[iParam0 /*7*/].f_4 = unk_0x94E3E074F38DF86C() + 2000;
								}
								else
								{
									iVar0 = 0;
									if (func_159(&iVar0, 2, 1))
									{
										if (func_35("RAGE", 1, unk_0x17B5CC8A8615737D(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_3358[iParam0 /*7*/].f_4 = (unk_0x94E3E074F38DF86C() + unk_0x0E29C61F26D96FDB(8000, 14000));
										}
									}
									else
									{
										Local_3358[iParam0 /*7*/].f_1 = 1;
									}
								}
							}
							break;
					}
					break;
				
				case 4:
					Local_3358[iParam0 /*7*/].f_4 = func_18(23);
					if (Local_3358[iParam0 /*7*/].f_4 != -1)
					{
						if (!unk_0xCA41A00932714525(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/]))
						{
							if (func_35("COOKSEE", 3, Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/], "ONEILCOOK", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_3358[iParam0 /*7*/].f_1 = 1;
							}
						}
						else
						{
							Local_3358[iParam0 /*7*/].f_1 = 1;
						}
					}
					break;
				
				case 3:
					switch (Local_3358[iParam0 /*7*/].f_3)
					{
						case 0:
							Local_3358[iParam0 /*7*/].f_4 = func_18(15);
							Local_3358[iParam0 /*7*/].f_5 = func_18(16);
							if (Local_3358[iParam0 /*7*/].f_4 != -1 && Local_3358[iParam0 /*7*/].f_5 != -1)
							{
								Local_3358[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 1:
							if (unk_0xCA41A00932714525(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/]))
							{
								Local_3358[iParam0 /*7*/].f_4 = Local_3358[iParam0 /*7*/].f_5;
								if (!unk_0xCA41A00932714525(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/]))
								{
									Local_3358[iParam0 /*7*/].f_3++;
								}
								else
								{
									Local_3358[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_3358[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 2:
							if (!unk_0xCA41A00932714525(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD8", 5, Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_3358[iParam0 /*7*/].f_3++;
								}
							}
							else
							{
								Local_3358[iParam0 /*7*/].f_1 = 1;
							}
							break;
						
						case 3:
							if (!unk_0xCA41A00932714525(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD9", 5, Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_3358[iParam0 /*7*/].f_3++;
								}
							}
							else
							{
								Local_3358[iParam0 /*7*/].f_1 = 1;
							}
							break;
						
						case 4:
							if (func_159(&iVar1, 2, 1))
							{
								if (iVar1 != Local_3358[iParam0 /*7*/].f_4)
								{
									Local_3358[iParam0 /*7*/].f_4 = iVar1;
									Local_3358[iParam0 /*7*/].f_3++;
								}
								else
								{
									Local_3358[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_3358[iParam0 /*7*/].f_1 = 1;
							}
							break;
						
						case 5:
							if (!unk_0xCA41A00932714525(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD10", 5, Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_3358[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_3358[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 5:
					Local_3358[iParam0 /*7*/].f_4 = func_18(23);
					if (Local_3358[iParam0 /*7*/].f_4 != -1)
					{
						if (!unk_0xCA41A00932714525(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/]))
						{
							if (func_35("ONEILGUARD11", 6, Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_3358[iParam0 /*7*/].f_1 = 1;
							}
						}
						else
						{
							Local_3358[iParam0 /*7*/].f_1 = 1;
						}
					}
					break;
				
				case 6:
					Local_3358[iParam0 /*7*/].f_4 = func_18(23);
					if (Local_3358[iParam0 /*7*/].f_4 != -1)
					{
						if (!unk_0xCA41A00932714525(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/]))
						{
							if (func_35("ONEILGUARD12", 6, Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_3358[iParam0 /*7*/].f_1 = 1;
							}
						}
						else
						{
							Local_3358[iParam0 /*7*/].f_1 = 1;
						}
					}
					break;
				
				case 7:
					if (func_35("CHI2_drive", 1, unk_0x17B5CC8A8615737D(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_3358[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 9:
					switch (Local_3358[iParam0 /*7*/].f_3)
					{
						case 0:
							if (!unk_0xCA41A00932714525(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/]))
							{
								Local_3358[iParam0 /*7*/].f_3 = unk_0x0E29C61F26D96FDB(1, 3);
							}
							break;
						
						case 1:
							if (func_35("SEETREVOR", 3, Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/], "CHIN2goon1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_3358[iParam0 /*7*/].f_1 = 1;
							}
							break;
						
						case 2:
							if (func_35("GOON2TREV", 4, Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/], "CHIN2goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_3358[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 10:
					switch (Local_3358[iParam0 /*7*/].f_3)
					{
						case 0:
							if (unk_0x94E3E074F38DF86C() > Local_3358[iParam0 /*7*/].f_4)
							{
								if (func_159(&(Local_3358[iParam0 /*7*/].f_5), 1, 1))
								{
									Local_3358[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!unk_0xCA41A00932714525(Local_755[Local_3358[iParam0 /*7*/].f_5 /*33*/]))
							{
								if (Local_3358[iParam0 /*7*/].f_6 < 3)
								{
									if (func_35("ONEILGUARD5", 5, Local_755[Local_3358[iParam0 /*7*/].f_5 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_3358[iParam0 /*7*/].f_4 = (unk_0x94E3E074F38DF86C() + unk_0x0E29C61F26D96FDB(7000, 12000));
										Local_3358[iParam0 /*7*/].f_6++;
										Local_3358[iParam0 /*7*/].f_3 = 0;
									}
								}
								else if (Local_3358[iParam0 /*7*/].f_6 < 6)
								{
									if (func_35("ONEILGUARD6", 6, Local_755[Local_3358[iParam0 /*7*/].f_5 /*33*/], "ONEILGUARD2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_3358[iParam0 /*7*/].f_4 = (unk_0x94E3E074F38DF86C() + unk_0x0E29C61F26D96FDB(7000, 12000));
										Local_3358[iParam0 /*7*/].f_6++;
										Local_3358[iParam0 /*7*/].f_3 = 0;
									}
								}
								else
								{
									Local_3358[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_3358[iParam0 /*7*/].f_3 = 0;
							}
							break;
					}
					break;
				
				case 11:
					switch (Local_3358[iParam0 /*7*/].f_3)
					{
						case 0:
							if (unk_0x94E3E074F38DF86C() > Local_3358[iParam0 /*7*/].f_4)
							{
								if (func_159(&(Local_3358[iParam0 /*7*/].f_5), 1, 1))
								{
									Local_3358[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!unk_0xCA41A00932714525(Local_755[Local_3358[iParam0 /*7*/].f_5 /*33*/]))
							{
								switch (Local_3358[iParam0 /*7*/].f_6)
								{
									case 0:
									case 2:
									case 5:
									case 9:
										if (func_35("COOKATT", 3, Local_755[Local_3358[iParam0 /*7*/].f_5 /*33*/], "oneilcook", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_3358[iParam0 /*7*/].f_4 = (unk_0x94E3E074F38DF86C() + unk_0x0E29C61F26D96FDB(7000, 12000));
											Local_3358[iParam0 /*7*/].f_6++;
											Local_3358[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 1:
									case 6:
									case 8:
									case 11:
										if (func_35("GOONATT", 3, Local_755[Local_3358[iParam0 /*7*/].f_5 /*33*/], "chin2goon1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_3358[iParam0 /*7*/].f_4 = (unk_0x94E3E074F38DF86C() + unk_0x0E29C61F26D96FDB(7000, 12000));
											Local_3358[iParam0 /*7*/].f_6++;
											Local_3358[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 3:
									case 4:
									case 7:
									case 10:
										if (func_35("GOON2ATTO", 4, Local_755[Local_3358[iParam0 /*7*/].f_5 /*33*/], "chin2goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_3358[iParam0 /*7*/].f_4 = (unk_0x94E3E074F38DF86C() + unk_0x0E29C61F26D96FDB(7000, 12000));
											Local_3358[iParam0 /*7*/].f_6++;
											Local_3358[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 12:
										Local_3358[iParam0 /*7*/].f_1 = 1;
										break;
								}
							}
							else
							{
								Local_3358[iParam0 /*7*/].f_3 = 0;
							}
							break;
					}
					break;
				
				case 12:
					switch (Local_3358[iParam0 /*7*/].f_3)
					{
						case 0:
							if (unk_0x94E3E074F38DF86C() > Local_3358[iParam0 /*7*/].f_4)
							{
								if (func_159(&(Local_3358[iParam0 /*7*/].f_5), 2, 1))
								{
									Local_3358[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!unk_0xCA41A00932714525(Local_755[Local_3358[iParam0 /*7*/].f_5 /*33*/]))
							{
								switch (Local_3358[iParam0 /*7*/].f_6)
								{
									case 0:
									case 2:
									case 5:
									case 9:
										if (func_35("GOONIN", 3, Local_755[Local_3358[iParam0 /*7*/].f_5 /*33*/], "chin2goon1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_3358[iParam0 /*7*/].f_4 = (unk_0x94E3E074F38DF86C() + unk_0x0E29C61F26D96FDB(6000, 10000));
											Local_3358[iParam0 /*7*/].f_6++;
											Local_3358[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 1:
									case 6:
									case 8:
									case 11:
										if (func_35("GOON2ATTI", 4, Local_755[Local_3358[iParam0 /*7*/].f_5 /*33*/], "chin2goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_3358[iParam0 /*7*/].f_4 = (unk_0x94E3E074F38DF86C() + unk_0x0E29C61F26D96FDB(6000, 10000));
											Local_3358[iParam0 /*7*/].f_6++;
											Local_3358[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 3:
									case 4:
									case 7:
									case 10:
										if (func_35("ATTACKIN", 3, Local_755[Local_3358[iParam0 /*7*/].f_5 /*33*/], "ONEILCOOK", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_3358[iParam0 /*7*/].f_4 = (unk_0x94E3E074F38DF86C() + unk_0x0E29C61F26D96FDB(6000, 10000));
											Local_3358[iParam0 /*7*/].f_6++;
											Local_3358[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 12:
										Local_3358[iParam0 /*7*/].f_1 = 1;
										break;
								}
							}
							else
							{
								Local_3358[iParam0 /*7*/].f_3 = 0;
							}
							break;
					}
					break;
				
				case 14:
					switch (Local_3358[iParam0 /*7*/].f_3)
					{
						case 0:
							iVar2 = 0;
							while (iVar2 < Local_755.f_0)
							{
								if (Local_755[iVar2 /*33*/].f_1 == 2)
								{
									if (!unk_0xCA41A00932714525(Local_755[iVar2 /*33*/]))
									{
										if (unk_0x018477A7947BC4B4(Local_755[iVar2 /*33*/], 0))
										{
											if (unk_0x3D27B054244F08CD(Local_755[iVar2 /*33*/], unk_0x17B5CC8A8615737D()))
											{
												Local_3358[iParam0 /*7*/].f_4 = iVar2;
												Local_3358[iParam0 /*7*/].f_3++;
											}
										}
									}
								}
								iVar2++;
							}
							break;
						
						case 1:
							if (func_35("G2TREVIN", 4, Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/], "chin2goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_3358[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 15:
					switch (Local_3358[iParam0 /*7*/].f_3)
					{
						case 0:
							if (!unk_0xCA41A00932714525(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD3", 5, Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_3358[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!unk_0xCA41A00932714525(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD1", 5, Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_3358[iParam0 /*7*/].f_1 = 1;
								}
							}
							break;
					}
					break;
				
				case 16:
					switch (Local_3358[iParam0 /*7*/].f_3)
					{
						case 0:
							if (func_159(&(Local_3358[iParam0 /*7*/].f_4), 1, 1))
							{
								Local_3358[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 1:
							if (func_35("ONEILGUARD7", 5, Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/], "oneilguard2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_3358[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 2:
							if (func_35("CHI2_app", 1, unk_0x17B5CC8A8615737D(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_3358[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 17:
					if (func_35("CHI2_app", 1, unk_0x17B5CC8A8615737D(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_3358[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 19:
					switch (Local_3358[iParam0 /*7*/].f_3)
					{
						case 0:
							if (func_82("ONEILGUARD4") || func_82("SEETREVOR"))
							{
								Local_3358[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 1:
							if (func_35("CHI2_HARD", 1, unk_0x17B5CC8A8615737D(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_3358[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 20:
					switch (Local_3358[iParam0 /*7*/].f_3)
					{
						case 0:
							if (unk_0x94E3E074F38DF86C() > Local_3358[iParam0 /*7*/].f_5)
							{
								fVar4 = 999f;
								Local_3358[iParam0 /*7*/].f_4 = -1;
								iVar3 = 0;
								while (iVar3 < Local_755.f_0)
								{
									if (Local_755[iVar3 /*33*/].f_1 == 2)
									{
										if (!unk_0xCA41A00932714525(Local_755[iVar3 /*33*/]))
										{
											fVar5 = func_4(unk_0x17B5CC8A8615737D(), Local_755[iVar3 /*33*/], 1);
											if (fVar5 < fVar4)
											{
												fVar4 = fVar5;
												Local_3358[iParam0 /*7*/].f_4 = iVar3;
											}
										}
									}
									iVar3++;
								}
								if (Local_3358[iParam0 /*7*/].f_4 == -1)
								{
									Local_3358[iParam0 /*7*/].f_1 = 1;
								}
								else
								{
									Local_3358[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!unk_0xCA41A00932714525(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("CHI2_outs", 5, Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/], "Oneilguard1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_3358[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_3358[iParam0 /*7*/].f_5 = unk_0x94E3E074F38DF86C() + 6000;
								Local_3358[iParam0 /*7*/].f_3 = 0;
							}
							break;
					}
					break;
				
				case 18:
					switch (Local_3358[iParam0 /*7*/].f_3)
					{
						case 0:
							iVar6 = 0;
							while (iVar6 < Local_755.f_0)
							{
								if (Local_755[iVar6 /*33*/].f_2 == 8)
								{
									Local_3358[iParam0 /*7*/].f_4 = iVar6;
								}
								if (Local_755[iVar6 /*33*/].f_2 == 9)
								{
									Local_3358[iParam0 /*7*/].f_5 = iVar6;
								}
								iVar6++;
							}
							Local_3358[iParam0 /*7*/].f_3++;
							break;
						
						case 1:
							if (!func_59())
							{
								if (unk_0x00743AFDA92F3B04(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/].f_14))
								{
									if (unk_0x96F65998C0685177(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/].f_14) > 0.15f)
									{
										if (unk_0x96F65998C0685177(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/].f_14) < 0.65f)
										{
											if (func_4(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/], unk_0x17B5CC8A8615737D(), 1) < 30f)
											{
												Local_3358[iParam0 /*7*/].f_3 = 3;
											}
										}
									}
								}
							}
							break;
						
						case 2:
							if (!unk_0xCA41A00932714525(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/]))
							{
								Local_3358[iParam0 /*7*/].f_3++;
							}
							else
							{
								Local_3358[iParam0 /*7*/].f_3 = 1;
							}
							break;
						
						case 3:
							if (!unk_0xCA41A00932714525(Local_755[Local_3358[iParam0 /*7*/].f_5 /*33*/]))
							{
								unk_0xECF05B7D463A3321(Local_755[Local_3358[iParam0 /*7*/].f_5 /*33*/], "generic_cheer", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", 0);
								Local_3358[iParam0 /*7*/].f_3++;
							}
							else
							{
								Local_3358[iParam0 /*7*/].f_3 = 1;
							}
							break;
						
						case 4:
							if (!unk_0xCA41A00932714525(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (unk_0x00743AFDA92F3B04(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/].f_14))
								{
									if (unk_0x96F65998C0685177(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/].f_14) > 0.75f)
									{
										Local_3358[iParam0 /*7*/].f_3 = 1;
									}
								}
							}
							break;
					}
					break;
				
				case 21:
					if (func_35("CHI2_find", 1, unk_0x17B5CC8A8615737D(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						unk_0x2DE9FDD822EE641B(5f, 8f, 4);
						Local_3358[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 26:
					if (func_158())
					{
						if (func_35("CHI2_pourmis", 1, unk_0x17B5CC8A8615737D(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
						{
							Local_3358[iParam0 /*7*/].f_1 = 1;
						}
					}
					break;
				
				case 27:
					if (func_35("CHI2_boom", 1, unk_0x17B5CC8A8615737D(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_3358[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 22:
					switch (Local_3358[iParam0 /*7*/].f_3)
					{
						case 0:
							Local_3358[iParam0 /*7*/].f_4 = 2500;
							Local_3358[iParam0 /*7*/].f_5 = 0;
							Local_3358[iParam0 /*7*/].f_3 = 1;
							break;
						
						case 1:
							Local_3358[iParam0 /*7*/].f_4 = (Local_3358[iParam0 /*7*/].f_4 - unk_0xF34EE736CF047844((unk_0x0000000050597EE2() * 1000f)));
							if (Local_3358[iParam0 /*7*/].f_4 <= 0)
							{
								Local_3358[iParam0 /*7*/].f_3 = 2;
							}
							break;
						
						case 2:
							if (Local_3358[iParam0 /*7*/].f_5 < 14)
							{
								if (func_35("CHI2_pour", 1, unk_0x17B5CC8A8615737D(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_3358[iParam0 /*7*/].f_3 = 1;
									Local_3358[iParam0 /*7*/].f_4 = (12000 + unk_0x0E29C61F26D96FDB(3000, 5000));
									Local_3358[iParam0 /*7*/].f_5++;
								}
							}
							break;
					}
					break;
				
				case 23:
					if (func_35("CHI2_light", 1, unk_0x17B5CC8A8615737D(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_3358[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 24:
					if (func_35("CHI2_boom", 1, unk_0x17B5CC8A8615737D(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_3358[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 25:
					if (func_35("CHI2_burn", 1, unk_0x17B5CC8A8615737D(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_3358[iParam0 /*7*/].f_1 = 1;
					}
					break;
				}
			}
	}
}

int func_158()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < Local_444.f_0)
	{
		if (Local_444[iVar0 /*5*/].f_4 == 1)
		{
			if (iVar2 == 0)
			{
				iVar2 = 1;
				iVar1++;
				if (iVar1 > 1)
				{
					return 1;
				}
			}
		}
		else if (iVar2 == 1)
		{
			iVar2 = 0;
		}
		iVar0++;
	}
	return 0;
}

int func_159(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 9999f;
	*iParam0 = -1;
	iVar0 = 0;
	while (iVar0 < Local_755.f_0)
	{
		if (Local_755[iVar0 /*33*/].f_1 == iParam1)
		{
			if (iParam2 == 0 || (iParam2 == 1 && !unk_0xCA41A00932714525(Local_755[iVar0 /*33*/])))
			{
				fVar1 = func_4(unk_0x17B5CC8A8615737D(), Local_755[iVar0 /*33*/], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					*iParam0 = iVar0;
				}
			}
		}
		iVar0++;
	}
	if (*iParam0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_160(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	bool bVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	var uVar4;
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
	
	if (Local_2917[iParam0 /*10*/] != iParam1 || Local_2917[iParam0 /*10*/].f_1 == 0)
	{
		Local_2917[iParam0 /*10*/] = iParam1;
		Local_2917[iParam0 /*10*/].f_1 = 1;
		Local_2917[iParam0 /*10*/].f_3 = 0;
		Local_2917[iParam0 /*10*/].f_6 = 0;
		Local_2917[iParam0 /*10*/].f_4 = 0;
		Local_2917[iParam0 /*10*/].f_7 = 0;
		Local_2917[iParam0 /*10*/].f_8 = 0;
		Local_2917[iParam0 /*10*/].f_9 = 0f;
	}
	if (Local_2917[iParam0 /*10*/].f_2 && iParam2 == 0)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = func_152(iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
	}
	if (iParam2 == 1 && !bVar0)
	{
		Local_2917[iParam0 /*10*/].f_2 = 0;
	}
	if (Local_2917[iParam0 /*10*/].f_3 == 0 || Local_2917[iParam0 /*10*/].f_6 == -1)
	{
		if (bVar0 == 1)
		{
			if (!Local_2917[iParam0 /*10*/].f_2)
			{
				Local_2917[iParam0 /*10*/].f_2 = 1;
			}
			switch (Local_2917[iParam0 /*10*/])
			{
				case 1:
					break;
				
				case 2:
					switch (Local_2917[iParam0 /*10*/].f_6)
					{
						case 0:
							unk_0x4A5D4AD0FE6ACF73("CHI_2_DRIVE_TO_FARMHOUSE");
							Local_2917[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
							{
								unk_0xB8CAC5F3774894A1("CHI_2_DRIVE_TO_FARMHOUSE");
								Local_2917[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 3:
					if (func_67(unk_0x17B5CC8A8615737D(), 1991.05f, 3054.262f, 46.2147f, 1) > 250f)
					{
						if (unk_0x23E9113C762466ED(Local_755[11 /*33*/]))
						{
							unk_0x478AE709A466CB7E(&(Local_755[11 /*33*/]));
						}
						if (unk_0x23E9113C762466ED(Local_755[10 /*33*/]))
						{
							unk_0x478AE709A466CB7E(&(Local_755[10 /*33*/]));
						}
						if (unk_0x23E9113C762466ED(Local_755[12 /*33*/]))
						{
							unk_0x478AE709A466CB7E(&(Local_755[12 /*33*/]));
						}
						if (unk_0x23E9113C762466ED(Local_755[13 /*33*/]))
						{
							unk_0x478AE709A466CB7E(&(Local_755[13 /*33*/]));
						}
						if (unk_0x23E9113C762466ED(Local_755[14 /*33*/]))
						{
							unk_0x478AE709A466CB7E(&(Local_755[14 /*33*/]));
						}
						unk_0x924CDE68BA2ED3BA(joaat("ig_janet"));
						unk_0x924CDE68BA2ED3BA(joaat("ig_janet"));
						unk_0x924CDE68BA2ED3BA(joaat("ig_old_man1a"));
						unk_0x924CDE68BA2ED3BA(joaat("ig_old_man2"));
						unk_0x924CDE68BA2ED3BA(joaat("ig_taocheng"));
						unk_0x924CDE68BA2ED3BA(joaat("ig_taostranslator"));
						unk_0xF9FFB9857F3120F8("misschinese2_crystalmaze");
						unk_0xF9FFB9857F3120F8("MISSChinese2_crystalMazeMCS1_IG");
						unk_0xF9FFB9857F3120F8("missrampageintrooutro");
						if (iLocal_2884 != -1)
						{
							if (unk_0x33CB7E3A2B3E527C(iLocal_2884))
							{
								unk_0xE73D1B19D9500603(iLocal_2884);
							}
						}
						unk_0xB61819CCF7A3F445();
						func_31(26, 1);
						Local_2917[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 5:
					if (unk_0xAA18627F95EFB68D("CHI_2_FARMHOUSE_INTRO", "CHINESE2_FARMHOUSE_INTRODUCTION"))
					{
						Local_2917[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 4:
					if (func_67(unk_0x17B5CC8A8615737D(), 2457.49f, 4977.095f, 50.56783f, 1) < 400f)
					{
						func_32(27, 0);
						unk_0x79920BB32F3C316F(1);
						unk_0xBE02ABAAC92D1A06(1);
						unk_0x75E3D7DD8F4B0F6F("chinese2_farmhouse_cutscene");
						Local_2917[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 7:
					if ((!unk_0xCA41A00932714525(Local_755[12 /*33*/]) && !unk_0xCA41A00932714525(Local_755[13 /*33*/])) && !unk_0xCA41A00932714525(Local_755[14 /*33*/]))
					{
						if (func_169(6, 6) < 2)
						{
							if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 1981.257f, 3050.721f, 41.08995f, 1984.257f, 3055.543f, 49.47314f, 3.0625f, 0, 1, 0))
							{
								if (unk_0x1F8F07D86DA1A701(Local_755[12 /*33*/], 150319005) == 7)
								{
									unk_0x4718A774D9248520(Local_755[13 /*33*/], unk_0x17B5CC8A8615737D(), -1, 0, 2);
									unk_0x4718A774D9248520(Local_755[14 /*33*/], unk_0x17B5CC8A8615737D(), -1, 0, 2);
									unk_0x4718A774D9248520(Local_755[12 /*33*/], unk_0x17B5CC8A8615737D(), -1, 0, 2);
								}
							}
						}
					}
					break;
				
				case 8:
					fVar1 = func_67(unk_0x17B5CC8A8615737D(), 2450.214f, 4979.208f, 60.8422f, 1);
					if (fVar1 < 900f)
					{
						if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
						{
							uVar4 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
							if (unk_0x45CD66F0A131E554(uVar4, 0))
							{
								if (unk_0xC5082382D5482C0C(unk_0x0324EEB10F81965F(iVar4)) || unk_0x8432EA469FDB418D(unk_0x0324EEB10F81965F(iVar4)))
								{
									fVar2 = (900f - fVar1);
									if (fVar2 < 0f)
									{
										fVar2 = 0f;
									}
									fVar2 = (fVar2 / 900f);
									fVar2 = (fVar2 * 10000f);
									fVar3 = unk_0x13B7ACE69D27E3E4(iVar4);
									fVar2 = (fVar2 * (fVar3 / 35f));
									if (fVar3 > 35f)
									{
										unk_0x71B44214524C059C(iVar4, 1, 0f, -fVar2, 0f, 0, 1, 0, 0);
									}
								}
							}
						}
					}
					break;
				
				case 9:
					if (unk_0x5132972D2BBC5A62(unk_0x17B5CC8A8615737D(), "missrampageintrooutro", "trvram_6_1h_run_outro", 3))
					{
						Local_2917[iParam0 /*10*/].f_6 = 1;
						unk_0x0E21DA99F698AF06(unk_0x17B5CC8A8615737D(), 321, 1);
						if (unk_0x36D713BA3613126D(unk_0x17B5CC8A8615737D(), unk_0x765F5B806B517045("walkinterruptible")))
						{
							unk_0x44B1CF13D39D96CE(unk_0x17B5CC8A8615737D(), joaat("MotionState_Idle"), 0, 0, 0);
							if (func_168())
							{
								unk_0x15848523A8959DBC(unk_0x17B5CC8A8615737D());
								Local_2917[iParam0 /*10*/].f_3 = 1;
							}
						}
					}
					else if (Local_2917[iParam0 /*10*/].f_6 == 1)
					{
						unk_0xF9FFB9857F3120F8("missrampageintrooutro");
						Local_2917[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 6:
					switch (Local_2917[iParam0 /*10*/].f_6)
					{
						case 0:
							if ((!unk_0xCA41A00932714525(Local_755[12 /*33*/]) && !unk_0xCA41A00932714525(Local_755[13 /*33*/])) && !unk_0xCA41A00932714525(Local_755[14 /*33*/]))
							{
								unk_0x3BB70315907D9456(Local_755[12 /*33*/], uLocal_2636);
								unk_0x3BB70315907D9456(Local_755[13 /*33*/], iLocal_2636);
								unk_0x3BB70315907D9456(Local_755[14 /*33*/], iLocal_2636);
								unk_0xC96275575DC981A9(Local_755[12 /*33*/], 17, 1);
								unk_0xC96275575DC981A9(Local_755[13 /*33*/], 17, 1);
								unk_0xC96275575DC981A9(Local_755[14 /*33*/], 17, 1);
								unk_0xCF458DC2F9000261(Local_755[12 /*33*/]);
								unk_0xCF458DC2F9000261(Local_755[13 /*33*/]);
								unk_0xCF458DC2F9000261(Local_755[14 /*33*/]);
								Local_2917[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if ((unk_0xCA41A00932714525(Local_755[12 /*33*/]) || unk_0xCA41A00932714525(Local_755[13 /*33*/])) || unk_0xCA41A00932714525(Local_755[14 /*33*/]))
							{
								Local_2917[iParam0 /*10*/].f_6++;
							}
							if (!unk_0xCA41A00932714525(Local_755[12 /*33*/]))
							{
								if (unk_0x15CAF505CC185675(Local_755[12 /*33*/]))
								{
									Local_2917[iParam0 /*10*/].f_6 = 2;
								}
							}
							if (!unk_0xCA41A00932714525(Local_755[13 /*33*/]))
							{
								if (unk_0x15CAF505CC185675(Local_755[13 /*33*/]))
								{
									Local_2917[iParam0 /*10*/].f_6 = 2;
								}
							}
							if (!unk_0xCA41A00932714525(Local_755[14 /*33*/]))
							{
								if (unk_0x15CAF505CC185675(Local_755[14 /*33*/]))
								{
									Local_2917[iParam0 /*10*/].f_6 = 2;
								}
							}
							break;
						
						case 2:
							if (!unk_0xCA41A00932714525(Local_755[12 /*33*/]))
							{
								unk_0xCA58071CE9CCE891(Local_755[12 /*33*/], unk_0x17B5CC8A8615737D(), 100f, -1, 0, 0);
								unk_0x650BB0E111420EAF(Local_755[12 /*33*/], 1);
								unk_0x6500ADB01E821BC0(&(Local_755[12 /*33*/]));
							}
							if (!unk_0xCA41A00932714525(Local_755[13 /*33*/]))
							{
								unk_0xCA58071CE9CCE891(Local_755[13 /*33*/], unk_0x17B5CC8A8615737D(), 100f, -1, 0, 0);
								unk_0x650BB0E111420EAF(Local_755[13 /*33*/], 1);
								unk_0x6500ADB01E821BC0(&(Local_755[13 /*33*/]));
							}
							if (!unk_0xCA41A00932714525(Local_755[14 /*33*/]))
							{
								unk_0xCA58071CE9CCE891(Local_755[14 /*33*/], unk_0x17B5CC8A8615737D(), 100f, -1, 0, 0);
								unk_0x650BB0E111420EAF(Local_755[14 /*33*/], 1);
								unk_0x6500ADB01E821BC0(&(Local_755[14 /*33*/]));
								Local_2917[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 10:
					switch (Local_2917[iParam0 /*10*/].f_6)
					{
						case 0:
							unk_0x75E3D7DD8F4B0F6F("chinese2_explosion_cutscene");
							unk_0x4C21FD297A827B45();
							Local_2917[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (iLocal_2648 == 1)
							{
								if (unk_0xAA18627F95EFB68D("CHINESE2_FARMHOUSE_EXPLOSION_MOLOTOV_MASTER", 0))
								{
									Local_2917[iParam0 /*10*/].f_6++;
								}
							}
							if (iLocal_2648 == 2)
							{
								if (unk_0xAA18627F95EFB68D("CHINESE2_FARMHOUSE_EXPLOSION_STICKY_BOMB_MASTER", 0))
								{
									Local_2917[iParam0 /*10*/].f_6++;
								}
							}
							if (iLocal_2648 == 3)
							{
								if (unk_0xAA18627F95EFB68D("CHINESE2_FARMHOUSE_EXPLOSION_SHOOT_GASOLINE_MASTER", 0))
								{
									Local_2917[iParam0 /*10*/].f_6++;
								}
							}
							break;
						
						case 2:
							if (unk_0x234438A9D08C3186())
							{
								Local_2917[iParam0 /*10*/].f_6 = 10;
							}
							break;
					}
					break;
				
				case 11:
					switch (Local_2917[iParam0 /*10*/].f_6)
					{
						case 1:
							if (unk_0x94E3E074F38DF86C() > Local_2917[iParam0 /*10*/].f_7)
							{
								if (unk_0x623BDE1B17A9D9E3(unk_0xF34287B610CF02CA(unk_0x17B5CC8A8615737D())))
								{
									unk_0x3F46E145DB7AB5E4(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) + Vector(0f, unk_0x6B1497B2FDBC8466(0f, 4f), unk_0x6B1497B2FDBC8466(0f, 4f)), 16, 1.5f, 1, 0, 1065353216, 0);
									Local_2917[iParam0 /*10*/].f_9 = (Local_2917[iParam0 /*10*/].f_9 - 1f);
									Local_2917[iParam0 /*10*/].f_7 = (unk_0x94E3E074F38DF86C() + unk_0x0E29C61F26D96FDB(250, 520));
								}
								else
								{
									Local_2917[iParam0 /*10*/].f_6 = 2;
								}
							}
							break;
						
						case 2:
							break;
						
						default:
							iVar5 = 0;
							while (iVar5 < Local_2889.f_0)
							{
								if (!unk_0x48B8265059381CD0(Local_2917[iParam0 /*10*/].f_7, iVar5))
								{
									if (unk_0x3C04DDC5730997E5(-1, Local_2889[iVar5 /*3*/], 5f))
									{
										unk_0xEB79FECD9022AAF0(&(Local_2917[iParam0 /*10*/].f_7), iVar5);
										if (Local_2917[iParam0 /*10*/].f_6 == 0)
										{
											Local_2917[iParam0 /*10*/].f_6 = unk_0x94E3E074F38DF86C() + 1500;
										}
									}
								}
								iVar5++;
							}
							if (unk_0x94E3E074F38DF86C() > Local_2917[iParam0 /*10*/].f_8)
							{
								Local_2917[iParam0 /*10*/].f_8 = 0;
								iVar5 = 0;
								while (iVar5 < Local_2889.f_0)
								{
									if (!unk_0x48B8265059381CD0(Local_2917[iParam0 /*10*/].f_7, iVar5 + 9) && unk_0x48B8265059381CD0(Local_2917[iParam0 /*10*/].f_7, iVar5))
									{
										unk_0x3F46E145DB7AB5E4(Local_2889[iVar5 /*3*/], 16, 1.5f, 1, 0, 1065353216, 0);
										unk_0xEB79FECD9022AAF0(&(Local_2917[iParam0 /*10*/].f_7), iVar5 + 9);
										iVar5 = 8;
										Local_2917[iParam0 /*10*/].f_8 = (unk_0x94E3E074F38DF86C() + unk_0x0E29C61F26D96FDB(150, 320));
									}
									iVar5++;
								}
							}
							if (Local_2917[iParam0 /*10*/].f_6 != 0)
							{
								if (unk_0x94E3E074F38DF86C() > Local_2917[iParam0 /*10*/].f_6)
								{
									Local_2917[iParam0 /*10*/].f_6 = 1;
									Local_2917[iParam0 /*10*/].f_7 = unk_0x94E3E074F38DF86C() + 300;
									Local_2917[iParam0 /*10*/].f_9 = 16f;
								}
							}
							break;
					}
					break;
				
				case 12:
					iVar6 = func_18(8);
					iVar7 = func_18(9);
					func_99(iVar6, 20, 0, 0);
					func_99(iVar7, 20, 0, 0);
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 42:
					switch (Local_2917[iParam0 /*10*/].f_6)
					{
						case 0:
							unk_0x7DA8E8A0213C87AB("RADIO_01_CLASS_ROCK");
							Local_2917[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
							{
								if (unk_0xF684F1C341919221())
								{
									iLocal_2506 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
									if (unk_0x45CD66F0A131E554(iLocal_2506, 0))
									{
										if (!unk_0x5DEB532E62B5680C(iLocal_2506))
										{
											Local_2917[iParam0 /*10*/].f_6++;
										}
									}
								}
							}
							break;
						
						case 2:
							if (unk_0x5823F1F25CE33C5D("CHN2_TREV_RADIO_1_FRTA"))
							{
								Local_2917[iParam0 /*10*/].f_6++;
							}
							break;
							break;
						
						case 3:
							if (unk_0x5BE53482EFD49141("CHN2_TREV_RADIO_1_FRTA"))
							{
								Local_2917[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 4:
							if (func_68(iLocal_2506))
							{
								if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iLocal_2506, 0))
								{
									if (unk_0x5DEB532E62B5680C(iLocal_2506))
									{
										Local_2917[iParam0 /*10*/].f_7 = (Local_2917[iParam0 /*10*/].f_7 + unk_0x94E3E074F38DF86C() + 7000);
										Local_2917[iParam0 /*10*/].f_6++;
									}
								}
							}
							break;
						
						case 5:
							if (func_68(iLocal_2506))
							{
								if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iLocal_2506, 0))
								{
									if (unk_0x94E3E074F38DF86C() > Local_2917[iParam0 /*10*/].f_7)
									{
										if (unk_0x13705606E6F80E32() != 6 && unk_0x13705606E6F80E32() != 0)
										{
											if (unk_0x49951891CA893804() != 0)
											{
												if (func_35("CHI2_rad", 1, unk_0x17B5CC8A8615737D(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
												{
													Local_2917[iParam0 /*10*/].f_6++;
												}
											}
											else
											{
												Local_2917[iParam0 /*10*/].f_6++;
											}
										}
										else
										{
											Local_2917[iParam0 /*10*/].f_7 = unk_0x94E3E074F38DF86C() + 5000;
										}
									}
								}
							}
							break;
						
						case 6:
							if (func_82("CHI2_rad"))
							{
								Local_2917[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 7:
							if (!func_82("CHI2_rad"))
							{
								if (func_68(iLocal_2506))
								{
									if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iLocal_2506, 0))
									{
										if (!unk_0x79888727131C6854(0, 85))
										{
											if (unk_0x13705606E6F80E32() != 6)
											{
												if (iLocal_2676 == -1)
												{
													iLocal_2676 = unk_0x3DF2C10FD29336A3();
													unk_0x4988C48537D1AE4F(iLocal_2676, "Change_Station_Loud", "Radio_Soundset", 1);
													Local_2917[iParam0 /*10*/].f_6++;
												}
											}
											else
											{
												Local_2917[iParam0 /*10*/].f_6 = 9;
											}
										}
									}
								}
							}
							break;
						
						case 8:
							if (!unk_0x79888727131C6854(0, 85))
							{
								if (unk_0x5BE53482EFD49141("CHN2_TREV_RADIO_2_FRTA"))
								{
									unk_0x4A5D4AD0FE6ACF73("CHI_2_DRIVE_ROCK_RADIO");
									Local_2917[iParam0 /*10*/].f_6++;
								}
							}
							break;
						
						case 9:
							if (func_68(iLocal_2506))
							{
								if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iLocal_2506, 0))
								{
									if (unk_0x13705606E6F80E32() == 6)
									{
										if (unk_0x49951891CA893804() != 0)
										{
											if (func_35("CHI2_radb", 1, unk_0x17B5CC8A8615737D(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_2917[iParam0 /*10*/].f_6++;
											}
										}
										else
										{
											Local_2917[iParam0 /*10*/].f_6++;
										}
									}
								}
							}
							break;
					}
					break;
				
				case 48:
					func_31(9, 1);
					unk_0x000E46314C3A507F(1f);
					unk_0x809D9B021F305A70(unk_0xBE369BE1BC57A796(), 2, 0);
					unk_0xD189588DEC407D28(unk_0xBE369BE1BC57A796(), 0);
					unk_0x6751FA44D6CA586D(5);
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 49:
					if (!func_90(2448.25f, 4974.92f, 55.11f, 20f, 500f) || func_87(49))
					{
						if (iLocal_2678 != 0)
						{
							unk_0xDD5B92F304023AEF(iLocal_2678);
						}
						iLocal_2678 = 0;
						func_19(50, 2, 0, 1, 0);
						func_19(51, 2, 0, 1, 0);
						func_19(52, 2, 0, 1, 0);
						func_19(53, 2, 0, 1, 0);
						func_19(54, 1, 0, 1, 0);
						func_19(55, 1, 0, 1, 0);
						Local_2917[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 50:
					switch (Local_2917[iParam0 /*10*/].f_6)
					{
						case 0:
							if (unk_0x509A3191A6C4EB38(unk_0x17B5CC8A8615737D(), joaat("weapon_petrolcan"), 0))
							{
								Local_2917[iParam0 /*10*/].f_7 = unk_0x034EB52F6D89BFA0(unk_0x17B5CC8A8615737D(), joaat("weapon_petrolcan"));
								Local_2917[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if (unk_0x509A3191A6C4EB38(unk_0x17B5CC8A8615737D(), joaat("weapon_petrolcan"), 0))
							{
								iVar8 = unk_0x034EB52F6D89BFA0(unk_0x17B5CC8A8615737D(), joaat("weapon_petrolcan"));
								if (iVar8 > Local_2917[iParam0 /*10*/].f_7)
								{
									Local_2917[iParam0 /*10*/].f_7 = iVar8;
								}
								else if (iVar8 < Local_2917[iParam0 /*10*/].f_7)
								{
									func_9(158, (Local_2917[iParam0 /*10*/].f_7 - iVar8), 0);
									Local_2917[iParam0 /*10*/].f_7 = iVar8;
								}
							}
							if (unk_0x5CD8291F2C5E0AD1(unk_0x17B5CC8A8615737D(), &iVar9, 1))
							{
								if (iVar9 == joaat("weapon_petrolcan"))
								{
									if (unk_0x79888727131C6854(0, 24))
									{
										if (Local_2917[iParam0 /*10*/].f_8 == 0)
										{
											func_10(157, 0);
											Local_2917[iParam0 /*10*/].f_8 = 1;
										}
									}
									else if (Local_2917[iParam0 /*10*/].f_8 == 1)
									{
										func_11(0, 157);
										Local_2917[iParam0 /*10*/].f_8 = 0;
									}
								}
								else if (Local_2917[iParam0 /*10*/].f_8 == 1)
								{
									func_11(0, 157);
									Local_2917[iParam0 /*10*/].f_8 = 0;
								}
							}
							else if (Local_2917[iParam0 /*10*/].f_8 == 1)
							{
								func_11(0, 157);
								Local_2917[iParam0 /*10*/].f_8 = 0;
							}
							break;
					}
					break;
				
				case 51:
					switch (Local_2917[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_2917[iParam0 /*10*/].f_7 = -1;
							Local_2917[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (unk_0x5CD8291F2C5E0AD1(unk_0x17B5CC8A8615737D(), &iVar10, 1))
							{
								if (iVar10 == joaat("weapon_petrolcan"))
								{
									if (unk_0x79888727131C6854(0, 24))
									{
										if (Local_2917[iParam0 /*10*/].f_7 == -1)
										{
											Local_2917[iParam0 /*10*/].f_7 = unk_0x034EB52F6D89BFA0(unk_0x17B5CC8A8615737D(), joaat("weapon_petrolcan"));
										}
										if (iLocal_269 == 0)
										{
											Local_2917[iParam0 /*10*/].f_9 = (Local_2917[iParam0 /*10*/].f_9 + (unk_0x0000000050597EE2() * 2f));
										}
										else if (iLocal_269 < 30 && Local_2917[iParam0 /*10*/].f_9 < 70f)
										{
											Local_2917[iParam0 /*10*/].f_9 = (Local_2917[iParam0 /*10*/].f_9 + (unk_0x0000000050597EE2() * 1.5f));
										}
										else
										{
											Local_2917[iParam0 /*10*/].f_9 = (Local_2917[iParam0 /*10*/].f_9 + unk_0x0000000050597EE2());
										}
										iVar11 = unk_0xF34EE736CF047844((IntToFloat(Local_2917[iParam0 /*10*/].f_7) * (1f - (Local_2917[iParam0 /*10*/].f_9 / 90f))));
										if (iVar11 > 0)
										{
											unk_0xD8DA14EE2EDB99FE(unk_0x17B5CC8A8615737D(), iVar10, iVar11, 0);
										}
										else
										{
											unk_0xD8DA14EE2EDB99FE(unk_0x17B5CC8A8615737D(), iVar10, 0, 0);
										}
									}
								}
							}
							break;
					}
					break;
				
				case 52:
					func_15("CHN2_STOP_TRACK", 0, func_167());
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 53:
					unk_0xE4F11FC7E3A665A1("AZL_CHN2_METH_LAB_FARM_FIRE", 1, 1);
					func_166(1);
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 54:
					func_166(0);
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 55:
					unk_0x79920BB32F3C316F(3);
					unk_0xBE02ABAAC92D1A06(3);
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 56:
					switch (Local_2917[iParam0 /*10*/].f_6)
					{
						case 0:
							if (unk_0x23E9113C762466ED(Local_755[4 /*33*/].f_20))
							{
								unk_0x7572E8CAC3330ACE(&(Local_755[4 /*33*/].f_20));
							}
							if (unk_0x23E9113C762466ED(Local_755[5 /*33*/].f_20))
							{
								unk_0x7572E8CAC3330ACE(&(Local_755[5 /*33*/].f_20));
							}
							iVar12 = 0;
							while (iVar12 < iLocal_2657)
							{
								if (unk_0x23E9113C762466ED(iLocal_2657[iVar12]))
								{
									unk_0x7572E8CAC3330ACE(&(iLocal_2657[iVar12]));
								}
								iVar12++;
							}
							unk_0x924CDE68BA2ED3BA(joaat("prop_cs_beer_bot_01"));
							unk_0x924CDE68BA2ED3BA(joaat("prop_ld_can_01"));
							unk_0x924CDE68BA2ED3BA(joaat("prop_cs_fertilizer"));
							Local_2917[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (unk_0xCA41A00932714525(Local_755[23 /*33*/]))
							{
								if (unk_0x23E9113C762466ED(iLocal_2878))
								{
									unk_0x7572E8CAC3330ACE(&iLocal_2878);
									unk_0x1309F0C1CB4DA798(joaat("weapon_sawnoffshotgun"));
									Local_2917[iParam0 /*10*/].f_3 = 1;
								}
							}
							break;
					}
					break;
				
				case 47:
					if (!unk_0xCA41A00932714525(Local_755[11 /*33*/]))
					{
						if (!unk_0x872115A210435770(Local_755[11 /*33*/]))
						{
							if (unk_0x94E3E074F38DF86C() > Local_2917[iParam0 /*10*/].f_7)
							{
								if (!unk_0xCA41A00932714525(Local_755[11 /*33*/]))
								{
									unk_0xECF05B7D463A3321(Local_755[11 /*33*/], "WHIMPER", "WAVELOAD_PAIN_MALE", "SPEECH_PARAMS_FORCE_NORMAL", 0);
									Local_2917[iParam0 /*10*/].f_7 = (unk_0x94E3E074F38DF86C() + unk_0x0E29C61F26D96FDB(3500, 5000));
								}
							}
						}
					}
					break;
				
				case 41:
					switch (Local_2917[iParam0 /*10*/].f_6)
					{
						case 0:
							unk_0xE1324F59713746FA(joaat("ig_taocheng"));
							unk_0xE1324F59713746FA(joaat("ig_taostranslator"));
							unk_0xA0E7D0E8FE126EE8("misschinese2_crystalmaze");
							if (iLocal_2884 == -1 || (iLocal_2884 != -1 && !unk_0x33CB7E3A2B3E527C(iLocal_2884)))
							{
								iLocal_2884 = unk_0x8655B796E2C96969(1991.081f, 3054.517f, 46.71474f, 4f, 4f, 4f, 0f, 0, 3);
							}
							Local_2917[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if ((unk_0xF4F8AE8DD0F08C1E("misschinese2_crystalmaze") && unk_0x9F746898F7881612(joaat("ig_taocheng"))) && unk_0x9F746898F7881612(joaat("ig_taostranslator")))
							{
								if (!unk_0x23E9113C762466ED(Local_755[11 /*33*/]))
								{
									Local_755[11 /*33*/] = unk_0x2AD5F4170F4ACBEB(26, joaat("ig_taocheng"), 1991.988f, 3054.51f, 46.215f, 0, 1, 1);
									unk_0x3BB70315907D9456(Local_755[11 /*33*/], iLocal_1618);
									unk_0x6F65279C9BC14EDB(Local_755[11 /*33*/], 0);
								}
								else if (!unk_0xCA41A00932714525(Local_755[11 /*33*/]))
								{
									unk_0x3BB70315907D9456(Local_755[11 /*33*/], iLocal_1618);
									unk_0x6F65279C9BC14EDB(Local_755[11 /*33*/], 0);
								}
								if (!unk_0x23E9113C762466ED(Local_755[10 /*33*/]))
								{
									Local_755[10 /*33*/] = unk_0x2AD5F4170F4ACBEB(26, joaat("ig_taostranslator"), 1991.988f, 3054.51f, 46.215f, 0, 1, 1);
									unk_0x3BB70315907D9456(Local_755[10 /*33*/], iLocal_1618);
									unk_0x6F65279C9BC14EDB(Local_755[10 /*33*/], 0);
									unk_0xCAA97B7826076AFA(Local_755[10 /*33*/], 1, 0, 1, 0);
								}
								else if (!unk_0xCA41A00932714525(Local_755[10 /*33*/]))
								{
									unk_0x3BB70315907D9456(Local_755[10 /*33*/], iLocal_1618);
									unk_0x6F65279C9BC14EDB(Local_755[10 /*33*/], 0);
								}
								if (!unk_0xCA41A00932714525(Local_755[11 /*33*/]))
								{
									if (!unk_0x00743AFDA92F3B04(Local_2917[iParam0 /*10*/].f_7))
									{
										Local_2917[iParam0 /*10*/].f_7 = unk_0x356EABB012B22D07(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
										unk_0xD3BB86584359B533(Local_2917[iParam0 /*10*/].f_7, 1);
									}
									unk_0xA17D768ED938600C(Local_755[11 /*33*/], Local_2917[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 257, 16, 1148846080, 0);
								}
								if (!unk_0xCA41A00932714525(Local_755[10 /*33*/]))
								{
									if (!unk_0x00743AFDA92F3B04(Local_2917[iParam0 /*10*/].f_7))
									{
										Local_2917[iParam0 /*10*/].f_7 = unk_0x356EABB012B22D07(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
										unk_0xD3BB86584359B533(Local_2917[iParam0 /*10*/].f_7, 1);
									}
									unk_0xA17D768ED938600C(Local_755[10 /*33*/], Local_2917[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 257, 16, 1148846080, 0);
								}
								Local_2917[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 2:
							if (!unk_0xCA41A00932714525(Local_755[10 /*33*/]) && !unk_0xCA41A00932714525(Local_755[11 /*33*/]))
							{
								unk_0x2F933BB106547968(Local_755[10 /*33*/], 0, 0, 0, 0);
								unk_0xCC61640A821F277C(Local_755[11 /*33*/], 1);
								unk_0xCC61640A821F277C(Local_755[10 /*33*/], 1);
								if (!unk_0x00743AFDA92F3B04(Local_2917[iParam0 /*10*/].f_7))
								{
									Local_2917[iParam0 /*10*/].f_7 = unk_0x356EABB012B22D07(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
									unk_0xA17D768ED938600C(Local_755[11 /*33*/], Local_2917[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 257, 16, 1148846080, 0);
									unk_0xA17D768ED938600C(Local_755[10 /*33*/], Local_2917[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 257, 16, 1148846080, 0);
									unk_0xD3BB86584359B533(Local_2917[iParam0 /*10*/].f_7, 1);
								}
								unk_0x6018E338F7ABCE75(Local_755[11 /*33*/], 118, 0);
								unk_0x6018E338F7ABCE75(Local_755[11 /*33*/], 208, 1);
								unk_0x6018E338F7ABCE75(Local_755[10 /*33*/], 118, 0);
								unk_0x6018E338F7ABCE75(Local_755[10 /*33*/], 208, 1);
								Local_2917[iParam0 /*10*/].f_6 = 900;
							}
							break;
						
						case 900:
							if (!unk_0xCA41A00932714525(Local_755[11 /*33*/]))
							{
								if (!unk_0x7F4AE93855973529(Local_755[11 /*33*/]))
								{
									if (unk_0x00743AFDA92F3B04(Local_2917[iParam0 /*10*/].f_7))
									{
										if (unk_0x96F65998C0685177(Local_2917[iParam0 /*10*/].f_7) == 1f)
										{
											Local_2917[iParam0 /*10*/].f_7 = unk_0x356EABB012B22D07(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
											unk_0xD3BB86584359B533(Local_2917[iParam0 /*10*/].f_7, 1);
											if (unk_0x0E29C61F26D96FDB(0, 3) < 2)
											{
												unk_0xA17D768ED938600C(Local_755[11 /*33*/], Local_2917[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_Base_TaoCheng", 1000f, -4f, 257, 16, 1148846080, 0);
												if (!unk_0xCA41A00932714525(Local_755[10 /*33*/]))
												{
													if (!unk_0x7F4AE93855973529(Local_755[10 /*33*/]))
													{
														if (!unk_0x48B8265059381CD0(Local_2917[iParam0 /*10*/].f_8, 0))
														{
															unk_0xA17D768ED938600C(Local_755[10 /*33*/], Local_2917[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_Base_taotranslator", 1000f, -4f, 257, 16, 1148846080, 0);
														}
													}
												}
											}
											else
											{
												unk_0xA17D768ED938600C(Local_755[11 /*33*/], Local_2917[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 257, 16, 1148846080, 0);
												if (!unk_0xCA41A00932714525(Local_755[10 /*33*/]))
												{
													if (!unk_0x7F4AE93855973529(Local_755[10 /*33*/]))
													{
														if (!unk_0x48B8265059381CD0(Local_2917[iParam0 /*10*/].f_8, 0))
														{
															unk_0xA17D768ED938600C(Local_755[10 /*33*/], Local_2917[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 257, 16, 1148846080, 0);
														}
													}
												}
											}
										}
									}
									else
									{
										Local_2917[iParam0 /*10*/].f_7 = unk_0x356EABB012B22D07(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
										unk_0xA17D768ED938600C(Local_755[11 /*33*/], Local_2917[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 257, 16, 1148846080, 0);
										unk_0xD3BB86584359B533(Local_2917[iParam0 /*10*/].f_7, 1);
									}
								}
							}
							if (!unk_0xCA41A00932714525(Local_755[10 /*33*/]))
							{
								if (((unk_0xC017443DBE6DA4D6(Local_755[10 /*33*/], unk_0x17B5CC8A8615737D(), 1) || unk_0x7F4AE93855973529(Local_755[10 /*33*/])) || unk_0xCA41A00932714525(Local_755[11 /*33*/])) || (!unk_0xCA41A00932714525(Local_755[10 /*33*/]) && unk_0x1F8F07D86DA1A701(Local_755[10 /*33*/], 1785177548) == 2))
								{
									if (!unk_0x48B8265059381CD0(Local_2917[iParam0 /*10*/].f_8, 0))
									{
										unk_0x15848523A8959DBC(Local_755[10 /*33*/]);
										func_93();
										unk_0xCA58071CE9CCE891(0, unk_0x17B5CC8A8615737D(), 30f, 20000, 0, 0);
										unk_0x4E61D536D3C86A36(0, -1);
										func_92(&(Local_755[10 /*33*/]), 0);
										unk_0xEB79FECD9022AAF0(&(Local_2917[iParam0 /*10*/].f_8), 0);
									}
								}
							}
							if (!unk_0xCA41A00932714525(Local_755[11 /*33*/]))
							{
								if (((unk_0xC017443DBE6DA4D6(Local_755[11 /*33*/], unk_0x17B5CC8A8615737D(), 1) || unk_0x7F4AE93855973529(Local_755[11 /*33*/])) || unk_0x48B8265059381CD0(Local_2917[iParam0 /*10*/].f_8, 1)) || (!unk_0xCA41A00932714525(Local_755[11 /*33*/]) && unk_0x1F8F07D86DA1A701(Local_755[11 /*33*/], 1785177548) == 2))
								{
									unk_0x4B04B4FAE554FA03(Local_755[11 /*33*/], 0);
									if (!unk_0x7F4AE93855973529(Local_755[11 /*33*/]))
									{
									}
								}
							}
							if (func_67(unk_0x17B5CC8A8615737D(), 1991.988f, 3054.51f, 46.215f, 1) > 200f)
							{
								if (unk_0x23E9113C762466ED(Local_755[11 /*33*/]) && unk_0x23E9113C762466ED(Local_755[10 /*33*/]))
								{
									unk_0x478AE709A466CB7E(&(Local_755[11 /*33*/]));
									unk_0x478AE709A466CB7E(&(Local_755[10 /*33*/]));
								}
								unk_0x924CDE68BA2ED3BA(joaat("ig_taocheng"));
								unk_0x924CDE68BA2ED3BA(joaat("ig_taostranslator"));
								unk_0xF9FFB9857F3120F8("misschinese2_crystalmaze");
								if (iLocal_2884 != -1)
								{
									if (unk_0x33CB7E3A2B3E527C(iLocal_2884))
									{
										unk_0xE73D1B19D9500603(iLocal_2884);
									}
								}
								Local_2917[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					if (func_67(unk_0x17B5CC8A8615737D(), 1995.169f, 3062.162f, 46.049f, 1) < 7f)
					{
						if (!unk_0xCA41A00932714525(Local_755[11 /*33*/]))
						{
							if (unk_0x1F8F07D86DA1A701(Local_755[11 /*33*/], 150319005) != 1)
							{
								unk_0x4718A774D9248520(Local_755[11 /*33*/], unk_0x17B5CC8A8615737D(), 4000, 2096, 2);
							}
						}
						if (!unk_0xCA41A00932714525(Local_755[10 /*33*/]))
						{
							if (unk_0x1F8F07D86DA1A701(Local_755[10 /*33*/], 150319005) != 1)
							{
								unk_0x4718A774D9248520(Local_755[10 /*33*/], unk_0x17B5CC8A8615737D(), 4000, 2096, 2);
							}
						}
					}
					break;
				
				case 13:
					iVar13 = 0;
					iLocal_2887 = 0;
					iVar13 = 0;
					while (iVar13 < Local_755.f_0)
					{
						if (unk_0x23E9113C762466ED(Local_755[iVar13 /*33*/]))
						{
							if (unk_0xCA41A00932714525(Local_755[iVar13 /*33*/]))
							{
								if (Local_755[iVar13 /*33*/].f_21 == 0)
								{
									if (((unk_0x5767F696A1303440(Local_755[iVar13 /*33*/]) == 392730790 || unk_0x5767F696A1303440(Local_755[iVar13 /*33*/]) == joaat("weapon_heavysniper")) || unk_0x5767F696A1303440(Local_755[iVar13 /*33*/]) == joaat("weapon_remotesniper")) || unk_0x5767F696A1303440(Local_755[iVar13 /*33*/]) == joaat("weapon_sniperrifle"))
									{
										iLocal_2887++;
									}
									Local_755[iVar13 /*33*/].f_21 = 1;
								}
							}
						}
						iVar13++;
					}
					if (iLocal_2887 > 0)
					{
					}
					if (iLocal_2887 > 1)
					{
						func_165(150);
						Local_2917[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 14:
					func_15("CHN2_SNIPE_START", 0, "CHN2_EXPLODE");
					unk_0x2DE9FDD822EE641B(4f, 15f, 4);
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 15:
					if (func_87(9))
					{
						func_15("CHN2_SPOTTED", 0, "CHN2_EXPLODE");
					}
					else
					{
						func_15("CHN2_TO_HOUSE", 0, "CHN2_EXPLODE");
					}
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 16:
					if (unk_0xAF6D1E258B973F1D(uLocal_2675))
					{
						unk_0xC2E11A6D29A07A71(uLocal_2675);
					}
					iVar14 = 0;
					unk_0xEB79FECD9022AAF0(&iVar14, 3);
					unk_0xEB79FECD9022AAF0(&iVar14, 8);
					unk_0xEB79FECD9022AAF0(&iVar14, 1);
					if (!unk_0xAF6D1E258B973F1D(uLocal_2675))
					{
						uLocal_2675 = unk_0xA26C2D9EE51CAC7D(joaat("pickup_weapon_petrolcan"), 2436.775f, 4967.487f, 41.4f, iVar14, -1, 1, 0);
						unk_0x85C3B935EDEA6E23(uLocal_2675, "V_8_BasementRm");
						uLocal_2677 = func_164(uLocal_2675);
						unk_0xAAF15482D9DB27D9(uLocal_2677, "FRMBLIP");
					}
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 17:
					if (!func_30(5))
					{
						func_166(1);
						unk_0x4A5D4AD0FE6ACF73("CHI_2_SHOOTOUT_STEALTH");
						unk_0xFFE4319CE7BE2DBA(1);
						Local_2917[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 19:
					unk_0xF9FFB9857F3120F8("misschinese2_barrelRoll");
					unk_0xA617A761C0955C65("move_m@gangster@var_e");
					unk_0xA617A761C0955C65("move_m@gangster@var_f");
					unk_0xA617A761C0955C65("move_m@gangster@generic");
					unk_0xF9FFB9857F3120F8("misschinese2_bank5");
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 20:
					switch (Local_2917[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_2917[iParam0 /*10*/].f_7 = unk_0x94E3E074F38DF86C() + 4000;
							Local_2917[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (unk_0x94E3E074F38DF86C() > Local_2917[iParam0 /*10*/].f_7)
							{
								Local_2917[iParam0 /*10*/].f_7 = 0;
								while (Local_2917[iParam0 /*10*/].f_7 < Local_755.f_0)
								{
									if (!unk_0xCA41A00932714525(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/]))
									{
										if (unk_0xF34287B610CF02CA(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/]) == 0)
										{
											Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/].f_1 = 5;
											Local_1619[Local_2917[iParam0 /*10*/].f_7 /*24*/].f_3 = 7;
											Local_1619[Local_2917[iParam0 /*10*/].f_7 /*24*/].f_4 = 0;
											Local_1619[Local_2917[iParam0 /*10*/].f_7 /*24*/].f_5 = 0;
											func_99(Local_2917[iParam0 /*10*/].f_7, 27, 0, 0);
											unk_0x3BB70315907D9456(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/], iLocal_1617);
											func_128(&(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/].f_25));
										}
									}
									Local_2917[iParam0 /*10*/].f_7++;
								}
							}
							break;
					}
					break;
				
				case 21:
					Local_2917[iParam0 /*10*/].f_7 = 0;
					while (Local_2917[iParam0 /*10*/].f_7 < Local_755.f_0)
					{
						if (!unk_0xCA41A00932714525(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/]))
						{
							if (unk_0x70A9F320A34FAC28(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/], 2457.885f, 4981.169f, 50.00518f, 2441.58f, 4965.088f, 56.24006f, 34.3125f, 0, 1, 0))
							{
								unk_0x478AE709A466CB7E(&(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/]));
							}
						}
						Local_2917[iParam0 /*10*/].f_7++;
					}
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 22:
					func_15("CHN2_ENTER_HOUSE", 0, "CHN2_EXPLODE");
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 23:
					iVar15 = 0;
					while (iVar15 < Local_755.f_0)
					{
						if (!unk_0xCA41A00932714525(Local_755[iVar15 /*33*/]))
						{
							if (unk_0x59499E9FE45DE5D5(Local_755[iVar15 /*33*/]) != unk_0x765F5B806B517045("V_8_BasementRm"))
							{
								func_99(iVar15, 27, 0, 0);
								Local_755[iVar15 /*33*/].f_1 = 5;
								Local_1619[iVar15 /*24*/].f_3 = 7;
								Local_755[iVar15 /*33*/].f_5 = 0;
							}
						}
						iVar15++;
					}
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 24:
					switch (Local_2917[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_2917[iParam0 /*10*/].f_7 = func_18(10);
							if (Local_2917[iParam0 /*10*/].f_7 != -1)
							{
								Local_2917[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if (!unk_0xCA41A00932714525(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/]))
							{
								func_99(Local_2917[iParam0 /*10*/].f_7, 18, 0, 0);
								Local_2917[iParam0 /*10*/].f_3 = 1;
							}
							else
							{
								Local_2917[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 25:
					if (unk_0x1B30FA4AAC96F398(unk_0x17B5CC8A8615737D()) || func_87(9))
					{
						unk_0xE2D8919DE58194D4(unk_0x17B5CC8A8615737D(), 1, -1, 0);
						Local_2917[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 26:
					unk_0xB8CAC5F3774894A1("CHI_2_SHOOTOUT_STEALTH");
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 27:
					unk_0x4A5D4AD0FE6ACF73("CHI_2_SHOOTOUT_ENEMIES_ALERTED");
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 28:
					if (unk_0x4E1850F5FF023071("CHI_2_SHOOTOUT_ENEMIES_ALERTED"))
					{
						unk_0xB8CAC5F3774894A1("CHI_2_SHOOTOUT_ENEMIES_ALERTED");
					}
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 44:
					if (!unk_0x4E1850F5FF023071("CHI_2_SHOOTOUT_IN_HOUSE"))
					{
						if (func_87(12))
						{
							unk_0x4A5D4AD0FE6ACF73("CHI_2_SHOOTOUT_IN_HOUSE");
						}
					}
					else if (func_156(12))
					{
						unk_0xB8CAC5F3774894A1("CHI_2_SHOOTOUT_IN_HOUSE");
					}
					break;
				
				case 45:
					if ((func_87(9) || (!unk_0xCA41A00932714525(Local_755[8 /*33*/]) && unk_0x018477A7947BC4B4(Local_755[8 /*33*/], 0))) || (!unk_0xCA41A00932714525(Local_755[9 /*33*/]) && unk_0x018477A7947BC4B4(Local_755[9 /*33*/], 0)))
					{
						if (!unk_0xCA41A00932714525(Local_755[8 /*33*/]))
						{
							unk_0xFA4023BBD5BCB8B5(Local_755[8 /*33*/], 45);
						}
						if (!unk_0xCA41A00932714525(Local_755[9 /*33*/]))
						{
							unk_0xFA4023BBD5BCB8B5(Local_755[9 /*33*/], 45);
						}
						Local_2917[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 29:
					if (func_87(9))
					{
						Local_2917[iParam0 /*10*/].f_7 = 0;
						while (Local_2917[iParam0 /*10*/].f_7 < Local_755.f_0)
						{
							if (!unk_0xCA41A00932714525(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/]))
							{
								unk_0x9593ABA7B045F264(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/], 60f);
							}
							Local_2917[iParam0 /*10*/].f_7++;
						}
						Local_2917[iParam0 /*10*/].f_3 = 1;
					}
					else
					{
						switch (Local_2917[iParam0 /*10*/].f_6)
						{
							case 0:
								if (func_87(12))
								{
									Local_2917[iParam0 /*10*/].f_7 = 0;
									while (Local_2917[iParam0 /*10*/].f_7 < Local_755.f_0)
									{
										if (!unk_0xCA41A00932714525(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/]))
										{
											if (Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/].f_1 == 1)
											{
												unk_0x9593ABA7B045F264(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/], 5f);
											}
										}
										Local_2917[iParam0 /*10*/].f_7++;
									}
									Local_2917[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (func_156(12))
								{
									Local_2917[iParam0 /*10*/].f_7 = 0;
									while (Local_2917[iParam0 /*10*/].f_7 < Local_755.f_0)
									{
										if (!unk_0xCA41A00932714525(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/]))
										{
											if (Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/].f_1 == 1)
											{
												unk_0x9593ABA7B045F264(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/], 30f);
											}
										}
										Local_2917[iParam0 /*10*/].f_7++;
									}
									Local_2917[iParam0 /*10*/].f_6 = 0;
								}
								break;
							}
					}
					break;
				
				case 46:
					switch (Local_2917[iParam0 /*10*/].f_6)
					{
						case 0:
							unk_0xA0E7D0E8FE126EE8("misschinese2_crystalmaze");
							Local_2917[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (unk_0xF4F8AE8DD0F08C1E("misschinese2_crystalmaze"))
							{
								if (!unk_0xCA41A00932714525(Local_755[23 /*33*/]))
								{
									Local_2917[iParam0 /*10*/].f_7 = unk_0x356EABB012B22D07(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
									unk_0x8B06F7FDDA8B98FB(Local_2917[iParam0 /*10*/].f_7, 1);
									unk_0xA17D768ED938600C(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/], Local_2917[iParam0 /*10*/].f_8, "misschinese2_crystalmaze", "_stand_to_aim", 1000f, -8f, 0, 0, 1148846080, 0);
									Local_2917[iParam0 /*10*/].f_6++;
								}
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 30:
					switch (Local_2917[iParam0 /*10*/].f_6)
					{
						case 0:
							unk_0xE1324F59713746FA(joaat("blazer"));
							Local_2917[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (unk_0x9F746898F7881612(joaat("blazer")))
							{
								iLocal_2508 = unk_0x692A2891A2BA7352(joaat("blazer"), 2478.587f, 4941.803f, 43.6736f, 227.2903f, 1, 1);
								unk_0x482AE8C0EAF5AE07(iLocal_2508, 1084227584);
								Local_2917[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 31:
					unk_0xE2D8919DE58194D4(unk_0x17B5CC8A8615737D(), 0, -1, 0);
					func_163(0);
					func_161();
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 32:
					switch (Local_2917[iParam0 /*10*/].f_6)
					{
						case 0:
							if (func_87(29))
							{
								if (unk_0xA3794949321E107C(uLocal_2677))
								{
									unk_0x020DF7300725ECAB(&uLocal_2677);
								}
								func_12(0);
								if (func_84("FRMFLC", 0, 0))
								{
									unk_0xD12BCC85C2F8B1DE();
								}
								func_10(157, 0);
								unk_0x2DE9FDD822EE641B(3f, 10f, 4);
								if (iLocal_2649 == 0)
								{
									iLocal_2649 = unk_0x034EB52F6D89BFA0(unk_0x17B5CC8A8615737D(), joaat("weapon_petrolcan"));
								}
								Local_2917[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if (!func_87(29))
							{
								func_9(158, (iLocal_2649 - unk_0x034EB52F6D89BFA0(unk_0x17B5CC8A8615737D(), joaat("weapon_petrolcan"))), 1);
								iLocal_2679 = unk_0x29280EF6724677F5(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 20f, unk_0xD5D69CE5364D1F97(joaat("weapon_petrolcan")), 0, 0, 1);
								if (iLocal_2679 != 0)
								{
									if (unk_0xA3794949321E107C(uLocal_2677))
									{
										unk_0x020DF7300725ECAB(&uLocal_2677);
									}
									uLocal_2677 = func_13(iLocal_2679);
									func_12(1);
									func_11(0, 157);
								}
								Local_2917[iParam0 /*10*/].f_6 = 0;
							}
							break;
					}
					if (func_8())
					{
						func_11(0, 157);
						Local_2917[iParam0 /*10*/].f_3 = 1;
						func_32(17, 0);
					}
					break;
				
				case 33:
					switch (Local_2917[iParam0 /*10*/].f_6)
					{
						case 0:
							unk_0xD2EFABA17D4F41B0("arm2_30");
							Local_2917[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (unk_0x246AF348B8F0270F("arm2_30"))
							{
								if (func_87(29))
								{
									unk_0xE67BCD73FCDCAF1B("arm2_30", 1, 1065353216, 1056964608);
									unk_0x2D932CC8ACD63A63("arm2_30", 2);
									Local_2917[iParam0 /*10*/].f_6++;
								}
							}
							break;
						
						case 2:
							if (!func_87(29))
							{
								unk_0xE67BCD73FCDCAF1B("arm2_30", 0, 1065353216, 1056964608);
								Local_2917[iParam0 /*10*/].f_6 = 1;
							}
							break;
					}
					break;
				
				case 34:
					if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
					{
						if (unk_0xF34287B610CF02CA(unk_0x17B5CC8A8615737D()) == 0)
						{
							if (func_67(unk_0x17B5CC8A8615737D(), 2451.08f, 4961.463f, 44.4392f, 1) < 20f)
							{
								unk_0x8DF8BDE651DEC4D0(0, 0, 0, 0, 0);
							}
						}
					}
					break;
				
				case 35:
					func_15("CHN2_JERRY_CAN", 0, "CHN2_EXPLODE");
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 36:
					func_15("CHN2_EXIT_HOUSE", 0, "CHN2_EXPLODE");
					unk_0x4876B73C5A534970(uLocal_2668, "FarmhouseFire_Ignite", Local_2669, "CHINESE2_SOUNDS", 0, 0, 0);
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 37:
					unk_0x4A5D4AD0FE6ACF73("CHI_2_POUR_GAS");
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 38:
					switch (Local_2917[iParam0 /*10*/].f_6)
					{
						case 0:
							unk_0x985A2515CBAF7290("FARMHOUSE_FIRE", 0, -1);
							unk_0x985A2515CBAF7290("FARMHOUSE_FIRE_BG", 0, -1);
							break;
					}
					break;
				
				case 39:
					switch (Local_2917[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_2917[iParam0 /*10*/].f_7 = func_18(4);
							Local_2917[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (func_67(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/], 2454.895f, 4950.895f, 44.1488f, 1) > 100f && func_4(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/], unk_0x17B5CC8A8615737D(), 1) > 100f)
							{
								iVar16 = func_18(4);
								func_128(&(Local_755[iVar16 /*33*/].f_25));
								if (!unk_0xCA41A00932714525(Local_755[iVar16 /*33*/]))
								{
									unk_0x650BB0E111420EAF(Local_755[iVar16 /*33*/], 1);
									unk_0x6500ADB01E821BC0(&(Local_755[iVar16 /*33*/]));
								}
								Local_755[iVar16 /*33*/] = 0;
								iVar16 = func_18(5);
								func_128(&(Local_755[iVar16 /*33*/].f_25));
								if (!unk_0xCA41A00932714525(Local_755[iVar16 /*33*/]))
								{
									unk_0x650BB0E111420EAF(Local_755[iVar16 /*33*/], 1);
									unk_0x6500ADB01E821BC0(&(Local_755[iVar16 /*33*/]));
								}
								Local_755[iVar16 /*33*/] = 0;
								iVar16 = func_18(7);
								if (!unk_0xCA41A00932714525(Local_755[iVar16 /*33*/]))
								{
									unk_0x650BB0E111420EAF(Local_755[iVar16 /*33*/], 1);
									unk_0x6500ADB01E821BC0(&(Local_755[iVar16 /*33*/]));
								}
								func_128(&(Local_755[iVar16 /*33*/].f_25));
								Local_755[iVar16 /*33*/] = 0;
								if (unk_0x45CD66F0A131E554(iLocal_2507, 0))
								{
									unk_0x921CF98C637B0043(&iLocal_2507);
								}
								Local_2917[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 40:
					if (func_101(24, joaat("a_m_m_hillbilly_01"), 2433.123f, 4960.47f, 45.8218f, 301f, joaat("weapon_smg"), 1, 1))
					{
						unk_0xFA4023BBD5BCB8B5(Local_755[24 /*33*/], 100);
						if (!unk_0xCA41A00932714525(Local_755[15 /*33*/]))
						{
							unk_0xFA4023BBD5BCB8B5(Local_755[15 /*33*/], 100);
						}
						if (!unk_0xCA41A00932714525(Local_755[16 /*33*/]))
						{
							unk_0xFA4023BBD5BCB8B5(Local_755[16 /*33*/], 100);
						}
						if (!unk_0xCA41A00932714525(Local_755[17 /*33*/]))
						{
							unk_0xFA4023BBD5BCB8B5(Local_755[17 /*33*/], 100);
						}
						unk_0x7DD7196E1A0C1D43(Local_755[24 /*33*/], unk_0x17B5CC8A8615737D(), 0, 16);
						unk_0xE1F5F70A15CF94CB(Local_755[24 /*33*/], 1);
						unk_0x4B04B4FAE554FA03(Local_755[24 /*33*/], 200);
						Local_2917[iParam0 /*10*/].f_3 = 1;
					}
					break;
			}
			if (Local_2917[iParam0 /*10*/].f_6 == -1)
			{
				Local_2917[iParam0 /*10*/].f_3 = 1;
				Local_2917[iParam0 /*10*/].f_6 = 0;
				Local_2917[iParam0 /*10*/].f_1 = 0;
			}
		}
	}
}

void func_161()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = 0;
	while (iVar0 < Local_444.f_0)
	{
		if (!func_162(Local_444[iVar0 /*5*/], 0f, 0f, 0f, 0))
		{
			unk_0x8F088665928570EA(Local_444[iVar0 /*5*/], 4f);
			unk_0x1B60289D0F2A2E3C(Local_444[iVar0 /*5*/], 2f, 1, 0, 0, 0);
			iVar1 = 0;
			while (iVar1 < Local_755.f_0)
			{
				if (unk_0x23E9113C762466ED(Local_755[iVar1 /*33*/]))
				{
					Var2 = { unk_0x57240623C1BC6E88(Local_755[iVar1 /*33*/], 0) };
					if (unk_0xB7A628320EFF8E47(Var2, Local_444[iVar0 /*5*/]) < 2f && Var2.f_2 > 43.9f)
					{
						unk_0x478AE709A466CB7E(&(Local_755[iVar1 /*33*/]));
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_162(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_163(bool bParam0)
{
	int iVar0;
	
	bLocal_265 = true;
	iLocal_269 = 0;
	iLocal_267 = -1;
	iLocal_443 = 0;
	iLocal_443 = 0;
	iLocal_437 = 0;
	if (bParam0 == 0)
	{
		iLocal_262 = 1;
	}
	iVar0 = 0;
	while (iVar0 < Local_444.f_0)
	{
		unk_0x794A3BB49F59DF31(Local_444[iVar0 /*5*/], 1f);
		if (!unk_0xA3794949321E107C(Local_444[iVar0 /*5*/].f_3))
		{
			if (!func_162(Local_444[iVar0 /*5*/], 0f, 0f, 0f, 0))
			{
				iLocal_269++;
				Local_444[iVar0 /*5*/].f_3 = func_5(Local_444[iVar0 /*5*/], 0);
				unk_0x5202472B608D60CC(Local_444[iVar0 /*5*/].f_3, 1);
				unk_0x00EA14207118EEE2(Local_444[iVar0 /*5*/].f_3, 0.4f);
				unk_0x1441D969BF79AD61(Local_444[iVar0 /*5*/].f_3, 0);
				if (!bParam0)
				{
					unk_0x5F97CFBDE7F2B599(Local_444[iVar0 /*5*/].f_3, 0);
				}
				unk_0xCC930AE12D020496(Local_444[iVar0 /*5*/].f_3, 5);
			}
		}
		else
		{
			Local_444[iVar0 /*5*/] = { unk_0xCC1DFCD030782230(Local_444[iVar0 /*5*/].f_3) };
			if (!bParam0)
			{
				unk_0x5F97CFBDE7F2B599(Local_444[iVar0 /*5*/].f_3, 0);
			}
			else
			{
				unk_0x5F97CFBDE7F2B599(Local_444[iVar0 /*5*/].f_3, 255);
			}
			iLocal_269++;
		}
		Local_444[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_281.f_0)
	{
		Local_281[iVar0 /*5*/].f_1 = { 0f, 0f, 0f };
		Local_281[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
}

int func_164(var uParam0)
{
	var uVar0;
	
	if (!unk_0xAF6D1E258B973F1D(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x0F4B728BCFF10878(uParam0);
	unk_0x00EA14207118EEE2(uVar0, func_6(unk_0x63C468D583002D23(), 0.7f, 0.7f));
	return uVar0;
}

void func_165(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_55823 = 0;
	if (!Global_56047[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_67917)
	{
		if (Global_67918[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_67918[iVar1 /*9*/].f_1 = 1;
			Global_67918[iVar1 /*9*/].f_2 = 0f;
			if (Global_67918[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

void func_166(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_100756, unk_0x6AF6B39BFDB53CB5(), 24);
		Global_100750 = 1;
	}
	else
	{
		StringCopy(&Global_100756, "NULL", 24);
		Global_100750 = 0;
	}
}

var func_167()
{
	var uVar0;
	
	return uVar0;
}

int func_168()
{
	if (((((unk_0x6D95420A284C8601(2, 30) != 127 || unk_0x6D95420A284C8601(2, 31) != 127) || unk_0x79888727131C6854(2, 24)) || unk_0x79888727131C6854(2, 25)) || unk_0x6D95420A284C8601(2, 2) != 127) || unk_0x6D95420A284C8601(2, 1) != 127)
	{
		return 1;
	}
	return 0;
}

int func_169(int iParam0, int iParam1)
{
	if (Local_2917[iParam0 /*10*/] == iParam1)
	{
		return Local_2917[iParam0 /*10*/].f_6;
	}
	return -1;
}

void func_170(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	
	iVar0 = (iParam1 - iParam0);
	if (Local_3120[0 /*8*/] != iParam0 && Local_3120[iVar0 /*8*/] != iParam1)
	{
		iVar2 = 0;
		iVar1 = 0;
		while (iVar1 < Local_3120.f_0)
		{
			if (iVar1 <= iVar0)
			{
				Local_3120[iVar1 /*8*/] = (iParam0 + iVar2);
				Local_3120[iVar1 /*8*/].f_1 = 1;
				Local_3120[iVar1 /*8*/].f_2 = 0;
				Local_3120[iVar1 /*8*/].f_3 = 0;
				iVar2++;
			}
			else
			{
				Local_3120[iVar1 /*8*/].f_1 = 0;
			}
			iVar1++;
		}
	}
	iVar3 = 0;
	while (iVar3 < Local_3120.f_0)
	{
		switch (Local_3120[iVar3 /*8*/])
		{
			case 2:
				if (!Local_3120[iVar3 /*8*/].f_2)
				{
					if (Local_3120[iVar3 /*8*/].f_4 == 0)
					{
						if (func_84("FRMCHSE_1", 0, 0))
						{
							Local_3120[iVar3 /*8*/].f_4 = 1;
						}
					}
					else if (!func_84("FRMCHSE_1", 0, 0))
					{
						Local_3120[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 3:
				Local_3120[iVar3 /*8*/].f_2 = 0;
				if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
				{
					Local_3120[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 6:
				if (!Local_3120[iVar3 /*8*/].f_2)
				{
					if (func_156(7))
					{
						if (unk_0x5193E99B6917C701(2493.155f, 4970.315f, 43.88038f, 3.25f, 1, 1) || unk_0x579A94EB2BF9398F(2493.155f, 4970.315f, 43.88038f, 3.25f, 1))
						{
							Local_3120[iVar3 /*8*/].f_2 = 1;
						}
					}
					else
					{
						Local_3120[iVar3 /*8*/].f_1 = 0;
					}
				}
				break;
			
			case 7:
				if (!Local_3120[iVar3 /*8*/].f_2)
				{
					switch (Local_3120[iVar3 /*8*/].f_4)
					{
						case 0:
							Local_3120[iVar3 /*8*/].f_5 = func_18(8);
							Local_3120[iVar3 /*8*/].f_6 = func_18(9);
							Local_3120[iVar3 /*8*/].f_4++;
							break;
						
						case 1:
							if (Local_3120[iVar3 /*8*/].f_5 != -1 && Local_3120[iVar3 /*8*/].f_6 != -1)
							{
								if (unk_0x23E9113C762466ED(Local_755[Local_3120[iVar3 /*8*/].f_5 /*33*/]) && unk_0x23E9113C762466ED(Local_755[Local_3120[iVar3 /*8*/].f_6 /*33*/]))
								{
									if (unk_0xCA41A00932714525(Local_755[Local_3120[iVar3 /*8*/].f_5 /*33*/]) || unk_0xCA41A00932714525(Local_755[Local_3120[iVar3 /*8*/].f_6 /*33*/]))
									{
										Local_3120[iVar3 /*8*/].f_2 = 1;
									}
								}
							}
							break;
						}
				}
				break;
			
			case 9:
				if (bLocal_53)
				{
					Local_3120[iVar3 /*8*/].f_2 = 1;
					Local_3120[iVar3 /*8*/].f_1 = 0;
				}
				break;
			
			case 11:
				Local_3120[iVar3 /*8*/].f_2 = 0;
				if (unk_0x59499E9FE45DE5D5(unk_0x17B5CC8A8615737D()) == unk_0x765F5B806B517045("V_8_BasementRm"))
				{
					Local_3120[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 12:
				Local_3120[iVar3 /*8*/].f_2 = 0;
				if (unk_0xF34287B610CF02CA(unk_0x17B5CC8A8615737D()) != 0 && unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 2421.331f, 4954.833f, 25.32829f, 2466.796f, 4996.822f, 66.07018f, 37.1875f, 0, 1, 0))
				{
					Local_3120[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 13:
				Local_3120[iVar3 /*8*/].f_2 = 0;
				if (func_87(12))
				{
					if (!unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 2457.885f, 4981.169f, 50.00518f, 2441.58f, 4965.088f, 56.24006f, 34.3125f, 0, 1, 0))
					{
						Local_3120[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 14:
				if (!Local_3120[iVar3 /*8*/].f_2)
				{
					if (func_67(unk_0x17B5CC8A8615737D(), 2451.517f, 4973.122f, 44.2646f, 1) < 50f)
					{
						Local_3120[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 15:
				switch (Local_3120[iVar3 /*8*/].f_4)
				{
					case 0:
						Local_3120[iVar3 /*8*/].f_5 = func_18(17);
						if (Local_3120[iVar3 /*8*/].f_5 != -1)
						{
							Local_3120[iVar3 /*8*/].f_4++;
						}
						break;
					
					case 1:
						if (unk_0x23E9113C762466ED(Local_755[Local_3120[iVar3 /*8*/].f_5 /*33*/]))
						{
							if (unk_0xCA41A00932714525(Local_755[Local_3120[iVar3 /*8*/].f_5 /*33*/]))
							{
								if (func_67(Local_755[Local_3120[iVar3 /*8*/].f_5 /*33*/], 2427.851f, 4964.972f, 43.1704f, 1) < 3f)
								{
									Local_3120[iVar3 /*8*/].f_2 = 1;
									Local_3120[iVar3 /*8*/].f_4++;
								}
								else
								{
									Local_3120[iVar3 /*8*/].f_1 = 0;
								}
							}
						}
						break;
				}
				break;
			
			case 16:
				if (!Local_3120[iVar3 /*8*/].f_2)
				{
					switch (Local_3120[iVar3 /*8*/].f_4)
					{
						case 0:
							if (!func_30(5))
							{
								Local_3120[iVar3 /*8*/].f_4++;
							}
							break;
						
						case 1:
							bVar5 = false;
							bVar6 = false;
							iVar4 = 0;
							while (iVar4 < Local_755.f_0)
							{
								if (!unk_0xCA41A00932714525(Local_755[iVar4 /*33*/]))
								{
									bVar5 = true;
									if (Local_755[iVar4 /*33*/].f_1 == 1)
									{
										bVar6 = true;
										iVar4 = Local_755.f_0;
									}
								}
								iVar4++;
							}
							if (!bVar5)
							{
								Local_3120[iVar3 /*8*/].f_2 = 1;
							}
							else
							{
								Local_3120[iVar3 /*8*/].f_2 = 0;
							}
							if (bVar6)
							{
								func_91(10, 0);
							}
							else
							{
								func_91(10, 1);
							}
							break;
						}
				}
				break;
			
			case 23:
				if (!Local_3120[iVar3 /*8*/].f_2)
				{
					if (func_87(9))
					{
						Local_3120[iVar3 /*8*/].f_2 = 1;
						iVar8 = 0;
						iVar7 = 0;
						while (iVar7 < Local_755.f_0)
						{
							if (Local_755[iVar7 /*33*/].f_1 == 1)
							{
								if (!unk_0xCA41A00932714525(Local_755[iVar7 /*33*/]))
								{
									iVar8++;
									if (iVar8 > 1)
									{
										Local_3120[iVar3 /*8*/].f_2 = 0;
										iVar7 = Local_755.f_0;
									}
								}
							}
							iVar7++;
						}
					}
				}
				break;
			
			case 24:
				switch (Local_3120[iVar3 /*8*/].f_4)
				{
					case 0:
						if (func_67(unk_0x17B5CC8A8615737D(), 2446.674f, 4977.788f, 57.4583f, 1) < 250f)
						{
							Local_3120[iVar3 /*8*/].f_4++;
						}
						break;
					
					case 1:
						if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
						{
							iVar9 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
							if (unk_0xC5082382D5482C0C(unk_0x0324EEB10F81965F(iVar9)) || unk_0x8432EA469FDB418D(unk_0x0324EEB10F81965F(iVar9)))
							{
								if (func_67(unk_0x17B5CC8A8615737D(), 2446.674f, 4977.788f, 57.4583f, 0) > 700f)
								{
									Local_3120[iVar3 /*8*/].f_2 = 1;
								}
							}
							else
							{
								bVar10 = true;
							}
						}
						else
						{
							bVar10 = true;
						}
						if (bVar10)
						{
							if (func_67(unk_0x17B5CC8A8615737D(), 2446.674f, 4977.788f, 57.4583f, 1) > 250f)
							{
								Local_3120[iVar3 /*8*/].f_2 = 1;
							}
						}
						break;
				}
				break;
			
			case 26:
				if (func_67(unk_0x17B5CC8A8615737D(), 2441.065f, 4968.819f, 45.83075f, 1) < 2.75f)
				{
					if (!unk_0xCA41A00932714525(Local_755[15 /*33*/]))
					{
						if (func_67(Local_755[15 /*33*/], 2439.386f, 4962.049f, 45.9047f, 1) < 3f)
						{
							Local_3120[iVar3 /*8*/].f_2 = 1;
						}
					}
					if (!unk_0xCA41A00932714525(Local_755[16 /*33*/]))
					{
						if (func_67(Local_755[16 /*33*/], 2439.386f, 4962.049f, 45.9047f, 1) < 3f)
						{
							Local_3120[iVar3 /*8*/].f_2 = 1;
						}
					}
					if (!unk_0xCA41A00932714525(Local_755[17 /*33*/]))
					{
						if (func_67(Local_755[17 /*33*/], 2439.386f, 4962.049f, 45.9047f, 1) < 3f)
						{
							Local_3120[iVar3 /*8*/].f_2 = 1;
						}
					}
					Local_3120[iVar3 /*8*/].f_1 = 0;
				}
				break;
			
			case 27:
				switch (Local_3120[iVar3 /*8*/].f_4)
				{
					case 0:
						if (!unk_0xCA41A00932714525(Local_755[4 /*33*/]) && unk_0xD035C652F0986F10(Local_755[4 /*33*/]))
						{
							Local_3120[iVar3 /*8*/].f_4++;
						}
						if (!unk_0xCA41A00932714525(Local_755[5 /*33*/]) && unk_0xD035C652F0986F10(Local_755[5 /*33*/]))
						{
							Local_3120[iVar3 /*8*/].f_4++;
						}
						if (!unk_0xCA41A00932714525(Local_755[7 /*33*/]) && unk_0xD035C652F0986F10(Local_755[7 /*33*/]))
						{
							Local_3120[iVar3 /*8*/].f_4++;
						}
						Local_3120[iVar3 /*8*/].f_5 = unk_0x94E3E074F38DF86C() + 8000;
						break;
					
					case 1:
						if (unk_0x45CD66F0A131E554(iLocal_2507, 0))
						{
							if (func_90(unk_0x57240623C1BC6E88(iLocal_2507, 1), 5f, 150f))
							{
								Local_3120[iVar3 /*8*/].f_6 = (Local_3120[iVar3 /*8*/].f_6 + unk_0xF34EE736CF047844((unk_0x0000000050597EE2() * 1000f)));
							}
						}
						if (Local_3120[iVar3 /*8*/].f_6 > 1500)
						{
							Local_3120[iVar3 /*8*/].f_2 = 1;
						}
						if (unk_0x94E3E074F38DF86C() > Local_3120[iVar3 /*8*/].f_5)
						{
							Local_3120[iVar3 /*8*/].f_4++;
						}
						break;
				}
				break;
			
			case 30:
				switch (Local_3120[iVar3 /*8*/].f_4)
				{
					case 0:
						if (unk_0xAF6D1E258B973F1D(uLocal_2675))
						{
							if (unk_0x160653C8E405076A(uLocal_2675))
							{
								Local_3120[iVar3 /*8*/].f_4++;
							}
						}
						break;
					
					case 1:
						if (unk_0xAF6D1E258B973F1D(uLocal_2675))
						{
							if (!unk_0x160653C8E405076A(uLocal_2675))
							{
								if (unk_0x3C04DDC5730997E5(-1, 2435.252f, 4966.748f, 41.3476f, 4f))
								{
									Local_3120[iVar3 /*8*/].f_2 = 1;
								}
								Local_3120[iVar3 /*8*/].f_4++;
							}
						}
						break;
				}
				break;
			
			case 8:
				if (iLocal_57 && !bLocal_53)
				{
					Local_3120[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 17:
				if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 2442.819f, 4970.283f, 45.2481f, 2439.625f, 4966.862f, 48.14596f, 3.4375f, 0, 1, 0))
				{
					Local_3120[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 18:
				if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 2434.671f, 4959.104f, 44.85109f, 2440.5f, 4965.189f, 48.1231f, 3.625f, 0, 1, 0))
				{
					Local_3120[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 19:
				if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 2432.467f, 4959.473f, 44.94133f, 2430.797f, 4961.173f, 48.30901f, 1.5625f, 0, 1, 0))
				{
					Local_3120[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 21:
				if (bLocal_56)
				{
					Local_3120[iVar3 /*8*/].f_2 = 1;
					Local_3120[iVar3 /*8*/].f_1 = 0;
				}
				break;
			
			case 32:
				Local_3120[iVar3 /*8*/].f_2 = 0;
				if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 2447.671f, 4951.438f, 43.25576f, 2454.664f, 4957.856f, 47.89117f, 6.8125f, 0, 1, 0))
				{
					Local_3120[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 33:
				switch (Local_3120[iVar3 /*8*/].f_4)
				{
					case 0:
						if (unk_0x509A3191A6C4EB38(unk_0x17B5CC8A8615737D(), joaat("weapon_petrolcan"), 0))
						{
							Local_3120[iVar3 /*8*/].f_4++;
						}
						break;
					
					case 1:
						if (!unk_0x509A3191A6C4EB38(unk_0x17B5CC8A8615737D(), joaat("weapon_petrolcan"), 0))
						{
							Local_3120[iVar3 /*8*/].f_2 = 1;
						}
						break;
				}
				break;
			
			case 29:
				Local_3120[iVar3 /*8*/].f_2 = 0;
				switch (Local_3120[iVar3 /*8*/].f_5)
				{
					case 0:
						if (unk_0x509A3191A6C4EB38(unk_0x17B5CC8A8615737D(), joaat("weapon_petrolcan"), 0))
						{
							Local_3120[iVar3 /*8*/].f_5 = 10;
						}
						else
						{
							Local_3120[iVar3 /*8*/].f_5 = 20;
						}
						break;
				}
				if (unk_0x509A3191A6C4EB38(unk_0x17B5CC8A8615737D(), joaat("weapon_petrolcan"), 0))
				{
					if (Local_3120[iVar3 /*8*/].f_5 == 20)
					{
					}
					Local_3120[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 34:
				if (!Local_3120[iVar3 /*8*/].f_2 == 1)
				{
					if (func_8())
					{
						func_11(0, 157);
						Local_3120[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 35:
				if (Local_444[0 /*5*/].f_4 == 1)
				{
					Local_3120[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 36:
				Local_3120[iVar3 /*8*/].f_2 = 0;
				iVar11 = joaat("weapon_unarmed");
				if (unk_0x5CD8291F2C5E0AD1(unk_0x17B5CC8A8615737D(), &iVar11, 1))
				{
					if (iVar11 == joaat("weapon_petrolcan"))
					{
						if (unk_0x79888727131C6854(0, 24))
						{
							Local_3120[iVar3 /*8*/].f_2 = 1;
						}
					}
				}
				break;
			
			case 44:
				if (unk_0xB52F3660F2D6402D(-1, 2435.776f, 4963.067f, 39.34265f, 2428.118f, 4971.287f, 43.67327f, 11.875f))
				{
					if (!unk_0xB52F3660F2D6402D(24, 2435.776f, 4963.067f, 39.34265f, 2428.118f, 4971.287f, 43.67327f, 11.875f) && !unk_0xB52F3660F2D6402D(22, 2435.776f, 4963.067f, 39.34265f, 2428.118f, 4971.287f, 43.67327f, 11.875f))
					{
						Local_3120[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 41:
				switch (Local_3120[iVar3 /*8*/].f_4)
				{
					case 0:
						if (func_174())
						{
							iVar12 = func_173();
							if (iVar12 <= 17)
							{
								func_91(37, 1);
							}
							else
							{
								Local_3120[iVar3 /*8*/].f_2 = 1;
							}
							Local_3120[iVar3 /*8*/].f_4++;
						}
						break;
				}
				break;
			
			case 38:
				if (!Local_3120[iVar3 /*8*/].f_2)
				{
					if (func_172(17))
					{
						Local_3120[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 40:
				Local_3120[iVar3 /*8*/].f_2 = 0;
				if (unk_0xF34287B610CF02CA(unk_0x17B5CC8A8615737D()) != 0)
				{
					Local_3120[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 42:
				if (func_67(unk_0x17B5CC8A8615737D(), 2439.52f, 4969.67f, 52.65f, 1) > 42.5f)
				{
					Local_3120[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 43:
				if (func_67(unk_0x17B5CC8A8615737D(), 2439.52f, 4969.67f, 52.65f, 1) > 60f)
				{
					Local_3120[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 39:
				if (func_171())
				{
					if (!func_174())
					{
						Local_3120[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 47:
				switch (Local_3120[iVar3 /*8*/].f_4)
				{
					case 0:
						Local_3120[iVar3 /*8*/].f_5 = unk_0x94E3E074F38DF86C() + 30000;
						Local_3120[iVar3 /*8*/].f_4++;
						break;
					
					case 1:
						if (unk_0x94E3E074F38DF86C() > Local_3120[iVar3 /*8*/].f_5)
						{
							Local_3120[iVar3 /*8*/].f_2 = 1;
							Local_3120[iVar3 /*8*/].f_4++;
						}
						break;
				}
				break;
			
			case 48:
				Local_3120[iVar3 /*8*/].f_2 = 0;
				if (!Local_3120[iVar3 /*8*/].f_2)
				{
					if (func_67(unk_0x17B5CC8A8615737D(), 2448.25f, 4974.92f, 55.11f, 1) > 300f)
					{
						Local_3120[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 51:
				if (func_147(1, 49))
				{
					Local_3120[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 49:
				Local_3120[iVar3 /*8*/].f_2 = 0;
				if (!Local_3120[iVar3 /*8*/].f_2)
				{
					if (func_67(unk_0x17B5CC8A8615737D(), 2448.25f, 4974.92f, 55.11f, 1) > 500f)
					{
						Local_3120[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 50:
				Local_3120[iVar3 /*8*/].f_2 = 0;
				if (unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) > 0)
				{
					Local_3120[iVar3 /*8*/].f_2 = 1;
				}
				break;
		}
		iVar3++;
	}
}

int func_171()
{
	if (iLocal_437 == 1)
	{
		return 1;
	}
	return 0;
}

int func_172(int iParam0)
{
	if (unk_0x08A593150B122791(Local_444[iParam0 /*5*/], 0.6f) > 0)
	{
		return 1;
	}
	return 0;
}

int func_173()
{
	return iLocal_280;
}

int func_174()
{
	int iVar0;
	
	iVar0 = (Local_444.f_0 - 1);
	while (iVar0 >= 0)
	{
		if (Local_444[iVar0 /*5*/].f_4)
		{
			if (unk_0x08A593150B122791(Local_444[iVar0 /*5*/], 0.6f) > 0)
			{
				Local_277 = { Local_444[iVar0 /*5*/] };
				iLocal_280 = iVar0;
				return 1;
			}
		}
		else
		{
			return 0;
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_175()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xEDCACB559C6622C5();
	if ((func_195() && iLocal_2512 > 0) && unk_0x94E3E074F38DF86C() > iLocal_2641)
	{
		while (!unk_0x25BD4C26D84038CD())
		{
			unk_0x50FD1894558DE186(1000);
			func_28(28, 1);
		}
		iLocal_3690 = 0;
		while (!func_194())
		{
			func_28(32322, 1);
		}
		unk_0x5DC8C2F2F8A363C2(unk_0x17B5CC8A8615737D(), 2474.97f, 4946.047f, 44.0297f, 1, 0, 0, 1);
		unk_0x0608D50823C6AA6D(unk_0x17B5CC8A8615737D(), 230.6937f);
		unk_0x4C1D7D2B3355D863(unk_0x17B5CC8A8615737D(), 0, 0);
		unk_0xE2D8919DE58194D4(unk_0x17B5CC8A8615737D(), 0, -1, 0);
		unk_0x0B25AB3A7FA0683C(unk_0x17B5CC8A8615737D(), joaat("weapon_unarmed"), 1);
		unk_0xDEAF24B058321A05(unk_0x17B5CC8A8615737D(), 0, 0);
		func_186(0, 1, 1, 0);
		unk_0xA5E21BA8D7CE03D8(0);
		unk_0x9274EF97A90581BE(0, 0, 3000, 1, 0, 0);
		unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 1, 0);
		unk_0xBA7CD73403732191(0f);
		unk_0x503F20CB07C55470(0f, 1065353216);
		unk_0xD12BCC85C2F8B1DE();
		unk_0x80D24361A541257A("SLOW_MO_METH_HOUSE_RAYFIRE");
		uLocal_2672 = unk_0x0CE2297975A4AE38(2457.15f, 4968.79f, 48.677f, 45f, "DES_FarmHs");
		func_31(12, 1);
		iLocal_2640 = 0;
		iLocal_2645 = iLocal_2645;
		iLocal_2645 = 99;
		iLocal_2512 = 99;
		iLocal_2454 = 3;
		fLocal_2453 = 10000f;
		unk_0xB30185B1BE926A58(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrm"), 1);
		unk_0xB30185B1BE926A58(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrmsml"), 1);
		unk_0xB30185B1BE926A58(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassairfrm"), 0);
		unk_0x4C21FD297A827B45();
		unk_0x2EE4FDDB1E7664FB();
		bLocal_2647 = true;
	}
	unk_0x6F9E2FAA0B24988A();
	switch (iLocal_2512)
	{
		case 0:
			func_194();
			bLocal_2647 = false;
			iVar0 = 49;
			while (iVar0 <= 55)
			{
				Local_444[iVar0 /*5*/] = { Local_444[iVar0 /*5*/] + Vector(0.6f, 0f, 0f) };
				iVar0++;
			}
			if (unk_0x4E1850F5FF023071("CHI_2_POUR_GAS"))
			{
				unk_0xB8CAC5F3774894A1("CHI_2_POUR_GAS");
			}
			if (unk_0x4E1850F5FF023071("CHI_2_SHOOT_GAS"))
			{
				unk_0xB8CAC5F3774894A1("CHI_2_SHOOT_GAS");
			}
			unk_0x4A5D4AD0FE6ACF73("CHI_2_GAS_TRAIL_FIRE");
			iLocal_2641 = unk_0x94E3E074F38DF86C() + 1000;
			unk_0x1B60289D0F2A2E3C(2570.53f, 4982.057f, 50.6819f, 100f, 1, 0, 0, 0);
			unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 0, 0);
			unk_0x0B25AB3A7FA0683C(unk_0x17B5CC8A8615737D(), joaat("weapon_unarmed"), 1);
			func_81(0);
			iLocal_3491 = 0;
			func_81(1);
			unk_0xD12BCC85C2F8B1DE();
			func_185(2467.775f, 4954.415f, 42.87803f, 2477.089f, 4945.079f, 46.16654f, 4.0625f, 2486.854f, 4939.086f, 43.2578f, 230f, 1, 1, 1, 0, 0);
			if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
			{
				unk_0x5DC8C2F2F8A363C2(unk_0x17B5CC8A8615737D(), 2455.941f, 4952.801f, 44.112f, 1, 0, 0, 1);
			}
			unk_0x8ADF92E4B51709E2(1f);
			unk_0xF9FFB9857F3120F8("misschinese2_barrelRoll");
			unk_0xA617A761C0955C65("move_m@gangster@var_e");
			unk_0xA617A761C0955C65("move_m@gangster@var_f");
			unk_0xA617A761C0955C65("move_m@gangster@generic");
			unk_0xF9FFB9857F3120F8("misschinese2_bank5");
			unk_0xF9FFB9857F3120F8("misschinese2_bank1");
			unk_0xF9FFB9857F3120F8("reaction@male_stand@big_variations@b");
			unk_0xF9FFB9857F3120F8("reaction@male_stand@big_intro@left");
			unk_0xF9FFB9857F3120F8("reaction@male_stand@big_intro@right");
			unk_0xF9FFB9857F3120F8("reaction@male_stand@big_intro@backward");
			unk_0x924CDE68BA2ED3BA(joaat("a_m_m_hillbilly_02"));
			unk_0x924CDE68BA2ED3BA(joaat("a_m_y_methhead_01"));
			unk_0x924CDE68BA2ED3BA(joaat("prop_cs_fertilizer"));
			unk_0x924CDE68BA2ED3BA(joaat("burrito"));
			unk_0x924CDE68BA2ED3BA(joaat("prop_cs_beer_bot_01"));
			unk_0x4C1D7D2B3355D863(unk_0x17B5CC8A8615737D(), 0, 0);
			iVar1 = 0;
			while (iVar1 < Local_755.f_0)
			{
				if (unk_0x23E9113C762466ED(Local_755[iVar1 /*33*/]))
				{
					unk_0x478AE709A466CB7E(&(Local_755[iVar1 /*33*/]));
				}
				if (unk_0x23E9113C762466ED(Local_755[iVar1 /*33*/].f_20))
				{
					unk_0x1AAFEA627BB9C402(&(Local_755[iVar1 /*33*/].f_20));
				}
				iVar1++;
			}
			iLocal_2512++;
			break;
		
		case 1:
			if (unk_0x25BD4C26D84038CD() && !unk_0x5C0856D86B18EE57())
			{
				unk_0xC7845898207D067F(1000);
			}
			iLocal_2512++;
			break;
	}
	if (iLocal_2342)
	{
		iLocal_2342 = 0;
		iVar2 = 0;
		while (iVar2 < Local_2380.f_0)
		{
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 < Local_2343.f_0)
		{
			iVar2++;
		}
	}
	iVar2 = 0;
	while (iVar2 < Local_2380.f_0)
	{
		if (iLocal_2455[iVar2])
		{
			iLocal_2455[iVar2] = 0;
			Local_2380[iVar2 /*18*/] = { unk_0xA519593E9D64C991(unk_0xF4F4D11B2EE4033B()) };
			Local_2380[iVar2 /*18*/].f_3 = { unk_0xE20113A830C67A97(unk_0xF4F4D11B2EE4033B(), 2) };
			Local_2380[iVar2 /*18*/].f_14 = unk_0x503C970FCA1E0910(unk_0xF4F4D11B2EE4033B());
		}
		if (iLocal_2460[iVar2])
		{
			iLocal_2460[iVar2] = 0;
			Local_2380[iVar2 /*18*/].f_6 = { unk_0xA519593E9D64C991(unk_0xF4F4D11B2EE4033B()) };
			Local_2380[iVar2 /*18*/].f_9 = { unk_0xE20113A830C67A97(unk_0xF4F4D11B2EE4033B(), 2) };
			Local_2380[iVar2 /*18*/].f_15 = unk_0x503C970FCA1E0910(unk_0xF4F4D11B2EE4033B());
		}
		iVar2++;
	}
	if (iLocal_2340)
	{
		iLocal_2340 = 0;
		bLocal_2341 = false;
		iLocal_2673 = 0;
		unk_0x1B60289D0F2A2E3C(2431.097f, 4967.043f, 41.3476f, 20f, 1, 0, 0, 0);
		func_184();
	}
	if (!bLocal_2341)
	{
		if (unk_0x234438A9D08C3186())
		{
			unk_0x959C4E548A4647AB(5, 5, 5, 5);
			unk_0xB3BD92D552468D00();
			iLocal_2454 = -1;
			unk_0xA5E21BA8D7CE03D8(0);
			func_186(1, 1, 1, 0);
			unk_0xA0E7D0E8FE126EE8("misschinese2_crystalmaze");
			bLocal_2341 = true;
			Local_2343[0 /*6*/] = 0;
			Local_2343[1 /*6*/] = 0;
			Local_2343[2 /*6*/] = 0;
			Local_2343[3 /*6*/] = 0;
			Local_2343[0 /*6*/].f_4 = 0;
			Local_2343[0 /*6*/].f_5 = 0;
			Local_2343[1 /*6*/].f_4 = 0;
			Local_2343[1 /*6*/].f_5 = 0;
			Local_2343[2 /*6*/].f_4 = 0;
			Local_2343[2 /*6*/].f_5 = 0;
			Local_2343[3 /*6*/].f_4 = 0;
			Local_2343[3 /*6*/].f_5 = 0;
			func_32(12, 0);
			unk_0x49219669A551245B();
			unk_0x46081AAD7F4633BD(4);
			switch (iLocal_2648)
			{
				case 3:
					unk_0xC1B1E9A034A63A62(0);
					break;
				
				case 2:
					Local_2343[0 /*6*/] = 1;
					Local_2343[1 /*6*/] = 1;
					unk_0xC1B1E9A034A63A62(10900);
					iLocal_2454 = 2;
					fLocal_2453 = 10000f;
					break;
				
				case 1:
					Local_2343[0 /*6*/] = 1;
					unk_0xC1B1E9A034A63A62(6400);
					iLocal_2454 = 1;
					fLocal_2453 = 10000f;
					break;
			}
			iLocal_2505 = 0;
		}
	}
	if (bLocal_2341)
	{
		unk_0x24B9DA75BC7B980E(unk_0xBBDA792448DB5A89(unk_0x83666F9FB8FEBD4B()));
	}
	if (bLocal_2341)
	{
		fLocal_2453 = (fLocal_2453 + unk_0x0000000050597EE2());
		if (iLocal_2454 == -1 || ((iLocal_2454 != -1 && iLocal_2454 < 4) && fLocal_2453 > (Local_2380[iLocal_2454 /*18*/].f_13 / 1000f)))
		{
			iLocal_2454++;
			if (iLocal_2454 == 3)
			{
				if (unk_0xF4F8AE8DD0F08C1E("misschinese2_crystalmaze"))
				{
					uLocal_2637 = unk_0x9F2F24963A4C5E27(964613260, 1);
					uLocal_2638 = unk_0x356EABB012B22D07(2452.914f, 4962.096f, 45.585f, 0f, 0f, 45f, 2);
					unk_0x563AC676C8BDAD48(uLocal_2637, uLocal_2638, "trevor_barn_walk_cam", "misschinese2_crystalmaze");
					if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
					{
						unk_0xA17D768ED938600C(unk_0x17B5CC8A8615737D(), uLocal_2638, "misschinese2_crystalmaze", "trevor_barn_walk", 1000f, -8f, 0, 0, 1148846080, 0);
					}
					unk_0x9274EF97A90581BE(1, 0, 3000, 1, 0, 0);
					func_184();
					unk_0x7314960FF9575FFA(1);
					fLocal_2453 = 0f;
				}
			}
			else if (iLocal_2454 < 4)
			{
				unk_0xA5E21BA8D7CE03D8(0);
				uLocal_2637 = unk_0x71877D18957B1679("DEFAULT_SCRIPTED_CAMERA", Local_2380[iLocal_2454 /*18*/], Local_2380[iLocal_2454 /*18*/].f_3, Local_2380[iLocal_2454 /*18*/].f_14, 1, 2);
				unk_0x10AEEB80A49DD974(uLocal_2637, Local_2380[iLocal_2454 /*18*/].f_6, Local_2380[iLocal_2454 /*18*/].f_9, Local_2380[iLocal_2454 /*18*/].f_15, unk_0xF34EE736CF047844(Local_2380[iLocal_2454 /*18*/].f_12), Local_2380[iLocal_2454 /*18*/].f_16, 1, 2);
				unk_0x9274EF97A90581BE(1, 0, 3000, 1, 0, 0);
				if (iLocal_2454 < 2)
				{
					func_183(Local_2380[iLocal_2454 /*18*/].f_17, 1, 1);
				}
				else
				{
					func_183(Local_2380[iLocal_2454 /*18*/].f_17, 1, 0);
				}
				fLocal_2453 = 0f;
			}
			else if (!bLocal_2339)
			{
				unk_0xA5E21BA8D7CE03D8(0);
				unk_0x9274EF97A90581BE(0, 0, 3000, 1, 0, 0);
				if (func_182() && !bLocal_2647)
				{
					unk_0x9AF1ABF0E97411BF("CamPushInNeutral", 0, 0);
					unk_0x4988C48537D1AE4F(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				}
				unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 1, 0);
				unk_0x7314960FF9575FFA(0);
				unk_0xBA7CD73403732191(0f);
				unk_0x503F20CB07C55470(0f, 1065353216);
				func_181(0, 0, 1, 0);
				unk_0xB8CAC5F3774894A1("CHI_2_GAS_TRAIL_FIRE");
				unk_0x08B6ECD80C6BD224(uLocal_2672, 9);
				unk_0x8ADF92E4B51709E2(1f);
				unk_0x2FBF689422F41891();
				if (unk_0x25BD4C26D84038CD())
				{
					while (unk_0x46995C6DD9E9DF8F(uLocal_2672) != 10)
					{
						func_28(29, 1);
					}
					unk_0xC7845898207D067F(1000);
				}
				unk_0x2EE4FDDB1E7664FB();
				func_176(9);
			}
		}
		iVar3 = 0;
		while (iVar3 < Local_2343.f_0)
		{
			if (!Local_2343[iVar3 /*6*/])
			{
				if (iLocal_2454 == Local_2343[iVar3 /*6*/].f_1 && fLocal_2453 > (Local_2343[iVar3 /*6*/].f_2 / 1000f))
				{
					switch (iVar3)
					{
						case 0:
							switch (Local_2343[iVar3 /*6*/].f_4)
							{
								case 0:
									iLocal_2505 = 0;
									if (unk_0x94E3E074F38DF86C() > Local_2343[iVar3 /*6*/].f_5)
									{
										func_122(Local_2465[iLocal_2505 /*3*/], 0);
										Local_2343[iVar3 /*6*/].f_5 = unk_0x94E3E074F38DF86C() + 200;
										Local_2343[iVar3 /*6*/].f_4++;
									}
									break;
								
								case 1:
									if (unk_0x94E3E074F38DF86C() > Local_2343[iVar3 /*6*/].f_5)
									{
										func_122(Local_2465[iLocal_2505 /*3*/] + Local_2465[iLocal_2505 + 1 /*3*/] / Vector(2f, 2f, 2f), 0);
										iLocal_2505++;
										if (iLocal_2505 >= 12)
										{
											Local_2343[iVar3 /*6*/].f_4 = 10;
											Local_2343[iVar3 /*6*/] = 1;
										}
										else
										{
											Local_2343[iVar3 /*6*/].f_5 = unk_0x94E3E074F38DF86C() + 200;
											Local_2343[iVar3 /*6*/].f_4 = 2;
										}
									}
									break;
								
								case 2:
									if (unk_0x94E3E074F38DF86C() > Local_2343[iVar3 /*6*/].f_5)
									{
										func_122(Local_2465[iLocal_2505 /*3*/], 0);
										Local_2343[iVar3 /*6*/].f_5 = unk_0x94E3E074F38DF86C() + 200;
										if (iLocal_2505 == 2)
										{
											Local_2343[iVar3 /*6*/].f_4 = 3;
										}
										else
										{
											Local_2343[iVar3 /*6*/].f_4 = 1;
										}
									}
									break;
								
								case 3:
									if (unk_0x94E3E074F38DF86C() > Local_2343[iVar3 /*6*/].f_5)
									{
										func_122(Local_2465[iLocal_2505 /*3*/] + Local_2465[iLocal_2505 + 1 /*3*/] / Vector(2f, 2f, 2f), 0);
										func_122(Local_2465[iLocal_2505 /*3*/] + Local_2465[iLocal_2505 + 2 /*3*/] / Vector(2f, 2f, 2f), 0);
										Local_2343[iVar3 /*6*/].f_5 = unk_0x94E3E074F38DF86C() + 200;
										Local_2343[iVar3 /*6*/].f_4 = 4;
										iLocal_2505 = 3;
									}
									break;
								
								case 4:
									if (unk_0x94E3E074F38DF86C() > Local_2343[iVar3 /*6*/].f_5)
									{
										func_122(Local_2465[iLocal_2505 /*3*/], 0);
										func_122(Local_2465[iLocal_2505 + 1 /*3*/], 0);
										Local_2343[iVar3 /*6*/].f_5 = unk_0x94E3E074F38DF86C() + 200;
										Local_2343[iVar3 /*6*/].f_4 = 5;
									}
									break;
								
								case 5:
									if (unk_0x94E3E074F38DF86C() > Local_2343[iVar3 /*6*/].f_5)
									{
										func_122(Local_2465[iLocal_2505 /*3*/] + Local_2465[iLocal_2505 + 2 /*3*/] / Vector(2f, 2f, 2f), 0);
										func_122(Local_2465[iLocal_2505 + 1 /*3*/] + Local_2465[iLocal_2505 + 3 /*3*/] / Vector(2f, 2f, 2f), 0);
										Local_2343[iVar3 /*6*/].f_5 = unk_0x94E3E074F38DF86C() + 200;
										Local_2343[iVar3 /*6*/].f_4 = 6;
										iLocal_2505 = 5;
									}
									break;
								
								case 6:
									if (unk_0x94E3E074F38DF86C() > Local_2343[iVar3 /*6*/].f_5)
									{
										func_122(Local_2465[iLocal_2505 /*3*/], 0);
										func_122(Local_2465[iLocal_2505 + 1 /*3*/], 0);
										Local_2343[iVar3 /*6*/].f_5 = unk_0x94E3E074F38DF86C() + 200;
										Local_2343[iVar3 /*6*/].f_4 = 2;
										iLocal_2505 = 7;
									}
									break;
							}
							break;
						
						case 1:
							unk_0x3F46E145DB7AB5E4(2432.534f, 4968.383f, 42.2389f, 4, 0.5f, 1, 0, 1065353216, 0);
							Local_2343[iVar3 /*6*/] = 1;
							break;
						
						case 2:
							iLocal_2673 = 1;
							Local_2343[iVar3 /*6*/] = 1;
							break;
						
						case 3:
							if (unk_0x0F1BF24ED3B7ED40(uLocal_2637))
							{
								unk_0x2F0C4DC7A4D75C2E(uLocal_2637, "LARGE_EXPLOSION_SHAKE", fLocal_2639);
								unk_0x9C0D2639DC991371(uLocal_2637, 0.1f);
								Local_2343[iVar3 /*6*/] = 1;
							}
							break;
						
						case 4:
							switch (Local_2343[iVar3 /*6*/].f_4)
							{
								case 0:
									unk_0x5DC8C2F2F8A363C2(unk_0x17B5CC8A8615737D(), 2473.208f, 4947.625f, 44.0664f, 1, 0, 0, 1);
									unk_0x0608D50823C6AA6D(unk_0x17B5CC8A8615737D(), 223.493f);
									unk_0xBA7CD73403732191(0f);
									unk_0x503F20CB07C55470(-7f, 1065353216);
									if (func_182())
									{
										unk_0x44B1CF13D39D96CE(unk_0x17B5CC8A8615737D(), joaat("MotionState_Aiming"), 1, 0, 0);
										unk_0x5436326547492A67(unk_0xBE369BE1BC57A796(), 1f, 3000, 0, 1, 0);
									}
									else
									{
										unk_0x44B1CF13D39D96CE(unk_0x17B5CC8A8615737D(), joaat("MotionState_Walk"), 1, 0, 0);
										unk_0x5436326547492A67(unk_0xBE369BE1BC57A796(), 1f, 500, 0, 1, 0);
									}
									Local_2343[iVar3 /*6*/].f_4++;
									break;
								
								case 1:
									break;
							}
							break;
						
						case 5:
							switch (Local_2343[iVar3 /*6*/].f_4)
							{
								case 0:
									fLocal_2674 = 1f;
									Local_2343[iVar3 /*6*/].f_4++;
									Local_2343[iVar3 /*6*/].f_5 = unk_0x94E3E074F38DF86C() + 1300;
									unk_0x2156AF318C71023B("SLOW_MO_METH_HOUSE_RAYFIRE");
									break;
								
								case 1:
									fLocal_2674 = (fLocal_2674 - (unk_0x0000000050597EE2() * 1f));
									if (fLocal_2674 < 0.2f)
									{
										fLocal_2674 = 0.2f;
									}
									unk_0x8ADF92E4B51709E2(fLocal_2674);
									if (unk_0x94E3E074F38DF86C() > Local_2343[iVar3 /*6*/].f_5)
									{
										Local_2343[iVar3 /*6*/].f_4++;
									}
									break;
								
								case 2:
									fLocal_2674 = (fLocal_2674 + (unk_0x0000000050597EE2() * 1f));
									if (fLocal_2674 > 1f)
									{
										fLocal_2674 = 1f;
										Local_2343[iVar3 /*6*/].f_4++;
										Local_2343[iVar3 /*6*/] = 1;
									}
									unk_0x80D24361A541257A("SLOW_MO_METH_HOUSE_RAYFIRE");
									unk_0x8ADF92E4B51709E2(fLocal_2674);
									break;
							}
							break;
						}
					}
			}
			iVar3++;
		}
	}
}

void func_176(int iParam0)
{
	func_180();
	func_179();
	func_178();
	func_177();
	if (iParam0 == 11)
	{
		iLocal_2511++;
	}
	else
	{
		iLocal_2511 = iParam0;
	}
}

void func_177()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_3358.f_0)
	{
		Local_3358[iVar0 /*7*/] = 0;
		Local_3358[iVar0 /*7*/].f_1 = 0;
		Local_3358[iVar0 /*7*/].f_3 = 0;
		Local_3358[iVar0 /*7*/].f_2 = 0;
		Local_3358[iVar0 /*7*/].f_4 = 0;
		Local_3358[iVar0 /*7*/].f_5 = 0;
		Local_3358[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
}

void func_178()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_2917.f_0)
	{
		if (Local_2917[iVar0 /*10*/].f_4)
		{
			Local_2917[iVar0 /*10*/].f_1 = 1;
			Local_2917[iVar0 /*10*/].f_6 = -1;
			func_160(iVar0, Local_2917[iVar0 /*10*/], 0, 0, 0, 1, 0, 1, 0, 1, 0);
		}
		Local_2917[iVar0 /*10*/] = 0;
		Local_2917[iVar0 /*10*/].f_1 = 0;
		Local_2917[iVar0 /*10*/].f_2 = 0;
		Local_2917[iVar0 /*10*/].f_3 = 0;
		Local_2917[iVar0 /*10*/].f_6 = 0;
		Local_2917[iVar0 /*10*/].f_4 = 0;
		Local_2917[iVar0 /*10*/].f_5 = 0;
		Local_2917[iVar0 /*10*/].f_7 = 0;
		Local_2917[iVar0 /*10*/].f_8 = 0;
		Local_2917[iVar0 /*10*/].f_9 = 0f;
		iVar0++;
	}
}

void func_179()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_3120.f_0)
	{
		Local_3120[iVar0 /*8*/] = 0;
		Local_3120[iVar0 /*8*/].f_1 = 0;
		Local_3120[iVar0 /*8*/].f_2 = 0;
		Local_3120[iVar0 /*8*/].f_3 = 0;
		Local_3120[iVar0 /*8*/].f_4 = 0;
		Local_3120[iVar0 /*8*/].f_5 = 0;
		iVar0++;
	}
}

void func_180()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_3337.f_0)
	{
		Local_3337[iVar0 /*4*/] = 0;
		Local_3337[iVar0 /*4*/].f_1 = 0;
		Local_3337[iVar0 /*4*/].f_2 = 0;
		Local_3337[iVar0 /*4*/].f_3 = 0;
		iVar0++;
	}
}

int func_181(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xEF4E5E47AF0D4480())
	{
		if (unk_0x5E9889CF18601D1C() != iParam0 && iParam2)
		{
			unk_0xCE7A426067C66E84(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_182()
{
	if (unk_0xB866C0EABE959340(unk_0xB2CED41F4337ED8B()) == 4)
	{
		return 1;
	}
	return 0;
}

void func_183(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iLocal_438 = iParam2;
	if (iParam0 > -1)
	{
		iLocal_437 = 1;
		iLocal_439 = unk_0x94E3E074F38DF86C();
		iLocal_440 = iParam0 * 2;
		iLocal_442 = iLocal_440;
		if (bParam1)
		{
			iLocal_443 = 0;
		}
		else
		{
			iLocal_443 = iLocal_440;
		}
		iVar0 = 0;
		while (iVar0 < Local_444.f_0)
		{
			Local_444[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Local_281.f_0)
		{
			unk_0x44E994D596DB215A(Local_281[iVar0 /*5*/]);
			if (Local_281[iVar0 /*5*/].f_4 != 0)
			{
				unk_0x2478F071547F0C76(Local_281[iVar0 /*5*/].f_1, 0.4f, 1f);
			}
			Local_281[iVar0 /*5*/].f_4 = 0;
			iVar0++;
		}
	}
}

void func_184()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_281.f_0)
	{
		unk_0x44E994D596DB215A(Local_281[iVar0 /*5*/]);
		Local_281[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
	func_163(0);
	iVar0 = 0;
	while (iVar0 < Local_444.f_0)
	{
		if (unk_0xA3794949321E107C(Local_444[iVar0 /*5*/].f_3))
		{
			unk_0x020DF7300725ECAB(&(Local_444[iVar0 /*5*/].f_3));
		}
		Local_444[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
	iLocal_269 = -1;
}

void func_185(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	func_70(Param0, Param3, fParam6, Param7, fParam10, 0f, 0f, 0f, bParam11, bParam12, bParam13, bParam14, bParam15);
}

void func_186(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x75416EE69CE8B797(unk_0xBE369BE1BC57A796());
		unk_0xC8F90C1233866A01(unk_0xBE369BE1BC57A796(), 1);
		unk_0x60040905B2978982(unk_0xBE369BE1BC57A796(), 1);
		func_193(1);
		unk_0x9FB8515100F82AFB();
		unk_0xD57128A757C0216E();
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x3ED8A07C6FA41E1B())
			{
				unk_0x660E8E7836E95077(0);
			}
			if (!func_40())
			{
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_181(1, iParam3, iParam2, 0);
		Global_55828 = 1;
		Global_68134 = 1;
		Global_69700 = 1;
	}
	else
	{
		func_193(0);
		unk_0x42DE1068884C3BE9();
		Global_55828 = 0;
		if (bParam1)
		{
			unk_0x093227ED19D84FB6();
		}
		unk_0xC8F90C1233866A01(unk_0xBE369BE1BC57A796(), 0);
		unk_0x60040905B2978982(unk_0xBE369BE1BC57A796(), 0);
		func_181(0, iParam3, iParam2, 0);
		if (unk_0x63C468D583002D23())
		{
			if (((!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()) && !func_191(unk_0xBE369BE1BC57A796())) && !func_188(unk_0xBE369BE1BC57A796(), 0)) && !func_187())
			{
				unk_0xC6042F55A6EA17B2(unk_0x17B5CC8A8615737D(), 0);
			}
		}
		else if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()) && !func_191(unk_0xBE369BE1BC57A796()))
		{
			unk_0xC6042F55A6EA17B2(unk_0x17B5CC8A8615737D(), 0);
		}
		Global_69700 = 0;
	}
}

bool func_187()
{
	return unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_39.f_18, 14);
}

bool func_188(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xBE369BE1BC57A796())
	{
		bVar0 = func_189(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1591201[iParam0 /*602*/].f_203 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x7268A1112372AA44(iParam0))
		{
			bVar0 = unk_0xB58DEBB81964A4E9(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_189(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_190();
	}
	if (Global_1315213[iVar1] == 1)
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

int func_190()
{
	return Global_1312735;
}

int func_191(int iParam0)
{
	if (func_188(iParam0, 0))
	{
		return 1;
	}
	if (func_192())
	{
		if (iParam0 == unk_0xBE369BE1BC57A796())
		{
			return 1;
		}
	}
	if (unk_0x48B8265059381CD0(Global_2421664[iParam0 /*358*/].f_198, 2))
	{
		return 1;
	}
	return 0;
}

bool func_192()
{
	return unk_0x48B8265059381CD0(Global_2359301, 3);
}

void func_193(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xEB79FECD9022AAF0(&Global_2313, 13);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&Global_2313, 13);
	}
}

int func_194()
{
	switch (iLocal_3690)
	{
		case 0:
			unk_0xE1324F59713746FA(joaat("cs2_03_fmhse_vfx_parent"));
			unk_0xE1324F59713746FA(joaat("cs2_03_fmhse_vfx_parent001"));
			unk_0xE1324F59713746FA(joaat("cs2_03_fmhse_vfx_parent002"));
			unk_0xE1324F59713746FA(joaat("cs2_03_fmhse_vfx_parent003"));
			unk_0xE1324F59713746FA(joaat("cs2_03_fmhse_vfx_parent004"));
			unk_0xE1324F59713746FA(joaat("cs2_03_fmhse_vfx_parent005"));
			unk_0xE1324F59713746FA(joaat("cs2_03_fmhse_vfx_parent006"));
			unk_0xE1324F59713746FA(joaat("cs2_03_fmhse_vfx_parent007"));
			unk_0xE1324F59713746FA(joaat("cs2_03_fmhse_vfx_parent008"));
			unk_0xE1324F59713746FA(joaat("cs2_03_fmhse_vfx_parent009"));
			unk_0xE1324F59713746FA(joaat("cs2_03_fmhse_vfx_parent010"));
			unk_0xE1324F59713746FA(joaat("cs2_03_fmhse_vfx_parent011"));
			unk_0xE1324F59713746FA(joaat("cs2_03_fmhse_vfx_parent012"));
			unk_0xE1324F59713746FA(joaat("cs2_03_fmhse_vfx_parent013"));
			unk_0xE1324F59713746FA(joaat("cs2_03_fmhse_vfx_parent014"));
			unk_0xE1324F59713746FA(joaat("cs2_03_fmhse_vfx_parent015"));
			iLocal_3690++;
			break;
		
		case 1:
			if (((((((((((((((unk_0x9F746898F7881612(joaat("cs2_03_fmhse_vfx_parent")) && unk_0x9F746898F7881612(joaat("cs2_03_fmhse_vfx_parent001"))) && unk_0x9F746898F7881612(joaat("cs2_03_fmhse_vfx_parent002"))) && unk_0x9F746898F7881612(joaat("cs2_03_fmhse_vfx_parent003"))) && unk_0x9F746898F7881612(joaat("cs2_03_fmhse_vfx_parent004"))) && unk_0x9F746898F7881612(joaat("cs2_03_fmhse_vfx_parent005"))) && unk_0x9F746898F7881612(joaat("cs2_03_fmhse_vfx_parent006"))) && unk_0x9F746898F7881612(joaat("cs2_03_fmhse_vfx_parent007"))) && unk_0x9F746898F7881612(joaat("cs2_03_fmhse_vfx_parent008"))) && unk_0x9F746898F7881612(joaat("cs2_03_fmhse_vfx_parent009"))) && unk_0x9F746898F7881612(joaat("cs2_03_fmhse_vfx_parent010"))) && unk_0x9F746898F7881612(joaat("cs2_03_fmhse_vfx_parent011"))) && unk_0x9F746898F7881612(joaat("cs2_03_fmhse_vfx_parent012"))) && unk_0x9F746898F7881612(joaat("cs2_03_fmhse_vfx_parent013"))) && unk_0x9F746898F7881612(joaat("cs2_03_fmhse_vfx_parent014"))) && unk_0x9F746898F7881612(joaat("cs2_03_fmhse_vfx_parent015")))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_195()
{
	if (unk_0x95DBE123BC2DB80B())
	{
		return 0;
	}
	if (unk_0x4B972043966C2EB8(0, 18) || unk_0x4B972043966C2EB8(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_196()
{
	unk_0xEDCACB559C6622C5();
	func_170(28, 45);
	func_149(0, 7, 0, 0, 1, 0, 1, 0);
	func_149(1, 8, 2, 29, 1, 0, 1, 0);
	func_149(2, 9, 2, 35, 5, 34, 1, 0);
	func_149(3, 10, 2, 42, 1, 0, 1, 0);
	func_157(0, 21, 2, 29, 1, 0, 1, 0, 1, 0);
	func_157(1, 22, 2, 36, 5, 34, 1, 0, 1, 0);
	func_157(2, 26, 0, 0, 1, 0, 1, 0, 1, 0);
	func_157(3, 23, 2, 37, 1, 0, 1, 0, 1, 0);
	func_198(4, 25, 3, 23, 1, 0, 1, 0, 1, 0);
	func_160(0, 30, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(1, 31, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(2, 32, 1, 3, 34, 1, 0, 1, 0, 1, 0);
	func_160(3, 33, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(4, 34, 1, 3, 34, 1, 0, 1, 0, 1, 0);
	func_160(5, 35, 0, 2, 29, 1, 0, 1, 0, 1, 0);
	func_160(6, 36, 0, 2, 37, 1, 0, 1, 0, 1, 0);
	func_160(7, 37, 0, 2, 29, 1, 0, 1, 0, 1, 0);
	func_160(8, 38, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(9, 56, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(10, 11, 0, 2, 44, 1, 0, 1, 0, 1, 0);
	func_160(11, 50, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(12, 51, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_197(0, 2, 33, 5, 34);
	func_197(4, 2, 43, 1, 0);
	func_197(2, 2, 39, 1, 0);
	if (iLocal_2648 == 0)
	{
		if (func_87(37) && !func_87(44))
		{
			iLocal_2648 = 3;
		}
		if (func_87(41) && !func_87(44))
		{
			iLocal_2646 = 1;
			iLocal_2648 = 1;
		}
		if (func_169(10, 11) == 2)
		{
			iLocal_2648 = 2;
			iLocal_2646 = 1;
		}
	}
	func_160(13, 10, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	if ((((func_87(37) && func_87(38)) || iLocal_2646) && func_169(13, 10) == 10) && !func_82("CHI2_light"))
	{
		func_197(1, 2, 40, 1, 0);
		if (unk_0xA3794949321E107C(uLocal_2677))
		{
			unk_0x020DF7300725ECAB(&uLocal_2677);
		}
		unk_0x2DE9FDD822EE641B(10f, 5f, 4);
		func_12(1);
		func_176(11);
	}
}

void func_197(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_152(iParam1, iParam2, iParam3, iParam4, 1, 0, 1, 0))
	{
		switch (iParam0)
		{
			case 0:
				func_130("CHFAIL1");
				break;
			
			case 1:
				func_130("FRMSOON");
				break;
			
			case 2:
				func_130("FRMTRAI");
				break;
			
			case 3:
				if (unk_0x23E9113C762466ED(Local_755[11 /*33*/]))
				{
					if (unk_0xCA41A00932714525(Local_755[11 /*33*/]))
					{
						func_130("FRMCHI");
					}
				}
				if (unk_0x23E9113C762466ED(Local_755[10 /*33*/]))
				{
					if (unk_0xCA41A00932714525(Local_755[10 /*33*/]))
					{
						func_130("FRMCHI2");
					}
				}
				break;
			
			case 4:
				func_130("CHFAIL2");
				break;
			
			case 5:
				func_130("FRMGASF");
				break;
			}
	}
}

void func_198(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	if (!Local_3358[iParam0 /*7*/].f_1)
	{
		if (func_199(iParam2, iParam3))
		{
			func_157(iParam0, iParam1, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 1, 0);
		}
	}
}

int func_199(int iParam0, int iParam1)
{
	if (Local_3358[iParam0 /*7*/] == iParam1)
	{
		if (Local_3358[iParam0 /*7*/].f_1)
		{
			return 1;
		}
	}
	else if (Local_3358[iParam0 /*7*/] != 0)
	{
	}
	return 0;
}

void func_200()
{
	func_170(5, 31);
	func_149(0, 2, 0, 0, 1, 0, 1, 0);
	func_149(1, 3, 2, 8, 1, 0, 1, 0);
	func_149(2, 5, 2, 9, 1, 0, 1, 0);
	func_149(3, 11, 0, 0, 1, 0, 1, 0);
	func_149(4, 4, 2, 12, 1, 0, 1, 0);
	func_160(0, 17, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(1, 13, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(2, 14, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(3, 16, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(4, 15, 0, 2, 14, 6, 9, 1, 0, 1, 0);
	func_160(7, 19, 0, 2, 9, 1, 0, 1, 0, 1, 0);
	func_160(8, 20, 0, 2, 12, 4, 9, 1, 0, 1, 0);
	func_160(9, 21, 0, 2, 12, 4, 13, 1, 0, 1, 0);
	func_160(10, 22, 0, 2, 12, 1, 0, 1, 0, 1, 0);
	func_160(11, 23, 0, 2, 11, 1, 0, 1, 0, 1, 0);
	func_160(12, 24, 0, 2, 14, 1, 0, 1, 0, 1, 0);
	func_160(5, 26, 0, 2, 11, 6, 16, 6, 9, 1, 0);
	func_160(6, 27, 0, 2, 9, 1, 0, 1, 0, 1, 0);
	func_160(14, 40, 0, 2, 26, 1, 0, 1, 0, 1, 0);
	func_160(13, 39, 0, 2, 25, 1, 0, 1, 0, 1, 0);
	func_160(15, 28, 0, 2, 11, 6, 16, 1, 0, 1, 0);
	func_160(16, 29, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(17, 43, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(18, 44, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(19, 45, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_157(0, 1, 0, 0, 1, 0, 1, 0, 1, 0);
	func_157(2, 2, 2, 21, 5, 16, 1, 0, 1, 0);
	func_157(3, 3, 2, 12, 4, 17, 1, 0, 1, 0);
	func_157(4, 5, 2, 18, 1, 0, 1, 0, 1, 0);
	func_157(5, 6, 2, 19, 1, 0, 1, 0, 1, 0);
	func_157(6, 7, 2, 27, 5, 9, 1, 0, 1, 0);
	func_157(7, 10, 2, 9, 5, 21, 5, 12, 1, 0);
	func_157(8, 11, 2, 9, 4, 21, 5, 12, 1, 0);
	func_157(9, 14, 2, 9, 4, 12, 1, 0, 1, 0);
	func_157(10, 12, 2, 9, 4, 12, 1, 0, 1, 0);
	func_157(11, 13, 0, 0, 1, 0, 1, 0, 1, 0);
	func_157(12, 16, 2, 9, 4, 23, 5, 12, 1, 0);
	func_157(13, 17, 2, 14, 5, 12, 4, 9, 1, 0);
	func_157(14, 18, 3, 20, 1, 0, 1, 0, 1, 0);
	func_157(15, 19, 0, 0, 1, 0, 1, 0, 1, 0);
	func_157(16, 20, 2, 9, 4, 10, 4, 14, 5, 12);
	func_197(4, 2, 24, 1, 0);
	func_197(5, 2, 30, 1, 0);
	if (func_87(11) && func_87(29))
	{
		func_176(7);
	}
}

void func_201()
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	
	unk_0xAE8A9E407CB8C117(2004.447f, 3076.807f, 46.6069f, 10f);
	unk_0x7AD4C7413CBB95D6(1);
	if (((func_195() && iLocal_2512 > 0) && iLocal_2512 < 7) && unk_0x94E3E074F38DF86C() > iLocal_2641)
	{
		iLocal_2512 = 10;
		iLocal_2640 = 0;
		bLocal_2647 = true;
	}
	if (iLocal_2512 < 10)
	{
		if (unk_0x25BD4C26D84038CD() && !unk_0x5C0856D86B18EE57())
		{
			unk_0xC7845898207D067F(1000);
		}
	}
	if (iLocal_2880)
	{
		unk_0x24B9DA75BC7B980E(unk_0xBBDA792448DB5A89(unk_0x83666F9FB8FEBD4B()));
	}
	unk_0x6F9E2FAA0B24988A();
	switch (iLocal_2512)
	{
		case 0:
			if (unk_0x234438A9D08C3186())
			{
				unk_0xF7CF05FEB40E538B("CHI_2_MCS_5", 8);
				iLocal_2879 = 1;
				bLocal_2647 = false;
				unk_0x959C4E548A4647AB(5, 5, 5, 5);
				unk_0xB3BD92D552468D00();
				unk_0xBFF7E87106CE7475(0);
				iLocal_2883 = 0;
				iLocal_2880 = 1;
				Var0 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
				fVar3 = func_96(2458.223f, 4986.042f, 49.05241f, Var0, 1);
				if (fVar3 > 180f)
				{
					fVar3 = (fVar3 - 360f);
				}
				if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
				{
					iVar4 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
				}
				if (((unk_0x45CD66F0A131E554(iVar4, 0) && unk_0xC5082382D5482C0C(unk_0x0324EEB10F81965F(iVar4))) && unk_0x14E01C4EC4170496(iVar4)) || ((unk_0x45CD66F0A131E554(iVar4, 0) && unk_0x8432EA469FDB418D(unk_0x0324EEB10F81965F(iVar4))) && unk_0x14E01C4EC4170496(iVar4)))
				{
					if (fVar3 < func_215(-2.5f) && fVar3 > func_215(0.5f))
					{
						iLocal_2512 = 6;
						unk_0xC1B1E9A034A63A62(30000);
						unk_0x24B9DA75BC7B980E(30000f);
						iLocal_2640 = 36000;
					}
					else
					{
						iLocal_2512 = 7;
						unk_0xC1B1E9A034A63A62(36000);
						unk_0x24B9DA75BC7B980E(36000f);
						iLocal_2640 = 42000;
					}
				}
				else
				{
					if (unk_0x23E9113C762466ED(iVar4))
					{
						if (unk_0x45CD66F0A131E554(iVar4, 0))
						{
							if (!(unk_0xC5082382D5482C0C(unk_0x0324EEB10F81965F(iVar4)) && unk_0x14E01C4EC4170496(iVar4)) && !(unk_0x8432EA469FDB418D(unk_0x0324EEB10F81965F(iVar4)) && unk_0x14E01C4EC4170496(iVar4)))
							{
								unk_0x482AE8C0EAF5AE07(iVar4, 1084227584);
							}
						}
					}
					if (fVar3 < func_215(-1.33f) && fVar3 > func_215(-1.92f))
					{
						iLocal_2512 = 1;
						unk_0xC1B1E9A034A63A62(0);
						unk_0x24B9DA75BC7B980E(0f);
						iLocal_2640 = 6000;
					}
					else if (fVar3 < func_215(0.96f) && fVar3 > func_215(-1.33f))
					{
						iLocal_2512 = 2;
						unk_0xC1B1E9A034A63A62(6000);
						unk_0x24B9DA75BC7B980E(6000f);
						iLocal_2640 = 12000;
					}
					else if (fVar3 < func_215(2.29f) && fVar3 > func_215(0.96f))
					{
						iLocal_2512 = 3;
						unk_0xC1B1E9A034A63A62(12000);
						unk_0x24B9DA75BC7B980E(12000f);
						iLocal_2640 = 18000;
					}
					else if (fVar3 < func_215(-2.81f) || fVar3 > func_215(2.29f))
					{
						iLocal_2512 = 4;
						unk_0xC1B1E9A034A63A62(18000);
						unk_0x24B9DA75BC7B980E(18000f);
						iLocal_2640 = 24000;
					}
					else
					{
						unk_0xC1B1E9A034A63A62(24000);
						unk_0x24B9DA75BC7B980E(24000f);
						iLocal_2640 = 30000;
						iLocal_2512 = 5;
					}
				}
				iLocal_2881 = 1;
				unk_0xA5E21BA8D7CE03D8(0);
				func_210(&Local_2683, 1, 0);
				if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
				{
					iLocal_260 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
					Local_752 = { unk_0xACA666C39EA49E82(iLocal_260) };
					unk_0x98F0FA127445E343(iLocal_260, 1);
					unk_0x027DB6817AB239EB(iLocal_260, 0, 0);
				}
				unk_0x49219669A551245B();
				if (iLocal_2512 == 1)
				{
					iLocal_2883 = 1;
					func_69(2559.012f, 4958.518f, 36.02959f, 2585.447f, 4993.435f, 64.62565f, 48f, 2594.651f, 4948.114f, 38.0899f, 283.7287f, 22f, 22f, 15f, 1, 1, 1, 0, 0);
					if (unk_0x23E9113C762466ED(iVar4))
					{
						if (unk_0x45CD66F0A131E554(iVar4, 0))
						{
							unk_0x524A422B74847594(iVar4, 0, 1, 0);
						}
					}
					unk_0x1B60289D0F2A2E3C(2445.139f, 4978.642f, 52.1489f, 150f, 1, 1, 0, 0);
					unk_0x1B60289D0F2A2E3C(2578.523f, 4982.284f, 51.4416f, 13f, 1, 0, 0, 0);
					unk_0x5DC8C2F2F8A363C2(unk_0x17B5CC8A8615737D(), 2578.419f, 4981.901f, 50.587f, 1, 0, 0, 1);
					unk_0x0608D50823C6AA6D(unk_0x17B5CC8A8615737D(), 49.2184f);
					unk_0xBC8C26E1CC191108(unk_0x17B5CC8A8615737D());
					unk_0xDEAF24B058321A05(unk_0x17B5CC8A8615737D(), 0, 0);
					unk_0x316B8FE556E99FA1(unk_0x17B5CC8A8615737D(), 1f);
					unk_0x44B1CF13D39D96CE(unk_0x17B5CC8A8615737D(), joaat("MotionState_Walk"), 0, 0, 0);
					unk_0x86DD54980FE55567(&uVar5);
					unk_0x9C16B2DABAEC929A(0, 2570.543f, 4982.002f, 50.6795f, 1f, 20000, 1193033728, 1056964608);
					unk_0x3DB139C144156433(0, 88.7065f, 0);
					unk_0x007AE2AA9E15FA7B(uVar5);
					unk_0x00E85C3B3BD34B10(unk_0x17B5CC8A8615737D(), uVar5);
					unk_0x08377FB2AE4C6899(&uVar5);
					uLocal_2637 = unk_0xBD7A488D61CE4287("DEFAULT_SPLINE_CAMERA", 1);
					unk_0x9F79E3531887D729(uLocal_2637, 2538.6f, 4976.9f, 50.6f, -1.8f, 0f, 93.2f, 5000, 3, 2);
					unk_0x9F79E3531887D729(uLocal_2637, 2536.153f, 4976.7f, 50.5267f, -1.8f, 0f, 93.2f, 6000, 3, 2);
					unk_0x4BF6276065449F9C(uLocal_2637, 34.9f);
					unk_0x2FD33435045DF7BC(uLocal_2637, 0);
				}
				else
				{
					switch (iLocal_2512)
					{
						case 2:
							uLocal_2637 = unk_0xBD7A488D61CE4287("DEFAULT_SPLINE_CAMERA", 1);
							unk_0x9F79E3531887D729(uLocal_2637, 2426.8f, 5088.3f, 51.2f, 0f, 0f, -169f, 5000, 3, 2);
							unk_0x9F79E3531887D729(uLocal_2637, 2427.8f, 5087.2f, 51.2f, 0f, 0f, -169.7f, 6000, 3, 2);
							unk_0x4BF6276065449F9C(uLocal_2637, 28.5f);
							unk_0x2FD33435045DF7BC(uLocal_2637, 0);
							break;
						
						case 3:
							uLocal_2637 = unk_0xBD7A488D61CE4287("DEFAULT_SPLINE_CAMERA", 1);
							unk_0x9F79E3531887D729(uLocal_2637, 2326.3f, 4985.6f, 51.5f, 0f, 0f, -89.1f, 5000, 3, 2);
							unk_0x9F79E3531887D729(uLocal_2637, 2328f, 4985.4f, 52.1f, 0f, 0f, -89.1f, 6000, 3, 2);
							unk_0x4BF6276065449F9C(uLocal_2637, 28.5f);
							unk_0x2FD33435045DF7BC(uLocal_2637, 0);
							break;
						
						case 4:
							uLocal_2637 = unk_0xBD7A488D61CE4287("DEFAULT_SPLINE_CAMERA", 1);
							unk_0x9F79E3531887D729(uLocal_2637, 2403.6f, 4889.7f, 47.5f, 3.4f, 0f, -19.5f, 5000, 3, 2);
							unk_0x9F79E3531887D729(uLocal_2637, Vector(47.5f, 4889.7f, 2403.6f) + Vector(0.07f, 2.15f, 0.8f), 3.4f, 0f, -19.5f, 6000, 3, 2);
							unk_0x4BF6276065449F9C(uLocal_2637, 29.8f);
							unk_0x2FD33435045DF7BC(uLocal_2637, 0);
							break;
						
						case 5:
							uLocal_2637 = unk_0xBD7A488D61CE4287("DEFAULT_SPLINE_CAMERA", 1);
							unk_0x9F79E3531887D729(uLocal_2637, 2493.4f, 4934.8f, 45.7f, 5.2f, 0f, 48f, 5000, 3, 2);
							unk_0x9F79E3531887D729(uLocal_2637, Vector(45.7f, 4934.8f, 2493.4f) + Vector(0f, 1f, -1f), 5.2f, 0f, 48f, 6000, 3, 2);
							unk_0x4BF6276065449F9C(uLocal_2637, 28.5f);
							unk_0x2FD33435045DF7BC(uLocal_2637, 0);
							break;
						
						case 6:
							uLocal_2637 = unk_0xBD7A488D61CE4287("DEFAULT_SPLINE_CAMERA", 1);
							unk_0x9F79E3531887D729(uLocal_2637, 2570.6f, 4982f, 151.6f, -47.9f, 0f, 88.1f, 5000, 3, 2);
							unk_0x9F79E3531887D729(uLocal_2637, 2487.8f, 4896.9f, 151.9f, -47.2f, 0f, 28.8f, 15000, 3, 2);
							unk_0x4BF6276065449F9C(uLocal_2637, 28.5f);
							unk_0x2FD33435045DF7BC(uLocal_2637, 0);
							break;
						
						case 7:
							uLocal_2637 = unk_0xBD7A488D61CE4287("DEFAULT_SPLINE_CAMERA", 1);
							unk_0x9F79E3531887D729(uLocal_2637, 2487.8f, 4896.9f, 151.9f, -47.2f, 0f, 28.8f, 5000, 3, 2);
							unk_0x9F79E3531887D729(uLocal_2637, 2570.6f, 4982f, 151.6f, -47.9f, 0f, 88.1f, 15000, 3, 2);
							unk_0x4BF6276065449F9C(uLocal_2637, 28.5f);
							unk_0x2FD33435045DF7BC(uLocal_2637, 0);
							break;
						}
				}
				if (iLocal_2512 < 6)
				{
					unk_0x2F0C4DC7A4D75C2E(uLocal_2637, "Hand_shake", 0.2f);
				}
				else
				{
					unk_0x2F0C4DC7A4D75C2E(uLocal_2637, "Hand_shake", 0.7f);
				}
				unk_0xA652CA24468EC747(uLocal_2637, 1);
				unk_0x9274EF97A90581BE(1, 0, 3000, 1, 0, 0);
				unk_0x46081AAD7F4633BD(4);
				unk_0x4A5D4AD0FE6ACF73("CHI_2_FARMHOUSE_OVERVIEW");
				func_205(1);
				unk_0x000E46314C3A507F(0f);
				unk_0x6751FA44D6CA586D(0);
				unk_0xD12BCC85C2F8B1DE();
				unk_0x2E2945F5602A744F(1);
				unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 0, 32);
				func_186(1, 1, 1, 0);
				unk_0x4C1D7D2B3355D863(unk_0x17B5CC8A8615737D(), 0, 0);
				iLocal_2641 = unk_0x94E3E074F38DF86C() + 1000;
				iVar6 = 0;
				while (iVar6 < Local_755.f_0)
				{
					if (!unk_0xCA41A00932714525(Local_755[iVar6 /*33*/]))
					{
						unk_0x22217EB6A9BAC6EE(Local_755[iVar6 /*33*/], 1);
					}
					iVar6++;
				}
				iLocal_2642 = unk_0x2AD5F4170F4ACBEB(26, joaat("a_m_y_methhead_01"), 2460.449f, 4976.938f, 45.5765f, 243.4917f, 1, 1);
				unk_0xC1B7B5C6FDC0755B(iLocal_2642, joaat("weapon_microsmg"), -1, 1, 1);
				if (!unk_0xCA41A00932714525(iLocal_2642))
				{
					func_93();
					unk_0x29DA211B1C795F27(0, 1);
					unk_0x084522380FECC554(0, 2463.016f, 4974.97f, 45.5765f, 1f, -1, 0.5f, 1, 1193033728);
					unk_0x084522380FECC554(0, 2452.833f, 4964.785f, 45.5765f, 1f, -1, 0.5f, 1, 1193033728);
					unk_0xC47A71ED8C26841E(0, 500);
					unk_0x084522380FECC554(0, 2460.449f, 4976.938f, 45.5765f, 1f, -1, 0.5f, 0, 1193033728);
					func_92(&iLocal_2642, 1);
				}
				iLocal_2509 = unk_0x692A2891A2BA7352(joaat("dubsta"), 2479.961f, 4990f, 45.8f, -5.37f, 1, 1);
				func_15("CHN2_MISSION_START", 1, "CHN2_EXPLODE");
				iLocal_2512 = 3;
			}
			break;
		
		case 3:
			if (unk_0x83666F9FB8FEBD4B() > iLocal_2640)
			{
				unk_0xA5E21BA8D7CE03D8(0);
				uLocal_2637 = unk_0xBD7A488D61CE4287("DEFAULT_SPLINE_CAMERA", 1);
				unk_0x9F79E3531887D729(uLocal_2637, 2445.944f, 4962.986f, 51.4782f, 7.9159f, 0f, 34.5909f, 5000, 3, 2);
				unk_0x9F79E3531887D729(uLocal_2637, 2445.684f, 4963.368f, 51.6659f, 3.6033f, 0f, 34.5909f, 3500, 3, 2);
				unk_0x4BF6276065449F9C(uLocal_2637, 34f);
				unk_0x2FD33435045DF7BC(uLocal_2637, 0);
				unk_0x2F0C4DC7A4D75C2E(uLocal_2637, "Hand_shake", 0.5f);
				iLocal_2640 += 3500;
				iLocal_2512++;
			}
			break;
		
		case 4:
			if (unk_0x83666F9FB8FEBD4B() > iLocal_2640)
			{
				unk_0xA5E21BA8D7CE03D8(0);
				uLocal_2637 = unk_0xBD7A488D61CE4287("DEFAULT_SPLINE_CAMERA", 1);
				unk_0x9F79E3531887D729(uLocal_2637, 2465.07f, 4946.688f, 45.3372f, 7.1461f, 0f, 30.9281f, 5000, 3, 2);
				unk_0x9F79E3531887D729(uLocal_2637, 2466.011f, 4947.377f, 45.3509f, 7.1461f, 0f, 32.3761f, 3000, 3, 2);
				unk_0x4BF6276065449F9C(uLocal_2637, 34f);
				unk_0x2FD33435045DF7BC(uLocal_2637, 0);
				unk_0x2F0C4DC7A4D75C2E(uLocal_2637, "Hand_shake", 0.5f);
				iLocal_2640 += 3000;
				iLocal_2512++;
			}
			break;
		
		case 5:
			iLocal_2882 = 1;
			if (unk_0x83666F9FB8FEBD4B() > iLocal_2640)
			{
				iLocal_2882 = 1;
				unk_0xA5E21BA8D7CE03D8(0);
				uLocal_2637 = unk_0xBD7A488D61CE4287("DEFAULT_SPLINE_CAMERA", 1);
				unk_0x9F79E3531887D729(uLocal_2637, 2509.691f, 4971.024f, 44.1325f, 7.2578f, 0f, 88.5226f, 5000, 3, 2);
				unk_0x9F79E3531887D729(uLocal_2637, 2509.415f, 4971.163f, 44.1674f, 6.6554f, 0f, 89.4229f, 2500, 3, 2);
				unk_0x4BF6276065449F9C(uLocal_2637, 37.34f);
				unk_0x2FD33435045DF7BC(uLocal_2637, 0);
				unk_0x2F0C4DC7A4D75C2E(uLocal_2637, "Hand_shake", 0.5f);
				iLocal_2640 += 2500;
				iLocal_2512++;
			}
			break;
		
		case 6:
			if (unk_0x83666F9FB8FEBD4B() > iLocal_2640)
			{
				if (func_204())
				{
					unk_0xD12BCC85C2F8B1DE();
					unk_0x2E2945F5602A744F(1);
					unk_0x8A2806A8676E1544(6.818f);
					if (unk_0x45CD66F0A131E554(iLocal_2509, 0))
					{
						unk_0xD9C496FEAA81FF4A(iLocal_2509, "EXL_2_abandoned_car", 1, joaat("dubsta"), 0);
					}
					unk_0x51C344BE3DCB5CB5(0);
					iLocal_2879 = 0;
					iLocal_2512 = 11;
				}
			}
			break;
		
		case 10:
			if (unk_0x23E9113C762466ED(iLocal_260) && unk_0x45CD66F0A131E554(iLocal_260, 0))
			{
				unk_0xA5A55E27B5DAA4C2(iLocal_260);
			}
			if (!unk_0x25BD4C26D84038CD() && !unk_0x46EEE08565CE19CA())
			{
				unk_0x50FD1894558DE186(500);
			}
			if ((unk_0x25BD4C26D84038CD() && !unk_0x1B76B77EDF24A933()) || (unk_0x80A7A5165A9C7607() && unk_0x66FBC42991B0D41E(1)))
			{
				iLocal_2512++;
			}
			break;
		
		case 11:
			if (unk_0x23E9113C762466ED(iLocal_260) && unk_0x45CD66F0A131E554(iLocal_260, 0))
			{
				unk_0xA5A55E27B5DAA4C2(iLocal_260);
			}
			if ((unk_0x25BD4C26D84038CD() && !unk_0x1B76B77EDF24A933()) || (unk_0x80A7A5165A9C7607() && unk_0x66FBC42991B0D41E(1)))
			{
				unk_0xA5E21BA8D7CE03D8(0);
				unk_0x9274EF97A90581BE(0, 0, 3000, 1, 0, 0);
				if (func_182() && !bLocal_2647)
				{
					unk_0x9AF1ABF0E97411BF("CamPushInNeutral", 0, 0);
					unk_0x4988C48537D1AE4F(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				}
				unk_0x2EE4FDDB1E7664FB();
				if (func_67(unk_0x17B5CC8A8615737D(), 2570.543f, 4982.002f, 50.6795f, 1) < 15f && func_67(unk_0x17B5CC8A8615737D(), 2570.543f, 4982.002f, 50.6795f, 1) > 1f)
				{
					unk_0x5DC8C2F2F8A363C2(unk_0x17B5CC8A8615737D(), 2570.543f, 4982.002f, 50.6795f, 1, 0, 0, 1);
					unk_0x0608D50823C6AA6D(unk_0x17B5CC8A8615737D(), 98.21f);
				}
				else if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
				{
					unk_0x0608D50823C6AA6D(unk_0x17B5CC8A8615737D(), func_96(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 2458.223f, 4986.042f, 49.05241f, 1));
				}
				unk_0xBA7CD73403732191(0f);
				unk_0x503F20CB07C55470(-6.3f, 1065353216);
				unk_0x8A2806A8676E1544(6.818f);
				unk_0xDEAF24B058321A05(unk_0x17B5CC8A8615737D(), 0, 0);
				unk_0x4C21FD297A827B45();
				unk_0xB8CAC5F3774894A1("CHI_2_FARMHOUSE_OVERVIEW");
				unk_0xD12BCC85C2F8B1DE();
				unk_0x2E2945F5602A744F(1);
				unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 1, 0);
				func_205(0);
				if (unk_0x509A3191A6C4EB38(unk_0x17B5CC8A8615737D(), joaat("weapon_sniperrifle"), 0))
				{
					if (unk_0x034EB52F6D89BFA0(unk_0x17B5CC8A8615737D(), joaat("weapon_sniperrifle")) < 15)
					{
						unk_0x66B30A22DE11CA97(unk_0x17B5CC8A8615737D(), joaat("weapon_sniperrifle"), 50);
					}
				}
				func_186(0, 1, 1, 0);
				if (unk_0x23E9113C762466ED(iLocal_2642))
				{
					unk_0x478AE709A466CB7E(&iLocal_2642);
				}
				iLocal_2885 = func_18(4);
				if (iLocal_2885 != -1)
				{
					if (!unk_0xCA41A00932714525(Local_755[iLocal_2885 /*33*/]))
					{
						unk_0x478AE709A466CB7E(&(Local_755[iLocal_2885 /*33*/]));
					}
					if (unk_0x23E9113C762466ED(Local_755[iLocal_2885 /*33*/].f_20))
					{
						unk_0x1AAFEA627BB9C402(&(Local_755[iLocal_2885 /*33*/].f_20));
					}
					Local_1619[iLocal_2885 /*24*/].f_3 = 1;
					Local_755[iLocal_2885 /*33*/].f_5 = 0;
					Local_755[iLocal_2885 /*33*/].f_14 = 0;
					Local_755[iLocal_2885 /*33*/].f_3 = 2;
				}
				iLocal_2886 = func_18(5);
				if (iLocal_2886 != -1)
				{
					if (!unk_0xCA41A00932714525(Local_755[iLocal_2886 /*33*/]))
					{
						unk_0x478AE709A466CB7E(&(Local_755[iLocal_2886 /*33*/]));
					}
					if (unk_0x23E9113C762466ED(Local_755[iLocal_2886 /*33*/].f_20))
					{
						unk_0x1AAFEA627BB9C402(&(Local_755[iLocal_2886 /*33*/].f_20));
					}
					Local_1619[iLocal_2886 /*24*/].f_3 = 1;
					Local_755[iLocal_2886 /*33*/].f_5 = 0;
					Local_755[iLocal_2886 /*33*/].f_14 = 0;
					Local_755[iLocal_2886 /*33*/].f_3 = 2;
				}
				func_31(20, 0);
				if (!unk_0xCA41A00932714525(iLocal_2643))
				{
					unk_0x478AE709A466CB7E(&iLocal_2643);
				}
				if (!unk_0xCA41A00932714525(iLocal_2644))
				{
					unk_0x478AE709A466CB7E(&iLocal_2644);
				}
				if (func_68(iLocal_2509))
				{
					unk_0x813865264334331D(&iLocal_2509);
				}
				if (unk_0x23E9113C762466ED(iLocal_2682))
				{
					unk_0x1AAFEA627BB9C402(&iLocal_2682);
				}
				func_202();
				iLocal_751 = 0;
				func_27();
				unk_0x924CDE68BA2ED3BA(joaat("prop_phone_ing"));
				unk_0x924CDE68BA2ED3BA(joaat("dubsta"));
				iVar7 = 0;
				while (iVar7 < Local_755.f_0)
				{
					if (!unk_0xCA41A00932714525(Local_755[iVar7 /*33*/]))
					{
						unk_0x22217EB6A9BAC6EE(Local_755[iVar7 /*33*/], 0);
					}
					iVar7++;
				}
				unk_0xBA7CD73403732191(0f);
				unk_0x503F20CB07C55470(-6.3f, 1065353216);
				if (unk_0x23E9113C762466ED(iLocal_260))
				{
					if (unk_0x45CD66F0A131E554(iLocal_260, 0))
					{
						unk_0x98F0FA127445E343(iLocal_260, 0);
						if (unk_0x8432EA469FDB418D(unk_0x0324EEB10F81965F(iLocal_260)))
						{
							unk_0x7B846714372D2EEF(iLocal_260, Local_752);
							unk_0xFCB4AA590A0D6A59(unk_0x17B5CC8A8615737D(), iLocal_260, -1);
						}
						unk_0x524A422B74847594(iLocal_260, 1, 1, 0);
						if (unk_0xC5082382D5482C0C(unk_0x0324EEB10F81965F(iLocal_260)))
						{
							unk_0x04A5FAE5B1EB8E28(iLocal_260, 0f, 0f, unk_0x638527C9799F2AE4(iLocal_260), 2, 1);
							unk_0x85E61E88835AE7F5(iLocal_260);
							unk_0x7B846714372D2EEF(iLocal_260, 1f, 1f, 1f);
							unk_0xFCB4AA590A0D6A59(unk_0x17B5CC8A8615737D(), iLocal_260, -1);
						}
						if (iLocal_2883 == 0)
						{
							unk_0xFCB4AA590A0D6A59(unk_0x17B5CC8A8615737D(), iLocal_260, -1);
						}
						unk_0x027DB6817AB239EB(iLocal_260, 1, 0);
					}
				}
				unk_0x027DB6817AB239EB(unk_0x17B5CC8A8615737D(), 1, 0);
				unk_0xF74BF04E3FF80B44(unk_0xBE369BE1BC57A796(), 1);
				unk_0x2FBF689422F41891();
				if (unk_0x25BD4C26D84038CD())
				{
					unk_0xC7845898207D067F(1000);
				}
				unk_0xBFF7E87106CE7475(1);
				func_176(11);
			}
			break;
	}
}

void func_202()
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(iLocal_2507))
	{
		unk_0x813865264334331D(&iLocal_2507);
	}
	iVar0 = 0;
	while (iVar0 < Local_755.f_0)
	{
		if (unk_0x23E9113C762466ED(Local_755[iVar0 /*33*/]))
		{
			unk_0x478AE709A466CB7E(&(Local_755[iVar0 /*33*/]));
		}
		if (unk_0x23E9113C762466ED(Local_755[iVar0 /*33*/].f_20))
		{
			unk_0x1AAFEA627BB9C402(&(Local_755[iVar0 /*33*/].f_20));
		}
		Local_755[iVar0 /*33*/].f_3 = 0;
		Local_755[iVar0 /*33*/].f_4 = 0;
		Local_755[iVar0 /*33*/].f_6 = { 0f, 0f, 0f };
		Local_755[iVar0 /*33*/].f_9 = { 0f, 0f, 0f };
		Local_755[iVar0 /*33*/].f_2 = 25;
		Local_755[iVar0 /*33*/].f_5 = 0;
		Local_755[iVar0 /*33*/].f_12 = 0f;
		Local_755[iVar0 /*33*/].f_13 = 0f;
		Local_755[iVar0 /*33*/].f_14 = 0;
		Local_755[iVar0 /*33*/].f_15 = 0;
		Local_755[iVar0 /*33*/].f_17 = 0;
		Local_755[iVar0 /*33*/].f_16 = 0;
		Local_755[iVar0 /*33*/].f_21 = 0;
		Local_755[iVar0 /*33*/].f_22 = 0;
		Local_1619[iVar0 /*24*/].f_3 = 1;
		iVar0++;
	}
	if (unk_0xAF6D1E258B973F1D(uLocal_2650))
	{
		unk_0xC2E11A6D29A07A71(uLocal_2650);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_2651)
	{
		if (unk_0xAF6D1E258B973F1D(iLocal_2651[iVar0]))
		{
			unk_0xC2E11A6D29A07A71(iLocal_2651[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_2657)
	{
		if (unk_0x23E9113C762466ED(iLocal_2657[iVar0]))
		{
			unk_0x1AAFEA627BB9C402(&(iLocal_2657[iVar0]));
		}
		iVar0++;
	}
	func_203(&Local_1619, &uLocal_2708, cLocal_2338, 12f, 2482.197f, 4975.367f, 44.7288f, 121f, 1);
}

void func_203(var uParam0, var uParam1, char* sParam2, float fParam3, struct<3> Param4, float fParam7, int iParam8)
{
	int iVar0;
	
	iLocal_57 = iLocal_57;
	uLocal_70 = fParam3;
	Local_71 = { Param4 };
	fLocal_74 = fParam7;
	Local_89 = { *uParam1 };
	cLocal_254 = sParam2;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(uParam0[iVar0 /*24*/])->f_1 = 0;
		(uParam0[iVar0 /*24*/])->f_2 = 0;
		(uParam0[iVar0 /*24*/])->f_3 = iParam8;
		(uParam0[iVar0 /*24*/])->f_4 = 0;
		(uParam0[iVar0 /*24*/])->f_5 = 0;
		(uParam0[iVar0 /*24*/])->f_7 = 0;
		(uParam0[iVar0 /*24*/])->f_8 = 0;
		(uParam0[iVar0 /*24*/])->f_10 = 0;
		(uParam0[iVar0 /*24*/])->f_11 = 0;
		(uParam0[iVar0 /*24*/])->f_12 = { 0f, 0f, 0f };
		(uParam0[iVar0 /*24*/])->f_15 = { 0f, 0f, 0f };
		(uParam0[iVar0 /*24*/])->f_18 = 0f;
		iVar0++;
	}
	bLocal_53 = false;
	bLocal_54 = false;
	iLocal_55 = 0;
	bLocal_56 = false;
	iLocal_57 = 0;
	bLocal_77 = true;
	iLocal_76 = 0;
	iLocal_58 = 0;
	iLocal_60 = 0;
	iLocal_61 = -1;
	iLocal_62 = -1;
	iLocal_63 = 0;
	iLocal_64 = 0;
	iLocal_65 = 0;
	iLocal_66 = 0;
	iLocal_67 = 0;
	iLocal_68 = 0;
	iLocal_69 = 0;
	unk_0x89C3FD802851E6B3(joaat("DEFAULT"), 31);
	iLocal_52 = 0;
}

bool func_204()
{
	bool bVar0;
	
	bVar0 = unk_0x77888DFE5B94E7E5();
	if (!Global_69701)
	{
		if (!bVar0)
		{
			Global_69701 = 1;
		}
	}
	return bVar0;
}

void func_205(bool bParam0)
{
	if (bParam0)
	{
		func_209();
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
		{
			unk_0xEB79FECD9022AAF0(&Global_2314, 16);
		}
		Global_14443.f_1 = 1;
		if (func_208(0))
		{
			func_206(0);
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

void func_206(int iParam0)
{
	if (Global_14604)
	{
		func_207(0, 0);
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
	if (!func_40())
	{
		Global_14443.f_1 = 3;
	}
}

void func_207(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_208(0))
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

int func_208(int iParam0)
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

void func_209()
{
	if (Global_14443.f_1 == 9 || Global_14443.f_1 == 10)
	{
		Global_15798 = 0;
		Global_15794 = 1;
	}
}

void func_210(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x48B8265059381CD0(uParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_214(uParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xA3794949321E107C(uParam0->f_1[iVar0]))
		{
			unk_0x020DF7300725ECAB(&(uParam0->f_1[iVar0]));
		}
		func_213(iVar0, uParam0);
		func_212(iVar0, uParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			unk_0x21E7933CCC7B3724(&(uParam0->f_13), iVar0);
			unk_0x21E7933CCC7B3724(&(uParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (unk_0xA3794949321E107C(*uParam0))
	{
		unk_0x020DF7300725ECAB(uParam0);
	}
	uParam0->f_6 = 0;
	uParam0->f_12 = 0;
	uParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0xCA41A00932714525(uParam0->f_17[iVar0]))
		{
			unk_0xFB616ABA635A95B3(uParam0->f_17[iVar0], 1);
			unk_0xEABCB9D3B3CDC77E(uParam0->f_17[iVar0], 1);
			if (bParam2)
			{
				unk_0x6018E338F7ABCE75(uParam0->f_17[iVar0], 32, 1);
				unk_0x6018E338F7ABCE75(uParam0->f_17[iVar0], 305, 0);
			}
			unk_0x6018E338F7ABCE75(uParam0->f_17[iVar0], 268, 0);
			if (bParam1)
			{
				if (unk_0x143230304C45DBF3(uParam0->f_17[iVar0], func_211()) && uParam0->f_17[iVar0] != unk_0x17B5CC8A8615737D())
				{
					unk_0xFB2D342CDD441DD9(uParam0->f_17[iVar0]);
				}
			}
			if (!unk_0x48B8265059381CD0(uParam0->f_13, 29))
			{
				unk_0xE2D8919DE58194D4(uParam0->f_17[iVar0], 0, -1, 0);
			}
			uParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		unk_0xFB616ABA635A95B3(unk_0x17B5CC8A8615737D(), 1);
		unk_0xEABCB9D3B3CDC77E(unk_0x17B5CC8A8615737D(), 1);
	}
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		if (bParam2)
		{
			unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 32, 1);
		}
	}
	uParam0->f_21 = 0;
}

var func_211()
{
	return unk_0xDC8370280C455166(unk_0x592069F95C314814());
}

void func_212(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x21E7933CCC7B3724(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x21E7933CCC7B3724(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x21E7933CCC7B3724(&(uParam1->f_13), 19);
			break;
	}
}

void func_213(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x21E7933CCC7B3724(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x21E7933CCC7B3724(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x21E7933CCC7B3724(&(uParam1->f_13), 16);
			break;
	}
}

void func_214(var uParam0)
{
	if (unk_0xA3794949321E107C(uParam0->f_5))
	{
		unk_0x020DF7300725ECAB(&(uParam0->f_5));
	}
}

float func_215(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_216()
{
	int iVar0;
	
	func_170(1, 4);
	func_160(0, 2, 0, 2, 3, 1, 0, 1, 0, 1, 0);
	func_160(1, 3, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(2, 41, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(3, 42, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(4, 47, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(5, 4, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(6, 6, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(7, 7, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(8, 8, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(9, 9, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_160(10, 5, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_149(0, 1, 2, 2, 1, 0, 1, 0);
	func_197(3, 0, 0, 1, 0);
	if ((func_67(unk_0x17B5CC8A8615737D(), 2458.223f, 4986.042f, 49.05241f, 0) < 107.9f || unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 2374.441f, 4930.564f, 34.73784f, 2478.099f, 5077.488f, 60.63246f, 185f, 0, 0, 0)) || unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 2396.726f, 4887.434f, 33.85329f, 2510.54f, 5003.356f, 58.01184f, 158.25f, 0, 0, 0))
	{
		if (unk_0xA3794949321E107C(Local_2683.f_5))
		{
			unk_0x5ACBCE67F0494242(Local_2683.f_6, 0);
		}
		func_176(11);
	}
	else
	{
		switch (iLocal_2512)
		{
			case 0:
				func_32(2, 0);
				func_32(3, 0);
				func_32(1, 0);
				func_32(5, 0);
				func_260(5, -20);
				unk_0x000E46314C3A507F(0f);
				unk_0x6751FA44D6CA586D(0);
				iLocal_2512++;
				break;
			
			case 1:
				if (func_220(&Local_2683, 2608.151f, 4949.754f, 39.4f, 9f, 9f, 2f, 1, "FRMCHSE_1", 1, 1, -1))
				{
					unk_0x2DE9FDD822EE641B(6f, 6f, 3);
					iLocal_2512++;
					func_210(&Local_2683, 1, 0);
					func_31(3, 1);
					if (unk_0x4E1850F5FF023071("CHI_2_DRIVE_TO_FARMHOUSE"))
					{
						unk_0xB8CAC5F3774894A1("CHI_2_DRIVE_TO_FARMHOUSE");
					}
					if (unk_0x4E1850F5FF023071("CHI_2_DRIVE_ROCK_RADIO"))
					{
						unk_0xB8CAC5F3774894A1("CHI_2_DRIVE_ROCK_RADIO");
					}
				}
				break;
			
			case 2:
				if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
				{
					iVar0 = unk_0xFD05A5AA90984873(unk_0x17B5CC8A8615737D());
					if (func_218(iVar0, 10f, 2, 1056964608, 0, 1, 0))
					{
						if (func_217(5) > 2)
						{
							iLocal_2512++;
						}
					}
				}
				else
				{
					iLocal_2512++;
				}
				break;
			
			case 3:
				if (func_220(&Local_2683, 2573.63f, 4983.677f, 50.6978f, 12f, 12f, 2f, 0, "FRMCHSE_5", 1, 1, -1))
				{
					if (unk_0x4E1850F5FF023071("CHI_2_DRIVE_ROCK_RADIO"))
					{
						unk_0xB8CAC5F3774894A1("CHI_2_DRIVE_ROCK_RADIO");
					}
					unk_0x2DE9FDD822EE641B(5f, 10f, 4);
					func_176(11);
				}
				if (unk_0xA3794949321E107C(Local_2683.f_5))
				{
					unk_0x5ACBCE67F0494242(Local_2683.f_6, 0);
				}
				break;
			}
	}
}

int func_217(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_2515.f_0)
	{
		if (Local_2515[iVar0 /*6*/].f_1 == 1)
		{
			if (Local_2515[iVar0 /*6*/] == iParam0)
			{
				return Local_2515[iVar0 /*6*/].f_2;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_218(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0xD1BB2AD73E7FC3A7(0, 71, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 72, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 76, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 73, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 59, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 60, 1);
	if (bParam5)
	{
		unk_0xD1BB2AD73E7FC3A7(0, 75, 1);
	}
	unk_0xD1BB2AD73E7FC3A7(0, 80, 1);
	if (!bParam6)
	{
		unk_0xD1BB2AD73E7FC3A7(0, 69, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 70, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 68, 1);
	}
	unk_0xD1BB2AD73E7FC3A7(0, 74, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 86, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 81, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 82, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 138, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 136, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 114, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 107, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 110, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 89, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 89, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 87, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 88, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 113, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 115, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 116, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 117, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 118, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 119, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 131, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 132, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 123, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 126, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 129, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 130, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 133, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 134, 1);
	unk_0xA07E0C7D04CFDAC7();
	func_219(iParam0);
	if ((unk_0x94E3E074F38DF86C() - Global_29) > 500)
	{
		unk_0xEEA9C8F490BB3507(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x94E3E074F38DF86C();
	if (!unk_0xA929B2923D14E2F8(iParam0, 0))
	{
		if (unk_0xE851F22ED3518011(unk_0x13B7ACE69D27E3E4(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_219(var uParam0)
{
	if (unk_0x2A0DB8BAFA0BA9B1(uParam0))
	{
		if (unk_0x877E4C9DCF0BC909(uParam0))
		{
			unk_0x84563853ACCAC2B6(uParam0, 0);
		}
	}
}

bool func_220(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, char* sParam8, bool bParam9, bool bParam10, int iParam11)
{
	return func_221(uParam0, Param1, Param4, func_259(), func_259(), iParam7, 1, 0, 0, 0, 0, sParam8, func_167(), func_167(), func_167(), func_167(), func_167(), 0, bParam9, func_167(), 0, 0, bParam10, iParam11, 0, 0, 0, 1, 1065353216);
}

int func_221(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, bool bParam25, bool bParam26, char* sParam27, bool bParam28, int iParam29, bool bParam30, int iParam31, int iParam32, int iParam33, int iParam34, bool bParam35, float fParam36)
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
	func_258(uParam0);
	func_257(uParam0);
	func_256();
	if (func_240(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, uParam0->f_8, bParam25, iParam18, 0, 0, iParam32, iParam33, iParam34, iParam14, bParam26))
	{
		func_239(sParam20);
		func_239(sParam21);
		func_239(sParam22);
		func_239(sParam23);
		if (unk_0x30F06AB0772AFB80())
		{
			bVar1 = false;
			if (unk_0x45CD66F0A131E554(iParam18, 0))
			{
				if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iParam18, 0))
				{
					unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 3);
					if (!unk_0x48B8265059381CD0(uParam0->f_13, 9))
					{
						unk_0x21E7933CCC7B3724(&(uParam0->f_13), 4);
					}
					if (unk_0x48B8265059381CD0(uParam0->f_13, 23))
					{
						unk_0x21E7933CCC7B3724(&(uParam0->f_13), 23);
					}
					unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5)
			{
				if (func_237(uParam0, iParam29))
				{
					unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 3);
					if (!unk_0x48B8265059381CD0(uParam0->f_13, 9))
					{
						unk_0x21E7933CCC7B3724(&(uParam0->f_13), 4);
					}
					unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_239(sParam24);
				func_239(sParam27);
				func_239("MORE_SEATS");
				if (bParam26 && unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0))
				{
					if (unk_0xA3794949321E107C(uParam0->f_5))
					{
						unk_0x020DF7300725ECAB(&(uParam0->f_5));
						func_239(sParam19);
					}
					if (unk_0xA3794949321E107C(*uParam0))
					{
						unk_0x020DF7300725ECAB(uParam0);
					}
					if ((!func_234(uParam0, 1) && !func_233(uParam0)) && !unk_0x48B8265059381CD0(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_232(uParam0, "LOSE_WANTED", 0);
							if (!unk_0xCA41A00932714525(uParam0->f_17[0]))
							{
								func_230(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 0);
						unk_0x21E7933CCC7B3724(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0x48B8265059381CD0(uParam0->f_13, 0))
					{
						func_239("LOSE_WANTED");
						unk_0x21E7933CCC7B3724(&(uParam0->f_13), 0);
						unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 1);
					}
					if (unk_0x48B8265059381CD0(uParam0->f_13, 1))
					{
						if (!func_234(uParam0, 1))
						{
							if (!unk_0xCA41A00932714525(uParam0->f_17[0]))
							{
								func_230(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x21E7933CCC7B3724(&(uParam0->f_13), 1);
						}
					}
					if (!unk_0xA3794949321E107C(uParam0->f_5))
					{
						if (unk_0xA3794949321E107C(*uParam0))
						{
							unk_0x020DF7300725ECAB(uParam0);
						}
						uParam0->f_5 = func_5(Var3, 0);
						if (!iParam31 == -1)
						{
							unk_0xA0BCCD5C2B5FC84F(uParam0->f_5, iParam31);
						}
						if (bParam35)
						{
							func_229(uParam0->f_5, uParam0);
						}
					}
					else if (!func_228(Var3, unk_0xCC1DFCD030782230(uParam0->f_5), 0.1f, 0))
					{
						unk_0xC106C8D8B1488032(uParam0->f_5, Var3);
						if (bParam35)
						{
							func_229(uParam0->f_5, uParam0);
						}
					}
					if (!func_234(uParam0, 2))
					{
						if (!unk_0x48B8265059381CD0(uParam0->f_13, 2))
						{
							func_232(uParam0, sParam19, 0);
							unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 2);
						}
					}
					if (iParam14 == 4 || iParam14 == 5)
					{
						if (unk_0x48B8265059381CD0(uParam0->f_13, 13))
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
						unk_0x1C34CE8087E3897C(unk_0x17B5CC8A8615737D(), Param1, Param4, iParam13, iVar6, iVar7);
						if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), Param7, Param10, fParam36, 0, iVar6, iVar7))
						{
							bVar1 = true;
						}
					}
					else if (unk_0x1C34CE8087E3897C(unk_0x17B5CC8A8615737D(), Param1, Param4, iParam13, iVar6, iVar7))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!unk_0xCA41A00932714525(uParam0->f_17[iVar2]))
							{
								if (iParam14 == 4 || iParam14 == 5)
								{
									iVar0 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
									if (!unk_0x2315BB1606BC3DC3(uParam0->f_17[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam18 != 0)
								{
									if (!unk_0x2315BB1606BC3DC3(uParam0->f_17[iVar2], iParam18, 0))
									{
										bVar1 = false;
									}
								}
								else if (!unk_0x143230304C45DBF3(uParam0->f_17[iVar2], func_211()) || !func_226(uParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_223(uParam0))
							{
								func_239(sParam19);
								func_239(sParam24);
								func_239(sParam20);
								func_239(sParam21);
								func_239(sParam22);
								func_239(sParam23);
								func_239("LOSE_WANTED");
								func_239("MORE_SEATS");
								func_239(sParam27);
								func_210(uParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (unk_0x23E9113C762466ED(iParam18))
			{
				if ((bParam26 && unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0)) && (!unk_0x48B8265059381CD0(uParam0->f_13, 9) && !unk_0x48B8265059381CD0(uParam0->f_13, 22)))
				{
					func_239(sParam24);
					func_239(sParam27);
					if (unk_0xA3794949321E107C(uParam0->f_5) || unk_0xA3794949321E107C(*uParam0))
					{
						unk_0x020DF7300725ECAB(&(uParam0->f_5));
						unk_0x020DF7300725ECAB(uParam0);
						func_239(sParam19);
					}
					if ((!func_234(uParam0, 1) && !func_233(uParam0)) && !unk_0x48B8265059381CD0(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_232(uParam0, "LOSE_WANTED", 0);
							if (!unk_0xCA41A00932714525(uParam0->f_17[0]))
							{
								func_230(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 0);
						unk_0x21E7933CCC7B3724(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0x48B8265059381CD0(uParam0->f_13, 0))
					{
						func_239("LOSE_WANTED");
						unk_0x21E7933CCC7B3724(&(uParam0->f_13), 0);
						unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 1);
					}
					if (unk_0x48B8265059381CD0(uParam0->f_13, 1))
					{
						if (!func_234(uParam0, 1))
						{
							if (!unk_0xCA41A00932714525(uParam0->f_17[0]))
							{
								func_230(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x21E7933CCC7B3724(&(uParam0->f_13), 1);
						}
					}
					if (unk_0x45CD66F0A131E554(iParam18, 0))
					{
						if (!unk_0xA3794949321E107C(*uParam0))
						{
							if (unk_0xA3794949321E107C(uParam0->f_5))
							{
								unk_0x020DF7300725ECAB(&(uParam0->f_5));
								func_239(sParam19);
							}
							*uParam0 = func_222(iParam18, 0, 0);
							unk_0x8E5BEC1151739D19(*uParam0, 2);
							if (!unk_0x48B8265059381CD0(uParam0->f_13, 4))
							{
								func_229(*uParam0, uParam0);
							}
						}
						if (!func_234(uParam0, 2))
						{
							if (!unk_0x48B8265059381CD0(uParam0->f_13, 3))
							{
								func_232(uParam0, sParam24, 0);
								unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 3);
								unk_0x21E7933CCC7B3724(&(uParam0->f_13), 4);
							}
							else if (unk_0x48B8265059381CD0(uParam0->f_13, 9))
							{
								if (!unk_0xD3115E7F7876D6E6(sParam27))
								{
									if (!unk_0x48B8265059381CD0(uParam0->f_13, 4))
									{
										func_232(uParam0, sParam27, 0);
										unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 4);
									}
								}
								else if (!unk_0x48B8265059381CD0(uParam0->f_13, 4))
								{
									func_232(uParam0, sParam24, 0);
									unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 4);
								}
								if (!unk_0x48B8265059381CD0(uParam0->f_13, 23))
								{
									if (!unk_0xCA41A00932714525(uParam0->f_17[0]))
									{
										func_230(uParam0->f_17[0], "GET_IN_CAR", 3);
									}
									unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0xA3794949321E107C(uParam0->f_5))
				{
					unk_0x020DF7300725ECAB(&(uParam0->f_5));
					func_239(sParam19);
				}
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!func_234(uParam0, 2))
						{
							if (unk_0xD035C652F0986F10(unk_0x17B5CC8A8615737D()))
							{
								if (!unk_0x48B8265059381CD0(uParam0->f_13, 13))
								{
									iVar8 = 0;
									iVar9 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!unk_0xCA41A00932714525(uParam0->f_17[iVar2]))
										{
											iVar8++;
										}
										iVar2++;
									}
									iVar9 = unk_0x0E29C61F26D96FDB(0, iVar8);
									if (!unk_0xCA41A00932714525(uParam0->f_17[iVar9]))
									{
										func_230(uParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_232(uParam0, "MORE_SEATS", 0);
									unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 13);
								}
							}
							else if (!unk_0x48B8265059381CD0(uParam0->f_13, 3))
							{
								func_232(uParam0, sParam24, 0);
								unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 3);
								unk_0x21E7933CCC7B3724(&(uParam0->f_13), 4);
							}
							else if (!unk_0x48B8265059381CD0(uParam0->f_13, 4))
							{
								if (unk_0x48B8265059381CD0(uParam0->f_13, 9))
								{
									func_232(uParam0, sParam27, 0);
									unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_234(uParam0, 2))
					{
						if (!unk_0x48B8265059381CD0(uParam0->f_13, 3))
						{
							func_232(uParam0, sParam24, 0);
							unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 3);
							unk_0x21E7933CCC7B3724(&(uParam0->f_13), 4);
						}
						else if (unk_0x48B8265059381CD0(uParam0->f_13, 9))
						{
							if (!unk_0xD3115E7F7876D6E6(sParam27))
							{
								if (!unk_0x48B8265059381CD0(uParam0->f_13, 4))
								{
									func_232(uParam0, sParam27, 0);
									unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 4);
								}
							}
							else if (!unk_0x48B8265059381CD0(uParam0->f_13, 4))
							{
								func_232(uParam0, sParam24, 0);
								unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (unk_0x48B8265059381CD0(uParam0->f_13, 0))
		{
			unk_0x21E7933CCC7B3724(&(uParam0->f_13), 0);
		}
		func_239(sParam19);
		func_239(sParam24);
		func_239(sParam27);
		func_239(sParam24);
		func_239("LOSE_WANTED");
		if (unk_0xA3794949321E107C(uParam0->f_5))
		{
			unk_0x020DF7300725ECAB(&(uParam0->f_5));
		}
		if (unk_0xA3794949321E107C(*uParam0))
		{
			unk_0x020DF7300725ECAB(uParam0);
		}
	}
	unk_0x21E7933CCC7B3724(&(uParam0->f_13), 11);
	unk_0x21E7933CCC7B3724(&(uParam0->f_13), 12);
	return 0;
}

int func_222(int iParam0, bool bParam1, bool bParam2)
{
	return func_14(iParam0, !bParam1, bParam2);
}

int func_223(var uParam0)
{
	if (unk_0x48B8265059381CD0(uParam0->f_13, 12))
	{
		if (func_225(unk_0x17B5CC8A8615737D()))
		{
			if (func_224(1, 0, 1) || unk_0x48B8265059381CD0(uParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_224(1, 0, 1) || unk_0x48B8265059381CD0(uParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_224(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xBDEC9B948A62578A())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		if (!unk_0xD035C652F0986F10(unk_0x17B5CC8A8615737D()))
		{
			return 0;
		}
		iVar0 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
		if (bParam0)
		{
			if (unk_0xA929B2923D14E2F8(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xA929B2923D14E2F8(iVar0, 0))
			{
				if (unk_0x17206B315923243C(iVar0, -1, 0) != unk_0x17B5CC8A8615737D())
				{
					return 0;
				}
			}
		}
		if (!unk_0xA929B2923D14E2F8(iVar0, 0))
		{
			if (unk_0x2BB7527A68E10019(iVar0) < 0.95f || unk_0x2BB7527A68E10019(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x3D6EEB2BAADEC759(unk_0xBE369BE1BC57A796()))
	{
		return 0;
	}
	if (!unk_0xD37F3675F4465D41(unk_0xBE369BE1BC57A796()))
	{
		return 0;
	}
	return 1;
}

int func_225(int iParam0)
{
	float fVar0;
	
	if (!unk_0xCA41A00932714525(iParam0))
	{
		fVar0 = unk_0x13B7ACE69D27E3E4(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_226(int iParam0, int iParam1)
{
	if (!unk_0xCA41A00932714525(iParam0))
	{
		if (unk_0xD035C652F0986F10(unk_0x17B5CC8A8615737D()) && iParam1)
		{
			if (func_227(unk_0x17B5CC8A8615737D(), iParam0))
			{
				unk_0x79530D3E0E0D8259(func_211(), 50f);
				return 1;
			}
		}
		else if (unk_0x143230304C45DBF3(iParam0, func_211()))
		{
			unk_0x79530D3E0E0D8259(func_211(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_227(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xCA41A00932714525(iParam0))
	{
		if (unk_0xD035C652F0986F10(iParam0))
		{
			iVar0 = unk_0x60604E51E30D25B8(iParam0, 0);
			if (unk_0x45CD66F0A131E554(iVar0, 0))
			{
				if (!unk_0xCA41A00932714525(iParam1))
				{
					if (unk_0x7B816C72877502C5(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_228(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0xE851F22ED3518011((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0xE851F22ED3518011((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0xE851F22ED3518011((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xE851F22ED3518011((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xE851F22ED3518011((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_229(var uParam0, var uParam1)
{
	if (unk_0xA3794949321E107C(uParam0))
	{
		if (unk_0xA3794949321E107C(uParam1->f_6))
		{
			unk_0x5ACBCE67F0494242(uParam1->f_6, 0);
		}
		unk_0xAB47D4636B324239(0);
		unk_0x527330BECBB9D9CD();
		uParam1->f_6 = uParam0;
		unk_0x5ACBCE67F0494242(uParam0, 1);
	}
}

void func_230(var uParam0, char* sParam1, int iParam2)
{
	unk_0xE4C6605BC74297B4(uParam0, sParam1, func_231(iParam2), 1);
}

int func_231(int iParam0)
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

void func_232(var uParam0, char* sParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!unk_0xD3115E7F7876D6E6(sParam1))
		{
			if (!unk_0x6A7B0D91FD88D9EE(sParam1, ""))
			{
				func_150(sParam1, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x94E3E074F38DF86C();
}

int func_233(var uParam0)
{
	if (!unk_0xCA41A00932714525(uParam0->f_16))
	{
		if (unk_0x872115A210435770(uParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_234(var uParam0, int iParam1)
{
	if (iParam1 != 1 || unk_0xDA5E060432EE0B26())
	{
		if (unk_0x75342B3CD0FB5275())
		{
			return 1;
		}
		if (func_236(uParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0xDA5E060432EE0B26())
	{
		if (func_59() && !func_235())
		{
			return 1;
		}
	}
	return 0;
}

int func_235()
{
	if (Global_16756 == 1)
	{
		return 1;
	}
	return 0;
}

int func_236(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x94E3E074F38DF86C();
	iVar0 = (iVar1 - uParam0->f_10);
	if (iVar0 < 35)
	{
		return 1;
	}
	return 0;
}

int func_237(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		iVar0 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
		if (func_238(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_238(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x45CD66F0A131E554(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (unk_0x23E9113C762466ED(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0x58060A1B26EA2597(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!unk_0x4325876506543E89(iParam0, 1))
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
				if (!unk_0x4325876506543E89(iParam0, 1))
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

void func_239(char* sParam0)
{
	if (!unk_0xD3115E7F7876D6E6(sParam0))
	{
		unk_0x69E47427C5084888(sParam0);
	}
}

int func_240(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, var uParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)
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
		if (!unk_0xCA41A00932714525(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0))
		{
			if (!unk_0x48B8265059381CD0(uParam0->f_13, 29) && !unk_0x48B8265059381CD0(uParam0->f_13, 28))
			{
				if (!unk_0xCA41A00932714525(uParam0->f_17[iVar0]))
				{
					unk_0xE2D8919DE58194D4(uParam0->f_17[iVar0], 1, -1, 0);
				}
				if (iVar0 == 2)
				{
					unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!unk_0x48B8265059381CD0(uParam0->f_13, 29) && unk_0x48B8265059381CD0(uParam0->f_13, 28))
		{
			if (!unk_0xCA41A00932714525(uParam0->f_17[iVar0]))
			{
				unk_0xE2D8919DE58194D4(uParam0->f_17[iVar0], 0, -1, 0);
			}
			if (iVar0 == 2)
			{
				unk_0x21E7933CCC7B3724(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (unk_0x48B8265059381CD0(uParam0->f_13, 26))
	{
		bVar23 = false;
		if (!unk_0x23E9113C762466ED(uParam0->f_21))
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
			iVar24 = unk_0xCE499B0B1C2F5684(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 50f, 0, iVar25);
			if (unk_0x45CD66F0A131E554(iVar24, 0))
			{
				uParam0->f_21 = iVar24;
			}
		}
		if (unk_0x45CD66F0A131E554(uParam0->f_21, 0))
		{
			if (unk_0xB7A628320EFF8E47(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), unk_0x57240623C1BC6E88(uParam0->f_21, 1)) < 400f)
			{
				if (!unk_0xD035C652F0986F10(unk_0x17B5CC8A8615737D()))
				{
					if (!unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0) || !bParam17)
					{
						if (func_238(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!unk_0xCA41A00932714525(uParam0->f_17[iVar0]))
								{
									unk_0x7B0D34D6C9709C7A(uParam0->f_17[iVar0], 1f);
									if (unk_0x143230304C45DBF3(uParam0->f_17[iVar0], func_211()))
									{
										unk_0xFB2D342CDD441DD9(uParam0->f_17[iVar0]);
									}
									if (unk_0x1F8F07D86DA1A701(uParam0->f_17[iVar0], -1794415470) == 7 && !func_255(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!unk_0x7F4AE93855973529(uParam0->f_17[iVar0]) && !unk_0x7276DD47CA44085D(uParam0->f_17[iVar0]))
										{
											unk_0xCC61640A821F277C(uParam0->f_17[iVar0], 1);
											unk_0x3AD5401AC8DD9226(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
											unk_0x346D6A5BC2F879E2(uParam0->f_17[iVar0], iVar0);
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
			unk_0x21E7933CCC7B3724(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!unk_0xCA41A00932714525(uParam0->f_17[iVar0]))
				{
					if (!unk_0x9172DCBCA2E183EC(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						unk_0x15848523A8959DBC(uParam0->f_17[iVar0]);
					}
					if (!unk_0x143230304C45DBF3(uParam0->f_17[iVar0], func_211()))
					{
						if (func_253(uParam0, uParam0->f_17[iVar0], uParam8, 1))
						{
							unk_0xD25D00F8613DE69F(uParam0->f_17[iVar0], func_211());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!unk_0x48B8265059381CD0(uParam0->f_13, 26))
	{
		if ((!func_252(uParam0) && unk_0xD035C652F0986F10(unk_0x17B5CC8A8615737D())) && !unk_0x23E9113C762466ED(iParam10))
		{
			iVar13 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
			if (unk_0x45CD66F0A131E554(iVar13, 0))
			{
				if (!unk_0x48B8265059381CD0(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_234(uParam0, 2))
					{
						iVar26 = 0;
						iVar27 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							if (!unk_0xCA41A00932714525(uParam0->f_17[iVar0]))
							{
								iVar26++;
							}
							iVar0++;
						}
						iVar27 = unk_0x0E29C61F26D96FDB(0, iVar26);
						if (!unk_0xCA41A00932714525(uParam0->f_17[iVar27]))
						{
							func_230(uParam0->f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_232(uParam0, "MORE_SEATS", 0);
						unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 13);
					}
				}
				bVar12 = true;
			}
		}
		else
		{
			bVar12 = false;
			unk_0x21E7933CCC7B3724(&(uParam0->f_13), 13);
			func_239("MORE_SEATS");
		}
		if (!unk_0x23E9113C762466ED(iParam10))
		{
			if ((!unk_0xCA41A00932714525(uParam0->f_17[0]) || !unk_0xCA41A00932714525(uParam0->f_17[1])) || !unk_0xCA41A00932714525(uParam0->f_17[2]))
			{
				if (!unk_0x48B8265059381CD0(uParam0->f_13, 31))
				{
					if (unk_0xD035C652F0986F10(unk_0x17B5CC8A8615737D()) && !func_234(uParam0, 2))
					{
						iVar13 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
						if (func_251(iVar13, uParam0))
						{
							func_232(uParam0, "CMN_VEHSUIT", 0);
							unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0xD035C652F0986F10(unk_0x17B5CC8A8615737D()))
				{
					unk_0x21E7933CCC7B3724(&(uParam0->f_13), 31);
					func_239("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0x45CD66F0A131E554(iParam10, 0))
		{
			if (unk_0x7B816C72877502C5(unk_0x17B5CC8A8615737D(), iParam10))
			{
				if (unk_0x4B972043966C2EB8(0, 75))
				{
					unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 21);
				}
			}
			else if (unk_0x48B8265059381CD0(uParam0->f_13, 21))
			{
				unk_0x21E7933CCC7B3724(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x23E9113C762466ED(uParam0->f_17[iVar0]))
			{
				if (!unk_0xCA41A00932714525(uParam0->f_17[iVar0]))
				{
					if (!unk_0x143230304C45DBF3(uParam0->f_17[iVar0], func_211()))
					{
						unk_0x2BFFCC859E7DDFFF(uParam0->f_17[iVar0], 1);
					}
					else
					{
						unk_0x2BFFCC859E7DDFFF(uParam0->f_17[iVar0], 0);
					}
					if (unk_0xD035C652F0986F10(unk_0x17B5CC8A8615737D()))
					{
						iVar13 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
						if (unk_0x45CD66F0A131E554(iVar13, 0))
						{
							if (unk_0x143230304C45DBF3(uParam0->f_17[iVar0], func_211()))
							{
								if (!func_252(uParam0) && unk_0xD035C652F0986F10(unk_0x17B5CC8A8615737D()))
								{
									if (!func_250(uParam0->f_17[iVar0]))
									{
										unk_0xFB2D342CDD441DD9(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar13 != iParam10 && !unk_0xA929B2923D14E2F8(iVar13, 0))
						{
							if (unk_0x7B816C72877502C5(uParam0->f_17[iVar0], iVar13))
							{
								if (unk_0xA77EE6C138A588EB(iVar13) && !unk_0x4950AAD2A16D6B22(iVar13))
								{
									Var28 = { unk_0x57240623C1BC6E88(iVar13, 1) };
									if (Var28.f_2 < -1f)
									{
										unk_0x335F081010BB7A76(uParam0->f_17[iVar0], iVar13, 64);
									}
								}
							}
						}
					}
					bVar11 = true;
					if (!unk_0x143230304C45DBF3(uParam0->f_17[iVar0], func_211()))
					{
						if (unk_0xD035C652F0986F10(uParam0->f_17[iVar0]))
						{
							iVar13 = unk_0x60604E51E30D25B8(uParam0->f_17[iVar0], 0);
							if (!unk_0xA929B2923D14E2F8(iVar13, 0))
							{
								if (unk_0x45CD66F0A131E554(iParam10, 0))
								{
									if (iVar13 != iParam10)
									{
										if (!unk_0x7B816C72877502C5(unk_0x17B5CC8A8615737D(), iVar13))
										{
											if (unk_0x13B7ACE69D27E3E4(iVar13) > 5f)
											{
												unk_0x335F081010BB7A76(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0x335F081010BB7A76(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
								else
								{
									if (unk_0xD035C652F0986F10(unk_0x17B5CC8A8615737D()))
									{
										iVar31 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
									}
									if (unk_0x45CD66F0A131E554(iVar31, 0))
									{
										if (iVar13 != iVar31)
										{
											if (unk_0x13B7ACE69D27E3E4(iVar13) > 5f)
											{
												unk_0x335F081010BB7A76(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0x335F081010BB7A76(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
							}
						}
					}
					if (unk_0x143230304C45DBF3(uParam0->f_17[iVar0], func_211()))
					{
						iVar32 = unk_0xFD05A5AA90984873(unk_0x17B5CC8A8615737D());
						if (unk_0x23E9113C762466ED(iVar32))
						{
							if (func_238(iVar32, uParam0, 0))
							{
								if (func_249(iVar0, uParam0) || !unk_0x48B8265059381CD0(uParam0->f_13, 27))
								{
									unk_0x346D6A5BC2F879E2(uParam0->f_17[iVar0], iVar0);
									func_212(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_249(iVar0, uParam0))
							{
								if (unk_0x0324EEB10F81965F(iVar32) == joaat("sentinel2"))
								{
									unk_0x346D6A5BC2F879E2(uParam0->f_17[iVar0], 4);
								}
								else
								{
									unk_0x346D6A5BC2F879E2(uParam0->f_17[iVar0], 2);
								}
								func_248(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0x143230304C45DBF3(uParam0->f_17[iVar0], func_211()) && !func_247(uParam0->f_17[iVar0], iParam10)) && !func_246(uParam0->f_17[iVar0], iParam10))
					{
						if (func_253(uParam0, uParam0->f_17[iVar0], uParam8, bParam11))
						{
							if (!unk_0x143230304C45DBF3(uParam0->f_17[iVar0], func_211()))
							{
								if (((!unk_0x7F4AE93855973529(uParam0->f_17[iVar0]) && !unk_0x7276DD47CA44085D(uParam0->f_17[iVar0])) && !unk_0x53E28743D432E98F(uParam0->f_17[iVar0])) && !unk_0x9172DCBCA2E183EC(uParam0->f_17[iVar0]))
								{
									iVar14 = unk_0x1F8F07D86DA1A701(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7)
									{
										unk_0x15848523A8959DBC(uParam0->f_17[iVar0]);
									}
									unk_0xD25D00F8613DE69F(uParam0->f_17[iVar0], func_211());
									bVar11 = false;
								}
							}
						}
						if (bVar11)
						{
							if (!unk_0xA3794949321E107C(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = unk_0x94E3E074F38DF86C();
								uParam0->f_1[iVar0] = func_222(uParam0->f_17[iVar0], 0, 0);
								unk_0x8E5BEC1151739D19(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_229(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0xA3794949321E107C(uParam0->f_1[iVar0]))
					{
						if (((func_226(uParam0->f_17[iVar0], 1) || func_247(uParam0->f_17[iVar0], iParam10)) || iParam12) || (unk_0x45CD66F0A131E554(iParam10, 0) && !unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iParam10, 0)))
						{
							if (unk_0xA3794949321E107C(uParam0->f_1[iVar0]))
							{
								unk_0x020DF7300725ECAB(&(uParam0->f_1[iVar0]));
								func_239(uVar15[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_229(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (unk_0x45CD66F0A131E554(iParam10, 0))
					{
						if (!unk_0x7B816C72877502C5(uParam0->f_17[iVar0], iParam10))
						{
							if ((unk_0x4E84D2C9B54F79BA(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !unk_0x48B8265059381CD0(uParam0->f_13, 11)) && !((bParam17 && unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0)) && !unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iParam10, 0)))
							{
								if (unk_0xD035C652F0986F10(uParam0->f_17[iVar0]))
								{
									if (!unk_0x2315BB1606BC3DC3(uParam0->f_17[iVar0], iParam10, 0))
									{
										if (!func_226(uParam0->f_17[iVar0], 1))
										{
											if (func_225(uParam0->f_17[iVar0]))
											{
												iVar14 = unk_0x1F8F07D86DA1A701(uParam0->f_17[iVar0], 451360105);
												if (iVar14 == 7)
												{
													unk_0x83150B7E65C16AFE(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0x143230304C45DBF3(uParam0->f_17[iVar0], func_211()))
									{
										if ((((!unk_0x53E28743D432E98F(uParam0->f_17[iVar0]) && !unk_0x7F4AE93855973529(uParam0->f_17[iVar0])) && !unk_0x7276DD47CA44085D(uParam0->f_17[iVar0])) && !unk_0x9172DCBCA2E183EC(uParam0->f_17[iVar0])) && !unk_0x03767DFC5EE2B0C6(iParam10))
										{
											unk_0xFB2D342CDD441DD9(uParam0->f_17[iVar0]);
										}
									}
									iVar14 = unk_0x1F8F07D86DA1A701(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7 && !func_255(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!unk_0x53E28743D432E98F(uParam0->f_17[iVar0]) && !unk_0x53E28743D432E98F(unk_0x17B5CC8A8615737D())) && !func_245(uParam0->f_17[iVar0], 2f)) && !unk_0x7F4AE93855973529(uParam0->f_17[iVar0])) && !unk_0x7276DD47CA44085D(uParam0->f_17[iVar0])) && !unk_0x03767DFC5EE2B0C6(iParam10))
										{
											unk_0xCC61640A821F277C(uParam0->f_17[iVar0], 1);
											if (unk_0x48B8265059381CD0(uParam0->f_13, 10))
											{
												unk_0x7B0D34D6C9709C7A(uParam0->f_17[iVar0], 1f);
											}
											unk_0x3AD5401AC8DD9226(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											unk_0x5E36942B3AE4C67F(uParam0->f_17[iVar0], 0);
										}
									}
									else if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = func_222(uParam0->f_17[iVar0], 0, 0);
										unk_0x8E5BEC1151739D19(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0x143230304C45DBF3(uParam0->f_17[iVar0], func_211()))
							{
								if (func_253(uParam0, uParam0->f_17[iVar0], uParam8, bParam11))
								{
									if (!unk_0x7F4AE93855973529(uParam0->f_17[iVar0]) && !unk_0x7276DD47CA44085D(uParam0->f_17[iVar0]))
									{
										iVar14 = unk_0x1F8F07D86DA1A701(uParam0->f_17[iVar0], -1794415470);
										if (iVar14 == 7)
										{
											unk_0x15848523A8959DBC(uParam0->f_17[iVar0]);
										}
										unk_0xCC61640A821F277C(uParam0->f_17[iVar0], 0);
										unk_0xD25D00F8613DE69F(uParam0->f_17[iVar0], func_211());
									}
								}
							}
						}
						else if (unk_0x7B816C72877502C5(unk_0x17B5CC8A8615737D(), iParam10))
						{
							if (!unk_0x143230304C45DBF3(uParam0->f_17[iVar0], func_211()))
							{
								if (!unk_0x48B8265059381CD0(uParam0->f_13, 21))
								{
									unk_0xD25D00F8613DE69F(uParam0->f_17[iVar0], func_211());
								}
							}
							else if (unk_0x48B8265059381CD0(uParam0->f_13, 21))
							{
								unk_0xFB2D342CDD441DD9(uParam0->f_17[iVar0]);
								unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0x143230304C45DBF3(uParam0->f_17[iVar0], func_211()) && !unk_0x03767DFC5EE2B0C6(iParam10))
						{
							unk_0xFB2D342CDD441DD9(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (unk_0xA3794949321E107C(uParam0->f_1[iVar0]))
				{
					unk_0x020DF7300725ECAB(&(uParam0->f_1[iVar0]));
					func_239(uVar15[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xA3794949321E107C(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_234(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!unk_0xCA41A00932714525(uParam0->f_17[iVar0]))
						{
							if (func_250(uParam0->f_17[iVar0]) || unk_0x4E84D2C9B54F79BA(uParam0->f_17[iVar0], unk_0x17B5CC8A8615737D(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!unk_0xCA41A00932714525(uParam0->f_17[iVar0]))
					{
						if (!unk_0x4E84D2C9B54F79BA(uParam0->f_17[iVar0], unk_0x17B5CC8A8615737D(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0, 1, 0) && !func_250(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = unk_0x94E3E074F38DF86C();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!unk_0x48B8265059381CD0(uParam0->f_13, 5))
							{
								func_232(uParam0, sParam7, 0);
								unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 5);
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
									if (!func_244(iVar0, uParam0))
									{
										if (!unk_0xD3115E7F7876D6E6(uVar19[iVar0]))
										{
											if (!unk_0x6A7B0D91FD88D9EE(uVar19[iVar0], ""))
											{
												func_242(uParam0, uVar15[iVar0], uVar19[iVar0], 0);
												func_241(iVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!func_244(iVar0, uParam0))
										{
											func_232(uParam0, uVar15[iVar0], 0);
											func_241(iVar0, uParam0);
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
		unk_0x21E7933CCC7B3724(&(uParam0->f_13), 10);
		if (iVar6 && !bVar12)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (unk_0xA3794949321E107C(uParam0->f_1[iVar0]))
				{
					unk_0x020DF7300725ECAB(&(uParam0->f_1[iVar0]));
					func_239(uVar15[iVar0]);
				}
				iVar0++;
			}
			func_239("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_241(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xEB79FECD9022AAF0(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0xEB79FECD9022AAF0(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0xEB79FECD9022AAF0(&(uParam1->f_13), 16);
			break;
	}
}

void func_242(var uParam0, char* sParam1, var uParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!unk_0xD3115E7F7876D6E6(sParam1))
		{
			if (!unk_0x6A7B0D91FD88D9EE(sParam1, ""))
			{
				func_243(sParam1, uParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x94E3E074F38DF86C();
}

void func_243(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0x7F755B97D75D9B44(sParam0);
	unk_0x34D84D73B5DF8E80(uParam1);
	unk_0x6EBC181C75DC822D(iParam2, 1);
}

int func_244(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0x48B8265059381CD0(uParam1->f_13, 14);
		
		case 1:
			return unk_0x48B8265059381CD0(uParam1->f_13, 15);
		
		case 2:
			return unk_0x48B8265059381CD0(uParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_245(int iParam0, float fParam1)
{
	int iVar0;
	
	if (unk_0xFD0FE723227D5AB6(iParam0, 0))
	{
		iVar0 = unk_0x60604E51E30D25B8(iParam0, 0);
		if (!unk_0xA929B2923D14E2F8(iVar0, 0))
		{
			if (unk_0x13B7ACE69D27E3E4(iVar0) > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_246(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xCA41A00932714525(iParam0))
	{
		if (!unk_0x143230304C45DBF3(iParam0, func_211()))
		{
			iVar0 = unk_0xF566689615D97192(iParam0);
			if (unk_0x45CD66F0A131E554(iParam1, 0))
			{
				if (unk_0x4E84D2C9B54F79BA(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
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

int func_247(int iParam0, int iParam1)
{
	if (!unk_0xCA41A00932714525(iParam0))
	{
		if (unk_0x23E9113C762466ED(iParam1))
		{
			if (unk_0x45CD66F0A131E554(iParam1, 0))
			{
				if (unk_0x7B816C72877502C5(iParam0, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_248(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xEB79FECD9022AAF0(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0xEB79FECD9022AAF0(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0xEB79FECD9022AAF0(&(uParam1->f_13), 19);
			break;
	}
}

int func_249(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0x48B8265059381CD0(uParam1->f_13, 17);
		
		case 1:
			return unk_0x48B8265059381CD0(uParam1->f_13, 18);
		
		case 2:
			return unk_0x48B8265059381CD0(uParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_250(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		iVar0 = unk_0xFD05A5AA90984873(unk_0x17B5CC8A8615737D());
		if (unk_0x45CD66F0A131E554(iVar0, 0))
		{
			if (!unk_0xCA41A00932714525(iParam0))
			{
				iVar1 = unk_0xFD05A5AA90984873(iParam0);
				if (unk_0x45CD66F0A131E554(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (unk_0x4E84D2C9B54F79BA(unk_0x17B5CC8A8615737D(), iParam0, 20f, 20f, 20f, 0, 1, 0) && unk_0x4E84D2C9B54F79BA(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
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

int func_251(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0x45CD66F0A131E554(iParam0, 0))
	{
		if (unk_0x0324EEB10F81965F(iParam0) == joaat("bus") || unk_0x0324EEB10F81965F(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!unk_0xCA41A00932714525(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = unk_0x17206B315923243C(iParam0, 0, 0);
			if (!unk_0xCA41A00932714525(iVar3))
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
			iVar4 = unk_0x17206B315923243C(iParam0, 1, 0);
			if (!unk_0xCA41A00932714525(iVar4))
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
			iVar5 = unk_0x17206B315923243C(iParam0, 2, 0);
			if (!unk_0xCA41A00932714525(iVar5))
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

int func_252(var uParam0)
{
	int iVar0;
	
	if (unk_0xD035C652F0986F10(unk_0x17B5CC8A8615737D()))
	{
		iVar0 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
		if (func_238(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_253(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0xCA41A00932714525(iParam1))
	{
		if (unk_0xD035C652F0986F10(iParam1))
		{
			iVar0 = unk_0x60604E51E30D25B8(iParam1, 0);
			if (!unk_0xA929B2923D14E2F8(iVar0, 0))
			{
				if (unk_0x45CD66F0A131E554(iVar0, 0))
				{
					if (unk_0x7B816C72877502C5(unk_0x17B5CC8A8615737D(), iVar0))
					{
						if (func_252(uParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (unk_0x4E84D2C9B54F79BA(unk_0x17B5CC8A8615737D(), iParam1, uParam2, uParam2, 3f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (unk_0x4E84D2C9B54F79BA(unk_0x17B5CC8A8615737D(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				iVar0 = unk_0xFD05A5AA90984873(unk_0x17B5CC8A8615737D());
				if (unk_0x23E9113C762466ED(iVar0))
				{
					if (func_238(iVar0, uParam0, 0))
					{
						if (unk_0x45CD66F0A131E554(iVar0, 0))
						{
							if (func_254(iVar0))
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

int func_254(int iParam0)
{
	float fVar0;
	
	if (!unk_0xA929B2923D14E2F8(iParam0, 0))
	{
		fVar0 = unk_0x13B7ACE69D27E3E4(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_255(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xCA41A00932714525(iParam0))
	{
		if (unk_0x45CD66F0A131E554(iParam1, 0))
		{
			iVar0 = unk_0xFD05A5AA90984873(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_256()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
	{
		iVar0 = unk_0xF566689615D97192(unk_0x17B5CC8A8615737D());
		if (unk_0x45CD66F0A131E554(iVar0, 0))
		{
			iVar1 = unk_0x17206B315923243C(iVar0, 0, 0);
			if (!unk_0xCA41A00932714525(iVar1))
			{
				if (iVar1 != unk_0x17B5CC8A8615737D())
				{
					if (unk_0xC26429B504BA534D(iVar1))
					{
						if (!unk_0x3D6623406E6D16C8(iVar1, unk_0x17B5CC8A8615737D()))
						{
							unk_0x4718A774D9248520(iVar1, unk_0x17B5CC8A8615737D(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_257(var uParam0)
{
	int iVar0;
	
	if (!unk_0x48B8265059381CD0(uParam0->f_13, 25))
	{
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 32, 0);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x23E9113C762466ED(uParam0->f_17[iVar0]))
			{
				if (!unk_0xCA41A00932714525(uParam0->f_17[iVar0]))
				{
					unk_0x6018E338F7ABCE75(uParam0->f_17[iVar0], 32, 0);
					unk_0x6018E338F7ABCE75(uParam0->f_17[iVar0], 305, 1);
					unk_0x6018E338F7ABCE75(uParam0->f_17[iVar0], 268, 1);
					unk_0x5E36942B3AE4C67F(uParam0->f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 25);
	}
}

void func_258(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x23E9113C762466ED(uParam0->f_17[iVar0]))
		{
			if (!unk_0xCA41A00932714525(uParam0->f_17[iVar0]))
			{
				if (unk_0xD035C652F0986F10(uParam0->f_17[iVar0]))
				{
					unk_0xFB616ABA635A95B3(uParam0->f_17[iVar0], 0);
					unk_0xEABCB9D3B3CDC77E(uParam0->f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
		{
			if (unk_0xD035C652F0986F10(unk_0x17B5CC8A8615737D()))
			{
				unk_0xFB616ABA635A95B3(unk_0x17B5CC8A8615737D(), 0);
				unk_0xEABCB9D3B3CDC77E(unk_0x17B5CC8A8615737D(), 0);
			}
		}
	}
}

Vector3 func_259()
{
	struct<3> Var0;
	
	return Var0;
}

int func_260(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (Local_2515[iVar0 /*6*/] == iParam0)
		{
			if (Local_2515[iVar0 /*6*/].f_1 == 1)
			{
				Local_2515[iVar0 /*6*/].f_2 = iParam1;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_261()
{
	var uVar0;
	var uVar1;
	
	unk_0x4547FC28D02AD087(0f);
	unk_0x6CCF43768046B678(0f, 0f);
	switch (iLocal_2512)
	{
		case 0:
			iLocal_2506 = unk_0x0C00E753D78DEA62();
			unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 0, 0);
			if (func_204())
			{
				unk_0xA0E7D0E8FE126EE8("MISSChinese2_crystalMazeMCS1_IG");
				unk_0xE1324F59713746FA(joaat("ig_old_man2"));
				unk_0xE1324F59713746FA(joaat("ig_old_man1a"));
				unk_0xE1324F59713746FA(joaat("ig_janet"));
				unk_0xE1324F59713746FA(joaat("ig_taocheng"));
				unk_0xE1324F59713746FA(joaat("ig_taostranslator"));
				unk_0xA0E7D0E8FE126EE8("misschinese2_crystalmaze");
				unk_0xA0E7D0E8FE126EE8("missrampageintrooutro");
				unk_0x4C1D7D2B3355D863(unk_0x17B5CC8A8615737D(), 0, 0);
				func_186(1, 1, 1, 0);
				if (unk_0x23E9113C762466ED(Global_88321.f_9[0]))
				{
					Local_755[14 /*33*/] = Global_88321.f_9[2];
					Local_755[13 /*33*/] = Global_88321.f_9[1];
					Local_755[11 /*33*/] = Global_88321.f_9[4];
					Local_755[10 /*33*/] = Global_88321.f_9[3];
					Local_755[12 /*33*/] = Global_88321.f_9[0];
					unk_0xF0F77C99098F999B(Local_755[14 /*33*/], 1, 1);
					unk_0xF0F77C99098F999B(Local_755[13 /*33*/], 1, 1);
					unk_0xF0F77C99098F999B(Local_755[11 /*33*/], 1, 1);
					unk_0xF0F77C99098F999B(Local_755[10 /*33*/], 1, 1);
					unk_0xF0F77C99098F999B(Local_755[12 /*33*/], 1, 1);
					if (!unk_0xCA41A00932714525(Local_755[13 /*33*/]))
					{
						unk_0xD9C496FEAA81FF4A(Local_755[13 /*33*/], "Old_Man1A", 0, joaat("ig_old_man1a"), 0);
					}
					if (!unk_0xCA41A00932714525(Local_755[14 /*33*/]))
					{
						unk_0xD9C496FEAA81FF4A(Local_755[14 /*33*/], "Old_Man2", 0, joaat("ig_old_man2"), 0);
					}
					if (!unk_0xCA41A00932714525(Local_755[11 /*33*/]))
					{
						unk_0xD9C496FEAA81FF4A(Local_755[11 /*33*/], "tao", 0, joaat("ig_taocheng"), 0);
					}
					if (!unk_0xCA41A00932714525(Local_755[10 /*33*/]))
					{
						unk_0xD9C496FEAA81FF4A(Local_755[10 /*33*/], "Taos_Translator", 0, joaat("ig_taostranslator"), 0);
					}
					if (!unk_0xCA41A00932714525(Local_755[12 /*33*/]))
					{
						unk_0xD9C496FEAA81FF4A(Local_755[12 /*33*/], "Janet", 0, joaat("ig_janet"), 0);
					}
				}
				else
				{
					Local_755[13 /*33*/] = unk_0x2AD5F4170F4ACBEB(26, joaat("ig_old_man1a"), 1987.231f, 3052.741f, 46.214f, 0, 1, 1);
					unk_0xD9C496FEAA81FF4A(Local_755[13 /*33*/], "Old_Man1A", 0, joaat("ig_old_man1a"), 0);
					Local_755[14 /*33*/] = unk_0x2AD5F4170F4ACBEB(26, joaat("ig_old_man2"), 1987.231f, 3052.741f, 46.214f, 0, 1, 1);
					unk_0xD9C496FEAA81FF4A(Local_755[14 /*33*/], "Old_Man2", 0, joaat("ig_old_man2"), 0);
					if (unk_0x23E9113C762466ED(Local_755[11 /*33*/]))
					{
						if (!unk_0xCA41A00932714525(Local_755[11 /*33*/]))
						{
							unk_0xD9C496FEAA81FF4A(Local_755[11 /*33*/], "tao", 0, joaat("ig_taocheng"), 0);
						}
					}
					else
					{
						unk_0xD9C496FEAA81FF4A(Local_755[11 /*33*/], "tao", 2, joaat("ig_taocheng"), 0);
					}
					unk_0xD9C496FEAA81FF4A(Local_755[10 /*33*/], "Taos_Translator", 2, joaat("ig_taostranslator"), 0);
					Local_755[12 /*33*/] = unk_0x2AD5F4170F4ACBEB(26, joaat("ig_janet"), 1987.231f, 3052.741f, 46.214f, 0, 1, 1);
					unk_0xD9C496FEAA81FF4A(Local_755[12 /*33*/], "Janet", 0, joaat("ig_janet"), 0);
				}
				func_263();
				unk_0x51C344BE3DCB5CB5(0);
				unk_0x46081AAD7F4633BD(4);
				unk_0x26D48449559660BA(1991.22f, 3054.884f, 50.27741f, 87f, 0);
				unk_0x7B408F9F309B3E56(1991.22f, 3054.884f, 50.27741f, 87f, 0);
				unk_0xD1D19967E553E144(Vector(50.27741f, 3054.884f, 1991.22f) - Vector(40f, 40f, 40f), Vector(50.27741f, 3054.884f, 1991.22f) + Vector(40f, 40f, 40f), 0, 1, 1, 1);
				unk_0xB57996B091C5D677(Vector(50.27741f, 3054.884f, 1991.22f) - Vector(40f, 40f, 40f), Vector(50.27741f, 3054.884f, 1991.22f) + Vector(0f, 40f, 40f));
				func_32(0, 0);
				func_32(26, 0);
				iLocal_3689 = 0;
				iLocal_2512++;
			}
			break;
		
		case 1:
			if (unk_0x1B76B77EDF24A933())
			{
				if (unk_0x25BD4C26D84038CD())
				{
					unk_0xC7845898207D067F(1000);
				}
				iLocal_2512++;
			}
			break;
		
		case 2:
			if (unk_0x1B76B77EDF24A933())
			{
				if (iLocal_3689 == 0)
				{
					func_262(13);
					iLocal_3689++;
				}
			}
			if (!unk_0x23E9113C762466ED(Local_755[13 /*33*/]))
			{
				if (unk_0x649012AFAC9B7CD0("Old_Man1A", 0))
				{
					Local_755[13 /*33*/] = unk_0xB80CAAF3D65FBC1F(unk_0x6DFA780BD6E87375("Old_Man1A", 0));
				}
			}
			if (!unk_0x23E9113C762466ED(Local_755[14 /*33*/]))
			{
				if (unk_0x649012AFAC9B7CD0("Old_Man2", 0))
				{
					Local_755[14 /*33*/] = unk_0xB80CAAF3D65FBC1F(unk_0x6DFA780BD6E87375("Old_Man2", 0));
				}
			}
			if (!unk_0x23E9113C762466ED(Local_755[11 /*33*/]))
			{
				if (unk_0x649012AFAC9B7CD0("tao", 0))
				{
					Local_755[11 /*33*/] = unk_0xB80CAAF3D65FBC1F(unk_0x6DFA780BD6E87375("tao", 0));
				}
			}
			if (!unk_0x23E9113C762466ED(Local_755[10 /*33*/]))
			{
				if (unk_0x649012AFAC9B7CD0("Taos_Translator", 0))
				{
					Local_755[10 /*33*/] = unk_0xB80CAAF3D65FBC1F(unk_0x6DFA780BD6E87375("Taos_Translator", 0));
				}
			}
			if (!unk_0x23E9113C762466ED(Local_755[12 /*33*/]))
			{
				if (unk_0x649012AFAC9B7CD0("Janet", 0))
				{
					Local_755[12 /*33*/] = unk_0xB80CAAF3D65FBC1F(unk_0x6DFA780BD6E87375("Janet", 0));
				}
			}
			if (unk_0x649012AFAC9B7CD0("tao", 0))
			{
				if (!unk_0xCA41A00932714525(Local_755[11 /*33*/]))
				{
					unk_0x3BB70315907D9456(Local_755[11 /*33*/], iLocal_1618);
					unk_0x6F65279C9BC14EDB(Local_755[11 /*33*/], 0);
					uVar0 = unk_0x356EABB012B22D07(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
					unk_0xA17D768ED938600C(Local_755[11 /*33*/], uVar0, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 1, 16, 1148846080, 0);
				}
			}
			if (unk_0x649012AFAC9B7CD0("Taos_Translator", 0))
			{
				if (!unk_0xCA41A00932714525(Local_755[10 /*33*/]))
				{
					unk_0x3BB70315907D9456(Local_755[10 /*33*/], iLocal_1618);
					unk_0x6F65279C9BC14EDB(Local_755[10 /*33*/], 0);
					uVar1 = unk_0x356EABB012B22D07(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
					unk_0xA17D768ED938600C(Local_755[10 /*33*/], uVar1, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 1, 16, 1148846080, 0);
				}
			}
			if (unk_0x649012AFAC9B7CD0("Trevor", 0))
			{
				iLocal_2506 = unk_0x0C00E753D78DEA62();
				if (func_68(iLocal_2506) && func_67(iLocal_2506, 1995.202f, 3062.156f, 46.0491f, 1) < 5f)
				{
					unk_0xFCB4AA590A0D6A59(unk_0x17B5CC8A8615737D(), iLocal_2506, -1);
					unk_0xDEAF24B058321A05(unk_0x17B5CC8A8615737D(), 0, 0);
					unk_0x341B2B69286FBC9D(unk_0x0324EEB10F81965F(iLocal_2506));
				}
				else if (unk_0xF4F8AE8DD0F08C1E("missrampageintrooutro"))
				{
					unk_0x5DC8C2F2F8A363C2(unk_0x17B5CC8A8615737D(), 1992.135f, 3057.467f, 46.06f, 1, 0, 0, 1);
					unk_0x0608D50823C6AA6D(unk_0x17B5CC8A8615737D(), 325.4678f);
					unk_0xEB1EFACA68933402(unk_0x17B5CC8A8615737D(), "missrampageintrooutro", "trvram_6_1h_run_outro", 1000f, -4f, -1, 0, 0.1f, 0, 0, 0);
					unk_0xDEAF24B058321A05(unk_0x17B5CC8A8615737D(), 1, 0);
				}
				else
				{
					unk_0x5DC8C2F2F8A363C2(unk_0x17B5CC8A8615737D(), 1992.919f, 3057.906f, 46.0567f, 1, 0, 0, 1);
					unk_0x0608D50823C6AA6D(unk_0x17B5CC8A8615737D(), 337.2537f);
					unk_0x44B1CF13D39D96CE(unk_0x17B5CC8A8615737D(), joaat("MotionState_Walk"), 0, 0, 0);
					unk_0x316B8FE556E99FA1(unk_0x17B5CC8A8615737D(), 1f);
					unk_0xDEAF24B058321A05(unk_0x17B5CC8A8615737D(), 1, 0);
				}
			}
			if (unk_0x66FBC42991B0D41E(0))
			{
				unk_0xD3231CAA928D3149(6);
				func_186(0, 1, 1, 0);
				unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 1, 0);
				unk_0xBA7CD73403732191(0f);
				unk_0x503F20CB07C55470(-7f, 1065353216);
				if (unk_0x25BD4C26D84038CD())
				{
					unk_0x3FC7E3584ABA5F08(1992.135f, 3057.467f, 46.06f);
				}
				unk_0x2EE4FDDB1E7664FB();
				unk_0x2DE9FDD822EE641B(0f, 7f, 3);
				func_176(11);
			}
			break;
	}
}

void func_262(int iParam0)
{
	if (Global_88746 != -1)
	{
		if (iParam0 == Global_88746)
		{
			Global_88750 = 1;
			return;
		}
	}
}

void func_263()
{
	int iVar0;
	
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		unk_0x4C44C1A3160350E2(unk_0x17B5CC8A8615737D(), 0, 0, 0, 0, 0, 0, 0, 0);
		unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 157, 1);
		unk_0xC6042F55A6EA17B2(unk_0x17B5CC8A8615737D(), 0);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x23E9113C762466ED(Global_89193[iVar0]))
		{
			if (!unk_0xA929B2923D14E2F8(Global_89193[iVar0], 0))
			{
				unk_0x4C44C1A3160350E2(Global_89193[iVar0], 0, 0, 0, 0, 0, 0, 0, 0);
				unk_0xC6042F55A6EA17B2(Global_89193[iVar0], 0);
			}
		}
		iVar0++;
	}
	if ((Global_35781 != 0 && Global_35781 != 3) && Global_35781 != 2)
	{
		unk_0x6751FA44D6CA586D(5);
		unk_0x000E46314C3A507F(1f);
	}
}

void func_264()
{
	int iVar0;
	
	switch (iLocal_2512)
	{
		case 0:
			unk_0xA73AE78D2491E6E1("FRMCHSE", 0);
			while (!unk_0x657558590DD37F85(0))
			{
				func_28(27, 1);
			}
			func_56(&uLocal_2708, 0, unk_0x17B5CC8A8615737D(), "TREVOR", 0, 1);
			func_56(&uLocal_2708, 8, 0, "PED8", 0, 1);
			func_32(9, 1);
			func_32(29, 1);
			func_32(21, 1);
			func_350();
			unk_0x8F088665928570EA(2442.69f, 4970.348f, 46.33f, 30f);
			unk_0xC953D7FEE6C3F318("EXTRASUNNY", 120f);
			Local_2889[0 /*3*/] = { 2428.47f, 4968.91f, 42.11f };
			Local_2889[1 /*3*/] = { 2431.14f, 4972.06f, 42.19f };
			Local_2889[2 /*3*/] = { 2433.05f, 4969.22f, 42.26f };
			Local_2889[3 /*3*/] = { 2437.71f, 4968.13f, 42.45f };
			Local_2889[4 /*3*/] = { 2436.12f, 4964.76f, 42.19f };
			Local_2889[5 /*3*/] = { 2432.13f, 4961.97f, 41.35f };
			Local_2889[6 /*3*/] = { 2430.07f, 4963.78f, 41.35f };
			Local_2889[7 /*3*/] = { 2434f, 4963.04f, 41.53f };
			Local_2889[8 /*3*/] = { 2435.637f, 4969.699f, 42.19639f };
			Local_444[0 /*5*/] = { 2450.376f, 4955.83f, 43.9394f };
			Local_444[1 /*5*/] = { 2449.815f, 4956.678f, 43.9894f };
			Local_444[2 /*5*/] = { 2449.606f, 4957.675f, 44.0646f };
			Local_444[3 /*5*/] = { 2449.739f, 4958.731f, 44.1544f };
			Local_444[4 /*5*/] = { 2450.141f, 4959.745f, 44.2487f };
			Local_444[5 /*5*/] = { 2450.685f, 4960.582f, 44.3219f };
			Local_444[6 /*5*/] = { 2451.492f, 4961.333f, 44.4439f };
			Local_444[7 /*5*/] = { 2452.174f, 4962.099f, 44.5787f };
			Local_444[8 /*5*/] = { 2452.717f, 4962.906f, 44.9141f };
			Local_444[9 /*5*/] = { 2453.35f, 4963.579f, 45.3558f };
			Local_444[10 /*5*/] = { 2453.754f, 4964.565f, 45.5766f };
			Local_444[11 /*5*/] = { 2453.226f, 4965.539f, 45.5766f };
			Local_444[12 /*5*/] = { 2452.472f, 4966.293f, 45.5766f };
			Local_444[13 /*5*/] = { 2451.869f, 4967.104f, 45.5766f };
			Local_444[14 /*5*/] = { 2451.529f, 4968.083f, 45.5766f };
			Local_444[15 /*5*/] = { 2452.327f, 4968.712f, 45.5766f };
			Local_444[16 /*5*/] = { 2452.796f, 4969.643f, 45.8107f };
			Local_444[17 /*5*/] = { 2453.261f, 4970.541f, 45.8106f };
			Local_444[18 /*5*/] = { 2453.58f, 4971.548f, 45.8104f };
			Local_444[19 /*5*/] = { 2452.808f, 4972.267f, 45.8306f };
			Local_444[20 /*5*/] = { 2452.049f, 4972.928f, 45.8306f };
			Local_444[21 /*5*/] = { 2451.241f, 4973.599f, 45.8306f };
			Local_444[22 /*5*/] = { 2450.248f, 4973.889f, 45.8306f };
			Local_444[23 /*5*/] = { 2449.207f, 4973.784f, 45.8105f };
			Local_444[24 /*5*/] = { 2448.172f, 4973.814f, 45.8106f };
			Local_444[25 /*5*/] = { 2447.153f, 4973.771f, 45.8106f };
			Local_444[26 /*5*/] = { 2446.138f, 4973.724f, 45.8106f };
			Local_444[27 /*5*/] = { 2445.128f, 4973.689f, 45.8106f };
			Local_444[28 /*5*/] = { 2444.256f, 4973.056f, 45.8106f };
			Local_444[29 /*5*/] = { 2443.669f, 4972.194f, 45.8106f };
			Local_444[30 /*5*/] = { 2443.119f, 4971.275f, 45.8106f };
			Local_444[31 /*5*/] = { 2442.661f, 4970.359f, 45.8106f };
			Local_444[32 /*5*/] = { 2442.267f, 4969.425f, 45.8106f };
			Local_444[33 /*5*/] = { 2441.708f, 4968.502f, 45.8306f };
			Local_444[34 /*5*/] = { 2441.264f, 4967.534f, 45.8106f };
			Local_444[35 /*5*/] = { 2440.873f, 4966.538f, 45.8106f };
			Local_444[36 /*5*/] = { 2440.382f, 4965.634f, 45.8106f };
			Local_444[37 /*5*/] = { 2439.71f, 4964.882f, 45.8106f };
			Local_444[38 /*5*/] = { 2438.933f, 4964.146f, 45.8106f };
			Local_444[39 /*5*/] = { 2438.166f, 4963.502f, 45.8106f };
			Local_444[40 /*5*/] = { 2437.555f, 4962.709f, 45.8106f };
			Local_444[41 /*5*/] = { 2436.901f, 4961.95f, 45.8106f };
			Local_444[42 /*5*/] = { 2436.075f, 4961.257f, 45.8106f };
			Local_444[43 /*5*/] = { 2435.08f, 4961.004f, 45.8118f };
			Local_444[44 /*5*/] = { 2434.066f, 4960.713f, 45.8181f };
			Local_444[45 /*5*/] = { 2433.045f, 4960.594f, 45.8192f };
			Local_444[46 /*5*/] = { 2432.065f, 4960.25f, 45.813f };
			Local_444[47 /*5*/] = { 2431.233f, 4960.809f, 45.8089f };
			Local_444[48 /*5*/] = { 2430.575f, 4961.574f, 45.5917f };
			Local_444[49 /*5*/] = { 2429.889f, 4962.028f, 44.9345f };
			Local_444[50 /*5*/] = { 2429.26f, 4962.595f, 44.2774f };
			Local_444[51 /*5*/] = { 2428.691f, 4963.279f, 43.6202f };
			Local_444[52 /*5*/] = { 2428.073f, 4963.911f, 42.9631f };
			Local_444[53 /*5*/] = { 2428.239f, 4964.922f, 42.9631f };
			Local_444[54 /*5*/] = { 2428.961f, 4965.455f, 42.3059f };
			Local_444[55 /*5*/] = { 2429.45f, 4966.224f, 41.8679f };
			Local_444[56 /*5*/] = { 2430.073f, 4966.82f, 41.3476f };
			Local_444[57 /*5*/] = { 2431.097f, 4967.043f, 41.3476f };
			Local_444[58 /*5*/] = { 2431.89f, 4966.403f, 41.3476f };
			Local_444[59 /*5*/] = { 2432.768f, 4965.902f, 41.3476f };
			Local_444[60 /*5*/] = { 2433.776f, 4965.613f, 41.3476f };
			Local_2343[0 /*6*/].f_3 = "Table Flames";
			Local_2343[0 /*6*/] = 0;
			Local_2343[1 /*6*/].f_3 = "Table Explosion";
			Local_2343[1 /*6*/] = 0;
			Local_2343[2 /*6*/].f_3 = "House Explosion";
			Local_2343[2 /*6*/] = 0;
			Local_2343[3 /*6*/].f_3 = "Cam Shake";
			Local_2343[3 /*6*/] = 0;
			Local_2343[4 /*6*/].f_3 = "Position player";
			Local_2343[4 /*6*/] = 0;
			Local_2343[5 /*6*/].f_3 = "Slow mo";
			Local_2343[5 /*6*/] = 0;
			Local_2343[0 /*6*/].f_1 = 2;
			Local_2343[0 /*6*/].f_2 = 1000f;
			Local_2343[1 /*6*/].f_1 = 2;
			Local_2343[1 /*6*/].f_2 = 4200f;
			Local_2343[2 /*6*/].f_1 = 3;
			Local_2343[2 /*6*/].f_2 = 0f;
			Local_2343[3 /*6*/].f_1 = 3;
			Local_2343[3 /*6*/].f_2 = 0f;
			Local_2343[4 /*6*/].f_1 = 3;
			Local_2343[4 /*6*/].f_2 = 3200f;
			Local_2343[5 /*6*/].f_1 = 3;
			Local_2343[5 /*6*/].f_2 = 700f;
			Local_2380[0 /*18*/] = { 2454.83f, 4974.96f, 46.4489f };
			Local_2380[0 /*18*/].f_3 = { 2.9627f, 0.077f, 115.874f };
			Local_2380[0 /*18*/].f_14 = 39.703f;
			Local_2380[0 /*18*/].f_6 = { 2454.41f, 4974.93f, 46.4691f };
			Local_2380[0 /*18*/].f_9 = { 2.6238f, 0.077f, 114.001f };
			Local_2380[0 /*18*/].f_15 = 39.703f;
			Local_2380[0 /*18*/].f_12 = 2500f;
			Local_2380[0 /*18*/].f_13 = 2500f;
			Local_2380[0 /*18*/].f_16 = 0;
			Local_2380[0 /*18*/].f_17 = 18;
			Local_2380[1 /*18*/] = { 2435.41f, 4960.94f, 45.9568f };
			Local_2380[1 /*18*/].f_3 = { 6.677f, 0f, -49.4853f };
			Local_2380[1 /*18*/].f_14 = 58.9114f;
			Local_2380[1 /*18*/].f_6 = { 2435.11f, 4960.62f, 45.9441f };
			Local_2380[1 /*18*/].f_9 = { 6.3596f, 0f, -44.8248f };
			Local_2380[1 /*18*/].f_15 = 58.9114f;
			Local_2380[1 /*18*/].f_12 = 3200f;
			Local_2380[1 /*18*/].f_13 = 1900f;
			Local_2380[1 /*18*/].f_16 = 0;
			Local_2380[1 /*18*/].f_17 = 34;
			Local_2380[2 /*18*/] = { 2434.77f, 4969.56f, 42.3654f };
			Local_2380[2 /*18*/].f_3 = { 5.2773f, -0.1511f, 132.167f };
			Local_2380[2 /*18*/].f_14 = 35.1297f;
			Local_2380[2 /*18*/].f_6 = { 2434.66f, 4969.68f, 42.3657f };
			Local_2380[2 /*18*/].f_9 = { 5.2773f, -0.1511f, 132.167f };
			Local_2380[2 /*18*/].f_15 = 35.1297f;
			Local_2380[2 /*18*/].f_12 = 3500f;
			Local_2380[2 /*18*/].f_13 = 4500f;
			Local_2380[2 /*18*/].f_16 = 3;
			Local_2380[2 /*18*/].f_17 = 49;
			Local_2380[3 /*18*/] = { 2472.1f, 4943.1f, 45.3f };
			Local_2380[3 /*18*/].f_3 = { 6f, 0f, 25.3f };
			Local_2380[3 /*18*/].f_14 = 33.1297f;
			Local_2380[3 /*18*/].f_6 = { 2472.1f, 4943.1f, 45.3f };
			Local_2380[3 /*18*/].f_9 = { 5.5f, 0f, 35.6f };
			Local_2380[3 /*18*/].f_15 = 33.1297f;
			Local_2380[3 /*18*/].f_12 = 3500f;
			Local_2380[3 /*18*/].f_13 = 3500f;
			Local_2380[3 /*18*/].f_16 = 0;
			Local_2380[3 /*18*/].f_17 = -1;
			fLocal_2639 = 0.06f;
			func_166(1);
			Local_2465[0 /*3*/] = { 2432.74f, 4963.43f, 41.35f };
			Local_2465[1 /*3*/] = { 2432.02f, 4962.61f, 41.35f };
			Local_2465[2 /*3*/] = { 2431.06f, 4961.83f, 41.35f };
			Local_2465[3 /*3*/] = { 2430.84f, 4961.08f, 42.09f };
			Local_2465[4 /*3*/] = { 2430.53f, 4962.47f, 42f };
			Local_2465[5 /*3*/] = { 2430.81f, 4961.1f, 42.8f };
			Local_2465[6 /*3*/] = { 2429.74f, 4961.98f, 42.32f };
			Local_2465[7 /*3*/] = { 2433.5f, 4966.76f, 41.35f };
			Local_2465[8 /*3*/] = { 2433.24f, 4967.42f, 41.35f };
			Local_2465[9 /*3*/] = { 2433.15f, 4967.43f, 42.19f };
			Local_2465[10 /*3*/] = { 2432.53f, 4967.89f, 42.4f };
			Local_2465[11 /*3*/] = { 2432.48f, 4969.07f, 42.19f };
			Local_2465[12 /*3*/] = { 2433.36f, 4969.44f, 42.31f };
			Local_2274[0 /*3*/] = { 2552.692f, 4978.566f, 45.32309f };
			Local_2274[1 /*3*/] = { 2562.534f, 5013.502f, 47.46302f };
			Local_2274[2 /*3*/] = { 2553.885f, 4945.661f, 47.49305f };
			Local_2274[3 /*3*/] = { 2515.545f, 4936.428f, 42.88382f };
			Local_2274[4 /*3*/] = { 2497.318f, 4967.818f, 43.59557f };
			Local_2274[5 /*3*/] = { 2481.376f, 4951.766f, 43.99859f };
			Local_2274[6 /*3*/] = { 2522.044f, 4956.372f, 43.71605f };
			Local_2274[7 /*3*/] = { 2529.048f, 4985.627f, 43.86848f };
			Local_2274[8 /*3*/] = { 2502.503f, 4987.245f, 46.62669f };
			Local_2274[9 /*3*/] = { 2464.891f, 4939.949f, 44.25646f };
			Local_2274[10 /*3*/] = { 2447.16f, 4940.272f, 44.15766f };
			Local_2274[11 /*3*/] = { 2376.537f, 4946.399f, 41.77232f };
			Local_2274[12 /*3*/] = { 2395.232f, 4995.63f, 44.68909f };
			Local_2274[13 /*3*/] = { 2419.819f, 4991.936f, 45.36976f };
			Local_2274[14 /*3*/] = { 2436.319f, 5011.725f, 45.84694f };
			Local_2274[15 /*3*/] = { 2407.765f, 5023.079f, 47.77091f };
			Local_2274[16 /*3*/] = { 2479.016f, 5028.829f, 42.98806f };
			Local_2274[17 /*3*/] = { 2434.704f, 5042.713f, 45.34462f };
			Local_2274[18 /*3*/] = { 2513.93f, 5039.333f, 51.02121f };
			Local_2274[19 /*3*/] = { 2477.882f, 4986.437f, 44.99511f };
			Local_2274[20 /*3*/] = { 2450.058f, 5011.858f, 44.89032f };
			func_203(&Local_1619, &uLocal_2708, cLocal_2338, 12f, 2482.197f, 4975.367f, 44.7288f, 121f, 1);
			func_349(&Local_2244, "ONEILGUARD4", 5, "ONEILGUARD1");
			func_349(&Local_2247, "ONEILGUARD4", 5, "ONEILGUARD1");
			func_349(&Local_2259, "CHI2_nope", 8, "ONEILGUARD1");
			func_349(&Local_2250, "SEETREVOR", 3, "chin2goon1");
			func_349(&Local_2253, "CHI2_hear", 8, "ONEILGUARD1");
			func_349(&Local_2256, "CHI2_hear", 8, "ONEILGUARD1");
			func_349(&Local_2262, "ONEILGUARD3", 5, "ONEILGUARD1");
			func_349(&Local_2265, "ONEILGUARD2", 5, "ONEILGUARD1");
			func_349(&Local_2268, "ONEILGUARD4", 5, "ONEILGUARD1");
			func_349(&Local_2271, "GOON2TREV", 4, "CHIN2goon2");
			func_32(6, 1);
			func_32(25, 1);
			iLocal_2506 = unk_0xA9C8EAA15373F456();
			unk_0xD90CB3CF9A40791C(joaat("bodhi2"), 1);
			unk_0x1EF7A8224AE81790("TAOGROUP", &iLocal_1618);
			unk_0xDE574EA7A7A2CAF8(1, iLocal_1618, joaat("player"));
			unk_0xDE574EA7A7A2CAF8(1, joaat("player"), iLocal_1618);
			func_17(0, -1);
			unk_0x63AA98F5AB7E3F81("Chinese2_Lunch", 0);
			unk_0x63AA98F5AB7E3F81("CHINESE2_HILLBILLIES", 0);
			if (func_348())
			{
				iVar0 = func_347();
				if (Global_86001 == 1)
				{
					iVar0++;
				}
				switch (iVar0)
				{
					case 0:
						func_265(2, 1, 0);
						unk_0xC7845898207D067F(1000);
						break;
					
					case 1:
						if (Global_86001 == 1)
						{
							func_265(3, 1, 0);
						}
						else
						{
							func_265(4, 1, 0);
							unk_0xC7845898207D067F(1000);
						}
						break;
					
					case 2:
						func_265(6, 1, 0);
						unk_0xC7845898207D067F(1000);
						break;
					
					case 3:
						func_265(7, 1, 0);
						unk_0xC7845898207D067F(1000);
						break;
					
					case 4:
						if (Global_86001 == 1)
						{
							func_265(8, 1, 0);
						}
						else
						{
							func_265(9, 1, 0);
							unk_0xC7845898207D067F(1000);
						}
						break;
					
					case 5:
						func_265(10, 1, 0);
						unk_0xC7845898207D067F(1000);
						func_144();
						break;
				}
			}
			else if (func_141(0))
			{
				func_265(1, 0, 1);
			}
			else
			{
				func_176(11);
			}
			break;
	}
}

void func_265(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	func_342(3);
	func_32(6, 0);
	iLocal_2512 = 0;
	iLocal_2511 = iParam0;
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			unk_0xE1324F59713746FA(joaat("ig_old_man2"));
			unk_0xE1324F59713746FA(joaat("ig_old_man1a"));
			unk_0xE1324F59713746FA(joaat("ig_janet"));
			unk_0xE1324F59713746FA(joaat("ig_taocheng"));
			unk_0xE1324F59713746FA(joaat("ig_taostranslator"));
			unk_0xF7CF05FEB40E538B("chinese_2_int", 8);
			while (((((!unk_0x9F746898F7881612(joaat("ig_old_man2")) || !unk_0x9F746898F7881612(joaat("ig_old_man1a"))) || !unk_0x9F746898F7881612(joaat("ig_janet"))) || !unk_0x9F746898F7881612(joaat("ig_taocheng"))) || !unk_0x9F746898F7881612(joaat("ig_taostranslator"))) || !unk_0x77888DFE5B94E7E5())
			{
				func_28(323, 1);
			}
			while (!func_339(&(Local_755[11 /*33*/]), 21, 1985.666f, 3052.661f, 46.2151f, 0, 1))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0x5DC8C2F2F8A363C2(unk_0x17B5CC8A8615737D(), 1992.878f, 3057.846f, 46.0568f, 1, 0, 0, 1);
			unk_0x0608D50823C6AA6D(unk_0x17B5CC8A8615737D(), 311f);
			unk_0x2F933BB106547968(Local_755[11 /*33*/], 9, 1, 0, 0);
			break;
		
		case 2:
			if (bParam1)
			{
				func_338(1992.878f, 3057.846f, 46.0568f, 311f, 1, 0);
			}
			else
			{
				if (func_68(iLocal_2506))
				{
					unk_0x5DC8C2F2F8A363C2(iLocal_2506, 1994.387f, 3061.94f, 46.0491f, 1, 0, 0, 1);
					unk_0x0608D50823C6AA6D(iLocal_2506, 50.7724f);
				}
				unk_0xBA7CD73403732191(0f);
				unk_0x503F20CB07C55470(-7f, 1065353216);
				unk_0x3FC7E3584ABA5F08(1992.878f, 3057.846f, 46.0568f);
			}
			unk_0xD1D19967E553E144(Vector(50.27741f, 3054.884f, 1991.22f) - Vector(40f, 40f, 40f), Vector(50.27741f, 3054.884f, 1991.22f) + Vector(40f, 40f, 40f), 0, 1, 1, 1);
			unk_0xB57996B091C5D677(Vector(50.27741f, 3054.884f, 1991.22f) - Vector(40f, 40f, 40f), Vector(50.27741f, 3054.884f, 1991.22f) + Vector(0f, 40f, 40f));
			unk_0x1B60289D0F2A2E3C(1984.997f, 3052.905f, 46.8556f, 10f, 1, 0, 0, 0);
			func_277(1, 0, bParam2);
			unk_0xE1324F59713746FA(joaat("ig_taocheng"));
			unk_0xE1324F59713746FA(joaat("ig_taostranslator"));
			unk_0xE1324F59713746FA(joaat("ig_old_man1a"));
			unk_0xE1324F59713746FA(joaat("ig_old_man2"));
			unk_0xE1324F59713746FA(joaat("ig_janet"));
			unk_0xA0E7D0E8FE126EE8("misschinese2_crystalmaze");
			while (((((!unk_0x9F746898F7881612(joaat("ig_taocheng")) || !unk_0x9F746898F7881612(joaat("ig_taostranslator"))) || !unk_0x9F746898F7881612(joaat("ig_old_man1a"))) || !unk_0x9F746898F7881612(joaat("ig_old_man2"))) || !unk_0x9F746898F7881612(joaat("ig_janet"))) || !unk_0xF4F8AE8DD0F08C1E("misschinese2_crystalmaze"))
			{
				func_28(3, 1);
			}
			if (!bParam1)
			{
				if (func_68(iLocal_2506))
				{
					unk_0xFCB4AA590A0D6A59(unk_0x17B5CC8A8615737D(), iLocal_2506, -1);
					unk_0x5DC8C2F2F8A363C2(iLocal_2506, 1994.387f, 3061.94f, 46.0491f, 1, 0, 0, 1);
					unk_0x0608D50823C6AA6D(iLocal_2506, 50.7724f);
				}
				else
				{
					unk_0x5DC8C2F2F8A363C2(unk_0x17B5CC8A8615737D(), 1992.878f, 3057.846f, 46.0568f, 1, 0, 0, 1);
					unk_0x0608D50823C6AA6D(unk_0x17B5CC8A8615737D(), 311f);
				}
			}
			func_28(85, 1);
			func_160(2, 41, 0, 0, 0, 1, 0, 1, 0, 1, 0);
			while (func_169(2, 41) != 900)
			{
				func_160(2, 41, 0, 0, 0, 1, 0, 1, 0, 1, 0);
				func_28(4, 1);
			}
			func_32(26, 0);
			if (bParam1)
			{
				if (func_68(iLocal_2506))
				{
					func_274(iLocal_2506, -1, 1);
				}
				else
				{
					func_274(0, -1, 1);
				}
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_338(2574.049f, 4981.824f, 50.44f, 50f, 1, 0);
			}
			else
			{
				unk_0x5DC8C2F2F8A363C2(unk_0x17B5CC8A8615737D(), 2570.543f, 4982.002f, 50.6795f, 0, 1, 0, 1);
				unk_0x0608D50823C6AA6D(unk_0x17B5CC8A8615737D(), 98.21f);
				unk_0xBA7CD73403732191(0f);
				unk_0x503F20CB07C55470(-7f, 1065353216);
				unk_0x3FC7E3584ABA5F08(2458.508f, 4984.504f, 52.3461f);
				func_28(323, 1);
			}
			unk_0x79920BB32F3C316F(1);
			unk_0xBE02ABAAC92D1A06(1);
			unk_0x000E46314C3A507F(0f);
			func_277(0, 0, 0);
			unk_0x75E3D7DD8F4B0F6F("chinese2_farmhouse_cutscene");
			func_28(34, 1);
			func_32(5, 0);
			while (func_30(5))
			{
				func_3();
				func_28(5, 1);
			}
			while (!func_224(1, 0, 1))
			{
				func_28(6, 1);
			}
			func_15("CHN2_MISSION_START", 1, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(7, 1);
			}
			while (!unk_0x234438A9D08C3186())
			{
				func_28(878, 1);
			}
			if (bParam1)
			{
				func_274(0, -1, 1);
			}
			func_160(10, 5, 0, 0, 0, 1, 0, 1, 0, 1, 0);
			while (!func_147(10, 5))
			{
				func_160(10, 5, 0, 0, 0, 1, 0, 1, 0, 1, 0);
				func_28(234, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_338(func_273(), func_272(), 1, 0);
			}
			else
			{
				unk_0x5DC8C2F2F8A363C2(unk_0x17B5CC8A8615737D(), 2570.543f, 4982.002f, 50.6795f, 0, 1, 0, 1);
				unk_0x0608D50823C6AA6D(unk_0x17B5CC8A8615737D(), 98.21f);
				unk_0xBA7CD73403732191(0f);
				unk_0x503F20CB07C55470(-7f, 1065353216);
				unk_0x3FC7E3584ABA5F08(2570.543f, 4982.002f, 50.6795f);
				func_28(323, 1);
			}
			unk_0x79920BB32F3C316F(1);
			unk_0xBE02ABAAC92D1A06(1);
			func_277(0, 1, 0);
			unk_0x000E46314C3A507F(0f);
			func_32(5, 0);
			while (func_30(5))
			{
				func_3();
				func_28(8, 1);
			}
			iVar0 = func_271(2);
			if (iVar0 != 0 && iVar0 != joaat("weapon_unarmed"))
			{
				if (unk_0x509A3191A6C4EB38(unk_0x17B5CC8A8615737D(), iVar0, 0))
				{
					unk_0x0B25AB3A7FA0683C(unk_0x17B5CC8A8615737D(), iVar0, 1);
				}
			}
			func_15("CHN2_MISSION_START", 1, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(9, 1);
			}
			if (bParam1)
			{
				if ((unk_0x23E9113C762466ED(iLocal_2506) && unk_0x45CD66F0A131E554(iLocal_2506, 0)) && func_270())
				{
					func_274(iLocal_2506, -1, 1);
					if (unk_0x45CD66F0A131E554(iLocal_2506, 0))
					{
						unk_0x524A422B74847594(iLocal_2506, 1, 1, 0);
						if (unk_0x8432EA469FDB418D(unk_0x0324EEB10F81965F(iLocal_2506)))
						{
							unk_0xFAC43F40071FC184(iLocal_2506, 15f);
						}
						if (unk_0xC5082382D5482C0C(unk_0x0324EEB10F81965F(iLocal_2506)))
						{
							unk_0x85E61E88835AE7F5(iLocal_2506);
							unk_0x7B846714372D2EEF(iLocal_2506, 1f, 1f, 1f);
						}
					}
				}
				else
				{
					func_274(0, -1, 1);
				}
			}
			if (unk_0x3DC4639D5F23DEA2(func_273(), 2570.538f, 4982.031f, 50.6239f, 1) < 10f)
			{
				unk_0x5DC8C2F2F8A363C2(unk_0x17B5CC8A8615737D(), 2570.538f, 4982.031f, 50.6239f, 1, 0, 0, 1);
				unk_0x0608D50823C6AA6D(unk_0x17B5CC8A8615737D(), 98f);
			}
			if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
			{
				func_268(unk_0x17B5CC8A8615737D(), unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1));
			}
			break;
		
		case 5:
			unk_0x79920BB32F3C316F(1);
			unk_0xBE02ABAAC92D1A06(1);
			unk_0x5DC8C2F2F8A363C2(unk_0x17B5CC8A8615737D(), 2572.01f, 4981.678f, 50.6698f, 1, 0, 0, 1);
			unk_0x0608D50823C6AA6D(unk_0x17B5CC8A8615737D(), 90.3911f);
			unk_0xBA7CD73403732191(0f);
			unk_0x503F20CB07C55470(0f, 1065353216);
			unk_0x000E46314C3A507F(0f);
			func_32(5, 0);
			func_166(1);
			while (func_30(5))
			{
				func_3();
				func_28(10, 1);
			}
			func_277(0, 0, 0);
			func_15("CHN2_TO_HOUSE_RESTART", 0, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(11, 1);
			}
			func_267(0, 1, 1);
			unk_0xBA7CD73403732191(0f);
			unk_0x503F20CB07C55470(-7f, 1065353216);
			break;
		
		case 6:
			if (bParam1)
			{
				func_338(2450.871f, 4960.999f, 44.3759f, 351f, 1, 0);
			}
			else
			{
				unk_0x5DC8C2F2F8A363C2(unk_0x17B5CC8A8615737D(), 2450.871f, 4960.999f, 44.3759f, 0, 1, 0, 1);
				unk_0x0608D50823C6AA6D(unk_0x17B5CC8A8615737D(), 351.3911f);
				unk_0x3FC7E3584ABA5F08(2432.982f, 4964.823f, 41.3476f);
				func_28(325, 1);
				unk_0xBA7CD73403732191(0f);
				unk_0x503F20CB07C55470(-7f, 1065353216);
			}
			func_277(0, 0, 0);
			unk_0x79920BB32F3C316F(1);
			unk_0xBE02ABAAC92D1A06(1);
			unk_0x4EDE34FBADD967A6(1);
			func_32(5, 0);
			func_166(1);
			while (func_30(5))
			{
				func_3();
				func_28(12, 1);
			}
			unk_0x000E46314C3A507F(0f);
			func_15("CHN2_ENTER_HOUSE_RESTART", 0, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(13, 1);
			}
			func_267(0, 1, 1);
			if (bParam1)
			{
				func_274(0, -1, 1);
			}
			if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
			{
				func_268(unk_0x17B5CC8A8615737D(), unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1));
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_338(2435.319f, 4966.153f, 41.3476f, 104.2964f, 1, 0);
			}
			else
			{
				unk_0x5DC8C2F2F8A363C2(unk_0x17B5CC8A8615737D(), 2435.319f, 4966.153f, 41.3476f, 1, 0, 0, 1);
				unk_0x0608D50823C6AA6D(unk_0x17B5CC8A8615737D(), 104.2964f);
				unk_0x3FC7E3584ABA5F08(2432.982f, 4964.823f, 41.3476f);
				unk_0x4EDE34FBADD967A6(1);
				unk_0xBA7CD73403732191(0f);
				unk_0x503F20CB07C55470(-7f, 1065353216);
			}
			unk_0x79920BB32F3C316F(1);
			unk_0xBE02ABAAC92D1A06(1);
			func_166(1);
			func_277(0, 0, 0);
			unk_0x98F0FA127445E343(unk_0x17B5CC8A8615737D(), 1);
			iLocal_2678 = unk_0x1A4C1C534F86E06A(2432.982f, 4964.823f, 41.3476f);
			while (!unk_0x623BDE1B17A9D9E3(iLocal_2678))
			{
				iLocal_2678 = unk_0x1A4C1C534F86E06A(2432.982f, 4964.823f, 41.3476f);
				func_28(14, 1);
			}
			while (!unk_0x1F02DB541727C048(iLocal_2678))
			{
				func_28(15, 1);
			}
			unk_0x88125DB6195C93A6(iLocal_2678, 1);
			unk_0xDD5B92F304023AEF(iLocal_2678);
			iLocal_2678 = 0;
			unk_0xD0001D3ECB0CB35E(joaat("weapon_petrolcan"), 31, 0);
			unk_0xA0E7D0E8FE126EE8("misschinese2_crystalmaze");
			while (!unk_0xC1C884D9C9FA3699(joaat("weapon_petrolcan")) || !unk_0xF4F8AE8DD0F08C1E("misschinese2_crystalmaze"))
			{
				func_28(16, 1);
			}
			func_32(11, 0);
			unk_0x98F0FA127445E343(unk_0x17B5CC8A8615737D(), 0);
			func_32(5, 0);
			while (func_30(5))
			{
				func_3();
				func_28(17, 1);
			}
			unk_0x000E46314C3A507F(0f);
			unk_0xE1324F59713746FA(joaat("blazer"));
			while (!unk_0x9F746898F7881612(joaat("blazer")))
			{
				func_28(18, 1);
			}
			func_266(0, 7, 1);
			unk_0xC1B7B5C6FDC0755B(unk_0x17B5CC8A8615737D(), joaat("weapon_petrolcan"), 4500, 1, 1);
			func_163(0);
			func_15("CHN2_PETROL_RESTART", 0, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(19, 1);
			}
			if (bParam1)
			{
				func_274(0, -1, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_338(2453.124f, 4952.071f, 45.125f, 285f, 1, 0);
			}
			else
			{
				unk_0x5DC8C2F2F8A363C2(unk_0x17B5CC8A8615737D(), 2453.124f, 4952.071f, 45.125f, 1, 0, 0, 1);
				unk_0x0608D50823C6AA6D(unk_0x17B5CC8A8615737D(), 285.8625f);
				unk_0x3FC7E3584ABA5F08(2453.124f, 4952.071f, 45.125f);
				unk_0x4EDE34FBADD967A6(1);
				unk_0xBA7CD73403732191(0f);
				unk_0x503F20CB07C55470(-7f, 1065353216);
			}
			func_277(0, 0, 0);
			if (!unk_0x234438A9D08C3186())
			{
				unk_0x75E3D7DD8F4B0F6F("chinese2_explosion_cutscene");
			}
			unk_0x79920BB32F3C316F(1);
			unk_0xBE02ABAAC92D1A06(1);
			unk_0xE1324F59713746FA(joaat("blazer"));
			while (!unk_0x9F746898F7881612(joaat("blazer")))
			{
				func_28(20, 1);
			}
			iLocal_2508 = unk_0x692A2891A2BA7352(joaat("blazer"), 2478.587f, 4941.803f, 43.6736f, 227.2903f, 1, 1);
			unk_0x482AE8C0EAF5AE07(iLocal_2508, 1084227584);
			iLocal_2678 = unk_0x1A4C1C534F86E06A(2432.982f, 4964.823f, 41.3476f);
			while (!unk_0x623BDE1B17A9D9E3(iLocal_2678))
			{
				iLocal_2678 = unk_0x1A4C1C534F86E06A(2432.982f, 4964.823f, 41.3476f);
				func_28(21, 1);
			}
			while (!unk_0x1F02DB541727C048(iLocal_2678))
			{
				func_28(22, 1);
			}
			iLocal_2648 = 3;
			unk_0x88125DB6195C93A6(iLocal_2678, 1);
			unk_0xDD5B92F304023AEF(iLocal_2678);
			iLocal_2678 = 0;
			while (!unk_0x9F746898F7881612(joaat("blazer")) || !unk_0x234438A9D08C3186())
			{
				func_28(24, 1);
			}
			if (bParam1)
			{
				func_274(0, -1, 1);
			}
			while (!unk_0xAA18627F95EFB68D("CHINESE2_FARMHOUSE_EXPLOSION_SHOOT_GASOLINE_MASTER", 0))
			{
				func_28(23, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_338(2472.3f, 4948.181f, 44.0937f, 220f, 1, 0);
			}
			else
			{
				unk_0x5DC8C2F2F8A363C2(unk_0x17B5CC8A8615737D(), 2472.3f, 4948.181f, 44.0937f, 1, 0, 0, 1);
				unk_0x0608D50823C6AA6D(unk_0x17B5CC8A8615737D(), 220.8569f);
				unk_0x3FC7E3584ABA5F08(2453.124f, 4952.071f, 45.125f);
				unk_0x4EDE34FBADD967A6(1);
				unk_0xBA7CD73403732191(0f);
				unk_0x503F20CB07C55470(-7f, 1065353216);
			}
			func_31(6, 0);
			unk_0x79920BB32F3C316F(3);
			unk_0xBE02ABAAC92D1A06(3);
			unk_0xE1324F59713746FA(joaat("blazer"));
			while ((!unk_0x9F746898F7881612(joaat("blazer")) || !unk_0x985A2515CBAF7290("FARMHOUSE_FIRE", 0, -1)) || !unk_0x985A2515CBAF7290("FARMHOUSE_FIRE_BG", 0, -1))
			{
				func_28(25, 1);
			}
			iLocal_2508 = unk_0x692A2891A2BA7352(joaat("blazer"), 2478.587f, 4941.803f, 43.6736f, 227.2903f, 1, 1);
			unk_0x482AE8C0EAF5AE07(iLocal_2508, 1084227584);
			func_277(0, 0, 0);
			unk_0x3FC7E3584ABA5F08(2453.124f, 4952.071f, 45.125f);
			func_19(50, 0, 0, 1, 0);
			func_19(51, 0, 0, 1, 0);
			func_19(52, 0, 0, 1, 0);
			func_19(53, 0, 0, 1, 0);
			func_19(54, 1, 0, 1, 0);
			func_19(55, 1, 0, 1, 0);
			uLocal_2672 = unk_0x0CE2297975A4AE38(2457.15f, 4968.79f, 48.677f, 45f, "DES_FarmHs");
			while (!unk_0xF1DEF26108040848(uLocal_2672))
			{
				func_28(161, 1);
			}
			unk_0x08B6ECD80C6BD224(uLocal_2672, 9);
			unk_0x55718AC3667F2A7D(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrm"), 0);
			unk_0x55718AC3667F2A7D(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrmsml"), 0);
			unk_0x55718AC3667F2A7D(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassairfrm"), 0);
			if (bParam1)
			{
				func_274(0, -1, 1);
			}
			break;
		
		case 10:
			func_31(6, 0);
			if (bParam1)
			{
				func_338(2625.776f, 4802.217f, 32.5747f, 206f, 1, 0);
			}
			else
			{
				unk_0x5DC8C2F2F8A363C2(unk_0x17B5CC8A8615737D(), 2625.776f, 4802.217f, 32.5747f, 1, 0, 0, 1);
				unk_0x0608D50823C6AA6D(unk_0x17B5CC8A8615737D(), 206.4254f);
				unk_0xBA7CD73403732191(0f);
				unk_0x503F20CB07C55470(-7f, 1065353216);
				unk_0x3FC7E3584ABA5F08(2625.776f, 4802.217f, 32.5747f);
			}
			unk_0x79920BB32F3C316F(3);
			unk_0xBE02ABAAC92D1A06(3);
			unk_0x08B6ECD80C6BD224(uLocal_2672, 9);
			func_19(50, 2, 0, 1, 0);
			func_19(51, 2, 0, 1, 0);
			func_19(52, 2, 0, 1, 0);
			func_19(53, 2, 0, 1, 0);
			func_19(54, 1, 0, 1, 0);
			func_19(55, 1, 0, 1, 0);
			if (bParam1)
			{
				func_274(0, -1, 1);
			}
			break;
	}
}

void func_266(int iParam0, int iParam1, int iParam2)
{
	Local_3337[iParam0 /*4*/].f_1 = iParam2;
	Local_3337[iParam0 /*4*/] = iParam1;
}

void func_267(int iParam0, int iParam1, int iParam2)
{
	Local_3358[iParam0 /*7*/].f_1 = iParam2;
	Local_3358[iParam0 /*7*/] = iParam1;
}

Vector3 func_268(int iParam0, struct<3> Param1)
{
	var uVar0;
	
	Param1.f_2 = (Param1.f_2 + 0.15f);
	if (unk_0x4F34E573D7F5024B(Param1, &uVar0, 0))
	{
		Param1.f_2 = uVar0;
	}
	if (func_269(iParam0))
	{
		unk_0x5DC8C2F2F8A363C2(iParam0, Param1, 1, 0, 0, 1);
	}
	return Param1;
}

bool func_269(int iParam0)
{
	if (!unk_0x23E9113C762466ED(iParam0))
	{
		return 0;
	}
	return !unk_0xA929B2923D14E2F8(iParam0, 0);
}

bool func_270()
{
	return Global_96040.f_2311.f_8;
}

var func_271(int iParam0)
{
	if (Global_91528 > 0)
	{
		return Global_96040.f_21[iParam0];
	}
	return Global_93635.f_21[iParam0];
}

float func_272()
{
	return Global_96040.f_2305.f_3;
}

Vector3 func_273()
{
	return Global_96040.f_2305;
}

void func_274(int iParam0, int iParam1, int iParam2)
{
	if (func_348() && func_276())
	{
		while (Global_91486 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xD278B72A700DC2DC(0);
		if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
		{
			if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
			{
				unk_0x76956C8D11F030FD(unk_0x17B5CC8A8615737D());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0x23E9113C762466ED(iParam0))
				{
					if (unk_0x45CD66F0A131E554(iParam0, 0))
					{
						if (!unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iParam0, 0))
						{
							unk_0xFCB4AA590A0D6A59(unk_0x17B5CC8A8615737D(), iParam0, iParam1);
							unk_0x503F20CB07C55470(0f, 1065353216);
							unk_0xBA7CD73403732191(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
			{
				unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 1, 0);
			}
		}
		unk_0xACBDD7C9D459A6D9();
		func_275(0);
	}
}

void func_275(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xEB79FECD9022AAF0(&(Global_91491.f_20), 13);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 13);
	}
}

bool func_276()
{
	return unk_0x48B8265059381CD0(Global_91491.f_20, 13);
}

void func_277(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (func_337())
		{
			if (func_334(func_336(), 10f, 20f, 9f, 1))
			{
				func_333();
				while (!func_332())
				{
					func_28(54455, 1);
				}
				if (bParam2)
				{
					iLocal_2506 = func_331(1994.387f, 3061.94f, 46.0491f, 50f);
				}
				else
				{
					iLocal_2506 = func_331(0f, 0f, 0f, 0f);
				}
			}
		}
	}
	else if (func_330())
	{
		func_328();
		while (!func_327())
		{
			func_28(544, 1);
		}
		iLocal_2506 = func_278(0f, 0f, 0f, 0f);
	}
	if (bParam1)
	{
		if (func_270())
		{
			if (unk_0x45CD66F0A131E554(iLocal_2506, 0))
			{
				unk_0xFCB4AA590A0D6A59(unk_0x17B5CC8A8615737D(), iLocal_2506, -1);
			}
		}
	}
}

int func_278(struct<3> Param0, float fParam3)
{
	return func_279(&(Global_96040.f_2311), Param0, fParam3, 0);
}

int func_279(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	var uVar5;
	int iVar8;
	
	if (func_326(uParam0))
	{
		if (func_162(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { *uParam0 };
			fParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (unk_0x3D559A6AF62756C4(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam4 = 89.5f;
			}
		}
		if (func_325(uParam0))
		{
			unk_0x1B60289D0F2A2E3C(Param1, 5f, 1, 0, 0, 0);
			func_324(Param1, 5f, 0);
			iVar0 = unk_0x692A2891A2BA7352(uParam0->f_12.f_66, Param1, fParam4, 1, 1);
			if (unk_0x23E9113C762466ED(iVar0))
			{
				Var1 = { unk_0x57240623C1BC6E88(iVar0, 1) };
				if (unk_0xB7A628320EFF8E47(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0x394AE1BE8F25AC5B(iVar0, Param1, 0, 0, 1);
				}
				func_316(iVar0, &(uParam0->f_12), 0, 1);
				bVar4 = true;
				if (unk_0xA55B002FED5A9858(uParam0->f_12.f_66) || unk_0x94AB8F7D4254DDDE(uParam0->f_12.f_66))
				{
					if (!unk_0x9BD6D9E34A208484(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar5))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					unk_0x482AE8C0EAF5AE07(iVar0, 1084227584);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
					{
						if (unk_0xC2AFD5CFEDC8F22A(unk_0x0324EEB10F81965F(iVar0)))
						{
							func_315(uParam0->f_11, 1);
						}
						else if (unk_0xD28959FE5BC2D14D(unk_0x0324EEB10F81965F(iVar0)))
						{
							func_315(uParam0->f_11, 2);
						}
					}
					unk_0xB7A086F89FD711C4(iVar0, 0);
					unk_0x0F2AE8B51289309C(iVar0, 0);
					unk_0x2B9B4DCEF80D1566(iVar0, 1);
					func_314(iVar0, uParam0->f_11);
				}
				else if ((!func_312(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0x6A7B0D91FD88D9EE(unk_0x6AF6B39BFDB53CB5(), "startup_positioning"))
				{
					iVar8 = func_311(iVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_304(iVar8);
					}
				}
				if (((Global_91491 != 13 && Global_91491 != 10) && Global_91491 != 11) && Global_91491 != 12)
				{
					if (unk_0x765F5B806B517045(&(Global_91491.f_3)) == Global_69519)
					{
						if (uParam0->f_12.f_66 == Global_101700.f_31389.f_69[21 /*78*/].f_66)
						{
							func_301(24, 0);
							func_304(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_280(iVar0, uParam0->f_11);
				}
				unk_0x924CDE68BA2ED3BA(uParam0->f_12.f_66);
				Var1 = { unk_0x57240623C1BC6E88(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_280(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_285(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x17206B315923243C(iParam0, -1, 0);
		if (!unk_0x23E9113C762466ED(iVar0))
		{
			iVar0 = unk_0x67649920B2C3A244(iParam0, -1);
		}
		if (unk_0x23E9113C762466ED(iVar0) && !unk_0xCA41A00932714525(iVar0))
		{
			if (unk_0x0324EEB10F81965F(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x0324EEB10F81965F(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x0324EEB10F81965F(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_101700.f_2095.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x0324EEB10F81965F(iParam0) == Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0x9C88EB7B70229335(&(Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x6A7B0D91FD88D9EE(unk_0xE184AC3A4DAF353D(iParam0), &(Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_101700.f_31389.f_5592[iVar1] = iVar2;
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
		if (unk_0x0324EEB10F81965F(iParam0) == Global_101700.f_31389.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0x9C88EB7B70229335(&(Global_101700.f_31389.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x6A7B0D91FD88D9EE(unk_0xE184AC3A4DAF353D(iParam0), &(Global_101700.f_31389.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_101700.f_31389.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_101700.f_31389.f_5590 = iParam1;
	Global_69436 = iParam0;
	Global_101700.f_31389.f_5588 = 1;
	func_281(iParam0, &(Global_101700.f_31389.f_5510));
}

void func_281(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x45CD66F0A131E554(iParam0, 0))
	{
		func_284(uParam1);
		uParam1->f_66 = unk_0x0324EEB10F81965F(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xE184AC3A4DAF353D(iParam0), 16);
		*uParam1 = unk_0x420AD4B7A2DA4F74(iParam0);
		unk_0x3C5D9FD265196560(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x5CE46A3E89B49FAE(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xEFB6EA0CF01B73B1(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xB3A30C9CBD0AF035(iParam0);
		uParam1->f_67 = unk_0x7C73B96D4046CE64(iParam0);
		uParam1->f_69 = unk_0x5AADFFFE972FF9B9(iParam0);
		uParam1->f_70 = unk_0xB7541DEA333EE53D(iParam0);
		unk_0x44A79540466923A3(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x86916C0F8ACCF8A7(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0xA2BD8E71E4EDAA75(iParam0, 2))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 28);
		}
		if (unk_0xA2BD8E71E4EDAA75(iParam0, 3))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 29);
		}
		if (unk_0xA2BD8E71E4EDAA75(iParam0, 0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 30);
		}
		if (unk_0xA2BD8E71E4EDAA75(iParam0, 1))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x4555FC519F5B33E3(iParam0, 0))
		{
			uParam1->f_68 = unk_0x575D47C669B84572(iParam0);
		}
		if (unk_0x8432EA469FDB418D(uParam1->f_66))
		{
			if (unk_0x3B236BCC7CA86F1F(iParam0))
			{
				switch (unk_0xF4925FA16E991774(iParam0))
				{
					case 2:
					case 0:
						unk_0x21E7933CCC7B3724(&(uParam1->f_77), 23);
						unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0x21E7933CCC7B3724(&(uParam1->f_77), 23);
						unk_0x21E7933CCC7B3724(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x3AAC868F49EC1E0A(iParam0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 9);
		}
		if (unk_0xDABC65773FAE7D61(iParam0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 10);
		}
		if (unk_0xD74AC52CAC4E709E(iParam0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 13);
			unk_0xF1A2595FDE7845CA(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x9FC3D9B8F2BAF3E6(iParam0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 12);
		}
		func_283(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xA13396827DE7EB7C(iParam0, iVar0 + 1))
			{
				unk_0xEB79FECD9022AAF0(&(uParam1->f_77), func_282(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0xA95FCE90BA930118(iParam0, 0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x21E7933CCC7B3724(&(uParam1->f_77), 11);
		}
		if (unk_0x44748DA5CF34DA5E(iParam0, "IgnoredByQuickSave") && unk_0x12D059B73664565A(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x21E7933CCC7B3724(&(uParam1->f_77), 27);
		}
	}
}

int func_282(int iParam0)
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

int func_283(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x45CD66F0A131E554(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xFA4A2220118417AE(*iParam0) == 0)
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
			if (unk_0x2E6E95784D18C8E0(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x68BE46B0EA4FCFAF(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x1D2F98CF2A472A00(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x1D2F98CF2A472A00(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_284(var uParam0)
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

int func_285(int iParam0)
{
	if ((((((((((!unk_0x23E9113C762466ED(iParam0) || !unk_0x45CD66F0A131E554(iParam0, 0)) || func_72(iParam0, 0, 0)) || func_72(iParam0, 1, 0)) || func_72(iParam0, 2, 0)) || func_300(iParam0) != 145) || func_299(iParam0)) || func_298(iParam0)) || func_297(iParam0)) || func_296(iParam0)) || !func_286(unk_0x0324EEB10F81965F(iParam0)))
	{
		if (func_298(iParam0))
		{
		}
		if (func_298(iParam0))
		{
		}
		if (func_72(iParam0, 0, 0))
		{
		}
		if (func_72(iParam0, 1, 0))
		{
		}
		if (func_72(iParam0, 2, 0))
		{
		}
		if (func_300(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_286(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0xA55B002FED5A9858(iParam0) || unk_0x8432EA469FDB418D(iParam0)) || unk_0xC5082382D5482C0C(iParam0)) || unk_0x3B548F49528B5FA7(iParam0))
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

int func_287(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x2ED6701376DBCF71(iParam0))
	{
		return 0;
	}
	if ((((((iParam0 == joaat("dominator2") && !unk_0x63C468D583002D23()) || (iParam0 == joaat("buffalo3") && !unk_0x63C468D583002D23())) || (iParam0 == joaat("gauntlet2") && !unk_0x63C468D583002D23())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x63C468D583002D23())) || iParam0 == joaat("blista3"))
	{
		if (!func_295())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x9AEFEF0C873443F4())
		{
			if (unk_0xE8885AFFB348EA8C(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x5D46F50AE982AB28(Var1.f_0))
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
		if ((((!func_294() && !func_293()) && !func_292()) && !func_291()) && !func_295())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x8EA3D5407E9F4AF0() || unk_0xEF4E5E47AF0D4480()) || unk_0x7C2F31E78C33DE0F())
		{
		}
		else if (!func_292())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_290(iParam0))
		{
			return 0;
		}
	}
	if (!func_288(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_288(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_289())
	{
		return 1;
	}
	unk_0x5E5FAFB02AD6B99F(&iVar0, &uVar1);
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
	if (!unk_0x03E2F3A2203722EB(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_289()
{
	if (unk_0xEF4E5E47AF0D4480())
	{
		return 1;
	}
	return 0;
}

int func_290(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2482093)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x57E9911EC23E2C54();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5506 && !Global_262145.f_11530) && iVar1 < Global_262145.f_11531)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_12342 && iVar1 < Global_262145.f_12354)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_12338 && iVar1 < Global_262145.f_12350)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_12339 && iVar1 < Global_262145.f_12351)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_12340 && iVar1 < Global_262145.f_12352)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_12341 && iVar1 < Global_262145.f_12353)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_12343 && iVar1 < Global_262145.f_12355)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_12344 && iVar1 < Global_262145.f_12347)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_12345 && iVar1 < Global_262145.f_12348)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_12346 && iVar1 < Global_262145.f_12349)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_14969 && iVar1 < Global_262145.f_14934)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_14964 && iVar1 < Global_262145.f_14929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_14968 && iVar1 < Global_262145.f_14933)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_14967 && iVar1 < Global_262145.f_14932)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_14961 && iVar1 < Global_262145.f_14926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_14962 && iVar1 < Global_262145.f_14927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_14965 && iVar1 < Global_262145.f_14930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_14966 && iVar1 < Global_262145.f_14931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_14963 && iVar1 < Global_262145.f_14928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_14971 && iVar1 < Global_262145.f_14936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_14972 && iVar1 < Global_262145.f_14937)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_14960 && iVar1 < Global_262145.f_14925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_14959 && iVar1 < Global_262145.f_14924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_14958 && iVar1 < Global_262145.f_14923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_14970 && iVar1 < Global_262145.f_14935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_14973 && iVar1 < Global_262145.f_14938)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_14974 && iVar1 < Global_262145.f_14939)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_14975 && iVar1 < Global_262145.f_14940)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_14976 && iVar1 < Global_262145.f_14941)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_15121 && iVar1 < Global_262145.f_15143)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_15122 && iVar1 < Global_262145.f_15144)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_15123 && iVar1 < Global_262145.f_15145)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_15124 && iVar1 < Global_262145.f_15146)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_15125 && iVar1 < Global_262145.f_15147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_15126 && iVar1 < Global_262145.f_15148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_15128 && iVar1 < Global_262145.f_15149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_15129 && iVar1 < Global_262145.f_15150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_15130 && iVar1 < Global_262145.f_15151)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_15131 && iVar1 < Global_262145.f_15152)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_15132 && iVar1 < Global_262145.f_15153)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_15133 && iVar1 < Global_262145.f_15154)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_15134 && iVar1 < Global_262145.f_15155)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_15140 && iVar1 < Global_262145.f_15162)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_15137 && iVar1 < Global_262145.f_15158)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_15138 && iVar1 < Global_262145.f_15159)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_15139 && iVar1 < Global_262145.f_15160)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_15127 && iVar1 < Global_262145.f_15161)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_15141 && iVar1 < Global_262145.f_15163)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_15135 && iVar1 < Global_262145.f_15156)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_15136 && iVar1 < Global_262145.f_15157)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_15142 && iVar1 < Global_262145.f_15164)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_16770 && iVar1 < Global_262145.f_16811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_16771 && iVar1 < Global_262145.f_16812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_16772 && iVar1 < Global_262145.f_16813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_16773 && iVar1 < Global_262145.f_16814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_16774 && iVar1 < Global_262145.f_16815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_16775 && iVar1 < Global_262145.f_16816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_16776 && iVar1 < Global_262145.f_16817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_16777 && iVar1 < Global_262145.f_16818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_16778 && iVar1 < Global_262145.f_16819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_16779 && iVar1 < Global_262145.f_16820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_16780 && iVar1 < Global_262145.f_16821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_16781 && iVar1 < Global_262145.f_16822)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_16782 && iVar1 < Global_262145.f_16823)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_16783 && iVar1 < Global_262145.f_16824)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_16784 && iVar1 < Global_262145.f_16825)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_16785 && iVar1 < Global_262145.f_16826)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_16786 && iVar1 < Global_262145.f_16827)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_16787 && iVar1 < Global_262145.f_16828)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_16788 && iVar1 < Global_262145.f_16829)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_16789 && iVar1 < Global_262145.f_16830)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_16790 && iVar1 < Global_262145.f_16831)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_16791 && iVar1 < Global_262145.f_16832)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_16792 && iVar1 < Global_262145.f_16833)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_16793 && iVar1 < Global_262145.f_16834)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_16794 && iVar1 < Global_262145.f_16835)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_17797 && iVar1 < Global_262145.f_17793)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_17798 && iVar1 < Global_262145.f_17794)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_17799 && iVar1 < Global_262145.f_17795)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_17800 && iVar1 < Global_262145.f_17796)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_291()
{
	return 0;
}

int func_292()
{
	return 1;
}

int func_293()
{
	return 1;
}

int func_294()
{
	if (unk_0x6948821CC8D52AC2(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_295()
{
	var uVar0;
	
	if (unk_0x98ECB3AD32B89920())
	{
		if (unk_0xA50BC4F5AE68D0BA())
		{
			if (unk_0x017971300978783B())
			{
				unk_0x7FE4F330D3D74809(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xEB79FECD9022AAF0(&uVar0, 2);
				unk_0xEB79FECD9022AAF0(&uVar0, 4);
				unk_0xEB79FECD9022AAF0(&uVar0, 6);
				unk_0xEB79FECD9022AAF0(&Global_25, 2);
				unk_0xEB79FECD9022AAF0(&Global_25, 4);
				unk_0xEB79FECD9022AAF0(&Global_25, 6);
				unk_0x731753D8494ABECD(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x8B57B9443E19F940())
				{
					uVar0 = unk_0xBE675F7A607B46B0(866);
					unk_0xEB79FECD9022AAF0(&uVar0, 0);
					unk_0x0D1285E5ED89254D(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_139179 == 2)
	{
		return 1;
	}
	else if (Global_139179 == 3)
	{
		return 0;
	}
	if (unk_0x8B57B9443E19F940())
	{
		if (unk_0x48B8265059381CD0(unk_0xBE675F7A607B46B0(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_296(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x0324EEB10F81965F(iParam0);
	sVar1 = unk_0xE184AC3A4DAF353D(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x6A7B0D91FD88D9EE(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_287(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_297(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x23E9113C762466ED(Global_89185[iVar0]))
		{
			if (Global_89185[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_298(int iParam0)
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(iParam0) && unk_0x45CD66F0A131E554(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x23E9113C762466ED(Global_89155[iVar0]) && unk_0x45CD66F0A131E554(Global_89155[iVar0], 0))
			{
				if (Global_89155[iVar0] == iParam0 && unk_0x0324EEB10F81965F(Global_89155[iVar0]) == unk_0x0324EEB10F81965F(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_299(int iParam0)
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(Global_68531.f_484[24]))
	{
		if (iParam0 == Global_68531.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x23E9113C762466ED(Global_68531.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_68531.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_300(int iParam0)
{
	int iVar0;
	
	if (!unk_0x23E9113C762466ED(iParam0))
	{
		return 145;
	}
	if (!unk_0x45CD66F0A131E554(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x23E9113C762466ED(Global_89155[iVar0]))
		{
			if (Global_89155[iVar0] == iParam0)
			{
				return Global_89165[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

void func_301(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_303(iParam0, 0))
		{
			func_302(iParam0, 1, 0);
			func_302(iParam0, 2, 0);
			func_302(iParam0, 3, 0);
			func_302(iParam0, 4, 0);
			func_302(iParam0, 0, 1);
			Global_68531[iParam0] = 1;
		}
	}
	else
	{
		func_302(iParam0, 0, 0);
	}
}

void func_302(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xEB79FECD9022AAF0(&(Global_101700.f_31389[iParam0]), iParam1);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&(Global_101700.f_31389[iParam0]), iParam1);
	}
}

bool func_303(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x48B8265059381CD0(Global_101700.f_31389[iParam0], iParam1);
}

void func_304(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_308(&(Global_68531.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x23E9113C762466ED(Global_68531.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0x45CD66F0A131E554(Global_68531.f_139[iParam0], 0))
				{
					if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), Global_68531.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0xF0F77C99098F999B(Global_68531.f_139[iParam0], 1, 1);
				unk_0x813865264334331D(&(Global_68531.f_139[iParam0]));
			}
		}
		Global_68531[iParam0] = 1;
		if (unk_0x48B8265059381CD0(Global_68531.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_303(iParam0, 0)) && Global_69440.f_66 == 0) && Global_101700.f_31389.f_1958[Global_68531.f_555[0 /*21*/].f_14] != 0) && Global_101700.f_31389.f_1958[Global_68531.f_555[0 /*21*/].f_14] > 3) && (!func_306(0, Global_68531.f_555[0 /*21*/].f_12) || !func_306(1, Global_68531.f_555[0 /*21*/].f_12)))
			{
				func_305(&(Global_101700.f_31389.f_69[Global_68531.f_555[0 /*21*/].f_14 /*78*/]), &Global_69440);
				Global_69518 = Global_101700.f_31389.f_5591;
			}
			func_301(iParam0, 0);
		}
	}
}

void func_305(var uParam0, var uParam1)
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

int func_306(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_307(&(Global_101700.f_31389.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_287(Global_101700.f_31389.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_307(var uParam0)
{
	return *uParam0;
}

int func_308(var uParam0, int iParam1)
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
			uParam0->f_4 = func_309(0, 1);
			uParam0->f_12 = 0;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 20);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_309(0, 1);
			uParam0->f_12 = 0;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 20);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_309(1, 1);
			uParam0->f_12 = 1;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 20);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_309(1, 2);
			uParam0->f_12 = 1;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 19);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_309(1, 1);
			uParam0->f_12 = 1;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 20);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_309(1, 2);
			uParam0->f_12 = 1;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 19);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_309(2, 1);
			uParam0->f_12 = 2;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 20);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_309(2, 1);
			uParam0->f_12 = 2;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 20);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_309(2, 1);
			uParam0->f_12 = 2;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 20);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 22);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 22);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 22);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 23);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 24);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 24);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 24);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 29);
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
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 27);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 24);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 29);
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
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 27);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 24);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 29);
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
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 27);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 24);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 11);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 13);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 11);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 13);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 9);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 9);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 23);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 23);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 23);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 8);
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
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 2);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 30);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 2);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 22);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 6);
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
			if (func_295())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 13);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 2);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 1);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 23);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_295())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 13);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 2);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 1);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 23);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 23);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 6);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 30);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 23);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 30);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 23);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0x48B8265059381CD0(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_101700.f_31389.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_162(Global_101700.f_31389.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_101700.f_31389.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_101700.f_31389.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_101700.f_31389.f_1934[uParam0->f_14];
		}
	}
	if (unk_0x48B8265059381CD0(uParam0->f_9, 19))
	{
		if (!func_162(Global_101700.f_2095.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_101700.f_2095.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_101700.f_2095.f_539.f_2837[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0x48B8265059381CD0(uParam0->f_9, 20))
	{
		if (!func_162(Global_101700.f_2095.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_101700.f_2095.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_101700.f_2095.f_539.f_2837[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_309(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_45(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_310(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_310(int iParam0, var uParam1, int iParam2)
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
			if (Global_101700.f_8044.f_99.f_58[128] && !Global_101700.f_8044.f_99.f_58[131])
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
					if (Global_101700.f_8044.f_99.f_58[119])
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
			else if (Global_101700.f_8044.f_99.f_58[118])
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

int func_311(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((unk_0x23E9113C762466ED(Global_68531.f_484[iVar0]) && !unk_0xA929B2923D14E2F8(Global_68531.f_484[iVar0], 0)) && unk_0x45CD66F0A131E554(Global_68531.f_484[iVar0], 0))
		{
			unk_0x3C5D9FD265196560(iParam0, &iVar1, &iVar2);
			unk_0x3C5D9FD265196560(Global_68531.f_484[iVar0], &iVar3, &iVar4);
			if (((unk_0x0324EEB10F81965F(iParam0) == unk_0x0324EEB10F81965F(Global_68531.f_484[iVar0]) && unk_0x7C73B96D4046CE64(iParam0) == unk_0x7C73B96D4046CE64(Global_68531.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_312(int iParam0, struct<3> Param1, bool bParam4)
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;
	
	iVar0 = unk_0x0324EEB10F81965F(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_313(iParam0, Global_68531.f_139[38], 0))
			{
				func_304(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_313(iParam0, Global_68531.f_139[43], 1))
			{
				func_304(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar5 = unk_0xCF84F5E773EE8DF3(unk_0x17B5CC8A8615737D(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				if (func_313(iParam0, uVar1[iVar6], 1) && func_228(unk_0x57240623C1BC6E88(uVar1[iVar6], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam4 || func_162(Param1, 0f, 0f, 0f, 0)) || unk_0x3DC4639D5F23DEA2(unk_0x57240623C1BC6E88(iParam0, 1), unk_0x57240623C1BC6E88(uVar1[iVar6], 1), 1) < 10f)
					{
						unk_0x813865264334331D(&iParam0);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				iVar6++;
			}
			break;
		
		case joaat("luxor2"):
			if ((unk_0x23E9113C762466ED(Global_68531.f_484[14]) && unk_0x45CD66F0A131E554(iParam0, 0)) && unk_0x45CD66F0A131E554(Global_68531.f_484[14], 0))
			{
				if (unk_0x0324EEB10F81965F(Global_68531.f_484[14]) == joaat("luxor2") && unk_0x7C73B96D4046CE64(iParam0) == unk_0x7C73B96D4046CE64(Global_68531.f_484[14]))
				{
					func_304(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0x23E9113C762466ED(Global_68531.f_484[20]) && unk_0x45CD66F0A131E554(iParam0, 0)) && unk_0x45CD66F0A131E554(Global_68531.f_484[20], 0))
			{
				if (unk_0x0324EEB10F81965F(Global_68531.f_484[20]) == joaat("swift2") && unk_0x7C73B96D4046CE64(iParam0) == unk_0x7C73B96D4046CE64(Global_68531.f_484[20]))
				{
					func_304(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_313(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0x23E9113C762466ED(iParam1) && !unk_0xA929B2923D14E2F8(iParam1, 0)) && unk_0x45CD66F0A131E554(iParam1, 0))
	{
		if (bParam2)
		{
			unk_0x3C5D9FD265196560(iParam0, &iVar0, &iVar1);
			unk_0x3C5D9FD265196560(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_314(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x23E9113C762466ED(Global_89155[iVar0]))
		{
			Global_89155[iVar0] = iParam0;
			Global_89165[iVar0] = iParam1;
			Global_89175[iVar0] = unk_0x0324EEB10F81965F(iParam0);
			if (unk_0xC2AFD5CFEDC8F22A(Global_89175[iVar0]))
			{
				Global_89203[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_89203[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_315(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x23E9113C762466ED(Global_89155[iVar0]))
		{
			if (iParam0 == 145 || Global_89165[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x0324EEB10F81965F(Global_89155[iVar0]) == func_309(iParam0, iParam1))
				{
					if (!unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), Global_89155[iVar0], 0))
					{
						unk_0xF0F77C99098F999B(Global_89155[iVar0], 0, 1);
						unk_0x813865264334331D(&(Global_89155[iVar0]));
						Global_89165[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_316(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x45CD66F0A131E554(iParam0, 0))
	{
		if (unk_0x765F5B806B517045(&(uParam1->f_1)) != 0)
		{
			unk_0xBFA6D869BA395202(iParam0, &(uParam1->f_1));
		}
		if (*uParam1 >= 0 && *uParam1 < unk_0x65787AE258BCF6F8())
		{
			unk_0xE0B7A718D08DF2B6(iParam0, *uParam1);
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
			if (unk_0x48B8265059381CD0(uParam1->f_77, func_282(iVar0 + 1)))
			{
			}
			else
			{
				unk_0xEB79FECD9022AAF0(&(uParam1->f_77), func_282(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0x48B8265059381CD0(uParam1->f_77, func_282(iVar1 + 1)))
			{
			}
			else
			{
				unk_0xEB79FECD9022AAF0(&(uParam1->f_77), func_282(iVar1 + 1));
			}
		}
		if (unk_0x48B8265059381CD0(uParam1->f_77, 13))
		{
			unk_0x9DD4A7AF83B5A817(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xCE1BE7835278AA2B(iParam0);
		}
		if (unk_0x48B8265059381CD0(uParam1->f_77, 12))
		{
			unk_0x2C6350FBF2D740F9(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xA53583755F423DE9(iParam0);
		}
		unk_0x357EE036FE09513D(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0xB9A1BA07F229F6AC(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0x48B8265059381CD0(uParam1->f_77, 15) || func_323(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_322())
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
		unk_0xF487CED93F263DA0(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			unk_0xA3C6B7F3E39994ED(iParam0, 0);
		}
		else
		{
			unk_0xA3C6B7F3E39994ED(iParam0, 0);
			unk_0xA3C6B7F3E39994ED(iParam0, uParam1->f_65);
		}
		unk_0x5DED87DD8464517B(iParam0, !unk_0x48B8265059381CD0(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0xD602D152E57C823D(iParam0, uParam1->f_70);
		}
		unk_0x4EC6390E64BE867C(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0x0C93CB3C1E004C79(iParam0, 2, unk_0x48B8265059381CD0(uParam1->f_77, 28));
		unk_0x0C93CB3C1E004C79(iParam0, 3, unk_0x48B8265059381CD0(uParam1->f_77, 29));
		unk_0x0C93CB3C1E004C79(iParam0, 0, unk_0x48B8265059381CD0(uParam1->f_77, 30));
		unk_0x0C93CB3C1E004C79(iParam0, 1, unk_0x48B8265059381CD0(uParam1->f_77, 31));
		unk_0xBE993A95A7771E1E(iParam0, unk_0x48B8265059381CD0(uParam1->f_77, 10));
		if (unk_0xD374022FAFC7605F(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0x866129976ECB1FB9(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x4A0388DBE0CE87AA(unk_0x0324EEB10F81965F(iParam0)))
			{
				if (unk_0xD28959FE5BC2D14D(unk_0x0324EEB10F81965F(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_321(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_321(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0x4555FC519F5B33E3(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0xE4D316C82D08E63D(iParam0, 1);
			}
			else
			{
				unk_0x63677FA149BCF42B(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_317(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xC5082382D5482C0C(uParam1->f_66) && !unk_0xA55B002FED5A9858(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0x48B8265059381CD0(uParam1->f_77, func_282(iVar2 + 1)))
				{
					if (!unk_0xA13396827DE7EB7C(iParam0, iVar2 + 1))
					{
						unk_0x70888C5F297D3D80(iParam0, iVar2 + 1, 0);
					}
				}
				else if (unk_0xA13396827DE7EB7C(iParam0, iVar2 + 1))
				{
					unk_0x70888C5F297D3D80(iParam0, iVar2 + 1, 1);
				}
				iVar2++;
			}
		}
		if ((unk_0x0324EEB10F81965F(iParam0) == joaat("sheava") || unk_0x0324EEB10F81965F(iParam0) == joaat("omnis")) || unk_0x0324EEB10F81965F(iParam0) == joaat("le7b"))
		{
			if (unk_0x68BE46B0EA4FCFAF(iParam0, 0) == -1)
			{
				unk_0x70888C5F297D3D80(iParam0, 1, 0);
			}
		}
		if (unk_0x8432EA469FDB418D(uParam1->f_66))
		{
			if (!unk_0x48B8265059381CD0(uParam1->f_77, 23))
			{
				if (unk_0x48B8265059381CD0(uParam1->f_77, 22))
				{
					unk_0x2F18827C60FB4AD8(iParam0, 2);
				}
				else
				{
					unk_0x2F18827C60FB4AD8(iParam0, 3);
				}
			}
			else
			{
				unk_0x2F18827C60FB4AD8(iParam0, 4);
			}
		}
		if (unk_0x48B8265059381CD0(uParam1->f_77, 27))
		{
			unk_0x6717F72244C0D24C(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0x6717F72244C0D24C(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_317(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x45CD66F0A131E554(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xFA4A2220118417AE(*iParam0) == 0)
	{
		return 0;
	}
	unk_0x5991FAEA924B5EE0(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0xA6EBC11A2C89D4A1(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0x68BE46B0EA4FCFAF(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x8762285499CFD42B(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0xE8BE9EFA248A9414(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0xE8BE9EFA248A9414(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0xE8BE9EFA248A9414(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_320(unk_0x0324EEB10F81965F(*iParam0), 1) && unk_0x68BE46B0EA4FCFAF(*iParam0, 24) != func_319(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0xE8BE9EFA248A9414(*iParam0, 24, func_319(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	if (func_318(*iParam0))
	{
		unk_0xF8EDF3B7E8D2CD26(*iParam0, 1);
		unk_0x2B9B4DCEF80D1566(*iParam0, 1);
	}
	return 1;
}

int func_318(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0x23E9113C762466ED(iParam0) && unk_0x45CD66F0A131E554(iParam0, 0)) && unk_0xFA4A2220118417AE(iParam0) > 0)
	{
		unk_0x5991FAEA924B5EE0(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x68BE46B0EA4FCFAF(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x945C7AD683103333(iParam0, iVar1, unk_0x68BE46B0EA4FCFAF(iParam0, iVar1)), 16);
				iVar2 = unk_0x765F5B806B517045(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x765F5B806B517045("MNU_CAGE") || iVar2 == unk_0x765F5B806B517045("SABRE_CAG"))
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

int func_319(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0x23E9113C762466ED(iParam0) && unk_0x45CD66F0A131E554(iParam0, 0))
	{
		switch (unk_0x0324EEB10F81965F(iParam0))
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
		iVar0 = unk_0xF218D5E7A1FA1079(iParam0, 38);
		iVar1 = unk_0xF218D5E7A1FA1079(iParam0, 24);
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

int func_320(int iParam0, int iParam1)
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
			if (!Global_262145.f_12339)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_12340)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_12338)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_12341)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_12343)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_12342)
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
			if (Global_262145.f_16780)
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
			if (Global_262145.f_16782)
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
			if (Global_262145.f_16786)
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
			if (Global_262145.f_16783)
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
			if (Global_262145.f_16790)
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
			if (Global_262145.f_16788)
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
			if (Global_262145.f_16793)
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

void func_321(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFA4A2220118417AE(iParam0) > 0)
	{
		unk_0x5991FAEA924B5EE0(iParam0, 0);
		iVar0 = unk_0x68BE46B0EA4FCFAF(iParam0, 24);
		iVar1 = unk_0x1D2F98CF2A472A00(iParam0, 24);
		unk_0xE8356B7E1B731437(iParam0, uParam1);
		if (unk_0x0324EEB10F81965F(iParam0) == joaat("tornado6"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0x8762285499CFD42B(iParam0, 24);
		}
		else
		{
			unk_0xE8BE9EFA248A9414(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_322()
{
	return unk_0x6948821CC8D52AC2(joaat("mpindependence"));
}

int func_323(int iParam0)
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(iParam0))
	{
		if (unk_0x45CD66F0A131E554(iParam0, 0))
		{
			if (unk_0x34D7B5822CF22910("MPBitset", 3))
			{
				if (unk_0x44748DA5CF34DA5E(iParam0, "MPBitset"))
				{
					iVar0 = unk_0x83CA0CEAC60F17F6(iParam0, "MPBitset");
				}
				return unk_0x48B8265059381CD0(iVar0, 4);
			}
		}
	}
	return 0;
}

void func_324(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_308(&(Global_68531.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0x3DC4639D5F23DEA2(Param0, Global_68531.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_304(iVar0);
			}
		}
		iVar0++;
	}
}

int func_325(var uParam0)
{
	if (func_326(uParam0))
	{
		if (unk_0x9F746898F7881612(uParam0->f_12.f_66))
		{
			return 1;
		}
		else
		{
			return 0;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_326(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_287(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_228(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_327()
{
	return func_325(&(Global_96040.f_2311));
}

void func_328()
{
	func_329(&(Global_96040.f_2311));
}

void func_329(var uParam0)
{
	if (func_326(uParam0))
	{
		unk_0xE1324F59713746FA(uParam0->f_12.f_66);
	}
}

bool func_330()
{
	return func_326(&(Global_96040.f_2311));
}

int func_331(struct<3> Param0, float fParam3)
{
	return func_279(&(Global_93635.f_2311), Param0, fParam3, 0);
}

bool func_332()
{
	return func_325(&(Global_93635.f_2311));
}

void func_333()
{
	func_329(&(Global_93635.f_2311));
}

int func_334(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam4 == 1)
	{
		Param1 = { func_335() };
	}
	unk_0x9475086C69ACF470(iParam0, &Var0, &Var3);
	if ((Var3.f_0 - Var0.f_0) > Param1.f_0)
	{
		return 0;
	}
	else if ((Var3.f_1 - Var0.f_1) > Param1.f_1)
	{
		return 0;
	}
	else if ((Var3.f_2 - Var0.f_2) > Param1.f_2)
	{
		return 0;
	}
	return 1;
}

Vector3 func_335()
{
	return 2.55f, 5.665f, 2.55f;
}

int func_336()
{
	return Global_93635.f_2311.f_12.f_66;
}

bool func_337()
{
	return func_326(&(Global_93635.f_2311));
}

void func_338(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	if (func_348())
	{
		unk_0xAA78C60F0BF0F8D4(0);
		unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 2);
		unk_0xD278B72A700DC2DC(1);
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 0, 0);
		}
		Global_91487 = { Param0 };
		Global_91490 = fParam3;
		Global_91486 = 1;
		if (iParam4 == 1)
		{
			unk_0xEB79FECD9022AAF0(&(Global_91491.f_20), 14);
		}
		else
		{
			unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0xEB79FECD9022AAF0(&(Global_91491.f_20), 24);
		}
		else
		{
			unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 24);
		}
		func_275(1);
	}
}

int func_339(var uParam0, int iParam1, struct<3> Param2, int iParam5, bool bParam6)
{
	int iVar0;
	
	if (!func_45(iParam1))
	{
		iVar0 = func_341(iParam1);
		unk_0xE1324F59713746FA(iVar0);
		if (unk_0x9F746898F7881612(iVar0))
		{
			if (unk_0x23E9113C762466ED(*uParam0))
			{
				unk_0x478AE709A466CB7E(uParam0);
			}
			*uParam0 = unk_0x2AD5F4170F4ACBEB(26, iVar0, Param2, iParam5, 0, 0);
			unk_0x7F73E2B58861632F(*uParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0xC72E4A160D2D5004(*uParam0, 3) == 0)
				{
					unk_0x2F933BB106547968(*uParam0, 5, 2, 0, 0);
				}
			}
			func_340(*uParam0, iParam1);
			if (bParam6)
			{
				unk_0x924CDE68BA2ED3BA(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_340(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_87658[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_341(int iParam0)
{
	if (!func_45(iParam0))
	{
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_342(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_178();
	func_179();
	func_180();
	func_177();
	unk_0x2FBF689422F41891();
	unk_0x79920BB32F3C316F(3);
	unk_0xBE02ABAAC92D1A06(3);
	iLocal_3491 = 0;
	iLocal_2649 = 0;
	iLocal_2645 = 0;
	iLocal_2512 = 0;
	iLocal_1614 = 0;
	iLocal_2646 = 0;
	iLocal_2879 = 0;
	iLocal_2880 = 0;
	while (unk_0x80A7A5165A9C7607())
	{
		if (unk_0x1B76B77EDF24A933())
		{
			unk_0x404A255180289CD1(1);
		}
		else
		{
			unk_0xB5BD48559882D958();
		}
		func_28(0, 0);
	}
	if (unk_0xAF6D1E258B973F1D(uLocal_2650))
	{
		unk_0xC2E11A6D29A07A71(uLocal_2650);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_2651)
	{
		if (unk_0xAF6D1E258B973F1D(iLocal_2651[iVar0]))
		{
			unk_0xC2E11A6D29A07A71(iLocal_2651[iVar0]);
		}
		iVar0++;
	}
	iLocal_3506 = 0;
	iLocal_3507 = 0;
	iLocal_3508 = 0;
	sLocal_3509 = "";
	sLocal_3510 = "";
	func_184();
	iLocal_63 = 0;
	iLocal_64 = 0;
	iLocal_65 = 0;
	unk_0x774EBBE5B3122792(1f);
	func_346();
	unk_0x9274EF97A90581BE(0, 0, 3000, 1, 0, 0);
	unk_0xA5E21BA8D7CE03D8(0);
	func_186(0, 1, 1, 0);
	func_28(32, 0);
	unk_0x8ADF92E4B51709E2(1f);
	unk_0xD12BCC85C2F8B1DE();
	func_210(&Local_2683, 1, 0);
	func_66();
	func_64();
	unk_0xCC76050C3A61CF48();
	unk_0xFFE4319CE7BE2DBA(0);
	unk_0xE7281B4166C6A4CD(Vector(44.8113f, 4961.045f, 2469.985f) - Vector(100f, 100f, 100f), Vector(44.8113f, 4961.045f, 2469.985f) + Vector(100f, 100f, 100f), 1);
	if (iParam0 == 0)
	{
		unk_0xB30185B1BE926A58(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrm"), 1);
		unk_0xB30185B1BE926A58(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrmsml"), 1);
		unk_0xB30185B1BE926A58(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassairfrm"), 0);
		Global_33944 = 1;
	}
	unk_0xE4F11FC7E3A665A1("AZL_CHN2_METH_LAB_FARM_FIRE", 0, 1);
	if (iParam0 != 3)
	{
		unk_0x63AA98F5AB7E3F81("Chinese2_Lunch", 1);
		unk_0x63AA98F5AB7E3F81("CHINESE2_HILLBILLIES", 0);
	}
	unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 1, 0);
	if (iLocal_2884 != -1)
	{
		if (unk_0x33CB7E3A2B3E527C(iLocal_2884))
		{
			unk_0xE73D1B19D9500603(iLocal_2884);
		}
	}
	if (iParam0 == 1 || iParam0 == 2)
	{
		func_344(unk_0x17B5CC8A8615737D(), 2);
	}
	iVar0 = 0;
	while (iVar0 < Local_755.f_0)
	{
		if (iVar0 == 14)
		{
		}
		if (unk_0x23E9113C762466ED(Local_755[iVar0 /*33*/]))
		{
			if (!unk_0xCA41A00932714525(Local_755[iVar0 /*33*/]))
			{
				if (iParam0 == 3)
				{
					unk_0xBC8C26E1CC191108(Local_755[iVar0 /*33*/]);
				}
			}
			if (iParam0 == 0 || iParam0 == 2)
			{
				if (iVar0 == 14)
				{
				}
				if (!unk_0xCA41A00932714525(Local_755[iVar0 /*33*/]))
				{
					unk_0x650BB0E111420EAF(Local_755[iVar0 /*33*/], 1);
					unk_0x6500ADB01E821BC0(&(Local_755[iVar0 /*33*/]));
				}
			}
			else
			{
				if (iVar0 == 14)
				{
				}
				unk_0x478AE709A466CB7E(&(Local_755[iVar0 /*33*/]));
			}
		}
		Local_755[iVar0 /*33*/].f_3 = 0;
		Local_755[iVar0 /*33*/].f_4 = 0;
		Local_755[iVar0 /*33*/].f_6 = { 0f, 0f, 0f };
		Local_755[iVar0 /*33*/].f_9 = { 0f, 0f, 0f };
		Local_755[iVar0 /*33*/].f_2 = 25;
		Local_755[iVar0 /*33*/].f_5 = 0;
		Local_755[iVar0 /*33*/].f_12 = 0f;
		Local_755[iVar0 /*33*/].f_13 = 0f;
		Local_755[iVar0 /*33*/].f_14 = 0;
		Local_755[iVar0 /*33*/].f_15 = 0;
		Local_755[iVar0 /*33*/].f_17 = 0;
		Local_755[iVar0 /*33*/].f_16 = 0;
		Local_755[iVar0 /*33*/].f_21 = 0;
		Local_755[iVar0 /*33*/].f_22 = 0;
		Local_1619[iVar0 /*24*/].f_3 = 1;
		if (unk_0x23E9113C762466ED(Local_755[iVar0 /*33*/].f_20))
		{
			unk_0x1AAFEA627BB9C402(&(Local_755[iVar0 /*33*/].f_20));
		}
		unk_0x111E99E32A85B908(Local_755[iVar0 /*33*/].f_24);
		iVar0++;
	}
	if (iParam0 != 3)
	{
		func_343();
	}
	else
	{
		func_203(&Local_1619, &uLocal_2708, cLocal_2338, 12f, 2482.197f, 4975.367f, 44.7288f, 121f, 1);
	}
	if (unk_0x23E9113C762466ED(iLocal_2878))
	{
		unk_0x1AAFEA627BB9C402(&iLocal_2878);
	}
	if (iParam0 != 0 && iParam0 != 2)
	{
		unk_0x1B60289D0F2A2E3C(2438.433f, 4970.416f, 53.1778f, 450f, 1, 0, 0, 0);
		unk_0x8F088665928570EA(2442.69f, 4970.348f, 46.33f, 30f);
	}
	iVar0 = 0;
	while (iVar0 < Local_2515.f_0)
	{
		if ((Local_2515[iVar0 /*6*/].f_1 == 1 && Local_2515[iVar0 /*6*/].f_3 == 0) || Local_2515[iVar0 /*6*/].f_3 == 0)
		{
			Local_2515[iVar0 /*6*/].f_2 = -1;
			Local_2515[iVar0 /*6*/].f_4 = 0;
			Local_2515[iVar0 /*6*/].f_5 = 0;
			Local_2515[iVar0 /*6*/].f_1 = 0;
		}
		iVar0++;
	}
	func_3();
	if (unk_0xA3794949321E107C(uLocal_2677))
	{
		unk_0x020DF7300725ECAB(&uLocal_2677);
	}
	iVar1 = 0;
	while (iVar1 < iLocal_2657)
	{
		if (unk_0x23E9113C762466ED(iLocal_2657[iVar1]))
		{
			unk_0x1AAFEA627BB9C402(&(iLocal_2657[iVar1]));
		}
		iVar1++;
	}
	if (unk_0x23E9113C762466ED(iLocal_2506))
	{
		if (iParam0 != 0 && iParam0 != 2)
		{
			if (unk_0x45CD66F0A131E554(iLocal_2506, 0))
			{
				if (unk_0x45CA7F42CA715849(iLocal_2506, 1))
				{
					if (unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
					{
						unk_0x921CF98C637B0043(&iLocal_2506);
					}
					else
					{
						unk_0x921CF98C637B0043(&iLocal_2506);
					}
				}
			}
		}
	}
	if (unk_0x23E9113C762466ED(iLocal_2507))
	{
		if (iParam0 != 0)
		{
			if (unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
			{
				unk_0x921CF98C637B0043(&iLocal_2507);
			}
			else
			{
				unk_0x921CF98C637B0043(&iLocal_2507);
			}
		}
		else
		{
			unk_0x921CF98C637B0043(&iLocal_2507);
		}
	}
	if (unk_0x23E9113C762466ED(iLocal_2508))
	{
		if (func_68(iLocal_2508))
		{
			unk_0x921CF98C637B0043(&iLocal_2508);
		}
	}
	if (unk_0xAF6D1E258B973F1D(uLocal_2675))
	{
		unk_0xC2E11A6D29A07A71(uLocal_2675);
	}
	if (iParam0 == 0)
	{
		if (unk_0x23E9113C762466ED(iLocal_2680))
		{
			unk_0x98F0FA127445E343(iLocal_2680, 0);
			unk_0x7572E8CAC3330ACE(&iLocal_2680);
		}
		if (unk_0x23E9113C762466ED(iLocal_2681))
		{
			unk_0x98F0FA127445E343(iLocal_2681, 0);
			unk_0x7572E8CAC3330ACE(&iLocal_2681);
		}
	}
	if (unk_0x23E9113C762466ED(iLocal_2642))
	{
		unk_0x478AE709A466CB7E(&iLocal_2642);
	}
	unk_0x794A3BB49F59DF31(2439.687f, 4971.541f, 45.9442f, 150f);
	if (iParam0 != 2)
	{
		if (unk_0x23E9113C762466ED(Local_755[12 /*33*/]))
		{
			unk_0x478AE709A466CB7E(&(Local_755[12 /*33*/]));
		}
		if (unk_0x23E9113C762466ED(Local_755[13 /*33*/]))
		{
			unk_0x478AE709A466CB7E(&(Local_755[13 /*33*/]));
		}
		if (unk_0x23E9113C762466ED(Local_755[14 /*33*/]))
		{
			unk_0x478AE709A466CB7E(&(Local_755[14 /*33*/]));
		}
		if (unk_0x23E9113C762466ED(Local_755[11 /*33*/]))
		{
			unk_0x478AE709A466CB7E(&(Local_755[11 /*33*/]));
		}
		if (unk_0x23E9113C762466ED(Local_755[10 /*33*/]))
		{
			unk_0x478AE709A466CB7E(&(Local_755[10 /*33*/]));
		}
	}
	unk_0x924CDE68BA2ED3BA(joaat("a_m_m_hillbilly_01"));
	unk_0x924CDE68BA2ED3BA(joaat("a_m_m_hillbilly_02"));
	unk_0x924CDE68BA2ED3BA(joaat("prop_cs_fertilizer"));
	unk_0x924CDE68BA2ED3BA(joaat("burrito"));
	unk_0x924CDE68BA2ED3BA(joaat("ig_janet"));
	unk_0x924CDE68BA2ED3BA(joaat("ig_old_man1a"));
	unk_0x924CDE68BA2ED3BA(joaat("ig_old_man2"));
	unk_0x924CDE68BA2ED3BA(joaat("ig_taocheng"));
	unk_0x924CDE68BA2ED3BA(joaat("ig_taostranslator"));
	unk_0x924CDE68BA2ED3BA(joaat("ig_janet"));
	unk_0xA617A761C0955C65("move_m@gangster@var_e");
	unk_0xA617A761C0955C65("move_m@gangster@var_f");
	unk_0xA617A761C0955C65("move_m@gangster@generic");
	unk_0xF9FFB9857F3120F8("misschinese2_barrelRoll");
	unk_0xF9FFB9857F3120F8("reaction@male_stand@big_variations@b");
	unk_0xF9FFB9857F3120F8("reaction@male_stand@big_intro@left");
	unk_0xF9FFB9857F3120F8("reaction@male_stand@big_intro@right");
	unk_0xF9FFB9857F3120F8("reaction@male_stand@big_intro@backward");
	unk_0xF9FFB9857F3120F8("misschinese2_bank1");
	unk_0xF9FFB9857F3120F8("misschinese2_bank5");
	unk_0xF9FFB9857F3120F8("misschinese2_crystalmazemcs1_ig");
	if (iParam0 != 3)
	{
		if (unk_0x509A3191A6C4EB38(unk_0x17B5CC8A8615737D(), joaat("weapon_petrolcan"), 0))
		{
			unk_0x9CA872E9BF4DF131(unk_0x17B5CC8A8615737D(), joaat("weapon_petrolcan"));
		}
	}
	iLocal_2641 = 0;
	iLocal_751 = 0;
	if (unk_0x4E1850F5FF023071("CHI_2_DRIVE_TO_FARMHOUSE"))
	{
		unk_0xB8CAC5F3774894A1("CHI_2_DRIVE_TO_FARMHOUSE");
	}
	if (unk_0x4E1850F5FF023071("CHI_2_DRIVE_ROCK_RADIO"))
	{
		unk_0xB8CAC5F3774894A1("CHI_2_DRIVE_ROCK_RADIO");
	}
	if (unk_0x4E1850F5FF023071("CHI_2_FARMHOUSE_OVERVIEW"))
	{
		unk_0xB8CAC5F3774894A1("CHI_2_FARMHOUSE_OVERVIEW");
	}
	if (unk_0x4E1850F5FF023071("CHI_2_SHOOTOUT_STEALTH"))
	{
		unk_0xB8CAC5F3774894A1("CHI_2_SHOOTOUT_STEALTH");
	}
	if (unk_0x4E1850F5FF023071("CHI_2_SHOOTOUT_ENEMIES_ALERTED"))
	{
		unk_0xB8CAC5F3774894A1("CHI_2_SHOOTOUT_ENEMIES_ALERTED");
	}
	if (unk_0x4E1850F5FF023071("CHI_2_POUR_GAS"))
	{
		unk_0xB8CAC5F3774894A1("CHI_2_POUR_GAS");
	}
	if (unk_0x4E1850F5FF023071("CHI_2_SHOOT_GAS"))
	{
		unk_0xB8CAC5F3774894A1("CHI_2_SHOOT_GAS");
	}
	if (unk_0x4E1850F5FF023071("CHI_2_GAS_TRAIL_FIRE"))
	{
		unk_0xB8CAC5F3774894A1("CHI_2_GAS_TRAIL_FIRE");
	}
	if (unk_0x4E1850F5FF023071("CHI_2_RAYFIRE"))
	{
		unk_0xB8CAC5F3774894A1("CHI_2_RAYFIRE");
	}
	unk_0x4C21FD297A827B45();
	if (iParam0 != 0)
	{
		func_15("CHN2_STOP_TRACK", 0, func_167());
		while (!func_2())
		{
			func_28(0, 0);
		}
	}
	if (iParam0 != 3)
	{
		func_166(0);
	}
	if (iParam0 != 0)
	{
		uLocal_2672 = unk_0x0CE2297975A4AE38(2457.15f, 4968.79f, 48.677f, 45f, "DES_FarmHs");
		if (iLocal_2673)
		{
			if (unk_0xF1DEF26108040848(uLocal_2672))
			{
				unk_0x08B6ECD80C6BD224(uLocal_2672, 2);
			}
			iLocal_2673 = 0;
		}
	}
}

void func_343()
{
	unk_0xD7D0765485F52282(joaat("DEFAULT"), 31);
}

void func_344(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x23E9113C762466ED(iParam0))
	{
		if (unk_0x5CD8291F2C5E0AD1(iParam0, &iVar0, 0))
		{
			if (iVar0 != 0 && iVar0 != joaat("weapon_unarmed"))
			{
				if (!func_345(iParam1, iVar0))
				{
					iVar0 = 0;
				}
			}
		}
	}
	if (Global_91528 > 0)
	{
		Global_96040.f_21[iParam1] = iVar0;
	}
	else
	{
		Global_93635.f_21[iParam1] = iVar0;
	}
}

int func_345(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_91528 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_96040.f_812[iParam0 /*284*/][iVar0 /*3*/] == iParam1)
			{
				if (Global_96040.f_812[iParam0 /*284*/][iVar0 /*3*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			if (Global_96040.f_812[iParam0 /*284*/].f_133[iVar0 /*3*/] == iParam1)
			{
				if (Global_96040.f_812[iParam0 /*284*/].f_133[iVar0 /*3*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_93635.f_812[iParam0 /*284*/][iVar0 /*3*/] == iParam1)
			{
				if (Global_93635.f_812[iParam0 /*284*/][iVar0 /*3*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			if (Global_93635.f_812[iParam0 /*284*/].f_133[iVar0 /*3*/] == iParam1)
			{
				if (Global_93635.f_812[iParam0 /*284*/].f_133[iVar0 /*3*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_346()
{
	int iVar0;
	
	Global_55851 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_55852[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

int func_347()
{
	if (!Global_91491 == 10 && !Global_91491 == 9)
	{
		return 0;
	}
	return Global_91491.f_2;
}

int func_348()
{
	if (Global_91491 == 10 || Global_91491 == 9)
	{
		return 1;
	}
	return 0;
}

void func_349(var uParam0, char* sParam1, int iParam2, char* sParam3)
{
	*uParam0 = sParam3;
	uParam0->f_1 = sParam1;
	uParam0->f_2 = iParam2;
}

void func_350()
{
	unk_0x1EF7A8224AE81790("MYFRIEND", &iLocal_1615);
	unk_0x1EF7A8224AE81790("FOE", &iLocal_1616);
	unk_0x1EF7A8224AE81790("IGNORE", &iLocal_1617);
	unk_0x1EF7A8224AE81790("BARpeds", &iLocal_2636);
	unk_0xDE574EA7A7A2CAF8(3, iLocal_2636, joaat("player"));
	unk_0xDE574EA7A7A2CAF8(5, unk_0x7B619B0C33282280(unk_0x17B5CC8A8615737D()), iLocal_1616);
	unk_0xDE574EA7A7A2CAF8(5, iLocal_1616, unk_0x7B619B0C33282280(unk_0x17B5CC8A8615737D()));
	unk_0xDE574EA7A7A2CAF8(2, iLocal_1615, iLocal_1617);
	unk_0xDE574EA7A7A2CAF8(2, iLocal_1616, iLocal_1617);
	unk_0xDE574EA7A7A2CAF8(2, iLocal_1617, unk_0x7B619B0C33282280(unk_0x17B5CC8A8615737D()));
	unk_0xDE574EA7A7A2CAF8(2, iLocal_1617, iLocal_1616);
}

void func_351()
{
	switch (iLocal_3688)
	{
		case 0:
			if (iLocal_2511 >= 4)
			{
				func_352(1, "Snipe from hill", 0, 0, 0, 1);
				iLocal_3688++;
			}
			break;
		
		case 1:
			if (iLocal_2511 >= 4 && iLocal_2511 < 7)
			{
				if (func_87(12) || iLocal_2511 == 6)
				{
					func_352(2, "Inside House", 0, 0, 0, 1);
					iLocal_3688++;
				}
			}
			else if (iLocal_2511 == 7)
			{
				if (unk_0x509A3191A6C4EB38(unk_0x17B5CC8A8615737D(), joaat("weapon_petrolcan"), 0))
				{
					func_352(2, "Inside House", 0, 0, 0, 1);
					iLocal_3688++;
				}
			}
			else if (iLocal_2511 > 7)
			{
				func_352(2, "Inside House", 0, 0, 0, 1);
				iLocal_3688++;
			}
			break;
		
		case 2:
			if (iLocal_2511 >= 7)
			{
				func_352(3, "Pour petrol trail", 0, 0, 0, 1);
				iLocal_3688++;
			}
			break;
		
		case 3:
			if (iLocal_2511 == 9)
			{
				func_352(4, "Leave the farm house", 1, 0, 0, 1);
				iLocal_3688++;
			}
			break;
	}
}

void func_352(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
		if (!unk_0x6A7B0D91FD88D9EE("FinaleC2", unk_0x6AF6B39BFDB53CB5()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_91528)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_91528)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_412(1);
		if (iParam0 <= Global_91528)
		{
		}
		iVar1 = func_410(unk_0x6AF6B39BFDB53CB5(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_101700.f_8044.f_330[iVar1 /*6*/].f_1 = 0;
			uVar2 = func_408(iVar1);
			cVar3 = { Global_82612[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_101700.f_8044.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			unk_0x7EAB099DE46EBC94(&cVar3, uVar2, Global_91528, iParam0);
		}
		else
		{
			iVar5 = func_403(unk_0x6AF6B39BFDB53CB5(), 1);
			if (iVar5 != -1)
			{
				Global_101700.f_17533[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {func_402(iVar5)}, 4);
				unk_0x7EAB099DE46EBC94(&uVar6, 0, Global_91528, iParam0);
			}
			else
			{
				iVar10 = func_401(&(Global_91491.f_3));
				if (iVar10 > -1)
				{
					Global_101700.f_23945.f_4[iVar10] = 0;
				}
			}
		}
		Global_86002 = iParam2;
		Global_91528 = iParam0;
		func_353(iParam0, sParam1, iParam4, iParam5);
		if (unk_0x6A7B0D91FD88D9EE(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_91528)
	{
	}
}

void func_353(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_354(&Global_96040, unk_0x6AF6B39BFDB53CB5(), iParam0, uParam1, iParam3, iParam2);
}

void func_354(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_43();
	uParam0->f_1 = func_390();
	unk_0x4281819BD66C66CF(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		func_377(&(uParam0->f_2305), 0);
		func_376(unk_0x17B5CC8A8615737D());
		func_370(unk_0x17B5CC8A8615737D(), 0);
		unk_0x5CD8291F2C5E0AD1(unk_0x17B5CC8A8615737D(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_101700.f_2095.f_539.f_294[iVar1];
		if (iVar1 == func_369())
		{
			func_363(unk_0x17B5CC8A8615737D(), &(uParam0->f_616[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_91281[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_91281[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_91281[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_91281[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_91281[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_91281[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_91281[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_91281[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_91281[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_91281[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/] = { Global_101700.f_2095.f_539.f_298[iVar1 /*284*/][iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] = { Global_101700.f_2095.f_539.f_298[iVar1 /*284*/].f_133[iVar0 /*3*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_101700.f_19523.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_52996[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_101700.f_2095.f_539.f_1635[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_101700.f_2095.f_539.f_1635[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2259[iVar1 /*15*/][iVar0] = Global_101700.f_2095.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2259[iVar1 /*15*/].f_5[iVar0] = Global_101700.f_2095.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2259[iVar1 /*15*/].f_10[iVar0] = Global_101700.f_2095.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_1766[iVar1 /*164*/][iVar0] = Global_101700.f_2095[iVar1 /*164*/][iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_4[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_8[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_12[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_16[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_20[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_24[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_28[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_32[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_36[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_40[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_44[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_48[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_52[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_56[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_60[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_64[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_68[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_72[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_76[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_80[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_84[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_88[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_92[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_96[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_100[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_104[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_108[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_112[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_116[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_120[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_124[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_128[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_132[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_136[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_140[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_144[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_148[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_152[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_156[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_160[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0x7FE4F330D3D74809(joaat("sp0_special_ability"), &(uParam0->f_1762[0]), -1);
	unk_0x7FE4F330D3D74809(joaat("sp1_special_ability"), &(uParam0->f_1762[1]), -1);
	unk_0x7FE4F330D3D74809(joaat("sp2_special_ability"), &(uParam0->f_1762[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_356(&(uParam0->f_2311), uParam0, iParam5, 1, 1, 0);
	}
	func_355(&(uParam0->f_2401));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_355(var uParam0)
{
	*uParam0 = Global_87673;
	uParam0->f_1 = Global_87674;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_356(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0x17B5CC8A8615737D();
	}
	if (unk_0x23E9113C762466ED(iParam2))
	{
		uParam1->f_5 = func_46(iParam2);
	}
	if (func_362(iParam2, &iVar0, iParam3, iParam5))
	{
		func_357(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0x23E9113C762466ED(iVar0))
	{
		if (!unk_0xA929B2923D14E2F8(iVar0, 0))
		{
			if (unk_0x5AF6E4F22F4B49C3(iVar0, joaat("skylift")) && unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iVar0, 0))
			{
				func_357(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_357(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0x45CD66F0A131E554(iParam2, 0))
	{
		func_359(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_358(iParam2))
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

int func_358(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_91491.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_359(var uParam0, int iParam1, int iParam2)
{
	func_281(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_361(iParam1, 145, 0);
	uParam0->f_11 = func_300(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_360(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0x57240623C1BC6E88(iParam1, 1) };
		uParam0->f_6 = unk_0x638527C9799F2AE4(iParam1);
		uParam0->f_3 = { unk_0xACA666C39EA49E82(iParam1) };
		if (unk_0x70A9F320A34FAC28(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_69436 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_360(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x23E9113C762466ED(Global_68531.f_484[iVar0]))
		{
			if (iParam0 == Global_68531.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_361(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x23E9113C762466ED(iParam0))
	{
		return 0;
	}
	if (!unk_0x45CD66F0A131E554(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x23E9113C762466ED(Global_89155[iVar0]))
		{
			if (Global_89155[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_89165[iVar0])
				{
					if (iParam2 == 0 || unk_0x0324EEB10F81965F(iParam0) == func_309(iParam1, iParam2))
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

int func_362(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (unk_0x23E9113C762466ED(iParam0))
	{
		if (!unk_0xCA41A00932714525(iParam0))
		{
			if (iParam0 == unk_0x17B5CC8A8615737D())
			{
				*uParam1 = unk_0x0C00E753D78DEA62();
			}
			else
			{
				*uParam1 = unk_0x60604E51E30D25B8(iParam0, 1);
			}
			if (unk_0x23E9113C762466ED(*uParam1))
			{
				if (unk_0x45CD66F0A131E554(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0x3DC4639D5F23DEA2(unk_0x57240623C1BC6E88(*uParam1, 1), unk_0x57240623C1BC6E88(iParam0, 1), 1) < 100f)
					{
						if (unk_0x5AF6E4F22F4B49C3(*uParam1, joaat("taxi")))
						{
							if (unk_0x17206B315923243C(*uParam1, -1, 0) != iParam0 && unk_0x17206B315923243C(*uParam1, -1, 0) != 0)
							{
								return 0;
							}
						}
						if (func_72(*uParam1, func_43(), 1))
						{
							sVar0 = unk_0x6AF6B39BFDB53CB5();
							if (!unk_0x6A7B0D91FD88D9EE(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0xFD0FE723227D5AB6(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0x44748DA5CF34DA5E(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0x12D059B73664565A(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0x5AF6E4F22F4B49C3(*uParam1, joaat("blimp")))
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

void func_363(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xCA41A00932714525(iParam0))
	{
		iVar0 = func_46(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_368(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_367(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_45(iVar0))
		{
			uParam1->f_59 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x63C468D583002D23() && unk_0x0324EEB10F81965F(iParam0) == unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()))
		{
			if (func_366(161, -1))
			{
				uParam1->f_59 = func_364(2045, Global_69521, 0);
			}
			else
			{
				uParam1->f_59 = func_364(747, Global_69521, 0);
			}
			uParam1->f_60 = func_364(748, Global_69521, 0);
			uParam1->f_61 = func_364(749, Global_69521, 0);
		}
		if (unk_0x63C468D583002D23() && iParam0 == unk_0x17B5CC8A8615737D())
		{
			if (func_366(161, -1))
			{
				uParam1->f_59 = func_364(2045, Global_69521, 0);
			}
			else
			{
				uParam1->f_59 = func_364(747, Global_69521, 0);
			}
		}
	}
}

int func_364(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2503826[iParam0 /*3*/][func_365(iParam1)];
	if (unk_0x7FE4F330D3D74809(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_365(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_190();
		if (iVar1 > -1)
		{
			Global_2503539 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2503539 = 1;
		}
	}
	return iVar0;
}

int func_366(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2522581[iParam0 /*3*/][func_365(iParam1)];
	if (unk_0x70BD7CFD9F825957(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_367(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_46(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xB50239D338267F95(iParam0, iParam1);
		*uParam3 = unk_0xBE372F0FD574ACB1(iParam0, iParam1);
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
				if (unk_0x697A7F59AC98FE0F(iParam0) && unk_0x5FC915A947F19410(iParam0) != -1)
				{
					*uParam2 = unk_0x5FC915A947F19410(iParam0);
					*uParam3 = unk_0x9015F42528E39793(iParam0);
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

void func_368(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_46(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xC72E4A160D2D5004(iParam0, iParam1);
		*uParam3 = unk_0x9E9290608A6EFB37(iParam0, iParam1);
		*uParam4 = unk_0x15D0CB3C99F0F8B0(iParam0, iParam1);
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

int func_369()
{
	func_44();
	return Global_101700.f_2095.f_539.f_3549;
}

void func_370(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_46(iParam0);
	if (func_45(iVar0) && !unk_0xCA41A00932714525(iParam0))
	{
		if (iParam0 == unk_0x17B5CC8A8615737D())
		{
			func_371(iParam0, &(Global_101700.f_2095.f_539.f_298[iVar0 /*284*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_101700.f_2095.f_539.f_1151[iVar2 /*4*/][iVar0] = unk_0xB41415484B2631D9(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0x819A98CCFE5FACD6();
					if (Global_101700.f_2095.f_539.f_1151[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_101700.f_2095.f_539.f_1184 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0xD8B4ACC0B5F2BA05(unk_0xBE369BE1BC57A796(), &uVar3);
			if (iVar0 == 0)
			{
				unk_0x731753D8494ABECD(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0x731753D8494ABECD(joaat("sp1_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0x731753D8494ABECD(joaat("sp2_parachute_current_tint"), uVar3, 1);
			}
		}
	}
}

void func_371(int iParam0, var uParam1)
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
	
	if (!unk_0xCA41A00932714525(iParam0))
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
			iVar3 = func_375(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = unk_0x937B062731EC9E7B(iParam0, func_375(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x034EB52F6D89BFA0(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					unk_0xEB79FECD9022AAF0(&(Var4.f_2), (20 + unk_0x56D81513B2CCEDD3(iParam0, Var4.f_0)));
					if (Var4.f_1 == -1)
					{
						if (!unk_0xEC52867E1145BD99(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*3*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_373(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0xF848952075C9EC8A(iParam0, Var4.f_0, iVar2))
						{
							unk_0xEB79FECD9022AAF0(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_373(Var4.f_0, iVar1);
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
		iVar8 = unk_0xDD29471727F67A12();
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if ((unk_0x7DF39E88C502C09C(iVar7, &Var9) && !func_372(Var9.f_1)) && iVar70 < 50)
			{
				if (!unk_0x5D46F50AE982AB28(Var9.f_0))
				{
					Var4.f_0 = Var9.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_1 = unk_0x034EB52F6D89BFA0(iParam0, Var4.f_0);
					if (unk_0x509A3191A6C4EB38(iParam0, Var4.f_0, 0))
					{
						unk_0xEB79FECD9022AAF0(&(Var4.f_2), (20 + unk_0x56D81513B2CCEDD3(iParam0, Var4.f_0)));
					}
					else
					{
						unk_0xEB79FECD9022AAF0(&(Var4.f_2), 20);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0xEC52867E1145BD99(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_133[iVar70 /*3*/].f_1 = Var4.f_1;
					iVar1 = 0;
					while (iVar1 < unk_0x7DCA7EA2B13F77EF(iVar7))
					{
						if (unk_0x94C9039E2251B8A8(iVar7, iVar1, &Var48))
						{
							if (unk_0xF848952075C9EC8A(iParam0, Var4.f_0, Var48.f_3))
							{
								unk_0xEB79FECD9022AAF0(&(Var4.f_2), iVar1);
							}
						}
						iVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0x509A3191A6C4EB38(iParam0, Var4.f_0, 0))
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

int func_372(int iParam0)
{
	if (unk_0x63C468D583002D23())
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
				return 1;
				break;
			}
	}
	return 0;
}

int func_373(int iParam0, int iParam1)
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
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
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
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 7:
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
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 8:
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
				
				case 4:
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
				iVar1 = func_374(iParam0, &uVar2);
				if (iVar1 != -1)
				{
					if (iParam1 < unk_0x7DCA7EA2B13F77EF(iVar1))
					{
						if (unk_0x94C9039E2251B8A8(iVar1, iParam1, &Var41))
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

int func_374(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0xDD29471727F67A12();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x7DF39E88C502C09C(iVar0, uParam1))
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

int func_375(int iParam0)
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

void func_376(int iParam0)
{
	int iVar0;
	
	iVar0 = func_46(iParam0);
	if (func_45(iVar0) && !unk_0xCA41A00932714525(iParam0))
	{
		Global_101700.f_2095.f_539.f_294[iVar0] = unk_0x55C72967EFB9CECF(iParam0);
	}
}

void func_377(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	
	*uParam0 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
	uParam0->f_3 = unk_0x638527C9799F2AE4(unk_0x17B5CC8A8615737D());
	uParam0->f_5 = unk_0xD4337557D3DEFC11(unk_0x17B5CC8A8615737D());
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		uParam0->f_4 = unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796());
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
	else if (unk_0x82F1A060D8F4583B(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (unk_0x48B8265059381CD0(Global_69950, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (unk_0x48B8265059381CD0(Global_69950, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (unk_0x48B8265059381CD0(Global_69950, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (unk_0x48B8265059381CD0(Global_69950, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0xF34287B610CF02CA(unk_0x17B5CC8A8615737D()) == unk_0xCA0D2B42E97CB506(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0))
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
		if (func_380(&iVar0))
		{
			if (func_379(iVar0, &Var1, &uVar4))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
		{
			iVar5 = func_43();
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
		else if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_378(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_378(struct<3> Param0, char* sParam3, struct<3> Param4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xB0A41EC77A49B189(Param0))
	{
		iVar0 = unk_0xCA0D2B42E97CB506(Param4, sParam3);
		if (!unk_0x623BDE1B17A9D9E3(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x26CBF9EAAC681B92(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_379(int iParam0, var uParam1, var uParam2)
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
	}
	return !func_162(*uParam1, 0f, 0f, 0f, 0);
}

int func_380(var uParam0)
{
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0) && !unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		if (func_34())
		{
			*uParam0 = func_385(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 0), 6, -1, 0, 1, -1);
			if (func_384(*uParam0) && !func_381(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_381(int iParam0)
{
	return func_382(iParam0, 0, 1);
}

int func_382(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x48B8265059381CD0(Global_91543.f_1308[iParam0], iParam1);
	}
	else if (unk_0x63C468D583002D23())
	{
		if (func_25() == 0)
		{
			return unk_0x48B8265059381CD0(func_364(func_383(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x48B8265059381CD0(Global_101700.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_383(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 822;
			break;
		
		case 1:
			return 823;
			break;
		
		case 2:
			return 824;
			break;
		
		case 3:
			return 825;
			break;
		
		case 4:
			return 826;
			break;
		
		case 5:
			return 827;
			break;
		
		case 6:
			return 828;
			break;
		
		case 7:
			return 829;
			break;
		
		case 8:
			return 830;
			break;
		
		case 9:
			return 831;
			break;
		
		case 10:
			return 832;
			break;
		
		case 11:
			return 833;
			break;
		
		case 12:
			return 834;
			break;
		
		case 13:
			return 835;
			break;
		
		case 14:
			return 836;
			break;
		
		case 15:
			return 838;
			break;
		
		case 16:
			return 839;
			break;
		
		case 17:
			return 840;
			break;
		
		case 18:
			return 841;
			break;
		
		case 19:
			return 842;
			break;
		
		case 20:
			return 843;
			break;
		
		case 21:
			return 844;
			break;
		
		case 22:
			return 845;
			break;
		
		case 23:
			return 846;
			break;
		
		case 24:
			return 847;
			break;
		
		case 25:
			return 848;
			break;
		
		case 26:
			return 849;
			break;
		
		case 27:
			return 850;
			break;
		
		case 28:
			return 851;
			break;
		
		case 29:
			return 852;
			break;
		
		case 30:
			return 853;
			break;
		
		case 31:
			return 854;
			break;
		
		case 32:
			return 855;
			break;
		
		case 33:
			return 856;
			break;
		
		case 34:
			return 857;
			break;
		
		case 35:
			return 858;
			break;
		
		case 36:
			return 859;
			break;
		
		case 37:
			return 860;
			break;
		
		case 38:
			return 861;
			break;
		
		case 39:
			return 862;
			break;
		
		case 40:
			return 866;
			break;
		
		case 41:
			return 867;
			break;
		
		case 42:
			return 868;
			break;
		
		case 43:
			return 869;
			break;
		
		case 44:
			return 5847;
			break;
		
		case 45:
			return 3780;
			break;
		
		default:
			break;
	}
	return 6022;
}

int func_384(int iParam0)
{
	return func_382(iParam0, 5, 1);
}

int func_385(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 45)
	{
		if (iParam3 == 6 || iParam3 == func_389(iVar0))
		{
			if (!bParam5 || func_388(iVar0))
			{
				fVar1 = unk_0x3DC4639D5F23DEA2(Param0, func_386(iVar0, 0), 1);
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

Vector3 func_386(int iParam0, bool bParam1)
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
			return func_387(Global_93004);
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

Vector3 func_387(int iParam0)
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
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_388(int iParam0)
{
	return func_382(iParam0, 0, 0);
}

int func_389(int iParam0)
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
	}
	return 6;
}

var func_390()
{
	var uVar0;
	
	func_400(&uVar0, unk_0x0956E4296D9CC40A());
	func_399(&uVar0, unk_0x32883EAC7DC86C40());
	func_398(&uVar0, unk_0x80BC37C67CB292E5());
	func_393(&uVar0, unk_0x202B089E6328ABFA());
	func_392(&uVar0, unk_0xCD8338A83E1BCC14());
	func_391(&uVar0, unk_0x1BBFD9409EC2598C());
	return uVar0;
}

void func_391(var uParam0, int iParam1)
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

void func_392(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_393(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_397(*uParam0);
	iVar1 = func_395(*uParam0);
	if (iParam1 < 1 || iParam1 > func_394(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_394(int iParam0, int iParam1)
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

var func_395(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_396(unk_0x48B8265059381CD0(iParam0, 31), -1, 1)) + 2011;
}

int func_396(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_397(var uParam0)
{
	return uParam0 & 15;
}

void func_398(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_399(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_400(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_401(char* sParam0)
{
	if (unk_0x6A7B0D91FD88D9EE("BailBond1", sParam0))
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

struct<2> func_402(int iParam0)
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

int func_403(char* sParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = unk_0x765F5B806B517045(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_404(iVar0, &sVar1);
		if (unk_0x765F5B806B517045(sVar1) == iVar33)
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

void func_404(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_405(uParam1, "Abigail1", func_407(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_406(iParam0), 1, 0);
			break;
		
		case 1:
			func_405(uParam1, "Abigail2", func_407(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_406(iParam0), 1, 0);
			break;
		
		case 2:
			func_405(uParam1, "Barry1", func_407(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_406(iParam0), 1, 0);
			break;
		
		case 3:
			func_405(uParam1, "Barry2", func_407(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_406(iParam0), 1, 1);
			break;
		
		case 4:
			func_405(uParam1, "Barry3", func_407(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_406(iParam0), 0, 0);
			break;
		
		case 5:
			func_405(uParam1, "Barry3A", func_407(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_406(iParam0), 0, 1);
			break;
		
		case 6:
			func_405(uParam1, "Barry3C", func_407(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_406(iParam0), 0, 1);
			break;
		
		case 7:
			func_405(uParam1, "Barry4", func_407(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_406(iParam0), 0, 0);
			break;
		
		case 8:
			func_405(uParam1, "Dreyfuss1", func_407(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_406(iParam0), 0, 0);
			break;
		
		case 9:
			func_405(uParam1, "Epsilon1", func_407(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_406(iParam0), 0, 0);
			break;
		
		case 10:
			func_405(uParam1, "Epsilon2", func_407(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_406(iParam0), 1, 0);
			break;
		
		case 11:
			func_405(uParam1, "Epsilon3", func_407(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_406(iParam0), 0, 0);
			break;
		
		case 12:
			func_405(uParam1, "Epsilon4", func_407(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_406(iParam0), 0, 0);
			break;
		
		case 13:
			func_405(uParam1, "Epsilon5", func_407(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_406(iParam0), 1, 0);
			break;
		
		case 14:
			func_405(uParam1, "Epsilon6", func_407(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_406(iParam0), 0, 1);
			break;
		
		case 15:
			func_405(uParam1, "Epsilon7", func_407(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_406(iParam0), 0, 0);
			break;
		
		case 16:
			func_405(uParam1, "Epsilon8", func_407(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_406(iParam0), 1, 0);
			break;
		
		case 17:
			func_405(uParam1, "Extreme1", func_407(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_406(iParam0), 0, 1);
			break;
		
		case 18:
			func_405(uParam1, "Extreme2", func_407(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_406(iParam0), 0, 1);
			break;
		
		case 19:
			func_405(uParam1, "Extreme3", func_407(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_406(iParam0), 0, 1);
			break;
		
		case 20:
			func_405(uParam1, "Extreme4", func_407(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_406(iParam0), 0, 0);
			break;
		
		case 21:
			func_405(uParam1, "Fanatic1", func_407(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_406(iParam0), 1, 0);
			break;
		
		case 22:
			func_405(uParam1, "Fanatic2", func_407(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_406(iParam0), 1, 0);
			break;
		
		case 23:
			func_405(uParam1, "Fanatic3", func_407(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_406(iParam0), 0, 1);
			break;
		
		case 24:
			func_405(uParam1, "Hao1", func_407(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_406(iParam0), 0, 1);
			break;
		
		case 25:
			func_405(uParam1, "Hunting1", func_407(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_406(iParam0), 0, 1);
			break;
		
		case 26:
			func_405(uParam1, "Hunting2", func_407(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_406(iParam0), 0, 1);
			break;
		
		case 27:
			func_405(uParam1, "Josh1", func_407(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_406(iParam0), 1, 0);
			break;
		
		case 28:
			func_405(uParam1, "Josh2", func_407(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_406(iParam0), 1, 1);
			break;
		
		case 29:
			func_405(uParam1, "Josh3", func_407(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_406(iParam0), 1, 1);
			break;
		
		case 30:
			func_405(uParam1, "Josh4", func_407(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_406(iParam0), 1, 0);
			break;
		
		case 31:
			func_405(uParam1, "Maude1", func_407(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_406(iParam0), 0, 1);
			break;
		
		case 32:
			func_405(uParam1, "Minute1", func_407(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_406(iParam0), 0, 1);
			break;
		
		case 33:
			func_405(uParam1, "Minute2", func_407(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_406(iParam0), 0, 1);
			break;
		
		case 34:
			func_405(uParam1, "Minute3", func_407(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_406(iParam0), 0, 1);
			break;
		
		case 35:
			func_405(uParam1, "MrsPhilips1", func_407(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_406(iParam0), 0, 0);
			break;
		
		case 36:
			func_405(uParam1, "MrsPhilips2", func_407(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_406(iParam0), 0, 0);
			break;
		
		case 37:
			func_405(uParam1, "Nigel1", func_407(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_406(iParam0), 1, 0);
			break;
		
		case 38:
			func_405(uParam1, "Nigel1A", func_407(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_406(iParam0), 1, 1);
			break;
		
		case 39:
			func_405(uParam1, "Nigel1B", func_407(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_406(iParam0), 1, 1);
			break;
		
		case 40:
			func_405(uParam1, "Nigel1C", func_407(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_406(iParam0), 1, 1);
			break;
		
		case 41:
			func_405(uParam1, "Nigel1D", func_407(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_406(iParam0), 1, 1);
			break;
		
		case 42:
			func_405(uParam1, "Nigel2", func_407(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_406(iParam0), 1, 1);
			break;
		
		case 43:
			func_405(uParam1, "Nigel3", func_407(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_406(iParam0), 1, 1);
			break;
		
		case 44:
			func_405(uParam1, "Omega1", func_407(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_406(iParam0), 0, 0);
			break;
		
		case 45:
			func_405(uParam1, "Omega2", func_407(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_406(iParam0), 0, 0);
			break;
		
		case 46:
			func_405(uParam1, "Paparazzo1", func_407(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_406(iParam0), 0, 1);
			break;
		
		case 47:
			func_405(uParam1, "Paparazzo2", func_407(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_406(iParam0), 0, 1);
			break;
		
		case 48:
			func_405(uParam1, "Paparazzo3", func_407(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_406(iParam0), 0, 0);
			break;
		
		case 49:
			func_405(uParam1, "Paparazzo3A", func_407(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_406(iParam0), 0, 1);
			break;
		
		case 50:
			func_405(uParam1, "Paparazzo3B", func_407(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_406(iParam0), 0, 1);
			break;
		
		case 51:
			func_405(uParam1, "Paparazzo4", func_407(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_406(iParam0), 0, 0);
			break;
		
		case 52:
			func_405(uParam1, "Rampage1", func_407(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_406(iParam0), 0, 0);
			break;
		
		case 54:
			func_405(uParam1, "Rampage3", func_407(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_406(iParam0), 1, 0);
			break;
		
		case 55:
			func_405(uParam1, "Rampage4", func_407(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_406(iParam0), 1, 0);
			break;
		
		case 56:
			func_405(uParam1, "Rampage5", func_407(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_406(iParam0), 0, 0);
			break;
		
		case 53:
			func_405(uParam1, "Rampage2", func_407(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_406(iParam0), 1, 0);
			break;
		
		case 57:
			func_405(uParam1, "TheLastOne", func_407(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_406(iParam0), 0, 1);
			break;
		
		case 58:
			func_405(uParam1, "Tonya1", func_407(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_406(iParam0), 0, 1);
			break;
		
		case 59:
			func_405(uParam1, "Tonya2", func_407(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_406(iParam0), 0, 1);
			break;
		
		case 60:
			func_405(uParam1, "Tonya3", func_407(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_406(iParam0), 0, 1);
			break;
		
		case 61:
			func_405(uParam1, "Tonya4", func_407(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_406(iParam0), 0, 1);
			break;
		
		case 62:
			func_405(uParam1, "Tonya5", func_407(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_406(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_405(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_406(int iParam0)
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

struct<2> func_407(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_402(iParam0) };
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

int func_408(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_409(Global_101700.f_8044.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_409(Global_101700.f_8044.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_409(Global_101700.f_8044.f_99.f_205[11]);
			break;
		
		case 90:
			return func_409(Global_101700.f_8044.f_99.f_205[7]);
			break;
		
		case 93:
			return func_409(Global_101700.f_8044.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_409(int iParam0)
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

int func_410(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x765F5B806B517045(sParam0);
	iVar1 = func_411(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_411(int iParam0, bool bParam1)
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

void func_412(bool bParam0)
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

void func_413(int iParam0)
{
	func_342(iParam0);
	unk_0xBFF7E87106CE7475(1);
	unk_0xF076395049E32F0C();
	unk_0x000E46314C3A507F(1f);
	unk_0x6751FA44D6CA586D(5);
	unk_0xFCBD7340FBF1FE46(3, 1);
	func_205(0);
	func_88();
	unk_0xD12BCC85C2F8B1DE();
	if (unk_0x33CB7E3A2B3E527C(iLocal_2510))
	{
		unk_0xE73D1B19D9500603(iLocal_2510);
	}
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		unk_0x9CA872E9BF4DF131(unk_0x17B5CC8A8615737D(), joaat("weapon_petrolcan"));
		unk_0x15848523A8959DBC(unk_0x17B5CC8A8615737D());
	}
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		if (unk_0xF34287B610CF02CA(unk_0x17B5CC8A8615737D()) != 0)
		{
			if (func_67(unk_0x17B5CC8A8615737D(), 2444.098f, 4977.795f, 48.9959f, 1) < 100f)
			{
				unk_0x5DC8C2F2F8A363C2(unk_0x17B5CC8A8615737D(), 2463.811f, 4961.747f, 44.176f, 1, 0, 0, 1);
				unk_0x0608D50823C6AA6D(unk_0x17B5CC8A8615737D(), 20f);
			}
		}
	}
	if (iParam0 == 1 || iParam0 == 2)
	{
		func_19(50, 0, 0, 1, 0);
		func_19(51, 0, 0, 1, 0);
		func_19(52, 0, 0, 1, 0);
		func_19(53, 0, 0, 1, 0);
		func_19(54, 0, 0, 1, 0);
		func_19(55, 0, 0, 1, 0);
	}
	unk_0x921053BAF754303D();
}

void func_414()
{
	int iVar0;
	
	if (unk_0x32B1F051FF487881("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_101700.f_8044 || func_141(0))
	{
		if (!func_415())
		{
			iVar0 = func_140();
			if (iVar0 != -1)
			{
				if (!func_134(iVar0))
				{
					return;
				}
				unk_0xEB79FECD9022AAF0(&(Global_82576[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_139();
		}
	}
}

int func_415()
{
	if (((Global_91491 == 13 || Global_91491 == 10) || Global_91491 == 11) || Global_91491 == 12)
	{
		return 0;
	}
	return 1;
}

