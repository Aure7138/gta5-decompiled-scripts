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
	var uLocal_57 = 8;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 2;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 8;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 8;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	float fLocal_89 = 0f;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	float fLocal_92 = 0f;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	var uLocal_97 = 0;
	struct<284> Local_98 = { 0, 0, 0, 0, 0, 0, 1, 0, -1, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1 } ;
	struct<12> Local_382 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_394 = 0;
	int iLocal_395 = 0;
	struct<5> Local_396[32];
	int iLocal_557 = 0;
	int iLocal_558 = 0;
	int iLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	struct<18> Local_562[32];
	struct<3> Local_1139[32];
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	struct<68> Local_1243[1];
	struct<47> Local_1312[32];
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
	var uLocal_2845 = -1;
	var uLocal_2846 = 0;
	var uLocal_2847 = 0;
	var uLocal_2848 = 0;
	var uLocal_2849 = 0;
	var uLocal_2850 = 0;
	var uLocal_2851 = 0;
	var uLocal_2852 = 0;
	var uLocal_2853 = 1;
	var uLocal_2854 = 0;
	var uLocal_2855 = 32;
	var uLocal_2856 = 0;
	var uLocal_2857 = -1;
	var uLocal_2858 = 0;
	var uLocal_2859 = -1;
	var uLocal_2860 = 0;
	var uLocal_2861 = -1;
	var uLocal_2862 = 0;
	var uLocal_2863 = -1;
	var uLocal_2864 = 0;
	var uLocal_2865 = -1;
	var uLocal_2866 = 0;
	var uLocal_2867 = -1;
	var uLocal_2868 = 0;
	var uLocal_2869 = -1;
	var uLocal_2870 = 0;
	var uLocal_2871 = -1;
	var uLocal_2872 = 0;
	var uLocal_2873 = -1;
	var uLocal_2874 = 0;
	var uLocal_2875 = -1;
	var uLocal_2876 = 0;
	var uLocal_2877 = -1;
	var uLocal_2878 = 0;
	var uLocal_2879 = -1;
	var uLocal_2880 = 0;
	var uLocal_2881 = -1;
	var uLocal_2882 = 0;
	var uLocal_2883 = -1;
	var uLocal_2884 = 0;
	var uLocal_2885 = -1;
	var uLocal_2886 = 0;
	var uLocal_2887 = -1;
	var uLocal_2888 = 0;
	var uLocal_2889 = -1;
	var uLocal_2890 = 0;
	var uLocal_2891 = -1;
	var uLocal_2892 = 0;
	var uLocal_2893 = -1;
	var uLocal_2894 = 0;
	var uLocal_2895 = -1;
	var uLocal_2896 = 0;
	var uLocal_2897 = -1;
	var uLocal_2898 = 0;
	var uLocal_2899 = -1;
	var uLocal_2900 = 0;
	var uLocal_2901 = -1;
	var uLocal_2902 = 0;
	var uLocal_2903 = -1;
	var uLocal_2904 = 0;
	var uLocal_2905 = -1;
	var uLocal_2906 = 0;
	var uLocal_2907 = -1;
	var uLocal_2908 = 0;
	var uLocal_2909 = -1;
	var uLocal_2910 = 0;
	var uLocal_2911 = -1;
	var uLocal_2912 = 0;
	var uLocal_2913 = -1;
	var uLocal_2914 = 0;
	var uLocal_2915 = -1;
	var uLocal_2916 = 0;
	var uLocal_2917 = -1;
	var uLocal_2918 = 0;
	var uLocal_2919 = -1;
	var uLocal_2920 = -1;
	var uLocal_2921 = 0;
	var uLocal_2922 = 0;
	var uLocal_2923 = 0;
	var uLocal_2924 = 0;
	var uLocal_2925 = 0;
	var uLocal_2926 = 32;
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
	var uLocal_3306 = 0;
	var uLocal_3307 = 0;
	var uLocal_3308 = 0;
	var uLocal_3309 = 0;
	var uLocal_3310 = 0;
	var uLocal_3311 = 0;
	var uLocal_3312 = 0;
	var uLocal_3313 = 0;
	var uLocal_3314 = 0;
	var uLocal_3315 = 0;
	var uLocal_3316 = 0;
	var uLocal_3317 = 0;
	var uLocal_3318 = 0;
	var uLocal_3319 = 0;
	var uLocal_3320 = 0;
	var uLocal_3321 = 0;
	var uLocal_3322 = 0;
	var uLocal_3323 = 0;
	var uLocal_3324 = 0;
	var uLocal_3325 = 0;
	var uLocal_3326 = 0;
	var uLocal_3327 = 0;
	var uLocal_3328 = 0;
	var uLocal_3329 = 0;
	var uLocal_3330 = 0;
	var uLocal_3331 = 0;
	var uLocal_3332 = 0;
	var uLocal_3333 = 0;
	var uLocal_3334 = 0;
	var uLocal_3335 = 0;
	var uLocal_3336 = 0;
	var uLocal_3337 = 0;
	var uLocal_3338 = 0;
	var uLocal_3339 = 0;
	var uLocal_3340 = 0;
	var uLocal_3341 = 0;
	var uLocal_3342 = 0;
	int iLocal_3343 = 0;
	int iLocal_3344 = 0;
	int iLocal_3345 = 0;
	int iLocal_3346 = 0;
	int iLocal_3347 = 0;
	int iLocal_3348 = 0;
	int iLocal_3349 = 0;
	int iLocal_3350 = 0;
	int iLocal_3351 = 0;
	int iLocal_3352 = 0;
	int iLocal_3353 = 0;
	int iLocal_3354 = 0;
	var uLocal_3355 = 0;
	int iLocal_3356 = 0;
	var uLocal_3357 = 0;
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
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
	fLocal_89 = ((0.05f + 0.275f) - 0.01f);
	fLocal_92 = -0.05f;
	fLocal_93 = 0.92f;
	fLocal_94 = 1.94f;
	fLocal_95 = 2.99f;
	fLocal_96 = 3.7f;
	iLocal_394 = -1;
	iLocal_3352 = -1;
	if (unk_0xBBAE3E0C60A8AD4B() && func_651(unk_0xA34E7C2A5118D638(), 0, 1))
	{
		func_636(ScriptParam_0);
	}
	else
	{
		func_607();
	}
	while (true)
	{
		func_606();
		if (func_599())
		{
			func_607();
		}
		if (func_596(29))
		{
			func_607();
		}
		if (func_594())
		{
			func_607();
		}
		if (func_593())
		{
			func_607();
		}
		iLocal_3352 = -1;
		if (unk_0xDCC86F723E82125E(iLocal_3344, unk_0xA34E7C2A5118D638()))
		{
			if (unk_0xDCC86F723E82125E(iLocal_3345, unk_0x935FA14EDA695A82()))
			{
				if (!func_591(unk_0xA34E7C2A5118D638()))
				{
					iLocal_3352 = unk_0x935FA14EDA695A82();
				}
				else if (func_590() && !func_589())
				{
					uVar2 = func_587();
					if (unk_0xA815CBE767EFA3CB(uVar2))
					{
						iVar3 = unk_0x8ACC9D9AC6076DCB(uVar2);
						if (unk_0xC8D96C5ECEABA5D0(iVar3))
						{
							iVar4 = unk_0xB916365AA117A9F4(iVar3);
							iLocal_3352 = iVar4;
						}
					}
				}
			}
		}
		func_566();
		if (func_565() < 2)
		{
			if (func_562(2, 0, 1, 0, 0))
			{
				unk_0x59A0729D503ED758(&iLocal_557, 24);
				func_524(0, -1);
				func_607();
			}
		}
		iVar0 = 0;
		while (iVar0 < 1)
		{
			func_523(iVar0, -1);
			func_522(iVar0, -1);
			func_521(iVar0, uVar1);
			unk_0x77621132305B133B(&iLocal_557, 0);
			iVar0++;
		}
		func_475();
		func_447();
		func_444();
		func_424();
		switch (func_423(unk_0x935FA14EDA695A82()))
		{
			case 0:
				if (func_422() == 1)
				{
					func_414(141, func_421(0), 0, 0);
					func_413(1);
				}
				else if (func_422() == 4)
				{
					func_413(4);
				}
				break;
			
			case 1:
				if (func_422() == 1)
				{
					func_20();
				}
				else if (func_422() == 4)
				{
					func_19(&(Local_98.f_211));
					func_413(3);
				}
				break;
			
			case 3:
				if (func_18(&(Local_98.f_211)))
				{
					if (func_17(&(Local_98.f_211)))
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
					func_413(4);
				}
				break;
			
			case 2:
				func_413(4);
			
			case 4:
				func_607();
				break;
		}
		if (unk_0x736DBE187CFCC863())
		{
			switch (func_422())
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
	switch (func_565())
	{
		case 0:
			if (unk_0xDCC86F723E82125E(Local_98.f_213, 0))
			{
				if (!func_18(&(Local_98.f_1.f_3)))
				{
					func_11(&(Local_98.f_1.f_3), 0, 1);
				}
				func_10(1);
			}
			break;
		
		case 1:
			if (unk_0xDCC86F723E82125E(Local_98.f_213, 2))
			{
				iVar2 = Global_262145.f_9098;
				if (func_18(&(Local_98.f_1.f_1)))
				{
					if (func_9(&(Local_98.f_1.f_1), 0, 0) >= iVar2)
					{
						bVar1 = true;
					}
				}
			}
			else
			{
				iVar2 = Global_262145.f_9099;
				if (func_18(&(Local_98.f_1.f_3)))
				{
					if (func_9(&(Local_98.f_1.f_3), 0, 0) >= iVar2)
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
			if (unk_0xDCC86F723E82125E(Local_98.f_213, 1))
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
	bVar6 = func_18(&(Local_98.f_6[iParam0 /*204*/].f_70));
	if (iVar0 > -1)
	{
		if (unk_0xDCC86F723E82125E(iLocal_3345, iVar0))
		{
			if (unk_0xDCC86F723E82125E(iLocal_3344, iVar1))
			{
				if (!unk_0xDCC86F723E82125E(iLocal_3346, iVar1))
				{
					fVar2 = func_6(iParam0, iVar0);
					if (func_18(&(Local_98.f_1.f_1)))
					{
						if (!func_18(&(Local_98.f_6[iParam0 /*204*/].f_70)))
						{
							func_11(&(Local_98.f_6[iParam0 /*204*/].f_70), 0, 1);
						}
						else if ((func_5(&(Local_98.f_6[iParam0 /*204*/].f_70), 1000, 0) && func_9(&(Local_98.f_1.f_1), 0, 0) <= Global_262145.f_9098) && func_565() != 2)
						{
							iVar7 = func_9(&(Local_98.f_6[iParam0 /*204*/].f_70), 0, 1);
							fVar3 = unk_0xBBDA792448DB5A89(iVar7);
							fVar3 = (fVar3 / IntToFloat(Global_262145.f_9102 * 1000));
							fVar4 = (unk_0xBBDA792448DB5A89(Global_262145.f_9101) * fVar3);
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
			func_3(&(Local_98.f_6[iParam0 /*204*/].f_70));
			if (iVar0 > -1)
			{
				func_11(&(Local_98.f_6[iParam0 /*204*/].f_70), 0, 1);
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
	Local_98.f_6[iParam0 /*204*/].f_3[iParam1] = fParam2;
}

int func_5(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_11(uParam0, bParam2, 0);
	if (unk_0xBBAE3E0C60A8AD4B() && !bParam2)
	{
		if (unk_0xA1836B70A59643DD(unk_0x2F4EBE92EB266B70(unk_0x2AA13A84EE2D3B24(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xA1836B70A59643DD(unk_0x2F4EBE92EB266B70(unk_0x693EBB4F13506457(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

float func_6(int iParam0, int iParam1)
{
	return Local_98.f_6[iParam0 /*204*/].f_3[iParam1];
}

int func_7(int iParam0)
{
	return Local_98.f_6[iParam0 /*204*/].f_2;
}

int func_8(int iParam0)
{
	return Local_98.f_6[iParam0 /*204*/].f_1;
}

int func_9(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0xBBAE3E0C60A8AD4B() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x2F4EBE92EB266B70(unk_0x2AA13A84EE2D3B24(), *uParam0);
		}
		else
		{
			return unk_0x2F4EBE92EB266B70(unk_0x3BC33547A5F418E8(), *uParam0);
		}
	}
	return unk_0x2F4EBE92EB266B70(unk_0x693EBB4F13506457(), *uParam0);
}

void func_10(int iParam0)
{
	Local_98.f_1 = iParam0;
}

void func_11(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0xBBAE3E0C60A8AD4B() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x2AA13A84EE2D3B24();
			}
			else
			{
				*uParam0 = unk_0x3BC33547A5F418E8();
			}
		}
		else
		{
			*uParam0 = unk_0x693EBB4F13506457();
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
					if (!func_18(&(Local_98.f_1.f_1)))
					{
						Local_98.f_1.f_3 = { Var1 };
						func_11(&(Local_98.f_1.f_1), 0, 1);
					}
					if (!func_18(&(Local_98.f_6[iVar0 /*204*/].f_70)))
					{
						func_11(&(Local_98.f_6[iVar0 /*204*/].f_70), 0, 1);
					}
					func_13(iVar0, 1);
					if (!unk_0xDCC86F723E82125E(Local_98.f_213, 2))
					{
						unk_0x59A0729D503ED758(&(Local_98.f_213), 2);
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
	Local_98.f_6[iParam0 /*204*/] = iParam1;
}

bool func_14(int iParam0)
{
	return Local_1243[iParam0 /*68*/].f_36;
}

int func_15(int iParam0)
{
	return Local_98.f_6[iParam0 /*204*/];
}

void func_16(int iParam0)
{
	Local_98.f_0 = iParam0;
}

int func_17(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xA1836B70A59643DD(unk_0x2F4EBE92EB266B70(unk_0x2AA13A84EE2D3B24(), *uParam0)) >= 1000)
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
		if (unk_0x736DBE187CFCC863())
		{
			func_11(uParam0, 0, 0);
		}
	}
}

void func_20()
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	char* sVar9;
	bool bVar10;
	
	func_395();
	func_394();
	func_392();
	if (func_390())
	{
		func_286(iVar0);
	}
	func_272(141, func_285(0), &uLocal_3357, unk_0xBBDA792448DB5A89(Global_262145.f_9406), 1148846080, iLocal_3356);
	if (func_237(0, 1))
	{
		func_236();
	}
	switch (func_565())
	{
		case 0:
			break;
		
		case 1:
			func_235();
			iVar0 = 0;
			while (iVar0 < 1)
			{
				func_200(iVar0);
				func_199(iVar0);
				func_197(iVar0);
				if (iLocal_3352 == unk_0x935FA14EDA695A82())
				{
					if (!func_194(1, 0))
					{
						if (func_193(unk_0x935FA14EDA695A82(), iVar0))
						{
							if (func_192(unk_0xA34E7C2A5118D638()) == 141)
							{
								if (!unk_0xDCC86F723E82125E(Local_396[unk_0x935FA14EDA695A82() /*5*/].f_4, 2))
								{
									unk_0x59A0729D503ED758(&(Local_396[unk_0x935FA14EDA695A82() /*5*/].f_4), 2);
									func_181(1);
								}
							}
							if (!unk_0xDCC86F723E82125E(Local_396[unk_0x935FA14EDA695A82() /*5*/].f_4, 5))
							{
								unk_0x59A0729D503ED758(&(Local_396[unk_0x935FA14EDA695A82() /*5*/].f_4), 5);
							}
							if (func_8(iVar0) == unk_0x935FA14EDA695A82())
							{
								if (!unk_0xDCC86F723E82125E(iLocal_557, 20))
								{
									unk_0x59A0729D503ED758(&iLocal_557, 20);
								}
							}
						}
						if (!unk_0xDCC86F723E82125E(Local_396[unk_0x935FA14EDA695A82() /*5*/].f_4, 4))
						{
							if (func_8(iVar0) == unk_0x935FA14EDA695A82())
							{
								unk_0x59A0729D503ED758(&(Local_396[unk_0x935FA14EDA695A82() /*5*/].f_4), 4);
							}
						}
					}
					else
					{
						if (unk_0xDCC86F723E82125E(Local_396[unk_0x935FA14EDA695A82() /*5*/].f_4, 2))
						{
							unk_0x77621132305B133B(&(Local_396[unk_0x935FA14EDA695A82() /*5*/].f_4), 2);
						}
						if (unk_0xDCC86F723E82125E(Local_396[unk_0x935FA14EDA695A82() /*5*/].f_4, 5))
						{
							unk_0x77621132305B133B(&(Local_396[unk_0x935FA14EDA695A82() /*5*/].f_4), 5);
						}
						if (unk_0xDCC86F723E82125E(Local_396[unk_0x935FA14EDA695A82() /*5*/].f_4, 4))
						{
							unk_0x77621132305B133B(&(Local_396[unk_0x935FA14EDA695A82() /*5*/].f_4), 4);
						}
						if (unk_0xDCC86F723E82125E(Local_396[unk_0x935FA14EDA695A82() /*5*/].f_4, 6))
						{
							unk_0x77621132305B133B(&(Local_396[unk_0x935FA14EDA695A82() /*5*/].f_4), 6);
						}
						if (unk_0xDCC86F723E82125E(Local_396[unk_0x935FA14EDA695A82() /*5*/].f_4, 7))
						{
							unk_0x77621132305B133B(&(Local_396[unk_0x935FA14EDA695A82() /*5*/].f_4), 7);
						}
					}
				}
				if (func_15(iVar0) == 0)
				{
					if (!unk_0xDCC86F723E82125E(iLocal_557, 8))
					{
						if (!unk_0xB45DF29A98EEAD5D())
						{
							if (!func_180())
							{
								if (iLocal_3352 == unk_0x935FA14EDA695A82())
								{
									if (!func_237(0, 0))
									{
										if (unk_0xDCC86F723E82125E(iLocal_3344, Local_562[unk_0x935FA14EDA695A82() /*18*/].f_1))
										{
											if (!unk_0xDCC86F723E82125E(iLocal_3346, Local_562[unk_0x935FA14EDA695A82() /*18*/].f_1))
											{
												func_179("KOTC_1STHELP", 30000);
												func_178(0);
												unk_0xC4EE38A4CFF7544C(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
												unk_0x59A0729D503ED758(&iLocal_557, 8);
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
					if (func_177("KOTC_1STHELP"))
					{
						unk_0x9F4AA6F234E8A860(1);
					}
					if (!unk_0xDCC86F723E82125E(iLocal_557, 8))
					{
						unk_0x59A0729D503ED758(&iLocal_557, 8);
					}
				}
				if (iLocal_3352 == unk_0x935FA14EDA695A82())
				{
					if (func_176(iVar0) <= 500f)
					{
						if (!unk_0xDCC86F723E82125E(iLocal_557, 9))
						{
							unk_0xFD62177C7242216E(0f);
							unk_0x59A0729D503ED758(&iLocal_557, 9);
						}
					}
					else if (unk_0xDCC86F723E82125E(iLocal_557, 9))
					{
						unk_0xFD62177C7242216E(1f);
						unk_0x77621132305B133B(&iLocal_557, 9);
					}
				}
				if (iLocal_3352 != -1)
				{
					if (unk_0xDCC86F723E82125E(iLocal_557, 14) && func_8(iVar0) != iLocal_3352)
					{
						if (!unk_0xDCC86F723E82125E(iLocal_557, 21))
						{
							func_175(80);
							unk_0x59A0729D503ED758(&iLocal_557, 21);
						}
					}
					else if (unk_0xDCC86F723E82125E(iLocal_557, 21))
					{
						unk_0x77621132305B133B(&iLocal_557, 21);
					}
				}
				if (func_15(iVar0) != 0)
				{
					if (!unk_0xDCC86F723E82125E(iLocal_557, 26))
					{
						func_152(141, 0f, 0f, 0, 0, 0, 0);
						unk_0x59A0729D503ED758(&iLocal_557, 26);
					}
					if (!unk_0xDCC86F723E82125E(iLocal_557, 1))
					{
						if (iLocal_3352 != -1)
						{
							if (!func_237(0, 0))
							{
								if (unk_0xDCC86F723E82125E(iLocal_3344, Local_562[iLocal_3352 /*18*/].f_1))
								{
									if (!unk_0xDCC86F723E82125E(iLocal_3346, Local_562[iLocal_3352 /*18*/].f_1))
									{
										if (func_8(iVar0) != -1)
										{
											if (func_8(iVar0) != iLocal_3352)
											{
												sVar1 = "KOTC_STRAP2";
												if (func_151(unk_0xA34E7C2A5118D638(), func_7(iVar0)))
												{
													sVar1 = "KOTC_STRAP2GN";
												}
												func_149(80, sVar1, unk_0x74C5CB21CF9F1178(func_7(iVar0)), func_150(), -1, "KOTC_START", func_150());
											}
											else
											{
												func_148(80, "KOTC_START2", "KOTC_STRAP1", func_150(), -1, func_150());
												unk_0x59A0729D503ED758(&iLocal_557, 14);
												unk_0x59A0729D503ED758(&iLocal_557, 15);
											}
										}
										else
										{
											func_148(80, "KOTC_START", "KOTC_STRAP3", func_150(), -1, func_150());
										}
										unk_0x59A0729D503ED758(&iLocal_557, 1);
									}
								}
							}
						}
					}
					else if (!unk_0xDCC86F723E82125E(iLocal_557, 2))
					{
						if (func_147(80))
						{
							unk_0x59A0729D503ED758(&iLocal_557, 2);
						}
					}
					else if (iLocal_3352 != -1)
					{
						if (func_8(iVar0) == iLocal_3352)
						{
							if (!unk_0xDCC86F723E82125E(iLocal_557, 14))
							{
								if (!func_237(0, 0))
								{
									if (unk_0xDCC86F723E82125E(iLocal_3344, Local_562[iLocal_3352 /*18*/].f_1))
									{
										if (!unk_0xDCC86F723E82125E(iLocal_3346, Local_562[iLocal_3352 /*18*/].f_1))
										{
											func_148(80, "KOTC_START2", "KOTC_STRAP1", 1, -1, 2);
											unk_0x59A0729D503ED758(&iLocal_557, 14);
										}
									}
								}
							}
							else if (!unk_0xDCC86F723E82125E(iLocal_557, 15))
							{
								if (func_147(80))
								{
									unk_0x59A0729D503ED758(&iLocal_557, 15);
								}
							}
						}
						else
						{
							if (unk_0xDCC86F723E82125E(iLocal_557, 14))
							{
								unk_0x77621132305B133B(&iLocal_557, 14);
							}
							if (unk_0xDCC86F723E82125E(iLocal_557, 15))
							{
								unk_0x77621132305B133B(&iLocal_557, 15);
							}
						}
					}
					else
					{
						if (unk_0xDCC86F723E82125E(iLocal_557, 14))
						{
							unk_0x77621132305B133B(&iLocal_557, 14);
						}
						if (unk_0xDCC86F723E82125E(iLocal_557, 15))
						{
							unk_0x77621132305B133B(&iLocal_557, 15);
						}
					}
				}
				else
				{
					func_146();
				}
				if (func_15(iVar0) == 1)
				{
					if (func_8(iVar0) != -1)
					{
						if (iLocal_3352 != -1)
						{
							if (func_8(iVar0) == iLocal_3352)
							{
								if (!func_237(1, 0))
								{
									func_143("KOTC_KINGOB1", 0);
								}
								else
								{
									func_146();
								}
								if (unk_0xDCC86F723E82125E(iLocal_557, 10))
								{
									if (iLocal_3352 == unk_0x935FA14EDA695A82())
									{
										if (!unk_0xB45DF29A98EEAD5D())
										{
											if (!func_180())
											{
												if (!func_237(0, 0))
												{
													if (unk_0xDCC86F723E82125E(iLocal_3344, Local_562[unk_0x935FA14EDA695A82() /*18*/].f_1))
													{
														if (!unk_0xDCC86F723E82125E(iLocal_3346, Local_562[unk_0x935FA14EDA695A82() /*18*/].f_1))
														{
															if (unk_0xDCC86F723E82125E(iLocal_557, 2))
															{
																if (!func_151(unk_0xA34E7C2A5118D638(), func_7(iVar0)))
																{
																	if (!unk_0xDCC86F723E82125E(iLocal_557, 10))
																	{
																		func_179("KOTC_YOUKNG", 30000);
																		func_178(1);
																		unk_0x59A0729D503ED758(&iLocal_557, 6);
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
							else
							{
								if (iLocal_3352 == unk_0x935FA14EDA695A82())
								{
									if (!unk_0xDCC86F723E82125E(iLocal_557, 7))
									{
										if (func_142(unk_0x935FA14EDA695A82()))
										{
											if (!unk_0xB45DF29A98EEAD5D())
											{
												if (!func_180())
												{
													if (!func_237(0, 0))
													{
														if (unk_0xDCC86F723E82125E(iLocal_3344, Local_562[unk_0x935FA14EDA695A82() /*18*/].f_1))
														{
															if (!unk_0xDCC86F723E82125E(iLocal_3346, Local_562[unk_0x935FA14EDA695A82() /*18*/].f_1))
															{
																if (unk_0xDCC86F723E82125E(iLocal_557, 2))
																{
																	if (!func_151(unk_0xA34E7C2A5118D638(), func_7(iVar0)))
																	{
																		if (!unk_0xDCC86F723E82125E(iLocal_557, 7))
																		{
																			func_179("KOTC_OTHRKG", 30000);
																			func_178(1);
																			unk_0x59A0729D503ED758(&iLocal_557, 7);
																		}
																	}
																	else if (!unk_0xDCC86F723E82125E(iLocal_557, 11))
																	{
																		func_123("KOTC_OTHRKGGN", func_141(), 1, "KOTC_KINGBLIP", func_124(unk_0xA34E7C2A5118D638(), -2, 0, 0), -1);
																		func_178(1);
																		unk_0x59A0729D503ED758(&iLocal_557, 11);
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
								if (((func_142(iLocal_3352) || unk_0xDCC86F723E82125E(Local_396[iLocal_3352 /*5*/].f_4, 12)) && unk_0xDCC86F723E82125E(iLocal_3345, func_8(iVar0))) && !func_237(1, 0))
								{
									if (func_151(unk_0xA34E7C2A5118D638(), func_7(iVar0)))
									{
										func_120("KOTC_PERMKNGb", func_7(iVar0), "KOTC_KINGNAME", 1, func_124(unk_0xA34E7C2A5118D638(), -2, 0, 0), 0);
									}
									else
									{
										func_109("KOTC_PERMKNG", &(Local_562[func_8(iVar0) /*18*/].f_2), 0);
									}
								}
								else
								{
									func_146();
								}
							}
						}
						else
						{
							func_146();
						}
					}
					else if (iLocal_3352 != -1)
					{
						if (!func_237(1, 0))
						{
							if (func_193(unk_0x935FA14EDA695A82(), iVar0))
							{
								func_143("KOTC_KLLALL", 0);
							}
							else
							{
								func_143("KOTC_ENTER", 0);
							}
						}
						else
						{
							func_146();
						}
						if (!unk_0xDCC86F723E82125E(iLocal_557, 10))
						{
							if (iLocal_3352 == unk_0x935FA14EDA695A82())
							{
								if (func_142(unk_0x935FA14EDA695A82()))
								{
									if (!unk_0xB45DF29A98EEAD5D())
									{
										if (!func_180())
										{
											if (!func_237(0, 0))
											{
												if (unk_0xDCC86F723E82125E(iLocal_3344, Local_562[unk_0x935FA14EDA695A82() /*18*/].f_1))
												{
													if (!unk_0xDCC86F723E82125E(iLocal_3346, Local_562[unk_0x935FA14EDA695A82() /*18*/].f_1))
													{
														if (func_108(iVar0))
														{
															func_179("KOTC_CONTS", 30000);
															func_178(1);
															unk_0x59A0729D503ED758(&iLocal_557, 10);
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
						func_146();
					}
				}
				if (iLocal_3352 != -1)
				{
					if (func_15(iVar0) == 2)
					{
						if (func_142(unk_0x935FA14EDA695A82()) && !func_237(1, 0))
						{
							func_143("KOTC_ENTER", 0);
						}
						else
						{
							func_146();
						}
					}
				}
				else
				{
					func_146();
				}
				func_82(iVar0);
				if (func_192(unk_0xA34E7C2A5118D638()) == 141)
				{
					func_70(iVar0);
				}
				func_69();
				iVar0++;
			}
			break;
		
		case 2:
			iVar3 = -1;
			iVar0 = 0;
			while (iVar0 < 1)
			{
				func_67(iVar0);
				func_65(iVar0);
				iVar0++;
			}
			func_146();
			func_236();
			func_61();
			sVar4 = "KOTC_OVER1";
			sVar5 = "KOTC_OVER2";
			iVar7 = -1;
			iVar0 = 0;
			while (iVar0 < 1)
			{
				if (iLocal_3352 != -1)
				{
					if (unk_0xDCC86F723E82125E(iLocal_557, 20))
					{
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (Local_98.f_6[iVar0 /*204*/].f_74[iVar2 /*4*/] == iLocal_3352)
							{
								if (Local_98.f_6[iVar0 /*204*/].f_74[iVar2 /*4*/].f_3 > 0f)
								{
									iVar3 = iVar2;
									iVar7 = iVar2;
									switch (iVar2)
									{
										case 0:
											sVar5 = "KOTC1ST_STR";
											sVar4 = "KOTC_WIN1";
											bVar6 = true;
											break;
										
										case 1:
											sVar5 = "KOTC2ND_STR";
											bVar6 = true;
											break;
										
										case 2:
											sVar5 = "KOTC3RD_STR";
											bVar6 = true;
											break;
										}
									}
							}
							iVar2++;
						}
					}
				}
				func_82(iVar0);
				if (Local_98.f_6[iVar0 /*204*/].f_74[0 /*4*/] == -1)
				{
					bVar8 = true;
				}
				else if (!unk_0xDCC86F723E82125E(iLocal_3345, Local_98.f_6[iVar0 /*204*/].f_74[0 /*4*/]))
				{
					bVar8 = true;
				}
				else if (Local_98.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_3 <= 0f)
				{
					bVar8 = true;
				}
				iVar0++;
			}
			if (bVar6)
			{
				Local_382.f_5 = 1;
			}
			if (!unk_0xDCC86F723E82125E(Local_396[unk_0x935FA14EDA695A82() /*5*/].f_4, 1) && func_60())
			{
				if (!unk_0xDCC86F723E82125E(iLocal_557, 3))
				{
					iVar0 = 0;
					while (iVar0 < 1)
					{
						if (func_15(iVar0) == 0)
						{
							if (!func_237(0, 0))
							{
								func_59("KOTC_NOENTRY", 1);
							}
						}
						else if (bVar8)
						{
							if (iLocal_3352 != -1)
							{
								if (!func_237(0, 0))
								{
									if (!func_237(0, 0))
									{
										if (unk_0xDCC86F723E82125E(iLocal_3344, Local_562[iLocal_3352 /*18*/].f_1))
										{
											if (!unk_0xDCC86F723E82125E(iLocal_3346, Local_562[iLocal_3352 /*18*/].f_1))
											{
												if (func_142(iLocal_3352))
												{
													func_148(67, "KOTC_OVER1", "KOTC_NOWIN", 1, 15000, 2);
												}
												else
												{
													func_59("KOTC_NOWIN", 1);
												}
											}
										}
									}
								}
							}
						}
						else if (bVar6)
						{
							if (iLocal_3352 != -1)
							{
								if (!func_237(0, 0))
								{
									if (unk_0xDCC86F723E82125E(iLocal_3344, Local_562[iLocal_3352 /*18*/].f_1))
									{
										if (!unk_0xDCC86F723E82125E(iLocal_3346, Local_562[iLocal_3352 /*18*/].f_1))
										{
											if (func_142(iLocal_3352))
											{
												func_57(63, func_58(Local_98.f_6[iVar0 /*204*/].f_74[iVar7 /*4*/].f_3), sVar5, sVar4, 1, 15000, -1082130432, 2);
											}
											else
											{
												func_56(sVar5, func_58(Local_98.f_6[iVar0 /*204*/].f_74[iVar7 /*4*/].f_3), 1);
											}
										}
									}
								}
							}
						}
						else if (iLocal_3352 != -1)
						{
							if (!func_237(0, 0))
							{
								if (unk_0xDCC86F723E82125E(iLocal_3344, Local_562[iLocal_3352 /*18*/].f_1))
								{
									if (!unk_0xDCC86F723E82125E(iLocal_3346, Local_562[iLocal_3352 /*18*/].f_1))
									{
										if (func_142(iLocal_3352))
										{
											sVar5 = "KOTC_OVER3";
											if (func_54(Local_98.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_1, 1))
											{
												sVar9 = func_50(Local_98.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_1);
											}
											else
											{
												sVar9 = unk_0x74C5CB21CF9F1178(Local_98.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_1);
											}
											func_41(71, func_58(Local_98.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_3), sVar5, sVar9, sVar4, 1, 15000, 2);
										}
										else
										{
											sVar5 = "KOTC_OVER3";
											func_29(sVar5, Local_98.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_1, 1, func_58(Local_98.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_3), 0, 0, 0, 1, 1, 0);
										}
									}
								}
							}
						}
						iVar0++;
					}
					if (unk_0xDCC86F723E82125E(iLocal_3344, Local_562[unk_0x935FA14EDA695A82() /*18*/].f_1))
					{
						if (!unk_0xDCC86F723E82125E(iLocal_3346, Local_562[unk_0x935FA14EDA695A82() /*18*/].f_1))
						{
							unk_0x59A0729D503ED758(&iLocal_557, 3);
						}
					}
				}
				if (unk_0xDCC86F723E82125E(iLocal_557, 3))
				{
					if (!unk_0xDCC86F723E82125E(iLocal_557, 4))
					{
						if (iLocal_3352 != -1)
						{
							if (((((((func_147(63) || func_147(71)) || func_147(67)) || !func_142(iLocal_3352)) || func_237(1, 1)) || unk_0x2BF05095F2389894()) || func_15(0) == 0) || iLocal_3352 == -1)
							{
								unk_0x59A0729D503ED758(&iLocal_557, 4);
							}
						}
						else
						{
							unk_0x59A0729D503ED758(&iLocal_557, 4);
						}
					}
				}
				if (unk_0xDCC86F723E82125E(iLocal_557, 4))
				{
					iVar0 = 0;
					while (iVar0 < 1)
					{
						func_524(iVar0, iVar3);
						iVar0++;
					}
				}
			}
			bVar10 = true;
			if (func_237(0, 0))
			{
				bVar10 = false;
			}
			if (func_15(0) == 0)
			{
				bVar10 = false;
			}
			if (iLocal_3352 == -1)
			{
				bVar10 = false;
			}
			if (func_21(&uLocal_1236, bVar10) && unk_0xDCC86F723E82125E(iLocal_557, 4))
			{
				if (!func_180() || unk_0x2BF05095F2389894())
				{
					unk_0x59A0729D503ED758(&iLocal_557, 17);
					if (unk_0xDCC86F723E82125E(iLocal_557, 5))
					{
						unk_0x59A0729D503ED758(&(Local_396[unk_0x935FA14EDA695A82() /*5*/].f_4), 1);
						func_413(3);
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
	
	if ((*uParam0 > 0 && !func_180()) && !(func_28(unk_0xA34E7C2A5118D638(), 0) && (func_27(unk_0xA34E7C2A5118D638()) || func_25(unk_0xA34E7C2A5118D638()))))
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
				unk_0x59A0729D503ED758(&(Global_1573879.f_1), 25);
				if (bParam1)
				{
					unk_0x59A0729D503ED758(&(Global_2458121.f_4414), 0);
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
				if (func_177("AMEV_LBD_HELP"))
				{
					unk_0x9F4AA6F234E8A860(1);
				}
				func_23(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_5(&(uParam0->f_1), 23500, 0))
			{
				unk_0x77621132305B133B(&(Global_2458121.f_4414), 1);
				func_23(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x77621132305B133B(&(Global_2458121.f_4414), 1);
			return 1;
	}
	return 0;
}

void func_22()
{
	if (unk_0xDCC86F723E82125E(Global_2458121.f_4414, 0))
	{
		if (((((!unk_0xDA64C07A3B5D886D() && !unk_0xDCC86F723E82125E(Global_2458121.f_742, 2)) && func_651(unk_0xA34E7C2A5118D638(), 1, 1)) && !Global_67968) && !Global_52841) && !unk_0xD5DFCA69ACAA20E3())
		{
			unk_0x59A0729D503ED758(&(Global_2458121.f_4414), 1);
			func_179("AMEV_LBD_HELP", -1);
			func_178(1);
			unk_0x77621132305B133B(&(Global_2458121.f_4414), 0);
		}
	}
}

void func_23(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_24()
{
	Global_2442432 = 1;
}

bool func_25(int iParam0)
{
	return func_26(iParam0, 19);
}

bool func_26(int iParam0, int iParam1)
{
	return unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_9.f_4, iParam1);
}

int func_27(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_26(iParam0, 9);
	}
	return 0;
}

int func_28(int iParam0, int iParam1)
{
	if (Global_1608811[iParam0 /*109*/].f_9.f_28 != -1 || (iParam1 && Global_1608811[iParam0 /*109*/].f_9.f_27 != -1))
	{
		return 1;
	}
	return 0;
}

int func_29(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	struct<16> Var1;
	int iVar17;
	int iVar18;
	
	iVar0 = -1;
	if (unk_0x139A9C4D61DFD52E(unk_0xA34E7C2A5118D638(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x74C5CB21CF9F1178(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x74C5CB21CF9F1178(iParam1), 64);
		}
		unk_0x12F4A48D84A3989D(sParam0);
		unk_0x1AE578B67805BFB7(iParam2);
		unk_0x2DED6C1306496257(func_39(&Var1));
		unk_0x6DC80A902A91958F(iParam3);
		if (!bParam6)
		{
			iVar0 = unk_0xC754466C15BD85AC(0, 1);
		}
		else
		{
			Global_2457104 = { func_38(iParam1) };
			if (unk_0x59E0C66A4FA07806(&Global_2457034, 35, &Global_2457104))
			{
				iVar17 = 0;
				if (unk_0xF8D041B05C3D1FD4(&(Global_2457034.f_22), "Leader") && Global_2457034.f_30 == 0)
				{
					iVar17 = 1;
				}
				if (Global_2457034.f_21 > 0)
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
						Var1 = { func_37(&Var1) };
					}
					iVar0 = unk_0xE87FCD388F3A02EF(iVar18, unk_0x4041059B7AB947DE(&Global_2457034, 35), &(Global_2457034.f_17), Global_2457034.f_30, iVar17, 0, Global_2457034, &Var1, Global_1317070, Global_1317071, Global_1317072);
				}
				else
				{
					iVar0 = unk_0xE2F4E22A9715A1BC(iVar18, unk_0x4041059B7AB947DE(&Global_2457034, 35), &(Global_2457034.f_17), Global_2457034.f_30, iVar17, 0, Global_2457034, Global_1317070, Global_1317071, Global_1317072);
				}
			}
			else
			{
				iVar0 = unk_0xC754466C15BD85AC(0, 1);
			}
		}
		func_30(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_30(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_36() || !unk_0xDC9A5ADFE0C41DD2()) || !func_33(unk_0xA34E7C2A5118D638(), 0))
	{
		return;
	}
	iVar0 = func_31(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1718883.f_5[iVar0 /*53*/] = iParam0;
		Global_1718883.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1718883.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1718883.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1718883.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1718883.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1718883.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1718883.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1718883.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1718883.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1718883.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1718883.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_31(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1718883 - 1))
	{
		if (iParam0 > Global_1718883.f_5[iVar0 /*53*/].f_1)
		{
			func_32(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1718883++;
	if (Global_1718883 > 5)
	{
		Global_1718883 = 5;
		return Global_1718883;
	}
	return (Global_1718883 - 1);
}

void func_32(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1718883.f_5[iVar0 /*53*/] = { Global_1718883.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_33(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xA34E7C2A5118D638())
	{
		bVar0 = func_34(-1, 0) == 8;
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

int func_34(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_35();
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

int func_35()
{
	return Global_1312746;
}

bool func_36()
{
	return unk_0x9F37711843A20114(-1762644250);
}

struct<16> func_37(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

struct<13> func_38(int iParam0)
{
	struct<13> Var0;
	
	unk_0xC7B591FDF5AB5356(iParam0, &Var0, 13);
	return Var0;
}

var func_39(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_40(&cVar0);
}

var func_40(char[4] cParam0)
{
	return cParam0;
}

int func_41(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	struct<72> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_71 = -1;
	func_49(iParam0, &Var0, iParam1, sParam2, sParam4);
	StringCopy(&(Var0.f_23), sParam3, 64);
	Var0.f_65 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_66 = iParam7;
	return func_42(&Var0);
}

int func_42(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2426867.f_2428)
		{
			return 0;
		}
	}
	func_47(uParam0, uParam0->f_16);
	func_45(uParam0);
	if (func_44(uParam0->f_1))
	{
		if (Global_2426867.f_2138[0 /*72*/].f_2 == 0)
		{
			Global_2426867.f_2138[0 /*72*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2426867.f_2138[0 /*72*/].f_1 == 13 || Global_2426867.f_2138[0 /*72*/].f_1 == 52) || Global_2426867.f_2138[0 /*72*/].f_1 == 53) || Global_2426867.f_2138[0 /*72*/].f_1 == 57)
		{
			Global_2426867.f_2138[0 /*72*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2426867.f_2138[iVar0 + 1 /*72*/] = { Global_2426867.f_2138[iVar0 /*72*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2426867.f_2138[1 /*72*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2426867.f_2138[iVar0 /*72*/].f_2 == 0)
		{
			Global_2426867.f_2138[iVar0 /*72*/] = { *uParam0 };
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0x59A0729D503ED758(&(Global_2426867.f_2138[iVar0 /*72*/].f_63), 1);
				Global_2426867.f_2138[iVar0 /*72*/].f_2 = 5;
			}
			if (uParam0->f_1 == 84)
			{
				if (func_43(Global_2426867.f_2138[iVar0 /*72*/].f_1))
				{
					Global_2426867.f_2138[iVar0 /*72*/].f_2 = 5;
					unk_0x59A0729D503ED758(&(Global_2426867.f_2138[iVar0 /*72*/].f_63), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_43(int iParam0)
{
	switch (iParam0)
	{
		case 86:
		case 85:
		case 88:
		case 89:
		case 84:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 87:
			return 1;
		
		default:
	}
	return 0;
}

int func_44(int iParam0)
{
	if ((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 55) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10)
	{
		return 1;
	}
	return 0;
}

void func_45(var uParam0)
{
	if (func_46(uParam0->f_1))
	{
		uParam0->f_66 = func_150();
	}
}

int func_46(int iParam0)
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

void func_47(var uParam0, int iParam1)
{
	if (func_46(uParam0->f_1))
	{
		uParam0->f_67 = 1;
	}
	if (iParam1 == func_48())
	{
		return;
	}
	if (func_43(uParam0->f_1))
	{
		if (uParam0->f_65 == 1)
		{
			uParam0->f_67 = func_124(iParam1, -2, 0, 0);
		}
	}
}

int func_48()
{
	return -1;
}

void func_49(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_16 = func_48();
	uParam1->f_17 = func_48();
	uParam1->f_18 = func_48();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_19), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_3 = iParam2;
	uParam1->f_65 = 1;
	uParam1->f_68 = 1;
	uParam1->f_69 = 1;
	uParam1->f_67 = 0;
	StringCopy(&(uParam1->f_23), "", 64);
	StringCopy(&(uParam1->f_39), "", 64);
}

char* func_50(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	if ((func_26(iParam0, 28) || func_26(unk_0xA34E7C2A5118D638(), 28)) || func_53(iParam0))
	{
		return unk_0x73630CECCD6630B5("GB_REST_ACC");
	}
	iVar0 = func_52(iParam0);
	if (iVar0 != func_48())
	{
		sVar1 = func_51(&(Global_1608811[iVar0 /*109*/].f_9.f_74));
		if (unk_0xB8A06E7E729EED0A(sVar1))
		{
			return unk_0x73630CECCD6630B5("GB_REST_ACC");
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

var func_51(var uParam0)
{
	return uParam0;
}

int func_52(int iParam0)
{
	if (iParam0 != func_48())
	{
		return Global_1608811[iParam0 /*109*/].f_9;
	}
	return func_48();
}

int func_53(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_38(iParam0) };
	if (unk_0x62F8BA7ED89768FB() || unk_0x68B0A67658F2D9C2())
	{
		if (unk_0xE028438B8B6A57B6(0))
		{
			return 0;
		}
	}
	else if (unk_0xF7FE713C9F786F8C())
	{
		if (unk_0x3084526A863D7966(&Var0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_54(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_55(iParam0))
		{
			return 0;
		}
	}
	return Global_1608811[iParam0 /*109*/].f_9 != func_48();
}

int func_55(int iParam0)
{
	if (iParam0 != func_48())
	{
		if (Global_1608811[iParam0 /*109*/].f_9 != func_48())
		{
			return Global_1608811[iParam0 /*109*/].f_9 == iParam0;
		}
	}
	return 0;
}

int func_56(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x12F4A48D84A3989D(sParam0);
	unk_0x6DC80A902A91958F(iParam1);
	iVar0 = unk_0xC754466C15BD85AC(0, 1);
	func_30(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_57(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<72> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_71 = -1;
	func_49(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_65 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_66 = iParam7;
	return func_42(&Var0);
}

int func_58(float fParam0)
{
	int iVar0;
	
	iVar0 = unk_0xF34EE736CF047844(fParam0);
	iVar0 = (iVar0 / Global_262145.f_9101);
	iVar0 = (iVar0 * Global_262145.f_9101);
	return iVar0;
}

int func_59(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x12F4A48D84A3989D(sParam0);
	iVar0 = unk_0xC754466C15BD85AC(0, 1);
	func_30(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

bool func_60()
{
	return unk_0xDCC86F723E82125E(Global_1573879.f_1, 25);
}

void func_61()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 8)
		{
			func_62(iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

void func_62(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_421(iParam0);
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	if (unk_0xDCC86F723E82125E(uLocal_558, iVar0))
	{
		unk_0x817C1B6462976923(func_64(iParam0, 0), 0, func_63(iParam0, 1));
		if (iVar0 == 4)
		{
			unk_0x817C1B6462976923(func_64(iParam0, 1), 0, func_63(iParam0, 1));
		}
		unk_0x77621132305B133B(&iLocal_558, iVar0);
	}
}

int func_63(int iParam0, bool bParam1)
{
	if (func_8(iParam0) <= -1)
	{
		if (bParam1)
		{
			return 21;
		}
		return 21;
	}
	else if (func_8(iParam0) == unk_0x935FA14EDA695A82())
	{
		return 9;
	}
	else if (func_151(unk_0xA34E7C2A5118D638(), func_7(iParam0)))
	{
		return func_124(unk_0xA34E7C2A5118D638(), -2, 0, 0);
	}
	return 6;
}

int func_64(int iParam0, bool bParam1)
{
	switch (func_421(iParam0))
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

void func_65(int iParam0)
{
	if (unk_0x6B4865E08E90ACC5(func_66(iParam0)))
	{
		unk_0x5356E82C1E5E0C44(&(Local_1243[iParam0 /*68*/].f_28));
	}
}

var func_66(int iParam0)
{
	return Local_1243[iParam0 /*68*/].f_28;
}

void func_67(int iParam0)
{
	if (unk_0x6B4865E08E90ACC5(func_68(iParam0)))
	{
		unk_0x5356E82C1E5E0C44(&(Local_1243[iParam0 /*68*/].f_27));
	}
}

var func_68(int iParam0)
{
	return Local_1243[iParam0 /*68*/].f_27;
}

void func_69()
{
	bool bVar0;
	
	if (iLocal_3352 != -1)
	{
		if (func_142(iLocal_3352))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!unk_0xDCC86F723E82125E(iLocal_557, 16))
		{
			unk_0x925AE2E6F6E41362("MP_Deathmatch_Type_Challenge_Scene");
			unk_0x59A0729D503ED758(&iLocal_557, 16);
		}
	}
	else if (unk_0xDCC86F723E82125E(iLocal_557, 16))
	{
		unk_0xDB9D78E5137EE7AD("MP_Deathmatch_Type_Challenge_Scene");
		unk_0x77621132305B133B(&iLocal_557, 16);
	}
}

void func_70(int iParam0)
{
	if (iParam0 == iParam0)
	{
		iParam0 = iParam0;
	}
	if (((((func_142(unk_0x935FA14EDA695A82()) && !func_237(1, 1)) && iLocal_3352 == unk_0x935FA14EDA695A82()) && !func_81(unk_0xA34E7C2A5118D638(), 0)) && !func_80(unk_0xA34E7C2A5118D638())) && !func_79())
	{
		if (!unk_0xDCC86F723E82125E(iLocal_557, 18))
		{
			if (iLocal_3356 == 0)
			{
				iLocal_3356 = 1;
			}
			func_77(1, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0);
			func_73();
			unk_0x59A0729D503ED758(&iLocal_557, 18);
		}
	}
	else if (unk_0xDCC86F723E82125E(iLocal_557, 18))
	{
		if (iLocal_3356)
		{
			iLocal_3356 = 0;
		}
		func_71();
		func_77(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0);
		unk_0x77621132305B133B(&iLocal_557, 18);
	}
}

void func_71()
{
	func_72();
	Global_2404919.f_631 = 0;
}

void func_72()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404919.f_632[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_73()
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
			func_75(func_421(iVar0), iVar1, &Var2, &uVar5, &uVar6);
			func_74(Var2, uVar5, uVar6);
			iVar1++;
		}
		iVar0++;
	}
}

void func_74(struct<3> Param0, var uParam3, var uParam4)
{
	if (!Global_2404919.f_630)
	{
	}
	if (Global_2404919.f_631 < 100)
	{
		if (unk_0x652D2EEEF1D3E62C(Param0) <= 0.01f)
		{
			return;
		}
		Global_2404919.f_632[Global_2404919.f_631 /*5*/] = { Param0 };
		Global_2404919.f_632[Global_2404919.f_631 /*5*/].f_3 = uParam3;
		Global_2404919.f_632[Global_2404919.f_631 /*5*/].f_4 = uParam4;
		Global_2404919.f_631++;
	}
}

void func_75(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1221.708f, -1849.335f, 1.251f };
					*uParam3 = 337.5771f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -1237.67f, -1835.705f, 1.2517f };
					*uParam3 = 323.4358f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -1249.548f, -1817.355f, 1.2506f };
					*uParam3 = 297.8504f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -1248.685f, -1803.257f, 1.3833f };
					*uParam3 = 286.9426f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -1248.991f, -1791.148f, 1.6577f };
					*uParam3 = 279.8152f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -1255.678f, -1781.741f, 1.5292f };
					*uParam3 = 271.3008f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -1245.86f, -1762.165f, 1.7061f };
					*uParam3 = 232.2266f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -1245.333f, -1747.114f, 2.0783f };
					*uParam3 = 246.9348f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -1231.577f, -1747.278f, 2.2692f };
					*uParam3 = 208.6838f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -1220.947f, -1735.378f, 3.3682f };
					*uParam3 = 201.3756f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -1210.075f, -1736.36f, 3.2672f };
					*uParam3 = 188.154f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -1198.247f, -1731.74f, 3.3204f };
					*uParam3 = 194.4361f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -1181.951f, -1730.004f, 3.3951f };
					*uParam3 = 177.6483f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { -1170.59f, -1719.653f, 3.3414f };
					*uParam3 = 159.2419f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -1159.548f, -1712.506f, 3.327f };
					*uParam3 = 173.1471f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { -1164.51f, -1729.84f, 3.2972f };
					*uParam3 = 164.5387f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 16:
					*uParam2 = { -1153.682f, -1723.684f, 3.2673f };
					*uParam3 = 159.7204f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 17:
					*uParam2 = { -1144.7f, -1734.572f, 3.2823f };
					*uParam3 = 132.856f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 18:
					*uParam2 = { -1128.272f, -1755.871f, 3.0265f };
					*uParam3 = 111.5717f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 19:
					*uParam2 = { -1140.422f, -1768.454f, 3.1609f };
					*uParam3 = 108.3239f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 20:
					*uParam2 = { -1236.169f, -1851.284f, 1.2074f };
					*uParam3 = 330.7894f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -1250.026f, -1849.988f, 0.8113f };
					*uParam3 = 315.2169f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -1249.307f, -1832.01f, 1.2365f };
					*uParam3 = 308.724f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -1262.08f, -1826.342f, 0.88f };
					*uParam3 = 291.1317f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -1262.728f, -1810.021f, 1.2095f };
					*uParam3 = 279.2619f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -1260.259f, -1797.316f, 1.24f };
					*uParam3 = 266.2758f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -1274.153f, -1773.825f, 1.229f };
					*uParam3 = 253.8689f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -1260.69f, -1766.211f, 1.6755f };
					*uParam3 = 244.6821f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -1266.035f, -1751.414f, 1.7303f };
					*uParam3 = 225.9904f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -1208.952f, -1720.76f, 3.4325f };
					*uParam3 = 190.2951f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -1195.125f, -1711.339f, 3.4745f };
					*uParam3 = 177.7994f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 31:
					*uParam2 = { -1186.983f, -1699.157f, 3.4862f };
					*uParam3 = 185.7234f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 32:
					*uParam2 = { -1174.999f, -1703.776f, 3.4646f };
					*uParam3 = 172.7709f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 33:
					*uParam2 = { -1163.133f, -1699.905f, 3.4278f };
					*uParam3 = 169.2118f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 34:
					*uParam2 = { -1150.336f, -1701.652f, 3.3947f };
					*uParam3 = 148.2826f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 35:
					*uParam2 = { -1144.078f, -1687.13f, 3.4853f };
					*uParam3 = 149.4927f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 36:
					*uParam2 = { -1138.136f, -1707.854f, 3.387f };
					*uParam3 = 133.8241f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 37:
					*uParam2 = { -1140.055f, -1722.341f, 3.3376f };
					*uParam3 = 127.5326f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 38:
					*uParam2 = { -1116.763f, -1746.22f, 3.1299f };
					*uParam3 = 107.5649f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 39:
					*uParam2 = { -1108.207f, -1735.964f, 3.2643f };
					*uParam3 = 123.7412f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 40:
					*uParam2 = { -1227.086f, -1873.856f, 4.935f };
					*uParam3 = 337.0957f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -1215.905f, -1861.876f, 4.9443f };
					*uParam3 = 346.5332f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -1206.479f, -1854.022f, 5.0039f };
					*uParam3 = 346.756f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -1234.57f, -1863.302f, 0.4019f };
					*uParam3 = 334.4932f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -1261.542f, -1840.843f, 0.429f };
					*uParam3 = 308.3732f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -1271.821f, -1799.404f, 0.9933f };
					*uParam3 = 276.274f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -1284.195f, -1789.106f, 0.6971f };
					*uParam3 = 266.1992f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -1257.971f, -1736.858f, 2.0784f };
					*uParam3 = 227.487f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -1247.267f, -1725.901f, 3.2245f };
					*uParam3 = 214.7514f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -1234.988f, -1722.898f, 3.5186f };
					*uParam3 = 220.7502f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -1235.874f, -1703.238f, 3.0997f };
					*uParam3 = 214.0405f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -1231.588f, -1682.849f, 2.571f };
					*uParam3 = 203.4435f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -1215.568f, -1695.777f, 3.1209f };
					*uParam3 = 196.5891f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -1132.415f, -1669.435f, 3.5755f };
					*uParam3 = 148.2112f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -1159.309f, -1677.777f, 3.4694f };
					*uParam3 = 175.6314f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -1129.18f, -1690.502f, 3.4678f };
					*uParam3 = 143.3497f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -1119.669f, -1702.988f, 3.4241f };
					*uParam3 = 129.3894f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -1120.063f, -1717.326f, 3.3807f };
					*uParam3 = 123.5869f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -1111.901f, -1758.692f, 4.7663f };
					*uParam3 = 93.7592f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -1122.059f, -1769.543f, 4.9921f };
					*uParam3 = 93.2178f;
					*uParam4 = func_76(iParam0, 2);
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1692.861f, -80.4741f, 174.6247f };
					*uParam3 = 22.7116f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { 1699.049f, -73.278f, 175.3116f };
					*uParam3 = 36.6067f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { 1686.15f, -72.261f, 173.9488f };
					*uParam3 = 33.5969f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { 1673.573f, -76.8662f, 172.6441f };
					*uParam3 = 358.3647f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { 1668.303f, -68.8711f, 172.6008f };
					*uParam3 = 344.7672f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { 1664.004f, -81.4696f, 171.3247f };
					*uParam3 = 335.9399f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { 1653.943f, -82.7018f, 170.2733f };
					*uParam3 = 316.5097f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { 1642.184f, 16.9022f, 172.8744f };
					*uParam3 = 213.6659f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { 1647.117f, 26.0881f, 172.469f };
					*uParam3 = 200.4823f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { 1643.251f, 34.2645f, 171.8502f };
					*uParam3 = 198.3856f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { 1652.155f, 38.4683f, 171.5731f };
					*uParam3 = 167.6548f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { 1647.521f, 46.6361f, 171.515f };
					*uParam3 = 173.6852f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { 1658.341f, 46.5354f, 171.4155f };
					*uParam3 = 142.775f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { 1654.557f, 54.9274f, 171.5186f };
					*uParam3 = 158.0565f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { 1679.687f, -62.2895f, 172.8752f };
					*uParam3 = 19.1425f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { 1648.26f, -92.0332f, 169.0467f };
					*uParam3 = 320.4252f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 16:
					*uParam2 = { 1641.12f, -90.8545f, 167.3707f };
					*uParam3 = 340.133f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 17:
					*uParam2 = { 1632.839f, -88.4347f, 166.232f };
					*uParam3 = 275.8517f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 18:
					*uParam2 = { 1624.526f, -82.0814f, 165.1201f };
					*uParam3 = 268.6114f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 19:
					*uParam2 = { 1709.025f, -79.3046f, 176.215f };
					*uParam3 = 47.9711f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 20:
					*uParam2 = { 1709.47f, -89.1149f, 176.8704f };
					*uParam3 = 45.0986f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { 1719.762f, -89.4824f, 177.2371f };
					*uParam3 = 40.521f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { 1715.411f, -97.7661f, 177.0435f };
					*uParam3 = 39.9521f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { 1725.27f, -101.2808f, 177.3414f };
					*uParam3 = 28.2699f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { 1664.762f, 51.6959f, 171.2758f };
					*uParam3 = 125.1599f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { 1659.656f, 60.4243f, 171.7457f };
					*uParam3 = 155.8516f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { 1671.615f, 58.2652f, 171.0533f };
					*uParam3 = 130.5652f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { 1670.401f, 68.8127f, 170.8255f };
					*uParam3 = 142.8485f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { 1680.824f, 64.6627f, 170.8684f };
					*uParam3 = 171.7255f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { 1686.476f, 72.1055f, 170.6706f };
					*uParam3 = 118.2492f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { 1724.498f, 78.3834f, 169.7617f };
					*uParam3 = 122.1907f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 31:
					*uParam2 = { 1716.555f, 77.9f, 170.125f };
					*uParam3 = 133.2787f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 32:
					*uParam2 = { 1718.658f, 69.3794f, 169.7158f };
					*uParam3 = 123.6501f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 33:
					*uParam2 = { 1708.223f, 67.7488f, 170.122f };
					*uParam3 = 125.7215f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 34:
					*uParam2 = { 1696.666f, 67.5787f, 170.4112f };
					*uParam3 = 130.5078f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 35:
					*uParam2 = { 1688.924f, 64.4787f, 170.5247f };
					*uParam3 = 116.7526f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 36:
					*uParam2 = { 1654.409f, 85.3155f, 178.6964f };
					*uParam3 = 185.1295f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 37:
					*uParam2 = { 1642.521f, 61.9855f, 183.7891f };
					*uParam3 = 187.6025f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 38:
					*uParam2 = { 1663.522f, 37.8715f, 170.7838f };
					*uParam3 = 181.9699f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 39:
					*uParam2 = { 1663.431f, 25.7403f, 167.747f };
					*uParam3 = 165.7094f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 40:
					*uParam2 = { 1660.156f, 12.794f, 165.1707f };
					*uParam3 = 184.4829f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { 1658.881f, -53.3581f, 167.4092f };
					*uParam3 = 340.2356f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { 1650.805f, -63.341f, 163.7801f };
					*uParam3 = 325.3763f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { 1619.019f, -87.1216f, 164.7846f };
					*uParam3 = 285.7851f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { 1616.216f, -76.6892f, 164.2788f };
					*uParam3 = 277.6688f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { 1611.567f, -84.1719f, 164.6911f };
					*uParam3 = 279.2012f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { 1606.564f, -73.1815f, 163.3484f };
					*uParam3 = 256.1666f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { 1595.997f, -78.4415f, 162.1879f };
					*uParam3 = 273.5168f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { 1596.441f, -69.8807f, 162.1016f };
					*uParam3 = 260.1767f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { 1587.161f, -67.6343f, 161.2196f };
					*uParam3 = 253.1009f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { 1582.353f, -76.1702f, 160.4171f };
					*uParam3 = 265.3223f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { 1725.676f, -110.6558f, 177.8831f };
					*uParam3 = 34.6784f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { 1736.203f, -108.6194f, 179.2085f };
					*uParam3 = 50.2519f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { 1746.135f, -106.5357f, 180.7151f };
					*uParam3 = 65.9975f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { 1749.594f, -96.7965f, 182.065f };
					*uParam3 = 79.3328f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { 1758.513f, -98.7928f, 182.982f };
					*uParam3 = 82.5892f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { 1760.473f, -88.7761f, 184.3481f };
					*uParam3 = 83.4158f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { 1770.153f, -89.9473f, 186.0895f };
					*uParam3 = 69.9826f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { 1772.731f, -80.3556f, 187.6041f };
					*uParam3 = 87.3442f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { 1782.038f, -81.4923f, 188.8666f };
					*uParam3 = 92.9392f;
					*uParam4 = func_76(iParam0, 2);
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -358.9362f, 6101.992f, 30.5445f };
					*uParam3 = 124.1256f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -348.5437f, 6102.846f, 30.5442f };
					*uParam3 = 115.8979f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -354.9039f, 6112.223f, 30.5402f };
					*uParam3 = 155.6832f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -341.2615f, 6111.447f, 30.542f };
					*uParam3 = 114.7182f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -347.4731f, 6120.339f, 30.5401f };
					*uParam3 = 161.4131f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -376.9227f, 6129.001f, 30.5322f };
					*uParam3 = 153.5222f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -384.3775f, 6136.947f, 30.4047f };
					*uParam3 = 187.2874f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -389.1951f, 6129.617f, 30.5795f };
					*uParam3 = 181.9189f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -399.0005f, 6127.275f, 30.549f };
					*uParam3 = 204.8398f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -383.5045f, 6120.464f, 30.5795f };
					*uParam3 = 140.9251f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -391.13f, 6120.804f, 30.4824f };
					*uParam3 = 201.1372f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -402.7893f, 6117.366f, 30.403f };
					*uParam3 = 226.6899f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -412.6236f, 6114.75f, 30.403f };
					*uParam3 = 226.6899f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { -394.3771f, 6111.254f, 30.4438f };
					*uParam3 = 239.3517f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -389.6141f, 6105.142f, 30.5445f };
					*uParam3 = 223.9884f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { -393.7008f, 6063.039f, 30.6001f };
					*uParam3 = 307.3006f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 16:
					*uParam2 = { -390.5935f, 6052.42f, 30.6001f };
					*uParam3 = 318.0318f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 17:
					*uParam2 = { -370.7218f, 6062.16f, 30.6001f };
					*uParam3 = 22.496f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 18:
					*uParam2 = { -360.3093f, 6063.834f, 30.6001f };
					*uParam3 = 37.8362f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 19:
					*uParam2 = { -342.4209f, 6079.654f, 30.3972f };
					*uParam3 = 68.9811f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 20:
					*uParam2 = { -341.2047f, 6070.171f, 30.4855f };
					*uParam3 = 63.9301f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -329.9387f, 6066.402f, 30.3113f };
					*uParam3 = 44.5343f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -335.7858f, 6122.277f, 31.2548f };
					*uParam3 = 129.6423f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -342.0471f, 6128.171f, 31.2548f };
					*uParam3 = 142.1917f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -349.7313f, 6135.283f, 31.2548f };
					*uParam3 = 158.8037f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -356.2828f, 6125.203f, 30.5402f };
					*uParam3 = 199.7626f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -359.0895f, 6139.214f, 30.5635f };
					*uParam3 = 124.4663f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -369.4224f, 6152.725f, 30.4406f };
					*uParam3 = 161.3973f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -375.9839f, 6141.022f, 30.4406f };
					*uParam3 = 161.3973f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -369.7337f, 6134.166f, 30.5525f };
					*uParam3 = 136.8736f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -359.228f, 6073.3f, 30.5975f };
					*uParam3 = 40.8648f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 31:
					*uParam2 = { -350.0499f, 6083.418f, 30.3773f };
					*uParam3 = 81.9925f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 32:
					*uParam2 = { -332.9335f, 6056.562f, 30.218f };
					*uParam3 = 34.6386f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 33:
					*uParam2 = { -319.7262f, 6071.655f, 30.4404f };
					*uParam3 = 98.0741f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 34:
					*uParam2 = { -305.5597f, 6086.671f, 30.3145f };
					*uParam3 = 105.1401f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 35:
					*uParam2 = { -315.9f, 6098.8f, 30.5622f };
					*uParam3 = 68.0701f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 36:
					*uParam2 = { -321.8067f, 6105.211f, 30.5847f };
					*uParam3 = 77.1148f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 37:
					*uParam2 = { -333.3944f, 6102.061f, 30.5452f };
					*uParam3 = 94.9811f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 38:
					*uParam2 = { -328.1533f, 6111.544f, 30.5992f };
					*uParam3 = 112.3565f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 39:
					*uParam2 = { -346.6402f, 6170.479f, 30.5104f };
					*uParam3 = 153.9383f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 40:
					*uParam2 = { -348.4091f, 6161.741f, 30.5903f };
					*uParam3 = 127.3381f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -357.501f, 6164.666f, 30.3218f };
					*uParam3 = 165.9396f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -362.3921f, 6158.998f, 30.4267f };
					*uParam3 = 164.6814f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -299.2778f, 6094.682f, 30.3967f };
					*uParam3 = 97.7633f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -403.1499f, 6144.179f, 30.5344f };
					*uParam3 = 192.2655f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -419.8507f, 6128.894f, 30.3768f };
					*uParam3 = 226.1505f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -403.4776f, 6109.125f, 30.432f };
					*uParam3 = 231.4631f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -418.8898f, 6102.594f, 30.5063f };
					*uParam3 = 250.378f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -423.8823f, 6087.721f, 30.3067f };
					*uParam3 = 249.7169f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -409.3334f, 6087.301f, 30.6001f };
					*uParam3 = 255.2337f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -415.4413f, 6074.564f, 30.6001f };
					*uParam3 = 295.8184f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -424.9092f, 6072.749f, 30.4263f };
					*uParam3 = 283.0375f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -420.9166f, 6060.098f, 30.5557f };
					*uParam3 = 253.9669f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -410.8875f, 6060.549f, 30.6001f };
					*uParam3 = 233.6391f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -401.7228f, 6048.293f, 30.6001f };
					*uParam3 = 316.9792f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -410.8336f, 6049.957f, 30.7181f };
					*uParam3 = 282.7038f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -388.0199f, 6039.768f, 30.5993f };
					*uParam3 = 17.0043f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -395.2367f, 6033.086f, 30.6906f };
					*uParam3 = 344.4481f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -385.8562f, 6026.026f, 30.7199f };
					*uParam3 = 19.855f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -380.7711f, 6033.284f, 30.5989f };
					*uParam3 = 40.8827f;
					*uParam4 = func_76(iParam0, 2);
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -692.3021f, 5591.033f, 31.803f };
					*uParam3 = 74.8653f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -688.3215f, 5575.978f, 38.7867f };
					*uParam3 = 59.0735f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -697.7473f, 5566.13f, 37.8698f };
					*uParam3 = 50.5049f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -707.0853f, 5561.903f, 37.7135f };
					*uParam3 = 46.5953f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -718.0601f, 5562.404f, 35.1231f };
					*uParam3 = 35.9231f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -729.6589f, 5559.356f, 33.8316f };
					*uParam3 = 2.3291f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -723.8281f, 5544.737f, 34.8933f };
					*uParam3 = 18.3278f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -780.6183f, 5563.971f, 32.6778f };
					*uParam3 = 329.6704f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -767.3f, 5569.303f, 35.3f };
					*uParam3 = 331.3245f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -772.2f, 5581.6f, 32.6824f };
					*uParam3 = 301.3555f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -778.3644f, 5588.715f, 32.6826f };
					*uParam3 = 270.8067f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -768.7381f, 5595.103f, 32.6827f };
					*uParam3 = 230.1011f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -782.3171f, 5573.262f, 32.6847f };
					*uParam3 = 294.6598f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { -781.341f, 5582.1f, 32.6771f };
					*uParam3 = 336.2302f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -753.9799f, 5627.107f, 27.1403f };
					*uParam3 = 171.4856f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { -730.2549f, 5635.994f, 27.8518f };
					*uParam3 = 162.9716f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 16:
					*uParam2 = { -723.6004f, 5622.383f, 28.385f };
					*uParam3 = 172.2795f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 17:
					*uParam2 = { -718.595f, 5631.016f, 27.7666f };
					*uParam3 = 172.2795f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 18:
					*uParam2 = { -708.1818f, 5621.512f, 29.6452f };
					*uParam3 = 126.8752f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 19:
					*uParam2 = { -696.5601f, 5615.674f, 29.9981f };
					*uParam3 = 125.8635f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 20:
					*uParam2 = { -708.3126f, 5550.206f, 36.7429f };
					*uParam3 = 29.6831f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -766.3f, 5544.3f, 32.6826f };
					*uParam3 = 30.2344f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -749.5f, 5527.9f, 33.1f };
					*uParam3 = 346.3935f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -768.97f, 5520.835f, 32.6799f };
					*uParam3 = 340.5899f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -763.8516f, 5533.312f, 32.6785f };
					*uParam3 = 1.7896f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -775.123f, 5542.04f, 32.6934f };
					*uParam3 = 349.4598f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -766.6f, 5553.1f, 34.4f };
					*uParam3 = 1.046f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -771.2969f, 5556.745f, 32.6834f };
					*uParam3 = 349.9529f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -781.6904f, 5555.604f, 32.6802f };
					*uParam3 = 351.5664f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -769.5516f, 5621.658f, 26.7823f };
					*uParam3 = 235.7381f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -761.2958f, 5636.444f, 25.4519f };
					*uParam3 = 168.4409f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 31:
					*uParam2 = { -760.2766f, 5661.296f, 22.954f };
					*uParam3 = 164.5044f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 32:
					*uParam2 = { -741.7708f, 5648.583f, 25.8433f };
					*uParam3 = 171.5803f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 33:
					*uParam2 = { -731.1522f, 5650.561f, 27.2619f };
					*uParam3 = 172.6602f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 34:
					*uParam2 = { -721.4506f, 5664.842f, 26.6086f };
					*uParam3 = 175.8839f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 35:
					*uParam2 = { -719.6653f, 5647.082f, 28.1182f };
					*uParam3 = 166.6596f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 36:
					*uParam2 = { -708.6494f, 5641.488f, 29.7045f };
					*uParam3 = 139.2498f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 37:
					*uParam2 = { -698.6087f, 5635.278f, 31.1732f };
					*uParam3 = 130.991f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 38:
					*uParam2 = { -764.6f, 5648.1f, 23.8802f };
					*uParam3 = 183.034f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 39:
					*uParam2 = { -750.9f, 5666.5f, 23.3295f };
					*uParam3 = 231.3595f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 40:
					*uParam2 = { -719.377f, 5680.363f, 25.3398f };
					*uParam3 = 160.6696f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -698.3569f, 5694.537f, 26.6459f };
					*uParam3 = 147.8193f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -680.2346f, 5676.271f, 30.6741f };
					*uParam3 = 86.9398f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -676.3746f, 5655.031f, 32.0498f };
					*uParam3 = 139.4649f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -680.2036f, 5638.799f, 32.6927f };
					*uParam3 = 134.8275f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -650.3818f, 5653.84f, 33.0871f };
					*uParam3 = 123.0167f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -670.8715f, 5583.509f, 38.7761f };
					*uParam3 = 85.3828f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -743.9585f, 5544.044f, 32.6886f };
					*uParam3 = 10.6683f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -786.1422f, 5543.069f, 32.7461f };
					*uParam3 = 320.9388f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -800.3854f, 5544.438f, 32.1822f };
					*uParam3 = 318.5256f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -808.8489f, 5557.178f, 31.0331f };
					*uParam3 = 284.0945f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -804.6185f, 5577.981f, 30.1522f };
					*uParam3 = 312.7694f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -804.7294f, 5593.23f, 28.3762f };
					*uParam3 = 257.0917f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -796.4553f, 5614.668f, 26.6406f };
					*uParam3 = 245.4986f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -790.2338f, 5632.483f, 25.0732f };
					*uParam3 = 224.0737f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -807.922f, 5624.847f, 24.5138f };
					*uParam3 = 240.116f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -778.2f, 5620.3f, 27f };
					*uParam3 = 221.8036f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -820.9523f, 5595.459f, 24.6204f };
					*uParam3 = 248.8524f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -712.2f, 5689.9f, 26f };
					*uParam3 = 156.9858f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -699.6256f, 5678.481f, 29.242f };
					*uParam3 = 137.245f;
					*uParam4 = func_76(iParam0, 2);
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 2504.708f, 3832.864f, 44.2233f };
					*uParam3 = 183.6139f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { 2470.234f, 3832.214f, 39.2978f };
					*uParam3 = 221.0469f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { 2469.984f, 3815.587f, 39.1223f };
					*uParam3 = 236.1043f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { 2472.682f, 3802.595f, 39.5029f };
					*uParam3 = 252.6169f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { 2448.337f, 3799.731f, 39.2155f };
					*uParam3 = 245.4931f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { 2429.278f, 3803.292f, 38.8134f };
					*uParam3 = 251.2017f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { 2461.768f, 3786.931f, 40.1218f };
					*uParam3 = 273.0054f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { 2446.433f, 3784.864f, 39.6849f };
					*uParam3 = 253.3649f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { 2431.84f, 3775.977f, 39.5771f };
					*uParam3 = 262.8813f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { 2426.948f, 3759.106f, 40.5694f };
					*uParam3 = 286.9683f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { 2413.091f, 3747.124f, 40.6396f };
					*uParam3 = 291.6124f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { 2435.193f, 3749.984f, 41.1655f };
					*uParam3 = 292.603f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { 2447.66f, 3752.583f, 41.4906f };
					*uParam3 = 297.6301f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { 2458.258f, 3758.142f, 41.1153f };
					*uParam3 = 303.2986f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { 2467.802f, 3750.602f, 41.4918f };
					*uParam3 = 303.2986f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { 2473.253f, 3734.285f, 41.4643f };
					*uParam3 = 319.8912f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 16:
					*uParam2 = { 2474.793f, 3718.189f, 43.5229f };
					*uParam3 = 353.5786f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 17:
					*uParam2 = { 2494.569f, 3724.297f, 42.2386f };
					*uParam3 = 354.6885f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 18:
					*uParam2 = { 2336.604f, 3786.805f, 35.4554f };
					*uParam3 = 271.7747f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 19:
					*uParam2 = { 2449.885f, 3769.517f, 40.3259f };
					*uParam3 = 284.606f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 20:
					*uParam2 = { 2486.191f, 3708.932f, 42.8584f };
					*uParam3 = 338.9825f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { 2441.525f, 3726.493f, 49.833f };
					*uParam3 = 305.777f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { 2435.716f, 3718.48f, 50.9846f };
					*uParam3 = 316.2304f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { 2414.73f, 3734.144f, 41.656f };
					*uParam3 = 304.645f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { 2397.829f, 3753.812f, 38.2667f };
					*uParam3 = 277.5322f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { 2413.961f, 3768.889f, 38.9386f };
					*uParam3 = 262.8003f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { 2418.116f, 3784.66f, 38.7937f };
					*uParam3 = 271.0046f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { 2402.416f, 3792.671f, 38.1692f };
					*uParam3 = 252.6272f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { 2392.174f, 3800.214f, 37.3174f };
					*uParam3 = 233.5119f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { 2379.034f, 3800.104f, 36.6627f };
					*uParam3 = 253.7779f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { 2421.42f, 3819.218f, 36.6498f };
					*uParam3 = 240.598f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 31:
					*uParam2 = { 2433.665f, 3833.4f, 36.8711f };
					*uParam3 = 235.1875f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 32:
					*uParam2 = { 2446.784f, 3840.43f, 36.9341f };
					*uParam3 = 232.4636f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 33:
					*uParam2 = { 2462.195f, 3846.708f, 37.3552f };
					*uParam3 = 199.2328f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 34:
					*uParam2 = { 2477.133f, 3855.754f, 37.2602f };
					*uParam3 = 202.825f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 35:
					*uParam2 = { 2450.037f, 3811.51f, 39.475f };
					*uParam3 = 250.1392f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 36:
					*uParam2 = { 2485.065f, 3829.442f, 39.1108f };
					*uParam3 = 211.7988f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 37:
					*uParam2 = { 2484.83f, 3814.141f, 39.3918f };
					*uParam3 = 229.5693f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 38:
					*uParam2 = { 2566.085f, 3806.854f, 64.6304f };
					*uParam3 = 105.4003f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 39:
					*uParam2 = { 2585.664f, 3806.854f, 71.7304f };
					*uParam3 = 110.9439f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 40:
					*uParam2 = { 2620.499f, 3798.988f, 78.4414f };
					*uParam3 = 80.1436f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { 2612.831f, 3816.725f, 77.148f };
					*uParam3 = 105.885f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { 2481.003f, 3874.722f, 38.2954f };
					*uParam3 = 168.6165f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { 2439.931f, 3869.727f, 36.8359f };
					*uParam3 = 194.6768f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { 2415.056f, 3867.74f, 36.4367f };
					*uParam3 = 227.8888f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { 2405.057f, 3840.129f, 37.6172f };
					*uParam3 = 237.4134f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { 2402.643f, 3831.987f, 37.3666f };
					*uParam3 = 243.847f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { 2393.434f, 3820.804f, 37.399f };
					*uParam3 = 274.6625f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { 2379.645f, 3814.471f, 37.141f };
					*uParam3 = 261.4475f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { 2362.336f, 3795.185f, 36.6862f };
					*uParam3 = 270.3616f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { 2347.031f, 3771.605f, 36.6862f };
					*uParam3 = 270.3616f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { 2390.352f, 3771.605f, 37.0186f };
					*uParam3 = 277.3893f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { 2376.869f, 3747.89f, 43.6471f };
					*uParam3 = 283.6571f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { 2397.29f, 3720.224f, 45.2658f };
					*uParam3 = 309.3541f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { 2389.842f, 3708.438f, 48.8025f };
					*uParam3 = 328.7773f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { 2414.263f, 3688.072f, 55.1156f };
					*uParam3 = 318.0387f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { 2425.977f, 3703.052f, 52.2051f };
					*uParam3 = 321.8817f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { 2457.983f, 3723.803f, 47.774f };
					*uParam3 = 320.001f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { 2467.429f, 3686.109f, 46.7001f };
					*uParam3 = 326.4034f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { 2500.671f, 3701.153f, 40.9656f };
					*uParam3 = 343.9347f;
					*uParam4 = func_76(iParam0, 2);
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -393.9336f, 1106.463f, 324.963f };
					*uParam3 = 3.7402f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -410.0362f, 1109.404f, 324.9667f };
					*uParam3 = 333.049f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -428.784f, 1115.099f, 325.868f };
					*uParam3 = 300.9811f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -447.0386f, 1119.385f, 324.9694f };
					*uParam3 = 291.3791f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -442.3369f, 1130.731f, 324.9604f };
					*uParam3 = 277.1605f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -440.9719f, 1142.607f, 324.9557f };
					*uParam3 = 250.3044f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -446.4467f, 1154.628f, 325.0045f };
					*uParam3 = 248.4445f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -434.5363f, 1160.321f, 324.9632f };
					*uParam3 = 230.0039f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -424.4414f, 1172.293f, 325.0043f };
					*uParam3 = 219.6946f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -421.9871f, 1161.774f, 325.0063f };
					*uParam3 = 219.721f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -427.4456f, 1148.051f, 325.0044f };
					*uParam3 = 230.6394f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -428.7997f, 1136.869f, 325.0044f };
					*uParam3 = 260.5906f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -431.5406f, 1126.397f, 325.0403f };
					*uParam3 = 280.8301f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { -416.0247f, 1120.771f, 324.9593f };
					*uParam3 = 308.4634f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -419.4272f, 1131.455f, 325.0045f };
					*uParam3 = 267.8754f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { -418.7003f, 1142.939f, 324.962f };
					*uParam3 = 234.7959f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 16:
					*uParam2 = { -408.7494f, 1158.555f, 325.0084f };
					*uParam3 = 202.298f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 17:
					*uParam2 = { -411.2803f, 1169.951f, 324.9431f };
					*uParam3 = 205.6539f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 18:
					*uParam2 = { -398.8847f, 1164.101f, 325.0133f };
					*uParam3 = 184.3107f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 19:
					*uParam2 = { -388.1964f, 1173.05f, 324.8147f };
					*uParam3 = 166.4872f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 20:
					*uParam2 = { -368.8524f, 1165.414f, 324.8589f };
					*uParam3 = 143.9187f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -378.9884f, 1168.124f, 324.9442f };
					*uParam3 = 138.8804f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -386.2831f, 1186.969f, 324.8583f };
					*uParam3 = 168.679f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -424.0227f, 1207.077f, 324.8583f };
					*uParam3 = 192.8885f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -425.9954f, 1196.52f, 324.8583f };
					*uParam3 = 182.6931f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -400.9391f, 1177.741f, 324.7394f };
					*uParam3 = 183.8522f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -414.3408f, 1178.525f, 324.7417f };
					*uParam3 = 190.7249f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -424.777f, 1183.848f, 324.7417f };
					*uParam3 = 204.1173f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -438.3099f, 1184.969f, 324.9972f };
					*uParam3 = 216.3494f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -440.8298f, 1174.33f, 324.9674f };
					*uParam3 = 236.8431f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -450.9589f, 1165.905f, 324.9547f };
					*uParam3 = 238.6017f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 31:
					*uParam2 = { -459.008f, 1156.905f, 324.9622f };
					*uParam3 = 235.1455f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 32:
					*uParam2 = { -466.6086f, 1151.548f, 324.9625f };
					*uParam3 = 262.671f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 33:
					*uParam2 = { -463.0775f, 1140.172f, 325.0044f };
					*uParam3 = 255.8193f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 34:
					*uParam2 = { -453.6404f, 1141.622f, 325.0044f };
					*uParam3 = 270.7759f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 35:
					*uParam2 = { -468.3044f, 1126.492f, 324.9643f };
					*uParam3 = 263.469f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 36:
					*uParam2 = { -457.6102f, 1126.904f, 324.9546f };
					*uParam3 = 262.384f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 37:
					*uParam2 = { -385.6385f, 1102.252f, 324.7293f };
					*uParam3 = 25.2881f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 38:
					*uParam2 = { -383.8219f, 1093.566f, 324.3149f };
					*uParam3 = 2.7963f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 39:
					*uParam2 = { -390.1671f, 1092.119f, 325.2136f };
					*uParam3 = 20.6423f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 40:
					*uParam2 = { -399.5618f, 1081.56f, 326.7102f };
					*uParam3 = 304.4997f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -390.9579f, 1075.828f, 323.3234f };
					*uParam3 = 339.4828f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -386.3601f, 1084.166f, 323.7919f };
					*uParam3 = 354.7784f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -343.6368f, 1155.187f, 324.7273f };
					*uParam3 = 115.9307f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -350.9581f, 1163.98f, 324.5156f };
					*uParam3 = 116.0754f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -359.8979f, 1158.566f, 324.6362f };
					*uParam3 = 120.9973f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -399.4072f, 1196.483f, 324.7383f };
					*uParam3 = 182.8968f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -400.8836f, 1210.983f, 325.0406f };
					*uParam3 = 195.0742f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -381.3676f, 1203.004f, 324.8555f };
					*uParam3 = 162.6808f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -377.298f, 1218.699f, 324.8556f };
					*uParam3 = 161.6516f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -416.3955f, 1238.681f, 324.8614f };
					*uParam3 = 196.7896f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -420.2233f, 1223.627f, 324.8551f };
					*uParam3 = 195.917f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -449.2621f, 1187.425f, 324.988f };
					*uParam3 = 245.0986f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -462.3227f, 1187.615f, 324.7824f };
					*uParam3 = 250.3676f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -472.915f, 1142.98f, 324.9524f };
					*uParam3 = 260.1427f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -476.2405f, 1120.76f, 324.9513f };
					*uParam3 = 281.8387f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -480.6375f, 1107.113f, 324.9517f };
					*uParam3 = 330.5185f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -467.9135f, 1119.13f, 324.975f };
					*uParam3 = 291.4161f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -472.083f, 1186.256f, 324.4922f };
					*uParam3 = 248.7844f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -336.9653f, 1155.261f, 324.8132f };
					*uParam3 = 116.8097f;
					*uParam4 = func_76(iParam0, 2);
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 457.789f, -1306.329f, 28.3817f };
					*uParam3 = 213.4484f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { 462.9742f, -1315.816f, 28.3365f };
					*uParam3 = 211.6687f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { 491.3282f, -1343.662f, 28.3462f };
					*uParam3 = 29.1021f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { 488.5634f, -1353.807f, 28.365f };
					*uParam3 = 350.4963f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { 489.778f, -1362.178f, 28.3936f };
					*uParam3 = 333.8013f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { 487.9373f, -1371.324f, 28.3937f };
					*uParam3 = 350.2063f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { 491.692f, -1377.681f, 28.4808f };
					*uParam3 = 6.2341f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { 508.4521f, -1332.725f, 28.8217f };
					*uParam3 = 81.6066f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { 482.3437f, -1302.914f, 28.3646f };
					*uParam3 = 185.9192f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { 489.6881f, -1306.12f, 28.375f };
					*uParam3 = 181.4375f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { 486.8906f, -1314.552f, 28.3349f };
					*uParam3 = 201.3654f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { 510.3459f, -1328.159f, 28.4041f };
					*uParam3 = 38.9104f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { 503.6635f, -1316.644f, 28.254f };
					*uParam3 = 78.5885f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { 498.5652f, -1306.801f, 28.375f };
					*uParam3 = 181.4375f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { 494.3388f, -1296.788f, 27.8975f };
					*uParam3 = 181.588f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { 445.3724f, -1312.777f, 33.034f };
					*uParam3 = 231.2194f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 16:
					*uParam2 = { 494.6642f, -1289.089f, 28.3994f };
					*uParam3 = 190.9093f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 17:
					*uParam2 = { 512.1788f, -1296.798f, 29.0244f };
					*uParam3 = 127.6323f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 18:
					*uParam2 = { 516.3178f, -1306.591f, 29.0325f };
					*uParam3 = 105.4519f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 19:
					*uParam2 = { 522.4741f, -1315.716f, 28.6153f };
					*uParam3 = 86.1907f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 20:
					*uParam2 = { 530.4f, -1324.764f, 28.611f };
					*uParam3 = 86.0417f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { 512.5676f, -1266.132f, 29.2571f };
					*uParam3 = 138.7522f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 22:
					*uParam2 = { 503.5058f, -1408.527f, 28.4094f };
					*uParam3 = 38.8401f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { 494.4435f, -1405.518f, 28.4094f };
					*uParam3 = 10.3526f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { 480.3399f, -1404.552f, 28.3783f };
					*uParam3 = 327.4608f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { 486.9532f, -1397.729f, 28.4044f };
					*uParam3 = 9.2252f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { 478.9936f, -1390.911f, 28.4649f };
					*uParam3 = 301.6067f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { 491.3508f, -1387.024f, 28.4781f };
					*uParam3 = 349.894f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { 423.8583f, -1342.402f, 34.9472f };
					*uParam3 = 261.565f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { 436.9487f, -1354.909f, 32.8767f };
					*uParam3 = 281.1848f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { 418.0431f, -1351.691f, 30.4924f };
					*uParam3 = 242.0479f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 31:
					*uParam2 = { 420.5738f, -1360.155f, 31.3616f };
					*uParam3 = 258.2115f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 32:
					*uParam2 = { 427.6197f, -1367.648f, 32.4927f };
					*uParam3 = 295.2934f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 33:
					*uParam2 = { 464.2118f, -1407.325f, 28.4406f };
					*uParam3 = 264.6266f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 34:
					*uParam2 = { 473.348f, -1411.325f, 28.4462f };
					*uParam3 = 282.62f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 35:
					*uParam2 = { 482.7524f, -1415.458f, 28.2625f };
					*uParam3 = 321.8356f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 36:
					*uParam2 = { 495.2037f, -1418.058f, 28.2691f };
					*uParam3 = 7.1158f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 37:
					*uParam2 = { 503.2256f, -1399.498f, 29.6255f };
					*uParam3 = 163.0629f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 38:
					*uParam2 = { 504.0861f, -1418.874f, 28.399f };
					*uParam3 = 19.1681f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 39:
					*uParam2 = { 515.1004f, -1418.266f, 28.4334f };
					*uParam3 = 70.436f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 40:
					*uParam2 = { 526.7444f, -1417.327f, 28.3217f };
					*uParam3 = 77.2632f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { 537.8759f, -1339.477f, 28.7478f };
					*uParam3 = 32.234f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { 523.1588f, -1342.832f, 28.402f };
					*uParam3 = 44.3382f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { 516.2181f, -1333.808f, 28.4019f };
					*uParam3 = 42.2223f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { 545.4319f, -1321.294f, 28.8519f };
					*uParam3 = 82.4327f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { 543.2325f, -1310.26f, 29.2949f };
					*uParam3 = 90.2737f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { 519.066f, -1293.935f, 27.1144f };
					*uParam3 = 165.5317f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { 526.7755f, -1289.459f, 29.7686f };
					*uParam3 = 143.1124f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { 523.58f, -1272.328f, 30.0824f };
					*uParam3 = 138.49f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { 524.081f, -1260.682f, 29.5842f };
					*uParam3 = 132.1786f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { 517.0681f, -1239.373f, 29.9303f };
					*uParam3 = 154.6133f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { 516.2507f, -1253.02f, 29.6427f };
					*uParam3 = 162.9373f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { 513.244f, -1278.351f, 29.7743f };
					*uParam3 = 150.8734f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { 493.7339f, -1268.213f, 28.392f };
					*uParam3 = 179.546f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { 494.1401f, -1281.491f, 28.394f };
					*uParam3 = 175.0507f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { 555.4178f, -1356.743f, 28.7709f };
					*uParam3 = 50.8085f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { 475.9386f, -1304.794f, 32.0473f };
					*uParam3 = 112.0399f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { 465.516f, -1301.604f, 32.0473f };
					*uParam3 = 189.1235f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { 440.8456f, -1321.148f, 30.3086f };
					*uParam3 = 235.1875f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { 421.228f, -1316.188f, 30.3078f };
					*uParam3 = 236.0292f;
					*uParam4 = func_76(iParam0, 2);
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1432.451f, 236.9887f, 59.1671f };
					*uParam3 = 127.6804f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -1434.54f, 243.4075f, 59.3382f };
					*uParam3 = 176.5221f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -1425.965f, 233.6748f, 58.9327f };
					*uParam3 = 67.1914f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -1431.833f, 176.7196f, 55.6359f };
					*uParam3 = 115.4533f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -1436.571f, 168.3388f, 54.8029f };
					*uParam3 = 42.4646f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -1441.14f, 162.3594f, 54.1846f };
					*uParam3 = 5.2323f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -1526.297f, 160.2353f, 53.2037f };
					*uParam3 = 277.6807f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -1518.497f, 145.7663f, 54.7527f };
					*uParam3 = 310.257f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -1506.654f, 132.8194f, 54.7529f };
					*uParam3 = 324.8665f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -1495.287f, 118.9496f, 54.7569f };
					*uParam3 = 328.5237f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -1482.5f, 114.8686f, 54.589f };
					*uParam3 = 341.3174f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -1465.16f, 114.8327f, 52.2589f };
					*uParam3 = 357.6763f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -1451.507f, 64.7578f, 51.4041f };
					*uParam3 = 91.7588f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 13:
					*uParam2 = { -1461.18f, 63.8165f, 51.8802f };
					*uParam3 = 26.7651f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -1502.689f, 44.4251f, 53.8926f };
					*uParam3 = 308.9227f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 15:
					*uParam2 = { -1470.511f, 65.7823f, 52.315f };
					*uParam3 = 20.0152f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 16:
					*uParam2 = { -1485.597f, 73.3039f, 53.7206f };
					*uParam3 = 353.3321f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 17:
					*uParam2 = { -1598.528f, 149.7495f, 58.6949f };
					*uParam3 = 277.3246f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 18:
					*uParam2 = { -1583.425f, 155.9397f, 57.9714f };
					*uParam3 = 236.3493f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 19:
					*uParam2 = { -1561.721f, 153.229f, 56.9434f };
					*uParam3 = 282.9456f;
					*uParam4 = func_76(iParam0, 0);
					break;
				
				case 20:
					*uParam2 = { -1597.874f, 138.8909f, 58.9224f };
					*uParam3 = 291.1977f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -1624.61f, 118.2495f, 60.9528f };
					*uParam3 = 286.5444f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -1635.546f, 98.7833f, 61.5816f };
					*uParam3 = 307.8016f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -1615.593f, 74.5104f, 60.5005f };
					*uParam3 = 358.8846f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -1623.266f, 72.784f, 60.7418f };
					*uParam3 = 303.1707f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -1611.091f, 66.0932f, 60.1192f };
					*uParam3 = 8.1702f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -1485.756f, 49.183f, 53.0408f };
					*uParam3 = 329.1895f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -1464.841f, 52.066f, 52.0575f };
					*uParam3 = 26.7727f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -1450.809f, 49.7653f, 51.6797f };
					*uParam3 = 42.6481f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -1462.326f, 88.4265f, 53.8826f };
					*uParam3 = 353.3917f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -1491.87f, 95.0945f, 54.1122f };
					*uParam3 = 314.473f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 31:
					*uParam2 = { -1476.808f, 108.3742f, 53.8967f };
					*uParam3 = 348.5514f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 32:
					*uParam2 = { -1443.964f, 153.6641f, 53.4228f };
					*uParam3 = 5.4015f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 33:
					*uParam2 = { -1422.558f, 161.544f, 55.0401f };
					*uParam3 = 41.9873f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 34:
					*uParam2 = { -1425.595f, 187.9517f, 56.689f };
					*uParam3 = 129.5252f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 35:
					*uParam2 = { -1411.395f, 239.4108f, 58.8958f };
					*uParam3 = 94.2972f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 36:
					*uParam2 = { -1415.572f, 249.2832f, 59.1409f };
					*uParam3 = 122.1957f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 37:
					*uParam2 = { -1459.738f, 238.6189f, 58.7949f };
					*uParam3 = 180.7222f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 38:
					*uParam2 = { -1573.812f, 161.2271f, 57.4846f };
					*uParam3 = 134.8161f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 39:
					*uParam2 = { -1589.462f, 172.0972f, 57.9565f };
					*uParam3 = 211.4448f;
					*uParam4 = func_76(iParam0, 1);
					break;
				
				case 40:
					*uParam2 = { -1599.631f, 177.347f, 58.4655f };
					*uParam3 = 218.6622f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -1605.247f, 166.7319f, 58.6104f };
					*uParam3 = 240.273f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -1610.489f, 133.2583f, 59.7152f };
					*uParam3 = 286.0001f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -1609.133f, 118.5496f, 59.985f };
					*uParam3 = 309.8568f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -1600.147f, 104.7807f, 60.079f };
					*uParam3 = 345.0445f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -1595.336f, 88.6422f, 59.9101f };
					*uParam3 = 325.4662f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -1571.039f, 95.7035f, 57.4104f };
					*uParam3 = 320.9921f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -1528.822f, 60.1519f, 56.3681f };
					*uParam3 = 299.9443f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -1581.063f, 69.4907f, 59.9072f };
					*uParam3 = 302.81f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -1502.428f, 75.9977f, 54.5965f };
					*uParam3 = 333.9787f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -1533.281f, 81.1755f, 55.8724f };
					*uParam3 = 288.1328f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -1533.984f, 102.1409f, 55.8727f };
					*uParam3 = 232.9465f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -1598.389f, 49.5038f, 59.7089f };
					*uParam3 = 24.7707f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -1613.303f, 45.0376f, 60.9909f };
					*uParam3 = 352.9884f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -1632.785f, 50.5315f, 61.543f };
					*uParam3 = 325.0906f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -1636.258f, 69.9035f, 61.7993f };
					*uParam3 = 291.5305f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -1429.691f, 143.2913f, 53.2468f };
					*uParam3 = 17.521f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -1408.523f, 152.6476f, 54.6591f };
					*uParam3 = 54.2465f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -1403.501f, 245.4762f, 59.2192f };
					*uParam3 = 112.9726f;
					*uParam4 = func_76(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -1417.563f, 260.8751f, 59.5187f };
					*uParam3 = 146.682f;
					*uParam4 = func_76(iParam0, 2);
					break;
			}
			break;
	}
}

float func_76(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_9318;
				
				case 1:
					return Global_262145.f_9319;
				
				case 2:
					return Global_262145.f_9320;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_9321;
				
				case 1:
					return Global_262145.f_9322;
				
				case 2:
					return Global_262145.f_9323;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_9324;
				
				case 1:
					return Global_262145.f_9325;
				
				case 2:
					return Global_262145.f_9326;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_9327;
				
				case 1:
					return Global_262145.f_9328;
				
				case 2:
					return Global_262145.f_9329;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_9330;
				
				case 1:
					return Global_262145.f_9331;
				
				case 2:
					return Global_262145.f_9332;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_9333;
				
				case 1:
					return Global_262145.f_9334;
				
				case 2:
					return Global_262145.f_9335;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_9336;
				
				case 1:
					return Global_262145.f_9337;
				
				case 2:
					return Global_262145.f_9338;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_9339;
				
				case 1:
					return Global_262145.f_9340;
				
				case 2:
					return Global_262145.f_9341;
				
				default:
			}
			break;
	}
	return 1f;
}

void func_77(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	if (bParam0)
	{
		Global_2404919.f_1135 = iParam1;
		Global_2404919.f_1136 = iParam2;
		Global_2404919.f_1137 = iParam10;
		func_71();
		func_78(8, 0, 0);
		Global_2404919.f_630 = 1;
		Global_2404919.f_1140 = iParam3;
		Global_2404919.f_1141 = iParam4;
		Global_2404919.f_1138 = iParam5;
		Global_2404919.f_1139 = iParam6;
		Global_2404919.f_1142 = iParam7;
		Global_2404919.f_1143 = iParam8;
		Global_2404919.f_1144 = iParam9;
	}
	else
	{
		func_71();
		func_78(0, 0, 0);
		Global_2404919.f_630 = 0;
	}
}

void func_78(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2409431 = 0;
	}
	Global_2404919.f_469 = iParam0;
	Global_2404919.f_469.f_1 = unk_0x46CF50E0E5A24635();
	Global_2404919.f_469.f_2 = iParam1;
	Global_2404919.f_469.f_3 = iParam2;
}

bool func_79()
{
	return Global_1573828;
}

int func_80(int iParam0)
{
	if (unk_0xDCC86F723E82125E(Global_1587175[iParam0 /*410*/].f_247.f_6, 14))
	{
		return 1;
	}
	if (unk_0xDCC86F723E82125E(Global_1587175[iParam0 /*410*/].f_247.f_6, 11))
	{
		return 1;
	}
	return 0;
}

int func_81(int iParam0, bool bParam1)
{
	if (Global_1587175[iParam0 /*410*/].f_247.f_8 > 0)
	{
		if (bParam1)
		{
			if (unk_0xDCC86F723E82125E(Global_1587175[iParam0 /*410*/].f_247.f_6, 0))
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

void func_82(int iParam0)
{
	if (func_15(iParam0) != 0)
	{
		func_286(iParam0);
		func_83(iParam0);
	}
}

void func_83(int iParam0)
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8[3];
	
	if (iLocal_3352 == -1)
	{
		return;
	}
	if (func_237(0, 0))
	{
		return;
	}
	iVar6 = (Global_262145.f_9098 + 1000 - func_9(&(Local_98.f_1.f_1), 0, 0));
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
	if (!unk_0xDCC86F723E82125E(Local_396[iLocal_3352 /*5*/].f_4, 12))
	{
		if (!func_142(iLocal_3352))
		{
			func_105(iVar6, iVar7, func_106());
			return;
		}
	}
	func_104(iVar6);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_1243[iParam0 /*68*/].f_53[iVar0 /*4*/] = -1;
		Local_1243[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1 = -1;
		Local_1243[iParam0 /*68*/].f_53[iVar0 /*4*/].f_2 = func_48();
		Local_1243[iParam0 /*68*/].f_53[iVar0 /*4*/].f_3 = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_1243[iParam0 /*68*/].f_53[iVar0 /*4*/] = Local_98.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/];
		Local_1243[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1 = Local_98.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/].f_1;
		Local_1243[iParam0 /*68*/].f_53[iVar0 /*4*/].f_2 = Local_98.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/].f_2;
		Local_1243[iParam0 /*68*/].f_53[iVar0 /*4*/].f_3 = unk_0xBBDA792448DB5A89(func_58(Local_98.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/].f_3));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uVar1[iVar0] = func_58(Local_1243[iParam0 /*68*/].f_53[iVar0 /*4*/].f_3);
		iVar8[iVar0] = 0;
		if (func_103(1))
		{
			if (Local_1243[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1 != -1)
			{
				if (unk_0xDF73DA5E2287C499(Local_1243[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1))
				{
					if (func_54(Local_1243[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1, 1))
					{
						iVar8[iVar0] = func_124(Local_1243[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1, -2, 0, 0);
					}
				}
			}
		}
		iVar0++;
	}
	iVar5 = func_58(func_101(iParam0, iLocal_3352));
	func_84(Local_1243[iParam0 /*68*/].f_53[0 /*4*/].f_1, Local_1243[iParam0 /*68*/].f_53[1 /*4*/].f_1, Local_1243[iParam0 /*68*/].f_53[2 /*4*/].f_1, uVar1[0], uVar1[1], uVar1[2], iVar5, iVar6, &uLocal_3355, iVar7, func_106(), 1, iVar8[0], iVar8[1], iVar8[2]);
	if (Local_1243[iParam0 /*68*/].f_53[0 /*4*/] == unk_0x935FA14EDA695A82())
	{
		if (!unk_0xDCC86F723E82125E(iLocal_557, 23))
		{
			unk_0xC4EE38A4CFF7544C(-1, "Enter_1st", "GTAO_FM_Events_Soundset", 0);
			unk_0x59A0729D503ED758(&iLocal_557, 23);
		}
	}
	else if (unk_0xDCC86F723E82125E(iLocal_557, 23))
	{
		unk_0xC4EE38A4CFF7544C(-1, "Lose_1st", "GTAO_FM_Events_Soundset", 0);
		unk_0x77621132305B133B(&iLocal_557, 23);
	}
}

void func_84(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, char* sParam10, int iParam11, var uParam12, var uParam13, var uParam14)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_98(0) == 0)
	{
		return;
	}
	func_97();
	iVar1 = 0;
	if (((Global_2442022[0] != iParam0 || Global_2442022[1] != iParam1) || Global_2442022[2] != iParam2) || *uParam8)
	{
		iVar1 = 1;
	}
	Global_2442022[0] = iParam0;
	Global_2442022[1] = iParam1;
	Global_2442022[2] = iParam2;
	Global_2442022[3] = 0;
	Global_2442022[4] = 0;
	if (Global_2442022[0] != func_48())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x74C5CB21CF9F1178(Global_2442022[0]);
			Global_2442028[0 /*16*/] = { func_96(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_93(iParam3, &(Global_2442028[0 /*16*/]), -1, 109, 7, 1, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam12);
		}
	}
	if (Global_2442022[1] != func_48())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x74C5CB21CF9F1178(Global_2442022[1]);
			Global_2442028[1 /*16*/] = { func_96(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_93(iParam4, &(Global_2442028[1 /*16*/]), -1, 108, 6, 1, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam13);
		}
	}
	if (Global_2442022[2] != func_48())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x74C5CB21CF9F1178(Global_2442022[2]);
			Global_2442028[2 /*16*/] = { func_96(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_93(iParam5, &(Global_2442028[2 /*16*/]), -1, 107, 5, 1, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam14);
		}
	}
	switch (iParam11)
	{
		case 0:
			if (unk_0xA34E7C2A5118D638() != func_48())
			{
				if (func_89(unk_0xA34E7C2A5118D638()) == 0)
				{
					func_93(iParam6, unk_0x74C5CB21CF9F1178(unk_0xA34E7C2A5118D638()), -1, 1, 4, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (func_89(unk_0xA34E7C2A5118D638()) == 0)
			{
				func_93(iParam6, "HUD_USCORE", -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 2:
			if (func_89(unk_0xA34E7C2A5118D638()) == 0)
			{
				func_93(iParam6, "HUD_UBEST", -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_88(sParam10))
	{
		sVar2 = sParam10;
	}
	func_85(iParam7, sVar2, 0, 0, -1, 0, 3, 0, iParam9, 0, 0, 0, iParam9, 0, 0);
	*uParam8 = 0;
}

void func_85(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_87(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339929.f_1 = 1;
		func_86(7, iVar0);
		Global_1339929.f_3988[iVar0] = uParam0;
		StringCopy(&(Global_1339929.f_3988.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339929.f_3988.f_172[iVar0] = iParam2;
		Global_1339929.f_3988.f_216[iVar0] = iParam3;
		Global_1339929.f_3988.f_183[iVar0] = iParam4;
		Global_1339929.f_3988.f_194[iVar0] = iParam5;
		Global_1339929.f_3988.f_249[iVar0] = iParam6;
		Global_1339929.f_3988.f_260[iVar0] = iParam7;
		Global_1339929.f_3988.f_205[iVar0] = uParam8;
		Global_1339929.f_3988.f_314[iVar0] = iParam9;
		Global_1339929.f_3988.f_325[iVar0] = iParam10;
		Global_1339929.f_3988.f_357[iVar0] = iParam11;
		Global_1339929.f_3988.f_238[iVar0] = uParam12;
		Global_1339929.f_3988.f_271[iVar0] = iParam13;
		Global_1339929.f_3988.f_368[iVar0] = iParam14;
	}
}

void func_86(int iParam0, int iParam1)
{
	unk_0x59A0729D503ED758(&(Global_1339929.f_4594[iParam0]), iParam1);
}

bool func_87(int iParam0, int iParam1)
{
	return unk_0xDCC86F723E82125E(Global_1339929.f_4594[iParam0], iParam1);
}

int func_88(var uParam0)
{
	if (unk_0x544AEDB4A15228FF(uParam0))
	{
		return 1;
	}
	else if (unk_0xF8D041B05C3D1FD4(uParam0, "") || unk_0xF8D041B05C3D1FD4(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_89(int iParam0)
{
	if (iParam0 == unk_0xA34E7C2A5118D638())
	{
		if ((func_92() && !func_91()) || func_90(unk_0xA34E7C2A5118D638(), 21))
		{
			return 1;
		}
		if (func_18(&(Global_1573879.f_13)))
		{
			if (!func_5(&(Global_1573879.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_3(&(Global_1573879.f_13));
		}
	}
	else if (unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_1, 10))
	{
		return 1;
	}
	return unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_1, 9);
}

bool func_90(int iParam0, int iParam1)
{
	return unk_0xDCC86F723E82125E(Global_2417071[iParam0 /*306*/].f_206, iParam1);
}

bool func_91()
{
	return Global_1312416.f_1;
}

bool func_92()
{
	return Global_1312416;
}

void func_93(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18)
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
			if (func_87(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339929.f_1 = 1;
		func_86(6, iVar0);
		Global_1339929.f_3436[iVar0] = iParam0;
		StringCopy(&(Global_1339929.f_3436.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339929.f_3436.f_183[iVar0] = iParam3;
		Global_1339929.f_3436.f_172[iVar0] = iParam2;
		Global_1339929.f_3436.f_260[iVar0] = iParam4;
		Global_1339929.f_3436.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1339929.f_3436.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1339929.f_3436.f_443[iVar0] = iParam7;
		Global_1339929.f_3436.f_454[iVar0] = iParam8;
		Global_1339929.f_3436.f_497[iVar0] = iParam9;
		Global_1339929.f_3436.f_508[iVar0] = iParam10;
		Global_1339929.f_3436.f_205[iVar0] = iParam11;
		Global_1339929.f_3436.f_216[iVar0] = iParam12;
		Global_1339929.f_3436.f_227[iVar0] = iParam13;
		Global_1339929.f_3436.f_238[iVar0] = iParam14;
		Global_1339929.f_3436.f_249[iVar0] = iParam15;
		Global_1339929.f_3436.f_519[iVar0] = iParam16;
		Global_1339929.f_3436.f_530[iVar0] = iParam17;
		Global_1339929.f_3436.f_541[iVar0] = iParam18;
		if (iParam15 == 4 && func_95())
		{
			Global_1339929.f_941 = 1;
		}
		if (unk_0x68B0A67658F2D9C2())
		{
			iVar2 = 0;
			unk_0x94AEC7924AE05010(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1339929.f_945 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1339929.f_944 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1339929.f_941 = 1;
			}
			if (func_94())
			{
				Global_1339929.f_945 = 1;
			}
		}
	}
}

int func_94()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x68B0A67658F2D9C2())
	{
		unk_0x94AEC7924AE05010(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_95()
{
	if ((unk_0x884056BD9590BF29() == 8 || unk_0x884056BD9590BF29() == 9) || unk_0x884056BD9590BF29() == 10)
	{
		return 1;
	}
	return 0;
}

struct<16> func_96(int iParam0, char* sParam1)
{
	struct<16> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, sParam1, 64);
			return Var0;
			break;
		
		case 1:
			StringCopy(&Var0, unk_0x73630CECCD6630B5("HUD_POSFIRST"), 64);
			break;
		
		case 2:
			StringCopy(&Var0, unk_0x73630CECCD6630B5("HUD_POSSECOND"), 64);
			break;
		
		case 3:
			StringCopy(&Var0, unk_0x73630CECCD6630B5("HUD_POSTHIRD"), 64);
			break;
		
		case 4:
			StringCopy(&Var0, unk_0x73630CECCD6630B5("HUD_POSFOURTH"), 64);
			break;
		
		case 5:
			StringCopy(&Var0, unk_0x73630CECCD6630B5("HUD_POSFIFTH"), 64);
			break;
	}
	StringConCat(&Var0, " ", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_97()
{
	unk_0x68A38902ADFD05FE(8);
	unk_0x68A38902ADFD05FE(9);
	unk_0x68A38902ADFD05FE(6);
	unk_0x68A38902ADFD05FE(7);
	Global_2442435 = 1;
}

int func_98(bool bParam0)
{
	if (func_100())
	{
		return 0;
	}
	if (func_99())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_651(unk_0xA34E7C2A5118D638(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_99()
{
	return Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_177 != 0;
}

bool func_100()
{
	return unk_0xDCC86F723E82125E(Global_2359301, 12);
}

float func_101(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_102(iParam0, iParam1);
	fVar1 = func_6(iParam0, iParam1);
	return (fVar0 + fVar1);
}

float func_102(int iParam0, int iParam1)
{
	return Local_98.f_6[iParam0 /*204*/].f_36[iParam1];
}

bool func_103(bool bParam0)
{
	return func_54(unk_0xA34E7C2A5118D638(), bParam0);
}

void func_104(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x6CE7EDC8B5C46819())
	{
		if (unk_0xDCC86F723E82125E(Global_2458121.f_4551, 0))
		{
			if (!unk_0xB8A06E7E729EED0A(&(Global_2458121.f_4553)))
			{
				unk_0xEAB6899170047615(&(Global_2458121.f_4553));
			}
			unk_0x384EC102F362C893(1);
			unk_0x233432976E597324("FM_COUNTDOWN_30S_FIRA");
			unk_0xDB9D78E5137EE7AD("GTAO_FM_Events_30_Sec_Countdown_Scene");
			unk_0x9F4C1977B00B9480("DisableFlightMusic", 0);
			unk_0x9F4C1977B00B9480("WantedMusicDisabled", 0);
			unk_0x9F4C1977B00B9480("AllowScoreAndRadio", 0);
			if (Global_2458121.f_4561 > -1)
			{
				unk_0x279EB90079F76860(Global_2458121.f_4561);
				Global_2458121.f_4561 = -1;
			}
			Global_2458121.f_4551 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (unk_0xDCC86F723E82125E(Global_2458121.f_4551, 0))
		{
			if (unk_0xDCC86F723E82125E(Global_2458121.f_4551, 4))
			{
				if (!unk_0xDCC86F723E82125E(Global_2458121.f_4551, 2))
				{
					if (unk_0x5BA0531C8F1DEF29())
					{
						if ((!unk_0xF8D041B05C3D1FD4(unk_0xC067EFDA9FF8398B(unk_0x50421F238A334931()), "OFF") && unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0)) && !unk_0xB8A06E7E729EED0A(&(Global_2458121.f_4553)))
						{
							StringCopy(&(Global_2458121.f_4553), "", 32);
							unk_0x233432976E597324("FM_COUNTDOWN_30S_FIRA");
							unk_0xDB9D78E5137EE7AD("GTAO_FM_Events_30_Sec_Countdown_Scene");
							unk_0x9F4C1977B00B9480("DisableFlightMusic", 0);
							unk_0x9F4C1977B00B9480("WantedMusicDisabled", 0);
							unk_0x9F4C1977B00B9480("AllowScoreAndRadio", 0);
							unk_0x384EC102F362C893(1);
							unk_0x59A0729D503ED758(&(Global_2458121.f_4551), 2);
						}
					}
				}
				else if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0) && unk_0xDCC86F723E82125E(Global_2458121.f_4551, 5))
				{
					unk_0xEAB6899170047615("OFF");
				}
			}
			else if (!unk_0xDCC86F723E82125E(Global_2458121.f_4551, 1))
			{
				if (iParam0 < 10000)
				{
					unk_0x233432976E597324("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					unk_0x233432976E597324("FM_COUNTDOWN_20S");
				}
				else
				{
					unk_0x233432976E597324("FM_COUNTDOWN_30S");
				}
				unk_0x925AE2E6F6E41362("GTAO_FM_Events_30_Sec_Countdown_Scene");
				unk_0x59A0729D503ED758(&(Global_2458121.f_4551), 1);
			}
			else if (!unk_0xDCC86F723E82125E(Global_2458121.f_4551, 4))
			{
				if (iParam0 < 27500)
				{
					if (unk_0x326F40CE5DA0E863() != 0)
					{
						if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0) && !unk_0x66D013F030E3FDD1())
						{
							StringCopy(&(Global_2458121.f_4553), unk_0x8AD9ED202F7B5553(), 32);
							unk_0xEAB6899170047615("OFF");
						}
						unk_0x384EC102F362C893(1);
						unk_0x59A0729D503ED758(&(Global_2458121.f_4551), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!unk_0xDCC86F723E82125E(Global_2458121.f_4551, 3))
				{
					Global_2458121.f_4561 = unk_0x83E9D86E63672B9A();
					unk_0xC4EE38A4CFF7544C(Global_2458121.f_4561, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
					unk_0x59A0729D503ED758(&(Global_2458121.f_4551), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!unk_0xDCC86F723E82125E(Global_2458121.f_4551, 0))
			{
				Global_2458121.f_4551 = 0;
				Global_2458121.f_4561 = -1;
				unk_0xE685497EA92333FF("FM_COUNTDOWN_30S_KILL");
				unk_0x384EC102F362C893(0);
				unk_0x233432976E597324("FM_PRE_COUNTDOWN_30S");
				unk_0x9F4C1977B00B9480("DisableFlightMusic", 1);
				unk_0x9F4C1977B00B9480("WantedMusicDisabled", 1);
				unk_0x9F4C1977B00B9480("AllowScoreAndRadio", 1);
				unk_0x59A0729D503ED758(&(Global_2458121.f_4551), 0);
				if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0) || unk_0xDCC86F723E82125E(Global_2458121.f_4551, 2))
				{
					unk_0x59A0729D503ED758(&(Global_2458121.f_4551), 2);
					unk_0x59A0729D503ED758(&(Global_2458121.f_4551), 5);
				}
				else
				{
					unk_0x77621132305B133B(&(Global_2458121.f_4551), 5);
					unk_0x77621132305B133B(&(Global_2458121.f_4551), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!unk_0xDCC86F723E82125E(Global_2458121.f_4551, 0))
		{
			Global_2458121.f_4551 = 0;
			Global_2458121.f_4561 = -1;
			unk_0xE685497EA92333FF("FM_COUNTDOWN_30S_KILL");
			unk_0x384EC102F362C893(0);
			unk_0x233432976E597324("FM_PRE_COUNTDOWN_30S");
			unk_0x9F4C1977B00B9480("DisableFlightMusic", 1);
			unk_0x9F4C1977B00B9480("WantedMusicDisabled", 1);
			unk_0x9F4C1977B00B9480("AllowScoreAndRadio", 1);
			unk_0x59A0729D503ED758(&(Global_2458121.f_4551), 0);
			if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
			{
				unk_0x59A0729D503ED758(&(Global_2458121.f_4551), 2);
				unk_0x59A0729D503ED758(&(Global_2458121.f_4551), 5);
			}
			else
			{
				unk_0x77621132305B133B(&(Global_2458121.f_4551), 2);
				unk_0x77621132305B133B(&(Global_2458121.f_4551), 5);
			}
		}
	}
}

void func_105(int iParam0, int iParam1, char* sParam2)
{
	char* sVar0;
	
	if (func_98(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_COUNTDOWN";
	if (!func_88(sParam2))
	{
		sVar0 = sParam2;
	}
	func_85(iParam0, sVar0, 0, 0, -1, 0, 3, 0, iParam1, 0, 0, 0, iParam1, 0, 0);
}

char* func_106()
{
	return "HUD_COUNTDOWN";
	switch (func_192(unk_0xA34E7C2A5118D638()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_107())
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

int func_107()
{
	if (func_192(unk_0xA34E7C2A5118D638()) == 133)
	{
		return Global_2458121.f_4635;
	}
	return -1;
}

bool func_108(int iParam0)
{
	return Local_98.f_6[iParam0 /*204*/].f_72;
}

void func_109(char* sParam0, char* sParam1, bool bParam2)
{
	if (unk_0xB8A06E7E729EED0A(sParam0))
	{
		return;
	}
	if (unk_0x7FB2AC00554ED7D4(sParam0) > 23)
	{
		return;
	}
	if (unk_0xB8A06E7E729EED0A(sParam1))
	{
		return;
	}
	if (unk_0x7FB2AC00554ED7D4(sParam1) > 63)
	{
		return;
	}
	if (func_119(sParam0, sParam1))
	{
		return;
	}
	func_113();
	Global_1312577 = 9;
	StringCopy(&(Global_1312577.f_1), unk_0xC4E68AF0B559FAC4(), 24);
	Global_1312577.f_7 = unk_0x7CBED6EFED40E7EB(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	StringCopy(&(Global_1312577.f_14), sParam1, 64);
	func_112();
	func_111(bParam2);
	func_110();
}

void func_110()
{
	unk_0x59A0729D503ED758(&(Global_1312577.f_56), 1);
}

void func_111(bool bParam0)
{
	if (bParam0)
	{
		unk_0x59A0729D503ED758(&(Global_1312577.f_56), 0);
		return;
	}
	unk_0x77621132305B133B(&(Global_1312577.f_56), 0);
}

void func_112()
{
	Global_1312577.f_8 = unk_0x1A184A79993F1536(unk_0x2AA13A84EE2D3B24(), 86400000);
	Global_1312577.f_9 = unk_0x2AA13A84EE2D3B24();
}

void func_113()
{
	func_115();
	func_114(0);
}

void func_114(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0xBBAE3E0C60A8AD4B();
	Global_1312577 = 19;
	StringCopy(&(Global_1312577.f_1), "", 24);
	Global_1312577.f_7 = 0;
	if (bVar0)
	{
		Global_1312577.f_8 = unk_0x2AA13A84EE2D3B24();
		Global_1312577.f_9 = unk_0x2AA13A84EE2D3B24();
	}
	StringCopy(&(Global_1312577.f_10), "", 16);
	StringCopy(&(Global_1312577.f_14), "", 64);
	StringCopy(&(Global_1312577.f_30), "", 64);
	Global_1312577.f_50 = 0;
	Global_1312577.f_51 = 0;
	Global_1312577.f_52 = 0;
	Global_1312577.f_53 = -1;
	Global_1312577.f_54 = 0;
	Global_1312577.f_56 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_115()
{
	if (!func_118())
	{
	}
	if (func_117())
	{
		unk_0x9793A6B024AF02EF(&(Global_1312577.f_10));
		func_116();
		unk_0x8C79EF3DED0E80D0();
	}
}

void func_116()
{
	switch (Global_1312577)
	{
		case 19:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x6DC80A902A91958F(Global_1312577.f_50);
			return;
		
		case 2:
			unk_0x6DC80A902A91958F(Global_1312577.f_50);
			unk_0x6DC80A902A91958F(Global_1312577.f_51);
			return;
		
		case 3:
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_14));
			return;
		
		case 4:
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_14));
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_30));
			return;
		
		case 5:
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			return;
		
		case 6:
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			return;
		
		case 7:
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_14));
			return;
		
		case 8:
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_14));
			return;
		
		case 9:
			unk_0x6B0C98F2CFD22419(&(Global_1312577.f_14));
			return;
		
		case 10:
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			unk_0x2DED6C1306496257(&(Global_1312577.f_30));
			return;
		
		case 12:
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_30));
			return;
		
		case 11:
			unk_0x6B0C98F2CFD22419(&(Global_1312577.f_14));
			return;
		
		case 13:
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_30));
			return;
		
		case 14:
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			unk_0x1AE578B67805BFB7(Global_1312577.f_55);
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_30));
			return;
		
		case 16:
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			unk_0x2DED6C1306496257(&(Global_1312577.f_30));
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_46));
			return;
		
		case 15:
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			return;
		
		case 18:
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_14));
			return;
		
		case 17:
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_46));
			unk_0x2DED6C1306496257(&(Global_1312577.f_30));
			return;
		
		default:
	}
}

int func_117()
{
	if (Global_1312577 == 19)
	{
		return 0;
	}
	return 1;
}

int func_118()
{
	if (!func_117())
	{
		return 0;
	}
	unk_0xF932A8699EA66642(&(Global_1312577.f_10));
	func_116();
	return unk_0xD6AFC45B1375A9DD();
}

bool func_119(char* sParam0, char* sParam1)
{
	if (!func_117())
	{
		return 0;
	}
	if (unk_0xB8A06E7E729EED0A(sParam0))
	{
		return 0;
	}
	if (unk_0xB8A06E7E729EED0A(sParam1))
	{
		return 0;
	}
	if (!unk_0x7CBED6EFED40E7EB(sParam0) == unk_0x7CBED6EFED40E7EB(&(Global_1312577.f_10)))
	{
		return 0;
	}
	return unk_0x7CBED6EFED40E7EB(sParam1) == unk_0x7CBED6EFED40E7EB(&(Global_1312577.f_14));
}

void func_120(char* sParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	func_121(sParam0, unk_0x74C5CB21CF9F1178(iParam1), sParam2, bParam5);
	Global_1312577 = 14;
	Global_1312577.f_54 = iParam3;
	Global_1312577.f_55 = iParam4;
}

void func_121(char* sParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (unk_0xB8A06E7E729EED0A(sParam0))
	{
		return;
	}
	if (unk_0x7FB2AC00554ED7D4(sParam0) > 23)
	{
		return;
	}
	if (unk_0xB8A06E7E729EED0A(sParam1))
	{
		return;
	}
	if (unk_0x7FB2AC00554ED7D4(sParam1) > 63)
	{
		return;
	}
	if (unk_0xB8A06E7E729EED0A(sParam2))
	{
		return;
	}
	if (unk_0x7FB2AC00554ED7D4(sParam2) > 63)
	{
		return;
	}
	if (func_122(sParam0, sParam1, sParam2))
	{
		return;
	}
	func_113();
	Global_1312577 = 10;
	StringCopy(&(Global_1312577.f_1), unk_0xC4E68AF0B559FAC4(), 24);
	Global_1312577.f_7 = unk_0x7CBED6EFED40E7EB(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	StringCopy(&(Global_1312577.f_14), sParam1, 64);
	StringCopy(&(Global_1312577.f_30), sParam2, 64);
	func_112();
	func_111(bParam3);
	func_110();
}

bool func_122(char* sParam0, char* sParam1, char* sParam2)
{
	if (!func_117())
	{
		return 0;
	}
	if (unk_0xB8A06E7E729EED0A(sParam0))
	{
		return 0;
	}
	if (unk_0xB8A06E7E729EED0A(sParam1))
	{
		return 0;
	}
	if (unk_0xB8A06E7E729EED0A(sParam2))
	{
		return 0;
	}
	if (!unk_0x7CBED6EFED40E7EB(sParam0) == unk_0x7CBED6EFED40E7EB(&(Global_1312577.f_10)))
	{
		return 0;
	}
	if (!unk_0x7CBED6EFED40E7EB(sParam1) == unk_0x7CBED6EFED40E7EB(&(Global_1312577.f_14)))
	{
		return 0;
	}
	return unk_0x7CBED6EFED40E7EB(sParam2) == unk_0x7CBED6EFED40E7EB(&(Global_1312577.f_30));
}

void func_123(char* sParam0, var uParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	unk_0xF4A7F7324E8C92A2(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x1AE578B67805BFB7(iParam2);
	}
	unk_0x2DED6C1306496257(uParam1);
	if (!iParam4 == 0)
	{
		unk_0x1AE578B67805BFB7(iParam4);
	}
	unk_0xCE59E3E42586D52D(sParam3);
	unk_0x31D76F87C39FB8DD(0, 0, 0, iParam5);
}

int func_124(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_591(iParam0))
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_591(unk_0xA34E7C2A5118D638()) || (func_140() && func_590()))
	{
		uVar0 = func_139();
		if (unk_0x95CCECA3948CFE7B(uVar0))
		{
			if (unk_0xA815CBE767EFA3CB(uVar0))
			{
				if (unk_0x8ACC9D9AC6076DCB(uVar0) != -1)
				{
					if (func_651(unk_0x8ACC9D9AC6076DCB(uVar0), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xDC9A5ADFE0C41DD2()) && iParam1 < 4)
						{
							if (Global_1613622.f_65200[iParam1] != -1)
							{
								return func_138(iParam1, iParam0, 0);
							}
							else
							{
								return func_132(iParam0, unk_0x8ACC9D9AC6076DCB(uVar0), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_132(iParam0, unk_0x8ACC9D9AC6076DCB(uVar0), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xDC9A5ADFE0C41DD2()) && iParam1 < 4)
			{
				if (Global_1613622.f_65200[iParam1] != -1)
				{
					return func_138(iParam1, iParam0, 0);
				}
				else
				{
					return func_125(0, -1, 0);
				}
			}
			else
			{
				return func_125(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xDC9A5ADFE0C41DD2()) && iParam1 < 4)
	{
		if (Global_1613622.f_65200[iParam1] != -1)
		{
			return func_138(iParam1, iParam0, 0);
		}
		else
		{
			return func_132(iParam0, unk_0xA34E7C2A5118D638(), iParam1, bParam2, bParam3);
		}
	}
	return func_132(iParam0, unk_0xA34E7C2A5118D638(), iParam1, bParam2, bParam3);
}

int func_125(bool bParam0, int iParam1, bool bParam2)
{
	return func_126(unk_0xA34E7C2A5118D638(), bParam0, iParam1, bParam2);
}

int func_126(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0x07CBE0ED3114C7D8(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_131(iVar0, iParam2, 0) && !unk_0xDCC86F723E82125E(Global_1613622.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_130(1);
				}
				else
				{
					return func_130(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xDCC86F723E82125E(Global_1613622.f_4, 20))
			{
				return func_127(iVar0, iParam2, 1);
			}
			else
			{
				return func_127(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_130(1);
	}
	return func_130(0);
}

int func_127(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_129(iParam0, iParam1);
	if (func_128(Global_1613622.f_68788))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_128(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7331[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_129(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_131(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_130(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_131(int iParam0, int iParam1, int iParam2)
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
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 0);
				
				case 1:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 1);
				
				case 2:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 2);
				
				case 3:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 4);
				
				case 1:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 5);
				
				case 2:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 6);
				
				case 3:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 8);
				
				case 1:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 9);
				
				case 2:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 10);
				
				case 3:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 12);
				
				case 1:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 13);
				
				case 2:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 14);
				
				case 3:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_132(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x07CBE0ED3114C7D8(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1587175[unk_0xA34E7C2A5118D638() /*410*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1587175[iVar2 /*410*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if ((func_137(iParam1, iParam0, iVar0, 0) && !unk_0xDCC86F723E82125E(Global_1613622.f_15, 18)) || ((func_131(unk_0x07CBE0ED3114C7D8(iParam1), unk_0x07CBE0ED3114C7D8(iParam0), 0) && unk_0xDCC86F723E82125E(Global_1613622.f_15, 23)) && !unk_0xDCC86F723E82125E(Global_1613622.f_15, 18)))
			{
				return func_130(1);
			}
			else if (unk_0xDCC86F723E82125E(Global_1613622.f_15, 26))
			{
				return func_136(1);
			}
			else
			{
				return func_126(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1573833 || Global_1573824) || Global_1587175[iParam0 /*410*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573833 == 1 && Global_1573843 == 0))
			{
				return func_130(1);
			}
			else
			{
				return func_126(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1573828 && Global_1573408.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar3 = func_135(iParam0);
	if (!iVar3 == -1)
	{
		return func_133(iVar3);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_133(int iParam0)
{
	int iVar0;
	
	iVar0 = func_134(iParam0);
	switch (iVar0)
	{
		case 0:
			return 192;
		
		case 1:
			return 193;
		
		case 2:
			return 194;
		
		case 3:
			return 195;
		
		case 4:
			return 196;
		
		case 5:
			return 197;
		
		case 6:
			return 198;
		
		case 7:
			return 199;
		
		case 8:
			return 200;
		
		case 9:
			return 201;
		
		case 10:
			return 202;
		
		case 11:
			return 203;
		
		case 12:
			return 204;
		
		case 13:
			return 205;
		
		case 14:
			return 206;
		
		default:
	}
	return 12;
}

var func_134(int iParam0)
{
	return Global_2412494.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_135(int iParam0)
{
	if (!iParam0 == func_48())
	{
		if (func_54(iParam0, 1))
		{
			return Global_2412494.f_1946.f_11[func_52(iParam0)];
		}
	}
	return -1;
}

int func_136(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_137(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x07CBE0ED3114C7D8(iParam0) == -1 && unk_0x07CBE0ED3114C7D8(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x07CBE0ED3114C7D8(iParam0) == unk_0x07CBE0ED3114C7D8(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x07CBE0ED3114C7D8(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x07CBE0ED3114C7D8(iParam0) == iParam2;
	}
	return unk_0x07CBE0ED3114C7D8(iParam0) == iParam2;
}

int func_138(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (Global_1613622.f_65200[iParam0] != -1 && Global_1613622.f_65200[iParam0] <= 4)
	{
		if (Global_1613622.f_65200[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1613622.f_65200[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1613622.f_65200[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1613622.f_65200[iParam0] == 4)
		{
			if (unk_0xDCC86F723E82125E(Global_1613622.f_15, 29))
			{
				iVar0 = 21;
			}
			else
			{
				iVar0 = 6;
			}
		}
		else
		{
			iVar0 = Global_1613622.f_65200[iParam0];
		}
	}
	else
	{
		iVar0 = func_126(iParam1, !bParam2, iParam0, 0);
	}
	return iVar0;
}

var func_139()
{
	return Global_2359301.f_2;
}

bool func_140()
{
	return unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_39.f_18, 14);
}

char* func_141()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_52(unk_0xA34E7C2A5118D638());
	if (iVar0 != func_48())
	{
		if (iVar0 != unk_0xA34E7C2A5118D638())
		{
			if ((func_26(iVar0, 28) || func_26(unk_0xA34E7C2A5118D638(), 28)) || func_53(iVar0))
			{
				return unk_0x73630CECCD6630B5("GB_REST_ACC");
			}
		}
		sVar1 = func_51(&(Global_1608811[iVar0 /*109*/].f_9.f_74));
		if (unk_0xB8A06E7E729EED0A(sVar1))
		{
			return unk_0x73630CECCD6630B5("GB_REST_ACC");
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

int func_142(int iParam0)
{
	if (unk_0xDCC86F723E82125E(Local_396[iParam0 /*5*/].f_4, 2))
	{
		return 1;
	}
	if (unk_0xDCC86F723E82125E(Local_396[iParam0 /*5*/].f_4, 3))
	{
		return 1;
	}
	if (unk_0xDCC86F723E82125E(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1, 13))
	{
		return 1;
	}
	return 0;
}

void func_143(char* sParam0, bool bParam1)
{
	if (unk_0xB8A06E7E729EED0A(sParam0))
	{
		return;
	}
	if (unk_0x7FB2AC00554ED7D4(sParam0) > 23)
	{
		return;
	}
	if (func_144(sParam0))
	{
		return;
	}
	func_113();
	Global_1312577 = 0;
	StringCopy(&(Global_1312577.f_1), unk_0xC4E68AF0B559FAC4(), 24);
	Global_1312577.f_7 = unk_0x7CBED6EFED40E7EB(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	func_112();
	func_111(bParam1);
	func_110();
}

bool func_144(char* sParam0)
{
	if (!func_117())
	{
		return 0;
	}
	if (Global_1312577 == 11)
	{
		return func_145(sParam0);
	}
	if (unk_0xB8A06E7E729EED0A(sParam0))
	{
		return 0;
	}
	return unk_0x7CBED6EFED40E7EB(sParam0) == unk_0x7CBED6EFED40E7EB(&(Global_1312577.f_10));
}

bool func_145(char* sParam0)
{
	if (!func_117())
	{
		return 0;
	}
	if (unk_0xB8A06E7E729EED0A(sParam0))
	{
		return 0;
	}
	return unk_0x7CBED6EFED40E7EB(sParam0) == unk_0x7CBED6EFED40E7EB(&(Global_1312577.f_14));
}

void func_146()
{
	if (!func_117())
	{
		return;
	}
	if (!unk_0x7CBED6EFED40E7EB(unk_0xC4E68AF0B559FAC4()) == Global_1312577.f_7)
	{
		return;
	}
	func_113();
}

bool func_147(int iParam0)
{
	return Global_2426867.f_2138[0 /*72*/].f_1 == iParam0;
}

int func_148(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	struct<72> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_71 = -1;
	func_49(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_65 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_66 = iParam5;
	return func_42(&Var0);
}

int func_149(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	struct<72> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_71 = -1;
	func_49(iParam0, &Var0, -1, sParam1, sParam5);
	StringCopy(&(Var0.f_23), sParam2, 64);
	Var0.f_65 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_66 = iParam6;
	return func_42(&Var0);
}

int func_150()
{
	return 21;
}

int func_151(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_52(iParam0);
	if (!iVar0 == func_48())
	{
		if (iVar0 == func_52(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

void func_152(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	unk_0x9F4C1977B00B9480("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		unk_0x9F4C1977B00B9480("WantedMusicDisabled", 1);
	}
	Global_2458121.f_4561 = -1;
	bVar0 = (func_28(unk_0xA34E7C2A5118D638(), 0) && func_27(unk_0xA34E7C2A5118D638()));
	if (bParam6)
	{
		func_174(21, 1);
	}
	else
	{
		func_171(iParam0, -1);
		if (func_170(unk_0xA34E7C2A5118D638()))
		{
			Global_1573879.f_3 = iParam0;
		}
		else
		{
			func_169(iParam0);
		}
		Global_1573879.f_4 = -1;
		if (func_170(unk_0xA34E7C2A5118D638()))
		{
			unk_0x59A0729D503ED758(&(Global_1573879.f_1), 5);
		}
		if ((func_92() && !func_91()) || func_90(unk_0xA34E7C2A5118D638(), 21))
		{
			unk_0x59A0729D503ED758(&(Global_1573879.f_1), 4);
		}
		unk_0x77621132305B133B(&(Global_1573879.f_1), 17);
		unk_0x59A0729D503ED758(&(Global_1573879.f_1), 20);
		if (func_168(iParam0))
		{
			func_167();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_164(fParam1);
		}
		if (fParam2 != 1f)
		{
			unk_0xFD62177C7242216E(fParam2);
			if (iParam0 == 146)
			{
				unk_0x60B57BC5E51D2074(0);
				unk_0xB47D5A4E4AE9BEAD(unk_0xA34E7C2A5118D638(), 0, 0);
				unk_0x1C9B7C3360143C4C(unk_0xA34E7C2A5118D638(), 0);
			}
		}
		if (func_162(iParam0))
		{
			unk_0x60B57BC5E51D2074(0);
			unk_0xB47D5A4E4AE9BEAD(unk_0xA34E7C2A5118D638(), 0, 0);
			unk_0x1C9B7C3360143C4C(unk_0xA34E7C2A5118D638(), 0);
			unk_0x59A0729D503ED758(&(Global_1573879.f_1), 8);
		}
		if (bParam3)
		{
			func_161(1);
			if (func_158(0))
			{
				unk_0x59A0729D503ED758(&(Global_1573879.f_1), 9);
			}
			unk_0x59A0729D503ED758(&(Global_1573879.f_1), 14);
		}
		if (bParam4)
		{
			func_156(1);
			unk_0x59A0729D503ED758(&(Global_1573879.f_1), 12);
		}
		if (bParam5)
		{
			func_155();
			unk_0x59A0729D503ED758(&(Global_1573879.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_153(iParam0))
			{
				unk_0x59A0729D503ED758(&(Global_1573879.f_1), 21);
			}
		}
	}
	Global_2457030 = 1;
}

int func_153(int iParam0)
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
	if (func_154())
	{
		return 1;
	}
	return 0;
}

int func_154()
{
	switch (func_107())
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

void func_155()
{
	unk_0x59A0729D503ED758(&(Global_2458121.f_4552), 0);
}

void func_156(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_91158.f_8 = 1;
	}
	else
	{
		Global_91158.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 45)
	{
		func_157(iVar0);
		iVar0++;
	}
}

void func_157(int iParam0)
{
	Global_91158.f_156[iParam0] = 1;
	Global_91158.f_155 = 1;
}

int func_158(int iParam0)
{
	var uVar0;
	
	uVar0 = func_159(2507, -1, 0);
	if (iParam0 == 0)
	{
		if ((unk_0xDCC86F723E82125E(uVar0, 0) && unk_0xDCC86F723E82125E(iVar0, 1)) && unk_0xDCC86F723E82125E(iVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((unk_0xDCC86F723E82125E(iVar0, 3) && unk_0xDCC86F723E82125E(iVar0, 4)) && unk_0xDCC86F723E82125E(iVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((unk_0xDCC86F723E82125E(iVar0, 6) && unk_0xDCC86F723E82125E(iVar0, 7)) && unk_0xDCC86F723E82125E(iVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((unk_0xDCC86F723E82125E(iVar0, 9) && unk_0xDCC86F723E82125E(iVar0, 10)) && unk_0xDCC86F723E82125E(iVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_159(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2466774[iParam0 /*5*/][func_160(iParam1)];
	if (unk_0x5F0618A5FDAD55C4(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_160(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_35();
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

void func_161(int iParam0)
{
	if (iParam0 == Global_2391042)
	{
		return;
	}
	Global_2391042 = iParam0;
	Global_2391044 = 0;
	Global_2391045 = 0;
}

int func_162(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_163(unk_0xA34E7C2A5118D638()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_163(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xDCC86F723E82125E(Global_1608811[iVar0 /*109*/].f_1, 0);
	}
	return 0;
}

void func_164(float fParam0)
{
	float fVar0;
	
	if (unk_0x7CBED6EFED40E7EB(unk_0xC4E68AF0B559FAC4()) == func_165())
	{
		return;
	}
	fVar0 = (Global_2458121.f_4643 - fParam0);
	if (unk_0xC2DCA35AE2EC9DC4(Global_2458121.f_4644))
	{
		if (!Global_2458121.f_4644 == unk_0x46CF50E0E5A24635() && unk_0xA3C5926D6E5619AE(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2458121.f_4643 = fParam0;
	Global_2458121.f_4644 = unk_0x46CF50E0E5A24635();
}

int func_165()
{
	switch (func_166())
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

int func_166()
{
	return Global_25115;
}

void func_167()
{
	Global_2417071[unk_0xA34E7C2A5118D638() /*306*/].f_198 = 0;
	unk_0x77621132305B133B(&(Global_2458121.f_4413), 1);
}

int func_168(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_169(int iParam0)
{
	Global_1608811[unk_0xA34E7C2A5118D638() /*109*/] = iParam0;
}

bool func_170(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_1, 2);
}

void func_171(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_173(0) || func_173(func_172(iVar0)))
		{
			unk_0x59A0729D503ED758(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1), 2);
		}
		else
		{
			unk_0x77621132305B133B(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1), 2);
		}
	}
}

int func_172(int iParam0)
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

bool func_173(int iParam0)
{
	var uVar0;
	
	uVar0 = func_159(2453, -1, 0);
	return unk_0xDCC86F723E82125E(uVar0, iParam0);
}

void func_174(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xDCC86F723E82125E(Global_2417071[unk_0xA34E7C2A5118D638() /*306*/].f_206, iParam0))
		{
			unk_0x59A0729D503ED758(&(Global_2417071[unk_0xA34E7C2A5118D638() /*306*/].f_206), iParam0);
		}
	}
	else if (unk_0xDCC86F723E82125E(Global_2417071[unk_0xA34E7C2A5118D638() /*306*/].f_206, iParam0))
	{
		unk_0x77621132305B133B(&(Global_2417071[unk_0xA34E7C2A5118D638() /*306*/].f_206), iParam0);
	}
}

void func_175(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2426867.f_2138[iVar0 /*72*/].f_1 == iParam0)
		{
			Global_2426867.f_2138[iVar0 /*72*/].f_2 = 5;
			unk_0x59A0729D503ED758(&(Global_2426867.f_2138[iVar0 /*72*/].f_63), 0);
		}
		iVar0++;
	}
}

float func_176(int iParam0)
{
	return Local_1243[iParam0 /*68*/].f_40;
}

bool func_177(char* sParam0)
{
	unk_0xD90D7D16FDE685B6(sParam0);
	return unk_0x699790DC9A5E5D9A(0);
}

void func_178(int iParam0)
{
	unk_0xAC5554624B8FE548(3, 21, 200, 0, 0);
	if (iParam0 && !func_180())
	{
		unk_0xC4EE38A4CFF7544C(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_179(char* sParam0, int iParam1)
{
	unk_0xF4A7F7324E8C92A2(sParam0);
	unk_0x31D76F87C39FB8DD(0, 0, 0, iParam1);
}

bool func_180()
{
	return Global_2426867.f_2138[0 /*72*/].f_1 != 0;
}

void func_181(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (func_92())
		{
			func_184(0);
			func_183();
		}
		if (func_173(0))
		{
			uVar0 = func_159(2453, -1, 0);
			unk_0x77621132305B133B(&uVar0, 0);
			func_183();
		}
		if (func_173(func_172(func_192(unk_0xA34E7C2A5118D638()))))
		{
			uVar0 = func_159(2453, -1, 0);
			unk_0x77621132305B133B(&uVar0, func_172(func_192(unk_0xA34E7C2A5118D638())));
			func_183();
		}
		if (func_182())
		{
			func_183();
		}
		if (func_192(unk_0xA34E7C2A5118D638()) > -1)
		{
			unk_0x59A0729D503ED758(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1), 7);
		}
	}
	else
	{
		unk_0x77621132305B133B(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1), 7);
	}
}

int func_182()
{
	if (Global_2426867.f_615.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_183()
{
	if (func_182())
	{
		Global_2426867.f_615.f_16 = 1;
	}
}

void func_184(int iParam0)
{
	if (func_92())
	{
		if (iParam0 == 1)
		{
			if (Global_2458121.f_4247 == -1)
			{
				Global_2458121.f_4247 = 60000;
			}
			func_191(&(Global_2458121.f_4245), 0, 0);
			if (Global_2458121.f_4250 == -1)
			{
				Global_2458121.f_4250 = 10000;
			}
			func_191(&(Global_2458121.f_4248), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			func_190();
		}
		if ((!unk_0xDC9A5ADFE0C41DD2() && !func_189()) && !func_185(unk_0xA34E7C2A5118D638()))
		{
			Global_976340 = 0;
		}
		Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_7 = 0;
	}
}

int func_185(int iParam0)
{
	if (func_186(iParam0, 1))
	{
		if (Global_1587175[iParam0 /*410*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_186(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_187(iParam0))
		{
			return 1;
		}
	}
	if (Global_1587175[iParam0 /*410*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_187(int iParam0)
{
	return func_188(iParam0);
}

bool func_188(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_1587175[iParam0 /*410*/].f_13.f_1, 0);
}

bool func_189()
{
	return Global_2433098.f_713;
}

void func_190()
{
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		if (!func_92())
		{
			if (func_651(unk_0xA34E7C2A5118D638(), 1, 0))
			{
				unk_0xF4D417768DCC5DED(unk_0xC8B93D94F8954288(), 1);
				unk_0xC778754E36F3FFD6(unk_0xC8B93D94F8954288(), 342, 0);
				unk_0xC778754E36F3FFD6(unk_0xC8B93D94F8954288(), 122, 0);
			}
			unk_0x7C53F209D14EAB83(unk_0xA34E7C2A5118D638(), 1f);
			unk_0x00AF6DC1F221C0A3(0);
			unk_0x3FAC4C670EE704C9(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				unk_0xB2D9791D33CC8156(0);
			}
		}
		else
		{
			if (func_651(unk_0xA34E7C2A5118D638(), 1, 1))
			{
				unk_0xF4D417768DCC5DED(unk_0xC8B93D94F8954288(), 0);
				unk_0x80423B6A45BF05DA(unk_0xC8B93D94F8954288(), joaat("weapon_unarmed"), 1);
				unk_0xC778754E36F3FFD6(unk_0xC8B93D94F8954288(), 342, 1);
				unk_0xC778754E36F3FFD6(unk_0xC8B93D94F8954288(), 122, 1);
				unk_0x7C53F209D14EAB83(unk_0xA34E7C2A5118D638(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					unk_0xB2D9791D33CC8156(1);
				}
			}
			unk_0x00AF6DC1F221C0A3(1);
			unk_0x3FAC4C670EE704C9(0);
		}
	}
}

void func_191(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0xBBAE3E0C60A8AD4B() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x2AA13A84EE2D3B24();
		}
		else
		{
			*uParam0 = unk_0x3BC33547A5F418E8();
		}
	}
	else
	{
		*uParam0 = unk_0x693EBB4F13506457();
	}
	uParam0->f_1 = 1;
}

int func_192(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1608811[iVar0 /*109*/];
	}
	return -1;
}

bool func_193(int iParam0, int iParam1)
{
	return Local_396[iParam0 /*5*/].f_1[iParam1];
}

int func_194(bool bParam0, bool bParam1)
{
	if (func_196(unk_0xA34E7C2A5118D638()))
	{
		return 1;
	}
	if (bParam0)
	{
		if (func_89(unk_0xA34E7C2A5118D638()))
		{
			return 1;
		}
	}
	if (bParam1)
	{
		if (func_195(unk_0xA34E7C2A5118D638()))
		{
			return 1;
		}
	}
	return 0;
}

bool func_195(int iParam0)
{
	return func_33(iParam0, 0);
}

bool func_196(int iParam0)
{
	if (func_170(iParam0))
	{
		return 1;
	}
	return unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_1, 8);
}

void func_197(int iParam0)
{
	if (!unk_0xDCC86F723E82125E(iLocal_557, 22))
	{
		if (iLocal_3352 == unk_0x935FA14EDA695A82())
		{
			if (func_142(unk_0x935FA14EDA695A82()))
			{
				if (!func_237(1, 1))
				{
					if (Local_98.f_6[iParam0 /*204*/].f_74[0 /*4*/] != -1)
					{
						if (Local_98.f_6[iParam0 /*204*/].f_74[0 /*4*/].f_3 > 0f)
						{
							if (Local_98.f_6[iParam0 /*204*/].f_74[0 /*4*/] != unk_0x935FA14EDA695A82())
							{
								if (!func_151(unk_0xA34E7C2A5118D638(), Local_98.f_6[iParam0 /*204*/].f_74[0 /*4*/].f_1))
								{
									func_198();
									unk_0x59A0729D503ED758(&iLocal_557, 22);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_198()
{
	unk_0x59A0729D503ED758(&(Global_2458121.f_1635), 19);
}

void func_199(int iParam0)
{
	if (iLocal_394 != func_8(iParam0))
	{
		iLocal_394 = func_8(iParam0);
		if (iLocal_394 > -1)
		{
			iLocal_395++;
			unk_0x59A0729D503ED758(&iLocal_557, 25);
		}
	}
}

void func_200(int iParam0)
{
	if (func_565() == 1)
	{
		if (func_8(iParam0) == unk_0x935FA14EDA695A82() && !func_194(1, 0))
		{
			if (!func_163(unk_0xA34E7C2A5118D638()))
			{
				func_201(1);
			}
		}
		else if (func_163(unk_0xA34E7C2A5118D638()))
		{
			func_201(0);
		}
	}
}

void func_201(bool bParam0)
{
	int iVar0;
	var uVar1;
	
	if (bParam0)
	{
		Global_2443244 = func_192(unk_0xA34E7C2A5118D638());
		if (Global_2443244 == -1)
		{
			Global_2443244 = Global_1573879.f_4;
		}
		if (func_234(Global_2443244) == 0)
		{
			if (func_233(1) > 0)
			{
				func_232(26, -1);
			}
		}
		if (func_92())
		{
			func_184(0);
			func_183();
		}
		if (func_173(0))
		{
			uVar1 = func_159(2453, -1, 0);
			unk_0x77621132305B133B(&uVar1, 0);
			func_183();
		}
		if (func_173(func_172(func_192(unk_0xA34E7C2A5118D638()))))
		{
			uVar1 = func_159(2453, -1, 0);
			unk_0x77621132305B133B(&uVar1, func_172(func_192(unk_0xA34E7C2A5118D638())));
			func_183();
		}
		if (func_182())
		{
			func_183();
		}
		unk_0x59A0729D503ED758(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1), 0);
	}
	else
	{
		if ((!func_231() && !func_230()) && !func_229())
		{
			Global_2443244 = -1;
			func_228(26, -1);
		}
		else if (func_234(Global_2443244) == 0)
		{
			iVar0 = func_213(1);
			if (iVar0 > 0)
			{
				func_208(joaat("mpply_fmevn_cheat_end"), iVar0);
				func_204(1921, 1, -1);
				func_208(joaat("mpply_activity_ended"), 1);
			}
		}
		else if (func_202(26, -1))
		{
			Global_2443244 = -1;
			func_228(26, -1);
		}
		unk_0x77621132305B133B(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1), 0);
	}
}

bool func_202(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_35();
	}
	uVar0 = func_203(iParam1);
	uVar1 = unk_0x11BD984A2A4EF9A7(uVar0);
	return unk_0xDCC86F723E82125E(uVar1, iParam0);
}

int func_203(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_35();
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

void func_204(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_159(iParam0, func_160(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_207(iParam0))
	{
		func_206(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_205(iParam0, iVar0, iParam2, 1);
	}
}

void func_205(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2466774[iParam0 /*5*/][func_160(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x071958EFED9481F5(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 777:
			Global_1347559[func_160(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1347565[func_160(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1347571[func_160(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1347577[func_160(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1347535[func_160(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1347541[func_160(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1347547[func_160(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347553[func_160(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347511[func_160(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347517[func_160(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347523[func_160(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347529[func_160(iParam2)] = iParam1;
			break;
		
		case 747:
			Global_1347583[func_160(iParam2)] = iParam1;
			break;
		
		case 748:
			Global_1347589[func_160(iParam2)] = iParam1;
			break;
		
		case 749:
			Global_1347595[func_160(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347601[func_160(iParam2)] = iParam1;
			break;
		
		case 1293:
			Global_1347607[func_160(iParam2)] = iParam1;
			break;
		
		case 629:
			Global_1347613[func_160(iParam2)] = iParam1;
			break;
		
		case 1268:
			Global_1347619[func_160(iParam2)] = iParam1;
			break;
		
		case 1865:
			Global_2489474[0 /*6*/][func_160(iParam2)] = iParam1;
			break;
		
		case 2256:
			Global_2489474[1 /*6*/][func_160(iParam2)] = iParam1;
			break;
		
		case 2902:
			Global_2489474[2 /*6*/][func_160(iParam2)] = iParam1;
			break;
		
		case 3030:
			Global_2489474[3 /*6*/][func_160(iParam2)] = iParam1;
			break;
		
		case 3732:
			Global_2489525[func_160(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1347625[func_160(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1347631[func_160(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1347637[func_160(iParam2)] = iParam1;
			break;
		
		case 1226:
			Global_1347643[func_160(iParam2)] = iParam1;
			break;
		
		case 3025:
			Global_2489499[0 /*5*/][func_160(iParam2)] = iParam1;
			break;
		
		case 3026:
			Global_2489499[1 /*5*/][func_160(iParam2)] = iParam1;
			break;
		
		case 3027:
			Global_2489499[2 /*5*/][func_160(iParam2)] = iParam1;
			break;
		
		case 3028:
			Global_2489499[3 /*5*/][func_160(iParam2)] = iParam1;
			break;
		
		case 3029:
			Global_2489499[4 /*5*/][func_160(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_206(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2466774[iParam0 /*5*/][func_160(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x071958EFED9481F5(iVar0, iParam1, iParam3);
	}
}

int func_207(int iParam0)
{
	if (Global_1347492)
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
			case 1293:
			case 629:
			case 1268:
			case 754:
			case 755:
			case 756:
			case 1226:
			case 1865:
			case 2256:
			case 2902:
			case 3030:
			case 3732:
			case 3025:
			case 3026:
			case 3027:
			case 3028:
			case 3029:
				return 1;
				break;
			}
	}
	return 0;
}

void func_208(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_212(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_211(iParam0))
	{
		func_210(iParam0, iVar0);
	}
	else
	{
		func_209(iParam0, iVar0);
	}
}

void func_209(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x071958EFED9481F5(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1347493 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1347495 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1347495 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1347496 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1347497 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1347498 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1347499 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1347500 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1347501 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1347502 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1347503 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1347504 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1347505 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1347506 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1347507 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1347508 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1347509 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_210(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x071958EFED9481F5(iVar0, iParam1, 1);
	}
}

int func_211(int iParam0)
{
	if (Global_1347492)
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

int func_212(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x5F0618A5FDAD55C4(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_213(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_2442010 == 0)
	{
		return 0;
	}
	if (func_229())
	{
		if (unk_0xDC9A5ADFE0C41DD2() || (func_227() || func_225()))
		{
			Global_2441385 = 1;
		}
	}
	Global_2442010 = 0;
	if (Global_1318741)
	{
		iVar0 = 1;
	}
	if (Global_2441385)
	{
		iVar0 = 1;
	}
	if (Global_2441384)
	{
		iVar0 = 1;
	}
	if (func_224(Global_100004.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2441310)
	{
		iVar0 = 1;
	}
	if (func_223(512))
	{
		iVar0 = 1;
	}
	if (func_222(128))
	{
		iVar0 = 1;
	}
	if (Global_1318765 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_221())
	{
		iVar0 = 0;
	}
	if (Global_2441450)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_219())
		{
			if (Global_1613622.f_69427 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_33(unk_0xA34E7C2A5118D638(), 0))
	{
		iVar0 = 0;
	}
	if (func_218())
	{
		iVar0 = 0;
	}
	if ((Global_2441385 || Global_2441384) || Global_1318741)
	{
		if (func_225())
		{
			iVar0 = 0;
		}
	}
	Global_2441450 = 0;
	Global_2441384 = 0;
	Global_2441385 = 0;
	Global_1318741 = 0;
	Global_2441310 = 0;
	func_216(&(Global_100004.f_1), 32);
	func_215(512);
	func_214(128);
	return iVar0;
}

void func_214(int iParam0)
{
	Global_100061 = (Global_100061 - (Global_100061 && iParam0));
}

void func_215(int iParam0)
{
	Global_100062 = (Global_100062 - (Global_100062 && iParam0));
}

void func_216(var uParam0, int iParam1)
{
	func_217(uParam0, iParam1);
}

void func_217(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_218()
{
	if (((Global_1573850 || Global_1573821) || func_33(unk_0xA34E7C2A5118D638(), 0)) || func_140())
	{
		return 1;
	}
	return 0;
}

int func_219()
{
	switch (func_220())
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

int func_220()
{
	return Global_2433864.f_1.f_2818;
}

bool func_221()
{
	return Global_1315886;
}

bool func_222(int iParam0)
{
	return (Global_100061 && iParam0) != 0;
}

bool func_223(int iParam0)
{
	return (Global_100062 && iParam0) != 0;
}

bool func_224(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_225()
{
	if (func_234(Global_2443244))
	{
		return 0;
	}
	if (func_226(unk_0xA34E7C2A5118D638(), 146))
	{
		return 1;
	}
	return 0;
}

int func_226(int iParam0, int iParam1)
{
	if (Global_1608811[iParam0 /*109*/] == iParam1)
	{
		return func_163(iParam0);
	}
	return 0;
}

int func_227()
{
	if (func_234(Global_2443244))
	{
		return 0;
	}
	if (func_163(unk_0xA34E7C2A5118D638()))
	{
		return 1;
	}
	return 0;
}

void func_228(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_35();
	}
	switch (iParam0)
	{
		case 0:
			unk_0x793E1948527089BB(0, iParam1);
			break;
		
		default:
			uVar1 = func_203(iParam1);
			iVar0 = unk_0x11BD984A2A4EF9A7(uVar1);
			if (unk_0xDCC86F723E82125E(iVar0, iParam0))
			{
				unk_0x77621132305B133B(&iVar0, iParam0);
				unk_0x793E1948527089BB(iVar0, iParam1);
			}
			break;
	}
}

bool func_229()
{
	return unk_0xDCC86F723E82125E(Global_1312423, 0);
}

bool func_230()
{
	return Global_1315878;
}

bool func_231()
{
	return Global_1315911;
}

void func_232(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_35();
	}
	switch (iParam0)
	{
		case 0:
			unk_0x793E1948527089BB(0, iParam1);
			break;
		
		default:
			uVar1 = func_203(iParam1);
			iVar0 = unk_0x11BD984A2A4EF9A7(uVar1);
			if (!unk_0xDCC86F723E82125E(iVar0, iParam0))
			{
				unk_0x59A0729D503ED758(&iVar0, iParam0);
				unk_0x793E1948527089BB(iVar0, iParam1);
			}
			break;
	}
}

int func_233(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_1318765 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_221())
	{
		iVar0 = 0;
	}
	if (iParam0 == 0)
	{
		if (!func_219())
		{
			if (Global_1613622.f_69427 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_33(unk_0xA34E7C2A5118D638(), 0))
	{
		iVar0 = 0;
	}
	if (func_218())
	{
		iVar0 = 0;
	}
	Global_2442010 = 1;
	return iVar0;
}

int func_234(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			if (Global_262145.f_9298)
			{
				return 1;
			}
			break;
		
		case 132:
			if (Global_262145.f_9300)
			{
				return 1;
			}
			break;
		
		case 133:
			if (Global_262145.f_9297)
			{
				return 1;
			}
			break;
		
		case 136:
			if (Global_262145.f_9301)
			{
				return 1;
			}
			break;
		
		case 138:
			if (Global_262145.f_9302)
			{
				return 1;
			}
			break;
		
		case 139:
			if (Global_262145.f_9303)
			{
				return 1;
			}
			break;
		
		case 129:
			if (Global_262145.f_9299)
			{
				return 1;
			}
			break;
		
		case 140:
			if (Global_262145.f_9304)
			{
				return 1;
			}
			break;
		
		case 141:
			if (Global_262145.f_9305)
			{
				return 1;
			}
			break;
		
		case 144:
			if (Global_262145.f_9306)
			{
				return 1;
			}
			break;
		
		case 146:
			if (Global_262145.f_9307)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_235()
{
	if (func_237(0, 0))
	{
		return;
	}
	if (unk_0xDCC86F723E82125E(iLocal_557, 25))
	{
		if (iLocal_394 == unk_0x935FA14EDA695A82())
		{
			if (Local_382.f_11 == 0)
			{
				Local_382.f_11 = unk_0x20F8506526D25CE0();
			}
		}
		unk_0x77621132305B133B(&iLocal_557, 25);
	}
}

void func_236()
{
	if (func_177("KOTC_1STHELP"))
	{
		unk_0x9F4AA6F234E8A860(1);
	}
	if (func_177("KOTC_OTHRKG"))
	{
		unk_0x9F4AA6F234E8A860(1);
	}
	if (func_177("KOTC_YOUKNG"))
	{
		unk_0x9F4AA6F234E8A860(1);
	}
	if (func_177("KOTC_CONTS"))
	{
		unk_0x9F4AA6F234E8A860(1);
	}
}

int func_237(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
	}
	if (unk_0xDCC86F723E82125E(iLocal_557, 17))
	{
		return 1;
	}
	if (func_271(unk_0xA34E7C2A5118D638(), 1))
	{
		return 1;
	}
	if (func_99())
	{
		return 1;
	}
	if (func_173(9))
	{
		return 1;
	}
	if (func_173(0))
	{
		return 1;
	}
	if (!func_252())
	{
		return 1;
	}
	if (func_245())
	{
		return 1;
	}
	if (func_240(4))
	{
		return 1;
	}
	if (func_239())
	{
		return 1;
	}
	if (func_194(bParam0, bParam1))
	{
		return 1;
	}
	if (Global_1710052)
	{
		return 1;
	}
	if (func_238(unk_0xA34E7C2A5118D638()))
	{
		return 1;
	}
	return 0;
}

int func_238(int iParam0)
{
	if (!func_651(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1587175[iParam0 /*410*/].f_35;
}

bool func_239()
{
	return Global_91158.f_297 > 0;
}

int func_240(int iParam0)
{
	int iVar0;
	
	if (func_239())
	{
		iVar0 = 0;
		while (iVar0 < 45)
		{
			if (func_244(iVar0) == iParam0)
			{
				if (func_241(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_241(int iParam0)
{
	return func_242(iParam0, 6, 1);
}

int func_242(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xDCC86F723E82125E(Global_91158.f_1300[iParam0], iParam1);
	}
	else if (unk_0xBBAE3E0C60A8AD4B())
	{
		if (func_166() == 0)
		{
			return unk_0xDCC86F723E82125E(func_159(func_243(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xDCC86F723E82125E(Global_100976.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_243(int iParam0)
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

int func_244(int iParam0)
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

int func_245()
{
	if (unk_0xDCC86F723E82125E(Global_2458121.f_356.f_5, 0))
	{
		return 1;
	}
	if (func_247() && Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_84 != 3)
	{
		return 1;
	}
	if (func_246() && Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_84 != 3)
	{
		return 1;
	}
	if (Global_2394643)
	{
		return 1;
	}
	if (Global_1573879.f_20)
	{
		return 1;
	}
	return 0;
}

bool func_246()
{
	return unk_0xDCC86F723E82125E(Global_2433098, 5);
}

int func_247()
{
	if (((func_251() || func_250()) || func_249()) || func_248())
	{
		return 1;
	}
	return 0;
}

bool func_248()
{
	return unk_0xDCC86F723E82125E(Global_2433098, 1);
}

bool func_249()
{
	return unk_0xDCC86F723E82125E(Global_2433098, 2);
}

bool func_250()
{
	return unk_0xDCC86F723E82125E(Global_2433098, 20);
}

bool func_251()
{
	return Global_2433098.f_574;
}

int func_252()
{
	if (func_90(unk_0xA34E7C2A5118D638(), 21))
	{
		return 0;
	}
	if (unk_0xE21B8C41C187AA64())
	{
		return 0;
	}
	if (unk_0x547823CBA92EEF50())
	{
		return 0;
	}
	if (func_185(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	if (func_270())
	{
		return 0;
	}
	if (func_269(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	if (func_268())
	{
		return 0;
	}
	if (func_258(unk_0xA34E7C2A5118D638()) == 3)
	{
		return 0;
	}
	if (func_256(func_257()))
	{
		return 0;
	}
	if (func_231())
	{
		return 0;
	}
	if (func_99())
	{
		return 0;
	}
	if (unk_0xDC9A5ADFE0C41DD2())
	{
		return 0;
	}
	if (func_187(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	if (!func_254())
	{
		return 0;
	}
	if (func_90(unk_0xA34E7C2A5118D638(), 0) || func_90(unk_0xA34E7C2A5118D638(), 3))
	{
		return 0;
	}
	if ((func_90(unk_0xA34E7C2A5118D638(), 12) || func_90(unk_0xA34E7C2A5118D638(), 14)) || func_90(unk_0xA34E7C2A5118D638(), 13))
	{
		return 0;
	}
	if (func_81(unk_0xA34E7C2A5118D638(), 0))
	{
		return 0;
	}
	if (func_239())
	{
		return 0;
	}
	if (Global_1710052)
	{
		return 0;
	}
	if (func_238(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	if (func_253())
	{
		return 0;
	}
	return 1;
}

int func_253()
{
	if (Global_2549001.f_796 > -1)
	{
		return 1;
	}
	return 0;
}

int func_254()
{
	if (func_255() == 0)
	{
		return 1;
	}
	return 0;
}

int func_255()
{
	return Global_1312466.f_18;
}

int func_256(int iParam0)
{
	switch (iParam0)
	{
		case 85:
		case 86:
		case 87:
			return 1;
		
		default:
	}
	return 0;
}

int func_257()
{
	return Global_2426867.f_2138[0 /*72*/].f_1;
}

int func_258(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_267(iParam0) && !func_170(iParam0)) && !unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_1, 8));
	bVar2 = func_266(iParam0);
	bVar3 = func_92();
	uVar4 = func_260();
	if ((bVar1 && (func_259(iParam0) || func_163(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (bVar3 || ((!bVar2 && !func_27(iParam0)) && !func_25(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2458121.f_4648.f_18 != iVar0)
	{
		Global_2458121.f_4648.f_18 = iVar0;
	}
	return iVar0;
}

int func_259(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xDCC86F723E82125E(Global_1608811[iVar0 /*109*/].f_1, 7);
	}
	return 0;
}

int func_260()
{
	if ((func_26(unk_0xA34E7C2A5118D638(), 21) || func_26(unk_0xA34E7C2A5118D638(), 22)) || func_264())
	{
		return 1;
	}
	if (func_262())
	{
		func_261(22);
		return 1;
	}
	return 0;
}

void func_261(int iParam0)
{
	unk_0x59A0729D503ED758(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9.f_4), iParam0);
}

int func_262()
{
	if (func_28(unk_0xA34E7C2A5118D638(), 0))
	{
		if ((func_92() && !func_91()) || func_90(unk_0xA34E7C2A5118D638(), 21))
		{
			if (!func_26(unk_0xA34E7C2A5118D638(), 27))
			{
				return 1;
			}
		}
		else
		{
			func_263(27);
		}
	}
	return 0;
}

void func_263(int iParam0)
{
	unk_0x77621132305B133B(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9.f_4), iParam0);
}

int func_264()
{
	return func_265(267, -1);
}

int func_265(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2486871[iParam0 /*5*/][func_160(iParam1)];
	if (unk_0xC7E465DF93CF8F2C(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_266(int iParam0)
{
	return func_26(iParam0, 20);
}

int func_267(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1608811[iVar0 /*109*/] != -1;
	}
	return 0;
}

bool func_268()
{
	return Global_1587175[unk_0xA34E7C2A5118D638() /*410*/] == 5;
}

int func_269(int iParam0)
{
	if (Global_2417071[iParam0 /*306*/].f_257.f_4 != 0 || Global_2417071[iParam0 /*306*/].f_257.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_270()
{
	return unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_39.f_18, 0);
}

int func_271(int iParam0, bool bParam1)
{
	if (unk_0xDCC86F723E82125E(Global_1587175[iParam0 /*410*/].f_247.f_6, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xDCC86F723E82125E(Global_1587175[iParam0 /*410*/].f_247.f_6, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_272(int iParam0, struct<3> Param1, var uParam4, float fParam5, float fParam6, var uParam7)
{
	float fVar0;
	int iVar1;
	
	Global_1573879.f_6 = { Param1 };
	fVar0 = unk_0x2A488C176D52CCA5(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), Param1);
	if (fVar0 < fParam5 && !func_170(unk_0xA34E7C2A5118D638()))
	{
		if (iParam0 != 146 && !func_90(unk_0xA34E7C2A5118D638(), 21))
		{
			func_284(Param1, 1, 0);
		}
		if ((!*uParam4 || unk_0xDCC86F723E82125E(Global_1573879.f_1, 3)) && func_651(unk_0xA34E7C2A5118D638(), 1, 1))
		{
			*uParam4 = 1;
			func_164(func_283(iParam0));
			unk_0xFD62177C7242216E(func_282(iParam0));
			if (iParam0 != 146)
			{
				iVar1 = func_281(iParam0);
				unk_0x60B57BC5E51D2074(iVar1);
				if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) > iVar1)
				{
					unk_0xB47D5A4E4AE9BEAD(unk_0xA34E7C2A5118D638(), iVar1, 1);
					unk_0x1C9B7C3360143C4C(unk_0xA34E7C2A5118D638(), 1);
				}
				unk_0x59A0729D503ED758(&(Global_1573879.f_1), 8);
			}
			unk_0x59A0729D503ED758(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1), 3);
			unk_0x77621132305B133B(&(Global_1573879.f_1), 3);
		}
	}
	else if ((iParam0 == 146 && fVar0 < fParam6) && !func_170(unk_0xA34E7C2A5118D638()))
	{
		if (!unk_0xDCC86F723E82125E(Global_1573879.f_1, 3) && func_651(unk_0xA34E7C2A5118D638(), 1, 1))
		{
			func_280();
			unk_0xFD62177C7242216E(Global_262145.f_9310);
			unk_0x77621132305B133B(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1), 3);
			unk_0x59A0729D503ED758(&(Global_1573879.f_1), 3);
		}
	}
	else if ((*uParam4 || unk_0xDCC86F723E82125E(Global_1573879.f_1, 3)) && func_651(unk_0xA34E7C2A5118D638(), 1, 1))
	{
		*uParam4 = 0;
		func_280();
		unk_0xFD62177C7242216E(1f);
		unk_0x60B57BC5E51D2074(5);
		unk_0x77621132305B133B(&(Global_1573879.f_1), 8);
		unk_0x77621132305B133B(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1), 3);
		unk_0x77621132305B133B(&(Global_1573879.f_1), 3);
		if (iParam0 != 146 && uParam7)
		{
			func_273();
		}
	}
}

void func_273()
{
	Global_2404919.f_20 = { Global_2406723 };
	Global_2404919.f_22 = { Global_2406725 };
	func_278();
	func_274(1, 1);
}

void func_274(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_2404919.f_39 = { Global_2406742 };
	}
	else
	{
		Global_2404919.f_39 = { Global_2406742 };
		Global_2404919.f_39.f_49 = { Global_2406742.f_49 };
		Global_2404919.f_39.f_52 = Global_2406742.f_52;
		Global_2404919.f_39.f_53 = Global_2406742.f_53;
	}
	if (bParam0)
	{
		func_277();
	}
	func_77(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0);
	func_276(0);
	func_275();
}

void func_275()
{
	struct<4> Var0;
	
	if (Global_2404919.f_469.f_1 == unk_0x46CF50E0E5A24635())
	{
		Global_2404919.f_469 = { Var0 };
	}
}

void func_276(bool bParam0)
{
	if (bParam0)
	{
		Global_2404919.f_629 = 0;
	}
	else
	{
		Global_2404919.f_629 = 1;
	}
}

void func_277()
{
	Global_2404919.f_347 = { Global_2407050 };
}

void func_278()
{
	func_279();
	Global_2404919.f_1275 = 0;
}

void func_279()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2404919.f_1276[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_280()
{
	if (unk_0xC2DCA35AE2EC9DC4(Global_2458121.f_4644))
	{
		if (!Global_2458121.f_4644 == unk_0x46CF50E0E5A24635() && Global_2458121.f_4643 < 1f)
		{
			return;
		}
	}
	Global_2458121.f_4644 = -1;
	Global_2458121.f_4643 = 1f;
}

int func_281(int iParam0)
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

float func_282(int iParam0)
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

float func_283(int iParam0)
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

void func_284(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2404919.f_39.f_49 = { Param0 };
	Global_2404919.f_39.f_52 = iParam3;
	Global_2404919.f_39.f_53 = iParam4;
}

Vector3 func_285(int iParam0)
{
	return Local_1243[iParam0 /*68*/].f_24;
}

void func_286(int iParam0)
{
	int iVar0;
	
	if (func_237(0, 0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_1312[iVar0 /*47*/] = -1;
		Local_1312[iVar0 /*47*/].f_1 = func_48();
		Local_1312[iVar0 /*47*/].f_9 = 0;
		Local_1312[iVar0 /*47*/].f_30 = -1;
		if (Local_98.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/] > -1)
		{
			Local_1312[iVar0 /*47*/] = Local_98.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/];
			Local_1312[iVar0 /*47*/].f_1 = Local_98.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/].f_1;
			Local_1312[iVar0 /*47*/].f_9 = func_58(Local_98.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/].f_3);
		}
		iVar0++;
	}
	func_287(&Local_1312, &(Local_1243[iParam0 /*68*/].f_66), 23, &uLocal_2817, &uLocal_2926, -1, 0);
}

void func_287(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1[32];
	bool bVar34;
	int iVar35;
	char* sVar36;
	int iVar37;
	struct<4> Var38;
	int iVar42;
	int iVar43;
	int iVar44;
	float fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	
	if (func_389(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_387() || iParam2 == 24)
	{
		if (func_349(uParam1, iParam2, uParam3, Global_1573681, 0, func_390()))
		{
			func_348(1);
			if ((!func_347() && !func_346()) || unk_0xDCC86F723E82125E(Global_2458121.f_4414, 1))
			{
				if (func_345())
				{
					func_343();
				}
				else
				{
					unk_0xF799955FDE53592F(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_342(1);
						Global_1573681 = 0;
						iVar54 = -1;
						if (Global_1573829 != 1)
						{
							func_341(uParam1);
							if (unk_0xDCC86F723E82125E(uParam3->f_33, 7))
							{
								unk_0x77621132305B133B(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 24)
						{
							iVar52 = 0;
							while (iVar52 < 32)
							{
								iVar1[iVar52] = -1;
								iVar52++;
							}
							iVar52 = 0;
							while (iVar52 < 32)
							{
								if (func_651(unk_0x20A20BF765914E37(iVar52), 0, 1))
								{
									iVar35 = unk_0x20A20BF765914E37(iVar52);
									if (!func_33(iVar35, 0))
									{
										if ((unk_0x139A9C4D61DFD52E(iVar35, unk_0xA34E7C2A5118D638()) || Global_2417071[iVar35 /*306*/].f_232 != -1) || func_340(iVar35))
										{
											iVar44 = iVar35;
											if (func_55(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_337(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_335(unk_0xA34E7C2A5118D638(), 0))
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_333())
							{
								if (func_651(unk_0x20A20BF765914E37(iVar52), 0, 1))
								{
									iVar35 = unk_0x20A20BF765914E37(iVar52);
								}
								else
								{
									iVar35 = func_48();
								}
							}
							else
							{
								iVar35 = (iParam0[iVar52 /*47*/])->f_1;
							}
							if ((func_332(iVar35) && func_328(iVar35, iParam2)) && func_651(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1587175[iVar44 /*410*/].f_192.f_6;
								Var38 = { func_323(iVar35) };
								if (iVar35 == unk_0xA34E7C2A5118D638())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0x74C5CB21CF9F1178(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_38(iVar35) };
								iVar37 = func_317(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0xC607197AF4E3A5B7(iVar37);
								}
								Global_1573681++;
								if ((iParam0[iVar52 /*47*/])->f_22 != -1f)
								{
									fVar45 = (iParam0[iVar52 /*47*/])->f_22;
								}
								if ((iParam0[iVar52 /*47*/])->f_30 != -1)
								{
									iVar46 = (iParam0[iVar52 /*47*/])->f_30;
								}
								if ((iParam0[iVar52 /*47*/])->f_46 != -1)
								{
									iVar47 = (iParam0[iVar52 /*47*/])->f_46;
								}
								iVar43 = (iParam0[iVar52 /*47*/])->f_9;
								if (((iParam0[iVar52 /*47*/])->f_9 != -1 || (iParam0[iVar52 /*47*/])->f_22 != -1f) || (iParam0[iVar52 /*47*/])->f_30 != -1)
								{
									if (!func_333())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_312(&iVar43, &fVar45, (iParam0[iVar52 /*47*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_311(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (iParam0[iVar52 /*47*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_310(iVar35, 0);
								if (bVar34)
								{
									if (func_54(iVar35, 1) && iVar1[iVar44] != -1)
									{
										iVar53 = iVar1[iVar44];
									}
									else
									{
										iVar53 = (iVar0 + iVar56);
										iVar56++;
									}
								}
								uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
								if (func_309(iParam5))
								{
									func_308(uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &((iParam0[iVar52 /*47*/])->f_37), &((iParam0[iVar52 /*47*/])->f_41), (iParam0[iVar52 /*47*/])->f_45, iVar48, bParam6);
								}
								else
								{
									func_308(uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &((iParam0[iVar52 /*47*/])->f_37), &((iParam0[iVar52 /*47*/])->f_41), (iParam0[iVar52 /*47*/])->f_45, iVar48, bParam6);
								}
								unk_0x59A0729D503ED758(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0x20A20BF765914E37(iVar52);
							if (func_651(iVar35, 0, 1) && !unk_0xDCC86F723E82125E(iVar49, iVar35))
							{
								iVar35 = unk_0x20A20BF765914E37(iVar52);
							}
							else
							{
								iVar35 = func_48();
							}
							if (func_332(iVar35))
							{
								if (func_651(unk_0x20A20BF765914E37(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1587175[iVar44 /*410*/].f_192.f_6;
									Var38 = { func_323(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_38(iVar35) };
									iVar37 = func_317(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0xC607197AF4E3A5B7(iVar37);
									}
									Global_1573681++;
									iVar51 = func_310(iVar35, 1);
									if (bVar34)
									{
										if (func_54(iVar35, 1))
										{
											iVar53 = iVar1[iVar52];
										}
										else
										{
											iVar53 = (iVar0 + iVar56);
											iVar56++;
										}
									}
									uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
									func_300(unk_0x74C5CB21CF9F1178(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0xDCC86F723E82125E(uParam3->f_33, 11))
						{
							func_297(uParam3, uParam1);
						}
						func_3(&(uParam3->f_21));
						func_296();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xDCC86F723E82125E(uParam3->f_33, 7))
						{
							func_295(uParam3, uParam1);
							func_294(uParam1, 0, 1);
							unk_0x59A0729D503ED758(&(uParam3->f_33), 7);
						}
						func_295(uParam3, uParam1);
						if (!unk_0xDCC86F723E82125E(uParam3->f_33, 11))
						{
							unk_0x59A0729D503ED758(&(uParam3->f_33), 11);
						}
						if (func_290(uParam3))
						{
							Global_1573829 = 1;
						}
						func_288(uParam3);
						if (Global_1573829 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1573829 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0xF518F3C7FACD43B7(*uParam1))
					{
						unk_0x7F1F2564B5CE06AF(7);
						unk_0x06D856499865F31F(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x7F1F2564B5CE06AF(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_296();
			func_342(0);
			if (unk_0xDCC86F723E82125E(uParam3->f_33, 7))
			{
				unk_0x77621132305B133B(&(uParam3->f_33), 7);
			}
			if (unk_0xDCC86F723E82125E(uParam3->f_33, 10))
			{
				unk_0x77621132305B133B(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0xFA99CE7438CDE58B();
}

void func_288(var uParam0)
{
	if (!func_18(&(uParam0->f_21)))
	{
		func_11(&(uParam0->f_21), 0, 0);
	}
	else if (func_5(&(uParam0->f_21), 250, 0))
	{
		func_3(&(uParam0->f_21));
		func_289(0);
	}
}

void func_289(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1573829 != 2)
		{
			Global_1573829 = 2;
		}
	}
	else
	{
		switch (Global_1573829)
		{
			case 0:
				Global_1573829 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_290(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x20A20BF765914E37(uParam0->f_37);
	if (iVar15 != func_48() && func_651(iVar15, 0, 1))
	{
		Var2 = { func_38(iVar15) };
		iVar1 = func_293(uParam0, uParam0->f_37);
		if (func_292(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0xF11F35D5182AC230(&Var2))
					{
						if (unk_0x0D22594652B31CB8(&Var2))
						{
							iVar16 = 1;
							func_291(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x186143F44A45035A(&Var2))
					{
						iVar16 = 1;
						func_291(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0xF11F35D5182AC230(&Var2))
					{
						if (!unk_0x0D22594652B31CB8(&Var2))
						{
							iVar16 = 1;
							func_291(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_291(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0xF11F35D5182AC230(&Var2))
					{
						if (!unk_0x186143F44A45035A(&Var2))
						{
							iVar16 = 1;
							func_291(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x186143F44A45035A(&Var2))
					{
						iVar16 = 1;
						func_291(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar16;
}

void func_291(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_292(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xB622E0FF38C89E7E(&uParam0, 13);
}

var func_293(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_294(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x7C38F93AF52620B1(*uParam0, "COLLAPSE"))
	{
		unk_0x0139C89EE907A315(iParam1);
		unk_0xD013AC29829DDC02();
	}
	if (iParam2 == 1)
	{
		if (unk_0x7C38F93AF52620B1(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0xD013AC29829DDC02();
		}
	}
}

void func_295(var uParam0, var uParam1)
{
	if (!unk_0xDCC86F723E82125E(uParam0->f_33, 10))
	{
		unk_0x7C38F93AF52620B1(*uParam1, "SET_HIGHLIGHT");
		unk_0x65960B4E2ADC9F6D(uParam0->f_35);
		unk_0xD013AC29829DDC02();
		unk_0x59A0729D503ED758(&(uParam0->f_33), 10);
	}
}

void func_296()
{
	if (Global_1573829 != 0)
	{
		Global_1573829 = 0;
	}
}

void func_297(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x20A20BF765914E37(iVar0);
		if (iVar2 != func_48())
		{
			if (func_651(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_299(uParam0->f_38[iVar0 /*2*/], 0);
					func_298(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1587175[iVar0 /*410*/].f_192.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_298(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xF518F3C7FACD43B7(*uParam0))
	{
		if (unk_0x7C38F93AF52620B1(*uParam0, "SET_ICON"))
		{
			unk_0x65960B4E2ADC9F6D(iParam1);
			unk_0x65960B4E2ADC9F6D(iParam2);
			if (iParam2 == 65)
			{
				unk_0x65960B4E2ADC9F6D(iParam3);
			}
			unk_0xD013AC29829DDC02();
		}
	}
}

int func_299(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 65;
	if (bParam1)
	{
		iVar0 = 116;
	}
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

void func_300(char* sParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_307() && iParam3 < func_306())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1573683)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1573829 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x7C38F93AF52620B1(*uParam1, sVar1))
		{
			unk_0x65960B4E2ADC9F6D(iParam3);
			if (unk_0xDCC86F723E82125E(uParam2->f_33, 8) || uParam2->f_108 == 6)
			{
				func_305("");
			}
			else
			{
				unk_0x65960B4E2ADC9F6D(iParam9);
			}
			func_305(sParam0);
			unk_0x65960B4E2ADC9F6D(iParam10);
			if (uParam2->f_108 == 6)
			{
				func_305("");
			}
			else
			{
				unk_0x65960B4E2ADC9F6D(65);
			}
			unk_0x65960B4E2ADC9F6D(-1);
			func_305("");
			if (uParam2->f_108 == 6)
			{
				func_305("");
			}
			else
			{
				func_305(&sParam4);
			}
			unk_0x0139C89EE907A315(uParam2->f_36);
			unk_0x36D5E26AC42570A3(sParam8);
			unk_0x36D5E26AC42570A3(sParam8);
			if (func_304(uParam2))
			{
				func_303("DPAD_FRIEND");
			}
			else if (func_302(uParam2))
			{
				func_303("DPAD_FRIEND");
			}
			else if (func_301(uParam2))
			{
				func_303("DPAD_CREW");
			}
			else
			{
				func_303("");
			}
			unk_0xD013AC29829DDC02();
		}
	}
}

bool func_301(var uParam0)
{
	return unk_0xDCC86F723E82125E(uParam0->f_33, 6);
}

bool func_302(var uParam0)
{
	return unk_0xDCC86F723E82125E(uParam0->f_33, 5);
}

void func_303(char* sParam0)
{
	unk_0x276F16E002D00C0C(sParam0);
	unk_0x354E2E7AA52E941F();
}

int func_304(var uParam0)
{
	if (func_302(uParam0) && func_301(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_305(char* sParam0)
{
	unk_0x621B4D0F6ED2315D(sParam0);
}

int func_306()
{
	int iVar0;
	
	if (Global_1573683)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_307()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1573683)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_308(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, var uParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12, int iParam13, int iParam14, char* sParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam2 >= func_307() && iParam2 < func_306())
	{
		iParam2 = (iParam2 % 16);
		iVar0 = iParam2 + 1;
		if (Global_1573683)
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
		if (Global_1573829 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xF518F3C7FACD43B7(*uParam0))
		{
			if (unk_0x7C38F93AF52620B1(*uParam0, sVar1))
			{
				unk_0x65960B4E2ADC9F6D(iParam2);
				if (unk_0xDCC86F723E82125E(uParam1->f_33, 8) || uParam1->f_108 == 6)
				{
					func_305("");
				}
				else
				{
					unk_0x65960B4E2ADC9F6D(iParam8);
				}
				if (uParam1->f_108 == 6 && !unk_0xB8A06E7E729EED0A(sParam15))
				{
					func_303(sParam15);
				}
				else
				{
					func_305(&(uParam1->f_1));
				}
				unk_0x65960B4E2ADC9F6D(iParam10);
				if (uParam1->f_108 == 6)
				{
					func_305("");
				}
				else
				{
					unk_0x65960B4E2ADC9F6D(65);
				}
				if (iParam11 == 1)
				{
					unk_0x65960B4E2ADC9F6D(iVar0);
				}
				else
				{
					unk_0x65960B4E2ADC9F6D(-1);
				}
				if (func_333())
				{
					func_305("");
				}
				else if (uParam1->f_108 == 6 && !unk_0xB8A06E7E729EED0A(sParam15))
				{
					unk_0x276F16E002D00C0C("FM_AE_ONE_INT");
					unk_0xCE59E3E42586D52D(sParam15);
					unk_0x6DC80A902A91958F(iParam17);
					unk_0x354E2E7AA52E941F();
				}
				else if (uParam1->f_108 == 5 && !unk_0xB8A06E7E729EED0A(sParam15))
				{
					unk_0x276F16E002D00C0C("FM_AE_ONE_INT");
					unk_0xCE59E3E42586D52D(sParam15);
					unk_0x6DC80A902A91958F(iParam17);
					unk_0x354E2E7AA52E941F();
				}
				else if ((uParam1->f_108 == 7 && !unk_0xB8A06E7E729EED0A(sParam15)) && !unk_0xB8A06E7E729EED0A(sParam16))
				{
					unk_0x276F16E002D00C0C("FM_AE_TWO_INT");
					unk_0xCE59E3E42586D52D(sParam15);
					unk_0xCE59E3E42586D52D(sParam16);
					unk_0x6DC80A902A91958F(iParam17);
					unk_0x354E2E7AA52E941F();
				}
				else if (uParam1->f_108 == 8 && !unk_0xB8A06E7E729EED0A(&(uParam1->f_104)))
				{
					unk_0x276F16E002D00C0C("FM_AE_UNIT");
					if (fParam12 != -1f)
					{
						unk_0x36E8D9048E194806(fParam12, 1);
					}
					if (iParam9 != -1)
					{
						unk_0x6DC80A902A91958F(iParam9);
					}
					unk_0xCE59E3E42586D52D(&(uParam1->f_104));
					unk_0x354E2E7AA52E941F();
				}
				else if (uParam1->f_108 == 9)
				{
					unk_0x276F16E002D00C0C("FM_AE_CASH");
					unk_0x5CDA8F588F01C361(iParam9, 1);
					unk_0x354E2E7AA52E941F();
				}
				else if (iParam14 > -1)
				{
					if (iParam14 == 0 && !unk_0xB8A06E7E729EED0A(&(uParam1->f_104)))
					{
						func_303(&(uParam1->f_104));
					}
					else
					{
						func_305("");
					}
				}
				else if (iParam13 != -1)
				{
					unk_0x276F16E002D00C0C("STRING");
					unk_0xE4CFBF63F6DBED8E(iParam13, 6);
					unk_0x354E2E7AA52E941F();
				}
				else if (fParam12 != -1f)
				{
					unk_0x276F16E002D00C0C("NUMBER");
					unk_0x36E8D9048E194806(fParam12, 1);
					unk_0x354E2E7AA52E941F();
				}
				else if (iParam9 != -1)
				{
					unk_0x65960B4E2ADC9F6D(iParam9);
				}
				else
				{
					func_305("");
				}
				if (uParam1->f_108 == 6)
				{
					func_305("");
				}
				else
				{
					func_305(&sParam3);
				}
				unk_0x0139C89EE907A315(uParam1->f_36);
				if (iParam11 == 1 || unk_0xB8A06E7E729EED0A(sParam7))
				{
					func_305("");
					func_305("");
				}
				else
				{
					unk_0x36D5E26AC42570A3(sParam7);
					unk_0x36D5E26AC42570A3(sParam7);
				}
				if (func_304(uParam1))
				{
					func_303("DPAD_FRIEND");
				}
				else if (func_302(uParam1))
				{
					func_303("DPAD_FRIEND");
				}
				else if (func_301(uParam1))
				{
					func_303("DPAD_CREW");
				}
				else
				{
					func_303("");
				}
				unk_0xD013AC29829DDC02();
			}
		}
	}
}

int func_309(int iParam0)
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

int func_310(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_267(iParam0)) && !func_266(iParam0))
	{
		iVar0 = func_150();
	}
	iVar1 = func_135(iParam0);
	if (!iVar1 == -1)
	{
		return func_133(iVar1);
	}
	return iVar0;
}

char* func_311(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (unk_0xC3D849E6E05C31A7())
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
			if (unk_0xC3D849E6E05C31A7())
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

int func_312(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_316(iParam3))
	{
		*fParam1 = (func_313(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_309(iParam3))
	{
		*fParam1 = (func_313(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_313(int iParam0, int iParam1)
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
			if (unk_0xC3D849E6E05C31A7())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_315(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0xC3D849E6E05C31A7())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_314(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_314(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_315(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_316(int iParam0)
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

int func_317(int iParam0)
{
	int iVar0;
	
	iVar0 = func_320(iParam0);
	if (iVar0 == -1)
	{
		func_318(iParam0, 1);
		return 0;
	}
	Global_1348409[iVar0 /*5*/].f_4 = 1;
	return Global_1348409[iVar0 /*5*/].f_2;
}

void func_318(int iParam0, bool bParam1)
{
	if (!func_651(iParam0, 0, 1))
	{
		return;
	}
	if (func_320(iParam0) != -1)
	{
		return;
	}
	if (Global_1348572)
	{
		if (iParam0 == Global_1348572.f_1)
		{
			return;
		}
	}
	if (func_319(iParam0))
	{
		return;
	}
	if (Global_1348610 >= 32)
	{
		return;
	}
	Global_1348577[Global_1348610] = iParam0;
	Global_1348610++;
	if (bParam1)
	{
	}
}

int func_319(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1348610)
	{
		if (Global_1348577[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_320(int iParam0)
{
	int iVar0;
	
	if (!func_651(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1348570 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1348570)
	{
		if (Global_1348409[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x09EE7867D5A6100E(Global_1348409[iVar0 /*5*/].f_2) && unk_0x1A48755EDAA1BFA6(Global_1348409[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_321(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_321(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1348570)
	{
		return;
	}
	if (unk_0x09EE7867D5A6100E(Global_1348409[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1348409[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xC607197AF4E3A5B7(Global_1348409[iParam0 /*5*/].f_2), 64);
			unk_0xE0F13AAF9FB19B4B(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x0AF52A8B5613FE81(Global_1348409[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1348570)
	{
		Global_1348409[iVar32 /*5*/] = { Global_1348409[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_322(&(Global_1348409[iVar32 /*5*/]));
	Global_1348570 = (Global_1348570 - 1);
}

void func_322(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_48();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		uParam0->f_3 = unk_0x2AA13A84EE2D3B24();
	}
}

struct<4> func_323(int iParam0)
{
	struct<4> Var0;
	
	if (func_651(iParam0, 0, 1))
	{
		Global_2457104 = { func_38(iParam0) };
		if (unk_0xF7FE713C9F786F8C())
		{
			if (func_292(Global_2457104))
			{
				if (!unk_0x3084526A863D7966(&Global_2457104))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0xE028438B8B6A57B6(0))
		{
			return Var0;
		}
		if (func_327(&Global_2457104))
		{
			Global_2457034 = { func_325(iParam0) };
			func_324(&Global_2457034, &Var0);
		}
	}
	return Var0;
}

void func_324(var uParam0, var uParam1)
{
	unk_0xE0F4EA2B2963CFA2(uParam0, 35, uParam1);
}

struct<35> func_325(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_326(iParam0))
	{
		return Global_1315945[unk_0xA34E7C2A5118D638() /*35*/];
	}
	Var0 = { func_38(iParam0) };
	unk_0x59E0C66A4FA07806(&Var13, 35, &Var0);
	return Var13;
}

int func_326(int iParam0)
{
	if (iParam0 == unk_0xA34E7C2A5118D638())
	{
		return 1;
	}
	return 0;
}

int func_327(var uParam0)
{
	if (unk_0x5AA202D345A0E889())
	{
		if (unk_0x14F2268F2CD21E48() && unk_0x0BB7D2D2CAAFD70C(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_328(int iParam0, int iParam1)
{
	if (iParam1 == 23)
	{
		if ((func_170(iParam0) || func_331(iParam0)) || func_196(iParam0))
		{
			return 0;
		}
	}
	if (!func_330(iParam0))
	{
		return 0;
	}
	if ((!func_329(iParam0) && Global_2417071[iParam0 /*306*/].f_232 == -1) && !func_340(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_329(int iParam0)
{
	if (func_651(iParam0, 0, 1))
	{
		if (func_651(unk_0xA34E7C2A5118D638(), 0, 1))
		{
			if (unk_0x139A9C4D61DFD52E(iParam0, unk_0xA34E7C2A5118D638()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_330(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_1587175[iParam0 /*410*/].f_128, 22);
}

int func_331(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_1, 10) || unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_1, 9));
	}
	return 0;
}

int func_332(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_48())
	{
		return 0;
	}
	if (func_33(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xDCC86F723E82125E(Global_1587175[iVar0 /*410*/].f_128, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_333()
{
	switch (func_192(unk_0xA34E7C2A5118D638()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_266(unk_0xA34E7C2A5118D638()))
	{
		switch (func_334(unk_0xA34E7C2A5118D638()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	return 0;
}

int func_334(int iParam0)
{
	if (func_28(iParam0, 0))
	{
		return Global_1608811[iParam0 /*109*/].f_9.f_28;
	}
	return -1;
}

int func_335(int iParam0, int iParam1)
{
	if (Global_1608811[iParam0 /*109*/].f_9.f_28 != -1 && func_336(Global_1608811[iParam0 /*109*/].f_9.f_28))
	{
		return 1;
	}
	if (iParam1 && Global_1608811[iParam0 /*109*/].f_9.f_27 != -1)
	{
		if (func_336(Global_1608811[iParam0 /*109*/].f_9.f_27))
		{
			return 1;
		}
	}
	return 0;
}

int func_336(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return 0;
}

void func_337(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_651(unk_0x20A20BF765914E37(iVar0), 0, 1))
		{
			iVar1 = unk_0x20A20BF765914E37(iVar0);
			if (!func_33(iVar1, 0))
			{
				if ((unk_0x139A9C4D61DFD52E(iVar1, unk_0xA34E7C2A5118D638()) || Global_2417071[iVar1 /*306*/].f_232 != -1) || func_340(iVar1))
				{
					if (func_338(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_338(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_48())
	{
		if (!bParam2)
		{
			if (func_339(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1608811[iParam0 /*109*/].f_9 != func_48())
		{
			return iParam1 == Global_1608811[iParam0 /*109*/].f_9;
		}
	}
	return 0;
}

int func_339(int iParam0, int iParam1)
{
	if (iParam1 != func_48())
	{
		if (iParam0 != func_48())
		{
			if (Global_1608811[iParam0 /*109*/].f_9 != func_48())
			{
				if (Global_1608811[iParam0 /*109*/].f_9 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_340(int iParam0)
{
	return Global_1587175[iParam0 /*410*/].f_177 != 0;
}

void func_341(var uParam0)
{
	if (unk_0xF518F3C7FACD43B7(*uParam0))
	{
		unk_0x7C38F93AF52620B1(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x65960B4E2ADC9F6D(0);
		unk_0xD013AC29829DDC02();
	}
}

void func_342(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1338608.f_2 == 0)
		{
			Global_1338608.f_2 = 1;
		}
	}
	else if (Global_1338608.f_2 == 1)
	{
		Global_1338608.f_2 = 0;
	}
}

void func_343()
{
	if (unk_0xDCC86F723E82125E(Global_2458121.f_4414, 1))
	{
		if (func_180())
		{
			func_344();
		}
	}
}

void func_344()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2426867.f_2138[iVar0 /*72*/].f_2 != 0)
		{
			Global_2426867.f_2138[iVar0 /*72*/].f_2 = 5;
			unk_0x59A0729D503ED758(&(Global_2426867.f_2138[iVar0 /*72*/].f_63), 0);
		}
		iVar0++;
	}
}

int func_345()
{
	if (unk_0xDCC86F723E82125E(Global_2458121.f_4414, 0) && func_180())
	{
		return 1;
	}
	if (unk_0xDCC86F723E82125E(Global_2458121.f_4414, 1) && func_180())
	{
		return 1;
	}
	return 0;
}

int func_346()
{
	if (func_180())
	{
		if (func_43(Global_2426867.f_2138[0 /*72*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_347()
{
	if (func_180())
	{
		if (func_46(Global_2426867.f_2138[0 /*72*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_348(int iParam0)
{
	Global_1338608.f_1 = Global_1338608;
	Global_1338608 = iParam0;
}

int func_349(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	var uVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_386(iParam1);
	if (iParam1 == 17)
	{
		bVar5 = true;
	}
	fVar7 = func_385();
	if (iParam1 == 23 || iParam1 == 24)
	{
		if (func_384())
		{
			if (func_383() > 0 && Global_1573683)
			{
				unk_0x7662B6FB19655462();
				unk_0x416AE03EAAA9AE80(fVar7);
				unk_0x68A38902ADFD05FE(18);
				if (unk_0xB45DF29A98EEAD5D())
				{
					unk_0x0CD0751316BC99F7();
				}
			}
		}
	}
	if (!bParam5)
	{
		if (!func_374())
		{
			func_373(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xDCC86F723E82125E(Global_2458121.f_4417, 26))
	{
		func_373(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_18(&(uParam2->f_19)))
	{
		if (func_383() == 1)
		{
			func_372(bVar6, uParam0, 0);
			func_11(&(uParam2->f_19), 0, 0);
			func_373(uParam0, uParam2, 0);
		}
	}
	if (func_18(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0xB45DF29A98EEAD5D())
		{
			unk_0x0CD0751316BC99F7();
		}
		if (func_5(&(uParam2->f_19), 10000, 0) || (func_383() == 0 && !bParam5))
		{
			func_373(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_371();
				if (iParam1 == 23 || iParam1 == 24)
				{
					unk_0x7662B6FB19655462();
				}
				unk_0x68A38902ADFD05FE(18);
			}
			if (unk_0xDCC86F723E82125E(uParam2->f_33, 0))
			{
				Global_1573681 = uParam3;
				Global_1573680 = 1;
				unk_0x416AE03EAAA9AE80(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1573682)
					{
						unk_0x77621132305B133B(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
			else
			{
				if (bVar5 == 0)
				{
					func_371();
					if (iParam1 == 23 || iParam1 == 24)
					{
						unk_0x7662B6FB19655462();
					}
					unk_0x68A38902ADFD05FE(18);
				}
				unk_0x416AE03EAAA9AE80(fVar7);
				if (func_372(bVar6, uParam0, 0))
				{
					func_341(uParam0);
					uVar4 = func_369(iParam1, &(Global_1613622.f_68795), bParam4);
					if (bParam4)
					{
						func_366(uParam0, uVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 23)
					{
						func_360(uParam0, func_363(uParam2), func_361(uParam2), -1);
					}
					else if (iParam1 == 24)
					{
						func_357(uParam0, func_359(), func_358(), -1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1573682;
						func_366(uParam0, uVar4, "", 0, -1, Global_1573682, 1);
					}
					else
					{
						Var0 = { func_355(iParam1) };
						iVar8 = func_350(iParam1);
						func_366(uParam0, uVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0x59A0729D503ED758(&(uParam2->f_33), 0);
				}
			}
		}
	}
	return 0;
}

int func_350(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_354())
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
			if (func_353(unk_0xA34E7C2A5118D638()))
			{
				iVar0 = 20;
			}
			if (func_352(unk_0xA34E7C2A5118D638()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_351(unk_0xA34E7C2A5118D638()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_351(int iParam0)
{
	return Global_2417071[iParam0 /*306*/].f_114 == 4;
}

bool func_352(int iParam0)
{
	return Global_2417071[iParam0 /*306*/].f_114 == 7;
}

bool func_353(int iParam0)
{
	return Global_2417071[iParam0 /*306*/].f_114 == 2;
}

bool func_354()
{
	return Global_1613622.f_1 == 0;
}

struct<4> func_355(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_356(unk_0xA34E7C2A5118D638()) || func_351(unk_0xA34E7C2A5118D638()))
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
			StringIntConCat(&Var0, Global_1613622.f_22, 16);
			break;
	}
	return Var0;
}

bool func_356(int iParam0)
{
	return Global_2417071[iParam0 /*306*/].f_114 == 5;
}

void func_357(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xF518F3C7FACD43B7(*uParam0))
	{
		unk_0x7C38F93AF52620B1(*uParam0, "SET_TITLE");
		if (unk_0xB8A06E7E729EED0A(sParam2))
		{
			func_303(sParam1);
		}
		else
		{
			unk_0x276F16E002D00C0C("FM_AE_BRACKT");
			unk_0xCE59E3E42586D52D(sParam1);
			unk_0xCE59E3E42586D52D(sParam2);
			unk_0x354E2E7AA52E941F();
		}
		func_303("");
		if (iParam3 != -1)
		{
			unk_0x65960B4E2ADC9F6D(iParam3);
		}
		unk_0xD013AC29829DDC02();
	}
}

char* func_358()
{
	switch (func_334(unk_0xA34E7C2A5118D638()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_359()
{
	switch (func_334(unk_0xA34E7C2A5118D638()))
	{
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			return "PIM_MAGM201";
			break;
		
		case 151:
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
	}
	return "";
}

void func_360(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xF518F3C7FACD43B7(*uParam0))
	{
		unk_0x7C38F93AF52620B1(*uParam0, "SET_TITLE");
		if (unk_0xB8A06E7E729EED0A(uParam2))
		{
			func_303(uParam1);
		}
		else if (func_192(unk_0xA34E7C2A5118D638()) == 133)
		{
			unk_0x276F16E002D00C0C("FM_AE_BRACKT_C");
			unk_0xCE59E3E42586D52D(uParam1);
			unk_0xCE59E3E42586D52D(sParam2);
			unk_0x354E2E7AA52E941F();
		}
		else
		{
			unk_0x276F16E002D00C0C("FM_AE_BRACKT");
			unk_0xCE59E3E42586D52D(sParam1);
			unk_0xCE59E3E42586D52D(sParam2);
			unk_0x354E2E7AA52E941F();
		}
		func_303("");
		if (iParam3 != -1)
		{
			unk_0x65960B4E2ADC9F6D(iParam3);
		}
		unk_0xD013AC29829DDC02();
	}
}

char* func_361(var uParam0)
{
	int iVar0;
	
	iVar0 = func_192(unk_0xA34E7C2A5118D638());
	if (func_362())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_107())
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
	return "";
}

bool func_362()
{
	return Global_1587174;
}

char* func_363(var uParam0)
{
	int iVar0;
	
	iVar0 = func_192(unk_0xA34E7C2A5118D638());
	if (func_362())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_365() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_365() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_107())
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
			if (func_364() == 1)
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
	return "";
}

int func_364()
{
	return Global_2458121.f_4638;
}

int func_365()
{
	if (func_192(unk_0xA34E7C2A5118D638()) == 132)
	{
		return Global_2458121.f_4633;
	}
	return -1;
}

void func_366(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xF518F3C7FACD43B7(*uParam0))
	{
		unk_0x7C38F93AF52620B1(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_305(uParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x276F16E002D00C0C(uParam1);
			unk_0x6DC80A902A91958F(iParam5);
			unk_0x354E2E7AA52E941F();
		}
		else
		{
			func_303(sParam1);
		}
		if (func_384() && iParam6)
		{
			if (func_368())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x276F16E002D00C0C("LBD_DPD_CNT");
			unk_0x6DC80A902A91958F(iVar0);
			unk_0x6DC80A902A91958F(iVar1);
			unk_0x354E2E7AA52E941F();
		}
		else
		{
			func_303(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x65960B4E2ADC9F6D(iParam4);
			if (func_367(unk_0xA34E7C2A5118D638()))
			{
				unk_0x65960B4E2ADC9F6D(166);
			}
		}
		unk_0xD013AC29829DDC02();
	}
}

int func_367(int iParam0)
{
	if (func_353(iParam0) || func_352(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_368()
{
	return Global_1573683;
}

char* func_369(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 17)
	{
		uVar0 = func_370();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 21)
	{
		if (Global_1573847 == 0)
		{
			Global_1573847 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xB8A06E7E729EED0A(uParam1))
	{
		if (Global_1573847 == 1)
		{
			Global_1573847 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1573847 == 0)
		{
			Global_1573847 = 1;
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

char* func_370()
{
	if (unk_0x94D4FEDA7822E39D())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x59F25675A261768C())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x6CD7F99044C6563E())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x70620CD9F8A7C758())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_371()
{
	Global_36522 = 1;
}

bool func_372(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x31DC2CEFEF13C96D("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x31DC2CEFEF13C96D("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x31DC2CEFEF13C96D("mp_matchmaking_card");
	}
	return unk_0xF518F3C7FACD43B7(*uParam1);
}

void func_373(var uParam0, var uParam1, bool bParam2)
{
	unk_0x77621132305B133B(&(uParam1->f_33), 7);
	Global_1573681 = 0;
	func_296();
	Global_1573680 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_18(&(uParam1->f_19)))
		{
			func_3(&(uParam1->f_19));
		}
	}
	if (unk_0xF518F3C7FACD43B7(*uParam0))
	{
		unk_0xEF145906684E3D72(uParam0);
	}
	if (unk_0xDCC86F723E82125E(uParam1->f_33, 0))
	{
		unk_0x77621132305B133B(&(uParam1->f_33), 0);
	}
	unk_0x416AE03EAAA9AE80(0f);
}

int func_374()
{
	if (func_382())
	{
		return 0;
	}
	if (func_268())
	{
		return 0;
	}
	if (!func_380())
	{
		return 0;
	}
	if (!func_254())
	{
		return 0;
	}
	if (func_379(8, -1))
	{
		return 0;
	}
	if (func_383() == 2)
	{
		return 0;
	}
	if (Global_2458121.f_4397)
	{
		return 0;
	}
	if (func_99())
	{
		return 0;
	}
	else if (!func_186(unk_0xA34E7C2A5118D638(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_378(1) || func_376(1)) || Global_17118.f_124) || Global_17118)
	{
		return 0;
	}
	if (unk_0x2BF05095F2389894())
	{
		return 0;
	}
	if (func_591(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	if (Global_1710052)
	{
		return 0;
	}
	if (Global_1710055)
	{
		return 0;
	}
	if (func_375(0))
	{
		return 0;
	}
	return 1;
}

bool func_375(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_2458121.f_4648.f_16, iParam0);
}

int func_376(bool bParam0)
{
	if (unk_0x5E9D81C7387C86AE())
	{
		if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
		{
			if (func_377(unk_0xC8B93D94F8954288()))
			{
				if (unk_0x0139E142C27412BC(0, 25) || unk_0x0139E142C27412BC(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17118.f_130)
	{
		return 0;
	}
	if (unk_0x0139E142C27412BC(0, 19) || (!bParam0 && unk_0x69ED83B6DEBA60F9(0, 19)))
	{
		return 1;
	}
	if (unk_0x68B0A67658F2D9C2())
	{
		if (((unk_0x0139E142C27412BC(0, 166) || unk_0x0139E142C27412BC(0, 167)) || unk_0x0139E142C27412BC(0, 168)) || unk_0x0139E142C27412BC(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x69ED83B6DEBA60F9(0, 166) || unk_0x69ED83B6DEBA60F9(0, 167)) || unk_0x69ED83B6DEBA60F9(0, 168)) || unk_0x69ED83B6DEBA60F9(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_377(int iParam0)
{
	int iVar0;
	
	if (unk_0x6C0EF9FA1B336D64())
	{
		if (!unk_0x2DC9BA2299B45EA6(iParam0))
		{
			unk_0xA51F11E1DC7307BB(iParam0, &iVar0, 1);
			if ((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_378(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

bool func_379(int iParam0, int iParam1)
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

int func_380()
{
	if (func_381())
	{
		return 1;
	}
	if (unk_0xD5DFCA69ACAA20E3())
	{
		return 0;
	}
	if (unk_0xE71FCE10773CF7B0() || unk_0x2230725B418B1240())
	{
		return 0;
	}
	if (unk_0x0B7B1F8E572996A4())
	{
		return 0;
	}
	return 1;
}

bool func_381()
{
	return Global_1312438;
}

bool func_382()
{
	return unk_0x693EBB4F13506457() <= Global_17257.f_5745 + 100;
}

int func_383()
{
	return Global_1338611.f_68;
}

int func_384()
{
	if (Global_1573682 > 16)
	{
		return 1;
	}
	return 0;
}

float func_385()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x5EC483EC6D05F31E()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_386(int iParam0)
{
	switch (iParam0)
	{
		case 17:
		case 23:
		case 24:
			return 1;
			break;
	}
	return 0;
}

int func_387()
{
	if (func_390())
	{
		return 1;
	}
	if (func_196(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	if (func_362())
	{
		return 1;
	}
	if (func_267(unk_0xA34E7C2A5118D638()))
	{
		switch (func_192(unk_0xA34E7C2A5118D638()))
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
				if (!func_388(unk_0xA34E7C2A5118D638()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_388(unk_0xA34E7C2A5118D638()))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool func_388(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_1, 4);
}

int func_389(int iParam0)
{
	if ((iParam0 == 24 && func_267(unk_0xA34E7C2A5118D638())) && !func_266(unk_0xA34E7C2A5118D638()))
	{
		return 1;
	}
	if (iParam0 == 23)
	{
		if (func_28(unk_0xA34E7C2A5118D638(), 0) && func_266(unk_0xA34E7C2A5118D638()))
		{
			return 1;
		}
		if (func_258(unk_0xA34E7C2A5118D638()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_390()
{
	if (func_391(unk_0xA34E7C2A5118D638()))
	{
		return Global_1318847;
	}
	return 0;
}

int func_391(int iParam0)
{
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		if (func_33(iParam0, 0))
		{
			return unk_0x1E3906AEA0BF5747(iParam0);
		}
	}
	return 0;
}

void func_392()
{
	if (!func_18(&uLocal_560))
	{
		if (func_393(unk_0x935FA14EDA695A82()))
		{
			func_11(&uLocal_560, 0, 1);
		}
	}
}

int func_393(int iParam0)
{
	if (unk_0xDCC86F723E82125E(Local_396[iParam0 /*5*/].f_4, 5))
	{
		return 1;
	}
	if (unk_0xDCC86F723E82125E(Local_396[iParam0 /*5*/].f_4, 4))
	{
		return 1;
	}
	if (unk_0xDCC86F723E82125E(Local_396[iParam0 /*5*/].f_4, 6))
	{
		return 1;
	}
	if (unk_0xDCC86F723E82125E(Local_396[iParam0 /*5*/].f_4, 7))
	{
		return 1;
	}
	return 0;
}

void func_394()
{
	if (func_237(1, 1))
	{
		if (!unk_0xDCC86F723E82125E(Local_396[unk_0x935FA14EDA695A82() /*5*/].f_4, 8))
		{
			unk_0x59A0729D503ED758(&(Local_396[unk_0x935FA14EDA695A82() /*5*/].f_4), 8);
		}
	}
	else if (unk_0xDCC86F723E82125E(Local_396[unk_0x935FA14EDA695A82() /*5*/].f_4, 8))
	{
		unk_0x77621132305B133B(&(Local_396[unk_0x935FA14EDA695A82() /*5*/].f_4), 8);
	}
	if (func_237(0, 1))
	{
		if (!unk_0xDCC86F723E82125E(Local_396[unk_0x935FA14EDA695A82() /*5*/].f_4, 9))
		{
			unk_0x59A0729D503ED758(&(Local_396[unk_0x935FA14EDA695A82() /*5*/].f_4), 9);
		}
	}
	else if (unk_0xDCC86F723E82125E(Local_396[unk_0x935FA14EDA695A82() /*5*/].f_4, 9))
	{
		unk_0x77621132305B133B(&(Local_396[unk_0x935FA14EDA695A82() /*5*/].f_4), 9);
	}
	if (func_237(1, 0))
	{
		if (!unk_0xDCC86F723E82125E(Local_396[unk_0x935FA14EDA695A82() /*5*/].f_4, 10))
		{
			unk_0x59A0729D503ED758(&(Local_396[unk_0x935FA14EDA695A82() /*5*/].f_4), 10);
		}
	}
	else if (unk_0xDCC86F723E82125E(Local_396[unk_0x935FA14EDA695A82() /*5*/].f_4, 10))
	{
		unk_0x77621132305B133B(&(Local_396[unk_0x935FA14EDA695A82() /*5*/].f_4), 10);
	}
	if (func_237(0, 0))
	{
		if (!unk_0xDCC86F723E82125E(Local_396[unk_0x935FA14EDA695A82() /*5*/].f_4, 11))
		{
			unk_0x59A0729D503ED758(&(Local_396[unk_0x935FA14EDA695A82() /*5*/].f_4), 11);
		}
	}
	else if (unk_0xDCC86F723E82125E(Local_396[unk_0x935FA14EDA695A82() /*5*/].f_4, 11))
	{
		unk_0x77621132305B133B(&(Local_396[unk_0x935FA14EDA695A82() /*5*/].f_4), 11);
	}
}

void func_395()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_402(iVar0);
		func_396(iVar0);
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

void func_396(int iParam0)
{
	if (func_237(0, 0) || iLocal_3352 == -1)
	{
		func_65(iParam0);
		func_67(iParam0);
		func_62(iParam0, -1);
		return;
	}
	if (func_7(iParam0) == -1)
	{
		if (func_193(unk_0x935FA14EDA695A82(), iParam0))
		{
			func_67(iParam0);
		}
		else
		{
			func_398(iParam0);
		}
	}
	else
	{
		func_67(iParam0);
	}
	if (iLocal_3353 != func_63(iParam0, 1))
	{
		switch (iLocal_3354)
		{
			case 0:
				func_62(iParam0, -1);
				iLocal_3354++;
				break;
			
			case 1:
				func_397(iParam0);
				iLocal_3353 = func_63(iParam0, 1);
				iLocal_3354 = 0;
				break;
			}
	}
}

void func_397(int iParam0)
{
	if (!unk_0xDCC86F723E82125E(iLocal_558, func_421(iParam0)))
	{
		unk_0x817C1B6462976923(func_64(iParam0, 0), 1, func_63(iParam0, 1));
		if (func_421(iParam0) == 4)
		{
			unk_0x817C1B6462976923(func_64(iParam0, 1), 1, func_63(iParam0, 1));
		}
		unk_0x59A0729D503ED758(&iLocal_558, func_421(iParam0));
	}
}

void func_398(int iParam0)
{
	if (!unk_0x6B4865E08E90ACC5(func_68(iParam0)))
	{
		func_401(iParam0, unk_0xDF811B9EAB020A4D(func_285(iParam0)));
		unk_0xEB19FBC5156AAE3A(func_68(iParam0), 12);
		if (unk_0xF2831232D38CD691("KOTC_AREANAME"))
		{
			unk_0x8755DAC584918BF9(func_68(iParam0), "KOTC_AREANAME");
		}
		unk_0x31FDDAFCCFEFA478(func_68(iParam0), 438);
		func_399(&(Local_1243[iParam0 /*68*/].f_27), func_63(iParam0, 1));
		if (!unk_0xDCC86F723E82125E(iLocal_557, 13))
		{
			unk_0x2D482C2DD6BFCD09(Local_1243[iParam0 /*68*/].f_27, 1);
			unk_0xD66C551FC33EDE83(Local_1243[iParam0 /*68*/].f_27, 7000);
			unk_0x59A0729D503ED758(&iLocal_557, 13);
		}
		if (!unk_0xDCC86F723E82125E(iLocal_557, 12))
		{
			unk_0x837755F6FCE9B0E2();
			unk_0x59A0729D503ED758(&iLocal_557, 12);
		}
		unk_0xEBA460B665086587(func_68(iParam0), 1);
		unk_0x81ABAAC291399373(func_68(iParam0), 1);
	}
	else
	{
		func_399(&(Local_1243[iParam0 /*68*/].f_27), func_63(iParam0, 0));
		if (unk_0x6B4865E08E90ACC5(func_68(iParam0)))
		{
			if (unk_0xF2831232D38CD691("KOTC_AREANAME"))
			{
				unk_0x8755DAC584918BF9(func_68(iParam0), "KOTC_AREANAME");
			}
		}
	}
}

void func_399(var uParam0, int iParam1)
{
	if (unk_0x6B4865E08E90ACC5(*uParam0))
	{
		unk_0x32546F91F646B246(*uParam0, func_400(iParam1));
	}
}

int func_400(int iParam0)
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
	unk_0x7068E8DB78AD0A08(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_401(int iParam0, var uParam1)
{
	Local_1243[iParam0 /*68*/].f_27 = uParam1;
}

void func_402(int iParam0)
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
		if (func_421(iParam0) == 7)
		{
			fVar40 = 5f;
			fVar41 = 9f;
		}
		Var1[iVar0 /*3*/] = { func_412(iParam0, iVar0) };
		Var11[iVar0 /*3*/] = { func_411(iParam0, iVar0) };
		uVar21[iVar0] = func_410(iParam0, iVar0);
		func_409(iParam0, iVar0, &(Var25[iVar0 /*3*/]), &(uVar35[iVar0]));
		if (unk_0xDCC86F723E82125E(iLocal_3345, unk_0x935FA14EDA695A82()))
		{
			if (unk_0xDCC86F723E82125E(iLocal_3344, Local_562[unk_0x935FA14EDA695A82() /*18*/].f_1))
			{
				if (!unk_0xDCC86F723E82125E(iLocal_3346, Local_562[unk_0x935FA14EDA695A82() /*18*/].f_1))
				{
					if (!func_237(1, 1))
					{
						if (iLocal_3352 == unk_0x935FA14EDA695A82())
						{
							if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1))
							{
								if ((!func_408(Var1[iVar0 /*3*/]) && !func_408(Var11[iVar0 /*3*/])) && uVar21[iVar0] > 0f)
								{
									if (unk_0x8DF850DA069BF37C(Local_1139[unk_0xA34E7C2A5118D638() /*3*/].f_2, Var1[iVar0 /*3*/], Var11[iVar0 /*3*/], uVar21[iVar0], 0, 1, 0))
									{
										bVar39 = true;
									}
								}
								if (func_421(iParam0) == 7)
								{
									if (func_407(iParam0) < 0f)
									{
										if (func_407(iParam0) <= fVar40 && func_407(iParam0) >= (fVar40 * -1f))
										{
											if (func_406(iParam0) <= fVar41)
											{
												bVar39 = true;
											}
										}
									}
								}
								else if (!func_408(Var25[iVar0 /*3*/]))
								{
									if (func_405(iParam0, iVar0) < 0f)
									{
										if (func_405(iParam0, iVar0) >= (uVar35[iVar0] * -1f))
										{
											if (func_404(iParam0, iVar0) <= uVar35[iVar0])
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
	func_403(iParam0, bVar39);
}

void func_403(int iParam0, bool bParam1)
{
	Local_396[unk_0x935FA14EDA695A82() /*5*/].f_1[iParam0] = bParam1;
	if (bParam1)
	{
		unk_0x59A0729D503ED758(&(Local_396[unk_0x935FA14EDA695A82() /*5*/].f_3), iParam0);
	}
	else
	{
		unk_0x77621132305B133B(&(Local_396[unk_0x935FA14EDA695A82() /*5*/].f_3), iParam0);
	}
}

float func_404(int iParam0, int iParam1)
{
	return Local_1243[iParam0 /*68*/].f_41[iParam1];
}

float func_405(int iParam0, int iParam1)
{
	return Local_1243[iParam0 /*68*/].f_45[iParam1];
}

float func_406(int iParam0)
{
	return Local_1243[iParam0 /*68*/].f_38;
}

float func_407(int iParam0)
{
	return Local_1243[iParam0 /*68*/].f_39;
}

int func_408(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_409(int iParam0, int iParam1, var uParam2, float fParam3)
{
	switch (iParam1)
	{
		case 0:
			switch (func_421(iParam0))
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
			switch (func_421(iParam0))
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
			switch (func_421(iParam0))
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

var func_410(int iParam0, int iParam1)
{
	return Local_1243[iParam0 /*68*/].f_20[iParam1];
}

Vector3 func_411(int iParam0, int iParam1)
{
	return Local_1243[iParam0 /*68*/].f_10[iParam1 /*3*/];
}

Vector3 func_412(int iParam0, int iParam1)
{
	return Local_1243[iParam0 /*68*/][iParam1 /*3*/];
}

void func_413(int iParam0)
{
	Local_396[unk_0x935FA14EDA695A82() /*5*/] = iParam0;
}

void func_414(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
			switch (iParam1)
			{
				case 0:
					func_415("kwUfKUus6EuQyNSL8KpY-w");
					func_415("yMTOFLfO2UKwzKrmgPP7kg");
					func_415("9mGvlJ1Cxk-HxC2zkAwdQg");
					break;
				
				case 2:
					func_415("tP5HSeCA0UiHnkRzakdO2Q");
					func_415("uEkrqoerQEmQ0uZRtp4rkw");
					func_415("xIXaDwts7kKz0sbMnwYlCQ");
					break;
				
				case 3:
					func_415("UOTaXepxrUOUEU7QtfBvGQ");
					break;
			}
			break;
		
		case 139:
			switch (iParam1)
			{
				case 1:
					func_415("OZ5hEthzqUSuK_x9YuO4uw");
					break;
				
				case 2:
					func_415("uEkrqoerQEmQ0uZRtp4rkw");
					break;
			}
			break;
		
		case 138:
			switch (iParam1)
			{
				case 2:
					func_415("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 3:
					func_415("uEkrqoerQEmQ0uZRtp4rkw");
					func_415("92t91kL3Wkqvl2Kc82cNSA");
					func_415("43Yoc5jfr0OwGfW9UP5TXA");
					break;
				
				case 5:
					func_415("WfnWlxu780CwC7LLUrLljw");
					break;
				
				case 6:
					func_415("lowxnyELLUCxqy_Q1uslIg");
					break;
				
				case 7:
					func_415("QmlvLMLCwkOvoZlkAstYxw");
					break;
			}
			break;
		
		case 141:
			switch (iParam1)
			{
				case 0:
					func_415("TT4ifq2kgEG6G1fCUYHXSQ");
					break;
			}
			break;
		
		case 134:
			switch (iParam1)
			{
				case 1:
					func_415("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 4:
					func_415("fOfm7nzMLkav0ldcSCNAzA");
					func_415("JMbOeJ2-ak-02KwNLtnOJg");
					break;
				
				case 5:
					func_415("3AAj-muvN0iHI5IMyGlboA");
					break;
				
				case 0:
					func_415("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 9:
					func_415("Ma78E44OMkGfYPmCPZXUNA");
					func_415("Pqz3l_Dhg0ar0yHiz2wMqQ");
					break;
				
				case 19:
					func_415("ZmoxEY6L60WSR-7I5IUjPg");
					break;
				
				case 10:
					func_415("gxmtJHj2OUWQDt8nNMy3TQ");
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
							func_415("lowxnyELLUCxqy_Q1uslIg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 2:
							func_415("dCWpYaU7CU-Bxz5s2qGjaA");
							break;
					}
					break;
				
				case 2:
					func_415("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 3:
					switch (iParam2)
					{
						case 1:
							func_415("Cl3Gh6-LMkuZ7Z_jPqSE8g");
							break;
						
						case 2:
							func_415("TT4ifq2kgEG6G1fCUYHXSQ");
							break;
					}
					break;
				
				case 4:
					func_415("A0vXbIK2WEmiVSUNYRGpvA");
					switch (iParam2)
					{
						case 2:
							func_415("3AAj-muvN0iHI5IMyGlboA");
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
							func_415("kXry-nXRbEC6ktiopjDDcg");
							break;
						
						case 1:
							func_415("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_415("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_415("fOfm7nzMLkav0ldcSCNAzA");
							func_415("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							func_415("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_415("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							func_415("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_415("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 3:
							func_415("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 1:
							func_415("gaJhsFMzFkyl3al5SRa6fQ");
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 1:
							func_415("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_415("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_415("fOfm7nzMLkav0ldcSCNAzA");
							func_415("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							func_415("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_415("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							func_415("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_415("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 3:
							func_415("xIXaDwts7kKz0sbMnwYlCQ");
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
									func_415("UOTaXepxrUOUEU7QtfBvGQ");
									break;
								
								case 2:
									func_415("xIXaDwts7kKz0sbMnwYlCQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_415("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 2:
									func_415("QmlvLMLCwkOvoZlkAstYxw");
									break;
								
								case 3:
									func_415("gxmtJHj2OUWQDt8nNMy3TQ");
									break;
								
								case 4:
									func_415("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									func_415("dCWpYaU7CU-Bxz5s2qGjaA");
									break;
								
								case 2:
									func_415("aGBjo2rKi0yMDLl3a2ATGA");
									func_415("yMTOFLfO2UKwzKrmgPP7kg");
									break;
								
								case 3:
									func_415("lhGatLUmgke_87surSFS5g");
									break;
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 1:
									func_415("VmS_SI5wSE2LuL9qItQqbw");
									break;
								
								case 4:
									func_415("f2lnL6wZPkGWUowu0yLm1Q");
									func_415("ZmoxEY6L60WSR-7I5IUjPg");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 1:
									func_415("Ma78E44OMkGfYPmCPZXUNA");
									break;
								
								case 2:
									func_415("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									func_415("W-OJzHlM-0ym9PsIASYZtw");
									func_415("uEkrqoerQEmQ0uZRtp4rkw");
									break;
								
								case 1:
									func_415("3AAj-muvN0iHI5IMyGlboA");
									break;
								
								case 3:
									func_415("TjGz31AMYE6bGCjAIitu6w");
									func_415("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 2:
									func_415("QmlvLMLCwkOvoZlkAstYxw");
									func_415("BktATxH9R0Wp2x0kWSbqjw");
									break;
								
								case 3:
									func_415("BktATxH9R0Wp2x0kWSbqjw");
									func_415("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 4:
									func_415("f2lnL6wZPkGWUowu0yLm1Q");
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
									func_415("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 3:
									func_415("PY8hdiWoAkudg9SpK8G2xQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_415("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
								
								case 1:
									func_415("9mGvlJ1Cxk-HxC2zkAwdQg");
									break;
								
								case 2:
									func_415("tP5HSeCA0UiHnkRzakdO2Q");
									break;
								
								case 3:
									func_415("kXry-nXRbEC6ktiopjDDcg");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 3:
									func_415("Cl3Gh6-LMkuZ7Z_jPqSE8g");
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
									func_415("Pqz3l_Dhg0ar0yHiz2wMqQ");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									func_415("W-OJzHlM-0ym9PsIASYZtw");
									break;
							}
							break;
					}
					break;
			}
			break;
	}
}

void func_415(char* sParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xB8A06E7E729EED0A(sParam0))
	{
		return;
	}
	iVar0 = unk_0x7CBED6EFED40E7EB(sParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		if (unk_0xDCC86F723E82125E(Global_2359718[iVar1 /*26*/].f_12, 11))
		{
			if (func_416(&(Global_2359718[iVar1 /*26*/].f_15)) == iVar0)
			{
				if (!unk_0xDCC86F723E82125E(Global_2359718[iVar1 /*26*/].f_13, 26))
				{
					unk_0x59A0729D503ED758(&(Global_2359718[iVar1 /*26*/].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_416(var uParam0)
{
	struct<12> Var0;
	int iVar12;
	int iVar13;
	
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_11 = -1;
	iVar12 = 0;
	iVar13 = func_418(uParam0);
	if (iVar13 == -1)
	{
		return iVar12;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_417(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar12;
		
		default:
	}
	return iVar12;
}

struct<12> func_417(var uParam0)
{
	struct<12> Var0;
	int iVar12;
	
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_11 = -1;
	iVar12 = func_418(uParam0);
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

int func_418(var uParam0)
{
	int iVar0;
	
	if (unk_0xB8A06E7E729EED0A(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_420(uParam0->f_1))
	{
		if (func_419(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (unk_0xDCC86F723E82125E(Global_794573.f_4[uParam0->f_1 /*87*/].f_76, 13))
			{
				if (unk_0xF8D041B05C3D1FD4(&(Global_794573.f_4[uParam0->f_1 /*87*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0xDCC86F723E82125E(Global_794573.f_4[uParam0->f_1 /*87*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1118)
			{
				if (unk_0xDCC86F723E82125E(Global_794573.f_4[iVar0 /*87*/].f_76, 13))
				{
					if (unk_0xF8D041B05C3D1FD4(&(Global_794573.f_4[iVar0 /*87*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (unk_0xDCC86F723E82125E(Global_905334.f_1204[uParam0->f_1 /*87*/].f_76, 13))
			{
				if (unk_0xF8D041B05C3D1FD4(&(Global_905334.f_1204[uParam0->f_1 /*87*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0xDCC86F723E82125E(Global_905334.f_1204[uParam0->f_1 /*87*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 200)
			{
				if (unk_0xDCC86F723E82125E(Global_905334.f_1204[iVar0 /*87*/].f_76, 13))
				{
					if (unk_0xF8D041B05C3D1FD4(&(Global_905334.f_1204[iVar0 /*87*/]), &(uParam0->f_3)))
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
	if (uParam0->f_2 == unk_0xA34E7C2A5118D638())
	{
		if (unk_0xDCC86F723E82125E(Global_947780.f_5[uParam0->f_1 /*87*/].f_76, 13))
		{
			if (unk_0xF8D041B05C3D1FD4(&(Global_947780.f_5[uParam0->f_1 /*87*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (unk_0xDCC86F723E82125E(Global_947780.f_5[uParam0->f_1 /*87*/].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (unk_0xDCC86F723E82125E(Global_947780.f_5[iVar0 /*87*/].f_76, 13))
			{
				if (unk_0xF8D041B05C3D1FD4(&(Global_947780.f_5[iVar0 /*87*/]), &(uParam0->f_3)))
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

int func_419(var uParam0)
{
	if (Global_2397977)
	{
		if (unk_0xF8D041B05C3D1FD4(&(Global_2397977.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_420(int iParam0)
{
	return iParam0 == 9999;
}

int func_421(int iParam0)
{
	return Local_98.f_6[iParam0 /*204*/].f_69;
}

int func_422()
{
	return Local_98.f_0;
}

int func_423(int iParam0)
{
	return Local_396[iParam0 /*5*/];
}

void func_424()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	
	iVar0 = -1;
	iVar1 = -1;
	if (!unk_0xDCC86F723E82125E(Local_396[unk_0x935FA14EDA695A82() /*5*/].f_4, 0))
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			if (func_421(iVar2) > -1)
			{
				iVar3 = 0;
				while (iVar3 < 3)
				{
					func_442(iVar2, iVar3, func_443(iVar2, iVar3));
					func_440(iVar2, iVar3, func_441(iVar2, iVar3));
					func_438(iVar2, func_439(iVar2));
					func_436(iVar2, iVar3, func_437(iVar2, iVar3));
					unk_0x59A0729D503ED758(&(Local_396[unk_0x935FA14EDA695A82() /*5*/].f_4), 0);
					iVar3++;
				}
			}
			iVar2++;
		}
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (unk_0x736DBE187CFCC863())
		{
			if (func_435(iVar2) <= 1)
			{
				func_434(iVar2, 0);
			}
			else
			{
				func_434(iVar2, 1);
			}
		}
		if (func_8(iVar2) == -1)
		{
			if (!func_108(iVar2))
			{
				unk_0x59A0729D503ED758(&iLocal_557, 0);
			}
		}
		else if (!func_14(iVar2))
		{
			bVar5 = true;
			if (unk_0x736DBE187CFCC863())
			{
				func_434(iVar2, 0);
			}
		}
		else
		{
			iVar0 = func_8(iVar2);
			iVar1 = func_7(iVar2);
			if (!func_108(iVar2))
			{
				if (unk_0x736DBE187CFCC863())
				{
					if (iVar0 > -1)
					{
						if (!unk_0xDCC86F723E82125E(iLocal_3345, iVar0))
						{
							unk_0x59A0729D503ED758(&iLocal_557, 0);
						}
						if (!unk_0xDCC86F723E82125E(iLocal_3344, iVar0))
						{
							unk_0x59A0729D503ED758(&iLocal_557, 0);
						}
						if (unk_0xDCC86F723E82125E(iLocal_3346, iVar0))
						{
							unk_0x59A0729D503ED758(&iLocal_557, 0);
						}
						if (!func_193(iVar0, iVar2))
						{
							unk_0x59A0729D503ED758(&iLocal_557, 0);
						}
					}
				}
			}
			else if (iVar0 > -1)
			{
				if (!unk_0xDCC86F723E82125E(iLocal_3345, iVar0))
				{
					bVar5 = true;
				}
				if (!unk_0xDCC86F723E82125E(iLocal_3344, iVar1))
				{
					bVar5 = true;
				}
				if (unk_0xDCC86F723E82125E(iLocal_3346, iVar1))
				{
					bVar5 = true;
				}
				if (!func_193(iVar0, iVar2))
				{
					bVar5 = true;
				}
			}
		}
		if (bVar5)
		{
			if (unk_0x736DBE187CFCC863())
			{
				func_433(iVar2, -1);
				func_432(iVar2, -1);
			}
			func_431(iVar2, uVar4);
		}
		if (unk_0xDCC86F723E82125E(iLocal_557, 0))
		{
			if (func_430(iVar2) > -1 && func_429(iVar2) > -1)
			{
				if (unk_0x736DBE187CFCC863())
				{
					func_433(iVar2, func_430(iVar2));
					func_432(iVar2, func_429(iVar2));
					func_431(iVar2, func_428(iVar2));
					if (!unk_0xDCC86F723E82125E(Local_98.f_6[iVar2 /*204*/].f_203, func_430(iVar2)))
					{
						unk_0x59A0729D503ED758(&(Local_98.f_6[iVar2 /*204*/].f_203), func_430(iVar2));
					}
				}
			}
		}
		if (unk_0x736DBE187CFCC863())
		{
			func_425(iVar2);
		}
		iVar2++;
	}
}

void func_425(int iParam0)
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
				if (Local_98.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_3 > Local_98.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_3)
				{
					uVar16 = Local_98.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_3;
					uVar17 = Local_98.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/];
					uVar18 = Local_98.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_1;
					Local_98.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_3 = Local_98.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_3;
					Local_98.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/] = Local_98.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/];
					Local_98.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_1 = Local_98.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_1;
					Local_98.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_3 = uVar16;
					Local_98.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/] = uVar17;
					Local_98.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_1 = uVar18;
				}
				if ((iVar1 - 1) == 0 && Local_98.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_3 > 0f)
				{
					if (!Local_98.f_283 == Local_98.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/])
					{
						Local_98.f_283 = Local_98.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/];
						Var2.f_2 = 165;
						Var2.f_10 = unk_0x20A20BF765914E37(Local_98.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_1);
						func_426(Var2, func_427(1));
					}
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_426(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0xA34E7C2A5118D638();
	if (!iParam14 == 0)
	{
		unk_0x74A5559828D3116B(1, &Param0, 14, iParam14);
	}
}

int func_427(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x55191629F1199760())
	{
		if (unk_0x784B3253F40F728C(unk_0xD9BFAEBB04416B09(iVar1)))
		{
			iVar2 = unk_0x8F765930684A893F(unk_0xD9BFAEBB04416B09(iVar1));
			if (func_651(iVar2, 0, 0))
			{
				if (iVar2 != unk_0xA34E7C2A5118D638() || iParam0)
				{
					unk_0x59A0729D503ED758(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

var func_428(int iParam0)
{
	return Local_1243[iParam0 /*68*/].f_31;
}

int func_429(int iParam0)
{
	return Local_1243[iParam0 /*68*/].f_35;
}

int func_430(int iParam0)
{
	return Local_1243[iParam0 /*68*/].f_34;
}

void func_431(int iParam0, var uParam1)
{
	Local_1243[iParam0 /*68*/].f_30 = uParam1;
}

void func_432(int iParam0, int iParam1)
{
	Local_98.f_6[iParam0 /*204*/].f_2 = iParam1;
}

void func_433(int iParam0, int iParam1)
{
	if (iParam1 != func_8(iParam0))
	{
	}
	Local_98.f_6[iParam0 /*204*/].f_1 = iParam1;
}

void func_434(int iParam0, int iParam1)
{
	Local_98.f_6[iParam0 /*204*/].f_72 = iParam1;
}

int func_435(int iParam0)
{
	return Local_1243[iParam0 /*68*/].f_37;
}

void func_436(int iParam0, int iParam1, var uParam2)
{
	Local_1243[iParam0 /*68*/].f_20[iParam1] = uParam2;
}

float func_437(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (func_421(iParam0))
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
			switch (func_421(iParam0))
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
			switch (func_421(iParam0))
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

void func_438(int iParam0, struct<3> Param1)
{
	Local_1243[iParam0 /*68*/].f_24 = { Param1 };
}

Vector3 func_439(int iParam0)
{
	switch (func_421(iParam0))
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

void func_440(int iParam0, int iParam1, struct<3> Param2)
{
	Local_1243[iParam0 /*68*/].f_10[iParam1 /*3*/] = { Param2 };
}

Vector3 func_441(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (func_421(iParam0))
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
			switch (func_421(iParam0))
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
			switch (func_421(iParam0))
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

void func_442(int iParam0, int iParam1, struct<3> Param2)
{
	Local_1243[iParam0 /*68*/][iParam1 /*3*/] = { Param2 };
}

Vector3 func_443(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (func_421(iParam0))
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
			switch (func_421(iParam0))
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
			switch (func_421(iParam0))
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

void func_444()
{
	func_446();
	iLocal_3343++;
	func_445();
}

void func_445()
{
	if (iLocal_3343 >= (unk_0x55191629F1199760() - 1))
	{
		iLocal_3343 = 0;
	}
}

void func_446()
{
	if (iLocal_3343 == 0)
	{
	}
}

void func_447()
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
	int iVar29;
	bool bVar30;
	bool bVar31;
	float fVar32;
	float fVar33;
	struct<3> Var34;
	float fVar37;
	float fVar38;
	float fVar39;
	float fVar40;
	var uVar41;
	var uVar42;
	var uVar43;
	int iVar44;
	
	iVar0 = -1;
	iVar1 = -1;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		Local_1139[iVar1 /*3*/] = func_48();
		Local_1139[iVar1 /*3*/].f_1 = -1;
		Local_1139[iVar1 /*3*/].f_2 = uVar3;
		unk_0x77621132305B133B(&iLocal_3344, iVar1);
		unk_0x77621132305B133B(&iLocal_3346, iVar1);
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_562[iVar0 /*18*/] = func_474();
		Local_562[iVar0 /*18*/].f_1 = -1;
		unk_0x77621132305B133B(&iLocal_3345, iVar0);
		if (unk_0x736DBE187CFCC863())
		{
			iVar25 = 0;
			while (iVar25 < 1)
			{
				unk_0x77621132305B133B(&(Local_98.f_6[iVar25 /*204*/].f_73), iVar0);
				iVar25++;
			}
		}
		Local_562[iVar0 /*18*/].f_2 = { Var4 };
		iVar0++;
	}
	iVar25 = 0;
	while (iVar25 < 1)
	{
		func_473(iVar25, 0);
		func_472(iVar25, 0);
		func_471(iVar25, 0f);
		func_470(iVar25, 0f);
		func_469(iVar25, 0f);
		iVar28 = 0;
		while (iVar28 < 3)
		{
			func_468(iVar25, iVar28, 0f);
			func_467(iVar25, iVar28, 0f);
			func_466(iVar25, iVar28, 0f);
			iVar28++;
		}
		iVar25++;
	}
	bVar30 = true;
	bVar31 = true;
	iVar0 = 0;
	while (iVar0 < unk_0x55191629F1199760())
	{
		if (unk_0x784B3253F40F728C(iVar0))
		{
			Local_562[iVar0 /*18*/] = iVar0;
			unk_0x59A0729D503ED758(&iLocal_3345, iVar0);
			iVar2 = unk_0x8F765930684A893F(Local_562[iVar0 /*18*/]);
			iVar1 = iVar2;
			if (func_651(iVar2, 0, 1))
			{
				Local_1139[iVar1 /*3*/] = iVar2;
				Local_562[iVar0 /*18*/].f_1 = iVar1;
				Local_1139[iVar1 /*3*/].f_1 = iVar0;
				Local_1139[iVar1 /*3*/].f_2 = unk_0xCF4C00513A86E840(iVar2);
				StringCopy(&(Local_562[iVar0 /*18*/].f_2), unk_0x74C5CB21CF9F1178(iVar2), 64);
				iVar27++;
				if (func_393(iVar0))
				{
					iVar29++;
				}
				unk_0x59A0729D503ED758(&iLocal_3344, iVar1);
				if ((unk_0xB6900B8CB0ABBD2B(Local_1139[iVar1 /*3*/].f_2) || unk_0x2DC9BA2299B45EA6(Local_1139[iVar1 /*3*/].f_2)) || !unk_0x06972B20E75CBE06(Local_1139[iVar1 /*3*/]))
				{
					unk_0x59A0729D503ED758(&iLocal_3346, iVar1);
				}
				if (unk_0x736DBE187CFCC863())
				{
					if (!unk_0xDCC86F723E82125E(Local_396[iVar0 /*5*/].f_4, 0))
					{
						bVar30 = false;
					}
					if (!unk_0xDCC86F723E82125E(Local_396[iVar0 /*5*/].f_4, 1))
					{
						bVar31 = false;
					}
				}
				func_464(iVar1, 2);
				if (func_196(iVar1))
				{
					if (unk_0x736DBE187CFCC863())
					{
						func_462(iVar0);
					}
				}
				if (func_89(iVar1))
				{
					if (unk_0x736DBE187CFCC863())
					{
						func_462(iVar0);
					}
				}
				if (func_195(iVar1))
				{
					if (unk_0x736DBE187CFCC863())
					{
						func_462(iVar0);
					}
				}
			}
		}
		else
		{
			unk_0x77621132305B133B(&iLocal_3345, iVar0);
			if (func_565() <= 1)
			{
				if (unk_0x736DBE187CFCC863())
				{
					func_462(iVar0);
				}
			}
		}
		iVar25 = 0;
		while (iVar25 < 1)
		{
			if (!unk_0xDCC86F723E82125E(Local_98.f_213, 1))
			{
				if (unk_0x736DBE187CFCC863())
				{
					func_461(iVar0, iVar25);
				}
			}
			if (unk_0xDCC86F723E82125E(iLocal_3345, iVar0))
			{
				if (unk_0xDCC86F723E82125E(iLocal_3344, iVar1))
				{
					if (!unk_0xDCC86F723E82125E(Local_98.f_213, 1))
					{
						if (unk_0x736DBE187CFCC863())
						{
							func_460(iVar0, iVar1, iVar25, func_101(iVar25, iVar0));
						}
					}
					if (!unk_0xDCC86F723E82125E(iLocal_3346, iVar1))
					{
						if (iVar0 == unk_0x935FA14EDA695A82())
						{
							fVar32 = func_459(Local_1139[iVar1 /*3*/].f_2, func_285(iVar25), 0);
							fVar33 = func_459(Local_1139[iVar1 /*3*/].f_2, func_285(iVar25), 1);
							Var34 = { unk_0x44C17CCB85A88A1F(Local_1139[iVar1 /*3*/].f_2, 1) };
							fVar37 = (Local_1243[iVar25 /*68*/].f_24.f_2 - Var34.f_2);
							func_471(iVar25, fVar32);
							func_470(iVar25, fVar37);
							func_469(iVar25, fVar33);
							iVar28 = 0;
							while (iVar28 < 3)
							{
								Var20 = { 0f, 0f, 0f };
								fVar23 = 0f;
								func_409(iVar25, iVar28, &Var20, &fVar23);
								if (!func_408(Var20))
								{
									fVar38 = func_459(Local_1139[iVar1 /*3*/].f_2, Var20, 0);
									fVar39 = func_459(Local_1139[iVar1 /*3*/].f_2, Var20, 1);
									fVar40 = (Var20.f_2 - Var34.f_2);
									func_468(iVar25, iVar28, fVar38);
									func_467(iVar25, iVar28, fVar40);
									func_466(iVar25, iVar28, fVar39);
								}
								iVar28++;
							}
						}
						if (func_193(iVar0, iVar25))
						{
							func_473(iVar25, 1);
							iVar26 = func_435(iVar25);
							iVar26++;
							func_472(iVar25, iVar26);
							if (func_8(iVar25) != iVar0 && func_7(iVar25) != iVar1)
							{
								if (func_430(iVar25) == -1)
								{
									func_523(iVar25, iVar0);
								}
								if (func_429(iVar25) == -1)
								{
									func_522(iVar25, iVar1);
								}
								func_521(iVar25, Local_1139[iVar1 /*3*/].f_2);
							}
							if (unk_0x736DBE187CFCC863())
							{
								unk_0x59A0729D503ED758(&(Local_98.f_6[iVar25 /*204*/].f_73), iVar0);
							}
						}
					}
					if (iVar0 == unk_0x935FA14EDA695A82())
					{
						if (!unk_0xDCC86F723E82125E(iLocal_3346, iVar1))
						{
							if (func_176(iVar25) <= IntToFloat(Global_262145.f_9406))
							{
								if (!unk_0xDCC86F723E82125E(Local_396[iVar0 /*5*/].f_4, 12))
								{
									unk_0x59A0729D503ED758(&(Local_396[iVar0 /*5*/].f_4), 12);
								}
							}
							else if (func_176(iVar25) >= IntToFloat(Global_262145.f_9407))
							{
								if (unk_0xDCC86F723E82125E(Local_396[iVar0 /*5*/].f_4, 12))
								{
									unk_0x77621132305B133B(&(Local_396[iVar0 /*5*/].f_4), 12);
								}
							}
							if (!func_194(1, 0))
							{
								if (func_176(iVar25) <= IntToFloat(Global_262145.f_9406))
								{
									if (!unk_0xDCC86F723E82125E(Local_396[iVar0 /*5*/].f_4, 3))
									{
										unk_0x59A0729D503ED758(&(Local_396[iVar0 /*5*/].f_4), 3);
									}
								}
								else if (func_176(iVar25) >= IntToFloat(Global_262145.f_9407))
								{
									if (unk_0xDCC86F723E82125E(Local_396[iVar0 /*5*/].f_4, 3))
									{
										unk_0x77621132305B133B(&(Local_396[iVar0 /*5*/].f_4), 3);
									}
								}
							}
							else if (unk_0xDCC86F723E82125E(Local_396[iVar0 /*5*/].f_4, 3))
							{
								unk_0x77621132305B133B(&(Local_396[iVar0 /*5*/].f_4), 3);
							}
						}
					}
				}
				iVar24 = 6;
				if (unk_0xA34E7C2A5118D638() != Local_1139[iVar1 /*3*/])
				{
					if (func_151(unk_0xA34E7C2A5118D638(), Local_1139[iVar1 /*3*/]))
					{
						iVar24 = func_124(unk_0xA34E7C2A5118D638(), -2, 0, 0);
					}
				}
				if (!unk_0xDCC86F723E82125E(iLocal_3346, iVar1))
				{
					if (func_237(0, 0))
					{
						func_458(iVar1);
					}
					else if (func_7(iVar25) != iVar1)
					{
						func_458(iVar1);
					}
					else if (func_565() != 1)
					{
						func_458(iVar1);
					}
					else
					{
						func_454(iVar1);
						if (iVar0 != unk_0x935FA14EDA695A82())
						{
							if (func_142(unk_0x935FA14EDA695A82()))
							{
								unk_0x7068E8DB78AD0A08(iVar24, &uVar41, &uVar42, &uVar43, &iVar44);
								iVar44 = 100;
								unk_0x0CC43E3FF7E287A5(2, unk_0x44C17CCB85A88A1F(Local_1139[iVar1 /*3*/].f_2, 1) + Vector(1.5f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uVar41, uVar42, uVar43, iVar44, 1, 1, 2, 0, 0, 0, 0);
							}
						}
					}
				}
				if (func_453(Local_1139[iVar1 /*3*/]))
				{
					func_448(Local_1139[iVar1 /*3*/], func_400(iVar24), func_449(iVar0, iVar1, iVar25));
				}
			}
			iVar25++;
		}
		iVar0++;
	}
	if (unk_0x736DBE187CFCC863())
	{
		if (bVar30)
		{
			unk_0x59A0729D503ED758(&(Local_98.f_213), 0);
		}
		else
		{
			unk_0x77621132305B133B(&(Local_98.f_213), 0);
		}
		if (bVar31)
		{
			unk_0x59A0729D503ED758(&(Local_98.f_213), 1);
		}
		else
		{
			unk_0x77621132305B133B(&(Local_98.f_213), 1);
		}
	}
	if (iVar29 > iLocal_559)
	{
		iLocal_559 = iVar29;
	}
	if (iVar27 > iLocal_3347)
	{
		iLocal_3347 = iVar27;
	}
	else
	{
		Local_98.f_216 = (iLocal_3347 - iVar27);
	}
}

void func_448(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_48())
	{
		return;
	}
	if (unk_0x7CBED6EFED40E7EB(unk_0xC4E68AF0B559FAC4()) == func_165())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_453(iParam0))
	{
		if (bParam2)
		{
			unk_0x59A0729D503ED758(&(Global_2411623.f_386), iVar0);
			Global_2411623.f_559[iParam0] = unk_0x46CF50E0E5A24635();
			Global_2411623.f_427[iVar0] = uParam1;
		}
		else
		{
			unk_0x77621132305B133B(&(Global_2411623.f_386), iVar0);
			Global_2411623.f_559[iParam0] = -1;
		}
	}
}

int func_449(int iParam0, int iParam1, int iParam2)
{
	if (func_237(0, 0))
	{
		return 0;
	}
	if (iParam0 == unk_0x935FA14EDA695A82())
	{
		return 0;
	}
	if (func_450(iParam1))
	{
		return 0;
	}
	if (iParam0 == func_8(iParam2))
	{
		return 1;
	}
	if (unk_0x935FA14EDA695A82() != func_8(iParam2))
	{
		return 0;
	}
	return 1;
}

bool func_450(int iParam0)
{
	if (iParam0 == unk_0xA34E7C2A5118D638())
	{
		return func_92();
	}
	return unk_0xDCC86F723E82125E(Global_1338611.f_241.f_136[func_452(10) /*33*/][iParam0], func_451(10));
}

int func_451(int iParam0)
{
	return (iParam0 % 32);
}

int func_452(int iParam0)
{
	return (iParam0 / 32);
}

int func_453(int iParam0)
{
	if (!unk_0xC2DCA35AE2EC9DC4(Global_2411623.f_559[iParam0]) || Global_2411623.f_559[iParam0] == unk_0x46CF50E0E5A24635())
	{
		return 1;
	}
	return 0;
}

void func_454(int iParam0)
{
	int iVar0;
	
	iVar0 = 6;
	if (iParam0 > -1)
	{
		if (unk_0xDCC86F723E82125E(iLocal_3344, iParam0))
		{
			if (!unk_0xDCC86F723E82125E(iLocal_3346, iParam0))
			{
				if (func_151(unk_0xA34E7C2A5118D638(), Local_1139[iParam0 /*3*/]))
				{
					iVar0 = func_124(unk_0xA34E7C2A5118D638(), -2, 0, 0);
				}
				func_457(Local_1139[iParam0 /*3*/], 439, 1);
				if (func_453(Local_1139[iParam0 /*3*/]))
				{
					func_448(Local_1139[iParam0 /*3*/], func_400(iVar0), 1);
				}
				func_455(Local_1139[iParam0 /*3*/], 1, 1);
				unk_0x59A0729D503ED758(&uLocal_3351, iParam0);
			}
		}
	}
}

void func_455(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_651(iParam0, 1, 1))
		{
			Global_2411623.f_625[iParam0] = unk_0x46CF50E0E5A24635();
			unk_0x59A0729D503ED758(&(Global_2411623.f_364), iParam0);
			func_456(iParam0, bParam2);
		}
	}
	else
	{
		func_456(iParam0, bParam2);
		unk_0x77621132305B133B(&(Global_2411623.f_364), iParam0);
		Global_2411623.f_625[iParam0] = -1;
	}
}

void func_456(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x59A0729D503ED758(&(Global_2411623.f_365), iParam0);
	}
	else
	{
		unk_0x77621132305B133B(&(Global_2411623.f_365), iParam0);
	}
	if (unk_0x6B4865E08E90ACC5(Global_2411623[iParam0]))
	{
		if (bParam1)
		{
			unk_0x577E650C288BBD2C(Global_2411623[iParam0], 0);
		}
		else
		{
			unk_0x577E650C288BBD2C(Global_2411623[iParam0], 1);
		}
	}
}

void func_457(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == func_48())
	{
		return;
	}
	if (unk_0x7CBED6EFED40E7EB(unk_0xC4E68AF0B559FAC4()) == func_165())
	{
		return;
	}
	iVar0 = iParam0;
	uVar1 = iParam1;
	if (!unk_0xC2DCA35AE2EC9DC4(Global_2411623.f_526[iParam0]) || Global_2411623.f_526[iParam0] == unk_0x46CF50E0E5A24635())
	{
		if (bParam2)
		{
			unk_0x59A0729D503ED758(&(Global_2411623.f_385), iVar0);
			Global_2411623.f_394[iVar0] = uVar1;
			Global_2411623.f_526[iParam0] = unk_0x46CF50E0E5A24635();
		}
		else
		{
			unk_0x77621132305B133B(&(Global_2411623.f_385), iVar0);
			Global_2411623.f_526[iParam0] = -1;
		}
	}
}

void func_458(int iParam0)
{
	int iVar0;
	
	iVar0 = 6;
	if (unk_0xDCC86F723E82125E(uLocal_3351, iParam0))
	{
		if (iParam0 > -1)
		{
			if (unk_0xDCC86F723E82125E(iLocal_3344, iParam0))
			{
				if (!unk_0xDCC86F723E82125E(iLocal_3346, iParam0))
				{
					if (unk_0xA34E7C2A5118D638() != Local_1139[iParam0 /*3*/])
					{
						if (func_151(unk_0xA34E7C2A5118D638(), Local_1139[iParam0 /*3*/]))
						{
							iVar0 = func_124(unk_0xA34E7C2A5118D638(), -2, 0, 0);
						}
					}
					func_457(Local_1139[iParam0 /*3*/], 439, 0);
					if (func_453(Local_1139[iParam0 /*3*/]))
					{
						func_448(Local_1139[iParam0 /*3*/], func_400(iVar0), 0);
					}
					func_455(Local_1139[iParam0 /*3*/], 0, 0);
					unk_0x77621132305B133B(&iLocal_3351, iParam0);
				}
			}
		}
	}
}

var func_459(int iParam0, struct<3> Param1, int iParam4)
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

void func_460(int iParam0, int iParam1, int iParam2, float fParam3)
{
	Local_98.f_6[iParam2 /*204*/].f_74[iParam0 /*4*/] = iParam0;
	Local_98.f_6[iParam2 /*204*/].f_74[iParam0 /*4*/].f_1 = iParam1;
	Local_98.f_6[iParam2 /*204*/].f_74[iParam0 /*4*/].f_2 = iParam1;
	Local_98.f_6[iParam2 /*204*/].f_74[iParam0 /*4*/].f_3 = fParam3;
}

void func_461(int iParam0, int iParam1)
{
	Local_98.f_6[iParam1 /*204*/].f_74[iParam0 /*4*/] = -1;
	Local_98.f_6[iParam1 /*204*/].f_74[iParam0 /*4*/].f_1 = -1;
	Local_98.f_6[iParam1 /*204*/].f_74[iParam0 /*4*/].f_2 = func_48();
	Local_98.f_6[iParam1 /*204*/].f_74[iParam0 /*4*/].f_3 = -1f;
}

void func_462(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_6(iVar0, iParam0) > 0f || func_102(iVar0, iParam0) > 0f)
		{
			func_4(iVar0, iParam0, 0f);
			func_463(iVar0, iParam0, 0f);
		}
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (Local_98.f_217[iVar1] > 0f)
			{
				if (Local_98.f_250[iVar1] == iParam0)
				{
					Local_98.f_217[iVar1] = 0f;
					Local_98.f_250[iVar1] = -1;
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_463(int iParam0, int iParam1, float fParam2)
{
	Local_98.f_6[iParam0 /*204*/].f_36[iParam1] = fParam2;
}

void func_464(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (unk_0xDCC86F723E82125E(Global_1573879.f_1, 0))
	{
		return;
	}
	if (func_18(&(Global_1573879.f_18)))
	{
		return;
	}
	if (unk_0xDCC86F723E82125E(Global_1573879.f_2, iParam0))
	{
		if (Global_1573879 < iParam1 && unk_0xDCC86F723E82125E(Global_1573879.f_1, 1))
		{
			unk_0x59A0729D503ED758(&(Global_1573879.f_1), 0);
			return;
		}
		if (Global_1573879 != 0)
		{
			unk_0x59A0729D503ED758(&(Global_1573879.f_1), 1);
		}
		Global_1573879 = 0;
		Global_1573879.f_2 = 0;
	}
	unk_0x59A0729D503ED758(&(Global_1573879.f_2), iParam0);
	bVar0 = true;
	if (func_170(iParam0))
	{
		bVar0 = false;
	}
	if (func_465(iParam0))
	{
		bVar0 = false;
	}
	if (func_33(iParam0, 0))
	{
		bVar0 = false;
	}
	if (func_196(iParam0))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		Global_1573879++;
	}
}

bool func_465(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_1, 10);
}

void func_466(int iParam0, int iParam1, float fParam2)
{
	Local_1243[iParam0 /*68*/].f_49[iParam1] = fParam2;
}

void func_467(int iParam0, int iParam1, float fParam2)
{
	Local_1243[iParam0 /*68*/].f_45[iParam1] = fParam2;
}

void func_468(int iParam0, int iParam1, float fParam2)
{
	Local_1243[iParam0 /*68*/].f_41[iParam1] = fParam2;
}

void func_469(int iParam0, float fParam1)
{
	Local_1243[iParam0 /*68*/].f_40 = fParam1;
}

void func_470(int iParam0, float fParam1)
{
	Local_1243[iParam0 /*68*/].f_39 = fParam1;
}

void func_471(int iParam0, float fParam1)
{
	Local_1243[iParam0 /*68*/].f_38 = fParam1;
}

void func_472(int iParam0, int iParam1)
{
	Local_1243[iParam0 /*68*/].f_37 = iParam1;
}

void func_473(int iParam0, int iParam1)
{
	Local_1243[iParam0 /*68*/].f_36 = iParam1;
}

int func_474()
{
	return -1;
}

void func_475()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x7A9CE41589B7A19F(1))
	{
		iVar1 = unk_0x2999CB7D3B432BE9(1, iVar0);
		if (iVar1 == 179)
		{
			func_476(iVar0);
		}
		if (iVar1 == 152)
		{
		}
		iVar0++;
	}
}

void func_476(int iParam0)
{
	var uVar0;
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
	struct<4> Var11;
	float fVar21;
	struct<14> Var22;
	
	iVar6 = -1;
	iVar7 = -1;
	iVar8 = -1;
	unk_0x74238B7708290D43(1, iParam0, &Var11, 10);
	if (unk_0x95CCECA3948CFE7B(Var11.f_0))
	{
		if (unk_0x96209AADF56E8FE8(Var11.f_0))
		{
			uVar0 = unk_0x4D3C2AC8339BFB4F(Var11.f_0);
			if (unk_0xA815CBE767EFA3CB(uVar0))
			{
				iVar2 = unk_0x8ACC9D9AC6076DCB(uVar0);
				if (unk_0xC8D96C5ECEABA5D0(iVar2))
				{
					iVar4 = unk_0xB916365AA117A9F4(iVar2);
					if (unk_0x784B3253F40F728C(iVar4))
					{
						iVar7 = iVar4;
					}
				}
				if (iVar7 != -1)
				{
					if (unk_0x95CCECA3948CFE7B(Var11.f_1))
					{
						if (unk_0x96209AADF56E8FE8(Var11.f_1))
						{
							iVar1 = unk_0x4D3C2AC8339BFB4F(Var11.f_1);
							if (unk_0xA815CBE767EFA3CB(iVar1))
							{
								iVar3 = unk_0x8ACC9D9AC6076DCB(iVar1);
								iVar8 = iVar3;
								if (unk_0xC8D96C5ECEABA5D0(iVar3))
								{
									iVar5 = unk_0xB916365AA117A9F4(iVar3);
									if (unk_0x784B3253F40F728C(iVar5))
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
													if (!func_194(1, 0))
													{
														if (iVar7 == unk_0x935FA14EDA695A82())
														{
															if (!unk_0xDCC86F723E82125E(Local_396[unk_0x935FA14EDA695A82() /*5*/].f_4, 7))
															{
																unk_0x59A0729D503ED758(&(Local_396[unk_0x935FA14EDA695A82() /*5*/].f_4), 7);
															}
														}
													}
													if (Var11.f_3)
													{
														if (iVar6 == unk_0x935FA14EDA695A82())
														{
															if (iLocal_3350 < func_520())
															{
																iLocal_3350++;
																func_480(0, iVar1, "", -1859646258, 2131309714, func_519(), 1, -1, 0, 0);
																Local_382.f_7 = (Local_382.f_7 + func_519());
															}
															else
															{
																iLocal_3350++;
															}
														}
														if (unk_0x736DBE187CFCC863())
														{
															fVar21 = func_102(iVar9, iVar6);
															fVar21 = (fVar21 + IntToFloat(Global_262145.f_9103));
															func_463(iVar9, iVar6, fVar21);
														}
													}
												}
												else if (iVar7 == func_8(iVar9))
												{
													if (iVar6 == unk_0x935FA14EDA695A82())
													{
														if (!func_194(1, 0))
														{
															if (!unk_0xDCC86F723E82125E(Local_396[unk_0x935FA14EDA695A82() /*5*/].f_4, 6))
															{
																unk_0x59A0729D503ED758(&(Local_396[unk_0x935FA14EDA695A82() /*5*/].f_4), 6);
															}
															if (!unk_0xDCC86F723E82125E(Local_396[unk_0x935FA14EDA695A82() /*5*/].f_4, 2))
															{
																unk_0x59A0729D503ED758(&(Local_396[unk_0x935FA14EDA695A82() /*5*/].f_4), 2);
																func_181(1);
															}
														}
														if (Var11.f_3)
														{
															if (iLocal_3348 < func_479())
															{
																iLocal_3348++;
																func_480(0, iVar1, "", -1859646258, 2131309714, func_478(), 1, -1, 0, 0);
																Local_382.f_7 = (Local_382.f_7 + func_478());
															}
															else
															{
																iLocal_3348++;
															}
														}
													}
													if (iVar7 == unk_0x935FA14EDA695A82())
													{
														iLocal_3349++;
													}
													if (func_193(iVar6, iVar9))
													{
														if (Var11.f_3)
														{
															if (unk_0x736DBE187CFCC863())
															{
																if (func_430(iVar9) == -1)
																{
																	func_523(iVar9, iVar6);
																}
																if (func_429(iVar9) == -1)
																{
																	func_522(iVar9, iVar8);
																}
																unk_0x59A0729D503ED758(&iLocal_557, 0);
															}
														}
													}
													else if (Var11.f_3)
													{
														if (unk_0x736DBE187CFCC863())
														{
															Var22.f_2 = 193;
															Var22.f_10 = iVar3;
															iVar10 = 0;
															while (iVar10 < 32)
															{
																if (unk_0xDCC86F723E82125E(iLocal_3345, iVar10))
																{
																	if (unk_0xDCC86F723E82125E(iLocal_3344, Local_562[iVar10 /*18*/].f_1))
																	{
																		if (!unk_0xDCC86F723E82125E(Local_396[iVar10 /*5*/].f_4, 9) && !unk_0xDCC86F723E82125E(Local_396[iVar10 /*5*/].f_4, 10))
																		{
																			if (func_142(iVar10))
																			{
																				func_426(Var22, func_477(Local_562[iVar10 /*18*/].f_1));
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

int func_477(int iParam0)
{
	var uVar0;
	
	unk_0x59A0729D503ED758(&uVar0, iParam0);
	return uVar0;
}

int func_478()
{
	return Global_262145.f_8908;
}

int func_479()
{
	return Global_262145.f_8910;
}

int func_480(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)
{
	return func_481(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9);
}

int func_481(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_491(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x95CCECA3948CFE7B(iParam1))
		{
			if (unk_0x96209AADF56E8FE8(iParam1))
			{
				uVar1 = unk_0x4D3C2AC8339BFB4F(iParam1);
				func_487(unk_0xB867FC7DBA46C0F1(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8);
			}
		}
	}
	else
	{
		func_482(iParam1, iVar0, sParam8);
	}
	return iVar0;
}

void func_482(int iParam0, int iParam1, char* sParam2)
{
	struct<3> Var0;
	
	Var0 = { func_485(iParam0, 1) };
	if (iParam0 == func_484(unk_0xC8B93D94F8954288()))
	{
		func_483(1);
	}
	func_487(Var0, iParam1, 0, sParam2);
}

void func_483(int iParam0)
{
	Global_2426867.f_1322 = iParam0;
}

int func_484(var uParam0)
{
	return uParam0;
}

Vector3 func_485(int iParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	float fVar10;
	
	if (iParam0 == func_486(unk_0xC8B93D94F8954288()) && unk_0xA9B6C2A8F9FE269A(unk_0xBFFCA1BD025B90B2()) == 4)
	{
		Var0 = { unk_0xCC31DB73C65552D8(iParam0, 0f, 2f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0x44C17CCB85A88A1F(iParam0, 0) };
	}
	fVar3 = 0f;
	if (!unk_0xB6900B8CB0ABBD2B(iParam0))
	{
		fVar3 = unk_0x59DD203239FBDCAD(iParam0);
	}
	unk_0xA8349C905E4A8DE7(unk_0x6D5BB810CC209E15(iParam0), &Var4, &Var7);
	if (bParam1)
	{
		fVar10 = (Var7.f_2 + 0.18f);
	}
	else
	{
		fVar10 = (Var4.f_2 + 0.18f);
	}
	Var0 = { unk_0xE79F1883B253E5B8(Var0, fVar3, 0f, 0f, fVar10) };
	return Var0;
}

int func_486(var uParam0)
{
	return uParam0;
}

void func_487(struct<3> Param0, int iParam3, int iParam4, char* sParam5)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2426867.f_741[iVar0 /*29*/].f_6 == 0 || Global_2426867.f_741[iVar0 /*29*/].f_6 == 6)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2426867.f_741[iVar1 /*29*/] = { Param0 };
			Global_2426867.f_741[iVar1 /*29*/].f_6 = 1;
			Global_2426867.f_741[iVar1 /*29*/].f_4 = func_490(Global_2426867.f_741[iVar1 /*29*/], &Global_1312317, &Global_1312318);
			Global_2426867.f_741[iVar1 /*29*/].f_7 = unk_0x2AA13A84EE2D3B24();
			Global_2426867.f_741[iVar1 /*29*/].f_3 = iParam3;
			Global_2426867.f_741[iVar1 /*29*/].f_8 = iParam4;
			Global_2426867.f_741[iVar1 /*29*/].f_9 = func_489();
			Global_2426867.f_741[iVar1 /*29*/].f_10 = func_488();
			StringCopy(&(Global_2426867.f_741[iVar1 /*29*/].f_22), sParam5, 16);
		}
	}
}

int func_488()
{
	if (Global_2426867.f_1322)
	{
		Global_2426867.f_1322 = 0;
		return 1;
	}
	Global_2426867.f_1322 = 0;
	return 0;
}

var func_489()
{
	var uVar0;
	
	uVar0 = Global_2426867.f_1324;
	Global_2426867.f_1324 = 1;
	return uVar0;
}

float func_490(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x4F982ED5336EA899(unk_0xE81835FB046A7978(), Param0, 1);
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

var func_491(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_492(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_492(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_518(unk_0xA34E7C2A5118D638()) || func_517(unk_0xA34E7C2A5118D638()))
	{
		if (Global_262145.f_7555 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_7555;
		}
	}
	else if (Global_262145.f_5033 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5033;
	}
	if (func_88(uParam2))
	{
	}
	if (func_516())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_514(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_513(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_510(0, &iVar1);
					break;
				
				case 3:
					func_510(1, &iVar1);
					break;
				
				case 1:
					func_507(&iVar1);
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
			func_204(1154, iVar1, -1);
			if (iParam1 == 0)
			{
				func_499((func_506(unk_0xA34E7C2A5118D638()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xEF84C5FA6302A771(iVar1, iParam8, iParam9);
				if (Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_39.f_2 != -1)
				{
					func_204(1155, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_495(iVar1);
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
				func_493((func_494(unk_0xA34E7C2A5118D638()) + iVar1));
			}
			else
			{
				func_493((func_494(unk_0xA34E7C2A5118D638()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_493(int iParam0)
{
	if (func_516())
	{
		Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_192.f_5 = iParam0;
		func_210(joaat("mpply_globalxp"), iParam0);
	}
}

int func_494(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_651(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xA34E7C2A5118D638())
			{
				return func_212(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1587175[iParam0 /*410*/].f_192.f_5;
			}
		}
		else
		{
			return func_212(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

void func_495(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_38(unk_0xA34E7C2A5118D638()) };
	if (unk_0x14F2268F2CD21E48())
	{
		if (unk_0x0BB7D2D2CAAFD70C(&Var0))
		{
			iVar13 = func_497(func_498(&Var0));
			if (iVar13 == 0)
			{
				func_496(&Global_1347498, iParam0);
				func_209(joaat("mpply_crew_local_xp_0"), Global_1347498);
			}
			else if (iVar13 == 1)
			{
				func_496(&Global_1347499, iParam0);
				func_209(joaat("mpply_crew_local_xp_1"), Global_1347499);
			}
			else if (iVar13 == 2)
			{
				func_496(&Global_1347500, iParam0);
				func_209(joaat("mpply_crew_local_xp_2"), Global_1347500);
			}
			else if (iVar13 == 3)
			{
				func_496(&Global_1347501, iParam0);
				func_209(joaat("mpply_crew_local_xp_3"), Global_1347501);
			}
			else if (iVar13 == 4)
			{
				func_496(&Global_1347502, iParam0);
				func_209(joaat("mpply_crew_local_xp_4"), Global_1347502);
			}
		}
	}
}

void func_496(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_497(int iParam0)
{
	if (iParam0 == Global_1347493)
	{
		return 0;
	}
	else if (iParam0 == Global_1347494)
	{
		return 1;
	}
	else if (iParam0 == Global_1347495)
	{
		return 2;
	}
	else if (iParam0 == Global_1347496)
	{
		return 3;
	}
	else if (iParam0 == Global_1347497)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_498(var uParam0)
{
	if (unk_0x14F2268F2CD21E48())
	{
		if (unk_0x0BB7D2D2CAAFD70C(uParam0))
		{
			return Global_2441309;
		}
	}
	return Global_2441309;
}

void func_499(int iParam0, int iParam1, int iParam2)
{
	if (func_516())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7530 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1347613[func_160(-1)])
				{
					unk_0xEF84C5FA6302A771(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1347613[func_160(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_7529 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0xEF84C5FA6302A771(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_7529 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0xEF84C5FA6302A771(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_505(unk_0xA34E7C2A5118D638()))
		{
			Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_192.f_1 = iParam0;
			Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_192.f_6 = func_503(iParam0, 1);
		}
		func_205(629, iParam0, -1, 1);
		func_206(630, func_503(iParam0, 1), -1, 1);
		Global_1347613[func_160(-1)] = iParam0;
		func_500(7, 0);
	}
}

void func_500(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_502(iParam0, iParam1))
	{
		iVar0 = func_501();
		Global_2441286[iVar0] = iParam0;
	}
}

int func_501()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2441286[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_502(int iParam0, var uParam1)
{
	if (Global_1315899)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315911) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_503(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_504(iParam0, 0);
}

int func_504(int iParam0, int iParam1)
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
		if (Global_273943[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_273943[iVar3] < iParam0)
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

int func_505(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xDCC86F723E82125E(Global_2426867.f_1, iParam0);
	}
	return 1;
}

int func_506(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xA34E7C2A5118D638())
			{
				return Global_1347613[func_160(-1)];
			}
			else if (func_505(iParam0))
			{
				return Global_1587175[iParam0 /*410*/].f_192.f_1;
			}
		}
	}
	else
	{
		return Global_1347613[func_160(-1)];
	}
	return 0;
}

void func_507(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x07CBE0ED3114C7D8(unk_0xA34E7C2A5118D638());
	iVar0 = 0;
	while (iVar0 < unk_0x55191629F1199760())
	{
		iVar4 = unk_0xD9BFAEBB04416B09(iVar0);
		if (unk_0x784B3253F40F728C(iVar4))
		{
			iVar5 = unk_0x8F765930684A893F(iVar4);
			if (unk_0x07CBE0ED3114C7D8(iVar5) != -1)
			{
				if (unk_0x07CBE0ED3114C7D8(iVar5) == iVar1 || func_131(unk_0x07CBE0ED3114C7D8(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xA34E7C2A5118D638())
					{
						if (func_509(unk_0xA34E7C2A5118D638(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_508(*iParam0, 100) * (10f * Global_262145.f_4209)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_508(*iParam0, 100) * (20f * Global_262145.f_4202)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_508(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_509(int iParam0, int iParam1)
{
	if (unk_0x14F2268F2CD21E48())
	{
		Global_2457104 = { func_38(iParam0) };
		Global_2457117 = { func_38(iParam1) };
		if (unk_0x0BB7D2D2CAAFD70C(&Global_2457104))
		{
			if (unk_0x0BB7D2D2CAAFD70C(&Global_2457117))
			{
				unk_0x59E0C66A4FA07806(&Global_2457034, 35, &Global_2457104);
				unk_0x59E0C66A4FA07806(&Global_2457069, 35, &Global_2457117);
				if (Global_2457034 == Global_2457069)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_510(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0x55191629F1199760())
		{
			iVar3 = iVar0;
			if (unk_0x784B3253F40F728C(iVar3))
			{
				iVar4 = unk_0x8F765930684A893F(iVar3);
				if (func_651(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xA34E7C2A5118D638())
					{
						iVar1++;
						if (func_509(unk_0xA34E7C2A5118D638(), iVar4))
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
			if (func_651(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xA34E7C2A5118D638())
				{
					if (func_511(unk_0xA34E7C2A5118D638(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_509(unk_0xA34E7C2A5118D638(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_508(*iParam1, 100) * (10f * Global_262145.f_4209)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_508(*iParam1, 100) * (20f * Global_262145.f_4202)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_511(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_512(iParam0), func_512(iParam1));
	return 0f;
}

Vector3 func_512(int iParam0)
{
	return unk_0x44C17CCB85A88A1F(unk_0xCF4C00513A86E840(iParam0), 0);
}

int func_513(int iParam0)
{
	int iVar0;
	
	if (unk_0xBAEDEB596C4FA2C5() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_508(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_514(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xA1836B70A59643DD(iParam0) > func_506(unk_0xA34E7C2A5118D638()))
		{
			iParam0 = -func_506(unk_0xA34E7C2A5118D638());
		}
	}
	if (func_515(8000, 0, 0) > 0)
	{
		if (func_515(8000, 0, 0) < (iParam0 + func_506(unk_0xA34E7C2A5118D638())))
		{
			iParam0 = (func_515(8000, 0, 0) - func_506(unk_0xA34E7C2A5118D638()));
		}
	}
	return iParam0;
}

int func_515(int iParam0, bool bParam1, int iParam2)
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
	return Global_273943[iParam0];
}

int func_516()
{
	return 1;
}

bool func_517(int iParam0)
{
	return Global_2417071[iParam0 /*306*/].f_114 == 2;
}

bool func_518(int iParam0)
{
	return Global_2417071[iParam0 /*306*/].f_114 == 7;
}

int func_519()
{
	return Global_262145.f_8909;
}

int func_520()
{
	return Global_262145.f_8911;
}

void func_521(int iParam0, var uParam1)
{
	Local_1243[iParam0 /*68*/].f_31 = uParam1;
}

void func_522(int iParam0, int iParam1)
{
	Local_1243[iParam0 /*68*/].f_35 = iParam1;
}

void func_523(int iParam0, int iParam1)
{
	Local_1243[iParam0 /*68*/].f_34 = iParam1;
}

void func_524(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	
	if (!unk_0xDCC86F723E82125E(iLocal_557, 5))
	{
		if (func_15(iParam0) != 0)
		{
			if (!func_196(unk_0xA34E7C2A5118D638()))
			{
				if (!func_89(unk_0xA34E7C2A5118D638()))
				{
					if (func_393(unk_0x935FA14EDA695A82()))
					{
						if (iParam1 <= 2)
						{
							if (func_142(unk_0x935FA14EDA695A82()) || func_393(unk_0x935FA14EDA695A82()))
							{
								func_547(func_561(iParam1), &iVar0, &iVar1, &iVar2);
							}
						}
						else
						{
							func_546(1);
						}
						if (iVar1 > 0)
						{
							func_545();
							func_480(0, unk_0xC8B93D94F8954288(), "", -1636175450, -1253457806, iVar1, 1, -1, 0, 0);
							Local_382.f_7 = (Local_382.f_7 + iVar1);
						}
						if (iVar0 > 0)
						{
							func_536(&iVar0, 1);
						}
						iVar0 = (iVar0 + iVar2);
						if (iVar0 > 0)
						{
							if (func_535())
							{
								func_526(-212607085, iVar0, &uVar3, 0, 1, 0);
							}
							else
							{
								unk_0x7AF7488EF897601F(iVar0, "AM_KING_OF_THE_HILL", &uVar4);
							}
							Local_382.f_6 = (Local_382.f_6 + iVar0);
							if (!Global_262145.f_9313)
							{
								if (Local_382.f_6 > 0)
								{
									func_525(16, Local_382.f_6);
								}
							}
							Global_2443261 = iVar0;
						}
					}
					else
					{
						func_546(0);
					}
				}
				else
				{
					func_546(0);
				}
			}
			else
			{
				func_546(0);
			}
		}
		else
		{
			func_546(0);
		}
		unk_0x59A0729D503ED758(&iLocal_557, 5);
	}
}

void func_525(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2458121.f_269 = iParam0;
		if (iParam1 > Global_262145.f_4983)
		{
			iParam1 = Global_262145.f_4983;
		}
		Global_2458121.f_270 = iParam1;
		Global_2458121.f_271 = 0;
	}
}

void func_526(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_535())
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
			if (iParam1 > 0)
			{
				func_527(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_527(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_527(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_535())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x9A07DDC8D6013A35(func_35()) || unk_0x2661EFA58162BE03())
		{
			Global_2555082 = 1;
			return 0;
		}
		if (Global_2442114)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2555083 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2554598[iVar1 /*72*/].f_2 == 0)
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
	if (bVar0 || unk_0xA697855E051773F2(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0xB2F39A45C7C097F8(iVar3))
		{
			*uParam0 = func_534(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2554598[*uParam0 /*72*/].f_65 = 1;
				}
			}
			Global_2555074 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2555081 = 1;
			Global_2555084 = iParam4;
			Global_2555086 = iParam3;
			Global_2555087 = 1;
			Global_2555085 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2555084 = iParam4;
			Global_2555086 = iParam3;
			Global_2555087 = 1;
			Global_2555085 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_533(1, iParam4);
			Global_2555081 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_528(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_528(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x59A0729D503ED758(&(Global_2417071[unk_0xA34E7C2A5118D638() /*306*/].f_121.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_529(iParam0);
	}
}

void func_529(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_535())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_532(iParam0))
		{
			if (!bVar0)
			{
				unk_0x57AF313235EC1176();
			}
		}
		else if (!bVar0)
		{
			unk_0xCE4D85A04F5B2192(Global_2554598[iParam0 /*72*/]);
		}
		func_530(&(Global_2554598[iParam0 /*72*/]));
	}
}

void func_530(var uParam0)
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
	func_531(&(uParam0->f_8.f_3));
	func_531(&(uParam0->f_8.f_16));
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
	uParam0->f_65 = 0;
	uParam0->f_66 = 0;
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
}

void func_531(var uParam0)
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

int func_532(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2554598[iParam0 /*72*/].f_5 == 1;
	}
	return 0;
}

void func_533(int iParam0, var uParam1)
{
	Global_2443392 = uParam1;
	Global_2443391 = iParam0;
}

int func_534(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2554598[iVar0 /*72*/].f_2 == 0)
		{
			if (!func_535())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2554598[iVar0 /*72*/].f_2 = 1;
			Global_2554598[iVar0 /*72*/].f_1 = uParam5;
			Global_2554598[iVar0 /*72*/].f_3 = uParam1;
			Global_2554598[iVar0 /*72*/].f_4 = uParam2;
			Global_2554598[iVar0 /*72*/].f_7 = uParam3;
			Global_2554598[iVar0 /*72*/].f_5 = 0;
			Global_2554598[iVar0 /*72*/] = iParam0;
			Global_2554598[iVar0 /*72*/].f_6 = iParam4;
			Global_2554598[iVar0 /*72*/].f_68 = uParam8;
			Global_2554598[iVar0 /*72*/].f_67 = uParam7;
			Global_2554598[iVar0 /*72*/].f_71 = 0;
			Global_2555074 = 0;
			if (bParam6)
			{
				Global_2554598[iVar0 /*72*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_535()
{
	if (unk_0x68B0A67658F2D9C2())
	{
		return 1;
	}
	return 0;
}

void func_536(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_544())
		{
			if (func_103(0))
			{
				if (unk_0xDF73DA5E2287C499(func_543()))
				{
					if (func_542() == 100)
					{
						iVar0 = *iParam0;
						*iParam0 = 0;
					}
					else
					{
						iVar0 = ((*iParam0 / 100) * func_542());
						*iParam0 = (*iParam0 - iVar0);
					}
					func_540(&iVar0);
					if (iParam1 == 1)
					{
						func_539("GB_BCUT_TICK1", func_543(), iVar0, 0, 0, 1, 1);
					}
					func_538(20);
					func_537(func_543(), iVar0, 1);
				}
			}
		}
	}
}

void func_537(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_651(iParam0, 0, 1))
	{
		Var0.f_0 = 433;
		Var0.f_1 = unk_0xA34E7C2A5118D638();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		unk_0x74A5559828D3116B(1, &Var0, 5, func_477(iParam0));
	}
}

void func_538(int iParam0)
{
	unk_0x59A0729D503ED758(&(Global_2458121.f_4648.f_7), iParam0);
}

int func_539(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x139A9C4D61DFD52E(unk_0xA34E7C2A5118D638(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x74C5CB21CF9F1178(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x74C5CB21CF9F1178(iParam1), 64);
		}
		unk_0x12F4A48D84A3989D(sParam0);
		unk_0x1AE578B67805BFB7(func_124(iParam1, -2, 1, 0));
		unk_0x2DED6C1306496257(func_39(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x1AE578B67805BFB7(iParam3);
		}
		unk_0x6DC80A902A91958F(iParam2);
		iVar0 = unk_0xC754466C15BD85AC(0, 1);
		func_30(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_540(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_541();
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

var func_541()
{
	return Global_262145.f_10288;
}

int func_542()
{
	return Global_262145.f_10287;
}

int func_543()
{
	return Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9;
}

bool func_544()
{
	return func_55(unk_0xA34E7C2A5118D638());
}

void func_545()
{
	Global_2442431 = 1;
}

void func_546(bool bParam0)
{
	if (bParam0)
	{
		if (func_158(1))
		{
			unk_0x59A0729D503ED758(&Global_1573903, 1);
		}
	}
	else if (func_158(2))
	{
		unk_0x59A0729D503ED758(&Global_1573903, 2);
	}
}

void func_547(float fParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = ((func_9(&uLocal_560, 0, 0) / 60) / 1000);
	if (iVar0 > Global_262145.f_9344)
	{
		iVar0 = Global_262145.f_9344;
	}
	else if (iVar0 < 1)
	{
		iVar0 = 1;
	}
	*uParam3 = (func_560() * iVar0);
	*uParam2 = (func_559() * iVar0);
	if (fParam0 > 0f)
	{
		iVar1 = ((Global_262145.f_9098 / 60) / 1000);
		if (iVar1 > func_558())
		{
			iVar1 = func_558();
		}
		iVar2 = iLocal_559;
		if (iVar2 > func_557())
		{
			iVar2 = func_557();
		}
		*uParam1 = unk_0xF2DB717A73826179((IntToFloat(func_550(func_556(), func_555(), iVar1, fParam0, func_554(), func_553(), func_552(), iVar2)) * Global_262145.f_9371));
		*uParam2 = (*uParam2 + unk_0xF2DB717A73826179((IntToFloat(func_550(func_549(), func_548(), iVar1, fParam0, func_554(), func_553(), func_552(), iVar2)) * Global_262145.f_9372)));
	}
}

int func_548()
{
	return Global_262145.f_8905;
}

int func_549()
{
	return Global_262145.f_8907;
}

int func_550(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7)
{
	return func_551(unk_0xF2DB717A73826179(((IntToFloat(iParam0) * fParam3) + (((IntToFloat(iParam1) * fParam3) * (IntToFloat(iParam2) * fParam4)) * ((IntToFloat(iParam7) * fParam5) / fParam6)))), 50, 0);
}

int func_551(int iParam0, int iParam1, int iParam2)
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

float func_552()
{
	return Global_262145.f_8914;
}

float func_553()
{
	return Global_262145.f_8913;
}

float func_554()
{
	return Global_262145.f_8912;
}

int func_555()
{
	return Global_262145.f_8904;
}

int func_556()
{
	return Global_262145.f_8906;
}

int func_557()
{
	return Global_262145.f_9257;
}

int func_558()
{
	return Global_262145.f_9256;
}

int func_559()
{
	return Global_262145.f_8903;
}

int func_560()
{
	return Global_262145.f_8902;
}

float func_561(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_8915;
		
		case 1:
			return Global_262145.f_8916;
		
		case 2:
			return Global_262145.f_8917;
		
		default:
	}
	return 0f;
}

int func_562(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (unk_0x19EE47A00B170BB8() < iParam0)
	{
		if (bParam2)
		{
			func_564(sParam3, sParam4, 1);
		}
		if (func_202(26, -1))
		{
			func_228(26, -1);
		}
		return 1;
	}
	if (func_18(&(Global_1573879.f_18)))
	{
		if (!func_5(&(Global_1573879.f_18), 7500, 0))
		{
			return 0;
		}
		func_3(&(Global_1573879.f_18));
	}
	if (func_563())
	{
		if (bParam2)
		{
			func_564(sParam3, sParam4, 0);
		}
		if (func_202(26, -1))
		{
			func_228(26, -1);
		}
		return 1;
	}
	if (iParam1 && unk_0xEE9C884FC3CB6070() < iParam0)
	{
		if (bParam2)
		{
			func_564(sParam3, sParam4, 1);
		}
		if (func_202(26, -1))
		{
			func_228(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_563()
{
	return unk_0xDCC86F723E82125E(Global_1573879.f_1, 0);
}

void func_564(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!unk_0xDCC86F723E82125E(Global_1573879.f_1, 2) && !func_170(unk_0xA34E7C2A5118D638())) && !func_196(unk_0xA34E7C2A5118D638()))
	{
		if (unk_0xB8A06E7E729EED0A(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (unk_0xB8A06E7E729EED0A(sParam1))
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
		func_148(65, sParam0, sParam1, 1, -1, 2);
		unk_0x59A0729D503ED758(&(Global_1573879.f_1), 2);
	}
}

int func_565()
{
	return Local_98.f_1;
}

void func_566()
{
	if (unk_0xDCC86F723E82125E(Global_1573879.f_1, 6))
	{
		func_585();
		unk_0x77621132305B133B(&(Global_1573879.f_1), 6);
	}
	if (!unk_0xDCC86F723E82125E(Global_1573879.f_1, 7))
	{
		if (unk_0xDCC86F723E82125E(Global_1573879.f_1, 4) || unk_0xDCC86F723E82125E(Global_1573879.f_1, 16))
		{
			if (((!unk_0xDA64C07A3B5D886D() && !unk_0xB45DF29A98EEAD5D()) && !func_180()) && func_651(unk_0xA34E7C2A5118D638(), 1, 1))
			{
				unk_0x59A0729D503ED758(&(Global_1573879.f_1), 7);
				func_179("FME_PASINT", 30000);
				func_178(1);
			}
		}
		else if (unk_0xDCC86F723E82125E(Global_1573879.f_1, 17))
		{
			if (func_92() && !func_91())
			{
				unk_0x77621132305B133B(&(Global_1573879.f_1), 17);
				unk_0x59A0729D503ED758(&(Global_1573879.f_1), 16);
			}
		}
	}
	if (!unk_0xDCC86F723E82125E(Global_1573879.f_1, 23))
	{
		if (((((!unk_0xDA64C07A3B5D886D() && !unk_0xDCC86F723E82125E(Global_2458121.f_742, 2)) && func_651(unk_0xA34E7C2A5118D638(), 1, 1)) && !Global_67968) && !Global_52841) && !unk_0xB45DF29A98EEAD5D())
		{
			if (func_583())
			{
				func_179("AMEV_GA_RP", -1);
				func_178(1);
				unk_0x59A0729D503ED758(&(Global_1573879.f_1), 23);
			}
		}
	}
	if (unk_0x2BF05095F2389894() && unk_0x45D1BEB329799891() == 15)
	{
		if (func_163(unk_0xA34E7C2A5118D638()))
		{
			if (!unk_0x997F946EBE927086(1344549371))
			{
				unk_0xDB617B399FCCE424(1344549371);
			}
		}
		else if (unk_0x997F946EBE927086(1344549371))
		{
			unk_0x7876EF2FBBB49635(1344549371);
		}
	}
	if (unk_0xDCC86F723E82125E(Global_1573879.f_1, 9))
	{
		if ((((!unk_0xDA64C07A3B5D886D() && !unk_0xB45DF29A98EEAD5D()) && !func_180()) && func_651(unk_0xA34E7C2A5118D638(), 1, 1)) && !func_90(unk_0xA34E7C2A5118D638(), 21))
		{
			unk_0x77621132305B133B(&(Global_1573879.f_1), 9);
			func_582(0);
			func_179("FME_TBL00", -1);
			func_178(1);
		}
	}
	if (func_267(unk_0xA34E7C2A5118D638()))
	{
		if (!unk_0xDCC86F723E82125E(Global_1573879.f_1, 18))
		{
			if ((func_90(unk_0xA34E7C2A5118D638(), 21) && unk_0xDCC86F723E82125E(Global_1573879.f_1, 20)) && !unk_0xDCC86F723E82125E(Global_1573879.f_1, 19))
			{
				unk_0x59A0729D503ED758(&(Global_1573879.f_1), 18);
			}
		}
		else if (unk_0xDCC86F723E82125E(Global_1573879.f_1, 18))
		{
			if (((((!unk_0xDA64C07A3B5D886D() && !unk_0xB45DF29A98EEAD5D()) && !func_180()) && func_651(unk_0xA34E7C2A5118D638(), 1, 1)) && unk_0xB66DD474AA9E764E()) && !Global_2458121.f_4642)
			{
				unk_0x77621132305B133B(&(Global_1573879.f_1), 18);
				unk_0x59A0729D503ED758(&(Global_1573879.f_1), 19);
				func_179("AMTT_RPAS", -1);
				func_178(1);
			}
		}
	}
	if (((((func_267(unk_0xA34E7C2A5118D638()) && !func_170(unk_0xA34E7C2A5118D638())) && func_192(unk_0xA34E7C2A5118D638()) != 146) && !func_196(unk_0xA34E7C2A5118D638())) && !func_89(unk_0xA34E7C2A5118D638())) && !func_576())
	{
		if (func_162(func_192(unk_0xA34E7C2A5118D638())))
		{
			unk_0x30A4F7E00272A0F5(unk_0xA34E7C2A5118D638());
		}
		if (!unk_0xDCC86F723E82125E(Global_1573879.f_1, 22))
		{
			unk_0x59A0729D503ED758(&(Global_1573879.f_1), 22);
		}
		if (func_259(unk_0xA34E7C2A5118D638()) || func_154())
		{
			if (!unk_0xDCC86F723E82125E(Global_1573879.f_1, 10))
			{
				if (func_574(func_192(unk_0xA34E7C2A5118D638())))
				{
					if (func_158(0) && !Global_2391042)
					{
						unk_0x59A0729D503ED758(&(Global_1573879.f_1), 9);
					}
					func_161(1);
					unk_0x59A0729D503ED758(&(Global_1573879.f_1), 14);
				}
				unk_0x59A0729D503ED758(&(Global_1573879.f_1), 10);
			}
		}
		if (func_163(unk_0xA34E7C2A5118D638()))
		{
			if (!unk_0xDCC86F723E82125E(Global_1573879.f_1, 11))
			{
				if (!Global_91158.f_8)
				{
					unk_0x59A0729D503ED758(&(Global_1573879.f_1), 12);
					func_156(1);
				}
				if (!func_573())
				{
					unk_0x59A0729D503ED758(&(Global_1573879.f_1), 13);
					func_155();
				}
				if (!Global_2391042)
				{
					unk_0x59A0729D503ED758(&(Global_1573879.f_1), 14);
					if (func_158(0) && !Global_2391042)
					{
						unk_0x59A0729D503ED758(&(Global_1573879.f_1), 9);
					}
					func_161(1);
				}
				unk_0x59A0729D503ED758(&(Global_1573879.f_1), 11);
			}
		}
		else
		{
			func_571(0);
		}
	}
	else
	{
		func_571(1);
	}
	func_567();
	if (func_153(func_192(unk_0xA34E7C2A5118D638())) && !unk_0xDCC86F723E82125E(Global_1573879.f_1, 21))
	{
		unk_0x59A0729D503ED758(&(Global_1573879.f_1), 21);
	}
	if ((func_92() && !func_91()) || func_90(unk_0xA34E7C2A5118D638(), 21))
	{
		if (!unk_0xDCC86F723E82125E(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1, 10))
		{
			unk_0x59A0729D503ED758(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1), 10);
		}
	}
	else if (unk_0xDCC86F723E82125E(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1, 10))
	{
		unk_0x77621132305B133B(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1), 10);
	}
}

void func_567()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_180())
	{
		iVar2 = 62;
		iVar2 = 0;
		while (iVar2 < 82)
		{
			if (func_147(iVar2))
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
				if (unk_0xDCC86F723E82125E(Global_1573879.f_1, 26))
				{
					unk_0x77621132305B133B(&(Global_1573879.f_1), 26);
				}
				func_568(iVar0, iVar1);
				iVar2 = 82;
			}
			iVar2++;
		}
	}
	else if (!unk_0xDCC86F723E82125E(Global_1573879.f_1, 26))
	{
		func_3(&(Global_1573879.f_21));
		unk_0x59A0729D503ED758(&(Global_1573879.f_1), 26);
	}
}

void func_568(int iParam0, int iParam1)
{
	if (!func_18(&(Global_1573879.f_21)))
	{
		func_11(&(Global_1573879.f_21), 0, 0);
	}
	else if (func_5(&(Global_1573879.f_21), iParam1, 0))
	{
		if (func_383() > 0)
		{
			func_175(iParam0);
			if (func_177("AMEV_LBD_HELP"))
			{
				unk_0x9F4AA6F234E8A860(1);
			}
			func_3(&(Global_1573879.f_21));
		}
	}
	else
	{
		func_570(0);
		func_569();
	}
}

void func_569()
{
	Global_2458121.f_4384 = 0;
}

void func_570(int iParam0)
{
	Global_1338611.f_68 = iParam0;
}

void func_571(int iParam0)
{
	if ((unk_0xDCC86F723E82125E(Global_1573879.f_1, 11) || (unk_0xDCC86F723E82125E(Global_1573879.f_1, 10) && iParam0)) || (unk_0xDCC86F723E82125E(Global_1573879.f_1, 22) && iParam0))
	{
		if (unk_0xDCC86F723E82125E(Global_1573879.f_1, 12))
		{
			unk_0x77621132305B133B(&(Global_1573879.f_1), 12);
			func_156(0);
		}
		if (unk_0xDCC86F723E82125E(Global_1573879.f_1, 13))
		{
			unk_0x77621132305B133B(&(Global_1573879.f_1), 13);
			func_572();
		}
		if (unk_0xDCC86F723E82125E(Global_1573879.f_1, 14) && !func_28(unk_0xA34E7C2A5118D638(), 0))
		{
			unk_0x77621132305B133B(&(Global_1573879.f_1), 14);
			func_161(0);
		}
		unk_0x77621132305B133B(&(Global_1573879.f_1), 11);
		unk_0x77621132305B133B(&(Global_1573879.f_1), 10);
		unk_0x77621132305B133B(&(Global_1573879.f_1), 22);
	}
}

void func_572()
{
	unk_0x77621132305B133B(&(Global_2458121.f_4552), 0);
}

bool func_573()
{
	return unk_0xDCC86F723E82125E(Global_2458121.f_4552, 0);
}

int func_574(int iParam0)
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
			return func_163(unk_0xA34E7C2A5118D638());
		
		case 133:
			return (func_154() || func_575(func_107()));
		
		default:
	}
	return 0;
}

int func_575(int iParam0)
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

int func_576()
{
	if (((((((((func_251() || func_250()) || func_249()) || func_99()) || (func_246() && !unk_0xDC9A5ADFE0C41DD2())) || (func_579() && !func_578())) || Global_2394609) || Global_2394609.f_1 != 0) || Global_2394682 != 0) || (func_577() == 2 && !unk_0xDC9A5ADFE0C41DD2()))
	{
		return 1;
	}
	return 0;
}

int func_577()
{
	return Global_976341;
}

bool func_578()
{
	return unk_0xDCC86F723E82125E(Global_2433098.f_2, 27);
}

int func_579()
{
	if (func_581() || func_580())
	{
		return Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_84 == 8;
	}
	return 0;
}

var func_580()
{
	return Global_2433098.f_610;
}

bool func_581()
{
	return unk_0xDCC86F723E82125E(Global_2433098.f_2, 11);
}

void func_582(int iParam0)
{
	int iVar0;
	
	iVar0 = func_159(2507, -1, 0);
	if (iParam0 == 0)
	{
		if (!unk_0xDCC86F723E82125E(iVar0, 0))
		{
			unk_0x59A0729D503ED758(&iVar0, 0);
		}
		else if (!unk_0xDCC86F723E82125E(iVar0, 1))
		{
			unk_0x59A0729D503ED758(&iVar0, 1);
		}
		else if (!unk_0xDCC86F723E82125E(iVar0, 2))
		{
			unk_0x59A0729D503ED758(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!unk_0xDCC86F723E82125E(iVar0, 3))
		{
			unk_0x59A0729D503ED758(&iVar0, 3);
		}
		else if (!unk_0xDCC86F723E82125E(iVar0, 4))
		{
			unk_0x59A0729D503ED758(&iVar0, 4);
		}
		else if (!unk_0xDCC86F723E82125E(iVar0, 5))
		{
			unk_0x59A0729D503ED758(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!unk_0xDCC86F723E82125E(iVar0, 6))
		{
			unk_0x59A0729D503ED758(&iVar0, 6);
		}
		else if (!unk_0xDCC86F723E82125E(iVar0, 7))
		{
			unk_0x59A0729D503ED758(&iVar0, 7);
		}
		else if (!unk_0xDCC86F723E82125E(iVar0, 8))
		{
			unk_0x59A0729D503ED758(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!unk_0xDCC86F723E82125E(iVar0, 9))
		{
			unk_0x59A0729D503ED758(&iVar0, 9);
		}
		else if (!unk_0xDCC86F723E82125E(iVar0, 10))
		{
			unk_0x59A0729D503ED758(&iVar0, 10);
		}
		else if (!unk_0xDCC86F723E82125E(iVar0, 11))
		{
			unk_0x59A0729D503ED758(&iVar0, 11);
		}
	}
	func_206(2507, iVar0, -1, 1);
}

int func_583()
{
	int iVar0;
	
	if (!func_18(&(Global_1573879.f_15)))
	{
		func_11(&(Global_1573879.f_15), 0, 0);
		Global_1573879.f_17 = 0;
	}
	else if (func_5(&(Global_1573879.f_15), 1000, 0))
	{
		if (unk_0x784B3253F40F728C(unk_0xD9BFAEBB04416B09(Global_1573879.f_17)))
		{
			iVar0 = unk_0x8F765930684A893F(unk_0xD9BFAEBB04416B09(Global_1573879.f_17));
			if (unk_0xDF73DA5E2287C499(iVar0))
			{
				if (func_651(iVar0, 1, 1) && func_584(iVar0, 6))
				{
					if (unk_0x2A488C176D52CCA5(func_512(unk_0xA34E7C2A5118D638()), func_512(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1573879.f_17++;
		if (Global_1573879.f_17 >= 32)
		{
			Global_1573879.f_17 = 0;
			func_3(&(Global_1573879.f_15));
		}
	}
	return 0;
}

int func_584(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1312447 != 0)
	{
		return 0;
	}
	if (!func_505(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1587175[iVar0 /*410*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

void func_585()
{
	unk_0x60B57BC5E51D2074(5);
	func_280();
	unk_0xFD62177C7242216E(1f);
	unk_0x77621132305B133B(&(Global_1573879.f_1), 8);
	func_586();
}

void func_586()
{
	if (Global_1719525)
	{
		if (unk_0xDCC86F723E82125E(Global_1719526, 0))
		{
			unk_0x77621132305B133B(&Global_2464686, 0);
		}
		if (unk_0xDCC86F723E82125E(Global_1719526, 1))
		{
			unk_0x77621132305B133B(&Global_2464686, 1);
		}
		if (unk_0xDCC86F723E82125E(Global_1719526, 5))
		{
			unk_0x77621132305B133B(&Global_2464686, 5);
		}
		if (unk_0x42277337DA18A497(-355737150))
		{
			unk_0x130F0C5AE7B52B7A(-355737150, 1, 0, 0);
		}
		if (unk_0x42277337DA18A497(-580979506))
		{
			unk_0x130F0C5AE7B52B7A(-580979506, 1, 0, 0);
		}
		if (unk_0x42277337DA18A497(-1426452475))
		{
			unk_0x130F0C5AE7B52B7A(-1426452475, 1, 0, 0);
		}
		if (unk_0x42277337DA18A497(745417724))
		{
			unk_0x130F0C5AE7B52B7A(745417724, 1, 0, 0);
		}
		if (unk_0x42277337DA18A497(-1305304906))
		{
			unk_0x130F0C5AE7B52B7A(-1305304906, 1, 0, 0);
		}
		if (unk_0x42277337DA18A497(-1543175077))
		{
			unk_0x130F0C5AE7B52B7A(-1543175077, 1, 0, 0);
		}
		if (unk_0x42277337DA18A497(-811770997))
		{
			unk_0x130F0C5AE7B52B7A(-811770997, 1, 0, 0);
		}
		Global_1719526 = 0;
	}
	Global_1719525 = 0;
}

var func_587()
{
	if (unk_0x95CCECA3948CFE7B(func_588()))
	{
		return func_588();
	}
	return func_139();
}

var func_588()
{
	return Global_2359301.f_3;
}

bool func_589()
{
	return unk_0xDCC86F723E82125E(Global_2359301, 11);
}

bool func_590()
{
	return unk_0xDCC86F723E82125E(Global_2359301, 4);
}

int func_591(int iParam0)
{
	if (func_33(iParam0, 0))
	{
		return 1;
	}
	if (func_592())
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

bool func_592()
{
	return unk_0xDCC86F723E82125E(Global_2359301, 3);
}

bool func_593()
{
	return Global_1573879.f_23;
}

int func_594()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (Global_2458121.f_4549)
	{
		return 0;
	}
	uVar2 = unk_0x3BC33547A5F418E8();
	if (func_18(&(Local_98.f_1.f_1)))
	{
		iVar0 = func_595(&uVar2, &(Local_98.f_1.f_1));
		iVar1 = Global_262145.f_9098;
	}
	else if (func_18(&(Local_98.f_1.f_3)))
	{
		iVar0 = func_595(&uVar2, &(Local_98.f_1.f_3));
		iVar1 = Global_262145.f_9099;
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

int func_595(var uParam0, var uParam1)
{
	return unk_0xA1836B70A59643DD(unk_0x2F4EBE92EB266B70(*uParam0, *uParam1));
}

bool func_596(int iParam0)
{
	return !func_597(iParam0);
}

int func_597(int iParam0)
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
			if (Global_262145.f_5057)
			{
				return 0;
			}
			if (func_90(unk_0xA34E7C2A5118D638(), 7))
			{
				return 0;
			}
			if (unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 0) || unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_5058)
			{
				return 0;
			}
			if (func_90(unk_0xA34E7C2A5118D638(), 7))
			{
				return 0;
			}
			if (unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 0) || unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_5059)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_5060)
			{
				return 0;
			}
			if (func_90(unk_0xA34E7C2A5118D638(), 7))
			{
				return 0;
			}
			if (unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 0) || unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_598(4))
			{
				return 0;
			}
			if (func_90(unk_0xA34E7C2A5118D638(), 7))
			{
				return 0;
			}
			if (unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 0) || unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_598(4))
			{
				return 0;
			}
			if (func_90(unk_0xA34E7C2A5118D638(), 7))
			{
				return 0;
			}
			if (unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 0) || unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_598(4))
			{
				return 0;
			}
			if (func_90(unk_0xA34E7C2A5118D638(), 7))
			{
				return 0;
			}
			if (unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 0) || unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_598(4))
			{
				return 0;
			}
			if (func_90(unk_0xA34E7C2A5118D638(), 7))
			{
				return 0;
			}
			if (unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 0) || unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_598(4))
			{
				return 0;
			}
			if (func_90(unk_0xA34E7C2A5118D638(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_598(4))
			{
				return 0;
			}
			if (func_90(unk_0xA34E7C2A5118D638(), 7))
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

int func_598(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_651(unk_0x20A20BF765914E37(iVar0), 0, 1))
		{
			if (unk_0xDCC86F723E82125E(Global_2417071[iVar0 /*306*/].f_206, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_599()
{
	bool bVar0;
	
	func_603(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315886 == 0)
	{
		if (!unk_0xBBAE3E0C60A8AD4B())
		{
			return 1;
		}
	}
	if (func_602())
	{
		return 1;
	}
	if (Global_2443300)
	{
		return 1;
	}
	if (func_601())
	{
		return 1;
	}
	if (func_600(157))
	{
		if (!func_251())
		{
			return 1;
		}
	}
	if (func_600(155))
	{
		return 1;
	}
	if (!unk_0xDC6347A8EBB9281E())
	{
		return 1;
	}
	if (func_165() != 0)
	{
		if (unk_0xCBC8FFE55DC722B5(func_165()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_600(int iParam0)
{
	if (unk_0x88FC52D6FDFA0AFA(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_601()
{
	return Global_2441381;
}

bool func_602()
{
	return Global_2433098.f_569;
}

void func_603(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x7A9CE41589B7A19F(1))
	{
		iVar1 = unk_0x2999CB7D3B432BE9(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x74238B7708290D43(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 325:
					func_604(iVar0);
					break;
				
				case 2:
					unk_0x74238B7708290D43(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 55)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_604(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x74238B7708290D43(1, iParam0, &Var0, 3))
	{
		if (func_651(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xCF4C00513A86E840(Var0.f_1);
			if (unk_0x95CCECA3948CFE7B(uVar3))
			{
				if (unk_0x277ECDA23D8CCEB4(iVar3, 0))
				{
					uVar4 = unk_0x275BEBE583A163B5(iVar3, 0);
					if (unk_0x8AA327BE085BA8B4(uVar4, Var0.f_2) && unk_0xEE66E067C1F8D1F4())
					{
						if (func_605(uVar4, &bVar5))
						{
							unk_0x3440777B8DAAC4C1(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xEF84021B2AB5E334(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_605(int iParam0, var uParam1)
{
	if (unk_0x95CCECA3948CFE7B(uParam0))
	{
		if (!unk_0xD28A89C669EAD2E4(iParam0))
		{
			if (unk_0x75932C6E41A19C54(iParam0))
			{
				unk_0xFD816D0E738EB817(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x1F59F772AA90087D(iParam0, 0))
		{
			if (unk_0xFE7BCFB02217DCDF(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_606()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_607()
{
	int iVar0;
	
	func_146();
	func_635(141);
	func_617(141, 0, unk_0xDCC86F723E82125E(iLocal_557, 5));
	func_236();
	func_181(0);
	if (unk_0xDCC86F723E82125E(iLocal_557, 16))
	{
		unk_0xDB9D78E5137EE7AD("MP_Deathmatch_Type_Challenge_Scene");
		unk_0x77621132305B133B(&iLocal_557, 16);
	}
	unk_0xFD62177C7242216E(1f);
	func_61();
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_614(iVar0);
		iVar0++;
	}
	func_275();
	func_612();
	func_611(0);
	func_174(29, 0);
	if (func_599())
	{
		Local_382.f_5 = 5;
	}
	else if (unk_0xDCC86F723E82125E(iLocal_557, 24))
	{
		Local_382.f_5 = 6;
	}
	else if (Local_382.f_5 != 1)
	{
		Local_382.f_5 = 2;
	}
	Local_382.f_0 = Local_98.f_214;
	Local_382.f_1 = Local_98.f_215;
	Local_382.f_4 = Local_98.f_216;
	Local_382.f_3 = iLocal_559;
	Local_382.f_10 = (unk_0x20F8506526D25CE0() - Local_382.f_9);
	if (!Global_262145.f_9313)
	{
		if (Local_382.f_6 > 0)
		{
			if (Local_382.f_5 == 1)
			{
				func_610();
			}
		}
	}
	if (unk_0x935FA14EDA695A82() != -1)
	{
		func_609(Local_382, iLocal_395, iLocal_3350, iLocal_3349, func_58(func_101(0, unk_0x935FA14EDA695A82())), -1, -1);
	}
	func_608();
}

void func_608()
{
	unk_0xA4E0D8FD51F2A6F7();
}

void func_609(struct<12> Param0, var uParam12, int iParam13, int iParam14, var uParam15, int iParam16, int iParam17)
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
	
	uVar0 = unk_0xC4E68AF0B559FAC4();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_69317)
	{
		if (unk_0xF8D041B05C3D1FD4(uVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam12;
			unk_0x6483456300B637A2(&Var1);
		}
		else if (unk_0xF8D041B05C3D1FD4(uVar0, "freemode"))
		{
			Var14 = { Param0 };
			Var14.f_12 = uParam12;
			Var14.f_13 = iParam13;
			unk_0xC3F52FE7E766CF71(&Var14);
		}
		else if (unk_0xF8D041B05C3D1FD4(uVar0, "am_cp_collection"))
		{
			Var28 = { Param0 };
			Var28.f_12 = uParam12;
			Var28.f_13 = iParam13;
			Var28.f_14 = iParam14;
			Var28.f_15 = uParam15;
			Var28.f_16 = iParam16;
			Var28.f_17 = iParam17;
			unk_0x01451F2BA643A1A3(&Var28);
		}
		else if (unk_0xF8D041B05C3D1FD4(uVar0, "am_challenges"))
		{
			Var52 = { Param0 };
			Var52.f_12 = uParam12;
			Var52.f_13 = unk_0xBBDA792448DB5A89(iParam13);
			if (iParam14 == 1)
			{
				Var52.f_13 = (Var52.f_13 / 10f);
			}
			unk_0x12226DEF09574124(&Var52);
		}
		else if (unk_0xF8D041B05C3D1FD4(uVar0, "am_penned_in"))
		{
			unk_0xA7330A116146362C(&Param0);
		}
		else if (unk_0xF8D041B05C3D1FD4(uVar0, "am_pass_the_parcel"))
		{
			Var66 = { Param0 };
			Var66.f_12 = uParam12;
			unk_0x288A17BAB1853D87(&Var66);
		}
		else if (unk_0xF8D041B05C3D1FD4(uVar0, "am_hot_property"))
		{
			Var79 = { Param0 };
			Var79.f_12 = uParam12;
			Var79.f_13 = iParam13;
			unk_0x394AF500F69538DA(&Var79);
		}
		else if (unk_0xF8D041B05C3D1FD4(uVar0, "am_dead_drop"))
		{
			Var93 = { Param0 };
			Var93.f_12 = uParam12;
			Var93.f_13 = iParam13;
			unk_0xD9E663B83CF84644(&Var93);
		}
		else if (unk_0xF8D041B05C3D1FD4(uVar0, "am_king_of_the_castle"))
		{
			Var107 = { Param0 };
			Var107.f_12 = uParam12;
			Var107.f_13 = iParam13;
			Var107.f_14 = iParam14;
			Var107.f_15 = uParam15;
			unk_0xF4D6757401B12AC1(&Var107);
		}
		else if (unk_0xF8D041B05C3D1FD4(uVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var123 = { Param0 };
			Var123.f_12 = uParam12;
			unk_0xC382FB77214E8E89(&Var123);
		}
		else if (unk_0xF8D041B05C3D1FD4(uVar0, "AM_KILL_LIST"))
		{
			if (iParam14 == 0)
			{
				Var136 = { Param0 };
				Var136.f_12 = uParam12;
				Var136.f_13 = iParam13;
				unk_0x2FB576B2B4703629(&Var136);
			}
			else
			{
				Var150 = { Param0 };
				Var150.f_12 = uParam12;
				Var150.f_13 = iParam13;
				unk_0x533E1F35BAEA394D(&Var150);
			}
		}
		else if (unk_0xF8D041B05C3D1FD4(uVar0, "am_hunt_the_beast"))
		{
			Var164 = { Param0 };
			Var164.f_12 = uParam12;
			unk_0x9987C8881E457B06(&Var164);
		}
	}
}

void func_610()
{
	unk_0x59A0729D503ED758(&(Global_2458121.f_1635), 18);
}

void func_611(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xDCC86F723E82125E(Global_2458121.f_1635, 9))
		{
			unk_0x59A0729D503ED758(&(Global_2458121.f_1635), 9);
		}
	}
	else if (unk_0xDCC86F723E82125E(Global_2458121.f_1635, 9))
	{
		unk_0x77621132305B133B(&(Global_2458121.f_1635), 9);
	}
}

void func_612()
{
	if (Global_2409446.f_6 == unk_0x46CF50E0E5A24635())
	{
		func_613();
	}
}

void func_613()
{
	struct<25> Var0;
	
	if (unk_0xC2DCA35AE2EC9DC4(Global_2409446.f_6))
	{
		if (!Global_2409446.f_6 == unk_0x46CF50E0E5A24635())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Global_2409446 = { Var0 };
	Global_2409446.f_6 = -1;
}

void func_614(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_616(iParam0))
	{
		func_615(iVar0);
		iVar0++;
	}
	func_275();
	func_612();
	func_284(func_285(iParam0), 0, 0);
}

void func_615(int iParam0)
{
	struct<12> Var0;
	
	if (iParam0 > -1 && iParam0 < 10)
	{
		if (Global_2404919.f_347[iParam0 /*12*/].f_9)
		{
			Global_2404919.f_347[iParam0 /*12*/] = { Var0 };
		}
	}
}

int func_616(int iParam0)
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

void func_617(int iParam0, bool bParam1, var uParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (unk_0xA34E7C2A5118D638() != -1)
	{
		if (unk_0xDCC86F723E82125E(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1, 13))
		{
			unk_0x77621132305B133B(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1), 13);
		}
		if (unk_0xDCC86F723E82125E(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1, 14))
		{
			unk_0x77621132305B133B(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1), 14);
		}
	}
	if (unk_0xDCC86F723E82125E(Global_1573879.f_1, 21))
	{
		unk_0x77621132305B133B(&(Global_1573879.f_1), 21);
	}
	func_631();
	unk_0x9F4C1977B00B9480("DisableFlightMusic", 0);
	unk_0x9F4C1977B00B9480("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_630(func_192(unk_0xA34E7C2A5118D638()));
		func_174(21, 0);
	}
	else
	{
		if ((uParam2 && unk_0xA34E7C2A5118D638() != -1) && func_629(unk_0xA34E7C2A5118D638()) >= 12)
		{
			func_628(2519, -1);
			iVar1 = func_159(2519, -1, 0);
			if (iVar1 == 2)
			{
				unk_0x59A0729D503ED758(&Global_1573904, 0);
			}
			else if (iVar1 == 4)
			{
				unk_0x59A0729D503ED758(&Global_1573904, 1);
			}
			else if (iVar1 == 6)
			{
				unk_0x59A0729D503ED758(&Global_1573904, 2);
			}
			else if (iVar1 == 8)
			{
				unk_0x59A0729D503ED758(&Global_1573904, 3);
			}
			else if (iVar1 == 10)
			{
				unk_0x59A0729D503ED758(&Global_1573904, 4);
			}
			else if (iVar1 == 12)
			{
				unk_0x59A0729D503ED758(&Global_1573904, 5);
			}
		}
		func_627();
		func_626();
		func_625();
		if ((!func_27(unk_0xA34E7C2A5118D638()) && !func_25(unk_0xA34E7C2A5118D638())) && !func_79())
		{
			func_273();
		}
		func_624();
		if (!unk_0xDCC86F723E82125E(Global_1722044.f_3, 0) && !unk_0xDCC86F723E82125E(Global_1722044.f_3, 1))
		{
			func_585();
		}
		func_623();
		unk_0x77621132305B133B(&(Global_2458121.f_1638), 2);
		func_622();
		func_621();
	}
	if (unk_0x997F946EBE927086(1344549371))
	{
		unk_0x7876EF2FBBB49635(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if ((unk_0xA34E7C2A5118D638() != -1 && !func_90(unk_0xA34E7C2A5118D638(), 21)) && !func_28(unk_0xA34E7C2A5118D638(), 0))
		{
			func_161(0);
			func_156(0);
			func_620();
		}
	}
	if (uParam2 && !bParam1)
	{
		if (func_202(26, -1))
		{
			Global_2443244 = -1;
			func_228(26, -1);
		}
	}
	if (!func_618())
	{
		Global_2457030 = 1;
	}
}

int func_618()
{
	if (((!func_367(unk_0xA34E7C2A5118D638()) && !func_351(unk_0xA34E7C2A5118D638())) && func_192(unk_0xA34E7C2A5118D638()) != 146) && !func_619())
	{
		return 0;
	}
	return 1;
}

int func_619()
{
	if ((Global_1613622 == 0 && unk_0xDC9A5ADFE0C41DD2()) && (((((Global_1613622.f_5 != 0 || unk_0xDCC86F723E82125E(Global_1613622.f_4, 15)) || unk_0xDCC86F723E82125E(Global_1613622.f_4, 18)) || unk_0xDCC86F723E82125E(Global_1613622.f_4, 19)) || unk_0xDCC86F723E82125E(Global_1613622.f_4, 28)) || unk_0xDCC86F723E82125E(Global_1613622.f_4, 27)))
	{
		return 1;
	}
	return 0;
}

void func_620()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1311741)
	{
		if (unk_0xDCC86F723E82125E(Global_2359718[iVar0 /*26*/].f_12, 11))
		{
			if (unk_0xDCC86F723E82125E(Global_2359718[iVar0 /*26*/].f_13, 26))
			{
				unk_0x77621132305B133B(&(Global_2359718[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_621()
{
	Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_6 = 0;
}

void func_622()
{
	if (unk_0xDCC86F723E82125E(Global_2458121.f_4551, 1))
	{
		unk_0x77621132305B133B(&(Global_2458121.f_4551), 1);
	}
	if (Global_2458121.f_4551 > 0)
	{
		unk_0x233432976E597324("FM_COUNTDOWN_30S_KILL");
		unk_0x233432976E597324("FM_COUNTDOWN_30S_FIRA");
		unk_0xDB9D78E5137EE7AD("GTAO_FM_Events_30_Sec_Countdown_Scene");
		unk_0x384EC102F362C893(1);
		Global_2458121.f_4551 = 0;
		unk_0x9F4C1977B00B9480("DisableFlightMusic", 0);
		unk_0x9F4C1977B00B9480("WantedMusicDisabled", 0);
		unk_0x9F4C1977B00B9480("AllowScoreAndRadio", 0);
		if (!unk_0xF8D041B05C3D1FD4(unk_0xC4E68AF0B559FAC4(), "am_pi_menu"))
		{
			if (Global_2458121.f_4561 > -1)
			{
				unk_0x279EB90079F76860(Global_2458121.f_4561);
				Global_2458121.f_4561 = -1;
			}
		}
	}
}

void func_623()
{
	struct<24> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Global_1573879 = { Var0 };
}

void func_624()
{
	var uVar0;
	
	Global_1318847 = uVar0;
}

void func_625()
{
	Global_2458121.f_4552 = 0;
}

void func_626()
{
	if (unk_0xA34E7C2A5118D638() != -1)
	{
		Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1 = 0;
	}
}

void func_627()
{
	int iVar0;
	
	iVar0 = unk_0xA34E7C2A5118D638();
	if (iVar0 != -1)
	{
		Global_1608811[iVar0 /*109*/] = -1;
	}
}

void func_628(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_159(iParam0, func_160(iParam1), 0);
	iVar0++;
	if (!func_207(iParam0))
	{
		func_206(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_205(iParam0, iVar0, iParam1, 1);
	}
}

int func_629(int iParam0)
{
	return Global_1587175[iParam0 /*410*/].f_192.f_6;
}

int func_630(int iParam0)
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
			if (func_163(unk_0xA34E7C2A5118D638()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_631()
{
	if (unk_0xDCC86F723E82125E(Global_2458121.f_1636, 3) || unk_0xDCC86F723E82125E(Global_2458121.f_1636, 4))
	{
		if (unk_0xD5DFCA69ACAA20E3() || unk_0xE71FCE10773CF7B0())
		{
			unk_0x31E6EB2040318451(800);
		}
	}
	if (unk_0xDCC86F723E82125E(Global_2458121.f_1636, 5))
	{
		unk_0x77621132305B133B(&(Global_2458121.f_1636), 5);
	}
	if (unk_0xDCC86F723E82125E(Global_2458121.f_1636, 3))
	{
		unk_0x77621132305B133B(&(Global_2458121.f_1636), 3);
	}
	if (unk_0xDCC86F723E82125E(Global_2458121.f_1636, 4))
	{
		unk_0x77621132305B133B(&(Global_2458121.f_1636), 4);
	}
	func_634(0);
	func_633(0);
	func_632(0);
}

void func_632(int iParam0)
{
	if (Global_2458121.f_4372 != iParam0)
	{
		Global_2458121.f_4372 = iParam0;
	}
}

void func_633(bool bParam0)
{
	if (Global_2458121.f_4371 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2458121.f_4371 = bParam0;
	}
}

void func_634(int iParam0)
{
	if (Global_2458121.f_4369 != iParam0)
	{
		Global_2458121.f_4369 = iParam0;
	}
}

void func_635(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

void func_636(struct<20> Param0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = func_650(Param0.f_0);
	func_649(uVar3, Param0);
	func_648(0, -1, 0);
	func_646(141);
	unk_0xFE7B095449D5F053(&Local_98, 284);
	unk_0x99592530153DB318(&Local_396, 161);
	if (!func_645())
	{
		func_607();
	}
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		unk_0x6ECAEE4901F465A1(0);
		func_174(29, 1);
		if (unk_0x736DBE187CFCC863())
		{
			iVar0 = func_641();
			func_638(func_640(141, iVar0, 0, 0));
			iVar1 = 0;
			while (iVar1 < 1)
			{
				func_637(iVar1, iVar0);
				iVar1++;
			}
			unk_0x3A7FF4BAFC26BDFD(&(Local_98.f_214), &(Local_98.f_215));
		}
		Local_382.f_2 = unk_0x19EE47A00B170BB8();
		Local_382.f_9 = unk_0x20F8506526D25CE0();
		Local_382.f_8 = unk_0x20F8506526D25CE0();
		iVar2 = 0;
		while (iVar2 < 32)
		{
			Local_98.f_250[iVar2] = -1;
			iVar2++;
		}
		func_413(0);
	}
	else
	{
		func_607();
	}
}

void func_637(int iParam0, int iParam1)
{
	Local_98.f_6[iParam0 /*204*/].f_69 = iParam1;
}

void func_638(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	
	Var0.f_0 = 401;
	Var0.f_1 = unk_0xA34E7C2A5118D638();
	Var0.f_2 = iParam0;
	iVar3 = func_639(1, 1);
	if (!iVar3 == 0)
	{
		unk_0x74A5559828D3116B(1, &Var0, 3, iVar3);
	}
}

var func_639(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x20A20BF765914E37(iVar1);
		if (func_651(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xA34E7C2A5118D638() || iParam0)
			{
				if (bParam1)
				{
					unk_0x59A0729D503ED758(&uVar0, iVar1);
				}
				else if (!func_33(iVar2, 0))
				{
					unk_0x59A0729D503ED758(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_640(int iParam0, int iParam1, int iParam2, int iParam3)
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

var func_641()
{
	int iVar0;
	int iVar1[8];
	int iVar10;
	var uVar11;
	
	iVar10 = 0;
	while (iVar10 <= 7)
	{
		if (func_644(iVar10) && !func_642(141, iVar10, 0, 0))
		{
			iVar1[iVar0] = iVar10;
			iVar0++;
		}
		iVar10++;
	}
	uVar11 = iVar1[unk_0x531444754C426278(0, iVar0)];
	return uVar11;
}

int func_642(int iParam0, int iParam1, int iParam2, int iParam3)
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
	iVar1 = func_643(iParam0);
	iVar0 = 0;
	while (iVar0 < 19)
	{
		if (iVar0 < Global_262145.f_6473)
		{
			if (Global_2452665.f_124[iVar0 /*2*/] == iVar1 && Global_2452665.f_124[iVar0 /*2*/].f_1 == func_640(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_643(int iParam0)
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

int func_644(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_9104)
			{
				return 0;
			}
			break;
		
		case 4:
			if (Global_262145.f_9105)
			{
				return 0;
			}
			break;
		
		case 2:
			if (Global_262145.f_9106)
			{
				return 0;
			}
			break;
		
		case 1:
			if (Global_262145.f_9107)
			{
				return 0;
			}
			break;
		
		case 3:
			if (Global_262145.f_9108)
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_9109)
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_9110)
			{
				return 0;
			}
			break;
		
		case 7:
			if (Global_262145.f_9111)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_645()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0xBBAE3E0C60A8AD4B())
		{
			return 0;
		}
		if (unk_0x1228FD88C2BCDCE2())
		{
			return 1;
		}
		if (func_602())
		{
			return 0;
		}
		if (func_600(155))
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

void func_646(int iParam0)
{
	func_623();
	func_647();
	func_625();
	Global_1573879.f_4 = iParam0;
	Global_1573879.f_5 = iParam0;
	func_171(iParam0, -1);
	func_191(&(Global_1573879.f_18), 0, 0);
	Global_2458121.f_4414 = 0;
	Global_2442022[0] = func_48();
	Global_2442022[1] = func_48();
	Global_2442022[2] = func_48();
	Global_2442022[3] = func_48();
	Global_2442022[4] = func_48();
	func_621();
	func_344();
	if (func_92() && !func_91())
	{
		unk_0x59A0729D503ED758(&(Global_1573879.f_1), 16);
	}
	else
	{
		unk_0x59A0729D503ED758(&(Global_1573879.f_1), 17);
	}
}

void func_647()
{
	var uVar0;
	
	Global_1573903 = uVar0;
}

int func_648(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xD93BACE0E8C906AB();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_608();
			}
			else
			{
				return 0;
			}
		}
		if (!func_221())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xBBAE3E0C60A8AD4B())
				{
					if (!bParam2)
					{
						func_608();
					}
					else
					{
						return 0;
					}
				}
				if (func_602())
				{
					if (!bParam2)
					{
						func_608();
					}
					else
					{
						return 0;
					}
				}
				if (func_600(155))
				{
					if (!bParam2)
					{
						func_608();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x16DD8839736956AC())
			{
				if (!bParam2)
				{
					func_608();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xD93BACE0E8C906AB();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0xBBAE3E0C60A8AD4B())
		{
			if (!bParam2)
			{
				func_608();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x16DD8839736956AC())
	{
		if (!bParam2)
		{
			func_608();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_649(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0xBBAE3E0C60A8AD4B())
	{
		func_608();
	}
	unk_0x170190A515596E3F(uParam0, 0, Param1.f_16);
}

int func_650(int iParam0)
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
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
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
		
		case 65:
			return 32;
		
		case 66:
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
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 67:
			return 32;
		
		case 68:
			return 32;
		
		case 72:
			return 32;
		
		case 70:
			return 32;
		
		case 71:
			return 32;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 73:
			return 32;
		
		case 74:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 83:
			return 2;
		
		case 88:
			return 1;
		
		case 84:
			return 2;
		
		case 85:
			return 4;
		
		case 86:
			return 2;
		
		case 87:
			return 2;
		
		case 69:
			return 1;
		
		case 89:
			return 2;
		
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
			return 0;
		
		case 96:
			return 1;
		
		default:
	}
	return 0;
}

int func_651(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xDF73DA5E2287C499(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x06972B20E75CBE06(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2426867.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

