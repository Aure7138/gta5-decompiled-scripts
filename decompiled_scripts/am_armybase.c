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
	var uLocal_58 = 8;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 2;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 8;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 8;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	float fLocal_91 = 0f;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	float fLocal_98 = 0f;
	var uLocal_99 = 0;
	struct<4> Local_100 = { 2, 0, 0, 3 } ;
	var uLocal_104 = 0;
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
	var uLocal_121 = 2;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 2;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	struct<8> Local_127[32];
	struct<178> Local_384 = { 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0 } ;
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
	fLocal_91 = ((0.05f + 0.275f) - 0.01f);
	fLocal_94 = -0.05f;
	fLocal_95 = 0.92f;
	fLocal_96 = 1.94f;
	fLocal_97 = 2.99f;
	fLocal_98 = 3.7f;
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		func_108(ScriptParam_0);
	}
	else
	{
		func_105();
	}
	while (true)
	{
		func_104();
		func_96();
		if (func_85() || unk_0xE21B8C41C187AA64())
		{
			func_105();
		}
		if (unk_0xBBAE3E0C60A8AD4B())
		{
			if (func_21())
			{
				func_105();
			}
			if (((((((!Global_1573480 && !func_20(2)) && !func_17(unk_0xA34E7C2A5118D638(), 0)) && !unk_0xA8D4B6BDCF6DE72B()) && unk_0x0332C5816E3E66D5(unk_0xA34E7C2A5118D638())) && !func_15(unk_0xA34E7C2A5118D638())) && !func_13(func_14(unk_0xA34E7C2A5118D638()))) && !func_11(unk_0xA34E7C2A5118D638(), 146))
			{
				if (func_10(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), 3, 1000, 0) || func_9(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), 1000))
				{
					if (!unk_0xDCC86F723E82125E(Global_2458121.f_4407, 0))
					{
						if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
						{
							if (unk_0xBAD11A89BAC646B5(unk_0xC8B93D94F8954288()) || unk_0x0AE990D4D01D6BFE(unk_0xC8B93D94F8954288()))
							{
								if (func_10(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), 3, 0, 0) || func_9(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), 0))
								{
									if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) < 4)
									{
										unk_0xBD8840D22EA3ED01(unk_0xA34E7C2A5118D638(), 36, (unk_0x2F4C7F10EAAF08F7(4) - unk_0x2F4C7F10EAAF08F7(unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()))));
									}
									else
									{
										unk_0xD4E09A618C330C32(unk_0xA34E7C2A5118D638());
									}
								}
								else if (!func_8(&(Local_384.f_3)))
								{
									func_5(&(Local_384.f_3));
								}
								else if (func_2(&(Local_384.f_3)) > 20f || Local_384.f_177)
								{
									if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) < 4)
									{
										unk_0xBD8840D22EA3ED01(unk_0xA34E7C2A5118D638(), 36, (unk_0x2F4C7F10EAAF08F7(4) - unk_0x2F4C7F10EAAF08F7(unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()))));
									}
									else
									{
										unk_0xD4E09A618C330C32(unk_0xA34E7C2A5118D638());
									}
								}
							}
							else if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) < 4)
							{
								unk_0xBD8840D22EA3ED01(unk_0xA34E7C2A5118D638(), 36, (unk_0x2F4C7F10EAAF08F7(4) - unk_0x2F4C7F10EAAF08F7(unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()))));
							}
							else
							{
								unk_0xD4E09A618C330C32(unk_0xA34E7C2A5118D638());
							}
						}
						else
						{
							if (func_8(&(Local_384.f_3)))
							{
								func_1(&(Local_384.f_3));
							}
							if (Local_384.f_177)
							{
								Local_384.f_177 = 0;
							}
						}
					}
					else if (!Local_384.f_177)
					{
						Local_384.f_177 = 1;
					}
				}
				else if (Local_384.f_177)
				{
					Local_384.f_177 = 0;
				}
			}
		}
		else
		{
			func_105();
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
			return (func_3(unk_0xDCC86F723E82125E(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_3(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x693EBB4F13506457()) / 1000f);
	}
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		iVar0 = unk_0x2AA13A84EE2D3B24();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x693EBB4F13506457()) / 1000f);
}

bool func_4(var uParam0)
{
	return unk_0xDCC86F723E82125E(*uParam0, 2);
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
	uParam0->f_1 = (func_3(unk_0xDCC86F723E82125E(*uParam0, 4)) - fParam1);
	unk_0x59A0729D503ED758(uParam0, 1);
	unk_0x77621132305B133B(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_8(var uParam0)
{
	return unk_0xDCC86F723E82125E(*uParam0, 1);
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
		if (unk_0x6910AF369EAB6935(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], iVar110, 1))
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
		if (unk_0x6910AF369EAB6935(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], iVar110, 1))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

int func_11(int iParam0, int iParam1)
{
	if (Global_1608811[iParam0 /*109*/] == iParam1)
	{
		return func_12(iParam0);
	}
	return 0;
}

int func_12(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xDCC86F723E82125E(Global_1608811[iVar0 /*109*/].f_1, 0);
	}
	return 0;
}

