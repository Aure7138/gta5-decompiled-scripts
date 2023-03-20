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
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
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
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 8;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 2;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 8;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 8;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	float fLocal_86 = 0f;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	float fLocal_89 = 0f;
	float fLocal_90 = 0f;
	float fLocal_91 = 0f;
	float fLocal_92 = 0f;
	float fLocal_93 = 0f;
	struct<284> Local_94 = { 0, 0, 0, 0, 0, 0, 1, 0, -1, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1 } ;
	struct<12> Local_378 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	struct<5> Local_392[32];
	int iLocal_553 = 0;
	int iLocal_554 = 0;
	int iLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	struct<18> Local_558[32];
	struct<3> Local_1135[32];
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	struct<68> Local_1239[1];
	struct<46> Local_1308[32];
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
	var uLocal_2810 = -1;
	var uLocal_2811 = 0;
	var uLocal_2812 = 0;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 0;
	var uLocal_2816 = 0;
	var uLocal_2817 = 0;
	var uLocal_2818 = 1;
	var uLocal_2819 = 0;
	var uLocal_2820 = 32;
	var uLocal_2821 = 0;
	var uLocal_2822 = -1;
	var uLocal_2823 = 0;
	var uLocal_2824 = -1;
	var uLocal_2825 = 0;
	var uLocal_2826 = -1;
	var uLocal_2827 = 0;
	var uLocal_2828 = -1;
	var uLocal_2829 = 0;
	var uLocal_2830 = -1;
	var uLocal_2831 = 0;
	var uLocal_2832 = -1;
	var uLocal_2833 = 0;
	var uLocal_2834 = -1;
	var uLocal_2835 = 0;
	var uLocal_2836 = -1;
	var uLocal_2837 = 0;
	var uLocal_2838 = -1;
	var uLocal_2839 = 0;
	var uLocal_2840 = -1;
	var uLocal_2841 = 0;
	var uLocal_2842 = -1;
	var uLocal_2843 = 0;
	var uLocal_2844 = -1;
	var uLocal_2845 = 0;
	var uLocal_2846 = -1;
	var uLocal_2847 = 0;
	var uLocal_2848 = -1;
	var uLocal_2849 = 0;
	var uLocal_2850 = -1;
	var uLocal_2851 = 0;
	var uLocal_2852 = -1;
	var uLocal_2853 = 0;
	var uLocal_2854 = -1;
	var uLocal_2855 = 0;
	var uLocal_2856 = -1;
	var uLocal_2857 = 0;
	var uLocal_2858 = -1;
	var uLocal_2859 = 0;
	var uLocal_2860 = -1;
	var uLocal_2861 = 0;
	var uLocal_2862 = -1;
	var uLocal_2863 = 0;
	var uLocal_2864 = -1;
	var uLocal_2865 = 0;
	var uLocal_2866 = -1;
	var uLocal_2867 = 0;
	var uLocal_2868 = -1;
	var uLocal_2869 = 0;
	var uLocal_2870 = -1;
	var uLocal_2871 = 0;
	var uLocal_2872 = -1;
	var uLocal_2873 = 0;
	var uLocal_2874 = -1;
	var uLocal_2875 = 0;
	var uLocal_2876 = -1;
	var uLocal_2877 = 0;
	var uLocal_2878 = -1;
	var uLocal_2879 = 0;
	var uLocal_2880 = -1;
	var uLocal_2881 = 0;
	var uLocal_2882 = -1;
	var uLocal_2883 = 0;
	var uLocal_2884 = -1;
	var uLocal_2885 = 0;
	var uLocal_2886 = 0;
	var uLocal_2887 = 0;
	var uLocal_2888 = 0;
	var uLocal_2889 = 32;
	var uLocal_2890 = 0;
	var uLocal_2891 = 0;
	var uLocal_2892 = 0;
	var uLocal_2893 = 0;
	var uLocal_2894 = 0;
	var uLocal_2895 = 0;
	var uLocal_2896 = 0;
	var uLocal_2897 = 0;
	var uLocal_2898 = 0;
	var uLocal_2899 = 0;
	var uLocal_2900 = 0;
	var uLocal_2901 = 0;
	var uLocal_2902 = 0;
	var uLocal_2903 = 0;
	var uLocal_2904 = 0;
	var uLocal_2905 = 0;
	var uLocal_2906 = 0;
	var uLocal_2907 = 0;
	var uLocal_2908 = 0;
	var uLocal_2909 = 0;
	var uLocal_2910 = 0;
	var uLocal_2911 = 0;
	var uLocal_2912 = 0;
	var uLocal_2913 = 0;
	var uLocal_2914 = 0;
	var uLocal_2915 = 0;
	var uLocal_2916 = 0;
	var uLocal_2917 = 0;
	var uLocal_2918 = 0;
	var uLocal_2919 = 0;
	var uLocal_2920 = 0;
	var uLocal_2921 = 0;
	var uLocal_2922 = 0;
	var uLocal_2923 = 0;
	var uLocal_2924 = 0;
	var uLocal_2925 = 0;
	var uLocal_2926 = 0;
	var uLocal_2927 = 0;
	var uLocal_2928 = 0;
	var uLocal_2929 = 0;
	var uLocal_2930 = 0;
	var uLocal_2931 = 0;
	var uLocal_2932 = 0;
	var uLocal_2933 = 0;
	var uLocal_2934 = 0;
	var uLocal_2935 = 0;
	var uLocal_2936 = 0;
	var uLocal_2937 = 0;
	var uLocal_2938 = 0;
	var uLocal_2939 = 0;
	var uLocal_2940 = 0;
	var uLocal_2941 = 0;
	var uLocal_2942 = 0;
	var uLocal_2943 = 0;
	var uLocal_2944 = 0;
	var uLocal_2945 = 0;
	var uLocal_2946 = 0;
	var uLocal_2947 = 0;
	var uLocal_2948 = 0;
	var uLocal_2949 = 0;
	var uLocal_2950 = 0;
	var uLocal_2951 = 0;
	var uLocal_2952 = 0;
	var uLocal_2953 = 0;
	var uLocal_2954 = 0;
	var uLocal_2955 = 0;
	var uLocal_2956 = 0;
	var uLocal_2957 = 0;
	var uLocal_2958 = 0;
	var uLocal_2959 = 0;
	var uLocal_2960 = 0;
	var uLocal_2961 = 0;
	var uLocal_2962 = 0;
	var uLocal_2963 = 0;
	var uLocal_2964 = 0;
	var uLocal_2965 = 0;
	var uLocal_2966 = 0;
	var uLocal_2967 = 0;
	var uLocal_2968 = 0;
	var uLocal_2969 = 0;
	var uLocal_2970 = 0;
	var uLocal_2971 = 0;
	var uLocal_2972 = 0;
	var uLocal_2973 = 0;
	var uLocal_2974 = 0;
	var uLocal_2975 = 0;
	var uLocal_2976 = 0;
	var uLocal_2977 = 0;
	var uLocal_2978 = 0;
	var uLocal_2979 = 0;
	var uLocal_2980 = 0;
	var uLocal_2981 = 0;
	var uLocal_2982 = 0;
	var uLocal_2983 = 0;
	var uLocal_2984 = 0;
	var uLocal_2985 = 0;
	var uLocal_2986 = 0;
	var uLocal_2987 = 0;
	var uLocal_2988 = 0;
	var uLocal_2989 = 0;
	var uLocal_2990 = 0;
	var uLocal_2991 = 0;
	var uLocal_2992 = 0;
	var uLocal_2993 = 0;
	var uLocal_2994 = 0;
	var uLocal_2995 = 0;
	var uLocal_2996 = 0;
	var uLocal_2997 = 0;
	var uLocal_2998 = 0;
	var uLocal_2999 = 0;
	var uLocal_3000 = 0;
	var uLocal_3001 = 0;
	var uLocal_3002 = 0;
	var uLocal_3003 = 0;
	var uLocal_3004 = 0;
	var uLocal_3005 = 0;
	var uLocal_3006 = 0;
	var uLocal_3007 = 0;
	var uLocal_3008 = 0;
	var uLocal_3009 = 0;
	var uLocal_3010 = 0;
	var uLocal_3011 = 0;
	var uLocal_3012 = 0;
	var uLocal_3013 = 0;
	var uLocal_3014 = 0;
	var uLocal_3015 = 0;
	var uLocal_3016 = 0;
	var uLocal_3017 = 0;
	var uLocal_3018 = 0;
	var uLocal_3019 = 0;
	var uLocal_3020 = 0;
	var uLocal_3021 = 0;
	var uLocal_3022 = 0;
	var uLocal_3023 = 0;
	var uLocal_3024 = 0;
	var uLocal_3025 = 0;
	var uLocal_3026 = 0;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
	var uLocal_3029 = 0;
	var uLocal_3030 = 0;
	var uLocal_3031 = 0;
	var uLocal_3032 = 0;
	var uLocal_3033 = 0;
	var uLocal_3034 = 0;
	var uLocal_3035 = 0;
	var uLocal_3036 = 0;
	var uLocal_3037 = 0;
	var uLocal_3038 = 0;
	var uLocal_3039 = 0;
	var uLocal_3040 = 0;
	var uLocal_3041 = 0;
	var uLocal_3042 = 0;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	var uLocal_3045 = 0;
	var uLocal_3046 = 0;
	var uLocal_3047 = 0;
	var uLocal_3048 = 0;
	var uLocal_3049 = 0;
	var uLocal_3050 = 0;
	var uLocal_3051 = 0;
	var uLocal_3052 = 0;
	var uLocal_3053 = 0;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 0;
	var uLocal_3057 = 0;
	var uLocal_3058 = 0;
	var uLocal_3059 = 0;
	var uLocal_3060 = 0;
	var uLocal_3061 = 0;
	var uLocal_3062 = 0;
	var uLocal_3063 = 0;
	var uLocal_3064 = 0;
	var uLocal_3065 = 0;
	var uLocal_3066 = 0;
	var uLocal_3067 = 0;
	var uLocal_3068 = 0;
	var uLocal_3069 = 0;
	var uLocal_3070 = 0;
	var uLocal_3071 = 0;
	var uLocal_3072 = 0;
	var uLocal_3073 = 0;
	var uLocal_3074 = 0;
	var uLocal_3075 = 0;
	var uLocal_3076 = 0;
	var uLocal_3077 = 0;
	var uLocal_3078 = 0;
	var uLocal_3079 = 0;
	var uLocal_3080 = 0;
	var uLocal_3081 = 0;
	var uLocal_3082 = 0;
	var uLocal_3083 = 0;
	var uLocal_3084 = 0;
	var uLocal_3085 = 0;
	var uLocal_3086 = 0;
	var uLocal_3087 = 0;
	var uLocal_3088 = 0;
	var uLocal_3089 = 0;
	var uLocal_3090 = 0;
	var uLocal_3091 = 0;
	var uLocal_3092 = 0;
	var uLocal_3093 = 0;
	var uLocal_3094 = 0;
	var uLocal_3095 = 0;
	var uLocal_3096 = 0;
	var uLocal_3097 = 0;
	var uLocal_3098 = 0;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	var uLocal_3101 = 0;
	var uLocal_3102 = 0;
	var uLocal_3103 = 0;
	var uLocal_3104 = 0;
	var uLocal_3105 = 0;
	var uLocal_3106 = 0;
	var uLocal_3107 = 0;
	var uLocal_3108 = 0;
	var uLocal_3109 = 0;
	var uLocal_3110 = 0;
	var uLocal_3111 = 0;
	var uLocal_3112 = 0;
	var uLocal_3113 = 0;
	var uLocal_3114 = 0;
	var uLocal_3115 = 0;
	var uLocal_3116 = 0;
	var uLocal_3117 = 0;
	var uLocal_3118 = 0;
	var uLocal_3119 = 0;
	var uLocal_3120 = 0;
	var uLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 0;
	var uLocal_3126 = 0;
	var uLocal_3127 = 0;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	var uLocal_3130 = 0;
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
	var uLocal_3133 = 0;
	var uLocal_3134 = 0;
	var uLocal_3135 = 0;
	var uLocal_3136 = 0;
	var uLocal_3137 = 0;
	var uLocal_3138 = 0;
	var uLocal_3139 = 0;
	var uLocal_3140 = 0;
	var uLocal_3141 = 0;
	var uLocal_3142 = 0;
	var uLocal_3143 = 0;
	var uLocal_3144 = 0;
	var uLocal_3145 = 0;
	var uLocal_3146 = 0;
	var uLocal_3147 = 0;
	var uLocal_3148 = 0;
	var uLocal_3149 = 0;
	var uLocal_3150 = 0;
	var uLocal_3151 = 0;
	var uLocal_3152 = 0;
	var uLocal_3153 = 0;
	var uLocal_3154 = 0;
	var uLocal_3155 = 0;
	var uLocal_3156 = 0;
	var uLocal_3157 = 0;
	var uLocal_3158 = 0;
	var uLocal_3159 = 0;
	var uLocal_3160 = 0;
	var uLocal_3161 = 0;
	var uLocal_3162 = 0;
	var uLocal_3163 = 0;
	var uLocal_3164 = 0;
	var uLocal_3165 = 0;
	var uLocal_3166 = 0;
	var uLocal_3167 = 0;
	var uLocal_3168 = 0;
	var uLocal_3169 = 0;
	var uLocal_3170 = 0;
	var uLocal_3171 = 0;
	var uLocal_3172 = 0;
	var uLocal_3173 = 0;
	var uLocal_3174 = 0;
	var uLocal_3175 = 0;
	var uLocal_3176 = 0;
	var uLocal_3177 = 0;
	var uLocal_3178 = 0;
	var uLocal_3179 = 0;
	var uLocal_3180 = 0;
	var uLocal_3181 = 0;
	var uLocal_3182 = 0;
	var uLocal_3183 = 0;
	var uLocal_3184 = 0;
	var uLocal_3185 = 0;
	var uLocal_3186 = 0;
	var uLocal_3187 = 0;
	var uLocal_3188 = 0;
	var uLocal_3189 = 0;
	var uLocal_3190 = 0;
	var uLocal_3191 = 0;
	var uLocal_3192 = 0;
	var uLocal_3193 = 0;
	var uLocal_3194 = 0;
	var uLocal_3195 = 0;
	var uLocal_3196 = 0;
	var uLocal_3197 = 0;
	var uLocal_3198 = 0;
	var uLocal_3199 = 0;
	var uLocal_3200 = 0;
	var uLocal_3201 = 0;
	var uLocal_3202 = 0;
	var uLocal_3203 = 0;
	var uLocal_3204 = 0;
	var uLocal_3205 = 0;
	var uLocal_3206 = 0;
	var uLocal_3207 = 0;
	var uLocal_3208 = 0;
	var uLocal_3209 = 0;
	var uLocal_3210 = 0;
	var uLocal_3211 = 0;
	var uLocal_3212 = 0;
	var uLocal_3213 = 0;
	var uLocal_3214 = 0;
	var uLocal_3215 = 0;
	var uLocal_3216 = 0;
	var uLocal_3217 = 0;
	var uLocal_3218 = 0;
	var uLocal_3219 = 0;
	var uLocal_3220 = 0;
	var uLocal_3221 = 0;
	var uLocal_3222 = 0;
	var uLocal_3223 = 0;
	var uLocal_3224 = 0;
	var uLocal_3225 = 0;
	var uLocal_3226 = 0;
	var uLocal_3227 = 0;
	var uLocal_3228 = 0;
	var uLocal_3229 = 0;
	var uLocal_3230 = 0;
	var uLocal_3231 = 0;
	var uLocal_3232 = 0;
	var uLocal_3233 = 0;
	var uLocal_3234 = 0;
	var uLocal_3235 = 0;
	var uLocal_3236 = 0;
	var uLocal_3237 = 0;
	var uLocal_3238 = 0;
	var uLocal_3239 = 0;
	var uLocal_3240 = 0;
	var uLocal_3241 = 0;
	var uLocal_3242 = 0;
	var uLocal_3243 = 0;
	var uLocal_3244 = 0;
	var uLocal_3245 = 0;
	var uLocal_3246 = 0;
	var uLocal_3247 = 0;
	var uLocal_3248 = 0;
	var uLocal_3249 = 0;
	var uLocal_3250 = 0;
	var uLocal_3251 = 0;
	var uLocal_3252 = 0;
	var uLocal_3253 = 0;
	var uLocal_3254 = 0;
	var uLocal_3255 = 0;
	var uLocal_3256 = 0;
	var uLocal_3257 = 0;
	var uLocal_3258 = 0;
	var uLocal_3259 = 0;
	var uLocal_3260 = 0;
	var uLocal_3261 = 0;
	var uLocal_3262 = 0;
	var uLocal_3263 = 0;
	var uLocal_3264 = 0;
	var uLocal_3265 = 0;
	var uLocal_3266 = 0;
	var uLocal_3267 = 0;
	var uLocal_3268 = 0;
	var uLocal_3269 = 0;
	var uLocal_3270 = 0;
	var uLocal_3271 = 0;
	var uLocal_3272 = 0;
	var uLocal_3273 = 0;
	var uLocal_3274 = 0;
	var uLocal_3275 = 0;
	var uLocal_3276 = 0;
	var uLocal_3277 = 0;
	var uLocal_3278 = 0;
	var uLocal_3279 = 0;
	var uLocal_3280 = 0;
	var uLocal_3281 = 0;
	var uLocal_3282 = 0;
	var uLocal_3283 = 0;
	var uLocal_3284 = 0;
	var uLocal_3285 = 0;
	var uLocal_3286 = 0;
	var uLocal_3287 = 0;
	var uLocal_3288 = 0;
	var uLocal_3289 = 0;
	var uLocal_3290 = 0;
	var uLocal_3291 = 0;
	var uLocal_3292 = 0;
	var uLocal_3293 = 0;
	var uLocal_3294 = 0;
	var uLocal_3295 = 0;
	var uLocal_3296 = 0;
	var uLocal_3297 = 0;
	var uLocal_3298 = 0;
	var uLocal_3299 = 0;
	var uLocal_3300 = 0;
	var uLocal_3301 = 0;
	var uLocal_3302 = 0;
	var uLocal_3303 = 0;
	var uLocal_3304 = 0;
	var uLocal_3305 = 0;
	int iLocal_3306 = 0;
	int iLocal_3307 = 0;
	int iLocal_3308 = 0;
	int iLocal_3309 = 0;
	int iLocal_3310 = 0;
	int iLocal_3311 = 0;
	int iLocal_3312 = 0;
	int iLocal_3313 = 0;
	int iLocal_3314 = 0;
	int iLocal_3315 = 0;
	int iLocal_3316 = 0;
	var uLocal_3317 = 0;
	int iLocal_3318 = 0;
	var uLocal_3319 = 0;
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	bool bVar5;
	
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
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_35 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_86 = ((0.05f + 0.275f) - 0.01f);
	fLocal_89 = -0.05f;
	fLocal_90 = 0.92f;
	fLocal_91 = 1.94f;
	fLocal_92 = 2.99f;
	fLocal_93 = 3.7f;
	iLocal_390 = -1;
	iLocal_3314 = -1;
	if (unk_0x1C6DF6AD69BE853E() && func_571(unk_0x1329891157A54C63(), 0, 1))
	{
		func_556(ScriptParam_0);
	}
	else
	{
		func_529();
	}
	while (true)
	{
		func_528();
		if (func_521())
		{
			func_529();
		}
		if (func_518(29))
		{
			func_529();
		}
		if (func_516())
		{
			func_529();
		}
		if (func_515())
		{
			func_529();
		}
		iLocal_3314 = -1;
		if (unk_0x236D8AD7EE179F46(iLocal_3307, unk_0x1329891157A54C63()))
		{
			if (unk_0x236D8AD7EE179F46(iLocal_3308, unk_0x519AAFF77CC141DF()))
			{
				if (!func_513(unk_0x1329891157A54C63()))
				{
					iLocal_3314 = unk_0x519AAFF77CC141DF();
				}
				else if (func_512() && !func_511())
				{
					uVar2 = func_508();
					if (unk_0x0452D5BF20AD945A(uVar2))
					{
						uVar3 = unk_0x1B503E81E3B3D65F(uVar2);
						if (unk_0x92016690A1675C2F(uVar3))
						{
							iVar4 = unk_0x563980A76107BC80(iVar3);
							iLocal_3314 = iVar4;
						}
					}
				}
			}
		}
		func_492();
		if (func_491() < 2)
		{
			if (func_488(2, 0, 1, 0, 0))
			{
				unk_0xF3148AAF69AF9CBC(&iLocal_553, 23);
				func_461(0, -1);
				func_529();
			}
		}
		iVar0 = 0;
		while (iVar0 < 1)
		{
			func_460(iVar0, -1);
			func_459(iVar0, -1);
			func_458(iVar0, uVar1);
			unk_0xC69E84EBBD7166E6(&iLocal_553, 0);
			iVar0++;
		}
		func_411();
		func_384();
		func_381();
		func_361();
		switch (func_360(unk_0x519AAFF77CC141DF()))
		{
			case 0:
				if (func_359() == 1)
				{
					func_351(141, func_358(0), 0, 0);
					func_350(1);
				}
				else if (func_359() == 4)
				{
					func_350(4);
				}
				break;
			
			case 1:
				if (func_359() == 1)
				{
					func_20();
				}
				else if (func_359() == 4)
				{
					func_19(&(Local_94.f_211));
					func_350(3);
				}
				break;
			
			case 3:
				if (func_18(&(Local_94.f_211)))
				{
					if (func_17(&(Local_94.f_211)))
					{
						bVar5 = true;
					}
				}
				else
				{
					bVar5 = true;
				}
				if (bVar5)
				{
					func_350(4);
				}
				break;
			
			case 2:
				func_350(4);
			
			case 4:
				func_529();
				break;
		}
		if (unk_0x1C7D9BFDF15A02B4())
		{
			switch (func_359())
			{
				case 0:
					func_16(1);
					break;
				
				case 1:
					func_1();
					break;
				
				case 4:
					break;
				}
		}
	}
}

void func_1()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	func_12();
	switch (func_491())
	{
		case 0:
			if (unk_0x236D8AD7EE179F46(Local_94.f_213, 0))
			{
				if (!func_18(&(Local_94.f_1.f_3)))
				{
					func_11(&(Local_94.f_1.f_3), 0, 1);
				}
				func_10(1);
			}
			break;
		
		case 1:
			if (unk_0x236D8AD7EE179F46(Local_94.f_213, 2))
			{
				iVar2 = Global_262145.f_8957;
				if (func_18(&(Local_94.f_1.f_1)))
				{
					if (func_9(&(Local_94.f_1.f_1), 0, 0) >= iVar2)
					{
						bVar1 = true;
					}
				}
			}
			else
			{
				iVar2 = Global_262145.f_8958;
				if (func_18(&(Local_94.f_1.f_3)))
				{
					if (func_9(&(Local_94.f_1.f_3), 0, 0) >= iVar2)
					{
						bVar1 = true;
					}
				}
			}
			if (bVar1)
			{
				func_10(2);
			}
			break;
		
		case 2:
			if (unk_0x236D8AD7EE179F46(Local_94.f_213, 1))
			{
				func_10(3);
			}
			break;
		
		case 3:
			func_10(4);
			break;
		
		case 4:
			func_16(4);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_2(iVar0);
		iVar0++;
	}
}

void func_2(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	
	iVar0 = func_8(iParam0);
	iVar1 = func_7(iParam0);
	bVar6 = func_18(&(Local_94.f_6[iParam0 /*204*/].f_70));
	if (iVar0 > -1)
	{
		if (unk_0x236D8AD7EE179F46(iLocal_3308, iVar0))
		{
			if (unk_0x236D8AD7EE179F46(iLocal_3307, iVar1))
			{
				if (!unk_0x236D8AD7EE179F46(iLocal_3309, iVar1))
				{
					fVar2 = func_6(iParam0, iVar0);
					if (func_18(&(Local_94.f_1.f_1)))
					{
						if (!func_18(&(Local_94.f_6[iParam0 /*204*/].f_70)))
						{
							func_11(&(Local_94.f_6[iParam0 /*204*/].f_70), 0, 1);
						}
						else if ((func_5(&(Local_94.f_6[iParam0 /*204*/].f_70), 1000, 0) && func_9(&(Local_94.f_1.f_1), 0, 0) <= Global_262145.f_8957) && func_491() != 2)
						{
							iVar7 = func_9(&(Local_94.f_6[iParam0 /*204*/].f_70), 0, 1);
							fVar3 = unk_0xBBDA792448DB5A89(iVar7);
							fVar3 = (fVar3 / IntToFloat(Global_262145.f_8961 * 1000));
							fVar4 = (unk_0xBBDA792448DB5A89(Global_262145.f_8960) * fVar3);
							fVar2 = (fVar2 + fVar4);
							func_4(iParam0, iVar0, fVar2);
							bVar5 = true;
						}
					}
				}
				else if (bVar6)
				{
					bVar5 = true;
				}
			}
			else if (bVar6)
			{
				bVar5 = true;
			}
		}
		else if (bVar6)
		{
			bVar5 = true;
		}
	}
	else if (bVar6)
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		if (bVar6)
		{
			func_3(&(Local_94.f_6[iParam0 /*204*/].f_70));
			if (iVar0 > -1)
			{
				func_11(&(Local_94.f_6[iParam0 /*204*/].f_70), 0, 1);
			}
		}
	}
}

void func_3(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_4(int iParam0, int iParam1, float fParam2)
{
	Local_94.f_6[iParam0 /*204*/].f_3[iParam1] = fParam2;
}

int func_5(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_11(uParam0, bParam2, 0);
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

float func_6(int iParam0, int iParam1)
{
	return Local_94.f_6[iParam0 /*204*/].f_3[iParam1];
}

int func_7(int iParam0)
{
	return Local_94.f_6[iParam0 /*204*/].f_2;
}

int func_8(int iParam0)
{
	return Local_94.f_6[iParam0 /*204*/].f_1;
}

int func_9(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x1C6DF6AD69BE853E() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), *uParam0);
		}
		else
		{
			return unk_0x996F735E5C03B101(unk_0xE36DF6414E5CCBBF(), *uParam0);
		}
	}
	return unk_0x996F735E5C03B101(unk_0x48E480685981C7D4(), *uParam0);
}

void func_10(int iParam0)
{
	Local_94.f_1 = iParam0;
}

void func_11(var uParam0, bool bParam1, bool bParam2)
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

void func_12()
{
	int iVar0;
	struct<2> Var1;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		switch (func_15(iVar0))
		{
			case 0:
				if (func_14(iVar0))
				{
					if (!func_18(&(Local_94.f_1.f_1)))
					{
						Local_94.f_1.f_3 = { Var1 };
						func_11(&(Local_94.f_1.f_1), 0, 1);
					}
					if (!func_18(&(Local_94.f_6[iVar0 /*204*/].f_70)))
					{
						func_11(&(Local_94.f_6[iVar0 /*204*/].f_70), 0, 1);
					}
					func_13(iVar0, 1);
					if (!unk_0x236D8AD7EE179F46(Local_94.f_213, 2))
					{
						unk_0xF3148AAF69AF9CBC(&(Local_94.f_213), 2);
					}
				}
				break;
			
			case 1:
				if (!func_14(iVar0))
				{
					func_13(iVar0, 2);
				}
				break;
			
			case 2:
				if (func_14(iVar0))
				{
					func_13(iVar0, 1);
				}
				break;
		}
		iVar0++;
	}
}

void func_13(int iParam0, int iParam1)
{
	Local_94.f_6[iParam0 /*204*/] = iParam1;
}

bool func_14(int iParam0)
{
	return Local_1239[iParam0 /*68*/].f_36;
}

int func_15(int iParam0)
{
	return Local_94.f_6[iParam0 /*204*/];
}

void func_16(int iParam0)
{
	Local_94.f_0 = iParam0;
}

int func_17(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

bool func_18(var uParam0)
{
	return uParam0->f_1;
}

void func_19(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x1C7D9BFDF15A02B4())
		{
			func_11(uParam0, 0, 0);
		}
	}
}

void func_20()
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	char* sVar4;
	bool bVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	
	func_332();
	func_331();
	func_329();
	if (func_327())
	{
		func_235(iVar0);
	}
	func_223(141, func_234(0), &uLocal_3319, unk_0xBBDA792448DB5A89(Global_262145.f_9259), 1148846080, iLocal_3318);
	if (func_201(0, 1))
	{
		func_200();
	}
	switch (func_491())
	{
		case 0:
			break;
		
		case 1:
			iVar0 = 0;
			while (iVar0 < 1)
			{
				func_163(iVar0);
				func_162(iVar0);
				func_160(iVar0);
				if (iLocal_3314 == unk_0x519AAFF77CC141DF())
				{
					if (!func_157(1, 0))
					{
						if (func_156(unk_0x519AAFF77CC141DF(), iVar0))
						{
							if (func_155(unk_0x1329891157A54C63()) == 141)
							{
								if (!unk_0x236D8AD7EE179F46(Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_4, 2))
								{
									unk_0xF3148AAF69AF9CBC(&(Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_4), 2);
									func_144(1);
								}
							}
							if (!unk_0x236D8AD7EE179F46(Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_4, 5))
							{
								unk_0xF3148AAF69AF9CBC(&(Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_4), 5);
							}
							if (func_8(iVar0) == unk_0x519AAFF77CC141DF())
							{
								if (!unk_0x236D8AD7EE179F46(iLocal_553, 19))
								{
									unk_0xF3148AAF69AF9CBC(&iLocal_553, 19);
								}
							}
						}
						if (!unk_0x236D8AD7EE179F46(Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_4, 4))
						{
							if (func_8(iVar0) == unk_0x519AAFF77CC141DF())
							{
								unk_0xF3148AAF69AF9CBC(&(Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_4), 4);
							}
						}
					}
					else
					{
						if (unk_0x236D8AD7EE179F46(Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_4, 2))
						{
							unk_0xC69E84EBBD7166E6(&(Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_4), 2);
						}
						if (unk_0x236D8AD7EE179F46(Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_4, 5))
						{
							unk_0xC69E84EBBD7166E6(&(Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_4), 5);
						}
						if (unk_0x236D8AD7EE179F46(Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_4, 4))
						{
							unk_0xC69E84EBBD7166E6(&(Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_4), 4);
						}
						if (unk_0x236D8AD7EE179F46(Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_4, 6))
						{
							unk_0xC69E84EBBD7166E6(&(Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_4), 6);
						}
						if (unk_0x236D8AD7EE179F46(Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_4, 7))
						{
							unk_0xC69E84EBBD7166E6(&(Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_4), 7);
						}
					}
				}
				if (func_15(iVar0) == 0)
				{
					if (!unk_0x236D8AD7EE179F46(iLocal_553, 8))
					{
						if (!unk_0xA83A609D74168B30())
						{
							if (!func_143())
							{
								if (iLocal_3314 == unk_0x519AAFF77CC141DF())
								{
									if (!func_201(0, 0))
									{
										if (unk_0x236D8AD7EE179F46(iLocal_3307, Local_558[unk_0x519AAFF77CC141DF() /*18*/].f_1))
										{
											if (!unk_0x236D8AD7EE179F46(iLocal_3309, Local_558[unk_0x519AAFF77CC141DF() /*18*/].f_1))
											{
												func_142("KOTC_1STHELP", 30000);
												func_141(0);
												unk_0x35D7948F61AA3FEC(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
												unk_0xF3148AAF69AF9CBC(&iLocal_553, 8);
											}
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if (func_140("KOTC_1STHELP"))
					{
						unk_0xB8BB626315D394F5(1);
					}
					if (!unk_0x236D8AD7EE179F46(iLocal_553, 8))
					{
						unk_0xF3148AAF69AF9CBC(&iLocal_553, 8);
					}
				}
				if (iLocal_3314 == unk_0x519AAFF77CC141DF())
				{
					if (func_139(iVar0) <= 500f)
					{
						if (!unk_0x236D8AD7EE179F46(iLocal_553, 9))
						{
							unk_0x5B6D37392F5991C3(0f);
							unk_0xF3148AAF69AF9CBC(&iLocal_553, 9);
						}
					}
					else if (unk_0x236D8AD7EE179F46(iLocal_553, 9))
					{
						unk_0x5B6D37392F5991C3(1f);
						unk_0xC69E84EBBD7166E6(&iLocal_553, 9);
					}
				}
				if (iLocal_3314 != -1)
				{
					if (unk_0x236D8AD7EE179F46(iLocal_553, 13) && func_8(iVar0) != iLocal_3314)
					{
						if (!unk_0x236D8AD7EE179F46(iLocal_553, 20))
						{
							func_138(80);
							unk_0xF3148AAF69AF9CBC(&iLocal_553, 20);
						}
					}
					else if (unk_0x236D8AD7EE179F46(iLocal_553, 20))
					{
						unk_0xC69E84EBBD7166E6(&iLocal_553, 20);
					}
				}
				if (func_15(iVar0) != 0)
				{
					if (!unk_0x236D8AD7EE179F46(iLocal_553, 25))
					{
						func_116(141, 0f, 0f, 0, 0, 0, 0);
						unk_0xF3148AAF69AF9CBC(&iLocal_553, 25);
					}
					if (!unk_0x236D8AD7EE179F46(iLocal_553, 1))
					{
						if (iLocal_3314 != -1)
						{
							if (!func_201(0, 0))
							{
								if (unk_0x236D8AD7EE179F46(iLocal_3307, Local_558[iLocal_3314 /*18*/].f_1))
								{
									if (!unk_0x236D8AD7EE179F46(iLocal_3309, Local_558[iLocal_3314 /*18*/].f_1))
									{
										if (func_8(iVar0) != -1)
										{
											if (func_8(iVar0) != iLocal_3314)
											{
												func_114(80, "KOTC_STRAP2", unk_0xB67DF8F35744CF60(func_7(iVar0)), func_115(), -1, "KOTC_START", func_115());
											}
											else
											{
												func_113(80, "KOTC_START2", "KOTC_STRAP1", func_115(), -1, func_115());
												unk_0xF3148AAF69AF9CBC(&iLocal_553, 13);
												unk_0xF3148AAF69AF9CBC(&iLocal_553, 14);
											}
										}
										else
										{
											func_113(80, "KOTC_START", "KOTC_STRAP3", func_115(), -1, func_115());
										}
										unk_0xF3148AAF69AF9CBC(&iLocal_553, 1);
									}
								}
							}
						}
					}
					else if (!unk_0x236D8AD7EE179F46(iLocal_553, 2))
					{
						if (func_112(80))
						{
							unk_0xF3148AAF69AF9CBC(&iLocal_553, 2);
						}
					}
					else if (iLocal_3314 != -1)
					{
						if (func_8(iVar0) == iLocal_3314)
						{
							if (!unk_0x236D8AD7EE179F46(iLocal_553, 13))
							{
								if (!func_201(0, 0))
								{
									if (unk_0x236D8AD7EE179F46(iLocal_3307, Local_558[iLocal_3314 /*18*/].f_1))
									{
										if (!unk_0x236D8AD7EE179F46(iLocal_3309, Local_558[iLocal_3314 /*18*/].f_1))
										{
											func_113(80, "KOTC_START2", "KOTC_STRAP1", 1, -1, 2);
											unk_0xF3148AAF69AF9CBC(&iLocal_553, 13);
										}
									}
								}
							}
							else if (!unk_0x236D8AD7EE179F46(iLocal_553, 14))
							{
								if (func_112(80))
								{
									unk_0xF3148AAF69AF9CBC(&iLocal_553, 14);
								}
							}
						}
						else
						{
							if (unk_0x236D8AD7EE179F46(iLocal_553, 13))
							{
								unk_0xC69E84EBBD7166E6(&iLocal_553, 13);
							}
							if (unk_0x236D8AD7EE179F46(iLocal_553, 14))
							{
								unk_0xC69E84EBBD7166E6(&iLocal_553, 14);
							}
						}
					}
					else
					{
						if (unk_0x236D8AD7EE179F46(iLocal_553, 13))
						{
							unk_0xC69E84EBBD7166E6(&iLocal_553, 13);
						}
						if (unk_0x236D8AD7EE179F46(iLocal_553, 14))
						{
							unk_0xC69E84EBBD7166E6(&iLocal_553, 14);
						}
					}
				}
				else
				{
					func_111();
				}
				if (func_15(iVar0) == 1)
				{
					if (func_8(iVar0) != -1)
					{
						if (iLocal_3314 != -1)
						{
							if (func_8(iVar0) == iLocal_3314)
							{
								if (!func_201(1, 0))
								{
									func_108("KOTC_KINGOB1", 0);
								}
								else
								{
									func_111();
								}
								if (iLocal_3314 == unk_0x519AAFF77CC141DF())
								{
									if (!unk_0x236D8AD7EE179F46(iLocal_553, 6))
									{
										if (!unk_0xA83A609D74168B30())
										{
											if (!func_143())
											{
												if (!func_201(0, 0))
												{
													if (unk_0x236D8AD7EE179F46(iLocal_3307, Local_558[unk_0x519AAFF77CC141DF() /*18*/].f_1))
													{
														if (!unk_0x236D8AD7EE179F46(iLocal_3309, Local_558[unk_0x519AAFF77CC141DF() /*18*/].f_1))
														{
															if (unk_0x236D8AD7EE179F46(iLocal_553, 2))
															{
																func_142("KOTC_YOUKNG", 30000);
																func_141(1);
																unk_0xF3148AAF69AF9CBC(&iLocal_553, 6);
															}
														}
													}
												}
											}
										}
									}
								}
							}
							else
							{
								if (iLocal_3314 == unk_0x519AAFF77CC141DF())
								{
									if (!unk_0x236D8AD7EE179F46(iLocal_553, 7))
									{
										if (func_107(unk_0x519AAFF77CC141DF()))
										{
											if (!unk_0xA83A609D74168B30())
											{
												if (!func_143())
												{
													if (!func_201(0, 0))
													{
														if (unk_0x236D8AD7EE179F46(iLocal_3307, Local_558[unk_0x519AAFF77CC141DF() /*18*/].f_1))
														{
															if (!unk_0x236D8AD7EE179F46(iLocal_3309, Local_558[unk_0x519AAFF77CC141DF() /*18*/].f_1))
															{
																if (unk_0x236D8AD7EE179F46(iLocal_553, 2))
																{
																	func_142("KOTC_OTHRKG", 30000);
																	func_141(1);
																	unk_0xF3148AAF69AF9CBC(&iLocal_553, 7);
																}
															}
														}
													}
												}
											}
										}
									}
								}
								if (((func_107(iLocal_3314) || unk_0x236D8AD7EE179F46(Local_392[iLocal_3314 /*5*/].f_4, 12)) && unk_0x236D8AD7EE179F46(iLocal_3308, func_8(iVar0))) && !func_201(1, 0))
								{
									func_96("KOTC_PERMKNG", &(Local_558[func_8(iVar0) /*18*/].f_2), 0);
								}
								else
								{
									func_111();
								}
							}
						}
						else
						{
							func_111();
						}
					}
					else if (iLocal_3314 != -1)
					{
						if (!func_201(1, 0))
						{
							if (func_156(unk_0x519AAFF77CC141DF(), iVar0))
							{
								func_108("KOTC_KLLALL", 0);
							}
							else
							{
								func_108("KOTC_ENTER", 0);
							}
						}
						else
						{
							func_111();
						}
						if (iLocal_3314 == unk_0x519AAFF77CC141DF())
						{
							if (!unk_0x236D8AD7EE179F46(iLocal_553, 10))
							{
								if (func_107(unk_0x519AAFF77CC141DF()))
								{
									if (!unk_0xA83A609D74168B30())
									{
										if (!func_143())
										{
											if (!func_201(0, 0))
											{
												if (unk_0x236D8AD7EE179F46(iLocal_3307, Local_558[unk_0x519AAFF77CC141DF() /*18*/].f_1))
												{
													if (!unk_0x236D8AD7EE179F46(iLocal_3309, Local_558[unk_0x519AAFF77CC141DF() /*18*/].f_1))
													{
														if (func_95(iVar0))
														{
															func_142("KOTC_CONTS", 30000);
															func_141(1);
															unk_0xF3148AAF69AF9CBC(&iLocal_553, 10);
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
					else
					{
						func_111();
					}
				}
				if (iLocal_3314 != -1)
				{
					if (func_15(iVar0) == 2)
					{
						if (func_107(unk_0x519AAFF77CC141DF()) && !func_201(1, 0))
						{
							func_108("KOTC_ENTER", 0);
						}
						else
						{
							func_111();
						}
					}
				}
				else
				{
					func_111();
				}
				func_70(iVar0);
				if (func_155(unk_0x1329891157A54C63()) == 141)
				{
					func_59(iVar0);
				}
				func_58();
				iVar0++;
			}
			break;
		
		case 2:
			iVar2 = -1;
			iVar0 = 0;
			while (iVar0 < 1)
			{
				func_56(iVar0);
				func_54(iVar0);
				iVar0++;
			}
			func_111();
			func_200();
			func_50();
			sVar3 = "KOTC_OVER1";
			sVar4 = "KOTC_OVER2";
			iVar6 = -1;
			iVar0 = 0;
			while (iVar0 < 1)
			{
				if (iLocal_3314 != -1)
				{
					if (unk_0x236D8AD7EE179F46(iLocal_553, 19))
					{
						iVar1 = 0;
						while (iVar1 < 3)
						{
							if (Local_94.f_6[iVar0 /*204*/].f_74[iVar1 /*4*/] == iLocal_3314)
							{
								if (Local_94.f_6[iVar0 /*204*/].f_74[iVar1 /*4*/].f_3 > 0f)
								{
									iVar2 = iVar1;
									iVar6 = iVar1;
									switch (iVar1)
									{
										case 0:
											sVar4 = "KOTC1ST_STR";
											sVar3 = "KOTC_WIN1";
											bVar5 = true;
											break;
										
										case 1:
											sVar4 = "KOTC2ND_STR";
											bVar5 = true;
											break;
										
										case 2:
											sVar4 = "KOTC3RD_STR";
											bVar5 = true;
											break;
										}
									}
							}
							iVar1++;
						}
					}
				}
				func_70(iVar0);
				if (Local_94.f_6[iVar0 /*204*/].f_74[0 /*4*/] == -1)
				{
					bVar7 = true;
				}
				else if (!unk_0x236D8AD7EE179F46(iLocal_3308, Local_94.f_6[iVar0 /*204*/].f_74[0 /*4*/]))
				{
					bVar7 = true;
				}
				else if (Local_94.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_3 <= 0f)
				{
					bVar7 = true;
				}
				iVar0++;
			}
			if (bVar5)
			{
				Local_378.f_5 = 1;
			}
			if (!unk_0x236D8AD7EE179F46(Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_4, 1) && func_49())
			{
				if (!unk_0x236D8AD7EE179F46(iLocal_553, 3))
				{
					iVar0 = 0;
					while (iVar0 < 1)
					{
						if (func_15(iVar0) == 0)
						{
							if (!func_201(0, 0))
							{
								func_48("KOTC_NOENTRY", 1);
							}
						}
						else if (bVar7)
						{
							if (iLocal_3314 != -1)
							{
								if (!func_201(0, 0))
								{
									if (!func_201(0, 0))
									{
										if (unk_0x236D8AD7EE179F46(iLocal_3307, Local_558[iLocal_3314 /*18*/].f_1))
										{
											if (!unk_0x236D8AD7EE179F46(iLocal_3309, Local_558[iLocal_3314 /*18*/].f_1))
											{
												if (func_107(iLocal_3314))
												{
													func_113(67, "KOTC_OVER1", "KOTC_NOWIN", 1, 15000, 2);
												}
												else
												{
													func_48("KOTC_NOWIN", 1);
												}
											}
										}
									}
								}
							}
						}
						else if (bVar5)
						{
							if (iLocal_3314 != -1)
							{
								if (!func_201(0, 0))
								{
									if (unk_0x236D8AD7EE179F46(iLocal_3307, Local_558[iLocal_3314 /*18*/].f_1))
									{
										if (!unk_0x236D8AD7EE179F46(iLocal_3309, Local_558[iLocal_3314 /*18*/].f_1))
										{
											if (func_107(iLocal_3314))
											{
												func_46(63, func_47(Local_94.f_6[iVar0 /*204*/].f_74[iVar6 /*4*/].f_3), sVar4, sVar3, 1, 15000, -1082130432, 2);
											}
											else
											{
												func_45(sVar4, func_47(Local_94.f_6[iVar0 /*204*/].f_74[iVar6 /*4*/].f_3), 1);
											}
										}
									}
								}
							}
						}
						else if (iLocal_3314 != -1)
						{
							if (!func_201(0, 0))
							{
								if (unk_0x236D8AD7EE179F46(iLocal_3307, Local_558[iLocal_3314 /*18*/].f_1))
								{
									if (!unk_0x236D8AD7EE179F46(iLocal_3309, Local_558[iLocal_3314 /*18*/].f_1))
									{
										if (func_107(iLocal_3314))
										{
											sVar4 = "KOTC_OVER3";
											func_37(71, func_47(Local_94.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_3), sVar4, unk_0xB67DF8F35744CF60(Local_94.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_1), sVar3, 1, 15000, 2);
										}
										else
										{
											sVar4 = "KOTC_OVER3";
											func_25(sVar4, Local_94.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_1, 1, func_47(Local_94.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_3), 0, 0, 0, 1, 1, 0);
										}
									}
								}
							}
						}
						iVar0++;
					}
					if (unk_0x236D8AD7EE179F46(iLocal_3307, Local_558[unk_0x519AAFF77CC141DF() /*18*/].f_1))
					{
						if (!unk_0x236D8AD7EE179F46(iLocal_3309, Local_558[unk_0x519AAFF77CC141DF() /*18*/].f_1))
						{
							unk_0xF3148AAF69AF9CBC(&iLocal_553, 3);
						}
					}
				}
				if (unk_0x236D8AD7EE179F46(iLocal_553, 3))
				{
					if (!unk_0x236D8AD7EE179F46(iLocal_553, 4))
					{
						if (iLocal_3314 != -1)
						{
							if (((((((func_112(63) || func_112(71)) || func_112(67)) || !func_107(iLocal_3314)) || func_201(1, 1)) || unk_0xDB10DED5ABC4AA20()) || func_15(0) == 0) || iLocal_3314 == -1)
							{
								unk_0xF3148AAF69AF9CBC(&iLocal_553, 4);
							}
						}
						else
						{
							unk_0xF3148AAF69AF9CBC(&iLocal_553, 4);
						}
					}
				}
				if (unk_0x236D8AD7EE179F46(iLocal_553, 4))
				{
					iVar0 = 0;
					while (iVar0 < 1)
					{
						func_461(iVar0, iVar2);
						iVar0++;
					}
				}
			}
			bVar8 = true;
			if (func_201(0, 0))
			{
				bVar8 = false;
			}
			if (func_15(0) == 0)
			{
				bVar8 = false;
			}
			if (iLocal_3314 == -1)
			{
				bVar8 = false;
			}
			if (func_21(&uLocal_1232, bVar8) && unk_0x236D8AD7EE179F46(iLocal_553, 4))
			{
				if (!func_143() || unk_0xDB10DED5ABC4AA20())
				{
					unk_0xF3148AAF69AF9CBC(&iLocal_553, 16);
					if (unk_0x236D8AD7EE179F46(iLocal_553, 5))
					{
						unk_0xF3148AAF69AF9CBC(&(Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_4), 1);
						func_350(3);
					}
				}
			}
			break;
		
		case 3:
			break;
		
		case 4:
			break;
	}
}

int func_21(var uParam0, bool bParam1)
{
	bool bVar0;
	
	if (*uParam0 > 0 && !func_143())
	{
		func_24();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_18(&(uParam0->f_3)))
			{
				func_11(&(uParam0->f_3), 0, 0);
			}
			else if (func_5(&(uParam0->f_3), 1000, 0))
			{
				unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 25);
				if (bParam1)
				{
					unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4403), 0);
					func_11(&(uParam0->f_5), 0, 0);
				}
				func_11(&(uParam0->f_1), 0, 0);
				func_23(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_18(&(uParam0->f_5)))
			{
				if (func_5(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_22();
				func_23(uParam0, 2);
			}
			break;
		
		case 2:
			func_22();
			if (func_5(&(uParam0->f_1), 15000, 0))
			{
				if (func_140("AMEV_LBD_HELP"))
				{
					unk_0xB8BB626315D394F5(1);
				}
				func_23(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_5(&(uParam0->f_1), 23500, 0))
			{
				unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4403), 1);
				func_23(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4403), 1);
			return 1;
	}
	return 0;
}

void func_22()
{
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_4403, 0))
	{
		if (((((!unk_0x2DD54246D4BB0A20() && !unk_0x236D8AD7EE179F46(Global_2451473.f_734, 2)) && func_571(unk_0x1329891157A54C63(), 1, 1)) && !Global_67710) && !Global_52584) && !unk_0x29AFA2493D7C23D0())
		{
			unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4403), 1);
			func_142("AMEV_LBD_HELP", -1);
			func_141(1);
			unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4403), 0);
		}
	}
}

void func_23(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_24()
{
	Global_2438031 = 1;
}

int func_25(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	struct<16> Var1;
	int iVar17;
	int iVar18;
	
	iVar0 = -1;
	if (unk_0x4F5BEB9A4097F301(unk_0x1329891157A54C63(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0xB67DF8F35744CF60(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xB67DF8F35744CF60(iParam1), 64);
		}
		unk_0x02A6B267064771B1(sParam0);
		unk_0xDB5ED960DFB0E4DF(iParam2);
		unk_0x6222A57F463E8EE7(func_35(&Var1));
		unk_0x6D55FF05D62B91BC(iParam3);
		if (!bParam6)
		{
			iVar0 = unk_0x267D6EB296008122(0, 1);
		}
		else
		{
			Global_2450501 = { func_34(iParam1) };
			if (unk_0xEF956A1EC046AA4A(&Global_2450431, 35, &Global_2450501))
			{
				iVar17 = 0;
				if (unk_0xD994929E13CC1ED5(&(Global_2450431.f_22), "Leader") && Global_2450431.f_30 == 0)
				{
					iVar17 = 1;
				}
				if (Global_2450431.f_21 > 0)
				{
					iVar18 = 0;
				}
				else
				{
					iVar18 = 1;
				}
				if (bParam8)
				{
					if (bParam9)
					{
						Var1 = { func_33(&Var1) };
					}
					iVar0 = unk_0xADB0BFD6F62AC3BD(iVar18, unk_0x9C86777A4808F723(&Global_2450431, 35), &(Global_2450431.f_17), Global_2450431.f_30, iVar17, 0, Global_2450431, &Var1, Global_1317051, Global_1317052, Global_1317053);
				}
				else
				{
					iVar0 = unk_0xB8D63AFAF0FBFF54(iVar18, unk_0x9C86777A4808F723(&Global_2450431, 35), &(Global_2450431.f_17), Global_2450431.f_30, iVar17, 0, Global_2450431, Global_1317051, Global_1317052, Global_1317053);
				}
			}
			else
			{
				iVar0 = unk_0x267D6EB296008122(0, 1);
			}
		}
		func_26(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_26(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_32() || !unk_0x726DA50057167075()) || !func_29(unk_0x1329891157A54C63(), 0))
	{
		return;
	}
	iVar0 = func_27(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1707570.f_5[iVar0 /*53*/] = iParam0;
		Global_1707570.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1707570.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1707570.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1707570.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1707570.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1707570.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1707570.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1707570.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1707570.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1707570.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1707570.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_27(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1707570 - 1))
	{
		if (iParam0 > Global_1707570.f_5[iVar0 /*53*/].f_1)
		{
			func_28(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1707570++;
	if (Global_1707570 > 5)
	{
		Global_1707570 = 5;
		return Global_1707570;
	}
	return (Global_1707570 - 1);
}

void func_28(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1707570.f_5[iVar0 /*53*/] = { Global_1707570.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_29(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1329891157A54C63())
	{
		bVar0 = func_30(-1, 0) == 8;
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

int func_30(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_31();
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

int func_31()
{
	return Global_1312729;
}

bool func_32()
{
	return unk_0x2D6859674806FDCE(-1762644250);
}

struct<16> func_33(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

struct<13> func_34(int iParam0)
{
	struct<13> Var0;
	
	unk_0x73231AB7B8BD1CD1(iParam0, &Var0, 13);
	return Var0;
}

var func_35(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_36(&cVar0);
}

var func_36(char[4] cParam0)
{
	return cParam0;
}

int func_37(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	struct<70> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_69 = -1;
	func_43(iParam0, &Var0, iParam1, sParam2, sParam4);
	StringCopy(&(Var0.f_23), sParam3, 64);
	Var0.f_65 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_66 = iParam7;
	return func_38(&Var0);
}

int func_38(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2422670.f_2419)
		{
			return 0;
		}
	}
	func_42(uParam0);
	func_40(uParam0);
	if (func_39(uParam0->f_1))
	{
		if (Global_2422670.f_2137[0 /*70*/].f_2 == 0)
		{
			Global_2422670.f_2137[0 /*70*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2422670.f_2137[0 /*70*/].f_1 == 13 || Global_2422670.f_2137[0 /*70*/].f_1 == 52) || Global_2422670.f_2137[0 /*70*/].f_1 == 53) || Global_2422670.f_2137[0 /*70*/].f_1 == 57)
		{
			Global_2422670.f_2137[0 /*70*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2422670.f_2137[iVar0 + 1 /*70*/] = { Global_2422670.f_2137[iVar0 /*70*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2422670.f_2137[1 /*70*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2422670.f_2137[iVar0 /*70*/].f_2 == 0)
		{
			Global_2422670.f_2137[iVar0 /*70*/] = { *uParam0 };
			return 1;
		}
		else if (uParam0->f_1 == 1)
		{
			unk_0xF3148AAF69AF9CBC(&(Global_2422670.f_2137[iVar0 /*70*/].f_63), 1);
			Global_2422670.f_2137[iVar0 /*70*/].f_2 = 5;
		}
		iVar0++;
	}
	return 0;
}

int func_39(int iParam0)
{
	if ((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 55) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10)
	{
		return 1;
	}
	return 0;
}

void func_40(var uParam0)
{
	if (func_41(uParam0->f_1))
	{
		uParam0->f_66 = func_115();
	}
}

int func_41(int iParam0)
{
	switch (iParam0)
	{
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
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
		case 81:
		case 82:
			return 1;
		
		default:
	}
	return 0;
}

void func_42(var uParam0)
{
	if (func_41(uParam0->f_1))
	{
		uParam0->f_67 = 1;
	}
}

void func_43(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_16 = func_44();
	uParam1->f_17 = func_44();
	uParam1->f_18 = func_44();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_19), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_3 = iParam2;
	uParam1->f_65 = 1;
	uParam1->f_67 = 0;
	StringCopy(&(uParam1->f_23), "", 64);
	StringCopy(&(uParam1->f_39), "", 64);
}

int func_44()
{
	return -1;
}

int func_45(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x02A6B267064771B1(sParam0);
	unk_0x6D55FF05D62B91BC(iParam1);
	iVar0 = unk_0x267D6EB296008122(0, 1);
	func_26(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_46(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<70> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_69 = -1;
	func_43(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_65 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_66 = iParam7;
	return func_38(&Var0);
}

int func_47(float fParam0)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844(fParam0);
	iVar0 = (iVar0 / Global_262145.f_8960);
	iVar0 = (iVar0 * Global_262145.f_8960);
	return iVar0;
}

int func_48(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x02A6B267064771B1(sParam0);
	iVar0 = unk_0x267D6EB296008122(0, 1);
	func_26(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

bool func_49()
{
	return unk_0x236D8AD7EE179F46(Global_1573867.f_1, 25);
}

void func_50()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 8)
		{
			func_51(iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

void func_51(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_358(iParam0);
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	if (unk_0x236D8AD7EE179F46(uLocal_554, iVar0))
	{
		unk_0x10E4F2F3A37EF7EC(func_53(iParam0, 0), 0, func_52(iParam0, 1));
		if (iVar0 == 4)
		{
			unk_0x10E4F2F3A37EF7EC(func_53(iParam0, 1), 0, func_52(iParam0, 1));
		}
		unk_0xC69E84EBBD7166E6(&iLocal_554, iVar0);
	}
}

int func_52(int iParam0, bool bParam1)
{
	if (func_8(iParam0) <= -1)
	{
		if (bParam1)
		{
			return 21;
		}
		return 21;
	}
	else if (func_8(iParam0) == unk_0x519AAFF77CC141DF())
	{
		return 9;
	}
	return 6;
}

int func_53(int iParam0, bool bParam1)
{
	switch (func_358(iParam0))
	{
		case 0:
			return 6;
		
		case 1:
			return 9;
		
		case 2:
			return 8;
		
		case 3:
			return 10;
		
		case 5:
			return 11;
		
		case 6:
			return 12;
		
		case 7:
			return 13;
		
		case 4:
			if (!bParam1)
			{
				return 7;
			}
			else
			{
				return 14;
			}
			break;
	}
	return 6;
}

void func_54(int iParam0)
{
	if (unk_0xFBACB273AA628CC5(func_55(iParam0)))
	{
		unk_0x0A8175F24237A3D4(&(Local_1239[iParam0 /*68*/].f_28));
	}
}

var func_55(int iParam0)
{
	return Local_1239[iParam0 /*68*/].f_28;
}

void func_56(int iParam0)
{
	if (unk_0xFBACB273AA628CC5(func_57(iParam0)))
	{
		unk_0x0A8175F24237A3D4(&(Local_1239[iParam0 /*68*/].f_27));
	}
}

var func_57(int iParam0)
{
	return Local_1239[iParam0 /*68*/].f_27;
}

void func_58()
{
	bool bVar0;
	
	if (iLocal_3314 != -1)
	{
		if (func_107(iLocal_3314))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!unk_0x236D8AD7EE179F46(iLocal_553, 15))
		{
			unk_0xF2A6D4C99549CA85("MP_Deathmatch_Type_Challenge_Scene");
			unk_0xF3148AAF69AF9CBC(&iLocal_553, 15);
		}
	}
	else if (unk_0x236D8AD7EE179F46(iLocal_553, 15))
	{
		unk_0x0C22E352114F699C("MP_Deathmatch_Type_Challenge_Scene");
		unk_0xC69E84EBBD7166E6(&iLocal_553, 15);
	}
}

void func_59(int iParam0)
{
	if (iParam0 == iParam0)
	{
		iParam0 = iParam0;
	}
	if ((((func_107(unk_0x519AAFF77CC141DF()) && !func_201(1, 1)) && iLocal_3314 == unk_0x519AAFF77CC141DF()) && !func_69(unk_0x1329891157A54C63(), 0)) && !func_68(unk_0x1329891157A54C63()))
	{
		if (!unk_0x236D8AD7EE179F46(iLocal_553, 17))
		{
			if (iLocal_3318 == 0)
			{
				iLocal_3318 = 1;
			}
			func_66(1, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077);
			func_62();
			unk_0xF3148AAF69AF9CBC(&iLocal_553, 17);
		}
	}
	else if (unk_0x236D8AD7EE179F46(iLocal_553, 17))
	{
		if (iLocal_3318)
		{
			iLocal_3318 = 0;
		}
		func_60();
		func_66(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077);
		unk_0xC69E84EBBD7166E6(&iLocal_553, 17);
	}
}

void func_60()
{
	func_61();
	Global_2404607.f_617 = 0;
}

void func_61()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404607.f_618[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_62()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	var uVar5;
	var uVar6;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 60)
		{
			func_64(func_358(iVar0), iVar1, &Var2, &uVar5, &uVar6);
			func_63(Var2, uVar5, uVar6);
			iVar1++;
		}
		iVar0++;
	}
}

void func_63(struct<3> Param0, var uParam3, var uParam4)
{
	if (!Global_2404607.f_616)
	{
	}
	if (Global_2404607.f_617 < 100)
	{
		if (unk_0x652D2EEEF1D3E62C(Param0) <= 0.01f)
		{
			return;
		}
		Global_2404607.f_618[Global_2404607.f_617 /*5*/] = { Param0 };
		Global_2404607.f_618[Global_2404607.f_617 /*5*/].f_3 = uParam3;
		Global_2404607.f_618[Global_2404607.f_617 /*5*/].f_4 = uParam4;
		Global_2404607.f_617++;
	}
}

void func_64(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1221.708f, -1849.335f, 1.251f };
					*uParam3 = 337.5771f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -1237.67f, -1835.705f, 1.2517f };
					*uParam3 = 323.4358f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -1249.548f, -1817.355f, 1.2506f };
					*uParam3 = 297.8504f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -1248.685f, -1803.257f, 1.3833f };
					*uParam3 = 286.9426f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -1248.991f, -1791.148f, 1.6577f };
					*uParam3 = 279.8152f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -1255.678f, -1781.741f, 1.5292f };
					*uParam3 = 271.3008f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -1245.86f, -1762.165f, 1.7061f };
					*uParam3 = 232.2266f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -1245.333f, -1747.114f, 2.0783f };
					*uParam3 = 246.9348f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -1231.577f, -1747.278f, 2.2692f };
					*uParam3 = 208.6838f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -1220.947f, -1735.378f, 3.3682f };
					*uParam3 = 201.3756f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -1210.075f, -1736.36f, 3.2672f };
					*uParam3 = 188.154f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -1198.247f, -1731.74f, 3.3204f };
					*uParam3 = 194.4361f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -1181.951f, -1730.004f, 3.3951f };
					*uParam3 = 177.6483f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { -1170.59f, -1719.653f, 3.3414f };
					*uParam3 = 159.2419f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -1159.548f, -1712.506f, 3.327f };
					*uParam3 = 173.1471f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { -1164.51f, -1729.84f, 3.2972f };
					*uParam3 = 164.5387f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 16:
					*uParam2 = { -1153.682f, -1723.684f, 3.2673f };
					*uParam3 = 159.7204f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 17:
					*uParam2 = { -1144.7f, -1734.572f, 3.2823f };
					*uParam3 = 132.856f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 18:
					*uParam2 = { -1128.272f, -1755.871f, 3.0265f };
					*uParam3 = 111.5717f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 19:
					*uParam2 = { -1140.422f, -1768.454f, 3.1609f };
					*uParam3 = 108.3239f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 20:
					*uParam2 = { -1236.169f, -1851.284f, 1.2074f };
					*uParam3 = 330.7894f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -1250.026f, -1849.988f, 0.8113f };
					*uParam3 = 315.2169f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -1249.307f, -1832.01f, 1.2365f };
					*uParam3 = 308.724f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -1262.08f, -1826.342f, 0.88f };
					*uParam3 = 291.1317f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -1262.728f, -1810.021f, 1.2095f };
					*uParam3 = 279.2619f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -1260.259f, -1797.316f, 1.24f };
					*uParam3 = 266.2758f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -1274.153f, -1773.825f, 1.229f };
					*uParam3 = 253.8689f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -1260.69f, -1766.211f, 1.6755f };
					*uParam3 = 244.6821f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -1266.035f, -1751.414f, 1.7303f };
					*uParam3 = 225.9904f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -1208.952f, -1720.76f, 3.4325f };
					*uParam3 = 190.2951f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -1195.125f, -1711.339f, 3.4745f };
					*uParam3 = 177.7994f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 31:
					*uParam2 = { -1186.983f, -1699.157f, 3.4862f };
					*uParam3 = 185.7234f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 32:
					*uParam2 = { -1174.999f, -1703.776f, 3.4646f };
					*uParam3 = 172.7709f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 33:
					*uParam2 = { -1163.133f, -1699.905f, 3.4278f };
					*uParam3 = 169.2118f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 34:
					*uParam2 = { -1150.336f, -1701.652f, 3.3947f };
					*uParam3 = 148.2826f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 35:
					*uParam2 = { -1144.078f, -1687.13f, 3.4853f };
					*uParam3 = 149.4927f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 36:
					*uParam2 = { -1138.136f, -1707.854f, 3.387f };
					*uParam3 = 133.8241f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 37:
					*uParam2 = { -1140.055f, -1722.341f, 3.3376f };
					*uParam3 = 127.5326f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 38:
					*uParam2 = { -1116.763f, -1746.22f, 3.1299f };
					*uParam3 = 107.5649f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 39:
					*uParam2 = { -1108.207f, -1735.964f, 3.2643f };
					*uParam3 = 123.7412f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 40:
					*uParam2 = { -1227.086f, -1873.856f, 4.935f };
					*uParam3 = 337.0957f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -1215.905f, -1861.876f, 4.9443f };
					*uParam3 = 346.5332f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -1206.479f, -1854.022f, 5.0039f };
					*uParam3 = 346.756f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -1234.57f, -1863.302f, 0.4019f };
					*uParam3 = 334.4932f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -1261.542f, -1840.843f, 0.429f };
					*uParam3 = 308.3732f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -1271.821f, -1799.404f, 0.9933f };
					*uParam3 = 276.274f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -1284.195f, -1789.106f, 0.6971f };
					*uParam3 = 266.1992f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -1257.971f, -1736.858f, 2.0784f };
					*uParam3 = 227.487f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -1247.267f, -1725.901f, 3.2245f };
					*uParam3 = 214.7514f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -1234.988f, -1722.898f, 3.5186f };
					*uParam3 = 220.7502f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -1235.874f, -1703.238f, 3.0997f };
					*uParam3 = 214.0405f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -1231.588f, -1682.849f, 2.571f };
					*uParam3 = 203.4435f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -1215.568f, -1695.777f, 3.1209f };
					*uParam3 = 196.5891f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -1132.415f, -1669.435f, 3.5755f };
					*uParam3 = 148.2112f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -1159.309f, -1677.777f, 3.4694f };
					*uParam3 = 175.6314f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -1129.18f, -1690.502f, 3.4678f };
					*uParam3 = 143.3497f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -1119.669f, -1702.988f, 3.4241f };
					*uParam3 = 129.3894f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -1120.063f, -1717.326f, 3.3807f };
					*uParam3 = 123.5869f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -1111.901f, -1758.692f, 4.7663f };
					*uParam3 = 93.7592f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -1122.059f, -1769.543f, 4.9921f };
					*uParam3 = 93.2178f;
					*uParam4 = func_65(iParam0, 2);
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1692.861f, -80.4741f, 174.6247f };
					*uParam3 = 22.7116f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { 1699.049f, -73.278f, 175.3116f };
					*uParam3 = 36.6067f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { 1686.15f, -72.261f, 173.9488f };
					*uParam3 = 33.5969f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { 1673.573f, -76.8662f, 172.6441f };
					*uParam3 = 358.3647f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { 1668.303f, -68.8711f, 172.6008f };
					*uParam3 = 344.7672f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { 1664.004f, -81.4696f, 171.3247f };
					*uParam3 = 335.9399f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { 1653.943f, -82.7018f, 170.2733f };
					*uParam3 = 316.5097f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { 1642.184f, 16.9022f, 172.8744f };
					*uParam3 = 213.6659f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { 1647.117f, 26.0881f, 172.469f };
					*uParam3 = 200.4823f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { 1643.251f, 34.2645f, 171.8502f };
					*uParam3 = 198.3856f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { 1652.155f, 38.4683f, 171.5731f };
					*uParam3 = 167.6548f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { 1647.521f, 46.6361f, 171.515f };
					*uParam3 = 173.6852f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { 1658.341f, 46.5354f, 171.4155f };
					*uParam3 = 142.775f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { 1654.557f, 54.9274f, 171.5186f };
					*uParam3 = 158.0565f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { 1679.687f, -62.2895f, 172.8752f };
					*uParam3 = 19.1425f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { 1648.26f, -92.0332f, 169.0467f };
					*uParam3 = 320.4252f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 16:
					*uParam2 = { 1641.12f, -90.8545f, 167.3707f };
					*uParam3 = 340.133f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 17:
					*uParam2 = { 1632.839f, -88.4347f, 166.232f };
					*uParam3 = 275.8517f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 18:
					*uParam2 = { 1624.526f, -82.0814f, 165.1201f };
					*uParam3 = 268.6114f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 19:
					*uParam2 = { 1709.025f, -79.3046f, 176.215f };
					*uParam3 = 47.9711f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 20:
					*uParam2 = { 1709.47f, -89.1149f, 176.8704f };
					*uParam3 = 45.0986f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { 1719.762f, -89.4824f, 177.2371f };
					*uParam3 = 40.521f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { 1715.411f, -97.7661f, 177.0435f };
					*uParam3 = 39.9521f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { 1725.27f, -101.2808f, 177.3414f };
					*uParam3 = 28.2699f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { 1664.762f, 51.6959f, 171.2758f };
					*uParam3 = 125.1599f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { 1659.656f, 60.4243f, 171.7457f };
					*uParam3 = 155.8516f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { 1671.615f, 58.2652f, 171.0533f };
					*uParam3 = 130.5652f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { 1670.401f, 68.8127f, 170.8255f };
					*uParam3 = 142.8485f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { 1680.824f, 64.6627f, 170.8684f };
					*uParam3 = 171.7255f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { 1686.476f, 72.1055f, 170.6706f };
					*uParam3 = 118.2492f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { 1724.498f, 78.3834f, 169.7617f };
					*uParam3 = 122.1907f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 31:
					*uParam2 = { 1716.555f, 77.9f, 170.125f };
					*uParam3 = 133.2787f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 32:
					*uParam2 = { 1718.658f, 69.3794f, 169.7158f };
					*uParam3 = 123.6501f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 33:
					*uParam2 = { 1708.223f, 67.7488f, 170.122f };
					*uParam3 = 125.7215f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 34:
					*uParam2 = { 1696.666f, 67.5787f, 170.4112f };
					*uParam3 = 130.5078f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 35:
					*uParam2 = { 1688.924f, 64.4787f, 170.5247f };
					*uParam3 = 116.7526f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 36:
					*uParam2 = { 1654.409f, 85.3155f, 178.6964f };
					*uParam3 = 185.1295f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 37:
					*uParam2 = { 1642.521f, 61.9855f, 183.7891f };
					*uParam3 = 187.6025f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 38:
					*uParam2 = { 1663.522f, 37.8715f, 170.7838f };
					*uParam3 = 181.9699f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 39:
					*uParam2 = { 1663.431f, 25.7403f, 167.747f };
					*uParam3 = 165.7094f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 40:
					*uParam2 = { 1660.156f, 12.794f, 165.1707f };
					*uParam3 = 184.4829f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { 1658.881f, -53.3581f, 167.4092f };
					*uParam3 = 340.2356f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { 1650.805f, -63.341f, 163.7801f };
					*uParam3 = 325.3763f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { 1619.019f, -87.1216f, 164.7846f };
					*uParam3 = 285.7851f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { 1616.216f, -76.6892f, 164.2788f };
					*uParam3 = 277.6688f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { 1611.567f, -84.1719f, 164.6911f };
					*uParam3 = 279.2012f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { 1606.564f, -73.1815f, 163.3484f };
					*uParam3 = 256.1666f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { 1595.997f, -78.4415f, 162.1879f };
					*uParam3 = 273.5168f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { 1596.441f, -69.8807f, 162.1016f };
					*uParam3 = 260.1767f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { 1587.161f, -67.6343f, 161.2196f };
					*uParam3 = 253.1009f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { 1582.353f, -76.1702f, 160.4171f };
					*uParam3 = 265.3223f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { 1725.676f, -110.6558f, 177.8831f };
					*uParam3 = 34.6784f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { 1736.203f, -108.6194f, 179.2085f };
					*uParam3 = 50.2519f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { 1746.135f, -106.5357f, 180.7151f };
					*uParam3 = 65.9975f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { 1749.594f, -96.7965f, 182.065f };
					*uParam3 = 79.3328f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { 1758.513f, -98.7928f, 182.982f };
					*uParam3 = 82.5892f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { 1760.473f, -88.7761f, 184.3481f };
					*uParam3 = 83.4158f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { 1770.153f, -89.9473f, 186.0895f };
					*uParam3 = 69.9826f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { 1772.731f, -80.3556f, 187.6041f };
					*uParam3 = 87.3442f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { 1782.038f, -81.4923f, 188.8666f };
					*uParam3 = 92.9392f;
					*uParam4 = func_65(iParam0, 2);
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -358.9362f, 6101.992f, 30.5445f };
					*uParam3 = 124.1256f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -348.5437f, 6102.846f, 30.5442f };
					*uParam3 = 115.8979f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -354.9039f, 6112.223f, 30.5402f };
					*uParam3 = 155.6832f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -341.2615f, 6111.447f, 30.542f };
					*uParam3 = 114.7182f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -347.4731f, 6120.339f, 30.5401f };
					*uParam3 = 161.4131f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -376.9227f, 6129.001f, 30.5322f };
					*uParam3 = 153.5222f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -384.3775f, 6136.947f, 30.4047f };
					*uParam3 = 187.2874f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -389.1951f, 6129.617f, 30.5795f };
					*uParam3 = 181.9189f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -399.0005f, 6127.275f, 30.549f };
					*uParam3 = 204.8398f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -383.5045f, 6120.464f, 30.5795f };
					*uParam3 = 140.9251f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -391.13f, 6120.804f, 30.4824f };
					*uParam3 = 201.1372f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -402.7893f, 6117.366f, 30.403f };
					*uParam3 = 226.6899f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -412.6236f, 6114.75f, 30.403f };
					*uParam3 = 226.6899f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { -394.3771f, 6111.254f, 30.4438f };
					*uParam3 = 239.3517f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -389.6141f, 6105.142f, 30.5445f };
					*uParam3 = 223.9884f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { -393.7008f, 6063.039f, 30.6001f };
					*uParam3 = 307.3006f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 16:
					*uParam2 = { -390.5935f, 6052.42f, 30.6001f };
					*uParam3 = 318.0318f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 17:
					*uParam2 = { -370.7218f, 6062.16f, 30.6001f };
					*uParam3 = 22.496f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 18:
					*uParam2 = { -360.3093f, 6063.834f, 30.6001f };
					*uParam3 = 37.8362f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 19:
					*uParam2 = { -342.4209f, 6079.654f, 30.3972f };
					*uParam3 = 68.9811f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 20:
					*uParam2 = { -341.2047f, 6070.171f, 30.4855f };
					*uParam3 = 63.9301f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -329.9387f, 6066.402f, 30.3113f };
					*uParam3 = 44.5343f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -335.7858f, 6122.277f, 31.2548f };
					*uParam3 = 129.6423f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -342.0471f, 6128.171f, 31.2548f };
					*uParam3 = 142.1917f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -349.7313f, 6135.283f, 31.2548f };
					*uParam3 = 158.8037f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -356.2828f, 6125.203f, 30.5402f };
					*uParam3 = 199.7626f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -359.0895f, 6139.214f, 30.5635f };
					*uParam3 = 124.4663f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -369.4224f, 6152.725f, 30.4406f };
					*uParam3 = 161.3973f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -375.9839f, 6141.022f, 30.4406f };
					*uParam3 = 161.3973f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -369.7337f, 6134.166f, 30.5525f };
					*uParam3 = 136.8736f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -359.228f, 6073.3f, 30.5975f };
					*uParam3 = 40.8648f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 31:
					*uParam2 = { -350.0499f, 6083.418f, 30.3773f };
					*uParam3 = 81.9925f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 32:
					*uParam2 = { -332.9335f, 6056.562f, 30.218f };
					*uParam3 = 34.6386f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 33:
					*uParam2 = { -319.7262f, 6071.655f, 30.4404f };
					*uParam3 = 98.0741f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 34:
					*uParam2 = { -305.5597f, 6086.671f, 30.3145f };
					*uParam3 = 105.1401f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 35:
					*uParam2 = { -315.9f, 6098.8f, 30.5622f };
					*uParam3 = 68.0701f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 36:
					*uParam2 = { -321.8067f, 6105.211f, 30.5847f };
					*uParam3 = 77.1148f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 37:
					*uParam2 = { -333.3944f, 6102.061f, 30.5452f };
					*uParam3 = 94.9811f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 38:
					*uParam2 = { -328.1533f, 6111.544f, 30.5992f };
					*uParam3 = 112.3565f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 39:
					*uParam2 = { -346.6402f, 6170.479f, 30.5104f };
					*uParam3 = 153.9383f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 40:
					*uParam2 = { -348.4091f, 6161.741f, 30.5903f };
					*uParam3 = 127.3381f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -357.501f, 6164.666f, 30.3218f };
					*uParam3 = 165.9396f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -362.3921f, 6158.998f, 30.4267f };
					*uParam3 = 164.6814f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -299.2778f, 6094.682f, 30.3967f };
					*uParam3 = 97.7633f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -403.1499f, 6144.179f, 30.5344f };
					*uParam3 = 192.2655f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -419.8507f, 6128.894f, 30.3768f };
					*uParam3 = 226.1505f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -403.4776f, 6109.125f, 30.432f };
					*uParam3 = 231.4631f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -418.8898f, 6102.594f, 30.5063f };
					*uParam3 = 250.378f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -423.8823f, 6087.721f, 30.3067f };
					*uParam3 = 249.7169f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -409.3334f, 6087.301f, 30.6001f };
					*uParam3 = 255.2337f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -415.4413f, 6074.564f, 30.6001f };
					*uParam3 = 295.8184f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -424.9092f, 6072.749f, 30.4263f };
					*uParam3 = 283.0375f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -420.9166f, 6060.098f, 30.5557f };
					*uParam3 = 253.9669f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -410.8875f, 6060.549f, 30.6001f };
					*uParam3 = 233.6391f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -401.7228f, 6048.293f, 30.6001f };
					*uParam3 = 316.9792f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -410.8336f, 6049.957f, 30.7181f };
					*uParam3 = 282.7038f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -388.0199f, 6039.768f, 30.5993f };
					*uParam3 = 17.0043f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -395.2367f, 6033.086f, 30.6906f };
					*uParam3 = 344.4481f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -385.8562f, 6026.026f, 30.7199f };
					*uParam3 = 19.855f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -380.7711f, 6033.284f, 30.5989f };
					*uParam3 = 40.8827f;
					*uParam4 = func_65(iParam0, 2);
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -692.3021f, 5591.033f, 31.803f };
					*uParam3 = 74.8653f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -688.3215f, 5575.978f, 38.7867f };
					*uParam3 = 59.0735f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -697.7473f, 5566.13f, 37.8698f };
					*uParam3 = 50.5049f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -707.0853f, 5561.903f, 37.7135f };
					*uParam3 = 46.5953f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -718.0601f, 5562.404f, 35.1231f };
					*uParam3 = 35.9231f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -729.6589f, 5559.356f, 33.8316f };
					*uParam3 = 2.3291f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -723.8281f, 5544.737f, 34.8933f };
					*uParam3 = 18.3278f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -780.6183f, 5563.971f, 32.6778f };
					*uParam3 = 329.6704f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -767.3f, 5569.303f, 35.3f };
					*uParam3 = 331.3245f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -772.2f, 5581.6f, 32.6824f };
					*uParam3 = 301.3555f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -778.3644f, 5588.715f, 32.6826f };
					*uParam3 = 270.8067f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -768.7381f, 5595.103f, 32.6827f };
					*uParam3 = 230.1011f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -782.3171f, 5573.262f, 32.6847f };
					*uParam3 = 294.6598f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { -781.341f, 5582.1f, 32.6771f };
					*uParam3 = 336.2302f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -753.9799f, 5627.107f, 27.1403f };
					*uParam3 = 171.4856f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { -730.2549f, 5635.994f, 27.8518f };
					*uParam3 = 162.9716f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 16:
					*uParam2 = { -723.6004f, 5622.383f, 28.385f };
					*uParam3 = 172.2795f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 17:
					*uParam2 = { -718.595f, 5631.016f, 27.7666f };
					*uParam3 = 172.2795f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 18:
					*uParam2 = { -708.1818f, 5621.512f, 29.6452f };
					*uParam3 = 126.8752f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 19:
					*uParam2 = { -696.5601f, 5615.674f, 29.9981f };
					*uParam3 = 125.8635f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 20:
					*uParam2 = { -708.3126f, 5550.206f, 36.7429f };
					*uParam3 = 29.6831f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -766.3f, 5544.3f, 32.6826f };
					*uParam3 = 30.2344f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -749.5f, 5527.9f, 33.1f };
					*uParam3 = 346.3935f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -768.97f, 5520.835f, 32.6799f };
					*uParam3 = 340.5899f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -763.8516f, 5533.312f, 32.6785f };
					*uParam3 = 1.7896f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -775.123f, 5542.04f, 32.6934f };
					*uParam3 = 349.4598f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -766.6f, 5553.1f, 34.4f };
					*uParam3 = 1.046f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -771.2969f, 5556.745f, 32.6834f };
					*uParam3 = 349.9529f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -781.6904f, 5555.604f, 32.6802f };
					*uParam3 = 351.5664f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -769.5516f, 5621.658f, 26.7823f };
					*uParam3 = 235.7381f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -761.2958f, 5636.444f, 25.4519f };
					*uParam3 = 168.4409f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 31:
					*uParam2 = { -760.2766f, 5661.296f, 22.954f };
					*uParam3 = 164.5044f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 32:
					*uParam2 = { -741.7708f, 5648.583f, 25.8433f };
					*uParam3 = 171.5803f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 33:
					*uParam2 = { -731.1522f, 5650.561f, 27.2619f };
					*uParam3 = 172.6602f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 34:
					*uParam2 = { -721.4506f, 5664.842f, 26.6086f };
					*uParam3 = 175.8839f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 35:
					*uParam2 = { -719.6653f, 5647.082f, 28.1182f };
					*uParam3 = 166.6596f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 36:
					*uParam2 = { -708.6494f, 5641.488f, 29.7045f };
					*uParam3 = 139.2498f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 37:
					*uParam2 = { -698.6087f, 5635.278f, 31.1732f };
					*uParam3 = 130.991f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 38:
					*uParam2 = { -764.6f, 5648.1f, 23.8802f };
					*uParam3 = 183.034f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 39:
					*uParam2 = { -750.9f, 5666.5f, 23.3295f };
					*uParam3 = 231.3595f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 40:
					*uParam2 = { -719.377f, 5680.363f, 25.3398f };
					*uParam3 = 160.6696f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -698.3569f, 5694.537f, 26.6459f };
					*uParam3 = 147.8193f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -680.2346f, 5676.271f, 30.6741f };
					*uParam3 = 86.9398f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -676.3746f, 5655.031f, 32.0498f };
					*uParam3 = 139.4649f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -680.2036f, 5638.799f, 32.6927f };
					*uParam3 = 134.8275f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -650.3818f, 5653.84f, 33.0871f };
					*uParam3 = 123.0167f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -670.8715f, 5583.509f, 38.7761f };
					*uParam3 = 85.3828f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -743.9585f, 5544.044f, 32.6886f };
					*uParam3 = 10.6683f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -786.1422f, 5543.069f, 32.7461f };
					*uParam3 = 320.9388f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -800.3854f, 5544.438f, 32.1822f };
					*uParam3 = 318.5256f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -808.8489f, 5557.178f, 31.0331f };
					*uParam3 = 284.0945f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -804.6185f, 5577.981f, 30.1522f };
					*uParam3 = 312.7694f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -804.7294f, 5593.23f, 28.3762f };
					*uParam3 = 257.0917f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -796.4553f, 5614.668f, 26.6406f };
					*uParam3 = 245.4986f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -790.2338f, 5632.483f, 25.0732f };
					*uParam3 = 224.0737f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -807.922f, 5624.847f, 24.5138f };
					*uParam3 = 240.116f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -778.2f, 5620.3f, 27f };
					*uParam3 = 221.8036f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -820.9523f, 5595.459f, 24.6204f };
					*uParam3 = 248.8524f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -712.2f, 5689.9f, 26f };
					*uParam3 = 156.9858f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -699.6256f, 5678.481f, 29.242f };
					*uParam3 = 137.245f;
					*uParam4 = func_65(iParam0, 2);
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 2504.708f, 3832.864f, 44.2233f };
					*uParam3 = 183.6139f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { 2470.234f, 3832.214f, 39.2978f };
					*uParam3 = 221.0469f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { 2469.984f, 3815.587f, 39.1223f };
					*uParam3 = 236.1043f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { 2472.682f, 3802.595f, 39.5029f };
					*uParam3 = 252.6169f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { 2448.337f, 3799.731f, 39.2155f };
					*uParam3 = 245.4931f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { 2429.278f, 3803.292f, 38.8134f };
					*uParam3 = 251.2017f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { 2461.768f, 3786.931f, 40.1218f };
					*uParam3 = 273.0054f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { 2446.433f, 3784.864f, 39.6849f };
					*uParam3 = 253.3649f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { 2431.84f, 3775.977f, 39.5771f };
					*uParam3 = 262.8813f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { 2426.948f, 3759.106f, 40.5694f };
					*uParam3 = 286.9683f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { 2413.091f, 3747.124f, 40.6396f };
					*uParam3 = 291.6124f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { 2435.193f, 3749.984f, 41.1655f };
					*uParam3 = 292.603f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { 2447.66f, 3752.583f, 41.4906f };
					*uParam3 = 297.6301f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { 2458.258f, 3758.142f, 41.1153f };
					*uParam3 = 303.2986f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { 2467.802f, 3750.602f, 41.4918f };
					*uParam3 = 303.2986f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { 2473.253f, 3734.285f, 41.4643f };
					*uParam3 = 319.8912f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 16:
					*uParam2 = { 2474.793f, 3718.189f, 43.5229f };
					*uParam3 = 353.5786f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 17:
					*uParam2 = { 2494.569f, 3724.297f, 42.2386f };
					*uParam3 = 354.6885f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 18:
					*uParam2 = { 2336.604f, 3786.805f, 35.4554f };
					*uParam3 = 271.7747f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 19:
					*uParam2 = { 2449.885f, 3769.517f, 40.3259f };
					*uParam3 = 284.606f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 20:
					*uParam2 = { 2486.191f, 3708.932f, 42.8584f };
					*uParam3 = 338.9825f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { 2441.525f, 3726.493f, 49.833f };
					*uParam3 = 305.777f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { 2435.716f, 3718.48f, 50.9846f };
					*uParam3 = 316.2304f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { 2414.73f, 3734.144f, 41.656f };
					*uParam3 = 304.645f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { 2397.829f, 3753.812f, 38.2667f };
					*uParam3 = 277.5322f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { 2413.961f, 3768.889f, 38.9386f };
					*uParam3 = 262.8003f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { 2418.116f, 3784.66f, 38.7937f };
					*uParam3 = 271.0046f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { 2402.416f, 3792.671f, 38.1692f };
					*uParam3 = 252.6272f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { 2392.174f, 3800.214f, 37.3174f };
					*uParam3 = 233.5119f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { 2379.034f, 3800.104f, 36.6627f };
					*uParam3 = 253.7779f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { 2421.42f, 3819.218f, 36.6498f };
					*uParam3 = 240.598f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 31:
					*uParam2 = { 2433.665f, 3833.4f, 36.8711f };
					*uParam3 = 235.1875f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 32:
					*uParam2 = { 2446.784f, 3840.43f, 36.9341f };
					*uParam3 = 232.4636f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 33:
					*uParam2 = { 2462.195f, 3846.708f, 37.3552f };
					*uParam3 = 199.2328f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 34:
					*uParam2 = { 2477.133f, 3855.754f, 37.2602f };
					*uParam3 = 202.825f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 35:
					*uParam2 = { 2450.037f, 3811.51f, 39.475f };
					*uParam3 = 250.1392f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 36:
					*uParam2 = { 2485.065f, 3829.442f, 39.1108f };
					*uParam3 = 211.7988f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 37:
					*uParam2 = { 2484.83f, 3814.141f, 39.3918f };
					*uParam3 = 229.5693f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 38:
					*uParam2 = { 2566.085f, 3806.854f, 64.6304f };
					*uParam3 = 105.4003f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 39:
					*uParam2 = { 2585.664f, 3806.854f, 71.7304f };
					*uParam3 = 110.9439f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 40:
					*uParam2 = { 2620.499f, 3798.988f, 78.4414f };
					*uParam3 = 80.1436f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { 2612.831f, 3816.725f, 77.148f };
					*uParam3 = 105.885f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { 2481.003f, 3874.722f, 38.2954f };
					*uParam3 = 168.6165f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { 2439.931f, 3869.727f, 36.8359f };
					*uParam3 = 194.6768f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { 2415.056f, 3867.74f, 36.4367f };
					*uParam3 = 227.8888f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { 2405.057f, 3840.129f, 37.6172f };
					*uParam3 = 237.4134f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { 2402.643f, 3831.987f, 37.3666f };
					*uParam3 = 243.847f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { 2393.434f, 3820.804f, 37.399f };
					*uParam3 = 274.6625f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { 2379.645f, 3814.471f, 37.141f };
					*uParam3 = 261.4475f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { 2362.336f, 3795.185f, 36.6862f };
					*uParam3 = 270.3616f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { 2347.031f, 3771.605f, 36.6862f };
					*uParam3 = 270.3616f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { 2390.352f, 3771.605f, 37.0186f };
					*uParam3 = 277.3893f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { 2376.869f, 3747.89f, 43.6471f };
					*uParam3 = 283.6571f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { 2397.29f, 3720.224f, 45.2658f };
					*uParam3 = 309.3541f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { 2389.842f, 3708.438f, 48.8025f };
					*uParam3 = 328.7773f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { 2414.263f, 3688.072f, 55.1156f };
					*uParam3 = 318.0387f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { 2425.977f, 3703.052f, 52.2051f };
					*uParam3 = 321.8817f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { 2457.983f, 3723.803f, 47.774f };
					*uParam3 = 320.001f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { 2467.429f, 3686.109f, 46.7001f };
					*uParam3 = 326.4034f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { 2500.671f, 3701.153f, 40.9656f };
					*uParam3 = 343.9347f;
					*uParam4 = func_65(iParam0, 2);
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -393.9336f, 1106.463f, 324.963f };
					*uParam3 = 3.7402f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -410.0362f, 1109.404f, 324.9667f };
					*uParam3 = 333.049f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -428.784f, 1115.099f, 325.868f };
					*uParam3 = 300.9811f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -447.0386f, 1119.385f, 324.9694f };
					*uParam3 = 291.3791f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -442.3369f, 1130.731f, 324.9604f };
					*uParam3 = 277.1605f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -440.9719f, 1142.607f, 324.9557f };
					*uParam3 = 250.3044f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -446.4467f, 1154.628f, 325.0045f };
					*uParam3 = 248.4445f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -434.5363f, 1160.321f, 324.9632f };
					*uParam3 = 230.0039f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -424.4414f, 1172.293f, 325.0043f };
					*uParam3 = 219.6946f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -421.9871f, 1161.774f, 325.0063f };
					*uParam3 = 219.721f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -427.4456f, 1148.051f, 325.0044f };
					*uParam3 = 230.6394f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -428.7997f, 1136.869f, 325.0044f };
					*uParam3 = 260.5906f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -431.5406f, 1126.397f, 325.0403f };
					*uParam3 = 280.8301f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { -416.0247f, 1120.771f, 324.9593f };
					*uParam3 = 308.4634f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -419.4272f, 1131.455f, 325.0045f };
					*uParam3 = 267.8754f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { -418.7003f, 1142.939f, 324.962f };
					*uParam3 = 234.7959f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 16:
					*uParam2 = { -408.7494f, 1158.555f, 325.0084f };
					*uParam3 = 202.298f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 17:
					*uParam2 = { -411.2803f, 1169.951f, 324.9431f };
					*uParam3 = 205.6539f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 18:
					*uParam2 = { -398.8847f, 1164.101f, 325.0133f };
					*uParam3 = 184.3107f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 19:
					*uParam2 = { -388.1964f, 1173.05f, 324.8147f };
					*uParam3 = 166.4872f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 20:
					*uParam2 = { -368.8524f, 1165.414f, 324.8589f };
					*uParam3 = 143.9187f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -378.9884f, 1168.124f, 324.9442f };
					*uParam3 = 138.8804f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -386.2831f, 1186.969f, 324.8583f };
					*uParam3 = 168.679f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -424.0227f, 1207.077f, 324.8583f };
					*uParam3 = 192.8885f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -425.9954f, 1196.52f, 324.8583f };
					*uParam3 = 182.6931f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -400.9391f, 1177.741f, 324.7394f };
					*uParam3 = 183.8522f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -414.3408f, 1178.525f, 324.7417f };
					*uParam3 = 190.7249f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -424.777f, 1183.848f, 324.7417f };
					*uParam3 = 204.1173f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -438.3099f, 1184.969f, 324.9972f };
					*uParam3 = 216.3494f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -440.8298f, 1174.33f, 324.9674f };
					*uParam3 = 236.8431f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -450.9589f, 1165.905f, 324.9547f };
					*uParam3 = 238.6017f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 31:
					*uParam2 = { -459.008f, 1156.905f, 324.9622f };
					*uParam3 = 235.1455f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 32:
					*uParam2 = { -466.6086f, 1151.548f, 324.9625f };
					*uParam3 = 262.671f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 33:
					*uParam2 = { -463.0775f, 1140.172f, 325.0044f };
					*uParam3 = 255.8193f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 34:
					*uParam2 = { -453.6404f, 1141.622f, 325.0044f };
					*uParam3 = 270.7759f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 35:
					*uParam2 = { -468.3044f, 1126.492f, 324.9643f };
					*uParam3 = 263.469f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 36:
					*uParam2 = { -457.6102f, 1126.904f, 324.9546f };
					*uParam3 = 262.384f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 37:
					*uParam2 = { -385.6385f, 1102.252f, 324.7293f };
					*uParam3 = 25.2881f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 38:
					*uParam2 = { -383.8219f, 1093.566f, 324.3149f };
					*uParam3 = 2.7963f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 39:
					*uParam2 = { -390.1671f, 1092.119f, 325.2136f };
					*uParam3 = 20.6423f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 40:
					*uParam2 = { -399.5618f, 1081.56f, 326.7102f };
					*uParam3 = 304.4997f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -390.9579f, 1075.828f, 323.3234f };
					*uParam3 = 339.4828f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -386.3601f, 1084.166f, 323.7919f };
					*uParam3 = 354.7784f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -343.6368f, 1155.187f, 324.7273f };
					*uParam3 = 115.9307f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -350.9581f, 1163.98f, 324.5156f };
					*uParam3 = 116.0754f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -359.8979f, 1158.566f, 324.6362f };
					*uParam3 = 120.9973f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -399.4072f, 1196.483f, 324.7383f };
					*uParam3 = 182.8968f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -400.8836f, 1210.983f, 325.0406f };
					*uParam3 = 195.0742f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -381.3676f, 1203.004f, 324.8555f };
					*uParam3 = 162.6808f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -377.298f, 1218.699f, 324.8556f };
					*uParam3 = 161.6516f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -416.3955f, 1238.681f, 324.8614f };
					*uParam3 = 196.7896f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -420.2233f, 1223.627f, 324.8551f };
					*uParam3 = 195.917f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -449.2621f, 1187.425f, 324.988f };
					*uParam3 = 245.0986f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -462.3227f, 1187.615f, 324.7824f };
					*uParam3 = 250.3676f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -472.915f, 1142.98f, 324.9524f };
					*uParam3 = 260.1427f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -476.2405f, 1120.76f, 324.9513f };
					*uParam3 = 281.8387f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -480.6375f, 1107.113f, 324.9517f };
					*uParam3 = 330.5185f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -467.9135f, 1119.13f, 324.975f };
					*uParam3 = 291.4161f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -472.083f, 1186.256f, 324.4922f };
					*uParam3 = 248.7844f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -336.9653f, 1155.261f, 324.8132f };
					*uParam3 = 116.8097f;
					*uParam4 = func_65(iParam0, 2);
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 457.789f, -1306.329f, 28.3817f };
					*uParam3 = 213.4484f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { 462.9742f, -1315.816f, 28.3365f };
					*uParam3 = 211.6687f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { 491.3282f, -1343.662f, 28.3462f };
					*uParam3 = 29.1021f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { 488.5634f, -1353.807f, 28.365f };
					*uParam3 = 350.4963f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { 489.778f, -1362.178f, 28.3936f };
					*uParam3 = 333.8013f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { 487.9373f, -1371.324f, 28.3937f };
					*uParam3 = 350.2063f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { 491.692f, -1377.681f, 28.4808f };
					*uParam3 = 6.2341f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { 508.4521f, -1332.725f, 28.8217f };
					*uParam3 = 81.6066f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { 482.3437f, -1302.914f, 28.3646f };
					*uParam3 = 185.9192f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { 489.6881f, -1306.12f, 28.375f };
					*uParam3 = 181.4375f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { 486.8906f, -1314.552f, 28.3349f };
					*uParam3 = 201.3654f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { 510.3459f, -1328.159f, 28.4041f };
					*uParam3 = 38.9104f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { 503.6635f, -1316.644f, 28.254f };
					*uParam3 = 78.5885f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { 498.5652f, -1306.801f, 28.375f };
					*uParam3 = 181.4375f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { 494.3388f, -1296.788f, 27.8975f };
					*uParam3 = 181.588f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { 445.3724f, -1312.777f, 33.034f };
					*uParam3 = 231.2194f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 16:
					*uParam2 = { 494.6642f, -1289.089f, 28.3994f };
					*uParam3 = 190.9093f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 17:
					*uParam2 = { 512.1788f, -1296.798f, 29.0244f };
					*uParam3 = 127.6323f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 18:
					*uParam2 = { 516.3178f, -1306.591f, 29.0325f };
					*uParam3 = 105.4519f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 19:
					*uParam2 = { 522.4741f, -1315.716f, 28.6153f };
					*uParam3 = 86.1907f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 20:
					*uParam2 = { 530.4f, -1324.764f, 28.611f };
					*uParam3 = 86.0417f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { 512.5676f, -1266.132f, 29.2571f };
					*uParam3 = 138.7522f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 22:
					*uParam2 = { 503.5058f, -1408.527f, 28.4094f };
					*uParam3 = 38.8401f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { 494.4435f, -1405.518f, 28.4094f };
					*uParam3 = 10.3526f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { 480.3399f, -1404.552f, 28.3783f };
					*uParam3 = 327.4608f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { 486.9532f, -1397.729f, 28.4044f };
					*uParam3 = 9.2252f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { 478.9936f, -1390.911f, 28.4649f };
					*uParam3 = 301.6067f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { 491.3508f, -1387.024f, 28.4781f };
					*uParam3 = 349.894f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { 423.8583f, -1342.402f, 34.9472f };
					*uParam3 = 261.565f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { 436.9487f, -1354.909f, 32.8767f };
					*uParam3 = 281.1848f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { 418.0431f, -1351.691f, 30.4924f };
					*uParam3 = 242.0479f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 31:
					*uParam2 = { 420.5738f, -1360.155f, 31.3616f };
					*uParam3 = 258.2115f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 32:
					*uParam2 = { 427.6197f, -1367.648f, 32.4927f };
					*uParam3 = 295.2934f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 33:
					*uParam2 = { 464.2118f, -1407.325f, 28.4406f };
					*uParam3 = 264.6266f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 34:
					*uParam2 = { 473.348f, -1411.325f, 28.4462f };
					*uParam3 = 282.62f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 35:
					*uParam2 = { 482.7524f, -1415.458f, 28.2625f };
					*uParam3 = 321.8356f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 36:
					*uParam2 = { 495.2037f, -1418.058f, 28.2691f };
					*uParam3 = 7.1158f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 37:
					*uParam2 = { 503.2256f, -1399.498f, 29.6255f };
					*uParam3 = 163.0629f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 38:
					*uParam2 = { 504.0861f, -1418.874f, 28.399f };
					*uParam3 = 19.1681f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 39:
					*uParam2 = { 515.1004f, -1418.266f, 28.4334f };
					*uParam3 = 70.436f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 40:
					*uParam2 = { 526.7444f, -1417.327f, 28.3217f };
					*uParam3 = 77.2632f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { 537.8759f, -1339.477f, 28.7478f };
					*uParam3 = 32.234f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { 523.1588f, -1342.832f, 28.402f };
					*uParam3 = 44.3382f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { 516.2181f, -1333.808f, 28.4019f };
					*uParam3 = 42.2223f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { 545.4319f, -1321.294f, 28.8519f };
					*uParam3 = 82.4327f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { 543.2325f, -1310.26f, 29.2949f };
					*uParam3 = 90.2737f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { 519.066f, -1293.935f, 27.1144f };
					*uParam3 = 165.5317f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { 526.7755f, -1289.459f, 29.7686f };
					*uParam3 = 143.1124f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { 523.58f, -1272.328f, 30.0824f };
					*uParam3 = 138.49f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { 524.081f, -1260.682f, 29.5842f };
					*uParam3 = 132.1786f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { 517.0681f, -1239.373f, 29.9303f };
					*uParam3 = 154.6133f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { 516.2507f, -1253.02f, 29.6427f };
					*uParam3 = 162.9373f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { 513.244f, -1278.351f, 29.7743f };
					*uParam3 = 150.8734f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { 493.7339f, -1268.213f, 28.392f };
					*uParam3 = 179.546f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { 494.1401f, -1281.491f, 28.394f };
					*uParam3 = 175.0507f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { 555.4178f, -1356.743f, 28.7709f };
					*uParam3 = 50.8085f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { 475.9386f, -1304.794f, 32.0473f };
					*uParam3 = 112.0399f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { 465.516f, -1301.604f, 32.0473f };
					*uParam3 = 189.1235f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { 440.8456f, -1321.148f, 30.3086f };
					*uParam3 = 235.1875f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { 421.228f, -1316.188f, 30.3078f };
					*uParam3 = 236.0292f;
					*uParam4 = func_65(iParam0, 2);
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1432.451f, 236.9887f, 59.1671f };
					*uParam3 = 127.6804f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -1434.54f, 243.4075f, 59.3382f };
					*uParam3 = 176.5221f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -1425.965f, 233.6748f, 58.9327f };
					*uParam3 = 67.1914f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -1431.833f, 176.7196f, 55.6359f };
					*uParam3 = 115.4533f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -1436.571f, 168.3388f, 54.8029f };
					*uParam3 = 42.4646f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -1441.14f, 162.3594f, 54.1846f };
					*uParam3 = 5.2323f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -1526.297f, 160.2353f, 53.2037f };
					*uParam3 = 277.6807f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -1518.497f, 145.7663f, 54.7527f };
					*uParam3 = 310.257f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -1506.654f, 132.8194f, 54.7529f };
					*uParam3 = 324.8665f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -1495.287f, 118.9496f, 54.7569f };
					*uParam3 = 328.5237f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -1482.5f, 114.8686f, 54.589f };
					*uParam3 = 341.3174f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -1465.16f, 114.8327f, 52.2589f };
					*uParam3 = 357.6763f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -1451.507f, 64.7578f, 51.4041f };
					*uParam3 = 91.7588f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 13:
					*uParam2 = { -1461.18f, 63.8165f, 51.8802f };
					*uParam3 = 26.7651f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -1502.689f, 44.4251f, 53.8926f };
					*uParam3 = 308.9227f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 15:
					*uParam2 = { -1470.511f, 65.7823f, 52.315f };
					*uParam3 = 20.0152f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 16:
					*uParam2 = { -1485.597f, 73.3039f, 53.7206f };
					*uParam3 = 353.3321f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 17:
					*uParam2 = { -1598.528f, 149.7495f, 58.6949f };
					*uParam3 = 277.3246f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 18:
					*uParam2 = { -1583.425f, 155.9397f, 57.9714f };
					*uParam3 = 236.3493f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 19:
					*uParam2 = { -1561.721f, 153.229f, 56.9434f };
					*uParam3 = 282.9456f;
					*uParam4 = func_65(iParam0, 0);
					break;
				
				case 20:
					*uParam2 = { -1597.874f, 138.8909f, 58.9224f };
					*uParam3 = 291.1977f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -1624.61f, 118.2495f, 60.9528f };
					*uParam3 = 286.5444f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -1635.546f, 98.7833f, 61.5816f };
					*uParam3 = 307.8016f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -1615.593f, 74.5104f, 60.5005f };
					*uParam3 = 358.8846f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -1623.266f, 72.784f, 60.7418f };
					*uParam3 = 303.1707f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -1611.091f, 66.0932f, 60.1192f };
					*uParam3 = 8.1702f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -1485.756f, 49.183f, 53.0408f };
					*uParam3 = 329.1895f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -1464.841f, 52.066f, 52.0575f };
					*uParam3 = 26.7727f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -1450.809f, 49.7653f, 51.6797f };
					*uParam3 = 42.6481f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -1462.326f, 88.4265f, 53.8826f };
					*uParam3 = 353.3917f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -1491.87f, 95.0945f, 54.1122f };
					*uParam3 = 314.473f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 31:
					*uParam2 = { -1476.808f, 108.3742f, 53.8967f };
					*uParam3 = 348.5514f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 32:
					*uParam2 = { -1443.964f, 153.6641f, 53.4228f };
					*uParam3 = 5.4015f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 33:
					*uParam2 = { -1422.558f, 161.544f, 55.0401f };
					*uParam3 = 41.9873f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 34:
					*uParam2 = { -1425.595f, 187.9517f, 56.689f };
					*uParam3 = 129.5252f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 35:
					*uParam2 = { -1411.395f, 239.4108f, 58.8958f };
					*uParam3 = 94.2972f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 36:
					*uParam2 = { -1415.572f, 249.2832f, 59.1409f };
					*uParam3 = 122.1957f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 37:
					*uParam2 = { -1459.738f, 238.6189f, 58.7949f };
					*uParam3 = 180.7222f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 38:
					*uParam2 = { -1573.812f, 161.2271f, 57.4846f };
					*uParam3 = 134.8161f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 39:
					*uParam2 = { -1589.462f, 172.0972f, 57.9565f };
					*uParam3 = 211.4448f;
					*uParam4 = func_65(iParam0, 1);
					break;
				
				case 40:
					*uParam2 = { -1599.631f, 177.347f, 58.4655f };
					*uParam3 = 218.6622f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -1605.247f, 166.7319f, 58.6104f };
					*uParam3 = 240.273f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -1610.489f, 133.2583f, 59.7152f };
					*uParam3 = 286.0001f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -1609.133f, 118.5496f, 59.985f };
					*uParam3 = 309.8568f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -1600.147f, 104.7807f, 60.079f };
					*uParam3 = 345.0445f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -1595.336f, 88.6422f, 59.9101f };
					*uParam3 = 325.4662f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -1571.039f, 95.7035f, 57.4104f };
					*uParam3 = 320.9921f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -1528.822f, 60.1519f, 56.3681f };
					*uParam3 = 299.9443f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -1581.063f, 69.4907f, 59.9072f };
					*uParam3 = 302.81f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -1502.428f, 75.9977f, 54.5965f };
					*uParam3 = 333.9787f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -1533.281f, 81.1755f, 55.8724f };
					*uParam3 = 288.1328f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -1533.984f, 102.1409f, 55.8727f };
					*uParam3 = 232.9465f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -1598.389f, 49.5038f, 59.7089f };
					*uParam3 = 24.7707f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -1613.303f, 45.0376f, 60.9909f };
					*uParam3 = 352.9884f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -1632.785f, 50.5315f, 61.543f };
					*uParam3 = 325.0906f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -1636.258f, 69.9035f, 61.7993f };
					*uParam3 = 291.5305f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -1429.691f, 143.2913f, 53.2468f };
					*uParam3 = 17.521f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -1408.523f, 152.6476f, 54.6591f };
					*uParam3 = 54.2465f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -1403.501f, 245.4762f, 59.2192f };
					*uParam3 = 112.9726f;
					*uParam4 = func_65(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -1417.563f, 260.8751f, 59.5187f };
					*uParam3 = 146.682f;
					*uParam4 = func_65(iParam0, 2);
					break;
			}
			break;
	}
}

float func_65(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_9177;
				
				case 1:
					return Global_262145.f_9178;
				
				case 2:
					return Global_262145.f_9179;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_9180;
				
				case 1:
					return Global_262145.f_9181;
				
				case 2:
					return Global_262145.f_9182;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_9183;
				
				case 1:
					return Global_262145.f_9184;
				
				case 2:
					return Global_262145.f_9185;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_9186;
				
				case 1:
					return Global_262145.f_9187;
				
				case 2:
					return Global_262145.f_9188;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_9189;
				
				case 1:
					return Global_262145.f_9190;
				
				case 2:
					return Global_262145.f_9191;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_9192;
				
				case 1:
					return Global_262145.f_9193;
				
				case 2:
					return Global_262145.f_9194;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_9195;
				
				case 1:
					return Global_262145.f_9196;
				
				case 2:
					return Global_262145.f_9197;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_9198;
				
				case 1:
					return Global_262145.f_9199;
				
				case 2:
					return Global_262145.f_9200;
				
				default:
			}
			break;
	}
	return 1f;
}

void func_66(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	if (bParam0)
	{
		Global_2404607.f_1121 = iParam1;
		Global_2404607.f_1122 = iParam2;
		func_60();
		func_67(8, 0, 0);
		Global_2404607.f_616 = 1;
		Global_2404607.f_1125 = iParam3;
		Global_2404607.f_1126 = iParam4;
		Global_2404607.f_1123 = iParam5;
		Global_2404607.f_1124 = iParam6;
		Global_2404607.f_1127 = iParam7;
		Global_2404607.f_1128 = iParam8;
		Global_2404607.f_1129 = iParam9;
	}
	else
	{
		func_60();
		func_67(0, 0, 0);
		Global_2404607.f_616 = 0;
	}
}

void func_67(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2408771 = 0;
	}
	Global_2404607.f_466 = iParam0;
	Global_2404607.f_466.f_1 = unk_0x8F56512BDA9F6921();
	Global_2404607.f_466.f_2 = iParam1;
	Global_2404607.f_466.f_3 = iParam2;
}

int func_68(int iParam0)
{
	if (unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_248.f_5, 14))
	{
		return 1;
	}
	if (unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_248.f_5, 11))
	{
		return 1;
	}
	return 0;
}

int func_69(int iParam0, bool bParam1)
{
	if (Global_1585045[iParam0 /*400*/].f_248.f_7 > 0)
	{
		if (bParam1)
		{
			if (unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_248.f_5, 0))
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

void func_70(int iParam0)
{
	if (func_15(iParam0) != 0)
	{
		func_235(iParam0);
		func_71(iParam0);
	}
}

void func_71(int iParam0)
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (iLocal_3314 == -1)
	{
		return;
	}
	if (func_201(0, 0))
	{
		return;
	}
	iVar6 = (Global_262145.f_8957 + 1000 - func_9(&(Local_94.f_1.f_1), 0, 0));
	if (iVar6 < 0)
	{
		iVar6 = 0;
	}
	if (func_15(iParam0) == 0)
	{
		return;
	}
	if (iVar6 > 30000)
	{
		iVar7 = 1;
	}
	else
	{
		iVar7 = 6;
	}
	if (!unk_0x236D8AD7EE179F46(Local_392[iLocal_3314 /*5*/].f_4, 12))
	{
		if (!func_107(iLocal_3314))
		{
			func_92(iVar6, iVar7, func_93());
			return;
		}
	}
	func_91(iVar6);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_1239[iParam0 /*68*/].f_53[iVar0 /*4*/] = -1;
		Local_1239[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1 = -1;
		Local_1239[iParam0 /*68*/].f_53[iVar0 /*4*/].f_2 = func_44();
		Local_1239[iParam0 /*68*/].f_53[iVar0 /*4*/].f_3 = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_1239[iParam0 /*68*/].f_53[iVar0 /*4*/] = Local_94.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/];
		Local_1239[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1 = Local_94.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/].f_1;
		Local_1239[iParam0 /*68*/].f_53[iVar0 /*4*/].f_2 = Local_94.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/].f_2;
		Local_1239[iParam0 /*68*/].f_53[iVar0 /*4*/].f_3 = unk_0xBBDA792448DB5A89(func_47(Local_94.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/].f_3));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uVar1[iVar0] = func_47(Local_1239[iParam0 /*68*/].f_53[iVar0 /*4*/].f_3);
		iVar0++;
	}
	iVar5 = func_47(func_89(iParam0, iLocal_3314));
	func_72(Local_1239[iParam0 /*68*/].f_53[0 /*4*/].f_1, Local_1239[iParam0 /*68*/].f_53[1 /*4*/].f_1, Local_1239[iParam0 /*68*/].f_53[2 /*4*/].f_1, uVar1[0], uVar1[1], uVar1[2], iVar5, iVar6, &uLocal_3317, iVar7, func_93(), 1);
	if (Local_1239[iParam0 /*68*/].f_53[0 /*4*/] == unk_0x519AAFF77CC141DF())
	{
		if (!unk_0x236D8AD7EE179F46(iLocal_553, 22))
		{
			unk_0x35D7948F61AA3FEC(-1, "Enter_1st", "GTAO_FM_Events_Soundset", 0);
			unk_0xF3148AAF69AF9CBC(&iLocal_553, 22);
		}
	}
	else if (unk_0x236D8AD7EE179F46(iLocal_553, 22))
	{
		unk_0x35D7948F61AA3FEC(-1, "Lose_1st", "GTAO_FM_Events_Soundset", 0);
		unk_0xC69E84EBBD7166E6(&iLocal_553, 22);
	}
}

void func_72(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, char* sParam10, int iParam11)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_86(0) == 0)
	{
		return;
	}
	func_85();
	iVar1 = 0;
	if (((Global_2437628[0] != iParam0 || Global_2437628[1] != iParam1) || Global_2437628[2] != iParam2) || *uParam8)
	{
		iVar1 = 1;
	}
	Global_2437628[0] = iParam0;
	Global_2437628[1] = iParam1;
	Global_2437628[2] = iParam2;
	Global_2437628[3] = 0;
	Global_2437628[4] = 0;
	if (Global_2437628[0] != func_44())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xB67DF8F35744CF60(Global_2437628[0]);
			Global_2437634[0 /*16*/] = { func_84(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_81(iParam3, &(Global_2437634[0 /*16*/]), -1, 109, 7, 1, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0);
		}
	}
	if (Global_2437628[1] != func_44())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xB67DF8F35744CF60(Global_2437628[1]);
			Global_2437634[1 /*16*/] = { func_84(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_81(iParam4, &(Global_2437634[1 /*16*/]), -1, 108, 6, 1, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0);
		}
	}
	if (Global_2437628[2] != func_44())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xB67DF8F35744CF60(Global_2437628[2]);
			Global_2437634[2 /*16*/] = { func_84(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_81(iParam5, &(Global_2437634[2 /*16*/]), -1, 107, 5, 1, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0);
		}
	}
	switch (iParam11)
	{
		case 0:
			if (unk_0x1329891157A54C63() != func_44())
			{
				if (func_77(unk_0x1329891157A54C63()) == 0)
				{
					func_81(iParam6, unk_0xB67DF8F35744CF60(unk_0x1329891157A54C63()), -1, 1, 4, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (func_77(unk_0x1329891157A54C63()) == 0)
			{
				func_81(iParam6, "HUD_USCORE", -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 2:
			if (func_77(unk_0x1329891157A54C63()) == 0)
			{
				func_81(iParam6, "HUD_UBEST", -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_76(sParam10))
	{
		sVar2 = sParam10;
	}
	func_73(iParam7, sVar2, 0, 0, -1, 0, 3, 0, iParam9, 0, 0, 0, iParam9, 0);
	*uParam8 = 0;
}

void func_73(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_75(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1336084.f_1 = 1;
		func_74(7, iVar0);
		Global_1336084.f_3911[iVar0] = uParam0;
		StringCopy(&(Global_1336084.f_3911.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1336084.f_3911.f_172[iVar0] = iParam2;
		Global_1336084.f_3911.f_216[iVar0] = iParam3;
		Global_1336084.f_3911.f_183[iVar0] = iParam4;
		Global_1336084.f_3911.f_194[iVar0] = iParam5;
		Global_1336084.f_3911.f_249[iVar0] = iParam6;
		Global_1336084.f_3911.f_260[iVar0] = iParam7;
		Global_1336084.f_3911.f_205[iVar0] = uParam8;
		Global_1336084.f_3911.f_314[iVar0] = iParam9;
		Global_1336084.f_3911.f_325[iVar0] = iParam10;
		Global_1336084.f_3911.f_357[iVar0] = iParam11;
		Global_1336084.f_3911.f_238[iVar0] = uParam12;
		Global_1336084.f_3911.f_271[iVar0] = iParam13;
	}
}

void func_74(int iParam0, int iParam1)
{
	unk_0xF3148AAF69AF9CBC(&(Global_1336084.f_4506[iParam0]), iParam1);
}

bool func_75(int iParam0, int iParam1)
{
	return unk_0x236D8AD7EE179F46(Global_1336084.f_4506[iParam0], iParam1);
}

int func_76(var uParam0)
{
	if (unk_0x4357449749A521B1(uParam0))
	{
		return 1;
	}
	else if (unk_0xD994929E13CC1ED5(uParam0, "") || unk_0xD994929E13CC1ED5(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_77(int iParam0)
{
	if (iParam0 == unk_0x1329891157A54C63())
	{
		if ((func_80() && !func_79()) || func_78(unk_0x1329891157A54C63(), 21))
		{
			return 1;
		}
		if (func_18(&(Global_1573867.f_13)))
		{
			if (!func_5(&(Global_1573867.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_3(&(Global_1573867.f_13));
		}
	}
	else if (unk_0x236D8AD7EE179F46(Global_1606167[iParam0 /*12*/].f_1, 10))
	{
		return 1;
	}
	return unk_0x236D8AD7EE179F46(Global_1606167[iParam0 /*12*/].f_1, 9);
}

bool func_78(int iParam0, int iParam1)
{
	return unk_0x236D8AD7EE179F46(Global_2414506[iParam0 /*255*/].f_205, iParam1);
}

bool func_79()
{
	return Global_1312416.f_1;
}

bool func_80()
{
	return Global_1312416;
}

void func_81(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
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
			if (func_75(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1336084.f_1 = 1;
		func_74(6, iVar0);
		Global_1336084.f_3370[iVar0] = iParam0;
		StringCopy(&(Global_1336084.f_3370.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1336084.f_3370.f_183[iVar0] = iParam3;
		Global_1336084.f_3370.f_172[iVar0] = iParam2;
		Global_1336084.f_3370.f_260[iVar0] = iParam4;
		Global_1336084.f_3370.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1336084.f_3370.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1336084.f_3370.f_443[iVar0] = iParam7;
		Global_1336084.f_3370.f_454[iVar0] = iParam8;
		Global_1336084.f_3370.f_497[iVar0] = iParam9;
		Global_1336084.f_3370.f_508[iVar0] = iParam10;
		Global_1336084.f_3370.f_205[iVar0] = iParam11;
		Global_1336084.f_3370.f_216[iVar0] = iParam12;
		Global_1336084.f_3370.f_227[iVar0] = iParam13;
		Global_1336084.f_3370.f_238[iVar0] = iParam14;
		Global_1336084.f_3370.f_249[iVar0] = iParam15;
		Global_1336084.f_3370.f_519[iVar0] = iParam16;
		Global_1336084.f_3370.f_530[iVar0] = iParam17;
		if (iParam15 == 4 && func_83())
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
			if (func_82())
			{
				Global_1336084.f_945 = 1;
			}
		}
	}
}

int func_82()
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

int func_83()
{
	if ((unk_0x45EDE682E0EE8FDF() == 8 || unk_0x45EDE682E0EE8FDF() == 9) || unk_0x45EDE682E0EE8FDF() == 10)
	{
		return 1;
	}
	return 0;
}

struct<16> func_84(int iParam0, char* sParam1)
{
	struct<16> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, sParam1, 64);
			return Var0;
			break;
		
		case 1:
			StringCopy(&Var0, unk_0x46E7F5908F815DDC("HUD_POSFIRST"), 64);
			break;
		
		case 2:
			StringCopy(&Var0, unk_0x46E7F5908F815DDC("HUD_POSSECOND"), 64);
			break;
		
		case 3:
			StringCopy(&Var0, unk_0x46E7F5908F815DDC("HUD_POSTHIRD"), 64);
			break;
		
		case 4:
			StringCopy(&Var0, unk_0x46E7F5908F815DDC("HUD_POSFOURTH"), 64);
			break;
		
		case 5:
			StringCopy(&Var0, unk_0x46E7F5908F815DDC("HUD_POSFIFTH"), 64);
			break;
	}
	StringConCat(&Var0, " ", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_85()
{
	unk_0xC9A352663D97EFC3(8);
	unk_0xC9A352663D97EFC3(9);
	unk_0xC9A352663D97EFC3(6);
	unk_0xC9A352663D97EFC3(7);
	Global_2438034 = 1;
}

int func_86(bool bParam0)
{
	if (func_88())
	{
		return 0;
	}
	if (func_87())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_571(unk_0x1329891157A54C63(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_87()
{
	return Global_1585045[unk_0x1329891157A54C63() /*400*/].f_177 != 0;
}

bool func_88()
{
	return unk_0x236D8AD7EE179F46(Global_2359301, 12);
}

float func_89(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_90(iParam0, iParam1);
	fVar1 = func_6(iParam0, iParam1);
	return (fVar0 + fVar1);
}

float func_90(int iParam0, int iParam1)
{
	return Local_94.f_6[iParam0 /*204*/].f_36[iParam1];
}

void func_91(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x8D51D24D214E2FF2())
	{
		if (unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 0))
		{
			if (!unk_0xB318FDA0D1ABDB20(&(Global_2451473.f_4542)))
			{
				unk_0xE3131684E8191AA9(&(Global_2451473.f_4542));
			}
			unk_0x094B864326B5FE96(1);
			unk_0x80650551CC58C784("FM_COUNTDOWN_30S_FIRA");
			unk_0x0C22E352114F699C("GTAO_FM_Events_30_Sec_Countdown_Scene");
			unk_0x59BBCA8743D045AE("DisableFlightMusic", 0);
			unk_0x59BBCA8743D045AE("WantedMusicDisabled", 0);
			unk_0x59BBCA8743D045AE("AllowScoreAndRadio", 0);
			if (Global_2451473.f_4550 > -1)
			{
				unk_0x54206B7CE6FF2360(Global_2451473.f_4550);
				Global_2451473.f_4550 = -1;
			}
			Global_2451473.f_4540 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 0))
		{
			if (unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 4))
			{
				if (!unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 2))
				{
					if (unk_0x0C66FFD2F3913C49())
					{
						if ((!unk_0xD994929E13CC1ED5(unk_0x41899D9898B4EEE4(unk_0x2595B211F055F9FB()), "OFF") && unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0)) && !unk_0xB318FDA0D1ABDB20(&(Global_2451473.f_4542)))
						{
							StringCopy(&(Global_2451473.f_4542), "", 32);
							unk_0x80650551CC58C784("FM_COUNTDOWN_30S_FIRA");
							unk_0x0C22E352114F699C("GTAO_FM_Events_30_Sec_Countdown_Scene");
							unk_0x59BBCA8743D045AE("DisableFlightMusic", 0);
							unk_0x59BBCA8743D045AE("WantedMusicDisabled", 0);
							unk_0x59BBCA8743D045AE("AllowScoreAndRadio", 0);
							unk_0x094B864326B5FE96(1);
							unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4540), 2);
						}
					}
				}
				else if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) && unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 5))
				{
					unk_0xE3131684E8191AA9("OFF");
				}
			}
			else if (!unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 1))
			{
				if (iParam0 < 10000)
				{
					unk_0x80650551CC58C784("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					unk_0x80650551CC58C784("FM_COUNTDOWN_20S");
				}
				else
				{
					unk_0x80650551CC58C784("FM_COUNTDOWN_30S");
				}
				unk_0xF2A6D4C99549CA85("GTAO_FM_Events_30_Sec_Countdown_Scene");
				unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4540), 1);
			}
			else if (!unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 4))
			{
				if (iParam0 < 27500)
				{
					if (unk_0x71994BFA37D418F5() != 0)
					{
						if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) && !unk_0x75D6577FC39B6697())
						{
							StringCopy(&(Global_2451473.f_4542), unk_0x85C45E5EB4792D9B(), 32);
							unk_0xE3131684E8191AA9("OFF");
						}
						unk_0x094B864326B5FE96(1);
						unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4540), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 3))
				{
					Global_2451473.f_4550 = unk_0xEDDCCC3D357A50F8();
					unk_0x35D7948F61AA3FEC(Global_2451473.f_4550, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
					unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4540), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 0))
			{
				Global_2451473.f_4540 = 0;
				Global_2451473.f_4550 = -1;
				unk_0xA3BC6AA446F03669("FM_COUNTDOWN_30S_KILL");
				unk_0x094B864326B5FE96(0);
				unk_0x80650551CC58C784("FM_PRE_COUNTDOWN_30S");
				unk_0x59BBCA8743D045AE("DisableFlightMusic", 1);
				unk_0x59BBCA8743D045AE("WantedMusicDisabled", 1);
				unk_0x59BBCA8743D045AE("AllowScoreAndRadio", 1);
				unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4540), 0);
				if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) || unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 2))
				{
					unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4540), 2);
					unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4540), 5);
				}
				else
				{
					unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4540), 5);
					unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4540), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 0))
		{
			Global_2451473.f_4540 = 0;
			Global_2451473.f_4550 = -1;
			unk_0xA3BC6AA446F03669("FM_COUNTDOWN_30S_KILL");
			unk_0x094B864326B5FE96(0);
			unk_0x80650551CC58C784("FM_PRE_COUNTDOWN_30S");
			unk_0x59BBCA8743D045AE("DisableFlightMusic", 1);
			unk_0x59BBCA8743D045AE("WantedMusicDisabled", 1);
			unk_0x59BBCA8743D045AE("AllowScoreAndRadio", 1);
			unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4540), 0);
			if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
			{
				unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4540), 2);
				unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4540), 5);
			}
			else
			{
				unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4540), 2);
				unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4540), 5);
			}
		}
	}
}

void func_92(int iParam0, int iParam1, char* sParam2)
{
	char* sVar0;
	
	if (func_86(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_COUNTDOWN";
	if (!func_76(sParam2))
	{
		sVar0 = sParam2;
	}
	func_73(iParam0, sVar0, 0, 0, -1, 0, 3, 0, iParam1, 0, 0, 0, iParam1, 0);
}

char* func_93()
{
	return "HUD_COUNTDOWN";
	switch (func_155(unk_0x1329891157A54C63()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_94())
			{
				case 0:
					return "AET_CHALL_LJ";
				
				case 1:
					return "AET_CHALL_LS";
				
				case 2:
					return "AET_CHALL_HS";
				
				case 3:
					return "AET_CHALL_LST";
				
				case 4:
					return "AET_CHALL_LW";
				
				case 5:
					return "AET_CHALL_NC";
				
				case 6:
					return "AET_CHALL_LP";
				
				case 7:
					return "AET_CHALL_VS";
				
				case 8:
					return "AET_CHALL_NM";
				
				case 9:
					return "AET_CHALL_RD";
				
				case 10:
					return "AET_CHALL_LF";
				
				case 11:
					return "AET_CHALL_LFL";
				
				case 12:
					return "AET_CHALL_LFI";
				
				case 13:
					return "AET_CHALL_LB";
				
				case 14:
					return "AET_CHALL_MB";
				
				case 15:
					return "AET_CHALL_HSH";
				
				case 16:
					return "AET_CHALL_DB";
				
				case 17:
					return "AET_CHALL_ML";
				
				case 18:
					return "AET_CHALL_LSN";
				
				default:
			}
			break;
		
		case 136:
			return "AET_PENNED";
		
		case 138:
			return "AET_PARCEL";
		
		case 139:
			return "AET_PROPERTY";
		
		case 140:
			return "AET_DDROP";
		
		case 141:
			return "AET_KCASTLE";
		
		case 144:
			return "AET_BLAST";
		
		case 129:
			return "AET_UWARF";
		
		case 146:
			return "AET_BEAST";
	}
	return "";
}

int func_94()
{
	if (func_155(unk_0x1329891157A54C63()) == 133)
	{
		return Global_2451473.f_4624;
	}
	return -1;
}

bool func_95(int iParam0)
{
	return Local_94.f_6[iParam0 /*204*/].f_72;
}

void func_96(char* sParam0, char* sParam1, bool bParam2)
{
	if (unk_0xB318FDA0D1ABDB20(sParam0))
	{
		return;
	}
	if (unk_0xA84EEA1DAC64D0D5(sParam0) > 23)
	{
		return;
	}
	if (unk_0xB318FDA0D1ABDB20(sParam1))
	{
		return;
	}
	if (unk_0xA84EEA1DAC64D0D5(sParam1) > 63)
	{
		return;
	}
	if (func_106(sParam0, sParam1))
	{
		return;
	}
	func_100();
	Global_1312577 = 9;
	StringCopy(&(Global_1312577.f_1), unk_0x11CA2334E341B424(), 24);
	Global_1312577.f_7 = unk_0x8DAF7A748E41AD46(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	StringCopy(&(Global_1312577.f_14), sParam1, 64);
	func_99();
	func_98(bParam2);
	func_97();
}

void func_97()
{
	unk_0xF3148AAF69AF9CBC(&(Global_1312577.f_39), 1);
}

void func_98(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_1312577.f_39), 0);
		return;
	}
	unk_0xC69E84EBBD7166E6(&(Global_1312577.f_39), 0);
}

void func_99()
{
	Global_1312577.f_8 = unk_0x372240B0254847DF(unk_0xD74C7D8D2E5E43D2(), 86400000);
	Global_1312577.f_9 = unk_0xD74C7D8D2E5E43D2();
}

void func_100()
{
	func_102();
	func_101(0);
}

void func_101(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x1C6DF6AD69BE853E();
	Global_1312577 = 12;
	StringCopy(&(Global_1312577.f_1), "", 24);
	Global_1312577.f_7 = 0;
	if (bVar0)
	{
		Global_1312577.f_8 = unk_0xD74C7D8D2E5E43D2();
		Global_1312577.f_9 = unk_0xD74C7D8D2E5E43D2();
	}
	StringCopy(&(Global_1312577.f_10), "", 16);
	StringCopy(&(Global_1312577.f_14), "", 64);
	StringCopy(&(Global_1312577.f_30), "", 16);
	Global_1312577.f_34 = 0;
	Global_1312577.f_35 = 0;
	Global_1312577.f_36 = 0;
	Global_1312577.f_37 = -1;
	Global_1312577.f_38 = 0;
	Global_1312577.f_39 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_102()
{
	if (!func_105())
	{
	}
	if (func_104())
	{
		unk_0x10F61CB44B66BBDE(&(Global_1312577.f_10));
		func_103();
		unk_0x311B25F9901AB37A();
	}
}

void func_103()
{
	switch (Global_1312577)
	{
		case 12:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x6D55FF05D62B91BC(Global_1312577.f_34);
			return;
		
		case 2:
			unk_0x6D55FF05D62B91BC(Global_1312577.f_34);
			unk_0x6D55FF05D62B91BC(Global_1312577.f_35);
			return;
		
		case 3:
			unk_0x072D7B028D6C7A05(&(Global_1312577.f_14));
			return;
		
		case 4:
			unk_0x072D7B028D6C7A05(&(Global_1312577.f_14));
			unk_0x072D7B028D6C7A05(&(Global_1312577.f_30));
			return;
		
		case 5:
			unk_0x6222A57F463E8EE7(&(Global_1312577.f_14));
			return;
		
		case 6:
			unk_0xDB5ED960DFB0E4DF(Global_1312577.f_38);
			unk_0x6222A57F463E8EE7(&(Global_1312577.f_14));
			return;
		
		case 7:
			unk_0x072D7B028D6C7A05(&(Global_1312577.f_14));
			return;
		
		case 8:
			unk_0xDB5ED960DFB0E4DF(Global_1312577.f_38);
			unk_0x072D7B028D6C7A05(&(Global_1312577.f_14));
			return;
		
		case 9:
			unk_0x92D1853394E2386A(&(Global_1312577.f_14));
			return;
		
		case 10:
			unk_0x6222A57F463E8EE7(&(Global_1312577.f_14));
			unk_0x6222A57F463E8EE7(&(Global_1312577.f_30));
			return;
		
		case 11:
			unk_0x92D1853394E2386A(&(Global_1312577.f_14));
			return;
		
		default:
	}
}

int func_104()
{
	if (Global_1312577 == 12)
	{
		return 0;
	}
	return 1;
}

int func_105()
{
	if (!func_104())
	{
		return 0;
	}
	unk_0x35C3DC3A3BE08CC1(&(Global_1312577.f_10));
	func_103();
	return unk_0x8BF06EFC37AF94F0();
}

bool func_106(char* sParam0, char* sParam1)
{
	if (!func_104())
	{
		return 0;
	}
	if (unk_0xB318FDA0D1ABDB20(sParam0))
	{
		return 0;
	}
	if (unk_0xB318FDA0D1ABDB20(sParam1))
	{
		return 0;
	}
	if (!unk_0x8DAF7A748E41AD46(sParam0) == unk_0x8DAF7A748E41AD46(&(Global_1312577.f_10)))
	{
		return 0;
	}
	return unk_0x8DAF7A748E41AD46(sParam1) == unk_0x8DAF7A748E41AD46(&(Global_1312577.f_14));
}

int func_107(int iParam0)
{
	if (unk_0x236D8AD7EE179F46(Local_392[iParam0 /*5*/].f_4, 2))
	{
		return 1;
	}
	if (unk_0x236D8AD7EE179F46(Local_392[iParam0 /*5*/].f_4, 3))
	{
		return 1;
	}
	if (unk_0x236D8AD7EE179F46(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1, 13))
	{
		return 1;
	}
	return 0;
}

void func_108(char* sParam0, bool bParam1)
{
	if (unk_0xB318FDA0D1ABDB20(sParam0))
	{
		return;
	}
	if (unk_0xA84EEA1DAC64D0D5(sParam0) > 23)
	{
		return;
	}
	if (func_109(sParam0))
	{
		return;
	}
	func_100();
	Global_1312577 = 0;
	StringCopy(&(Global_1312577.f_1), unk_0x11CA2334E341B424(), 24);
	Global_1312577.f_7 = unk_0x8DAF7A748E41AD46(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	func_99();
	func_98(bParam1);
	func_97();
}

bool func_109(char* sParam0)
{
	if (!func_104())
	{
		return 0;
	}
	if (Global_1312577 == 11)
	{
		return func_110(sParam0);
	}
	if (unk_0xB318FDA0D1ABDB20(sParam0))
	{
		return 0;
	}
	return unk_0x8DAF7A748E41AD46(sParam0) == unk_0x8DAF7A748E41AD46(&(Global_1312577.f_10));
}

bool func_110(char* sParam0)
{
	if (!func_104())
	{
		return 0;
	}
	if (unk_0xB318FDA0D1ABDB20(sParam0))
	{
		return 0;
	}
	return unk_0x8DAF7A748E41AD46(sParam0) == unk_0x8DAF7A748E41AD46(&(Global_1312577.f_14));
}

void func_111()
{
	if (!func_104())
	{
		return;
	}
	if (!unk_0x8DAF7A748E41AD46(unk_0x11CA2334E341B424()) == Global_1312577.f_7)
	{
		return;
	}
	func_100();
}

bool func_112(int iParam0)
{
	return Global_2422670.f_2137[0 /*70*/].f_1 == iParam0;
}

int func_113(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	struct<70> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_69 = -1;
	func_43(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_65 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_66 = iParam5;
	return func_38(&Var0);
}

int func_114(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	struct<70> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_69 = -1;
	func_43(iParam0, &Var0, -1, sParam1, sParam5);
	StringCopy(&(Var0.f_23), sParam2, 64);
	Var0.f_65 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_66 = iParam6;
	return func_38(&Var0);
}

int func_115()
{
	return 21;
}

void func_116(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	unk_0x59BBCA8743D045AE("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		unk_0x59BBCA8743D045AE("WantedMusicDisabled", 1);
	}
	Global_2451473.f_4550 = -1;
	if (bParam6)
	{
		func_137(21, 1);
	}
	else
	{
		func_134(iParam0, -1);
		if (func_133(unk_0x1329891157A54C63()))
		{
			Global_1573867.f_3 = iParam0;
		}
		else
		{
			func_132(iParam0);
		}
		Global_1573867.f_4 = -1;
		if (func_133(unk_0x1329891157A54C63()))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 5);
		}
		if ((func_80() && !func_79()) || func_78(unk_0x1329891157A54C63(), 21))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 4);
		}
		unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 17);
		unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 20);
		if (func_131(iParam0))
		{
			func_130();
		}
	}
	if (fParam1 != 1f)
	{
		func_127(fParam1);
	}
	if (fParam2 != 1f)
	{
		unk_0x5B6D37392F5991C3(fParam2);
		if (iParam0 == 146)
		{
			unk_0x9BAE0FF806E5C2E5(0);
			unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), 0, 0);
			unk_0x2E2A75923F20DCD2(unk_0x1329891157A54C63(), 0);
		}
	}
	if (func_126(iParam0))
	{
		unk_0x9BAE0FF806E5C2E5(0);
		unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), 0, 0);
		unk_0x2E2A75923F20DCD2(unk_0x1329891157A54C63(), 0);
		unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 8);
	}
	if (bParam3)
	{
		func_125(1);
		if (func_122(0))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 9);
		}
		unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 14);
	}
	if (bParam4)
	{
		func_120(1);
		unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 12);
	}
	if (bParam5)
	{
		func_119();
		unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 12);
	}
	if (!bParam6)
	{
		if (func_117(iParam0))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 21);
		}
	}
	Global_2450427 = 1;
}

int func_117(int iParam0)
{
	switch (iParam0)
	{
		case 129:
		case 131:
		case 141:
		case 136:
		case 138:
		case 139:
		case 140:
		case 144:
		case 146:
			return 1;
		
		default:
	}
	if (func_118())
	{
		return 1;
	}
	return 0;
}

int func_118()
{
	switch (func_94())
	{
		case 15:
		case 16:
		case 17:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

void func_119()
{
	unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4541), 0);
}

void func_120(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_90861.f_8 = 1;
	}
	else
	{
		Global_90861.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 45)
	{
		func_121(iVar0);
		iVar0++;
	}
}

void func_121(int iParam0)
{
	Global_90861.f_156[iParam0] = 1;
	Global_90861.f_155 = 1;
}

int func_122(int iParam0)
{
	var uVar0;
	
	uVar0 = func_123(2506, -1, 0);
	if (iParam0 == 0)
	{
		if ((unk_0x236D8AD7EE179F46(uVar0, 0) && unk_0x236D8AD7EE179F46(iVar0, 1)) && unk_0x236D8AD7EE179F46(iVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((unk_0x236D8AD7EE179F46(iVar0, 3) && unk_0x236D8AD7EE179F46(iVar0, 4)) && unk_0x236D8AD7EE179F46(iVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((unk_0x236D8AD7EE179F46(iVar0, 6) && unk_0x236D8AD7EE179F46(iVar0, 7)) && unk_0x236D8AD7EE179F46(iVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((unk_0x236D8AD7EE179F46(iVar0, 9) && unk_0x236D8AD7EE179F46(iVar0, 10)) && unk_0x236D8AD7EE179F46(iVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_123(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2459767[iParam0 /*5*/][func_124(iParam1)];
	if (unk_0x85C45034BA638694(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_124(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_31();
		if (iVar1 > -1)
		{
			Global_2459480 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2459480 = 1;
		}
	}
	return iVar0;
}

void func_125(int iParam0)
{
	if (iParam0 == Global_2391042)
	{
		return;
	}
	Global_2391042 = iParam0;
	Global_2391044 = 0;
	Global_2391045 = 0;
}

int func_126(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		default:
	}
	return 0;
}

void func_127(float fParam0)
{
	if (unk_0x8DAF7A748E41AD46(unk_0x11CA2334E341B424()) == func_128())
	{
		return;
	}
	if (unk_0x64AD45A6264810A8(Global_2451473.f_4633))
	{
		if (!Global_2451473.f_4633 == unk_0x8F56512BDA9F6921())
		{
			return;
		}
	}
	Global_2451473.f_4632 = fParam0;
	Global_2451473.f_4633 = unk_0x8F56512BDA9F6921();
}

int func_128()
{
	switch (func_129())
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

int func_129()
{
	return Global_24946;
}

void func_130()
{
	Global_2414506[unk_0x1329891157A54C63() /*255*/].f_198 = 0;
	unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4402), 1);
}

int func_131(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_132(int iParam0)
{
	Global_1606167[unk_0x1329891157A54C63() /*12*/] = iParam0;
}

bool func_133(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_1606167[iParam0 /*12*/].f_1, 2);
}

void func_134(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_136(0) || func_136(func_135(iVar0)))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 2);
		}
		else
		{
			unk_0xC69E84EBBD7166E6(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 2);
		}
	}
}

int func_135(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			return 10;
		
		case 132:
			return 1;
		
		case 133:
			return 2;
		
		case 136:
			return 11;
		
		case 138:
			return 5;
		
		case 139:
			return 6;
		
		case 129:
			return 8;
		
		case 140:
			return 4;
		
		case 141:
			return 9;
		
		case 144:
			return 3;
		
		case 146:
			return 7;
		
		default:
	}
	return 19;
}

bool func_136(int iParam0)
{
	var uVar0;
	
	uVar0 = func_123(2452, -1, 0);
	return unk_0x236D8AD7EE179F46(uVar0, iParam0);
}

void func_137(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x236D8AD7EE179F46(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_205, iParam0))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_205), iParam0);
		}
	}
	else if (unk_0x236D8AD7EE179F46(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_205, iParam0))
	{
		unk_0xC69E84EBBD7166E6(&(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_205), iParam0);
	}
}

void func_138(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2422670.f_2137[iVar0 /*70*/].f_1 == iParam0)
		{
			Global_2422670.f_2137[iVar0 /*70*/].f_2 = 5;
			unk_0xF3148AAF69AF9CBC(&(Global_2422670.f_2137[iVar0 /*70*/].f_63), 0);
		}
		iVar0++;
	}
}

float func_139(int iParam0)
{
	return Local_1239[iParam0 /*68*/].f_40;
}

bool func_140(char* sParam0)
{
	unk_0xF7F787102FC9BCAC(sParam0);
	return unk_0xEF468B98099969A5(0);
}

void func_141(int iParam0)
{
	unk_0x1F14EC098854F746(3, 21, 200, 0, 0);
	if (iParam0 && !func_143())
	{
		unk_0x35D7948F61AA3FEC(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_142(char* sParam0, int iParam1)
{
	unk_0x522099B37CAE9E12(sParam0);
	unk_0xC592EBAF1D879BDC(0, 0, 0, iParam1);
}

bool func_143()
{
	return Global_2422670.f_2137[0 /*70*/].f_1 != 0;
}

void func_144(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (func_80())
		{
			func_147(0);
			func_146();
		}
		if (func_136(0))
		{
			uVar0 = func_123(2452, -1, 0);
			unk_0xC69E84EBBD7166E6(&uVar0, 0);
			func_146();
		}
		if (func_136(func_135(func_155(unk_0x1329891157A54C63()))))
		{
			uVar0 = func_123(2452, -1, 0);
			unk_0xC69E84EBBD7166E6(&uVar0, func_135(func_155(unk_0x1329891157A54C63())));
			func_146();
		}
		if (func_145())
		{
			func_146();
		}
		if (func_155(unk_0x1329891157A54C63()) > -1)
		{
			unk_0xF3148AAF69AF9CBC(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 7);
		}
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 7);
	}
}

int func_145()
{
	if (Global_2422670.f_614.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_146()
{
	if (func_145())
	{
		Global_2422670.f_614.f_16 = 1;
	}
}

void func_147(int iParam0)
{
	if (func_80())
	{
		if (iParam0 == 1)
		{
			if (Global_2451473.f_4237 == -1)
			{
				Global_2451473.f_4237 = 60000;
			}
			func_154(&(Global_2451473.f_4235), 0, 0);
			if (Global_2451473.f_4240 == -1)
			{
				Global_2451473.f_4240 = 10000;
			}
			func_154(&(Global_2451473.f_4238), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			func_153();
		}
		if ((!unk_0x726DA50057167075() && !func_152()) && !func_148(unk_0x1329891157A54C63()))
		{
			Global_975760 = 0;
		}
		Global_1606167[unk_0x1329891157A54C63() /*12*/].f_7 = 0;
	}
}

int func_148(int iParam0)
{
	if (func_149(iParam0, 1))
	{
		if (Global_1585045[iParam0 /*400*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_149(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_150(iParam0))
		{
			return 1;
		}
	}
	if (Global_1585045[iParam0 /*400*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_150(int iParam0)
{
	return func_151(iParam0);
}

bool func_151(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_13.f_1, 0);
}

bool func_152()
{
	return Global_2428865.f_712;
}

void func_153()
{
	if (unk_0x1C6DF6AD69BE853E())
	{
		if (!func_80())
		{
			if (func_571(unk_0x1329891157A54C63(), 1, 0))
			{
				unk_0xE41981FA07A67E46(unk_0x81873881071CD9FE(), 1);
				unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 342, 0);
				unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 122, 0);
			}
			unk_0xAFCB705B5DE49B4D(unk_0x1329891157A54C63(), 1f);
			unk_0xD547C5EA6ACA33EA(0);
			unk_0x96BED0459085F7E9(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				unk_0xC1A3EEFD7C446E1D(0);
			}
		}
		else
		{
			if (func_571(unk_0x1329891157A54C63(), 1, 1))
			{
				unk_0xE41981FA07A67E46(unk_0x81873881071CD9FE(), 0);
				unk_0x649CF94A4282A7FD(unk_0x81873881071CD9FE(), joaat("weapon_unarmed"), 1);
				unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 342, 1);
				unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 122, 1);
				unk_0xAFCB705B5DE49B4D(unk_0x1329891157A54C63(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					unk_0xC1A3EEFD7C446E1D(1);
				}
			}
			unk_0xD547C5EA6ACA33EA(1);
			unk_0x96BED0459085F7E9(0);
		}
	}
}

void func_154(var uParam0, bool bParam1, bool bParam2)
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

int func_155(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1606167[iVar0 /*12*/];
	}
	return -1;
}

bool func_156(int iParam0, int iParam1)
{
	return Local_392[iParam0 /*5*/].f_1[iParam1];
}

int func_157(bool bParam0, bool bParam1)
{
	if (func_159(unk_0x1329891157A54C63()))
	{
		return 1;
	}
	if (bParam0)
	{
		if (func_77(unk_0x1329891157A54C63()))
		{
			return 1;
		}
	}
	if (bParam1)
	{
		if (func_158(unk_0x1329891157A54C63()))
		{
			return 1;
		}
	}
	return 0;
}

bool func_158(int iParam0)
{
	return func_29(iParam0, 0);
}

bool func_159(int iParam0)
{
	if (func_133(iParam0))
	{
		return 1;
	}
	return unk_0x236D8AD7EE179F46(Global_1606167[iParam0 /*12*/].f_1, 8);
}

void func_160(int iParam0)
{
	if (!unk_0x236D8AD7EE179F46(iLocal_553, 21))
	{
		if (iLocal_3314 == unk_0x519AAFF77CC141DF())
		{
			if (func_107(unk_0x519AAFF77CC141DF()))
			{
				if (!func_201(1, 1))
				{
					if (Local_94.f_6[iParam0 /*204*/].f_74[0 /*4*/] != -1)
					{
						if (Local_94.f_6[iParam0 /*204*/].f_74[0 /*4*/].f_3 > 0f)
						{
							if (Local_94.f_6[iParam0 /*204*/].f_74[0 /*4*/] != unk_0x519AAFF77CC141DF())
							{
								func_161();
								unk_0xF3148AAF69AF9CBC(&iLocal_553, 21);
							}
						}
					}
				}
			}
		}
	}
}

void func_161()
{
	unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_1626), 19);
}

void func_162(int iParam0)
{
	if (iLocal_390 != func_8(iParam0))
	{
		iLocal_390 = func_8(iParam0);
		if (iLocal_390 > -1)
		{
			iLocal_391++;
			unk_0xF3148AAF69AF9CBC(&iLocal_553, 24);
		}
	}
}

void func_163(int iParam0)
{
	if (func_491() == 1)
	{
		if (func_8(iParam0) == unk_0x519AAFF77CC141DF() && !func_157(1, 0))
		{
			if (!func_199(unk_0x1329891157A54C63()))
			{
				func_164(1);
			}
		}
		else if (func_199(unk_0x1329891157A54C63()))
		{
			func_164(0);
		}
	}
}

void func_164(bool bParam0)
{
	int iVar0;
	var uVar1;
	
	if (bParam0)
	{
		Global_2438842 = func_155(unk_0x1329891157A54C63());
		if (Global_2438842 == -1)
		{
			Global_2438842 = Global_1573867.f_4;
		}
		if (func_198(Global_2438842) == 0)
		{
			if (func_197(1) > 0)
			{
				func_196(26, -1);
			}
		}
		if (func_80())
		{
			func_147(0);
			func_146();
		}
		if (func_136(0))
		{
			uVar1 = func_123(2452, -1, 0);
			unk_0xC69E84EBBD7166E6(&uVar1, 0);
			func_146();
		}
		if (func_136(func_135(func_155(unk_0x1329891157A54C63()))))
		{
			uVar1 = func_123(2452, -1, 0);
			unk_0xC69E84EBBD7166E6(&uVar1, func_135(func_155(unk_0x1329891157A54C63())));
			func_146();
		}
		if (func_145())
		{
			func_146();
		}
		unk_0xF3148AAF69AF9CBC(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 0);
	}
	else
	{
		if ((!func_195() && !func_194()) && !func_193())
		{
			Global_2438842 = -1;
			func_192(26, -1);
		}
		else if (func_198(Global_2438842) == 0)
		{
			iVar0 = func_176(1);
			if (iVar0 > 0)
			{
				func_171(joaat("mpply_fmevn_cheat_end"), iVar0);
				func_167(1920, 1, -1);
				func_171(joaat("mpply_activity_ended"), 1);
			}
		}
		else if (func_165(26, -1))
		{
			Global_2438842 = -1;
			func_192(26, -1);
		}
		unk_0xC69E84EBBD7166E6(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 0);
	}
}

bool func_165(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_31();
	}
	uVar0 = func_166(iParam1);
	uVar1 = unk_0xE19FDB171CBF814A(uVar0);
	return unk_0x236D8AD7EE179F46(uVar1, iParam0);
}

int func_166(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_31();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 909;
			break;
		
		case 1:
			iVar0 = 910;
			break;
		
		case 2:
			iVar0 = 911;
			break;
		
		case 3:
			iVar0 = 912;
			break;
		
		case 4:
			iVar0 = 913;
			break;
	}
	return iVar0;
}

void func_167(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_123(iParam0, func_124(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_170(iParam0))
	{
		func_169(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_168(iParam0, iVar0, iParam2, 1);
	}
}

void func_168(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2459767[iParam0 /*5*/][func_124(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 777:
			Global_1343618[func_124(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1343624[func_124(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1343630[func_124(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1343636[func_124(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1343594[func_124(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1343600[func_124(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1343606[func_124(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1343612[func_124(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1343570[func_124(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1343576[func_124(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1343582[func_124(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1343588[func_124(iParam2)] = iParam1;
			break;
		
		case 747:
			Global_1343642[func_124(iParam2)] = iParam1;
			break;
		
		case 748:
			Global_1343648[func_124(iParam2)] = iParam1;
			break;
		
		case 749:
			Global_1343654[func_124(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1343660[func_124(iParam2)] = iParam1;
			break;
		
		case 1292:
			Global_1343666[func_124(iParam2)] = iParam1;
			break;
		
		case 629:
			Global_1343672[func_124(iParam2)] = iParam1;
			break;
		
		case 1267:
			Global_1343678[func_124(iParam2)] = iParam1;
			break;
		
		case 1864:
			Global_2480427[0 /*6*/][func_124(iParam2)] = iParam1;
			break;
		
		case 2255:
			Global_2480427[1 /*6*/][func_124(iParam2)] = iParam1;
			break;
		
		case 2899:
			Global_2480427[2 /*6*/][func_124(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1343684[func_124(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1343690[func_124(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1343696[func_124(iParam2)] = iParam1;
			break;
		
		case 1225:
			Global_1343702[func_124(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_169(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2459767[iParam0 /*5*/][func_124(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, iParam1, iParam3);
	}
}

int func_170(int iParam0)
{
	if (Global_1343551)
	{
		switch (iParam0)
		{
			case 777:
			case 778:
			case 779:
			case 780:
			case 767:
			case 768:
			case 769:
			case 770:
			case 757:
			case 758:
			case 759:
			case 760:
			case 747:
			case 748:
			case 749:
			case 750:
			case 1292:
			case 629:
			case 1267:
			case 754:
			case 755:
			case 756:
			case 1225:
			case 1864:
			case 2255:
			case 2899:
				return 1;
				break;
			}
	}
	return 0;
}

void func_171(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_175(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_174(iParam0))
	{
		func_173(iParam0, iVar0);
	}
	else
	{
		func_172(iParam0, iVar0);
	}
}

void func_172(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1343552 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1343554 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1343554 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1343555 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1343556 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1343557 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1343558 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1343559 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1343560 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1343561 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1343562 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1343563 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1343564 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1343565 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1343566 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1343567 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1343568 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_173(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, iParam1, 1);
	}
}

int func_174(int iParam0)
{
	if (Global_1343551)
	{
		switch (iParam0)
		{
			case joaat("mpply_crew_0_id"):
			case joaat("mpply_crew_1_id"):
			case joaat("mpply_crew_2_id"):
			case joaat("mpply_crew_3_id"):
			case joaat("mpply_crew_4_id"):
			case joaat("mpply_crew_local_xp_0"):
			case joaat("mpply_crew_local_xp_1"):
			case joaat("mpply_crew_local_xp_2"):
			case joaat("mpply_crew_local_xp_3"):
			case joaat("mpply_crew_local_xp_4"):
			case joaat("mpply_became_cheater_num"):
			case joaat("mpply_friendly"):
			case joaat("mpply_offensive_language"):
			case joaat("mpply_griefing"):
			case joaat("mpply_helpful"):
			case joaat("mpply_offensive_tagplate"):
			case joaat("mpply_offensive_ugc"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_175(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x85C45034BA638694(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_176(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_2437616 == 0)
	{
		return 0;
	}
	if (func_193())
	{
		if (unk_0x726DA50057167075() || (func_191() || func_189()))
		{
			Global_2436992 = 1;
		}
	}
	Global_2437616 = 0;
	if (Global_1318722)
	{
		iVar0 = 1;
	}
	if (Global_2436992)
	{
		iVar0 = 1;
	}
	if (Global_2436991)
	{
		iVar0 = 1;
	}
	if (func_188(Global_97959.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2436917)
	{
		iVar0 = 1;
	}
	if (func_187(512))
	{
		iVar0 = 1;
	}
	if (func_186(128))
	{
		iVar0 = 1;
	}
	if (Global_1318746 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_185())
	{
		iVar0 = 0;
	}
	if (Global_2437056)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_183())
		{
			if (Global_1607808.f_64060 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_29(unk_0x1329891157A54C63(), 0))
	{
		iVar0 = 0;
	}
	if (func_181())
	{
		iVar0 = 0;
	}
	if ((Global_2436992 || Global_2436991) || Global_1318722)
	{
		if (func_189())
		{
			iVar0 = 0;
		}
	}
	Global_2437056 = 0;
	Global_2436991 = 0;
	Global_2436992 = 0;
	Global_1318722 = 0;
	Global_2436917 = 0;
	func_179(&(Global_97959.f_1), 32);
	func_178(512);
	func_177(128);
	return iVar0;
}

void func_177(int iParam0)
{
	Global_98016 = (Global_98016 - (Global_98016 && iParam0));
}

void func_178(int iParam0)
{
	Global_98017 = (Global_98017 - (Global_98017 && iParam0));
}

void func_179(var uParam0, int iParam1)
{
	func_180(uParam0, iParam1);
}

void func_180(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_181()
{
	if (((Global_1573839 || Global_1573810) || func_29(unk_0x1329891157A54C63(), 0)) || func_182())
	{
		return 1;
	}
	return 0;
}

bool func_182()
{
	return unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_39.f_18, 14);
}

int func_183()
{
	switch (func_184())
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return 1;
		
		default:
	}
	return 0;
}

int func_184()
{
	return Global_2429626.f_1.f_2818;
}

bool func_185()
{
	return Global_1315867;
}

bool func_186(int iParam0)
{
	return (Global_98016 && iParam0) != 0;
}

bool func_187(int iParam0)
{
	return (Global_98017 && iParam0) != 0;
}

bool func_188(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_189()
{
	if (func_198(Global_2438842))
	{
		return 0;
	}
	if (func_190(unk_0x1329891157A54C63(), 146))
	{
		return 1;
	}
	return 0;
}

int func_190(int iParam0, int iParam1)
{
	if (Global_1606167[iParam0 /*12*/] == iParam1)
	{
		return func_199(iParam0);
	}
	return 0;
}

int func_191()
{
	if (func_198(Global_2438842))
	{
		return 0;
	}
	if (func_199(unk_0x1329891157A54C63()))
	{
		return 1;
	}
	return 0;
}

void func_192(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_31();
	}
	switch (iParam0)
	{
		case 0:
			unk_0x59C26149DF458387(0, iParam1);
			break;
		
		default:
			uVar1 = func_166(iParam1);
			iVar0 = unk_0xE19FDB171CBF814A(uVar1);
			if (unk_0x236D8AD7EE179F46(iVar0, iParam0))
			{
				unk_0xC69E84EBBD7166E6(&iVar0, iParam0);
				unk_0x59C26149DF458387(iVar0, iParam1);
			}
			break;
	}
}

bool func_193()
{
	return unk_0x236D8AD7EE179F46(Global_1312423, 0);
}

bool func_194()
{
	return Global_1315859;
}

bool func_195()
{
	return Global_1315892;
}

void func_196(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_31();
	}
	switch (iParam0)
	{
		case 0:
			unk_0x59C26149DF458387(0, iParam1);
			break;
		
		default:
			uVar1 = func_166(iParam1);
			iVar0 = unk_0xE19FDB171CBF814A(uVar1);
			if (!unk_0x236D8AD7EE179F46(iVar0, iParam0))
			{
				unk_0xF3148AAF69AF9CBC(&iVar0, iParam0);
				unk_0x59C26149DF458387(iVar0, iParam1);
			}
			break;
	}
}

int func_197(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_1318746 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_185())
	{
		iVar0 = 0;
	}
	if (iParam0 == 0)
	{
		if (!func_183())
		{
			if (Global_1607808.f_64060 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_29(unk_0x1329891157A54C63(), 0))
	{
		iVar0 = 0;
	}
	if (func_181())
	{
		iVar0 = 0;
	}
	Global_2437616 = 1;
	return iVar0;
}

int func_198(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			if (Global_262145.f_9157)
			{
				return 1;
			}
			break;
		
		case 132:
			if (Global_262145.f_9159)
			{
				return 1;
			}
			break;
		
		case 133:
			if (Global_262145.f_9156)
			{
				return 1;
			}
			break;
		
		case 136:
			if (Global_262145.f_9160)
			{
				return 1;
			}
			break;
		
		case 138:
			if (Global_262145.f_9161)
			{
				return 1;
			}
			break;
		
		case 139:
			if (Global_262145.f_9162)
			{
				return 1;
			}
			break;
		
		case 129:
			if (Global_262145.f_9158)
			{
				return 1;
			}
			break;
		
		case 140:
			if (Global_262145.f_9163)
			{
				return 1;
			}
			break;
		
		case 141:
			if (Global_262145.f_9164)
			{
				return 1;
			}
			break;
		
		case 144:
			if (Global_262145.f_9165)
			{
				return 1;
			}
			break;
		
		case 146:
			if (Global_262145.f_9166)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_199(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x236D8AD7EE179F46(Global_1606167[iVar0 /*12*/].f_1, 0);
	}
	return 0;
}

void func_200()
{
	if (func_140("KOTC_1STHELP"))
	{
		unk_0xB8BB626315D394F5(1);
	}
	if (func_140("KOTC_OTHRKG"))
	{
		unk_0xB8BB626315D394F5(1);
	}
	if (func_140("KOTC_YOUKNG"))
	{
		unk_0xB8BB626315D394F5(1);
	}
	if (func_140("KOTC_CONTS"))
	{
		unk_0xB8BB626315D394F5(1);
	}
}

int func_201(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
	}
	if (unk_0x236D8AD7EE179F46(iLocal_553, 16))
	{
		return 1;
	}
	if (func_222(unk_0x1329891157A54C63(), 1))
	{
		return 1;
	}
	if (func_87())
	{
		return 1;
	}
	if (func_136(9))
	{
		return 1;
	}
	if (func_136(0))
	{
		return 1;
	}
	if (!func_216())
	{
		return 1;
	}
	if (func_209())
	{
		return 1;
	}
	if (func_204(4))
	{
		return 1;
	}
	if (func_203())
	{
		return 1;
	}
	if (func_157(bParam0, bParam1))
	{
		return 1;
	}
	if (Global_1698742)
	{
		return 1;
	}
	if (func_202(unk_0x1329891157A54C63()))
	{
		return 1;
	}
	return 0;
}

int func_202(int iParam0)
{
	if (!func_571(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1585045[iParam0 /*400*/].f_35;
}

bool func_203()
{
	return Global_90861.f_297 > 0;
}

int func_204(int iParam0)
{
	int iVar0;
	
	if (func_203())
	{
		iVar0 = 0;
		while (iVar0 < 45)
		{
			if (func_208(iVar0) == iParam0)
			{
				if (func_205(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_205(int iParam0)
{
	return func_206(iParam0, 6, 1);
}

int func_206(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x236D8AD7EE179F46(Global_90861.f_1279[iParam0], iParam1);
	}
	else if (unk_0x1C6DF6AD69BE853E())
	{
		if (func_129() == 0)
		{
			return unk_0x236D8AD7EE179F46(func_123(func_207(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x236D8AD7EE179F46(Global_98931.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_207(int iParam0)
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
			return 3422;
			break;
		
		default:
			break;
	}
	return 3438;
}

int func_208(int iParam0)
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

int func_209()
{
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_355.f_5, 0))
	{
		return 1;
	}
	if (func_211() && Global_1585045[unk_0x1329891157A54C63() /*400*/].f_84 != 3)
	{
		return 1;
	}
	if (func_210() && Global_1585045[unk_0x1329891157A54C63() /*400*/].f_84 != 3)
	{
		return 1;
	}
	if (Global_2394619)
	{
		return 1;
	}
	if (Global_1573867.f_20)
	{
		return 1;
	}
	return 0;
}

bool func_210()
{
	return unk_0x236D8AD7EE179F46(Global_2428865, 5);
}

int func_211()
{
	if (((func_215() || func_214()) || func_213()) || func_212())
	{
		return 1;
	}
	return 0;
}

bool func_212()
{
	return unk_0x236D8AD7EE179F46(Global_2428865, 1);
}

bool func_213()
{
	return unk_0x236D8AD7EE179F46(Global_2428865, 2);
}

bool func_214()
{
	return unk_0x236D8AD7EE179F46(Global_2428865, 20);
}

bool func_215()
{
	return Global_2428865.f_573;
}

int func_216()
{
	if (func_78(unk_0x1329891157A54C63(), 21))
	{
		return 0;
	}
	if (unk_0x9B20331E99DD1C1C())
	{
		return 0;
	}
	if (unk_0xD10899F3A1372292())
	{
		return 0;
	}
	if (func_148(unk_0x1329891157A54C63()))
	{
		return 0;
	}
	if (func_221())
	{
		return 0;
	}
	if (func_220())
	{
		return 0;
	}
	if (func_195())
	{
		return 0;
	}
	if (func_87())
	{
		return 0;
	}
	if (unk_0x726DA50057167075())
	{
		return 0;
	}
	if (func_150(unk_0x1329891157A54C63()))
	{
		return 0;
	}
	if (!func_218())
	{
		return 0;
	}
	if (func_78(unk_0x1329891157A54C63(), 0) || func_78(unk_0x1329891157A54C63(), 3))
	{
		return 0;
	}
	if ((func_78(unk_0x1329891157A54C63(), 12) || func_78(unk_0x1329891157A54C63(), 14)) || func_78(unk_0x1329891157A54C63(), 13))
	{
		return 0;
	}
	if (func_69(unk_0x1329891157A54C63(), 0))
	{
		return 0;
	}
	if (func_203())
	{
		return 0;
	}
	if (Global_1698742)
	{
		return 0;
	}
	if (func_202(unk_0x1329891157A54C63()))
	{
		return 0;
	}
	if (func_217())
	{
		return 0;
	}
	return 1;
}

int func_217()
{
	if (Global_2539917.f_796 > -1)
	{
		return 1;
	}
	return 0;
}

int func_218()
{
	if (func_219() == 0)
	{
		return 1;
	}
	return 0;
}

int func_219()
{
	return Global_1312466.f_18;
}

bool func_220()
{
	return Global_1585045[unk_0x1329891157A54C63() /*400*/] == 5;
}

bool func_221()
{
	return unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_39.f_18, 0);
}

int func_222(int iParam0, bool bParam1)
{
	if (unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_248.f_5, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_248.f_5, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_223(int iParam0, struct<3> Param1, var uParam4, float fParam5, float fParam6, var uParam7)
{
	float fVar0;
	int iVar1;
	
	Global_1573867.f_6 = { Param1 };
	fVar0 = unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), Param1);
	if (fVar0 < fParam5 && !func_133(unk_0x1329891157A54C63()))
	{
		if (iParam0 != 146 && !func_78(unk_0x1329891157A54C63(), 21))
		{
			func_233(Param1, 1, 0);
		}
		if ((!*uParam4 || unk_0x236D8AD7EE179F46(Global_1573867.f_1, 3)) && func_571(unk_0x1329891157A54C63(), 1, 1))
		{
			*uParam4 = 1;
			func_127(func_232(iParam0));
			unk_0x5B6D37392F5991C3(func_231(iParam0));
			if (iParam0 != 146)
			{
				iVar1 = func_230(iParam0);
				unk_0x9BAE0FF806E5C2E5(iVar1);
				if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > iVar1)
				{
					unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), iVar1, 1);
					unk_0x2E2A75923F20DCD2(unk_0x1329891157A54C63(), 1);
				}
				unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 8);
			}
			unk_0xF3148AAF69AF9CBC(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 3);
			unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 3);
		}
	}
	else if ((iParam0 == 146 && fVar0 < fParam6) && !func_133(unk_0x1329891157A54C63()))
	{
		if (!unk_0x236D8AD7EE179F46(Global_1573867.f_1, 3) && func_571(unk_0x1329891157A54C63(), 1, 1))
		{
			func_229();
			unk_0x5B6D37392F5991C3(Global_262145.f_9169);
			unk_0xC69E84EBBD7166E6(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 3);
			unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 3);
		}
	}
	else if ((*uParam4 || unk_0x236D8AD7EE179F46(Global_1573867.f_1, 3)) && func_571(unk_0x1329891157A54C63(), 1, 1))
	{
		*uParam4 = 0;
		func_229();
		unk_0x5B6D37392F5991C3(1f);
		unk_0x9BAE0FF806E5C2E5(5);
		unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 8);
		unk_0xC69E84EBBD7166E6(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 3);
		unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 3);
		if (iParam0 != 146 && uParam7)
		{
			func_224();
		}
	}
}

void func_224()
{
	Global_2404607.f_20 = { Global_2406143 };
	Global_2404607.f_22 = { Global_2406145 };
	func_225(1, 1);
}

void func_225(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_2404607.f_39 = { Global_2406162 };
	}
	else
	{
		Global_2404607.f_39 = { Global_2406162 };
		Global_2404607.f_39.f_49 = { Global_2406162.f_49 };
		Global_2404607.f_39.f_52 = Global_2406162.f_52;
		Global_2404607.f_39.f_53 = Global_2406162.f_53;
	}
	if (bParam0)
	{
		func_228();
	}
	func_66(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077);
	func_227(0);
	func_226();
}

void func_226()
{
	struct<4> Var0;
	
	if (Global_2404607.f_466.f_1 == unk_0x8F56512BDA9F6921())
	{
		Global_2404607.f_466 = { Var0 };
	}
}

void func_227(bool bParam0)
{
	if (bParam0)
	{
		Global_2404607.f_615 = 0;
	}
	else
	{
		Global_2404607.f_615 = 1;
	}
}

void func_228()
{
	Global_2404607.f_344 = { Global_2406467 };
}

void func_229()
{
	if (unk_0x64AD45A6264810A8(Global_2451473.f_4633))
	{
		if (!Global_2451473.f_4633 == unk_0x8F56512BDA9F6921())
		{
			return;
		}
	}
	Global_2451473.f_4633 = -1;
	Global_2451473.f_4632 = 1f;
}

int func_230(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
			return 0;
		
		case 144:
			return 0;
		
		default:
	}
	return 5;
}

float func_231(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
			return 0f;
		
		case 144:
			return 0f;
		
		default:
	}
	return 1f;
}

float func_232(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 139:
		case 140:
		case 141:
		case 129:
		case 144:
		case 146:
			return 0f;
		
		default:
	}
	return 1f;
}

void func_233(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2404607.f_39.f_49 = { Param0 };
	Global_2404607.f_39.f_52 = iParam3;
	Global_2404607.f_39.f_53 = iParam4;
}

Vector3 func_234(int iParam0)
{
	return Local_1239[iParam0 /*68*/].f_24;
}

void func_235(int iParam0)
{
	int iVar0;
	
	if (func_201(0, 0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_1308[iVar0 /*46*/] = -1;
		Local_1308[iVar0 /*46*/].f_1 = func_44();
		Local_1308[iVar0 /*46*/].f_8 = 0;
		Local_1308[iVar0 /*46*/].f_29 = -1;
		if (Local_94.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/] > -1)
		{
			Local_1308[iVar0 /*46*/] = Local_94.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/];
			Local_1308[iVar0 /*46*/].f_1 = Local_94.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/].f_1;
			Local_1308[iVar0 /*46*/].f_8 = func_47(Local_94.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/].f_3);
		}
		iVar0++;
	}
	func_236(&Local_1308, &(Local_1239[iParam0 /*68*/].f_66), 23, &uLocal_2781, &uLocal_2889, -1, 0);
}

void func_236(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	fVar10 = -1f;
	iVar11 = -1;
	iVar12 = -1;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_37 = 0;
	if (func_324())
	{
		if (func_290(uParam1, iParam2, uParam3, Global_1573670, 0, func_327()))
		{
			func_289(1);
			if (!func_288() || unk_0x236D8AD7EE179F46(Global_2451473.f_4403, 1))
			{
				if (func_287())
				{
					func_285();
				}
				else
				{
					unk_0x700CD125EC59941D(76, 84);
					if (uParam3->f_28 == 0)
					{
						func_284(1);
						Global_1573670 = 0;
						iVar18 = -1;
						if (Global_1573818 != 1)
						{
							func_283(uParam1);
							if (unk_0x236D8AD7EE179F46(uParam3->f_34, 7))
							{
								unk_0xC69E84EBBD7166E6(&(uParam3->f_34), 7);
							}
						}
						iVar16 = 0;
						while (iVar16 < 32)
						{
							if (func_282())
							{
								if (func_571(unk_0x6528B1497E4313F1(iVar16), 0, 1))
								{
									iVar0 = unk_0x6528B1497E4313F1(iVar16);
								}
								else
								{
									iVar0 = func_44();
								}
							}
							else
							{
								iVar0 = (iParam0[iVar16 /*46*/])->f_1;
							}
							if ((func_281(iVar0) && func_276(iVar0)) && func_571(iVar0, 0, 1))
							{
								iVar9 = iVar0;
								uParam3->f_39[iVar9 /*2*/].f_1 = iVar17;
								iVar7 = Global_1585045[iVar9 /*400*/].f_192.f_6;
								Var3 = { func_271(iVar0) };
								if (iVar0 == unk_0x1329891157A54C63())
								{
									uParam3->f_36 = iVar17;
								}
								StringCopy(&(uParam3->f_1), unk_0xB67DF8F35744CF60(iVar0), 64);
								*(uParam4[iVar16 /*13*/]) = { func_34(iVar0) };
								if (func_270(*(uParam4[iVar16 /*13*/])))
								{
								}
								iVar2 = func_264(iVar0);
								sVar1 = "";
								if (iVar2 != 0)
								{
									sVar1 = unk_0xD23DF626788C30FE(iVar2);
								}
								Global_1573670++;
								if ((iParam0[iVar16 /*46*/])->f_21 != -1f)
								{
									fVar10 = (iParam0[iVar16 /*46*/])->f_21;
								}
								if ((iParam0[iVar16 /*46*/])->f_29 != -1)
								{
									iVar11 = (iParam0[iVar16 /*46*/])->f_29;
								}
								if ((iParam0[iVar16 /*46*/])->f_45 != -1)
								{
									iVar12 = (iParam0[iVar16 /*46*/])->f_45;
								}
								iVar8 = (iParam0[iVar16 /*46*/])->f_8;
								if (((iParam0[iVar16 /*46*/])->f_8 != -1 || (iParam0[iVar16 /*46*/])->f_21 != -1f) || (iParam0[iVar16 /*46*/])->f_29 != -1)
								{
									if (!func_282())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_259(&iVar8, &fVar10, (iParam0[iVar16 /*46*/])->f_8, iParam5);
									uParam3->f_104 = func_258(iParam5, 1, 0, 0);
								}
								if (bParam6)
								{
									iVar13 = (iParam0[iVar16 /*46*/])->f_2 + 1;
									if (iVar18 != iVar13)
									{
										iVar18 = iVar13;
									}
									else
									{
										iVar13 = -2;
									}
								}
								if (func_257(iParam5))
								{
									func_256(uParam1, uParam3, iVar17, Var3, sVar1, iVar7, iVar8, func_115(), iVar15, fVar10, iVar8, iVar12, &((iParam0[iVar16 /*46*/])->f_36), &((iParam0[iVar16 /*46*/])->f_40), (iParam0[iVar16 /*46*/])->f_44, iVar13, bParam6);
								}
								else
								{
									func_256(uParam1, uParam3, iVar17, Var3, sVar1, iVar7, iVar8, func_115(), iVar15, fVar10, iVar11, iVar12, &((iParam0[iVar16 /*46*/])->f_36), &((iParam0[iVar16 /*46*/])->f_40), (iParam0[iVar16 /*46*/])->f_44, iVar13, bParam6);
								}
								unk_0xF3148AAF69AF9CBC(&iVar14, iVar0);
								iVar17++;
							}
							iVar16++;
						}
						iVar16 = 0;
						while (iVar16 < 32)
						{
							iVar0 = unk_0x6528B1497E4313F1(iVar16);
							if (func_571(iVar0, 0, 1) && !unk_0x236D8AD7EE179F46(iVar14, iVar0))
							{
								iVar0 = unk_0x6528B1497E4313F1(iVar16);
							}
							else
							{
								iVar0 = func_44();
							}
							if (func_281(iVar0))
							{
								if (func_571(unk_0x6528B1497E4313F1(iVar16), 0, 1))
								{
									iVar9 = iVar0;
									uParam3->f_39[iVar9 /*2*/].f_1 = iVar17;
									iVar7 = Global_1585045[iVar9 /*400*/].f_192.f_6;
									Var3 = { func_271(iVar0) };
									*(uParam4[iVar16 /*13*/]) = { func_34(iVar0) };
									iVar2 = func_264(iVar0);
									sVar1 = "";
									if (iVar2 != 0)
									{
										sVar1 = unk_0xD23DF626788C30FE(iVar2);
									}
									Global_1573670++;
									func_248(unk_0xB67DF8F35744CF60(iVar0), uParam1, uParam3, iVar17, Var3, sVar1, iVar7, 116, iVar15);
									iVar17++;
								}
							}
							iVar16++;
						}
						if (unk_0x236D8AD7EE179F46(uParam3->f_34, 11))
						{
							func_245(uParam3, uParam1);
						}
						func_3(&(uParam3->f_22));
						func_244();
						uParam3->f_28 = 2;
					}
					if (uParam3->f_28 == 2)
					{
						if (!unk_0x236D8AD7EE179F46(uParam3->f_34, 7))
						{
							func_243(uParam3, uParam1);
							func_242(uParam1, 0, 1);
							unk_0xF3148AAF69AF9CBC(&(uParam3->f_34), 7);
						}
						func_243(uParam3, uParam1);
						if (!unk_0x236D8AD7EE179F46(uParam3->f_34, 11))
						{
							unk_0xF3148AAF69AF9CBC(&(uParam3->f_34), 11);
						}
						if (func_239(uParam3))
						{
							Global_1573818 = 1;
						}
						func_237(uParam3);
						if (Global_1573818 == 1)
						{
							uParam3->f_28 = 0;
						}
						if (Global_1573818 == 2)
						{
							uParam3->f_28 = 0;
						}
					}
					if (unk_0xCC8E3BAC62A29F42(*uParam1))
					{
						unk_0x7F3AA121397DEEC9(7);
						unk_0xD45896EF84BD41C8(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x7F3AA121397DEEC9(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_28 = 0;
			func_244();
			func_284(0);
			if (unk_0x236D8AD7EE179F46(uParam3->f_34, 7))
			{
				unk_0xC69E84EBBD7166E6(&(uParam3->f_34), 7);
			}
			if (unk_0x236D8AD7EE179F46(uParam3->f_34, 10))
			{
				unk_0xC69E84EBBD7166E6(&(uParam3->f_34), 10);
			}
		}
	}
	unk_0x94CD3CDE7BD3510B();
}

void func_237(var uParam0)
{
	if (!func_18(&(uParam0->f_22)))
	{
		func_11(&(uParam0->f_22), 0, 0);
	}
	else if (func_5(&(uParam0->f_22), 250, 0))
	{
		func_3(&(uParam0->f_22));
		func_238(0);
	}
}

void func_238(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1573818 != 2)
		{
			Global_1573818 = 2;
		}
	}
	else
	{
		switch (Global_1573818)
		{
			case 0:
				Global_1573818 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_239(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_38;
	iVar15 = unk_0x6528B1497E4313F1(uParam0->f_38);
	if (iVar15 != func_44() && func_571(iVar15, 0, 1))
	{
		Var2 = { func_34(iVar15) };
		iVar1 = func_241(uParam0, uParam0->f_38);
		if (func_270(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x112C43A973FDAE6C(&Var2))
					{
						if (unk_0x79E45505185E5A0D(&Var2))
						{
							iVar16 = 1;
							func_240(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x6E5E82D7E6363134(&Var2))
					{
						iVar16 = 1;
						func_240(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x112C43A973FDAE6C(&Var2))
					{
						if (!unk_0x79E45505185E5A0D(&Var2))
						{
							iVar16 = 1;
							func_240(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_240(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x112C43A973FDAE6C(&Var2))
					{
						if (!unk_0x6E5E82D7E6363134(&Var2))
						{
							iVar16 = 1;
							func_240(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x6E5E82D7E6363134(&Var2))
					{
						iVar16 = 1;
						func_240(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_38++;
	if (uParam0->f_38 >= 32)
	{
		uParam0->f_38 = 0;
	}
	return iVar16;
}

void func_240(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_39[iParam1 /*2*/] = iParam2;
}

var func_241(var uParam0, int iParam1)
{
	return uParam0->f_39[iParam1 /*2*/];
}

void func_242(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x21ED0FC9B5CC748B(*uParam0, "COLLAPSE"))
	{
		unk_0x75A2A42ADE12FD0E(iParam1);
		unk_0xBA9BA6181F2B6111();
	}
	if (iParam2 == 1)
	{
		if (unk_0x21ED0FC9B5CC748B(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0xBA9BA6181F2B6111();
		}
	}
}

void func_243(var uParam0, var uParam1)
{
	if (!unk_0x236D8AD7EE179F46(uParam0->f_34, 10))
	{
		unk_0x21ED0FC9B5CC748B(*uParam1, "SET_HIGHLIGHT");
		unk_0xBD0C54D89298454E(uParam0->f_36);
		unk_0xBA9BA6181F2B6111();
		unk_0xF3148AAF69AF9CBC(&(uParam0->f_34), 10);
	}
}

void func_244()
{
	if (Global_1573818 != 0)
	{
		Global_1573818 = 0;
	}
}

void func_245(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x6528B1497E4313F1(iVar0);
		if (iVar2 != func_44())
		{
			if (func_571(iVar2, 0, 1))
			{
				if (uParam0->f_39[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_247(uParam0->f_39[iVar0 /*2*/]);
					func_246(uParam1, uParam0->f_39[iVar0 /*2*/].f_1, iVar1, Global_1585045[iVar0 /*400*/].f_192.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_246(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xCC8E3BAC62A29F42(*uParam0))
	{
		if (unk_0x21ED0FC9B5CC748B(*uParam0, "SET_ICON"))
		{
			unk_0xBD0C54D89298454E(iParam1);
			unk_0xBD0C54D89298454E(iParam2);
			if (iParam2 == 65)
			{
				unk_0xBD0C54D89298454E(iParam3);
			}
			unk_0xBA9BA6181F2B6111();
		}
	}
}

int func_247(int iParam0)
{
	int iVar0;
	
	iVar0 = 65;
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_248(char* sParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_255() && iParam3 < func_254())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1573672)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1573818 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x21ED0FC9B5CC748B(*uParam1, sVar1))
		{
			unk_0xBD0C54D89298454E(iParam3);
			if (unk_0x236D8AD7EE179F46(uParam2->f_34, 8) || uParam2->f_107 == 6)
			{
				func_253("");
			}
			else
			{
				unk_0xBD0C54D89298454E(iParam9);
			}
			func_253(sParam0);
			unk_0xBD0C54D89298454E(iParam10);
			if (uParam2->f_107 == 6)
			{
				func_253("");
			}
			else
			{
				unk_0xBD0C54D89298454E(65);
			}
			unk_0xBD0C54D89298454E(-1);
			func_253("");
			if (uParam2->f_107 == 6)
			{
				func_253("");
			}
			else
			{
				func_253(&sParam4);
			}
			unk_0x75A2A42ADE12FD0E(uParam2->f_37);
			unk_0x19A855A370EE563C(sParam8);
			unk_0x19A855A370EE563C(sParam8);
			if (func_252(uParam2))
			{
				func_251("DPAD_FRIEND");
			}
			else if (func_250(uParam2))
			{
				func_251("DPAD_FRIEND");
			}
			else if (func_249(uParam2))
			{
				func_251("DPAD_CREW");
			}
			else
			{
				func_251("");
			}
			unk_0xBA9BA6181F2B6111();
		}
	}
}

bool func_249(var uParam0)
{
	return unk_0x236D8AD7EE179F46(uParam0->f_34, 6);
}

bool func_250(var uParam0)
{
	return unk_0x236D8AD7EE179F46(uParam0->f_34, 5);
}

void func_251(char* sParam0)
{
	unk_0x6CE839BF5D87A428(sParam0);
	unk_0xC3822F70D0E7940B();
}

int func_252(var uParam0)
{
	if (func_250(uParam0) && func_249(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_253(char* sParam0)
{
	unk_0x1F704997074F9C16(sParam0);
}

int func_254()
{
	int iVar0;
	
	if (Global_1573672)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_255()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1573672)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_256(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, var uParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12, int iParam13, int iParam14, char* sParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam2 >= func_255() && iParam2 < func_254())
	{
		iParam2 = (iParam2 % 16);
		iVar0 = iParam2 + 1;
		if (Global_1573672)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam9 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1573818 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xCC8E3BAC62A29F42(*uParam0))
		{
			if (unk_0x21ED0FC9B5CC748B(*uParam0, sVar1))
			{
				unk_0xBD0C54D89298454E(iParam2);
				if (unk_0x236D8AD7EE179F46(uParam1->f_34, 8) || uParam1->f_107 == 6)
				{
					func_253("");
				}
				else
				{
					unk_0xBD0C54D89298454E(iParam8);
				}
				if (uParam1->f_107 == 6 && !unk_0xB318FDA0D1ABDB20(sParam15))
				{
					func_251(sParam15);
				}
				else
				{
					func_253(&(uParam1->f_1));
				}
				unk_0xBD0C54D89298454E(iParam10);
				if (uParam1->f_107 == 6)
				{
					func_253("");
				}
				else
				{
					unk_0xBD0C54D89298454E(65);
				}
				if (iParam11 == 1)
				{
					unk_0xBD0C54D89298454E(iVar0);
				}
				else
				{
					unk_0xBD0C54D89298454E(-1);
				}
				if (func_282())
				{
					func_253("");
				}
				else if (uParam1->f_107 == 6 && !unk_0xB318FDA0D1ABDB20(sParam15))
				{
					unk_0x6CE839BF5D87A428("FM_AE_ONE_INT");
					unk_0x072D7B028D6C7A05(sParam15);
					unk_0x6D55FF05D62B91BC(iParam17);
					unk_0xC3822F70D0E7940B();
				}
				else if (uParam1->f_107 == 5 && !unk_0xB318FDA0D1ABDB20(sParam15))
				{
					unk_0x6CE839BF5D87A428("FM_AE_ONE_INT");
					unk_0x072D7B028D6C7A05(sParam15);
					unk_0x6D55FF05D62B91BC(iParam17);
					unk_0xC3822F70D0E7940B();
				}
				else if ((uParam1->f_107 == 7 && !unk_0xB318FDA0D1ABDB20(sParam15)) && !unk_0xB318FDA0D1ABDB20(sParam16))
				{
					unk_0x6CE839BF5D87A428("FM_AE_TWO_INT");
					unk_0x072D7B028D6C7A05(sParam15);
					unk_0x072D7B028D6C7A05(sParam16);
					unk_0x6D55FF05D62B91BC(iParam17);
					unk_0xC3822F70D0E7940B();
				}
				else if (uParam1->f_107 == 8 && !unk_0xB318FDA0D1ABDB20(uParam1->f_104))
				{
					unk_0x6CE839BF5D87A428("FM_AE_UNIT");
					if (fParam12 != -1f)
					{
						unk_0xB6F6A8755E3C6180(fParam12, 1);
					}
					if (iParam9 != -1)
					{
						unk_0x6D55FF05D62B91BC(iParam9);
					}
					unk_0x072D7B028D6C7A05(uParam1->f_104);
					unk_0xC3822F70D0E7940B();
				}
				else if (uParam1->f_107 == 9)
				{
					unk_0x6CE839BF5D87A428("FM_AE_CASH");
					unk_0x849D5F6ABEAF5CC2(iParam9, 1);
					unk_0xC3822F70D0E7940B();
				}
				else if (iParam14 > -1)
				{
					if (iParam14 == 0 && !unk_0xB318FDA0D1ABDB20(uParam1->f_104))
					{
						func_251(uParam1->f_104);
					}
					else
					{
						func_253("");
					}
				}
				else if (iParam13 != -1)
				{
					unk_0x6CE839BF5D87A428("STRING");
					unk_0x628846883063947B(iParam13, 6);
					unk_0xC3822F70D0E7940B();
				}
				else if (fParam12 != -1f)
				{
					unk_0x6CE839BF5D87A428("NUMBER");
					unk_0xB6F6A8755E3C6180(fParam12, 1);
					unk_0xC3822F70D0E7940B();
				}
				else if (iParam9 != -1)
				{
					unk_0xBD0C54D89298454E(iParam9);
				}
				else
				{
					func_253("");
				}
				if (uParam1->f_107 == 6)
				{
					func_253("");
				}
				else
				{
					func_253(&sParam3);
				}
				unk_0x75A2A42ADE12FD0E(uParam1->f_37);
				if (iParam11 == 1 || unk_0xB318FDA0D1ABDB20(sParam7))
				{
					func_253("");
					func_253("");
				}
				else
				{
					unk_0x19A855A370EE563C(sParam7);
					unk_0x19A855A370EE563C(sParam7);
				}
				if (func_252(uParam1))
				{
					func_251("DPAD_FRIEND");
				}
				else if (func_250(uParam1))
				{
					func_251("DPAD_FRIEND");
				}
				else if (func_249(uParam1))
				{
					func_251("DPAD_CREW");
				}
				else
				{
					func_251("");
				}
				unk_0xBA9BA6181F2B6111();
			}
		}
	}
}

int func_257(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

char* func_258(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x32D4891AD2E2D140())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (unk_0x32D4891AD2E2D140())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_259(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_263(iParam3))
	{
		*fParam1 = (func_260(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_257(iParam3))
	{
		*fParam1 = (func_260(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_260(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x32D4891AD2E2D140())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_262(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x32D4891AD2E2D140())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_261(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_261(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_262(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_263(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_264(int iParam0)
{
	int iVar0;
	
	iVar0 = func_267(iParam0);
	if (iVar0 == -1)
	{
		func_265(iParam0, 1);
		return 0;
	}
	Global_1344467[iVar0 /*5*/].f_4 = 1;
	return Global_1344467[iVar0 /*5*/].f_2;
}

void func_265(int iParam0, bool bParam1)
{
	if (!func_571(iParam0, 0, 1))
	{
		return;
	}
	if (func_267(iParam0) != -1)
	{
		return;
	}
	if (Global_1344630)
	{
		if (iParam0 == Global_1344630.f_1)
		{
			return;
		}
	}
	if (func_266(iParam0))
	{
		return;
	}
	if (Global_1344668 >= 32)
	{
		return;
	}
	Global_1344635[Global_1344668] = iParam0;
	Global_1344668++;
	if (bParam1)
	{
	}
}

int func_266(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1344668)
	{
		if (Global_1344635[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_267(int iParam0)
{
	int iVar0;
	
	if (!func_571(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1344628 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1344628)
	{
		if (Global_1344467[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xF873F9422A5D48E5(Global_1344467[iVar0 /*5*/].f_2) && unk_0x79A3388251B8DD5B(Global_1344467[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_268(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_268(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1344628)
	{
		return;
	}
	if (unk_0xF873F9422A5D48E5(Global_1344467[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1344467[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xD23DF626788C30FE(Global_1344467[iParam0 /*5*/].f_2), 64);
			unk_0xDC6F0301DF609264(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x2B91F38290118964(Global_1344467[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1344628)
	{
		Global_1344467[iVar32 /*5*/] = { Global_1344467[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_269(&(Global_1344467[iVar32 /*5*/]));
	Global_1344628 = (Global_1344628 - 1);
}

void func_269(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_44();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x1C6DF6AD69BE853E())
	{
		uParam0->f_3 = unk_0xD74C7D8D2E5E43D2();
	}
}

bool func_270(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x7BD139E6ED31A2EB(&uParam0, 13);
}

struct<4> func_271(int iParam0)
{
	struct<4> Var0;
	
	if (func_571(iParam0, 0, 1))
	{
		Global_2450501 = { func_34(iParam0) };
		if (unk_0x3F0C224D3CC05EF2())
		{
			if (func_270(Global_2450501))
			{
				if (!unk_0x02F6979593134AF6(&Global_2450501))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0xBEC1291D6B41868E(0))
		{
			return Var0;
		}
		if (func_275(&Global_2450501))
		{
			Global_2450431 = { func_273(iParam0) };
			func_272(&Global_2450431, &Var0);
		}
	}
	return Var0;
}

void func_272(var uParam0, var uParam1)
{
	unk_0x99C56C4A7747183E(uParam0, 35, uParam1);
}

struct<35> func_273(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_274(iParam0))
	{
		return Global_1315926[unk_0x1329891157A54C63() /*35*/];
	}
	Var0 = { func_34(iParam0) };
	unk_0xEF956A1EC046AA4A(&Var13, 35, &Var0);
	return Var13;
}

int func_274(int iParam0)
{
	if (iParam0 == unk_0x1329891157A54C63())
	{
		return 1;
	}
	return 0;
}

int func_275(var uParam0)
{
	if (unk_0x98465343DD18A1F7())
	{
		if (unk_0x80622F5ED5957337() && unk_0x464883E45616A088(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_276(int iParam0)
{
	if (func_133(iParam0) || func_280(iParam0))
	{
		return 0;
	}
	if (!func_279(iParam0))
	{
		return 0;
	}
	if ((!func_278(iParam0) && Global_2414506[iParam0 /*255*/].f_230 == -1) && !func_277(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_277(int iParam0)
{
	return Global_1585045[iParam0 /*400*/].f_177 != 0;
}

int func_278(int iParam0)
{
	if (func_571(iParam0, 0, 1))
	{
		if (func_571(unk_0x1329891157A54C63(), 0, 1))
		{
			if (unk_0x4F5BEB9A4097F301(iParam0, unk_0x1329891157A54C63()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_279(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_128, 22);
}

int func_280(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0x236D8AD7EE179F46(Global_1606167[iParam0 /*12*/].f_1, 10) || unk_0x236D8AD7EE179F46(Global_1606167[iParam0 /*12*/].f_1, 9));
	}
	return 0;
}

int func_281(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_44())
	{
		return 0;
	}
	if (func_29(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x236D8AD7EE179F46(Global_1585045[iVar0 /*400*/].f_128, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_282()
{
	switch (func_155(unk_0x1329891157A54C63()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	return 0;
}

void func_283(var uParam0)
{
	if (unk_0xCC8E3BAC62A29F42(*uParam0))
	{
		unk_0x21ED0FC9B5CC748B(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xBD0C54D89298454E(0);
		unk_0xBA9BA6181F2B6111();
	}
}

void func_284(bool bParam0)
{
	if (bParam0)
	{
		Global_1334763.f_2 = 1;
	}
	else
	{
		Global_1334763.f_2 = 0;
	}
}

void func_285()
{
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_4403, 1))
	{
		if (func_143())
		{
			func_286();
		}
	}
}

void func_286()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2422670.f_2137[iVar0 /*70*/].f_2 != 0)
		{
			Global_2422670.f_2137[iVar0 /*70*/].f_2 = 5;
			unk_0xF3148AAF69AF9CBC(&(Global_2422670.f_2137[iVar0 /*70*/].f_63), 0);
		}
		iVar0++;
	}
}

int func_287()
{
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_4403, 0) && func_143())
	{
		return 1;
	}
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_4403, 1) && func_143())
	{
		return 1;
	}
	return 0;
}

int func_288()
{
	if (func_143())
	{
		if (func_41(Global_2422670.f_2137[0 /*70*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_289(int iParam0)
{
	Global_1334763.f_1 = Global_1334763;
	Global_1334763 = iParam0;
}

int func_290(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	bool bVar4;
	bool bVar5;
	float fVar6;
	int iVar7;
	
	StringCopy(&Var0, "", 16);
	bVar5 = func_323(iParam1);
	if (iParam1 == 17)
	{
		bVar4 = true;
	}
	fVar6 = func_322();
	if (iParam1 == 23)
	{
		if (func_321())
		{
			if (func_320() > 0 && Global_1573672)
			{
				unk_0x10BFA51B8BA62476();
				unk_0x97925E0DE42EFC5C(fVar6);
				unk_0xC9A352663D97EFC3(18);
				if (unk_0xA83A609D74168B30())
				{
					unk_0xB5BFC55E4F67D18D();
				}
			}
		}
	}
	if (!bParam5)
	{
		if (!func_312())
		{
			func_311(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_4406, 26))
	{
		func_311(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_18(&(uParam2->f_20)))
	{
		if (func_320() == 1)
		{
			func_310(bVar5, uParam0, 0);
			func_11(&(uParam2->f_20), 0, 0);
			func_311(uParam0, uParam2, 0);
		}
	}
	if (func_18(&(uParam2->f_20)) || bParam5)
	{
		if (unk_0xA83A609D74168B30())
		{
			unk_0xB5BFC55E4F67D18D();
		}
		if (func_5(&(uParam2->f_20), 10000, 0) || (func_320() == 0 && !bParam5))
		{
			func_311(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar4 == 0)
			{
				func_309();
				if (iParam1 == 23)
				{
					unk_0x10BFA51B8BA62476();
				}
				unk_0xC9A352663D97EFC3(18);
			}
			if (unk_0x236D8AD7EE179F46(uParam2->f_34, 0))
			{
				Global_1573670 = uParam3;
				Global_1573669 = 1;
				unk_0x97925E0DE42EFC5C(fVar6);
				if (bVar4)
				{
					if (uParam2->f_35 != Global_1573671)
					{
						unk_0xC69E84EBBD7166E6(&(uParam2->f_34), 0);
					}
				}
				return 1;
			}
			else
			{
				if (bVar4 == 0)
				{
					func_309();
					if (iParam1 == 23)
					{
						unk_0x10BFA51B8BA62476();
					}
					unk_0xC9A352663D97EFC3(18);
				}
				unk_0x97925E0DE42EFC5C(fVar6);
				if (func_310(bVar5, uParam0, 0))
				{
					func_283(uParam0);
					uParam2->f_17 = func_307(iParam1, &(Global_1607808.f_63428), bParam4);
					if (unk_0xB318FDA0D1ABDB20(uParam2->f_17))
					{
						uParam2->f_17 = func_307(iParam1, &(Global_1607808.f_63428), bParam4);
					}
					if (bParam4)
					{
						func_304(uParam0, uParam2->f_17, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 23)
					{
						func_298(uParam0, func_301(uParam2), func_299(uParam2), -1);
					}
					else if (bVar4)
					{
						uParam2->f_35 = Global_1573671;
						func_304(uParam0, uParam2->f_17, "", 0, -1, Global_1573671, 1);
					}
					else
					{
						Var0 = { func_296(iParam1) };
						iVar7 = func_291(iParam1);
						func_304(uParam0, uParam2->f_17, &Var0, 1, iVar7, -1, 1);
					}
					unk_0xF3148AAF69AF9CBC(&(uParam2->f_34), 0);
				}
			}
		}
	}
	return 0;
}

int func_291(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_295())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 22:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 9:
		case 10:
		case 11:
		case 14:
			iVar0 = 2;
			break;
		
		case 12:
			iVar0 = 17;
			break;
		
		case 13:
			iVar0 = 18;
			break;
		
		case 15:
			if (func_294(unk_0x1329891157A54C63()))
			{
				iVar0 = 20;
			}
			if (func_293(unk_0x1329891157A54C63()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_292(unk_0x1329891157A54C63()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_292(int iParam0)
{
	return Global_2414506[iParam0 /*255*/].f_114 == 4;
}

bool func_293(int iParam0)
{
	return Global_2414506[iParam0 /*255*/].f_114 == 7;
}

bool func_294(int iParam0)
{
	return Global_2414506[iParam0 /*255*/].f_114 == 2;
}

bool func_295()
{
	return Global_1607808.f_1 == 0;
}

struct<4> func_296(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_297(unk_0x1329891157A54C63()) || func_292(unk_0x1329891157A54C63()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 9:
		case 10:
		case 11:
		case 14:
		case 12:
		case 13:
		case 15:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_1607808.f_20, 16);
			break;
	}
	return Var0;
}

bool func_297(int iParam0)
{
	return Global_2414506[iParam0 /*255*/].f_114 == 5;
}

void func_298(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xCC8E3BAC62A29F42(*uParam0))
	{
		unk_0x21ED0FC9B5CC748B(*uParam0, "SET_TITLE");
		if (unk_0xB318FDA0D1ABDB20(uParam2))
		{
			func_251(uParam1);
		}
		else if (func_155(unk_0x1329891157A54C63()) == 133)
		{
			unk_0x6CE839BF5D87A428("FM_AE_BRACKT_C");
			unk_0x072D7B028D6C7A05(uParam1);
			unk_0x072D7B028D6C7A05(sParam2);
			unk_0xC3822F70D0E7940B();
		}
		else
		{
			unk_0x6CE839BF5D87A428("FM_AE_BRACKT");
			unk_0x072D7B028D6C7A05(sParam1);
			unk_0x072D7B028D6C7A05(sParam2);
			unk_0xC3822F70D0E7940B();
		}
		func_251("");
		if (iParam3 != -1)
		{
			unk_0xBD0C54D89298454E(iParam3);
		}
		unk_0xBA9BA6181F2B6111();
	}
}

char* func_299(var uParam0)
{
	if (func_300() && !unk_0xB318FDA0D1ABDB20(uParam0->f_106))
	{
		return uParam0->f_106;
	}
	else
	{
		switch (func_155(unk_0x1329891157A54C63()))
		{
			case 131:
				return "";
			
			case 132:
				return "FM_AE_SORT_5";
			
			case 133:
				switch (func_94())
				{
					case 0:
						return "FM_AE_SORT_2";
					
					case 1:
						return "FM_AE_SORT_2";
					
					case 2:
						return "FM_AE_SORT_3";
					
					case 3:
						return "FM_AE_SORT_2";
					
					case 4:
						return "FM_AE_SORT_2";
					
					case 5:
						return "FM_AE_SORT_2";
					
					case 6:
						return "FM_AE_SORT_2";
					
					case 7:
						return "FM_AE_SORT_13";
					
					case 8:
						return "FM_AE_SORT_4";
					
					case 9:
						return "FM_AE_SORT_2";
					
					case 10:
						return "FM_AE_SORT_2";
					
					case 11:
						return "FM_AE_SORT_2";
					
					case 12:
						return "FM_AE_SORT_2";
					
					case 13:
						return "FM_AE_SORT_2";
					
					case 14:
						return "FM_AE_SORT_5";
					
					case 15:
						return "FM_AE_SORT_9";
					
					case 16:
						return "FM_AE_SORT_9";
					
					case 17:
						return "FM_AE_SORT_9";
					
					case 18:
						return "FM_AE_SORT_9";
					
					default:
				}
				break;
			
			case 136:
				return "";
			
			case 138:
				return "";
			
			case 139:
				return "FM_AE_SORT_10";
			
			case 140:
				return "";
			
			case 141:
				return "FM_AE_SORT_5";
			
			case 144:
				return "FM_AE_SORT_1";
			
			case 129:
				return "FM_AE_SORT_9";
			}
	}
	return "";
}

bool func_300()
{
	return Global_1585044;
}

char* func_301(var uParam0)
{
	if (func_300() && !unk_0xB318FDA0D1ABDB20(uParam0->f_105))
	{
		return uParam0->f_105;
	}
	else
	{
		switch (func_155(unk_0x1329891157A54C63()))
		{
			case 131:
				return "PIM_TA9";
			
			case 132:
				if (func_303() == 0)
				{
					return "CPC_TILEL";
				}
				else if (func_303() == 1)
				{
					return "CPC_TILELA";
				}
				return "PIM_TA0";
				break;
			
			case 133:
				switch (func_94())
				{
					case 0:
						return "AMCH_0SLC";
					
					case 1:
						return "AMCH_1SLC";
					
					case 2:
						return "AMCH_2SLC";
					
					case 3:
						return "AMCH_3SLC";
					
					case 4:
						return "AMCH_4SLC";
					
					case 5:
						return "AMCH_5SLC";
					
					case 6:
						return "AMCH_6SLC";
					
					case 7:
						return "AMCH_7SLC";
					
					case 8:
						return "AMCH_8SLC";
					
					case 9:
						return "AMCH_12SLC";
					
					case 10:
						return "AMCH_13SLC";
					
					case 11:
						return "AMCH_15SLC";
					
					case 12:
						return "AMCH_16SLC";
					
					case 13:
						return "AMCH_23SLC";
					
					case 14:
						return "AMCH_9SLC";
					
					case 15:
						return "AMCH_19SLC";
					
					case 16:
						return "AMCH_20SLC";
					
					case 17:
						return "AMCH_21SLC";
					
					case 18:
						return "AMCH_22SLC";
					
					default:
				}
				break;
			
			case 136:
				return "PIM_TA10";
			
			case 138:
				return "PIM_TA4";
			
			case 139:
				return "PIM_TA5";
			
			case 140:
				return "PIM_TA3";
			
			case 141:
				return "PIM_TA8";
			
			case 144:
				return "PIM_TA2";
			
			case 129:
				if (func_302() == 1)
				{
					return "FM_AE_TITL_12";
				}
				else
				{
					return "PIM_TA7";
				}
				break;
			
			case 146:
				return "PIM_TA6";
			}
	}
	return "";
}

int func_302()
{
	return Global_2451473.f_4627;
}

int func_303()
{
	if (func_155(unk_0x1329891157A54C63()) == 132)
	{
		return Global_2451473.f_4622;
	}
	return -1;
}

void func_304(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xCC8E3BAC62A29F42(*uParam0))
	{
		unk_0x21ED0FC9B5CC748B(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_253(uParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x6CE839BF5D87A428(uParam1);
			unk_0x6D55FF05D62B91BC(iParam5);
			unk_0xC3822F70D0E7940B();
		}
		else
		{
			func_251(sParam1);
		}
		if (func_321() && iParam6)
		{
			if (func_306())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x6CE839BF5D87A428("LBD_DPD_CNT");
			unk_0x6D55FF05D62B91BC(iVar0);
			unk_0x6D55FF05D62B91BC(iVar1);
			unk_0xC3822F70D0E7940B();
		}
		else
		{
			func_251(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0xBD0C54D89298454E(iParam4);
			if (func_305(unk_0x1329891157A54C63()))
			{
				unk_0xBD0C54D89298454E(166);
			}
		}
		unk_0xBA9BA6181F2B6111();
	}
}

int func_305(int iParam0)
{
	if (func_294(iParam0) || func_293(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_306()
{
	return Global_1573672;
}

char* func_307(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 17)
	{
		uVar0 = func_308();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 21)
	{
		if (Global_1573836 == 0)
		{
			Global_1573836 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xB318FDA0D1ABDB20(uParam1))
	{
		if (Global_1573836 == 1)
		{
			Global_1573836 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1573836 == 0)
		{
			Global_1573836 = 1;
		}
		switch (iParam0)
		{
			case 0:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 6:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 15:
			case 11:
			case 14:
			case 12:
			case 10:
			case 9:
			case 13:
			case 16:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 18:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_308()
{
	if (unk_0xCCA957C9E80D164B())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0xE7A4B9596EBA099D())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x819401838C15BB6B())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0xB830EBEEFC476A2F())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_309()
{
	Global_36265 = 1;
}

bool func_310(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x95EF972E3A07B525("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x95EF972E3A07B525("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x95EF972E3A07B525("mp_matchmaking_card");
	}
	return unk_0xCC8E3BAC62A29F42(*uParam1);
}

void func_311(var uParam0, var uParam1, bool bParam2)
{
	unk_0xC69E84EBBD7166E6(&(uParam1->f_34), 7);
	Global_1573670 = 0;
	func_244();
	Global_1573669 = 0;
	uParam1->f_28 = 0;
	if (bParam2)
	{
		if (func_18(&(uParam1->f_20)))
		{
			func_3(&(uParam1->f_20));
		}
	}
	if (unk_0xCC8E3BAC62A29F42(*uParam0))
	{
		unk_0x4B6F01DE8CCE643E(uParam0);
	}
	if (unk_0x236D8AD7EE179F46(uParam1->f_34, 0))
	{
		unk_0xC69E84EBBD7166E6(&(uParam1->f_34), 0);
	}
	unk_0x97925E0DE42EFC5C(0f);
}

int func_312()
{
	if (func_319())
	{
		return 0;
	}
	if (func_220())
	{
		return 0;
	}
	if (!func_317())
	{
		return 0;
	}
	if (!func_218())
	{
		return 0;
	}
	if (func_316(8, -1))
	{
		return 0;
	}
	if (func_320() == 2)
	{
		return 0;
	}
	if (Global_2451473.f_4387)
	{
		return 0;
	}
	if (func_87())
	{
		return 0;
	}
	else if (!func_149(unk_0x1329891157A54C63(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_315(1) || func_313(1)) || Global_17099.f_124) || Global_17099)
	{
		return 0;
	}
	if (unk_0xDB10DED5ABC4AA20())
	{
		return 0;
	}
	if (func_513(unk_0x1329891157A54C63()))
	{
		return 0;
	}
	if (Global_1698742)
	{
		return 0;
	}
	if (Global_1698745)
	{
		return 0;
	}
	return 1;
}

int func_313(bool bParam0)
{
	if (unk_0xACE30BA91B2DD8E5())
	{
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
		{
			if (func_314(unk_0x81873881071CD9FE()))
			{
				if (unk_0xCAD9951C953F5B2D(0, 25) || unk_0xCAD9951C953F5B2D(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17099.f_130)
	{
		return 0;
	}
	if (unk_0xCAD9951C953F5B2D(0, 19) || (!bParam0 && unk_0x70A79CA636F98FA5(0, 19)))
	{
		return 1;
	}
	if (unk_0x913B1C01C1BA6C6F())
	{
		if (((unk_0xCAD9951C953F5B2D(0, 166) || unk_0xCAD9951C953F5B2D(0, 167)) || unk_0xCAD9951C953F5B2D(0, 168)) || unk_0xCAD9951C953F5B2D(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x70A79CA636F98FA5(0, 166) || unk_0x70A79CA636F98FA5(0, 167)) || unk_0x70A79CA636F98FA5(0, 168)) || unk_0x70A79CA636F98FA5(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_314(int iParam0)
{
	int iVar0;
	
	if (unk_0x763F2CFB73975AA7())
	{
		if (!unk_0x5FEB513A4402FD59(iParam0))
		{
			unk_0x5F446E70DA9B8122(iParam0, &iVar0, 1);
			if ((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_315(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17099.f_4 && Global_17099.f_104 == 4);
	}
	return Global_17099.f_4;
}

bool func_316(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1334766.f_203[iParam1];
			}
			break;
	}
	return unk_0x236D8AD7EE179F46(Global_1334766.f_949, iParam0);
}

int func_317()
{
	if (func_318())
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

bool func_318()
{
	return Global_1312438;
}

bool func_319()
{
	return unk_0x48E480685981C7D4() <= Global_17238.f_5630 + 100;
}

int func_320()
{
	return Global_1334766.f_68;
}

int func_321()
{
	if (Global_1573671 > 16)
	{
		return 1;
	}
	return 0;
}

float func_322()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0xCAF8683E9362A022()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_323(int iParam0)
{
	switch (iParam0)
	{
		case 17:
		case 23:
			return 1;
			break;
	}
	return 0;
}

int func_324()
{
	if (func_327())
	{
		return 1;
	}
	if (func_159(unk_0x1329891157A54C63()))
	{
		return 0;
	}
	if (func_300())
	{
		return 1;
	}
	if (func_326(unk_0x1329891157A54C63()))
	{
		switch (func_155(unk_0x1329891157A54C63()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_325(unk_0x1329891157A54C63()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_325(unk_0x1329891157A54C63()))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool func_325(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_1606167[iParam0 /*12*/].f_1, 4);
}

int func_326(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1606167[iVar0 /*12*/] != -1;
	}
	return 0;
}

int func_327()
{
	if (func_328(unk_0x1329891157A54C63()))
	{
		return Global_1318828;
	}
	return 0;
}

int func_328(int iParam0)
{
	if (func_29(iParam0, 0))
	{
		return unk_0xC9C35C91114A8B03(iParam0);
	}
	return 0;
}

void func_329()
{
	if (!func_18(&uLocal_556))
	{
		if (func_330(unk_0x519AAFF77CC141DF()))
		{
			func_11(&uLocal_556, 0, 1);
		}
	}
}

int func_330(int iParam0)
{
	if (unk_0x236D8AD7EE179F46(Local_392[iParam0 /*5*/].f_4, 5))
	{
		return 1;
	}
	if (unk_0x236D8AD7EE179F46(Local_392[iParam0 /*5*/].f_4, 4))
	{
		return 1;
	}
	if (unk_0x236D8AD7EE179F46(Local_392[iParam0 /*5*/].f_4, 6))
	{
		return 1;
	}
	if (unk_0x236D8AD7EE179F46(Local_392[iParam0 /*5*/].f_4, 7))
	{
		return 1;
	}
	return 0;
}

void func_331()
{
	if (func_201(1, 1))
	{
		if (!unk_0x236D8AD7EE179F46(Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_4, 8))
		{
			unk_0xF3148AAF69AF9CBC(&(Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_4), 8);
		}
	}
	else if (unk_0x236D8AD7EE179F46(Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_4, 8))
	{
		unk_0xC69E84EBBD7166E6(&(Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_4), 8);
	}
	if (func_201(0, 1))
	{
		if (!unk_0x236D8AD7EE179F46(Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_4, 9))
		{
			unk_0xF3148AAF69AF9CBC(&(Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_4), 9);
		}
	}
	else if (unk_0x236D8AD7EE179F46(Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_4, 9))
	{
		unk_0xC69E84EBBD7166E6(&(Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_4), 9);
	}
	if (func_201(1, 0))
	{
		if (!unk_0x236D8AD7EE179F46(Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_4, 10))
		{
			unk_0xF3148AAF69AF9CBC(&(Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_4), 10);
		}
	}
	else if (unk_0x236D8AD7EE179F46(Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_4, 10))
	{
		unk_0xC69E84EBBD7166E6(&(Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_4), 10);
	}
	if (func_201(0, 0))
	{
		if (!unk_0x236D8AD7EE179F46(Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_4, 11))
		{
			unk_0xF3148AAF69AF9CBC(&(Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_4), 11);
		}
	}
	else if (unk_0x236D8AD7EE179F46(Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_4, 11))
	{
		unk_0xC69E84EBBD7166E6(&(Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_4), 11);
	}
}

void func_332()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_339(iVar0);
		func_333(iVar0);
		switch (func_15(iVar0))
		{
			case 0:
				break;
			
			case 1:
				break;
			
			case 2:
				break;
		}
		iVar0++;
	}
}

void func_333(int iParam0)
{
	if (func_201(0, 0) || iLocal_3314 == -1)
	{
		func_54(iParam0);
		func_56(iParam0);
		func_51(iParam0, -1);
		return;
	}
	if (func_7(iParam0) == -1)
	{
		if (func_156(unk_0x519AAFF77CC141DF(), iParam0))
		{
			func_56(iParam0);
		}
		else
		{
			func_335(iParam0);
		}
	}
	else
	{
		func_56(iParam0);
	}
	if (iLocal_3315 != func_52(iParam0, 1))
	{
		switch (iLocal_3316)
		{
			case 0:
				func_51(iParam0, -1);
				iLocal_3316++;
				break;
			
			case 1:
				func_334(iParam0);
				iLocal_3315 = func_52(iParam0, 1);
				iLocal_3316 = 0;
				break;
			}
	}
}

void func_334(int iParam0)
{
	if (!unk_0x236D8AD7EE179F46(iLocal_554, func_358(iParam0)))
	{
		unk_0x10E4F2F3A37EF7EC(func_53(iParam0, 0), 1, func_52(iParam0, 1));
		if (func_358(iParam0) == 4)
		{
			unk_0x10E4F2F3A37EF7EC(func_53(iParam0, 1), 1, func_52(iParam0, 1));
		}
		unk_0xF3148AAF69AF9CBC(&iLocal_554, func_358(iParam0));
	}
}

void func_335(int iParam0)
{
	if (!unk_0xFBACB273AA628CC5(func_57(iParam0)))
	{
		func_338(iParam0, unk_0xA949BE56543040D2(func_234(iParam0)));
		unk_0xCB015C3E2E01CA1C(func_57(iParam0), 12);
		if (unk_0x7281387C8D4EC316("KOTC_AREANAME"))
		{
			unk_0x2AB7C42FF2AF476D(func_57(iParam0), "KOTC_AREANAME");
		}
		unk_0x8F827BB0F6ED7AA8(func_57(iParam0), 438);
		func_336(&(Local_1239[iParam0 /*68*/].f_27), func_52(iParam0, 1));
		if (!unk_0x236D8AD7EE179F46(iLocal_553, 12))
		{
			unk_0x20F5C387A2DC0C80(Local_1239[iParam0 /*68*/].f_27, 1);
			unk_0x4D2AF8274EB774A2(Local_1239[iParam0 /*68*/].f_27, 7000);
			unk_0xF3148AAF69AF9CBC(&iLocal_553, 12);
		}
		if (!unk_0x236D8AD7EE179F46(iLocal_553, 11))
		{
			unk_0x34D34ABC20E130B1();
			unk_0xF3148AAF69AF9CBC(&iLocal_553, 11);
		}
		unk_0x3C8D013C840ADA0A(func_57(iParam0), 1);
		unk_0x53D8493E0AC6652A(func_57(iParam0), 1);
	}
	else
	{
		func_336(&(Local_1239[iParam0 /*68*/].f_27), func_52(iParam0, 0));
		if (unk_0xFBACB273AA628CC5(func_57(iParam0)))
		{
			if (unk_0x7281387C8D4EC316("KOTC_AREANAME"))
			{
				unk_0x2AB7C42FF2AF476D(func_57(iParam0), "KOTC_AREANAME");
			}
		}
	}
}

void func_336(var uParam0, int iParam1)
{
	if (unk_0xFBACB273AA628CC5(*uParam0))
	{
		unk_0x1B86E7A8766EA6B4(*uParam0, func_337(iParam1));
	}
}

int func_337(int iParam0)
{
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
	return 0;
}

void func_338(int iParam0, var uParam1)
{
	Local_1239[iParam0 /*68*/].f_27 = uParam1;
}

void func_339(int iParam0)
{
	int iVar0;
	struct<3> Var1[3];
	struct<3> Var11[3];
	var uVar21[3];
	struct<3> Var25[3];
	var uVar35[3];
	bool bVar39;
	float fVar40;
	float fVar41;
	
	fVar40 = 10f;
	fVar41 = 25f;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_358(iParam0) == 7)
		{
			fVar40 = 5f;
			fVar41 = 9f;
		}
		Var1[iVar0 /*3*/] = { func_349(iParam0, iVar0) };
		Var11[iVar0 /*3*/] = { func_348(iParam0, iVar0) };
		uVar21[iVar0] = func_347(iParam0, iVar0);
		func_346(iParam0, iVar0, &(Var25[iVar0 /*3*/]), &(uVar35[iVar0]));
		if (unk_0x236D8AD7EE179F46(iLocal_3308, unk_0x519AAFF77CC141DF()))
		{
			if (unk_0x236D8AD7EE179F46(iLocal_3307, Local_558[unk_0x519AAFF77CC141DF() /*18*/].f_1))
			{
				if (!unk_0x236D8AD7EE179F46(iLocal_3309, Local_558[unk_0x519AAFF77CC141DF() /*18*/].f_1))
				{
					if (!func_201(1, 1))
					{
						if (iLocal_3314 == unk_0x519AAFF77CC141DF())
						{
							if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
							{
								if ((!func_345(Var1[iVar0 /*3*/]) && !func_345(Var11[iVar0 /*3*/])) && uVar21[iVar0] > 0f)
								{
									if (unk_0xD1FFD959917D4ED8(Local_1135[unk_0x1329891157A54C63() /*3*/].f_2, Var1[iVar0 /*3*/], Var11[iVar0 /*3*/], uVar21[iVar0], 0, 1, 0))
									{
										bVar39 = true;
									}
								}
								if (func_358(iParam0) == 7)
								{
									if (func_344(iParam0) < 0f)
									{
										if (func_344(iParam0) <= fVar40 && func_344(iParam0) >= (fVar40 * -1f))
										{
											if (func_343(iParam0) <= fVar41)
											{
												bVar39 = true;
											}
										}
									}
								}
								else if (!func_345(Var25[iVar0 /*3*/]))
								{
									if (func_342(iParam0, iVar0) < 0f)
									{
										if (func_342(iParam0, iVar0) >= (uVar35[iVar0] * -1f))
										{
											if (func_341(iParam0, iVar0) <= uVar35[iVar0])
											{
												bVar39 = true;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	func_340(iParam0, bVar39);
}

void func_340(int iParam0, bool bParam1)
{
	Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_1[iParam0] = bParam1;
	if (bParam1)
	{
		unk_0xF3148AAF69AF9CBC(&(Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_3), iParam0);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_3), iParam0);
	}
}

float func_341(int iParam0, int iParam1)
{
	return Local_1239[iParam0 /*68*/].f_41[iParam1];
}

float func_342(int iParam0, int iParam1)
{
	return Local_1239[iParam0 /*68*/].f_45[iParam1];
}

float func_343(int iParam0)
{
	return Local_1239[iParam0 /*68*/].f_38;
}

float func_344(int iParam0)
{
	return Local_1239[iParam0 /*68*/].f_39;
}

int func_345(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_346(int iParam0, int iParam1, var uParam2, float fParam3)
{
	switch (iParam1)
	{
		case 0:
			switch (func_358(iParam0))
			{
				case 0:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 2:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 4:
					*uParam2 = { 2515.966f, 3777.477f, 51.767f };
					*fParam3 = 5.3f;
					break;
				
				case 1:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 3:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 5:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 6:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 7:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
			}
			break;
		
		case 1:
			switch (func_358(iParam0))
			{
				case 0:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 2:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 4:
					*uParam2 = { 2515.315f, 3789.364f, 52.088f };
					*fParam3 = 3.35f;
					break;
				
				case 1:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 3:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 5:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 6:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 7:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
			}
			break;
		
		case 2:
			switch (func_358(iParam0))
			{
				case 0:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 2:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 4:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 1:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 3:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 5:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 6:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 7:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
			}
			break;
	}
}

var func_347(int iParam0, int iParam1)
{
	return Local_1239[iParam0 /*68*/].f_20[iParam1];
}

Vector3 func_348(int iParam0, int iParam1)
{
	return Local_1239[iParam0 /*68*/].f_10[iParam1 /*3*/];
}

Vector3 func_349(int iParam0, int iParam1)
{
	return Local_1239[iParam0 /*68*/][iParam1 /*3*/];
}

void func_350(int iParam0)
{
	Local_392[unk_0x519AAFF77CC141DF() /*5*/] = iParam0;
}

void func_351(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
			switch (iParam1)
			{
				case 0:
					func_352("kwUfKUus6EuQyNSL8KpY-w");
					func_352("yMTOFLfO2UKwzKrmgPP7kg");
					func_352("9mGvlJ1Cxk-HxC2zkAwdQg");
					break;
				
				case 2:
					func_352("tP5HSeCA0UiHnkRzakdO2Q");
					func_352("uEkrqoerQEmQ0uZRtp4rkw");
					func_352("xIXaDwts7kKz0sbMnwYlCQ");
					break;
				
				case 3:
					func_352("UOTaXepxrUOUEU7QtfBvGQ");
					break;
			}
			break;
		
		case 139:
			switch (iParam1)
			{
				case 1:
					func_352("OZ5hEthzqUSuK_x9YuO4uw");
					break;
				
				case 2:
					func_352("uEkrqoerQEmQ0uZRtp4rkw");
					break;
			}
			break;
		
		case 138:
			switch (iParam1)
			{
				case 2:
					func_352("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 3:
					func_352("uEkrqoerQEmQ0uZRtp4rkw");
					func_352("92t91kL3Wkqvl2Kc82cNSA");
					func_352("43Yoc5jfr0OwGfW9UP5TXA");
					break;
				
				case 5:
					func_352("WfnWlxu780CwC7LLUrLljw");
					break;
				
				case 6:
					func_352("lowxnyELLUCxqy_Q1uslIg");
					break;
				
				case 7:
					func_352("QmlvLMLCwkOvoZlkAstYxw");
					break;
			}
			break;
		
		case 141:
			switch (iParam1)
			{
				case 0:
					func_352("TT4ifq2kgEG6G1fCUYHXSQ");
					break;
			}
			break;
		
		case 134:
			switch (iParam1)
			{
				case 1:
					func_352("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 4:
					func_352("fOfm7nzMLkav0ldcSCNAzA");
					func_352("JMbOeJ2-ak-02KwNLtnOJg");
					break;
				
				case 5:
					func_352("3AAj-muvN0iHI5IMyGlboA");
					break;
				
				case 0:
					func_352("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 9:
					func_352("Ma78E44OMkGfYPmCPZXUNA");
					func_352("Pqz3l_Dhg0ar0yHiz2wMqQ");
					break;
				
				case 19:
					func_352("ZmoxEY6L60WSR-7I5IUjPg");
					break;
				
				case 10:
					func_352("gxmtJHj2OUWQDt8nNMy3TQ");
					break;
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							func_352("lowxnyELLUCxqy_Q1uslIg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 2:
							func_352("dCWpYaU7CU-Bxz5s2qGjaA");
							break;
					}
					break;
				
				case 2:
					func_352("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 3:
					switch (iParam2)
					{
						case 1:
							func_352("Cl3Gh6-LMkuZ7Z_jPqSE8g");
							break;
						
						case 2:
							func_352("TT4ifq2kgEG6G1fCUYHXSQ");
							break;
					}
					break;
				
				case 4:
					func_352("A0vXbIK2WEmiVSUNYRGpvA");
					switch (iParam2)
					{
						case 2:
							func_352("3AAj-muvN0iHI5IMyGlboA");
							break;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							func_352("kXry-nXRbEC6ktiopjDDcg");
							break;
						
						case 1:
							func_352("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_352("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_352("fOfm7nzMLkav0ldcSCNAzA");
							func_352("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							func_352("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_352("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							func_352("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_352("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 3:
							func_352("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 1:
							func_352("gaJhsFMzFkyl3al5SRa6fQ");
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 1:
							func_352("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_352("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_352("fOfm7nzMLkav0ldcSCNAzA");
							func_352("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							func_352("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_352("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							func_352("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_352("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 3:
							func_352("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
			}
			break;
		
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 1:
									func_352("UOTaXepxrUOUEU7QtfBvGQ");
									break;
								
								case 2:
									func_352("xIXaDwts7kKz0sbMnwYlCQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_352("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 2:
									func_352("QmlvLMLCwkOvoZlkAstYxw");
									break;
								
								case 3:
									func_352("gxmtJHj2OUWQDt8nNMy3TQ");
									break;
								
								case 4:
									func_352("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									func_352("dCWpYaU7CU-Bxz5s2qGjaA");
									break;
								
								case 2:
									func_352("aGBjo2rKi0yMDLl3a2ATGA");
									func_352("yMTOFLfO2UKwzKrmgPP7kg");
									break;
								
								case 3:
									func_352("lhGatLUmgke_87surSFS5g");
									break;
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 1:
									func_352("VmS_SI5wSE2LuL9qItQqbw");
									break;
								
								case 4:
									func_352("f2lnL6wZPkGWUowu0yLm1Q");
									func_352("ZmoxEY6L60WSR-7I5IUjPg");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 1:
									func_352("Ma78E44OMkGfYPmCPZXUNA");
									break;
								
								case 2:
									func_352("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									func_352("W-OJzHlM-0ym9PsIASYZtw");
									func_352("uEkrqoerQEmQ0uZRtp4rkw");
									break;
								
								case 1:
									func_352("3AAj-muvN0iHI5IMyGlboA");
									break;
								
								case 3:
									func_352("TjGz31AMYE6bGCjAIitu6w");
									func_352("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 2:
									func_352("QmlvLMLCwkOvoZlkAstYxw");
									func_352("BktATxH9R0Wp2x0kWSbqjw");
									break;
								
								case 3:
									func_352("BktATxH9R0Wp2x0kWSbqjw");
									func_352("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 4:
									func_352("f2lnL6wZPkGWUowu0yLm1Q");
									break;
							}
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 1:
									func_352("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 3:
									func_352("PY8hdiWoAkudg9SpK8G2xQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_352("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
								
								case 1:
									func_352("9mGvlJ1Cxk-HxC2zkAwdQg");
									break;
								
								case 2:
									func_352("tP5HSeCA0UiHnkRzakdO2Q");
									break;
								
								case 3:
									func_352("kXry-nXRbEC6ktiopjDDcg");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 3:
									func_352("Cl3Gh6-LMkuZ7Z_jPqSE8g");
									break;
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									func_352("Pqz3l_Dhg0ar0yHiz2wMqQ");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									func_352("W-OJzHlM-0ym9PsIASYZtw");
									break;
							}
							break;
					}
					break;
			}
			break;
	}
}

void func_352(char* sParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xB318FDA0D1ABDB20(sParam0))
	{
		return;
	}
	iVar0 = unk_0x8DAF7A748E41AD46(sParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		if (unk_0x236D8AD7EE179F46(Global_2359718[iVar1 /*26*/].f_12, 11))
		{
			if (func_353(&(Global_2359718[iVar1 /*26*/].f_15)) == iVar0)
			{
				if (!unk_0x236D8AD7EE179F46(Global_2359718[iVar1 /*26*/].f_13, 26))
				{
					unk_0xF3148AAF69AF9CBC(&(Global_2359718[iVar1 /*26*/].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_353(var uParam0)
{
	struct<12> Var0;
	int iVar12;
	int iVar13;
	
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_11 = -1;
	iVar12 = 0;
	iVar13 = func_355(uParam0);
	if (iVar13 == -1)
	{
		return iVar12;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_354(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar12;
		
		default:
	}
	return iVar12;
}

struct<12> func_354(var uParam0)
{
	struct<12> Var0;
	int iVar12;
	
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_11 = -1;
	iVar12 = func_355(uParam0);
	if (iVar12 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794573.f_97271[iVar12 /*12*/];
		
		case 62:
			return Global_905334.f_18605[iVar12 /*12*/];
		
		default:
	}
	return Var0;
}

int func_355(var uParam0)
{
	int iVar0;
	
	if (unk_0xB318FDA0D1ABDB20(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_357(uParam0->f_1))
	{
		if (func_356(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (unk_0x236D8AD7EE179F46(Global_794573.f_4[uParam0->f_1 /*87*/].f_76, 13))
			{
				if (unk_0xD994929E13CC1ED5(&(Global_794573.f_4[uParam0->f_1 /*87*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0x236D8AD7EE179F46(Global_794573.f_4[uParam0->f_1 /*87*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1118)
			{
				if (unk_0x236D8AD7EE179F46(Global_794573.f_4[iVar0 /*87*/].f_76, 13))
				{
					if (unk_0xD994929E13CC1ED5(&(Global_794573.f_4[iVar0 /*87*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (unk_0x236D8AD7EE179F46(Global_905334.f_1204[uParam0->f_1 /*87*/].f_76, 13))
			{
				if (unk_0xD994929E13CC1ED5(&(Global_905334.f_1204[uParam0->f_1 /*87*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0x236D8AD7EE179F46(Global_905334.f_1204[uParam0->f_1 /*87*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 200)
			{
				if (unk_0x236D8AD7EE179F46(Global_905334.f_1204[iVar0 /*87*/].f_76, 13))
				{
					if (unk_0xD994929E13CC1ED5(&(Global_905334.f_1204[iVar0 /*87*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == unk_0x1329891157A54C63())
	{
		if (unk_0x236D8AD7EE179F46(Global_947780.f_5[uParam0->f_1 /*87*/].f_76, 13))
		{
			if (unk_0xD994929E13CC1ED5(&(Global_947780.f_5[uParam0->f_1 /*87*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (unk_0x236D8AD7EE179F46(Global_947780.f_5[uParam0->f_1 /*87*/].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (unk_0x236D8AD7EE179F46(Global_947780.f_5[iVar0 /*87*/].f_76, 13))
			{
				if (unk_0xD994929E13CC1ED5(&(Global_947780.f_5[iVar0 /*87*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}
	return -1;
}

int func_356(var uParam0)
{
	if (Global_2397665)
	{
		if (unk_0xD994929E13CC1ED5(&(Global_2397665.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_357(int iParam0)
{
	return iParam0 == 9999;
}

int func_358(int iParam0)
{
	return Local_94.f_6[iParam0 /*204*/].f_69;
}

int func_359()
{
	return Local_94.f_0;
}

int func_360(int iParam0)
{
	return Local_392[iParam0 /*5*/];
}

void func_361()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	
	iVar0 = -1;
	iVar1 = -1;
	if (!unk_0x236D8AD7EE179F46(Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_4, 0))
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			if (func_358(iVar2) > -1)
			{
				iVar3 = 0;
				while (iVar3 < 3)
				{
					func_379(iVar2, iVar3, func_380(iVar2, iVar3));
					func_377(iVar2, iVar3, func_378(iVar2, iVar3));
					func_375(iVar2, func_376(iVar2));
					func_373(iVar2, iVar3, func_374(iVar2, iVar3));
					unk_0xF3148AAF69AF9CBC(&(Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_4), 0);
					iVar3++;
				}
			}
			iVar2++;
		}
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (unk_0x1C7D9BFDF15A02B4())
		{
			if (func_372(iVar2) <= 1)
			{
				func_371(iVar2, 0);
			}
			else
			{
				func_371(iVar2, 1);
			}
		}
		if (func_8(iVar2) == -1)
		{
			if (!func_95(iVar2))
			{
				unk_0xF3148AAF69AF9CBC(&iLocal_553, 0);
			}
		}
		else if (!func_14(iVar2))
		{
			bVar5 = true;
			if (unk_0x1C7D9BFDF15A02B4())
			{
				func_371(iVar2, 0);
			}
		}
		else
		{
			iVar0 = func_8(iVar2);
			iVar1 = func_7(iVar2);
			if (!func_95(iVar2))
			{
				if (unk_0x1C7D9BFDF15A02B4())
				{
					if (iVar0 > -1)
					{
						if (!unk_0x236D8AD7EE179F46(iLocal_3308, iVar0))
						{
							unk_0xF3148AAF69AF9CBC(&iLocal_553, 0);
						}
						if (!unk_0x236D8AD7EE179F46(iLocal_3307, iVar0))
						{
							unk_0xF3148AAF69AF9CBC(&iLocal_553, 0);
						}
						if (unk_0x236D8AD7EE179F46(iLocal_3309, iVar0))
						{
							unk_0xF3148AAF69AF9CBC(&iLocal_553, 0);
						}
						if (!func_156(iVar0, iVar2))
						{
							unk_0xF3148AAF69AF9CBC(&iLocal_553, 0);
						}
					}
				}
			}
			else if (iVar0 > -1)
			{
				if (!unk_0x236D8AD7EE179F46(iLocal_3308, iVar0))
				{
					bVar5 = true;
				}
				if (!unk_0x236D8AD7EE179F46(iLocal_3307, iVar1))
				{
					bVar5 = true;
				}
				if (unk_0x236D8AD7EE179F46(iLocal_3309, iVar1))
				{
					bVar5 = true;
				}
				if (!func_156(iVar0, iVar2))
				{
					bVar5 = true;
				}
			}
		}
		if (bVar5)
		{
			if (unk_0x1C7D9BFDF15A02B4())
			{
				func_370(iVar2, -1);
				func_369(iVar2, -1);
			}
			func_368(iVar2, uVar4);
		}
		if (unk_0x236D8AD7EE179F46(iLocal_553, 0))
		{
			if (func_367(iVar2) > -1 && func_366(iVar2) > -1)
			{
				if (unk_0x1C7D9BFDF15A02B4())
				{
					func_370(iVar2, func_367(iVar2));
					func_369(iVar2, func_366(iVar2));
					func_368(iVar2, func_365(iVar2));
					if (!unk_0x236D8AD7EE179F46(Local_94.f_6[iVar2 /*204*/].f_203, func_367(iVar2)))
					{
						unk_0xF3148AAF69AF9CBC(&(Local_94.f_6[iVar2 /*204*/].f_203), func_367(iVar2));
					}
				}
			}
		}
		if (unk_0x1C7D9BFDF15A02B4())
		{
			func_362(iVar2);
		}
		iVar2++;
	}
}

void func_362(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	var uVar16;
	var uVar17;
	var uVar18;
	
	iVar0 = 31;
	while (iVar0 >= 0)
	{
		iVar1 = 31;
		while (iVar1 >= 0)
		{
			if ((iVar1 - 1) >= 0)
			{
				if (Local_94.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_3 > Local_94.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_3)
				{
					uVar16 = Local_94.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_3;
					uVar17 = Local_94.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/];
					uVar18 = Local_94.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_1;
					Local_94.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_3 = Local_94.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_3;
					Local_94.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/] = Local_94.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/];
					Local_94.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_1 = Local_94.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_1;
					Local_94.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_3 = uVar16;
					Local_94.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/] = uVar17;
					Local_94.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_1 = uVar18;
				}
				if ((iVar1 - 1) == 0 && Local_94.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_3 > 0f)
				{
					if (!Local_94.f_283 == Local_94.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/])
					{
						Local_94.f_283 = Local_94.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/];
						Var2.f_2 = 165;
						Var2.f_10 = unk_0x6528B1497E4313F1(Local_94.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_1);
						func_363(Var2, func_364(1));
					}
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_363(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0x1329891157A54C63();
	if (!iParam14 == 0)
	{
		unk_0x8DAD64B00B88FC2D(1, &Param0, 14, iParam14);
	}
}

int func_364(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x945535897333587B())
	{
		if (unk_0xC4FEBC724D547D78(unk_0xC3904F8771F37B7F(iVar1)))
		{
			iVar2 = unk_0x29A638E7EEEE6B16(unk_0xC3904F8771F37B7F(iVar1));
			if (func_571(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x1329891157A54C63() || iParam0)
				{
					unk_0xF3148AAF69AF9CBC(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

var func_365(int iParam0)
{
	return Local_1239[iParam0 /*68*/].f_31;
}

int func_366(int iParam0)
{
	return Local_1239[iParam0 /*68*/].f_35;
}

int func_367(int iParam0)
{
	return Local_1239[iParam0 /*68*/].f_34;
}

void func_368(int iParam0, var uParam1)
{
	Local_1239[iParam0 /*68*/].f_30 = uParam1;
}

void func_369(int iParam0, int iParam1)
{
	Local_94.f_6[iParam0 /*204*/].f_2 = iParam1;
}

void func_370(int iParam0, int iParam1)
{
	if (iParam1 != func_8(iParam0))
	{
	}
	Local_94.f_6[iParam0 /*204*/].f_1 = iParam1;
}

void func_371(int iParam0, int iParam1)
{
	Local_94.f_6[iParam0 /*204*/].f_72 = iParam1;
}

int func_372(int iParam0)
{
	return Local_1239[iParam0 /*68*/].f_37;
}

void func_373(int iParam0, int iParam1, var uParam2)
{
	Local_1239[iParam0 /*68*/].f_20[iParam1] = uParam2;
}

float func_374(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (func_358(iParam0))
			{
				case 0:
					return 23f;
				
				case 2:
					return 6f;
				
				case 4:
					return 7f;
				
				case 1:
					return 8.25f;
				
				case 3:
					return 16.5f;
				
				case 5:
					return 9.65f;
				
				case 6:
					return 9.15f;
				
				case 7:
					return 0f;
				
				default:
			}
			break;
		
		case 1:
			switch (func_358(iParam0))
			{
				case 0:
					return 23f;
				
				case 2:
					return 0f;
				
				case 4:
					return 0f;
				
				case 1:
					return 3.5f;
				
				case 3:
					return 0f;
				
				case 5:
					return 0f;
				
				case 6:
					return 0f;
				
				case 7:
					return 0f;
				
				default:
			}
			break;
		
		case 2:
			switch (func_358(iParam0))
			{
				case 0:
					return 23f;
				
				case 2:
					return 0f;
				
				case 4:
					return 0f;
				
				case 1:
					return 0f;
				
				case 3:
					return 0f;
				
				case 5:
					return 0f;
				
				case 6:
					return 0f;
				
				case 7:
					return 0f;
				
				default:
			}
			break;
	}
	return 0f;
}

void func_375(int iParam0, struct<3> Param1)
{
	Local_1239[iParam0 /*68*/].f_24 = { Param1 };
}

Vector3 func_376(int iParam0)
{
	switch (func_358(iParam0))
	{
		case 0:
			return -1195.435f, -1788.217f, 14.6269f;
		
		case 2:
			return -379.8141f, 6087.215f, 43.2552f;
		
		case 4:
			return 2516.59f, 3784.677f, 52.0053f;
		
		case 1:
			return 1667.193f, -27.4697f, 183.774f;
		
		case 3:
			return -746.2f, 5594.6f, 41.7f;
		
		case 5:
			return -389.3f, 1135.7f, 322.6f;
		
		case 6:
			return 473.6f, -1339.1f, 35.2f;
		
		case 7:
			return -1459.651f, 179.275f, 53f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_377(int iParam0, int iParam1, struct<3> Param2)
{
	Local_1239[iParam0 /*68*/].f_10[iParam1 /*3*/] = { Param2 };
}

Vector3 func_378(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (func_358(iParam0))
			{
				case 0:
					return -1178.575f, -1795.219f, 22.42828f;
				
				case 2:
					return -377.4193f, 6083.058f, 46.63536f;
				
				case 4:
					return 2518.118f, 3772.498f, 58.13546f;
				
				case 1:
					return 1673.975f, -24.62664f, 199.2563f;
				
				case 3:
					return -756.4877f, 5594.868f, 44.17008f;
				
				case 5:
					return -391.5381f, 1125.141f, 325.0288f;
				
				case 6:
					return 470.2388f, -1335.768f, 38.44154f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
		
		case 1:
			switch (func_358(iParam0))
			{
				case 0:
					return -1180.375f, -1777.348f, 22.48125f;
				
				case 2:
					return 0f, 0f, 0f;
				
				case 4:
					return 0f, 0f, 0f;
				
				case 1:
					return 1676.203f, -25.81484f, 200.1802f;
				
				case 3:
					return 0f, 0f, 0f;
				
				case 5:
					return 0f, 0f, 0f;
				
				case 6:
					return 0f, 0f, 0f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
		
		case 2:
			switch (func_358(iParam0))
			{
				case 0:
					return -1194.205f, -1806.82f, 22.48f;
				
				case 2:
					return 0f, 0f, 0f;
				
				case 4:
					return 0f, 0f, 0f;
				
				case 1:
					return 0f, 0f, 0f;
				
				case 3:
					return 0f, 0f, 0f;
				
				case 5:
					return 0f, 0f, 0f;
				
				case 6:
					return 0f, 0f, 0f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_379(int iParam0, int iParam1, struct<3> Param2)
{
	Local_1239[iParam0 /*68*/][iParam1 /*3*/] = { Param2 };
}

Vector3 func_380(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (func_358(iParam0))
			{
				case 0:
					return -1212.381f, -1780.108f, 7.481341f;
				
				case 2:
					return -381.2328f, 6089.681f, 34.37778f;
				
				case 4:
					return 2516.82f, 3795.646f, 49.82948f;
				
				case 1:
					return 1660.532f, -27.94882f, 181.587f;
				
				case 3:
					return -736.0183f, 5595.02f, 40.53122f;
				
				case 5:
					return -386.508f, 1144.122f, 321.5792f;
				
				case 6:
					return 479.0627f, -1343.186f, 34.14154f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
		
		case 1:
			switch (func_358(iParam0))
			{
				case 0:
					return -1209.83f, -1798.181f, 7.481341f;
				
				case 2:
					return 0f, 0f, 0f;
				
				case 4:
					return 0f, 0f, 0f;
				
				case 1:
					return 1669.613f, -27.26755f, 182.2874f;
				
				case 3:
					return 0f, 0f, 0f;
				
				case 5:
					return 0f, 0f, 0f;
				
				case 6:
					return 0f, 0f, 0f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
		
		case 2:
			switch (func_358(iParam0))
			{
				case 0:
					return -1197.333f, -1769.584f, 7.474364f;
				
				case 2:
					return 0f, 0f, 0f;
				
				case 4:
					return 0f, 0f, 0f;
				
				case 1:
					return 0f, 0f, 0f;
				
				case 3:
					return 0f, 0f, 0f;
				
				case 5:
					return 0f, 0f, 0f;
				
				case 6:
					return 0f, 0f, 0f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_381()
{
	func_383();
	iLocal_3306++;
	func_382();
}

void func_382()
{
	if (iLocal_3306 >= (unk_0x945535897333587B() - 1))
	{
		iLocal_3306 = 0;
	}
}

void func_383()
{
	if (iLocal_3306 == 0)
	{
	}
}

void func_384()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<16> Var4;
	struct<3> Var20;
	float fVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	bool bVar29;
	bool bVar30;
	float fVar31;
	float fVar32;
	struct<3> Var33;
	float fVar36;
	float fVar37;
	float fVar38;
	float fVar39;
	
	iVar0 = -1;
	iVar1 = -1;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		Local_1135[iVar1 /*3*/] = func_44();
		Local_1135[iVar1 /*3*/].f_1 = -1;
		Local_1135[iVar1 /*3*/].f_2 = uVar3;
		unk_0xC69E84EBBD7166E6(&iLocal_3307, iVar1);
		unk_0xC69E84EBBD7166E6(&iLocal_3309, iVar1);
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_558[iVar0 /*18*/] = func_410();
		Local_558[iVar0 /*18*/].f_1 = -1;
		unk_0xC69E84EBBD7166E6(&iLocal_3308, iVar0);
		if (unk_0x1C7D9BFDF15A02B4())
		{
			iVar24 = 0;
			while (iVar24 < 1)
			{
				unk_0xC69E84EBBD7166E6(&(Local_94.f_6[iVar24 /*204*/].f_73), iVar0);
				iVar24++;
			}
		}
		Local_558[iVar0 /*18*/].f_2 = { Var4 };
		iVar0++;
	}
	iVar24 = 0;
	while (iVar24 < 1)
	{
		func_409(iVar24, 0);
		func_408(iVar24, 0);
		func_407(iVar24, 0f);
		func_406(iVar24, 0f);
		func_405(iVar24, 0f);
		iVar27 = 0;
		while (iVar27 < 3)
		{
			func_404(iVar24, iVar27, 0f);
			func_403(iVar24, iVar27, 0f);
			func_402(iVar24, iVar27, 0f);
			iVar27++;
		}
		iVar24++;
	}
	bVar29 = true;
	bVar30 = true;
	iVar0 = 0;
	while (iVar0 < unk_0x945535897333587B())
	{
		if (unk_0xC4FEBC724D547D78(iVar0))
		{
			Local_558[iVar0 /*18*/] = iVar0;
			unk_0xF3148AAF69AF9CBC(&iLocal_3308, iVar0);
			iVar2 = unk_0x29A638E7EEEE6B16(Local_558[iVar0 /*18*/]);
			iVar1 = iVar2;
			if (func_571(iVar2, 0, 1))
			{
				Local_1135[iVar1 /*3*/] = iVar2;
				Local_558[iVar0 /*18*/].f_1 = iVar1;
				Local_1135[iVar1 /*3*/].f_1 = iVar0;
				Local_1135[iVar1 /*3*/].f_2 = unk_0xE495E987CB2BE7EF(iVar2);
				StringCopy(&(Local_558[iVar0 /*18*/].f_2), unk_0xB67DF8F35744CF60(iVar2), 64);
				iVar26++;
				if (func_330(iVar0))
				{
					iVar28++;
				}
				unk_0xF3148AAF69AF9CBC(&iLocal_3307, iVar1);
				if ((unk_0x930F8FBB8E9537CC(Local_1135[iVar1 /*3*/].f_2) || unk_0x5FEB513A4402FD59(Local_1135[iVar1 /*3*/].f_2)) || !unk_0x7DF7DE8C76D7F346(Local_1135[iVar1 /*3*/]))
				{
					unk_0xF3148AAF69AF9CBC(&iLocal_3309, iVar1);
				}
				if (unk_0x1C7D9BFDF15A02B4())
				{
					if (!unk_0x236D8AD7EE179F46(Local_392[iVar0 /*5*/].f_4, 0))
					{
						bVar29 = false;
					}
					if (!unk_0x236D8AD7EE179F46(Local_392[iVar0 /*5*/].f_4, 1))
					{
						bVar30 = false;
					}
				}
				func_400(iVar1, 2);
				if (func_159(iVar1))
				{
					if (unk_0x1C7D9BFDF15A02B4())
					{
						func_398(iVar0);
					}
				}
				if (func_77(iVar1))
				{
					if (unk_0x1C7D9BFDF15A02B4())
					{
						func_398(iVar0);
					}
				}
				if (func_158(iVar1))
				{
					if (unk_0x1C7D9BFDF15A02B4())
					{
						func_398(iVar0);
					}
				}
			}
		}
		else
		{
			unk_0xC69E84EBBD7166E6(&iLocal_3308, iVar0);
			if (func_491() <= 1)
			{
				if (unk_0x1C7D9BFDF15A02B4())
				{
					func_398(iVar0);
				}
			}
		}
		iVar24 = 0;
		while (iVar24 < 1)
		{
			if (!unk_0x236D8AD7EE179F46(Local_94.f_213, 1))
			{
				if (unk_0x1C7D9BFDF15A02B4())
				{
					func_397(iVar0, iVar24);
				}
			}
			if (unk_0x236D8AD7EE179F46(iLocal_3308, iVar0))
			{
				if (unk_0x236D8AD7EE179F46(iLocal_3307, iVar1))
				{
					if (!unk_0x236D8AD7EE179F46(Local_94.f_213, 1))
					{
						if (unk_0x1C7D9BFDF15A02B4())
						{
							func_396(iVar0, iVar1, iVar24, func_89(iVar24, iVar0));
						}
					}
					if (!unk_0x236D8AD7EE179F46(iLocal_3309, iVar1))
					{
						if (iVar0 == unk_0x519AAFF77CC141DF())
						{
							fVar31 = func_395(Local_1135[iVar1 /*3*/].f_2, func_234(iVar24), 0);
							fVar32 = func_395(Local_1135[iVar1 /*3*/].f_2, func_234(iVar24), 1);
							Var33 = { unk_0xB6AE0DAE06D56288(Local_1135[iVar1 /*3*/].f_2, 1) };
							fVar36 = (Local_1239[iVar24 /*68*/].f_24.f_2 - Var33.f_2);
							func_407(iVar24, fVar31);
							func_406(iVar24, fVar36);
							func_405(iVar24, fVar32);
							iVar27 = 0;
							while (iVar27 < 3)
							{
								Var20 = { 0f, 0f, 0f };
								fVar23 = 0f;
								func_346(iVar24, iVar27, &Var20, &fVar23);
								if (!func_345(Var20))
								{
									fVar37 = func_395(Local_1135[iVar1 /*3*/].f_2, Var20, 0);
									fVar38 = func_395(Local_1135[iVar1 /*3*/].f_2, Var20, 1);
									fVar39 = (Var20.f_2 - Var33.f_2);
									func_404(iVar24, iVar27, fVar37);
									func_403(iVar24, iVar27, fVar39);
									func_402(iVar24, iVar27, fVar38);
								}
								iVar27++;
							}
						}
						if (func_156(iVar0, iVar24))
						{
							func_409(iVar24, 1);
							iVar25 = func_372(iVar24);
							iVar25++;
							func_408(iVar24, iVar25);
							if (func_8(iVar24) != iVar0 && func_7(iVar24) != iVar1)
							{
								if (func_367(iVar24) == -1)
								{
									func_460(iVar24, iVar0);
								}
								if (func_366(iVar24) == -1)
								{
									func_459(iVar24, iVar1);
								}
								func_458(iVar24, Local_1135[iVar1 /*3*/].f_2);
							}
							if (unk_0x1C7D9BFDF15A02B4())
							{
								unk_0xF3148AAF69AF9CBC(&(Local_94.f_6[iVar24 /*204*/].f_73), iVar0);
							}
						}
					}
					if (iVar0 == unk_0x519AAFF77CC141DF())
					{
						if (!unk_0x236D8AD7EE179F46(iLocal_3309, iVar1))
						{
							if (func_139(iVar24) <= IntToFloat(Global_262145.f_9259))
							{
								if (!unk_0x236D8AD7EE179F46(Local_392[iVar0 /*5*/].f_4, 12))
								{
									unk_0xF3148AAF69AF9CBC(&(Local_392[iVar0 /*5*/].f_4), 12);
								}
							}
							else if (func_139(iVar24) >= IntToFloat(Global_262145.f_9260))
							{
								if (unk_0x236D8AD7EE179F46(Local_392[iVar0 /*5*/].f_4, 12))
								{
									unk_0xC69E84EBBD7166E6(&(Local_392[iVar0 /*5*/].f_4), 12);
								}
							}
							if (!func_157(1, 0))
							{
								if (func_139(iVar24) <= IntToFloat(Global_262145.f_9259))
								{
									if (!unk_0x236D8AD7EE179F46(Local_392[iVar0 /*5*/].f_4, 3))
									{
										unk_0xF3148AAF69AF9CBC(&(Local_392[iVar0 /*5*/].f_4), 3);
									}
								}
								else if (func_139(iVar24) >= IntToFloat(Global_262145.f_9260))
								{
									if (unk_0x236D8AD7EE179F46(Local_392[iVar0 /*5*/].f_4, 3))
									{
										unk_0xC69E84EBBD7166E6(&(Local_392[iVar0 /*5*/].f_4), 3);
									}
								}
							}
							else if (unk_0x236D8AD7EE179F46(Local_392[iVar0 /*5*/].f_4, 3))
							{
								unk_0xC69E84EBBD7166E6(&(Local_392[iVar0 /*5*/].f_4), 3);
							}
						}
					}
				}
				if (!unk_0x236D8AD7EE179F46(iLocal_3309, iVar1))
				{
					if (func_201(0, 0))
					{
						func_394(iVar1);
					}
					else if (func_7(iVar24) != iVar1)
					{
						func_394(iVar1);
					}
					else if (func_491() != 1)
					{
						func_394(iVar1);
					}
					else
					{
						func_390(iVar1);
						if (iVar0 != unk_0x519AAFF77CC141DF())
						{
							if (func_107(unk_0x519AAFF77CC141DF()))
							{
								unk_0x498AE7B74C5BC192(2, unk_0xB6AE0DAE06D56288(Local_1135[iVar1 /*3*/].f_2, 1) + Vector(1.5f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, 255, 0, 0, 100, 1, 1, 2, 0, 0, 0, 0);
							}
						}
					}
				}
				func_385(iVar1, func_337(6), func_386(iVar0, iVar1, iVar24));
			}
			iVar24++;
		}
		iVar0++;
	}
	if (unk_0x1C7D9BFDF15A02B4())
	{
		if (bVar29)
		{
			unk_0xF3148AAF69AF9CBC(&(Local_94.f_213), 0);
		}
		else
		{
			unk_0xC69E84EBBD7166E6(&(Local_94.f_213), 0);
		}
		if (bVar30)
		{
			unk_0xF3148AAF69AF9CBC(&(Local_94.f_213), 1);
		}
		else
		{
			unk_0xC69E84EBBD7166E6(&(Local_94.f_213), 1);
		}
	}
	if (iVar28 > iLocal_555)
	{
		iLocal_555 = iVar28;
	}
	if (iVar26 > iLocal_3310)
	{
		iLocal_3310 = iVar26;
	}
	else
	{
		Local_94.f_216 = (iLocal_3310 - iVar26);
	}
}

void func_385(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x8DAF7A748E41AD46(unk_0x11CA2334E341B424()) == func_128())
	{
		return;
	}
	iVar0 = iParam0;
	if (bParam2)
	{
		if (!unk_0x64AD45A6264810A8(Global_2410756.f_527) || Global_2410756.f_527 == unk_0x8F56512BDA9F6921())
		{
			unk_0xF3148AAF69AF9CBC(&(Global_2410756.f_386), iVar0);
			Global_2410756.f_527 = unk_0x8F56512BDA9F6921();
			Global_2410756.f_427[iVar0] = uParam1;
		}
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_2410756.f_386), iVar0);
		if (Global_2410756.f_386 == 0)
		{
			Global_2410756.f_527 = -1;
		}
	}
}

int func_386(int iParam0, int iParam1, int iParam2)
{
	if (func_201(0, 0))
	{
		return 0;
	}
	if (iParam0 == unk_0x519AAFF77CC141DF())
	{
		return 0;
	}
	if (func_387(iParam1))
	{
		return 0;
	}
	if (iParam0 == func_8(iParam2))
	{
		return 1;
	}
	if (unk_0x519AAFF77CC141DF() != func_8(iParam2))
	{
		return 0;
	}
	return 1;
}

bool func_387(int iParam0)
{
	if (iParam0 == unk_0x1329891157A54C63())
	{
		return func_80();
	}
	return unk_0x236D8AD7EE179F46(Global_1334766.f_241.f_136[func_389(10) /*33*/][iParam0], func_388(10));
}

int func_388(int iParam0)
{
	return (iParam0 % 32);
}

int func_389(int iParam0)
{
	return (iParam0 / 32);
}

void func_390(int iParam0)
{
	if (iParam0 > -1)
	{
		if (unk_0x236D8AD7EE179F46(iLocal_3307, iParam0))
		{
			if (!unk_0x236D8AD7EE179F46(iLocal_3309, iParam0))
			{
				func_393(iParam0, 439, 1);
				func_385(iParam0, func_337(6), 1);
				func_391(iParam0, 1, 1);
			}
		}
	}
}

void func_391(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_571(iParam0, 1, 1))
		{
			Global_2410756.f_623 = unk_0x8F56512BDA9F6921();
			unk_0xF3148AAF69AF9CBC(&(Global_2410756.f_364), iParam0);
			func_392(iParam0, bParam2);
		}
	}
	else
	{
		func_392(iParam0, bParam2);
		unk_0xC69E84EBBD7166E6(&(Global_2410756.f_364), iParam0);
		if (Global_2410756.f_364 == 0)
		{
			Global_2410756.f_623 = -1;
		}
	}
}

void func_392(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_2410756.f_365), iParam0);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_2410756.f_365), iParam0);
	}
	if (unk_0xFBACB273AA628CC5(Global_2410756[iParam0]))
	{
		if (bParam1)
		{
			unk_0x6FA15F9609E21DA5(Global_2410756[iParam0], 0);
		}
		else
		{
			unk_0x6FA15F9609E21DA5(Global_2410756[iParam0], 1);
		}
	}
}

void func_393(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	
	if (unk_0x8DAF7A748E41AD46(unk_0x11CA2334E341B424()) == func_128())
	{
		return;
	}
	iVar0 = iParam0;
	uVar1 = iParam1;
	if (bParam2)
	{
		if (!unk_0x64AD45A6264810A8(Global_2410756.f_526) || Global_2410756.f_526 == unk_0x8F56512BDA9F6921())
		{
			unk_0xF3148AAF69AF9CBC(&(Global_2410756.f_385), iVar0);
			Global_2410756.f_394[iVar0] = uVar1;
			Global_2410756.f_526 = unk_0x8F56512BDA9F6921();
		}
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_2410756.f_385), iVar0);
		if (Global_2410756.f_385 == 0)
		{
			Global_2410756.f_526 = -1;
		}
	}
}

void func_394(int iParam0)
{
	if (iParam0 > -1)
	{
		if (unk_0x236D8AD7EE179F46(iLocal_3307, iParam0))
		{
			if (!unk_0x236D8AD7EE179F46(iLocal_3309, iParam0))
			{
				func_393(iParam0, 439, 0);
				func_385(iParam0, func_337(6), 0);
				func_391(iParam0, 0, 0);
			}
		}
	}
}

var func_395(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x930F8FBB8E9537CC(iParam0))
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 0) };
	}
	return unk_0x0D6E79537424BACE(Var0, Param1, iParam4);
}

void func_396(int iParam0, int iParam1, int iParam2, float fParam3)
{
	Local_94.f_6[iParam2 /*204*/].f_74[iParam0 /*4*/] = iParam0;
	Local_94.f_6[iParam2 /*204*/].f_74[iParam0 /*4*/].f_1 = iParam1;
	Local_94.f_6[iParam2 /*204*/].f_74[iParam0 /*4*/].f_2 = iParam1;
	Local_94.f_6[iParam2 /*204*/].f_74[iParam0 /*4*/].f_3 = fParam3;
}

void func_397(int iParam0, int iParam1)
{
	Local_94.f_6[iParam1 /*204*/].f_74[iParam0 /*4*/] = -1;
	Local_94.f_6[iParam1 /*204*/].f_74[iParam0 /*4*/].f_1 = -1;
	Local_94.f_6[iParam1 /*204*/].f_74[iParam0 /*4*/].f_2 = func_44();
	Local_94.f_6[iParam1 /*204*/].f_74[iParam0 /*4*/].f_3 = -1f;
}

void func_398(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_6(iVar0, iParam0) > 0f || func_90(iVar0, iParam0) > 0f)
		{
			func_4(iVar0, iParam0, 0f);
			func_399(iVar0, iParam0, 0f);
		}
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (Local_94.f_217[iVar1] > 0f)
			{
				if (Local_94.f_250[iVar1] == iParam0)
				{
					Local_94.f_217[iVar1] = 0f;
					Local_94.f_250[iVar1] = -1;
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_399(int iParam0, int iParam1, float fParam2)
{
	Local_94.f_6[iParam0 /*204*/].f_36[iParam1] = fParam2;
}

void func_400(int iParam0, int iParam1)
{
	if (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 0))
	{
		return;
	}
	if (func_18(&(Global_1573867.f_18)))
	{
		return;
	}
	if (unk_0x236D8AD7EE179F46(Global_1573867.f_2, iParam0))
	{
		if (Global_1573867 < iParam1 && unk_0x236D8AD7EE179F46(Global_1573867.f_1, 1))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 0);
			return;
		}
		if (Global_1573867 != 0)
		{
			unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 1);
		}
		Global_1573867 = 0;
		Global_1573867.f_2 = 0;
	}
	unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_2), iParam0);
	if (((!func_133(iParam0) && !func_401(iParam0)) && !func_29(iParam0, 0)) && !func_159(iParam0))
	{
		Global_1573867++;
	}
}

bool func_401(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_1606167[iParam0 /*12*/].f_1, 10);
}

void func_402(int iParam0, int iParam1, float fParam2)
{
	Local_1239[iParam0 /*68*/].f_49[iParam1] = fParam2;
}

void func_403(int iParam0, int iParam1, float fParam2)
{
	Local_1239[iParam0 /*68*/].f_45[iParam1] = fParam2;
}

void func_404(int iParam0, int iParam1, float fParam2)
{
	Local_1239[iParam0 /*68*/].f_41[iParam1] = fParam2;
}

void func_405(int iParam0, float fParam1)
{
	Local_1239[iParam0 /*68*/].f_40 = fParam1;
}

void func_406(int iParam0, float fParam1)
{
	Local_1239[iParam0 /*68*/].f_39 = fParam1;
}

void func_407(int iParam0, float fParam1)
{
	Local_1239[iParam0 /*68*/].f_38 = fParam1;
}

void func_408(int iParam0, int iParam1)
{
	Local_1239[iParam0 /*68*/].f_37 = iParam1;
}

void func_409(int iParam0, int iParam1)
{
	Local_1239[iParam0 /*68*/].f_36 = iParam1;
}

int func_410()
{
	return -1;
}

void func_411()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x8D411F45C0269899(1))
	{
		iVar1 = unk_0xE22864B8883341B7(1, iVar0);
		if (iVar1 == 179)
		{
			func_412(iVar0);
		}
		if (iVar1 == 152)
		{
		}
		iVar0++;
	}
}

void func_412(int iParam0)
{
	var uVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<4> Var11;
	float fVar21;
	struct<14> Var22;
	
	iVar6 = -1;
	iVar7 = -1;
	iVar8 = -1;
	unk_0xDC8C46445C29336D(1, iParam0, &Var11, 10);
	if (unk_0x86CCCD2FAE9D5E65(Var11.f_0))
	{
		if (unk_0xCF0C46D719D5302C(Var11.f_0))
		{
			uVar0 = unk_0x8F1CCE5AF629C4D3(Var11.f_0);
			if (unk_0x0452D5BF20AD945A(uVar0))
			{
				uVar2 = unk_0x1B503E81E3B3D65F(uVar0);
				if (unk_0x92016690A1675C2F(uVar2))
				{
					iVar4 = unk_0x563980A76107BC80(iVar2);
					if (unk_0xC4FEBC724D547D78(iVar4))
					{
						iVar7 = iVar4;
					}
				}
				if (iVar7 != -1)
				{
					if (unk_0x86CCCD2FAE9D5E65(Var11.f_1))
					{
						if (unk_0xCF0C46D719D5302C(Var11.f_1))
						{
							iVar1 = unk_0x8F1CCE5AF629C4D3(Var11.f_1);
							if (unk_0x0452D5BF20AD945A(iVar1))
							{
								iVar3 = unk_0x1B503E81E3B3D65F(iVar1);
								iVar8 = iVar3;
								if (unk_0x92016690A1675C2F(iVar3))
								{
									iVar5 = unk_0x563980A76107BC80(iVar3);
									if (unk_0xC4FEBC724D547D78(iVar5))
									{
										iVar6 = iVar5;
									}
									if (iVar6 != -1)
									{
										if (iVar6 != iVar7)
										{
											iVar9 = 0;
											while (iVar9 < 1)
											{
												if (iVar6 == func_8(iVar9))
												{
													if (!func_157(1, 0))
													{
														if (iVar7 == unk_0x519AAFF77CC141DF())
														{
															if (!unk_0x236D8AD7EE179F46(Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_4, 7))
															{
																unk_0xF3148AAF69AF9CBC(&(Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_4), 7);
															}
														}
													}
													if (Var11.f_3)
													{
														if (iVar6 == unk_0x519AAFF77CC141DF())
														{
															if (iLocal_3313 < func_457())
															{
																iLocal_3313++;
																func_416(0, iVar1, "", -1859646258, 2131309714, func_456(), 1, -1, 0, 0);
																Local_378.f_7 = (Local_378.f_7 + func_456());
															}
															else
															{
																iLocal_3313++;
															}
														}
														if (unk_0x1C7D9BFDF15A02B4())
														{
															fVar21 = func_90(iVar9, iVar6);
															fVar21 = (fVar21 + IntToFloat(Global_262145.f_8962));
															func_399(iVar9, iVar6, fVar21);
														}
													}
												}
												else if (iVar7 == func_8(iVar9))
												{
													if (iVar6 == unk_0x519AAFF77CC141DF())
													{
														if (!func_157(1, 0))
														{
															if (!unk_0x236D8AD7EE179F46(Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_4, 6))
															{
																unk_0xF3148AAF69AF9CBC(&(Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_4), 6);
															}
															if (!unk_0x236D8AD7EE179F46(Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_4, 2))
															{
																unk_0xF3148AAF69AF9CBC(&(Local_392[unk_0x519AAFF77CC141DF() /*5*/].f_4), 2);
																func_144(1);
															}
														}
														if (Var11.f_3)
														{
															if (iLocal_3311 < func_415())
															{
																iLocal_3311++;
																func_416(0, iVar1, "", -1859646258, 2131309714, func_414(), 1, -1, 0, 0);
																Local_378.f_7 = (Local_378.f_7 + func_414());
															}
															else
															{
																iLocal_3311++;
															}
														}
													}
													if (iVar7 == unk_0x519AAFF77CC141DF())
													{
														iLocal_3312++;
													}
													if (func_156(iVar6, iVar9))
													{
														if (Var11.f_3)
														{
															if (unk_0x1C7D9BFDF15A02B4())
															{
																if (func_367(iVar9) == -1)
																{
																	func_460(iVar9, iVar6);
																}
																if (func_366(iVar9) == -1)
																{
																	func_459(iVar9, iVar8);
																}
																unk_0xF3148AAF69AF9CBC(&iLocal_553, 0);
															}
														}
													}
													else if (Var11.f_3)
													{
														if (unk_0x1C7D9BFDF15A02B4())
														{
															Var22.f_2 = 174;
															Var22.f_10 = iVar3;
															iVar10 = 0;
															while (iVar10 < 32)
															{
																if (unk_0x236D8AD7EE179F46(iLocal_3308, iVar10))
																{
																	if (unk_0x236D8AD7EE179F46(iLocal_3307, Local_558[iVar10 /*18*/].f_1))
																	{
																		if (!unk_0x236D8AD7EE179F46(Local_392[iVar10 /*5*/].f_4, 9) && !unk_0x236D8AD7EE179F46(Local_392[iVar10 /*5*/].f_4, 10))
																		{
																			if (func_107(iVar10))
																			{
																				func_363(Var22, func_413(Local_558[iVar10 /*18*/].f_1));
																			}
																		}
																	}
																}
																iVar10++;
															}
														}
													}
												}
												iVar9++;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_413(int iParam0)
{
	var uVar0;
	
	unk_0xF3148AAF69AF9CBC(&uVar0, iParam0);
	return uVar0;
}

int func_414()
{
	return Global_262145.f_8767;
}

int func_415()
{
	return Global_262145.f_8769;
}

int func_416(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)
{
	return func_417(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9);
}

int func_417(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_427(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x86CCCD2FAE9D5E65(iParam1))
		{
			if (unk_0xCF0C46D719D5302C(iParam1))
			{
				uVar1 = unk_0x8F1CCE5AF629C4D3(iParam1);
				func_423(unk_0xC91EFAB304EB7DE6(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8);
			}
		}
	}
	else
	{
		func_418(iParam1, iVar0, sParam8);
	}
	return iVar0;
}

void func_418(int iParam0, int iParam1, char* sParam2)
{
	struct<3> Var0;
	
	Var0 = { func_421(iParam0, 1) };
	if (iParam0 == func_420(unk_0x81873881071CD9FE()))
	{
		func_419(1);
	}
	func_423(Var0, iParam1, 0, sParam2);
}

void func_419(int iParam0)
{
	Global_2422670.f_1321 = iParam0;
}

int func_420(var uParam0)
{
	return uParam0;
}

Vector3 func_421(int iParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	float fVar10;
	
	if (iParam0 == func_422(unk_0x81873881071CD9FE()) && unk_0x7FCE6803A3D23268(unk_0x60FC347BF9CAD1BD()) == 4)
	{
		Var0 = { unk_0xB07F27EC3B05E4EA(iParam0, 0f, 2f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 0) };
	}
	fVar3 = 0f;
	if (!unk_0x930F8FBB8E9537CC(iParam0))
	{
		fVar3 = unk_0x3306AAAFE3B25098(iParam0);
	}
	unk_0x01C5E7A27762AF21(unk_0x14B7103DBD149FFE(iParam0), &Var4, &Var7);
	if (bParam1)
	{
		fVar10 = (Var7.f_2 + 0.18f);
	}
	else
	{
		fVar10 = (Var4.f_2 + 0.18f);
	}
	Var0 = { unk_0x957F1AE07A974C5E(Var0, fVar3, 0f, 0f, fVar10) };
	return Var0;
}

int func_422(var uParam0)
{
	return uParam0;
}

void func_423(struct<3> Param0, int iParam3, int iParam4, char* sParam5)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2422670.f_740[iVar0 /*29*/].f_6 == 0 || Global_2422670.f_740[iVar0 /*29*/].f_6 == 6)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2422670.f_740[iVar1 /*29*/] = { Param0 };
			Global_2422670.f_740[iVar1 /*29*/].f_6 = 1;
			Global_2422670.f_740[iVar1 /*29*/].f_4 = func_426(Global_2422670.f_740[iVar1 /*29*/], &Global_1312317, &Global_1312318);
			Global_2422670.f_740[iVar1 /*29*/].f_7 = unk_0xD74C7D8D2E5E43D2();
			Global_2422670.f_740[iVar1 /*29*/].f_3 = iParam3;
			Global_2422670.f_740[iVar1 /*29*/].f_8 = iParam4;
			Global_2422670.f_740[iVar1 /*29*/].f_9 = func_425();
			Global_2422670.f_740[iVar1 /*29*/].f_10 = func_424();
			StringCopy(&(Global_2422670.f_740[iVar1 /*29*/].f_22), sParam5, 16);
		}
	}
}

int func_424()
{
	if (Global_2422670.f_1321)
	{
		Global_2422670.f_1321 = 0;
		return 1;
	}
	Global_2422670.f_1321 = 0;
	return 0;
}

var func_425()
{
	var uVar0;
	
	uVar0 = Global_2422670.f_1323;
	Global_2422670.f_1323 = 1;
	return uVar0;
}

float func_426(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x0D6E79537424BACE(unk_0xF37444D33840484C(), Param0, 1);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

var func_427(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_428(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_428(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_455(unk_0x1329891157A54C63()) || func_454(unk_0x1329891157A54C63()))
	{
		if (Global_262145.f_7419 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_7419;
		}
	}
	else if (Global_262145.f_5001 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5001;
	}
	if (func_76(uParam2))
	{
	}
	if (func_453())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_451(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_450(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_447(0, &iVar1);
					break;
				
				case 3:
					func_447(1, &iVar1);
					break;
				
				case 1:
					func_443(&iVar1);
					break;
				}
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_167(1154, iVar1, -1);
			if (iParam1 == 0)
			{
				func_435((func_442(unk_0x1329891157A54C63()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xF1B1DC822A238E16(iVar1, iParam8, iParam9);
				if (Global_1585045[unk_0x1329891157A54C63() /*400*/].f_39.f_2 != -1)
				{
					func_167(1155, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_431(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_429((func_430(unk_0x1329891157A54C63()) + iVar1));
			}
			else
			{
				func_429((func_430(unk_0x1329891157A54C63()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_429(int iParam0)
{
	if (func_453())
	{
		Global_1585045[unk_0x1329891157A54C63() /*400*/].f_192.f_5 = iParam0;
		func_173(joaat("mpply_globalxp"), iParam0);
	}
}

int func_430(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_571(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x1329891157A54C63())
			{
				return func_175(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1585045[iParam0 /*400*/].f_192.f_5;
			}
		}
		else
		{
			return func_175(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

void func_431(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_34(unk_0x1329891157A54C63()) };
	if (unk_0x80622F5ED5957337())
	{
		if (unk_0x464883E45616A088(&Var0))
		{
			iVar13 = func_433(func_434(&Var0));
			if (iVar13 == 0)
			{
				func_432(&Global_1343557, iParam0);
				func_172(joaat("mpply_crew_local_xp_0"), Global_1343557);
			}
			else if (iVar13 == 1)
			{
				func_432(&Global_1343558, iParam0);
				func_172(joaat("mpply_crew_local_xp_1"), Global_1343558);
			}
			else if (iVar13 == 2)
			{
				func_432(&Global_1343559, iParam0);
				func_172(joaat("mpply_crew_local_xp_2"), Global_1343559);
			}
			else if (iVar13 == 3)
			{
				func_432(&Global_1343560, iParam0);
				func_172(joaat("mpply_crew_local_xp_3"), Global_1343560);
			}
			else if (iVar13 == 4)
			{
				func_432(&Global_1343561, iParam0);
				func_172(joaat("mpply_crew_local_xp_4"), Global_1343561);
			}
		}
	}
}

void func_432(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_433(int iParam0)
{
	if (iParam0 == Global_1343552)
	{
		return 0;
	}
	else if (iParam0 == Global_1343553)
	{
		return 1;
	}
	else if (iParam0 == Global_1343554)
	{
		return 2;
	}
	else if (iParam0 == Global_1343555)
	{
		return 3;
	}
	else if (iParam0 == Global_1343556)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_434(var uParam0)
{
	if (unk_0x80622F5ED5957337())
	{
		if (unk_0x464883E45616A088(uParam0))
		{
			return Global_2436916;
		}
	}
	return Global_2436916;
}

void func_435(int iParam0, int iParam1, int iParam2)
{
	if (func_453())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7394 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1343672[func_124(-1)])
				{
					unk_0xF1B1DC822A238E16(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1343672[func_124(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_7393 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0xF1B1DC822A238E16(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_7393 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0xF1B1DC822A238E16(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_441(unk_0x1329891157A54C63()))
		{
			Global_1585045[unk_0x1329891157A54C63() /*400*/].f_192.f_1 = iParam0;
			Global_1585045[unk_0x1329891157A54C63() /*400*/].f_192.f_6 = func_439(iParam0, 1);
		}
		func_168(629, iParam0, -1, 1);
		func_169(630, func_439(iParam0, 1), -1, 1);
		Global_1343672[func_124(-1)] = iParam0;
		func_436(7, 0);
	}
}

void func_436(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_438(iParam0, iParam1))
	{
		iVar0 = func_437();
		Global_2436893[iVar0] = iParam0;
	}
}

int func_437()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2436893[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_438(int iParam0, var uParam1)
{
	if (Global_1315880)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315892) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_439(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_440(iParam0, 0);
}

int func_440(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_272182[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_272182[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((unk_0xBBDA792448DB5A89(iVar1) - unk_0xBBDA792448DB5A89(iVar2)) / 2f) + unk_0xBBDA792448DB5A89(iVar2));
		iVar3 = unk_0xF2DB717A73826179(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_441(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x236D8AD7EE179F46(Global_2422670.f_1, iParam0);
	}
	return 1;
}

int func_442(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x1329891157A54C63())
			{
				return Global_1343672[func_124(-1)];
			}
			else if (func_441(iParam0))
			{
				return Global_1585045[iParam0 /*400*/].f_192.f_1;
			}
		}
	}
	else
	{
		return Global_1343672[func_124(-1)];
	}
	return 0;
}

void func_443(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63());
	iVar0 = 0;
	while (iVar0 < unk_0x945535897333587B())
	{
		iVar4 = unk_0xC3904F8771F37B7F(iVar0);
		if (unk_0xC4FEBC724D547D78(iVar4))
		{
			iVar5 = unk_0x29A638E7EEEE6B16(iVar4);
			if (unk_0xCCFDB2B968281FE8(iVar5) != -1)
			{
				if (unk_0xCCFDB2B968281FE8(iVar5) == iVar1 || func_446(unk_0xCCFDB2B968281FE8(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x1329891157A54C63())
					{
						if (func_445(unk_0x1329891157A54C63(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = unk_0xF2DB717A73826179((func_444(*iParam0, 100) * (10f * Global_262145.f_4208)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_444(*iParam0, 100) * (20f * Global_262145.f_4201)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_444(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_445(int iParam0, int iParam1)
{
	if (unk_0x80622F5ED5957337())
	{
		Global_2450501 = { func_34(iParam0) };
		Global_2450514 = { func_34(iParam1) };
		if (unk_0x464883E45616A088(&Global_2450501))
		{
			if (unk_0x464883E45616A088(&Global_2450514))
			{
				unk_0xEF956A1EC046AA4A(&Global_2450431, 35, &Global_2450501);
				unk_0xEF956A1EC046AA4A(&Global_2450466, 35, &Global_2450514);
				if (Global_2450431 == Global_2450466)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_446(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 0);
				
				case 1:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 1);
				
				case 2:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 2);
				
				case 3:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 4);
				
				case 1:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 5);
				
				case 2:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 6);
				
				case 3:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 8);
				
				case 1:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 9);
				
				case 2:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 10);
				
				case 3:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 12);
				
				case 1:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 13);
				
				case 2:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 14);
				
				case 3:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_447(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x945535897333587B())
		{
			iVar3 = iVar0;
			if (unk_0xC4FEBC724D547D78(iVar3))
			{
				iVar4 = unk_0x29A638E7EEEE6B16(iVar3);
				if (func_571(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x1329891157A54C63())
					{
						iVar1++;
						if (func_445(unk_0x1329891157A54C63(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_571(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x1329891157A54C63())
				{
					if (func_448(unk_0x1329891157A54C63(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_445(unk_0x1329891157A54C63(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = unk_0xF2DB717A73826179((func_444(*iParam1, 100) * (10f * Global_262145.f_4208)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_444(*iParam1, 100) * (20f * Global_262145.f_4201)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_448(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_449(iParam0), func_449(iParam1));
	return 0f;
}

Vector3 func_449(int iParam0)
{
	return unk_0xB6AE0DAE06D56288(unk_0xE495E987CB2BE7EF(iParam0), 0);
}

int func_450(int iParam0)
{
	int iVar0;
	
	if (unk_0xF349F5727BA73619() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_444(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_451(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x013F97B9D88B92CA(iParam0) > func_442(unk_0x1329891157A54C63()))
		{
			iParam0 = -func_442(unk_0x1329891157A54C63());
		}
	}
	if (func_452(8000, 0, 0) > 0)
	{
		if (func_452(8000, 0, 0) < (iParam0 + func_442(unk_0x1329891157A54C63())))
		{
			iParam0 = (func_452(8000, 0, 0) - func_442(unk_0x1329891157A54C63()));
		}
	}
	return iParam0;
}

int func_452(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_272182[iParam0];
}

int func_453()
{
	return 1;
}

bool func_454(int iParam0)
{
	return Global_2414506[iParam0 /*255*/].f_114 == 2;
}

bool func_455(int iParam0)
{
	return Global_2414506[iParam0 /*255*/].f_114 == 7;
}

int func_456()
{
	return Global_262145.f_8768;
}

int func_457()
{
	return Global_262145.f_8770;
}

void func_458(int iParam0, var uParam1)
{
	Local_1239[iParam0 /*68*/].f_31 = uParam1;
}

void func_459(int iParam0, int iParam1)
{
	Local_1239[iParam0 /*68*/].f_35 = iParam1;
}

void func_460(int iParam0, int iParam1)
{
	Local_1239[iParam0 /*68*/].f_34 = iParam1;
}

void func_461(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (!unk_0x236D8AD7EE179F46(iLocal_553, 5))
	{
		if (func_15(iParam0) != 0)
		{
			if (!func_159(unk_0x1329891157A54C63()))
			{
				if (!func_77(unk_0x1329891157A54C63()))
				{
					if (func_330(unk_0x519AAFF77CC141DF()))
					{
						if (iParam1 <= 2)
						{
							if (func_107(unk_0x519AAFF77CC141DF()) || func_330(unk_0x519AAFF77CC141DF()))
							{
								func_473(func_487(iParam1), &iVar0, &iVar1);
							}
						}
						else
						{
							func_472(1);
						}
						if (iVar1 > 0)
						{
							func_471();
							func_416(0, unk_0x81873881071CD9FE(), "", -1636175450, -1253457806, iVar1, 1, -1, 0, 0);
							Local_378.f_7 = (Local_378.f_7 + iVar1);
						}
						if (iVar0 > 0)
						{
							if (func_470())
							{
								func_463(-212607085, iVar0, &uVar2, 0, 1);
							}
							else
							{
								unk_0xFEF1B8BDBF81B2E4(iVar0, "AM_KING_OF_THE_HILL", &uVar3);
							}
							Local_378.f_6 = (Local_378.f_6 + iVar0);
							if (!Global_262145.f_9172)
							{
								if (Local_378.f_6 > 0)
								{
									func_462(16, Local_378.f_6);
								}
							}
							Global_2438858 = iVar0;
						}
					}
					else
					{
						func_472(0);
					}
				}
				else
				{
					func_472(0);
				}
			}
			else
			{
				func_472(0);
			}
		}
		else
		{
			func_472(0);
		}
		unk_0xF3148AAF69AF9CBC(&iLocal_553, 5);
	}
}

void func_462(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2451473.f_269 = iParam0;
		if (iParam1 > Global_262145.f_4951)
		{
			iParam1 = Global_262145.f_4951;
		}
		Global_2451473.f_270 = iParam1;
		Global_2451473.f_271 = 0;
	}
}

void func_463(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_470())
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
			if (iParam1 > 0)
			{
				func_464(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_464(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_464(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_470())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x077FF247AF837AEC(func_31()) || unk_0x2FABBA9E4D234344())
		{
			Global_2545975 = 1;
			return 0;
		}
		if (Global_2437720)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2545976 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2545514[iVar1 /*69*/].f_2 == 0)
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
	if (bVar0 || unk_0x08F28BBA457D0639(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0xAECF50B5A74D109D(iVar3))
		{
			*uParam0 = func_469(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2545514[*uParam0 /*69*/].f_62 = 1;
				}
			}
			Global_2545972 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2545974 = 1;
			Global_2545977 = iParam4;
			Global_2545979 = iParam3;
			Global_2545980 = 1;
			Global_2545978 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2545977 = iParam4;
			Global_2545979 = iParam3;
			Global_2545980 = 1;
			Global_2545978 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_468(1, iParam4);
			Global_2545974 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_465(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_465(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xF3148AAF69AF9CBC(&(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_121.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_466(iParam0);
	}
}

void func_466(int iParam0)
{
	bool bVar0;
	struct<69> Var1;
	
	bVar0 = false;
	if (!func_470())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_467(iParam0))
		{
			if (!bVar0)
			{
				unk_0x9FC03E9C1F7C60AB();
			}
		}
		else if (!bVar0)
		{
			unk_0x314D4CB8F27D3283(Global_2545514[iParam0 /*69*/]);
		}
		Var1 = 2147483647;
		Global_2545514[iParam0 /*69*/] = { Var1 };
	}
}

int func_467(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2545514[iParam0 /*69*/].f_5 == 1;
	}
	return 0;
}

void func_468(int iParam0, var uParam1)
{
	Global_2438972 = uParam1;
	Global_2438971 = iParam0;
}

int func_469(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2545514[iVar0 /*69*/].f_2 == 0)
		{
			if (!func_470())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2545514[iVar0 /*69*/].f_2 = 1;
			Global_2545514[iVar0 /*69*/].f_1 = uParam5;
			Global_2545514[iVar0 /*69*/].f_3 = uParam1;
			Global_2545514[iVar0 /*69*/].f_4 = uParam2;
			Global_2545514[iVar0 /*69*/].f_7 = uParam3;
			Global_2545514[iVar0 /*69*/].f_5 = 0;
			Global_2545514[iVar0 /*69*/] = iParam0;
			Global_2545514[iVar0 /*69*/].f_6 = iParam4;
			Global_2545514[iVar0 /*69*/].f_65 = uParam8;
			Global_2545514[iVar0 /*69*/].f_64 = uParam7;
			Global_2545514[iVar0 /*69*/].f_68 = 0;
			Global_2545972 = 0;
			if (bParam6)
			{
				Global_2545514[iVar0 /*69*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_470()
{
	if (unk_0x913B1C01C1BA6C6F())
	{
		return 1;
	}
	return 0;
}

void func_471()
{
	Global_2438030 = 1;
}

void func_472(bool bParam0)
{
	if (bParam0)
	{
		if (func_122(1))
		{
			unk_0xF3148AAF69AF9CBC(&Global_1573891, 1);
		}
	}
	else if (func_122(2))
	{
		unk_0xF3148AAF69AF9CBC(&Global_1573891, 2);
	}
}

void func_473(float fParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = ((func_9(&uLocal_556, 0, 0) / 60) / 1000);
	if (iVar0 > Global_262145.f_9203)
	{
		iVar0 = Global_262145.f_9203;
	}
	else if (iVar0 < 1)
	{
		iVar0 = 1;
	}
	*uParam1 = (func_486() * iVar0);
	*uParam2 = (func_485() * iVar0);
	if (fParam0 > 0f)
	{
		iVar1 = ((Global_262145.f_8957 / 60) / 1000);
		if (iVar1 > func_484())
		{
			iVar1 = func_484();
		}
		iVar2 = iLocal_555;
		if (iVar2 > func_483())
		{
			iVar2 = func_483();
		}
		*uParam1 = (*uParam1 + unk_0xF2DB717A73826179((IntToFloat(func_476(func_482(), func_481(), iVar1, fParam0, func_480(), func_479(), func_478(), iVar2)) * Global_262145.f_9230)));
		*uParam2 = (*uParam2 + unk_0xF2DB717A73826179((IntToFloat(func_476(func_475(), func_474(), iVar1, fParam0, func_480(), func_479(), func_478(), iVar2)) * Global_262145.f_9231)));
	}
}

int func_474()
{
	return Global_262145.f_8764;
}

int func_475()
{
	return Global_262145.f_8766;
}

int func_476(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7)
{
	return func_477(unk_0xF2DB717A73826179(((IntToFloat(iParam0) * fParam3) + (((IntToFloat(iParam1) * fParam3) * (IntToFloat(iParam2) * fParam4)) * ((IntToFloat(iParam7) * fParam5) / fParam6)))), 50, 0);
}

int func_477(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = (iParam0 / iParam1);
	iVar0 = (iVar0 * iParam1);
	iVar1 = (iVar0 + iParam1);
	iVar2 = (iParam0 - iVar0);
	iVar3 = (iVar1 - iParam0);
	if (iVar2 >= iVar3)
	{
		if (iParam2 == 1)
		{
		}
		return iVar1;
	}
	if (iParam2 == 1)
	{
	}
	return iVar0;
}

float func_478()
{
	return Global_262145.f_8773;
}

float func_479()
{
	return Global_262145.f_8772;
}

float func_480()
{
	return Global_262145.f_8771;
}

int func_481()
{
	return Global_262145.f_8763;
}

int func_482()
{
	return Global_262145.f_8765;
}

int func_483()
{
	return Global_262145.f_9116;
}

int func_484()
{
	return Global_262145.f_9115;
}

int func_485()
{
	return Global_262145.f_8762;
}

int func_486()
{
	return Global_262145.f_8761;
}

float func_487(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_8774;
		
		case 1:
			return Global_262145.f_8775;
		
		case 2:
			return Global_262145.f_8776;
		
		default:
	}
	return 0f;
}

int func_488(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (unk_0x8C283330B889AF48() < iParam0)
	{
		if (bParam2)
		{
			func_490(sParam3, sParam4, 1);
		}
		if (func_165(26, -1))
		{
			func_192(26, -1);
		}
		return 1;
	}
	if (func_18(&(Global_1573867.f_18)))
	{
		if (!func_5(&(Global_1573867.f_18), 7500, 0))
		{
			return 0;
		}
		func_3(&(Global_1573867.f_18));
	}
	if (func_489())
	{
		if (bParam2)
		{
			func_490(sParam3, sParam4, 0);
		}
		if (func_165(26, -1))
		{
			func_192(26, -1);
		}
		return 1;
	}
	if (iParam1 && unk_0xD49F8CA46CF1D5B3() < iParam0)
	{
		if (bParam2)
		{
			func_490(sParam3, sParam4, 1);
		}
		if (func_165(26, -1))
		{
			func_192(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_489()
{
	return unk_0x236D8AD7EE179F46(Global_1573867.f_1, 0);
}

void func_490(char* sParam0, char* sParam1, bool bParam2)
{
	if (!unk_0x236D8AD7EE179F46(Global_1573867.f_1, 2) && !func_133(unk_0x1329891157A54C63()))
	{
		if (unk_0xB318FDA0D1ABDB20(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (unk_0xB318FDA0D1ABDB20(sParam1))
		{
			if (bParam2)
			{
				sParam1 = "FMEVEN_NUM2";
			}
			else
			{
				sParam1 = "FMEVEN_NUM3";
			}
		}
		func_113(65, sParam0, sParam1, 1, -1, 2);
		unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 2);
	}
}

int func_491()
{
	return Local_94.f_1;
}

void func_492()
{
	if (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 6))
	{
		func_506();
		unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 6);
	}
	if (!unk_0x236D8AD7EE179F46(Global_1573867.f_1, 7))
	{
		if (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 4) || unk_0x236D8AD7EE179F46(Global_1573867.f_1, 16))
		{
			if (((!unk_0x2DD54246D4BB0A20() && !unk_0xA83A609D74168B30()) && !func_143()) && func_571(unk_0x1329891157A54C63(), 1, 1))
			{
				unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 7);
				func_142("FME_PASINT", 30000);
				func_141(1);
			}
		}
		else if (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 17))
		{
			if (func_80() && !func_79())
			{
				unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 17);
				unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 16);
			}
		}
	}
	if (!unk_0x236D8AD7EE179F46(Global_1573867.f_1, 23))
	{
		if (((((!unk_0x2DD54246D4BB0A20() && !unk_0x236D8AD7EE179F46(Global_2451473.f_734, 2)) && func_571(unk_0x1329891157A54C63(), 1, 1)) && !Global_67710) && !Global_52584) && !unk_0xA83A609D74168B30())
		{
			if (func_504())
			{
				func_142("AMEV_GA_RP", -1);
				func_141(1);
				unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 23);
			}
		}
	}
	if (unk_0xDB10DED5ABC4AA20() && unk_0x37F19465A7165331() == 15)
	{
		if (func_199(unk_0x1329891157A54C63()))
		{
			if (!unk_0xF96ADDF61615476B(1344549371))
			{
				unk_0x10F474DA4DF674D9(1344549371);
			}
		}
		else if (unk_0xF96ADDF61615476B(1344549371))
		{
			unk_0x53D82E134017815A(1344549371);
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 9))
	{
		if ((((!unk_0x2DD54246D4BB0A20() && !unk_0xA83A609D74168B30()) && !func_143()) && func_571(unk_0x1329891157A54C63(), 1, 1)) && !func_78(unk_0x1329891157A54C63(), 21))
		{
			unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 9);
			func_503(0);
			func_142("FME_TBL00", -1);
			func_141(1);
		}
	}
	if (func_326(unk_0x1329891157A54C63()))
	{
		if (!unk_0x236D8AD7EE179F46(Global_1573867.f_1, 18))
		{
			if ((func_78(unk_0x1329891157A54C63(), 21) && unk_0x236D8AD7EE179F46(Global_1573867.f_1, 20)) && !unk_0x236D8AD7EE179F46(Global_1573867.f_1, 19))
			{
				unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 18);
			}
		}
		else if (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 18))
		{
			if (((((!unk_0x2DD54246D4BB0A20() && !unk_0xA83A609D74168B30()) && !func_143()) && func_571(unk_0x1329891157A54C63(), 1, 1)) && unk_0xECDEA377354CBDA4()) && !Global_2451473.f_4631)
			{
				unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 18);
				unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 19);
				func_142("AMTT_RPAS", -1);
				func_141(1);
			}
		}
	}
	if ((((func_326(unk_0x1329891157A54C63()) && !func_133(unk_0x1329891157A54C63())) && func_155(unk_0x1329891157A54C63()) != 146) && !func_159(unk_0x1329891157A54C63())) && !func_77(unk_0x1329891157A54C63()))
	{
		if (func_126(func_155(unk_0x1329891157A54C63())))
		{
			unk_0xF637D39758718565(unk_0x1329891157A54C63());
		}
		if (!unk_0x236D8AD7EE179F46(Global_1573867.f_1, 22))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 22);
		}
		if (func_502(unk_0x1329891157A54C63()) || func_118())
		{
			if (!unk_0x236D8AD7EE179F46(Global_1573867.f_1, 10))
			{
				if (func_500(func_155(unk_0x1329891157A54C63())))
				{
					if (func_122(0) && !Global_2391042)
					{
						unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 9);
					}
					func_125(1);
					unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 14);
				}
				unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 10);
			}
		}
		if (func_199(unk_0x1329891157A54C63()))
		{
			if (!unk_0x236D8AD7EE179F46(Global_1573867.f_1, 11))
			{
				if (!Global_90861.f_8)
				{
					unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 12);
					func_120(1);
				}
				if (!func_499())
				{
					unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 13);
					func_119();
				}
				if (!Global_2391042)
				{
					unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 14);
					if (func_122(0) && !Global_2391042)
					{
						unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 9);
					}
					func_125(1);
				}
				unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 11);
			}
		}
		else
		{
			func_497(0);
		}
	}
	else
	{
		func_497(1);
	}
	func_493();
	if (func_117(func_155(unk_0x1329891157A54C63())) && !unk_0x236D8AD7EE179F46(Global_1573867.f_1, 21))
	{
		unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 21);
	}
	if ((func_80() && !func_79()) || func_78(unk_0x1329891157A54C63(), 21))
	{
		if (!unk_0x236D8AD7EE179F46(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1, 10))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 10);
		}
	}
	else if (unk_0x236D8AD7EE179F46(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1, 10))
	{
		unk_0xC69E84EBBD7166E6(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 10);
	}
}

void func_493()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_143())
	{
		iVar2 = 62;
		iVar2 = 0;
		while (iVar2 < 82)
		{
			if (func_112(iVar2))
			{
				iVar0 = iVar2;
				if (iVar0 == 62 || iVar0 >= 80)
				{
					iVar1 = 15000;
				}
				else
				{
					iVar1 = 3000;
				}
				if (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 26))
				{
					unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 26);
				}
				func_494(iVar0, iVar1);
				iVar2 = 82;
			}
			iVar2++;
		}
	}
	else if (!unk_0x236D8AD7EE179F46(Global_1573867.f_1, 26))
	{
		func_3(&(Global_1573867.f_21));
		unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 26);
	}
}

void func_494(int iParam0, int iParam1)
{
	if (!func_18(&(Global_1573867.f_21)))
	{
		func_11(&(Global_1573867.f_21), 0, 0);
	}
	else if (func_5(&(Global_1573867.f_21), iParam1, 0))
	{
		if (func_320() > 0)
		{
			func_138(iParam0);
			if (func_140("AMEV_LBD_HELP"))
			{
				unk_0xB8BB626315D394F5(1);
			}
			func_3(&(Global_1573867.f_21));
		}
	}
	else
	{
		func_496(0);
		func_495();
	}
}

void func_495()
{
	Global_2451473.f_4374 = 0;
}

void func_496(int iParam0)
{
	Global_1334766.f_68 = iParam0;
}

void func_497(int iParam0)
{
	if ((unk_0x236D8AD7EE179F46(Global_1573867.f_1, 11) || (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 10) && iParam0)) || (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 22) && iParam0))
	{
		if (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 12))
		{
			unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 12);
			func_120(0);
		}
		if (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 13))
		{
			unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 13);
			func_498();
		}
		if (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 14))
		{
			unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 14);
			func_125(0);
		}
		unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 11);
		unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 10);
		unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 22);
	}
}

void func_498()
{
	unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4541), 0);
}

bool func_499()
{
	return unk_0x236D8AD7EE179F46(Global_2451473.f_4541, 0);
}

int func_500(int iParam0)
{
	switch (iParam0)
	{
		case 129:
		case 132:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
			return 1;
		
		case 131:
		case 146:
			return func_199(unk_0x1329891157A54C63());
		
		case 133:
			return (func_118() || func_501(func_94()));
		
		default:
	}
	return 0;
}

int func_501(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 10:
		case 6:
		case 12:
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_502(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x236D8AD7EE179F46(Global_1606167[iVar0 /*12*/].f_1, 7);
	}
	return 0;
}

void func_503(int iParam0)
{
	int iVar0;
	
	iVar0 = func_123(2506, -1, 0);
	if (iParam0 == 0)
	{
		if (!unk_0x236D8AD7EE179F46(iVar0, 0))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 0);
		}
		else if (!unk_0x236D8AD7EE179F46(iVar0, 1))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 1);
		}
		else if (!unk_0x236D8AD7EE179F46(iVar0, 2))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!unk_0x236D8AD7EE179F46(iVar0, 3))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 3);
		}
		else if (!unk_0x236D8AD7EE179F46(iVar0, 4))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 4);
		}
		else if (!unk_0x236D8AD7EE179F46(iVar0, 5))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!unk_0x236D8AD7EE179F46(iVar0, 6))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 6);
		}
		else if (!unk_0x236D8AD7EE179F46(iVar0, 7))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 7);
		}
		else if (!unk_0x236D8AD7EE179F46(iVar0, 8))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!unk_0x236D8AD7EE179F46(iVar0, 9))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 9);
		}
		else if (!unk_0x236D8AD7EE179F46(iVar0, 10))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 10);
		}
		else if (!unk_0x236D8AD7EE179F46(iVar0, 11))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 11);
		}
	}
	func_169(2506, iVar0, -1, 1);
}

int func_504()
{
	int iVar0;
	
	if (!func_18(&(Global_1573867.f_15)))
	{
		func_11(&(Global_1573867.f_15), 0, 0);
		Global_1573867.f_17 = 0;
	}
	else if (func_5(&(Global_1573867.f_15), 1000, 0))
	{
		if (unk_0xC4FEBC724D547D78(unk_0xC3904F8771F37B7F(Global_1573867.f_17)))
		{
			iVar0 = unk_0x29A638E7EEEE6B16(unk_0xC3904F8771F37B7F(Global_1573867.f_17));
			if (unk_0xA89AE5060232966A(iVar0))
			{
				if (func_571(iVar0, 1, 1) && func_505(iVar0, 6))
				{
					if (unk_0x2A488C176D52CCA5(func_449(unk_0x1329891157A54C63()), func_449(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1573867.f_17++;
		if (Global_1573867.f_17 >= 32)
		{
			Global_1573867.f_17 = 0;
			func_3(&(Global_1573867.f_15));
		}
	}
	return 0;
}

int func_505(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1312447 != 0)
	{
		return 0;
	}
	if (!func_441(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1585045[iVar0 /*400*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

void func_506()
{
	unk_0x9BAE0FF806E5C2E5(5);
	func_229();
	unk_0x5B6D37392F5991C3(1f);
	unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 8);
	func_507();
}

void func_507()
{
	if (Global_1708196)
	{
		if (unk_0x236D8AD7EE179F46(Global_1708197, 0))
		{
			unk_0xC69E84EBBD7166E6(&Global_2457846, 0);
		}
		if (unk_0x236D8AD7EE179F46(Global_1708197, 1))
		{
			unk_0xC69E84EBBD7166E6(&Global_2457846, 1);
		}
		if (unk_0x236D8AD7EE179F46(Global_1708197, 5))
		{
			unk_0xC69E84EBBD7166E6(&Global_2457846, 5);
		}
		if (unk_0x0017826B6757A11F(-355737150))
		{
			unk_0xFF3E86C4D581F64B(-355737150, 1, 0, 0);
		}
		if (unk_0x0017826B6757A11F(-580979506))
		{
			unk_0xFF3E86C4D581F64B(-580979506, 1, 0, 0);
		}
		if (unk_0x0017826B6757A11F(-1426452475))
		{
			unk_0xFF3E86C4D581F64B(-1426452475, 1, 0, 0);
		}
		if (unk_0x0017826B6757A11F(745417724))
		{
			unk_0xFF3E86C4D581F64B(745417724, 1, 0, 0);
		}
		if (unk_0x0017826B6757A11F(-1305304906))
		{
			unk_0xFF3E86C4D581F64B(-1305304906, 1, 0, 0);
		}
		if (unk_0x0017826B6757A11F(-1543175077))
		{
			unk_0xFF3E86C4D581F64B(-1543175077, 1, 0, 0);
		}
		if (unk_0x0017826B6757A11F(-811770997))
		{
			unk_0xFF3E86C4D581F64B(-811770997, 1, 0, 0);
		}
		Global_1708197 = 0;
	}
	Global_1708196 = 0;
}

var func_508()
{
	if (unk_0x86CCCD2FAE9D5E65(func_510()))
	{
		return func_510();
	}
	return func_509();
}

var func_509()
{
	return Global_2359301.f_2;
}

var func_510()
{
	return Global_2359301.f_3;
}

bool func_511()
{
	return unk_0x236D8AD7EE179F46(Global_2359301, 11);
}

bool func_512()
{
	return unk_0x236D8AD7EE179F46(Global_2359301, 4);
}

int func_513(int iParam0)
{
	if (func_29(iParam0, 0))
	{
		return 1;
	}
	if (func_514())
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

bool func_514()
{
	return unk_0x236D8AD7EE179F46(Global_2359301, 3);
}

bool func_515()
{
	return Global_1573867.f_23;
}

int func_516()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (Global_2451473.f_4538)
	{
		return 0;
	}
	uVar2 = unk_0xE36DF6414E5CCBBF();
	if (func_18(&(Local_94.f_1.f_1)))
	{
		iVar0 = func_517(&uVar2, &(Local_94.f_1.f_1));
		iVar1 = Global_262145.f_8957;
	}
	else if (func_18(&(Local_94.f_1.f_3)))
	{
		iVar0 = func_517(&uVar2, &(Local_94.f_1.f_3));
		iVar1 = Global_262145.f_8958;
	}
	else
	{
		return 0;
	}
	iVar1 = (iVar1 + 300000);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_517(var uParam0, var uParam1)
{
	return unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(*uParam0, *uParam1));
}

bool func_518(int iParam0)
{
	return !func_519(iParam0);
}

int func_519(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_5025)
			{
				return 0;
			}
			if (func_78(unk_0x1329891157A54C63(), 7))
			{
				return 0;
			}
			if (unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 0) || unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_5026)
			{
				return 0;
			}
			if (func_78(unk_0x1329891157A54C63(), 7))
			{
				return 0;
			}
			if (unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 0) || unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_5027)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_5028)
			{
				return 0;
			}
			if (func_78(unk_0x1329891157A54C63(), 7))
			{
				return 0;
			}
			if (unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 0) || unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_520(4))
			{
				return 0;
			}
			if (func_78(unk_0x1329891157A54C63(), 7))
			{
				return 0;
			}
			if (unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 0) || unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_520(4))
			{
				return 0;
			}
			if (func_78(unk_0x1329891157A54C63(), 7))
			{
				return 0;
			}
			if (unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 0) || unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_520(4))
			{
				return 0;
			}
			if (func_78(unk_0x1329891157A54C63(), 7))
			{
				return 0;
			}
			if (unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 0) || unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 19:
		case 21:
		case 22:
		case 23:
			if (func_520(4))
			{
				return 0;
			}
			if (func_78(unk_0x1329891157A54C63(), 7))
			{
				return 0;
			}
			if (unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 0) || unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 1))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_520(4))
			{
				return 0;
			}
			if (func_78(unk_0x1329891157A54C63(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_520(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_571(unk_0x6528B1497E4313F1(iVar0), 0, 1))
		{
			if (unk_0x236D8AD7EE179F46(Global_2414506[iVar0 /*255*/].f_205, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_521()
{
	bool bVar0;
	
	func_525(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315867 == 0)
	{
		if (!unk_0x1C6DF6AD69BE853E())
		{
			return 1;
		}
	}
	if (func_524())
	{
		return 1;
	}
	if (Global_2438897)
	{
		return 1;
	}
	if (func_523())
	{
		return 1;
	}
	if (func_522(157))
	{
		if (!func_215())
		{
			return 1;
		}
	}
	if (func_522(155))
	{
		return 1;
	}
	if (!unk_0x1F2C82EFDAD19C5D())
	{
		return 1;
	}
	if (func_128() != 0)
	{
		if (unk_0x968BF1C2C695B61A(func_128()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_522(int iParam0)
{
	if (unk_0xE0A17F32C7C30546(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_523()
{
	return Global_2436988;
}

bool func_524()
{
	return Global_2428865.f_568;
}

void func_525(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x8D411F45C0269899(1))
	{
		iVar1 = unk_0xE22864B8883341B7(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0xDC8C46445C29336D(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 310:
					func_526(iVar0);
					break;
				
				case 2:
					unk_0xDC8C46445C29336D(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 54)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_526(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xDC8C46445C29336D(1, iParam0, &Var0, 3))
	{
		if (func_571(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xE495E987CB2BE7EF(Var0.f_1);
			if (unk_0x86CCCD2FAE9D5E65(uVar3))
			{
				if (unk_0xE5AB05962FA1FF3F(iVar3, 0))
				{
					uVar4 = unk_0xE68E6B44DABA9C05(iVar3, 0);
					if (unk_0x61B3150BF9145A92(uVar4, Var0.f_2) && unk_0xA360A5024482E898())
					{
						if (func_527(uVar4, &bVar5))
						{
							unk_0xAA33E712AB3178EC(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xE0913C01F5C0CC3D(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_527(int iParam0, var uParam1)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		if (!unk_0xE86442941AE40E75(iParam0))
		{
			if (unk_0x28BE3924E7CDB27F(iParam0))
			{
				unk_0xD768713E73165208(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x46AE53A47E5D03D5(iParam0, 0))
		{
			if (unk_0x4D2386673BCED434(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_528()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_529()
{
	int iVar0;
	
	func_111();
	func_555(141);
	func_539(141, 0, unk_0x236D8AD7EE179F46(iLocal_553, 5));
	func_200();
	func_144(0);
	if (unk_0x236D8AD7EE179F46(iLocal_553, 15))
	{
		unk_0x0C22E352114F699C("MP_Deathmatch_Type_Challenge_Scene");
		unk_0xC69E84EBBD7166E6(&iLocal_553, 15);
	}
	unk_0x5B6D37392F5991C3(1f);
	func_50();
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_536(iVar0);
		iVar0++;
	}
	func_226();
	func_534();
	func_533(0);
	func_137(29, 0);
	if (func_521())
	{
		Local_378.f_5 = 5;
	}
	else if (unk_0x236D8AD7EE179F46(iLocal_553, 23))
	{
		Local_378.f_5 = 6;
	}
	else if (Local_378.f_5 != 1)
	{
		Local_378.f_5 = 2;
	}
	Local_378.f_0 = Local_94.f_214;
	Local_378.f_1 = Local_94.f_215;
	Local_378.f_4 = Local_94.f_216;
	Local_378.f_3 = iLocal_555;
	Local_378.f_10 = (unk_0xC7224E4F41E00BE3() - Local_378.f_9);
	if (!Global_262145.f_9172)
	{
		if (Local_378.f_6 > 0)
		{
			if (Local_378.f_5 == 1)
			{
				func_532();
			}
		}
	}
	if (unk_0x519AAFF77CC141DF() != -1)
	{
		func_531(Local_378, iLocal_391, iLocal_3313, iLocal_3312, func_47(func_89(0, unk_0x519AAFF77CC141DF())), -1, -1);
	}
	func_530();
}

void func_530()
{
	unk_0xC23A229F78DAD92A();
}

void func_531(struct<12> Param0, var uParam12, int iParam13, int iParam14, var uParam15, int iParam16, int iParam17)
{
	var uVar0;
	struct<13> Var1;
	struct<14> Var14;
	struct<18> Var28;
	struct<14> Var52;
	struct<13> Var66;
	struct<14> Var79;
	struct<14> Var93;
	struct<16> Var107;
	struct<13> Var123;
	struct<14> Var136;
	struct<14> Var150;
	struct<13> Var164;
	
	uVar0 = unk_0x11CA2334E341B424();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_69020)
	{
		if (unk_0xD994929E13CC1ED5(uVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam12;
			unk_0x873A507463AEADAD(&Var1);
		}
		else if (unk_0xD994929E13CC1ED5(uVar0, "freemode"))
		{
			Var14 = { Param0 };
			Var14.f_12 = uParam12;
			Var14.f_13 = iParam13;
			unk_0x7F79069287DE07E5(&Var14);
		}
		else if (unk_0xD994929E13CC1ED5(uVar0, "am_cp_collection"))
		{
			Var28 = { Param0 };
			Var28.f_12 = uParam12;
			Var28.f_13 = iParam13;
			Var28.f_14 = iParam14;
			Var28.f_15 = uParam15;
			Var28.f_16 = iParam16;
			Var28.f_17 = iParam17;
			unk_0x79FB900F8BBD70D4(&Var28);
		}
		else if (unk_0xD994929E13CC1ED5(uVar0, "am_challenges"))
		{
			Var52 = { Param0 };
			Var52.f_12 = uParam12;
			Var52.f_13 = unk_0xBBDA792448DB5A89(iParam13);
			if (iParam14 == 1)
			{
				Var52.f_13 = (Var52.f_13 / 10f);
			}
			unk_0x38D7FC94D929810F(&Var52);
		}
		else if (unk_0xD994929E13CC1ED5(uVar0, "am_penned_in"))
		{
			unk_0x308932840CD4CC5F(&Param0);
		}
		else if (unk_0xD994929E13CC1ED5(uVar0, "am_pass_the_parcel"))
		{
			Var66 = { Param0 };
			Var66.f_12 = uParam12;
			unk_0xD32EF874013A489C(&Var66);
		}
		else if (unk_0xD994929E13CC1ED5(uVar0, "am_hot_property"))
		{
			Var79 = { Param0 };
			Var79.f_12 = uParam12;
			Var79.f_13 = iParam13;
			unk_0xFEFB7107D5ABDC62(&Var79);
		}
		else if (unk_0xD994929E13CC1ED5(uVar0, "am_dead_drop"))
		{
			Var93 = { Param0 };
			Var93.f_12 = uParam12;
			Var93.f_13 = iParam13;
			unk_0xB9AF9560738D57F9(&Var93);
		}
		else if (unk_0xD994929E13CC1ED5(uVar0, "am_king_of_the_castle"))
		{
			Var107 = { Param0 };
			Var107.f_12 = uParam12;
			Var107.f_13 = iParam13;
			Var107.f_14 = iParam14;
			Var107.f_15 = uParam15;
			unk_0x71C684296070EB75(&Var107);
		}
		else if (unk_0xD994929E13CC1ED5(uVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var123 = { Param0 };
			Var123.f_12 = uParam12;
			unk_0xA10EAC86FFC2F674(&Var123);
		}
		else if (unk_0xD994929E13CC1ED5(uVar0, "AM_KILL_LIST"))
		{
			if (iParam14 == 0)
			{
				Var136 = { Param0 };
				Var136.f_12 = uParam12;
				Var136.f_13 = iParam13;
				unk_0xFA0B3892D04539F2(&Var136);
			}
			else
			{
				Var150 = { Param0 };
				Var150.f_12 = uParam12;
				Var150.f_13 = iParam13;
				unk_0x501D8C12E466C8AF(&Var150);
			}
		}
		else if (unk_0xD994929E13CC1ED5(uVar0, "am_hunt_the_beast"))
		{
			Var164 = { Param0 };
			Var164.f_12 = uParam12;
			unk_0x2271CB417FFB4D70(&Var164);
		}
	}
}

void func_532()
{
	unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_1626), 18);
}

void func_533(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x236D8AD7EE179F46(Global_2451473.f_1626, 9))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_1626), 9);
		}
	}
	else if (unk_0x236D8AD7EE179F46(Global_2451473.f_1626, 9))
	{
		unk_0xC69E84EBBD7166E6(&(Global_2451473.f_1626), 9);
	}
}

void func_534()
{
	if (Global_2408786.f_6 == unk_0x8F56512BDA9F6921())
	{
		func_535();
	}
}

void func_535()
{
	struct<25> Var0;
	
	if (unk_0x64AD45A6264810A8(Global_2408786.f_6))
	{
		if (!Global_2408786.f_6 == unk_0x8F56512BDA9F6921())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Global_2408786 = { Var0 };
	Global_2408786.f_6 = -1;
}

void func_536(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_538(iParam0))
	{
		func_537(iVar0);
		iVar0++;
	}
	func_226();
	func_534();
	func_233(func_234(iParam0), 0, 0);
}

void func_537(int iParam0)
{
	struct<12> Var0;
	
	if (iParam0 > -1 && iParam0 < 10)
	{
		if (Global_2404607.f_344[iParam0 /*12*/].f_9)
		{
			Global_2404607.f_344[iParam0 /*12*/] = { Var0 };
		}
	}
}

int func_538(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		
		case 4:
			return 1;
		
		case 2:
			return 2;
		
		case 1:
			return 3;
		
		case 3:
			return 3;
		
		case 5:
			return 4;
		
		case 6:
			return 4;
		
		case 7:
			return 4;
		
		default:
	}
	return 0;
}

void func_539(int iParam0, bool bParam1, var uParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (unk_0x1329891157A54C63() != -1)
	{
		if (unk_0x236D8AD7EE179F46(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1, 13))
		{
			unk_0xC69E84EBBD7166E6(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 13);
		}
		if (unk_0x236D8AD7EE179F46(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1, 14))
		{
			unk_0xC69E84EBBD7166E6(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 14);
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 21))
	{
		unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 21);
	}
	func_551();
	unk_0x59BBCA8743D045AE("DisableFlightMusic", 0);
	unk_0x59BBCA8743D045AE("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_550(func_155(unk_0x1329891157A54C63()));
		func_137(21, 0);
	}
	else
	{
		if ((uParam2 && unk_0x1329891157A54C63() != -1) && func_549(unk_0x1329891157A54C63()) >= 12)
		{
			func_548(2518, -1);
			iVar1 = func_123(2518, -1, 0);
			if (iVar1 == 2)
			{
				unk_0xF3148AAF69AF9CBC(&Global_1573892, 0);
			}
			else if (iVar1 == 4)
			{
				unk_0xF3148AAF69AF9CBC(&Global_1573892, 1);
			}
			else if (iVar1 == 6)
			{
				unk_0xF3148AAF69AF9CBC(&Global_1573892, 2);
			}
			else if (iVar1 == 8)
			{
				unk_0xF3148AAF69AF9CBC(&Global_1573892, 3);
			}
			else if (iVar1 == 10)
			{
				unk_0xF3148AAF69AF9CBC(&Global_1573892, 4);
			}
			else if (iVar1 == 12)
			{
				unk_0xF3148AAF69AF9CBC(&Global_1573892, 5);
			}
		}
		func_547();
		func_546();
		func_545();
		func_224();
		func_544();
		func_506();
		func_543();
		unk_0xC69E84EBBD7166E6(&(Global_2451473.f_1628), 2);
		func_542();
		func_541();
	}
	if (unk_0xF96ADDF61615476B(1344549371))
	{
		unk_0x53D82E134017815A(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if (unk_0x1329891157A54C63() != -1 && !func_78(unk_0x1329891157A54C63(), 21))
		{
			func_125(0);
			func_120(0);
			func_540();
		}
	}
	if (uParam2 && !bParam1)
	{
		if (func_165(26, -1))
		{
			Global_2438842 = -1;
			func_192(26, -1);
		}
	}
	Global_2450427 = 1;
}

void func_540()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1311741)
	{
		if (unk_0x236D8AD7EE179F46(Global_2359718[iVar0 /*26*/].f_12, 11))
		{
			if (unk_0x236D8AD7EE179F46(Global_2359718[iVar0 /*26*/].f_13, 26))
			{
				unk_0xC69E84EBBD7166E6(&(Global_2359718[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_541()
{
	Global_1606167[unk_0x1329891157A54C63() /*12*/].f_6 = 0;
}

void func_542()
{
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 1))
	{
		unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4540), 1);
	}
	if (Global_2451473.f_4540 > 0)
	{
		unk_0x80650551CC58C784("FM_COUNTDOWN_30S_KILL");
		unk_0x80650551CC58C784("FM_COUNTDOWN_30S_FIRA");
		unk_0x0C22E352114F699C("GTAO_FM_Events_30_Sec_Countdown_Scene");
		unk_0x094B864326B5FE96(1);
		Global_2451473.f_4540 = 0;
		unk_0x59BBCA8743D045AE("DisableFlightMusic", 0);
		unk_0x59BBCA8743D045AE("WantedMusicDisabled", 0);
		unk_0x59BBCA8743D045AE("AllowScoreAndRadio", 0);
		if (!unk_0xD994929E13CC1ED5(unk_0x11CA2334E341B424(), "am_pi_menu"))
		{
			if (Global_2451473.f_4550 > -1)
			{
				unk_0x54206B7CE6FF2360(Global_2451473.f_4550);
				Global_2451473.f_4550 = -1;
			}
		}
	}
}

void func_543()
{
	struct<24> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Global_1573867 = { Var0 };
}

void func_544()
{
	var uVar0;
	
	Global_1318828 = uVar0;
}

void func_545()
{
	Global_2451473.f_4541 = 0;
}

void func_546()
{
	if (unk_0x1329891157A54C63() != -1)
	{
		Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1 = 0;
	}
}

void func_547()
{
	int iVar0;
	
	iVar0 = unk_0x1329891157A54C63();
	if (iVar0 != -1)
	{
		Global_1606167[iVar0 /*12*/] = -1;
	}
}

void func_548(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_123(iParam0, func_124(iParam1), 0);
	iVar0++;
	if (!func_170(iParam0))
	{
		func_169(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_168(iParam0, iVar0, iParam1, 1);
	}
}

int func_549(int iParam0)
{
	return Global_1585045[iParam0 /*400*/].f_192.f_6;
}

int func_550(int iParam0)
{
	switch (iParam0)
	{
		case 133:
		case 132:
		case 138:
		case 144:
		case 140:
		case 139:
		case 131:
		case 141:
		case -1:
			return 1;
		
		case 146:
			if (func_199(unk_0x1329891157A54C63()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_551()
{
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_1627, 3) || unk_0x236D8AD7EE179F46(Global_2451473.f_1627, 4))
	{
		if (unk_0x29AFA2493D7C23D0() || unk_0xC584A413BCB2AA39())
		{
			unk_0xAE2B1C30F8A0B67C(800);
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_1627, 5))
	{
		unk_0xC69E84EBBD7166E6(&(Global_2451473.f_1627), 5);
	}
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_1627, 3))
	{
		unk_0xC69E84EBBD7166E6(&(Global_2451473.f_1627), 3);
	}
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_1627, 4))
	{
		unk_0xC69E84EBBD7166E6(&(Global_2451473.f_1627), 4);
	}
	func_554(0);
	func_553(0);
	func_552(0);
}

void func_552(int iParam0)
{
	if (Global_2451473.f_4362 != iParam0)
	{
		Global_2451473.f_4362 = iParam0;
	}
}

void func_553(bool bParam0)
{
	if (Global_2451473.f_4361 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2451473.f_4361 = bParam0;
	}
}

void func_554(int iParam0)
{
	if (Global_2451473.f_4359 != iParam0)
	{
		Global_2451473.f_4359 = iParam0;
	}
}

void func_555(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

void func_556(struct<20> Param0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = func_570(Param0.f_0);
	func_569(uVar3, Param0);
	func_568(0, -1, 0);
	func_566(141);
	unk_0x19F630B59442E836(&Local_94, 284);
	unk_0xCBCBE0D8DD0EF168(&Local_392, 161);
	if (!func_565())
	{
		func_529();
	}
	if (unk_0x1C6DF6AD69BE853E())
	{
		unk_0xE6E19E3BBABCBC24(0);
		func_137(29, 1);
		if (unk_0x1C7D9BFDF15A02B4())
		{
			iVar0 = func_561();
			func_558(func_560(141, iVar0, 0, 0));
			iVar1 = 0;
			while (iVar1 < 1)
			{
				func_557(iVar1, iVar0);
				iVar1++;
			}
			unk_0x33967CC5BBA849B8(&(Local_94.f_214), &(Local_94.f_215));
		}
		Local_378.f_2 = unk_0x8C283330B889AF48();
		Local_378.f_9 = unk_0xC7224E4F41E00BE3();
		Local_378.f_8 = unk_0xC7224E4F41E00BE3();
		iVar2 = 0;
		while (iVar2 < 32)
		{
			Local_94.f_250[iVar2] = -1;
			iVar2++;
		}
		func_350(0);
	}
	else
	{
		func_529();
	}
}

void func_557(int iParam0, int iParam1)
{
	Local_94.f_6[iParam0 /*204*/].f_69 = iParam1;
}

void func_558(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	
	Var0.f_0 = 386;
	Var0.f_1 = unk_0x1329891157A54C63();
	Var0.f_2 = iParam0;
	iVar3 = func_559(1, 1);
	if (!iVar3 == 0)
	{
		unk_0x8DAD64B00B88FC2D(1, &Var0, 3, iVar3);
	}
}

var func_559(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x6528B1497E4313F1(iVar1);
		if (func_571(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x1329891157A54C63() || iParam0)
			{
				if (bParam1)
				{
					unk_0xF3148AAF69AF9CBC(&uVar0, iVar1);
				}
				else if (!func_29(iVar2, 0))
				{
					unk_0xF3148AAF69AF9CBC(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_560(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
		case 139:
		case 141:
		case 133:
		case 138:
		case 144:
			return iParam1;
		
		case 132:
			switch (iParam2)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						default:
					}
					break;
			}
			break;
		
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 0:
									return 15;
								
								case 1:
									return 16;
								
								case 2:
									return 17;
								
								case 3:
									return 18;
								
								case 4:
									return 19;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 0:
									return 20;
								
								case 1:
									return 21;
								
								case 2:
									return 22;
								
								case 3:
									return 24;
								
								case 4:
									return 25;
								
								default:
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									return 26;
								
								case 1:
									return 27;
								
								case 2:
									return 28;
								
								case 3:
									return 29;
								
								case 4:
									return 30;
								
								default:
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 0:
									return 31;
								
								case 1:
									return 32;
								
								case 2:
									return 33;
								
								case 3:
									return 34;
								
								case 4:
									return 35;
								
								default:
							}
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 41;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 1:
									return 42;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 2:
									return 43;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 3:
									return 44;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									return 45;
								
								default:
							}
							break;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						case 4:
							return 8;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						case 3:
							return 15;
						
						case 4:
							return 16;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 17;
						
						case 1:
							return 18;
						
						case 2:
							return 19;
						
						case 3:
							return 20;
						
						case 4:
							return 21;
						
						default:
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							return 22;
						
						case 1:
							return 24;
						
						case 2:
							return 25;
						
						case 3:
							return 26;
						
						default:
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							return 27;
						
						case 1:
							return 28;
						
						case 2:
							return 29;
						
						default:
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							return 30;
						
						case 1:
							return 31;
						
						case 2:
							return 32;
						
						default:
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 0:
							return 33;
						
						case 1:
							return 34;
						
						case 2:
							return 35;
						
						case 3:
							return 36;
						
						default:
					}
					break;
				
				case 9:
					switch (iParam2)
					{
						case 0:
							return 37;
						
						case 1:
							return 38;
						
						case 2:
							return 39;
						
						case 3:
							return 40;
						
						default:
					}
					break;
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						default:
					}
					break;
			}
			break;
		
		case 146:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
			}
			break;
	}
	return -1;
}

var func_561()
{
	int iVar0;
	int iVar1[8];
	int iVar10;
	var uVar11;
	
	iVar10 = 0;
	while (iVar10 <= 7)
	{
		if (func_564(iVar10) && !func_562(141, iVar10, 0, 0))
		{
			iVar1[iVar0] = iVar10;
			iVar0++;
		}
		iVar10++;
	}
	uVar11 = iVar1[unk_0x2E0A9E3291F398E3(0, iVar0)];
	return uVar11;
}

int func_562(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 132:
		case 144:
			return 0;
		
		default:
	}
	iVar1 = func_563(iParam0);
	iVar0 = 0;
	while (iVar0 < 19)
	{
		if (iVar0 < Global_262145.f_6441)
		{
			if (Global_2446446.f_124[iVar0 /*2*/] == iVar1 && Global_2446446.f_124[iVar0 /*2*/].f_1 == func_560(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_563(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 12;
		
		case 139:
			return 14;
		
		case 141:
			return 16;
		
		case 133:
			return 9;
		
		case 138:
			return 13;
		
		case 144:
			return 17;
		
		case 132:
			return 8;
		
		case 131:
			return 10;
		
		case 146:
			return 18;
		
		case 129:
			return 11;
		
		case 140:
			return 15;
		
		default:
	}
	return -1;
}

int func_564(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_8963)
			{
				return 0;
			}
			break;
		
		case 4:
			if (Global_262145.f_8964)
			{
				return 0;
			}
			break;
		
		case 2:
			if (Global_262145.f_8965)
			{
				return 0;
			}
			break;
		
		case 1:
			if (Global_262145.f_8966)
			{
				return 0;
			}
			break;
		
		case 3:
			if (Global_262145.f_8967)
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_8968)
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_8969)
			{
				return 0;
			}
			break;
		
		case 7:
			if (Global_262145.f_8970)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_565()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x1C6DF6AD69BE853E())
		{
			return 0;
		}
		if (unk_0x299162DAA4768797())
		{
			return 1;
		}
		if (func_524())
		{
			return 0;
		}
		if (func_522(155))
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

void func_566(int iParam0)
{
	func_543();
	func_567();
	func_545();
	Global_1573867.f_4 = iParam0;
	Global_1573867.f_5 = iParam0;
	func_134(iParam0, -1);
	func_154(&(Global_1573867.f_18), 0, 0);
	Global_2451473.f_4403 = 0;
	Global_2437628[0] = func_44();
	Global_2437628[1] = func_44();
	Global_2437628[2] = func_44();
	Global_2437628[3] = func_44();
	Global_2437628[4] = func_44();
	func_541();
	func_286();
	if (func_80() && !func_79())
	{
		unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 16);
	}
	else
	{
		unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 17);
	}
}

void func_567()
{
	var uVar0;
	
	Global_1573891 = uVar0;
}

int func_568(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x428E5E7D8B8CA428();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_530();
			}
			else
			{
				return 0;
			}
		}
		if (!func_185())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x1C6DF6AD69BE853E())
				{
					if (!bParam2)
					{
						func_530();
					}
					else
					{
						return 0;
					}
				}
				if (func_524())
				{
					if (!bParam2)
					{
						func_530();
					}
					else
					{
						return 0;
					}
				}
				if (func_522(155))
				{
					if (!bParam2)
					{
						func_530();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x25E16CB232F8AB91())
			{
				if (!bParam2)
				{
					func_530();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x428E5E7D8B8CA428();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x1C6DF6AD69BE853E())
		{
			if (!bParam2)
			{
				func_530();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x25E16CB232F8AB91())
	{
		if (!bParam2)
		{
			func_530();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_569(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x1C6DF6AD69BE853E())
	{
		func_530();
	}
	unk_0xBA029707F4D8FFB0(uParam0, 0, Param1.f_16);
}

int func_570(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 50:
			return 32;
		
		case 51:
			return 32;
		
		case 55:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 32;
		
		case 65:
			return 32;
		
		case 66:
			return 2;
		
		case 71:
			return 1;
		
		case 67:
			return 2;
		
		case 68:
			return 4;
		
		case 69:
			return 2;
		
		case 70:
			return 2;
		
		case 52:
			return 1;
		
		case 72:
			return 2;
		
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
			return 0;
		
		case joaat("mpsv_lp0_31"):
			return 1;
		
		default:
	}
	return 0;
}

int func_571(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xA89AE5060232966A(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x7DF7DE8C76D7F346(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422670.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

