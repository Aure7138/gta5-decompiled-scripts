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
	if (unk_0x1995B52453EF6537())
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
		if (func_87() || unk_0xF5C5C10402E12CCB())
		{
			func_107();
		}
		if (unk_0x1995B52453EF6537())
		{
			if (func_25())
			{
				func_107();
			}
			if ((((((((!Global_1573902 && !func_24(2)) && !func_21(unk_0xFB6B3EEFAB2DD12C(), 0)) && !unk_0xB0D174BA6F10DF7B()) && unk_0x0E4A3783CD75D9CE(unk_0xFB6B3EEFAB2DD12C())) && !func_19(unk_0xFB6B3EEFAB2DD12C())) && !func_17(func_18(unk_0xFB6B3EEFAB2DD12C()))) && !func_15(unk_0xFB6B3EEFAB2DD12C(), 146)) && !func_11(unk_0xFB6B3EEFAB2DD12C()))
			{
				if (func_10(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0), 3, 1000, 0) || func_9(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0), 1000))
				{
					if (!unk_0xF44A5E894FE76438(Global_2494149.f_4418, 0))
					{
						if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
						{
							if (unk_0xD6E13289C5649502(unk_0xD5A676B97920D126()) || unk_0xEDC11DB270927D92(unk_0xD5A676B97920D126()))
							{
								if (func_10(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0), 3, 0, 0) || func_9(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0), 0))
								{
									if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) < 4)
									{
										unk_0x07105C091ACE8727(unk_0xFB6B3EEFAB2DD12C(), 36, (unk_0x36865204E31D450F(4) - unk_0x36865204E31D450F(unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()))));
									}
									else
									{
										unk_0x429564024B83C7C8(unk_0xFB6B3EEFAB2DD12C());
									}
								}
								else if (!func_8(&(Local_385.f_3)))
								{
									func_5(&(Local_385.f_3));
								}
								else if (func_2(&(Local_385.f_3)) > 20f || Local_385.f_177)
								{
									if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) < 4)
									{
										unk_0x07105C091ACE8727(unk_0xFB6B3EEFAB2DD12C(), 36, (unk_0x36865204E31D450F(4) - unk_0x36865204E31D450F(unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()))));
									}
									else
									{
										unk_0x429564024B83C7C8(unk_0xFB6B3EEFAB2DD12C());
									}
								}
							}
							else if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) < 4)
							{
								unk_0x07105C091ACE8727(unk_0xFB6B3EEFAB2DD12C(), 36, (unk_0x36865204E31D450F(4) - unk_0x36865204E31D450F(unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()))));
							}
							else
							{
								unk_0x429564024B83C7C8(unk_0xFB6B3EEFAB2DD12C());
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
			return (func_3(unk_0xF44A5E894FE76438(*uParam0, 4)) - uParam0->f_1);
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
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x84A97C70FFDEC0C8());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x1995B52453EF6537())
	{
		iVar2 = unk_0x7414B386C0020BEC();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x84A97C70FFDEC0C8()) / 1000f);
}

bool func_4(var uParam0)
{
	return unk_0xF44A5E894FE76438(*uParam0, 2);
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
	uParam0->f_1 = (func_3(unk_0xF44A5E894FE76438(*uParam0, 4)) - fParam1);
	unk_0xB8A73E7DA87B2968(uParam0, 1);
	unk_0x4EA098C870B73AB7(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_8(var uParam0)
{
	return unk_0xF44A5E894FE76438(*uParam0, 1);
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
		if (unk_0x1FA2886237245376(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], iVar110, 1))
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
		if (unk_0x1FA2886237245376(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], iVar110, 1))
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
		return Global_1618089[iParam0 /*390*/].f_11.f_32;
	}
	return -1;
}

int func_14(int iParam0, int iParam1)
{
	if (Global_1618089[iParam0 /*390*/].f_11.f_32 != -1 || (iParam1 && Global_1618089[iParam0 /*390*/].f_11.f_31 != -1))
	{
		return 1;
	}
	return 0;
}

int func_15(int iParam0, int iParam1)
{
	if (Global_1618089[iParam0 /*390*/] == iParam1)
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
		return unk_0xF44A5E894FE76438(Global_1618089[iVar0 /*390*/].f_1, 0);
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
			if (func_16(unk_0xFB6B3EEFAB2DD12C()))
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
		return Global_1618089[iVar0 /*390*/];
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
		if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
		{
			return 1;
		}
	}
	if (unk_0xF44A5E894FE76438(Global_2421621[iParam0 /*358*/].f_198, 2))
	{
		return 1;
	}
	return 0;
}

bool func_20()
{
	return unk_0xF44A5E894FE76438(Global_2359301, 3);
}

