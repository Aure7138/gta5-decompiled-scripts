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
	var uLocal_57 = 0;
	var uLocal_58 = 10;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 2;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 8;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 8;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	float fLocal_92 = 0f;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	var uLocal_100 = 0;
	struct<4> Local_101 = { 2, 0, 0, 3 } ;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 2;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 2;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	struct<8> Local_128[32];
	struct<178> Local_385 = { 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0 } ;
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
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
	fLocal_92 = ((0.05f + 0.275f) - 0.01f);
	fLocal_95 = -0.05f;
	fLocal_96 = 0.92f;
	fLocal_97 = 1.94f;
	fLocal_98 = 2.99f;
	fLocal_99 = 3.7f;
	if (unk_0x63C468D583002D23())
	{
		func_110(ScriptParam_0);
	}
	else
	{
		func_107();
	}
	while (true)
	{
		func_106();
		func_98();
		if (func_87() || unk_0x51FDEF56E23A7C33())
		{
			func_107();
		}
		if (unk_0x63C468D583002D23())
		{
			if (func_25())
			{
				func_107();
			}
			if ((((((((!Global_1573902 && !func_24(2)) && !func_21(unk_0xBE369BE1BC57A796(), 0)) && !unk_0xE9E6B5364105A000()) && unk_0x94A5DEE82C898FDF(unk_0xBE369BE1BC57A796())) && !func_19(unk_0xBE369BE1BC57A796())) && !func_17(func_18(unk_0xBE369BE1BC57A796()))) && !func_15(unk_0xBE369BE1BC57A796(), 146)) && !func_11(unk_0xBE369BE1BC57A796()))
			{
				if (func_10(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 0), 3, 1000, 0) || func_9(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 0), 1000))
				{
					if (!unk_0x48B8265059381CD0(Global_2494199.f_4418, 0))
					{
						if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
						{
							if (unk_0xE40FC0529CC75B0F(unk_0x17B5CC8A8615737D()) || unk_0x8EC3C2BC25ED8ECA(unk_0x17B5CC8A8615737D()))
							{
								if (func_10(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 0), 3, 0, 0) || func_9(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 0), 0))
								{
									if (unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) < 4)
									{
										unk_0xDEF3636CEB1A14E7(unk_0xBE369BE1BC57A796(), 36, (unk_0xFEBDFA40CE0D54BE(4) - unk_0xFEBDFA40CE0D54BE(unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()))));
									}
									else
									{
										unk_0xE90104D9EBFC3619(unk_0xBE369BE1BC57A796());
									}
								}
								else if (!func_8(&(Local_385.f_3)))
								{
									func_5(&(Local_385.f_3));
								}
								else if (func_2(&(Local_385.f_3)) > 20f || Local_385.f_177)
								{
									if (unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) < 4)
									{
										unk_0xDEF3636CEB1A14E7(unk_0xBE369BE1BC57A796(), 36, (unk_0xFEBDFA40CE0D54BE(4) - unk_0xFEBDFA40CE0D54BE(unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()))));
									}
									else
									{
										unk_0xE90104D9EBFC3619(unk_0xBE369BE1BC57A796());
									}
								}
							}
							else if (unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) < 4)
							{
								unk_0xDEF3636CEB1A14E7(unk_0xBE369BE1BC57A796(), 36, (unk_0xFEBDFA40CE0D54BE(4) - unk_0xFEBDFA40CE0D54BE(unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()))));
							}
							else
							{
								unk_0xE90104D9EBFC3619(unk_0xBE369BE1BC57A796());
							}
						}
						else
						{
							if (func_8(&(Local_385.f_3)))
							{
								func_1(&(Local_385.f_3));
							}
							if (Local_385.f_177)
							{
								Local_385.f_177 = 0;
							}
						}
					}
					else if (!Local_385.f_177)
					{
						Local_385.f_177 = 1;
					}
				}
				else if (Local_385.f_177)
				{
					Local_385.f_177 = 0;
				}
			}
		}
		else
		{
			func_107();
		}
	}
}

