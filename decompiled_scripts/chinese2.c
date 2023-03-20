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
	uLocal_49 = unk_0xCFFCC3E6689F1F45();
	uLocal_50 = unk_0xA655262EB9B9A8C4();
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
	unk_0x5B0FC38A6C315E32(1);
	if (unk_0x24862A9CDC8F8874(3))
	{
		func_409();
		func_408(2);
	}
	fLocal_750 = 160f;
	while (true)
	{
		if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
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
			unk_0xBB5777EE55D3B041("m_Chinese2", 0);
		}
		iLocal_3687 = 0;
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	if (iLocal_3505)
	{
		if (unk_0x7E76461B9677E81C(iLocal_3504))
		{
			unk_0xF25AF9F8042D7158(iLocal_3504);
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
			if (unk_0xE685497EA92333FF(sLocal_3509))
			{
				if (unk_0x233432976E597324(sLocal_3509))
				{
					iLocal_3506 = 0;
					iLocal_3507 = 0;
					return 1;
				}
			}
		}
		else if (unk_0x233432976E597324(sLocal_3509))
		{
			iLocal_3506 = 0;
			return 1;
		}
	}
	else if (iLocal_3508)
	{
		if (unk_0xE685497EA92333FF(sLocal_3510))
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
							if (unk_0x308528B5CF35F306())
							{
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 1:
							func_69(1992.804f, 3053.31f, 45.77715f, 1989.681f, 3055.295f, 49.09001f, 3.25f, 1995.202f, 3062.156f, 46.0491f, 59.7235f, 10f, 20f, 9f, 1, 1, 1, 0, 0);
							func_69(1994.427f, 3045.136f, 45.34013f, 1981.903f, 3053.235f, 49.79153f, 9.5f, 1995.202f, 3062.156f, 46.0491f, 59.7235f, 10f, 20f, 9f, 1, 1, 1, 0, 0);
							func_69(1985.404f, 3075.057f, 44.84953f, 2017.102f, 3057.435f, 53.71896f, 33f, 1995.202f, 3062.156f, 46.0491f, 59.7235f, 10f, 20f, 9f, 1, 1, 1, 0, 0);
							iLocal_2506 = unk_0x974516F979AD07BC();
							if (func_68(iLocal_2506) && func_67(iLocal_2506, 1995.202f, 3062.156f, 46.0491f, 1) < 5f)
							{
								unk_0x2395C2755BB76137(unk_0x6D5BB810CC209E15(iLocal_2506), 3);
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
							if (func_67(unk_0xC8B93D94F8954288(), 2442.55f, 4967.51f, 54.35f, 1) < 1300f || func_63(39))
							{
								if (func_67(unk_0xC8B93D94F8954288(), 2442.55f, 4967.51f, 54.35f, 1) > 500f)
								{
									Local_2515[iVar0 /*6*/].f_2++;
								}
							}
							break;
						
						case 1:
							if (func_60("PHN2", 1, unk_0xC8B93D94F8954288(), "Trevor", 8, 0, "ONEIL", -1, 0, 0))
							{
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							if (!func_59())
							{
								if (func_35("CHI2_ONEILPH", 1, unk_0xC8B93D94F8954288(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
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
							if (func_35("CHI2_boom", 1, unk_0xC8B93D94F8954288(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_2515[iVar0 /*6*/].f_2++;
							}
							iLocal_2888 = 0;
							Local_2515[iVar0 /*6*/].f_5 = unk_0x693EBB4F13506457() + 3000;
							break;
						
						case 1:
							if (!func_59())
							{
								if (!func_34())
								{
									if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
									{
										if (unk_0x693EBB4F13506457() > Local_2515[iVar0 /*6*/].f_5)
										{
											if (iLocal_2888 < 13)
											{
												if (func_35("DRI1", 2, unk_0xC8B93D94F8954288(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
												{
													iLocal_2888++;
													Local_2515[iVar0 /*6*/].f_5 = (unk_0x693EBB4F13506457() + unk_0x531444754C426278(4000, 10000));
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
					if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
					{
						uVar1 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
						if (!unk_0x25011B7D08ACD328(uVar1))
						{
							if (func_33(6f, 2))
							{
								unk_0xE5F6BE3F8E937ACE(unk_0xC8B93D94F8954288(), 0, 0);
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
							if (unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 2460.073f, 4964.176f, 46.2405f, 1) < 250f)
							{
								unk_0x7567CEA8E6B5340B(joaat("a_m_m_hillbilly_01"));
								unk_0x7567CEA8E6B5340B(joaat("prop_pallet_pile_01"));
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -19:
							if (unk_0x0845149A26DABBA5(joaat("a_m_m_hillbilly_01")) && unk_0x0845149A26DABBA5(joaat("prop_pallet_pile_01")))
							{
								unk_0x7567CEA8E6B5340B(joaat("a_m_m_hillbilly_02"));
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -18:
							if (unk_0x0845149A26DABBA5(joaat("a_m_m_hillbilly_02")))
							{
								unk_0x7567CEA8E6B5340B(joaat("burrito"));
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -17:
							if (unk_0x0845149A26DABBA5(joaat("burrito")))
							{
								unk_0x7567CEA8E6B5340B(joaat("a_m_y_methhead_01"));
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -16:
							if (unk_0x0845149A26DABBA5(joaat("a_m_y_methhead_01")))
							{
								unk_0x7567CEA8E6B5340B(joaat("prop_ld_can_01"));
								unk_0x7567CEA8E6B5340B(joaat("prop_cs_fertilizer"));
								unk_0x7567CEA8E6B5340B(joaat("prop_cs_beer_bot_01"));
								unk_0x7567CEA8E6B5340B(joaat("prop_phone_ing"));
								unk_0x7567CEA8E6B5340B(joaat("dubsta"));
								unk_0xC0E8B67A4385D37D("misschinese2_bank5");
								unk_0xC0E8B67A4385D37D("misschinese2_bank1");
								unk_0xC0E8B67A4385D37D("reaction@male_stand@big_variations@b");
								unk_0xC0E8B67A4385D37D("reaction@male_stand@big_intro@left");
								unk_0xC0E8B67A4385D37D("reaction@male_stand@big_intro@right");
								unk_0xC0E8B67A4385D37D("reaction@male_stand@big_intro@backward");
								unk_0xC0E8B67A4385D37D("misschinese2_barrelRoll");
								unk_0x2A06B47BBED4FB70("move_m@gangster@var_e");
								unk_0x2A06B47BBED4FB70("move_m@gangster@var_f");
								unk_0x2A06B47BBED4FB70("move_m@gangster@generic");
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -15:
							if (unk_0x0845149A26DABBA5(joaat("dubsta")))
							{
								func_32(22, 0);
								func_32(8, 0);
								unk_0xB7A03E3BBB19D493(Vector(44.8113f, 4961.045f, 2469.985f) - Vector(100f, 100f, 100f), Vector(44.8113f, 4961.045f, 2469.985f) + Vector(100f, 100f, 100f), 0, 1);
								Local_2515[iVar0 /*6*/].f_2 = 1;
							}
							break;
						
						case 0:
							if (unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 2460.073f, 4964.176f, 46.2405f, 1) < 250f)
							{
								unk_0x7567CEA8E6B5340B(joaat("a_m_m_hillbilly_01"));
								unk_0x7567CEA8E6B5340B(joaat("a_m_m_hillbilly_02"));
								unk_0x7567CEA8E6B5340B(joaat("a_m_y_methhead_01"));
								unk_0x7567CEA8E6B5340B(joaat("prop_ld_can_01"));
								unk_0x7567CEA8E6B5340B(joaat("prop_cs_fertilizer"));
								unk_0x7567CEA8E6B5340B(joaat("burrito"));
								unk_0x7567CEA8E6B5340B(joaat("prop_cs_beer_bot_01"));
								if (iLocal_2511 <= 3)
								{
									unk_0x7567CEA8E6B5340B(joaat("prop_phone_ing"));
									unk_0x7567CEA8E6B5340B(joaat("dubsta"));
								}
								unk_0xC0E8B67A4385D37D("misschinese2_bank5");
								unk_0xC0E8B67A4385D37D("misschinese2_bank1");
								unk_0xC0E8B67A4385D37D("reaction@male_stand@big_variations@b");
								unk_0xC0E8B67A4385D37D("reaction@male_stand@big_intro@left");
								unk_0xC0E8B67A4385D37D("reaction@male_stand@big_intro@right");
								unk_0xC0E8B67A4385D37D("reaction@male_stand@big_intro@backward");
								unk_0xC0E8B67A4385D37D("misschinese2_barrelRoll");
								unk_0x2A06B47BBED4FB70("move_m@gangster@var_e");
								unk_0x2A06B47BBED4FB70("move_m@gangster@var_f");
								unk_0x2A06B47BBED4FB70("move_m@gangster@generic");
								func_32(22, 0);
								func_32(8, 0);
								unk_0xB7A03E3BBB19D493(Vector(44.8113f, 4961.045f, 2469.985f) - Vector(100f, 100f, 100f), Vector(44.8113f, 4961.045f, 2469.985f) + Vector(100f, 100f, 100f), 0, 1);
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 1:
							if (((((((((((((((unk_0x0845149A26DABBA5(joaat("a_m_m_hillbilly_01")) && unk_0x0845149A26DABBA5(joaat("a_m_m_hillbilly_02"))) && unk_0x0845149A26DABBA5(joaat("a_m_y_methhead_01"))) && unk_0x0845149A26DABBA5(joaat("burrito"))) && unk_0x0845149A26DABBA5(joaat("prop_cs_fertilizer"))) && unk_0x0845149A26DABBA5(joaat("prop_cs_beer_bot_01"))) && unk_0x0845149A26DABBA5(joaat("prop_ld_can_01"))) && unk_0xF9B86DC1728F1339("misschinese2_bank5")) && unk_0xF9B86DC1728F1339("misschinese2_bank1")) && unk_0xF9B86DC1728F1339("misschinese2_barrelRoll")) && unk_0xF9B86DC1728F1339("reaction@male_stand@big_variations@b")) && unk_0xF9B86DC1728F1339("reaction@male_stand@big_intro@left")) && unk_0xF9B86DC1728F1339("reaction@male_stand@big_intro@right")) && unk_0xF9B86DC1728F1339("reaction@male_stand@big_intro@backward")) && ((iLocal_2511 <= 3 && unk_0x0845149A26DABBA5(joaat("prop_phone_ing"))) || iLocal_2511 > 3)) && ((iLocal_2511 <= 3 && unk_0x0845149A26DABBA5(joaat("dubsta"))) || iLocal_2511 > 3))
							{
								Local_2515[iVar0 /*6*/].f_2 = 4;
							}
							if (unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 2460.073f, 4964.176f, 46.2405f, 1) > 300f)
							{
								unk_0x4BBD72565A0AF033(joaat("a_m_m_hillbilly_01"));
								unk_0x4BBD72565A0AF033(joaat("a_m_m_hillbilly_02"));
								unk_0x4BBD72565A0AF033(joaat("a_m_y_methhead_01"));
								unk_0x4BBD72565A0AF033(joaat("burrito"));
								unk_0x4BBD72565A0AF033(joaat("prop_cs_fertilizer"));
								unk_0x4BBD72565A0AF033(joaat("prop_cs_beer_bot_01"));
								unk_0x4BBD72565A0AF033(joaat("prop_ld_can_01"));
								unk_0x3ECF1E41E6ED71D8("misschinese2_bank5");
								unk_0x3ECF1E41E6ED71D8("misschinese2_bank1");
								unk_0x3ECF1E41E6ED71D8("reaction@male_stand@big_variations@b");
								unk_0x3ECF1E41E6ED71D8("reaction@male_stand@big_intro@left");
								unk_0x3ECF1E41E6ED71D8("reaction@male_stand@big_intro@right");
								unk_0x3ECF1E41E6ED71D8("reaction@male_stand@big_intro@backward");
								unk_0x3ECF1E41E6ED71D8("misschinese2_barrelRoll");
								unk_0xA6045DDE5A17C533("move_m@gangster@var_e");
								unk_0xA6045DDE5A17C533("move_m@gangster@var_f");
								unk_0xA6045DDE5A17C533("move_m@gangster@generic");
								unk_0x4BBD72565A0AF033(joaat("prop_phone_ing"));
								unk_0x4BBD72565A0AF033(joaat("dubsta"));
								unk_0xB7A03E3BBB19D493(Vector(44.8113f, 4961.045f, 2469.985f) - Vector(100f, 100f, 100f), Vector(44.8113f, 4961.045f, 2469.985f) + Vector(100f, 100f, 100f), 1, 1);
								func_31(22, 1);
								func_31(8, 1);
								if (iLocal_2678 != 0)
								{
									unk_0xBB2FAA651AEDFE3A(iLocal_2678);
									iLocal_2678 = 0;
								}
								Local_2515[iVar0 /*6*/].f_2 = -20;
							}
							break;
						
						case 4:
							if (unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 2460.073f, 4964.176f, 46.2405f, 1) > 300f)
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
								unk_0xBB2FAA651AEDFE3A(iLocal_2678);
							}
							iLocal_2678 = 0;
							break;
						
						case 0:
							iLocal_2678 = unk_0x2F748CE5313AA2BB(2440.492f, 4969.948f, 52.5247f);
							Local_2515[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (!unk_0x8F89BA1339F45476(iLocal_2678))
							{
								iLocal_2678 = unk_0x2F748CE5313AA2BB(2440.492f, 4969.948f, 52.5247f);
							}
							else
							{
								unk_0xF25AF9F8042D7158(iLocal_2678);
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
							if (!unk_0x2DC9BA2299B45EA6(Local_755[iVar2 /*33*/]))
							{
								if (unk_0x090C65D5190A249D(Local_755[iVar2 /*33*/], 1785177548) == 7)
								{
									iVar2 = func_18(9);
									if (iVar2 != -1)
									{
										if (!unk_0x2DC9BA2299B45EA6(Local_755[iVar2 /*33*/]))
										{
											if (unk_0x090C65D5190A249D(Local_755[iVar2 /*33*/], 1785177548) == 7)
											{
												unk_0x3ECF1E41E6ED71D8("misschinese2_bank5");
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
									if (!unk_0x2DC9BA2299B45EA6(Local_755[iVar2 /*33*/]))
									{
										if (unk_0x090C65D5190A249D(Local_755[iVar2 /*33*/], 1785177548) == 7)
										{
											unk_0x3ECF1E41E6ED71D8("misschinese2_bank5");
											Local_2515[iVar0 /*6*/].f_1 = 0;
										}
									}
									else
									{
										unk_0x3ECF1E41E6ED71D8("misschinese2_bank5");
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
							unk_0x80D8D1CE9B26E9A3();
							break;
						
						case 0:
							unk_0x8738B068D97CDC64(Vector(58.6179f, 4972.897f, 2445.654f) - Vector(100f, 100f, 100f), Vector(58.6179f, 4972.897f, 2445.654f) + Vector(100f, 100f, 100f), 0, 1, 1, 1);
							Local_2515[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
							{
								if (unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), 2473.061f, 4981.482f, 24.64584f, 1) < 250f)
								{
									Local_2515[iVar0 /*6*/].f_2++;
								}
							}
							break;
						
						case 2:
							unk_0x118BEBAD0FFAE652(0f);
							unk_0x4E1A302FE77F5B7A(0f);
							unk_0xB26E3BEE0F4DB947(0f, 0f);
							if (unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), 2473.061f, 4981.482f, 24.64584f, 1) > 250f)
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
							unk_0x21F5FB3C8D48F7F5(3, 1);
							unk_0x21F5FB3C8D48F7F5(5, 1);
							unk_0x21F5FB3C8D48F7F5(1, 1);
							unk_0x21F5FB3C8D48F7F5(7, 1);
							break;
						
						case 0:
							if (func_67(unk_0xC8B93D94F8954288(), 2578.523f, 4982.284f, 51.4416f, 1) < 500f)
							{
								unk_0x21F5FB3C8D48F7F5(3, 0);
								unk_0x21F5FB3C8D48F7F5(5, 0);
								unk_0x21F5FB3C8D48F7F5(1, 0);
								unk_0x21F5FB3C8D48F7F5(7, 0);
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 1:
							if (func_67(unk_0xC8B93D94F8954288(), 2578.523f, 4982.284f, 51.4416f, 1) > 500f)
							{
								unk_0x21F5FB3C8D48F7F5(3, 1);
								unk_0x21F5FB3C8D48F7F5(5, 1);
								unk_0x21F5FB3C8D48F7F5(1, 1);
								unk_0x21F5FB3C8D48F7F5(7, 1);
								Local_2515[iVar0 /*6*/].f_2 = 0;
							}
							break;
					}
					break;
				
				case 25:
					switch (Local_2515[iVar0 /*6*/].f_2)
					{
						case 0:
							func_17(unk_0xC8B93D94F8954288(), 149);
							Local_2515[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
							{
								iVar3 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
								func_17(iVar3, 152);
								func_16(iVar3, -1);
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
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
							Local_2515[iVar0 /*6*/].f_5 = unk_0x693EBB4F13506457() + 7000;
							Local_2515[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (unk_0x693EBB4F13506457() > Local_2515[iVar0 /*6*/].f_5)
							{
								unk_0xC76B5C68AB6DC7DF(unk_0xC8B93D94F8954288(), 2466.385f, 4953.096f, 44.1228f, 1, 0, 0, 1);
								unk_0x765E3FA65D011F03(unk_0xC8B93D94F8954288(), 221f);
								unk_0x6094B3418D5AE59D(unk_0xC8B93D94F8954288(), 2475.075f, 4945.965f, 44.0228f, 1f, 20000, 1193033728, 1056964608);
								unk_0x447955D97DC49D70(unk_0xC8B93D94F8954288(), joaat("MotionState_Walk"), 0, 0, 0);
								Local_2515[iVar0 /*6*/].f_1 = 0;
							}
							break;
					}
					break;
				
				case 13:
					if (unk_0x8BB5631CA898C6D4("CHINESE2_FARMHOUSE_EXPLOSION_MOLOTOV_MASTER", 0))
					{
						unk_0xD0E30C811D3BBC73();
						Local_2515[iVar0 /*6*/].f_1 = 0;
					}
					break;
				
				case 12:
					switch (Local_2515[iVar0 /*6*/].f_2)
					{
						case 0:
							uLocal_2672 = unk_0xBFFB3E6573626E32(2457.15f, 4968.79f, 48.677f, 45f, "DES_FarmHs");
							if (unk_0x99D920160DDD0D7D(uLocal_2672))
							{
								unk_0x1BBA896A85FD74C9(uLocal_2672, 2);
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 1:
							if (unk_0xF1F56E8F7D83989D(uLocal_2672) == 3)
							{
								unk_0x1BBA896A85FD74C9(uLocal_2672, 4);
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							if (iLocal_2673 == 1)
							{
								if (unk_0xF1F56E8F7D83989D(uLocal_2672) == 5)
								{
									unk_0x1BBA896A85FD74C9(uLocal_2672, 6);
									unk_0x925AE2E6F6E41362("CHI_2_RAYFIRE");
									unk_0xF3B031799E7F7016(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrm"), 1);
									unk_0xF3B031799E7F7016(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrmsml"), 1);
									unk_0xF3B031799E7F7016(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassairfrm"), 0);
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
						if (!unk_0xD6B965E92DB098CE(unk_0xC8B93D94F8954288(), joaat("weapon_petrolcan"), 0) || !unk_0x06A2030124FC73B9(uLocal_2675))
						{
							iLocal_2679 = unk_0xB999434FB1CECA11(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 20f, unk_0x06C0DD6C22493B3F(joaat("weapon_petrolcan")), 0, 0, 1);
							if (iLocal_2679 != 0)
							{
								if (unk_0x6B4865E08E90ACC5(uLocal_2677))
								{
									unk_0x5356E82C1E5E0C44(&uLocal_2677);
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
							if (unk_0x6B4865E08E90ACC5(uLocal_2677))
							{
								unk_0x5356E82C1E5E0C44(&uLocal_2677);
							}
							func_10(157, 0);
							if (iLocal_2649 == 0)
							{
								iLocal_2649 = unk_0xCE69853977E75052(unk_0xC8B93D94F8954288(), joaat("weapon_petrolcan"));
							}
							else
							{
								func_9(158, (iLocal_2649 - unk_0xCE69853977E75052(unk_0xC8B93D94F8954288(), joaat("weapon_petrolcan"))), 1);
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
					if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 2447.671f, 4951.438f, 43.25576f, 2454.664f, 4957.856f, 47.89117f, 6.8125f, 0, 1, 0) && unk_0x693EBB4F13506457() > Local_2515[iVar0 /*6*/].f_5)
					{
						if (unk_0x6B4865E08E90ACC5(uLocal_2677))
						{
							unk_0x5356E82C1E5E0C44(&uLocal_2677);
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
									Local_2515[iVar0 /*6*/].f_5 = unk_0x693EBB4F13506457() + 2000;
									uLocal_2677 = func_5(2450f, 4954f, 45f, 0);
									Local_2515[iVar0 /*6*/].f_2++;
								}
								break;
							}
					}
					break;
				
				case 20:
					if (!unk_0xDCC86F723E82125E(Local_2515[iVar0 /*6*/].f_5, 0))
					{
						iLocal_2885 = func_18(4);
						if (iLocal_2885 != -1)
						{
							unk_0x59A0729D503ED758(&(Local_2515[iVar0 /*6*/].f_5), 0);
						}
					}
					else if (!unk_0xDCC86F723E82125E(Local_2515[iVar0 /*6*/].f_5, 1))
					{
						if (!unk_0x2DC9BA2299B45EA6(Local_755[iLocal_2885 /*33*/]) && unk_0x95CCECA3948CFE7B(Local_755[iLocal_2885 /*33*/].f_20))
						{
							if (unk_0xCD61E9D5CABC7E35(Local_755[iLocal_2885 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3) && unk_0xB0A9B470CE75BF12(Local_755[iLocal_2885 /*33*/].f_20))
							{
								unk_0x59A0729D503ED758(&(Local_2515[iVar0 /*6*/].f_5), 1);
							}
						}
					}
					else if (!unk_0xDCC86F723E82125E(Local_2515[iVar0 /*6*/].f_5, 2))
					{
						if (unk_0x2DC9BA2299B45EA6(Local_755[iLocal_2885 /*33*/]))
						{
							unk_0x59A0729D503ED758(&(Local_2515[iVar0 /*6*/].f_5), 2);
						}
						if (!unk_0x2DC9BA2299B45EA6(Local_755[iLocal_2885 /*33*/]))
						{
							if (!unk_0xCD61E9D5CABC7E35(Local_755[iLocal_2885 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3))
							{
								unk_0x59A0729D503ED758(&(Local_2515[iVar0 /*6*/].f_5), 2);
							}
							if (unk_0x090C65D5190A249D(Local_755[iLocal_2885 /*33*/], -2017877118) == 2 || unk_0x090C65D5190A249D(Local_755[iLocal_2885 /*33*/], -2017877118) == 7)
							{
								unk_0x59A0729D503ED758(&(Local_2515[iVar0 /*6*/].f_5), 2);
							}
							if (unk_0xA81F17D63315B662(Local_755[iLocal_2885 /*33*/], unk_0xC8B93D94F8954288()) || Local_1619[iLocal_2885 /*24*/].f_3 > 3)
							{
								unk_0x59A0729D503ED758(&(Local_2515[iVar0 /*6*/].f_5), 2);
							}
						}
					}
					else if (unk_0x95CCECA3948CFE7B(Local_755[iLocal_2885 /*33*/].f_20) && unk_0xB0A9B470CE75BF12(Local_755[iLocal_2885 /*33*/].f_20))
					{
						unk_0xB81176DFD2611E8B(Local_755[iLocal_2885 /*33*/].f_20, 0, 0);
					}
					if (!unk_0xDCC86F723E82125E(Local_2515[iVar0 /*6*/].f_5, 4))
					{
						iLocal_2886 = func_18(5);
						if (iLocal_2886 != -1)
						{
							unk_0x59A0729D503ED758(&(Local_2515[iVar0 /*6*/].f_5), 4);
						}
					}
					else if (!unk_0xDCC86F723E82125E(Local_2515[iVar0 /*6*/].f_5, 5))
					{
						if (!unk_0x2DC9BA2299B45EA6(Local_755[iLocal_2886 /*33*/]))
						{
							if (unk_0x95CCECA3948CFE7B(Local_755[iLocal_2886 /*33*/].f_20))
							{
								if (unk_0xCD61E9D5CABC7E35(Local_755[iLocal_2886 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
								{
									if (unk_0xB0A9B470CE75BF12(Local_755[iLocal_2886 /*33*/].f_20))
									{
										unk_0x59A0729D503ED758(&(Local_2515[iVar0 /*6*/].f_5), 5);
									}
								}
							}
						}
					}
					else if (!unk_0xDCC86F723E82125E(Local_2515[iVar0 /*6*/].f_5, 6))
					{
						if (unk_0x2DC9BA2299B45EA6(Local_755[iLocal_2886 /*33*/]))
						{
							unk_0x59A0729D503ED758(&(Local_2515[iVar0 /*6*/].f_5), 6);
						}
						if (!unk_0x2DC9BA2299B45EA6(Local_755[iLocal_2886 /*33*/]))
						{
							if (!unk_0xCD61E9D5CABC7E35(Local_755[iLocal_2886 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
							{
								unk_0x59A0729D503ED758(&(Local_2515[iVar0 /*6*/].f_5), 6);
							}
							if (unk_0x090C65D5190A249D(Local_755[iLocal_2886 /*33*/], -2017877118) == 2 || unk_0x090C65D5190A249D(Local_755[iLocal_2886 /*33*/], -2017877118) == 7)
							{
								unk_0x59A0729D503ED758(&(Local_2515[iVar0 /*6*/].f_5), 6);
							}
							if (unk_0xA81F17D63315B662(Local_755[iLocal_2886 /*33*/], unk_0xC8B93D94F8954288()) || Local_1619[iLocal_2886 /*24*/].f_3 > 3)
							{
								unk_0x59A0729D503ED758(&(Local_2515[iVar0 /*6*/].f_5), 6);
							}
						}
					}
					else if (unk_0x95CCECA3948CFE7B(Local_755[iLocal_2886 /*33*/].f_20) && unk_0xB0A9B470CE75BF12(Local_755[iLocal_2886 /*33*/].f_20))
					{
						unk_0xB81176DFD2611E8B(Local_755[iLocal_2886 /*33*/].f_20, 0, 0);
					}
					break;
				
				case 21:
					break;
				
				case 23:
					iVar4 = 0;
					switch (Local_2515[iVar0 /*6*/].f_2)
					{
						case 1:
							iLocal_2657[0] = unk_0xB2AD4914C25D1420(joaat("prop_ld_can_01"), 2494.496f, 4970.916f, 44.5112f, 1, 1, 0);
							unk_0x68931E8B45B3CA92(iLocal_2657[0], -3.44f, 0f, 38.88f, 2, 1);
							iLocal_2657[1] = unk_0xB2AD4914C25D1420(joaat("prop_ld_can_01"), 2494.863f, 4970.595f, 44.5425f, 1, 1, 0);
							unk_0x68931E8B45B3CA92(iLocal_2657[1], -3.44f, 0f, 38.88f, 2, 1);
							iLocal_2657[2] = unk_0xB2AD4914C25D1420(joaat("prop_ld_can_01"), 2494.896f, 4970.417f, 44.5475f, 1, 1, 0);
							unk_0x68931E8B45B3CA92(iLocal_2657[2], -3.44f, 0f, 38.88f, 2, 1);
							iLocal_2657[3] = unk_0xB2AD4914C25D1420(joaat("prop_ld_can_01"), 2494.795f, 4970.246f, 44.5525f, 1, 1, 0);
							unk_0x68931E8B45B3CA92(iLocal_2657[3], -3.44f, 0f, 38.88f, 2, 1);
							iLocal_2657[4] = unk_0xB2AD4914C25D1420(joaat("prop_ld_can_01"), 2494.204f, 4970.269f, 44.5201f, 1, 1, 0);
							unk_0x68931E8B45B3CA92(iLocal_2657[4], -3.44f, 0f, 38.88f, 2, 1);
							iLocal_2657[5] = unk_0xB2AD4914C25D1420(joaat("prop_ld_can_01"), 2494.372f, 4970.744f, 44.51f, 1, 1, 0);
							unk_0x68931E8B45B3CA92(iLocal_2657[5], -3.44f, 0f, 38.88f, 2, 1);
							iLocal_2657[6] = unk_0xB2AD4914C25D1420(joaat("prop_ld_can_01"), 2494.372f, 4971.092f, 44.4987f, 1, 1, 0);
							unk_0x68931E8B45B3CA92(iLocal_2657[6], -3.44f, 0f, 38.88f, 2, 1);
							iLocal_2657[7] = unk_0xB2AD4914C25D1420(joaat("prop_ld_can_01"), 2493.77f, 4971f, 44.6287f, 1, 1, 0);
							unk_0x68931E8B45B3CA92(iLocal_2657[7], 3.955f, 0f, 139.68f, 2, 1);
							iLocal_2657[8] = unk_0xB2AD4914C25D1420(joaat("prop_ld_can_01"), 2493.98f, 4971.279f, 44.6038f, 1, 1, 0);
							unk_0x68931E8B45B3CA92(iLocal_2657[8], 3.955f, 0f, 139.68f, 2, 1);
							iLocal_2657[9] = unk_0xB2AD4914C25D1420(joaat("prop_ld_can_01"), 2494.104f, 4971.438f, 44.5826f, 1, 1, 0);
							unk_0x68931E8B45B3CA92(iLocal_2657[9], 3.955f, 0f, 139.68f, 2, 1);
							iVar4 = 0;
							while (iVar4 < iLocal_2657)
							{
								unk_0xFE4533E741E5E8FC(iLocal_2657[iVar4], 1);
								unk_0xB7A2078CD1C9A82F(iLocal_2657[iVar4], 1);
								iVar4++;
							}
							Local_2515[iVar0 /*6*/].f_2++;
							break;
						
						case 0:
							if (!unk_0x95CCECA3948CFE7B(iLocal_2680) && !unk_0x95CCECA3948CFE7B(iLocal_2681))
							{
								if (unk_0x32AADF258A6B79F2(2493.5f, 4969.2f, 43.9f, 1f, joaat("prop_barrel_pile_03"), 0) && unk_0x32AADF258A6B79F2(2493.4f, 4971.8f, 43.6f, 1f, joaat("prop_pallet_pile_01"), 0))
								{
									iLocal_2680 = unk_0xB999434FB1CECA11(2493.5f, 4969.2f, 43.9f, 1f, joaat("prop_barrel_pile_03"), 1, 0, 1);
									unk_0xB7A2078CD1C9A82F(iLocal_2680, 1);
									unk_0xF3B031799E7F7016(2493.4f, 4971.8f, 43.6f, 1f, joaat("prop_pallet_pile_01"), 0);
									iLocal_2681 = unk_0x7C62BC1EB194D985(joaat("prop_pallet_pile_01"), 2493.427f, 4971.729f, 43.54362f, 1, 1, 0);
									unk_0x68931E8B45B3CA92(iLocal_2681, -1.436373f, 0.176147f, -36.6601f, 2, 1);
									unk_0xB7A2078CD1C9A82F(iLocal_2681, 1);
									func_32(24, 0);
									Local_2515[iVar0 /*6*/].f_2++;
								}
							}
							else
							{
								unk_0xA278ECBE30D8AE4F(&iLocal_2681);
								iLocal_2681 = unk_0x7C62BC1EB194D985(joaat("prop_pallet_pile_01"), 2493.427f, 4971.729f, 43.54362f, 1, 1, 0);
								unk_0x68931E8B45B3CA92(iLocal_2681, -1.436373f, 0.176147f, -36.6601f, 2, 1);
								unk_0xB7A2078CD1C9A82F(iLocal_2681, 1);
								func_32(24, 0);
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							iVar4 = 0;
							iVar4 = 0;
							while (iVar4 < iLocal_2657)
							{
								if (unk_0x95CCECA3948CFE7B(iLocal_2657[iVar4]))
								{
									unk_0xB7A2078CD1C9A82F(iLocal_2657[iVar4], 0);
								}
								iVar4++;
							}
							Local_2515[iVar0 /*6*/].f_1 = 0;
							Local_2515[iVar0 /*6*/].f_1 = 0;
							break;
					}
					break;
				
				case 24:
					if (!unk_0xDCC86F723E82125E(Local_2515[iVar0 /*6*/].f_5, 0))
					{
						if (unk_0x95CCECA3948CFE7B(iLocal_2680))
						{
							if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
							{
								if (unk_0x87D4C731B013290A(iLocal_2680, unk_0xC8B93D94F8954288(), 1) || func_4(unk_0xC8B93D94F8954288(), iLocal_2680, 1) < 30f)
								{
									unk_0xB7A2078CD1C9A82F(iLocal_2680, 0);
									unk_0x59A0729D503ED758(&(Local_2515[iVar0 /*6*/].f_5), 0);
								}
							}
						}
					}
					if (!unk_0xDCC86F723E82125E(Local_2515[iVar0 /*6*/].f_5, 1))
					{
						if (unk_0x95CCECA3948CFE7B(iLocal_2681))
						{
							if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
							{
								if (unk_0x87D4C731B013290A(iLocal_2681, unk_0xC8B93D94F8954288(), 1) || func_4(unk_0xC8B93D94F8954288(), iLocal_2681, 1) < 30f)
								{
									unk_0xB7A2078CD1C9A82F(iLocal_2681, 0);
									unk_0x59A0729D503ED758(&(Local_2515[iVar0 /*6*/].f_5), 1);
								}
							}
						}
					}
					if ((unk_0xDCC86F723E82125E(Local_2515[iVar0 /*6*/].f_5, 0) && unk_0xDCC86F723E82125E(Local_2515[iVar0 /*6*/].f_5, 1)) || iLocal_2511 == 6)
					{
						if (unk_0x95CCECA3948CFE7B(iLocal_2680))
						{
							unk_0xB7A2078CD1C9A82F(iLocal_2680, 0);
						}
						if (unk_0x95CCECA3948CFE7B(iLocal_2681))
						{
							unk_0xB7A2078CD1C9A82F(iLocal_2681, 0);
						}
						Local_2515[iVar0 /*6*/].f_1 = 0;
					}
					break;
				
				case 26:
					switch (Local_2515[iVar0 /*6*/].f_2)
					{
						case -1:
							if (unk_0x95CCECA3948CFE7B(Local_755[12 /*33*/]))
							{
								unk_0x26B3B761603F5232(&(Local_755[12 /*33*/]));
							}
							if (unk_0x95CCECA3948CFE7B(Local_755[13 /*33*/]))
							{
								unk_0x26B3B761603F5232(&(Local_755[13 /*33*/]));
							}
							if (unk_0x95CCECA3948CFE7B(Local_755[14 /*33*/]))
							{
								unk_0x26B3B761603F5232(&(Local_755[14 /*33*/]));
							}
							unk_0x4BBD72565A0AF033(joaat("ig_janet"));
							unk_0x4BBD72565A0AF033(joaat("ig_old_man1a"));
							unk_0x4BBD72565A0AF033(joaat("ig_old_man2"));
							Local_2515[iVar0 /*6*/].f_1 = 0;
							break;
						
						case 0:
							unk_0xC0E8B67A4385D37D("MISSChinese2_crystalMazeMCS1_IG");
							Local_2515[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (unk_0xF9B86DC1728F1339("MISSChinese2_crystalMazeMCS1_IG"))
							{
								if (unk_0xC1659BDFD3A9F053() || !unk_0x308528B5CF35F306())
								{
									if (unk_0x95CCECA3948CFE7B(Local_755[13 /*33*/]) && !unk_0x2DC9BA2299B45EA6(Local_755[13 /*33*/]))
									{
										unk_0xC76B5C68AB6DC7DF(Local_755[13 /*33*/], 1986.06f, 3051.708f, 46.2151f, 1, 0, 0, 1);
									}
									if (unk_0x95CCECA3948CFE7B(Local_755[14 /*33*/]) && !unk_0x2DC9BA2299B45EA6(Local_755[14 /*33*/]))
									{
										unk_0xC76B5C68AB6DC7DF(Local_755[14 /*33*/], 1986.105f, 3051.659f, 46.2151f, 1, 0, 0, 1);
									}
									Local_2515[iVar0 /*6*/].f_2++;
								}
							}
							break;
						
						case 2:
							if (unk_0xAD158329EB26D8F4(1984.89f, 3052.46f, 46.98f, 0.3f, 1) && unk_0xAD158329EB26D8F4(1985.322f, 3053.087f, 46.98f, 0.3f, 1))
							{
								if (!unk_0x95CCECA3948CFE7B(Local_755[13 /*33*/]))
								{
									Local_755[13 /*33*/] = unk_0x71DD988C1B903F5D(26, joaat("ig_old_man1a"), 1987.231f, 3052.741f, 46.214f, 0, 1, 1);
								}
								if (!unk_0x95CCECA3948CFE7B(Local_755[14 /*33*/]))
								{
									Local_755[14 /*33*/] = unk_0x71DD988C1B903F5D(26, joaat("ig_old_man2"), 1987.231f, 3052.741f, 46.214f, 0, 1, 1);
								}
								if (!unk_0x95CCECA3948CFE7B(Local_755[12 /*33*/]))
								{
									Local_755[12 /*33*/] = unk_0x71DD988C1B903F5D(26, joaat("ig_janet"), 1987.231f, 3052.741f, 46.214f, 0, 1, 1);
								}
								unk_0x59A0729D503ED758(&(Local_2515[iVar0 /*6*/].f_5), 1);
								unk_0x70D845CB97788674(Local_755[14 /*33*/], 1984.89f, 3052.46f, 46.98f, 0.3f, 0);
								unk_0x01BAA21528B22625(Local_755[14 /*33*/], 1, 1);
								unk_0xAAD662D7E0D59F4C(Local_755[14 /*33*/], 0);
								unk_0x59A0729D503ED758(&(Local_2515[iVar0 /*6*/].f_5), 0);
								unk_0x70D845CB97788674(Local_755[13 /*33*/], 1985.322f, 3053.087f, 46.98f, 0.3f, 0);
								unk_0x01BAA21528B22625(Local_755[13 /*33*/], 1, 1);
								unk_0xAAD662D7E0D59F4C(Local_755[13 /*33*/], 0);
								if (!unk_0xBC6B93737FCDC466(Local_2515[iVar0 /*6*/].f_5))
								{
									Local_2515[iVar0 /*6*/].f_5 = unk_0x0B15BB6DFB729046(1987.231f, 3052.741f, 46.214f, 0f, 0f, 57.6f, 2);
									unk_0x53DDB73894A6597A(Local_2515[iVar0 /*6*/].f_5, 1);
								}
								unk_0xA5666A46C1079EFE(Local_755[12 /*33*/], Local_2515[iVar0 /*6*/].f_5, "MISSChinese2_crystalMazeMCS1_IG", "bar_peds_action_janet", 1000f, -1000f, 1, 0, 1148846080, 0);
								unk_0x01BAA21528B22625(Local_755[12 /*33*/], 1, 1);
								unk_0xAAD662D7E0D59F4C(Local_755[12 /*33*/], 0);
								Local_2515[iVar0 /*6*/].f_5 = 0;
								Local_2515[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 3:
							if (unk_0xC1659BDFD3A9F053() || !unk_0x308528B5CF35F306())
							{
							}
							if (!unk_0x2DC9BA2299B45EA6(Local_755[13 /*33*/]) && !unk_0x2DC9BA2299B45EA6(Local_755[14 /*33*/]))
							{
								unk_0xC778754E36F3FFD6(Local_755[13 /*33*/], 152, 1);
								unk_0xC778754E36F3FFD6(Local_755[14 /*33*/], 152, 1);
								if (unk_0xDCC86F723E82125E(Local_2515[iVar0 /*6*/].f_5, 0) && unk_0xDCC86F723E82125E(Local_2515[iVar0 /*6*/].f_5, 1))
								{
									Local_2515[iVar0 /*6*/].f_2++;
								}
								else
								{
									if (unk_0x090C65D5190A249D(Local_755[13 /*33*/], 993674639) != 1)
									{
										if (unk_0xAD158329EB26D8F4(1984.89f, 3052.46f, 46.98f, 0.3f, 1))
										{
											unk_0x59A0729D503ED758(&(Local_2515[iVar0 /*6*/].f_5), 0);
											unk_0x70D845CB97788674(Local_755[13 /*33*/], 1984.89f, 3052.46f, 46.98f, 0.3f, 0);
											unk_0xAAD662D7E0D59F4C(Local_755[13 /*33*/], 0);
										}
									}
									else
									{
										unk_0x59A0729D503ED758(&(Local_2515[iVar0 /*6*/].f_5), 0);
									}
									if (unk_0x090C65D5190A249D(Local_755[14 /*33*/], 993674639) != 1)
									{
										if (unk_0xAD158329EB26D8F4(1985.322f, 3053.087f, 46.98f, 0.3f, 1))
										{
											unk_0x59A0729D503ED758(&(Local_2515[iVar0 /*6*/].f_5), 1);
											unk_0x70D845CB97788674(Local_755[14 /*33*/], 1985.322f, 3053.087f, 46.98f, 0.3f, 0);
											unk_0xAAD662D7E0D59F4C(Local_755[14 /*33*/], 0);
										}
									}
									else
									{
										unk_0x59A0729D503ED758(&(Local_2515[iVar0 /*6*/].f_5), 1);
									}
								}
							}
							break;
						
						case 4:
							if (func_67(unk_0xC8B93D94F8954288(), 1991.419f, 3054.915f, 47.533f, 1) > 150f)
							{
								Local_2515[iVar0 /*6*/].f_2 = -1;
							}
							break;
						
						case 6:
							if (!unk_0x2DC9BA2299B45EA6(Local_755[12 /*33*/]))
							{
								unk_0x622E764F80DBF8B7(Local_755[12 /*33*/], unk_0xC8B93D94F8954288(), 100f, -1, 0, 0);
								unk_0xF1A02DDEC7E15D6E(Local_755[12 /*33*/], 1);
								unk_0x459A6F82E024C891(&(Local_755[12 /*33*/]));
							}
							if (!unk_0x2DC9BA2299B45EA6(Local_755[13 /*33*/]))
							{
								unk_0x622E764F80DBF8B7(Local_755[13 /*33*/], unk_0xC8B93D94F8954288(), 100f, -1, 0, 0);
								unk_0xF1A02DDEC7E15D6E(Local_755[13 /*33*/], 1);
								unk_0x459A6F82E024C891(&(Local_755[13 /*33*/]));
							}
							if (!unk_0x2DC9BA2299B45EA6(Local_755[14 /*33*/]))
							{
								unk_0x622E764F80DBF8B7(Local_755[14 /*33*/], unk_0xC8B93D94F8954288(), 100f, -1, 0, 0);
								unk_0xF1A02DDEC7E15D6E(Local_755[14 /*33*/], 1);
								unk_0x459A6F82E024C891(&(Local_755[14 /*33*/]));
							}
							Local_2515[iVar0 /*6*/].f_2 = 7;
							break;
						
						case 7:
							if (func_67(unk_0xC8B93D94F8954288(), 1991.419f, 3054.915f, 47.533f, 1) > 150f)
							{
								Local_2515[iVar0 /*6*/].f_2 = -1;
							}
							break;
					}
					break;
				
				case 27:
					unk_0xB32AEE4AC291E533(2444.176f, 4974.077f, 56.4066f, 30f, joaat("v_ilev_fh_door03"), 1);
					unk_0xB32AEE4AC291E533(2444.176f, 4974.077f, 56.4066f, 30f, joaat("v_ilev_fh_frntdoor"), 1);
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
	
	if (!unk_0xB6900B8CB0ABBD2B(iParam0))
	{
		Var0 = { unk_0x44C17CCB85A88A1F(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x44C17CCB85A88A1F(iParam0, 0) };
	}
	if (!unk_0xB6900B8CB0ABBD2B(iParam1))
	{
		Var3 = { unk_0x44C17CCB85A88A1F(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x44C17CCB85A88A1F(iParam1, 0) };
	}
	return unk_0x4F982ED5336EA899(Var0, Var3, iParam2);
}

var func_5(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0xDF811B9EAB020A4D(Param0);
	unk_0x3734DA1F207E7166(uVar0, func_6(unk_0xBBAE3E0C60A8AD4B(), 1f, 1f));
	unk_0x706ABF1139F36482(uVar0, iParam3);
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
	unk_0xBBB1F62EC5E3BBC6(sParam0);
	unk_0xEE90E717A80AA597(iParam1, 0);
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
	while (iVar0 < Global_67754)
	{
		if (Global_67755[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_67755[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_67755[iVar0 /*9*/].f_1 = (Global_67755[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_67755[iVar0 /*9*/] != -1)
	{
		if (Global_55884[Global_67755[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_67755[iVar0 /*9*/].f_1 > 1)
			{
				Global_67755[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_67755[iVar0 /*9*/].f_1 < 0)
			{
				Global_67755[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

void func_10(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_55669 = iParam0;
	if (!Global_55667)
	{
		Global_55667 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67754)
		{
			if (Global_67755[iVar0 /*9*/] == iParam0)
			{
				Global_67755[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_11(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_55667)
	{
	}
	Global_55667 = 0;
	if (bParam0)
	{
		Global_55668 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67754)
		{
			if (Global_55884[Global_67755[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_67755[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_67754)
		{
			if (Global_67755[iVar0 /*9*/] > 0)
			{
				if (Global_67755[iVar0 /*9*/] == iParam1)
				{
					Global_67755[iVar0 /*9*/].f_5 = 0;
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
				if (unk_0x6B4865E08E90ACC5(Local_444[iVar0 /*5*/].f_3))
				{
					if (unk_0xF40F7B5C29E813BB(Local_444[iVar0 /*5*/].f_3) < 255)
					{
						unk_0x5356E82C1E5E0C44(&(Local_444[iVar0 /*5*/].f_3));
					}
					else
					{
						unk_0x7DF168F8439ABF1A(Local_444[iVar0 /*5*/].f_3, 0);
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
			if (unk_0x6B4865E08E90ACC5(Local_444[iVar0 /*5*/].f_3))
			{
				unk_0x7DF168F8439ABF1A(Local_444[iVar0 /*5*/].f_3, 255);
			}
			else
			{
				Local_444[iVar0 /*5*/].f_3 = func_5(Local_444[iVar0 /*5*/], 0);
				unk_0x215B56BAA7583F64(Local_444[iVar0 /*5*/].f_3, 1);
				unk_0x3734DA1F207E7166(Local_444[iVar0 /*5*/].f_3, 0.4f);
				unk_0x7DF168F8439ABF1A(Local_444[iVar0 /*5*/].f_3, 0);
				unk_0x32546F91F646B246(Local_444[iVar0 /*5*/].f_3, 5);
				unk_0xEBA460B665086587(Local_444[iVar0 /*5*/].f_3, 0);
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
	
	if (!unk_0x95CCECA3948CFE7B(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x361E437CE4AD5532(iParam0);
	if (unk_0x18BDAFC0B20C2C9E(iParam0))
	{
		unk_0x3734DA1F207E7166(uVar0, func_6(unk_0xBBAE3E0C60A8AD4B(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xDDD65F4720293225(uVar0, bParam1);
		}
		else
		{
			unk_0x32546F91F646B246(uVar0, 2);
		}
	}
	else if (unk_0x96209AADF56E8FE8(iParam0))
	{
		unk_0x3734DA1F207E7166(uVar0, func_6(unk_0xBBAE3E0C60A8AD4B(), 0.7f, 0.7f));
		unk_0xDDD65F4720293225(uVar0, bParam1);
	}
	else if (unk_0x09C656419AB67926(iParam0))
	{
		unk_0x3734DA1F207E7166(uVar0, func_6(unk_0xBBAE3E0C60A8AD4B(), 0.7f, 0.7f));
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
	Global_55670 = iParam0;
	Global_55671 = iParam1;
}

void func_17(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_55672 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_67754)
	{
		if (iParam1 == -1 || Global_67755[iVar0 /*9*/] == iParam1)
		{
			if (Global_67755[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_67755[iVar0 /*9*/].f_6 = iParam0;
				Global_67755[iVar0 /*9*/].f_7 = 1;
				Global_67755[iVar0 /*9*/].f_8 = 0;
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
		if (Global_69317)
		{
			Global_2426867.f_74.f_227[iParam0] = iParam1;
		}
		else
		{
			Global_100976.f_5895.f_227[iParam0] = iParam1;
		}
		Global_32668[iParam0] = iParam2;
		Global_32867[iParam0] = 1;
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
				unk_0x7113C787FCF0915D("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0, 0);
			}
			else
			{
				unk_0x7113C787FCF0915D("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 1, 0);
			}
			break;
		
		case 71:
			if (iParam1 != 1)
			{
				unk_0x049551D14549E9DC("HEIST_SWEATSHOP_ZONES", 0, 0);
			}
			else
			{
				unk_0x049551D14549E9DC("HEIST_SWEATSHOP_ZONES", 1, 0);
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
				unk_0x7113C787FCF0915D("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 1, 0);
			}
			else
			{
				unk_0x7113C787FCF0915D("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0, 0);
			}
			break;
		
		case 174:
			if (iParam1 == 2)
			{
				unk_0x1BA0006FFD4BC5CA("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			}
			break;
		
		case 37:
			if (iParam1 == 1)
			{
				unk_0x84DA8EC857988D8D("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0);
				unk_0x84DA8EC857988D8D("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0);
				unk_0x84DA8EC857988D8D("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0);
				unk_0x84DA8EC857988D8D("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0);
			}
			break;
	}
}

void func_21(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x59A0729D503ED758(&Global_99616, iParam0);
	}
	else
	{
		unk_0x77621132305B133B(&Global_99616, iParam0);
	}
	Global_99615 = 1;
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
		iVar1 = Global_100976.f_5895.f_227[iParam0];
	}
	else
	{
		iVar1 = Global_2426867.f_74.f_227[iParam0];
	}
	iVar2 = Global_33066[iParam0];
	if (unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()) && !bParam3)
	{
	}
	else
	{
		bVar99 = true;
		if (unk_0x7CBED6EFED40E7EB(unk_0xC4E68AF0B559FAC4()) != unk_0x7CBED6EFED40E7EB("standard_global_reg"))
		{
			if (iParam2 == 0)
			{
				if (Global_32668[iParam0] && unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), Var3, 1) < 200f)
				{
					bVar99 = false;
				}
				if (!unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()) || unk_0x0004D91ADE7A063A(unk_0xC8B93D94F8954288()))
				{
					if (!unk_0xD5DFCA69ACAA20E3())
					{
						bVar99 = false;
					}
				}
			}
		}
		if (unk_0x2394B86AAC723FB8() && (!unk_0xA8D4B6BDCF6DE72B() || unk_0xC8DAE7AE33B529B0() != 5))
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
							unk_0x339146AE455BD9F6(Var3, 10f, Var3.f_4[iVar1], 0);
						}
						if (Var3.f_4[iVar2] != 0)
						{
							unk_0xF3B031799E7F7016(Var3, 10f, Var3.f_4[iVar2], 1);
						}
						Global_34262[iParam0] = 1;
					}
					bVar0 = true;
					break;
				
				case 1:
					if (iVar1 == 0)
					{
						if (unk_0x7CBED6EFED40E7EB(&(Var3.f_8[1 /*8*/])) != unk_0x7CBED6EFED40E7EB("") && unk_0x7CBED6EFED40E7EB(&(Var3.f_8[1 /*8*/])) != unk_0x7CBED6EFED40E7EB(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x748CA8A0F3783C60(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x4030ACE8AD10EADA(&(Var3.f_8[1 /*8*/]));
							}
						}
						if ((unk_0x7CBED6EFED40E7EB(&(Var3.f_8[2 /*8*/])) != unk_0x7CBED6EFED40E7EB("") && unk_0x7CBED6EFED40E7EB(&(Var3.f_8[2 /*8*/])) != unk_0x7CBED6EFED40E7EB("REMOVE_ALL_STATES")) && unk_0x7CBED6EFED40E7EB(&(Var3.f_8[2 /*8*/])) != unk_0x7CBED6EFED40E7EB(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x748CA8A0F3783C60(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x4030ACE8AD10EADA(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (unk_0x7CBED6EFED40E7EB(&(Var3.f_8[0 /*8*/])) != unk_0x7CBED6EFED40E7EB(""))
						{
							if (!unk_0x748CA8A0F3783C60(&(Var3.f_8[0 /*8*/])))
							{
								unk_0xF0CDA0F80E93ED80(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (unk_0x7CBED6EFED40E7EB(&(Var3.f_34)) != unk_0x7CBED6EFED40E7EB(""))
						{
							if (!unk_0x748CA8A0F3783C60(&(Var3.f_34)))
							{
								unk_0xF0CDA0F80E93ED80(&(Var3.f_34));
							}
						}
					}
					else if (iVar1 == 1)
					{
						if (unk_0x7CBED6EFED40E7EB(&(Var3.f_34)) != unk_0x7CBED6EFED40E7EB(""))
						{
							if (unk_0x748CA8A0F3783C60(&(Var3.f_34)))
							{
								unk_0x4030ACE8AD10EADA(&(Var3.f_34));
							}
						}
						if (unk_0x7CBED6EFED40E7EB(&(Var3.f_8[0 /*8*/])) != unk_0x7CBED6EFED40E7EB("") && unk_0x7CBED6EFED40E7EB(&(Var3.f_8[0 /*8*/])) != unk_0x7CBED6EFED40E7EB(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x748CA8A0F3783C60(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x4030ACE8AD10EADA(&(Var3.f_8[0 /*8*/]));
							}
						}
						if ((unk_0x7CBED6EFED40E7EB(&(Var3.f_8[2 /*8*/])) != unk_0x7CBED6EFED40E7EB("") && unk_0x7CBED6EFED40E7EB(&(Var3.f_8[2 /*8*/])) != unk_0x7CBED6EFED40E7EB("REMOVE_ALL_STATES")) && unk_0x7CBED6EFED40E7EB(&(Var3.f_8[2 /*8*/])) != unk_0x7CBED6EFED40E7EB(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x748CA8A0F3783C60(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x4030ACE8AD10EADA(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (unk_0x7CBED6EFED40E7EB(&(Var3.f_8[1 /*8*/])) != unk_0x7CBED6EFED40E7EB(""))
						{
							if (!unk_0x748CA8A0F3783C60(&(Var3.f_8[1 /*8*/])))
							{
								unk_0xF0CDA0F80E93ED80(&(Var3.f_8[1 /*8*/]));
							}
						}
					}
					else if (iVar1 == 2)
					{
						if (unk_0x7CBED6EFED40E7EB(&(Var3.f_34)) != unk_0x7CBED6EFED40E7EB(""))
						{
							if (unk_0x748CA8A0F3783C60(&(Var3.f_34)))
							{
								unk_0x4030ACE8AD10EADA(&(Var3.f_34));
							}
						}
						if (unk_0x7CBED6EFED40E7EB(&(Var3.f_8[0 /*8*/])) != unk_0x7CBED6EFED40E7EB("") && unk_0x7CBED6EFED40E7EB(&(Var3.f_8[0 /*8*/])) != unk_0x7CBED6EFED40E7EB(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x748CA8A0F3783C60(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x4030ACE8AD10EADA(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (unk_0x7CBED6EFED40E7EB(&(Var3.f_8[1 /*8*/])) != unk_0x7CBED6EFED40E7EB("") && unk_0x7CBED6EFED40E7EB(&(Var3.f_8[1 /*8*/])) != unk_0x7CBED6EFED40E7EB(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x748CA8A0F3783C60(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x4030ACE8AD10EADA(&(Var3.f_8[1 /*8*/]));
							}
						}
						if (unk_0x7CBED6EFED40E7EB(&(Var3.f_8[2 /*8*/])) != unk_0x7CBED6EFED40E7EB("") && unk_0x7CBED6EFED40E7EB(&(Var3.f_8[2 /*8*/])) != unk_0x7CBED6EFED40E7EB("REMOVE_ALL_STATES"))
						{
							if (!unk_0x748CA8A0F3783C60(&(Var3.f_8[2 /*8*/])))
							{
								unk_0xF0CDA0F80E93ED80(&(Var3.f_8[2 /*8*/]));
							}
						}
					}
					Global_34063[iParam0] = 1;
					Global_34262[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 2:
					iVar100 = unk_0x4C910D0CCCE65059(Var3, &(Var3.f_42));
					if (iVar100 != 0)
					{
						if (unk_0x7CBED6EFED40E7EB(&(Var3.f_50)) != unk_0x7CBED6EFED40E7EB(""))
						{
							if (unk_0x622B637AABED14C4(iVar100, &(Var3.f_50)))
							{
								unk_0x5618D4E048CFD48A(iVar100, &(Var3.f_50));
							}
						}
						if (iVar1 == 0)
						{
							if (unk_0x7CBED6EFED40E7EB(&(Var3.f_8[1 /*8*/])) != unk_0x7CBED6EFED40E7EB(""))
							{
								if (unk_0x622B637AABED14C4(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x5618D4E048CFD48A(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
							if ((unk_0x7CBED6EFED40E7EB(&(Var3.f_8[2 /*8*/])) != unk_0x7CBED6EFED40E7EB("") && unk_0x7CBED6EFED40E7EB(&(Var3.f_8[2 /*8*/])) != unk_0x7CBED6EFED40E7EB("REMOVE_ALL_STATES")) && unk_0x7CBED6EFED40E7EB(&(Var3.f_8[2 /*8*/])) != unk_0x7CBED6EFED40E7EB(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0x622B637AABED14C4(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x5618D4E048CFD48A(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0x7CBED6EFED40E7EB(&(Var3.f_8[0 /*8*/])) != unk_0x7CBED6EFED40E7EB(""))
							{
								if (!unk_0x622B637AABED14C4(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x616D2F78B3C4A788(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
						}
						else if (iVar1 == 1)
						{
							if (unk_0x7CBED6EFED40E7EB(&(Var3.f_8[0 /*8*/])) != unk_0x7CBED6EFED40E7EB(""))
							{
								if (unk_0x622B637AABED14C4(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x5618D4E048CFD48A(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
							if ((unk_0x7CBED6EFED40E7EB(&(Var3.f_8[2 /*8*/])) != unk_0x7CBED6EFED40E7EB("") && unk_0x7CBED6EFED40E7EB(&(Var3.f_8[2 /*8*/])) != unk_0x7CBED6EFED40E7EB("REMOVE_ALL_STATES")) && unk_0x7CBED6EFED40E7EB(&(Var3.f_8[2 /*8*/])) != unk_0x7CBED6EFED40E7EB(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0x622B637AABED14C4(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x5618D4E048CFD48A(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0x7CBED6EFED40E7EB(&(Var3.f_8[1 /*8*/])) != unk_0x7CBED6EFED40E7EB(""))
							{
								if (!unk_0x622B637AABED14C4(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x616D2F78B3C4A788(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
						}
						else if (iVar1 == 2)
						{
							if (unk_0x7CBED6EFED40E7EB(&(Var3.f_8[0 /*8*/])) != unk_0x7CBED6EFED40E7EB(""))
							{
								if (unk_0x622B637AABED14C4(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x5618D4E048CFD48A(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
							if (unk_0x7CBED6EFED40E7EB(&(Var3.f_8[1 /*8*/])) != unk_0x7CBED6EFED40E7EB(""))
							{
								if (unk_0x622B637AABED14C4(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x5618D4E048CFD48A(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
							if (unk_0x7CBED6EFED40E7EB(&(Var3.f_8[2 /*8*/])) != unk_0x7CBED6EFED40E7EB("") && unk_0x7CBED6EFED40E7EB(&(Var3.f_8[2 /*8*/])) != unk_0x7CBED6EFED40E7EB("REMOVE_ALL_STATES"))
							{
								if (!unk_0x622B637AABED14C4(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x616D2F78B3C4A788(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
						}
						if (bParam1)
						{
							unk_0x516F18DCAD064077(iVar100);
						}
					}
					Global_34262[iParam0] = 1;
					Global_34063[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 3:
					if (unk_0x4F982ED5336EA899(Var3, unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), 1) < 250f)
					{
						uVar98 = unk_0xBFFB3E6573626E32(Var3, 25f, &(Var3.f_8[0 /*8*/]));
						if (unk_0x99D920160DDD0D7D(uVar98))
						{
							if (iVar1 == 0)
							{
								unk_0x1BBA896A85FD74C9(uVar98, 3);
								Global_34262[iParam0] = 1;
								bVar0 = true;
							}
							else if (iVar1 == 1)
							{
								if ((unk_0xF1F56E8F7D83989D(uVar98) != 6 && unk_0xF1F56E8F7D83989D(uVar98) != 7) && unk_0xF1F56E8F7D83989D(uVar98) != 8)
								{
									unk_0x1BBA896A85FD74C9(uVar98, 10);
									Global_34262[iParam0] = 1;
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
						unk_0x8D5BD6CD04963E1E(Var3, 50f, Var3.f_4[1], Var3.f_4[0], 0);
						unk_0x77621132305B133B(&(Global_32414[(iParam0 / 32)]), (iParam0 % 32));
					}
					else if (iVar1 == 1)
					{
						unk_0x64C13E1D19CD0E69(Var3, 50f, Var3.f_4[0], Var3.f_4[1], 1);
						unk_0x59A0729D503ED758(&(Global_32414[(iParam0 / 32)]), (iParam0 % 32));
					}
					bVar0 = true;
					break;
			}
			if (bVar0)
			{
				Global_32867[iParam0] = 0;
				Global_33066[iParam0] = iVar1;
				if (!func_23())
				{
					if (!Global_33663[iParam0])
					{
						Global_33663[iParam0] = 1;
						Global_33862++;
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
	return Global_25116;
}

int func_25()
{
	return Global_25115;
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
	unk_0x98371F41D43CDFA9(2479.875f, 4980.868f, 44.82052f, 60f, 1, 0, 0, 0);
	iLocal_2507 = unk_0xD53B4DCC7B2C8551(joaat("burrito"), 2479.579f, 4980.503f, 44.8051f, 341.8158f, 1, 1);
	unk_0xC690D7B0DE1C3FD5(iLocal_2507, 1);
	unk_0x9137DD8DE2087478(iLocal_2507, 2);
	unk_0xF18809B65D87E197(iLocal_2507);
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
		unk_0xC0E8B67A4385D37D("DEAD");
		while (!unk_0xF9B86DC1728F1339("DEAD"))
		{
			func_28(323, 1);
		}
		Local_755[15 /*33*/] = unk_0x71DD988C1B903F5D(26, joaat("a_m_y_methhead_01"), 2436.901f, 4959.1f, 45.8106f, 209.7559f, 1, 1);
		unk_0x5323F488E6A1B660(Local_755[15 /*33*/], "DEAD", "DEAD_C", 1000f, -1000f, -1, 1, 0, 0, 0, 0);
		unk_0x01BAA21528B22625(Local_755[15 /*33*/], 1, 0);
		unk_0x9BED67D570CD7B03(Local_755[15 /*33*/], 1);
		Local_755[16 /*33*/] = unk_0x71DD988C1B903F5D(26, joaat("a_m_m_hillbilly_01"), 2440.266f, 4970.705f, 45.8306f, 15.7982f, 1, 1);
		unk_0x5323F488E6A1B660(Local_755[16 /*33*/], "DEAD", "DEAD_D", 1000f, -1000f, -1, 1, 0, 0, 0, 0);
		unk_0x01BAA21528B22625(Local_755[16 /*33*/], 1, 0);
		unk_0x9BED67D570CD7B03(Local_755[16 /*33*/], 1);
		Local_755[17 /*33*/] = unk_0x71DD988C1B903F5D(26, joaat("a_m_m_hillbilly_02"), 2443.42f, 4974.523f, 45.8106f, 121.834f, 1, 1);
		unk_0x5323F488E6A1B660(Local_755[17 /*33*/], "DEAD", "DEAD_E", 1000f, -1000f, -1, 1, 0, 0, 0, 0);
		unk_0x01BAA21528B22625(Local_755[17 /*33*/], 1, 0);
		unk_0x9BED67D570CD7B03(Local_755[17 /*33*/], 1);
		Local_755[18 /*33*/] = unk_0x71DD988C1B903F5D(26, joaat("a_m_y_methhead_01"), 2448.888f, 4971.561f, 45.8106f, 194.7676f, 1, 1);
		unk_0x5323F488E6A1B660(Local_755[18 /*33*/], "DEAD", "DEAD_G", 1000f, -1000f, -1, 1, 0, 0, 0, 0);
		unk_0x01BAA21528B22625(Local_755[18 /*33*/], 1, 0);
		unk_0x9BED67D570CD7B03(Local_755[18 /*33*/], 1);
		while (((!unk_0xCD61E9D5CABC7E35(Local_755[15 /*33*/], "DEAD", "DEAD_C", 3) || !unk_0xCD61E9D5CABC7E35(Local_755[16 /*33*/], "DEAD", "DEAD_D", 3)) || !unk_0xCD61E9D5CABC7E35(Local_755[17 /*33*/], "DEAD", "DEAD_E", 3)) || !unk_0xCD61E9D5CABC7E35(Local_755[18 /*33*/], "DEAD", "DEAD_G", 3))
		{
			func_28(54343, 1);
			if (((!unk_0x2DC9BA2299B45EA6(Local_755[15 /*33*/]) && !unk_0x2DC9BA2299B45EA6(Local_755[16 /*33*/])) && !unk_0x2DC9BA2299B45EA6(Local_755[17 /*33*/])) && !unk_0x2DC9BA2299B45EA6(Local_755[18 /*33*/]))
			{
			}
		}
		unk_0xFE93132CC8944C8C(Local_755[15 /*33*/], 0);
		unk_0xFE93132CC8944C8C(Local_755[16 /*33*/], 0);
		unk_0xFE93132CC8944C8C(Local_755[17 /*33*/], 0);
		unk_0xFE93132CC8944C8C(Local_755[18 /*33*/], 0);
		unk_0x3ECF1E41E6ED71D8("DEAD");
	}
	func_32(23, 0);
	iVar0 = 0;
	unk_0x59A0729D503ED758(&iVar0, 3);
	unk_0x59A0729D503ED758(&iVar0, 8);
	unk_0x59A0729D503ED758(&iVar0, 1);
	unk_0x59A0729D503ED758(&iVar0, 2);
	unk_0x59A0729D503ED758(&iVar0, 4);
	uLocal_2650 = unk_0x0BF6021B7B677E57(joaat("pickup_health_standard"), 2446.896f, 4990.972f, 45.5477f, iVar0, -1, 1, 0);
	if (!unk_0xDA33F6DC6574B8DD(iLocal_2510))
	{
		iLocal_2510 = unk_0xDC3487ADA3784C61(2464.956f, 4990.051f, 44.48415f, 2.5f, 3.125f, 2.0625f, 0f, 0, 7);
	}
	iLocal_2651[0] = unk_0x4DC21548252F1A8E(joaat("pickup_health_standard"), 2444.497f, 4975.956f, 50.565f, 0f, 0f, 100f, iVar0, -1, 2, 1, 0);
	unk_0xEA057A3A3F9B3084(iLocal_2651[0], "V_8_Bed1Rm");
	iLocal_2651[1] = unk_0x4DC21548252F1A8E(joaat("pickup_health_standard"), 2443.4f, 4978.52f, 46.8107f, 0f, 0f, 100f, iVar0, -1, 2, 1, 0);
	unk_0xEA057A3A3F9B3084(iLocal_2651[1], "V_8_KitchnRm");
	iLocal_2651[3] = unk_0x4DC21548252F1A8E(joaat("pickup_health_standard"), 2441.028f, 4963.851f, 46.5605f, 0f, 0f, -80.6f, iVar0, -1, 2, 1, 0);
	unk_0xEA057A3A3F9B3084(iLocal_2651[3], "V_8_StudyRm");
	iLocal_2651[4] = unk_0x4DC21548252F1A8E(joaat("pickup_health_standard"), 2435.165f, 4971.467f, 45.91f, 0f, 0f, -50.4f, iVar0, -1, 2, 1, 0);
	unk_0xEA057A3A3F9B3084(iLocal_2651[4], "V_8_Hall2Rm");
	iVar0 = 0;
	unk_0x59A0729D503ED758(&iVar0, 2);
	unk_0x59A0729D503ED758(&iVar0, 1);
	unk_0x59A0729D503ED758(&iVar0, 3);
	iLocal_2651[2] = unk_0x4DC21548252F1A8E(joaat("pickup_weapon_sawnoffshotgun"), 2438.788f, 4970.79f, 50.565f, 0f, 0f, 0f, iVar0, -1, 2, 1, 0);
	unk_0xEA057A3A3F9B3084(iLocal_2651[2], "V_8_Bed1Rm");
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
	
	if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		return 1;
	}
	iVar0 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
	if (unk_0x5D42322C7DB888D0(iVar0, 0))
	{
		if (unk_0xC0ADAF0814175B68(iVar0, -1) == unk_0xC8B93D94F8954288())
		{
			if (!unk_0xF624ACE12DE97FE9(iVar0))
			{
				unk_0x5C384485B80ABDBC(iVar0, fParam0, iParam1, 0);
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	if (unk_0x2EE26A43F82C8F1B(unk_0xC8B93D94F8954288()))
	{
		return 1;
	}
	if (unk_0x5D42322C7DB888D0(iVar0, 0))
	{
		if (unk_0xF624ACE12DE97FE9(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_34()
{
	return Global_91158.f_296 > 0;
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
			if (unk_0xA3858ADDDBC3CB71() && unk_0xA77673910115074B())
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
	Global_15719 = 0;
	Global_15721 = 0;
	Global_15726 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_2621441 = 0;
	return func_37(sParam2, iParam3, 0);
}

int func_37(char* sParam0, int iParam1, bool bParam2)
{
	Global_15713 = 0;
	if (Global_15712 == 0 || Global_15714 == 2)
	{
		if (Global_15712 != 0)
		{
			if (iParam1 > Global_15714)
			{
				if (Global_15719 == 0)
				{
					unk_0xB518E9C8553B1D2B(0);
					Global_14413.f_1 = 3;
					Global_15712 = 0;
					Global_15713 = 1;
					Global_15765 = 0;
					Global_15708 = 0;
					Global_15709 = 0;
					Global_15723 = 0;
					Global_15722 = 0;
					Global_14412 = 0;
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
		if (unk_0x2964A62922189B93())
		{
			return 0;
		}
		if (func_50(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_49();
		Global_15001 = { Global_15166 };
		Global_15718 = Global_15719;
		Global_15725 = Global_15726;
		Global_2621442 = Global_2621441;
		Global_15727 = { Global_15743 };
		Global_15720 = Global_15721;
		Global_16702 = Global_16703;
		Global_16710 = { Global_16716 };
		Global_16704 = Global_16705;
		Global_16706 = Global_16707;
		Global_16708 = Global_16709;
		Global_15331.f_370 = Global_16701;
		Global_15331.f_368 = Global_16699;
		Global_15331.f_369 = Global_16700;
		Global_15708 = Global_15709;
		if (Global_15718)
		{
			unk_0x77621132305B133B(&Global_2283, 20);
			unk_0x77621132305B133B(&Global_2284, 17);
			unk_0x77621132305B133B(&Global_2285, 0);
			if (bParam2)
			{
				func_42();
				if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14413.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14379 == 1)
			{
				return 0;
			}
			if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
			{
				if (unk_0x7E515EEFC038658D(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (func_41())
				{
					return 0;
				}
				if (unk_0x50CB4D478D09ED89(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (unk_0x5E161494BC10595F(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (unk_0x68A7CE67BDF5E83C(unk_0xC8B93D94F8954288(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69317)
				{
					if (unk_0xEE473B4B88D6F842(unk_0xC8B93D94F8954288()))
					{
						return 0;
					}
					if (unk_0x629B1FD22BE568E4(unk_0xA34E7C2A5118D638()))
					{
						return 0;
					}
					if (unk_0x3A2AAB26205C2C37(unk_0xC8B93D94F8954288()))
					{
						return 0;
					}
					if (unk_0x4887094DDBD415E7(unk_0xA34E7C2A5118D638()))
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
				switch (Global_14413.f_1)
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
				if (unk_0xDCC86F723E82125E(Global_2283, 9))
				{
					return 0;
				}
			}
			func_39();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_38();
		return 1;
	}
	if (Global_15712 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15714 || iParam1 == Global_15714)
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
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xB518E9C8553B1D2B(0);
	Global_15712 = 1;
}

void func_39()
{
	Global_15765 = Global_15764;
	Global_15759 = Global_15760;
	Global_15806 = { Global_15794 };
	Global_15812 = { Global_15800 };
	Global_15767 = Global_15766;
	Global_15836 = { Global_15818 };
	Global_15842 = { Global_15824 };
	Global_15848 = { Global_15830 };
	Global_15854 = { Global_15860 };
	Global_1598 = Global_1599;
	Global_1600 = Global_1601;
	Global_15723 = Global_15724;
	Global_15725 = Global_15726;
	Global_15727 = { Global_15743 };
	Global_15716 = Global_15717;
	Global_16728 = 0;
	Global_15761 = 0;
	Global_15762 = 0;
	unk_0x77621132305B133B(&Global_2284, 16);
}

int func_40()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_41()
{
	int iVar0;
	int iVar1;
	
	if (Global_69317)
	{
		iVar0 = 0;
		unk_0xA51F11E1DC7307BB(unk_0xC8B93D94F8954288(), &iVar1, 1);
		if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xA4860063B4E6B963() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		if (unk_0x0917C1C640BB7484(unk_0xC8B93D94F8954288(), 78, 1))
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
		if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
		{
			if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) == Global_100976.f_32519[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) == Global_100976.f_32519[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) == Global_100976.f_32519[2 /*29*/])
			{
				Global_14413 = 2;
			}
			else
			{
				Global_14413 = 0;
			}
		}
	}
	else
	{
		Global_14413 = func_43();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69317)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

int func_43()
{
	func_44();
	return Global_100976.f_1770.f_539.f_3549;
}

void func_44()
{
	int iVar0;
	
	if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
	{
		if (func_47(Global_100976.f_1770.f_539.f_3549) != unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()))
		{
			iVar0 = func_46(unk_0xC8B93D94F8954288());
			if (func_45(iVar0) && (!func_48(14) || Global_99928))
			{
				if (Global_100976.f_1770.f_539.f_3549 != iVar0 && func_45(Global_100976.f_1770.f_539.f_3549))
				{
					Global_100976.f_1770.f_539.f_3550 = Global_100976.f_1770.f_539.f_3549;
				}
				Global_100976.f_1770.f_539.f_3551 = iVar0;
				Global_100976.f_1770.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_100976.f_1770.f_539.f_3549 != 145)
			{
				Global_100976.f_1770.f_539.f_3551 = Global_100976.f_1770.f_539.f_3549;
			}
			return;
		}
	}
	Global_100976.f_1770.f_539.f_3549 = 145;
}

bool func_45(int iParam0)
{
	return iParam0 < 3;
}

int func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x95CCECA3948CFE7B(iParam0))
	{
		iVar1 = unk_0x6D5BB810CC209E15(iParam0);
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
		return Global_100976.f_32519[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_48(int iParam0)
{
	return Global_35700 == iParam0;
}

void func_49()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15001[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15001[iVar0 /*10*/].f_1), "", 24);
		Global_15001[iVar0 /*10*/].f_7 = 0;
		Global_15001[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15001.f_161 = -99;
	Global_15001.f_162 = { 0f, 0f, 0f };
}

bool func_50(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338611.f_203[iParam1];
			}
			break;
	}
	return unk_0xDCC86F723E82125E(Global_1338611.f_949, iParam0);
}

void func_51()
{
	unk_0xE9A2B98CC2F095D6();
	Global_16723 = 0;
	if ((unk_0x44E93B894936152F() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0xB518E9C8553B1D2B(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0x2964A62922189B93())
	{
		unk_0xB518E9C8553B1D2B(1);
		Global_15712 = 6;
		return;
	}
}

void func_52(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15166 = { *uParam0 };
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = iParam5;
	if (iParam3 == 0)
	{
		Global_16699 = 1;
		Global_16697 = 0;
	}
	else
	{
		Global_16699 = 0;
		Global_16697 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16700 = 1;
		Global_16698 = 0;
	}
	else
	{
		Global_16700 = 0;
		Global_16698 = 1;
	}
}

int func_53()
{
	struct<3> Var0;
	
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	if (func_54())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0xCE4D902766AE0E55(&Var0);
		if (Global_14358 == 0)
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
	if (unk_0xCBC8FFE55DC722B5(joaat("cellphone_flashhand")) > 0)
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
	if (!Global_69317)
	{
		if (!unk_0x2DC9BA2299B45EA6(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x8EB9A60FB4C37A34(iParam2, 0);
			}
			else
			{
				unk_0x8EB9A60FB4C37A34(iParam2, 1);
			}
		}
		if (!unk_0x2DC9BA2299B45EA6(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x7EAD9630176BD15E(iParam2, 0);
			}
			else
			{
				unk_0x7EAD9630176BD15E(iParam2, 1);
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
	
	if (unk_0xB8A06E7E729EED0A(uLocal_51) || !unk_0xF8D041B05C3D1FD4(uLocal_51, uParam0))
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
	if (Global_15712 != 0 || unk_0x2964A62922189B93())
	{
		return 1;
	}
	return 0;
}

int func_60(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9)
{
	if (!unk_0xA3858ADDDBC3CB71() || unk_0xA77673910115074B())
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
	Global_15760 = 0;
	Global_15719 = 1;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_15717 = 0;
	Global_15764 = 0;
	Global_15766 = 0;
	Global_2621441 = 0;
	return func_37(sParam3, iParam4, bParam7);
}

int func_62(int iParam0)
{
	return iLocal_3511[iParam0];
}

int func_63(int iParam0)
{
	if ((Global_16826 || Global_16825) || Global_16827)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_117[iParam0 /*10*/].f_8 != 138)
	{
		if (Global_14413.f_1 == 10)
		{
			if (Global_1598 == iParam0)
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
	Global_14578 = 0;
	func_65();
}

void func_65()
{
	if (unk_0x44E93B894936152F() || Global_14412 == 1)
	{
		unk_0xE9A2B98CC2F095D6();
		Global_16723 = 0;
		unk_0xB518E9C8553B1D2B(0);
		Global_15712 = 6;
		Global_14413.f_1 = Global_14415;
		return;
	}
}

void func_66()
{
	Global_14578 = 0;
	func_51();
}

float func_67(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xB6900B8CB0ABBD2B(iParam0))
	{
		Var0 = { unk_0x44C17CCB85A88A1F(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x44C17CCB85A88A1F(iParam0, 0) };
	}
	return unk_0x4F982ED5336EA899(Var0, Param1, iParam4);
}

int func_68(int iParam0)
{
	if (unk_0x95CCECA3948CFE7B(iParam0))
	{
		if (unk_0x5D42322C7DB888D0(iParam0, 0))
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
	iVar0 = unk_0x974516F979AD07BC();
	if (unk_0x95CCECA3948CFE7B(iVar0))
	{
		if (!unk_0xD28A89C669EAD2E4(iVar0))
		{
			unk_0xFD816D0E738EB817(iVar0, 1, 0);
			iVar3 = 1;
		}
		if (unk_0x5D42322C7DB888D0(iVar0, 0))
		{
			if (bParam18)
			{
				func_77(iVar0);
			}
			if (unk_0x8DF850DA069BF37C(iVar0, Param0, Param3, fParam6, 0, 1, 0))
			{
				bVar1 = true;
			}
			else
			{
				Var10 = { unk_0x44C17CCB85A88A1F(iVar0, 1) };
				if ((Var10.f_2 > Param0.f_2 && Var10.f_2 < Param3.f_2) || (Var10.f_2 > Param3.f_2 && Var10.f_2 < Param0.f_2))
				{
					if (func_74(iVar0, Param0, Param3, fParam6))
					{
						bVar1 = true;
					}
				}
			}
			if (unk_0x5D42322C7DB888D0(iVar0, 0))
			{
				if (unk_0x6B89D299CB2A726F(iVar0, joaat("taxi")))
				{
					if (unk_0xC0ADAF0814175B68(iVar0, -1) != unk_0xC8B93D94F8954288() && unk_0xC0ADAF0814175B68(iVar0, -1) != 0)
					{
						if (unk_0x4F982ED5336EA899(Param0 + Param3 / Vector(2f, 2f, 2f), unk_0x44C17CCB85A88A1F(iVar0, 1), 1) < 20f)
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
					if (unk_0x5D42322C7DB888D0(iVar0, 0))
					{
						iVar13 = unk_0x6D5BB810CC209E15(iVar0);
						unk_0xF4A2FB5739A54B11(iVar0, &Var4, &Var7);
						if (unk_0xAF40E7422A6D9D80(iVar13))
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
				if (unk_0x5D42322C7DB888D0(iVar0, 0))
				{
					if (bVar2)
					{
						unk_0x3FC9316FEF4E4720(Param7, 5f, 0, 0, 0, 0, 0);
						unk_0x765E3FA65D011F03(iVar0, uParam10);
						unk_0xC76B5C68AB6DC7DF(iVar0, Param7, 1, 0, 0, 1);
						unk_0xF18809B65D87E197(iVar0);
						if (bParam17)
						{
							unk_0x57892FEA93664769(iVar0, 0, 1, 0);
							unk_0x4A6381DCF16569D3(iVar0, 1);
						}
					}
					else
					{
						if (!unk_0xD28A89C669EAD2E4(iVar0) || !unk_0x1F59F772AA90087D(iVar0, 1))
						{
							unk_0xFD816D0E738EB817(iVar0, 1, 1);
						}
						if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iVar0, 0))
						{
							unk_0xC76B5C68AB6DC7DF(unk_0xC8B93D94F8954288(), unk_0x44C17CCB85A88A1F(iVar0, 1), 1, 0, 0, 1);
						}
						unk_0x95F5F15D238A7F1C(&iVar0);
					}
				}
			}
			if (bParam14)
			{
				unk_0xC1CDE9EE94158485(Param0, Param3, fParam6, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (unk_0x95CCECA3948CFE7B(iVar0))
				{
					if (unk_0xD28A89C669EAD2E4(iVar0))
					{
						unk_0xEF84021B2AB5E334(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!unk_0xD28A89C669EAD2E4(iVar0))
			{
				unk_0xFD816D0E738EB817(iVar0, 1, 0);
			}
			iVar14 = unk_0xC0ADAF0814175B68(iVar0, -1);
			if (unk_0x95CCECA3948CFE7B(iVar14) && !unk_0x2DC9BA2299B45EA6(iVar14))
			{
				unk_0xC76B5C68AB6DC7DF(iVar14, unk_0x44C17CCB85A88A1F(iVar14, 1), 1, 0, 0, 1);
			}
			iVar15 = unk_0x66B735F5B005FAD7(unk_0x6D5BB810CC209E15(iVar0));
			if (iVar15 <= 2)
			{
				iVar14 = unk_0xC0ADAF0814175B68(iVar0, 0);
				if (unk_0x95CCECA3948CFE7B(iVar14) && !unk_0x2DC9BA2299B45EA6(iVar14))
				{
					unk_0xC76B5C68AB6DC7DF(iVar14, unk_0x44C17CCB85A88A1F(iVar14, 1), 1, 0, 0, 1);
				}
			}
			if (iVar15 <= 4)
			{
				iVar14 = unk_0xC0ADAF0814175B68(iVar0, 1);
				if (unk_0x95CCECA3948CFE7B(iVar14) && !unk_0x2DC9BA2299B45EA6(iVar14))
				{
					unk_0xC76B5C68AB6DC7DF(iVar14, unk_0x44C17CCB85A88A1F(iVar14, 1), 1, 0, 0, 1);
				}
				iVar14 = unk_0xC0ADAF0814175B68(iVar0, 2);
				if (unk_0x95CCECA3948CFE7B(iVar14) && !unk_0x2DC9BA2299B45EA6(iVar14))
				{
					unk_0xC76B5C68AB6DC7DF(iVar14, unk_0x44C17CCB85A88A1F(iVar14, 1), 1, 0, 0, 1);
				}
			}
			unk_0x95F5F15D238A7F1C(&iVar0);
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
	
	if (!unk_0x95CCECA3948CFE7B(iParam0) || !unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_73(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xDCC86F723E82125E(Global_100976.f_5863[iVar9], 0))
		{
			if (unk_0x86C606C3A2B31739(&sVar1, iParam0))
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
	
	if (unk_0x5D42322C7DB888D0(iParam0, 0))
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
		unk_0xA8349C905E4A8DE7(unk_0x6D5BB810CC209E15(iParam0), &Var31, &Var34);
		Var18[0 /*3*/] = { unk_0xCC31DB73C65552D8(iParam0, Var31.f_0, Var31.f_1, 0f) };
		Var18[1 /*3*/] = { unk_0xCC31DB73C65552D8(iParam0, Var31.f_0, Var34.f_1, 0f) };
		Var18[2 /*3*/] = { unk_0xCC31DB73C65552D8(iParam0, Var34.f_0, Var31.f_1, 0f) };
		Var18[3 /*3*/] = { unk_0xCC31DB73C65552D8(iParam0, Var34.f_0, Var34.f_1, 0f) };
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
	if (unk_0x95CCECA3948CFE7B(uParam0))
	{
		if (unk_0x5D42322C7DB888D0(iParam0, 0))
		{
			if (unk_0x78FF715074ED0311(iParam0) <= 200f)
			{
				unk_0x62C4DFB4097A1725(iParam0, 500f);
			}
			if (unk_0x6EA4CD8002309632(iParam0) <= 700f)
			{
				unk_0x62C4DFB4097A1725(iParam0, 900f);
			}
			if (unk_0xD3A4099D2845F152(iParam0) < 200)
			{
				unk_0x62C4DFB4097A1725(iParam0, 500f);
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
		if ((!unk_0x2DC9BA2299B45EA6(Local_755[iVar0 /*33*/]) && !unk_0x902595DAD7718896(Local_755[iVar0 /*33*/], 1)) || Local_1619[iVar0 /*24*/].f_3 == 1)
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
											Local_755[iVar0 /*33*/].f_20 = unk_0x7C62BC1EB194D985(joaat("prop_cs_fertilizer"), 2460.098f, 4957.283f, 44.1304f, 1, 1, 0);
											Local_755[iVar0 /*33*/].f_5 = 1;
											func_99(iVar0, 3, 0, 0);
										}
									}
									else if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2478.32f, 4982.325f, 44.8913f, 49.5021f, joaat("weapon_pistol"), 0, 0))
									{
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 0, 0, 0);
										Local_755[iVar0 /*33*/].f_20 = unk_0x7C62BC1EB194D985(joaat("prop_cs_fertilizer"), 2478.444f, 4976.921f, 44.5614f, 1, 1, 0);
										Local_755[iVar0 /*33*/].f_5 = 1;
										func_99(iVar0, 2, 0, 0);
									}
									break;
								
								case 5:
									if (iLocal_2511 == 3)
									{
										if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2454.753f, 4951.719f, 44.1445f, 316.5541f, joaat("weapon_pistol"), 0, 0))
										{
											Local_755[iVar0 /*33*/].f_20 = unk_0x7C62BC1EB194D985(joaat("prop_cs_fertilizer"), 2455.753f, 4952.719f, 44.1445f, 1, 1, 0);
											Local_755[iVar0 /*33*/].f_5 = 1;
											func_99(iVar0, 3, 0, 0);
										}
									}
									else if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2475.873f, 4984.426f, 45.0916f, 45.8993f, joaat("weapon_pistol"), 0, 0))
									{
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 0, 0, 0);
										Local_755[iVar0 /*33*/].f_20 = unk_0x7C62BC1EB194D985(joaat("prop_cs_fertilizer"), 2476.582f, 4978.492f, 44.5734f, 1, 1, 0);
										Local_755[iVar0 /*33*/].f_5++;
										func_99(iVar0, 2, 0, 0);
									}
									break;
								
								case 8:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_02"), 2505.451f, 4970.663f, 43.548f, 49.5021f, joaat("weapon_pistol"), 1, 0))
									{
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 0, 0, 0);
										Local_755[iVar0 /*33*/].f_14 = unk_0x0B15BB6DFB729046(2505.451f, 4970.663f, 43.548f, 0f, 0f, 88.725f, 2);
										func_98(Local_755[iVar0 /*33*/], 20f, 5f, 90f, -90f, 60f);
										unk_0xB7F5BF6BE1CE7627(Local_755[iVar0 /*33*/], "A_M_M_HillBilly_02_WHITE_MINI_02");
										unk_0xA5666A46C1079EFE(Local_755[iVar0 /*33*/], Local_755[iVar0 /*33*/].f_14, "misschinese2_bank5", "peds_shootcans_a", 1000f, -4f, 1, 0, 1148846080, 0);
										unk_0x53DDB73894A6597A(Local_755[iVar0 /*33*/].f_14, 1);
										unk_0x01BAA21528B22625(Local_755[iVar0 /*33*/], 0, 0);
										func_99(iVar0, 4, 0, Local_755[iVar0 /*33*/].f_14);
										func_32(7, 0);
									}
									break;
								
								case 9:
									if (func_101(iVar0, joaat("a_m_m_hillbilly_01"), 2505.451f, 4970.663f, 43.548f, 49.5021f, joaat("weapon_pistol"), 1, 0))
									{
										Local_755[iVar0 /*33*/].f_14 = unk_0x0B15BB6DFB729046(2507.879f, 4970.188f, 43.5f, 0f, 0f, 93.42f, 2);
										unk_0x53DDB73894A6597A(Local_755[iVar0 /*33*/].f_14, 1);
										func_100(&Local_1619, iVar0, Local_755[iVar0 /*33*/], 0, 0, 0);
										unk_0xA5666A46C1079EFE(Local_755[iVar0 /*33*/], Local_755[iVar0 /*33*/].f_14, "misschinese2_bank5", "peds_shootcans_b", 1000f, -4f, 1, 0, 1148846080, 0);
										unk_0x01BAA21528B22625(Local_755[iVar0 /*33*/], 0, 0);
										func_99(iVar0, 4, 0, Local_755[iVar0 /*33*/].f_14);
									}
									break;
							}
							if (unk_0x95CCECA3948CFE7B(Local_755[iVar0 /*33*/]))
							{
								unk_0x05BE583DF8C6A617(Local_755[iVar0 /*33*/], 1);
								unk_0x2F8AFB8106593ABE(Local_755[iVar0 /*33*/], 1);
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
										unk_0x687051455B40FE5B(Local_755[iVar0 /*33*/], 5);
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
							if (!unk_0x2DC9BA2299B45EA6(Local_755[iVar0 /*33*/]))
							{
								unk_0x05BE583DF8C6A617(Local_755[iVar0 /*33*/], 1);
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
					if (!unk_0x2DC9BA2299B45EA6(Local_755[iVar0 /*33*/]))
					{
						unk_0x3907D4738A2C8ABD(Local_755[iVar0 /*33*/], 1);
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
										if (unk_0x95CCECA3948CFE7B(Local_755[iVar0 /*33*/].f_20))
										{
											if (unk_0x15A98230ABCA9B2D(Local_755[iVar0 /*33*/].f_20) && unk_0xDA402271D45DCB02(Local_755[iVar0 /*33*/].f_20))
											{
												unk_0xAD318582A32CA5D2(Local_755[iVar0 /*33*/].f_20, Local_755[iVar0 /*33*/], unk_0xF2122440C667309F(Local_755[iVar0 /*33*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
												Local_755[iVar0 /*33*/].f_5++;
											}
											if (unk_0x95CCECA3948CFE7B(Local_755[iVar0 /*33*/].f_20))
											{
												if (Local_755[iVar0 /*33*/].f_2 == 4)
												{
													unk_0x5323F488E6A1B660(Local_755[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 1000f, -1f, -1, 1, 0, 0, 0, 0);
												}
												else
												{
													unk_0x5323F488E6A1B660(Local_755[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 1000f, -1f, -1, 1, 0, 0, 0, 0);
												}
												unk_0x05BE583DF8C6A617(Local_755[iVar0 /*33*/], 1);
												unk_0x01BAA21528B22625(Local_755[iVar0 /*33*/], 0, 0);
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
									func_97(Local_755[iVar0 /*33*/], &(Local_755[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1);
								}
								if (unk_0xCD61E9D5CABC7E35(Local_755[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3))
								{
									unk_0x678FDF6C11F8E607(Local_755[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 1.4f);
								}
								if (unk_0xCD61E9D5CABC7E35(Local_755[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
								{
									unk_0x678FDF6C11F8E607(Local_755[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 1.4f);
								}
								if (unk_0x95CCECA3948CFE7B(Local_755[iVar0 /*33*/].f_20))
								{
									if (Local_755[iVar0 /*33*/].f_5 > 2 && Local_755[iVar0 /*33*/].f_5 <= 6)
									{
										if (unk_0xB0A9B470CE75BF12(Local_755[iVar0 /*33*/].f_20))
										{
											Local_755[iVar0 /*33*/].f_12 = (func_96(unk_0x44C17CCB85A88A1F(Local_755[iVar0 /*33*/], 1), Local_755[iVar0 /*33*/].f_6, 1) - unk_0x59DD203239FBDCAD(Local_755[iVar0 /*33*/]));
											Local_755[iVar0 /*33*/].f_12 = func_95((Local_755[iVar0 /*33*/].f_12 / 4f), -15f, 15f);
											if (!unk_0x770AAB67BDD9C729(Local_755[iVar0 /*33*/]))
											{
												unk_0x765E3FA65D011F03(Local_755[iVar0 /*33*/], (unk_0x59DD203239FBDCAD(Local_755[iVar0 /*33*/]) + (unk_0x0000000050597EE2() * Local_755[iVar0 /*33*/].f_12)));
											}
										}
									}
								}
								switch (Local_755[iVar0 /*33*/].f_5)
								{
									case 0:
										if (unk_0x95CCECA3948CFE7B(Local_755[iVar0 /*33*/].f_20))
										{
											if (unk_0x15A98230ABCA9B2D(Local_755[iVar0 /*33*/].f_20) && unk_0xDA402271D45DCB02(Local_755[iVar0 /*33*/].f_20))
											{
												unk_0xAD318582A32CA5D2(Local_755[iVar0 /*33*/].f_20, Local_755[iVar0 /*33*/], unk_0xF2122440C667309F(Local_755[iVar0 /*33*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
												func_32(20, 0);
												Local_755[iVar0 /*33*/].f_5++;
											}
										}
									
									case 1:
										if (unk_0x95CCECA3948CFE7B(Local_755[iVar0 /*33*/].f_20))
										{
											if (func_67(Local_755[iVar0 /*33*/], 2495.779f, 5004.715f, 43.87337f, 1) < 99f)
											{
												if (Local_755[iVar0 /*33*/].f_2 == 4)
												{
													unk_0x5323F488E6A1B660(Local_755[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 1000f, -1f, -1, 1, 0, 0, 0, 0);
												}
												else
												{
													unk_0x5323F488E6A1B660(Local_755[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 1000f, -1f, -1, 1, 0, 0, 0, 0);
												}
												unk_0x01BAA21528B22625(Local_755[iVar0 /*33*/], 0, 0);
												unk_0x05BE583DF8C6A617(Local_755[iVar0 /*33*/], 1);
												Local_755[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 2:
										if (unk_0xCD61E9D5CABC7E35(Local_755[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3) || unk_0xCD61E9D5CABC7E35(Local_755[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
										{
											Local_755[iVar0 /*33*/].f_6 = { 2466.903f, 4996.254f, 45.5443f };
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										if (unk_0xA0C23498D8E0BB93(Local_755[iVar0 /*33*/], Local_755[iVar0 /*33*/].f_6, 1.5f, 1.5f, 2f, 0, 1, 0))
										{
											Local_755[iVar0 /*33*/].f_6 = { 2461.332f, 4998.94f, 45.359f };
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 4:
										if (unk_0xA0C23498D8E0BB93(Local_755[iVar0 /*33*/], Local_755[iVar0 /*33*/].f_6, 1.5f, 1.5f, 2f, 0, 1, 0))
										{
											Local_755[iVar0 /*33*/].f_6 = { 2455.984f, 4997.404f, 45.2645f };
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 5:
										if (unk_0xA0C23498D8E0BB93(Local_755[iVar0 /*33*/], Local_755[iVar0 /*33*/].f_6, 1.5f, 1.5f, 2f, 0, 1, 0))
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
										if (unk_0xA0C23498D8E0BB93(Local_755[iVar0 /*33*/], Local_755[iVar0 /*33*/].f_6, 1.5f, 1.5f, 2f, 0, 1, 0))
										{
											if (unk_0xCD61E9D5CABC7E35(Local_755[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3))
											{
												unk_0xE80E983DE27B676E(Local_755[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", -1.5f);
											}
											if (unk_0xCD61E9D5CABC7E35(Local_755[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
											{
												unk_0xE80E983DE27B676E(Local_755[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", -1.5f);
											}
											Local_755[iVar0 /*33*/].f_6 = { 0f, 0f, 0f };
											if (unk_0x95CCECA3948CFE7B(Local_755[iVar0 /*33*/].f_20))
											{
												unk_0xB81176DFD2611E8B(Local_755[iVar0 /*33*/].f_20, 0, 1);
											}
											if (func_68(iLocal_2507))
											{
												if (Local_755[iVar0 /*33*/].f_2 == 4)
												{
													unk_0x9740820061E05C06(Local_755[iVar0 /*33*/], "move_m@gangster@var_e", 1048576000);
													unk_0x9CEFBE395E148A32(Local_755[iVar0 /*33*/], iLocal_2507, -1, -1, 1f, 1, 0);
													func_99(func_18(6), 14, 0, 0);
													func_99(func_18(7), 33, 0, 0);
												}
												else
												{
													unk_0x9740820061E05C06(Local_755[iVar0 /*33*/], "move_m@gangster@var_f", 1048576000);
													unk_0x9CEFBE395E148A32(Local_755[iVar0 /*33*/], iLocal_2507, -1, 0, 1f, 1, 0);
												}
											}
											Local_755[iVar0 /*33*/].f_5++;
											Local_755[iVar0 /*33*/].f_14 = 0;
											Local_755[iVar0 /*33*/].f_15 = 0;
										}
										break;
									
									case 7:
										func_94(iVar0);
										if (unk_0x277ECDA23D8CCEB4(Local_755[iVar0 /*33*/], 0))
										{
											unk_0x05BE583DF8C6A617(Local_755[iVar0 /*33*/], 0);
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 8:
										if (func_68(iLocal_2507))
										{
											if (!unk_0x74CAAD9E721B315D(iLocal_2507, -1))
											{
												if (Local_755[iVar0 /*33*/].f_2 == 4)
												{
													if (!unk_0x74CAAD9E721B315D(iLocal_2507, 0))
													{
														iVar1 = func_18(5);
														if (iVar1 >= 0)
														{
															if (!unk_0x2DC9BA2299B45EA6(Local_755[iVar1 /*33*/]))
															{
																if (unk_0x7F13E3D2383CF15F(Local_755[iVar1 /*33*/]))
																{
																	func_93();
																	unk_0xAC59C2795E065D27(0, iLocal_2507, 2367.668f, 5098.645f, 46.8185f, 12f, 0, joaat("burrito"), 786599, 5f, 5f);
																	unk_0x84D04CB0E2B93F55(0, iLocal_2507, 19f, 786599);
																	func_92(&(Local_755[iVar0 /*33*/]), 0);
																	func_91(25, 1);
																	Local_755[iVar0 /*33*/].f_5++;
																}
															}
														}
													}
												}
											}
											if (!unk_0x74CAAD9E721B315D(iLocal_2507, 0))
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
										unk_0x81333BEA4837207C(0, 2459.646f, 4977.735f, 50.5678f, 1f, 20000, 0.25f, 0, 1193033728);
										unk_0x81333BEA4837207C(0, 2456.221f, 4974.685f, 50.5678f, 1f, 20000, 0.25f, 0, 1193033728);
										unk_0xF61B1895D9A739D2(0, 2456.221f, 4974.685f, 50.5678f, 92.5678f, 1061158912);
										unk_0x6EAFBB3A7F6ADEA9(0, 92.5678f, 0);
										func_92(&(Local_755[iVar0 /*33*/]), 0);
										Local_755[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (unk_0x090C65D5190A249D(Local_755[iVar0 /*33*/], 242628503) == 7)
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
										unk_0x81333BEA4837207C(0, 2450.491f, 4986.83f, 50.5677f, 1f, 20000, 0.25f, 0, 1193033728);
										unk_0x6EAFBB3A7F6ADEA9(0, 309.5567f, 0);
										unk_0xCF73E1BFE9942411(0, 2000);
										func_92(&(Local_755[iVar0 /*33*/]), 0);
										Local_755[iVar0 /*33*/].f_5++;
										break;
									
									case 3:
										if (unk_0x090C65D5190A249D(Local_755[iVar0 /*33*/], 242628503) == 7)
										{
											Local_755[iVar0 /*33*/].f_5 = 0;
										}
										break;
								}
								break;
							
							case 6:
								if (unk_0x090C65D5190A249D(Local_755[iVar0 /*33*/], 993674639) == 7 && Local_755[iVar0 /*33*/].f_5 > 1)
								{
									Local_755[iVar0 /*33*/].f_5 = 0;
								}
								switch (Local_755[iVar0 /*33*/].f_5)
								{
									case 0:
										unk_0x80423B6A45BF05DA(Local_755[iVar0 /*33*/], joaat("weapon_unarmed"), 1);
										unk_0x6EAFBB3A7F6ADEA9(Local_755[iVar0 /*33*/], 219f, 1500);
										Local_755[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (unk_0x090C65D5190A249D(Local_755[iVar0 /*33*/], 1920390111) == 7)
										{
											unk_0xFCA99C3640D1F1B5(Local_755[iVar0 /*33*/], "WORLD_HUMAN_GUARD_STAND_ARMY", 0, 0);
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							
							case 32:
								if (!unk_0x2DC9BA2299B45EA6(Local_755[iVar0 /*33*/]))
								{
									if (Local_755[iVar0 /*33*/].f_1 == 1 || func_4(unk_0xC8B93D94F8954288(), Local_755[iVar0 /*33*/], 1) < 20f)
									{
										func_97(Local_755[iVar0 /*33*/], &(Local_755[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1);
									}
									if (Local_755[iVar0 /*33*/].f_5 < 10)
									{
									}
									switch (Local_755[iVar0 /*33*/].f_5)
									{
										case 0:
											unk_0xFCA99C3640D1F1B5(Local_755[iVar0 /*33*/], "WORLD_HUMAN_AA_SMOKE", Local_755[iVar0 /*33*/].f_14, 0);
											Local_755[iVar0 /*33*/].f_5++;
											break;
										
										case 1:
											if (func_4(unk_0xC8B93D94F8954288(), Local_755[iVar0 /*33*/], 1) < 10f)
											{
												iVar3 = unk_0x531444754C426278(0, 3);
												if (iVar3 == 0)
												{
													unk_0x7033366221CC71C6(Local_755[iVar0 /*33*/], "GENERIC_CURSE_MED", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", 0);
												}
												else if (iVar3 == 1)
												{
													unk_0x7033366221CC71C6(Local_755[iVar0 /*33*/], "GENERIC_INSULT_MED", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", 0);
												}
												else
												{
													unk_0x7033366221CC71C6(Local_755[iVar0 /*33*/], "CHAT_STATE", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", 0);
												}
												Local_755[iVar0 /*33*/].f_5++;
												Local_755[iVar0 /*33*/].f_14 = (unk_0x693EBB4F13506457() + unk_0x531444754C426278(5000, 10000));
											}
											break;
										
										case 2:
											if (unk_0x693EBB4F13506457() > Local_755[iVar0 /*33*/].f_14)
											{
												Local_755[iVar0 /*33*/].f_5 = 1;
											}
											break;
										
										case 10:
											if (func_35("CHI2_hear", 8, Local_755[iVar0 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_755[iVar0 /*33*/].f_5++;
												Local_755[iVar0 /*33*/].f_14 = unk_0x693EBB4F13506457() + 1000;
											}
											break;
										
										case 11:
											if (unk_0x693EBB4F13506457() > Local_755[iVar0 /*33*/].f_14)
											{
												unk_0x7FFE31040063EDAE(Local_755[iVar0 /*33*/], unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 5000);
												Local_755[iVar0 /*33*/].f_5++;
												Local_755[iVar0 /*33*/].f_14 = unk_0x693EBB4F13506457() + 5000;
											}
											break;
										
										case 12:
											if (unk_0x46E74F6A73335A40(unk_0xA34E7C2A5118D638(), Local_755[iVar0 /*33*/]) && func_67(Local_755[iVar0 /*33*/], 2448.003f, 4982.305f, 45.8519f, 1) < 10f)
											{
												if (unk_0x693EBB4F13506457() > (Local_755[iVar0 /*33*/].f_14 - 3000))
												{
													unk_0x81333BEA4837207C(Local_755[iVar0 /*33*/], unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 1f, 20000, 0.25f, 0, 1193033728);
													Local_755[iVar0 /*33*/].f_5 = 15;
												}
											}
											else if (unk_0x693EBB4F13506457() > Local_755[iVar0 /*33*/].f_14)
											{
												if (func_35("CHI2_nope", 8, Local_755[iVar0 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
												{
													Local_755[iVar0 /*33*/].f_5++;
												}
											}
											break;
										
										case 13:
											func_93();
											unk_0x81333BEA4837207C(0, 2449.114f, 4981.984f, 45.8102f, 1f, 20000, 0.25f, 0, 1193033728);
											unk_0x6EAFBB3A7F6ADEA9(0, 127.6328f, 3000);
											func_92(&(Local_755[iVar0 /*33*/]), 0);
											Local_755[iVar0 /*33*/].f_14 = unk_0x693EBB4F13506457() + 3000;
											Local_755[iVar0 /*33*/].f_5++;
											break;
										
										case 14:
											if (unk_0x693EBB4F13506457() > Local_755[iVar0 /*33*/].f_14 || unk_0x090C65D5190A249D(Local_755[iVar0 /*33*/], 242628503) == 7)
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
											if (unk_0x090C65D5190A249D(Local_755[iVar0 /*33*/], 713668775) == 7)
											{
												Local_755[iVar0 /*33*/].f_14 = unk_0x693EBB4F13506457() + 3000;
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
										Local_755[iVar0 /*33*/].f_14 = unk_0x693EBB4F13506457() + 3000;
										Local_755[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (unk_0x693EBB4F13506457() > Local_755[iVar0 /*33*/].f_14)
										{
											if (func_68(iLocal_2507))
											{
												unk_0x9CEFBE395E148A32(Local_755[iVar0 /*33*/], iLocal_2507, 20000, 1, 1f, 1, 0);
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
								if (Local_755[iVar0 /*33*/].f_1 == 1 || func_4(unk_0xC8B93D94F8954288(), Local_755[iVar0 /*33*/], 1) < 20f)
								{
									func_97(Local_755[iVar0 /*33*/], &(Local_755[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1);
								}
								switch (Local_755[iVar0 /*33*/].f_5)
								{
									case 0:
										iVar4 = joaat("weapon_unarmed");
										if (unk_0xA51F11E1DC7307BB(Local_755[iVar0 /*33*/], &iVar4, 1))
										{
											unk_0x20197476A89D4858(Local_755[iVar0 /*33*/], 0);
										}
										Local_755[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (!unk_0xA51F11E1DC7307BB(Local_755[iVar0 /*33*/], &iVar4, 1))
										{
											func_93();
											if (iVar0 == 1)
											{
												if (!unk_0x2DC9BA2299B45EA6(Local_755[2 /*33*/]))
												{
													unk_0xC518AECFA9CF7722(0, Local_755[2 /*33*/], 2000);
												}
											}
											else if (iVar0 == 2)
											{
												if (!unk_0x2DC9BA2299B45EA6(Local_755[1 /*33*/]))
												{
													unk_0xC518AECFA9CF7722(0, Local_755[1 /*33*/], 2000);
												}
											}
											else if (iVar0 == 6)
											{
												if (!unk_0x2DC9BA2299B45EA6(Local_755[7 /*33*/]))
												{
													unk_0xC518AECFA9CF7722(0, Local_755[7 /*33*/], 2000);
												}
											}
											else if (iVar0 == 7)
											{
												if (!unk_0x2DC9BA2299B45EA6(Local_755[6 /*33*/]))
												{
													unk_0xC518AECFA9CF7722(0, Local_755[6 /*33*/], 2000);
												}
											}
											if (Local_755[iVar0 /*33*/].f_14 != 0)
											{
												unk_0xFCA99C3640D1F1B5(0, "WORLD_HUMAN_HANG_OUT_STREET", Local_755[iVar0 /*33*/].f_14, 0);
											}
											else
											{
												unk_0xFCA99C3640D1F1B5(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 0);
											}
											func_92(&(Local_755[iVar0 /*33*/]), 0);
											Local_755[iVar0 /*33*/].f_5++;
											Local_755[iVar0 /*33*/].f_15 = unk_0x693EBB4F13506457() + 15000;
										}
										break;
									
									case 2:
										if (unk_0x090C65D5190A249D(Local_755[iVar0 /*33*/], 242628503) == 7 || unk_0x693EBB4F13506457() > Local_755[iVar0 /*33*/].f_15)
										{
											unk_0x5124C5FA52D2AF3E(Local_755[iVar0 /*33*/]);
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										if (unk_0x090C65D5190A249D(Local_755[iVar0 /*33*/], 242628503) == 7)
										{
											if (Local_755[iVar0 /*33*/].f_4 == 5)
											{
												unk_0x20197476A89D4858(Local_755[iVar0 /*33*/], 1);
												Local_755[iVar0 /*33*/].f_5++;
											}
											else
											{
												Local_755[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 4:
										if (unk_0x090C65D5190A249D(Local_755[iVar0 /*33*/], 716706914) == 7)
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
										unk_0xFCA99C3640D1F1B5(Local_755[iVar0 /*33*/], "WORLD_HUMAN_GUARD_STAND", 0, 0);
										unk_0x01BAA21528B22625(Local_755[iVar0 /*33*/], 0, 0);
										Local_755[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 14:
								switch (Local_755[iVar0 /*33*/].f_5)
								{
									case 0:
										unk_0xFCA99C3640D1F1B5(Local_755[iVar0 /*33*/], "WORLD_HUMAN_AA_SMOKE", 0, 0);
										unk_0x01BAA21528B22625(Local_755[iVar0 /*33*/], 0, 0);
										Local_755[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (unk_0x090C65D5190A249D(Local_755[iVar0 /*33*/], 993674639) == 7)
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
										unk_0xFCA99C3640D1F1B5(Local_755[iVar0 /*33*/], "WORLD_HUMAN_BINOCULARS", 0, 0);
										unk_0x01BAA21528B22625(Local_755[iVar0 /*33*/], 0, 0);
										Local_755[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 16:
								switch (Local_755[iVar0 /*33*/].f_5)
								{
									case 0:
										unk_0xFCA99C3640D1F1B5(Local_755[iVar0 /*33*/], "WORLD_HUMAN_DRINKING", 0, 0);
										unk_0x01BAA21528B22625(Local_755[iVar0 /*33*/], 0, 0);
										Local_755[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 17:
								if (Local_755[iVar0 /*33*/].f_5 < 10)
								{
									if (unk_0x46E74F6A73335A40(unk_0xA34E7C2A5118D638(), Local_755[iVar0 /*33*/]))
									{
										Local_755[iVar0 /*33*/].f_5 = 10;
									}
								}
								switch (Local_755[iVar0 /*33*/].f_5)
								{
									case 0:
										unk_0xC0E8B67A4385D37D("misscarsteal2peeing");
										Local_755[iVar0 /*33*/].f_5++;
										Local_755[iVar0 /*33*/].f_14 = 0;
										break;
									
									case 1:
										if (unk_0xF9B86DC1728F1339("misscarsteal2peeing"))
										{
											unk_0xFCA99C3640D1F1B5(Local_755[iVar0 /*33*/], "WORLD_HUMAN_DRINKING", 0, 1);
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 2:
										if (func_4(unk_0xC8B93D94F8954288(), Local_755[iVar0 /*33*/], 1) < 21.6f)
										{
											unk_0x5323F488E6A1B660(Local_755[iVar0 /*33*/], "misscarsteal2peeing", "peeing_loop", 8f, -8f, 25000, 1, 0, 0, 0, 0);
											Local_755[iVar0 /*33*/].f_5++;
											Local_755[iVar0 /*33*/].f_14 = unk_0x693EBB4F13506457() + 23000;
										}
										break;
									
									case 3:
										if (unk_0x693EBB4F13506457() > Local_755[iVar0 /*33*/].f_14)
										{
											Local_755[iVar0 /*33*/].f_14 = -1;
											unk_0xFCA99C3640D1F1B5(Local_755[iVar0 /*33*/], "WORLD_HUMAN_DRINKING", 0, 1);
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
										unk_0x81333BEA4837207C(0, 2434.891f, 4973.864f, 50.5679f, 1f, 20000, 0.25f, 0, 1193033728);
										unk_0xFCA99C3640D1F1B5(0, "WORLD_HUMAN_BINOCULARS", 0, 0);
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
												if (unk_0xAD158329EB26D8F4(2433.04f, 4967.87f, 46.28f, 0.8f, 0))
												{
													unk_0x70D845CB97788674(Local_755[iVar0 /*33*/], 2433.04f, 4967.87f, 46.28f, 0.8f, 0);
													Local_755[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 13:
												if (unk_0xAD158329EB26D8F4(2432.56f, 4968.38f, 46.27f, 0.8f, 0))
												{
													unk_0x70D845CB97788674(Local_755[iVar0 /*33*/], 2432.56f, 4968.38f, 46.27f, 0.8f, 0);
													Local_755[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 14:
												if (unk_0xAD158329EB26D8F4(2433.12f, 4965.59f, 46.27f, 0.8f, 0))
												{
													unk_0x70D845CB97788674(Local_755[iVar0 /*33*/], 2433.12f, 4965.59f, 46.27f, 0.8f, 0);
													Local_755[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 15:
												if (unk_0xAD158329EB26D8F4(2439.61f, 4960.99f, 46.27f, 0.4f, 0))
												{
													unk_0x70D845CB97788674(Local_755[iVar0 /*33*/], 2439.697f, 4960.996f, 46.28f, 0.4f, 0);
													Local_755[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 16:
												if (unk_0xAD158329EB26D8F4(2440.16f, 4962.99f, 46.27f, 0.4f, 0))
												{
													unk_0x70D845CB97788674(Local_755[iVar0 /*33*/], 2440.16f, 4962.99f, 46.27f, 0.4f, 0);
													Local_755[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 17:
												if (unk_0xAD158329EB26D8F4(2438.23f, 4962.25f, 46.27f, 0.4f, 0))
												{
													unk_0x70D845CB97788674(Local_755[iVar0 /*33*/], 2438.23f, 4962.25f, 46.27f, 0.4f, 0);
													Local_755[iVar0 /*33*/].f_5++;
												}
												break;
										}
										break;
									
									case 1:
										if (unk_0x090C65D5190A249D(Local_755[iVar0 /*33*/], 1647992574) == 7)
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
										if (unk_0x0BBFEAC55291063A(unk_0xA34E7C2A5118D638(), Local_755[iVar0 /*33*/]) || (func_90(unk_0x44C17CCB85A88A1F(Local_755[iVar0 /*33*/], 1), 1f, 1120403456) && unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 2448.583f, 4969.292f, 45.1856f, 2439.538f, 4978.061f, 46.82762f, 5.75f, 0, 1, 0)))
										{
											unk_0x80486019BE497773(Local_755[iVar0 /*33*/], 20000, 0, -1, 0);
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
										if (unk_0x0BBFEAC55291063A(unk_0xA34E7C2A5118D638(), Local_755[iVar0 /*33*/]) || (func_90(unk_0x44C17CCB85A88A1F(Local_755[iVar0 /*33*/], 1), 1f, 1120403456) && unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 2448.583f, 4969.292f, 45.1856f, 2439.538f, 4978.061f, 46.82762f, 5.75f, 0, 1, 0)))
										{
											if (func_35("TRV1", 1, unk_0xC8B93D94F8954288(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_755[iVar0 /*33*/].f_5++;
												Local_755[iVar0 /*33*/].f_14 = unk_0x693EBB4F13506457() + 2000;
											}
										}
										else
										{
											Local_755[iVar0 /*33*/].f_5++;
											Local_755[iVar0 /*33*/].f_14 = unk_0x693EBB4F13506457() + 2000;
										}
										break;
									
									case 4:
										if (unk_0x693EBB4F13506457() > Local_755[iVar0 /*33*/].f_14)
										{
											unk_0x622E764F80DBF8B7(Local_755[iVar0 /*33*/], unk_0xC8B93D94F8954288(), 200f, 200000, 0, 0);
											unk_0xF1A02DDEC7E15D6E(Local_755[iVar0 /*33*/], 1);
											unk_0x459A6F82E024C891(&(Local_755[iVar0 /*33*/]));
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							
							case 30:
								if (!unk_0x2DC9BA2299B45EA6(Local_755[iVar0 /*33*/]))
								{
									if (Local_755[iVar0 /*33*/].f_5 < 8)
									{
										if (unk_0xD46766E9A244DBCB(Local_755[iVar0 /*33*/], 0, 2))
										{
											if (!unk_0xD6B965E92DB098CE(Local_755[iVar0 /*33*/], 0, 2))
											{
												unk_0x640290651A86938B(Local_755[iVar0 /*33*/], joaat("weapon_pistol"), -1, 0, 1);
												unk_0x45EF2026AF681474(Local_755[iVar0 /*33*/], unk_0xC8B93D94F8954288(), 0, 16);
												func_88();
												unk_0xAAD662D7E0D59F4C(Local_755[iVar0 /*33*/], 0);
												unk_0x45EF2026AF681474(Local_755[iVar0 /*33*/], unk_0xC8B93D94F8954288(), 0, 16);
												unk_0xCBD60E398042F554(Local_755[iVar0 /*33*/], iLocal_1616);
												Local_755[iVar0 /*33*/].f_5 = 999;
											}
										}
									}
								}
								switch (Local_755[iVar0 /*33*/].f_5)
								{
									case 0:
										unk_0xC0E8B67A4385D37D("misschinese2_crystalmaze");
										unk_0xFDFD811E5C1B97AA(joaat("weapon_sawnoffshotgun"), 31, 0);
										unk_0xAAD662D7E0D59F4C(Local_755[iVar0 /*33*/], 1);
										unk_0xCBD60E398042F554(Local_755[iVar0 /*33*/], iLocal_1616);
										Local_755[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (unk_0xF9B86DC1728F1339("misschinese2_crystalmaze") && unk_0xC0212C3CDA6939B3(joaat("weapon_sawnoffshotgun")))
										{
											if (!unk_0x2DC9BA2299B45EA6(Local_755[iVar0 /*33*/]))
											{
												uLocal_2875 = unk_0x0B15BB6DFB729046(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
												unk_0x53DDB73894A6597A(uLocal_2875, 1);
												unk_0xA5666A46C1079EFE(Local_755[iVar0 /*33*/], iLocal_2875, "misschinese2_crystalmaze", "_cower_loop", 1000f, -8f, 0, 0, 1148846080, 0);
												if (!unk_0x95CCECA3948CFE7B(iLocal_2878))
												{
													iLocal_2878 = unk_0x528C51384A93BF09(joaat("weapon_sawnoffshotgun"), 40, 2433.59f, 4969.7f, 42.1854f, 1, 1065353216, 0);
													unk_0x68931E8B45B3CA92(iLocal_2878, 90f, 0f, 0f, 2, 1);
												}
												unk_0xE48D9147BC1F4CD7(Local_755[iVar0 /*33*/], unk_0xC8B93D94F8954288(), -1, 0, 2);
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
										uLocal_2874 = unk_0x0B15BB6DFB729046(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
										unk_0xA5666A46C1079EFE(Local_755[iVar0 /*33*/], uLocal_2874, "misschinese2_crystalmaze", "_cower_to_stand", 4f, -8f, 0, 0, 1148846080, 0);
										unk_0xE48D9147BC1F4CD7(Local_755[iVar0 /*33*/], unk_0xC8B93D94F8954288(), -1, 0, 2);
										Local_755[iVar0 /*33*/].f_5++;
										break;
									
									case 4:
										if (func_35("CHI2_DALE", 4, Local_755[iVar0 /*33*/], "ONEIL", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_755[iVar0 /*33*/].f_5++;
										}
										if ((unk_0xBC6B93737FCDC466(iLocal_2874) && unk_0x2091E42376999826(iLocal_2874) > 0.98f) || !unk_0xBC6B93737FCDC466(iLocal_2874))
										{
											Local_755[iVar0 /*33*/].f_5 = 5;
										}
										break;
									
									case 5:
										if ((unk_0xBC6B93737FCDC466(iLocal_2874) && unk_0x2091E42376999826(iLocal_2874) > 0.98f) || !unk_0xBC6B93737FCDC466(iLocal_2874))
										{
											iLocal_2873 = unk_0x0B15BB6DFB729046(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
											unk_0x53DDB73894A6597A(iLocal_2873, 1);
											unk_0xA5666A46C1079EFE(Local_755[iVar0 /*33*/], iLocal_2873, "misschinese2_crystalmaze", "_stand_loop", 4f, -8f, 0, 0, 1148846080, 0);
											Local_755[iVar0 /*33*/].f_5++;
											Local_755[iVar0 /*33*/].f_14 = (unk_0x693EBB4F13506457() + unk_0x531444754C426278(1000, 2000));
										}
										break;
									
									case 6:
										if (!unk_0xBC6B93737FCDC466(iLocal_2876) || iLocal_2876 == 0)
										{
											if (unk_0x693EBB4F13506457() > Local_755[iVar0 /*33*/].f_14)
											{
												iLocal_2876 = unk_0x0B15BB6DFB729046(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
												if (unk_0x531444754C426278(0, 2) == 1)
												{
													unk_0xA5666A46C1079EFE(Local_755[iVar0 /*33*/], iLocal_2876, "misschinese2_crystalmaze", "_stand_loop_a", 4f, -8f, 0, 0, 1148846080, 0);
												}
												else
												{
													unk_0xA5666A46C1079EFE(Local_755[iVar0 /*33*/], iLocal_2876, "misschinese2_crystalmaze", "_stand_loop_b", 4f, -8f, 0, 0, 1148846080, 0);
												}
											}
										}
										if (!unk_0xBC6B93737FCDC466(iLocal_2873) || iLocal_2873 == 0)
										{
											if ((unk_0xBC6B93737FCDC466(iLocal_2876) && unk_0x2091E42376999826(iLocal_2876) > 0.98f) || !unk_0xBC6B93737FCDC466(iLocal_2876))
											{
												iLocal_2873 = unk_0x0B15BB6DFB729046(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
												unk_0x53DDB73894A6597A(iLocal_2873, 1);
												unk_0xA5666A46C1079EFE(Local_755[iVar0 /*33*/], iLocal_2873, "misschinese2_crystalmaze", "_stand_loop", 4f, -8f, 0, 0, 1148846080, 0);
												Local_755[iVar0 /*33*/].f_14 = (unk_0x693EBB4F13506457() + unk_0x531444754C426278(1000, 2000));
											}
										}
										if (!func_59() || (func_67(unk_0xC8B93D94F8954288(), 2430.09f, 4965.93f, 41.55f, 1) > 3.438f && !unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 2427.079f, 4964.971f, 41.81169f, 2432.589f, 4959.331f, 48.7548f, 3.3125f, 0, 1, 0)))
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
										iLocal_2877 = unk_0x0B15BB6DFB729046(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
										unk_0xA5666A46C1079EFE(Local_755[iVar0 /*33*/], iLocal_2877, "misschinese2_crystalmaze", "_stand_to_aim", 4f, -8f, 0, 0, 1148846080, 0);
										unk_0x5DCB9AB3EDCDA9A2(iLocal_2878, Local_755[iVar0 /*33*/]);
										Local_755[iVar0 /*33*/].f_5++;
										break;
									
									case 9:
										if ((unk_0xBC6B93737FCDC466(iLocal_2877) && unk_0x2091E42376999826(iLocal_2877) > 0.98f) || !unk_0xBC6B93737FCDC466(iLocal_2877))
										{
											unk_0x7867B753FDFAFE2B(Local_755[iVar0 /*33*/], 1);
											unk_0x5124C5FA52D2AF3E(Local_755[iVar0 /*33*/]);
											unk_0x726676CF6AC20DCB(Local_755[iVar0 /*33*/], unk_0xC8B93D94F8954288(), -1, 1);
											Local_755[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 10:
										if (!func_59())
										{
											if (func_35("CHI2_DALEA", 4, Local_755[iVar0 /*33*/], "ONEIL", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												unk_0xAAD662D7E0D59F4C(Local_755[iVar0 /*33*/], 0);
												unk_0x45EF2026AF681474(Local_755[iVar0 /*33*/], unk_0xC8B93D94F8954288(), 0, 16);
												Local_755[iVar0 /*33*/].f_14 = (unk_0x693EBB4F13506457() + unk_0x531444754C426278(3000, 4000));
												Local_755[iVar0 /*33*/].f_15 = 0;
												Local_755[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 11:
										if (unk_0x693EBB4F13506457() > Local_755[iVar0 /*33*/].f_14)
										{
											if (Local_755[iVar0 /*33*/].f_15 < 4)
											{
												if (func_35("CHI2_DALEA", 4, Local_755[iVar0 /*33*/], "ONEIL", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
												{
													Local_755[iVar0 /*33*/].f_5++;
													Local_755[iVar0 /*33*/].f_14 = (unk_0x693EBB4F13506457() + unk_0x531444754C426278(3000, 4000));
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
								if (!unk_0x2DC9BA2299B45EA6(Local_755[iVar0 /*33*/]))
								{
									if (unk_0x0592F98C32AC22CA(unk_0x44C17CCB85A88A1F(Local_755[iVar0 /*33*/], 1), 2f, 1))
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
										if (func_35("WRK2", 1, Local_755[iVar0 /*33*/], "oneilcook", 2, unk_0xC8B93D94F8954288(), "trevor", -1, 0, 0, -1, 0, 0, 8))
										{
											Local_755[iVar0 /*33*/].f_5++;
											Local_755[iVar0 /*33*/].f_14 = unk_0x693EBB4F13506457() + 1300;
										}
										break;
									
									case 2:
										if (unk_0x693EBB4F13506457() > Local_755[iVar0 /*33*/].f_14)
										{
											unk_0x80486019BE497773(Local_755[iVar0 /*33*/], 20000, 0, -1, 0);
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
										unk_0x622E764F80DBF8B7(Local_755[iVar0 /*33*/], unk_0xC8B93D94F8954288(), 50f, 1000, 0, 0);
										Local_755[iVar0 /*33*/].f_5++;
										break;
									
									case 6:
										if (func_82("WRK2"))
										{
											if (unk_0x8F37C4B2B81C98B9() == 1 || unk_0x8F37C4B2B81C98B9() == 5)
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
										unk_0x2A262C5D2DAD436D(0, 1);
										unk_0x622E764F80DBF8B7(0, unk_0xC8B93D94F8954288(), 200f, 999999, 0, 0);
										unk_0x9F3B55DA0D0220DD(0, -1);
										func_92(&(Local_755[iVar0 /*33*/]), 0);
										unk_0xF1A02DDEC7E15D6E(Local_755[iVar0 /*33*/], 1);
										unk_0x459A6F82E024C891(&(Local_755[iVar0 /*33*/]));
										if (unk_0x6B4865E08E90ACC5(Local_755[iVar0 /*33*/].f_19))
										{
											unk_0x5356E82C1E5E0C44(&(Local_755[iVar0 /*33*/].f_19));
										}
										Local_755[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 4:
								if (iLocal_2881 == 1)
								{
									if (unk_0xBC6B93737FCDC466(Local_755[iVar0 /*33*/].f_14))
									{
										unk_0x7739CB1FE4967985(Local_755[iVar0 /*33*/].f_14, 0.69f);
									}
									if (iVar0 == 9)
									{
										iLocal_2881 = 0;
									}
								}
								if (iLocal_2882 == 1)
								{
									if (unk_0xBC6B93737FCDC466(Local_755[iVar0 /*33*/].f_14))
									{
										unk_0x7739CB1FE4967985(Local_755[iVar0 /*33*/].f_14, 0f);
									}
									if (iVar0 == 9)
									{
										iLocal_2882 = 0;
									}
									Local_755[iVar0 /*33*/].f_5 = 0;
								}
								if (Local_755[iVar0 /*33*/].f_2 == 8)
								{
									if (unk_0xBC6B93737FCDC466(Local_755[iVar0 /*33*/].f_14))
									{
										if (Local_755[iVar0 /*33*/].f_5 == 0)
										{
											if (!func_30(23) || iLocal_2511 == 3)
											{
												if (unk_0x090C65D5190A249D(Local_755[iVar0 /*33*/], 1785177548) == 1)
												{
													if (unk_0x2091E42376999826(Local_755[iVar0 /*33*/].f_14) > 0.024f && unk_0x2091E42376999826(Local_755[iVar0 /*33*/].f_14) < 0.033f)
													{
														iVar5 = 0;
														if (!unk_0x2DC9BA2299B45EA6(Local_755[iVar0 /*33*/]))
														{
															iVar6 = joaat("weapon_unarmed");
															if (unk_0xA51F11E1DC7307BB(Local_755[iVar0 /*33*/], &iVar6, 1))
															{
																unk_0x687051455B40FE5B(Local_755[iVar0 /*33*/], 100);
																if (iVar6 == joaat("weapon_pistol"))
																{
																	if (func_80(&iVar5))
																	{
																		unk_0x229A0C55DADC3F1D(Local_755[iVar0 /*33*/], joaat("weapon_pistol"), 12);
																		unk_0x8F3A8223410E0C15(Local_755[iVar0 /*33*/], unk_0x44C17CCB85A88A1F(iLocal_2657[iVar5], 1), 0);
																		func_97(Local_755[iVar0 /*33*/], &(Local_755[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1);
																		Local_755[iVar0 /*33*/].f_5 = 1;
																	}
																	else
																	{
																		unk_0x229A0C55DADC3F1D(Local_755[iVar0 /*33*/], joaat("weapon_pistol"), 12);
																		unk_0x8F3A8223410E0C15(Local_755[iVar0 /*33*/], 2493.1f, 4971f, 44.9f, 0);
																		func_97(Local_755[iVar0 /*33*/], &(Local_755[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1);
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
											if (unk_0x2091E42376999826(Local_755[iVar0 /*33*/].f_14) > 0.04f)
											{
												Local_755[iVar0 /*33*/].f_5 = 2;
												if (iLocal_2879 == 0)
												{
													unk_0x7033366221CC71C6(Local_755[iVar0 /*33*/], "generic_cheer", "A_M_M_Hillbilly_01_White_mini_02", "SPEECH_PARAMS_FORCE_SHOUTED", 0);
												}
											}
										}
										else if (Local_755[iVar0 /*33*/].f_5 == 2)
										{
											if (unk_0x2091E42376999826(Local_755[iVar0 /*33*/].f_14) > 0.6f)
											{
												Local_755[iVar0 /*33*/].f_5 = 0;
											}
										}
									}
								}
								if (Local_755[iVar0 /*33*/].f_5 == 3)
								{
									if (unk_0x090C65D5190A249D(Local_755[iVar0 /*33*/], 2106541073) == 7)
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
										unk_0x20E39873D73B128C(Local_755[iVar0 /*33*/], 2431.704f, 4961.62f, 45.33136f, 2455.376f, 4985.934f, 48.68555f, 13.5625f, 0, 0);
										unk_0x45EF2026AF681474(Local_755[iVar0 /*33*/], unk_0xC8B93D94F8954288(), 0, 16);
										unk_0x7867B753FDFAFE2B(Local_755[iVar0 /*33*/], 1);
										unk_0x1296D571B761D748(Local_755[iVar0 /*33*/], 50, 1);
										Local_1619[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							
							case 17:
								switch (Local_1619[iVar0 /*24*/].f_4)
								{
									case 1:
										unk_0x20E39873D73B128C(Local_755[iVar0 /*33*/], 2431.704f, 4961.62f, 45.33136f, 2455.376f, 4985.934f, 48.68555f, 13.5625f, 0, 0);
										unk_0x45EF2026AF681474(Local_755[iVar0 /*33*/], unk_0xC8B93D94F8954288(), 0, 16);
										unk_0x7867B753FDFAFE2B(Local_755[iVar0 /*33*/], 1);
										unk_0x1296D571B761D748(Local_755[iVar0 /*33*/], 50, 1);
										Local_1619[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							
							case 15:
								switch (Local_1619[iVar0 /*24*/].f_4)
								{
									case 1:
										unk_0x20E39873D73B128C(Local_755[iVar0 /*33*/], 2437.982f, 4959.021f, 45.31057f, 2432.93f, 4961.941f, 48.69256f, 3.1875f, 0, 0);
										unk_0x45EF2026AF681474(Local_755[iVar0 /*33*/], unk_0xC8B93D94F8954288(), 0, 16);
										unk_0x7867B753FDFAFE2B(Local_755[iVar0 /*33*/], 1);
										Local_1619[iVar0 /*24*/].f_4++;
										break;
									
									case 2:
										if (func_87(18))
										{
											unk_0xBE69D5EBB6F72A15(Local_755[iVar0 /*33*/], 0);
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
										unk_0x45EF2026AF681474(Local_755[iVar0 /*33*/], unk_0xC8B93D94F8954288(), 0, 16);
										unk_0x7867B753FDFAFE2B(Local_755[iVar0 /*33*/], 1);
										unk_0x1296D571B761D748(Local_755[iVar0 /*33*/], 50, 1);
										if (iLocal_1614 == 0)
										{
											unk_0xBE69D5EBB6F72A15(Local_755[iVar0 /*33*/], 0);
											unk_0xFB13566C12E09890(Local_755[iVar0 /*33*/], 2451.677f, 4954.251f, 44.988f, 3f, 0, 0);
											iLocal_1614++;
											Local_1619[iVar0 /*24*/].f_4++;
										}
										else
										{
											Local_1619[iVar0 /*24*/].f_4 = (unk_0x693EBB4F13506457() + iLocal_1614 * 4000);
											iLocal_1614++;
										}
										Local_755[iVar0 /*33*/].f_1 = 1;
										break;
									
									case 2:
										if (func_67(Local_755[iVar0 /*33*/], 2451.677f, 4954.251f, 44.988f, 1) < 3f)
										{
											unk_0xBE69D5EBB6F72A15(Local_755[iVar0 /*33*/], 0);
											Local_1619[iVar0 /*24*/].f_4++;
										}
										break;
									
									case 3:
										break;
									
									default:
										if (unk_0x693EBB4F13506457() > Local_1619[iVar0 /*24*/].f_4)
										{
											unk_0xBE69D5EBB6F72A15(Local_755[iVar0 /*33*/], 0);
											unk_0xFB13566C12E09890(Local_755[iVar0 /*33*/], 2451.677f, 4954.251f, 44.988f, 3f, 0, 0);
											Local_1619[iVar0 /*24*/].f_4 = 2;
										}
										break;
								}
								break;
							
							case 1:
								switch (Local_1619[iVar0 /*24*/].f_4)
								{
									case 1:
										unk_0x20E39873D73B128C(Local_755[iVar0 /*33*/], 2453.084f, 4969.897f, 50.44285f, 2460.996f, 4977.822f, 53.38035f, 2.9375f, 0, 0);
										unk_0x45EF2026AF681474(Local_755[iVar0 /*33*/], unk_0xC8B93D94F8954288(), 0, 16);
										unk_0x7867B753FDFAFE2B(Local_755[iVar0 /*33*/], 1);
										Local_1619[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							
							case 0:
								switch (Local_1619[iVar0 /*24*/].f_4)
								{
									case 1:
										unk_0x20E39873D73B128C(Local_755[iVar0 /*33*/], 2442.963f, 4964.217f, 50.44285f, 2449.251f, 4970.534f, 53.38035f, 2f, 0, 0);
										unk_0x45EF2026AF681474(Local_755[iVar0 /*33*/], unk_0xC8B93D94F8954288(), 0, 16);
										unk_0x7867B753FDFAFE2B(Local_755[iVar0 /*33*/], 1);
										Local_1619[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							
							case 2:
								switch (Local_1619[iVar0 /*24*/].f_4)
								{
									case 1:
										unk_0x20E39873D73B128C(Local_755[iVar0 /*33*/], 2461.362f, 4976.084f, 50.44285f, 2448.743f, 4988.774f, 53.60143f, 2f, 0, 0);
										unk_0x45EF2026AF681474(Local_755[iVar0 /*33*/], unk_0xC8B93D94F8954288(), 0, 16);
										unk_0x7867B753FDFAFE2B(Local_755[iVar0 /*33*/], 1);
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
	*iParam0 = unk_0x531444754C426278(0, 10);
	bVar1 = false;
	while (!bVar1)
	{
		if (unk_0x95CCECA3948CFE7B(iLocal_2657[*iParam0]) && unk_0x8DF850DA069BF37C(iLocal_2657[*iParam0], 2495.017f, 4970.17f, 44.21808f, 2493.501f, 4971.556f, 45.40248f, 1.375f, 0, 1, 0))
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
	if (unk_0xF8D041B05C3D1FD4(&Var0, sParam0))
	{
		return 1;
	}
	return 0;
}

struct<6> func_83()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15712 == 4)
	{
		return Global_15331;
	}
	return Var0;
}

bool func_84(char* sParam0, int iParam1, int iParam2)
{
	unk_0xF932A8699EA66642(sParam0);
	if (iParam1 == 1)
	{
		unk_0xCE59E3E42586D52D(iParam2);
	}
	return unk_0xD6AFC45B1375A9DD();
}

void func_85()
{
	Global_14578 = 0;
	func_86();
}

void func_86()
{
	if (unk_0x2964A62922189B93())
	{
		unk_0xE9A2B98CC2F095D6();
		Global_16723 = 0;
		unk_0xB518E9C8553B1D2B(1);
		Global_15712 = 6;
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
	Global_14578 = 0;
	func_89();
}

void func_89()
{
	unk_0xE9A2B98CC2F095D6();
	Global_16723 = 0;
	if (unk_0x2964A62922189B93())
	{
		unk_0xB518E9C8553B1D2B(0);
		Global_15712 = 6;
	}
}

int func_90(struct<3> Param0, float fParam3, float fParam4)
{
	if (unk_0x8EBAC9BC4005929D(Param0, fParam3))
	{
		if (!unk_0xA0C23498D8E0BB93(unk_0xC8B93D94F8954288(), Param0, fParam4, fParam4, fParam4, 0, 0, 0))
		{
			return 0;
		}
		else if (unk_0xD5DFCA69ACAA20E3())
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
		unk_0x20ACC819883C0E85(uLocal_257, 1);
	}
	unk_0x939BC11172AA1303(uLocal_257);
	if (!unk_0x902595DAD7718896(*iParam0, 1))
	{
		unk_0xBFE865E3B513451B(*iParam0, uLocal_257);
	}
	unk_0xA9351C9309E03069(&uLocal_257);
}

void func_93()
{
	unk_0x3E2E609450787FFE(&uLocal_257);
}

void func_94(int iParam0)
{
	Local_755[iParam0 /*33*/].f_15 = (Local_755[iParam0 /*33*/].f_15 + unk_0xF34EE736CF047844((unk_0x0000000050597EE2() * 1000f)));
	switch (Local_755[iParam0 /*33*/].f_2)
	{
		case 7:
			if (Local_755[iParam0 /*33*/].f_15 > 2000 && !unk_0xDCC86F723E82125E(Local_755[iParam0 /*33*/].f_14, 0))
			{
				unk_0x170E3F679C0C8F29(Local_755[iParam0 /*33*/], 2505.634f, 4996.994f, 46.6624f, 4000, 0, 2);
				unk_0x59A0729D503ED758(&(Local_755[iParam0 /*33*/].f_14), 0);
			}
			else if (Local_755[iParam0 /*33*/].f_15 > 8000 && !unk_0xDCC86F723E82125E(Local_755[iParam0 /*33*/].f_14, 1))
			{
				unk_0x170E3F679C0C8F29(Local_755[iParam0 /*33*/], 2472.297f, 4962.687f, 47.2297f, 6000, 0, 2);
				unk_0x59A0729D503ED758(&(Local_755[iParam0 /*33*/].f_14), 1);
			}
			break;
		
		case 5:
			if (Local_755[iParam0 /*33*/].f_15 > 3000 && !unk_0xDCC86F723E82125E(Local_755[iParam0 /*33*/].f_14, 0))
			{
				if (!unk_0x2DC9BA2299B45EA6(Local_755[6 /*33*/]))
				{
					unk_0xE48D9147BC1F4CD7(Local_755[iParam0 /*33*/], Local_755[6 /*33*/], 4000, 0, 2);
					unk_0x59A0729D503ED758(&(Local_755[iParam0 /*33*/].f_14), 0);
				}
			}
			else if (Local_755[iParam0 /*33*/].f_15 > 11000 && !unk_0xDCC86F723E82125E(Local_755[iParam0 /*33*/].f_14, 1))
			{
				unk_0x170E3F679C0C8F29(Local_755[iParam0 /*33*/], 2494.634f, 5001.994f, 46.6624f, 7000, 0, 2);
				unk_0x59A0729D503ED758(&(Local_755[iParam0 /*33*/].f_14), 1);
			}
			else if (Local_755[iParam0 /*33*/].f_15 > 20000 && !unk_0xDCC86F723E82125E(Local_755[iParam0 /*33*/].f_14, 2))
			{
				unk_0x170E3F679C0C8F29(Local_755[iParam0 /*33*/], 2477.634f, 4966.994f, 46.6624f, 7000, 0, 2);
				unk_0x59A0729D503ED758(&(Local_755[iParam0 /*33*/].f_14), 2);
			}
			break;
		
		case 4:
			if (Local_755[iParam0 /*33*/].f_15 > 3000 && !unk_0xDCC86F723E82125E(Local_755[iParam0 /*33*/].f_14, 0))
			{
				unk_0x170E3F679C0C8F29(Local_755[iParam0 /*33*/], 2505.634f, 4996.994f, 46.6624f, 5000, 0, 2);
				unk_0x59A0729D503ED758(&(Local_755[iParam0 /*33*/].f_14), 0);
			}
			else if (Local_755[iParam0 /*33*/].f_15 > 10000 && !unk_0xDCC86F723E82125E(Local_755[iParam0 /*33*/].f_14, 1))
			{
				unk_0x170E3F679C0C8F29(Local_755[iParam0 /*33*/], 2461.449f, 4977.48f, 51.7483f, 6000, 0, 2);
				unk_0x59A0729D503ED758(&(Local_755[iParam0 /*33*/].f_14), 1);
			}
			else if (Local_755[iParam0 /*33*/].f_15 > 18000 && !unk_0xDCC86F723E82125E(Local_755[iParam0 /*33*/].f_14, 2))
			{
				unk_0x170E3F679C0C8F29(Local_755[iParam0 /*33*/], 2505.634f, 4996.994f, 46.6624f, 6000, 0, 2);
				unk_0x59A0729D503ED758(&(Local_755[iParam0 /*33*/].f_14), 2);
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
		fVar0 = unk_0x77491A28B7D799AF(fVar1, fVar2);
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

int func_97(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0x1A96BAEAC664567A();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		if (!unk_0x4E12F93E42909E85(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0xA474BF93C34BB50D(iParam0, 1);
			}
			else
			{
				unk_0xE5AC30DA51579B11(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0xED313B3795FE8D4D(iParam0, iParam2);
			unk_0x1F446578F95908B9(iParam0, fParam6);
			if (unk_0x6B4865E08E90ACC5(*uParam1))
			{
				unk_0xEB19FBC5156AAE3A(*uParam1, 7);
			}
		}
		unk_0x95DC74EF0662E765(iParam0, iParam4);
		unk_0x18E370C407910F3E(iParam0, iParam5);
		*uParam1 = unk_0xF136BF62E6F0206F(iParam0);
		if (!unk_0xDCC86F723E82125E(uParam1->f_6, 2))
		{
			if (unk_0x6B4865E08E90ACC5(*uParam1))
			{
				if (!unk_0xB8A06E7E729EED0A(iParam7))
				{
					unk_0xF318DA2E8E4F4397("MCUSTBLIP");
					unk_0x2DED6C1306496257(iParam7);
					unk_0xA133FE69F7ED3360(*uParam1);
				}
				unk_0x59A0729D503ED758(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x277ECDA23D8CCEB4(iParam0, 0))
		{
			uParam1->f_1 = unk_0x92CDA8CE01B2853F(iParam0);
			if (!unk_0xDCC86F723E82125E(uParam1->f_6, 3))
			{
				if (unk_0x6B4865E08E90ACC5(uParam1->f_1))
				{
					unk_0xEB19FBC5156AAE3A(uParam1->f_1, 7);
					unk_0x59A0729D503ED758(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0x6B4865E08E90ACC5(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x77621132305B133B(&(uParam1->f_6), 3);
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
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		unk_0x0893EE04C269FFD2(iParam0, fParam1);
		unk_0x592172E10E3BDD6A(iParam0, fParam2);
		unk_0x49E59201877239AF(iParam0, (fParam3 / 2f));
		unk_0xE1B7F41F33EBF9A2(iParam0, fParam4);
		unk_0x62EB4E2296BF745E(iParam0, fParam5);
	}
}

void func_99(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!unk_0x2DC9BA2299B45EA6(Local_755[iParam0 /*33*/]))
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
		iVar0 = unk_0x2F748CE5313AA2BB(Param2);
		if (iVar0 == 0)
		{
			return 0;
		}
		else if (!unk_0x7E76461B9677E81C(iVar0))
		{
			return 0;
		}
	}
	switch (iLocal_751)
	{
		case 0:
			Local_755[iParam0 /*33*/] = unk_0x71DD988C1B903F5D(26, joaat("a_m_m_hillbilly_01"), Param2, iParam5, 1, 1);
			unk_0x9AA5A07C66C84468(Local_755[iParam0 /*33*/]);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 0, 0, 1, 0);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 2, 0, 1, 0);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 3, 1, 1, 0);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 4, 1, 1, 0);
			break;
		
		case 1:
			Local_755[iParam0 /*33*/] = unk_0x71DD988C1B903F5D(26, joaat("a_m_m_hillbilly_02"), Param2, iParam5, 1, 1);
			unk_0x9AA5A07C66C84468(Local_755[iParam0 /*33*/]);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 2, 1, 0, 0);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 4, 0, 1, 0);
			break;
		
		case 2:
			Local_755[iParam0 /*33*/] = unk_0x71DD988C1B903F5D(26, joaat("a_m_y_methhead_01"), Param2, iParam5, 1, 1);
			unk_0x9AA5A07C66C84468(Local_755[iParam0 /*33*/]);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 0, 0, 1, 0);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 3, 1, 0, 0);
			break;
		
		case 3:
			Local_755[iParam0 /*33*/] = unk_0x71DD988C1B903F5D(26, joaat("a_m_m_hillbilly_01"), Param2, iParam5, 1, 1);
			unk_0x9AA5A07C66C84468(Local_755[iParam0 /*33*/]);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 0, 0, 2, 0);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 2, 1, 2, 0);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 3, 1, 0, 0);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 4, 1, 0, 0);
			break;
		
		case 4:
			Local_755[iParam0 /*33*/] = unk_0x71DD988C1B903F5D(26, joaat("a_m_m_hillbilly_02"), Param2, iParam5, 1, 1);
			unk_0x9AA5A07C66C84468(Local_755[iParam0 /*33*/]);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 0, 0, 2, 0);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 3, 1, 0, 0);
			break;
		
		case 5:
			Local_755[iParam0 /*33*/] = unk_0x71DD988C1B903F5D(26, joaat("a_m_y_methhead_01"), Param2, iParam5, 1, 1);
			unk_0x9AA5A07C66C84468(Local_755[iParam0 /*33*/]);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 4, 1, 2, 0);
			break;
		
		case 6:
			Local_755[iParam0 /*33*/] = unk_0x71DD988C1B903F5D(26, joaat("a_m_m_hillbilly_01"), Param2, iParam5, 1, 1);
			unk_0x9AA5A07C66C84468(Local_755[iParam0 /*33*/]);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 2, 1, 0, 0);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 3, 0, 1, 0);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 4, 0, 1, 0);
			break;
		
		case 7:
			Local_755[iParam0 /*33*/] = unk_0x71DD988C1B903F5D(26, joaat("a_m_m_hillbilly_02"), Param2, iParam5, 1, 1);
			unk_0x9AA5A07C66C84468(Local_755[iParam0 /*33*/]);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 0, 0, 1, 0);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 2, 2, 0, 0);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 3, 2, 0, 0);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 4, 0, 2, 0);
			break;
		
		case 8:
			Local_755[iParam0 /*33*/] = unk_0x71DD988C1B903F5D(26, joaat("a_m_y_methhead_01"), Param2, iParam5, 1, 1);
			unk_0x9AA5A07C66C84468(Local_755[iParam0 /*33*/]);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 3, 1, 0, 0);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 4, 1, 0, 0);
			break;
		
		case 9:
			Local_755[iParam0 /*33*/] = unk_0x71DD988C1B903F5D(26, joaat("a_m_m_hillbilly_02"), Param2, iParam5, 1, 1);
			unk_0x9AA5A07C66C84468(Local_755[iParam0 /*33*/]);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 0, 0, 2, 0);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 3, 1, 2, 0);
			break;
		
		case 10:
			Local_755[iParam0 /*33*/] = unk_0x71DD988C1B903F5D(26, joaat("a_m_y_methhead_01"), Param2, iParam5, 1, 1);
			unk_0x9AA5A07C66C84468(Local_755[iParam0 /*33*/]);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 3, 0, 1, 0);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 4, 0, 1, 0);
			break;
		
		case 11:
			Local_755[iParam0 /*33*/] = unk_0x71DD988C1B903F5D(26, joaat("a_m_m_hillbilly_02"), Param2, iParam5, 1, 1);
			unk_0x9AA5A07C66C84468(Local_755[iParam0 /*33*/]);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 2, 2, 0, 0);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 3, 2, 2, 0);
			break;
		
		case 12:
			Local_755[iParam0 /*33*/] = unk_0x71DD988C1B903F5D(26, joaat("a_m_m_hillbilly_01"), Param2, iParam5, 1, 1);
			unk_0x9AA5A07C66C84468(Local_755[iParam0 /*33*/]);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 0, 0, 2, 0);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 2, 0, 2, 0);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 3, 1, 2, 0);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 4, 1, 2, 0);
			break;
		
		case 13:
			Local_755[iParam0 /*33*/] = unk_0x71DD988C1B903F5D(26, joaat("a_m_m_hillbilly_02"), Param2, iParam5, 1, 1);
			unk_0x9AA5A07C66C84468(Local_755[iParam0 /*33*/]);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 0, 0, 1, 0);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 2, 1, 0, 0);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 3, 1, 1, 0);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 4, 0, 2, 0);
			break;
		
		case 14:
			Local_755[iParam0 /*33*/] = unk_0x71DD988C1B903F5D(26, joaat("a_m_y_methhead_01"), Param2, iParam5, 1, 1);
			unk_0x9AA5A07C66C84468(Local_755[iParam0 /*33*/]);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 0, 0, 1, 0);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 3, 0, 2, 0);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 4, 0, 2, 0);
			break;
		
		case 15:
			Local_755[iParam0 /*33*/] = unk_0x71DD988C1B903F5D(26, joaat("a_m_m_hillbilly_02"), Param2, iParam5, 1, 1);
			unk_0x9AA5A07C66C84468(Local_755[iParam0 /*33*/]);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 0, 0, 1, 0);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 2, 2, 0, 0);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 4, 0, 2, 0);
			break;
		
		case 16:
			Local_755[iParam0 /*33*/] = unk_0x71DD988C1B903F5D(26, joaat("a_m_y_methhead_01"), Param2, iParam5, 1, 1);
			unk_0x9AA5A07C66C84468(Local_755[iParam0 /*33*/]);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 0, 0, 2, 0);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 3, 0, 1, 0);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 4, 1, 1, 0);
			break;
		
		case 17:
			Local_755[iParam0 /*33*/] = unk_0x71DD988C1B903F5D(26, joaat("a_m_m_hillbilly_02"), Param2, iParam5, 1, 1);
			unk_0x9AA5A07C66C84468(Local_755[iParam0 /*33*/]);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 0, 0, 2, 0);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 2, 2, 0, 0);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 3, 1, 2, 0);
			unk_0x8C245572EDB27776(Local_755[iParam0 /*33*/], 4, 0, 1, 0);
			break;
	}
	if (iLocal_751 > 17)
	{
		Local_755[iParam0 /*33*/] = unk_0x71DD988C1B903F5D(26, joaat("a_m_y_methhead_01"), Param2, iParam5, 1, 1);
		unk_0x13D89E14CAD4E586(Local_755[iParam0 /*33*/], 0);
	}
	iLocal_751++;
	if (Local_755[iParam0 /*33*/].f_1 == 5)
	{
		unk_0xAAD662D7E0D59F4C(Local_755[iParam0 /*33*/], 1);
		unk_0xCBD60E398042F554(Local_755[iParam0 /*33*/], iLocal_1617);
	}
	else
	{
		unk_0x640290651A86938B(Local_755[iParam0 /*33*/], iParam6, 3000, iParam7, 1);
		unk_0xCBD60E398042F554(Local_755[iParam0 /*33*/], iLocal_1616);
		unk_0x8409AEE1807BA193(Local_755[iParam0 /*33*/], 1);
		unk_0x1296D571B761D748(Local_755[iParam0 /*33*/], 9, 1);
		unk_0xA39ECCB00E2221AF(Local_755[iParam0 /*33*/], 120f);
		unk_0x0893EE04C269FFD2(Local_755[iParam0 /*33*/], 22f);
		unk_0xC21E11C675FC488B(Local_755[iParam0 /*33*/], 22f);
		unk_0xC778754E36F3FFD6(Local_755[iParam0 /*33*/], 118, 0);
		unk_0x1202518C37DBD030(Local_755[iParam0 /*33*/], 14, 3f);
		if (Local_755[iParam0 /*33*/].f_1 == 2)
		{
			unk_0x687051455B40FE5B(Local_755[iParam0 /*33*/], 12);
		}
		else
		{
			unk_0x687051455B40FE5B(Local_755[iParam0 /*33*/], 45);
		}
		unk_0x6EF57C6D89E028F1(Local_755[iParam0 /*33*/], 1);
		unk_0xCDBFAADCD2D0674F(Local_755[iParam0 /*33*/], 1);
		unk_0x1296D571B761D748(Local_755[iParam0 /*33*/], 15, 0);
		unk_0x1296D571B761D748(Local_755[iParam0 /*33*/], 17, 0);
		func_102(Local_755[iParam0 /*33*/], 1);
	}
	unk_0x430D1C71296F10A9(Local_755[iParam0 /*33*/]);
	unk_0x3907D4738A2C8ABD(Local_755[iParam0 /*33*/], 1);
	unk_0x3D0A08BB7A7BB39F(Local_755[iParam0 /*33*/], 0f, 0f, 0f);
	unk_0xAABFAFE23E026B25(Local_755[iParam0 /*33*/], 1);
	unk_0x9F5B24254B0DF404(Local_755[iParam0 /*33*/], 1);
	unk_0xFE93132CC8944C8C(Local_755[iParam0 /*33*/], 150);
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
			if (Global_55689[iVar0 /*2*/] != 0)
			{
				if (Global_55689[iVar0 /*2*/] == iParam0)
				{
					return;
				}
			}
			iVar0++;
		}
	}
	if (64 == Global_55688)
	{
		return;
	}
	iVar1 = -1;
	iVar2 = 0;
	while (iVar1 == -1 && iVar2 != 64)
	{
		if (Global_55689[iVar2 /*2*/] == 0)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 == -1)
	{
		return;
	}
	Global_55689[iVar1 /*2*/] = iParam0;
	Global_55689[iVar1 /*2*/].f_1 = 7;
	Global_55688++;
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
	if (unk_0x1DC541CCFC2C3635())
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
						if (!unk_0x902595DAD7718896((*uParam0)[iLocal_61 /*24*/], 1))
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
		if (!unk_0xA3858ADDDBC3CB71())
		{
			if (func_36(&Local_89, cLocal_254, sParam0, iParam13, 0, 0, 0))
			{
				iLocal_256 = 0;
				return 1;
			}
			else if (iLocal_255 != unk_0x693EBB4F13506457())
			{
				iLocal_256++;
				iLocal_255 = unk_0x693EBB4F13506457();
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
		if (!unk_0x902595DAD7718896((*uParam0)[iVar0 /*24*/], 1) && !unk_0x3DFC8C2B3444478A((*uParam0)[iVar0 /*24*/]))
		{
			if (!(uParam0[iVar0 /*24*/])->f_21)
			{
				switch ((uParam0[iVar0 /*24*/])->f_3)
				{
					case 4:
						if ((unk_0xBC8F0233DE90C26A((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_CHAIR") || unk_0xBC8F0233DE90C26A((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_ARMCHAIR")) || unk_0x090C65D5190A249D((*uParam0)[iVar0 /*24*/], 1785177548) == 1)
						{
							if (!unk_0x2DC9BA2299B45EA6((*uParam0)[iVar0 /*24*/]))
							{
								unk_0x5124C5FA52D2AF3E((*uParam0)[iVar0 /*24*/]);
							}
							if (!unk_0x902595DAD7718896((*uParam0)[iVar0 /*24*/], 1))
							{
								unk_0x77BB53B713A3FB22((*uParam0)[iVar0 /*24*/]);
							}
						}
						else if (unk_0x090C65D5190A249D((*uParam0)[iVar0 /*24*/], 1647992574) == 7)
						{
							switch ((uParam0[iVar0 /*24*/])->f_4)
							{
								case 0:
									if (!unk_0x902595DAD7718896((*uParam0)[iVar0 /*24*/], 1))
									{
										unk_0x77BB53B713A3FB22((*uParam0)[iVar0 /*24*/]);
									}
									if (!unk_0xBC8F0233DE90C26A((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_CHAIR") && !unk_0xBC8F0233DE90C26A((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_ARMCHAIR"))
									{
										if (unk_0x277ECDA23D8CCEB4((*uParam0)[iVar0 /*24*/], 0))
										{
											iVar2 = unk_0xBCEA8C5A6B3F7D71((*uParam0)[iVar0 /*24*/]);
											if (unk_0x5D42322C7DB888D0(iVar2, 0))
											{
												if (unk_0xD80D5A6EF9C19146(iVar2))
												{
													Var3 = { unk_0x3A5C3B481EEBA95F(iVar2) };
													unk_0x400BB22E7B8B5895(iVar2);
													unk_0xE6D484EB3F0B2B5A(iVar2, Var3);
													unk_0xE5F6BE3F8E937ACE((*uParam0)[iVar0 /*24*/], 0, 0);
												}
											}
										}
										if (!unk_0x277ECDA23D8CCEB4((*uParam0)[iVar0 /*24*/], 0))
										{
											switch ((uParam0[iVar0 /*24*/])->f_1)
											{
												case 2:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															if ((uParam0[iVar0 /*24*/])->f_10 >= 0)
															{
																if (unk_0x95CCECA3948CFE7B((*uParam0)[(uParam0[iVar0 /*24*/])->f_10 /*24*/]))
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
																	(uParam0[iVar0 /*24*/])->f_11 = unk_0x693EBB4F13506457() + 500;
																}
																else
																{
																	(uParam0[iVar0 /*24*/])->f_1 = 0;
																}
															}
															break;
														
														case 1:
															if (unk_0x693EBB4F13506457() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_93();
																unk_0x2A262C5D2DAD436D(0, 1);
																unk_0x5323F488E6A1B660(0, "misschinese2_bank1", "react_forward_small_intro_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
																unk_0x2A262C5D2DAD436D(0, 0);
																func_92(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
														
														case 2:
															if (unk_0x693EBB4F13506457() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_93();
																unk_0x2A262C5D2DAD436D(0, 1);
																unk_0x5323F488E6A1B660(0, "misschinese2_bank1", "react_left_small_intro_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
																unk_0x2A262C5D2DAD436D(0, 0);
																func_92(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
														
														case 3:
															if (unk_0x693EBB4F13506457() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_93();
																unk_0x2A262C5D2DAD436D(0, 1);
																unk_0x5323F488E6A1B660(0, "misschinese2_bank1", "react_right_small_intro_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
																unk_0x2A262C5D2DAD436D(0, 0);
																func_92(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
														
														case 4:
															if (unk_0x693EBB4F13506457() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_93();
																unk_0x2A262C5D2DAD436D(0, 1);
																unk_0x5323F488E6A1B660(0, "misschinese2_bank1", "react_backward_small_intro_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
																unk_0x2A262C5D2DAD436D(0, 0);
																func_92(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
													}
													break;
												
												case 7:
													if ((uParam0[iVar0 /*24*/])->f_5 < 2)
													{
														unk_0x5124C5FA52D2AF3E((*uParam0)[iVar0 /*24*/]);
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
															unk_0x80423B6A45BF05DA((*uParam0)[iVar0 /*24*/], unk_0x85522C66DC364A7A((*uParam0)[iVar0 /*24*/], 0), 1);
															func_93();
															if (!unk_0x277ECDA23D8CCEB4((*uParam0)[iVar0 /*24*/], 1))
															{
																unk_0x2A262C5D2DAD436D(0, 1);
																unk_0x5323F488E6A1B660(0, "misschinese2_bank1", "buddy_shot_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
																unk_0x2A262C5D2DAD436D(0, 0);
															}
															else
															{
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															unk_0x937BE3A0F630EFAD(0, 200f, 0);
															func_92(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = unk_0x693EBB4F13506457() + 3000;
															break;
														
														case 1:
															func_93();
															unk_0x2A262C5D2DAD436D(0, 1);
															iVar6 = func_112();
															unk_0x2A262C5D2DAD436D(0, 0);
															unk_0x937BE3A0F630EFAD(0, 200f, 0);
															func_92(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = (unk_0x693EBB4F13506457() + iVar6);
															break;
														
														default:
															if (unk_0xCD61E9D5CABC7E35((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 3))
															{
																if (unk_0x853B39ECA83DA242((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b") < 0.2f)
																{
																	unk_0xDBC3E5D6F0D413EB((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 0.2f);
																}
															}
															if (unk_0x693EBB4F13506457() > (uParam0[iVar0 /*24*/])->f_5)
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
													if (!unk_0x277ECDA23D8CCEB4((*uParam0)[iVar0 /*24*/], 1))
													{
														switch ((uParam0[iVar0 /*24*/])->f_5)
														{
															case 0:
																unk_0xAAD662D7E0D59F4C((*uParam0)[iVar0 /*24*/], 1);
																unk_0x5323F488E6A1B660((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot", 4f, -4f, -1, 8, 0, 0, 0, 0);
																(uParam0[iVar0 /*24*/])->f_5 = 3;
																break;
															
															case 1:
																unk_0xAAD662D7E0D59F4C((*uParam0)[iVar0 /*24*/], 1);
																unk_0x5323F488E6A1B660((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 4f, -4f, -1, 8, 0, 0, 0, 0);
																unk_0x80423B6A45BF05DA((*uParam0)[iVar0 /*24*/], unk_0x85522C66DC364A7A((*uParam0)[iVar0 /*24*/], 0), 1);
																(uParam0[iVar0 /*24*/])->f_5 = 3;
																break;
															
															case 3:
																if (unk_0xCD61E9D5CABC7E35((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot", 3))
																{
																	if (unk_0x853B39ECA83DA242((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot") > 0.95f)
																	{
																		if (func_110(iVar0, uParam0, 0))
																		{
																			(uParam0[iVar0 /*24*/])->f_5 = 4;
																		}
																		else
																		{
																			unk_0x5323F488E6A1B660((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_d", 4f, -2f, unk_0x531444754C426278(4000, 6000), 8, 0, 0, 0, 0);
																			(uParam0[iVar0 /*24*/])->f_5 = 6;
																		}
																	}
																}
																if (unk_0xCD61E9D5CABC7E35((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 3))
																{
																	if (unk_0x853B39ECA83DA242((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b") > 0.95f)
																	{
																		if (func_110(iVar0, uParam0, 0))
																		{
																			(uParam0[iVar0 /*24*/])->f_5 = 5;
																		}
																		else
																		{
																			unk_0x5323F488E6A1B660((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_e", 4f, -2f, unk_0x531444754C426278(4000, 6000), 8, 0, 0, 0, 0);
																			(uParam0[iVar0 /*24*/])->f_5 = 6;
																		}
																	}
																}
																break;
															
															case 4:
																if (unk_0xA3C5926D6E5619AE((unk_0x59DD203239FBDCAD((*uParam0)[iVar0 /*24*/]) - (uParam0[iVar0 /*24*/])->f_18)) < 10f)
																{
																	unk_0x5323F488E6A1B660((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_d", 4f, -2f, unk_0x531444754C426278(6000, 9000), 8, 0, 0, 0, 0);
																	(uParam0[iVar0 /*24*/])->f_5 = 6;
																}
																break;
															
															case 5:
																if (unk_0xA3C5926D6E5619AE((unk_0x59DD203239FBDCAD((*uParam0)[iVar0 /*24*/]) - (uParam0[iVar0 /*24*/])->f_18)) < 10f)
																{
																	unk_0x5323F488E6A1B660((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_f", 4f, -2f, unk_0x531444754C426278(6000, 9000), 8, 0, 0, 0, 0);
																	(uParam0[iVar0 /*24*/])->f_5 = 6;
																}
																break;
															
															case 6:
																if (unk_0x090C65D5190A249D((*uParam0)[iVar0 /*24*/], -2017877118) == 7)
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
															(uParam0[iVar0 /*24*/])->f_5 = (unk_0x693EBB4F13506457() + unk_0x531444754C426278(0, 2000));
															break;
														
														default:
															if (unk_0x693EBB4F13506457() > (uParam0[iVar0 /*24*/])->f_5)
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
															(uParam0[iVar0 /*24*/])->f_5 = (unk_0x693EBB4F13506457() + unk_0x531444754C426278(0, 2000));
															break;
														
														default:
															if (unk_0x693EBB4F13506457() > (uParam0[iVar0 /*24*/])->f_5)
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
																if (!unk_0x277ECDA23D8CCEB4((*uParam0)[iVar0 /*24*/], 1))
																{
																	Var7 = { unk_0x44C17CCB85A88A1F((*uParam0)[iVar0 /*24*/], 1) };
																	Var10 = { unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1) };
																	fVar13 = unk_0xFC4CBB95F50A780A(((Var10.f_2 - Var7.f_2) / func_4((*uParam0)[iVar0 /*24*/], unk_0xC8B93D94F8954288(), 0)));
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
															unk_0x2A262C5D2DAD436D(0, 1);
															unk_0xC518AECFA9CF7722(0, unk_0xC8B93D94F8954288(), 1000);
															unk_0x5323F488E6A1B660(0, "misschinese2_bank1", "spot_high", 4f, -8f, -1, 0, 0, 0, 0, 0);
															unk_0x2A262C5D2DAD436D(0, 0);
															func_92(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = 4;
															break;
														
														case 2:
															func_93();
															unk_0x2A262C5D2DAD436D(0, 1);
															unk_0xC518AECFA9CF7722(0, unk_0xC8B93D94F8954288(), 1000);
															unk_0x5323F488E6A1B660(0, "misschinese2_bank1", "spot_low", 4f, -8f, -1, 0, 0, 0, 0, 0);
															unk_0x2A262C5D2DAD436D(0, 0);
															func_92(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = 4;
															break;
														
														case 3:
															func_93();
															unk_0x2A262C5D2DAD436D(0, 1);
															unk_0xC518AECFA9CF7722(0, unk_0xC8B93D94F8954288(), 1000);
															unk_0x5323F488E6A1B660(0, "misschinese2_bank1", "spot_mid", 4f, -8f, -1, 0, 0, 0, 0, 0);
															unk_0x2A262C5D2DAD436D(0, 0);
															func_92(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = 4;
															break;
														
														case 4:
															if (bLocal_56)
															{
																if (unk_0xA3C5926D6E5619AE(func_113((*uParam0)[iVar0 /*24*/], unk_0xC8B93D94F8954288())) < 20f)
																{
																	if (unk_0xCD61E9D5CABC7E35((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_high", 3))
																	{
																		if (unk_0x853B39ECA83DA242((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_high") > func_108(((func_4((*uParam0)[iVar0 /*24*/], unk_0xC8B93D94F8954288(), 1) + 5f) / 35f), 0.27f, 0.9f))
																		{
																			(uParam0[iVar0 /*24*/])->f_3 = 6;
																			(uParam0[iVar0 /*24*/])->f_1 = 10;
																			(uParam0[iVar0 /*24*/])->f_4 = 0;
																		}
																	}
																	if (unk_0xCD61E9D5CABC7E35((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_mid", 3))
																	{
																		if (unk_0x853B39ECA83DA242((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_mid") > func_108(((func_4((*uParam0)[iVar0 /*24*/], unk_0xC8B93D94F8954288(), 1) + 5f) / 35f), 0.27f, 0.9f))
																		{
																			(uParam0[iVar0 /*24*/])->f_3 = 6;
																			(uParam0[iVar0 /*24*/])->f_1 = 10;
																			(uParam0[iVar0 /*24*/])->f_4 = 0;
																		}
																	}
																	if (unk_0xCD61E9D5CABC7E35((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_low", 3))
																	{
																		if (unk_0x853B39ECA83DA242((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_low") > func_108(((func_4((*uParam0)[iVar0 /*24*/], unk_0xC8B93D94F8954288(), 1) + 5f) / 35f), 0.27f, 0.9f))
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
										if (unk_0xCD61E9D5CABC7E35((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot", 3))
										{
											bVar14 = true;
											if (unk_0x853B39ECA83DA242((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot") > 0.9f)
											{
												bVar14 = false;
											}
										}
										if (unk_0xCD61E9D5CABC7E35((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 3))
										{
											bVar14 = true;
											if (unk_0x853B39ECA83DA242((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b") > 0.9f)
											{
												bVar14 = false;
											}
										}
										if (unk_0xCD61E9D5CABC7E35((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "reaction_forward_big_intro_a", 3))
										{
											bVar14 = true;
											if (unk_0x853B39ECA83DA242((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "reaction_forward_big_intro_a") > 0.9f)
											{
												bVar14 = false;
											}
										}
										if (unk_0xCD61E9D5CABC7E35((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_body", 3))
										{
											bVar14 = true;
											if (unk_0x853B39ECA83DA242((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_body") > 0.9f)
											{
												bVar14 = false;
											}
										}
										if (unk_0xCD61E9D5CABC7E35((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_forward_small_intro_a", 3))
										{
											bVar14 = true;
											if (unk_0x853B39ECA83DA242((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_forward_small_intro_a") > 0.9f)
											{
												bVar14 = false;
											}
										}
										if (unk_0xCD61E9D5CABC7E35((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_backward_small_intro_a", 3))
										{
											bVar14 = true;
											if (unk_0x853B39ECA83DA242((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_backward_small_intro_a") > 0.9f)
											{
												bVar14 = false;
											}
										}
										if (unk_0xCD61E9D5CABC7E35((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_left_small_intro_a", 3))
										{
											bVar14 = true;
											if (unk_0x853B39ECA83DA242((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_left_small_intro_a") > 0.9f)
											{
												bVar14 = false;
											}
										}
										if (unk_0xCD61E9D5CABC7E35((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_right_small_intro_a", 3))
										{
											bVar14 = true;
											if (unk_0x853B39ECA83DA242((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_right_small_intro_a") > 0.9f)
											{
												bVar14 = false;
											}
										}
										if (!bVar14)
										{
											(uParam0[iVar0 /*24*/])->f_4 = 2;
											(uParam0[iVar0 /*24*/])->f_5 = unk_0x693EBB4F13506457() + 2000;
											unk_0x45EF2026AF681474((*uParam0)[iVar0 /*24*/], unk_0xC8B93D94F8954288(), 0, 16);
											unk_0x05BE583DF8C6A617((*uParam0)[iVar0 /*24*/], 1);
											unk_0x7867B753FDFAFE2B((*uParam0)[iVar0 /*24*/], 1);
										}
									}
									break;
								
								case 2:
									if (unk_0x693EBB4F13506457() > (uParam0[iVar0 /*24*/])->f_5)
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
						if (unk_0xBC8F0233DE90C26A((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_CHAIR") || unk_0x54E8AF6E305A849E((*uParam0)[iVar0 /*24*/]))
						{
							if (!unk_0x2DC9BA2299B45EA6((*uParam0)[iVar0 /*24*/]))
							{
								unk_0x5124C5FA52D2AF3E((*uParam0)[iVar0 /*24*/]);
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
									unk_0x80423B6A45BF05DA((*uParam0)[iVar0 /*24*/], unk_0x85522C66DC364A7A((*uParam0)[iVar0 /*24*/], 0), 1);
									unk_0xAAD662D7E0D59F4C((*uParam0)[iVar0 /*24*/], 0);
									unk_0xDB683AFC1D158173((*uParam0)[iVar0 /*24*/]);
									unk_0x1296D571B761D748((*uParam0)[iVar0 /*24*/], 50, 1);
									unk_0xF36EA652E4A6CED0((*uParam0)[iVar0 /*24*/], 512, 1);
									(uParam0[iVar0 /*24*/])->f_4++;
									break;
								
								case 1:
									if (!(uParam0[iVar0 /*24*/])->f_20)
									{
										*(uParam1[0 /*3*/]) = { *(uParam1[0 /*3*/]) };
										iLocal_66 = iLocal_66;
										uLocal_70 = uLocal_70;
										unk_0x45EF2026AF681474((*uParam0)[iVar0 /*24*/], unk_0xC8B93D94F8954288(), 0, 16);
										unk_0x05BE583DF8C6A617((*uParam0)[iVar0 /*24*/], 1);
										unk_0x7867B753FDFAFE2B((*uParam0)[iVar0 /*24*/], 1);
										(uParam0[iVar0 /*24*/])->f_4++;
										(uParam0[iVar0 /*24*/])->f_11 = (unk_0x693EBB4F13506457() + unk_0x531444754C426278(20000, 35000));
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
			if (!unk_0xF8D041B05C3D1FD4("chi2_hear", Param3.f_1))
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
					(uParam1[iParam0 /*24*/])->f_12 = { unk_0x44C17CCB85A88A1F((*uParam1)[iParam0 /*24*/], 1) };
					(uParam1[iParam0 /*24*/])->f_18 = unk_0x59DD203239FBDCAD((*uParam1)[iParam0 /*24*/]);
					(uParam1[iParam0 /*24*/])->f_5 = 0;
					(uParam1[iParam0 /*24*/])->f_5++;
					(uParam1[iParam0 /*24*/])->f_11 = unk_0x693EBB4F13506457() + 1000;
				}
			}
			else
			{
				(uParam1[iParam0 /*24*/])->f_12 = { unk_0x44C17CCB85A88A1F((*uParam1)[iParam0 /*24*/], 1) };
				(uParam1[iParam0 /*24*/])->f_18 = unk_0x59DD203239FBDCAD((*uParam1)[iParam0 /*24*/]);
				(uParam1[iParam0 /*24*/])->f_5++;
			}
			break;
		
		case 1:
			if (unk_0x693EBB4F13506457() > (uParam1[iParam0 /*24*/])->f_11)
			{
				unk_0x7FFE31040063EDAE((*uParam1)[iParam0 /*24*/], unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 5000);
				(uParam1[iParam0 /*24*/])->f_5++;
				(uParam1[iParam0 /*24*/])->f_11 = unk_0x693EBB4F13506457() + 5000;
			}
			break;
		
		case 2:
			if (!unk_0xF8D041B05C3D1FD4("chi2_hear", Param3.f_1))
			{
				if ((unk_0x46E74F6A73335A40(unk_0xA34E7C2A5118D638(), (*uParam1)[iParam0 /*24*/]) || iLocal_75 == 1) && func_67((*uParam1)[iParam0 /*24*/], (uParam1[iParam0 /*24*/])->f_12, 1) < (uParam1[iParam0 /*24*/])->f_19)
				{
					if (unk_0x693EBB4F13506457() > ((uParam1[iParam0 /*24*/])->f_11 - 3000))
					{
						unk_0x81333BEA4837207C((*uParam1)[iParam0 /*24*/], unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 1f, 20000, 0.1f, 0, 1193033728);
						(uParam1[iParam0 /*24*/])->f_15 = { unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1) };
						(uParam1[iParam0 /*24*/])->f_5 = 5;
					}
				}
				else if (unk_0x693EBB4F13506457() > (uParam1[iParam0 /*24*/])->f_11)
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
			else if (unk_0x693EBB4F13506457() > (uParam1[iParam0 /*24*/])->f_11)
			{
				unk_0x6EAFBB3A7F6ADEA9((*uParam1)[iParam0 /*24*/], (uParam1[iParam0 /*24*/])->f_18, 2000);
				(uParam1[iParam0 /*24*/])->f_5 = 4;
			}
			break;
		
		case 3:
			func_93();
			unk_0x81333BEA4837207C(0, (uParam1[iParam0 /*24*/])->f_12, 1f, 20000, 0.2f, 4096, 1193033728);
			unk_0x6EAFBB3A7F6ADEA9(0, (uParam1[iParam0 /*24*/])->f_18, 2000);
			func_92(uParam1[iParam0 /*24*/], 0);
			(uParam1[iParam0 /*24*/])->f_11 = unk_0x693EBB4F13506457() + 3000;
			(uParam1[iParam0 /*24*/])->f_5++;
			break;
		
		case 4:
			if (unk_0x090C65D5190A249D((*uParam1)[iParam0 /*24*/], 242628503) == 7 || (unk_0xF8D041B05C3D1FD4("chi2_hear", Param3.f_1) && unk_0x090C65D5190A249D((*uParam1)[iParam0 /*24*/], 1920390111) == 7))
			{
				if (!unk_0xF8D041B05C3D1FD4(sParam2, ""))
				{
					unk_0xFCA99C3640D1F1B5((*uParam1)[iParam0 /*24*/], sParam2, 0, 1);
				}
				(uParam1[iParam0 /*24*/])->f_4 = 0;
				(uParam1[iParam0 /*24*/])->f_5 = 0;
				(uParam1[iParam0 /*24*/])->f_1 = 0;
				(uParam1[iParam0 /*24*/])->f_2 = 0;
				if (unk_0xF8D041B05C3D1FD4("chi2_hear", Param3.f_1))
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
			if (func_67((*uParam1)[iParam0 /*24*/], (uParam1[iParam0 /*24*/])->f_15, 1) < 2f || unk_0x090C65D5190A249D((*uParam1)[iParam0 /*24*/], 713668775) == 7)
			{
				if (!unk_0x2DC9BA2299B45EA6((*uParam1)[iParam0 /*24*/]))
				{
					unk_0x5124C5FA52D2AF3E((*uParam1)[iParam0 /*24*/]);
					func_93();
					unk_0x170E3F679C0C8F29(0, unk_0xCC31DB73C65552D8((*uParam1)[iParam0 /*24*/], -5f, 3f, 0f), 2500, 0, 2);
					unk_0x170E3F679C0C8F29(0, unk_0xCC31DB73C65552D8((*uParam1)[iParam0 /*24*/], 5f, 3f, 0f), 2500, 0, 2);
					func_92(uParam1[iParam0 /*24*/], 0);
					(uParam1[iParam0 /*24*/])->f_11 = unk_0x693EBB4F13506457() + 3000;
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
	if (!unk_0x902595DAD7718896((*uParam1)[iParam0 /*24*/], 1))
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (unk_0x902595DAD7718896((*uParam1)[iVar0 /*24*/], 1) && unk_0x95CCECA3948CFE7B((*uParam1)[iVar0 /*24*/]))
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
			if (unk_0xA3C5926D6E5619AE((uParam1[iParam0 /*24*/])->f_18) > 20f)
			{
				if (bParam2)
				{
					unk_0xC518AECFA9CF7722(0, (*uParam1)[iVar3 /*24*/], 0);
				}
				else
				{
					unk_0xC518AECFA9CF7722((*uParam1)[iParam0 /*24*/], (*uParam1)[iVar3 /*24*/], 0);
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
	
	Var0 = { unk_0x44C17CCB85A88A1F(iParam0, 0) };
	Var3 = { unk_0x44C17CCB85A88A1F(iParam1, 0) };
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
	unk_0x5323F488E6A1B660(0, "misschinese2_bank1", "reaction_forward_big_intro_a", 4f, -2f, 1400, 0, 0, 0, 0, 0);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar2 = unk_0x531444754C426278(0, 3);
		iVar3 = unk_0x531444754C426278(1100, 1800);
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
				iVar2 = unk_0x531444754C426278(0, 4);
				switch (iVar2)
				{
					case 0:
						unk_0x5323F488E6A1B660(0, "reaction@male_stand@big_intro@left", "reaction_left_big_intro_a", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 1:
						unk_0x5323F488E6A1B660(0, "reaction@male_stand@big_intro@left", "reaction_left_big_intro_b", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 2:
						unk_0x5323F488E6A1B660(0, "reaction@male_stand@big_intro@left", "reaction_left_big_intro_c", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
				}
				break;
			
			case 1:
				iVar2 = unk_0x531444754C426278(0, 4);
				switch (iVar2)
				{
					case 0:
						unk_0x5323F488E6A1B660(0, "reaction@male_stand@big_intro@right", "reaction_right_big_intro_a", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 1:
						unk_0x5323F488E6A1B660(0, "reaction@male_stand@big_intro@right", "reaction_right_big_intro_b", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 2:
						unk_0x5323F488E6A1B660(0, "reaction@male_stand@big_intro@right", "reaction_right_big_intro_c", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
				}
				break;
			
			case 2:
				iVar2 = unk_0x531444754C426278(0, 4);
				switch (iVar2)
				{
					case 0:
						unk_0x5323F488E6A1B660(0, "reaction@male_stand@big_intro@backward", "reaction_backward_big_intro_a", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 1:
						unk_0x5323F488E6A1B660(0, "reaction@male_stand@big_intro@backward", "reaction_backward_big_intro_b", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
						break;
					
					case 2:
						unk_0x5323F488E6A1B660(0, "reaction@male_stand@big_intro@backward", "reaction_backward_big_intro_c", 4f, -2f, iVar3, 0, 0, 0, 0, 0);
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
	if (unk_0x95CCECA3948CFE7B(iParam0) && unk_0x95CCECA3948CFE7B(iParam1))
	{
		return func_114(iParam0, unk_0x44C17CCB85A88A1F(iParam1, 0));
	}
	return 0f;
}

float func_114(int iParam0, struct<3> Param1)
{
	float fVar0;
	
	if (unk_0x95CCECA3948CFE7B(iParam0))
	{
		if (!unk_0xB6900B8CB0ABBD2B(iParam0))
		{
			fVar0 = func_96(unk_0x44C17CCB85A88A1F(iParam0, 0), Param1, 1);
			return (fVar0 - unk_0x59DD203239FBDCAD(iParam0));
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
		if (unk_0x1E8D3FA42E89ED72(unk_0xC8B93D94F8954288()) || unk_0x0139E142C27412BC(0, 24))
		{
			iVar0 = 0;
			while (iVar0 < *uParam0)
			{
				if (!unk_0x902595DAD7718896((*uParam0)[iVar0 /*24*/], 1))
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
			if (!unk_0x902595DAD7718896((*uParam0)[iLocal_58 /*24*/], 1))
			{
				if ((uParam0[iLocal_58 /*24*/])->f_3 > 3 && (uParam0[iLocal_58 /*24*/])->f_1 > 1)
				{
					iVar0 = 0;
					while (iVar0 < *uParam0)
					{
						if (!unk_0x902595DAD7718896((*uParam0)[iVar0 /*24*/], 1))
						{
							if (iVar0 != iLocal_58)
							{
								if ((uParam0[iVar0 /*24*/])->f_3 <= 4)
								{
									if (func_4((*uParam0)[iVar0 /*24*/], (*uParam0)[iLocal_58 /*24*/], 1) < 8f)
									{
										if ((unk_0x6907EB47FC00DB19((*uParam0)[iLocal_58 /*24*/]) != 0 && unk_0x6907EB47FC00DB19((*uParam0)[iVar0 /*24*/]) != 0) || (unk_0x6907EB47FC00DB19((*uParam0)[iLocal_58 /*24*/]) == 0 && unk_0x6907EB47FC00DB19((*uParam0)[iVar0 /*24*/]) == 0))
										{
											Var3 = { unk_0x44C17CCB85A88A1F((*uParam0)[iVar0 /*24*/], 1) };
											Var6 = { unk_0x44C17CCB85A88A1F((*uParam0)[iLocal_58 /*24*/], 0) };
											if (unk_0xA3C5926D6E5619AE((Var3.f_2 - Var6.f_2)) < 2f)
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
							if (unk_0x95CCECA3948CFE7B((*uParam0)[iVar0 /*24*/]))
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
	if (unk_0x0AE990D4D01D6BFE(unk_0xC8B93D94F8954288()))
	{
		iVar13 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
		if (unk_0x5D42322C7DB888D0(iVar13, 0))
		{
			if (unk_0x9989B4AFDCCD9299(iVar13))
			{
				iVar14 = 1;
			}
		}
	}
	if (unk_0xDF87568D121A99AC(-1, Local_71, fLocal_74))
	{
		bLocal_54 = true;
	}
	if (!iLocal_55)
	{
		if (func_82(Param1.f_1) || func_82(Param4.f_1))
		{
			iLocal_59 = unk_0x693EBB4F13506457() + 1000;
			iLocal_55 = 1;
		}
		if (func_82(Param7.f_1) || func_82(Param10.f_1))
		{
			iLocal_59 = unk_0x693EBB4F13506457() + 1000;
			iLocal_55 = 1;
		}
	}
	else if (((!func_82(Param1.f_1) && !func_82(Param4.f_1)) && !func_82(Param7.f_1)) && !func_82(Param10.f_1))
	{
		iLocal_55 = 0;
	}
	else if (unk_0x693EBB4F13506457() > iLocal_59)
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
	if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		iVar17 = unk_0xBCEA8C5A6B3F7D71(unk_0xC8B93D94F8954288());
	}
	if (iLocal_62 == -1)
	{
		iLocal_75 = 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!unk_0x902595DAD7718896((*uParam0)[iVar0 /*24*/], 1))
		{
			if ((uParam0[iVar0 /*24*/])->f_3 != 7)
			{
				(uParam0[iVar0 /*24*/])->f_2 = (uParam0[iVar0 /*24*/])->f_1;
				(uParam0[iVar0 /*24*/])->f_1 = 0;
				if ((uParam0[iVar0 /*24*/])->f_3 <= 4)
				{
					if (iLocal_62 == -1)
					{
						if (unk_0x5D42322C7DB888D0(iVar17, 0))
						{
							if (unk_0x9989B4AFDCCD9299(iVar17))
							{
								iLocal_75 = 1;
								fVar16 = 20f;
							}
							if (unk_0x604B6B723F91A0FF(iVar17))
							{
								iLocal_75 = 1;
								fVar16 = 50f;
							}
						}
						if (unk_0x46E74F6A73335A40(unk_0xA34E7C2A5118D638(), (*uParam0)[iVar0 /*24*/]) || (unk_0x5D42322C7DB888D0(iVar17, 0) && unk_0x9989B4AFDCCD9299(iVar17)))
						{
							if (func_4(unk_0xC8B93D94F8954288(), (*uParam0)[iVar0 /*24*/], 1) < fVar16)
							{
								if ((uParam0[iVar0 /*24*/])->f_8)
								{
									if (unk_0x6907EB47FC00DB19(unk_0xC8B93D94F8954288()) == unk_0x6907EB47FC00DB19((*uParam0)[iVar0 /*24*/]))
									{
										fVar16 = func_4(unk_0xC8B93D94F8954288(), (*uParam0)[iVar0 /*24*/], 1);
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
					if (!bLocal_258 && !unk_0x770AAB67BDD9C729((*uParam0)[iVar0 /*24*/]))
					{
						if (unk_0xA89691BFEAFF7089((*uParam0)[iVar0 /*24*/], 123))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
						if (unk_0xB7805A5BD5AE4AF1((*uParam0)[iVar0 /*24*/], 123))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
							if (unk_0xA89691BFEAFF7089((*uParam0)[iVar0 /*24*/], 17))
							{
							}
						}
						if ((uParam0[iVar0 /*24*/])->f_9)
						{
							if (unk_0xFB2795545DBC1C8A(unk_0x44C17CCB85A88A1F((*uParam0)[iVar0 /*24*/], 1), 4f, 1, 1))
							{
								(uParam0[iVar0 /*24*/])->f_1 = 7;
							}
						}
						else if (unk_0xFB2795545DBC1C8A(unk_0x44C17CCB85A88A1F((*uParam0)[iVar0 /*24*/], 1), 6f, 1, 1))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
						if (unk_0xA89691BFEAFF7089((*uParam0)[iVar0 /*24*/], 124))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
						if (unk_0x0592F98C32AC22CA(unk_0x44C17CCB85A88A1F((*uParam0)[iVar0 /*24*/], 1), 1f, 1))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
					}
					if ((uParam0[iVar0 /*24*/])->f_3 < 4)
					{
						if ((uParam0[iVar0 /*24*/])->f_22 != -1)
						{
							if (unk_0x95CCECA3948CFE7B((*uParam0)[(uParam0[iVar0 /*24*/])->f_22 /*24*/]))
							{
								if (unk_0x902595DAD7718896((*uParam0)[(uParam0[iVar0 /*24*/])->f_22 /*24*/], 1))
								{
									if (unk_0x6F40F1AEF9770612((*uParam0)[iVar0 /*24*/], (*uParam0)[(uParam0[iVar0 /*24*/])->f_22 /*24*/]))
									{
										(uParam0[iVar0 /*24*/])->f_1 = 5;
									}
								}
							}
						}
						if ((uParam0[iVar0 /*24*/])->f_23 != -1)
						{
							if (unk_0x95CCECA3948CFE7B((*uParam0)[(uParam0[iVar0 /*24*/])->f_23 /*24*/]))
							{
								if (unk_0x902595DAD7718896((*uParam0)[(uParam0[iVar0 /*24*/])->f_23 /*24*/], 1))
								{
									if (unk_0x6F40F1AEF9770612((*uParam0)[iVar0 /*24*/], (*uParam0)[(uParam0[iVar0 /*24*/])->f_23 /*24*/]))
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
						if ((uParam0[iVar0 /*24*/])->f_3 > 4 || unk_0xA81F17D63315B662((*uParam0)[iVar0 /*24*/], 0))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 8;
						}
					}
					if (((unk_0xA89691BFEAFF7089((*uParam0)[iVar0 /*24*/], 1) || unk_0xB7805A5BD5AE4AF1((*uParam0)[iVar0 /*24*/], 1)) || (unk_0xA81F17D63315B662((*uParam0)[iVar0 /*24*/], 0) && unk_0x6665C11C406A8A3C((*uParam0)[iVar0 /*24*/], unk_0xC8B93D94F8954288()))) || (func_116((*uParam0)[iVar0 /*24*/]) && unk_0xB7805A5BD5AE4AF1((*uParam0)[iVar0 /*24*/], 1)))
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
				if (iVar14 && func_4(unk_0xC8B93D94F8954288(), (*uParam0)[iVar0 /*24*/], 1) < 50f)
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
	else if (unk_0x902595DAD7718896((*uParam0)[iLocal_62 /*24*/], 1))
	{
		iLocal_62 = -1;
	}
}

int func_116(var uParam0)
{
	if (unk_0xCD61E9D5CABC7E35(uParam0, "misschinese2_bank1", "alert_gunshot", 3))
	{
		return 1;
	}
	if (unk_0xCD61E9D5CABC7E35(uParam0, "misschinese2_bank1", "buddy_shot_b", 3))
	{
		return 1;
	}
	if (unk_0xCD61E9D5CABC7E35(uParam0, "misschinese2_bank1", "reaction_forward_big_intro_a", 3))
	{
		return 1;
	}
	if (unk_0xCD61E9D5CABC7E35(uParam0, "misschinese2_bank1", "alert_body", 3))
	{
		return 1;
	}
	if (unk_0xCD61E9D5CABC7E35(uParam0, "misschinese2_bank1", "react_forward_small_intro_a", 3))
	{
		return 1;
	}
	if (unk_0xCD61E9D5CABC7E35(uParam0, "misschinese2_bank1", "react_backward_small_intro_a", 3))
	{
		return 1;
	}
	if (unk_0xCD61E9D5CABC7E35(uParam0, "misschinese2_bank1", "react_left_small_intro_a", 3))
	{
		return 1;
	}
	if (unk_0xCD61E9D5CABC7E35(uParam0, "misschinese2_bank1", "react_right_small_intro_a", 3))
	{
		return 1;
	}
	return 0;
}

void func_117()
{
	if (iLocal_3491)
	{
		if (unk_0xB8A06E7E729EED0A(&Local_3498))
		{
			if (func_59())
			{
				if (unk_0x2964A62922189B93())
				{
					if (!unk_0xA3858ADDDBC3CB71())
					{
						cLocal_3492 = { func_118() };
						Local_3498 = { func_83() };
						StringCopy(&Local_3498, "", 24);
						if (!unk_0xB8A06E7E729EED0A(&cLocal_3492) && !unk_0xF8D041B05C3D1FD4(&cLocal_3492, "NULL"))
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
			if (unk_0x2964A62922189B93())
			{
				if (!func_82(&Local_3498))
				{
					iLocal_3491 = 0;
					StringCopy(&Local_3498, "", 24);
					StringCopy(&cLocal_3492, "", 24);
				}
			}
			if (!unk_0xB8A06E7E729EED0A(&Local_3498))
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
	if (Global_15712 == 4)
	{
		iVar6 = unk_0x8F37C4B2B81C98B9();
		iVar6 = (iVar6 + Global_16722);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0xF2831232D38CD691(&(Global_14580[iVar7 /*6*/])))
			{
				return Global_14580[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0xF2831232D38CD691(&(Global_14580[iVar8 /*6*/])))
					{
						return Global_14580[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_14580[iVar6 /*6*/];
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
	if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
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
		if (unk_0xEA2A06DF77A9D16E(&Var1, Local_444[0 /*5*/]))
		{
			fVar4 = 0f;
			fVar7 = 999999f;
			iVar0 = 0;
			while (iVar0 < Local_444.f_0)
			{
				if (iVar0 > 0)
				{
					fVar4 = (fVar4 + unk_0x4F982ED5336EA899(Local_444[(iVar0 - 1) /*5*/], Local_444[iVar0 /*5*/], 1));
				}
				if (Local_444[iVar0 /*5*/].f_4)
				{
					if (unk_0xEA2A06DF77A9D16E(&Var1, Local_444[iVar0 /*5*/]))
					{
						fVar6 = unk_0x4F982ED5336EA899(Local_444[iVar0 /*5*/], Var1, 1);
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
				iLocal_439 = unk_0x693EBB4F13506457();
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
		unk_0x83DE6CD915A9CA77();
		fVar9 = (unk_0xBBDA792448DB5A89((unk_0x693EBB4F13506457() - iLocal_439)) / fLocal_750);
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
			if ((unk_0x693EBB4F13506457() - Local_281[iVar0 /*5*/].f_4) > 1000)
			{
				unk_0xA578ABADA0A4C679(Local_281[iVar0 /*5*/].f_1, 0.4f, 1f);
			}
			if ((unk_0x693EBB4F13506457() - Local_281[iVar0 /*5*/].f_4) > 6000)
			{
				unk_0x46D5E9DC9AA9712F(Local_281[iVar0 /*5*/]);
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
	unk_0x46D5E9DC9AA9712F(Local_281[iLocal_441 /*5*/]);
	if (Local_281[iLocal_441 /*5*/].f_4 != 0)
	{
		unk_0xA578ABADA0A4C679(Local_281[iLocal_441 /*5*/].f_1, 0.4f, 1f);
	}
	Local_281[iLocal_441 /*5*/].f_4 = unk_0x693EBB4F13506457();
	Local_281[iLocal_441 /*5*/].f_1 = { Param0 };
	Local_281[iLocal_441 /*5*/] = unk_0x6EF1817A9074CC5B(Param0, uLocal_270, iParam3);
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
		unk_0xA51F11E1DC7307BB(unk_0xC8B93D94F8954288(), &iVar1, 1);
		if (iVar1 == joaat("weapon_petrolcan"))
		{
			if (unk_0x0139E142C27412BC(0, 24) && unk_0x1E8D3FA42E89ED72(unk_0xC8B93D94F8954288()))
			{
				if (iLocal_271 == 0)
				{
					unk_0xD810132681A9B83C(2f, 8f, 4);
					iLocal_271 = unk_0x693EBB4F13506457() + 250;
				}
				if (unk_0x693EBB4F13506457() > iLocal_271)
				{
					if (!bLocal_261)
					{
						fVar4 = 9999.9f;
						Local_274 = { func_124() };
						iVar0 = 0;
						while (iVar0 < Local_444.f_0)
						{
							if (unk_0x6B4865E08E90ACC5(Local_444[iVar0 /*5*/].f_3))
							{
								fVar2 = unk_0x4F982ED5336EA899(Local_274, unk_0xEACB9E183BFE83FD(Local_444[iVar0 /*5*/].f_3), 1);
								fVar3 = unk_0x4F982ED5336EA899(Local_444[iVar0 /*5*/], unk_0xEACB9E183BFE83FD(Local_444[iVar0 /*5*/].f_3), 1);
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
								if (unk_0xA1836B70A59643DD((iLocal_268 - iVar5)) > 1)
								{
									iLocal_268 = -1;
								}
								if (iLocal_268 == -1)
								{
									iLocal_268 = iLocal_267;
								}
								if (unk_0xA1836B70A59643DD((iLocal_268 - iVar5)) < 3 && unk_0xA1836B70A59643DD((iLocal_268 - iVar5)) > 0)
								{
									if (iLocal_268 < iVar5)
									{
										iVar6 = iLocal_268;
										while (iVar6 <= (iVar5 - 1))
										{
											if (unk_0x6B4865E08E90ACC5(Local_444[iVar6 /*5*/].f_3))
											{
												if (unk_0xF40F7B5C29E813BB(Local_444[iVar6 /*5*/].f_3) > 0)
												{
													unk_0x7DF168F8439ABF1A(Local_444[iVar6 /*5*/].f_3, 0);
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
											if (unk_0x6B4865E08E90ACC5(Local_444[iVar6 /*5*/].f_3))
											{
												if (unk_0xF40F7B5C29E813BB(Local_444[iVar6 /*5*/].f_3) > 0)
												{
													unk_0x7DF168F8439ABF1A(Local_444[iVar6 /*5*/].f_3, 0);
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
									if (unk_0x6B4865E08E90ACC5(Local_444[iVar5 /*5*/].f_3))
									{
										if (unk_0xF40F7B5C29E813BB(Local_444[iVar5 /*5*/].f_3) > 0)
										{
											unk_0x7DF168F8439ABF1A(Local_444[iVar5 /*5*/].f_3, 0);
											Local_444[iVar5 /*5*/].f_4 = 1;
											iLocal_269 = (iLocal_269 - 1);
										}
									}
								}
								if (iVar5 == 60)
								{
									if (unk_0x6B4865E08E90ACC5(Local_444[iVar5 /*5*/].f_3))
									{
										if (unk_0xF40F7B5C29E813BB(Local_444[iVar5 /*5*/].f_3) > 0)
										{
											unk_0x7DF168F8439ABF1A(Local_444[iVar5 /*5*/].f_3, 0);
											Local_444[iVar5 /*5*/].f_4 = 1;
											iLocal_269 = (iLocal_269 - 1);
										}
									}
								}
								if (iVar5 < 60)
								{
									if (func_71(Local_444[iVar5 + 1 /*5*/]))
									{
										if (unk_0x6B4865E08E90ACC5(Local_444[iVar5 /*5*/].f_3))
										{
											if (unk_0xF40F7B5C29E813BB(Local_444[iVar5 /*5*/].f_3) > 0)
											{
												unk_0x7DF168F8439ABF1A(Local_444[iVar5 /*5*/].f_3, 0);
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
	
	iVar0 = unk_0xA7C2E7868E127D65(unk_0xC8B93D94F8954288());
	if (unk_0x95CCECA3948CFE7B(iVar0))
	{
		iVar1 = unk_0x71EC6CC1E45B4DF1(iVar0, "Gun_Nuzzle");
		iVar1 = 1;
		Var2 = { unk_0xEA9A8033D5CFC295(iVar0, iVar1) };
		Var2 = { unk_0xE79F1883B253E5B8(Var2, unk_0x59DD203239FBDCAD(iVar0), 0.35f, 0f, -0.15f) };
		unk_0x32B7B9548CC32D81(Var2, &uVar8, 0);
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
				unk_0x46D5E9DC9AA9712F(Local_281[iVar0 /*5*/]);
				iVar0++;
			}
		}
		iLocal_263 = 0;
		iLocal_437 = 1;
		iLocal_439 = unk_0x693EBB4F13506457();
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
			if (unk_0x95CCECA3948CFE7B(Local_755[iVar0 /*33*/]))
			{
				if (!Local_755[iVar0 /*33*/].f_23)
				{
					if (unk_0x2DC9BA2299B45EA6(Local_755[iVar0 /*33*/]))
					{
						Local_755[iVar0 /*33*/].f_23 = 1;
						func_9(151, 1, 0);
					}
				}
				if (unk_0xBD4278CDF5C53C71(Local_755[iVar0 /*33*/]) == iLocal_1616)
				{
					func_97(Local_755[iVar0 /*33*/], &(Local_755[iVar0 /*33*/].f_25), -1, 0, 0, 0, -1082130432, 0, -1);
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
	
	if (unk_0x6B4865E08E90ACC5(*uParam0))
	{
		unk_0x5356E82C1E5E0C44(uParam0);
		bVar0 = true;
	}
	if (unk_0x6B4865E08E90ACC5(uParam0->f_1))
	{
		unk_0x5356E82C1E5E0C44(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x95CCECA3948CFE7B(uParam0->f_7))
	{
		if (!unk_0x2DC9BA2299B45EA6(uParam0->f_7))
		{
			if (unk_0x4E12F93E42909E85(uParam0->f_7))
			{
				unk_0xA474BF93C34BB50D(uParam0->f_7, 0);
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
	func_347();
	switch (iLocal_2511)
	{
		case 0:
			func_262();
			break;
		
		case 1:
			func_259();
			break;
		
		case 2:
			func_215();
			break;
		
		case 3:
			func_200();
			break;
		
		case 4:
			func_199();
			break;
		
		case 5:
			func_199();
			break;
		
		case 6:
			func_199();
			break;
		
		case 7:
			func_195();
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
	while (!unk_0x233432976E597324("CHN2_MISSION_FAIL"))
	{
		func_28(21, 1);
	}
	if (!unk_0xB8A06E7E729EED0A(sParam0))
	{
		sLocal_2513 = sParam0;
	}
	if (unk_0x544AEDB4A15228FF(sLocal_2513))
	{
		sLocal_2513 = "CHFAIL";
	}
	func_132(sLocal_2513);
	while (!func_131())
	{
		func_28(2, 0);
	}
	func_408(1);
}

int func_131()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_91106 == 7 || Global_91106 == 8)
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
	
	if (Global_100976.f_7719 || func_141(0))
	{
		iVar0 = func_140();
		if (!func_134(iVar0))
		{
			return;
		}
		unk_0x59A0729D503ED758(&(Global_82191[iVar0 /*5*/].f_1), 5);
		Global_91142 = iParam0;
	}
}

int func_134(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_139();
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		unk_0xE3BB289E1C1F168E(5000);
	}
	iVar0 = Global_82191[iParam0 /*5*/];
	iVar1 = Global_69586.f_109[iVar0 /*4*/];
	func_138(iVar1, 1);
	unk_0x56A28F32E01DD318(unk_0xA34E7C2A5118D638());
	unk_0x5E70D5A5F14A2E17(unk_0xA34E7C2A5118D638());
	func_135(&(Global_100976.f_1770.f_539), iVar1);
	if (Global_85614 == Global_91143)
	{
		Global_100976.f_7719.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0xDCC86F723E82125E(Global_82227[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
		{
			unk_0x0F976C80D8B6703E(0);
		}
	}
	Global_100976.f_7719.f_330[iVar1 /*6*/].f_2++;
	Global_85614 = Global_91143;
	if (iParam0 == -1)
	{
		if (Global_100976.f_7719)
		{
		}
		return 0;
	}
	if (unk_0xDCC86F723E82125E(Global_82191[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0xDCC86F723E82125E(Global_82191[iParam0 /*5*/].f_1, 5))
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
		iVar1 = Global_100976.f_17167[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0xDCC86F723E82125E(Global_100976.f_7719.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_137(Global_100976.f_17167[iVar0], &Var2, &fVar5))
			{
				Global_100976.f_17167[iVar0] = 318;
				func_136(&(uParam0->f_1524[iVar0]));
				uParam0->f_1528[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1538[iVar0] = 0f;
				uParam0->f_1542[iVar0] = 0;
				uParam0->f_1546[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1556[iVar0] = 0;
				Global_88829[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_88829[iVar0 /*29*/].f_9 = 0f;
				Global_88829[iVar0 /*29*/].f_12 = 0f;
				Global_88829[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_88829[iVar0 /*29*/].f_10 = 0f;
				Global_88829[iVar0 /*29*/].f_13 = 0f;
				Global_88829[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_88829[iVar0 /*29*/].f_11 = 0f;
				Global_88829[iVar0 /*29*/].f_14 = 0f;
				Global_88829[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_88829[iVar0 /*29*/].f_26 = 0f;
				Global_88829[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_88829[iVar0 /*29*/].f_27 = 0f;
				Global_88829[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_88829[iVar0 /*29*/].f_28 = 0f;
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
			Global_85424[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85424[iParam0 /*2*/] = 0;
	}
}

void func_139()
{
	Global_91141 = 1;
	if (unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1))
	{
		if (unk_0xB8A06E7E729EED0A(&Global_69549))
		{
			switch (func_43())
			{
				case 0:
					StringCopy(&Global_69549, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_69549, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_69549, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_69553, "", 16);
		}
		Global_91141 = 0;
	}
	else if (!unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		if (unk_0xB8A06E7E729EED0A(&Global_69549))
		{
			switch (func_43())
			{
				case 0:
					StringCopy(&Global_69549, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_69549, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_69549, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_69553, "", 16);
		}
		Global_91141 = 0;
		unk_0x59A0729D503ED758(&(Global_91106.f_20), 25);
	}
}

int func_140()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0xDCC86F723E82125E(Global_82191[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_141(bool bParam0)
{
	if (!bParam0 && unk_0xCBC8FFE55DC722B5(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xDCC86F723E82125E(Global_69565, 0);
}

void func_142(char* sParam0)
{
	if (!unk_0xB8A06E7E729EED0A(sParam0))
	{
		if (unk_0x71F27A2B1B0287CD(sParam0) <= 16)
		{
			StringCopy(&Global_69549, sParam0, 16);
			StringCopy(&Global_69553, "", 16);
			if (unk_0xA0CEFA7178F5CDE5())
			{
				unk_0xF7588C28E8908E72();
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
	unk_0x7846F09C04C34C46();
	func_145(0, 0);
	func_408(0);
}

void func_145(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_55661)
	{
		Global_55661 = iParam1;
	}
	if (bParam0)
	{
		if ((func_141(0) && Global_69563.f_1 == 1) && func_146(Global_69563))
		{
		}
		else
		{
			Global_55659 = 1;
		}
	}
	if (Global_100976.f_7719 || func_141(0))
	{
		iVar0 = func_140();
		iVar1 = Global_82191[iVar0 /*5*/];
		uVar2 = Global_69586.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_100976.f_7719)
			{
			}
			return;
		}
		if (unk_0xDCC86F723E82125E(Global_82191[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0xDCC86F723E82125E(Global_82191[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0x59A0729D503ED758(&(Global_82191[iVar0 /*5*/].f_1), 4);
		unk_0x59A0729D503ED758(&Global_69565, 1);
		Global_69581 = uVar2;
		Global_69582 = unk_0x693EBB4F13506457();
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
	
	Var0 = { unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1) };
	if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 2432.476f, 4953.242f, 43.05545f, 2466.34f, 4986.15f, 57.25303f, 14.4375f, 0, 1, 0))
	{
		if (Var0.f_2 < 50f)
		{
			if ((((unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 2436.762f, 4956.011f, 44.49009f, 2443.38f, 4962.625f, 48.2233f, 1.5f, 0, 1, 0) || unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 2447.669f, 4966.554f, 44.95141f, 2452.497f, 4969.825f, 48.89074f, 2.3125f, 0, 1, 0)) || unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 2454.863f, 4968.686f, 44.95141f, 2460.505f, 4974.409f, 48.82641f, 1.6875f, 0, 1, 0)) || unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 2459.058f, 4977.546f, 44.95141f, 2460.411f, 4979.302f, 48.82641f, 1.6875f, 0, 1, 0)) || unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 2457.602f, 4984.746f, 44.73669f, 2461.977f, 4989.49f, 48.47844f, 1.6875f, 0, 1, 0))
			{
				if (!unk_0x79E944054F6C9DCD(unk_0xC8B93D94F8954288()))
				{
					unk_0x787D0C36DAC3CBF8(unk_0xC8B93D94F8954288());
				}
			}
		}
		else if ((((((unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 2454.179f, 4995.281f, 44.54151f, 2453.096f, 4993.905f, 48.32043f, 1.6875f, 0, 1, 0) || unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 2449.401f, 4990.354f, 44.92924f, 2447.717f, 4988.865f, 48.82129f, 1.6875f, 0, 1, 0)) || unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 2443.906f, 4990.104f, 44.4446f, 2439.007f, 4985.271f, 48.30458f, 1.6875f, 0, 1, 0)) || unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 2439.602f, 4982.387f, 44.95141f, 2440.797f, 4981.365f, 48.82642f, 1.6875f, 0, 1, 0)) || unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 2440.259f, 4980.671f, 44.95142f, 2434.769f, 4975.055f, 48.82642f, 1.6875f, 0, 1, 0)) || unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 2432.165f, 4972.586f, 44.29909f, 2430.114f, 4970.545f, 48.21086f, 1.6875f, 0, 1, 0)) || unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 2428.46f, 4968.569f, 44.81597f, 2426.632f, 4966.603f, 48.29342f, 1.6875f, 0, 1, 0))
		{
			if (!unk_0x79E944054F6C9DCD(unk_0xC8B93D94F8954288()))
			{
				unk_0x787D0C36DAC3CBF8(unk_0xC8B93D94F8954288());
			}
		}
	}
	else if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 2455.487f, 4997.566f, 43.1101f, 2423.653f, 4962.837f, 57.34888f, 14.4375f, 0, 1, 0))
	{
		if (Var0.f_2 < 50f)
		{
			if ((unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 2442.913f, 4965.273f, 50.15687f, 2444.49f, 4967.41f, 53.81783f, 1.6875f, 0, 1, 0) || unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 2445.239f, 4969.07f, 49.94284f, 2450.365f, 4972.188f, 54.03251f, 2.375f, 0, 1, 0)) || unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 2452.332f, 4971.817f, 49.94283f, 2457.977f, 4977.583f, 53.88097f, 2.375f, 0, 1, 0))
			{
				if (!unk_0x79E944054F6C9DCD(unk_0xC8B93D94F8954288()))
				{
					unk_0x787D0C36DAC3CBF8(unk_0xC8B93D94F8954288());
				}
			}
		}
		else if ((unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 2457.621f, 4978.462f, 49.94283f, 2453.932f, 4982.161f, 53.81783f, 2.375f, 0, 1, 0) || unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 2452.054f, 4984.156f, 49.94283f, 2448.12f, 4987.809f, 53.81316f, 2.375f, 0, 1, 0)) || unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 2442.014f, 4980.539f, 49.94283f, 2435.796f, 4971.945f, 53.90388f, 2.375f, 0, 1, 0))
		{
			if (!unk_0x79E944054F6C9DCD(unk_0xC8B93D94F8954288()))
			{
				unk_0x787D0C36DAC3CBF8(unk_0xC8B93D94F8954288());
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
					if (!unk_0xB45DF29A98EEAD5D())
					{
						unk_0x3FC2BA6A5AC4D02F(2f);
						Local_3337[iParam0 /*4*/].f_1 = 1;
					}
					break;
				
				case 4:
					if (unk_0xCF2007E49440141B(unk_0xA34E7C2A5118D638()))
					{
						if (unk_0xBDC482FE4AF5F4F1(0))
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
					if (!func_59() && !unk_0xA3858ADDDBC3CB71())
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
							if (unk_0x271A74D807F62BC0(unk_0xC8B93D94F8954288()))
							{
								Local_3337[iParam0 /*4*/].f_3 = unk_0x693EBB4F13506457() + 1000;
								Local_3337[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 1:
							if (unk_0x693EBB4F13506457() > Local_3337[iParam0 /*4*/].f_3)
							{
								if (unk_0xBDC482FE4AF5F4F1(0))
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
							if (unk_0x11BD984A2A4EF9A7(211) != 0)
							{
								Local_3337[iParam0 /*4*/].f_3 = unk_0x693EBB4F13506457() + 4000;
								Local_3337[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 1:
							if (unk_0x693EBB4F13506457() > Local_3337[iParam0 /*4*/].f_3)
							{
								iVar0 = joaat("weapon_unarmed");
								unk_0xA51F11E1DC7307BB(unk_0xC8B93D94F8954288(), &iVar0, 1);
								if ((iVar0 != joaat("weapon_sniperrifle") && iVar0 != joaat("weapon_heavysniper")) && iVar0 != joaat("weapon_unarmed"))
								{
									if (!unk_0xA3858ADDDBC3CB71() && !unk_0xB45DF29A98EEAD5D())
									{
										if (!func_59())
										{
											if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
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
					unk_0x8755DAC584918BF9(uLocal_2677, "FRMBLIPB");
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
							if (unk_0xA51F11E1DC7307BB(unk_0xC8B93D94F8954288(), &iVar1, 1))
							{
								if (iVar1 == joaat("weapon_petrolcan"))
								{
									if (unk_0x0139E142C27412BC(0, 24))
									{
										unk_0x9F4AA6F234E8A860(1);
									}
								}
							}
							if (!unk_0xB45DF29A98EEAD5D())
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
									if (unk_0x6907EB47FC00DB19(unk_0xC8B93D94F8954288()) != 0)
									{
										if (!unk_0x6B4865E08E90ACC5(uLocal_2677))
										{
											unk_0x7846F09C04C34C46();
											func_7("FRMSHP", 7500, 1);
											uLocal_2677 = func_5(2454.895f, 4950.895f, 44.1488f, 0);
										}
									}
									else if (func_67(unk_0xC8B93D94F8954288(), 2454.895f, 4950.895f, 44.1488f, 1) < 5f)
									{
										unk_0x7846F09C04C34C46();
										if (unk_0x6B4865E08E90ACC5(uLocal_2677))
										{
											unk_0x5356E82C1E5E0C44(&uLocal_2677);
										}
										func_7("FRMIGN", 7500, 1);
										unk_0x925AE2E6F6E41362("CHI_2_SHOOT_GAS");
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
									unk_0x7846F09C04C34C46();
								}
							}
							if (unk_0x6907EB47FC00DB19(unk_0xC8B93D94F8954288()) != 0)
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
						unk_0x7846F09C04C34C46();
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
	unk_0xBBB1F62EC5E3BBC6(sParam0);
	unk_0xEE90E717A80AA597(iParam1, 1);
}

void func_151(char* sParam0, int iParam1)
{
	unk_0xF4A7F7324E8C92A2(sParam0);
	unk_0x31D76F87C39FB8DD(0, 0, 1, iParam1);
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
					if (func_35("TRV_WTF", 1, unk_0xC8B93D94F8954288(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_3358[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 2:
					switch (Local_3358[iParam0 /*7*/].f_3)
					{
						case 0:
							Local_3358[iParam0 /*7*/].f_4 = unk_0x693EBB4F13506457() + 2000;
							Local_3358[iParam0 /*7*/].f_3++;
							break;
						
						case 1:
							if (unk_0x693EBB4F13506457() > Local_3358[iParam0 /*7*/].f_4)
							{
								if (func_59())
								{
									Local_3358[iParam0 /*7*/].f_4 = unk_0x693EBB4F13506457() + 2000;
								}
								else
								{
									iVar0 = 0;
									if (func_159(&iVar0, 2, 1))
									{
										if (func_35("RAGE", 1, unk_0xC8B93D94F8954288(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_3358[iParam0 /*7*/].f_4 = (unk_0x693EBB4F13506457() + unk_0x531444754C426278(8000, 14000));
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
						if (!unk_0x2DC9BA2299B45EA6(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/]))
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
							if (unk_0x2DC9BA2299B45EA6(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/]))
							{
								Local_3358[iParam0 /*7*/].f_4 = Local_3358[iParam0 /*7*/].f_5;
								if (!unk_0x2DC9BA2299B45EA6(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/]))
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
							if (!unk_0x2DC9BA2299B45EA6(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/]))
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
							if (!unk_0x2DC9BA2299B45EA6(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/]))
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
							if (!unk_0x2DC9BA2299B45EA6(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/]))
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
						if (!unk_0x2DC9BA2299B45EA6(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/]))
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
						if (!unk_0x2DC9BA2299B45EA6(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/]))
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
					if (func_35("CHI2_drive", 1, unk_0xC8B93D94F8954288(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_3358[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 9:
					switch (Local_3358[iParam0 /*7*/].f_3)
					{
						case 0:
							if (!unk_0x2DC9BA2299B45EA6(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/]))
							{
								Local_3358[iParam0 /*7*/].f_3 = unk_0x531444754C426278(1, 3);
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
							if (unk_0x693EBB4F13506457() > Local_3358[iParam0 /*7*/].f_4)
							{
								if (func_159(&(Local_3358[iParam0 /*7*/].f_5), 1, 1))
								{
									Local_3358[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!unk_0x2DC9BA2299B45EA6(Local_755[Local_3358[iParam0 /*7*/].f_5 /*33*/]))
							{
								if (Local_3358[iParam0 /*7*/].f_6 < 3)
								{
									if (func_35("ONEILGUARD5", 5, Local_755[Local_3358[iParam0 /*7*/].f_5 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_3358[iParam0 /*7*/].f_4 = (unk_0x693EBB4F13506457() + unk_0x531444754C426278(7000, 12000));
										Local_3358[iParam0 /*7*/].f_6++;
										Local_3358[iParam0 /*7*/].f_3 = 0;
									}
								}
								else if (Local_3358[iParam0 /*7*/].f_6 < 6)
								{
									if (func_35("ONEILGUARD6", 6, Local_755[Local_3358[iParam0 /*7*/].f_5 /*33*/], "ONEILGUARD2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_3358[iParam0 /*7*/].f_4 = (unk_0x693EBB4F13506457() + unk_0x531444754C426278(7000, 12000));
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
							if (unk_0x693EBB4F13506457() > Local_3358[iParam0 /*7*/].f_4)
							{
								if (func_159(&(Local_3358[iParam0 /*7*/].f_5), 1, 1))
								{
									Local_3358[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!unk_0x2DC9BA2299B45EA6(Local_755[Local_3358[iParam0 /*7*/].f_5 /*33*/]))
							{
								switch (Local_3358[iParam0 /*7*/].f_6)
								{
									case 0:
									case 2:
									case 5:
									case 9:
										if (func_35("COOKATT", 3, Local_755[Local_3358[iParam0 /*7*/].f_5 /*33*/], "oneilcook", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_3358[iParam0 /*7*/].f_4 = (unk_0x693EBB4F13506457() + unk_0x531444754C426278(7000, 12000));
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
											Local_3358[iParam0 /*7*/].f_4 = (unk_0x693EBB4F13506457() + unk_0x531444754C426278(7000, 12000));
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
											Local_3358[iParam0 /*7*/].f_4 = (unk_0x693EBB4F13506457() + unk_0x531444754C426278(7000, 12000));
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
							if (unk_0x693EBB4F13506457() > Local_3358[iParam0 /*7*/].f_4)
							{
								if (func_159(&(Local_3358[iParam0 /*7*/].f_5), 2, 1))
								{
									Local_3358[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!unk_0x2DC9BA2299B45EA6(Local_755[Local_3358[iParam0 /*7*/].f_5 /*33*/]))
							{
								switch (Local_3358[iParam0 /*7*/].f_6)
								{
									case 0:
									case 2:
									case 5:
									case 9:
										if (func_35("GOONIN", 3, Local_755[Local_3358[iParam0 /*7*/].f_5 /*33*/], "chin2goon1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_3358[iParam0 /*7*/].f_4 = (unk_0x693EBB4F13506457() + unk_0x531444754C426278(6000, 10000));
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
											Local_3358[iParam0 /*7*/].f_4 = (unk_0x693EBB4F13506457() + unk_0x531444754C426278(6000, 10000));
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
											Local_3358[iParam0 /*7*/].f_4 = (unk_0x693EBB4F13506457() + unk_0x531444754C426278(6000, 10000));
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
									if (!unk_0x2DC9BA2299B45EA6(Local_755[iVar2 /*33*/]))
									{
										if (unk_0xA81F17D63315B662(Local_755[iVar2 /*33*/], 0))
										{
											if (unk_0x6665C11C406A8A3C(Local_755[iVar2 /*33*/], unk_0xC8B93D94F8954288()))
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
							if (!unk_0x2DC9BA2299B45EA6(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD3", 5, Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_3358[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!unk_0x2DC9BA2299B45EA6(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/]))
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
							if (func_35("CHI2_app", 1, unk_0xC8B93D94F8954288(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_3358[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 17:
					if (func_35("CHI2_app", 1, unk_0xC8B93D94F8954288(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
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
							if (func_35("CHI2_HARD", 1, unk_0xC8B93D94F8954288(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
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
							if (unk_0x693EBB4F13506457() > Local_3358[iParam0 /*7*/].f_5)
							{
								fVar4 = 999f;
								Local_3358[iParam0 /*7*/].f_4 = -1;
								iVar3 = 0;
								while (iVar3 < Local_755.f_0)
								{
									if (Local_755[iVar3 /*33*/].f_1 == 2)
									{
										if (!unk_0x2DC9BA2299B45EA6(Local_755[iVar3 /*33*/]))
										{
											fVar5 = func_4(unk_0xC8B93D94F8954288(), Local_755[iVar3 /*33*/], 1);
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
							if (!unk_0x2DC9BA2299B45EA6(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("CHI2_outs", 5, Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/], "Oneilguard1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_3358[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_3358[iParam0 /*7*/].f_5 = unk_0x693EBB4F13506457() + 6000;
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
								if (unk_0xBC6B93737FCDC466(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/].f_14))
								{
									if (unk_0x2091E42376999826(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/].f_14) > 0.15f)
									{
										if (unk_0x2091E42376999826(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/].f_14) < 0.65f)
										{
											if (func_4(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/], unk_0xC8B93D94F8954288(), 1) < 30f)
											{
												Local_3358[iParam0 /*7*/].f_3 = 3;
											}
										}
									}
								}
							}
							break;
						
						case 2:
							if (!unk_0x2DC9BA2299B45EA6(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/]))
							{
								Local_3358[iParam0 /*7*/].f_3++;
							}
							else
							{
								Local_3358[iParam0 /*7*/].f_3 = 1;
							}
							break;
						
						case 3:
							if (!unk_0x2DC9BA2299B45EA6(Local_755[Local_3358[iParam0 /*7*/].f_5 /*33*/]))
							{
								unk_0x7033366221CC71C6(Local_755[Local_3358[iParam0 /*7*/].f_5 /*33*/], "generic_cheer", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", 0);
								Local_3358[iParam0 /*7*/].f_3++;
							}
							else
							{
								Local_3358[iParam0 /*7*/].f_3 = 1;
							}
							break;
						
						case 4:
							if (!unk_0x2DC9BA2299B45EA6(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (unk_0xBC6B93737FCDC466(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/].f_14))
								{
									if (unk_0x2091E42376999826(Local_755[Local_3358[iParam0 /*7*/].f_4 /*33*/].f_14) > 0.75f)
									{
										Local_3358[iParam0 /*7*/].f_3 = 1;
									}
								}
							}
							break;
					}
					break;
				
				case 21:
					if (func_35("CHI2_find", 1, unk_0xC8B93D94F8954288(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						unk_0xD810132681A9B83C(5f, 8f, 4);
						Local_3358[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 26:
					if (func_158())
					{
						if (func_35("CHI2_pourmis", 1, unk_0xC8B93D94F8954288(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
						{
							Local_3358[iParam0 /*7*/].f_1 = 1;
						}
					}
					break;
				
				case 27:
					if (func_35("CHI2_boom", 1, unk_0xC8B93D94F8954288(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
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
								if (func_35("CHI2_pour", 1, unk_0xC8B93D94F8954288(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_3358[iParam0 /*7*/].f_3 = 1;
									Local_3358[iParam0 /*7*/].f_4 = (12000 + unk_0x531444754C426278(3000, 5000));
									Local_3358[iParam0 /*7*/].f_5++;
								}
							}
							break;
					}
					break;
				
				case 23:
					if (func_35("CHI2_light", 1, unk_0xC8B93D94F8954288(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_3358[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 24:
					if (func_35("CHI2_boom", 1, unk_0xC8B93D94F8954288(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_3358[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 25:
					if (func_35("CHI2_burn", 1, unk_0xC8B93D94F8954288(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
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
			if (iParam2 == 0 || (iParam2 == 1 && !unk_0x2DC9BA2299B45EA6(Local_755[iVar0 /*33*/])))
			{
				fVar1 = func_4(unk_0xC8B93D94F8954288(), Local_755[iVar0 /*33*/], 1);
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
							unk_0x925AE2E6F6E41362("CHI_2_DRIVE_TO_FARMHOUSE");
							Local_2917[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
							{
								unk_0xDB9D78E5137EE7AD("CHI_2_DRIVE_TO_FARMHOUSE");
								Local_2917[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 3:
					if (func_67(unk_0xC8B93D94F8954288(), 1991.05f, 3054.262f, 46.2147f, 1) > 250f)
					{
						if (unk_0x95CCECA3948CFE7B(Local_755[11 /*33*/]))
						{
							unk_0x26B3B761603F5232(&(Local_755[11 /*33*/]));
						}
						if (unk_0x95CCECA3948CFE7B(Local_755[10 /*33*/]))
						{
							unk_0x26B3B761603F5232(&(Local_755[10 /*33*/]));
						}
						if (unk_0x95CCECA3948CFE7B(Local_755[12 /*33*/]))
						{
							unk_0x26B3B761603F5232(&(Local_755[12 /*33*/]));
						}
						if (unk_0x95CCECA3948CFE7B(Local_755[13 /*33*/]))
						{
							unk_0x26B3B761603F5232(&(Local_755[13 /*33*/]));
						}
						if (unk_0x95CCECA3948CFE7B(Local_755[14 /*33*/]))
						{
							unk_0x26B3B761603F5232(&(Local_755[14 /*33*/]));
						}
						unk_0x4BBD72565A0AF033(joaat("ig_janet"));
						unk_0x4BBD72565A0AF033(joaat("ig_janet"));
						unk_0x4BBD72565A0AF033(joaat("ig_old_man1a"));
						unk_0x4BBD72565A0AF033(joaat("ig_old_man2"));
						unk_0x4BBD72565A0AF033(joaat("ig_taocheng"));
						unk_0x4BBD72565A0AF033(joaat("ig_taostranslator"));
						unk_0x3ECF1E41E6ED71D8("misschinese2_crystalmaze");
						unk_0x3ECF1E41E6ED71D8("MISSChinese2_crystalMazeMCS1_IG");
						unk_0x3ECF1E41E6ED71D8("missrampageintrooutro");
						if (iLocal_2884 != -1)
						{
							if (unk_0xDA33F6DC6574B8DD(iLocal_2884))
							{
								unk_0x78DFC4B56BCF3DA9(iLocal_2884);
							}
						}
						unk_0xE7E852B69C980E80();
						func_31(26, 1);
						Local_2917[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 5:
					if (unk_0x8BB5631CA898C6D4("CHI_2_FARMHOUSE_INTRO", "CHINESE2_FARMHOUSE_INTRODUCTION"))
					{
						Local_2917[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 4:
					if (func_67(unk_0xC8B93D94F8954288(), 2457.49f, 4977.095f, 50.56783f, 1) < 400f)
					{
						func_32(27, 0);
						unk_0x9F0FFB655C4C4297(1);
						unk_0x007CAC85F0301094(1);
						unk_0xB0DD2D37A4603474("chinese2_farmhouse_cutscene");
						Local_2917[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 7:
					if ((!unk_0x2DC9BA2299B45EA6(Local_755[12 /*33*/]) && !unk_0x2DC9BA2299B45EA6(Local_755[13 /*33*/])) && !unk_0x2DC9BA2299B45EA6(Local_755[14 /*33*/]))
					{
						if (func_169(6, 6) < 2)
						{
							if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 1981.257f, 3050.721f, 41.08995f, 1984.257f, 3055.543f, 49.47314f, 3.0625f, 0, 1, 0))
							{
								if (unk_0x090C65D5190A249D(Local_755[12 /*33*/], 150319005) == 7)
								{
									unk_0xE48D9147BC1F4CD7(Local_755[13 /*33*/], unk_0xC8B93D94F8954288(), -1, 0, 2);
									unk_0xE48D9147BC1F4CD7(Local_755[14 /*33*/], unk_0xC8B93D94F8954288(), -1, 0, 2);
									unk_0xE48D9147BC1F4CD7(Local_755[12 /*33*/], unk_0xC8B93D94F8954288(), -1, 0, 2);
								}
							}
						}
					}
					break;
				
				case 8:
					fVar1 = func_67(unk_0xC8B93D94F8954288(), 2450.214f, 4979.208f, 60.8422f, 1);
					if (fVar1 < 900f)
					{
						if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
						{
							uVar4 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
							if (unk_0x5D42322C7DB888D0(uVar4, 0))
							{
								if (unk_0xAF40E7422A6D9D80(unk_0x6D5BB810CC209E15(iVar4)) || unk_0xE924C2C283992918(unk_0x6D5BB810CC209E15(iVar4)))
								{
									fVar2 = (900f - fVar1);
									if (fVar2 < 0f)
									{
										fVar2 = 0f;
									}
									fVar2 = (fVar2 / 900f);
									fVar2 = (fVar2 * 10000f);
									fVar3 = unk_0x9BA9222C7124CA04(iVar4);
									fVar2 = (fVar2 * (fVar3 / 35f));
									if (fVar3 > 35f)
									{
										unk_0x826839BB9226283E(iVar4, 1, 0f, -fVar2, 0f, 0, 1, 0, 0);
									}
								}
							}
						}
					}
					break;
				
				case 9:
					if (unk_0xCD61E9D5CABC7E35(unk_0xC8B93D94F8954288(), "missrampageintrooutro", "trvram_6_1h_run_outro", 3))
					{
						Local_2917[iParam0 /*10*/].f_6 = 1;
						unk_0x1F64302AA4F597A7(unk_0xC8B93D94F8954288(), 321, 1);
						if (unk_0x1E13AB82EFC29B1D(unk_0xC8B93D94F8954288(), unk_0x7CBED6EFED40E7EB("walkinterruptible")))
						{
							unk_0x447955D97DC49D70(unk_0xC8B93D94F8954288(), joaat("MotionState_Idle"), 0, 0, 0);
							if (func_168())
							{
								unk_0x5124C5FA52D2AF3E(unk_0xC8B93D94F8954288());
								Local_2917[iParam0 /*10*/].f_3 = 1;
							}
						}
					}
					else if (Local_2917[iParam0 /*10*/].f_6 == 1)
					{
						unk_0x3ECF1E41E6ED71D8("missrampageintrooutro");
						Local_2917[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 6:
					switch (Local_2917[iParam0 /*10*/].f_6)
					{
						case 0:
							if ((!unk_0x2DC9BA2299B45EA6(Local_755[12 /*33*/]) && !unk_0x2DC9BA2299B45EA6(Local_755[13 /*33*/])) && !unk_0x2DC9BA2299B45EA6(Local_755[14 /*33*/]))
							{
								unk_0xCBD60E398042F554(Local_755[12 /*33*/], uLocal_2636);
								unk_0xCBD60E398042F554(Local_755[13 /*33*/], iLocal_2636);
								unk_0xCBD60E398042F554(Local_755[14 /*33*/], iLocal_2636);
								unk_0x1296D571B761D748(Local_755[12 /*33*/], 17, 1);
								unk_0x1296D571B761D748(Local_755[13 /*33*/], 17, 1);
								unk_0x1296D571B761D748(Local_755[14 /*33*/], 17, 1);
								unk_0x0CBE045BBBA5CFDE(Local_755[12 /*33*/]);
								unk_0x0CBE045BBBA5CFDE(Local_755[13 /*33*/]);
								unk_0x0CBE045BBBA5CFDE(Local_755[14 /*33*/]);
								Local_2917[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if ((unk_0x2DC9BA2299B45EA6(Local_755[12 /*33*/]) || unk_0x2DC9BA2299B45EA6(Local_755[13 /*33*/])) || unk_0x2DC9BA2299B45EA6(Local_755[14 /*33*/]))
							{
								Local_2917[iParam0 /*10*/].f_6++;
							}
							if (!unk_0x2DC9BA2299B45EA6(Local_755[12 /*33*/]))
							{
								if (unk_0x53FACDFDDEA6B021(Local_755[12 /*33*/]))
								{
									Local_2917[iParam0 /*10*/].f_6 = 2;
								}
							}
							if (!unk_0x2DC9BA2299B45EA6(Local_755[13 /*33*/]))
							{
								if (unk_0x53FACDFDDEA6B021(Local_755[13 /*33*/]))
								{
									Local_2917[iParam0 /*10*/].f_6 = 2;
								}
							}
							if (!unk_0x2DC9BA2299B45EA6(Local_755[14 /*33*/]))
							{
								if (unk_0x53FACDFDDEA6B021(Local_755[14 /*33*/]))
								{
									Local_2917[iParam0 /*10*/].f_6 = 2;
								}
							}
							break;
						
						case 2:
							if (!unk_0x2DC9BA2299B45EA6(Local_755[12 /*33*/]))
							{
								unk_0x622E764F80DBF8B7(Local_755[12 /*33*/], unk_0xC8B93D94F8954288(), 100f, -1, 0, 0);
								unk_0xF1A02DDEC7E15D6E(Local_755[12 /*33*/], 1);
								unk_0x459A6F82E024C891(&(Local_755[12 /*33*/]));
							}
							if (!unk_0x2DC9BA2299B45EA6(Local_755[13 /*33*/]))
							{
								unk_0x622E764F80DBF8B7(Local_755[13 /*33*/], unk_0xC8B93D94F8954288(), 100f, -1, 0, 0);
								unk_0xF1A02DDEC7E15D6E(Local_755[13 /*33*/], 1);
								unk_0x459A6F82E024C891(&(Local_755[13 /*33*/]));
							}
							if (!unk_0x2DC9BA2299B45EA6(Local_755[14 /*33*/]))
							{
								unk_0x622E764F80DBF8B7(Local_755[14 /*33*/], unk_0xC8B93D94F8954288(), 100f, -1, 0, 0);
								unk_0xF1A02DDEC7E15D6E(Local_755[14 /*33*/], 1);
								unk_0x459A6F82E024C891(&(Local_755[14 /*33*/]));
								Local_2917[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 10:
					switch (Local_2917[iParam0 /*10*/].f_6)
					{
						case 0:
							unk_0xB0DD2D37A4603474("chinese2_explosion_cutscene");
							unk_0x8F9EDB48A60C0C79();
							Local_2917[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (iLocal_2648 == 1)
							{
								if (unk_0x8BB5631CA898C6D4("CHINESE2_FARMHOUSE_EXPLOSION_MOLOTOV_MASTER", 0))
								{
									Local_2917[iParam0 /*10*/].f_6++;
								}
							}
							if (iLocal_2648 == 2)
							{
								if (unk_0x8BB5631CA898C6D4("CHINESE2_FARMHOUSE_EXPLOSION_STICKY_BOMB_MASTER", 0))
								{
									Local_2917[iParam0 /*10*/].f_6++;
								}
							}
							if (iLocal_2648 == 3)
							{
								if (unk_0x8BB5631CA898C6D4("CHINESE2_FARMHOUSE_EXPLOSION_SHOOT_GASOLINE_MASTER", 0))
								{
									Local_2917[iParam0 /*10*/].f_6++;
								}
							}
							break;
						
						case 2:
							if (unk_0x6CBEE2151C70E00C())
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
							if (unk_0x693EBB4F13506457() > Local_2917[iParam0 /*10*/].f_7)
							{
								if (unk_0x8F89BA1339F45476(unk_0x6907EB47FC00DB19(unk_0xC8B93D94F8954288())))
								{
									unk_0x78391100F5CB7BF0(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1) + Vector(0f, unk_0xC6D38B918E72181E(0f, 4f), unk_0xC6D38B918E72181E(0f, 4f)), 16, 1.5f, 1, 0, 1065353216);
									Local_2917[iParam0 /*10*/].f_9 = (Local_2917[iParam0 /*10*/].f_9 - 1f);
									Local_2917[iParam0 /*10*/].f_7 = (unk_0x693EBB4F13506457() + unk_0x531444754C426278(250, 520));
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
								if (!unk_0xDCC86F723E82125E(Local_2917[iParam0 /*10*/].f_7, iVar5))
								{
									if (unk_0xDF87568D121A99AC(-1, Local_2889[iVar5 /*3*/], 5f))
									{
										unk_0x59A0729D503ED758(&(Local_2917[iParam0 /*10*/].f_7), iVar5);
										if (Local_2917[iParam0 /*10*/].f_6 == 0)
										{
											Local_2917[iParam0 /*10*/].f_6 = unk_0x693EBB4F13506457() + 1500;
										}
									}
								}
								iVar5++;
							}
							if (unk_0x693EBB4F13506457() > Local_2917[iParam0 /*10*/].f_8)
							{
								Local_2917[iParam0 /*10*/].f_8 = 0;
								iVar5 = 0;
								while (iVar5 < Local_2889.f_0)
								{
									if (!unk_0xDCC86F723E82125E(Local_2917[iParam0 /*10*/].f_7, iVar5 + 9) && unk_0xDCC86F723E82125E(Local_2917[iParam0 /*10*/].f_7, iVar5))
									{
										unk_0x78391100F5CB7BF0(Local_2889[iVar5 /*3*/], 16, 1.5f, 1, 0, 1065353216);
										unk_0x59A0729D503ED758(&(Local_2917[iParam0 /*10*/].f_7), iVar5 + 9);
										iVar5 = 8;
										Local_2917[iParam0 /*10*/].f_8 = (unk_0x693EBB4F13506457() + unk_0x531444754C426278(150, 320));
									}
									iVar5++;
								}
							}
							if (Local_2917[iParam0 /*10*/].f_6 != 0)
							{
								if (unk_0x693EBB4F13506457() > Local_2917[iParam0 /*10*/].f_6)
								{
									Local_2917[iParam0 /*10*/].f_6 = 1;
									Local_2917[iParam0 /*10*/].f_7 = unk_0x693EBB4F13506457() + 300;
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
							unk_0xE9BF168BD8C6A40F("RADIO_01_CLASS_ROCK");
							Local_2917[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
							{
								if (unk_0x5BA0531C8F1DEF29())
								{
									iLocal_2506 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
									if (unk_0x5D42322C7DB888D0(iLocal_2506, 0))
									{
										if (!unk_0x9989B4AFDCCD9299(iLocal_2506))
										{
											Local_2917[iParam0 /*10*/].f_6++;
										}
									}
								}
							}
							break;
						
						case 2:
							if (unk_0xE685497EA92333FF("CHN2_TREV_RADIO_1_FRTA"))
							{
								Local_2917[iParam0 /*10*/].f_6++;
							}
							break;
							break;
						
						case 3:
							if (unk_0x233432976E597324("CHN2_TREV_RADIO_1_FRTA"))
							{
								Local_2917[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 4:
							if (func_68(iLocal_2506))
							{
								if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iLocal_2506, 0))
								{
									if (unk_0x9989B4AFDCCD9299(iLocal_2506))
									{
										Local_2917[iParam0 /*10*/].f_7 = (Local_2917[iParam0 /*10*/].f_7 + unk_0x693EBB4F13506457() + 7000);
										Local_2917[iParam0 /*10*/].f_6++;
									}
								}
							}
							break;
						
						case 5:
							if (func_68(iLocal_2506))
							{
								if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iLocal_2506, 0))
								{
									if (unk_0x693EBB4F13506457() > Local_2917[iParam0 /*10*/].f_7)
									{
										if (unk_0x326F40CE5DA0E863() != 6 && unk_0x326F40CE5DA0E863() != 0)
										{
											if (unk_0xFEF0A1E031FD418F() != 0)
											{
												if (func_35("CHI2_rad", 1, unk_0xC8B93D94F8954288(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
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
											Local_2917[iParam0 /*10*/].f_7 = unk_0x693EBB4F13506457() + 5000;
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
									if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iLocal_2506, 0))
									{
										if (!unk_0x0139E142C27412BC(0, 85))
										{
											if (unk_0x326F40CE5DA0E863() != 6)
											{
												if (iLocal_2676 == -1)
												{
													iLocal_2676 = unk_0x83E9D86E63672B9A();
													unk_0xC4EE38A4CFF7544C(iLocal_2676, "Change_Station_Loud", "Radio_Soundset", 1);
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
							if (!unk_0x0139E142C27412BC(0, 85))
							{
								if (unk_0x233432976E597324("CHN2_TREV_RADIO_2_FRTA"))
								{
									unk_0x925AE2E6F6E41362("CHI_2_DRIVE_ROCK_RADIO");
									Local_2917[iParam0 /*10*/].f_6++;
								}
							}
							break;
						
						case 9:
							if (func_68(iLocal_2506))
							{
								if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iLocal_2506, 0))
								{
									if (unk_0x326F40CE5DA0E863() == 6)
									{
										if (unk_0xFEF0A1E031FD418F() != 0)
										{
											if (func_35("CHI2_radb", 1, unk_0xC8B93D94F8954288(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
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
					unk_0xFD62177C7242216E(1f);
					unk_0xB47D5A4E4AE9BEAD(unk_0xA34E7C2A5118D638(), 2, 0);
					unk_0x1C9B7C3360143C4C(unk_0xA34E7C2A5118D638(), 0);
					unk_0x60B57BC5E51D2074(5);
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 49:
					if (!func_90(2448.25f, 4974.92f, 55.11f, 20f, 500f) || func_87(49))
					{
						if (iLocal_2678 != 0)
						{
							unk_0xBB2FAA651AEDFE3A(iLocal_2678);
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
							if (unk_0xD6B965E92DB098CE(unk_0xC8B93D94F8954288(), joaat("weapon_petrolcan"), 0))
							{
								Local_2917[iParam0 /*10*/].f_7 = unk_0xCE69853977E75052(unk_0xC8B93D94F8954288(), joaat("weapon_petrolcan"));
								Local_2917[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if (unk_0xD6B965E92DB098CE(unk_0xC8B93D94F8954288(), joaat("weapon_petrolcan"), 0))
							{
								iVar8 = unk_0xCE69853977E75052(unk_0xC8B93D94F8954288(), joaat("weapon_petrolcan"));
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
							if (unk_0xA51F11E1DC7307BB(unk_0xC8B93D94F8954288(), &iVar9, 1))
							{
								if (iVar9 == joaat("weapon_petrolcan"))
								{
									if (unk_0x0139E142C27412BC(0, 24))
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
							if (unk_0xA51F11E1DC7307BB(unk_0xC8B93D94F8954288(), &iVar10, 1))
							{
								if (iVar10 == joaat("weapon_petrolcan"))
								{
									if (unk_0x0139E142C27412BC(0, 24))
									{
										if (Local_2917[iParam0 /*10*/].f_7 == -1)
										{
											Local_2917[iParam0 /*10*/].f_7 = unk_0xCE69853977E75052(unk_0xC8B93D94F8954288(), joaat("weapon_petrolcan"));
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
											unk_0xF6984C1329FC8596(unk_0xC8B93D94F8954288(), iVar10, iVar11);
										}
										else
										{
											unk_0xF6984C1329FC8596(unk_0xC8B93D94F8954288(), iVar10, 0);
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
					unk_0x44AE6172657CB680("AZL_CHN2_METH_LAB_FARM_FIRE", 1, 1);
					func_166(1);
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 54:
					func_166(0);
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 55:
					unk_0x9F0FFB655C4C4297(3);
					unk_0x007CAC85F0301094(3);
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 56:
					switch (Local_2917[iParam0 /*10*/].f_6)
					{
						case 0:
							if (unk_0x95CCECA3948CFE7B(Local_755[4 /*33*/].f_20))
							{
								unk_0xC2BB205CCEB68102(&(Local_755[4 /*33*/].f_20));
							}
							if (unk_0x95CCECA3948CFE7B(Local_755[5 /*33*/].f_20))
							{
								unk_0xC2BB205CCEB68102(&(Local_755[5 /*33*/].f_20));
							}
							iVar12 = 0;
							while (iVar12 < iLocal_2657)
							{
								if (unk_0x95CCECA3948CFE7B(iLocal_2657[iVar12]))
								{
									unk_0xC2BB205CCEB68102(&(iLocal_2657[iVar12]));
								}
								iVar12++;
							}
							unk_0x4BBD72565A0AF033(joaat("prop_cs_beer_bot_01"));
							unk_0x4BBD72565A0AF033(joaat("prop_ld_can_01"));
							unk_0x4BBD72565A0AF033(joaat("prop_cs_fertilizer"));
							Local_2917[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (unk_0x2DC9BA2299B45EA6(Local_755[23 /*33*/]))
							{
								if (unk_0x95CCECA3948CFE7B(iLocal_2878))
								{
									unk_0xC2BB205CCEB68102(&iLocal_2878);
									unk_0x73C549370012443A(joaat("weapon_sawnoffshotgun"));
									Local_2917[iParam0 /*10*/].f_3 = 1;
								}
							}
							break;
					}
					break;
				
				case 47:
					if (!unk_0x2DC9BA2299B45EA6(Local_755[11 /*33*/]))
					{
						if (!unk_0x0D211C48FB8578B7(Local_755[11 /*33*/]))
						{
							if (unk_0x693EBB4F13506457() > Local_2917[iParam0 /*10*/].f_7)
							{
								if (!unk_0x2DC9BA2299B45EA6(Local_755[11 /*33*/]))
								{
									unk_0x7033366221CC71C6(Local_755[11 /*33*/], "WHIMPER", "WAVELOAD_PAIN_MALE", "SPEECH_PARAMS_FORCE_NORMAL", 0);
									Local_2917[iParam0 /*10*/].f_7 = (unk_0x693EBB4F13506457() + unk_0x531444754C426278(3500, 5000));
								}
							}
						}
					}
					break;
				
				case 41:
					switch (Local_2917[iParam0 /*10*/].f_6)
					{
						case 0:
							unk_0x7567CEA8E6B5340B(joaat("ig_taocheng"));
							unk_0x7567CEA8E6B5340B(joaat("ig_taostranslator"));
							unk_0xC0E8B67A4385D37D("misschinese2_crystalmaze");
							if (iLocal_2884 == -1 || (iLocal_2884 != -1 && !unk_0xDA33F6DC6574B8DD(iLocal_2884)))
							{
								iLocal_2884 = unk_0xDC3487ADA3784C61(1991.081f, 3054.517f, 46.71474f, 4f, 4f, 4f, 0f, 0, 3);
							}
							Local_2917[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if ((unk_0xF9B86DC1728F1339("misschinese2_crystalmaze") && unk_0x0845149A26DABBA5(joaat("ig_taocheng"))) && unk_0x0845149A26DABBA5(joaat("ig_taostranslator")))
							{
								if (!unk_0x95CCECA3948CFE7B(Local_755[11 /*33*/]))
								{
									Local_755[11 /*33*/] = unk_0x71DD988C1B903F5D(26, joaat("ig_taocheng"), 1991.988f, 3054.51f, 46.215f, 0, 1, 1);
									unk_0xCBD60E398042F554(Local_755[11 /*33*/], iLocal_1618);
									unk_0x58F516BB5E324590(Local_755[11 /*33*/], 0);
								}
								else if (!unk_0x2DC9BA2299B45EA6(Local_755[11 /*33*/]))
								{
									unk_0xCBD60E398042F554(Local_755[11 /*33*/], iLocal_1618);
									unk_0x58F516BB5E324590(Local_755[11 /*33*/], 0);
								}
								if (!unk_0x95CCECA3948CFE7B(Local_755[10 /*33*/]))
								{
									Local_755[10 /*33*/] = unk_0x71DD988C1B903F5D(26, joaat("ig_taostranslator"), 1991.988f, 3054.51f, 46.215f, 0, 1, 1);
									unk_0xCBD60E398042F554(Local_755[10 /*33*/], iLocal_1618);
									unk_0x58F516BB5E324590(Local_755[10 /*33*/], 0);
									unk_0x9982920999FF4733(Local_755[10 /*33*/], 1, 0, 1, 0);
								}
								else if (!unk_0x2DC9BA2299B45EA6(Local_755[10 /*33*/]))
								{
									unk_0xCBD60E398042F554(Local_755[10 /*33*/], iLocal_1618);
									unk_0x58F516BB5E324590(Local_755[10 /*33*/], 0);
								}
								if (!unk_0x2DC9BA2299B45EA6(Local_755[11 /*33*/]))
								{
									if (!unk_0xBC6B93737FCDC466(Local_2917[iParam0 /*10*/].f_7))
									{
										Local_2917[iParam0 /*10*/].f_7 = unk_0x0B15BB6DFB729046(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
										unk_0x4528D7AA6C2BEF06(Local_2917[iParam0 /*10*/].f_7, 1);
									}
									unk_0xA5666A46C1079EFE(Local_755[11 /*33*/], Local_2917[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 257, 16, 1148846080, 0);
								}
								if (!unk_0x2DC9BA2299B45EA6(Local_755[10 /*33*/]))
								{
									if (!unk_0xBC6B93737FCDC466(Local_2917[iParam0 /*10*/].f_7))
									{
										Local_2917[iParam0 /*10*/].f_7 = unk_0x0B15BB6DFB729046(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
										unk_0x4528D7AA6C2BEF06(Local_2917[iParam0 /*10*/].f_7, 1);
									}
									unk_0xA5666A46C1079EFE(Local_755[10 /*33*/], Local_2917[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 257, 16, 1148846080, 0);
								}
								Local_2917[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 2:
							if (!unk_0x2DC9BA2299B45EA6(Local_755[10 /*33*/]) && !unk_0x2DC9BA2299B45EA6(Local_755[11 /*33*/]))
							{
								unk_0x8C245572EDB27776(Local_755[10 /*33*/], 0, 0, 0, 0);
								unk_0xAAD662D7E0D59F4C(Local_755[11 /*33*/], 1);
								unk_0xAAD662D7E0D59F4C(Local_755[10 /*33*/], 1);
								if (!unk_0xBC6B93737FCDC466(Local_2917[iParam0 /*10*/].f_7))
								{
									Local_2917[iParam0 /*10*/].f_7 = unk_0x0B15BB6DFB729046(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
									unk_0xA5666A46C1079EFE(Local_755[11 /*33*/], Local_2917[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 257, 16, 1148846080, 0);
									unk_0xA5666A46C1079EFE(Local_755[10 /*33*/], Local_2917[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 257, 16, 1148846080, 0);
									unk_0x4528D7AA6C2BEF06(Local_2917[iParam0 /*10*/].f_7, 1);
								}
								unk_0xC778754E36F3FFD6(Local_755[11 /*33*/], 118, 0);
								unk_0xC778754E36F3FFD6(Local_755[11 /*33*/], 208, 1);
								unk_0xC778754E36F3FFD6(Local_755[10 /*33*/], 118, 0);
								unk_0xC778754E36F3FFD6(Local_755[10 /*33*/], 208, 1);
								Local_2917[iParam0 /*10*/].f_6 = 900;
							}
							break;
						
						case 900:
							if (!unk_0x2DC9BA2299B45EA6(Local_755[11 /*33*/]))
							{
								if (!unk_0x770AAB67BDD9C729(Local_755[11 /*33*/]))
								{
									if (unk_0xBC6B93737FCDC466(Local_2917[iParam0 /*10*/].f_7))
									{
										if (unk_0x2091E42376999826(Local_2917[iParam0 /*10*/].f_7) == 1f)
										{
											Local_2917[iParam0 /*10*/].f_7 = unk_0x0B15BB6DFB729046(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
											unk_0x4528D7AA6C2BEF06(Local_2917[iParam0 /*10*/].f_7, 1);
											if (unk_0x531444754C426278(0, 3) < 2)
											{
												unk_0xA5666A46C1079EFE(Local_755[11 /*33*/], Local_2917[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_Base_TaoCheng", 1000f, -4f, 257, 16, 1148846080, 0);
												if (!unk_0x2DC9BA2299B45EA6(Local_755[10 /*33*/]))
												{
													if (!unk_0x770AAB67BDD9C729(Local_755[10 /*33*/]))
													{
														if (!unk_0xDCC86F723E82125E(Local_2917[iParam0 /*10*/].f_8, 0))
														{
															unk_0xA5666A46C1079EFE(Local_755[10 /*33*/], Local_2917[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_Base_taotranslator", 1000f, -4f, 257, 16, 1148846080, 0);
														}
													}
												}
											}
											else
											{
												unk_0xA5666A46C1079EFE(Local_755[11 /*33*/], Local_2917[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 257, 16, 1148846080, 0);
												if (!unk_0x2DC9BA2299B45EA6(Local_755[10 /*33*/]))
												{
													if (!unk_0x770AAB67BDD9C729(Local_755[10 /*33*/]))
													{
														if (!unk_0xDCC86F723E82125E(Local_2917[iParam0 /*10*/].f_8, 0))
														{
															unk_0xA5666A46C1079EFE(Local_755[10 /*33*/], Local_2917[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 257, 16, 1148846080, 0);
														}
													}
												}
											}
										}
									}
									else
									{
										Local_2917[iParam0 /*10*/].f_7 = unk_0x0B15BB6DFB729046(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
										unk_0xA5666A46C1079EFE(Local_755[11 /*33*/], Local_2917[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 257, 16, 1148846080, 0);
										unk_0x4528D7AA6C2BEF06(Local_2917[iParam0 /*10*/].f_7, 1);
									}
								}
							}
							if (!unk_0x2DC9BA2299B45EA6(Local_755[10 /*33*/]))
							{
								if (((unk_0x87D4C731B013290A(Local_755[10 /*33*/], unk_0xC8B93D94F8954288(), 1) || unk_0x770AAB67BDD9C729(Local_755[10 /*33*/])) || unk_0x2DC9BA2299B45EA6(Local_755[11 /*33*/])) || (!unk_0x2DC9BA2299B45EA6(Local_755[10 /*33*/]) && unk_0x090C65D5190A249D(Local_755[10 /*33*/], 1785177548) == 2))
								{
									if (!unk_0xDCC86F723E82125E(Local_2917[iParam0 /*10*/].f_8, 0))
									{
										unk_0x5124C5FA52D2AF3E(Local_755[10 /*33*/]);
										func_93();
										unk_0x622E764F80DBF8B7(0, unk_0xC8B93D94F8954288(), 30f, 20000, 0, 0);
										unk_0x9F3B55DA0D0220DD(0, -1);
										func_92(&(Local_755[10 /*33*/]), 0);
										unk_0x59A0729D503ED758(&(Local_2917[iParam0 /*10*/].f_8), 0);
									}
								}
							}
							if (!unk_0x2DC9BA2299B45EA6(Local_755[11 /*33*/]))
							{
								if (((unk_0x87D4C731B013290A(Local_755[11 /*33*/], unk_0xC8B93D94F8954288(), 1) || unk_0x770AAB67BDD9C729(Local_755[11 /*33*/])) || unk_0xDCC86F723E82125E(Local_2917[iParam0 /*10*/].f_8, 1)) || (!unk_0x2DC9BA2299B45EA6(Local_755[11 /*33*/]) && unk_0x090C65D5190A249D(Local_755[11 /*33*/], 1785177548) == 2))
								{
									unk_0xFE93132CC8944C8C(Local_755[11 /*33*/], 0);
									if (!unk_0x770AAB67BDD9C729(Local_755[11 /*33*/]))
									{
									}
								}
							}
							if (func_67(unk_0xC8B93D94F8954288(), 1991.988f, 3054.51f, 46.215f, 1) > 200f)
							{
								if (unk_0x95CCECA3948CFE7B(Local_755[11 /*33*/]) && unk_0x95CCECA3948CFE7B(Local_755[10 /*33*/]))
								{
									unk_0x26B3B761603F5232(&(Local_755[11 /*33*/]));
									unk_0x26B3B761603F5232(&(Local_755[10 /*33*/]));
								}
								unk_0x4BBD72565A0AF033(joaat("ig_taocheng"));
								unk_0x4BBD72565A0AF033(joaat("ig_taostranslator"));
								unk_0x3ECF1E41E6ED71D8("misschinese2_crystalmaze");
								if (iLocal_2884 != -1)
								{
									if (unk_0xDA33F6DC6574B8DD(iLocal_2884))
									{
										unk_0x78DFC4B56BCF3DA9(iLocal_2884);
									}
								}
								Local_2917[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					if (func_67(unk_0xC8B93D94F8954288(), 1995.169f, 3062.162f, 46.049f, 1) < 7f)
					{
						if (!unk_0x2DC9BA2299B45EA6(Local_755[11 /*33*/]))
						{
							if (unk_0x090C65D5190A249D(Local_755[11 /*33*/], 150319005) != 1)
							{
								unk_0xE48D9147BC1F4CD7(Local_755[11 /*33*/], unk_0xC8B93D94F8954288(), 4000, 2096, 2);
							}
						}
						if (!unk_0x2DC9BA2299B45EA6(Local_755[10 /*33*/]))
						{
							if (unk_0x090C65D5190A249D(Local_755[10 /*33*/], 150319005) != 1)
							{
								unk_0xE48D9147BC1F4CD7(Local_755[10 /*33*/], unk_0xC8B93D94F8954288(), 4000, 2096, 2);
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
						if (unk_0x95CCECA3948CFE7B(Local_755[iVar13 /*33*/]))
						{
							if (unk_0x2DC9BA2299B45EA6(Local_755[iVar13 /*33*/]))
							{
								if (Local_755[iVar13 /*33*/].f_21 == 0)
								{
									if (((unk_0xC2FA6A4DBDE6E9FD(Local_755[iVar13 /*33*/]) == 392730790 || unk_0xC2FA6A4DBDE6E9FD(Local_755[iVar13 /*33*/]) == joaat("weapon_heavysniper")) || unk_0xC2FA6A4DBDE6E9FD(Local_755[iVar13 /*33*/]) == joaat("weapon_remotesniper")) || unk_0xC2FA6A4DBDE6E9FD(Local_755[iVar13 /*33*/]) == joaat("weapon_sniperrifle"))
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
					unk_0xD810132681A9B83C(4f, 15f, 4);
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
					if (unk_0x06A2030124FC73B9(uLocal_2675))
					{
						unk_0x7412597305E608CE(uLocal_2675);
					}
					iVar14 = 0;
					unk_0x59A0729D503ED758(&iVar14, 3);
					unk_0x59A0729D503ED758(&iVar14, 8);
					unk_0x59A0729D503ED758(&iVar14, 1);
					if (!unk_0x06A2030124FC73B9(uLocal_2675))
					{
						uLocal_2675 = unk_0x0BF6021B7B677E57(joaat("pickup_weapon_petrolcan"), 2436.775f, 4967.487f, 41.4f, iVar14, -1, 1, 0);
						unk_0xEA057A3A3F9B3084(uLocal_2675, "V_8_BasementRm");
						uLocal_2677 = func_164(uLocal_2675);
						unk_0x8755DAC584918BF9(uLocal_2677, "FRMBLIP");
					}
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 17:
					if (!func_30(5))
					{
						func_166(1);
						unk_0x925AE2E6F6E41362("CHI_2_SHOOTOUT_STEALTH");
						unk_0x63E7E25783E6FD80(1);
						Local_2917[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 19:
					unk_0x3ECF1E41E6ED71D8("misschinese2_barrelRoll");
					unk_0xA6045DDE5A17C533("move_m@gangster@var_e");
					unk_0xA6045DDE5A17C533("move_m@gangster@var_f");
					unk_0xA6045DDE5A17C533("move_m@gangster@generic");
					unk_0x3ECF1E41E6ED71D8("misschinese2_bank5");
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 20:
					switch (Local_2917[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_2917[iParam0 /*10*/].f_7 = unk_0x693EBB4F13506457() + 4000;
							Local_2917[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (unk_0x693EBB4F13506457() > Local_2917[iParam0 /*10*/].f_7)
							{
								Local_2917[iParam0 /*10*/].f_7 = 0;
								while (Local_2917[iParam0 /*10*/].f_7 < Local_755.f_0)
								{
									if (!unk_0x2DC9BA2299B45EA6(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/]))
									{
										if (unk_0x6907EB47FC00DB19(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/]) == 0)
										{
											Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/].f_1 = 5;
											Local_1619[Local_2917[iParam0 /*10*/].f_7 /*24*/].f_3 = 7;
											Local_1619[Local_2917[iParam0 /*10*/].f_7 /*24*/].f_4 = 0;
											Local_1619[Local_2917[iParam0 /*10*/].f_7 /*24*/].f_5 = 0;
											func_99(Local_2917[iParam0 /*10*/].f_7, 27, 0, 0);
											unk_0xCBD60E398042F554(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/], iLocal_1617);
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
						if (!unk_0x2DC9BA2299B45EA6(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/]))
						{
							if (unk_0x8DF850DA069BF37C(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/], 2457.885f, 4981.169f, 50.00518f, 2441.58f, 4965.088f, 56.24006f, 34.3125f, 0, 1, 0))
							{
								unk_0x26B3B761603F5232(&(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/]));
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
						if (!unk_0x2DC9BA2299B45EA6(Local_755[iVar15 /*33*/]))
						{
							if (unk_0x3A1056BCF85EF04F(Local_755[iVar15 /*33*/]) != unk_0x7CBED6EFED40E7EB("V_8_BasementRm"))
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
							if (!unk_0x2DC9BA2299B45EA6(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/]))
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
					if (unk_0x1E8D3FA42E89ED72(unk_0xC8B93D94F8954288()) || func_87(9))
					{
						unk_0xD5BE34D3F0B9AC0A(unk_0xC8B93D94F8954288(), 1, -1, 0);
						Local_2917[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 26:
					unk_0xDB9D78E5137EE7AD("CHI_2_SHOOTOUT_STEALTH");
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 27:
					unk_0x925AE2E6F6E41362("CHI_2_SHOOTOUT_ENEMIES_ALERTED");
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 28:
					if (unk_0xB5F5536784683C33("CHI_2_SHOOTOUT_ENEMIES_ALERTED"))
					{
						unk_0xDB9D78E5137EE7AD("CHI_2_SHOOTOUT_ENEMIES_ALERTED");
					}
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 44:
					if (!unk_0xB5F5536784683C33("CHI_2_SHOOTOUT_IN_HOUSE"))
					{
						if (func_87(12))
						{
							unk_0x925AE2E6F6E41362("CHI_2_SHOOTOUT_IN_HOUSE");
						}
					}
					else if (func_156(12))
					{
						unk_0xDB9D78E5137EE7AD("CHI_2_SHOOTOUT_IN_HOUSE");
					}
					break;
				
				case 45:
					if ((func_87(9) || (!unk_0x2DC9BA2299B45EA6(Local_755[8 /*33*/]) && unk_0xA81F17D63315B662(Local_755[8 /*33*/], 0))) || (!unk_0x2DC9BA2299B45EA6(Local_755[9 /*33*/]) && unk_0xA81F17D63315B662(Local_755[9 /*33*/], 0)))
					{
						if (!unk_0x2DC9BA2299B45EA6(Local_755[8 /*33*/]))
						{
							unk_0x687051455B40FE5B(Local_755[8 /*33*/], 45);
						}
						if (!unk_0x2DC9BA2299B45EA6(Local_755[9 /*33*/]))
						{
							unk_0x687051455B40FE5B(Local_755[9 /*33*/], 45);
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
							if (!unk_0x2DC9BA2299B45EA6(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/]))
							{
								unk_0x0893EE04C269FFD2(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/], 60f);
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
										if (!unk_0x2DC9BA2299B45EA6(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/]))
										{
											if (Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/].f_1 == 1)
											{
												unk_0x0893EE04C269FFD2(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/], 5f);
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
										if (!unk_0x2DC9BA2299B45EA6(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/]))
										{
											if (Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/].f_1 == 1)
											{
												unk_0x0893EE04C269FFD2(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/], 30f);
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
							unk_0xC0E8B67A4385D37D("misschinese2_crystalmaze");
							Local_2917[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (unk_0xF9B86DC1728F1339("misschinese2_crystalmaze"))
							{
								if (!unk_0x2DC9BA2299B45EA6(Local_755[23 /*33*/]))
								{
									Local_2917[iParam0 /*10*/].f_7 = unk_0x0B15BB6DFB729046(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
									unk_0x53DDB73894A6597A(Local_2917[iParam0 /*10*/].f_7, 1);
									unk_0xA5666A46C1079EFE(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/], Local_2917[iParam0 /*10*/].f_8, "misschinese2_crystalmaze", "_stand_to_aim", 1000f, -8f, 0, 0, 1148846080, 0);
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
							unk_0x7567CEA8E6B5340B(joaat("blazer"));
							Local_2917[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (unk_0x0845149A26DABBA5(joaat("blazer")))
							{
								iLocal_2508 = unk_0xD53B4DCC7B2C8551(joaat("blazer"), 2478.587f, 4941.803f, 43.6736f, 227.2903f, 1, 1);
								unk_0xF18809B65D87E197(iLocal_2508);
								Local_2917[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 31:
					unk_0xD5BE34D3F0B9AC0A(unk_0xC8B93D94F8954288(), 0, -1, 0);
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
								if (unk_0x6B4865E08E90ACC5(uLocal_2677))
								{
									unk_0x5356E82C1E5E0C44(&uLocal_2677);
								}
								func_12(0);
								if (func_84("FRMFLC", 0, 0))
								{
									unk_0x7846F09C04C34C46();
								}
								func_10(157, 0);
								unk_0xD810132681A9B83C(3f, 10f, 4);
								if (iLocal_2649 == 0)
								{
									iLocal_2649 = unk_0xCE69853977E75052(unk_0xC8B93D94F8954288(), joaat("weapon_petrolcan"));
								}
								Local_2917[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if (!func_87(29))
							{
								func_9(158, (iLocal_2649 - unk_0xCE69853977E75052(unk_0xC8B93D94F8954288(), joaat("weapon_petrolcan"))), 1);
								iLocal_2679 = unk_0xB999434FB1CECA11(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 20f, unk_0x06C0DD6C22493B3F(joaat("weapon_petrolcan")), 0, 0, 1);
								if (iLocal_2679 != 0)
								{
									if (unk_0x6B4865E08E90ACC5(uLocal_2677))
									{
										unk_0x5356E82C1E5E0C44(&uLocal_2677);
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
							unk_0x354516B1347786F1("arm2_30");
							Local_2917[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (unk_0xCB5C09DEC6D45DA8("arm2_30"))
							{
								if (func_87(29))
								{
									unk_0x10F284023B249A54("arm2_30", 1, 1065353216, 1056964608);
									unk_0x111056798D86EBEB("arm2_30", 2);
									Local_2917[iParam0 /*10*/].f_6++;
								}
							}
							break;
						
						case 2:
							if (!func_87(29))
							{
								unk_0x10F284023B249A54("arm2_30", 0, 1065353216, 1056964608);
								Local_2917[iParam0 /*10*/].f_6 = 1;
							}
							break;
					}
					break;
				
				case 34:
					if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
					{
						if (unk_0x6907EB47FC00DB19(unk_0xC8B93D94F8954288()) == 0)
						{
							if (func_67(unk_0xC8B93D94F8954288(), 2451.08f, 4961.463f, 44.4392f, 1) < 20f)
							{
								unk_0x79E983FC78AD8553(0, 0, 0, 0, 0);
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
					unk_0xE55275772E833643(uLocal_2668, "FarmhouseFire_Ignite", Local_2669, "CHINESE2_SOUNDS", 0, 0, 0);
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 37:
					unk_0x925AE2E6F6E41362("CHI_2_POUR_GAS");
					Local_2917[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 38:
					switch (Local_2917[iParam0 /*10*/].f_6)
					{
						case 0:
							unk_0xC4C141A321D45FD8("FARMHOUSE_FIRE", 0);
							unk_0xC4C141A321D45FD8("FARMHOUSE_FIRE_BG", 0);
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
							if (func_67(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/], 2454.895f, 4950.895f, 44.1488f, 1) > 100f && func_4(Local_755[Local_2917[iParam0 /*10*/].f_7 /*33*/], unk_0xC8B93D94F8954288(), 1) > 100f)
							{
								iVar16 = func_18(4);
								func_128(&(Local_755[iVar16 /*33*/].f_25));
								if (!unk_0x2DC9BA2299B45EA6(Local_755[iVar16 /*33*/]))
								{
									unk_0xF1A02DDEC7E15D6E(Local_755[iVar16 /*33*/], 1);
									unk_0x459A6F82E024C891(&(Local_755[iVar16 /*33*/]));
								}
								Local_755[iVar16 /*33*/] = 0;
								iVar16 = func_18(5);
								func_128(&(Local_755[iVar16 /*33*/].f_25));
								if (!unk_0x2DC9BA2299B45EA6(Local_755[iVar16 /*33*/]))
								{
									unk_0xF1A02DDEC7E15D6E(Local_755[iVar16 /*33*/], 1);
									unk_0x459A6F82E024C891(&(Local_755[iVar16 /*33*/]));
								}
								Local_755[iVar16 /*33*/] = 0;
								iVar16 = func_18(7);
								if (!unk_0x2DC9BA2299B45EA6(Local_755[iVar16 /*33*/]))
								{
									unk_0xF1A02DDEC7E15D6E(Local_755[iVar16 /*33*/], 1);
									unk_0x459A6F82E024C891(&(Local_755[iVar16 /*33*/]));
								}
								func_128(&(Local_755[iVar16 /*33*/].f_25));
								Local_755[iVar16 /*33*/] = 0;
								if (unk_0x5D42322C7DB888D0(iLocal_2507, 0))
								{
									unk_0xEF84021B2AB5E334(&iLocal_2507);
								}
								Local_2917[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 40:
					if (func_101(24, joaat("a_m_m_hillbilly_01"), 2433.123f, 4960.47f, 45.8218f, 301f, joaat("weapon_smg"), 1, 1))
					{
						unk_0x687051455B40FE5B(Local_755[24 /*33*/], 100);
						if (!unk_0x2DC9BA2299B45EA6(Local_755[15 /*33*/]))
						{
							unk_0x687051455B40FE5B(Local_755[15 /*33*/], 100);
						}
						if (!unk_0x2DC9BA2299B45EA6(Local_755[16 /*33*/]))
						{
							unk_0x687051455B40FE5B(Local_755[16 /*33*/], 100);
						}
						if (!unk_0x2DC9BA2299B45EA6(Local_755[17 /*33*/]))
						{
							unk_0x687051455B40FE5B(Local_755[17 /*33*/], 100);
						}
						unk_0x45EF2026AF681474(Local_755[24 /*33*/], unk_0xC8B93D94F8954288(), 0, 16);
						unk_0x7867B753FDFAFE2B(Local_755[24 /*33*/], 1);
						unk_0xFE93132CC8944C8C(Local_755[24 /*33*/], 200);
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
			unk_0x0184403F1C1A3769(Local_444[iVar0 /*5*/], 4f);
			unk_0x98371F41D43CDFA9(Local_444[iVar0 /*5*/], 2f, 1, 0, 0, 0);
			iVar1 = 0;
			while (iVar1 < Local_755.f_0)
			{
				if (unk_0x95CCECA3948CFE7B(Local_755[iVar1 /*33*/]))
				{
					Var2 = { unk_0x44C17CCB85A88A1F(Local_755[iVar1 /*33*/], 0) };
					if (unk_0xB7A628320EFF8E47(Var2, Local_444[iVar0 /*5*/]) < 2f && Var2.f_2 > 43.9f)
					{
						unk_0x26B3B761603F5232(&(Local_755[iVar1 /*33*/]));
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
		unk_0x463EC802525767F5(Local_444[iVar0 /*5*/], 1f);
		if (!unk_0x6B4865E08E90ACC5(Local_444[iVar0 /*5*/].f_3))
		{
			if (!func_162(Local_444[iVar0 /*5*/], 0f, 0f, 0f, 0))
			{
				iLocal_269++;
				Local_444[iVar0 /*5*/].f_3 = func_5(Local_444[iVar0 /*5*/], 0);
				unk_0x215B56BAA7583F64(Local_444[iVar0 /*5*/].f_3, 1);
				unk_0x3734DA1F207E7166(Local_444[iVar0 /*5*/].f_3, 0.4f);
				unk_0xEBA460B665086587(Local_444[iVar0 /*5*/].f_3, 0);
				if (!bParam0)
				{
					unk_0x7DF168F8439ABF1A(Local_444[iVar0 /*5*/].f_3, 0);
				}
				unk_0x32546F91F646B246(Local_444[iVar0 /*5*/].f_3, 5);
			}
		}
		else
		{
			Local_444[iVar0 /*5*/] = { unk_0xEACB9E183BFE83FD(Local_444[iVar0 /*5*/].f_3) };
			if (!bParam0)
			{
				unk_0x7DF168F8439ABF1A(Local_444[iVar0 /*5*/].f_3, 0);
			}
			else
			{
				unk_0x7DF168F8439ABF1A(Local_444[iVar0 /*5*/].f_3, 255);
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
	
	if (!unk_0x06A2030124FC73B9(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xF19CDE403BF1A712(uParam0);
	unk_0x3734DA1F207E7166(uVar0, func_6(unk_0xBBAE3E0C60A8AD4B(), 0.7f, 0.7f));
	return uVar0;
}

void func_165(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_55660 = 0;
	if (!Global_55884[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_67754)
	{
		if (Global_67755[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_67755[iVar1 /*9*/].f_1 = 1;
			Global_67755[iVar1 /*9*/].f_2 = 0f;
			if (Global_67755[iVar1 /*9*/].f_3 == 2)
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
		StringCopy(&Global_100032, unk_0xC4E68AF0B559FAC4(), 24);
		Global_100026 = 1;
	}
	else
	{
		StringCopy(&Global_100032, "NULL", 24);
		Global_100026 = 0;
	}
}

var func_167()
{
	var uVar0;
	
	return uVar0;
}

int func_168()
{
	if (((((unk_0x01153D747C13A17C(2, 30) != 127 || unk_0x01153D747C13A17C(2, 31) != 127) || unk_0x0139E142C27412BC(2, 24)) || unk_0x0139E142C27412BC(2, 25)) || unk_0x01153D747C13A17C(2, 2) != 127) || unk_0x01153D747C13A17C(2, 1) != 127)
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
				if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
				{
					Local_3120[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 6:
				if (!Local_3120[iVar3 /*8*/].f_2)
				{
					if (func_156(7))
					{
						if (unk_0xFB2795545DBC1C8A(2493.155f, 4970.315f, 43.88038f, 3.25f, 1, 1) || unk_0x0592F98C32AC22CA(2493.155f, 4970.315f, 43.88038f, 3.25f, 1))
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
								if (unk_0x95CCECA3948CFE7B(Local_755[Local_3120[iVar3 /*8*/].f_5 /*33*/]) && unk_0x95CCECA3948CFE7B(Local_755[Local_3120[iVar3 /*8*/].f_6 /*33*/]))
								{
									if (unk_0x2DC9BA2299B45EA6(Local_755[Local_3120[iVar3 /*8*/].f_5 /*33*/]) || unk_0x2DC9BA2299B45EA6(Local_755[Local_3120[iVar3 /*8*/].f_6 /*33*/]))
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
				if (unk_0x3A1056BCF85EF04F(unk_0xC8B93D94F8954288()) == unk_0x7CBED6EFED40E7EB("V_8_BasementRm"))
				{
					Local_3120[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 12:
				Local_3120[iVar3 /*8*/].f_2 = 0;
				if (unk_0x6907EB47FC00DB19(unk_0xC8B93D94F8954288()) != 0 && unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 2421.331f, 4954.833f, 25.32829f, 2466.796f, 4996.822f, 66.07018f, 37.1875f, 0, 1, 0))
				{
					Local_3120[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 13:
				Local_3120[iVar3 /*8*/].f_2 = 0;
				if (func_87(12))
				{
					if (!unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 2457.885f, 4981.169f, 50.00518f, 2441.58f, 4965.088f, 56.24006f, 34.3125f, 0, 1, 0))
					{
						Local_3120[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 14:
				if (!Local_3120[iVar3 /*8*/].f_2)
				{
					if (func_67(unk_0xC8B93D94F8954288(), 2451.517f, 4973.122f, 44.2646f, 1) < 50f)
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
						if (unk_0x95CCECA3948CFE7B(Local_755[Local_3120[iVar3 /*8*/].f_5 /*33*/]))
						{
							if (unk_0x2DC9BA2299B45EA6(Local_755[Local_3120[iVar3 /*8*/].f_5 /*33*/]))
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
								if (!unk_0x2DC9BA2299B45EA6(Local_755[iVar4 /*33*/]))
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
								if (!unk_0x2DC9BA2299B45EA6(Local_755[iVar7 /*33*/]))
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
						if (func_67(unk_0xC8B93D94F8954288(), 2446.674f, 4977.788f, 57.4583f, 1) < 250f)
						{
							Local_3120[iVar3 /*8*/].f_4++;
						}
						break;
					
					case 1:
						if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
						{
							iVar9 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
							if (unk_0xAF40E7422A6D9D80(unk_0x6D5BB810CC209E15(iVar9)) || unk_0xE924C2C283992918(unk_0x6D5BB810CC209E15(iVar9)))
							{
								if (func_67(unk_0xC8B93D94F8954288(), 2446.674f, 4977.788f, 57.4583f, 0) > 700f)
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
							if (func_67(unk_0xC8B93D94F8954288(), 2446.674f, 4977.788f, 57.4583f, 1) > 250f)
							{
								Local_3120[iVar3 /*8*/].f_2 = 1;
							}
						}
						break;
				}
				break;
			
			case 26:
				if (func_67(unk_0xC8B93D94F8954288(), 2441.065f, 4968.819f, 45.83075f, 1) < 2.75f)
				{
					if (!unk_0x2DC9BA2299B45EA6(Local_755[15 /*33*/]))
					{
						if (func_67(Local_755[15 /*33*/], 2439.386f, 4962.049f, 45.9047f, 1) < 3f)
						{
							Local_3120[iVar3 /*8*/].f_2 = 1;
						}
					}
					if (!unk_0x2DC9BA2299B45EA6(Local_755[16 /*33*/]))
					{
						if (func_67(Local_755[16 /*33*/], 2439.386f, 4962.049f, 45.9047f, 1) < 3f)
						{
							Local_3120[iVar3 /*8*/].f_2 = 1;
						}
					}
					if (!unk_0x2DC9BA2299B45EA6(Local_755[17 /*33*/]))
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
						if (!unk_0x2DC9BA2299B45EA6(Local_755[4 /*33*/]) && unk_0x7F13E3D2383CF15F(Local_755[4 /*33*/]))
						{
							Local_3120[iVar3 /*8*/].f_4++;
						}
						if (!unk_0x2DC9BA2299B45EA6(Local_755[5 /*33*/]) && unk_0x7F13E3D2383CF15F(Local_755[5 /*33*/]))
						{
							Local_3120[iVar3 /*8*/].f_4++;
						}
						if (!unk_0x2DC9BA2299B45EA6(Local_755[7 /*33*/]) && unk_0x7F13E3D2383CF15F(Local_755[7 /*33*/]))
						{
							Local_3120[iVar3 /*8*/].f_4++;
						}
						Local_3120[iVar3 /*8*/].f_5 = unk_0x693EBB4F13506457() + 8000;
						break;
					
					case 1:
						if (unk_0x5D42322C7DB888D0(iLocal_2507, 0))
						{
							if (func_90(unk_0x44C17CCB85A88A1F(iLocal_2507, 1), 5f, 150f))
							{
								Local_3120[iVar3 /*8*/].f_6 = (Local_3120[iVar3 /*8*/].f_6 + unk_0xF34EE736CF047844((unk_0x0000000050597EE2() * 1000f)));
							}
						}
						if (Local_3120[iVar3 /*8*/].f_6 > 1500)
						{
							Local_3120[iVar3 /*8*/].f_2 = 1;
						}
						if (unk_0x693EBB4F13506457() > Local_3120[iVar3 /*8*/].f_5)
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
						if (unk_0x06A2030124FC73B9(uLocal_2675))
						{
							if (unk_0x93775DCB3F3DBDCC(uLocal_2675))
							{
								Local_3120[iVar3 /*8*/].f_4++;
							}
						}
						break;
					
					case 1:
						if (unk_0x06A2030124FC73B9(uLocal_2675))
						{
							if (!unk_0x93775DCB3F3DBDCC(uLocal_2675))
							{
								if (unk_0xDF87568D121A99AC(-1, 2435.252f, 4966.748f, 41.3476f, 4f))
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
				if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 2442.819f, 4970.283f, 45.2481f, 2439.625f, 4966.862f, 48.14596f, 3.4375f, 0, 1, 0))
				{
					Local_3120[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 18:
				if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 2434.671f, 4959.104f, 44.85109f, 2440.5f, 4965.189f, 48.1231f, 3.625f, 0, 1, 0))
				{
					Local_3120[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 19:
				if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 2432.467f, 4959.473f, 44.94133f, 2430.797f, 4961.173f, 48.30901f, 1.5625f, 0, 1, 0))
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
				if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 2447.671f, 4951.438f, 43.25576f, 2454.664f, 4957.856f, 47.89117f, 6.8125f, 0, 1, 0))
				{
					Local_3120[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 33:
				switch (Local_3120[iVar3 /*8*/].f_4)
				{
					case 0:
						if (unk_0xD6B965E92DB098CE(unk_0xC8B93D94F8954288(), joaat("weapon_petrolcan"), 0))
						{
							Local_3120[iVar3 /*8*/].f_4++;
						}
						break;
					
					case 1:
						if (!unk_0xD6B965E92DB098CE(unk_0xC8B93D94F8954288(), joaat("weapon_petrolcan"), 0))
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
						if (unk_0xD6B965E92DB098CE(unk_0xC8B93D94F8954288(), joaat("weapon_petrolcan"), 0))
						{
							Local_3120[iVar3 /*8*/].f_5 = 10;
						}
						else
						{
							Local_3120[iVar3 /*8*/].f_5 = 20;
						}
						break;
				}
				if (unk_0xD6B965E92DB098CE(unk_0xC8B93D94F8954288(), joaat("weapon_petrolcan"), 0))
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
				if (unk_0xA51F11E1DC7307BB(unk_0xC8B93D94F8954288(), &iVar11, 1))
				{
					if (iVar11 == joaat("weapon_petrolcan"))
					{
						if (unk_0x0139E142C27412BC(0, 24))
						{
							Local_3120[iVar3 /*8*/].f_2 = 1;
						}
					}
				}
				break;
			
			case 44:
				if (unk_0x4D52A1AE51B072DD(-1, 2435.776f, 4963.067f, 39.34265f, 2428.118f, 4971.287f, 43.67327f, 11.875f))
				{
					if (!unk_0x4D52A1AE51B072DD(24, 2435.776f, 4963.067f, 39.34265f, 2428.118f, 4971.287f, 43.67327f, 11.875f) && !unk_0x4D52A1AE51B072DD(22, 2435.776f, 4963.067f, 39.34265f, 2428.118f, 4971.287f, 43.67327f, 11.875f))
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
				if (unk_0x6907EB47FC00DB19(unk_0xC8B93D94F8954288()) != 0)
				{
					Local_3120[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 42:
				if (func_67(unk_0xC8B93D94F8954288(), 2439.52f, 4969.67f, 52.65f, 1) > 42.5f)
				{
					Local_3120[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 43:
				if (func_67(unk_0xC8B93D94F8954288(), 2439.52f, 4969.67f, 52.65f, 1) > 60f)
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
						Local_3120[iVar3 /*8*/].f_5 = unk_0x693EBB4F13506457() + 30000;
						Local_3120[iVar3 /*8*/].f_4++;
						break;
					
					case 1:
						if (unk_0x693EBB4F13506457() > Local_3120[iVar3 /*8*/].f_5)
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
					if (func_67(unk_0xC8B93D94F8954288(), 2448.25f, 4974.92f, 55.11f, 1) > 300f)
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
					if (func_67(unk_0xC8B93D94F8954288(), 2448.25f, 4974.92f, 55.11f, 1) > 500f)
					{
						Local_3120[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 50:
				Local_3120[iVar3 /*8*/].f_2 = 0;
				if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) > 0)
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
	if (unk_0x2E895CA0C4A6EC85(Local_444[iParam0 /*5*/], 0.6f) > 0)
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
			if (unk_0x2E895CA0C4A6EC85(Local_444[iVar0 /*5*/], 0.6f) > 0)
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
	
	unk_0xB7FB139455C8B429();
	if ((func_194() && iLocal_2512 > 0) && unk_0x693EBB4F13506457() > iLocal_2641)
	{
		while (!unk_0xD5DFCA69ACAA20E3())
		{
			unk_0x00F9843B9C06C2E9(1000);
			func_28(28, 1);
		}
		iLocal_3690 = 0;
		while (!func_193())
		{
			func_28(32322, 1);
		}
		unk_0xC76B5C68AB6DC7DF(unk_0xC8B93D94F8954288(), 2474.97f, 4946.047f, 44.0297f, 1, 0, 0, 1);
		unk_0x765E3FA65D011F03(unk_0xC8B93D94F8954288(), 230.6937f);
		unk_0x1D9B9237CA276DAD(unk_0xC8B93D94F8954288(), 0, 0);
		unk_0xD5BE34D3F0B9AC0A(unk_0xC8B93D94F8954288(), 0, -1, 0);
		unk_0x80423B6A45BF05DA(unk_0xC8B93D94F8954288(), joaat("weapon_unarmed"), 1);
		unk_0x01BAA21528B22625(unk_0xC8B93D94F8954288(), 0, 0);
		func_186(0, 1, 1, 0);
		unk_0x5269022A1D4CB9CC(0);
		unk_0x2544549FDE4C3A7E(0, 0, 3000, 1, 0, 0);
		unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 1, 0);
		unk_0x8C67D2FDE360FBCA(0f);
		unk_0x0F9FDCEB321235AB(0f, 1065353216);
		unk_0x7846F09C04C34C46();
		unk_0xFCE6FB017DCCDF75("SLOW_MO_METH_HOUSE_RAYFIRE");
		uLocal_2672 = unk_0xBFFB3E6573626E32(2457.15f, 4968.79f, 48.677f, 45f, "DES_FarmHs");
		func_31(12, 1);
		iLocal_2640 = 0;
		iLocal_2645 = iLocal_2645;
		iLocal_2645 = 99;
		iLocal_2512 = 99;
		iLocal_2454 = 3;
		fLocal_2453 = 10000f;
		unk_0xF3B031799E7F7016(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrm"), 1);
		unk_0xF3B031799E7F7016(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrmsml"), 1);
		unk_0xF3B031799E7F7016(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassairfrm"), 0);
		unk_0x8F9EDB48A60C0C79();
		unk_0x2D4CF77D729552C0();
		bLocal_2647 = true;
	}
	unk_0xC5E066210BF7DEBB();
	switch (iLocal_2512)
	{
		case 0:
			func_193();
			bLocal_2647 = false;
			iVar0 = 49;
			while (iVar0 <= 55)
			{
				Local_444[iVar0 /*5*/] = { Local_444[iVar0 /*5*/] + Vector(0.6f, 0f, 0f) };
				iVar0++;
			}
			if (unk_0xB5F5536784683C33("CHI_2_POUR_GAS"))
			{
				unk_0xDB9D78E5137EE7AD("CHI_2_POUR_GAS");
			}
			if (unk_0xB5F5536784683C33("CHI_2_SHOOT_GAS"))
			{
				unk_0xDB9D78E5137EE7AD("CHI_2_SHOOT_GAS");
			}
			unk_0x925AE2E6F6E41362("CHI_2_GAS_TRAIL_FIRE");
			iLocal_2641 = unk_0x693EBB4F13506457() + 1000;
			unk_0x98371F41D43CDFA9(2570.53f, 4982.057f, 50.6819f, 100f, 1, 0, 0, 0);
			unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 0, 0);
			unk_0x80423B6A45BF05DA(unk_0xC8B93D94F8954288(), joaat("weapon_unarmed"), 1);
			func_81(0);
			iLocal_3491 = 0;
			func_81(1);
			unk_0x7846F09C04C34C46();
			func_185(2467.775f, 4954.415f, 42.87803f, 2477.089f, 4945.079f, 46.16654f, 4.0625f, 2486.854f, 4939.086f, 43.2578f, 230f, 1, 1, 1, 0, 0);
			if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
			{
				unk_0xC76B5C68AB6DC7DF(unk_0xC8B93D94F8954288(), 2455.941f, 4952.801f, 44.112f, 1, 0, 0, 1);
			}
			unk_0x196C7025F0C44A36(1f);
			unk_0x3ECF1E41E6ED71D8("misschinese2_barrelRoll");
			unk_0xA6045DDE5A17C533("move_m@gangster@var_e");
			unk_0xA6045DDE5A17C533("move_m@gangster@var_f");
			unk_0xA6045DDE5A17C533("move_m@gangster@generic");
			unk_0x3ECF1E41E6ED71D8("misschinese2_bank5");
			unk_0x3ECF1E41E6ED71D8("misschinese2_bank1");
			unk_0x3ECF1E41E6ED71D8("reaction@male_stand@big_variations@b");
			unk_0x3ECF1E41E6ED71D8("reaction@male_stand@big_intro@left");
			unk_0x3ECF1E41E6ED71D8("reaction@male_stand@big_intro@right");
			unk_0x3ECF1E41E6ED71D8("reaction@male_stand@big_intro@backward");
			unk_0x4BBD72565A0AF033(joaat("a_m_m_hillbilly_02"));
			unk_0x4BBD72565A0AF033(joaat("a_m_y_methhead_01"));
			unk_0x4BBD72565A0AF033(joaat("prop_cs_fertilizer"));
			unk_0x4BBD72565A0AF033(joaat("burrito"));
			unk_0x4BBD72565A0AF033(joaat("prop_cs_beer_bot_01"));
			unk_0x1D9B9237CA276DAD(unk_0xC8B93D94F8954288(), 0, 0);
			iVar1 = 0;
			while (iVar1 < Local_755.f_0)
			{
				if (unk_0x95CCECA3948CFE7B(Local_755[iVar1 /*33*/]))
				{
					unk_0x26B3B761603F5232(&(Local_755[iVar1 /*33*/]));
				}
				if (unk_0x95CCECA3948CFE7B(Local_755[iVar1 /*33*/].f_20))
				{
					unk_0xA278ECBE30D8AE4F(&(Local_755[iVar1 /*33*/].f_20));
				}
				iVar1++;
			}
			iLocal_2512++;
			break;
		
		case 1:
			if (unk_0xD5DFCA69ACAA20E3() && !unk_0x2230725B418B1240())
			{
				unk_0x31E6EB2040318451(1000);
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
			Local_2380[iVar2 /*18*/] = { unk_0xAE415C6BC3140C20(unk_0x95DD4668236B4AE6()) };
			Local_2380[iVar2 /*18*/].f_3 = { unk_0xFF92F4931C726C96(unk_0x95DD4668236B4AE6(), 2) };
			Local_2380[iVar2 /*18*/].f_14 = unk_0x5083E5E210CD1ADF(unk_0x95DD4668236B4AE6());
		}
		if (iLocal_2460[iVar2])
		{
			iLocal_2460[iVar2] = 0;
			Local_2380[iVar2 /*18*/].f_6 = { unk_0xAE415C6BC3140C20(unk_0x95DD4668236B4AE6()) };
			Local_2380[iVar2 /*18*/].f_9 = { unk_0xFF92F4931C726C96(unk_0x95DD4668236B4AE6(), 2) };
			Local_2380[iVar2 /*18*/].f_15 = unk_0x5083E5E210CD1ADF(unk_0x95DD4668236B4AE6());
		}
		iVar2++;
	}
	if (iLocal_2340)
	{
		iLocal_2340 = 0;
		bLocal_2341 = false;
		iLocal_2673 = 0;
		unk_0x98371F41D43CDFA9(2431.097f, 4967.043f, 41.3476f, 20f, 1, 0, 0, 0);
		func_184();
	}
	if (!bLocal_2341)
	{
		if (unk_0x6CBEE2151C70E00C())
		{
			unk_0x46371B5B89BF58CA(5, 5, 5, 5);
			unk_0xE97B7DBBB5FE4C8F();
			iLocal_2454 = -1;
			unk_0x5269022A1D4CB9CC(0);
			func_186(1, 1, 1, 0);
			unk_0xC0E8B67A4385D37D("misschinese2_crystalmaze");
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
			unk_0xD0E30C811D3BBC73();
			unk_0x1FFBBAD42BF7E243(4);
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
		unk_0x0231367DC729026E(unk_0xBBDA792448DB5A89(unk_0x83666F9FB8FEBD4B()));
	}
	if (bLocal_2341)
	{
		fLocal_2453 = (fLocal_2453 + unk_0x0000000050597EE2());
		if (iLocal_2454 == -1 || ((iLocal_2454 != -1 && iLocal_2454 < 4) && fLocal_2453 > (Local_2380[iLocal_2454 /*18*/].f_13 / 1000f)))
		{
			iLocal_2454++;
			if (iLocal_2454 == 3)
			{
				if (unk_0xF9B86DC1728F1339("misschinese2_crystalmaze"))
				{
					uLocal_2637 = unk_0xC2BD7C2F6D9648EB(964613260, 1);
					uLocal_2638 = unk_0x0B15BB6DFB729046(2452.914f, 4962.096f, 45.585f, 0f, 0f, 45f, 2);
					unk_0xEC805A65A86B9D68(uLocal_2637, uLocal_2638, "trevor_barn_walk_cam", "misschinese2_crystalmaze");
					if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
					{
						unk_0xA5666A46C1079EFE(unk_0xC8B93D94F8954288(), uLocal_2638, "misschinese2_crystalmaze", "trevor_barn_walk", 1000f, -8f, 0, 0, 1148846080, 0);
					}
					unk_0x2544549FDE4C3A7E(1, 0, 3000, 1, 0, 0);
					func_184();
					unk_0x5D6486E91832EAEC(1);
					fLocal_2453 = 0f;
				}
			}
			else if (iLocal_2454 < 4)
			{
				unk_0x5269022A1D4CB9CC(0);
				uLocal_2637 = unk_0xD5CF3E0D106CC7B8("DEFAULT_SCRIPTED_CAMERA", Local_2380[iLocal_2454 /*18*/], Local_2380[iLocal_2454 /*18*/].f_3, Local_2380[iLocal_2454 /*18*/].f_14, 1, 2);
				unk_0xF24FE6EB928DD893(uLocal_2637, Local_2380[iLocal_2454 /*18*/].f_6, Local_2380[iLocal_2454 /*18*/].f_9, Local_2380[iLocal_2454 /*18*/].f_15, unk_0xF34EE736CF047844(Local_2380[iLocal_2454 /*18*/].f_12), Local_2380[iLocal_2454 /*18*/].f_16, 1, 2);
				unk_0x2544549FDE4C3A7E(1, 0, 3000, 1, 0, 0);
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
				unk_0x5269022A1D4CB9CC(0);
				unk_0x2544549FDE4C3A7E(0, 0, 3000, 1, 0, 0);
				if (func_182() && !bLocal_2647)
				{
					unk_0xD7F5001BB6D13A64("CamPushInNeutral", 0, 0);
					unk_0xC4EE38A4CFF7544C(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				}
				unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 1, 0);
				unk_0x5D6486E91832EAEC(0);
				unk_0x8C67D2FDE360FBCA(0f);
				unk_0x0F9FDCEB321235AB(0f, 1065353216);
				func_181(0, 0, 1, 0);
				unk_0xDB9D78E5137EE7AD("CHI_2_GAS_TRAIL_FIRE");
				unk_0x1BBA896A85FD74C9(uLocal_2672, 9);
				unk_0x196C7025F0C44A36(1f);
				unk_0x1B8A00409F0FAA8E();
				if (unk_0xD5DFCA69ACAA20E3())
				{
					while (unk_0xF1F56E8F7D83989D(uLocal_2672) != 10)
					{
						func_28(29, 1);
					}
					unk_0x31E6EB2040318451(1000);
				}
				unk_0x2D4CF77D729552C0();
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
									if (unk_0x693EBB4F13506457() > Local_2343[iVar3 /*6*/].f_5)
									{
										func_122(Local_2465[iLocal_2505 /*3*/], 0);
										Local_2343[iVar3 /*6*/].f_5 = unk_0x693EBB4F13506457() + 200;
										Local_2343[iVar3 /*6*/].f_4++;
									}
									break;
								
								case 1:
									if (unk_0x693EBB4F13506457() > Local_2343[iVar3 /*6*/].f_5)
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
											Local_2343[iVar3 /*6*/].f_5 = unk_0x693EBB4F13506457() + 200;
											Local_2343[iVar3 /*6*/].f_4 = 2;
										}
									}
									break;
								
								case 2:
									if (unk_0x693EBB4F13506457() > Local_2343[iVar3 /*6*/].f_5)
									{
										func_122(Local_2465[iLocal_2505 /*3*/], 0);
										Local_2343[iVar3 /*6*/].f_5 = unk_0x693EBB4F13506457() + 200;
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
									if (unk_0x693EBB4F13506457() > Local_2343[iVar3 /*6*/].f_5)
									{
										func_122(Local_2465[iLocal_2505 /*3*/] + Local_2465[iLocal_2505 + 1 /*3*/] / Vector(2f, 2f, 2f), 0);
										func_122(Local_2465[iLocal_2505 /*3*/] + Local_2465[iLocal_2505 + 2 /*3*/] / Vector(2f, 2f, 2f), 0);
										Local_2343[iVar3 /*6*/].f_5 = unk_0x693EBB4F13506457() + 200;
										Local_2343[iVar3 /*6*/].f_4 = 4;
										iLocal_2505 = 3;
									}
									break;
								
								case 4:
									if (unk_0x693EBB4F13506457() > Local_2343[iVar3 /*6*/].f_5)
									{
										func_122(Local_2465[iLocal_2505 /*3*/], 0);
										func_122(Local_2465[iLocal_2505 + 1 /*3*/], 0);
										Local_2343[iVar3 /*6*/].f_5 = unk_0x693EBB4F13506457() + 200;
										Local_2343[iVar3 /*6*/].f_4 = 5;
									}
									break;
								
								case 5:
									if (unk_0x693EBB4F13506457() > Local_2343[iVar3 /*6*/].f_5)
									{
										func_122(Local_2465[iLocal_2505 /*3*/] + Local_2465[iLocal_2505 + 2 /*3*/] / Vector(2f, 2f, 2f), 0);
										func_122(Local_2465[iLocal_2505 + 1 /*3*/] + Local_2465[iLocal_2505 + 3 /*3*/] / Vector(2f, 2f, 2f), 0);
										Local_2343[iVar3 /*6*/].f_5 = unk_0x693EBB4F13506457() + 200;
										Local_2343[iVar3 /*6*/].f_4 = 6;
										iLocal_2505 = 5;
									}
									break;
								
								case 6:
									if (unk_0x693EBB4F13506457() > Local_2343[iVar3 /*6*/].f_5)
									{
										func_122(Local_2465[iLocal_2505 /*3*/], 0);
										func_122(Local_2465[iLocal_2505 + 1 /*3*/], 0);
										Local_2343[iVar3 /*6*/].f_5 = unk_0x693EBB4F13506457() + 200;
										Local_2343[iVar3 /*6*/].f_4 = 2;
										iLocal_2505 = 7;
									}
									break;
							}
							break;
						
						case 1:
							unk_0x78391100F5CB7BF0(2432.534f, 4968.383f, 42.2389f, 4, 0.5f, 1, 0, 1065353216);
							Local_2343[iVar3 /*6*/] = 1;
							break;
						
						case 2:
							iLocal_2673 = 1;
							Local_2343[iVar3 /*6*/] = 1;
							break;
						
						case 3:
							if (unk_0x844838E5D8A21336(uLocal_2637))
							{
								unk_0xB61A035EB3575B09(uLocal_2637, "LARGE_EXPLOSION_SHAKE", fLocal_2639);
								unk_0x39706790934CF21D(uLocal_2637, 0.1f);
								Local_2343[iVar3 /*6*/] = 1;
							}
							break;
						
						case 4:
							switch (Local_2343[iVar3 /*6*/].f_4)
							{
								case 0:
									unk_0xC76B5C68AB6DC7DF(unk_0xC8B93D94F8954288(), 2473.208f, 4947.625f, 44.0664f, 1, 0, 0, 1);
									unk_0x765E3FA65D011F03(unk_0xC8B93D94F8954288(), 223.493f);
									unk_0x8C67D2FDE360FBCA(0f);
									unk_0x0F9FDCEB321235AB(-7f, 1065353216);
									if (func_182())
									{
										unk_0x447955D97DC49D70(unk_0xC8B93D94F8954288(), joaat("MotionState_Aiming"), 1, 0, 0);
										unk_0x1A039EB9A3399D1C(unk_0xA34E7C2A5118D638(), 1f, 3000, 0, 1, 0);
									}
									else
									{
										unk_0x447955D97DC49D70(unk_0xC8B93D94F8954288(), joaat("MotionState_Walk"), 1, 0, 0);
										unk_0x1A039EB9A3399D1C(unk_0xA34E7C2A5118D638(), 1f, 500, 0, 1, 0);
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
									Local_2343[iVar3 /*6*/].f_5 = unk_0x693EBB4F13506457() + 1300;
									unk_0x2BDE2B7E072D99D5("SLOW_MO_METH_HOUSE_RAYFIRE");
									break;
								
								case 1:
									fLocal_2674 = (fLocal_2674 - (unk_0x0000000050597EE2() * 1f));
									if (fLocal_2674 < 0.2f)
									{
										fLocal_2674 = 0.2f;
									}
									unk_0x196C7025F0C44A36(fLocal_2674);
									if (unk_0x693EBB4F13506457() > Local_2343[iVar3 /*6*/].f_5)
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
									unk_0xFCE6FB017DCCDF75("SLOW_MO_METH_HOUSE_RAYFIRE");
									unk_0x196C7025F0C44A36(fLocal_2674);
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
	if (unk_0x68B0A67658F2D9C2())
	{
		if (unk_0x751EF148528839D5() != iParam0 && iParam2)
		{
			unk_0xE3A1C9182C52F4F2(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_182()
{
	if (unk_0xA9B6C2A8F9FE269A(unk_0xBFFCA1BD025B90B2()) == 4)
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
		iLocal_439 = unk_0x693EBB4F13506457();
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
			unk_0x46D5E9DC9AA9712F(Local_281[iVar0 /*5*/]);
			if (Local_281[iVar0 /*5*/].f_4 != 0)
			{
				unk_0xA578ABADA0A4C679(Local_281[iVar0 /*5*/].f_1, 0.4f, 1f);
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
		unk_0x46D5E9DC9AA9712F(Local_281[iVar0 /*5*/]);
		Local_281[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
	func_163(0);
	iVar0 = 0;
	while (iVar0 < Local_444.f_0)
	{
		if (unk_0x6B4865E08E90ACC5(Local_444[iVar0 /*5*/].f_3))
		{
			unk_0x5356E82C1E5E0C44(&(Local_444[iVar0 /*5*/].f_3));
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
		unk_0xD693CD4BF91071EA(unk_0xA34E7C2A5118D638());
		unk_0xBFDE8C755DF4A1ED(unk_0xA34E7C2A5118D638(), 1);
		unk_0x8F9941C14FA3BF97(unk_0xA34E7C2A5118D638(), 1);
		func_192(1);
		unk_0xC0E7FF19962AE47A();
		unk_0x31592941AC9991FE();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0x44E93B894936152F())
			{
				unk_0xB518E9C8553B1D2B(0);
			}
			if (!func_40())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_181(1, iParam3, iParam2, 0);
		Global_55665 = 1;
		Global_67971 = 1;
		Global_69315 = 1;
	}
	else
	{
		func_192(0);
		unk_0x11D0AD0D13C88D1A();
		Global_55665 = 0;
		if (bParam1)
		{
			unk_0x48D86334348F315A();
		}
		unk_0xBFDE8C755DF4A1ED(unk_0xA34E7C2A5118D638(), 0);
		unk_0x8F9941C14FA3BF97(unk_0xA34E7C2A5118D638(), 0);
		func_181(0, iParam3, iParam2, 0);
		if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()) && !func_187(unk_0xA34E7C2A5118D638()))
		{
			unk_0xEE6504C7ECC425AB(unk_0xC8B93D94F8954288(), 0);
		}
		Global_69315 = 0;
	}
}

int func_187(int iParam0)
{
	if (func_189(iParam0, 0))
	{
		return 1;
	}
	if (func_188())
	{
		if (iParam0 == unk_0xA34E7C2A5118D638())
		{
			return 1;
		}
	}
	if (unk_0xDCC86F723E82125E(Global_2417071[iParam0 /*306*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_188()
{
	return unk_0xDCC86F723E82125E(Global_2359301, 3);
}

bool func_189(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xA34E7C2A5118D638())
	{
		bVar0 = func_190(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587175[iParam0 /*410*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xDF73DA5E2287C499(iParam0))
		{
			bVar0 = unk_0x07CBE0ED3114C7D8(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_190(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_191();
	}
	if (Global_1315889[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312740[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_191()
{
	return Global_1312746;
}

void func_192(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x59A0729D503ED758(&Global_2283, 13);
	}
	else
	{
		unk_0x77621132305B133B(&Global_2283, 13);
	}
}

int func_193()
{
	switch (iLocal_3690)
	{
		case 0:
			unk_0x7567CEA8E6B5340B(joaat("cs2_03_fmhse_vfx_parent"));
			unk_0x7567CEA8E6B5340B(joaat("cs2_03_fmhse_vfx_parent001"));
			unk_0x7567CEA8E6B5340B(joaat("cs2_03_fmhse_vfx_parent002"));
			unk_0x7567CEA8E6B5340B(joaat("cs2_03_fmhse_vfx_parent003"));
			unk_0x7567CEA8E6B5340B(joaat("cs2_03_fmhse_vfx_parent004"));
			unk_0x7567CEA8E6B5340B(joaat("cs2_03_fmhse_vfx_parent005"));
			unk_0x7567CEA8E6B5340B(joaat("cs2_03_fmhse_vfx_parent006"));
			unk_0x7567CEA8E6B5340B(joaat("cs2_03_fmhse_vfx_parent007"));
			unk_0x7567CEA8E6B5340B(joaat("cs2_03_fmhse_vfx_parent008"));
			unk_0x7567CEA8E6B5340B(joaat("cs2_03_fmhse_vfx_parent009"));
			unk_0x7567CEA8E6B5340B(joaat("cs2_03_fmhse_vfx_parent010"));
			unk_0x7567CEA8E6B5340B(joaat("cs2_03_fmhse_vfx_parent011"));
			unk_0x7567CEA8E6B5340B(joaat("cs2_03_fmhse_vfx_parent012"));
			unk_0x7567CEA8E6B5340B(joaat("cs2_03_fmhse_vfx_parent013"));
			unk_0x7567CEA8E6B5340B(joaat("cs2_03_fmhse_vfx_parent014"));
			unk_0x7567CEA8E6B5340B(joaat("cs2_03_fmhse_vfx_parent015"));
			iLocal_3690++;
			break;
		
		case 1:
			if (((((((((((((((unk_0x0845149A26DABBA5(joaat("cs2_03_fmhse_vfx_parent")) && unk_0x0845149A26DABBA5(joaat("cs2_03_fmhse_vfx_parent001"))) && unk_0x0845149A26DABBA5(joaat("cs2_03_fmhse_vfx_parent002"))) && unk_0x0845149A26DABBA5(joaat("cs2_03_fmhse_vfx_parent003"))) && unk_0x0845149A26DABBA5(joaat("cs2_03_fmhse_vfx_parent004"))) && unk_0x0845149A26DABBA5(joaat("cs2_03_fmhse_vfx_parent005"))) && unk_0x0845149A26DABBA5(joaat("cs2_03_fmhse_vfx_parent006"))) && unk_0x0845149A26DABBA5(joaat("cs2_03_fmhse_vfx_parent007"))) && unk_0x0845149A26DABBA5(joaat("cs2_03_fmhse_vfx_parent008"))) && unk_0x0845149A26DABBA5(joaat("cs2_03_fmhse_vfx_parent009"))) && unk_0x0845149A26DABBA5(joaat("cs2_03_fmhse_vfx_parent010"))) && unk_0x0845149A26DABBA5(joaat("cs2_03_fmhse_vfx_parent011"))) && unk_0x0845149A26DABBA5(joaat("cs2_03_fmhse_vfx_parent012"))) && unk_0x0845149A26DABBA5(joaat("cs2_03_fmhse_vfx_parent013"))) && unk_0x0845149A26DABBA5(joaat("cs2_03_fmhse_vfx_parent014"))) && unk_0x0845149A26DABBA5(joaat("cs2_03_fmhse_vfx_parent015")))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_194()
{
	if (unk_0x2BF05095F2389894())
	{
		return 0;
	}
	if (unk_0x8D9008B8900A28D0(0, 18) || unk_0x8D9008B8900A28D0(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_195()
{
	unk_0xB7FB139455C8B429();
	func_170(28, 45);
	func_149(0, 7, 0, 0, 1, 0, 1, 0);
	func_149(1, 8, 2, 29, 1, 0, 1, 0);
	func_149(2, 9, 2, 35, 5, 34, 1, 0);
	func_149(3, 10, 2, 42, 1, 0, 1, 0);
	func_157(0, 21, 2, 29, 1, 0, 1, 0, 1, 0);
	func_157(1, 22, 2, 36, 5, 34, 1, 0, 1, 0);
	func_157(2, 26, 0, 0, 1, 0, 1, 0, 1, 0);
	func_157(3, 23, 2, 37, 1, 0, 1, 0, 1, 0);
	func_197(4, 25, 3, 23, 1, 0, 1, 0, 1, 0);
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
	func_196(0, 2, 33, 5, 34);
	func_196(4, 2, 43, 1, 0);
	func_196(2, 2, 39, 1, 0);
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
		func_196(1, 2, 40, 1, 0);
		if (unk_0x6B4865E08E90ACC5(uLocal_2677))
		{
			unk_0x5356E82C1E5E0C44(&uLocal_2677);
		}
		unk_0xD810132681A9B83C(10f, 5f, 4);
		func_12(1);
		func_176(11);
	}
}

void func_196(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
				if (unk_0x95CCECA3948CFE7B(Local_755[11 /*33*/]))
				{
					if (unk_0x2DC9BA2299B45EA6(Local_755[11 /*33*/]))
					{
						func_130("FRMCHI");
					}
				}
				if (unk_0x95CCECA3948CFE7B(Local_755[10 /*33*/]))
				{
					if (unk_0x2DC9BA2299B45EA6(Local_755[10 /*33*/]))
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

void func_197(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	if (!Local_3358[iParam0 /*7*/].f_1)
	{
		if (func_198(iParam2, iParam3))
		{
			func_157(iParam0, iParam1, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 1, 0);
		}
	}
}

int func_198(int iParam0, int iParam1)
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

void func_199()
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
	func_196(4, 2, 24, 1, 0);
	func_196(5, 2, 30, 1, 0);
	if (func_87(11) && func_87(29))
	{
		func_176(7);
	}
}

void func_200()
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	
	unk_0xB894A6210779423F(2004.447f, 3076.807f, 46.6069f, 10f);
	unk_0xCA339BD27350B0AC(1);
	if (((func_194() && iLocal_2512 > 0) && iLocal_2512 < 7) && unk_0x693EBB4F13506457() > iLocal_2641)
	{
		iLocal_2512 = 10;
		iLocal_2640 = 0;
		bLocal_2647 = true;
	}
	if (iLocal_2512 < 10)
	{
		if (unk_0xD5DFCA69ACAA20E3() && !unk_0x2230725B418B1240())
		{
			unk_0x31E6EB2040318451(1000);
		}
	}
	if (iLocal_2880)
	{
		unk_0x0231367DC729026E(unk_0xBBDA792448DB5A89(unk_0x83666F9FB8FEBD4B()));
	}
	unk_0xC5E066210BF7DEBB();
	switch (iLocal_2512)
	{
		case 0:
			if (unk_0x6CBEE2151C70E00C())
			{
				unk_0x0B3F3AB0A340D234("CHI_2_MCS_5", 8);
				iLocal_2879 = 1;
				bLocal_2647 = false;
				unk_0x46371B5B89BF58CA(5, 5, 5, 5);
				unk_0xE97B7DBBB5FE4C8F();
				unk_0xFC1F2AE3FDE7BB5D(0);
				iLocal_2883 = 0;
				iLocal_2880 = 1;
				Var0 = { unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1) };
				fVar3 = func_96(2458.223f, 4986.042f, 49.05241f, Var0, 1);
				if (fVar3 > 180f)
				{
					fVar3 = (fVar3 - 360f);
				}
				if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
				{
					iVar4 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
				}
				if (((unk_0x5D42322C7DB888D0(iVar4, 0) && unk_0xAF40E7422A6D9D80(unk_0x6D5BB810CC209E15(iVar4))) && unk_0x25011B7D08ACD328(iVar4)) || ((unk_0x5D42322C7DB888D0(iVar4, 0) && unk_0xE924C2C283992918(unk_0x6D5BB810CC209E15(iVar4))) && unk_0x25011B7D08ACD328(iVar4)))
				{
					if (fVar3 < func_214(-2.5f) && fVar3 > func_214(0.5f))
					{
						iLocal_2512 = 6;
						unk_0xC1B1E9A034A63A62(30000);
						unk_0x0231367DC729026E(30000f);
						iLocal_2640 = 36000;
					}
					else
					{
						iLocal_2512 = 7;
						unk_0xC1B1E9A034A63A62(36000);
						unk_0x0231367DC729026E(36000f);
						iLocal_2640 = 42000;
					}
				}
				else
				{
					if (unk_0x95CCECA3948CFE7B(iVar4))
					{
						if (unk_0x5D42322C7DB888D0(iVar4, 0))
						{
							if (!(unk_0xAF40E7422A6D9D80(unk_0x6D5BB810CC209E15(iVar4)) && unk_0x25011B7D08ACD328(iVar4)) && !(unk_0xE924C2C283992918(unk_0x6D5BB810CC209E15(iVar4)) && unk_0x25011B7D08ACD328(iVar4)))
							{
								unk_0xF18809B65D87E197(iVar4);
							}
						}
					}
					if (fVar3 < func_214(-1.33f) && fVar3 > func_214(-1.92f))
					{
						iLocal_2512 = 1;
						unk_0xC1B1E9A034A63A62(0);
						unk_0x0231367DC729026E(0f);
						iLocal_2640 = 6000;
					}
					else if (fVar3 < func_214(0.96f) && fVar3 > func_214(-1.33f))
					{
						iLocal_2512 = 2;
						unk_0xC1B1E9A034A63A62(6000);
						unk_0x0231367DC729026E(6000f);
						iLocal_2640 = 12000;
					}
					else if (fVar3 < func_214(2.29f) && fVar3 > func_214(0.96f))
					{
						iLocal_2512 = 3;
						unk_0xC1B1E9A034A63A62(12000);
						unk_0x0231367DC729026E(12000f);
						iLocal_2640 = 18000;
					}
					else if (fVar3 < func_214(-2.81f) || fVar3 > func_214(2.29f))
					{
						iLocal_2512 = 4;
						unk_0xC1B1E9A034A63A62(18000);
						unk_0x0231367DC729026E(18000f);
						iLocal_2640 = 24000;
					}
					else
					{
						unk_0xC1B1E9A034A63A62(24000);
						unk_0x0231367DC729026E(24000f);
						iLocal_2640 = 30000;
						iLocal_2512 = 5;
					}
				}
				iLocal_2881 = 1;
				unk_0x5269022A1D4CB9CC(0);
				func_209(&Local_2683, 1, 0);
				if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
				{
					iLocal_260 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
					Local_752 = { unk_0x3A5C3B481EEBA95F(iLocal_260) };
					unk_0xB7A2078CD1C9A82F(iLocal_260, 1);
					unk_0x872B541D7953A19B(iLocal_260, 0, 0);
				}
				unk_0xD0E30C811D3BBC73();
				if (iLocal_2512 == 1)
				{
					iLocal_2883 = 1;
					func_69(2559.012f, 4958.518f, 36.02959f, 2585.447f, 4993.435f, 64.62565f, 48f, 2594.651f, 4948.114f, 38.0899f, 283.7287f, 22f, 22f, 15f, 1, 1, 1, 0, 0);
					if (unk_0x95CCECA3948CFE7B(iVar4))
					{
						if (unk_0x5D42322C7DB888D0(iVar4, 0))
						{
							unk_0x57892FEA93664769(iVar4, 0, 1, 0);
						}
					}
					unk_0x98371F41D43CDFA9(2445.139f, 4978.642f, 52.1489f, 150f, 1, 1, 0, 0);
					unk_0x98371F41D43CDFA9(2578.523f, 4982.284f, 51.4416f, 13f, 1, 0, 0, 0);
					unk_0xC76B5C68AB6DC7DF(unk_0xC8B93D94F8954288(), 2578.419f, 4981.901f, 50.587f, 1, 0, 0, 1);
					unk_0x765E3FA65D011F03(unk_0xC8B93D94F8954288(), 49.2184f);
					unk_0xBA73099E237C7E5E(unk_0xC8B93D94F8954288());
					unk_0x01BAA21528B22625(unk_0xC8B93D94F8954288(), 0, 0);
					unk_0xAFCAB3A510E42700(unk_0xC8B93D94F8954288(), 1f);
					unk_0x447955D97DC49D70(unk_0xC8B93D94F8954288(), joaat("MotionState_Walk"), 0, 0, 0);
					unk_0x3E2E609450787FFE(&uVar5);
					unk_0x6094B3418D5AE59D(0, 2570.543f, 4982.002f, 50.6795f, 1f, 20000, 1193033728, 1056964608);
					unk_0x6EAFBB3A7F6ADEA9(0, 88.7065f, 0);
					unk_0x939BC11172AA1303(uVar5);
					unk_0xBFE865E3B513451B(unk_0xC8B93D94F8954288(), uVar5);
					unk_0xA9351C9309E03069(&uVar5);
					uLocal_2637 = unk_0xFE4F2696906F18A3("DEFAULT_SPLINE_CAMERA", 1);
					unk_0x46D68916D0AD000D(uLocal_2637, 2538.6f, 4976.9f, 50.6f, -1.8f, 0f, 93.2f, 5000, 3, 2);
					unk_0x46D68916D0AD000D(uLocal_2637, 2536.153f, 4976.7f, 50.5267f, -1.8f, 0f, 93.2f, 6000, 3, 2);
					unk_0xD9D8D5E5A50FF6D5(uLocal_2637, 34.9f);
					unk_0x654A507585051BDA(uLocal_2637, 0);
				}
				else
				{
					switch (iLocal_2512)
					{
						case 2:
							uLocal_2637 = unk_0xFE4F2696906F18A3("DEFAULT_SPLINE_CAMERA", 1);
							unk_0x46D68916D0AD000D(uLocal_2637, 2426.8f, 5088.3f, 51.2f, 0f, 0f, -169f, 5000, 3, 2);
							unk_0x46D68916D0AD000D(uLocal_2637, 2427.8f, 5087.2f, 51.2f, 0f, 0f, -169.7f, 6000, 3, 2);
							unk_0xD9D8D5E5A50FF6D5(uLocal_2637, 28.5f);
							unk_0x654A507585051BDA(uLocal_2637, 0);
							break;
						
						case 3:
							uLocal_2637 = unk_0xFE4F2696906F18A3("DEFAULT_SPLINE_CAMERA", 1);
							unk_0x46D68916D0AD000D(uLocal_2637, 2326.3f, 4985.6f, 51.5f, 0f, 0f, -89.1f, 5000, 3, 2);
							unk_0x46D68916D0AD000D(uLocal_2637, 2328f, 4985.4f, 52.1f, 0f, 0f, -89.1f, 6000, 3, 2);
							unk_0xD9D8D5E5A50FF6D5(uLocal_2637, 28.5f);
							unk_0x654A507585051BDA(uLocal_2637, 0);
							break;
						
						case 4:
							uLocal_2637 = unk_0xFE4F2696906F18A3("DEFAULT_SPLINE_CAMERA", 1);
							unk_0x46D68916D0AD000D(uLocal_2637, 2403.6f, 4889.7f, 47.5f, 3.4f, 0f, -19.5f, 5000, 3, 2);
							unk_0x46D68916D0AD000D(uLocal_2637, Vector(47.5f, 4889.7f, 2403.6f) + Vector(0.07f, 2.15f, 0.8f), 3.4f, 0f, -19.5f, 6000, 3, 2);
							unk_0xD9D8D5E5A50FF6D5(uLocal_2637, 29.8f);
							unk_0x654A507585051BDA(uLocal_2637, 0);
							break;
						
						case 5:
							uLocal_2637 = unk_0xFE4F2696906F18A3("DEFAULT_SPLINE_CAMERA", 1);
							unk_0x46D68916D0AD000D(uLocal_2637, 2493.4f, 4934.8f, 45.7f, 5.2f, 0f, 48f, 5000, 3, 2);
							unk_0x46D68916D0AD000D(uLocal_2637, Vector(45.7f, 4934.8f, 2493.4f) + Vector(0f, 1f, -1f), 5.2f, 0f, 48f, 6000, 3, 2);
							unk_0xD9D8D5E5A50FF6D5(uLocal_2637, 28.5f);
							unk_0x654A507585051BDA(uLocal_2637, 0);
							break;
						
						case 6:
							uLocal_2637 = unk_0xFE4F2696906F18A3("DEFAULT_SPLINE_CAMERA", 1);
							unk_0x46D68916D0AD000D(uLocal_2637, 2570.6f, 4982f, 151.6f, -47.9f, 0f, 88.1f, 5000, 3, 2);
							unk_0x46D68916D0AD000D(uLocal_2637, 2487.8f, 4896.9f, 151.9f, -47.2f, 0f, 28.8f, 15000, 3, 2);
							unk_0xD9D8D5E5A50FF6D5(uLocal_2637, 28.5f);
							unk_0x654A507585051BDA(uLocal_2637, 0);
							break;
						
						case 7:
							uLocal_2637 = unk_0xFE4F2696906F18A3("DEFAULT_SPLINE_CAMERA", 1);
							unk_0x46D68916D0AD000D(uLocal_2637, 2487.8f, 4896.9f, 151.9f, -47.2f, 0f, 28.8f, 5000, 3, 2);
							unk_0x46D68916D0AD000D(uLocal_2637, 2570.6f, 4982f, 151.6f, -47.9f, 0f, 88.1f, 15000, 3, 2);
							unk_0xD9D8D5E5A50FF6D5(uLocal_2637, 28.5f);
							unk_0x654A507585051BDA(uLocal_2637, 0);
							break;
						}
				}
				if (iLocal_2512 < 6)
				{
					unk_0xB61A035EB3575B09(uLocal_2637, "Hand_shake", 0.2f);
				}
				else
				{
					unk_0xB61A035EB3575B09(uLocal_2637, "Hand_shake", 0.7f);
				}
				unk_0x7D1795B1E14EDFFD(uLocal_2637, 1);
				unk_0x2544549FDE4C3A7E(1, 0, 3000, 1, 0, 0);
				unk_0x1FFBBAD42BF7E243(4);
				unk_0x925AE2E6F6E41362("CHI_2_FARMHOUSE_OVERVIEW");
				func_204(1);
				unk_0xFD62177C7242216E(0f);
				unk_0x60B57BC5E51D2074(0);
				unk_0x7846F09C04C34C46();
				unk_0x9F4AA6F234E8A860(1);
				unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 0, 32);
				func_186(1, 1, 1, 0);
				unk_0x1D9B9237CA276DAD(unk_0xC8B93D94F8954288(), 0, 0);
				iLocal_2641 = unk_0x693EBB4F13506457() + 1000;
				iVar6 = 0;
				while (iVar6 < Local_755.f_0)
				{
					if (!unk_0x2DC9BA2299B45EA6(Local_755[iVar6 /*33*/]))
					{
						unk_0x63E00E88AE3C86A3(Local_755[iVar6 /*33*/], 1);
					}
					iVar6++;
				}
				iLocal_2642 = unk_0x71DD988C1B903F5D(26, joaat("a_m_y_methhead_01"), 2460.449f, 4976.938f, 45.5765f, 243.4917f, 1, 1);
				unk_0x640290651A86938B(iLocal_2642, joaat("weapon_microsmg"), -1, 1, 1);
				if (!unk_0x2DC9BA2299B45EA6(iLocal_2642))
				{
					func_93();
					unk_0x2A262C5D2DAD436D(0, 1);
					unk_0x81333BEA4837207C(0, 2463.016f, 4974.97f, 45.5765f, 1f, -1, 0.5f, 1, 1193033728);
					unk_0x81333BEA4837207C(0, 2452.833f, 4964.785f, 45.5765f, 1f, -1, 0.5f, 1, 1193033728);
					unk_0xCF73E1BFE9942411(0, 500);
					unk_0x81333BEA4837207C(0, 2460.449f, 4976.938f, 45.5765f, 1f, -1, 0.5f, 0, 1193033728);
					func_92(&iLocal_2642, 1);
				}
				iLocal_2509 = unk_0xD53B4DCC7B2C8551(joaat("dubsta"), 2479.961f, 4990f, 45.8f, -5.37f, 1, 1);
				func_15("CHN2_MISSION_START", 1, "CHN2_EXPLODE");
				iLocal_2512 = 3;
			}
			break;
		
		case 3:
			if (unk_0x83666F9FB8FEBD4B() > iLocal_2640)
			{
				unk_0x5269022A1D4CB9CC(0);
				uLocal_2637 = unk_0xFE4F2696906F18A3("DEFAULT_SPLINE_CAMERA", 1);
				unk_0x46D68916D0AD000D(uLocal_2637, 2445.944f, 4962.986f, 51.4782f, 7.9159f, 0f, 34.5909f, 5000, 3, 2);
				unk_0x46D68916D0AD000D(uLocal_2637, 2445.684f, 4963.368f, 51.6659f, 3.6033f, 0f, 34.5909f, 3500, 3, 2);
				unk_0xD9D8D5E5A50FF6D5(uLocal_2637, 34f);
				unk_0x654A507585051BDA(uLocal_2637, 0);
				unk_0xB61A035EB3575B09(uLocal_2637, "Hand_shake", 0.5f);
				iLocal_2640 += 3500;
				iLocal_2512++;
			}
			break;
		
		case 4:
			if (unk_0x83666F9FB8FEBD4B() > iLocal_2640)
			{
				unk_0x5269022A1D4CB9CC(0);
				uLocal_2637 = unk_0xFE4F2696906F18A3("DEFAULT_SPLINE_CAMERA", 1);
				unk_0x46D68916D0AD000D(uLocal_2637, 2465.07f, 4946.688f, 45.3372f, 7.1461f, 0f, 30.9281f, 5000, 3, 2);
				unk_0x46D68916D0AD000D(uLocal_2637, 2466.011f, 4947.377f, 45.3509f, 7.1461f, 0f, 32.3761f, 3000, 3, 2);
				unk_0xD9D8D5E5A50FF6D5(uLocal_2637, 34f);
				unk_0x654A507585051BDA(uLocal_2637, 0);
				unk_0xB61A035EB3575B09(uLocal_2637, "Hand_shake", 0.5f);
				iLocal_2640 += 3000;
				iLocal_2512++;
			}
			break;
		
		case 5:
			iLocal_2882 = 1;
			if (unk_0x83666F9FB8FEBD4B() > iLocal_2640)
			{
				iLocal_2882 = 1;
				unk_0x5269022A1D4CB9CC(0);
				uLocal_2637 = unk_0xFE4F2696906F18A3("DEFAULT_SPLINE_CAMERA", 1);
				unk_0x46D68916D0AD000D(uLocal_2637, 2509.691f, 4971.024f, 44.1325f, 7.2578f, 0f, 88.5226f, 5000, 3, 2);
				unk_0x46D68916D0AD000D(uLocal_2637, 2509.415f, 4971.163f, 44.1674f, 6.6554f, 0f, 89.4229f, 2500, 3, 2);
				unk_0xD9D8D5E5A50FF6D5(uLocal_2637, 37.34f);
				unk_0x654A507585051BDA(uLocal_2637, 0);
				unk_0xB61A035EB3575B09(uLocal_2637, "Hand_shake", 0.5f);
				iLocal_2640 += 2500;
				iLocal_2512++;
			}
			break;
		
		case 6:
			if (unk_0x83666F9FB8FEBD4B() > iLocal_2640)
			{
				if (func_203())
				{
					unk_0x7846F09C04C34C46();
					unk_0x9F4AA6F234E8A860(1);
					unk_0x191AD631BDDCBAAF(6.818f);
					if (unk_0x5D42322C7DB888D0(iLocal_2509, 0))
					{
						unk_0x5D713171D2C2E177(iLocal_2509, "EXL_2_abandoned_car", 1, joaat("dubsta"), 0);
					}
					unk_0x8E6D4B516B44DE88(0);
					iLocal_2879 = 0;
					iLocal_2512 = 11;
				}
			}
			break;
		
		case 10:
			if (unk_0x95CCECA3948CFE7B(iLocal_260) && unk_0x5D42322C7DB888D0(iLocal_260, 0))
			{
				unk_0x11166CD41CB90D67(iLocal_260);
			}
			if (!unk_0xD5DFCA69ACAA20E3() && !unk_0xE71FCE10773CF7B0())
			{
				unk_0x00F9843B9C06C2E9(500);
			}
			if ((unk_0xD5DFCA69ACAA20E3() && !unk_0x308528B5CF35F306()) || (unk_0x57CF017E37442A64() && unk_0xF490A05A3C6F92BC(1)))
			{
				iLocal_2512++;
			}
			break;
		
		case 11:
			if (unk_0x95CCECA3948CFE7B(iLocal_260) && unk_0x5D42322C7DB888D0(iLocal_260, 0))
			{
				unk_0x11166CD41CB90D67(iLocal_260);
			}
			if ((unk_0xD5DFCA69ACAA20E3() && !unk_0x308528B5CF35F306()) || (unk_0x57CF017E37442A64() && unk_0xF490A05A3C6F92BC(1)))
			{
				unk_0x5269022A1D4CB9CC(0);
				unk_0x2544549FDE4C3A7E(0, 0, 3000, 1, 0, 0);
				if (func_182() && !bLocal_2647)
				{
					unk_0xD7F5001BB6D13A64("CamPushInNeutral", 0, 0);
					unk_0xC4EE38A4CFF7544C(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				}
				unk_0x2D4CF77D729552C0();
				if (func_67(unk_0xC8B93D94F8954288(), 2570.543f, 4982.002f, 50.6795f, 1) < 15f && func_67(unk_0xC8B93D94F8954288(), 2570.543f, 4982.002f, 50.6795f, 1) > 1f)
				{
					unk_0xC76B5C68AB6DC7DF(unk_0xC8B93D94F8954288(), 2570.543f, 4982.002f, 50.6795f, 1, 0, 0, 1);
					unk_0x765E3FA65D011F03(unk_0xC8B93D94F8954288(), 98.21f);
				}
				else if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
				{
					unk_0x765E3FA65D011F03(unk_0xC8B93D94F8954288(), func_96(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 2458.223f, 4986.042f, 49.05241f, 1));
				}
				unk_0x8C67D2FDE360FBCA(0f);
				unk_0x0F9FDCEB321235AB(-6.3f, 1065353216);
				unk_0x191AD631BDDCBAAF(6.818f);
				unk_0x01BAA21528B22625(unk_0xC8B93D94F8954288(), 0, 0);
				unk_0x8F9EDB48A60C0C79();
				unk_0xDB9D78E5137EE7AD("CHI_2_FARMHOUSE_OVERVIEW");
				unk_0x7846F09C04C34C46();
				unk_0x9F4AA6F234E8A860(1);
				unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 1, 0);
				func_204(0);
				if (unk_0xD6B965E92DB098CE(unk_0xC8B93D94F8954288(), joaat("weapon_sniperrifle"), 0))
				{
					if (unk_0xCE69853977E75052(unk_0xC8B93D94F8954288(), joaat("weapon_sniperrifle")) < 15)
					{
						unk_0x0670BD0092A86444(unk_0xC8B93D94F8954288(), joaat("weapon_sniperrifle"), 50);
					}
				}
				func_186(0, 1, 1, 0);
				if (unk_0x95CCECA3948CFE7B(iLocal_2642))
				{
					unk_0x26B3B761603F5232(&iLocal_2642);
				}
				iLocal_2885 = func_18(4);
				if (iLocal_2885 != -1)
				{
					if (!unk_0x2DC9BA2299B45EA6(Local_755[iLocal_2885 /*33*/]))
					{
						unk_0x26B3B761603F5232(&(Local_755[iLocal_2885 /*33*/]));
					}
					if (unk_0x95CCECA3948CFE7B(Local_755[iLocal_2885 /*33*/].f_20))
					{
						unk_0xA278ECBE30D8AE4F(&(Local_755[iLocal_2885 /*33*/].f_20));
					}
					Local_1619[iLocal_2885 /*24*/].f_3 = 1;
					Local_755[iLocal_2885 /*33*/].f_5 = 0;
					Local_755[iLocal_2885 /*33*/].f_14 = 0;
					Local_755[iLocal_2885 /*33*/].f_3 = 2;
				}
				iLocal_2886 = func_18(5);
				if (iLocal_2886 != -1)
				{
					if (!unk_0x2DC9BA2299B45EA6(Local_755[iLocal_2886 /*33*/]))
					{
						unk_0x26B3B761603F5232(&(Local_755[iLocal_2886 /*33*/]));
					}
					if (unk_0x95CCECA3948CFE7B(Local_755[iLocal_2886 /*33*/].f_20))
					{
						unk_0xA278ECBE30D8AE4F(&(Local_755[iLocal_2886 /*33*/].f_20));
					}
					Local_1619[iLocal_2886 /*24*/].f_3 = 1;
					Local_755[iLocal_2886 /*33*/].f_5 = 0;
					Local_755[iLocal_2886 /*33*/].f_14 = 0;
					Local_755[iLocal_2886 /*33*/].f_3 = 2;
				}
				func_31(20, 0);
				if (!unk_0x2DC9BA2299B45EA6(iLocal_2643))
				{
					unk_0x26B3B761603F5232(&iLocal_2643);
				}
				if (!unk_0x2DC9BA2299B45EA6(iLocal_2644))
				{
					unk_0x26B3B761603F5232(&iLocal_2644);
				}
				if (func_68(iLocal_2509))
				{
					unk_0x95F5F15D238A7F1C(&iLocal_2509);
				}
				if (unk_0x95CCECA3948CFE7B(iLocal_2682))
				{
					unk_0xA278ECBE30D8AE4F(&iLocal_2682);
				}
				func_201();
				iLocal_751 = 0;
				func_27();
				unk_0x4BBD72565A0AF033(joaat("prop_phone_ing"));
				unk_0x4BBD72565A0AF033(joaat("dubsta"));
				iVar7 = 0;
				while (iVar7 < Local_755.f_0)
				{
					if (!unk_0x2DC9BA2299B45EA6(Local_755[iVar7 /*33*/]))
					{
						unk_0x63E00E88AE3C86A3(Local_755[iVar7 /*33*/], 0);
					}
					iVar7++;
				}
				unk_0x8C67D2FDE360FBCA(0f);
				unk_0x0F9FDCEB321235AB(-6.3f, 1065353216);
				if (unk_0x95CCECA3948CFE7B(iLocal_260))
				{
					if (unk_0x5D42322C7DB888D0(iLocal_260, 0))
					{
						unk_0xB7A2078CD1C9A82F(iLocal_260, 0);
						if (unk_0xE924C2C283992918(unk_0x6D5BB810CC209E15(iLocal_260)))
						{
							unk_0xE6D484EB3F0B2B5A(iLocal_260, Local_752);
							unk_0x6D9DB313D50E9A0D(unk_0xC8B93D94F8954288(), iLocal_260, -1);
						}
						unk_0x57892FEA93664769(iLocal_260, 1, 1, 0);
						if (unk_0xAF40E7422A6D9D80(unk_0x6D5BB810CC209E15(iLocal_260)))
						{
							unk_0x68931E8B45B3CA92(iLocal_260, 0f, 0f, unk_0x59DD203239FBDCAD(iLocal_260), 2, 1);
							unk_0x0C7C7F68B472963C(iLocal_260);
							unk_0xE6D484EB3F0B2B5A(iLocal_260, 1f, 1f, 1f);
							unk_0x6D9DB313D50E9A0D(unk_0xC8B93D94F8954288(), iLocal_260, -1);
						}
						if (iLocal_2883 == 0)
						{
							unk_0x6D9DB313D50E9A0D(unk_0xC8B93D94F8954288(), iLocal_260, -1);
						}
						unk_0x872B541D7953A19B(iLocal_260, 1, 0);
					}
				}
				unk_0x872B541D7953A19B(unk_0xC8B93D94F8954288(), 1, 0);
				unk_0xAB91953B6FAD60F6(unk_0xA34E7C2A5118D638(), 1);
				unk_0x1B8A00409F0FAA8E();
				if (unk_0xD5DFCA69ACAA20E3())
				{
					unk_0x31E6EB2040318451(1000);
				}
				unk_0xFC1F2AE3FDE7BB5D(1);
				func_176(11);
			}
			break;
	}
}

void func_201()
{
	int iVar0;
	
	if (unk_0x95CCECA3948CFE7B(iLocal_2507))
	{
		unk_0x95F5F15D238A7F1C(&iLocal_2507);
	}
	iVar0 = 0;
	while (iVar0 < Local_755.f_0)
	{
		if (unk_0x95CCECA3948CFE7B(Local_755[iVar0 /*33*/]))
		{
			unk_0x26B3B761603F5232(&(Local_755[iVar0 /*33*/]));
		}
		if (unk_0x95CCECA3948CFE7B(Local_755[iVar0 /*33*/].f_20))
		{
			unk_0xA278ECBE30D8AE4F(&(Local_755[iVar0 /*33*/].f_20));
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
	if (unk_0x06A2030124FC73B9(uLocal_2650))
	{
		unk_0x7412597305E608CE(uLocal_2650);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_2651)
	{
		if (unk_0x06A2030124FC73B9(iLocal_2651[iVar0]))
		{
			unk_0x7412597305E608CE(iLocal_2651[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_2657)
	{
		if (unk_0x95CCECA3948CFE7B(iLocal_2657[iVar0]))
		{
			unk_0xA278ECBE30D8AE4F(&(iLocal_2657[iVar0]));
		}
		iVar0++;
	}
	func_202(&Local_1619, &uLocal_2708, cLocal_2338, 12f, 2482.197f, 4975.367f, 44.7288f, 121f, 1);
}

void func_202(var uParam0, var uParam1, char* sParam2, float fParam3, struct<3> Param4, float fParam7, int iParam8)
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
	unk_0x8750785FAA03AC65(joaat("DEFAULT"), 31);
	iLocal_52 = 0;
}

bool func_203()
{
	bool bVar0;
	
	bVar0 = unk_0xA65C064741F2CA67();
	if (!Global_69316)
	{
		if (!bVar0)
		{
			Global_69316 = 1;
		}
	}
	return bVar0;
}

void func_204(bool bParam0)
{
	if (bParam0)
	{
		func_208();
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			unk_0x59A0729D503ED758(&Global_2284, 16);
		}
		Global_14413.f_1 = 1;
		if (func_207(0))
		{
			func_205(0);
		}
	}
	else if (Global_14413.f_1 == 1)
	{
		if (!Global_14413.f_1 == 0)
		{
			Global_14413.f_1 = 3;
		}
	}
}

void func_205(int iParam0)
{
	if (Global_14571)
	{
		func_206(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0x59A0729D503ED758(&Global_2284, 16);
	}
	if (unk_0x44E93B894936152F())
	{
		unk_0xB518E9C8553B1D2B(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x59A0729D503ED758(&Global_2283, 30);
	}
	else
	{
		unk_0x77621132305B133B(&Global_2283, 30);
	}
	if (!func_40())
	{
		Global_14413.f_1 = 3;
	}
}

void func_206(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_207(0))
		{
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0xCE4D902766AE0E55(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0xDA89C6AF8C0D7C39(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0xDA89C6AF8C0D7C39(Global_14350);
		}
		else
		{
			unk_0xDA89C6AF8C0D7C39(Global_14341);
		}
	}
}

int func_207(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xDCC86F723E82125E(Global_2283, 14))
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
	if (unk_0xCBC8FFE55DC722B5(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_208()
{
	if (Global_14413.f_1 == 9 || Global_14413.f_1 == 10)
	{
		Global_15765 = 0;
		Global_15761 = 1;
	}
}

void func_209(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xDCC86F723E82125E(uParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_213(uParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x6B4865E08E90ACC5(uParam0->f_1[iVar0]))
		{
			unk_0x5356E82C1E5E0C44(&(uParam0->f_1[iVar0]));
		}
		func_212(iVar0, uParam0);
		func_211(iVar0, uParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			unk_0x77621132305B133B(&(uParam0->f_13), iVar0);
			unk_0x77621132305B133B(&(uParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (unk_0x6B4865E08E90ACC5(*uParam0))
	{
		unk_0x5356E82C1E5E0C44(uParam0);
	}
	uParam0->f_6 = 0;
	uParam0->f_12 = 0;
	uParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x2DC9BA2299B45EA6(uParam0->f_17[iVar0]))
		{
			unk_0x8EB9A60FB4C37A34(uParam0->f_17[iVar0], 1);
			unk_0x4D2A04F490FBAE07(uParam0->f_17[iVar0], 1);
			if (bParam2)
			{
				unk_0xC778754E36F3FFD6(uParam0->f_17[iVar0], 32, 1);
				unk_0xC778754E36F3FFD6(uParam0->f_17[iVar0], 305, 0);
			}
			unk_0xC778754E36F3FFD6(uParam0->f_17[iVar0], 268, 0);
			if (bParam1)
			{
				if (unk_0xA863CAB6B7856A4B(uParam0->f_17[iVar0], func_210()) && uParam0->f_17[iVar0] != unk_0xC8B93D94F8954288())
				{
					unk_0x5980997C9ACA0572(uParam0->f_17[iVar0]);
				}
			}
			if (!unk_0xDCC86F723E82125E(uParam0->f_13, 29))
			{
				unk_0xD5BE34D3F0B9AC0A(uParam0->f_17[iVar0], 0, -1, 0);
			}
			uParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		unk_0x8EB9A60FB4C37A34(unk_0xC8B93D94F8954288(), 1);
		unk_0x4D2A04F490FBAE07(unk_0xC8B93D94F8954288(), 1);
	}
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		if (bParam2)
		{
			unk_0xC778754E36F3FFD6(unk_0xC8B93D94F8954288(), 32, 1);
		}
	}
	uParam0->f_21 = 0;
}

var func_210()
{
	return unk_0x471BC3ECFB439FD6(unk_0x1A96BAEAC664567A());
}

void func_211(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x77621132305B133B(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x77621132305B133B(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x77621132305B133B(&(uParam1->f_13), 19);
			break;
	}
}

void func_212(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x77621132305B133B(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x77621132305B133B(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x77621132305B133B(&(uParam1->f_13), 16);
			break;
	}
}

void func_213(var uParam0)
{
	if (unk_0x6B4865E08E90ACC5(uParam0->f_5))
	{
		unk_0x5356E82C1E5E0C44(&(uParam0->f_5));
	}
}

float func_214(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_215()
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
	func_196(3, 0, 0, 1, 0);
	if ((func_67(unk_0xC8B93D94F8954288(), 2458.223f, 4986.042f, 49.05241f, 0) < 107.9f || unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 2374.441f, 4930.564f, 34.73784f, 2478.099f, 5077.488f, 60.63246f, 185f, 0, 0, 0)) || unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 2396.726f, 4887.434f, 33.85329f, 2510.54f, 5003.356f, 58.01184f, 158.25f, 0, 0, 0))
	{
		if (unk_0x6B4865E08E90ACC5(Local_2683.f_5))
		{
			unk_0x706ABF1139F36482(Local_2683.f_6, 0);
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
				func_258(5, -20);
				unk_0xFD62177C7242216E(0f);
				unk_0x60B57BC5E51D2074(0);
				iLocal_2512++;
				break;
			
			case 1:
				if (func_218(&Local_2683, 2608.151f, 4949.754f, 39.4f, 9f, 9f, 2f, 1, "FRMCHSE_1", 1, 1, -1))
				{
					unk_0xD810132681A9B83C(6f, 6f, 3);
					iLocal_2512++;
					func_209(&Local_2683, 1, 0);
					func_31(3, 1);
					if (unk_0xB5F5536784683C33("CHI_2_DRIVE_TO_FARMHOUSE"))
					{
						unk_0xDB9D78E5137EE7AD("CHI_2_DRIVE_TO_FARMHOUSE");
					}
					if (unk_0xB5F5536784683C33("CHI_2_DRIVE_ROCK_RADIO"))
					{
						unk_0xDB9D78E5137EE7AD("CHI_2_DRIVE_ROCK_RADIO");
					}
				}
				break;
			
			case 2:
				if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
				{
					iVar0 = unk_0xBCEA8C5A6B3F7D71(unk_0xC8B93D94F8954288());
					if (func_217(iVar0, 10f, 2, 1056964608, 0, 1, 0))
					{
						if (func_216(5) > 2)
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
				if (func_218(&Local_2683, 2573.63f, 4983.677f, 50.6978f, 12f, 12f, 2f, 0, "FRMCHSE_5", 1, 1, -1))
				{
					if (unk_0xB5F5536784683C33("CHI_2_DRIVE_ROCK_RADIO"))
					{
						unk_0xDB9D78E5137EE7AD("CHI_2_DRIVE_ROCK_RADIO");
					}
					unk_0xD810132681A9B83C(5f, 10f, 4);
					func_176(11);
				}
				if (unk_0x6B4865E08E90ACC5(Local_2683.f_5))
				{
					unk_0x706ABF1139F36482(Local_2683.f_6, 0);
				}
				break;
			}
	}
}

int func_216(int iParam0)
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

int func_217(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x2BE3C7FA4FCCA784(0, 71, 1);
	unk_0x2BE3C7FA4FCCA784(0, 72, 1);
	unk_0x2BE3C7FA4FCCA784(0, 76, 1);
	unk_0x2BE3C7FA4FCCA784(0, 73, 1);
	unk_0x2BE3C7FA4FCCA784(0, 59, 1);
	unk_0x2BE3C7FA4FCCA784(0, 60, 1);
	if (bParam5)
	{
		unk_0x2BE3C7FA4FCCA784(0, 75, 1);
	}
	unk_0x2BE3C7FA4FCCA784(0, 80, 1);
	if (!bParam6)
	{
		unk_0x2BE3C7FA4FCCA784(0, 69, 1);
		unk_0x2BE3C7FA4FCCA784(0, 70, 1);
		unk_0x2BE3C7FA4FCCA784(0, 68, 1);
	}
	unk_0x2BE3C7FA4FCCA784(0, 74, 1);
	unk_0x2BE3C7FA4FCCA784(0, 86, 1);
	unk_0x2BE3C7FA4FCCA784(0, 81, 1);
	unk_0x2BE3C7FA4FCCA784(0, 82, 1);
	unk_0x2BE3C7FA4FCCA784(0, 138, 1);
	unk_0x2BE3C7FA4FCCA784(0, 136, 1);
	unk_0x2BE3C7FA4FCCA784(0, 114, 1);
	unk_0x2BE3C7FA4FCCA784(0, 107, 1);
	unk_0x2BE3C7FA4FCCA784(0, 110, 1);
	unk_0x2BE3C7FA4FCCA784(0, 89, 1);
	unk_0x2BE3C7FA4FCCA784(0, 89, 1);
	unk_0x2BE3C7FA4FCCA784(0, 87, 1);
	unk_0x2BE3C7FA4FCCA784(0, 88, 1);
	unk_0x2BE3C7FA4FCCA784(0, 113, 1);
	unk_0x2BE3C7FA4FCCA784(0, 115, 1);
	unk_0x2BE3C7FA4FCCA784(0, 116, 1);
	unk_0x2BE3C7FA4FCCA784(0, 117, 1);
	unk_0x2BE3C7FA4FCCA784(0, 118, 1);
	unk_0x2BE3C7FA4FCCA784(0, 119, 1);
	unk_0x2BE3C7FA4FCCA784(0, 131, 1);
	unk_0x2BE3C7FA4FCCA784(0, 132, 1);
	unk_0x2BE3C7FA4FCCA784(0, 123, 1);
	unk_0x2BE3C7FA4FCCA784(0, 126, 1);
	unk_0x2BE3C7FA4FCCA784(0, 129, 1);
	unk_0x2BE3C7FA4FCCA784(0, 130, 1);
	unk_0x2BE3C7FA4FCCA784(0, 133, 1);
	unk_0x2BE3C7FA4FCCA784(0, 134, 1);
	unk_0xFDE2F5F10CE86C82();
	if ((unk_0x693EBB4F13506457() - Global_29) > 500)
	{
		unk_0x5C384485B80ABDBC(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x693EBB4F13506457();
	if (!unk_0xB6900B8CB0ABBD2B(iParam0))
	{
		if (unk_0xA3C5926D6E5619AE(unk_0x9BA9222C7124CA04(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

bool func_218(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, char* sParam8, bool bParam9, bool bParam10, int iParam11)
{
	return func_219(uParam0, Param1, Param4, func_257(), func_257(), iParam7, 1, 0, 0, 0, 0, sParam8, func_167(), func_167(), func_167(), func_167(), func_167(), 0, bParam9, func_167(), 0, 0, bParam10, iParam11, 0, 0, 0, 1, 1065353216);
}

int func_219(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, bool bParam25, bool bParam26, char* sParam27, bool bParam28, int iParam29, bool bParam30, int iParam31, int iParam32, int iParam33, int iParam34, bool bParam35, float fParam36)
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
	func_256(uParam0);
	func_255(uParam0);
	func_254();
	if (func_238(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, uParam0->f_8, bParam25, iParam18, 0, 0, iParam32, iParam33, iParam34, iParam14, bParam26))
	{
		func_237(sParam20);
		func_237(sParam21);
		func_237(sParam22);
		func_237(sParam23);
		if (unk_0xB66DD474AA9E764E())
		{
			bVar1 = false;
			if (unk_0x5D42322C7DB888D0(iParam18, 0))
			{
				if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iParam18, 0))
				{
					unk_0x59A0729D503ED758(&(uParam0->f_13), 3);
					if (!unk_0xDCC86F723E82125E(uParam0->f_13, 9))
					{
						unk_0x77621132305B133B(&(uParam0->f_13), 4);
					}
					if (unk_0xDCC86F723E82125E(uParam0->f_13, 23))
					{
						unk_0x77621132305B133B(&(uParam0->f_13), 23);
					}
					unk_0x59A0729D503ED758(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5)
			{
				if (func_235(uParam0, iParam29))
				{
					unk_0x59A0729D503ED758(&(uParam0->f_13), 3);
					if (!unk_0xDCC86F723E82125E(uParam0->f_13, 9))
					{
						unk_0x77621132305B133B(&(uParam0->f_13), 4);
					}
					unk_0x59A0729D503ED758(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_237(sParam24);
				func_237(sParam27);
				func_237("MORE_SEATS");
				if (bParam26 && unk_0x719D80C8C2BB7B0A(unk_0xA34E7C2A5118D638(), 0))
				{
					if (unk_0x6B4865E08E90ACC5(uParam0->f_5))
					{
						unk_0x5356E82C1E5E0C44(&(uParam0->f_5));
						func_237(sParam19);
					}
					if (unk_0x6B4865E08E90ACC5(*uParam0))
					{
						unk_0x5356E82C1E5E0C44(uParam0);
					}
					if ((!func_232(uParam0, 1) && !func_231(uParam0)) && !unk_0xDCC86F723E82125E(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_230(uParam0, "LOSE_WANTED", 0);
							if (!unk_0x2DC9BA2299B45EA6(uParam0->f_17[0]))
							{
								func_228(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x59A0729D503ED758(&(uParam0->f_13), 0);
						unk_0x77621132305B133B(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0xDCC86F723E82125E(uParam0->f_13, 0))
					{
						func_237("LOSE_WANTED");
						unk_0x77621132305B133B(&(uParam0->f_13), 0);
						unk_0x59A0729D503ED758(&(uParam0->f_13), 1);
					}
					if (unk_0xDCC86F723E82125E(uParam0->f_13, 1))
					{
						if (!func_232(uParam0, 1))
						{
							if (!unk_0x2DC9BA2299B45EA6(uParam0->f_17[0]))
							{
								func_228(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x77621132305B133B(&(uParam0->f_13), 1);
						}
					}
					if (!unk_0x6B4865E08E90ACC5(uParam0->f_5))
					{
						if (unk_0x6B4865E08E90ACC5(*uParam0))
						{
							unk_0x5356E82C1E5E0C44(uParam0);
						}
						uParam0->f_5 = func_5(Var3, 0);
						if (!iParam31 == -1)
						{
							unk_0x31FDDAFCCFEFA478(uParam0->f_5, iParam31);
						}
						if (bParam35)
						{
							func_227(uParam0->f_5, uParam0);
						}
					}
					else if (!func_226(Var3, unk_0xEACB9E183BFE83FD(uParam0->f_5), 0.1f, 0))
					{
						unk_0xC569AF72BA6007D8(uParam0->f_5, Var3);
						if (bParam35)
						{
							func_227(uParam0->f_5, uParam0);
						}
					}
					if (!func_232(uParam0, 2))
					{
						if (!unk_0xDCC86F723E82125E(uParam0->f_13, 2))
						{
							func_230(uParam0, sParam19, 0);
							unk_0x59A0729D503ED758(&(uParam0->f_13), 2);
						}
					}
					if (iParam14 == 4 || iParam14 == 5)
					{
						if (unk_0xDCC86F723E82125E(uParam0->f_13, 13))
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
						unk_0xA0C23498D8E0BB93(unk_0xC8B93D94F8954288(), Param1, Param4, iParam13, iVar6, iVar7);
						if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), Param7, Param10, fParam36, 0, iVar6, iVar7))
						{
							bVar1 = true;
						}
					}
					else if (unk_0xA0C23498D8E0BB93(unk_0xC8B93D94F8954288(), Param1, Param4, iParam13, iVar6, iVar7))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!unk_0x2DC9BA2299B45EA6(uParam0->f_17[iVar2]))
							{
								if (iParam14 == 4 || iParam14 == 5)
								{
									iVar0 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
									if (!unk_0x0C7EC810080F0459(uParam0->f_17[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam18 != 0)
								{
									if (!unk_0x0C7EC810080F0459(uParam0->f_17[iVar2], iParam18, 0))
									{
										bVar1 = false;
									}
								}
								else if (!unk_0xA863CAB6B7856A4B(uParam0->f_17[iVar2], func_210()) || !func_224(uParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_221(uParam0))
							{
								func_237(sParam19);
								func_237(sParam24);
								func_237(sParam20);
								func_237(sParam21);
								func_237(sParam22);
								func_237(sParam23);
								func_237("LOSE_WANTED");
								func_237("MORE_SEATS");
								func_237(sParam27);
								func_209(uParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (unk_0x95CCECA3948CFE7B(iParam18))
			{
				if ((bParam26 && unk_0x719D80C8C2BB7B0A(unk_0xA34E7C2A5118D638(), 0)) && (!unk_0xDCC86F723E82125E(uParam0->f_13, 9) && !unk_0xDCC86F723E82125E(uParam0->f_13, 22)))
				{
					func_237(sParam24);
					func_237(sParam27);
					if (unk_0x6B4865E08E90ACC5(uParam0->f_5) || unk_0x6B4865E08E90ACC5(*uParam0))
					{
						unk_0x5356E82C1E5E0C44(&(uParam0->f_5));
						unk_0x5356E82C1E5E0C44(uParam0);
						func_237(sParam19);
					}
					if ((!func_232(uParam0, 1) && !func_231(uParam0)) && !unk_0xDCC86F723E82125E(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_230(uParam0, "LOSE_WANTED", 0);
							if (!unk_0x2DC9BA2299B45EA6(uParam0->f_17[0]))
							{
								func_228(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x59A0729D503ED758(&(uParam0->f_13), 0);
						unk_0x77621132305B133B(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0xDCC86F723E82125E(uParam0->f_13, 0))
					{
						func_237("LOSE_WANTED");
						unk_0x77621132305B133B(&(uParam0->f_13), 0);
						unk_0x59A0729D503ED758(&(uParam0->f_13), 1);
					}
					if (unk_0xDCC86F723E82125E(uParam0->f_13, 1))
					{
						if (!func_232(uParam0, 1))
						{
							if (!unk_0x2DC9BA2299B45EA6(uParam0->f_17[0]))
							{
								func_228(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x77621132305B133B(&(uParam0->f_13), 1);
						}
					}
					if (unk_0x5D42322C7DB888D0(iParam18, 0))
					{
						if (!unk_0x6B4865E08E90ACC5(*uParam0))
						{
							if (unk_0x6B4865E08E90ACC5(uParam0->f_5))
							{
								unk_0x5356E82C1E5E0C44(&(uParam0->f_5));
								func_237(sParam19);
							}
							*uParam0 = func_220(iParam18, 0, 0);
							unk_0xB8D190382B0188FE(*uParam0, 2);
							if (!unk_0xDCC86F723E82125E(uParam0->f_13, 4))
							{
								func_227(*uParam0, uParam0);
							}
						}
						if (!func_232(uParam0, 2))
						{
							if (!unk_0xDCC86F723E82125E(uParam0->f_13, 3))
							{
								func_230(uParam0, sParam24, 0);
								unk_0x59A0729D503ED758(&(uParam0->f_13), 3);
								unk_0x77621132305B133B(&(uParam0->f_13), 4);
							}
							else if (unk_0xDCC86F723E82125E(uParam0->f_13, 9))
							{
								if (!unk_0x544AEDB4A15228FF(sParam27))
								{
									if (!unk_0xDCC86F723E82125E(uParam0->f_13, 4))
									{
										func_230(uParam0, sParam27, 0);
										unk_0x59A0729D503ED758(&(uParam0->f_13), 4);
									}
								}
								else if (!unk_0xDCC86F723E82125E(uParam0->f_13, 4))
								{
									func_230(uParam0, sParam24, 0);
									unk_0x59A0729D503ED758(&(uParam0->f_13), 4);
								}
								if (!unk_0xDCC86F723E82125E(uParam0->f_13, 23))
								{
									if (!unk_0x2DC9BA2299B45EA6(uParam0->f_17[0]))
									{
										func_228(uParam0->f_17[0], "GET_IN_CAR", 3);
									}
									unk_0x59A0729D503ED758(&(uParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0x6B4865E08E90ACC5(uParam0->f_5))
				{
					unk_0x5356E82C1E5E0C44(&(uParam0->f_5));
					func_237(sParam19);
				}
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!func_232(uParam0, 2))
						{
							if (unk_0x7F13E3D2383CF15F(unk_0xC8B93D94F8954288()))
							{
								if (!unk_0xDCC86F723E82125E(uParam0->f_13, 13))
								{
									iVar8 = 0;
									iVar9 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!unk_0x2DC9BA2299B45EA6(uParam0->f_17[iVar2]))
										{
											iVar8++;
										}
										iVar2++;
									}
									iVar9 = unk_0x531444754C426278(0, iVar8);
									if (!unk_0x2DC9BA2299B45EA6(uParam0->f_17[iVar9]))
									{
										func_228(uParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_230(uParam0, "MORE_SEATS", 0);
									unk_0x59A0729D503ED758(&(uParam0->f_13), 13);
								}
							}
							else if (!unk_0xDCC86F723E82125E(uParam0->f_13, 3))
							{
								func_230(uParam0, sParam24, 0);
								unk_0x59A0729D503ED758(&(uParam0->f_13), 3);
								unk_0x77621132305B133B(&(uParam0->f_13), 4);
							}
							else if (!unk_0xDCC86F723E82125E(uParam0->f_13, 4))
							{
								if (unk_0xDCC86F723E82125E(uParam0->f_13, 9))
								{
									func_230(uParam0, sParam27, 0);
									unk_0x59A0729D503ED758(&(uParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_232(uParam0, 2))
					{
						if (!unk_0xDCC86F723E82125E(uParam0->f_13, 3))
						{
							func_230(uParam0, sParam24, 0);
							unk_0x59A0729D503ED758(&(uParam0->f_13), 3);
							unk_0x77621132305B133B(&(uParam0->f_13), 4);
						}
						else if (unk_0xDCC86F723E82125E(uParam0->f_13, 9))
						{
							if (!unk_0x544AEDB4A15228FF(sParam27))
							{
								if (!unk_0xDCC86F723E82125E(uParam0->f_13, 4))
								{
									func_230(uParam0, sParam27, 0);
									unk_0x59A0729D503ED758(&(uParam0->f_13), 4);
								}
							}
							else if (!unk_0xDCC86F723E82125E(uParam0->f_13, 4))
							{
								func_230(uParam0, sParam24, 0);
								unk_0x59A0729D503ED758(&(uParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (unk_0xDCC86F723E82125E(uParam0->f_13, 0))
		{
			unk_0x77621132305B133B(&(uParam0->f_13), 0);
		}
		func_237(sParam19);
		func_237(sParam24);
		func_237(sParam27);
		func_237(sParam24);
		func_237("LOSE_WANTED");
		if (unk_0x6B4865E08E90ACC5(uParam0->f_5))
		{
			unk_0x5356E82C1E5E0C44(&(uParam0->f_5));
		}
		if (unk_0x6B4865E08E90ACC5(*uParam0))
		{
			unk_0x5356E82C1E5E0C44(uParam0);
		}
	}
	unk_0x77621132305B133B(&(uParam0->f_13), 11);
	unk_0x77621132305B133B(&(uParam0->f_13), 12);
	return 0;
}

int func_220(int iParam0, bool bParam1, bool bParam2)
{
	return func_14(iParam0, !bParam1, bParam2);
}

int func_221(var uParam0)
{
	if (unk_0xDCC86F723E82125E(uParam0->f_13, 12))
	{
		if (func_223(unk_0xC8B93D94F8954288()))
		{
			if (func_222(1, 0, 1) || unk_0xDCC86F723E82125E(uParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_222(1, 0, 1) || unk_0xDCC86F723E82125E(uParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_222(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x6DAFE4284D2E6AD0())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		if (!unk_0x7F13E3D2383CF15F(unk_0xC8B93D94F8954288()))
		{
			return 0;
		}
		iVar0 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
		if (bParam0)
		{
			if (unk_0xB6900B8CB0ABBD2B(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xB6900B8CB0ABBD2B(iVar0))
			{
				if (unk_0xC0ADAF0814175B68(iVar0, -1) != unk_0xC8B93D94F8954288())
				{
					return 0;
				}
			}
		}
		if (!unk_0xB6900B8CB0ABBD2B(iVar0))
		{
			if (unk_0x3E4CBCCFB5F133F1(iVar0) < 0.95f || unk_0x3E4CBCCFB5F133F1(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x56546FAE2D5E944B(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	if (!unk_0xBF43288C8D773F6A(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	return 1;
}

int func_223(int iParam0)
{
	float fVar0;
	
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		fVar0 = unk_0x9BA9222C7124CA04(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_224(int iParam0, int iParam1)
{
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		if (unk_0x7F13E3D2383CF15F(unk_0xC8B93D94F8954288()) && iParam1)
		{
			if (func_225(unk_0xC8B93D94F8954288(), iParam0))
			{
				unk_0x1030334E811628C4(func_210(), 50f);
				return 1;
			}
		}
		else if (unk_0xA863CAB6B7856A4B(iParam0, func_210()))
		{
			unk_0x1030334E811628C4(func_210(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_225(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		if (unk_0x7F13E3D2383CF15F(iParam0))
		{
			iVar0 = unk_0x275BEBE583A163B5(iParam0, 0);
			if (unk_0x5D42322C7DB888D0(iVar0, 0))
			{
				if (!unk_0x2DC9BA2299B45EA6(iParam1))
				{
					if (unk_0x465DC424E3211BBE(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_226(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0xA3C5926D6E5619AE((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0xA3C5926D6E5619AE((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0xA3C5926D6E5619AE((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xA3C5926D6E5619AE((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xA3C5926D6E5619AE((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_227(var uParam0, var uParam1)
{
	if (unk_0x6B4865E08E90ACC5(uParam0))
	{
		if (unk_0x6B4865E08E90ACC5(uParam1->f_6))
		{
			unk_0x706ABF1139F36482(uParam1->f_6, 0);
		}
		unk_0x3BFC6ABA90325F64(0);
		unk_0x6ECF8FAD9A800368();
		uParam1->f_6 = uParam0;
		unk_0x706ABF1139F36482(uParam0, 1);
	}
}

void func_228(var uParam0, char* sParam1, int iParam2)
{
	unk_0x7ABE44FB19CAE2E1(uParam0, sParam1, func_229(iParam2), 1);
}

int func_229(int iParam0)
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

void func_230(var uParam0, char* sParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!unk_0x544AEDB4A15228FF(sParam1))
		{
			if (!unk_0xF8D041B05C3D1FD4(sParam1, ""))
			{
				func_150(sParam1, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x693EBB4F13506457();
}

int func_231(var uParam0)
{
	if (!unk_0x2DC9BA2299B45EA6(uParam0->f_16))
	{
		if (unk_0x0D211C48FB8578B7(uParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_232(var uParam0, int iParam1)
{
	if (iParam1 != 1 || unk_0xA77673910115074B())
	{
		if (unk_0xA3858ADDDBC3CB71())
		{
			return 1;
		}
		if (func_234(uParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0xA77673910115074B())
	{
		if (func_59() && !func_233())
		{
			return 1;
		}
	}
	return 0;
}

int func_233()
{
	if (Global_16723 == 1)
	{
		return 1;
	}
	return 0;
}

int func_234(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x693EBB4F13506457();
	iVar0 = (iVar1 - uParam0->f_10);
	if (iVar0 < 35)
	{
		return 1;
	}
	return 0;
}

int func_235(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		iVar0 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
		if (func_236(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_236(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (unk_0x95CCECA3948CFE7B(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0x7EFD275DF858497F(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!unk_0x29B4599EE2B11907(iParam0, 1))
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
				if (!unk_0x29B4599EE2B11907(iParam0, 1))
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

void func_237(char* sParam0)
{
	if (!unk_0x544AEDB4A15228FF(sParam0))
	{
		unk_0x74F83E6AF43012A7(sParam0);
	}
}

int func_238(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, var uParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)
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
		if (!unk_0x2DC9BA2299B45EA6(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (unk_0x719D80C8C2BB7B0A(unk_0xA34E7C2A5118D638(), 0))
		{
			if (!unk_0xDCC86F723E82125E(uParam0->f_13, 29) && !unk_0xDCC86F723E82125E(uParam0->f_13, 28))
			{
				if (!unk_0x2DC9BA2299B45EA6(uParam0->f_17[iVar0]))
				{
					unk_0xD5BE34D3F0B9AC0A(uParam0->f_17[iVar0], 1, -1, 0);
				}
				if (iVar0 == 2)
				{
					unk_0x59A0729D503ED758(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!unk_0xDCC86F723E82125E(uParam0->f_13, 29) && unk_0xDCC86F723E82125E(uParam0->f_13, 28))
		{
			if (!unk_0x2DC9BA2299B45EA6(uParam0->f_17[iVar0]))
			{
				unk_0xD5BE34D3F0B9AC0A(uParam0->f_17[iVar0], 0, -1, 0);
			}
			if (iVar0 == 2)
			{
				unk_0x77621132305B133B(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (unk_0xDCC86F723E82125E(uParam0->f_13, 26))
	{
		bVar23 = false;
		if (!unk_0x95CCECA3948CFE7B(uParam0->f_21))
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
			iVar24 = unk_0xFD4D1267977B7832(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 50f, 0, iVar25);
			if (unk_0x5D42322C7DB888D0(iVar24, 0))
			{
				uParam0->f_21 = iVar24;
			}
		}
		if (unk_0x5D42322C7DB888D0(uParam0->f_21, 0))
		{
			if (unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(uParam0->f_21, 1)) < 400f)
			{
				if (!unk_0x7F13E3D2383CF15F(unk_0xC8B93D94F8954288()))
				{
					if (!unk_0x719D80C8C2BB7B0A(unk_0xA34E7C2A5118D638(), 0) || !bParam17)
					{
						if (func_236(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!unk_0x2DC9BA2299B45EA6(uParam0->f_17[iVar0]))
								{
									unk_0x9EEBFF7C6634D175(uParam0->f_17[iVar0], 1f);
									if (unk_0xA863CAB6B7856A4B(uParam0->f_17[iVar0], func_210()))
									{
										unk_0x5980997C9ACA0572(uParam0->f_17[iVar0]);
									}
									if (unk_0x090C65D5190A249D(uParam0->f_17[iVar0], -1794415470) == 7 && !func_253(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!unk_0x770AAB67BDD9C729(uParam0->f_17[iVar0]) && !unk_0x5B4D7A11EBC299CE(uParam0->f_17[iVar0]))
										{
											unk_0xAAD662D7E0D59F4C(uParam0->f_17[iVar0], 1);
											unk_0x9CEFBE395E148A32(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
											unk_0x64CD20398FAC9617(uParam0->f_17[iVar0], iVar0);
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
			unk_0x77621132305B133B(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!unk_0x2DC9BA2299B45EA6(uParam0->f_17[iVar0]))
				{
					if (!unk_0xC0AE63CA97F3FF6A(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						unk_0x5124C5FA52D2AF3E(uParam0->f_17[iVar0]);
					}
					if (!unk_0xA863CAB6B7856A4B(uParam0->f_17[iVar0], func_210()))
					{
						if (func_251(uParam0, uParam0->f_17[iVar0], uParam8, 1))
						{
							unk_0x13B202E60E04C733(uParam0->f_17[iVar0], func_210());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!unk_0xDCC86F723E82125E(uParam0->f_13, 26))
	{
		if ((!func_250(uParam0) && unk_0x7F13E3D2383CF15F(unk_0xC8B93D94F8954288())) && !unk_0x95CCECA3948CFE7B(iParam10))
		{
			iVar13 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
			if (unk_0x5D42322C7DB888D0(iVar13, 0))
			{
				if (!unk_0xDCC86F723E82125E(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_232(uParam0, 2))
					{
						iVar26 = 0;
						iVar27 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							if (!unk_0x2DC9BA2299B45EA6(uParam0->f_17[iVar0]))
							{
								iVar26++;
							}
							iVar0++;
						}
						iVar27 = unk_0x531444754C426278(0, iVar26);
						if (!unk_0x2DC9BA2299B45EA6(uParam0->f_17[iVar27]))
						{
							func_228(uParam0->f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_230(uParam0, "MORE_SEATS", 0);
						unk_0x59A0729D503ED758(&(uParam0->f_13), 13);
					}
				}
				bVar12 = true;
			}
		}
		else
		{
			bVar12 = false;
			unk_0x77621132305B133B(&(uParam0->f_13), 13);
			func_237("MORE_SEATS");
		}
		if (!unk_0x95CCECA3948CFE7B(iParam10))
		{
			if ((!unk_0x2DC9BA2299B45EA6(uParam0->f_17[0]) || !unk_0x2DC9BA2299B45EA6(uParam0->f_17[1])) || !unk_0x2DC9BA2299B45EA6(uParam0->f_17[2]))
			{
				if (!unk_0xDCC86F723E82125E(uParam0->f_13, 31))
				{
					if (unk_0x7F13E3D2383CF15F(unk_0xC8B93D94F8954288()) && !func_232(uParam0, 2))
					{
						iVar13 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
						if (func_249(iVar13, uParam0))
						{
							func_230(uParam0, "CMN_VEHSUIT", 0);
							unk_0x59A0729D503ED758(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0x7F13E3D2383CF15F(unk_0xC8B93D94F8954288()))
				{
					unk_0x77621132305B133B(&(uParam0->f_13), 31);
					func_237("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0x5D42322C7DB888D0(iParam10, 0))
		{
			if (unk_0x465DC424E3211BBE(unk_0xC8B93D94F8954288(), iParam10))
			{
				if (unk_0x8D9008B8900A28D0(0, 75))
				{
					unk_0x59A0729D503ED758(&(uParam0->f_13), 21);
				}
			}
			else if (unk_0xDCC86F723E82125E(uParam0->f_13, 21))
			{
				unk_0x77621132305B133B(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x95CCECA3948CFE7B(uParam0->f_17[iVar0]))
			{
				if (!unk_0x2DC9BA2299B45EA6(uParam0->f_17[iVar0]))
				{
					if (!unk_0xA863CAB6B7856A4B(uParam0->f_17[iVar0], func_210()))
					{
						unk_0x9880BAA7286E1072(uParam0->f_17[iVar0], 1);
					}
					else
					{
						unk_0x9880BAA7286E1072(uParam0->f_17[iVar0], 0);
					}
					if (unk_0x7F13E3D2383CF15F(unk_0xC8B93D94F8954288()))
					{
						iVar13 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
						if (unk_0x5D42322C7DB888D0(iVar13, 0))
						{
							if (unk_0xA863CAB6B7856A4B(uParam0->f_17[iVar0], func_210()))
							{
								if (!func_250(uParam0) && unk_0x7F13E3D2383CF15F(unk_0xC8B93D94F8954288()))
								{
									if (!func_248(uParam0->f_17[iVar0]))
									{
										unk_0x5980997C9ACA0572(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar13 != iParam10 && !unk_0xB6900B8CB0ABBD2B(iVar13))
						{
							if (unk_0x465DC424E3211BBE(uParam0->f_17[iVar0], iVar13))
							{
								if (unk_0xEE473B4B88D6F842(iVar13) && !unk_0xA4D2826AAFA337FD(iVar13))
								{
									Var28 = { unk_0x44C17CCB85A88A1F(iVar13, 1) };
									if (Var28.f_2 < -1f)
									{
										unk_0xD4781E5070EB1F1C(uParam0->f_17[iVar0], iVar13, 64);
									}
								}
							}
						}
					}
					bVar11 = true;
					if (!unk_0xA863CAB6B7856A4B(uParam0->f_17[iVar0], func_210()))
					{
						if (unk_0x7F13E3D2383CF15F(uParam0->f_17[iVar0]))
						{
							iVar13 = unk_0x275BEBE583A163B5(uParam0->f_17[iVar0], 0);
							if (!unk_0xB6900B8CB0ABBD2B(iVar13))
							{
								if (unk_0x5D42322C7DB888D0(iParam10, 0))
								{
									if (iVar13 != iParam10)
									{
										if (!unk_0x465DC424E3211BBE(unk_0xC8B93D94F8954288(), iVar13))
										{
											if (unk_0x9BA9222C7124CA04(iVar13) > 5f)
											{
												unk_0xD4781E5070EB1F1C(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0xD4781E5070EB1F1C(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
								else
								{
									if (unk_0x7F13E3D2383CF15F(unk_0xC8B93D94F8954288()))
									{
										iVar31 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
									}
									if (unk_0x5D42322C7DB888D0(iVar31, 0))
									{
										if (iVar13 != iVar31)
										{
											if (unk_0x9BA9222C7124CA04(iVar13) > 5f)
											{
												unk_0xD4781E5070EB1F1C(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0xD4781E5070EB1F1C(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
							}
						}
					}
					if (unk_0xA863CAB6B7856A4B(uParam0->f_17[iVar0], func_210()))
					{
						iVar32 = unk_0xBCEA8C5A6B3F7D71(unk_0xC8B93D94F8954288());
						if (unk_0x95CCECA3948CFE7B(iVar32))
						{
							if (func_236(iVar32, uParam0, 0))
							{
								if (func_247(iVar0, uParam0) || !unk_0xDCC86F723E82125E(uParam0->f_13, 27))
								{
									unk_0x64CD20398FAC9617(uParam0->f_17[iVar0], iVar0);
									func_211(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0x59A0729D503ED758(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_247(iVar0, uParam0))
							{
								if (unk_0x6D5BB810CC209E15(iVar32) == joaat("sentinel2"))
								{
									unk_0x64CD20398FAC9617(uParam0->f_17[iVar0], 4);
								}
								else
								{
									unk_0x64CD20398FAC9617(uParam0->f_17[iVar0], 2);
								}
								func_246(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0xA863CAB6B7856A4B(uParam0->f_17[iVar0], func_210()) && !func_245(uParam0->f_17[iVar0], iParam10)) && !func_244(uParam0->f_17[iVar0], iParam10))
					{
						if (func_251(uParam0, uParam0->f_17[iVar0], uParam8, bParam11))
						{
							if (!unk_0xA863CAB6B7856A4B(uParam0->f_17[iVar0], func_210()))
							{
								if (((!unk_0x770AAB67BDD9C729(uParam0->f_17[iVar0]) && !unk_0x5B4D7A11EBC299CE(uParam0->f_17[iVar0])) && !unk_0x911A26F8FA3BA28E(uParam0->f_17[iVar0])) && !unk_0xC0AE63CA97F3FF6A(uParam0->f_17[iVar0]))
								{
									iVar14 = unk_0x090C65D5190A249D(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7)
									{
										unk_0x5124C5FA52D2AF3E(uParam0->f_17[iVar0]);
									}
									unk_0x13B202E60E04C733(uParam0->f_17[iVar0], func_210());
									bVar11 = false;
								}
							}
						}
						if (bVar11)
						{
							if (!unk_0x6B4865E08E90ACC5(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = unk_0x693EBB4F13506457();
								uParam0->f_1[iVar0] = func_220(uParam0->f_17[iVar0], 0, 0);
								unk_0xB8D190382B0188FE(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_227(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0x6B4865E08E90ACC5(uParam0->f_1[iVar0]))
					{
						if (((func_224(uParam0->f_17[iVar0], 1) || func_245(uParam0->f_17[iVar0], iParam10)) || iParam12) || (unk_0x5D42322C7DB888D0(iParam10, 0) && !unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iParam10, 0)))
						{
							if (unk_0x6B4865E08E90ACC5(uParam0->f_1[iVar0]))
							{
								unk_0x5356E82C1E5E0C44(&(uParam0->f_1[iVar0]));
								func_237(uVar15[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_227(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (unk_0x5D42322C7DB888D0(iParam10, 0))
					{
						if (!unk_0x465DC424E3211BBE(uParam0->f_17[iVar0], iParam10))
						{
							if ((unk_0x5534579797ACFD77(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !unk_0xDCC86F723E82125E(uParam0->f_13, 11)) && !((bParam17 && unk_0x719D80C8C2BB7B0A(unk_0xA34E7C2A5118D638(), 0)) && !unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iParam10, 0)))
							{
								if (unk_0x7F13E3D2383CF15F(uParam0->f_17[iVar0]))
								{
									if (!unk_0x0C7EC810080F0459(uParam0->f_17[iVar0], iParam10, 0))
									{
										if (!func_224(uParam0->f_17[iVar0], 1))
										{
											if (func_223(uParam0->f_17[iVar0]))
											{
												iVar14 = unk_0x090C65D5190A249D(uParam0->f_17[iVar0], 451360105);
												if (iVar14 == 7)
												{
													unk_0xE5F6BE3F8E937ACE(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0xA863CAB6B7856A4B(uParam0->f_17[iVar0], func_210()))
									{
										if ((((!unk_0x911A26F8FA3BA28E(uParam0->f_17[iVar0]) && !unk_0x770AAB67BDD9C729(uParam0->f_17[iVar0])) && !unk_0x5B4D7A11EBC299CE(uParam0->f_17[iVar0])) && !unk_0xC0AE63CA97F3FF6A(uParam0->f_17[iVar0])) && !unk_0x79E944054F6C9DCD(iParam10))
										{
											unk_0x5980997C9ACA0572(uParam0->f_17[iVar0]);
										}
									}
									iVar14 = unk_0x090C65D5190A249D(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7 && !func_253(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!unk_0x911A26F8FA3BA28E(uParam0->f_17[iVar0]) && !unk_0x911A26F8FA3BA28E(unk_0xC8B93D94F8954288())) && !func_243(uParam0->f_17[iVar0], 2f)) && !unk_0x770AAB67BDD9C729(uParam0->f_17[iVar0])) && !unk_0x5B4D7A11EBC299CE(uParam0->f_17[iVar0])) && !unk_0x79E944054F6C9DCD(iParam10))
										{
											unk_0xAAD662D7E0D59F4C(uParam0->f_17[iVar0], 1);
											if (unk_0xDCC86F723E82125E(uParam0->f_13, 10))
											{
												unk_0x9EEBFF7C6634D175(uParam0->f_17[iVar0], 1f);
											}
											unk_0x9CEFBE395E148A32(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											unk_0x6AEF3997AED77246(uParam0->f_17[iVar0], 0);
										}
									}
									else if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = func_220(uParam0->f_17[iVar0], 0, 0);
										unk_0xB8D190382B0188FE(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0xA863CAB6B7856A4B(uParam0->f_17[iVar0], func_210()))
							{
								if (func_251(uParam0, uParam0->f_17[iVar0], uParam8, bParam11))
								{
									if (!unk_0x770AAB67BDD9C729(uParam0->f_17[iVar0]) && !unk_0x5B4D7A11EBC299CE(uParam0->f_17[iVar0]))
									{
										iVar14 = unk_0x090C65D5190A249D(uParam0->f_17[iVar0], -1794415470);
										if (iVar14 == 7)
										{
											unk_0x5124C5FA52D2AF3E(uParam0->f_17[iVar0]);
										}
										unk_0xAAD662D7E0D59F4C(uParam0->f_17[iVar0], 0);
										unk_0x13B202E60E04C733(uParam0->f_17[iVar0], func_210());
									}
								}
							}
						}
						else if (unk_0x465DC424E3211BBE(unk_0xC8B93D94F8954288(), iParam10))
						{
							if (!unk_0xA863CAB6B7856A4B(uParam0->f_17[iVar0], func_210()))
							{
								if (!unk_0xDCC86F723E82125E(uParam0->f_13, 21))
								{
									unk_0x13B202E60E04C733(uParam0->f_17[iVar0], func_210());
								}
							}
							else if (unk_0xDCC86F723E82125E(uParam0->f_13, 21))
							{
								unk_0x5980997C9ACA0572(uParam0->f_17[iVar0]);
								unk_0x59A0729D503ED758(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0xA863CAB6B7856A4B(uParam0->f_17[iVar0], func_210()) && !unk_0x79E944054F6C9DCD(iParam10))
						{
							unk_0x5980997C9ACA0572(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (unk_0x6B4865E08E90ACC5(uParam0->f_1[iVar0]))
				{
					unk_0x5356E82C1E5E0C44(&(uParam0->f_1[iVar0]));
					func_237(uVar15[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x6B4865E08E90ACC5(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_232(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!unk_0x2DC9BA2299B45EA6(uParam0->f_17[iVar0]))
						{
							if (func_248(uParam0->f_17[iVar0]) || unk_0x5534579797ACFD77(uParam0->f_17[iVar0], unk_0xC8B93D94F8954288(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!unk_0x2DC9BA2299B45EA6(uParam0->f_17[iVar0]))
					{
						if (!unk_0x5534579797ACFD77(uParam0->f_17[iVar0], unk_0xC8B93D94F8954288(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0, 1, 0) && !func_248(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = unk_0x693EBB4F13506457();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!unk_0xDCC86F723E82125E(uParam0->f_13, 5))
							{
								func_230(uParam0, sParam7, 0);
								unk_0x59A0729D503ED758(&(uParam0->f_13), 5);
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
									if (!func_242(iVar0, uParam0))
									{
										if (!unk_0x544AEDB4A15228FF(uVar19[iVar0]))
										{
											if (!unk_0xF8D041B05C3D1FD4(uVar19[iVar0], ""))
											{
												func_240(uParam0, uVar15[iVar0], uVar19[iVar0], 0);
												func_239(iVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!func_242(iVar0, uParam0))
										{
											func_230(uParam0, uVar15[iVar0], 0);
											func_239(iVar0, uParam0);
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
		unk_0x77621132305B133B(&(uParam0->f_13), 10);
		if (iVar6 && !bVar12)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (unk_0x6B4865E08E90ACC5(uParam0->f_1[iVar0]))
				{
					unk_0x5356E82C1E5E0C44(&(uParam0->f_1[iVar0]));
					func_237(uVar15[iVar0]);
				}
				iVar0++;
			}
			func_237("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_239(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x59A0729D503ED758(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x59A0729D503ED758(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x59A0729D503ED758(&(uParam1->f_13), 16);
			break;
	}
}

void func_240(var uParam0, char* sParam1, var uParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!unk_0x544AEDB4A15228FF(sParam1))
		{
			if (!unk_0xF8D041B05C3D1FD4(sParam1, ""))
			{
				func_241(sParam1, uParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x693EBB4F13506457();
}

void func_241(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0xBBB1F62EC5E3BBC6(sParam0);
	unk_0xCE59E3E42586D52D(uParam1);
	unk_0xEE90E717A80AA597(iParam2, 1);
}

int func_242(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xDCC86F723E82125E(uParam1->f_13, 14);
		
		case 1:
			return unk_0xDCC86F723E82125E(uParam1->f_13, 15);
		
		case 2:
			return unk_0xDCC86F723E82125E(uParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_243(int iParam0, float fParam1)
{
	int iVar0;
	
	if (unk_0x277ECDA23D8CCEB4(iParam0, 0))
	{
		iVar0 = unk_0x275BEBE583A163B5(iParam0, 0);
		if (!unk_0xB6900B8CB0ABBD2B(iVar0))
		{
			if (unk_0x9BA9222C7124CA04(iVar0) > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_244(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		if (!unk_0xA863CAB6B7856A4B(iParam0, func_210()))
		{
			iVar0 = unk_0x01D86C7BBF22D1B5(iParam0);
			if (unk_0x5D42322C7DB888D0(iParam1, 0))
			{
				if (unk_0x5534579797ACFD77(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
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

int func_245(int iParam0, int iParam1)
{
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		if (unk_0x95CCECA3948CFE7B(iParam1))
		{
			if (unk_0x5D42322C7DB888D0(iParam1, 0))
			{
				if (unk_0x465DC424E3211BBE(iParam0, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_246(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x59A0729D503ED758(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x59A0729D503ED758(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x59A0729D503ED758(&(uParam1->f_13), 19);
			break;
	}
}

int func_247(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xDCC86F723E82125E(uParam1->f_13, 17);
		
		case 1:
			return unk_0xDCC86F723E82125E(uParam1->f_13, 18);
		
		case 2:
			return unk_0xDCC86F723E82125E(uParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_248(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		iVar0 = unk_0xBCEA8C5A6B3F7D71(unk_0xC8B93D94F8954288());
		if (unk_0x5D42322C7DB888D0(iVar0, 0))
		{
			if (!unk_0x2DC9BA2299B45EA6(iParam0))
			{
				iVar1 = unk_0xBCEA8C5A6B3F7D71(iParam0);
				if (unk_0x5D42322C7DB888D0(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (unk_0x5534579797ACFD77(unk_0xC8B93D94F8954288(), iParam0, 20f, 20f, 20f, 0, 1, 0) && unk_0x5534579797ACFD77(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
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

int func_249(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		if (unk_0x6D5BB810CC209E15(iParam0) == joaat("bus") || unk_0x6D5BB810CC209E15(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!unk_0x2DC9BA2299B45EA6(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = unk_0xC0ADAF0814175B68(iParam0, 0);
			if (!unk_0x2DC9BA2299B45EA6(iVar3))
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
			iVar4 = unk_0xC0ADAF0814175B68(iParam0, 1);
			if (!unk_0x2DC9BA2299B45EA6(iVar4))
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
			iVar5 = unk_0xC0ADAF0814175B68(iParam0, 2);
			if (!unk_0x2DC9BA2299B45EA6(iVar5))
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

int func_250(var uParam0)
{
	int iVar0;
	
	if (unk_0x7F13E3D2383CF15F(unk_0xC8B93D94F8954288()))
	{
		iVar0 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
		if (func_236(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_251(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x2DC9BA2299B45EA6(iParam1))
	{
		if (unk_0x7F13E3D2383CF15F(iParam1))
		{
			iVar0 = unk_0x275BEBE583A163B5(iParam1, 0);
			if (!unk_0xB6900B8CB0ABBD2B(iVar0))
			{
				if (unk_0x5D42322C7DB888D0(iVar0, 0))
				{
					if (unk_0x465DC424E3211BBE(unk_0xC8B93D94F8954288(), iVar0))
					{
						if (func_250(uParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (unk_0x5534579797ACFD77(unk_0xC8B93D94F8954288(), iParam1, uParam2, uParam2, 3f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (unk_0x5534579797ACFD77(unk_0xC8B93D94F8954288(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				iVar0 = unk_0xBCEA8C5A6B3F7D71(unk_0xC8B93D94F8954288());
				if (unk_0x95CCECA3948CFE7B(iVar0))
				{
					if (func_236(iVar0, uParam0, 0))
					{
						if (unk_0x5D42322C7DB888D0(iVar0, 0))
						{
							if (func_252(iVar0))
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

int func_252(int iParam0)
{
	float fVar0;
	
	if (!unk_0xB6900B8CB0ABBD2B(iParam0))
	{
		fVar0 = unk_0x9BA9222C7124CA04(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_253(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		if (unk_0x5D42322C7DB888D0(iParam1, 0))
		{
			iVar0 = unk_0xBCEA8C5A6B3F7D71(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_254()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1))
	{
		iVar0 = unk_0x01D86C7BBF22D1B5(unk_0xC8B93D94F8954288());
		if (unk_0x5D42322C7DB888D0(iVar0, 0))
		{
			iVar1 = unk_0xC0ADAF0814175B68(iVar0, 0);
			if (!unk_0x2DC9BA2299B45EA6(iVar1))
			{
				if (iVar1 != unk_0xC8B93D94F8954288())
				{
					if (unk_0xD28A89C669EAD2E4(iVar1))
					{
						if (!unk_0xF0F36915A8ADB923(iVar1, unk_0xC8B93D94F8954288()))
						{
							unk_0xE48D9147BC1F4CD7(iVar1, unk_0xC8B93D94F8954288(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_255(var uParam0)
{
	int iVar0;
	
	if (!unk_0xDCC86F723E82125E(uParam0->f_13, 25))
	{
		if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
		{
			unk_0xC778754E36F3FFD6(unk_0xC8B93D94F8954288(), 32, 0);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x95CCECA3948CFE7B(uParam0->f_17[iVar0]))
			{
				if (!unk_0x2DC9BA2299B45EA6(uParam0->f_17[iVar0]))
				{
					unk_0xC778754E36F3FFD6(uParam0->f_17[iVar0], 32, 0);
					unk_0xC778754E36F3FFD6(uParam0->f_17[iVar0], 305, 1);
					unk_0xC778754E36F3FFD6(uParam0->f_17[iVar0], 268, 1);
					unk_0x6AEF3997AED77246(uParam0->f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		unk_0x59A0729D503ED758(&(uParam0->f_13), 25);
	}
}

void func_256(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x95CCECA3948CFE7B(uParam0->f_17[iVar0]))
		{
			if (!unk_0x2DC9BA2299B45EA6(uParam0->f_17[iVar0]))
			{
				if (unk_0x7F13E3D2383CF15F(uParam0->f_17[iVar0]))
				{
					unk_0x8EB9A60FB4C37A34(uParam0->f_17[iVar0], 0);
					unk_0x4D2A04F490FBAE07(uParam0->f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
		{
			if (unk_0x7F13E3D2383CF15F(unk_0xC8B93D94F8954288()))
			{
				unk_0x8EB9A60FB4C37A34(unk_0xC8B93D94F8954288(), 0);
				unk_0x4D2A04F490FBAE07(unk_0xC8B93D94F8954288(), 0);
			}
		}
	}
}

Vector3 func_257()
{
	struct<3> Var0;
	
	return Var0;
}

int func_258(int iParam0, int iParam1)
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

void func_259()
{
	var uVar0;
	var uVar1;
	
	unk_0x118BEBAD0FFAE652(0f);
	unk_0xB26E3BEE0F4DB947(0f, 0f);
	switch (iLocal_2512)
	{
		case 0:
			iLocal_2506 = unk_0x974516F979AD07BC();
			unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 0, 0);
			if (func_203())
			{
				unk_0xC0E8B67A4385D37D("MISSChinese2_crystalMazeMCS1_IG");
				unk_0x7567CEA8E6B5340B(joaat("ig_old_man2"));
				unk_0x7567CEA8E6B5340B(joaat("ig_old_man1a"));
				unk_0x7567CEA8E6B5340B(joaat("ig_janet"));
				unk_0x7567CEA8E6B5340B(joaat("ig_taocheng"));
				unk_0x7567CEA8E6B5340B(joaat("ig_taostranslator"));
				unk_0xC0E8B67A4385D37D("misschinese2_crystalmaze");
				unk_0xC0E8B67A4385D37D("missrampageintrooutro");
				unk_0x1D9B9237CA276DAD(unk_0xC8B93D94F8954288(), 0, 0);
				func_186(1, 1, 1, 0);
				if (unk_0x95CCECA3948CFE7B(Global_87936.f_9[0]))
				{
					Local_755[14 /*33*/] = Global_87936.f_9[2];
					Local_755[13 /*33*/] = Global_87936.f_9[1];
					Local_755[11 /*33*/] = Global_87936.f_9[4];
					Local_755[10 /*33*/] = Global_87936.f_9[3];
					Local_755[12 /*33*/] = Global_87936.f_9[0];
					unk_0xFD816D0E738EB817(Local_755[14 /*33*/], 1, 1);
					unk_0xFD816D0E738EB817(Local_755[13 /*33*/], 1, 1);
					unk_0xFD816D0E738EB817(Local_755[11 /*33*/], 1, 1);
					unk_0xFD816D0E738EB817(Local_755[10 /*33*/], 1, 1);
					unk_0xFD816D0E738EB817(Local_755[12 /*33*/], 1, 1);
					if (!unk_0x2DC9BA2299B45EA6(Local_755[13 /*33*/]))
					{
						unk_0x5D713171D2C2E177(Local_755[13 /*33*/], "Old_Man1A", 0, joaat("ig_old_man1a"), 0);
					}
					if (!unk_0x2DC9BA2299B45EA6(Local_755[14 /*33*/]))
					{
						unk_0x5D713171D2C2E177(Local_755[14 /*33*/], "Old_Man2", 0, joaat("ig_old_man2"), 0);
					}
					if (!unk_0x2DC9BA2299B45EA6(Local_755[11 /*33*/]))
					{
						unk_0x5D713171D2C2E177(Local_755[11 /*33*/], "tao", 0, joaat("ig_taocheng"), 0);
					}
					if (!unk_0x2DC9BA2299B45EA6(Local_755[10 /*33*/]))
					{
						unk_0x5D713171D2C2E177(Local_755[10 /*33*/], "Taos_Translator", 0, joaat("ig_taostranslator"), 0);
					}
					if (!unk_0x2DC9BA2299B45EA6(Local_755[12 /*33*/]))
					{
						unk_0x5D713171D2C2E177(Local_755[12 /*33*/], "Janet", 0, joaat("ig_janet"), 0);
					}
				}
				else
				{
					Local_755[13 /*33*/] = unk_0x71DD988C1B903F5D(26, joaat("ig_old_man1a"), 1987.231f, 3052.741f, 46.214f, 0, 1, 1);
					unk_0x5D713171D2C2E177(Local_755[13 /*33*/], "Old_Man1A", 0, joaat("ig_old_man1a"), 0);
					Local_755[14 /*33*/] = unk_0x71DD988C1B903F5D(26, joaat("ig_old_man2"), 1987.231f, 3052.741f, 46.214f, 0, 1, 1);
					unk_0x5D713171D2C2E177(Local_755[14 /*33*/], "Old_Man2", 0, joaat("ig_old_man2"), 0);
					if (unk_0x95CCECA3948CFE7B(Local_755[11 /*33*/]))
					{
						if (!unk_0x2DC9BA2299B45EA6(Local_755[11 /*33*/]))
						{
							unk_0x5D713171D2C2E177(Local_755[11 /*33*/], "tao", 0, joaat("ig_taocheng"), 0);
						}
					}
					else
					{
						unk_0x5D713171D2C2E177(Local_755[11 /*33*/], "tao", 2, joaat("ig_taocheng"), 0);
					}
					unk_0x5D713171D2C2E177(Local_755[10 /*33*/], "Taos_Translator", 2, joaat("ig_taostranslator"), 0);
					Local_755[12 /*33*/] = unk_0x71DD988C1B903F5D(26, joaat("ig_janet"), 1987.231f, 3052.741f, 46.214f, 0, 1, 1);
					unk_0x5D713171D2C2E177(Local_755[12 /*33*/], "Janet", 0, joaat("ig_janet"), 0);
				}
				func_261();
				unk_0x8E6D4B516B44DE88(0);
				unk_0x1FFBBAD42BF7E243(4);
				unk_0x425A7D451DB73551(1991.22f, 3054.884f, 50.27741f, 87f, 0);
				unk_0xE3B85EB139EAACDD(1991.22f, 3054.884f, 50.27741f, 87f, 0);
				unk_0x8738B068D97CDC64(Vector(50.27741f, 3054.884f, 1991.22f) - Vector(40f, 40f, 40f), Vector(50.27741f, 3054.884f, 1991.22f) + Vector(40f, 40f, 40f), 0, 1, 1, 1);
				unk_0x52AFCF0DF71B4A6D(Vector(50.27741f, 3054.884f, 1991.22f) - Vector(40f, 40f, 40f), Vector(50.27741f, 3054.884f, 1991.22f) + Vector(0f, 40f, 40f));
				func_32(0, 0);
				func_32(26, 0);
				iLocal_3689 = 0;
				iLocal_2512++;
			}
			break;
		
		case 1:
			if (unk_0x308528B5CF35F306())
			{
				if (unk_0xD5DFCA69ACAA20E3())
				{
					unk_0x31E6EB2040318451(1000);
				}
				iLocal_2512++;
			}
			break;
		
		case 2:
			if (unk_0x308528B5CF35F306())
			{
				if (iLocal_3689 == 0)
				{
					func_260(13);
					iLocal_3689++;
				}
			}
			if (!unk_0x95CCECA3948CFE7B(Local_755[13 /*33*/]))
			{
				if (unk_0x669E4BAB086C2648("Old_Man1A", 0))
				{
					Local_755[13 /*33*/] = unk_0x4D3C2AC8339BFB4F(unk_0x3B56A7E9193FB661("Old_Man1A", 0));
				}
			}
			if (!unk_0x95CCECA3948CFE7B(Local_755[14 /*33*/]))
			{
				if (unk_0x669E4BAB086C2648("Old_Man2", 0))
				{
					Local_755[14 /*33*/] = unk_0x4D3C2AC8339BFB4F(unk_0x3B56A7E9193FB661("Old_Man2", 0));
				}
			}
			if (!unk_0x95CCECA3948CFE7B(Local_755[11 /*33*/]))
			{
				if (unk_0x669E4BAB086C2648("tao", 0))
				{
					Local_755[11 /*33*/] = unk_0x4D3C2AC8339BFB4F(unk_0x3B56A7E9193FB661("tao", 0));
				}
			}
			if (!unk_0x95CCECA3948CFE7B(Local_755[10 /*33*/]))
			{
				if (unk_0x669E4BAB086C2648("Taos_Translator", 0))
				{
					Local_755[10 /*33*/] = unk_0x4D3C2AC8339BFB4F(unk_0x3B56A7E9193FB661("Taos_Translator", 0));
				}
			}
			if (!unk_0x95CCECA3948CFE7B(Local_755[12 /*33*/]))
			{
				if (unk_0x669E4BAB086C2648("Janet", 0))
				{
					Local_755[12 /*33*/] = unk_0x4D3C2AC8339BFB4F(unk_0x3B56A7E9193FB661("Janet", 0));
				}
			}
			if (unk_0x669E4BAB086C2648("tao", 0))
			{
				if (!unk_0x2DC9BA2299B45EA6(Local_755[11 /*33*/]))
				{
					unk_0xCBD60E398042F554(Local_755[11 /*33*/], iLocal_1618);
					unk_0x58F516BB5E324590(Local_755[11 /*33*/], 0);
					uVar0 = unk_0x0B15BB6DFB729046(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
					unk_0xA5666A46C1079EFE(Local_755[11 /*33*/], uVar0, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 1, 16, 1148846080, 0);
				}
			}
			if (unk_0x669E4BAB086C2648("Taos_Translator", 0))
			{
				if (!unk_0x2DC9BA2299B45EA6(Local_755[10 /*33*/]))
				{
					unk_0xCBD60E398042F554(Local_755[10 /*33*/], iLocal_1618);
					unk_0x58F516BB5E324590(Local_755[10 /*33*/], 0);
					uVar1 = unk_0x0B15BB6DFB729046(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
					unk_0xA5666A46C1079EFE(Local_755[10 /*33*/], uVar1, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 1, 16, 1148846080, 0);
				}
			}
			if (unk_0x669E4BAB086C2648("Trevor", 0))
			{
				iLocal_2506 = unk_0x974516F979AD07BC();
				if (func_68(iLocal_2506) && func_67(iLocal_2506, 1995.202f, 3062.156f, 46.0491f, 1) < 5f)
				{
					unk_0x6D9DB313D50E9A0D(unk_0xC8B93D94F8954288(), iLocal_2506, -1);
					unk_0x01BAA21528B22625(unk_0xC8B93D94F8954288(), 0, 0);
					unk_0x80454CEB5BC7C46B(unk_0x6D5BB810CC209E15(iLocal_2506));
				}
				else if (unk_0xF9B86DC1728F1339("missrampageintrooutro"))
				{
					unk_0xC76B5C68AB6DC7DF(unk_0xC8B93D94F8954288(), 1992.135f, 3057.467f, 46.06f, 1, 0, 0, 1);
					unk_0x765E3FA65D011F03(unk_0xC8B93D94F8954288(), 325.4678f);
					unk_0x5323F488E6A1B660(unk_0xC8B93D94F8954288(), "missrampageintrooutro", "trvram_6_1h_run_outro", 1000f, -4f, -1, 0, 0.1f, 0, 0, 0);
					unk_0x01BAA21528B22625(unk_0xC8B93D94F8954288(), 1, 0);
				}
				else
				{
					unk_0xC76B5C68AB6DC7DF(unk_0xC8B93D94F8954288(), 1992.919f, 3057.906f, 46.0567f, 1, 0, 0, 1);
					unk_0x765E3FA65D011F03(unk_0xC8B93D94F8954288(), 337.2537f);
					unk_0x447955D97DC49D70(unk_0xC8B93D94F8954288(), joaat("MotionState_Walk"), 0, 0, 0);
					unk_0xAFCAB3A510E42700(unk_0xC8B93D94F8954288(), 1f);
					unk_0x01BAA21528B22625(unk_0xC8B93D94F8954288(), 1, 0);
				}
			}
			if (unk_0xF490A05A3C6F92BC(0))
			{
				unk_0xFD363D98CA84289C(6);
				func_186(0, 1, 1, 0);
				unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 1, 0);
				unk_0x8C67D2FDE360FBCA(0f);
				unk_0x0F9FDCEB321235AB(-7f, 1065353216);
				if (unk_0xD5DFCA69ACAA20E3())
				{
					unk_0xBB93D72F9F571F61(1992.135f, 3057.467f, 46.06f);
				}
				unk_0x2D4CF77D729552C0();
				unk_0xD810132681A9B83C(0f, 7f, 3);
				func_176(11);
			}
			break;
	}
}

void func_260(int iParam0)
{
	if (Global_88361 != -1)
	{
		if (iParam0 == Global_88361)
		{
			Global_88365 = 1;
			return;
		}
	}
}

void func_261()
{
	int iVar0;
	
	if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
	{
		unk_0x916DBBB1A4A313B5(unk_0xC8B93D94F8954288(), 0, 0, 0, 0, 0, 0, 0, 0);
		unk_0xC778754E36F3FFD6(unk_0xC8B93D94F8954288(), 157, 1);
		unk_0xEE6504C7ECC425AB(unk_0xC8B93D94F8954288(), 0);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x95CCECA3948CFE7B(Global_88808[iVar0]))
		{
			if (!unk_0xB6900B8CB0ABBD2B(Global_88808[iVar0]))
			{
				unk_0x916DBBB1A4A313B5(Global_88808[iVar0], 0, 0, 0, 0, 0, 0, 0, 0);
				unk_0xEE6504C7ECC425AB(Global_88808[iVar0], 0);
			}
		}
		iVar0++;
	}
	if ((Global_35700 != 0 && Global_35700 != 3) && Global_35700 != 2)
	{
		unk_0x60B57BC5E51D2074(5);
		unk_0xFD62177C7242216E(1f);
	}
}

void func_262()
{
	int iVar0;
	
	switch (iLocal_2512)
	{
		case 0:
			unk_0xF3AC452C34BF0E13("FRMCHSE", 0);
			while (!unk_0xF0DCEBB4ADA5D981(0))
			{
				func_28(27, 1);
			}
			func_56(&uLocal_2708, 0, unk_0xC8B93D94F8954288(), "TREVOR", 0, 1);
			func_56(&uLocal_2708, 8, 0, "PED8", 0, 1);
			func_32(9, 1);
			func_32(29, 1);
			func_32(21, 1);
			func_346();
			unk_0x0184403F1C1A3769(2442.69f, 4970.348f, 46.33f, 30f);
			unk_0x4F5A2A83DD76FE4C("EXTRASUNNY", 120f);
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
			func_202(&Local_1619, &uLocal_2708, cLocal_2338, 12f, 2482.197f, 4975.367f, 44.7288f, 121f, 1);
			func_345(&Local_2244, "ONEILGUARD4", 5, "ONEILGUARD1");
			func_345(&Local_2247, "ONEILGUARD4", 5, "ONEILGUARD1");
			func_345(&Local_2259, "CHI2_nope", 8, "ONEILGUARD1");
			func_345(&Local_2250, "SEETREVOR", 3, "chin2goon1");
			func_345(&Local_2253, "CHI2_hear", 8, "ONEILGUARD1");
			func_345(&Local_2256, "CHI2_hear", 8, "ONEILGUARD1");
			func_345(&Local_2262, "ONEILGUARD3", 5, "ONEILGUARD1");
			func_345(&Local_2265, "ONEILGUARD2", 5, "ONEILGUARD1");
			func_345(&Local_2268, "ONEILGUARD4", 5, "ONEILGUARD1");
			func_345(&Local_2271, "GOON2TREV", 4, "CHIN2goon2");
			func_32(6, 1);
			func_32(25, 1);
			iLocal_2506 = unk_0xCF6A5CC48A3C303B();
			unk_0xB7FAA1C591A4664F(joaat("bodhi2"), 1);
			unk_0x4A606A8BE6924115("TAOGROUP", &iLocal_1618);
			unk_0x6CCF5F545348D54E(1, iLocal_1618, joaat("player"));
			unk_0x6CCF5F545348D54E(1, joaat("player"), iLocal_1618);
			func_17(0, -1);
			unk_0x5B9B55E417A44413("Chinese2_Lunch", 0);
			unk_0x5B9B55E417A44413("CHINESE2_HILLBILLIES", 0);
			if (func_344())
			{
				iVar0 = func_343();
				if (Global_85616 == 1)
				{
					iVar0++;
				}
				switch (iVar0)
				{
					case 0:
						func_263(2, 1, 0);
						unk_0x31E6EB2040318451(1000);
						break;
					
					case 1:
						if (Global_85616 == 1)
						{
							func_263(3, 1, 0);
						}
						else
						{
							func_263(4, 1, 0);
							unk_0x31E6EB2040318451(1000);
						}
						break;
					
					case 2:
						func_263(6, 1, 0);
						unk_0x31E6EB2040318451(1000);
						break;
					
					case 3:
						func_263(7, 1, 0);
						unk_0x31E6EB2040318451(1000);
						break;
					
					case 4:
						if (Global_85616 == 1)
						{
							func_263(8, 1, 0);
						}
						else
						{
							func_263(9, 1, 0);
							unk_0x31E6EB2040318451(1000);
						}
						break;
					
					case 5:
						func_263(10, 1, 0);
						unk_0x31E6EB2040318451(1000);
						func_144();
						break;
				}
			}
			else if (func_141(0))
			{
				func_263(1, 0, 1);
			}
			else
			{
				func_176(11);
			}
			break;
	}
}

void func_263(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	func_338(3);
	func_32(6, 0);
	iLocal_2512 = 0;
	iLocal_2511 = iParam0;
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			unk_0x7567CEA8E6B5340B(joaat("ig_old_man2"));
			unk_0x7567CEA8E6B5340B(joaat("ig_old_man1a"));
			unk_0x7567CEA8E6B5340B(joaat("ig_janet"));
			unk_0x7567CEA8E6B5340B(joaat("ig_taocheng"));
			unk_0x7567CEA8E6B5340B(joaat("ig_taostranslator"));
			unk_0x0B3F3AB0A340D234("chinese_2_int", 8);
			while (((((!unk_0x0845149A26DABBA5(joaat("ig_old_man2")) || !unk_0x0845149A26DABBA5(joaat("ig_old_man1a"))) || !unk_0x0845149A26DABBA5(joaat("ig_janet"))) || !unk_0x0845149A26DABBA5(joaat("ig_taocheng"))) || !unk_0x0845149A26DABBA5(joaat("ig_taostranslator"))) || !unk_0xA65C064741F2CA67())
			{
				func_28(323, 1);
			}
			while (!func_335(&(Local_755[11 /*33*/]), 21, 1985.666f, 3052.661f, 46.2151f, 0, 1))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0xC76B5C68AB6DC7DF(unk_0xC8B93D94F8954288(), 1992.878f, 3057.846f, 46.0568f, 1, 0, 0, 1);
			unk_0x765E3FA65D011F03(unk_0xC8B93D94F8954288(), 311f);
			unk_0x8C245572EDB27776(Local_755[11 /*33*/], 9, 1, 0, 0);
			break;
		
		case 2:
			if (bParam1)
			{
				func_334(1992.878f, 3057.846f, 46.0568f, 311f, 1, 0);
			}
			else
			{
				if (func_68(iLocal_2506))
				{
					unk_0xC76B5C68AB6DC7DF(iLocal_2506, 1994.387f, 3061.94f, 46.0491f, 1, 0, 0, 1);
					unk_0x765E3FA65D011F03(iLocal_2506, 50.7724f);
				}
				unk_0x8C67D2FDE360FBCA(0f);
				unk_0x0F9FDCEB321235AB(-7f, 1065353216);
				unk_0xBB93D72F9F571F61(1992.878f, 3057.846f, 46.0568f);
			}
			unk_0x8738B068D97CDC64(Vector(50.27741f, 3054.884f, 1991.22f) - Vector(40f, 40f, 40f), Vector(50.27741f, 3054.884f, 1991.22f) + Vector(40f, 40f, 40f), 0, 1, 1, 1);
			unk_0x52AFCF0DF71B4A6D(Vector(50.27741f, 3054.884f, 1991.22f) - Vector(40f, 40f, 40f), Vector(50.27741f, 3054.884f, 1991.22f) + Vector(0f, 40f, 40f));
			unk_0x98371F41D43CDFA9(1984.997f, 3052.905f, 46.8556f, 10f, 1, 0, 0, 0);
			func_275(1, 0, bParam2);
			unk_0x7567CEA8E6B5340B(joaat("ig_taocheng"));
			unk_0x7567CEA8E6B5340B(joaat("ig_taostranslator"));
			unk_0x7567CEA8E6B5340B(joaat("ig_old_man1a"));
			unk_0x7567CEA8E6B5340B(joaat("ig_old_man2"));
			unk_0x7567CEA8E6B5340B(joaat("ig_janet"));
			unk_0xC0E8B67A4385D37D("misschinese2_crystalmaze");
			while (((((!unk_0x0845149A26DABBA5(joaat("ig_taocheng")) || !unk_0x0845149A26DABBA5(joaat("ig_taostranslator"))) || !unk_0x0845149A26DABBA5(joaat("ig_old_man1a"))) || !unk_0x0845149A26DABBA5(joaat("ig_old_man2"))) || !unk_0x0845149A26DABBA5(joaat("ig_janet"))) || !unk_0xF9B86DC1728F1339("misschinese2_crystalmaze"))
			{
				func_28(3, 1);
			}
			if (!bParam1)
			{
				if (func_68(iLocal_2506))
				{
					unk_0x6D9DB313D50E9A0D(unk_0xC8B93D94F8954288(), iLocal_2506, -1);
					unk_0xC76B5C68AB6DC7DF(iLocal_2506, 1994.387f, 3061.94f, 46.0491f, 1, 0, 0, 1);
					unk_0x765E3FA65D011F03(iLocal_2506, 50.7724f);
				}
				else
				{
					unk_0xC76B5C68AB6DC7DF(unk_0xC8B93D94F8954288(), 1992.878f, 3057.846f, 46.0568f, 1, 0, 0, 1);
					unk_0x765E3FA65D011F03(unk_0xC8B93D94F8954288(), 311f);
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
					func_272(iLocal_2506, -1, 1);
				}
				else
				{
					func_272(0, -1, 1);
				}
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_334(2574.049f, 4981.824f, 50.44f, 50f, 1, 0);
			}
			else
			{
				unk_0xC76B5C68AB6DC7DF(unk_0xC8B93D94F8954288(), 2570.543f, 4982.002f, 50.6795f, 0, 1, 0, 1);
				unk_0x765E3FA65D011F03(unk_0xC8B93D94F8954288(), 98.21f);
				unk_0x8C67D2FDE360FBCA(0f);
				unk_0x0F9FDCEB321235AB(-7f, 1065353216);
				unk_0xBB93D72F9F571F61(2458.508f, 4984.504f, 52.3461f);
				func_28(323, 1);
			}
			unk_0x9F0FFB655C4C4297(1);
			unk_0x007CAC85F0301094(1);
			unk_0xFD62177C7242216E(0f);
			func_275(0, 0, 0);
			unk_0xB0DD2D37A4603474("chinese2_farmhouse_cutscene");
			func_28(34, 1);
			func_32(5, 0);
			while (func_30(5))
			{
				func_3();
				func_28(5, 1);
			}
			while (!func_222(1, 0, 1))
			{
				func_28(6, 1);
			}
			func_15("CHN2_MISSION_START", 1, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(7, 1);
			}
			while (!unk_0x6CBEE2151C70E00C())
			{
				func_28(878, 1);
			}
			if (bParam1)
			{
				func_272(0, -1, 1);
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
				func_334(func_271(), func_270(), 1, 0);
			}
			else
			{
				unk_0xC76B5C68AB6DC7DF(unk_0xC8B93D94F8954288(), 2570.543f, 4982.002f, 50.6795f, 0, 1, 0, 1);
				unk_0x765E3FA65D011F03(unk_0xC8B93D94F8954288(), 98.21f);
				unk_0x8C67D2FDE360FBCA(0f);
				unk_0x0F9FDCEB321235AB(-7f, 1065353216);
				unk_0xBB93D72F9F571F61(2570.543f, 4982.002f, 50.6795f);
				func_28(323, 1);
			}
			unk_0x9F0FFB655C4C4297(1);
			unk_0x007CAC85F0301094(1);
			func_275(0, 1, 0);
			unk_0xFD62177C7242216E(0f);
			func_32(5, 0);
			while (func_30(5))
			{
				func_3();
				func_28(8, 1);
			}
			iVar0 = func_269(2);
			if (iVar0 != 0 && iVar0 != joaat("weapon_unarmed"))
			{
				if (unk_0xD6B965E92DB098CE(unk_0xC8B93D94F8954288(), iVar0, 0))
				{
					unk_0x80423B6A45BF05DA(unk_0xC8B93D94F8954288(), iVar0, 1);
				}
			}
			func_15("CHN2_MISSION_START", 1, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(9, 1);
			}
			if (bParam1)
			{
				if ((unk_0x95CCECA3948CFE7B(iLocal_2506) && unk_0x5D42322C7DB888D0(iLocal_2506, 0)) && func_268())
				{
					func_272(iLocal_2506, -1, 1);
					if (unk_0x5D42322C7DB888D0(iLocal_2506, 0))
					{
						unk_0x57892FEA93664769(iLocal_2506, 1, 1, 0);
						if (unk_0xE924C2C283992918(unk_0x6D5BB810CC209E15(iLocal_2506)))
						{
							unk_0x1034B9E3CD286ADE(iLocal_2506, 15f);
						}
						if (unk_0xAF40E7422A6D9D80(unk_0x6D5BB810CC209E15(iLocal_2506)))
						{
							unk_0x0C7C7F68B472963C(iLocal_2506);
							unk_0xE6D484EB3F0B2B5A(iLocal_2506, 1f, 1f, 1f);
						}
					}
				}
				else
				{
					func_272(0, -1, 1);
				}
			}
			if (unk_0x4F982ED5336EA899(func_271(), 2570.538f, 4982.031f, 50.6239f, 1) < 10f)
			{
				unk_0xC76B5C68AB6DC7DF(unk_0xC8B93D94F8954288(), 2570.538f, 4982.031f, 50.6239f, 1, 0, 0, 1);
				unk_0x765E3FA65D011F03(unk_0xC8B93D94F8954288(), 98f);
			}
			if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
			{
				func_266(unk_0xC8B93D94F8954288(), unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1));
			}
			break;
		
		case 5:
			unk_0x9F0FFB655C4C4297(1);
			unk_0x007CAC85F0301094(1);
			unk_0xC76B5C68AB6DC7DF(unk_0xC8B93D94F8954288(), 2572.01f, 4981.678f, 50.6698f, 1, 0, 0, 1);
			unk_0x765E3FA65D011F03(unk_0xC8B93D94F8954288(), 90.3911f);
			unk_0x8C67D2FDE360FBCA(0f);
			unk_0x0F9FDCEB321235AB(0f, 1065353216);
			unk_0xFD62177C7242216E(0f);
			func_32(5, 0);
			func_166(1);
			while (func_30(5))
			{
				func_3();
				func_28(10, 1);
			}
			func_275(0, 0, 0);
			func_15("CHN2_TO_HOUSE_RESTART", 0, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(11, 1);
			}
			func_265(0, 1, 1);
			unk_0x8C67D2FDE360FBCA(0f);
			unk_0x0F9FDCEB321235AB(-7f, 1065353216);
			break;
		
		case 6:
			if (bParam1)
			{
				func_334(2450.871f, 4960.999f, 44.3759f, 351f, 1, 0);
			}
			else
			{
				unk_0xC76B5C68AB6DC7DF(unk_0xC8B93D94F8954288(), 2450.871f, 4960.999f, 44.3759f, 0, 1, 0, 1);
				unk_0x765E3FA65D011F03(unk_0xC8B93D94F8954288(), 351.3911f);
				unk_0xBB93D72F9F571F61(2432.982f, 4964.823f, 41.3476f);
				func_28(325, 1);
				unk_0x8C67D2FDE360FBCA(0f);
				unk_0x0F9FDCEB321235AB(-7f, 1065353216);
			}
			func_275(0, 0, 0);
			unk_0x9F0FFB655C4C4297(1);
			unk_0x007CAC85F0301094(1);
			unk_0x4EDE34FBADD967A6(1);
			func_32(5, 0);
			func_166(1);
			while (func_30(5))
			{
				func_3();
				func_28(12, 1);
			}
			unk_0xFD62177C7242216E(0f);
			func_15("CHN2_ENTER_HOUSE_RESTART", 0, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(13, 1);
			}
			func_265(0, 1, 1);
			if (bParam1)
			{
				func_272(0, -1, 1);
			}
			if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
			{
				func_266(unk_0xC8B93D94F8954288(), unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1));
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_334(2435.319f, 4966.153f, 41.3476f, 104.2964f, 1, 0);
			}
			else
			{
				unk_0xC76B5C68AB6DC7DF(unk_0xC8B93D94F8954288(), 2435.319f, 4966.153f, 41.3476f, 1, 0, 0, 1);
				unk_0x765E3FA65D011F03(unk_0xC8B93D94F8954288(), 104.2964f);
				unk_0xBB93D72F9F571F61(2432.982f, 4964.823f, 41.3476f);
				unk_0x4EDE34FBADD967A6(1);
				unk_0x8C67D2FDE360FBCA(0f);
				unk_0x0F9FDCEB321235AB(-7f, 1065353216);
			}
			unk_0x9F0FFB655C4C4297(1);
			unk_0x007CAC85F0301094(1);
			func_166(1);
			func_275(0, 0, 0);
			unk_0xB7A2078CD1C9A82F(unk_0xC8B93D94F8954288(), 1);
			iLocal_2678 = unk_0x2F748CE5313AA2BB(2432.982f, 4964.823f, 41.3476f);
			while (!unk_0x8F89BA1339F45476(iLocal_2678))
			{
				iLocal_2678 = unk_0x2F748CE5313AA2BB(2432.982f, 4964.823f, 41.3476f);
				func_28(14, 1);
			}
			while (!unk_0x7E76461B9677E81C(iLocal_2678))
			{
				func_28(15, 1);
			}
			unk_0xFDFFB61673A7FCF2(iLocal_2678, 1);
			unk_0xBB2FAA651AEDFE3A(iLocal_2678);
			iLocal_2678 = 0;
			unk_0xFDFD811E5C1B97AA(joaat("weapon_petrolcan"), 31, 0);
			unk_0xC0E8B67A4385D37D("misschinese2_crystalmaze");
			while (!unk_0xC0212C3CDA6939B3(joaat("weapon_petrolcan")) || !unk_0xF9B86DC1728F1339("misschinese2_crystalmaze"))
			{
				func_28(16, 1);
			}
			func_32(11, 0);
			unk_0xB7A2078CD1C9A82F(unk_0xC8B93D94F8954288(), 0);
			func_32(5, 0);
			while (func_30(5))
			{
				func_3();
				func_28(17, 1);
			}
			unk_0xFD62177C7242216E(0f);
			unk_0x7567CEA8E6B5340B(joaat("blazer"));
			while (!unk_0x0845149A26DABBA5(joaat("blazer")))
			{
				func_28(18, 1);
			}
			func_264(0, 7, 1);
			unk_0x640290651A86938B(unk_0xC8B93D94F8954288(), joaat("weapon_petrolcan"), 4500, 1, 1);
			func_163(0);
			func_15("CHN2_PETROL_RESTART", 0, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(19, 1);
			}
			if (bParam1)
			{
				func_272(0, -1, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_334(2453.124f, 4952.071f, 45.125f, 285f, 1, 0);
			}
			else
			{
				unk_0xC76B5C68AB6DC7DF(unk_0xC8B93D94F8954288(), 2453.124f, 4952.071f, 45.125f, 1, 0, 0, 1);
				unk_0x765E3FA65D011F03(unk_0xC8B93D94F8954288(), 285.8625f);
				unk_0xBB93D72F9F571F61(2453.124f, 4952.071f, 45.125f);
				unk_0x4EDE34FBADD967A6(1);
				unk_0x8C67D2FDE360FBCA(0f);
				unk_0x0F9FDCEB321235AB(-7f, 1065353216);
			}
			func_275(0, 0, 0);
			if (!unk_0x6CBEE2151C70E00C())
			{
				unk_0xB0DD2D37A4603474("chinese2_explosion_cutscene");
			}
			unk_0x9F0FFB655C4C4297(1);
			unk_0x007CAC85F0301094(1);
			unk_0x7567CEA8E6B5340B(joaat("blazer"));
			while (!unk_0x0845149A26DABBA5(joaat("blazer")))
			{
				func_28(20, 1);
			}
			iLocal_2508 = unk_0xD53B4DCC7B2C8551(joaat("blazer"), 2478.587f, 4941.803f, 43.6736f, 227.2903f, 1, 1);
			unk_0xF18809B65D87E197(iLocal_2508);
			iLocal_2678 = unk_0x2F748CE5313AA2BB(2432.982f, 4964.823f, 41.3476f);
			while (!unk_0x8F89BA1339F45476(iLocal_2678))
			{
				iLocal_2678 = unk_0x2F748CE5313AA2BB(2432.982f, 4964.823f, 41.3476f);
				func_28(21, 1);
			}
			while (!unk_0x7E76461B9677E81C(iLocal_2678))
			{
				func_28(22, 1);
			}
			iLocal_2648 = 3;
			unk_0xFDFFB61673A7FCF2(iLocal_2678, 1);
			unk_0xBB2FAA651AEDFE3A(iLocal_2678);
			iLocal_2678 = 0;
			while (!unk_0x0845149A26DABBA5(joaat("blazer")) || !unk_0x6CBEE2151C70E00C())
			{
				func_28(24, 1);
			}
			if (bParam1)
			{
				func_272(0, -1, 1);
			}
			while (!unk_0x8BB5631CA898C6D4("CHINESE2_FARMHOUSE_EXPLOSION_SHOOT_GASOLINE_MASTER", 0))
			{
				func_28(23, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_334(2472.3f, 4948.181f, 44.0937f, 220f, 1, 0);
			}
			else
			{
				unk_0xC76B5C68AB6DC7DF(unk_0xC8B93D94F8954288(), 2472.3f, 4948.181f, 44.0937f, 1, 0, 0, 1);
				unk_0x765E3FA65D011F03(unk_0xC8B93D94F8954288(), 220.8569f);
				unk_0xBB93D72F9F571F61(2453.124f, 4952.071f, 45.125f);
				unk_0x4EDE34FBADD967A6(1);
				unk_0x8C67D2FDE360FBCA(0f);
				unk_0x0F9FDCEB321235AB(-7f, 1065353216);
			}
			func_31(6, 0);
			unk_0x9F0FFB655C4C4297(3);
			unk_0x007CAC85F0301094(3);
			unk_0x7567CEA8E6B5340B(joaat("blazer"));
			while ((!unk_0x0845149A26DABBA5(joaat("blazer")) || !unk_0xC4C141A321D45FD8("FARMHOUSE_FIRE", 0)) || !unk_0xC4C141A321D45FD8("FARMHOUSE_FIRE_BG", 0))
			{
				func_28(25, 1);
			}
			iLocal_2508 = unk_0xD53B4DCC7B2C8551(joaat("blazer"), 2478.587f, 4941.803f, 43.6736f, 227.2903f, 1, 1);
			unk_0xF18809B65D87E197(iLocal_2508);
			func_275(0, 0, 0);
			unk_0xBB93D72F9F571F61(2453.124f, 4952.071f, 45.125f);
			func_19(50, 0, 0, 1, 0);
			func_19(51, 0, 0, 1, 0);
			func_19(52, 0, 0, 1, 0);
			func_19(53, 0, 0, 1, 0);
			func_19(54, 1, 0, 1, 0);
			func_19(55, 1, 0, 1, 0);
			uLocal_2672 = unk_0xBFFB3E6573626E32(2457.15f, 4968.79f, 48.677f, 45f, "DES_FarmHs");
			while (!unk_0x99D920160DDD0D7D(uLocal_2672))
			{
				func_28(161, 1);
			}
			unk_0x1BBA896A85FD74C9(uLocal_2672, 9);
			unk_0x339146AE455BD9F6(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrm"), 0);
			unk_0x339146AE455BD9F6(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrmsml"), 0);
			unk_0x339146AE455BD9F6(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassairfrm"), 0);
			if (bParam1)
			{
				func_272(0, -1, 1);
			}
			break;
		
		case 10:
			func_31(6, 0);
			if (bParam1)
			{
				func_334(2625.776f, 4802.217f, 32.5747f, 206f, 1, 0);
			}
			else
			{
				unk_0xC76B5C68AB6DC7DF(unk_0xC8B93D94F8954288(), 2625.776f, 4802.217f, 32.5747f, 1, 0, 0, 1);
				unk_0x765E3FA65D011F03(unk_0xC8B93D94F8954288(), 206.4254f);
				unk_0x8C67D2FDE360FBCA(0f);
				unk_0x0F9FDCEB321235AB(-7f, 1065353216);
				unk_0xBB93D72F9F571F61(2625.776f, 4802.217f, 32.5747f);
			}
			unk_0x9F0FFB655C4C4297(3);
			unk_0x007CAC85F0301094(3);
			unk_0x1BBA896A85FD74C9(uLocal_2672, 9);
			func_19(50, 2, 0, 1, 0);
			func_19(51, 2, 0, 1, 0);
			func_19(52, 2, 0, 1, 0);
			func_19(53, 2, 0, 1, 0);
			func_19(54, 1, 0, 1, 0);
			func_19(55, 1, 0, 1, 0);
			if (bParam1)
			{
				func_272(0, -1, 1);
			}
			break;
	}
}

void func_264(int iParam0, int iParam1, int iParam2)
{
	Local_3337[iParam0 /*4*/].f_1 = iParam2;
	Local_3337[iParam0 /*4*/] = iParam1;
}

void func_265(int iParam0, int iParam1, int iParam2)
{
	Local_3358[iParam0 /*7*/].f_1 = iParam2;
	Local_3358[iParam0 /*7*/] = iParam1;
}

Vector3 func_266(int iParam0, struct<3> Param1)
{
	var uVar0;
	
	Param1.f_2 = (Param1.f_2 + 0.15f);
	if (unk_0x32B7B9548CC32D81(Param1, &uVar0, 0))
	{
		Param1.f_2 = uVar0;
	}
	if (func_267(iParam0))
	{
		unk_0xC76B5C68AB6DC7DF(iParam0, Param1, 1, 0, 0, 1);
	}
	return Param1;
}

bool func_267(int iParam0)
{
	if (!unk_0x95CCECA3948CFE7B(iParam0))
	{
		return 0;
	}
	return !unk_0xB6900B8CB0ABBD2B(iParam0);
}

bool func_268()
{
	return Global_95323.f_2311.f_8;
}

var func_269(int iParam0)
{
	if (Global_91143 > 0)
	{
		return Global_95323.f_21[iParam0];
	}
	return Global_92918.f_21[iParam0];
}

float func_270()
{
	return Global_95323.f_2305.f_3;
}

Vector3 func_271()
{
	return Global_95323.f_2305;
}

void func_272(int iParam0, int iParam1, int iParam2)
{
	if (func_344() && func_274())
	{
		while (Global_91101 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x6F9EF355924EC498(0);
		if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
		{
			if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
			{
				unk_0x33A1196C1AC59747(unk_0xC8B93D94F8954288());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
			{
				if (unk_0x95CCECA3948CFE7B(iParam0))
				{
					if (unk_0x5D42322C7DB888D0(iParam0, 0))
					{
						if (!unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iParam0, 0))
						{
							unk_0x6D9DB313D50E9A0D(unk_0xC8B93D94F8954288(), iParam0, iParam1);
							unk_0x0F9FDCEB321235AB(0f, 1065353216);
							unk_0x8C67D2FDE360FBCA(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
			{
				unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 1, 0);
			}
		}
		unk_0x833155A2B2692695();
		func_273(0);
	}
}

void func_273(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x59A0729D503ED758(&(Global_91106.f_20), 13);
	}
	else
	{
		unk_0x77621132305B133B(&(Global_91106.f_20), 13);
	}
}

bool func_274()
{
	return unk_0xDCC86F723E82125E(Global_91106.f_20, 13);
}

void func_275(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (func_333())
		{
			if (func_330(func_332(), 10f, 20f, 9f, 1))
			{
				func_329();
				while (!func_328())
				{
					func_28(54455, 1);
				}
				if (bParam2)
				{
					iLocal_2506 = func_327(1994.387f, 3061.94f, 46.0491f, 50f);
				}
				else
				{
					iLocal_2506 = func_327(0f, 0f, 0f, 0f);
				}
			}
		}
	}
	else if (func_326())
	{
		func_324();
		while (!func_323())
		{
			func_28(544, 1);
		}
		iLocal_2506 = func_276(0f, 0f, 0f, 0f);
	}
	if (bParam1)
	{
		if (func_268())
		{
			if (unk_0x5D42322C7DB888D0(iLocal_2506, 0))
			{
				unk_0x6D9DB313D50E9A0D(unk_0xC8B93D94F8954288(), iLocal_2506, -1);
			}
		}
	}
}

int func_276(struct<3> Param0, float fParam3)
{
	return func_277(&(Global_95323.f_2311), Param0, fParam3, 0);
}

int func_277(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	var uVar5;
	int iVar8;
	
	if (func_322(uParam0))
	{
		if (func_162(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { *uParam0 };
			fParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (unk_0x6910AF369EAB6935(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam4 = 89.5f;
			}
		}
		if (func_321(uParam0))
		{
			unk_0x98371F41D43CDFA9(Param1, 5f, 1, 0, 0, 0);
			func_320(Param1, 5f, 0);
			iVar0 = unk_0xD53B4DCC7B2C8551(uParam0->f_12.f_66, Param1, fParam4, 1, 1);
			if (unk_0x95CCECA3948CFE7B(iVar0))
			{
				Var1 = { unk_0x44C17CCB85A88A1F(iVar0, 1) };
				if (unk_0xB7A628320EFF8E47(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0x636EE5A38E3EB8FF(iVar0, Param1, 0, 0, 1);
				}
				func_312(iVar0, &(uParam0->f_12), 0, 1);
				bVar4 = true;
				if (unk_0x9DABB329596B1BD6(uParam0->f_12.f_66) || unk_0xF77289726C4CC4D3(uParam0->f_12.f_66))
				{
					if (!unk_0xE775B5514089DF47(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar5))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					unk_0xF18809B65D87E197(iVar0);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
					{
						if (unk_0x1B477DDE9D088A91(unk_0x6D5BB810CC209E15(iVar0)))
						{
							func_311(uParam0->f_11, 1);
						}
						else if (unk_0xE6CB12C10EE5D793(unk_0x6D5BB810CC209E15(iVar0)))
						{
							func_311(uParam0->f_11, 2);
						}
					}
					unk_0xB7EC803E2C9CEC74(iVar0, 0);
					unk_0x328CAEC77C070FA5(iVar0, 0);
					unk_0x0CE9795408B4B974(iVar0, 1);
					func_310(iVar0, uParam0->f_11);
				}
				else if ((!func_308(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0xF8D041B05C3D1FD4(unk_0xC4E68AF0B559FAC4(), "startup_positioning"))
				{
					iVar8 = func_307(iVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_300(iVar8);
					}
				}
				if (((Global_91106 != 13 && Global_91106 != 10) && Global_91106 != 11) && Global_91106 != 12)
				{
					if (unk_0x7CBED6EFED40E7EB(&(Global_91106.f_3)) == Global_69174)
					{
						if (uParam0->f_12.f_66 == Global_100976.f_18751.f_69[21 /*78*/].f_66)
						{
							func_297(24, 0);
							func_300(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_278(iVar0, uParam0->f_11);
				}
				unk_0x4BBD72565A0AF033(uParam0->f_12.f_66);
				Var1 = { unk_0x44C17CCB85A88A1F(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_278(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_283(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xC0ADAF0814175B68(iParam0, -1);
		if (!unk_0x95CCECA3948CFE7B(iVar0))
		{
			iVar0 = unk_0xD58C042006468C27(iParam0, -1);
		}
		if (unk_0x95CCECA3948CFE7B(iVar0) && !unk_0x2DC9BA2299B45EA6(iVar0))
		{
			if (unk_0x6D5BB810CC209E15(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x6D5BB810CC209E15(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x6D5BB810CC209E15(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_100976.f_1770.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x6D5BB810CC209E15(iParam0) == Global_100976.f_18751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xB8A06E7E729EED0A(&(Global_100976.f_18751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0xF8D041B05C3D1FD4(unk_0xC51A0D06D98180EB(iParam0), &(Global_100976.f_18751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_100976.f_18751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_100976.f_18751.f_5592[iVar1] = iVar2;
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
		if (unk_0x6D5BB810CC209E15(iParam0) == Global_100976.f_18751.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xB8A06E7E729EED0A(&(Global_100976.f_18751.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0xF8D041B05C3D1FD4(unk_0xC51A0D06D98180EB(iParam0), &(Global_100976.f_18751.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_100976.f_18751.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_100976.f_18751.f_5590 = iParam1;
	Global_69091 = iParam0;
	Global_100976.f_18751.f_5588 = 1;
	func_279(iParam0, &(Global_100976.f_18751.f_5510));
}

void func_279(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		func_282(uParam1);
		uParam1->f_66 = unk_0x6D5BB810CC209E15(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xC51A0D06D98180EB(iParam0), 16);
		*uParam1 = unk_0x65979062393E9301(iParam0);
		unk_0xDDA7228DE9EEDB37(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xA968D095B4F299B6(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xD4344DD9CA88E065(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x9D206597121A7CCB(iParam0);
		uParam1->f_67 = unk_0x847A8FEE19DF1C6D(iParam0);
		uParam1->f_69 = unk_0xA57BDD31F092CE61(iParam0);
		uParam1->f_70 = unk_0xA6BAF129343F464F(iParam0);
		unk_0x06FD411B0A723EC9(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x3B7BDBECE2C4BB25(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x890D2A0FC3456199(iParam0, 2))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 28);
		}
		if (unk_0x890D2A0FC3456199(iParam0, 3))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 29);
		}
		if (unk_0x890D2A0FC3456199(iParam0, 0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 30);
		}
		if (unk_0x890D2A0FC3456199(iParam0, 1))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0xDFCA441625BB8A67(iParam0, 0))
		{
			uParam1->f_68 = unk_0x0033BC594211C96E(iParam0);
		}
		if (unk_0xE924C2C283992918(uParam1->f_66))
		{
			if (unk_0x3D62C266C7E526AD(iParam0))
			{
				switch (unk_0xFF4BF4EFFE3F002D(iParam0))
				{
					case 2:
					case 0:
						unk_0x77621132305B133B(&(uParam1->f_77), 23);
						unk_0x59A0729D503ED758(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0x77621132305B133B(&(uParam1->f_77), 23);
						unk_0x77621132305B133B(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0x59A0729D503ED758(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x59A0729D503ED758(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x675A13D93AEAE680(iParam0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 9);
		}
		if (unk_0x4B05424C051859E9(iParam0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 10);
		}
		if (unk_0xEAF6FD6E4D109266(iParam0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 13);
			unk_0xE089902DB3FDA244(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0xF518898EF441871E(iParam0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 12);
		}
		func_281(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xDB066BBA59B7D1EC(iParam0, iVar0 + 1))
			{
				unk_0x59A0729D503ED758(&(uParam1->f_77), func_280(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x40132F2ACE5F8B93(iParam0, 0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x77621132305B133B(&(uParam1->f_77), 11);
		}
		if (unk_0x3D32B80EFC48A92D(iParam0, "IgnoredByQuickSave") && unk_0xD903CC680ECAC86A(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x77621132305B133B(&(uParam1->f_77), 27);
		}
	}
}

int func_280(int iParam0)
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

int func_281(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x5D42322C7DB888D0(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x35C1534E81F87E96(*iParam0) == 0)
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
			if (unk_0x1AF9344BCD6B878A(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x342B167253E636DE(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xCABE66358519B3C4(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xCABE66358519B3C4(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_282(var uParam0)
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

int func_283(int iParam0)
{
	if ((((((((((!unk_0x95CCECA3948CFE7B(iParam0) || !unk_0x5D42322C7DB888D0(iParam0, 0)) || func_72(iParam0, 0, 0)) || func_72(iParam0, 1, 0)) || func_72(iParam0, 2, 0)) || func_296(iParam0) != 145) || func_295(iParam0)) || func_294(iParam0)) || func_293(iParam0)) || func_292(iParam0)) || !func_284(unk_0x6D5BB810CC209E15(iParam0)))
	{
		if (func_294(iParam0))
		{
		}
		if (func_294(iParam0))
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
		if (func_296(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_284(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_285(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0x9DABB329596B1BD6(iParam0) || unk_0xE924C2C283992918(iParam0)) || unk_0xAF40E7422A6D9D80(iParam0)) || unk_0xC9E810FB9A83EF58(iParam0))
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

int func_285(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x465E33AAA0C48359(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0xBBAE3E0C60A8AD4B())) || (iParam0 == joaat("buffalo3") && !unk_0xBBAE3E0C60A8AD4B())) || (iParam0 == joaat("gauntlet2") && !unk_0xBBAE3E0C60A8AD4B())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0xBBAE3E0C60A8AD4B())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_291())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x4BE9DEC2073C9C84())
		{
			if (unk_0x0486BD07D3026E5E(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x06C32703437E5BC3(Var1.f_0))
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
		if ((((!func_290() && !func_289()) && !func_288()) && !func_287()) && !func_291())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xF7FE713C9F786F8C() || unk_0x68B0A67658F2D9C2()) || unk_0x62F8BA7ED89768FB())
		{
		}
		else if (!func_288())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_286(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_286(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2457144)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x20F8506526D25CE0();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_4998 && !Global_262145.f_10806) && iVar1 < Global_262145.f_10807)
		{
			iVar0 = 0;
		}
	}
	iVar1 = unk_0x20F8506526D25CE0();
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_11360 && iVar1 < Global_262145.f_11366)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_11356 && iVar1 < Global_262145.f_11362)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_11357 && iVar1 < Global_262145.f_11363)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_11358 && iVar1 < Global_262145.f_11364)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_11359 && iVar1 < Global_262145.f_11365)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_11361 && iVar1 < Global_262145.f_11367)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_287()
{
	return 0;
}

int func_288()
{
	return 1;
}

int func_289()
{
	return 1;
}

int func_290()
{
	if (unk_0x9F37711843A20114(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_291()
{
	var uVar0;
	
	if (unk_0x964FE4B401FC8514())
	{
		if (unk_0x04A97E271BED9566())
		{
			if (unk_0x76C144FFABF149C3())
			{
				unk_0x5F0618A5FDAD55C4(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x59A0729D503ED758(&uVar0, 2);
				unk_0x59A0729D503ED758(&uVar0, 4);
				unk_0x59A0729D503ED758(&uVar0, 6);
				unk_0x59A0729D503ED758(&Global_25, 2);
				unk_0x59A0729D503ED758(&Global_25, 4);
				unk_0x59A0729D503ED758(&Global_25, 6);
				unk_0x071958EFED9481F5(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0xD205A6ACC9C010D3())
				{
					uVar0 = unk_0x11BD984A2A4EF9A7(866);
					unk_0x59A0729D503ED758(&uVar0, 0);
					unk_0x1F071A4E400AAE0A(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_138040 == 2)
	{
		return 1;
	}
	else if (Global_138040 == 3)
	{
		return 0;
	}
	if (unk_0xD205A6ACC9C010D3())
	{
		if (unk_0xDCC86F723E82125E(unk_0x11BD984A2A4EF9A7(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_292(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x6D5BB810CC209E15(iParam0);
	sVar1 = unk_0xC51A0D06D98180EB(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xF8D041B05C3D1FD4(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_285(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_293(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x95CCECA3948CFE7B(Global_88800[iVar0]))
		{
			if (Global_88800[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_294(int iParam0)
{
	int iVar0;
	
	if (unk_0x95CCECA3948CFE7B(iParam0) && unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x95CCECA3948CFE7B(Global_88770[iVar0]) && unk_0x5D42322C7DB888D0(Global_88770[iVar0], 0))
			{
				if (Global_88770[iVar0] == iParam0 && unk_0x6D5BB810CC209E15(Global_88770[iVar0]) == unk_0x6D5BB810CC209E15(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_295(int iParam0)
{
	int iVar0;
	
	if (unk_0x95CCECA3948CFE7B(Global_68186.f_484[24]))
	{
		if (iParam0 == Global_68186.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x95CCECA3948CFE7B(Global_68186.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_68186.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_296(int iParam0)
{
	int iVar0;
	
	if (!unk_0x95CCECA3948CFE7B(iParam0))
	{
		return 145;
	}
	if (!unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x95CCECA3948CFE7B(Global_88770[iVar0]))
		{
			if (Global_88770[iVar0] == iParam0)
			{
				return Global_88780[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

void func_297(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_299(iParam0, 0))
		{
			func_298(iParam0, 1, 0);
			func_298(iParam0, 2, 0);
			func_298(iParam0, 3, 0);
			func_298(iParam0, 4, 0);
			func_298(iParam0, 0, 1);
			Global_68186[iParam0] = 1;
		}
	}
	else
	{
		func_298(iParam0, 0, 0);
	}
}

void func_298(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x59A0729D503ED758(&(Global_100976.f_18751[iParam0]), iParam1);
	}
	else
	{
		unk_0x77621132305B133B(&(Global_100976.f_18751[iParam0]), iParam1);
	}
}

bool func_299(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xDCC86F723E82125E(Global_100976.f_18751[iParam0], iParam1);
}

void func_300(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_304(&(Global_68186.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x95CCECA3948CFE7B(Global_68186.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
			{
				if (unk_0x5D42322C7DB888D0(Global_68186.f_139[iParam0], 0))
				{
					if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), Global_68186.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0xFD816D0E738EB817(Global_68186.f_139[iParam0], 1, 1);
				unk_0x95F5F15D238A7F1C(&(Global_68186.f_139[iParam0]));
			}
		}
		Global_68186[iParam0] = 1;
		if (unk_0xDCC86F723E82125E(Global_68186.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_299(iParam0, 0)) && Global_69095.f_66 == 0) && Global_100976.f_18751.f_1958[Global_68186.f_555[0 /*21*/].f_14] != 0) && Global_100976.f_18751.f_1958[Global_68186.f_555[0 /*21*/].f_14] > 3) && (!func_302(0, Global_68186.f_555[0 /*21*/].f_12) || !func_302(1, Global_68186.f_555[0 /*21*/].f_12)))
			{
				func_301(&(Global_100976.f_18751.f_69[Global_68186.f_555[0 /*21*/].f_14 /*78*/]), &Global_69095);
				Global_69173 = Global_100976.f_18751.f_5591;
			}
			func_297(iParam0, 0);
		}
	}
}

void func_301(var uParam0, var uParam1)
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

int func_302(int iParam0, int iParam1)
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
	if (iParam0 < 0 || iParam0 >= func_303(&(Global_100976.f_18751.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_285(Global_100976.f_18751.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_303(var uParam0)
{
	return *uParam0;
}

int func_304(var uParam0, int iParam1)
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
			uParam0->f_4 = func_305(0, 1);
			uParam0->f_12 = 0;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 20);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_305(0, 1);
			uParam0->f_12 = 0;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 20);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_305(1, 1);
			uParam0->f_12 = 1;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 20);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_305(1, 2);
			uParam0->f_12 = 1;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 19);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_305(1, 1);
			uParam0->f_12 = 1;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 20);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_305(1, 2);
			uParam0->f_12 = 1;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 19);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_305(2, 1);
			uParam0->f_12 = 2;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 20);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_305(2, 1);
			uParam0->f_12 = 2;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 20);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_305(2, 1);
			uParam0->f_12 = 2;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 20);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 22);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 22);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 22);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 23);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 24);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 24);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 24);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 29);
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
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 27);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 24);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 29);
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
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 27);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 24);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 29);
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
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 27);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 24);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 11);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 13);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 11);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 13);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 9);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 9);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 23);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 23);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 23);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 8);
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
			unk_0x59A0729D503ED758(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 2);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 30);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 2);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 22);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 6);
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
			if (func_291())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 13);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 2);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 1);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 23);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_291())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 13);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 2);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 1);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 23);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 23);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 6);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 30);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 23);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 30);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 23);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xDCC86F723E82125E(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_100976.f_18751.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_162(Global_100976.f_18751.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_100976.f_18751.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_100976.f_18751.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_100976.f_18751.f_1934[uParam0->f_14];
		}
	}
	if (unk_0xDCC86F723E82125E(uParam0->f_9, 19))
	{
		if (!func_162(Global_100976.f_1770.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_100976.f_1770.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_100976.f_1770.f_539.f_2837[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xDCC86F723E82125E(uParam0->f_9, 20))
	{
		if (!func_162(Global_100976.f_1770.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_100976.f_1770.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_100976.f_1770.f_539.f_2837[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_305(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_45(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_306(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_306(int iParam0, var uParam1, int iParam2)
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
			if (Global_100976.f_7719.f_99.f_58[128] && !Global_100976.f_7719.f_99.f_58[131])
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
					if (Global_100976.f_7719.f_99.f_58[119])
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
			else if (Global_100976.f_7719.f_99.f_58[118])
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

int func_307(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((unk_0x95CCECA3948CFE7B(Global_68186.f_484[iVar0]) && !unk_0xB6900B8CB0ABBD2B(Global_68186.f_484[iVar0])) && unk_0x5D42322C7DB888D0(Global_68186.f_484[iVar0], 0))
		{
			unk_0xDDA7228DE9EEDB37(iParam0, &iVar1, &iVar2);
			unk_0xDDA7228DE9EEDB37(Global_68186.f_484[iVar0], &iVar3, &iVar4);
			if (((unk_0x6D5BB810CC209E15(iParam0) == unk_0x6D5BB810CC209E15(Global_68186.f_484[iVar0]) && unk_0x847A8FEE19DF1C6D(iParam0) == unk_0x847A8FEE19DF1C6D(Global_68186.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_308(int iParam0, struct<3> Param1, bool bParam4)
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;
	
	iVar0 = unk_0x6D5BB810CC209E15(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_309(iParam0, Global_68186.f_139[38], 0))
			{
				func_300(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_309(iParam0, Global_68186.f_139[43], 1))
			{
				func_300(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar5 = unk_0xF6C10CD660E6EF6F(unk_0xC8B93D94F8954288(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				if (func_309(iParam0, uVar1[iVar6], 1) && func_226(unk_0x44C17CCB85A88A1F(uVar1[iVar6], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam4 || func_162(Param1, 0f, 0f, 0f, 0)) || unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(iParam0, 1), unk_0x44C17CCB85A88A1F(uVar1[iVar6], 1), 1) < 10f)
					{
						unk_0x95F5F15D238A7F1C(&iParam0);
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
			if ((unk_0x95CCECA3948CFE7B(Global_68186.f_484[14]) && unk_0x5D42322C7DB888D0(iParam0, 0)) && unk_0x5D42322C7DB888D0(Global_68186.f_484[14], 0))
			{
				if (unk_0x6D5BB810CC209E15(Global_68186.f_484[14]) == joaat("luxor2") && unk_0x847A8FEE19DF1C6D(iParam0) == unk_0x847A8FEE19DF1C6D(Global_68186.f_484[14]))
				{
					func_300(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0x95CCECA3948CFE7B(Global_68186.f_484[20]) && unk_0x5D42322C7DB888D0(iParam0, 0)) && unk_0x5D42322C7DB888D0(Global_68186.f_484[20], 0))
			{
				if (unk_0x6D5BB810CC209E15(Global_68186.f_484[20]) == joaat("swift2") && unk_0x847A8FEE19DF1C6D(iParam0) == unk_0x847A8FEE19DF1C6D(Global_68186.f_484[20]))
				{
					func_300(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_309(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0x95CCECA3948CFE7B(iParam1) && !unk_0xB6900B8CB0ABBD2B(iParam1)) && unk_0x5D42322C7DB888D0(iParam1, 0))
	{
		if (bParam2)
		{
			unk_0xDDA7228DE9EEDB37(iParam0, &iVar0, &iVar1);
			unk_0xDDA7228DE9EEDB37(iParam1, &iVar2, &iVar3);
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

void func_310(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x95CCECA3948CFE7B(Global_88770[iVar0]))
		{
			Global_88770[iVar0] = iParam0;
			Global_88780[iVar0] = iParam1;
			Global_88790[iVar0] = unk_0x6D5BB810CC209E15(iParam0);
			if (unk_0x1B477DDE9D088A91(Global_88790[iVar0]))
			{
				Global_88818[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_88818[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_311(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x95CCECA3948CFE7B(Global_88770[iVar0]))
		{
			if (iParam0 == 145 || Global_88780[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x6D5BB810CC209E15(Global_88770[iVar0]) == func_305(iParam0, iParam1))
				{
					if (!unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), Global_88770[iVar0], 0))
					{
						unk_0xFD816D0E738EB817(Global_88770[iVar0], 0, 1);
						unk_0x95F5F15D238A7F1C(&(Global_88770[iVar0]));
						Global_88780[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_312(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		if (unk_0x7CBED6EFED40E7EB(&(uParam1->f_1)) != 0)
		{
			unk_0x673B8FB2A362DAB5(iParam0, &(uParam1->f_1));
		}
		if (*uParam1 >= 0 && *uParam1 < unk_0xC7D09CBF7C2546F7())
		{
			unk_0x6C4F5FC03FDA2437(iParam0, *uParam1);
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (unk_0xDCC86F723E82125E(uParam1->f_77, func_280(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x59A0729D503ED758(&(uParam1->f_77), func_280(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0xDCC86F723E82125E(uParam1->f_77, func_280(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x59A0729D503ED758(&(uParam1->f_77), func_280(iVar1 + 1));
			}
		}
		if (unk_0xDCC86F723E82125E(uParam1->f_77, 13))
		{
			unk_0x229FD8576AB121C8(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x4718361C877330F0(iParam0);
		}
		if (unk_0xDCC86F723E82125E(uParam1->f_77, 12))
		{
			unk_0x95E0D01C516B3324(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x60B0B54A3F5BBB0A(iParam0);
		}
		unk_0x46E519A001AC83B2(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0xBA41DA8B3B8610CF(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0xDCC86F723E82125E(uParam1->f_77, 15) || func_319(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_318())
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
		unk_0xC9FC7A550DB5A96C(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			unk_0x678F3A4FC4D97568(iParam0, 0);
		}
		else
		{
			unk_0x678F3A4FC4D97568(iParam0, 0);
			unk_0x678F3A4FC4D97568(iParam0, uParam1->f_65);
		}
		unk_0x473F2FDD337B5EEC(iParam0, !unk_0xDCC86F723E82125E(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0x0782F0CAEA719452(iParam0, uParam1->f_70);
		}
		unk_0x63A9CE7D42AC95BA(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0xD53208E9A6CE9B78(iParam0, 2, unk_0xDCC86F723E82125E(uParam1->f_77, 28));
		unk_0xD53208E9A6CE9B78(iParam0, 3, unk_0xDCC86F723E82125E(uParam1->f_77, 29));
		unk_0xD53208E9A6CE9B78(iParam0, 0, unk_0xDCC86F723E82125E(uParam1->f_77, 30));
		unk_0xD53208E9A6CE9B78(iParam0, 1, unk_0xDCC86F723E82125E(uParam1->f_77, 31));
		unk_0x59CE4F88873CD573(iParam0, unk_0xDCC86F723E82125E(uParam1->f_77, 10));
		if (unk_0xEA32C7A52A2F569E(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0x9137DD8DE2087478(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x7F43378ECD4F3CCD(unk_0x6D5BB810CC209E15(iParam0)))
			{
				if (unk_0xE6CB12C10EE5D793(unk_0x6D5BB810CC209E15(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_317(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_317(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0xDFCA441625BB8A67(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0x34D873E77AC07F92(iParam0, 1);
			}
			else
			{
				unk_0x5841B3DF0DA88634(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_313(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xAF40E7422A6D9D80(uParam1->f_66) && !unk_0x9DABB329596B1BD6(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0xDCC86F723E82125E(uParam1->f_77, func_280(iVar2 + 1)))
				{
					if (!unk_0xDB066BBA59B7D1EC(iParam0, iVar2 + 1))
					{
						unk_0xD69CBD64600FE923(iParam0, iVar2 + 1, 0);
					}
				}
				else if (unk_0xDB066BBA59B7D1EC(iParam0, iVar2 + 1))
				{
					unk_0xD69CBD64600FE923(iParam0, iVar2 + 1, 1);
				}
				iVar2++;
			}
		}
		if (unk_0xE924C2C283992918(uParam1->f_66))
		{
			if (!unk_0xDCC86F723E82125E(uParam1->f_77, 23))
			{
				if (unk_0xDCC86F723E82125E(uParam1->f_77, 22))
				{
					unk_0xAD20BE8460150C41(iParam0, 2);
				}
				else
				{
					unk_0xAD20BE8460150C41(iParam0, 3);
				}
			}
			else
			{
				unk_0xAD20BE8460150C41(iParam0, 4);
			}
		}
		if (unk_0xDCC86F723E82125E(uParam1->f_77, 27))
		{
			unk_0x00846EFB0166E192(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0x00846EFB0166E192(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_313(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x5D42322C7DB888D0(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x35C1534E81F87E96(*iParam0) == 0)
	{
		return 0;
	}
	unk_0x514497391E20233A(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0x866232B662B233F8(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0x342B167253E636DE(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x27B2F3A03C7EA235(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0xA05B0407D11A92AD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0xA05B0407D11A92AD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0xA05B0407D11A92AD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_316(unk_0x6D5BB810CC209E15(*iParam0), 1) && unk_0x342B167253E636DE(*iParam0, 24) != func_315(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0xA05B0407D11A92AD(*iParam0, 24, func_315(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	if (func_314(*iParam0))
	{
		unk_0x8AFC38C51DD8090D(*iParam0, 1);
		unk_0x0CE9795408B4B974(*iParam0, 1);
	}
	return 1;
}

int func_314(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0x95CCECA3948CFE7B(iParam0) && unk_0x5D42322C7DB888D0(iParam0, 0)) && unk_0x35C1534E81F87E96(iParam0) > 0)
	{
		unk_0x514497391E20233A(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x342B167253E636DE(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x2089F9858CC119AB(iParam0, iVar1, unk_0x342B167253E636DE(iParam0, iVar1)), 16);
				iVar2 = unk_0x7CBED6EFED40E7EB(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x7CBED6EFED40E7EB("MNU_CAGE") || iVar2 == unk_0x7CBED6EFED40E7EB("SABRE_CAG"))
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

int func_315(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0x95CCECA3948CFE7B(iParam0) && unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		switch (unk_0x6D5BB810CC209E15(iParam0))
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
		iVar0 = unk_0x5A17E198896CB6A0(iParam0, 38);
		iVar1 = unk_0x5A17E198896CB6A0(iParam0, 24);
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

int func_316(int iParam0, int iParam1)
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
			if (!Global_262145.f_11357)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_11358)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_11356)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_11359)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_11361)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_11360)
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
	}
	return 0;
}

void func_317(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x35C1534E81F87E96(iParam0) > 0)
	{
		unk_0x514497391E20233A(iParam0, 0);
		iVar0 = unk_0x342B167253E636DE(iParam0, 24);
		iVar1 = unk_0xCABE66358519B3C4(iParam0, 24);
		unk_0x158DC5D73A3B4A62(iParam0, uParam1);
		if (iVar0 == -1)
		{
			unk_0x27B2F3A03C7EA235(iParam0, 24);
		}
		else
		{
			unk_0xA05B0407D11A92AD(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_318()
{
	return unk_0x9F37711843A20114(joaat("mpindependence"));
}

int func_319(int iParam0)
{
	int iVar0;
	
	if (unk_0x95CCECA3948CFE7B(iParam0))
	{
		if (unk_0x5D42322C7DB888D0(iParam0, 0))
		{
			if (unk_0x9F7DDFEF511FDBD8("MPBitset", 3))
			{
				if (unk_0x3D32B80EFC48A92D(iParam0, "MPBitset"))
				{
					iVar0 = unk_0xFE76479AD91F5A0A(iParam0, "MPBitset");
				}
				return unk_0xDCC86F723E82125E(iVar0, 4);
			}
		}
	}
	return 0;
}

void func_320(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_304(&(Global_68186.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0x4F982ED5336EA899(Param0, Global_68186.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_300(iVar0);
			}
		}
		iVar0++;
	}
}

int func_321(var uParam0)
{
	if (func_322(uParam0))
	{
		if (unk_0x0845149A26DABBA5(uParam0->f_12.f_66))
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

int func_322(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_285(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_226(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_323()
{
	return func_321(&(Global_95323.f_2311));
}

void func_324()
{
	func_325(&(Global_95323.f_2311));
}

void func_325(var uParam0)
{
	if (func_322(uParam0))
	{
		unk_0x7567CEA8E6B5340B(uParam0->f_12.f_66);
	}
}

bool func_326()
{
	return func_322(&(Global_95323.f_2311));
}

int func_327(struct<3> Param0, float fParam3)
{
	return func_277(&(Global_92918.f_2311), Param0, fParam3, 0);
}

bool func_328()
{
	return func_321(&(Global_92918.f_2311));
}

void func_329()
{
	func_325(&(Global_92918.f_2311));
}

int func_330(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam4 == 1)
	{
		Param1 = { func_331() };
	}
	unk_0xA8349C905E4A8DE7(iParam0, &Var0, &Var3);
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

Vector3 func_331()
{
	return 2.55f, 5.665f, 2.55f;
}

int func_332()
{
	return Global_92918.f_2311.f_12.f_66;
}

bool func_333()
{
	return func_322(&(Global_92918.f_2311));
}

void func_334(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	if (func_344())
	{
		unk_0x6ECAEE4901F465A1(0);
		unk_0x77621132305B133B(&(Global_91106.f_20), 2);
		unk_0x6F9EF355924EC498(1);
		if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
		{
			unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 0, 0);
		}
		Global_91102 = { Param0 };
		Global_91105 = fParam3;
		Global_91101 = 1;
		if (iParam4 == 1)
		{
			unk_0x59A0729D503ED758(&(Global_91106.f_20), 14);
		}
		else
		{
			unk_0x77621132305B133B(&(Global_91106.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0x59A0729D503ED758(&(Global_91106.f_20), 24);
		}
		else
		{
			unk_0x77621132305B133B(&(Global_91106.f_20), 24);
		}
		func_273(1);
	}
}

int func_335(var uParam0, int iParam1, struct<3> Param2, int iParam5, bool bParam6)
{
	int iVar0;
	
	if (!func_45(iParam1))
	{
		iVar0 = func_337(iParam1);
		unk_0x7567CEA8E6B5340B(iVar0);
		if (unk_0x0845149A26DABBA5(iVar0))
		{
			if (unk_0x95CCECA3948CFE7B(*uParam0))
			{
				unk_0x26B3B761603F5232(uParam0);
			}
			*uParam0 = unk_0x71DD988C1B903F5D(26, iVar0, Param2, iParam5, 0, 0);
			unk_0x9AA5A07C66C84468(*uParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0x3A59BCC40A12FD28(*uParam0, 3) == 0)
				{
					unk_0x8C245572EDB27776(*uParam0, 5, 2, 0, 0);
				}
			}
			func_336(*uParam0, iParam1);
			if (bParam6)
			{
				unk_0x4BBD72565A0AF033(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_336(var uParam0, int iParam1)
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
	Global_87273[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_337(int iParam0)
{
	if (!func_45(iParam0))
	{
		return Global_100976.f_32519[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_338(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_178();
	func_179();
	func_180();
	func_177();
	unk_0x1B8A00409F0FAA8E();
	unk_0x9F0FFB655C4C4297(3);
	unk_0x007CAC85F0301094(3);
	iLocal_3491 = 0;
	iLocal_2649 = 0;
	iLocal_2645 = 0;
	iLocal_2512 = 0;
	iLocal_1614 = 0;
	iLocal_2646 = 0;
	iLocal_2879 = 0;
	iLocal_2880 = 0;
	while (unk_0x57CF017E37442A64())
	{
		if (unk_0x308528B5CF35F306())
		{
			unk_0x4BD8CF1B85740417(1);
		}
		else
		{
			unk_0xCDBEE0F3B4A74754();
		}
		func_28(0, 0);
	}
	if (unk_0x06A2030124FC73B9(uLocal_2650))
	{
		unk_0x7412597305E608CE(uLocal_2650);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_2651)
	{
		if (unk_0x06A2030124FC73B9(iLocal_2651[iVar0]))
		{
			unk_0x7412597305E608CE(iLocal_2651[iVar0]);
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
	unk_0x3FC2BA6A5AC4D02F(1f);
	func_342();
	unk_0x2544549FDE4C3A7E(0, 0, 3000, 1, 0, 0);
	unk_0x5269022A1D4CB9CC(0);
	func_186(0, 1, 1, 0);
	func_28(32, 0);
	unk_0x196C7025F0C44A36(1f);
	unk_0x7846F09C04C34C46();
	func_209(&Local_2683, 1, 0);
	func_66();
	func_64();
	unk_0x80D8D1CE9B26E9A3();
	unk_0x63E7E25783E6FD80(0);
	unk_0x5C6AA4866046D391(Vector(44.8113f, 4961.045f, 2469.985f) - Vector(100f, 100f, 100f), Vector(44.8113f, 4961.045f, 2469.985f) + Vector(100f, 100f, 100f), 1);
	if (iParam0 == 0)
	{
		unk_0xF3B031799E7F7016(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrm"), 1);
		unk_0xF3B031799E7F7016(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrmsml"), 1);
		unk_0xF3B031799E7F7016(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassairfrm"), 0);
		Global_33863 = 1;
	}
	unk_0x44AE6172657CB680("AZL_CHN2_METH_LAB_FARM_FIRE", 0, 1);
	if (iParam0 != 3)
	{
		unk_0x5B9B55E417A44413("Chinese2_Lunch", 1);
		unk_0x5B9B55E417A44413("CHINESE2_HILLBILLIES", 0);
	}
	unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 1, 0);
	if (iLocal_2884 != -1)
	{
		if (unk_0xDA33F6DC6574B8DD(iLocal_2884))
		{
			unk_0x78DFC4B56BCF3DA9(iLocal_2884);
		}
	}
	if (iParam0 == 1 || iParam0 == 2)
	{
		func_340(unk_0xC8B93D94F8954288(), 2);
	}
	iVar0 = 0;
	while (iVar0 < Local_755.f_0)
	{
		if (iVar0 == 14)
		{
		}
		if (unk_0x95CCECA3948CFE7B(Local_755[iVar0 /*33*/]))
		{
			if (!unk_0x2DC9BA2299B45EA6(Local_755[iVar0 /*33*/]))
			{
				if (iParam0 == 3)
				{
					unk_0xBA73099E237C7E5E(Local_755[iVar0 /*33*/]);
				}
			}
			if (iParam0 == 0 || iParam0 == 2)
			{
				if (iVar0 == 14)
				{
				}
				if (!unk_0x2DC9BA2299B45EA6(Local_755[iVar0 /*33*/]))
				{
					unk_0xF1A02DDEC7E15D6E(Local_755[iVar0 /*33*/], 1);
					unk_0x459A6F82E024C891(&(Local_755[iVar0 /*33*/]));
				}
			}
			else
			{
				if (iVar0 == 14)
				{
				}
				unk_0x26B3B761603F5232(&(Local_755[iVar0 /*33*/]));
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
		if (unk_0x95CCECA3948CFE7B(Local_755[iVar0 /*33*/].f_20))
		{
			unk_0xA278ECBE30D8AE4F(&(Local_755[iVar0 /*33*/].f_20));
		}
		unk_0xC2389B725A8A1CD3(Local_755[iVar0 /*33*/].f_24);
		iVar0++;
	}
	if (iParam0 != 3)
	{
		func_339();
	}
	else
	{
		func_202(&Local_1619, &uLocal_2708, cLocal_2338, 12f, 2482.197f, 4975.367f, 44.7288f, 121f, 1);
	}
	if (unk_0x95CCECA3948CFE7B(iLocal_2878))
	{
		unk_0xA278ECBE30D8AE4F(&iLocal_2878);
	}
	if (iParam0 != 0 && iParam0 != 2)
	{
		unk_0x98371F41D43CDFA9(2438.433f, 4970.416f, 53.1778f, 450f, 1, 0, 0, 0);
		unk_0x0184403F1C1A3769(2442.69f, 4970.348f, 46.33f, 30f);
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
	if (unk_0x6B4865E08E90ACC5(uLocal_2677))
	{
		unk_0x5356E82C1E5E0C44(&uLocal_2677);
	}
	iVar1 = 0;
	while (iVar1 < iLocal_2657)
	{
		if (unk_0x95CCECA3948CFE7B(iLocal_2657[iVar1]))
		{
			unk_0xA278ECBE30D8AE4F(&(iLocal_2657[iVar1]));
		}
		iVar1++;
	}
	if (unk_0x95CCECA3948CFE7B(iLocal_2506))
	{
		if (iParam0 != 0 && iParam0 != 2)
		{
			if (unk_0x5D42322C7DB888D0(iLocal_2506, 0))
			{
				if (unk_0x1F59F772AA90087D(iLocal_2506, 1))
				{
					if (unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
					{
						unk_0xEF84021B2AB5E334(&iLocal_2506);
					}
					else
					{
						unk_0xEF84021B2AB5E334(&iLocal_2506);
					}
				}
			}
		}
	}
	if (unk_0x95CCECA3948CFE7B(iLocal_2507))
	{
		if (iParam0 != 0)
		{
			if (unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
			{
				unk_0xEF84021B2AB5E334(&iLocal_2507);
			}
			else
			{
				unk_0xEF84021B2AB5E334(&iLocal_2507);
			}
		}
		else
		{
			unk_0xEF84021B2AB5E334(&iLocal_2507);
		}
	}
	if (unk_0x95CCECA3948CFE7B(iLocal_2508))
	{
		if (func_68(iLocal_2508))
		{
			unk_0xEF84021B2AB5E334(&iLocal_2508);
		}
	}
	if (unk_0x06A2030124FC73B9(uLocal_2675))
	{
		unk_0x7412597305E608CE(uLocal_2675);
	}
	if (iParam0 == 0)
	{
		if (unk_0x95CCECA3948CFE7B(iLocal_2680))
		{
			unk_0xB7A2078CD1C9A82F(iLocal_2680, 0);
			unk_0xC2BB205CCEB68102(&iLocal_2680);
		}
		if (unk_0x95CCECA3948CFE7B(iLocal_2681))
		{
			unk_0xB7A2078CD1C9A82F(iLocal_2681, 0);
			unk_0xC2BB205CCEB68102(&iLocal_2681);
		}
	}
	if (unk_0x95CCECA3948CFE7B(iLocal_2642))
	{
		unk_0x26B3B761603F5232(&iLocal_2642);
	}
	unk_0x463EC802525767F5(2439.687f, 4971.541f, 45.9442f, 150f);
	if (iParam0 != 2)
	{
		if (unk_0x95CCECA3948CFE7B(Local_755[12 /*33*/]))
		{
			unk_0x26B3B761603F5232(&(Local_755[12 /*33*/]));
		}
		if (unk_0x95CCECA3948CFE7B(Local_755[13 /*33*/]))
		{
			unk_0x26B3B761603F5232(&(Local_755[13 /*33*/]));
		}
		if (unk_0x95CCECA3948CFE7B(Local_755[14 /*33*/]))
		{
			unk_0x26B3B761603F5232(&(Local_755[14 /*33*/]));
		}
		if (unk_0x95CCECA3948CFE7B(Local_755[11 /*33*/]))
		{
			unk_0x26B3B761603F5232(&(Local_755[11 /*33*/]));
		}
		if (unk_0x95CCECA3948CFE7B(Local_755[10 /*33*/]))
		{
			unk_0x26B3B761603F5232(&(Local_755[10 /*33*/]));
		}
	}
	unk_0x4BBD72565A0AF033(joaat("a_m_m_hillbilly_01"));
	unk_0x4BBD72565A0AF033(joaat("a_m_m_hillbilly_02"));
	unk_0x4BBD72565A0AF033(joaat("prop_cs_fertilizer"));
	unk_0x4BBD72565A0AF033(joaat("burrito"));
	unk_0x4BBD72565A0AF033(joaat("ig_janet"));
	unk_0x4BBD72565A0AF033(joaat("ig_old_man1a"));
	unk_0x4BBD72565A0AF033(joaat("ig_old_man2"));
	unk_0x4BBD72565A0AF033(joaat("ig_taocheng"));
	unk_0x4BBD72565A0AF033(joaat("ig_taostranslator"));
	unk_0x4BBD72565A0AF033(joaat("ig_janet"));
	unk_0xA6045DDE5A17C533("move_m@gangster@var_e");
	unk_0xA6045DDE5A17C533("move_m@gangster@var_f");
	unk_0xA6045DDE5A17C533("move_m@gangster@generic");
	unk_0x3ECF1E41E6ED71D8("misschinese2_barrelRoll");
	unk_0x3ECF1E41E6ED71D8("reaction@male_stand@big_variations@b");
	unk_0x3ECF1E41E6ED71D8("reaction@male_stand@big_intro@left");
	unk_0x3ECF1E41E6ED71D8("reaction@male_stand@big_intro@right");
	unk_0x3ECF1E41E6ED71D8("reaction@male_stand@big_intro@backward");
	unk_0x3ECF1E41E6ED71D8("misschinese2_bank1");
	unk_0x3ECF1E41E6ED71D8("misschinese2_bank5");
	unk_0x3ECF1E41E6ED71D8("misschinese2_crystalmazemcs1_ig");
	if (iParam0 != 3)
	{
		if (unk_0xD6B965E92DB098CE(unk_0xC8B93D94F8954288(), joaat("weapon_petrolcan"), 0))
		{
			unk_0xDDA35844870E2C3A(unk_0xC8B93D94F8954288(), joaat("weapon_petrolcan"));
		}
	}
	iLocal_2641 = 0;
	iLocal_751 = 0;
	if (unk_0xB5F5536784683C33("CHI_2_DRIVE_TO_FARMHOUSE"))
	{
		unk_0xDB9D78E5137EE7AD("CHI_2_DRIVE_TO_FARMHOUSE");
	}
	if (unk_0xB5F5536784683C33("CHI_2_DRIVE_ROCK_RADIO"))
	{
		unk_0xDB9D78E5137EE7AD("CHI_2_DRIVE_ROCK_RADIO");
	}
	if (unk_0xB5F5536784683C33("CHI_2_FARMHOUSE_OVERVIEW"))
	{
		unk_0xDB9D78E5137EE7AD("CHI_2_FARMHOUSE_OVERVIEW");
	}
	if (unk_0xB5F5536784683C33("CHI_2_SHOOTOUT_STEALTH"))
	{
		unk_0xDB9D78E5137EE7AD("CHI_2_SHOOTOUT_STEALTH");
	}
	if (unk_0xB5F5536784683C33("CHI_2_SHOOTOUT_ENEMIES_ALERTED"))
	{
		unk_0xDB9D78E5137EE7AD("CHI_2_SHOOTOUT_ENEMIES_ALERTED");
	}
	if (unk_0xB5F5536784683C33("CHI_2_POUR_GAS"))
	{
		unk_0xDB9D78E5137EE7AD("CHI_2_POUR_GAS");
	}
	if (unk_0xB5F5536784683C33("CHI_2_SHOOT_GAS"))
	{
		unk_0xDB9D78E5137EE7AD("CHI_2_SHOOT_GAS");
	}
	if (unk_0xB5F5536784683C33("CHI_2_GAS_TRAIL_FIRE"))
	{
		unk_0xDB9D78E5137EE7AD("CHI_2_GAS_TRAIL_FIRE");
	}
	if (unk_0xB5F5536784683C33("CHI_2_RAYFIRE"))
	{
		unk_0xDB9D78E5137EE7AD("CHI_2_RAYFIRE");
	}
	unk_0x8F9EDB48A60C0C79();
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
		uLocal_2672 = unk_0xBFFB3E6573626E32(2457.15f, 4968.79f, 48.677f, 45f, "DES_FarmHs");
		if (iLocal_2673)
		{
			if (unk_0x99D920160DDD0D7D(uLocal_2672))
			{
				unk_0x1BBA896A85FD74C9(uLocal_2672, 2);
			}
			iLocal_2673 = 0;
		}
	}
}

void func_339()
{
	unk_0x50594501C2142BD0(joaat("DEFAULT"), 31);
}

void func_340(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x95CCECA3948CFE7B(iParam0))
	{
		if (unk_0xA51F11E1DC7307BB(iParam0, &iVar0, 0))
		{
			if (iVar0 != 0 && iVar0 != joaat("weapon_unarmed"))
			{
				if (!func_341(iParam1, iVar0))
				{
					iVar0 = 0;
				}
			}
		}
	}
	if (Global_91143 > 0)
	{
		Global_95323.f_21[iParam1] = iVar0;
	}
	else
	{
		Global_92918.f_21[iParam1] = iVar0;
	}
}

int func_341(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_91143 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_95323.f_812[iParam0 /*284*/][iVar0 /*3*/] == iParam1)
			{
				if (Global_95323.f_812[iParam0 /*284*/][iVar0 /*3*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			if (Global_95323.f_812[iParam0 /*284*/].f_133[iVar0 /*3*/] == iParam1)
			{
				if (Global_95323.f_812[iParam0 /*284*/].f_133[iVar0 /*3*/].f_1 > 0)
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
			if (Global_92918.f_812[iParam0 /*284*/][iVar0 /*3*/] == iParam1)
			{
				if (Global_92918.f_812[iParam0 /*284*/][iVar0 /*3*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			if (Global_92918.f_812[iParam0 /*284*/].f_133[iVar0 /*3*/] == iParam1)
			{
				if (Global_92918.f_812[iParam0 /*284*/].f_133[iVar0 /*3*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_342()
{
	int iVar0;
	
	Global_55688 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_55689[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

int func_343()
{
	if (!Global_91106 == 10 && !Global_91106 == 9)
	{
		return 0;
	}
	return Global_91106.f_2;
}

int func_344()
{
	if (Global_91106 == 10 || Global_91106 == 9)
	{
		return 1;
	}
	return 0;
}

void func_345(var uParam0, char* sParam1, int iParam2, char* sParam3)
{
	*uParam0 = sParam3;
	uParam0->f_1 = sParam1;
	uParam0->f_2 = iParam2;
}

void func_346()
{
	unk_0x4A606A8BE6924115("MYFRIEND", &iLocal_1615);
	unk_0x4A606A8BE6924115("FOE", &iLocal_1616);
	unk_0x4A606A8BE6924115("IGNORE", &iLocal_1617);
	unk_0x4A606A8BE6924115("BARpeds", &iLocal_2636);
	unk_0x6CCF5F545348D54E(3, iLocal_2636, joaat("player"));
	unk_0x6CCF5F545348D54E(5, unk_0xBD4278CDF5C53C71(unk_0xC8B93D94F8954288()), iLocal_1616);
	unk_0x6CCF5F545348D54E(5, iLocal_1616, unk_0xBD4278CDF5C53C71(unk_0xC8B93D94F8954288()));
	unk_0x6CCF5F545348D54E(2, iLocal_1615, iLocal_1617);
	unk_0x6CCF5F545348D54E(2, iLocal_1616, iLocal_1617);
	unk_0x6CCF5F545348D54E(2, iLocal_1617, unk_0xBD4278CDF5C53C71(unk_0xC8B93D94F8954288()));
	unk_0x6CCF5F545348D54E(2, iLocal_1617, iLocal_1616);
}

void func_347()
{
	switch (iLocal_3688)
	{
		case 0:
			if (iLocal_2511 >= 4)
			{
				func_348(1, "Snipe from hill", 0, 0, 0, 1);
				iLocal_3688++;
			}
			break;
		
		case 1:
			if (iLocal_2511 >= 4 && iLocal_2511 < 7)
			{
				if (func_87(12) || iLocal_2511 == 6)
				{
					func_348(2, "Inside House", 0, 0, 0, 1);
					iLocal_3688++;
				}
			}
			else if (iLocal_2511 == 7)
			{
				if (unk_0xD6B965E92DB098CE(unk_0xC8B93D94F8954288(), joaat("weapon_petrolcan"), 0))
				{
					func_348(2, "Inside House", 0, 0, 0, 1);
					iLocal_3688++;
				}
			}
			else if (iLocal_2511 > 7)
			{
				func_348(2, "Inside House", 0, 0, 0, 1);
				iLocal_3688++;
			}
			break;
		
		case 2:
			if (iLocal_2511 >= 7)
			{
				func_348(3, "Pour petrol trail", 0, 0, 0, 1);
				iLocal_3688++;
			}
			break;
		
		case 3:
			if (iLocal_2511 == 9)
			{
				func_348(4, "Leave the farm house", 1, 0, 0, 1);
				iLocal_3688++;
			}
			break;
	}
}

void func_348(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
		if (!unk_0xF8D041B05C3D1FD4("FinaleC2", unk_0xC4E68AF0B559FAC4()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_91143)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_91143)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_407(1);
		if (iParam0 <= Global_91143)
		{
		}
		iVar1 = func_405(unk_0xC4E68AF0B559FAC4(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_100976.f_7719.f_330[iVar1 /*6*/].f_1 = 0;
			uVar2 = func_403(iVar1);
			cVar3 = { Global_82227[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_100976.f_7719.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			unk_0x0EC76B17C2D30E27(&cVar3, uVar2, Global_91143, iParam0);
		}
		else
		{
			iVar5 = func_398(unk_0xC4E68AF0B559FAC4(), 1);
			if (iVar5 != -1)
			{
				Global_100976.f_17208[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {func_397(iVar5)}, 4);
				unk_0x0EC76B17C2D30E27(&uVar6, 0, Global_91143, iParam0);
			}
			else
			{
				iVar10 = func_396(&(Global_91106.f_3));
				if (iVar10 > -1)
				{
					Global_100976.f_29455.f_4[iVar10] = 0;
				}
			}
		}
		Global_85617 = iParam2;
		Global_91143 = iParam0;
		func_349(iParam0, sParam1, iParam4, iParam5);
		if (unk_0xF8D041B05C3D1FD4(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_91143)
	{
	}
}

void func_349(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_350(&Global_95323, unk_0xC4E68AF0B559FAC4(), iParam0, uParam1, iParam3, iParam2);
}

void func_350(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_43();
	uParam0->f_1 = func_385();
	unk_0xAEDF42A60D36F56B(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		func_373(&(uParam0->f_2305), 0);
		func_372(unk_0xC8B93D94F8954288());
		func_366(unk_0xC8B93D94F8954288(), 0);
		unk_0xA51F11E1DC7307BB(unk_0xC8B93D94F8954288(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_100976.f_1770.f_539.f_294[iVar1];
		if (iVar1 == func_365())
		{
			func_359(unk_0xC8B93D94F8954288(), &(uParam0->f_616[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_90896[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_90896[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_90896[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_90896[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_90896[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_90896[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_90896[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_90896[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_90896[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_90896[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/] = { Global_100976.f_1770.f_539.f_298[iVar1 /*284*/][iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] = { Global_100976.f_1770.f_539.f_298[iVar1 /*284*/].f_133[iVar0 /*3*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_100976.f_25033.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_52834[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_100976.f_1770.f_539.f_1635[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_100976.f_1770.f_539.f_1635[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2259[iVar1 /*15*/][iVar0] = Global_100976.f_1770.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2259[iVar1 /*15*/].f_5[iVar0] = Global_100976.f_1770.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2259[iVar1 /*15*/].f_10[iVar0] = Global_100976.f_1770.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_1766[iVar1 /*164*/][iVar0] = Global_100976.f_1770[iVar1 /*164*/][iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_4[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_8[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_12[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_16[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_20[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_24[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_28[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_32[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_36[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_40[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_44[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_48[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_52[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_56[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_60[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_64[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_68[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_72[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_76[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_80[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_84[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_88[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_92[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_96[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_100[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_104[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_108[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_112[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_116[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_120[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_124[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_128[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_132[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_136[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_140[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_144[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_148[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_152[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_156[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_160[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0x5F0618A5FDAD55C4(joaat("sp0_special_ability"), &(uParam0->f_1762[0]), -1);
	unk_0x5F0618A5FDAD55C4(joaat("sp1_special_ability"), &(uParam0->f_1762[1]), -1);
	unk_0x5F0618A5FDAD55C4(joaat("sp2_special_ability"), &(uParam0->f_1762[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_352(&(uParam0->f_2311), uParam0, iParam5, 1, 1, 0);
	}
	func_351(&(uParam0->f_2401));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_351(var uParam0)
{
	*uParam0 = Global_87288;
	uParam0->f_1 = Global_87289;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_352(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0xC8B93D94F8954288();
	}
	if (unk_0x95CCECA3948CFE7B(iParam2))
	{
		uParam1->f_5 = func_46(iParam2);
	}
	if (func_358(iParam2, &iVar0, iParam3, iParam5))
	{
		func_353(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0x95CCECA3948CFE7B(iVar0))
	{
		if (!unk_0xB6900B8CB0ABBD2B(iVar0))
		{
			if (unk_0x6B89D299CB2A726F(iVar0, joaat("skylift")) && unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iVar0, 0))
			{
				func_353(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_353(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0x5D42322C7DB888D0(iParam2, 0))
	{
		func_355(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_354(iParam2))
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

int func_354(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_91106.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_355(var uParam0, int iParam1, int iParam2)
{
	func_279(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_357(iParam1, 145, 0);
	uParam0->f_11 = func_296(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_356(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0x44C17CCB85A88A1F(iParam1, 1) };
		uParam0->f_6 = unk_0x59DD203239FBDCAD(iParam1);
		uParam0->f_3 = { unk_0x3A5C3B481EEBA95F(iParam1) };
		if (unk_0x8DF850DA069BF37C(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_69091 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_356(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x95CCECA3948CFE7B(Global_68186.f_484[iVar0]))
		{
			if (iParam0 == Global_68186.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_357(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x95CCECA3948CFE7B(iParam0))
	{
		return 0;
	}
	if (!unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x95CCECA3948CFE7B(Global_88770[iVar0]))
		{
			if (Global_88770[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_88780[iVar0])
				{
					if (iParam2 == 0 || unk_0x6D5BB810CC209E15(iParam0) == func_305(iParam1, iParam2))
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

int func_358(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (unk_0x95CCECA3948CFE7B(iParam0))
	{
		if (!unk_0x2DC9BA2299B45EA6(iParam0))
		{
			if (iParam0 == unk_0xC8B93D94F8954288())
			{
				*uParam1 = unk_0x974516F979AD07BC();
			}
			else
			{
				*uParam1 = unk_0x275BEBE583A163B5(iParam0, 1);
			}
			if (unk_0x95CCECA3948CFE7B(*uParam1))
			{
				if (unk_0x5D42322C7DB888D0(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(*uParam1, 1), unk_0x44C17CCB85A88A1F(iParam0, 1), 1) < 100f)
					{
						if (unk_0x6B89D299CB2A726F(*uParam1, joaat("taxi")))
						{
							if (unk_0xC0ADAF0814175B68(*uParam1, -1) != iParam0 && unk_0xC0ADAF0814175B68(*uParam1, -1) != 0)
							{
								return 0;
							}
						}
						if (func_72(*uParam1, func_43(), 1))
						{
							sVar0 = unk_0xC4E68AF0B559FAC4();
							if (!unk_0xF8D041B05C3D1FD4(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x277ECDA23D8CCEB4(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0x3D32B80EFC48A92D(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0xD903CC680ECAC86A(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0x6B89D299CB2A726F(*uParam1, joaat("blimp")))
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

void func_359(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		iVar0 = func_46(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_364(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_363(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_45(iVar0))
		{
			uParam1->f_59 = Global_100976.f_1770.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_100976.f_1770.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_100976.f_1770.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_100976.f_1770.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_100976.f_1770.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_100976.f_1770.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0xBBAE3E0C60A8AD4B() && unk_0x6D5BB810CC209E15(iParam0) == unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()))
		{
			if (func_362(161, -1))
			{
				uParam1->f_59 = func_360(2040, Global_69176, 0);
			}
			else
			{
				uParam1->f_59 = func_360(742, Global_69176, 0);
			}
			uParam1->f_60 = func_360(743, Global_69176, 0);
			uParam1->f_61 = func_360(744, Global_69176, 0);
		}
		if (unk_0xBBAE3E0C60A8AD4B() && iParam0 == unk_0xC8B93D94F8954288())
		{
			if (func_362(161, -1))
			{
				uParam1->f_59 = func_360(2040, Global_69176, 0);
			}
			else
			{
				uParam1->f_59 = func_360(742, Global_69176, 0);
			}
		}
	}
}

int func_360(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2466774[iParam0 /*5*/][func_361(iParam1)];
	if (unk_0x5F0618A5FDAD55C4(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_361(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_191();
		if (iVar1 > -1)
		{
			Global_2466487 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2466487 = 1;
		}
	}
	return iVar0;
}

int func_362(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2486871[iParam0 /*5*/][func_361(iParam1)];
	if (unk_0xC7E465DF93CF8F2C(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_363(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_46(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xFEBA5661B4F1602A(iParam0, iParam1);
		*uParam3 = unk_0x92A7B7367F7CD521(iParam0, iParam1);
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
				if (unk_0x01857CD66B677E58(iParam0) && unk_0x717460B5CC97C071(iParam0) != -1)
				{
					*uParam2 = unk_0x717460B5CC97C071(iParam0);
					*uParam3 = unk_0x8C6B46522DE9188B(iParam0);
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

void func_364(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_46(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x3A59BCC40A12FD28(iParam0, iParam1);
		*uParam3 = unk_0x268F3DC177BF5D38(iParam0, iParam1);
		*uParam4 = unk_0x8005AF704B3AAC41(iParam0, iParam1);
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

int func_365()
{
	func_44();
	return Global_100976.f_1770.f_539.f_3549;
}

void func_366(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_46(iParam0);
	if (func_45(iVar0) && !unk_0x2DC9BA2299B45EA6(iParam0))
	{
		if (iParam0 == unk_0xC8B93D94F8954288())
		{
			func_367(iParam0, &(Global_100976.f_1770.f_539.f_298[iVar0 /*284*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_100976.f_1770.f_539.f_1151[iVar2 /*4*/][iVar0] = unk_0x68979DA3F0A45AD3(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0xCF1225B677633282();
					if (Global_100976.f_1770.f_539.f_1151[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_100976.f_1770.f_539.f_1184 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0xF47D44C23C049FFF(unk_0xA34E7C2A5118D638(), &uVar3);
			if (iVar0 == 0)
			{
				unk_0x071958EFED9481F5(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0x071958EFED9481F5(joaat("sp1_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0x071958EFED9481F5(joaat("sp2_parachute_current_tint"), uVar3, 1);
			}
		}
	}
}

void func_367(int iParam0, var uParam1)
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
	
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
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
			iVar3 = func_371(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = unk_0x84C891BE623471ED(iParam0, func_371(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0xCE69853977E75052(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					unk_0x59A0729D503ED758(&(Var4.f_2), (20 + unk_0x6C2E2852D6DF0F8F(iParam0, Var4.f_0)));
					if (Var4.f_1 == -1)
					{
						if (!unk_0x7063369AF8640406(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*3*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_369(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0x961525D327D920F6(iParam0, Var4.f_0, iVar2))
						{
							unk_0x59A0729D503ED758(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_369(Var4.f_0, iVar1);
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
		iVar8 = unk_0xBF63A843F5FFBEF2();
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if ((unk_0xE8067788A3D17AD6(iVar7, &Var9) && !func_368(Var9.f_1)) && iVar70 < 50)
			{
				if (!unk_0x06C32703437E5BC3(Var9.f_0))
				{
					Var4.f_0 = Var9.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_1 = unk_0xCE69853977E75052(iParam0, Var4.f_0);
					if (unk_0xD6B965E92DB098CE(iParam0, Var4.f_0, 0))
					{
						unk_0x59A0729D503ED758(&(Var4.f_2), (20 + unk_0x6C2E2852D6DF0F8F(iParam0, Var4.f_0)));
					}
					else
					{
						unk_0x59A0729D503ED758(&(Var4.f_2), 20);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0x7063369AF8640406(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_133[iVar70 /*3*/].f_1 = Var4.f_1;
					iVar1 = 0;
					while (iVar1 < unk_0x54B3723DF8B16C85(iVar7))
					{
						if (unk_0x81718480430D1749(iVar7, iVar1, &Var48))
						{
							if (unk_0x961525D327D920F6(iParam0, Var4.f_0, Var48.f_3))
							{
								unk_0x59A0729D503ED758(&(Var4.f_2), iVar1);
							}
						}
						iVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0xD6B965E92DB098CE(iParam0, Var4.f_0, 0))
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

int func_368(int iParam0)
{
	if (unk_0xBBAE3E0C60A8AD4B())
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
				return 1;
				break;
			}
	}
	return 0;
}

int func_369(int iParam0, int iParam1)
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
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
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
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_370(iParam0, &uVar2);
				if (iVar1 != -1)
				{
					if (iParam1 < unk_0x54B3723DF8B16C85(iVar1))
					{
						if (unk_0x81718480430D1749(iVar1, iParam1, &Var41))
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

int func_370(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0xBF63A843F5FFBEF2();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0xE8067788A3D17AD6(iVar0, uParam1))
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

int func_371(int iParam0)
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

void func_372(int iParam0)
{
	int iVar0;
	
	iVar0 = func_46(iParam0);
	if (func_45(iVar0) && !unk_0x2DC9BA2299B45EA6(iParam0))
	{
		Global_100976.f_1770.f_539.f_294[iVar0] = unk_0x590AD2E91FB5951F(iParam0);
	}
}

void func_373(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	
	*uParam0 = { unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1) };
	uParam0->f_3 = unk_0x59DD203239FBDCAD(unk_0xC8B93D94F8954288());
	uParam0->f_5 = unk_0x2D8DDFACF37FA95F(unk_0xC8B93D94F8954288());
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		uParam0->f_4 = unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638());
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
	else if (unk_0xCBC8FFE55DC722B5(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (unk_0xDCC86F723E82125E(Global_69565, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (unk_0xDCC86F723E82125E(Global_69565, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (unk_0xDCC86F723E82125E(Global_69565, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (unk_0xDCC86F723E82125E(Global_69565, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0x6907EB47FC00DB19(unk_0xC8B93D94F8954288()) == unk_0x4C910D0CCCE65059(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0))
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
		if (func_376(&iVar0))
		{
			if (func_375(iVar0, &Var1, &uVar4))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
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
		else if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_374(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_374(struct<3> Param0, char* sParam3, struct<3> Param4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xE836A83D85A0F1C3(Param0))
	{
		iVar0 = unk_0x4C910D0CCCE65059(Param4, sParam3);
		if (!unk_0x8F89BA1339F45476(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x69E41FB7F39924FA(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_375(int iParam0, var uParam1, var uParam2)
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
	}
	return !func_162(*uParam1, 0f, 0f, 0f, 0);
}

int func_376(var uParam0)
{
	if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()) && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		if (func_34())
		{
			*uParam0 = func_381(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), 5, -1, 0, 1, -1);
			if (func_380(*uParam0) && !func_377(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_377(int iParam0)
{
	return func_378(iParam0, 0, 1);
}

int func_378(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xDCC86F723E82125E(Global_91158.f_1300[iParam0], iParam1);
	}
	else if (unk_0xBBAE3E0C60A8AD4B())
	{
		if (func_25() == 0)
		{
			return unk_0xDCC86F723E82125E(func_360(func_379(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xDCC86F723E82125E(Global_100976.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_379(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 817;
			break;
		
		case 1:
			return 818;
			break;
		
		case 2:
			return 819;
			break;
		
		case 3:
			return 820;
			break;
		
		case 4:
			return 821;
			break;
		
		case 5:
			return 822;
			break;
		
		case 6:
			return 823;
			break;
		
		case 7:
			return 824;
			break;
		
		case 8:
			return 825;
			break;
		
		case 9:
			return 826;
			break;
		
		case 10:
			return 827;
			break;
		
		case 11:
			return 828;
			break;
		
		case 12:
			return 829;
			break;
		
		case 13:
			return 830;
			break;
		
		case 14:
			return 831;
			break;
		
		case 15:
			return 833;
			break;
		
		case 16:
			return 834;
			break;
		
		case 17:
			return 835;
			break;
		
		case 18:
			return 836;
			break;
		
		case 19:
			return 837;
			break;
		
		case 20:
			return 838;
			break;
		
		case 21:
			return 839;
			break;
		
		case 22:
			return 840;
			break;
		
		case 23:
			return 841;
			break;
		
		case 24:
			return 842;
			break;
		
		case 25:
			return 843;
			break;
		
		case 26:
			return 844;
			break;
		
		case 27:
			return 845;
			break;
		
		case 28:
			return 846;
			break;
		
		case 29:
			return 847;
			break;
		
		case 30:
			return 848;
			break;
		
		case 31:
			return 849;
			break;
		
		case 32:
			return 850;
			break;
		
		case 33:
			return 851;
			break;
		
		case 34:
			return 852;
			break;
		
		case 35:
			return 853;
			break;
		
		case 36:
			return 854;
			break;
		
		case 37:
			return 855;
			break;
		
		case 38:
			return 856;
			break;
		
		case 39:
			return 857;
			break;
		
		case 40:
			return 861;
			break;
		
		case 41:
			return 862;
			break;
		
		case 42:
			return 863;
			break;
		
		case 43:
			return 864;
			break;
		
		case 44:
			return 3693;
			break;
		
		default:
			break;
	}
	return 3790;
}

int func_380(int iParam0)
{
	return func_378(iParam0, 5, 1);
}

int func_381(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 44)
	{
		if (iParam3 == 5 || iParam3 == func_384(iVar0))
		{
			if (!bParam5 || func_383(iVar0))
			{
				fVar1 = unk_0x4F982ED5336EA899(Param0, func_382(iVar0, 0), 1);
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

Vector3 func_382(int iParam0, bool bParam1)
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
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_383(int iParam0)
{
	return func_378(iParam0, 0, 0);
}

int func_384(int iParam0)
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
		
		case 44:
			return 4;
			break;
	}
	return 5;
}

var func_385()
{
	var uVar0;
	
	func_395(&uVar0, unk_0x4C374828FD653ECC());
	func_394(&uVar0, unk_0x44AD07D9D178F321());
	func_393(&uVar0, unk_0x342FDFC48311CCCE());
	func_388(&uVar0, unk_0x818078CDB71D3E9C());
	func_387(&uVar0, unk_0x49D01BEA8D03E892());
	func_386(&uVar0, unk_0x90D477BB666B03DB());
	return uVar0;
}

void func_386(var uParam0, int iParam1)
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

void func_387(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_388(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_392(*uParam0);
	iVar1 = func_390(*uParam0);
	if (iParam1 < 1 || iParam1 > func_389(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_389(int iParam0, int iParam1)
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

var func_390(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_391(unk_0xDCC86F723E82125E(iParam0, 31), -1, 1)) + 2011;
}

int func_391(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_392(var uParam0)
{
	return uParam0 & 15;
}

void func_393(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_394(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_395(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_396(char* sParam0)
{
	if (unk_0xF8D041B05C3D1FD4("BailBond1", sParam0))
	{
		return 0;
	}
	else if (unk_0xF8D041B05C3D1FD4("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0xF8D041B05C3D1FD4("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0xF8D041B05C3D1FD4("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_397(int iParam0)
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

int func_398(char* sParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = unk_0x7CBED6EFED40E7EB(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_399(iVar0, &sVar1);
		if (unk_0x7CBED6EFED40E7EB(sVar1) == iVar33)
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

void func_399(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_400(uParam1, "Abigail1", func_402(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_401(iParam0), 1, 0);
			break;
		
		case 1:
			func_400(uParam1, "Abigail2", func_402(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_401(iParam0), 1, 0);
			break;
		
		case 2:
			func_400(uParam1, "Barry1", func_402(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_401(iParam0), 1, 0);
			break;
		
		case 3:
			func_400(uParam1, "Barry2", func_402(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_401(iParam0), 1, 1);
			break;
		
		case 4:
			func_400(uParam1, "Barry3", func_402(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_401(iParam0), 0, 0);
			break;
		
		case 5:
			func_400(uParam1, "Barry3A", func_402(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_401(iParam0), 0, 1);
			break;
		
		case 6:
			func_400(uParam1, "Barry3C", func_402(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_401(iParam0), 0, 1);
			break;
		
		case 7:
			func_400(uParam1, "Barry4", func_402(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_401(iParam0), 0, 0);
			break;
		
		case 8:
			func_400(uParam1, "Dreyfuss1", func_402(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_401(iParam0), 0, 0);
			break;
		
		case 9:
			func_400(uParam1, "Epsilon1", func_402(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_401(iParam0), 0, 0);
			break;
		
		case 10:
			func_400(uParam1, "Epsilon2", func_402(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_401(iParam0), 1, 0);
			break;
		
		case 11:
			func_400(uParam1, "Epsilon3", func_402(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_401(iParam0), 0, 0);
			break;
		
		case 12:
			func_400(uParam1, "Epsilon4", func_402(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_401(iParam0), 0, 0);
			break;
		
		case 13:
			func_400(uParam1, "Epsilon5", func_402(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_401(iParam0), 1, 0);
			break;
		
		case 14:
			func_400(uParam1, "Epsilon6", func_402(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_401(iParam0), 0, 1);
			break;
		
		case 15:
			func_400(uParam1, "Epsilon7", func_402(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_401(iParam0), 0, 0);
			break;
		
		case 16:
			func_400(uParam1, "Epsilon8", func_402(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_401(iParam0), 1, 0);
			break;
		
		case 17:
			func_400(uParam1, "Extreme1", func_402(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_401(iParam0), 0, 1);
			break;
		
		case 18:
			func_400(uParam1, "Extreme2", func_402(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_401(iParam0), 0, 1);
			break;
		
		case 19:
			func_400(uParam1, "Extreme3", func_402(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_401(iParam0), 0, 1);
			break;
		
		case 20:
			func_400(uParam1, "Extreme4", func_402(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_401(iParam0), 0, 0);
			break;
		
		case 21:
			func_400(uParam1, "Fanatic1", func_402(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_401(iParam0), 1, 0);
			break;
		
		case 22:
			func_400(uParam1, "Fanatic2", func_402(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_401(iParam0), 1, 0);
			break;
		
		case 23:
			func_400(uParam1, "Fanatic3", func_402(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_401(iParam0), 0, 1);
			break;
		
		case 24:
			func_400(uParam1, "Hao1", func_402(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_401(iParam0), 0, 1);
			break;
		
		case 25:
			func_400(uParam1, "Hunting1", func_402(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_401(iParam0), 0, 1);
			break;
		
		case 26:
			func_400(uParam1, "Hunting2", func_402(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_401(iParam0), 0, 1);
			break;
		
		case 27:
			func_400(uParam1, "Josh1", func_402(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_401(iParam0), 1, 0);
			break;
		
		case 28:
			func_400(uParam1, "Josh2", func_402(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_401(iParam0), 1, 1);
			break;
		
		case 29:
			func_400(uParam1, "Josh3", func_402(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_401(iParam0), 1, 1);
			break;
		
		case 30:
			func_400(uParam1, "Josh4", func_402(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_401(iParam0), 1, 0);
			break;
		
		case 31:
			func_400(uParam1, "Maude1", func_402(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_401(iParam0), 0, 1);
			break;
		
		case 32:
			func_400(uParam1, "Minute1", func_402(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_401(iParam0), 0, 1);
			break;
		
		case 33:
			func_400(uParam1, "Minute2", func_402(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_401(iParam0), 0, 1);
			break;
		
		case 34:
			func_400(uParam1, "Minute3", func_402(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_401(iParam0), 0, 1);
			break;
		
		case 35:
			func_400(uParam1, "MrsPhilips1", func_402(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_401(iParam0), 0, 0);
			break;
		
		case 36:
			func_400(uParam1, "MrsPhilips2", func_402(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_401(iParam0), 0, 0);
			break;
		
		case 37:
			func_400(uParam1, "Nigel1", func_402(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_401(iParam0), 1, 0);
			break;
		
		case 38:
			func_400(uParam1, "Nigel1A", func_402(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_401(iParam0), 1, 1);
			break;
		
		case 39:
			func_400(uParam1, "Nigel1B", func_402(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_401(iParam0), 1, 1);
			break;
		
		case 40:
			func_400(uParam1, "Nigel1C", func_402(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_401(iParam0), 1, 1);
			break;
		
		case 41:
			func_400(uParam1, "Nigel1D", func_402(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_401(iParam0), 1, 1);
			break;
		
		case 42:
			func_400(uParam1, "Nigel2", func_402(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_401(iParam0), 1, 1);
			break;
		
		case 43:
			func_400(uParam1, "Nigel3", func_402(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_401(iParam0), 1, 1);
			break;
		
		case 44:
			func_400(uParam1, "Omega1", func_402(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_401(iParam0), 0, 0);
			break;
		
		case 45:
			func_400(uParam1, "Omega2", func_402(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_401(iParam0), 0, 0);
			break;
		
		case 46:
			func_400(uParam1, "Paparazzo1", func_402(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_401(iParam0), 0, 1);
			break;
		
		case 47:
			func_400(uParam1, "Paparazzo2", func_402(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_401(iParam0), 0, 1);
			break;
		
		case 48:
			func_400(uParam1, "Paparazzo3", func_402(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_401(iParam0), 0, 0);
			break;
		
		case 49:
			func_400(uParam1, "Paparazzo3A", func_402(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_401(iParam0), 0, 1);
			break;
		
		case 50:
			func_400(uParam1, "Paparazzo3B", func_402(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_401(iParam0), 0, 1);
			break;
		
		case 51:
			func_400(uParam1, "Paparazzo4", func_402(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_401(iParam0), 0, 0);
			break;
		
		case 52:
			func_400(uParam1, "Rampage1", func_402(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_401(iParam0), 0, 0);
			break;
		
		case 54:
			func_400(uParam1, "Rampage3", func_402(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_401(iParam0), 1, 0);
			break;
		
		case 55:
			func_400(uParam1, "Rampage4", func_402(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_401(iParam0), 1, 0);
			break;
		
		case 56:
			func_400(uParam1, "Rampage5", func_402(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_401(iParam0), 0, 0);
			break;
		
		case 53:
			func_400(uParam1, "Rampage2", func_402(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_401(iParam0), 1, 0);
			break;
		
		case 57:
			func_400(uParam1, "TheLastOne", func_402(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_401(iParam0), 0, 1);
			break;
		
		case 58:
			func_400(uParam1, "Tonya1", func_402(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_401(iParam0), 0, 1);
			break;
		
		case 59:
			func_400(uParam1, "Tonya2", func_402(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_401(iParam0), 0, 1);
			break;
		
		case 60:
			func_400(uParam1, "Tonya3", func_402(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_401(iParam0), 0, 1);
			break;
		
		case 61:
			func_400(uParam1, "Tonya4", func_402(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_401(iParam0), 0, 1);
			break;
		
		case 62:
			func_400(uParam1, "Tonya5", func_402(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_401(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_400(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_401(int iParam0)
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

struct<2> func_402(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_397(iParam0) };
	if (unk_0xB8A06E7E729EED0A(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

int func_403(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_404(Global_100976.f_7719.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_404(Global_100976.f_7719.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_404(Global_100976.f_7719.f_99.f_205[11]);
			break;
		
		case 90:
			return func_404(Global_100976.f_7719.f_99.f_205[7]);
			break;
		
		case 93:
			return func_404(Global_100976.f_7719.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_404(int iParam0)
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

int func_405(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x7CBED6EFED40E7EB(sParam0);
	iVar1 = func_406(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_406(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_82227[iVar0 /*34*/].f_6 == iParam0)
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

void func_407(bool bParam0)
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
			Global_100976.f_25033.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_100976.f_25033.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_100976.f_25033.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_100976.f_25033.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_100976.f_25033.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_100976.f_25033.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52842[iVar0 /*3*/][0] = Global_100976.f_25033[iVar0];
		Global_52842.f_31[iVar0 /*3*/][0] = Global_100976.f_25033.f_11[iVar0];
		Global_52842.f_62[iVar0 /*3*/][0] = Global_100976.f_25033.f_22[iVar0];
		Global_52842.f_93[iVar0 /*3*/][0] = Global_100976.f_25033.f_33[iVar0];
		Global_52842.f_124[iVar0 /*3*/][0] = Global_100976.f_25033.f_44[iVar0];
		Global_52842.f_155[iVar0 /*3*/][0] = Global_100976.f_25033.f_55[iVar0];
		Global_52842.f_186[iVar0 /*3*/][0] = Global_100976.f_25033.f_66[iVar0];
		Global_52842.f_217[iVar0 /*3*/][0] = Global_100976.f_25033.f_77[iVar0];
		Global_52842.f_248[iVar0 /*3*/][0] = Global_100976.f_25033.f_88[iVar0];
		if (!bParam0)
		{
			Global_52842[iVar0 /*3*/][1] = Global_100976.f_25033[iVar0];
			Global_52842.f_31[iVar0 /*3*/][1] = Global_100976.f_25033.f_11[iVar0];
			Global_52842.f_62[iVar0 /*3*/][1] = Global_100976.f_25033.f_22[iVar0];
			Global_52842.f_93[iVar0 /*3*/][1] = Global_100976.f_25033.f_33[iVar0];
			Global_52842.f_124[iVar0 /*3*/][1] = Global_100976.f_25033.f_44[iVar0];
			Global_52842.f_155[iVar0 /*3*/][1] = Global_100976.f_25033.f_55[iVar0];
			Global_52842.f_186[iVar0 /*3*/][1] = Global_100976.f_25033.f_66[iVar0];
			Global_52842.f_217[iVar0 /*3*/][1] = Global_100976.f_25033.f_77[iVar0];
			Global_52842.f_248[iVar0 /*3*/][1] = Global_100976.f_25033.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_408(int iParam0)
{
	func_338(iParam0);
	unk_0xFC1F2AE3FDE7BB5D(1);
	unk_0xA50F67D636D63292();
	unk_0xFD62177C7242216E(1f);
	unk_0x60B57BC5E51D2074(5);
	unk_0x21F5FB3C8D48F7F5(3, 1);
	func_204(0);
	func_88();
	unk_0x7846F09C04C34C46();
	if (unk_0xDA33F6DC6574B8DD(iLocal_2510))
	{
		unk_0x78DFC4B56BCF3DA9(iLocal_2510);
	}
	if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		unk_0xDDA35844870E2C3A(unk_0xC8B93D94F8954288(), joaat("weapon_petrolcan"));
		unk_0x5124C5FA52D2AF3E(unk_0xC8B93D94F8954288());
	}
	if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		if (unk_0x6907EB47FC00DB19(unk_0xC8B93D94F8954288()) != 0)
		{
			if (func_67(unk_0xC8B93D94F8954288(), 2444.098f, 4977.795f, 48.9959f, 1) < 100f)
			{
				unk_0xC76B5C68AB6DC7DF(unk_0xC8B93D94F8954288(), 2463.811f, 4961.747f, 44.176f, 1, 0, 0, 1);
				unk_0x765E3FA65D011F03(unk_0xC8B93D94F8954288(), 20f);
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
	unk_0xA4E0D8FD51F2A6F7();
}

void func_409()
{
	int iVar0;
	
	if (unk_0xD838CD843F6FE18B("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_100976.f_7719 || func_141(0))
	{
		if (!func_410())
		{
			iVar0 = func_140();
			if (iVar0 != -1)
			{
				if (!func_134(iVar0))
				{
					return;
				}
				unk_0x59A0729D503ED758(&(Global_82191[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_139();
		}
	}
}

int func_410()
{
	if (((Global_91106 == 13 || Global_91106 == 10) || Global_91106 == 11) || Global_91106 == 12)
	{
		return 0;
	}
	return 1;
}