bool func_21(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
	{
		bVar0 = func_22(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589933[iParam0 /*601*/].f_202 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x1E0256D6F1052B31(iParam0))
		{
			bVar0 = unk_0x2A7336F1C6B39623(iParam0) == 8;
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
	if (Global_1315209[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312725[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_23()
{
	return Global_1312731;
}

bool func_24(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_1573901, iParam0);
}

int func_25()
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x04DE35D10A718EEF())
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
			if ((func_62(unk_0xFB6B3EEFAB2DD12C(), 1) && func_61()) || func_13(unk_0xFB6B3EEFAB2DD12C()) == 159)
			{
				unk_0xFA03BA297FE81584(joaat("rhino"), 1);
			}
			func_59(&(Local_128[unk_0x1E7FB1CA38C403F6() /*8*/]), 1);
			Local_385.f_176 = 1;
			Local_385.f_6 = 1;
			break;
		
		case 1:
			if (func_58())
			{
				func_59(&(Local_128[unk_0x1E7FB1CA38C403F6() /*8*/]), 2);
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
			if (!func_62(unk_0xFB6B3EEFAB2DD12C(), 1) && !func_61())
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
			if (unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
			{
				Local_385.f_6 = 4;
			}
			break;
		
		case 4:
			if ((func_62(unk_0xFB6B3EEFAB2DD12C(), 1) && func_61()) || func_13(unk_0xFB6B3EEFAB2DD12C()) == 159)
			{
				unk_0xFA03BA297FE81584(joaat("rhino"), 0);
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
	
	if (Local_101.f_3[iParam0 /*5*/].f_2 > 2 && unk_0x1B982A8B37108B3C(Local_101.f_3[iParam0 /*5*/]))
	{
		if (unk_0xB529B2A4B7C64D6D(unk_0xE95C934718B1A4FF(Local_101.f_3[iParam0 /*5*/]), 0))
		{
			if (unk_0x6901135DDCC4904D(Local_385.f_172[iParam0]))
			{
				unk_0x8A3D7569826A325D(&(Local_385.f_172[iParam0]));
			}
		}
		else if (!unk_0x6901135DDCC4904D(Local_385.f_172[iParam0]) && unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) >= 2)
		{
			Local_385.f_172[iParam0] = unk_0x890C68C377CE0CA4(unk_0x0DE80E23B2BD02BD(Local_101.f_3[iParam0 /*5*/]));
			unk_0x4F095059F1C175D5(Local_385.f_172[iParam0], 1);
		}
	}
	else if (unk_0x6901135DDCC4904D(Local_385.f_172[iParam0]))
	{
		unk_0x8A3D7569826A325D(&(Local_385.f_172[iParam0]));
	}
	switch (Local_101.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (!func_33(Local_128[unk_0x1E7FB1CA38C403F6() /*8*/].f_4[iParam0], 16))
			{
				Local_128[unk_0x1E7FB1CA38C403F6() /*8*/].f_4[iParam0] = 0;
				func_32(&(Local_128[unk_0x1E7FB1CA38C403F6() /*8*/].f_4[iParam0]), 16);
			}
			break;
		
		case 1:
			if (!func_33(Local_128[unk_0x1E7FB1CA38C403F6() /*8*/].f_4[iParam0], 1))
			{
				if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
				{
					if (unk_0xD6E13289C5649502(unk_0xD5A676B97920D126()) || unk_0xEDC11DB270927D92(unk_0xD5A676B97920D126()))
					{
						if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) >= 4)
						{
							if (func_10(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0), 3, 500, 0))
							{
								func_32(&(Local_128[unk_0x1E7FB1CA38C403F6() /*8*/].f_4[iParam0]), 1);
							}
						}
					}
				}
			}
			break;
		
		case 2:
			break;
		
		case 3:
			if (!func_33(Local_128[unk_0x1E7FB1CA38C403F6() /*8*/].f_4[iParam0], 2))
			{
				if (func_31(iParam0))
				{
					uVar2 = unk_0x4572B13EE70C8F52(Local_101.f_3[iParam0 /*5*/].f_4);
					uVar0 = unk_0x9E9133ACB2BCC1D5(Local_101.f_3[iParam0 /*5*/].f_1);
					uVar1 = unk_0xE95C934718B1A4FF(Local_101.f_3[iParam0 /*5*/]);
					if (!unk_0xB529B2A4B7C64D6D(uVar2, 0))
					{
						if (unk_0xD6E13289C5649502(uVar2))
						{
							uVar3 = unk_0x0DBD8FE531FD620D(uVar2, 0);
							if ((!unk_0xB529B2A4B7C64D6D(uVar0, 0) && !unk_0xB529B2A4B7C64D6D(uVar1, 0)) && !unk_0xB529B2A4B7C64D6D(uVar3, 0))
							{
								unk_0x9380465A430F399B(uVar0, uVar1, uVar3, uVar2, unk_0xC086F8D75730FA3A(uVar2, 1), 6, 70f, -1f, 30f, 500, 50);
								unk_0x48452200A0470A10(uVar0, joaat("vehicle_weapon_space_rocket"));
								unk_0x6FDEE181933A1236(uVar0, 0);
							}
						}
					}
				}
				if (func_30(iParam0))
				{
					uVar0 = unk_0x9E9133ACB2BCC1D5(Local_101.f_3[iParam0 /*5*/].f_1);
					iVar2 = unk_0x4572B13EE70C8F52(Local_101.f_3[iParam0 /*5*/].f_4);
					if (!unk_0xB529B2A4B7C64D6D(iVar2, 0))
					{
						if (unk_0xD6E13289C5649502(iVar2))
						{
							unk_0x828DC233671A44D4(uVar0, iVar2, unk_0xC086F8D75730FA3A(iVar2, 1));
						}
					}
				}
				if (func_29(iParam0, 6))
				{
					func_32(&(Local_128[unk_0x1E7FB1CA38C403F6() /*8*/].f_4[iParam0]), 2);
				}
			}
			break;
		
		case 4:
			break;
		
		case 5:
			if (!func_33(Local_128[unk_0x1E7FB1CA38C403F6() /*8*/].f_4[iParam0], 8))
			{
				if (func_31(iParam0))
				{
					uVar0 = unk_0x9E9133ACB2BCC1D5(Local_101.f_3[iParam0 /*5*/].f_1);
					uVar1 = unk_0xE95C934718B1A4FF(Local_101.f_3[iParam0 /*5*/]);
					if (!unk_0xB529B2A4B7C64D6D(uVar0, 0) && !unk_0xB529B2A4B7C64D6D(uVar1, 0))
					{
						unk_0x9380465A430F399B(iVar0, iVar1, 0, 0, -2076.374f, 3112.294f, 33.13584f, 9, 70f, -1f, 30f, 500, 50);
					}
				}
				if (func_29(iParam0, 9))
				{
					func_32(&(Local_128[unk_0x1E7FB1CA38C403F6() /*8*/].f_4[iParam0]), 8);
				}
			}
			break;
		
		case 6:
			if (unk_0xF6A32456BABBBA74(Local_101.f_3[iParam0 /*5*/]) || unk_0xF6A32456BABBBA74(Local_101.f_3[iParam0 /*5*/].f_1))
			{
				if (!unk_0xBB36CABE30AE5FC4(unk_0xC086F8D75730FA3A(unk_0x0DE80E23B2BD02BD(Local_101.f_3[iParam0 /*5*/]), 0), 10f) && !unk_0x51BB9ECCCA71BF09(unk_0xC086F8D75730FA3A(unk_0x0DE80E23B2BD02BD(Local_101.f_3[iParam0 /*5*/]), 0), 10f))
				{
					if (unk_0x1B982A8B37108B3C(Local_101.f_3[iParam0 /*5*/].f_1) && unk_0x50CED8EEAE806923(Local_101.f_3[iParam0 /*5*/].f_1))
					{
						uVar4 = unk_0x0DE80E23B2BD02BD(Local_101.f_3[iParam0 /*5*/].f_1);
						unk_0x334B78DD05E664AF(&uVar4);
					}
					if (unk_0x1B982A8B37108B3C(Local_101.f_3[iParam0 /*5*/]) && unk_0x50CED8EEAE806923(Local_101.f_3[iParam0 /*5*/]))
					{
						uVar5 = unk_0x0DE80E23B2BD02BD(Local_101.f_3[iParam0 /*5*/]);
						unk_0x334B78DD05E664AF(&uVar5);
					}
				}
			}
			else if (func_33(Local_128[unk_0x1E7FB1CA38C403F6() /*8*/].f_4[iParam0], 16))
			{
				func_28(&(Local_128[unk_0x1E7FB1CA38C403F6() /*8*/].f_4[iParam0]), 16);
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
	
	if (!unk_0x1B982A8B37108B3C(Local_101.f_3[iParam0 /*5*/]))
	{
		return 1;
	}
	uVar0 = unk_0xE95C934718B1A4FF(Local_101.f_3[iParam0 /*5*/]);
	if (unk_0xB529B2A4B7C64D6D(uVar0, 0))
	{
		return 1;
	}
	if (unk_0xF503E603EEC3ACE0(iVar0) != iParam1)
	{
		return 0;
	}
	return 1;
}

int func_30(int iParam0)
{
	var uVar0;
	
	if (!unk_0x1B982A8B37108B3C(Local_101.f_3[iParam0 /*5*/].f_1))
	{
		return 0;
	}
	uVar0 = unk_0x9E9133ACB2BCC1D5(Local_101.f_3[iParam0 /*5*/].f_1);
	if (unk_0xB529B2A4B7C64D6D(uVar0, 0))
	{
		return 0;
	}
	if (!unk_0x4A478FA962FF575A(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_31(int iParam0)
{
	var uVar0;
	
	if (!unk_0x1B982A8B37108B3C(Local_101.f_3[iParam0 /*5*/]))
	{
		return 0;
	}
	uVar0 = unk_0xE95C934718B1A4FF(Local_101.f_3[iParam0 /*5*/]);
	if (unk_0xB529B2A4B7C64D6D(uVar0, 0))
	{
		return 0;
	}
	if (!unk_0x4A478FA962FF575A(iVar0))
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
	
	if (!unk_0x1B982A8B37108B3C(Local_101[iParam0]))
	{
		return;
	}
	uVar0 = unk_0x9E9133ACB2BCC1D5(Local_101[iParam0]);
	if (unk_0xB529B2A4B7C64D6D(uVar0, 0))
	{
		return;
	}
	switch (Local_101.f_21[iParam0])
	{
		case 0:
			if (!func_33(Local_128[unk_0x1E7FB1CA38C403F6() /*8*/].f_1[iParam0], 64))
			{
				Local_128[unk_0x1E7FB1CA38C403F6() /*8*/].f_1[iParam0] = 0;
				func_32(&(Local_128[unk_0x1E7FB1CA38C403F6() /*8*/].f_1[iParam0]), 64);
			}
			break;
		
		case 1:
			if (!func_33(Local_128[unk_0x1E7FB1CA38C403F6() /*8*/].f_1[iParam0], 1))
			{
				if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
				{
					if (unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), unk_0xC086F8D75730FA3A(iVar0, 1)) <= 900f)
					{
						func_32(&(Local_128[unk_0x1E7FB1CA38C403F6() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 2:
			if (!func_33(Local_128[unk_0x1E7FB1CA38C403F6() /*8*/].f_1[iParam0], 2) && unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), unk_0xC086F8D75730FA3A(iVar0, 1)) <= 900f)
			{
				func_56(&(Local_385.f_7), 4, iVar0, "ARMY_Guard01", 0, 1);
				func_39(&(Local_385.f_7), "ARMYAUD", "ARMY_WRN1", 12, 0, 0, 0);
				func_32(&(Local_128[unk_0x1E7FB1CA38C403F6() /*8*/].f_1[iParam0]), 2);
			}
			break;
		
		case 3:
			if (!func_33(Local_128[unk_0x1E7FB1CA38C403F6() /*8*/].f_1[iParam0], 4))
			{
				if (func_38(iParam0))
				{
					unk_0x50FF381592977875(iVar0, func_37(iParam0), -1, 0);
				}
				if (func_36(iParam0, 1630799643))
				{
					func_32(&(Local_128[unk_0x1E7FB1CA38C403F6() /*8*/].f_1[iParam0]), 4);
				}
			}
			break;
		
		case 4:
			if ((!func_33(Local_128[unk_0x1E7FB1CA38C403F6() /*8*/].f_1[iParam0], 8) && unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0), unk_0xC086F8D75730FA3A(iVar0, 1)) <= 900f) && unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) < 1)
			{
				if (!func_8(&Local_385))
				{
					func_5(&Local_385);
				}
				if (func_2(&Local_385) >= 7f)
				{
					func_32(&(Local_128[unk_0x1E7FB1CA38C403F6() /*8*/].f_1[iParam0]), 8);
					func_39(&(Local_385.f_7), "ARMYAUD", "ARMY_WRN1a", 12, 0, 0, 0);
				}
			}
			else if (func_8(&Local_385))
			{
				func_1(&Local_385);
			}
			if (!func_33(Local_128[unk_0x1E7FB1CA38C403F6() /*8*/].f_1[iParam0], 16))
			{
				if (func_35(iParam0) && unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0), unk_0xC086F8D75730FA3A(iVar0, 1)) <= 900f)
				{
					func_32(&(Local_128[unk_0x1E7FB1CA38C403F6() /*8*/].f_1[iParam0]), 16);
					unk_0x07105C091ACE8727(unk_0xFB6B3EEFAB2DD12C(), 36, unk_0x36865204E31D450F(4));
				}
			}
			if (func_33(Local_128[unk_0x1E7FB1CA38C403F6() /*8*/].f_1[iParam0], 1))
			{
				if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
				{
					if (unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), unk_0xC086F8D75730FA3A(iVar0, 1)) > 900f)
					{
						func_28(&(Local_128[unk_0x1E7FB1CA38C403F6() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 5:
			if (!func_33(Local_128[unk_0x1E7FB1CA38C403F6() /*8*/].f_1[iParam0], 16))
			{
				if (func_35(iParam0) && unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0), unk_0xC086F8D75730FA3A(iVar0, 1)) <= 900f)
				{
					func_32(&(Local_128[unk_0x1E7FB1CA38C403F6() /*8*/].f_1[iParam0]), 16);
					unk_0x07105C091ACE8727(unk_0xFB6B3EEFAB2DD12C(), 36, (unk_0x36865204E31D450F(4) - unk_0x36865204E31D450F(unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()))));
				}
			}
			if (func_33(Local_128[unk_0x1E7FB1CA38C403F6() /*8*/].f_1[iParam0], 1))
			{
				if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
				{
					if (unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), unk_0xC086F8D75730FA3A(iVar0, 1)) > 900f)
					{
						func_28(&(Local_128[unk_0x1E7FB1CA38C403F6() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			if (!func_36(iParam0, 1630799643))
			{
				if (func_38(iParam0))
				{
					unk_0x50FF381592977875(iVar0, func_37(iParam0), -1, 0);
				}
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (func_33(Local_128[unk_0x1E7FB1CA38C403F6() /*8*/].f_1[iParam0], 4))
			{
				if (func_38(iParam0))
				{
					unk_0x37338B7B7C4982DC(iVar0);
				}
				if (!func_36(iParam0, 1435919172))
				{
					func_28(&(Local_128[unk_0x1E7FB1CA38C403F6() /*8*/].f_1[iParam0]), 4);
					func_28(&(Local_128[unk_0x1E7FB1CA38C403F6() /*8*/].f_1[iParam0]), 64);
				}
			}
			break;
	}
}

int func_35(int iParam0)
{
	var uVar0;
	
	if (!unk_0x1B982A8B37108B3C(Local_101[iParam0]))
	{
		return 0;
	}
	uVar0 = unk_0x9E9133ACB2BCC1D5(Local_101[iParam0]);
	if (unk_0xB529B2A4B7C64D6D(uVar0, 0))
	{
		return 0;
	}
	if (unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
	{
		return 0;
	}
	if (unk_0x515E262CBF491958(unk_0xD5A676B97920D126()))
	{
		return 1;
	}
	if (unk_0xF84188B3D9E24D81(unk_0xFB6B3EEFAB2DD12C(), iVar0))
	{
		return 1;
	}
	if (unk_0x982AB85BDD884D31(unk_0xFB6B3EEFAB2DD12C(), iVar0))
	{
		return 1;
	}
	if (unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), unk_0xC086F8D75730FA3A(iVar0, 1)) <= 64f)
	{
		return 1;
	}
	return 0;
}

int func_36(int iParam0, int iParam1)
{
	var uVar0;
	
	if (!unk_0x1B982A8B37108B3C(Local_101[iParam0]))
	{
		return 1;
	}
	uVar0 = unk_0x9E9133ACB2BCC1D5(Local_101[iParam0]);
	if (unk_0xB529B2A4B7C64D6D(uVar0, 0))
	{
		return 1;
	}
	if (unk_0x1774A68441553185(iVar0, iParam1) != 1 && unk_0x1774A68441553185(iVar0, iParam1) != 0)
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
	while (iVar0 < unk_0x11B9E7FF50B2F4CC())
	{
		if (unk_0x28E01BEA13B73DF2(unk_0x1C2C3C236D3FE99A(iVar0)))
		{
			uVar2 = unk_0x4572B13EE70C8F52(unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(iVar0)));
			if (!unk_0xB529B2A4B7C64D6D(uVar2, 0))
			{
				fVar4 = unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(iVar2, 1), unk_0xC086F8D75730FA3A(unk_0x0DE80E23B2BD02BD(Local_101[iParam0]), 1));
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
	
	if (!unk_0x1B982A8B37108B3C(Local_101[iParam0]))
	{
		return 0;
	}
	uVar0 = unk_0x9E9133ACB2BCC1D5(Local_101[iParam0]);
	if (unk_0xB529B2A4B7C64D6D(uVar0, 0))
	{
		return 0;
	}
	if (!unk_0x4A478FA962FF575A(iVar0))
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
					unk_0x73998CD31AEFA620(0);
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
		if (unk_0x33688D334D224255())
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
			unk_0x4EA098C870B73AB7(&Global_2313, 20);
			unk_0x4EA098C870B73AB7(&Global_2314, 17);
			unk_0x4EA098C870B73AB7(&Global_2315, 0);
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
			if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
			{
				if (unk_0x534EC97E12C7FCD5(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (func_44())
				{
					return 0;
				}
				if (unk_0x7F86121C9448A9C2(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0x4FF49E77780A0047(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0xC3B01B2627F47C9C(unk_0xD5A676B97920D126(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69697)
				{
					if (unk_0x3ACA21A90E0A949C(unk_0xD5A676B97920D126()))
					{
						return 0;
					}
					if (unk_0xB7FE4CCB71F0CA65(unk_0xFB6B3EEFAB2DD12C()))
					{
						return 0;
					}
					if (unk_0xCF3CEB67F1DDCB15(unk_0xD5A676B97920D126()))
					{
						return 0;
					}
					if (unk_0x6E0061F15FB0EC61(unk_0xFB6B3EEFAB2DD12C()))
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
				if (unk_0xF44A5E894FE76438(Global_2313, 9))
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
	unk_0x73998CD31AEFA620(0);
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
	unk_0x4EA098C870B73AB7(&Global_2314, 16);
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
	
	if (Global_69697)
	{
		iVar0 = 0;
		unk_0x2F29BEC857E6C0AC(unk_0xD5A676B97920D126(), &iVar1, 1);
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x8D80E88CDF0930A8() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (unk_0x59701A6EECDD5EEA(unk_0xD5A676B97920D126(), 78, 1))
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
		if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
		{
			if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[2 /*29*/])
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
		if (Global_69697)
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
	return Global_101652.f_2079.f_539.f_3549;
}

void func_47()
{
	int iVar0;
	
	if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
	{
		if (func_50(Global_101652.f_2079.f_539.f_3549) != unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()))
		{
			iVar0 = func_49(unk_0xD5A676B97920D126());
			if (func_48(iVar0) && (!func_51(14) || Global_100604))
			{
				if (Global_101652.f_2079.f_539.f_3549 != iVar0 && func_48(Global_101652.f_2079.f_539.f_3549))
				{
					Global_101652.f_2079.f_539.f_3550 = Global_101652.f_2079.f_539.f_3549;
				}
				Global_101652.f_2079.f_539.f_3551 = iVar0;
				Global_101652.f_2079.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101652.f_2079.f_539.f_3549 != 145)
			{
				Global_101652.f_2079.f_539.f_3551 = Global_101652.f_2079.f_539.f_3549;
			}
			return;
		}
	}
	Global_101652.f_2079.f_539.f_3549 = 145;
}

bool func_48(int iParam0)
{
	return iParam0 < 3;
}

int func_49(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7887B64A08364778(uParam0))
	{
		iVar1 = unk_0xA0A4DA31DEDFAC4F(uParam0);
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
		return Global_101652.f_26993[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_51(int iParam0)
{
	return Global_35777 == iParam0;
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
				return Global_1352862.f_203[iParam1];
			}
			break;
	}
	return unk_0xF44A5E894FE76438(Global_1352862.f_1015, iParam0);
}

void func_54()
{
	unk_0xB6A622037A2FE913();
	Global_16756 = 0;
	if ((unk_0x982007D3EB9D85D2() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x73998CD31AEFA620(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x33688D334D224255())
	{
		unk_0x73998CD31AEFA620(1);
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
	if (!Global_69697)
	{
		if (!unk_0x00B5B0B68211D89B(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xF2B008953E08940C(uParam2, 0);
			}
			else
			{
				unk_0xF2B008953E08940C(uParam2, 1);
			}
		}
		if (!unk_0x00B5B0B68211D89B(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x59E3D56D355C62DB(uParam2, 0);
			}
			else
			{
				unk_0x59E3D56D355C62DB(uParam2, 1);
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
	if (!unk_0x7AD0E9452821C95D(joaat("s_m_y_marine_01")))
	{
		return 0;
	}
	if (!unk_0x7AD0E9452821C95D(joaat("lazer")))
	{
		return 0;
	}
	if (!unk_0x7AD0E9452821C95D(joaat("s_m_y_pilot_01")))
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
	return unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_39.f_18, 0);
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
	if (Global_1589933[iParam0 /*601*/] == -1)
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
	return unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_13.f_1, 0);
}

void func_65()
{
	unk_0x4ACD1E4CBA159ED1(joaat("s_m_y_marine_01"));
	unk_0x4ACD1E4CBA159ED1(joaat("lazer"));
	unk_0x4ACD1E4CBA159ED1(joaat("s_m_y_pilot_01"));
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
			if (func_62(unk_0xFB6B3EEFAB2DD12C(), 1) || func_61())
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
			if (!func_62(unk_0xFB6B3EEFAB2DD12C(), 1) && !func_61())
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
		if (unk_0x1B982A8B37108B3C(Local_101[iVar0]))
		{
			uVar1 = unk_0x9E9133ACB2BCC1D5(Local_101[iVar0]);
			if (!unk_0xB529B2A4B7C64D6D(uVar1, 0))
			{
				unk_0xD4B3FF1E63C36391(&iVar1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x1B982A8B37108B3C(Local_101.f_3[iVar0 /*5*/].f_1))
		{
			iVar1 = unk_0x9E9133ACB2BCC1D5(Local_101.f_3[iVar0 /*5*/].f_1);
			if (!unk_0xB529B2A4B7C64D6D(iVar1, 0))
			{
				unk_0xD4B3FF1E63C36391(&iVar1);
			}
		}
		if (unk_0x1B982A8B37108B3C(Local_101.f_3[iVar0 /*5*/]))
		{
			uVar2 = unk_0xE95C934718B1A4FF(Local_101.f_3[iVar0 /*5*/]);
			if (!unk_0xB529B2A4B7C64D6D(uVar2, 0))
			{
				unk_0xB24D3BF5DABD13AA(&iVar2);
			}
		}
		iVar0++;
	}
}

int func_68()
{
	if (unk_0xDDCAF6F04D987266() > 1)
	{
		return 0;
	}
	if (unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
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
		if (unk_0x1B982A8B37108B3C(Local_101.f_3[iParam0 /*5*/].f_1))
		{
			if (!unk_0xB529B2A4B7C64D6D(unk_0x9E9133ACB2BCC1D5(Local_101.f_3[iParam0 /*5*/].f_1), 0))
			{
				uVar0 = unk_0x9E9133ACB2BCC1D5(Local_101.f_3[iParam0 /*5*/].f_1);
				Var1 = { unk_0xC086F8D75730FA3A(uVar0, 1) };
				if (Var1.f_2 <= -150f)
				{
					unk_0xD4B3FF1E63C36391(&iVar0);
					if (unk_0x1B982A8B37108B3C(Local_101.f_3[iParam0 /*5*/]))
					{
						if (!unk_0xB529B2A4B7C64D6D(unk_0xE95C934718B1A4FF(Local_101.f_3[iParam0 /*5*/]), 0))
						{
							uVar4 = unk_0xE95C934718B1A4FF(Local_101.f_3[iParam0 /*5*/]);
							unk_0xB24D3BF5DABD13AA(&uVar4);
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
				if (!unk_0x51BB9ECCCA71BF09(Var5, 20f) && !unk_0xBB36CABE30AE5FC4(Var5, 20f))
				{
					if (func_72(Var5, unk_0x714F015B4D2DE1DC(unk_0x4572B13EE70C8F52(Local_101.f_3[iParam0 /*5*/].f_4)), iParam0))
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
			uVar8 = unk_0x4572B13EE70C8F52(Local_101.f_3[iParam0 /*5*/].f_4);
			if (!unk_0x7887B64A08364778(uVar8))
			{
				Local_101.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (unk_0xB529B2A4B7C64D6D(uVar8, 0))
			{
				Local_101.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (unk_0xD6E13289C5649502(iVar8) || unk_0xEDC11DB270927D92(iVar8))
			{
				if (func_71(unk_0x0DBD8FE531FD620D(iVar8, 0)))
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
	while (iVar0 < unk_0x11B9E7FF50B2F4CC())
	{
		if (unk_0x28E01BEA13B73DF2(unk_0x1C2C3C236D3FE99A(iVar0)))
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
	if (unk_0x7887B64A08364778(uParam0))
	{
		if (unk_0xB529B2A4B7C64D6D(uParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xA4DB44DF73EF4FE5(iParam0, 0))
		{
			if (!unk_0xF60B0BCAFB1D30FF(iParam0))
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
	
	if (!unk_0x04DE35D10A718EEF())
	{
		return 1;
	}
	iVar0 = 1;
	if (!unk_0x1B982A8B37108B3C(Local_101.f_3[iParam4 /*5*/]))
	{
		if (!func_74(&(Local_101.f_3[iParam4 /*5*/]), joaat("lazer"), Param0, uParam3, 1, 1, 1, 0, 1, 1, 0))
		{
			iVar0 = 0;
		}
		else
		{
			unk_0x1EC1DAAF33307EFC(unk_0xE95C934718B1A4FF(Local_101.f_3[iParam4 /*5*/]), 3);
		}
	}
	if (unk_0x1B982A8B37108B3C(Local_101.f_3[iParam4 /*5*/]))
	{
		if (!unk_0x1B982A8B37108B3C(Local_101.f_3[iParam4 /*5*/].f_1))
		{
			if (!func_73(&(Local_101.f_3[iParam4 /*5*/].f_1), Local_101.f_3[iParam4 /*5*/], 29, joaat("s_m_y_pilot_01"), -1, 1, 1, 1))
			{
				iVar0 = 0;
			}
			else
			{
				unk_0x48452200A0470A10(unk_0x9E9133ACB2BCC1D5(Local_101.f_3[iParam4 /*5*/].f_1), joaat("vehicle_weapon_space_rocket"));
				unk_0x6FDEE181933A1236(unk_0x9E9133ACB2BCC1D5(Local_101.f_3[iParam4 /*5*/].f_1), 0);
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
	if (!unk_0x4EA5429144EA2576(1))
	{
		return 0;
	}
	if (!unk_0xF6A32456BABBBA74(uParam1))
	{
		return 0;
	}
	if (!unk_0xA4DB44DF73EF4FE5(unk_0xE95C934718B1A4FF(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x3EE3A80A2D8115F8(unk_0x0BD2D83BDCAED6E6(unk_0xE95C934718B1A4FF(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0xF6A32456BABBBA74(*uParam0))
	{
		unk_0x0BD3F78CDD5346A8(unk_0x9E9133ACB2BCC1D5(*uParam0), iParam7);
		if (unk_0xDB6162AABEF41D01(unk_0x9E9133ACB2BCC1D5(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x8D7D9565420EE4B0(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_74(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12)
{
	int iVar0;
	
	if (!unk_0x66A05E630CEC173C(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0xBCDF9E3086B4229C(Param2, 1f, 0, 0, 1, 1, 1);
	}
	iVar0 = unk_0xDE8A46A23FDCBBFE(iParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0xC4BDEBE5421586E5(iVar0);
	if (unk_0xF6A32456BABBBA74(*uParam0))
	{
		unk_0x0BD3F78CDD5346A8(iVar0, iParam10);
		if (unk_0xDB6162AABEF41D01(iVar0))
		{
			if (bParam8)
			{
				unk_0x8D7D9565420EE4B0(*uParam0, 1);
			}
			else
			{
				unk_0x8D7D9565420EE4B0(*uParam0, 0);
			}
		}
		unk_0xC5D75F3BE926D48A(iVar0, iParam9);
		unk_0xB2E0C0D6922D31F2(iVar0, true);
		if (bParam12)
		{
			unk_0xDE6C40B8B4A86A0A(iVar0);
			unk_0x12C2DF66EA2F61B3(iVar0, 5, 5, 1f);
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
	
	uVar0 = unk_0x4572B13EE70C8F52(Local_101.f_3[iParam0 /*5*/].f_4);
	if (unk_0xB529B2A4B7C64D6D(uVar0, 0))
	{
		return 0f, 0f, 0f;
	}
	Var1 = { unk_0x0A0C20E171493CD0(unk_0xC086F8D75730FA3A(iVar0, 1), unk_0x714F015B4D2DE1DC(iVar0), 0f, -250f, (40f * unk_0xBBDA792448DB5A89(iParam0))) };
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
	while (iVar0 < unk_0x11B9E7FF50B2F4CC())
	{
		if (unk_0x28E01BEA13B73DF2(unk_0x1C2C3C236D3FE99A(iVar0)))
		{
			uVar1 = unk_0x4572B13EE70C8F52(unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(iVar0)));
			if (!func_78(unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(iVar0))))
			{
				if (unk_0xD6E13289C5649502(uVar1) || unk_0xEDC11DB270927D92(iVar1))
				{
					if (unk_0xAA5B10AEB58EAA13(unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(iVar0))) >= 4)
					{
						Var2 = { unk_0xC086F8D75730FA3A(iVar1, 0) };
						if (func_10(Var2, 3, 1000, 0) && Var2.f_2 > 90f)
						{
							Local_101.f_3[iParam0 /*5*/].f_4 = unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(iVar0));
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
	
	uVar0 = unk_0x4572B13EE70C8F52(iParam0);
	if (!unk_0x7887B64A08364778(uVar0))
	{
		return 1;
	}
	if (unk_0xB529B2A4B7C64D6D(uVar0, 0))
	{
		return 1;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uVar2 = unk_0x4572B13EE70C8F52(Local_101.f_3[iVar1 /*5*/].f_4);
		if (unk_0x7887B64A08364778(uVar2))
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
	while (iVar0 < unk_0x11B9E7FF50B2F4CC())
	{
		if (unk_0x28E01BEA13B73DF2(unk_0x1C2C3C236D3FE99A(iVar0)))
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
	while (iVar0 < unk_0x11B9E7FF50B2F4CC())
	{
		if (unk_0x28E01BEA13B73DF2(unk_0x1C2C3C236D3FE99A(iVar0)))
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
	while (iVar0 < unk_0x11B9E7FF50B2F4CC())
	{
		if (unk_0x28E01BEA13B73DF2(unk_0x1C2C3C236D3FE99A(iVar0)))
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
	
	if (!unk_0x04DE35D10A718EEF())
	{
		return 1;
	}
	iVar0 = 1;
	if (!func_84(&(Local_101[0]), 29, joaat("s_m_y_marine_01"), -2295.587f, 3377.288f, 30.0601f, 55.8214f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (unk_0x1B982A8B37108B3C(Local_101[0]))
	{
		unk_0x4408969E7EC5C720(unk_0x9E9133ACB2BCC1D5(Local_101[0]), joaat("weapon_assaultrifle"), 200, 1, 1);
	}
	if (!func_84(&(Local_101[1]), 29, joaat("s_m_y_marine_01"), -1597.432f, 2808.987f, 16.1385f, 229.437f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (unk_0x1B982A8B37108B3C(Local_101[1]))
	{
		unk_0x4408969E7EC5C720(unk_0x9E9133ACB2BCC1D5(Local_101[1]), joaat("weapon_assaultrifle"), 200, 1, 1);
	}
	return iVar0;
}

int func_84(var uParam0, int iParam1, int iParam2, struct<3> Param3, float fParam6, bool bParam7, int iParam8, int iParam9)
{
	var uVar0;
	
	if (!unk_0x4EA5429144EA2576(1))
	{
		return 0;
	}
	uVar0 = unk_0x8C855D8124E955CE(iParam1, iParam2, Param3, fParam6, iParam8, bParam7);
	*uParam0 = unk_0x3EE3A80A2D8115F8(uVar0);
	if (unk_0xF6A32456BABBBA74(*uParam0))
	{
		unk_0x0BD3F78CDD5346A8(uVar0, iParam9);
		if (unk_0xDB6162AABEF41D01(iVar0))
		{
			if (bParam7)
			{
				unk_0x8D7D9565420EE4B0(*uParam0, 1);
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
	while (iVar1 < unk_0x11B9E7FF50B2F4CC())
	{
		if (unk_0x28E01BEA13B73DF2(unk_0x1C2C3C236D3FE99A(iVar1)))
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
	while (iVar1 < unk_0x11B9E7FF50B2F4CC())
	{
		if (unk_0x28E01BEA13B73DF2(unk_0x1C2C3C236D3FE99A(iVar1)))
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
	if (Global_1315206 == 0)
	{
		if (!unk_0x1995B52453EF6537())
		{
			return 1;
		}
	}
	if (func_93())
	{
		return 1;
	}
	if (Global_2454699)
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
	if (!unk_0xA4B4423421E91E97())
	{
		return 1;
	}
	if (func_88() != 0)
	{
		if (unk_0xAB964FCFAC3C767A(func_88()) == 0)
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
	return Global_25185;
}

bool func_90()
{
	return Global_2443089.f_577;
}

int func_91(int iParam0)
{
	if (unk_0x74E31F78B0F9A13E(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_92()
{
	return Global_2452479;
}

bool func_93()
{
	return Global_2443089.f_572;
}

void func_94(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x0CC60784D9D609C5(1))
	{
		iVar1 = unk_0x4546DF5AAD2E2B44(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x49897615E4CA227C(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 365:
					func_95(iVar0);
					break;
				
				case 2:
					unk_0x49897615E4CA227C(1, iVar0, &Var4, 3);
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
	
	if (unk_0x49897615E4CA227C(1, iParam0, &Var0, 3))
	{
		if (func_97(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x4572B13EE70C8F52(Var0.f_1);
			if (unk_0x7887B64A08364778(uVar3))
			{
				if (unk_0x6A0583ECFCCECC9B(uVar3, 0))
				{
					uVar4 = unk_0x0DBD8FE531FD620D(uVar3, 0);
					if (unk_0xCC5C4B9DB5D0FF42(uVar4, Var0.f_2) && unk_0x5C565D8FF913FF0D())
					{
						if (func_96(uVar4, &bVar5))
						{
							unk_0x0AB574163629C3BD(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xB24D3BF5DABD13AA(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_96(int iParam0, var uParam1)
{
	if (unk_0x7887B64A08364778(uParam0))
	{
		if (!unk_0x2A29BF08180E7ADF(uParam0))
		{
			if (unk_0x94482DCC4926EF60(uParam0))
			{
				unk_0xC53606C390BE2727(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x67F42C4B7B64C593(uParam0, 0))
		{
			if (unk_0x4A478FA962FF575A(uParam0))
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
		if (unk_0x1E0256D6F1052B31(uParam0))
		{
			if (bParam1)
			{
				if (!unk_0x9BA2465846EC8271(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2433082.f_3[iVar0])
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
	if (unk_0x45C6A8F0909682A6(false) != 5)
	{
		if (func_105(5, 0, 1))
		{
			if (unk_0x1F3C33D4875E4B82(0) <= 5)
			{
				unk_0xAC4AA684E16779D5(5);
			}
		}
	}
	if (unk_0xDE6E41B82C16097D(false) != 3)
	{
		if (func_99(3, 0, 1))
		{
			if (unk_0x7DE9D2F5262709BD(0) <= 3)
			{
				unk_0xF5116E26EBA83CA9(3);
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
	
	if (!unk_0xF44A5E894FE76438(Global_1363465, 0))
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
		if (!bParam4 && Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/] != 3)
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
			return Global_1363465.f_1;
			break;
		
		case 1:
			return Global_1363465.f_2;
			break;
		
		case 2:
			return Global_1363465.f_3;
			break;
	}
	return 0;
}

int func_103(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xFB6B3EEFAB2DD12C();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x5C565D8FF913FF0D())
			{
				return Global_2421621[iVar0 /*358*/].f_212;
			}
			else
			{
				return unk_0x45C6A8F0909682A6(!bParam1);
			}
			break;
		
		case 1:
			if (!unk_0x5C565D8FF913FF0D())
			{
				return Global_2421621[iVar0 /*358*/].f_213;
			}
			else
			{
				return unk_0xDE6E41B82C16097D(!bParam1);
			}
			break;
		
		case 2:
			if (!unk_0x5C565D8FF913FF0D())
			{
				return Global_2421621[iVar0 /*358*/].f_214;
			}
			else
			{
				return unk_0x4B95ADFF26B877A7(!bParam1);
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
			return Global_1363473;
			break;
		
		case 1:
			return Global_1363474;
			break;
		
		case 2:
			return Global_1363475;
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
	
	if (unk_0x1995B52453EF6537())
	{
		if (unk_0x04DE35D10A718EEF())
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
		if (unk_0x6901135DDCC4904D(Local_385.f_172[iVar0]))
		{
			unk_0x8A3D7569826A325D(&(Local_385.f_172[iVar0]));
		}
		iVar0++;
	}
	func_109();
	func_108();
}

void func_108()
{
	unk_0x01DFCA3621B68C4A();
}

void func_109()
{
	if (!Local_385.f_176)
	{
		return;
	}
	if (unk_0x7AD0E9452821C95D(joaat("s_m_y_marine_01")))
	{
		unk_0x8188DB74546FF484(joaat("s_m_y_marine_01"));
	}
	if (unk_0x7AD0E9452821C95D(joaat("lazer")))
	{
		unk_0x8188DB74546FF484(joaat("lazer"));
	}
	if (unk_0x7AD0E9452821C95D(joaat("s_m_y_pilot_01")))
	{
		unk_0x8188DB74546FF484(joaat("s_m_y_pilot_01"));
	}
}

void func_110(struct<20> Param0)
{
	func_114(func_115(Param0.f_0), Param0);
	func_112(0, -1, 0);
	unk_0xAC4AA684E16779D5(5);
	unk_0xF5116E26EBA83CA9(3);
	unk_0x1CB2FF4BC0AF8B2C(&Local_101, 27);
	unk_0x47DDB3A546F48091(&Local_128, 257);
	unk_0x7E85CEE862B85A74(0);
	if (!func_111())
	{
		func_107();
	}
	if (unk_0x2170E7BC25114A22(3))
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
		if (!unk_0x1995B52453EF6537())
		{
			return 0;
		}
		if (unk_0x34AA2E80B3872230())
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
	
	iVar0 = unk_0x1E6D5854F5CCAE3F();
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
				if (!unk_0x1995B52453EF6537())
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
			else if (!unk_0x92DD6B9655D31C6A())
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
		iVar0 = unk_0x1E6D5854F5CCAE3F();
	}
	if (iParam1 > -1)
	{
		Global_1312496 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x1995B52453EF6537())
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
	else if (!unk_0x92DD6B9655D31C6A())
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
	return Global_1315206;
}

void func_114(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x1995B52453EF6537())
	{
		func_108();
	}
	unk_0x6AFFC4188D3C82E8(uParam0, 0, Param1.f_16);
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