int func_13(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_12(unk_0xA34E7C2A5118D638()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_14(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1608811[iVar0 /*109*/];
	}
	return -1;
}

int func_15(int iParam0)
{
	if (func_17(iParam0, 0))
	{
		return 1;
	}
	if (func_16())
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

bool func_16()
{
	return unk_0xDCC86F723E82125E(Global_2359301, 3);
}

bool func_17(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xA34E7C2A5118D638())
	{
		bVar0 = func_18(-1, 0) == 8;
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

int func_18(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
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

int func_19()
{
	return Global_1312746;
}

bool func_20(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_1573479, iParam0);
}

int func_21()
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x736DBE187CFCC863())
	{
		if (func_64())
		{
			iVar0 = 1;
		}
	}
	if (func_22())
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_22()
{
	int iVar0;
	
	switch (Local_384.f_6)
	{
		case 0:
			func_63();
			if ((func_60(unk_0xA34E7C2A5118D638(), 1) && func_59()) || func_57(unk_0xA34E7C2A5118D638()) == 159)
			{
				unk_0xB7FAA1C591A4664F(joaat("rhino"), 1);
			}
			func_55(&(Local_127[unk_0x935FA14EDA695A82() /*8*/]), 1);
			Local_384.f_176 = 1;
			Local_384.f_6 = 1;
			break;
		
		case 1:
			if (func_54())
			{
				func_55(&(Local_127[unk_0x935FA14EDA695A82() /*8*/]), 2);
				Local_384.f_6 = 2;
			}
			break;
		
		case 2:
			if (func_53(Local_100.f_20, 1))
			{
				Local_384.f_6 = 3;
			}
			break;
		
		case 3:
			if (!func_60(unk_0xA34E7C2A5118D638(), 1) && !func_59())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_30(iVar0);
					iVar0++;
				}
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				func_23(iVar0);
				iVar0++;
			}
			if (unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
			{
				Local_384.f_6 = 4;
			}
			break;
		
		case 4:
			if ((func_60(unk_0xA34E7C2A5118D638(), 1) && func_59()) || func_57(unk_0xA34E7C2A5118D638()) == 159)
			{
				unk_0xB7FAA1C591A4664F(joaat("rhino"), 0);
			}
			return 1;
			break;
	}
	return 0;
}

void func_23(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (Local_100.f_3[iParam0 /*5*/].f_2 > 2 && unk_0x691BFDC1728FD714(Local_100.f_3[iParam0 /*5*/]))
	{
		if (unk_0xB6900B8CB0ABBD2B(unk_0xF8A3C382964380BC(Local_100.f_3[iParam0 /*5*/])))
		{
			if (unk_0x6B4865E08E90ACC5(Local_384.f_172[iParam0]))
			{
				unk_0x5356E82C1E5E0C44(&(Local_384.f_172[iParam0]));
			}
		}
		else if (!unk_0x6B4865E08E90ACC5(Local_384.f_172[iParam0]) && unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) >= 2)
		{
			Local_384.f_172[iParam0] = unk_0x361E437CE4AD5532(unk_0x6622BC2FDC6DBB0E(Local_100.f_3[iParam0 /*5*/]));
			unk_0x32546F91F646B246(Local_384.f_172[iParam0], 1);
		}
	}
	else if (unk_0x6B4865E08E90ACC5(Local_384.f_172[iParam0]))
	{
		unk_0x5356E82C1E5E0C44(&(Local_384.f_172[iParam0]));
	}
	switch (Local_100.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (!func_29(Local_127[unk_0x935FA14EDA695A82() /*8*/].f_4[iParam0], 16))
			{
				Local_127[unk_0x935FA14EDA695A82() /*8*/].f_4[iParam0] = 0;
				func_28(&(Local_127[unk_0x935FA14EDA695A82() /*8*/].f_4[iParam0]), 16);
			}
			break;
		
		case 1:
			if (!func_29(Local_127[unk_0x935FA14EDA695A82() /*8*/].f_4[iParam0], 1))
			{
				if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
				{
					if (unk_0xBAD11A89BAC646B5(unk_0xC8B93D94F8954288()) || unk_0x0AE990D4D01D6BFE(unk_0xC8B93D94F8954288()))
					{
						if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) >= 4)
						{
							if (func_10(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), 3, 500, 0))
							{
								func_28(&(Local_127[unk_0x935FA14EDA695A82() /*8*/].f_4[iParam0]), 1);
							}
						}
					}
				}
			}
			break;
		
		case 2:
			break;
		
		case 3:
			if (!func_29(Local_127[unk_0x935FA14EDA695A82() /*8*/].f_4[iParam0], 2))
			{
				if (func_27(iParam0))
				{
					uVar2 = unk_0xCF4C00513A86E840(Local_100.f_3[iParam0 /*5*/].f_4);
					uVar0 = unk_0xA84D2F2B8688949A(Local_100.f_3[iParam0 /*5*/].f_1);
					uVar1 = unk_0xF8A3C382964380BC(Local_100.f_3[iParam0 /*5*/]);
					if (!unk_0xB6900B8CB0ABBD2B(uVar2))
					{
						if (unk_0xBAD11A89BAC646B5(uVar2))
						{
							uVar3 = unk_0x275BEBE583A163B5(uVar2, 0);
							if ((!unk_0xB6900B8CB0ABBD2B(uVar0) && !unk_0xB6900B8CB0ABBD2B(uVar1)) && !unk_0xB6900B8CB0ABBD2B(uVar3))
							{
								unk_0x0A066ABD54AB94B7(uVar0, uVar1, uVar3, uVar2, unk_0x44C17CCB85A88A1F(uVar2, 1), 6, 70f, -1f, 30f, 500, 50);
								unk_0xB5275E92FA56ACEF(uVar0, joaat("vehicle_weapon_space_rocket"));
								unk_0x5AF595E6257467FC(uVar0, 0);
							}
						}
					}
				}
				if (func_26(iParam0))
				{
					uVar0 = unk_0xA84D2F2B8688949A(Local_100.f_3[iParam0 /*5*/].f_1);
					iVar2 = unk_0xCF4C00513A86E840(Local_100.f_3[iParam0 /*5*/].f_4);
					if (!unk_0xB6900B8CB0ABBD2B(iVar2))
					{
						if (unk_0xBAD11A89BAC646B5(iVar2))
						{
							unk_0x8C32B6ADBF334AFA(uVar0, iVar2, unk_0x44C17CCB85A88A1F(iVar2, 1));
						}
					}
				}
				if (func_25(iParam0, 6))
				{
					func_28(&(Local_127[unk_0x935FA14EDA695A82() /*8*/].f_4[iParam0]), 2);
				}
			}
			break;
		
		case 4:
			break;
		
		case 5:
			if (!func_29(Local_127[unk_0x935FA14EDA695A82() /*8*/].f_4[iParam0], 8))
			{
				if (func_27(iParam0))
				{
					uVar0 = unk_0xA84D2F2B8688949A(Local_100.f_3[iParam0 /*5*/].f_1);
					uVar1 = unk_0xF8A3C382964380BC(Local_100.f_3[iParam0 /*5*/]);
					if (!unk_0xB6900B8CB0ABBD2B(uVar0) && !unk_0xB6900B8CB0ABBD2B(uVar1))
					{
						unk_0x0A066ABD54AB94B7(iVar0, iVar1, 0, 0, -2076.374f, 3112.294f, 33.13584f, 9, 70f, -1f, 30f, 500, 50);
					}
				}
				if (func_25(iParam0, 9))
				{
					func_28(&(Local_127[unk_0x935FA14EDA695A82() /*8*/].f_4[iParam0]), 8);
				}
			}
			break;
		
		case 6:
			if (unk_0x1BDB4A81F7EE9BE6(Local_100.f_3[iParam0 /*5*/]) || unk_0x1BDB4A81F7EE9BE6(Local_100.f_3[iParam0 /*5*/].f_1))
			{
				if (!unk_0x8EBAC9BC4005929D(unk_0x44C17CCB85A88A1F(unk_0x6622BC2FDC6DBB0E(Local_100.f_3[iParam0 /*5*/]), 0), 10f) && !unk_0xDBFEC51D9D70DAE8(unk_0x44C17CCB85A88A1F(unk_0x6622BC2FDC6DBB0E(Local_100.f_3[iParam0 /*5*/]), 0), 10f))
				{
					if (unk_0x691BFDC1728FD714(Local_100.f_3[iParam0 /*5*/].f_1) && unk_0xFEA25F5BCFDBD741(Local_100.f_3[iParam0 /*5*/].f_1))
					{
						uVar4 = unk_0x6622BC2FDC6DBB0E(Local_100.f_3[iParam0 /*5*/].f_1);
						unk_0xF13EBA3F84CEEEAD(&uVar4);
					}
					if (unk_0x691BFDC1728FD714(Local_100.f_3[iParam0 /*5*/]) && unk_0xFEA25F5BCFDBD741(Local_100.f_3[iParam0 /*5*/]))
					{
						uVar5 = unk_0x6622BC2FDC6DBB0E(Local_100.f_3[iParam0 /*5*/]);
						unk_0xF13EBA3F84CEEEAD(&uVar5);
					}
				}
			}
			else if (func_29(Local_127[unk_0x935FA14EDA695A82() /*8*/].f_4[iParam0], 16))
			{
				func_24(&(Local_127[unk_0x935FA14EDA695A82() /*8*/].f_4[iParam0]), 16);
			}
			break;
	}
}