void func_1(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_2(var uParam0)
{
	if (func_8(uParam0))
	{
		if (func_4(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_3(unk_0x48B8265059381CD0(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_3(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x94E3E074F38DF86C());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x63C468D583002D23())
	{
		iVar2 = unk_0xCB150A8B81012128();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x94E3E074F38DF86C()) / 1000f);
}

bool func_4(var uParam0)
{
	return unk_0x48B8265059381CD0(*uParam0, 2);
}

void func_5(var uParam0)
{
	if (!func_8(uParam0))
	{
		func_6(uParam0);
	}
}

void func_6(var uParam0)
{
	func_7(uParam0, 0f);
}

void func_7(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_3(unk_0x48B8265059381CD0(*uParam0, 4)) - fParam1);
	unk_0xEB79FECD9022AAF0(uParam0, 1);
	unk_0x21E7933CCC7B3724(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_8(var uParam0)
{
	return unk_0x48B8265059381CD0(*uParam0, 1);
}

int func_9(struct<3> Param0, int iParam3)
{
	struct<3> Var0[15];
	struct<3> Var46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	int iVar110;
	
	iVar110 = 0;
	Var0[0 /*3*/] = { -1877.436f, 2783.151f, 31.80618f };
	Var46[0 /*3*/] = { -1797.873f, 2924.37f, (307.1106f + IntToFloat(iParam3)) };
	fVar92[0] = 88f;
	Var0[1 /*3*/] = { -1761.116f, 2834.651f, 31.80622f };
	Var46[1 /*3*/] = { -1720.887f, 2906.419f, (281.8062f + IntToFloat(iParam3)) };
	fVar92[1] = 88f;
	Var0[2 /*3*/] = { -1761.493f, 2817.68f, 32.37125f };
	Var46[2 /*3*/] = { -1769.704f, 2913.734f, (281.8066f + IntToFloat(iParam3)) };
	fVar92[2] = 88f;
	Var0[3 /*3*/] = { -1879.297f, 2772.653f, 29.57795f };
	Var46[3 /*3*/] = { -1864.521f, 2825.472f, (281.8062f + IntToFloat(iParam3)) };
	fVar92[3] = 88f;
	Var0[4 /*3*/] = { -2676.74f, 3366.988f, 29.92394f };
	Var46[4 /*3*/] = { -2744.79f, 3340.347f, (37.80379f + IntToFloat(iParam3)) };
	fVar92[4] = 9f;
	Var0[5 /*3*/] = { -2676.74f, 3366.988f, 29.92394f };
	Var46[5 /*3*/] = { -2744.79f, 3340.347f, (37.80379f + IntToFloat(iParam3)) };
	fVar92[5] = 9.5f;
	Var0[6 /*3*/] = { -2807.397f, 3264.226f, 29.92764f };
	Var46[6 /*3*/] = { -2879.805f, 3309.01f, (37.57864f + IntToFloat(iParam3)) };
	fVar92[6] = 9.5f;
	Var0[7 /*3*/] = { -2808.236f, 3264.634f, 29.92764f };
	Var46[7 /*3*/] = { -2747.55f, 3187.8f, (37.45682f + IntToFloat(iParam3)) };
	fVar92[7] = 9.5f;
	Var0[8 /*3*/] = { -2530.996f, 3064.151f, 29.71081f };
	Var46[8 /*3*/] = { -2748.557f, 3189.939f, (37.45682f + IntToFloat(iParam3)) };
	fVar92[8] = 9.5f;
	Var0[9 /*3*/] = { -2533.902f, 3062.491f, 29.70715f };
	Var46[9 /*3*/] = { -2520.674f, 2996.817f, (37.45715f + IntToFloat(iParam3)) };
	fVar92[9] = 9.5f;
	Var0[10 /*3*/] = { -2500.716f, 2927.103f, 29.45663f };
	Var46[10 /*3*/] = { -2445.696f, 2896.657f, (37.68009f + IntToFloat(iParam3)) };
	fVar92[10] = 9.5f;
	Var0[11 /*3*/] = { -2020.543f, 2810.747f, 29.45658f };
	Var46[11 /*3*/] = { -1927.949f, 2785.779f, (37.67057f + IntToFloat(iParam3)) };
	fVar92[11] = 9.5f;
	Var0[12 /*3*/] = { -2261.899f, 3376.549f, 29.77859f };
	Var46[12 /*3*/] = { -2141.067f, 3376.773f, (37.90019f + IntToFloat(iParam3)) };
	fVar92[12] = 9.5f;
	iVar108 = 13;
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (unk_0x3D559A6AF62756C4(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], iVar110, 1))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

int func_10(struct<3> Param0, int iParam3, int iParam4, bool bParam5)
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
		if (unk_0x3D559A6AF62756C4(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], iVar110, 1))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

bool func_11(int iParam0)
{
	return func_12(func_13(iParam0));
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_13(int iParam0)
{
	if (func_14(iParam0, 0))
	{
		return Global_1619421[iParam0 /*390*/].f_11.f_32;
	}
	return -1;
}

int func_14(int iParam0, int iParam1)
{
	if (Global_1619421[iParam0 /*390*/].f_11.f_32 != -1 || (iParam1 && Global_1619421[iParam0 /*390*/].f_11.f_31 != -1))
	{
		return 1;
	}
	return 0;
}

int func_15(int iParam0, int iParam1)
{
	if (Global_1619421[iParam0 /*390*/] == iParam1)
	{
		return func_16(iParam0);
	}
	return 0;
}

int func_16(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x48B8265059381CD0(Global_1619421[iVar0 /*390*/].f_1, 0);
	}
	return 0;
}

int func_17(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_16(unk_0xBE369BE1BC57A796()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_18(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1619421[iVar0 /*390*/];
	}
	return -1;
}

int func_19(int iParam0)
{
	if (func_21(iParam0, 0))
	{
		return 1;
	}
	if (func_20())
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

bool func_20()
{
	return unk_0x48B8265059381CD0(Global_2359301, 3);
}

bool func_21(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xBE369BE1BC57A796())
	{
		bVar0 = func_22(-1, 0) == 8;
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

int func_22(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_23();
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

int func_23()
{
	return Global_1312735;
}

bool func_24(int iParam0)
{
	return unk_0x48B8265059381CD0(Global_1573901, iParam0);
}

int func_25()
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x415DF132F15085E8())
	{
		if (func_66())
		{
			iVar0 = 1;
		}
	}
	if (func_26())
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_26()
{
	int iVar0;
	
	switch (Local_385.f_6)
	{
		case 0:
			func_65();
			if ((func_62(unk_0xBE369BE1BC57A796(), 1) && func_61()) || func_13(unk_0xBE369BE1BC57A796()) == 159)
			{
				unk_0xD90CB3CF9A40791C(joaat("rhino"), 1);
			}
			func_59(&(Local_128[unk_0xCA1D9459B2CC7619() /*8*/]), 1);
			Local_385.f_176 = 1;
			Local_385.f_6 = 1;
			break;
		
		case 1:
			if (func_58())
			{
				func_59(&(Local_128[unk_0xCA1D9459B2CC7619() /*8*/]), 2);
				Local_385.f_6 = 2;
			}
			break;
		
		case 2:
			if (func_57(Local_101.f_20, 1))
			{
				Local_385.f_6 = 3;
			}
			break;
		
		case 3:
			if (!func_62(unk_0xBE369BE1BC57A796(), 1) && !func_61())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_34(iVar0);
					iVar0++;
				}
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				func_27(iVar0);
				iVar0++;
			}
			if (unk_0xB7A628320EFF8E47(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 0), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
			{
				Local_385.f_6 = 4;
			}
			break;
		
		case 4:
			if ((func_62(unk_0xBE369BE1BC57A796(), 1) && func_61()) || func_13(unk_0xBE369BE1BC57A796()) == 159)
			{
				unk_0xD90CB3CF9A40791C(joaat("rhino"), 0);
			}
			return 1;
			break;
	}
	return 0;
}

void func_27(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (Local_101.f_3[iParam0 /*5*/].f_2 > 2 && unk_0x841F312D66362BF7(Local_101.f_3[iParam0 /*5*/]))
	{
		if (unk_0xA929B2923D14E2F8(unk_0xC7C67E717B20DA89(Local_101.f_3[iParam0 /*5*/]), 0))
		{
			if (unk_0xA3794949321E107C(Local_385.f_172[iParam0]))
			{
				unk_0x020DF7300725ECAB(&(Local_385.f_172[iParam0]));
			}
		}
		else if (!unk_0xA3794949321E107C(Local_385.f_172[iParam0]) && unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) >= 2)
		{
			Local_385.f_172[iParam0] = unk_0xF1FE04D602EA392E(unk_0x03981D6F4893D7D0(Local_101.f_3[iParam0 /*5*/]));
			unk_0xCC930AE12D020496(Local_385.f_172[iParam0], 1);
		}
	}
	else if (unk_0xA3794949321E107C(Local_385.f_172[iParam0]))
	{
		unk_0x020DF7300725ECAB(&(Local_385.f_172[iParam0]));
	}
	switch (Local_101.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (!func_33(Local_128[unk_0xCA1D9459B2CC7619() /*8*/].f_4[iParam0], 16))
			{
				Local_128[unk_0xCA1D9459B2CC7619() /*8*/].f_4[iParam0] = 0;
				func_32(&(Local_128[unk_0xCA1D9459B2CC7619() /*8*/].f_4[iParam0]), 16);
			}
			break;
		
		case 1:
			if (!func_33(Local_128[unk_0xCA1D9459B2CC7619() /*8*/].f_4[iParam0], 1))
			{
				if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
				{
					if (unk_0xE40FC0529CC75B0F(unk_0x17B5CC8A8615737D()) || unk_0x8EC3C2BC25ED8ECA(unk_0x17B5CC8A8615737D()))
					{
						if (unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) >= 4)
						{
							if (func_10(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 0), 3, 500, 0))
							{
								func_32(&(Local_128[unk_0xCA1D9459B2CC7619() /*8*/].f_4[iParam0]), 1);
							}
						}
					}
				}
			}
			break;
		
		case 2:
			break;
		
		case 3:
			if (!func_33(Local_128[unk_0xCA1D9459B2CC7619() /*8*/].f_4[iParam0], 2))
			{
				if (func_31(iParam0))
				{
					uVar2 = unk_0xDF7CE83326F434E9(Local_101.f_3[iParam0 /*5*/].f_4);
					uVar0 = unk_0xDE2767751C03729D(Local_101.f_3[iParam0 /*5*/].f_1);
					uVar1 = unk_0xC7C67E717B20DA89(Local_101.f_3[iParam0 /*5*/]);
					if (!unk_0xA929B2923D14E2F8(uVar2, 0))
					{
						if (unk_0xE40FC0529CC75B0F(uVar2))
						{
							uVar3 = unk_0x60604E51E30D25B8(uVar2, 0);
							if ((!unk_0xA929B2923D14E2F8(uVar0, 0) && !unk_0xA929B2923D14E2F8(uVar1, 0)) && !unk_0xA929B2923D14E2F8(uVar3, 0))
							{
								unk_0x5C61DA9E5FA9C0BF(uVar0, uVar1, uVar3, uVar2, unk_0x57240623C1BC6E88(uVar2, 1), 6, 70f, -1f, 30f, 500, 50);
								unk_0x9E087EF1619B5C7B(uVar0, joaat("vehicle_weapon_space_rocket"));
								unk_0x6F2C1CD778FB751C(uVar0, 0);
							}
						}
					}
				}
				if (func_30(iParam0))
				{
					uVar0 = unk_0xDE2767751C03729D(Local_101.f_3[iParam0 /*5*/].f_1);
					iVar2 = unk_0xDF7CE83326F434E9(Local_101.f_3[iParam0 /*5*/].f_4);
					if (!unk_0xA929B2923D14E2F8(iVar2, 0))
					{
						if (unk_0xE40FC0529CC75B0F(iVar2))
						{
							unk_0x6A5F700EEAAB4EA9(uVar0, iVar2, unk_0x57240623C1BC6E88(iVar2, 1));
						}
					}
				}
				if (func_29(iParam0, 6))
				{
					func_32(&(Local_128[unk_0xCA1D9459B2CC7619() /*8*/].f_4[iParam0]), 2);
				}
			}
			break;
		
		case 4:
			break;
		
		case 5:
			if (!func_33(Local_128[unk_0xCA1D9459B2CC7619() /*8*/].f_4[iParam0], 8))
			{
				if (func_31(iParam0))
				{
					uVar0 = unk_0xDE2767751C03729D(Local_101.f_3[iParam0 /*5*/].f_1);
					uVar1 = unk_0xC7C67E717B20DA89(Local_101.f_3[iParam0 /*5*/]);
					if (!unk_0xA929B2923D14E2F8(uVar0, 0) && !unk_0xA929B2923D14E2F8(uVar1, 0))
					{
						unk_0x5C61DA9E5FA9C0BF(iVar0, iVar1, 0, 0, -2076.374f, 3112.294f, 33.13584f, 9, 70f, -1f, 30f, 500, 50);
					}
				}
				if (func_29(iParam0, 9))
				{
					func_32(&(Local_128[unk_0xCA1D9459B2CC7619() /*8*/].f_4[iParam0]), 8);
				}
			}
			break;
		
		case 6:
			if (unk_0x49C2DB27EDED0049(Local_101.f_3[iParam0 /*5*/]) || unk_0x49C2DB27EDED0049(Local_101.f_3[iParam0 /*5*/].f_1))
			{
				if (!unk_0xF7E1BD8196545EE3(unk_0x57240623C1BC6E88(unk_0x03981D6F4893D7D0(Local_101.f_3[iParam0 /*5*/]), 0), 10f) && !unk_0x905279B0A283D24D(unk_0x57240623C1BC6E88(unk_0x03981D6F4893D7D0(Local_101.f_3[iParam0 /*5*/]), 0), 10f))
				{
					if (unk_0x841F312D66362BF7(Local_101.f_3[iParam0 /*5*/].f_1) && unk_0x093776FE2E6B4BAC(Local_101.f_3[iParam0 /*5*/].f_1))
					{
						uVar4 = unk_0x03981D6F4893D7D0(Local_101.f_3[iParam0 /*5*/].f_1);
						unk_0x31D01D6DEF4B35AD(&uVar4);
					}
					if (unk_0x841F312D66362BF7(Local_101.f_3[iParam0 /*5*/]) && unk_0x093776FE2E6B4BAC(Local_101.f_3[iParam0 /*5*/]))
					{
						uVar5 = unk_0x03981D6F4893D7D0(Local_101.f_3[iParam0 /*5*/]);
						unk_0x31D01D6DEF4B35AD(&uVar5);
					}
				}
			}
			else if (func_33(Local_128[unk_0xCA1D9459B2CC7619() /*8*/].f_4[iParam0], 16))
			{
				func_28(&(Local_128[unk_0xCA1D9459B2CC7619() /*8*/].f_4[iParam0]), 16);
			}
			break;
	}
}

void func_28(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_29(int iParam0, int iParam1)
{
	var uVar0;
	
	if (!unk_0x841F312D66362BF7(Local_101.f_3[iParam0 /*5*/]))
	{
		return 1;
	}
	uVar0 = unk_0xC7C67E717B20DA89(Local_101.f_3[iParam0 /*5*/]);
	if (unk_0xA929B2923D14E2F8(uVar0, 0))
	{
		return 1;
	}
	if (unk_0xE4C8471DA664578A(iVar0) != iParam1)
	{
		return 0;
	}
	return 1;
}

int func_30(int iParam0)
{
	var uVar0;
	
	if (!unk_0x841F312D66362BF7(Local_101.f_3[iParam0 /*5*/].f_1))
	{
		return 0;
	}
	uVar0 = unk_0xDE2767751C03729D(Local_101.f_3[iParam0 /*5*/].f_1);
	if (unk_0xA929B2923D14E2F8(uVar0, 0))
	{
		return 0;
	}
	if (!unk_0xC38F0FBE1914783C(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_31(int iParam0)
{
	var uVar0;
	
	if (!unk_0x841F312D66362BF7(Local_101.f_3[iParam0 /*5*/]))
	{
		return 0;
	}
	uVar0 = unk_0xC7C67E717B20DA89(Local_101.f_3[iParam0 /*5*/]);
	if (unk_0xA929B2923D14E2F8(uVar0, 0))
	{
		return 0;
	}
	if (!unk_0xC38F0FBE1914783C(iVar0))
	{
		return 0;
	}
	return 1;
}

void func_32(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_33(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_34(int iParam0)
{
	var uVar0;
	
	if (!unk_0x841F312D66362BF7(Local_101[iParam0]))
	{
		return;
	}
	uVar0 = unk_0xDE2767751C03729D(Local_101[iParam0]);
	if (unk_0xA929B2923D14E2F8(uVar0, 0))
	{
		return;
	}
	switch (Local_101.f_21[iParam0])
	{
		case 0:
			if (!func_33(Local_128[unk_0xCA1D9459B2CC7619() /*8*/].f_1[iParam0], 64))
			{
				Local_128[unk_0xCA1D9459B2CC7619() /*8*/].f_1[iParam0] = 0;
				func_32(&(Local_128[unk_0xCA1D9459B2CC7619() /*8*/].f_1[iParam0]), 64);
			}
			break;
		
		case 1:
			if (!func_33(Local_128[unk_0xCA1D9459B2CC7619() /*8*/].f_1[iParam0], 1))
			{
				if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), unk_0x57240623C1BC6E88(iVar0, 1)) <= 900f)
					{
						func_32(&(Local_128[unk_0xCA1D9459B2CC7619() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 2:
			if (!func_33(Local_128[unk_0xCA1D9459B2CC7619() /*8*/].f_1[iParam0], 2) && unk_0xB7A628320EFF8E47(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), unk_0x57240623C1BC6E88(iVar0, 1)) <= 900f)
			{
				func_56(&(Local_385.f_7), 4, iVar0, "ARMY_Guard01", 0, 1);
				func_39(&(Local_385.f_7), "ARMYAUD", "ARMY_WRN1", 12, 0, 0, 0);
				func_32(&(Local_128[unk_0xCA1D9459B2CC7619() /*8*/].f_1[iParam0]), 2);
			}
			break;
		
		case 3:
			if (!func_33(Local_128[unk_0xCA1D9459B2CC7619() /*8*/].f_1[iParam0], 4))
			{
				if (func_38(iParam0))
				{
					unk_0xC62C6BBB860531B7(iVar0, func_37(iParam0), -1, 0);
				}
				if (func_36(iParam0, 1630799643))
				{
					func_32(&(Local_128[unk_0xCA1D9459B2CC7619() /*8*/].f_1[iParam0]), 4);
				}
			}
			break;
		
		case 4:
			if ((!func_33(Local_128[unk_0xCA1D9459B2CC7619() /*8*/].f_1[iParam0], 8) && unk_0xB7A628320EFF8E47(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 0), unk_0x57240623C1BC6E88(iVar0, 1)) <= 900f) && unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) < 1)
			{
				if (!func_8(&Local_385))
				{
					func_5(&Local_385);
				}
				if (func_2(&Local_385) >= 7f)
				{
					func_32(&(Local_128[unk_0xCA1D9459B2CC7619() /*8*/].f_1[iParam0]), 8);
					func_39(&(Local_385.f_7), "ARMYAUD", "ARMY_WRN1a", 12, 0, 0, 0);
				}
			}
			else if (func_8(&Local_385))
			{
				func_1(&Local_385);
			}
			if (!func_33(Local_128[unk_0xCA1D9459B2CC7619() /*8*/].f_1[iParam0], 16))
			{
				if (func_35(iParam0) && unk_0xB7A628320EFF8E47(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 0), unk_0x57240623C1BC6E88(iVar0, 1)) <= 900f)
				{
					func_32(&(Local_128[unk_0xCA1D9459B2CC7619() /*8*/].f_1[iParam0]), 16);
					unk_0xDEF3636CEB1A14E7(unk_0xBE369BE1BC57A796(), 36, unk_0xFEBDFA40CE0D54BE(4));
				}
			}
			if (func_33(Local_128[unk_0xCA1D9459B2CC7619() /*8*/].f_1[iParam0], 1))
			{
				if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), unk_0x57240623C1BC6E88(iVar0, 1)) > 900f)
					{
						func_28(&(Local_128[unk_0xCA1D9459B2CC7619() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 5:
			if (!func_33(Local_128[unk_0xCA1D9459B2CC7619() /*8*/].f_1[iParam0], 16))
			{
				if (func_35(iParam0) && unk_0xB7A628320EFF8E47(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 0), unk_0x57240623C1BC6E88(iVar0, 1)) <= 900f)
				{
					func_32(&(Local_128[unk_0xCA1D9459B2CC7619() /*8*/].f_1[iParam0]), 16);
					unk_0xDEF3636CEB1A14E7(unk_0xBE369BE1BC57A796(), 36, (unk_0xFEBDFA40CE0D54BE(4) - unk_0xFEBDFA40CE0D54BE(unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()))));
				}
			}
			if (func_33(Local_128[unk_0xCA1D9459B2CC7619() /*8*/].f_1[iParam0], 1))
			{
				if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), unk_0x57240623C1BC6E88(iVar0, 1)) > 900f)
					{
						func_28(&(Local_128[unk_0xCA1D9459B2CC7619() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			if (!func_36(iParam0, 1630799643))
			{
				if (func_38(iParam0))
				{
					unk_0xC62C6BBB860531B7(iVar0, func_37(iParam0), -1, 0);
				}
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (func_33(Local_128[unk_0xCA1D9459B2CC7619() /*8*/].f_1[iParam0], 4))
			{
				if (func_38(iParam0))
				{
					unk_0x15848523A8959DBC(iVar0);
				}
				if (!func_36(iParam0, 1435919172))
				{
					func_28(&(Local_128[unk_0xCA1D9459B2CC7619() /*8*/].f_1[iParam0]), 4);
					func_28(&(Local_128[unk_0xCA1D9459B2CC7619() /*8*/].f_1[iParam0]), 64);
				}
			}
			break;
	}
}

int func_35(int iParam0)
{
	var uVar0;
	
	if (!unk_0x841F312D66362BF7(Local_101[iParam0]))
	{
		return 0;
	}
	uVar0 = unk_0xDE2767751C03729D(Local_101[iParam0]);
	if (unk_0xA929B2923D14E2F8(uVar0, 0))
	{
		return 0;
	}
	if (unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		return 0;
	}
	if (unk_0x1B30FA4AAC96F398(unk_0x17B5CC8A8615737D()))
	{
		return 1;
	}
	if (unk_0x42B260AC2C6CA4ED(unk_0xBE369BE1BC57A796(), iVar0))
	{
		return 1;
	}
	if (unk_0x5ADC20A7C6AB8336(unk_0xBE369BE1BC57A796(), iVar0))
	{
		return 1;
	}
	if (unk_0xB7A628320EFF8E47(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), unk_0x57240623C1BC6E88(iVar0, 1)) <= 64f)
	{
		return 1;
	}
	return 0;
}

int func_36(int iParam0, int iParam1)
{
	var uVar0;
	
	if (!unk_0x841F312D66362BF7(Local_101[iParam0]))
	{
		return 1;
	}
	uVar0 = unk_0xDE2767751C03729D(Local_101[iParam0]);
	if (unk_0xA929B2923D14E2F8(uVar0, 0))
	{
		return 1;
	}
	if (unk_0x1F8F07D86DA1A701(iVar0, iParam1) != 1 && unk_0x1F8F07D86DA1A701(iVar0, iParam1) != 0)
	{
		return 0;
	}
	return 1;
}

var func_37(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	float fVar3;
	float fVar4;
	
	fVar3 = 1E+11f;
	iVar0 = 0;
	while (iVar0 < unk_0xCF8627766CD5D4CE())
	{
		if (unk_0x5877B93374C85567(unk_0x62C65E3042052191(iVar0)))
		{
			uVar2 = unk_0xDF7CE83326F434E9(unk_0xD878F413B7BB4895(unk_0x62C65E3042052191(iVar0)));
			if (!unk_0xA929B2923D14E2F8(uVar2, 0))
			{
				fVar4 = unk_0xB7A628320EFF8E47(unk_0x57240623C1BC6E88(iVar2, 1), unk_0x57240623C1BC6E88(unk_0x03981D6F4893D7D0(Local_101[iParam0]), 1));
				if (fVar4 < fVar3)
				{
					uVar1 = iVar2;
					fVar3 = fVar4;
				}
			}
		}
		iVar0++;
	}
	return uVar1;
}

int func_38(int iParam0)
{
	var uVar0;
	
	if (!unk_0x841F312D66362BF7(Local_101[iParam0]))
	{
		return 0;
	}
	uVar0 = unk_0xDE2767751C03729D(Local_101[iParam0]);
	if (unk_0xA929B2923D14E2F8(uVar0, 0))
	{
		return 0;
	}
	if (!unk_0xC38F0FBE1914783C(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_39(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_55(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_2621441 = 1;
	return func_40(sParam2, iParam3, 0);
}

int func_40(char* sParam0, int iParam1, bool bParam2)
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
					func_54();
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
		if (func_53(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_52();
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
				func_45();
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
				if (func_44())
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
			if (func_43())
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
			func_42();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_41();
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
		func_54();
	}
	return 0;
}

void func_41()
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

void func_42()
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

int func_43()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_44()
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

void func_45()
{
	if (func_51(14))
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
		Global_14443 = func_46();
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

var func_46()
{
	func_47();
	return Global_101700.f_2095.f_539.f_3549;
}

void func_47()
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
	{
		if (func_50(Global_101700.f_2095.f_539.f_3549) != unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()))
		{
			iVar0 = func_49(unk_0x17B5CC8A8615737D());
			if (func_48(iVar0) && (!func_51(14) || Global_100652))
			{
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_48(Global_101700.f_2095.f_539.f_3549))
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

bool func_48(int iParam0)
{
	return iParam0 < 3;
}

int func_49(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x23E9113C762466ED(uParam0))
	{
		iVar1 = unk_0x0324EEB10F81965F(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_50(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_50(int iParam0)
{
	if (func_48(iParam0))
	{
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_51(int iParam0)
{
	return Global_35781 == iParam0;
}

void func_52()
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

bool func_53(int iParam0, int iParam1)
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

void func_54()
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

void func_55(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = uParam5;
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

void func_56(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69702)
	{
		if (!unk_0xCA41A00932714525(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xFB616ABA635A95B3(uParam2, 0);
			}
			else
			{
				unk_0xFB616ABA635A95B3(uParam2, 1);
			}
		}
		if (!unk_0xCA41A00932714525(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x8E601051A3FDE8ED(uParam2, 0);
			}
			else
			{
				unk_0x8E601051A3FDE8ED(uParam2, 1);
			}
		}
	}
}

bool func_57(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_58()
{
	if (!unk_0x9F746898F7881612(joaat("s_m_y_marine_01")))
	{
		return 0;
	}
	if (!unk_0x9F746898F7881612(joaat("lazer")))
	{
		return 0;
	}
	if (!unk_0x9F746898F7881612(joaat("s_m_y_pilot_01")))
	{
		return 0;
	}
	return 1;
}

void func_59(var uParam0, int iParam1)
{
	func_60(uParam0, iParam1);
}

void func_60(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_61()
{
	return unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_39.f_18, 0);
}

int func_62(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_63(iParam0))
		{
			return 1;
		}
	}
	if (Global_1591201[iParam0 /*602*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_63(int iParam0)
{
	return func_64(iParam0);
}

bool func_64(int iParam0)
{
	return unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_13.f_1, 0);
}

void func_65()
{
	unk_0xE1324F59713746FA(joaat("s_m_y_marine_01"));
	unk_0xE1324F59713746FA(joaat("lazer"));
	unk_0xE1324F59713746FA(joaat("s_m_y_pilot_01"));
}

int func_66()
{
	int iVar0;
	
	switch (Local_101.f_19)
	{
		case 0:
			if (func_86())
			{
				Local_101.f_19 = 1;
			}
			break;
		
		case 1:
			if (func_85())
			{
				Local_101.f_19 = 2;
			}
			break;
		
		case 2:
			if (func_62(unk_0xBE369BE1BC57A796(), 1) || func_61())
			{
				func_59(&(Local_101.f_20), 1);
				Local_101.f_19 = 3;
			}
			else if (func_83())
			{
				func_59(&(Local_101.f_20), 1);
				Local_101.f_19 = 3;
			}
			break;
		
		case 3:
			if (!func_62(unk_0xBE369BE1BC57A796(), 1) && !func_61())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_80(iVar0);
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 < 3)
				{
					func_69(iVar0);
					iVar0++;
				}
			}
			if (func_68())
			{
				Local_101.f_19 = 4;
			}
			break;
		
		case 4:
			func_67();
			return 1;
			break;
	}
	return 0;
}

void func_67()
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x841F312D66362BF7(Local_101[iVar0]))
		{
			uVar1 = unk_0xDE2767751C03729D(Local_101[iVar0]);
			if (!unk_0xA929B2923D14E2F8(uVar1, 0))
			{
				unk_0x6500ADB01E821BC0(&iVar1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x841F312D66362BF7(Local_101.f_3[iVar0 /*5*/].f_1))
		{
			iVar1 = unk_0xDE2767751C03729D(Local_101.f_3[iVar0 /*5*/].f_1);
			if (!unk_0xA929B2923D14E2F8(iVar1, 0))
			{
				unk_0x6500ADB01E821BC0(&iVar1);
			}
		}
		if (unk_0x841F312D66362BF7(Local_101.f_3[iVar0 /*5*/]))
		{
			uVar2 = unk_0xC7C67E717B20DA89(Local_101.f_3[iVar0 /*5*/]);
			if (!unk_0xA929B2923D14E2F8(uVar2, 0))
			{
				unk_0x921CF98C637B0043(&iVar2);
			}
		}
		iVar0++;
	}
}

int func_68()
{
	if (unk_0x22381E1DB54373A4() > 1)
	{
		return 0;
	}
	if (unk_0xB7A628320EFF8E47(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 0), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
	{
		return 1;
	}
	return 0;
}

void func_69(int iParam0)
{
	var uVar0;
	struct<3> Var1;
	var uVar4;
	struct<3> Var5;
	var uVar8;
	
	if (Local_101.f_3[iParam0 /*5*/].f_2 > 2)
	{
		if (unk_0x841F312D66362BF7(Local_101.f_3[iParam0 /*5*/].f_1))
		{
			if (!unk_0xA929B2923D14E2F8(unk_0xDE2767751C03729D(Local_101.f_3[iParam0 /*5*/].f_1), 0))
			{
				uVar0 = unk_0xDE2767751C03729D(Local_101.f_3[iParam0 /*5*/].f_1);
				Var1 = { unk_0x57240623C1BC6E88(uVar0, 1) };
				if (Var1.f_2 <= -150f)
				{
					unk_0x6500ADB01E821BC0(&iVar0);
					if (unk_0x841F312D66362BF7(Local_101.f_3[iParam0 /*5*/]))
					{
						if (!unk_0xA929B2923D14E2F8(unk_0xC7C67E717B20DA89(Local_101.f_3[iParam0 /*5*/]), 0))
						{
							uVar4 = unk_0xC7C67E717B20DA89(Local_101.f_3[iParam0 /*5*/]);
							unk_0x921CF98C637B0043(&uVar4);
						}
					}
				}
			}
		}
	}
	switch (Local_101.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (func_79(iParam0, 16))
			{
				Local_101.f_3[iParam0 /*5*/].f_4 = -1;
				Local_101.f_3[iParam0 /*5*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (func_77(iParam0))
			{
				Local_101.f_3[iParam0 /*5*/].f_2 = 2;
			}
			break;
		
		case 2:
			Var5 = { func_76(iParam0) };
			if (!func_75(Var5))
			{
				if (!unk_0x905279B0A283D24D(Var5, 20f) && !unk_0xF7E1BD8196545EE3(Var5, 20f))
				{
					if (func_72(Var5, unk_0x638527C9799F2AE4(unk_0xDF7CE83326F434E9(Local_101.f_3[iParam0 /*5*/].f_4)), iParam0))
					{
						Local_101.f_3[iParam0 /*5*/].f_2 = 3;
					}
				}
			}
			break;
		
		case 3:
			if (func_79(iParam0, 2))
			{
				Local_101.f_3[iParam0 /*5*/].f_2 = 4;
			}
			break;
		
		case 4:
			uVar8 = unk_0xDF7CE83326F434E9(Local_101.f_3[iParam0 /*5*/].f_4);
			if (!unk_0x23E9113C762466ED(uVar8))
			{
				Local_101.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (unk_0xA929B2923D14E2F8(uVar8, 0))
			{
				Local_101.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (unk_0xE40FC0529CC75B0F(iVar8) || unk_0x8EC3C2BC25ED8ECA(iVar8))
			{
				if (func_71(unk_0x60604E51E30D25B8(iVar8, 0)))
				{
					Local_101.f_3[iParam0 /*5*/].f_2 = 5;
				}
			}
			break;
		
		case 5:
			if (func_79(iParam0, 8))
			{
				Local_101.f_3[iParam0 /*5*/].f_2 = 6;
				Local_101.f_3[iParam0 /*5*/].f_4 = -1;
			}
			break;
		
		case 6:
			if (!func_70(iParam0, 16))
			{
				Local_101.f_3[iParam0 /*5*/].f_2 = 0;
			}
			if (func_77(iParam0))
			{
				Local_101.f_3[iParam0 /*5*/].f_2 = 3;
			}
			break;
	}
}

int func_70(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0xCF8627766CD5D4CE())
	{
		if (unk_0x5877B93374C85567(unk_0x62C65E3042052191(iVar0)))
		{
			if (func_33(Local_128[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_71(int iParam0)
{
	if (unk_0x23E9113C762466ED(uParam0))
	{
		if (unk_0xA929B2923D14E2F8(uParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x45CD66F0A131E554(iParam0, 0))
		{
			if (!unk_0x03767DFC5EE2B0C6(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_72(struct<3> Param0, var uParam3, int iParam4)
{
	int iVar0;
	
	if (!unk_0x415DF132F15085E8())
	{
		return 1;
	}
	iVar0 = 1;
	if (!unk_0x841F312D66362BF7(Local_101.f_3[iParam4 /*5*/]))
	{
		if (!func_74(&(Local_101.f_3[iParam4 /*5*/]), joaat("lazer"), Param0, uParam3, 1, 1, 1, 0, 1, 1, 0))
		{
			iVar0 = 0;
		}
		else
		{
			unk_0x2F18827C60FB4AD8(unk_0xC7C67E717B20DA89(Local_101.f_3[iParam4 /*5*/]), 3);
		}
	}
	if (unk_0x841F312D66362BF7(Local_101.f_3[iParam4 /*5*/]))
	{
		if (!unk_0x841F312D66362BF7(Local_101.f_3[iParam4 /*5*/].f_1))
		{
			if (!func_73(&(Local_101.f_3[iParam4 /*5*/].f_1), Local_101.f_3[iParam4 /*5*/], 29, joaat("s_m_y_pilot_01"), -1, 1, 1, 1))
			{
				iVar0 = 0;
			}
			else
			{
				unk_0x9E087EF1619B5C7B(unk_0xDE2767751C03729D(Local_101.f_3[iParam4 /*5*/].f_1), joaat("vehicle_weapon_space_rocket"));
				unk_0x6F2C1CD778FB751C(unk_0xDE2767751C03729D(Local_101.f_3[iParam4 /*5*/].f_1), 0);
			}
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_73(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x2357075D7B96D56A(1))
	{
		return 0;
	}
	if (!unk_0x49C2DB27EDED0049(uParam1))
	{
		return 0;
	}
	if (!unk_0x45CD66F0A131E554(unk_0xC7C67E717B20DA89(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x60A7E0316C35C19D(unk_0x3FBC0964EB7878AF(unk_0xC7C67E717B20DA89(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0x49C2DB27EDED0049(*uParam0))
	{
		unk_0xBDE4C59FD939CE4E(unk_0xDE2767751C03729D(*uParam0), iParam7);
		if (unk_0x04DB71A22837F85C(unk_0xDE2767751C03729D(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xF24AAD892C8B4AC6(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_74(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12)
{
	var uVar0;
	
	if (!unk_0x54EBD52F64A07B00(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0x0668B21A0C3A4821(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0x692A2891A2BA7352(iParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0x90C414D950E11ED7(uVar0);
	if (unk_0x49C2DB27EDED0049(*uParam0))
	{
		unk_0xBDE4C59FD939CE4E(uVar0, iParam10);
		if (unk_0x04DB71A22837F85C(uVar0))
		{
			if (bParam8)
			{
				unk_0xF24AAD892C8B4AC6(*uParam0, 1);
			}
			else
			{
				unk_0xF24AAD892C8B4AC6(*uParam0, 0);
			}
		}
		unk_0xBE993A95A7771E1E(uVar0, iParam9);
		unk_0xBF95E912FF7B9A12(uVar0, 1);
		if (bParam12)
		{
			unk_0x07D85C47233917C3(uVar0);
			unk_0x800D9F6E9FDC9680(uVar0, 5, 5, 1f);
		}
		return 1;
	}
	return 0;
}

int func_75(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_76(int iParam0)
{
	var uVar0;
	struct<3> Var1;
	
	uVar0 = unk_0xDF7CE83326F434E9(Local_101.f_3[iParam0 /*5*/].f_4);
	if (unk_0xA929B2923D14E2F8(uVar0, 0))
	{
		return 0f, 0f, 0f;
	}
	Var1 = { unk_0x3CE07141081BBC2B(unk_0x57240623C1BC6E88(iVar0, 1), unk_0x638527C9799F2AE4(iVar0), 0f, -250f, (40f * unk_0xBBDA792448DB5A89(iParam0))) };
	if (Var1.f_2 < 100f)
	{
		Var1.f_2 = 100f;
	}
	return Var1;
}

int func_77(int iParam0)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	iVar0 = 0;
	while (iVar0 < unk_0xCF8627766CD5D4CE())
	{
		if (unk_0x5877B93374C85567(unk_0x62C65E3042052191(iVar0)))
		{
			uVar1 = unk_0xDF7CE83326F434E9(unk_0xD878F413B7BB4895(unk_0x62C65E3042052191(iVar0)));
			if (!func_78(unk_0xD878F413B7BB4895(unk_0x62C65E3042052191(iVar0))))
			{
				if (unk_0xE40FC0529CC75B0F(uVar1) || unk_0x8EC3C2BC25ED8ECA(iVar1))
				{
					if (unk_0xA54996763FD89E65(unk_0xD878F413B7BB4895(unk_0x62C65E3042052191(iVar0))) >= 4)
					{
						Var2 = { unk_0x57240623C1BC6E88(iVar1, 0) };
						if (func_10(Var2, 3, 1000, 0) && Var2.f_2 > 90f)
						{
							Local_101.f_3[iParam0 /*5*/].f_4 = unk_0xD878F413B7BB4895(unk_0x62C65E3042052191(iVar0));
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_78(int iParam0)
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	uVar0 = unk_0xDF7CE83326F434E9(iParam0);
	if (!unk_0x23E9113C762466ED(uVar0))
	{
		return 1;
	}
	if (unk_0xA929B2923D14E2F8(uVar0, 0))
	{
		return 1;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uVar2 = unk_0xDF7CE83326F434E9(Local_101.f_3[iVar1 /*5*/].f_4);
		if (unk_0x23E9113C762466ED(uVar2))
		{
			if (iParam0 == Local_101.f_3[iVar1 /*5*/].f_4)
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_79(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0xCF8627766CD5D4CE())
	{
		if (unk_0x5877B93374C85567(unk_0x62C65E3042052191(iVar0)))
		{
			if (!func_33(Local_128[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_80(int iParam0)
{
	switch (Local_101.f_21[iParam0])
	{
		case 0:
			if (func_82(iParam0, 64))
			{
				Local_101.f_21[iParam0] = 1;
			}
			break;
		
		case 1:
			if (func_81(iParam0, 1))
			{
				Local_101.f_21[iParam0] = 2;
			}
			break;
		
		case 2:
			if (func_81(iParam0, 2))
			{
				Local_101.f_21[iParam0] = 3;
			}
			break;
		
		case 3:
			if (func_82(iParam0, 4))
			{
				Local_101.f_21[iParam0] = 4;
			}
			break;
		
		case 4:
			if (func_81(iParam0, 8))
			{
				Local_101.f_21[iParam0] = 5;
			}
			if (!func_81(iParam0, 1))
			{
				Local_101.f_21[iParam0] = 7;
			}
			if (func_81(iParam0, 16))
			{
				Local_101.f_21[iParam0] = 6;
			}
			break;
		
		case 5:
			if (func_81(iParam0, 16))
			{
				Local_101.f_21[iParam0] = 6;
			}
			if (!func_81(iParam0, 1))
			{
				Local_101.f_21[iParam0] = 7;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!func_81(iParam0, 4))
			{
				Local_101.f_21[iParam0] = 0;
			}
			break;
	}
}

int func_81(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0xCF8627766CD5D4CE())
	{
		if (unk_0x5877B93374C85567(unk_0x62C65E3042052191(iVar0)))
		{
			if (func_33(Local_128[iVar0 /*8*/].f_1[iParam0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_82(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0xCF8627766CD5D4CE())
	{
		if (unk_0x5877B93374C85567(unk_0x62C65E3042052191(iVar0)))
		{
			if (!func_33(Local_128[iVar0 /*8*/].f_1[iParam0], iParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_83()
{
	int iVar0;
	
	if (!unk_0x415DF132F15085E8())
	{
		return 1;
	}
	iVar0 = 1;
	if (!func_84(&(Local_101[0]), 29, joaat("s_m_y_marine_01"), -2295.587f, 3377.288f, 30.0601f, 55.8214f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (unk_0x841F312D66362BF7(Local_101[0]))
	{
		unk_0xC1B7B5C6FDC0755B(unk_0xDE2767751C03729D(Local_101[0]), joaat("weapon_assaultrifle"), 200, 1, 1);
	}
	if (!func_84(&(Local_101[1]), 29, joaat("s_m_y_marine_01"), -1597.432f, 2808.987f, 16.1385f, 229.437f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (unk_0x841F312D66362BF7(Local_101[1]))
	{
		unk_0xC1B7B5C6FDC0755B(unk_0xDE2767751C03729D(Local_101[1]), joaat("weapon_assaultrifle"), 200, 1, 1);
	}
	return iVar0;
}

int func_84(var uParam0, int iParam1, int iParam2, struct<3> Param3, float fParam6, bool bParam7, int iParam8, int iParam9)
{
	var uVar0;
	
	if (!unk_0x2357075D7B96D56A(1))
	{
		return 0;
	}
	uVar0 = unk_0x2AD5F4170F4ACBEB(iParam1, iParam2, Param3, fParam6, iParam8, bParam7);
	*uParam0 = unk_0x60A7E0316C35C19D(uVar0);
	if (unk_0x49C2DB27EDED0049(*uParam0))
	{
		unk_0xBDE4C59FD939CE4E(uVar0, iParam9);
		if (unk_0x04DB71A22837F85C(uVar0))
		{
			if (bParam7)
			{
				unk_0xF24AAD892C8B4AC6(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_85()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < unk_0xCF8627766CD5D4CE())
	{
		if (unk_0x5877B93374C85567(unk_0x62C65E3042052191(iVar1)))
		{
			if (!func_57(Local_128[iVar1 /*8*/], 2))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_86()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < unk_0xCF8627766CD5D4CE())
	{
		if (unk_0x5877B93374C85567(unk_0x62C65E3042052191(iVar1)))
		{
			if (!func_57(Local_128[iVar1 /*8*/], 1))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_87()
{
	bool bVar0;
	var uVar1;
	
	func_94(&bVar0, &uVar1);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315210 == 0)
	{
		if (!unk_0x63C468D583002D23())
		{
			return 1;
		}
	}
	if (func_93())
	{
		return 1;
	}
	if (Global_2454747)
	{
		return 1;
	}
	if (func_92())
	{
		return 1;
	}
	if (func_91(157))
	{
		if (!func_90())
		{
			return 1;
		}
	}
	if (func_91(155))
	{
		return 1;
	}
	if (!unk_0x6C119F3638AC7ABE())
	{
		return 1;
	}
	if (func_88() != 0)
	{
		if (unk_0x82F1A060D8F4583B(func_88()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_88()
{
	switch (func_89())
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

int func_89()
{
	return Global_25190;
}

bool func_90()
{
	return Global_2443134.f_577;
}

int func_91(int iParam0)
{
	if (unk_0x08E5392A79D45DEE(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_92()
{
	return Global_2452525;
}

bool func_93()
{
	return Global_2443134.f_572;
}

void func_94(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x45FF610AA845AFAA(1))
	{
		iVar1 = unk_0x93A2B1A9173BC03D(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x91015F07066D5841(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 381:
					func_95(iVar0);
					break;
				
				case 2:
					unk_0x91015F07066D5841(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 55)
					{
						*uParam0 = 1;
					}
					else if (Var4.f_2 == 32)
					{
						*uParam1 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_95(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x91015F07066D5841(1, iParam0, &Var0, 3))
	{
		if (func_97(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xDF7CE83326F434E9(Var0.f_1);
			if (unk_0x23E9113C762466ED(uVar3))
			{
				if (unk_0xFD0FE723227D5AB6(uVar3, 0))
				{
					uVar4 = unk_0x60604E51E30D25B8(uVar3, 0);
					if (unk_0x4AFDA497DA0BF602(uVar4, Var0.f_2) && unk_0x9A0AB9C5586EA71E())
					{
						if (func_96(uVar4, &bVar5))
						{
							unk_0x7DCEC4E83315DC12(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x921CF98C637B0043(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_96(int iParam0, var uParam1)
{
	if (unk_0x23E9113C762466ED(uParam0))
	{
		if (!unk_0xC26429B504BA534D(uParam0))
		{
			if (unk_0xFB2400809D8DC8C7(uParam0))
			{
				if (!unk_0x3B548F49528B5FA7(unk_0x0324EEB10F81965F(uParam0)))
				{
					unk_0xF0F77C99098F999B(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x45CA7F42CA715849(uParam0, 0))
		{
			if (unk_0xC38F0FBE1914783C(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_97(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (unk_0x7268A1112372AA44(uParam0))
		{
			if (bParam1)
			{
				if (!unk_0xCF7855B965948E97(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2433125.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_98()
{
	if (unk_0xA2D6CF086A2F622F(false) != 5)
	{
		if (func_105(5, 0, 1))
		{
			if (unk_0x4659AB0B12C8B30D(0) <= 5)
			{
				unk_0x06EC4FFE0DCCA716(5);
			}
		}
	}
	if (unk_0x71726B5B622E1778(false) != 3)
	{
		if (func_99(3, 0, 1))
		{
			if (unk_0xA7DAE2A186E0ACC3(0) <= 3)
			{
				unk_0x43FD798CD0523B1F(3);
			}
		}
	}
}

bool func_99(int iParam0, bool bParam1, bool bParam2)
{
	return func_100(1, iParam0, 1, bParam1, bParam2);
}

int func_100(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x48B8265059381CD0(Global_1364290, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_104(iParam0) - func_103(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_103(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_104(iParam0) - func_102(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_103(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_104(iParam0) - func_103(iParam0, 1));
		}
		if (!bParam4 && Global_1591201[unk_0xBE369BE1BC57A796() /*602*/] != 3)
		{
			iVar1 = (iVar1 - func_101(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_101(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_102(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1364290.f_1;
			break;
		
		case 1:
			return Global_1364290.f_2;
			break;
		
		case 2:
			return Global_1364290.f_3;
			break;
	}
	return 0;
}

int func_103(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xBE369BE1BC57A796();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x9A0AB9C5586EA71E())
			{
				return Global_2421664[iVar0 /*358*/].f_212;
			}
			else
			{
				return unk_0xA2D6CF086A2F622F(!bParam1);
			}
			break;
		
		case 1:
			if (!unk_0x9A0AB9C5586EA71E())
			{
				return Global_2421664[iVar0 /*358*/].f_213;
			}
			else
			{
				return unk_0x71726B5B622E1778(!bParam1);
			}
			break;
		
		case 2:
			if (!unk_0x9A0AB9C5586EA71E())
			{
				return Global_2421664[iVar0 /*358*/].f_214;
			}
			else
			{
				return unk_0xC124B46B968EA962(!bParam1);
			}
			break;
	}
	return 0;
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1364298;
			break;
		
		case 1:
			return Global_1364299;
			break;
		
		case 2:
			return Global_1364300;
			break;
	}
	return 0;
}

bool func_105(int iParam0, bool bParam1, bool bParam2)
{
	return func_100(0, iParam0, 1, bParam1, bParam2);
}

void func_106()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_107()
{
	int iVar0;
	
	if (unk_0x63C468D583002D23())
	{
		if (unk_0x415DF132F15085E8())
		{
			if (func_68())
			{
				func_67();
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xA3794949321E107C(Local_385.f_172[iVar0]))
		{
			unk_0x020DF7300725ECAB(&(Local_385.f_172[iVar0]));
		}
		iVar0++;
	}
	func_109();
	func_108();
}

void func_108()
{
	unk_0x921053BAF754303D();
}

void func_109()
{
	if (!Local_385.f_176)
	{
		return;
	}
	if (unk_0x9F746898F7881612(joaat("s_m_y_marine_01")))
	{
		unk_0x924CDE68BA2ED3BA(joaat("s_m_y_marine_01"));
	}
	if (unk_0x9F746898F7881612(joaat("lazer")))
	{
		unk_0x924CDE68BA2ED3BA(joaat("lazer"));
	}
	if (unk_0x9F746898F7881612(joaat("s_m_y_pilot_01")))
	{
		unk_0x924CDE68BA2ED3BA(joaat("s_m_y_pilot_01"));
	}
}

void func_110(struct<20> Param0)
{
	func_114(func_115(Param0.f_0), Param0);
	func_112(0, -1, 0);
	unk_0x06EC4FFE0DCCA716(5);
	unk_0x43FD798CD0523B1F(3);
	unk_0xB5EAF11213E48C1C(&Local_101, 27);
	unk_0x0C3BA36587E6FBEE(&Local_128, 257);
	unk_0xAA78C60F0BF0F8D4(0);
	if (!func_111())
	{
		func_107();
	}
	if (unk_0xBCA819F9975BEDFA(3))
	{
		func_107();
	}
}

int func_111()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x63C468D583002D23())
		{
			return 0;
		}
		if (unk_0xF8A920554B0F81A7())
		{
			return 1;
		}
		if (func_93())
		{
			return 0;
		}
		if (func_91(155))
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

int func_112(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xCC130A646D137F0D();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_108();
			}
			else
			{
				return 0;
			}
		}
		if (!func_113())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x63C468D583002D23())
				{
					if (!bParam2)
					{
						func_108();
					}
					else
					{
						return 0;
					}
				}
				if (func_93())
				{
					if (!bParam2)
					{
						func_108();
					}
					else
					{
						return 0;
					}
				}
				if (func_91(155))
				{
					if (!bParam2)
					{
						func_108();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x9AD8CE0019487D7C())
			{
				if (!bParam2)
				{
					func_108();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xCC130A646D137F0D();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x63C468D583002D23())
		{
			if (!bParam2)
			{
				func_108();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x9AD8CE0019487D7C())
	{
		if (!bParam2)
		{
			func_108();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_113()
{
	return Global_1315210;
}

void func_114(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x63C468D583002D23())
	{
		func_108();
	}
	unk_0x181A13B993F735EB(uParam0, 0, Param1.f_16);
}

int func_115(int iParam0)
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
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
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
		
		case 106:
			return 32;
		
		case 107:
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
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 108:
			return 32;
		
		case 109:
			return 32;
		
		case 113:
			return 32;
		
		case 111:
			return 32;
		
		case 112:
			return 32;
		
		case 116:
			return 32;
		
		case 117:
			return 32;
		
		case 114:
			return 32;
		
		case 115:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 32;
		
		case 124:
			return 2;
		
		case 129:
			return 1;
		
		case 125:
			return 2;
		
		case 126:
			return 4;
		
		case 127:
			return 2;
		
		case 128:
			return 2;
		
		case 110:
			return 1;
		
		case 130:
			return 2;
		
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
			return 0;
		
		case 140:
			return 1;
		
		case 137:
			return 4;
		
		case 138:
			return 16;
		
		case 139:
			return 32;
		
		default:
	}
	return 0;
}