void func_24(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_25(int iParam0, int iParam1)
{
	var uVar0;
	
	if (!unk_0x691BFDC1728FD714(Local_100.f_3[iParam0 /*5*/]))
	{
		return 1;
	}
	uVar0 = unk_0xF8A3C382964380BC(Local_100.f_3[iParam0 /*5*/]);
	if (unk_0xB6900B8CB0ABBD2B(uVar0))
	{
		return 1;
	}
	if (unk_0x7D1DDC63B4B417FA(iVar0) != iParam1)
	{
		return 0;
	}
	return 1;
}

int func_26(int iParam0)
{
	var uVar0;
	
	if (!unk_0x691BFDC1728FD714(Local_100.f_3[iParam0 /*5*/].f_1))
	{
		return 0;
	}
	uVar0 = unk_0xA84D2F2B8688949A(Local_100.f_3[iParam0 /*5*/].f_1);
	if (unk_0xB6900B8CB0ABBD2B(uVar0))
	{
		return 0;
	}
	if (!unk_0xFE7BCFB02217DCDF(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_27(int iParam0)
{
	var uVar0;
	
	if (!unk_0x691BFDC1728FD714(Local_100.f_3[iParam0 /*5*/]))
	{
		return 0;
	}
	uVar0 = unk_0xF8A3C382964380BC(Local_100.f_3[iParam0 /*5*/]);
	if (unk_0xB6900B8CB0ABBD2B(uVar0))
	{
		return 0;
	}
	if (!unk_0xFE7BCFB02217DCDF(iVar0))
	{
		return 0;
	}
	return 1;
}

void func_28(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_29(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_30(int iParam0)
{
	var uVar0;
	
	if (!unk_0x691BFDC1728FD714(Local_100[iParam0]))
	{
		return;
	}
	uVar0 = unk_0xA84D2F2B8688949A(Local_100[iParam0]);
	if (unk_0xB6900B8CB0ABBD2B(uVar0))
	{
		return;
	}
	switch (Local_100.f_21[iParam0])
	{
		case 0:
			if (!func_29(Local_127[unk_0x935FA14EDA695A82() /*8*/].f_1[iParam0], 64))
			{
				Local_127[unk_0x935FA14EDA695A82() /*8*/].f_1[iParam0] = 0;
				func_28(&(Local_127[unk_0x935FA14EDA695A82() /*8*/].f_1[iParam0]), 64);
			}
			break;
		
		case 1:
			if (!func_29(Local_127[unk_0x935FA14EDA695A82() /*8*/].f_1[iParam0], 1))
			{
				if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(iVar0, 1)) <= 900f)
					{
						func_28(&(Local_127[unk_0x935FA14EDA695A82() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 2:
			if (!func_29(Local_127[unk_0x935FA14EDA695A82() /*8*/].f_1[iParam0], 2) && unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(iVar0, 1)) <= 900f)
			{
				func_52(&(Local_384.f_7), 4, iVar0, "ARMY_Guard01", 0, 1);
				func_35(&(Local_384.f_7), "ARMYAUD", "ARMY_WRN1", 12, 0, 0, 0);
				func_28(&(Local_127[unk_0x935FA14EDA695A82() /*8*/].f_1[iParam0]), 2);
			}
			break;
		
		case 3:
			if (!func_29(Local_127[unk_0x935FA14EDA695A82() /*8*/].f_1[iParam0], 4))
			{
				if (func_34(iParam0))
				{
					unk_0x726676CF6AC20DCB(iVar0, func_33(iParam0), -1, 0);
				}
				if (func_32(iParam0, 1630799643))
				{
					func_28(&(Local_127[unk_0x935FA14EDA695A82() /*8*/].f_1[iParam0]), 4);
				}
			}
			break;
		
		case 4:
			if ((!func_29(Local_127[unk_0x935FA14EDA695A82() /*8*/].f_1[iParam0], 8) && unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), unk_0x44C17CCB85A88A1F(iVar0, 1)) <= 900f) && unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) < 1)
			{
				if (!func_8(&Local_384))
				{
					func_5(&Local_384);
				}
				if (func_2(&Local_384) >= 7f)
				{
					func_28(&(Local_127[unk_0x935FA14EDA695A82() /*8*/].f_1[iParam0]), 8);
					func_35(&(Local_384.f_7), "ARMYAUD", "ARMY_WRN1a", 12, 0, 0, 0);
				}
			}
			else if (func_8(&Local_384))
			{
				func_1(&Local_384);
			}
			if (!func_29(Local_127[unk_0x935FA14EDA695A82() /*8*/].f_1[iParam0], 16))
			{
				if (func_31(iParam0) && unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), unk_0x44C17CCB85A88A1F(iVar0, 1)) <= 900f)
				{
					func_28(&(Local_127[unk_0x935FA14EDA695A82() /*8*/].f_1[iParam0]), 16);
					unk_0xBD8840D22EA3ED01(unk_0xA34E7C2A5118D638(), 36, unk_0x2F4C7F10EAAF08F7(4));
				}
			}
			if (func_29(Local_127[unk_0x935FA14EDA695A82() /*8*/].f_1[iParam0], 1))
			{
				if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(iVar0, 1)) > 900f)
					{
						func_24(&(Local_127[unk_0x935FA14EDA695A82() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 5:
			if (!func_29(Local_127[unk_0x935FA14EDA695A82() /*8*/].f_1[iParam0], 16))
			{
				if (func_31(iParam0) && unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), unk_0x44C17CCB85A88A1F(iVar0, 1)) <= 900f)
				{
					func_28(&(Local_127[unk_0x935FA14EDA695A82() /*8*/].f_1[iParam0]), 16);
					unk_0xBD8840D22EA3ED01(unk_0xA34E7C2A5118D638(), 36, (unk_0x2F4C7F10EAAF08F7(4) - unk_0x2F4C7F10EAAF08F7(unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()))));
				}
			}
			if (func_29(Local_127[unk_0x935FA14EDA695A82() /*8*/].f_1[iParam0], 1))
			{
				if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(iVar0, 1)) > 900f)
					{
						func_24(&(Local_127[unk_0x935FA14EDA695A82() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			if (!func_32(iParam0, 1630799643))
			{
				if (func_34(iParam0))
				{
					unk_0x726676CF6AC20DCB(iVar0, func_33(iParam0), -1, 0);
				}
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (func_29(Local_127[unk_0x935FA14EDA695A82() /*8*/].f_1[iParam0], 4))
			{
				if (func_34(iParam0))
				{
					unk_0x5124C5FA52D2AF3E(iVar0);
				}
				if (!func_32(iParam0, 1435919172))
				{
					func_24(&(Local_127[unk_0x935FA14EDA695A82() /*8*/].f_1[iParam0]), 4);
					func_24(&(Local_127[unk_0x935FA14EDA695A82() /*8*/].f_1[iParam0]), 64);
				}
			}
			break;
	}
}

int func_31(int iParam0)
{
	var uVar0;
	
	if (!unk_0x691BFDC1728FD714(Local_100[iParam0]))
	{
		return 0;
	}
	uVar0 = unk_0xA84D2F2B8688949A(Local_100[iParam0]);
	if (unk_0xB6900B8CB0ABBD2B(uVar0))
	{
		return 0;
	}
	if (unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
	{
		return 0;
	}
	if (unk_0x1E8D3FA42E89ED72(unk_0xC8B93D94F8954288()))
	{
		return 1;
	}
	if (unk_0xFEDC9F0F78A56158(unk_0xA34E7C2A5118D638(), iVar0))
	{
		return 1;
	}
	if (unk_0x0BBFEAC55291063A(unk_0xA34E7C2A5118D638(), iVar0))
	{
		return 1;
	}
	if (unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(iVar0, 1)) <= 64f)
	{
		return 1;
	}
	return 0;
}

int func_32(int iParam0, int iParam1)
{
	var uVar0;
	
	if (!unk_0x691BFDC1728FD714(Local_100[iParam0]))
	{
		return 1;
	}
	uVar0 = unk_0xA84D2F2B8688949A(Local_100[iParam0]);
	if (unk_0xB6900B8CB0ABBD2B(uVar0))
	{
		return 1;
	}
	if (unk_0x090C65D5190A249D(iVar0, iParam1) != 1 && unk_0x090C65D5190A249D(iVar0, iParam1) != 0)
	{
		return 0;
	}
	return 1;
}

var func_33(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	float fVar3;
	float fVar4;
	
	fVar3 = 1E+11f;
	iVar0 = 0;
	while (iVar0 < unk_0x55191629F1199760())
	{
		if (unk_0x784B3253F40F728C(unk_0xD9BFAEBB04416B09(iVar0)))
		{
			uVar2 = unk_0xCF4C00513A86E840(unk_0x8F765930684A893F(unk_0xD9BFAEBB04416B09(iVar0)));
			if (!unk_0xB6900B8CB0ABBD2B(uVar2))
			{
				fVar4 = unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(iVar2, 1), unk_0x44C17CCB85A88A1F(unk_0x6622BC2FDC6DBB0E(Local_100[iParam0]), 1));
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

int func_34(int iParam0)
{
	var uVar0;
	
	if (!unk_0x691BFDC1728FD714(Local_100[iParam0]))
	{
		return 0;
	}
	uVar0 = unk_0xA84D2F2B8688949A(Local_100[iParam0]);
	if (unk_0xB6900B8CB0ABBD2B(uVar0))
	{
		return 0;
	}
	if (!unk_0xFE7BCFB02217DCDF(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_35(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_51(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_2621441 = 1;
	return func_36(sParam2, iParam3, 0);
}

int func_36(char* sParam0, int iParam1, bool bParam2)
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
					func_50();
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
		if (func_49(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_48();
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
				func_41();
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
				if (func_40())
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
			if (func_39())
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
			func_38();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_37();
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
		func_50();
	}
	return 0;
}

void func_37()
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

void func_38()
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

int func_39()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_40()
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

void func_41()
{
	if (func_47(14))
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
		Global_14413 = func_42();
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

var func_42()
{
	func_43();
	return Global_100976.f_1770.f_539.f_3549;
}

void func_43()
{
	int iVar0;
	
	if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
	{
		if (func_46(Global_100976.f_1770.f_539.f_3549) != unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()))
		{
			iVar0 = func_45(unk_0xC8B93D94F8954288());
			if (func_44(iVar0) && (!func_47(14) || Global_99928))
			{
				if (Global_100976.f_1770.f_539.f_3549 != iVar0 && func_44(Global_100976.f_1770.f_539.f_3549))
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

bool func_44(int iParam0)
{
	return iParam0 < 3;
}

int func_45(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x95CCECA3948CFE7B(uParam0))
	{
		iVar1 = unk_0x6D5BB810CC209E15(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_46(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_46(int iParam0)
{
	if (func_44(iParam0))
	{
		return Global_100976.f_32519[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_47(int iParam0)
{
	return Global_35700 == iParam0;
}

void func_48()
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

bool func_49(int iParam0, int iParam1)
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

void func_50()
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

void func_51(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15166 = { *uParam0 };
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = uParam5;
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

void func_52(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69317)
	{
		if (!unk_0x2DC9BA2299B45EA6(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x8EB9A60FB4C37A34(uParam2, 0);
			}
			else
			{
				unk_0x8EB9A60FB4C37A34(uParam2, 1);
			}
		}
		if (!unk_0x2DC9BA2299B45EA6(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x7EAD9630176BD15E(uParam2, 0);
			}
			else
			{
				unk_0x7EAD9630176BD15E(uParam2, 1);
			}
		}
	}
}

bool func_53(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_54()
{
	if (!unk_0x0845149A26DABBA5(joaat("s_m_y_marine_01")))
	{
		return 0;
	}
	if (!unk_0x0845149A26DABBA5(joaat("lazer")))
	{
		return 0;
	}
	if (!unk_0x0845149A26DABBA5(joaat("s_m_y_pilot_01")))
	{
		return 0;
	}
	return 1;
}

void func_55(var uParam0, int iParam1)
{
	func_56(uParam0, iParam1);
}

void func_56(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_57(int iParam0)
{
	if (func_58(iParam0, 0))
	{
		return Global_1608811[iParam0 /*109*/].f_9.f_28;
	}
	return -1;
}

int func_58(int iParam0, int iParam1)
{
	if (Global_1608811[iParam0 /*109*/].f_9.f_28 != -1 || (iParam1 && Global_1608811[iParam0 /*109*/].f_9.f_27 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_59()
{
	return unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_39.f_18, 0);
}

int func_60(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_61(iParam0))
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

bool func_61(int iParam0)
{
	return func_62(iParam0);
}

bool func_62(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_1587175[iParam0 /*410*/].f_13.f_1, 0);
}

void func_63()
{
	unk_0x7567CEA8E6B5340B(joaat("s_m_y_marine_01"));
	unk_0x7567CEA8E6B5340B(joaat("lazer"));
	unk_0x7567CEA8E6B5340B(joaat("s_m_y_pilot_01"));
}

int func_64()
{
	int iVar0;
	
	switch (Local_100.f_19)
	{
		case 0:
			if (func_84())
			{
				Local_100.f_19 = 1;
			}
			break;
		
		case 1:
			if (func_83())
			{
				Local_100.f_19 = 2;
			}
			break;
		
		case 2:
			if (func_60(unk_0xA34E7C2A5118D638(), 1) || func_59())
			{
				func_55(&(Local_100.f_20), 1);
				Local_100.f_19 = 3;
			}
			else if (func_81())
			{
				func_55(&(Local_100.f_20), 1);
				Local_100.f_19 = 3;
			}
			break;
		
		case 3:
			if (!func_60(unk_0xA34E7C2A5118D638(), 1) && !func_59())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_78(iVar0);
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 < 3)
				{
					func_67(iVar0);
					iVar0++;
				}
			}
			if (func_66())
			{
				Local_100.f_19 = 4;
			}
			break;
		
		case 4:
			func_65();
			return 1;
			break;
	}
	return 0;
}

void func_65()
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x691BFDC1728FD714(Local_100[iVar0]))
		{
			uVar1 = unk_0xA84D2F2B8688949A(Local_100[iVar0]);
			if (!unk_0xB6900B8CB0ABBD2B(uVar1))
			{
				unk_0x459A6F82E024C891(&iVar1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x691BFDC1728FD714(Local_100.f_3[iVar0 /*5*/].f_1))
		{
			iVar1 = unk_0xA84D2F2B8688949A(Local_100.f_3[iVar0 /*5*/].f_1);
			if (!unk_0xB6900B8CB0ABBD2B(iVar1))
			{
				unk_0x459A6F82E024C891(&iVar1);
			}
		}
		if (unk_0x691BFDC1728FD714(Local_100.f_3[iVar0 /*5*/]))
		{
			uVar2 = unk_0xF8A3C382964380BC(Local_100.f_3[iVar0 /*5*/]);
			if (!unk_0xB6900B8CB0ABBD2B(uVar2))
			{
				unk_0xEF84021B2AB5E334(&iVar2);
			}
		}
		iVar0++;
	}
}

int func_66()
{
	if (unk_0xEE9C884FC3CB6070() > 1)
	{
		return 0;
	}
	if (unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
	{
		return 1;
	}
	return 0;
}

void func_67(int iParam0)
{
	var uVar0;
	struct<3> Var1;
	var uVar4;
	struct<3> Var5;
	var uVar8;
	
	if (Local_100.f_3[iParam0 /*5*/].f_2 > 2)
	{
		if (unk_0x691BFDC1728FD714(Local_100.f_3[iParam0 /*5*/].f_1))
		{
			if (!unk_0xB6900B8CB0ABBD2B(unk_0xA84D2F2B8688949A(Local_100.f_3[iParam0 /*5*/].f_1)))
			{
				uVar0 = unk_0xA84D2F2B8688949A(Local_100.f_3[iParam0 /*5*/].f_1);
				Var1 = { unk_0x44C17CCB85A88A1F(uVar0, 1) };
				if (Var1.f_2 <= -150f)
				{
					unk_0x459A6F82E024C891(&iVar0);
					if (unk_0x691BFDC1728FD714(Local_100.f_3[iParam0 /*5*/]))
					{
						if (!unk_0xB6900B8CB0ABBD2B(unk_0xF8A3C382964380BC(Local_100.f_3[iParam0 /*5*/])))
						{
							uVar4 = unk_0xF8A3C382964380BC(Local_100.f_3[iParam0 /*5*/]);
							unk_0xEF84021B2AB5E334(&uVar4);
						}
					}
				}
			}
		}
	}
	switch (Local_100.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (func_77(iParam0, 16))
			{
				Local_100.f_3[iParam0 /*5*/].f_4 = -1;
				Local_100.f_3[iParam0 /*5*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (func_75(iParam0))
			{
				Local_100.f_3[iParam0 /*5*/].f_2 = 2;
			}
			break;
		
		case 2:
			Var5 = { func_74(iParam0) };
			if (!func_73(Var5))
			{
				if (!unk_0xDBFEC51D9D70DAE8(Var5, 20f) && !unk_0x8EBAC9BC4005929D(Var5, 20f))
				{
					if (func_70(Var5, unk_0x59DD203239FBDCAD(unk_0xCF4C00513A86E840(Local_100.f_3[iParam0 /*5*/].f_4)), iParam0))
					{
						Local_100.f_3[iParam0 /*5*/].f_2 = 3;
					}
				}
			}
			break;
		
		case 3:
			if (func_77(iParam0, 2))
			{
				Local_100.f_3[iParam0 /*5*/].f_2 = 4;
			}
			break;
		
		case 4:
			uVar8 = unk_0xCF4C00513A86E840(Local_100.f_3[iParam0 /*5*/].f_4);
			if (!unk_0x95CCECA3948CFE7B(uVar8))
			{
				Local_100.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (unk_0xB6900B8CB0ABBD2B(uVar8))
			{
				Local_100.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (unk_0xBAD11A89BAC646B5(iVar8) || unk_0x0AE990D4D01D6BFE(iVar8))
			{
				if (func_69(unk_0x275BEBE583A163B5(iVar8, 0)))
				{
					Local_100.f_3[iParam0 /*5*/].f_2 = 5;
				}
			}
			break;
		
		case 5:
			if (func_77(iParam0, 8))
			{
				Local_100.f_3[iParam0 /*5*/].f_2 = 6;
				Local_100.f_3[iParam0 /*5*/].f_4 = -1;
			}
			break;
		
		case 6:
			if (!func_68(iParam0, 16))
			{
				Local_100.f_3[iParam0 /*5*/].f_2 = 0;
			}
			if (func_75(iParam0))
			{
				Local_100.f_3[iParam0 /*5*/].f_2 = 3;
			}
			break;
	}
}

int func_68(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x55191629F1199760())
	{
		if (unk_0x784B3253F40F728C(unk_0xD9BFAEBB04416B09(iVar0)))
		{
			if (func_29(Local_127[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_69(int iParam0)
{
	if (unk_0x95CCECA3948CFE7B(uParam0))
	{
		if (unk_0xB6900B8CB0ABBD2B(uParam0))
		{
			return 1;
		}
		else if (!unk_0x5D42322C7DB888D0(iParam0, 0))
		{
			if (!unk_0x79E944054F6C9DCD(iParam0))
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

int func_70(struct<3> Param0, var uParam3, int iParam4)
{
	int iVar0;
	
	if (!unk_0x736DBE187CFCC863())
	{
		return 1;
	}
	iVar0 = 1;
	if (!unk_0x691BFDC1728FD714(Local_100.f_3[iParam4 /*5*/]))
	{
		if (!func_72(&(Local_100.f_3[iParam4 /*5*/]), joaat("lazer"), Param0, uParam3, 1, 1, 1, 0, 1, 1))
		{
			iVar0 = 0;
		}
		else
		{
			unk_0xAD20BE8460150C41(unk_0xF8A3C382964380BC(Local_100.f_3[iParam4 /*5*/]), 3);
		}
	}
	if (unk_0x691BFDC1728FD714(Local_100.f_3[iParam4 /*5*/]))
	{
		if (!unk_0x691BFDC1728FD714(Local_100.f_3[iParam4 /*5*/].f_1))
		{
			if (!func_71(&(Local_100.f_3[iParam4 /*5*/].f_1), Local_100.f_3[iParam4 /*5*/], 29, joaat("s_m_y_pilot_01"), -1, 1, 1, 1))
			{
				iVar0 = 0;
			}
			else
			{
				unk_0xB5275E92FA56ACEF(unk_0xA84D2F2B8688949A(Local_100.f_3[iParam4 /*5*/].f_1), joaat("vehicle_weapon_space_rocket"));
				unk_0x5AF595E6257467FC(unk_0xA84D2F2B8688949A(Local_100.f_3[iParam4 /*5*/].f_1), 0);
			}
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_71(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x30D45E180EF7AEE1(1))
	{
		return 0;
	}
	if (!unk_0x1BDB4A81F7EE9BE6(uParam1))
	{
		return 0;
	}
	if (!unk_0x5D42322C7DB888D0(unk_0xF8A3C382964380BC(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xFD3315C91C68296D(unk_0xDEFAEEE1A4058454(unk_0xF8A3C382964380BC(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0x1BDB4A81F7EE9BE6(*uParam0))
	{
		unk_0x3907D4738A2C8ABD(unk_0xA84D2F2B8688949A(*uParam0), iParam7);
		if (unk_0x6061DFC4D87F4B3E(unk_0xA84D2F2B8688949A(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x46B4CDCFC03F8576(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_72(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	
	if (!unk_0x0B3DCCE96DC81466(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0x3FC9316FEF4E4720(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0xD53B4DCC7B2C8551(iParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0xBE16446E4B20EFE2(uVar0);
	if (unk_0x1BDB4A81F7EE9BE6(*uParam0))
	{
		unk_0x3907D4738A2C8ABD(uVar0, iParam10);
		if (unk_0x6061DFC4D87F4B3E(uVar0))
		{
			if (bParam8)
			{
				unk_0x46B4CDCFC03F8576(*uParam0, 1);
			}
			else
			{
				unk_0x46B4CDCFC03F8576(*uParam0, 0);
			}
		}
		unk_0x59CE4F88873CD573(uVar0, iParam9);
		return 1;
	}
	return 0;
}

int func_73(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_74(int iParam0)
{
	var uVar0;
	struct<3> Var1;
	
	uVar0 = unk_0xCF4C00513A86E840(Local_100.f_3[iParam0 /*5*/].f_4);
	if (unk_0xB6900B8CB0ABBD2B(uVar0))
	{
		return 0f, 0f, 0f;
	}
	Var1 = { unk_0xE79F1883B253E5B8(unk_0x44C17CCB85A88A1F(iVar0, 1), unk_0x59DD203239FBDCAD(iVar0), 0f, -250f, (40f * unk_0xBBDA792448DB5A89(iParam0))) };
	if (Var1.f_2 < 100f)
	{
		Var1.f_2 = 100f;
	}
	return Var1;
}

int func_75(int iParam0)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x55191629F1199760())
	{
		if (unk_0x784B3253F40F728C(unk_0xD9BFAEBB04416B09(iVar0)))
		{
			uVar1 = unk_0xCF4C00513A86E840(unk_0x8F765930684A893F(unk_0xD9BFAEBB04416B09(iVar0)));
			if (!func_76(unk_0x8F765930684A893F(unk_0xD9BFAEBB04416B09(iVar0))))
			{
				if (unk_0xBAD11A89BAC646B5(uVar1) || unk_0x0AE990D4D01D6BFE(iVar1))
				{
					if (unk_0x6338DEFCA89B8CD6(unk_0x8F765930684A893F(unk_0xD9BFAEBB04416B09(iVar0))) >= 4)
					{
						Var2 = { unk_0x44C17CCB85A88A1F(iVar1, 0) };
						if (func_10(Var2, 3, 1000, 0) && Var2.f_2 > 90f)
						{
							Local_100.f_3[iParam0 /*5*/].f_4 = unk_0x8F765930684A893F(unk_0xD9BFAEBB04416B09(iVar0));
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

int func_76(int iParam0)
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	uVar0 = unk_0xCF4C00513A86E840(iParam0);
	if (!unk_0x95CCECA3948CFE7B(uVar0))
	{
		return 1;
	}
	if (unk_0xB6900B8CB0ABBD2B(uVar0))
	{
		return 1;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uVar2 = unk_0xCF4C00513A86E840(Local_100.f_3[iVar1 /*5*/].f_4);
		if (unk_0x95CCECA3948CFE7B(uVar2))
		{
			if (iParam0 == Local_100.f_3[iVar1 /*5*/].f_4)
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_77(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x55191629F1199760())
	{
		if (unk_0x784B3253F40F728C(unk_0xD9BFAEBB04416B09(iVar0)))
		{
			if (!func_29(Local_127[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_78(int iParam0)
{
	switch (Local_100.f_21[iParam0])
	{
		case 0:
			if (func_80(iParam0, 64))
			{
				Local_100.f_21[iParam0] = 1;
			}
			break;
		
		case 1:
			if (func_79(iParam0, 1))
			{
				Local_100.f_21[iParam0] = 2;
			}
			break;
		
		case 2:
			if (func_79(iParam0, 2))
			{
				Local_100.f_21[iParam0] = 3;
			}
			break;
		
		case 3:
			if (func_80(iParam0, 4))
			{
				Local_100.f_21[iParam0] = 4;
			}
			break;
		
		case 4:
			if (func_79(iParam0, 8))
			{
				Local_100.f_21[iParam0] = 5;
			}
			if (!func_79(iParam0, 1))
			{
				Local_100.f_21[iParam0] = 7;
			}
			if (func_79(iParam0, 16))
			{
				Local_100.f_21[iParam0] = 6;
			}
			break;
		
		case 5:
			if (func_79(iParam0, 16))
			{
				Local_100.f_21[iParam0] = 6;
			}
			if (!func_79(iParam0, 1))
			{
				Local_100.f_21[iParam0] = 7;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!func_79(iParam0, 4))
			{
				Local_100.f_21[iParam0] = 0;
			}
			break;
	}
}

int func_79(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x55191629F1199760())
	{
		if (unk_0x784B3253F40F728C(unk_0xD9BFAEBB04416B09(iVar0)))
		{
			if (func_29(Local_127[iVar0 /*8*/].f_1[iParam0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_80(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x55191629F1199760())
	{
		if (unk_0x784B3253F40F728C(unk_0xD9BFAEBB04416B09(iVar0)))
		{
			if (!func_29(Local_127[iVar0 /*8*/].f_1[iParam0], iParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_81()
{
	int iVar0;
	
	if (!unk_0x736DBE187CFCC863())
	{
		return 1;
	}
	iVar0 = 1;
	if (!func_82(&(Local_100[0]), 29, joaat("s_m_y_marine_01"), -2295.587f, 3377.288f, 30.0601f, 55.8214f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (unk_0x691BFDC1728FD714(Local_100[0]))
	{
		unk_0x640290651A86938B(unk_0xA84D2F2B8688949A(Local_100[0]), joaat("weapon_assaultrifle"), 200, 1, 1);
	}
	if (!func_82(&(Local_100[1]), 29, joaat("s_m_y_marine_01"), -1597.432f, 2808.987f, 16.1385f, 229.437f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (unk_0x691BFDC1728FD714(Local_100[1]))
	{
		unk_0x640290651A86938B(unk_0xA84D2F2B8688949A(Local_100[1]), joaat("weapon_assaultrifle"), 200, 1, 1);
	}
	return iVar0;
}

int func_82(var uParam0, int iParam1, int iParam2, struct<3> Param3, float fParam6, bool bParam7, int iParam8, int iParam9)
{
	var uVar0;
	
	if (!unk_0x30D45E180EF7AEE1(1))
	{
		return 0;
	}
	uVar0 = unk_0x71DD988C1B903F5D(iParam1, iParam2, Param3, fParam6, iParam8, bParam7);
	*uParam0 = unk_0xFD3315C91C68296D(uVar0);
	if (unk_0x1BDB4A81F7EE9BE6(*uParam0))
	{
		unk_0x3907D4738A2C8ABD(uVar0, iParam9);
		if (unk_0x6061DFC4D87F4B3E(uVar0))
		{
			if (bParam7)
			{
				unk_0x46B4CDCFC03F8576(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_83()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < unk_0x55191629F1199760())
	{
		if (unk_0x784B3253F40F728C(unk_0xD9BFAEBB04416B09(iVar1)))
		{
			if (!func_53(Local_127[iVar1 /*8*/], 2))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_84()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < unk_0x55191629F1199760())
	{
		if (unk_0x784B3253F40F728C(unk_0xD9BFAEBB04416B09(iVar1)))
		{
			if (!func_53(Local_127[iVar1 /*8*/], 1))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_85()
{
	bool bVar0;
	
	func_92(&bVar0);
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
	if (func_91())
	{
		return 1;
	}
	if (Global_2443300)
	{
		return 1;
	}
	if (func_90())
	{
		return 1;
	}
	if (func_89(157))
	{
		if (!func_88())
		{
			return 1;
		}
	}
	if (func_89(155))
	{
		return 1;
	}
	if (!unk_0xDC6347A8EBB9281E())
	{
		return 1;
	}
	if (func_86() != 0)
	{
		if (unk_0xCBC8FFE55DC722B5(func_86()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_86()
{
	switch (func_87())
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

int func_87()
{
	return Global_25115;
}

bool func_88()
{
	return Global_2433098.f_574;
}

int func_89(int iParam0)
{
	if (unk_0x88FC52D6FDFA0AFA(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_90()
{
	return Global_2441381;
}

bool func_91()
{
	return Global_2433098.f_569;
}

void func_92(var uParam0)
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
					func_93(iVar0);
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

void func_93(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x74238B7708290D43(1, iParam0, &Var0, 3))
	{
		if (func_95(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xCF4C00513A86E840(Var0.f_1);
			if (unk_0x95CCECA3948CFE7B(uVar3))
			{
				if (unk_0x277ECDA23D8CCEB4(uVar3, 0))
				{
					uVar4 = unk_0x275BEBE583A163B5(uVar3, 0);
					if (unk_0x8AA327BE085BA8B4(uVar4, Var0.f_2) && unk_0xEE66E067C1F8D1F4())
					{
						if (func_94(uVar4, &bVar5))
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

int func_94(int iParam0, var uParam1)
{
	if (unk_0x95CCECA3948CFE7B(uParam0))
	{
		if (!unk_0xD28A89C669EAD2E4(uParam0))
		{
			if (unk_0x75932C6E41A19C54(uParam0))
			{
				unk_0xFD816D0E738EB817(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x1F59F772AA90087D(uParam0, 0))
		{
			if (unk_0xFE7BCFB02217DCDF(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_95(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (unk_0xDF73DA5E2287C499(uParam0))
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

void func_96()
{
	if (unk_0xD398CE6895CD43E8(false) != 5)
	{
		if (func_103(5, 0, 1))
		{
			if (unk_0xE2894B8E26DA3414(0) <= 5)
			{
				unk_0xB575A770677DC316(5);
			}
		}
	}
	if (unk_0x43C913D65CB1CB90(false) != 3)
	{
		if (func_97(3, 0, 1))
		{
			if (unk_0xB263BC1841CBCE4E(0) <= 3)
			{
				unk_0xC908ABD9A1B6E6E6(3);
			}
		}
	}
}

bool func_97(int iParam0, bool bParam1, bool bParam2)
{
	return func_98(1, iParam0, 1, bParam1, bParam2);
}

int func_98(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xDCC86F723E82125E(Global_1348625, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_102(iParam0) - func_101(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_101(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_102(iParam0) - func_100(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_101(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_102(iParam0) - func_101(iParam0, 1));
		}
		if (!bParam4 && Global_1587175[unk_0xA34E7C2A5118D638() /*410*/] != 3)
		{
			iVar1 = (iVar1 - func_99(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_99(int iParam0)
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

int func_100(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1348625.f_1;
			break;
		
		case 1:
			return Global_1348625.f_2;
			break;
		
		case 2:
			return Global_1348625.f_3;
			break;
	}
	return 0;
}

int func_101(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xA34E7C2A5118D638();
	switch (iParam0)
	{
		case 0:
			if (!unk_0xEE66E067C1F8D1F4())
			{
				return Global_2417071[iVar0 /*306*/].f_207;
			}
			else
			{
				return unk_0xD398CE6895CD43E8(!bParam1);
			}
			break;
		
		case 1:
			if (!unk_0xEE66E067C1F8D1F4())
			{
				return Global_2417071[iVar0 /*306*/].f_208;
			}
			else
			{
				return unk_0x43C913D65CB1CB90(!bParam1);
			}
			break;
		
		case 2:
			if (!unk_0xEE66E067C1F8D1F4())
			{
				return Global_2417071[iVar0 /*306*/].f_209;
			}
			else
			{
				return unk_0x677F6E172BA18B9B(!bParam1);
			}
			break;
	}
	return 0;
}

int func_102(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1348633;
			break;
		
		case 1:
			return Global_1348634;
			break;
		
		case 2:
			return Global_1348635;
			break;
	}
	return 0;
}

bool func_103(int iParam0, bool bParam1, bool bParam2)
{
	return func_98(0, iParam0, 1, bParam1, bParam2);
}

void func_104()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_105()
{
	int iVar0;
	
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		if (unk_0x736DBE187CFCC863())
		{
			if (func_66())
			{
				func_65();
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x6B4865E08E90ACC5(Local_384.f_172[iVar0]))
		{
			unk_0x5356E82C1E5E0C44(&(Local_384.f_172[iVar0]));
		}
		iVar0++;
	}
	func_107();
	func_106();
}

void func_106()
{
	unk_0xA4E0D8FD51F2A6F7();
}

void func_107()
{
	if (!Local_384.f_176)
	{
		return;
	}
	if (unk_0x0845149A26DABBA5(joaat("s_m_y_marine_01")))
	{
		unk_0x4BBD72565A0AF033(joaat("s_m_y_marine_01"));
	}
	if (unk_0x0845149A26DABBA5(joaat("lazer")))
	{
		unk_0x4BBD72565A0AF033(joaat("lazer"));
	}
	if (unk_0x0845149A26DABBA5(joaat("s_m_y_pilot_01")))
	{
		unk_0x4BBD72565A0AF033(joaat("s_m_y_pilot_01"));
	}
}

void func_108(struct<20> Param0)
{
	func_112(func_113(Param0.f_0), Param0);
	func_110(0, -1, 0);
	unk_0xB575A770677DC316(5);
	unk_0xC908ABD9A1B6E6E6(3);
	unk_0xFE7B095449D5F053(&Local_100, 27);
	unk_0x99592530153DB318(&Local_127, 257);
	unk_0x6ECAEE4901F465A1(0);
	if (!func_109())
	{
		func_105();
	}
	if (unk_0x24862A9CDC8F8874(3))
	{
		func_105();
	}
}

int func_109()
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
		if (func_91())
		{
			return 0;
		}
		if (func_89(155))
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

int func_110(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xD93BACE0E8C906AB();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_106();
			}
			else
			{
				return 0;
			}
		}
		if (!func_111())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xBBAE3E0C60A8AD4B())
				{
					if (!bParam2)
					{
						func_106();
					}
					else
					{
						return 0;
					}
				}
				if (func_91())
				{
					if (!bParam2)
					{
						func_106();
					}
					else
					{
						return 0;
					}
				}
				if (func_89(155))
				{
					if (!bParam2)
					{
						func_106();
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
					func_106();
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
				func_106();
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
			func_106();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_111()
{
	return Global_1315886;
}

void func_112(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0xBBAE3E0C60A8AD4B())
	{
		func_106();
	}
	unk_0x170190A515596E3F(uParam0, 0, Param1.f_16);
}

int func_113(int iParam0)
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

