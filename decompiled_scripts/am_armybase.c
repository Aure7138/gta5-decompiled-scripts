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
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
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
	struct<4> Local_48 = { 2, 0, 0, 3 } ;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
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
	var uLocal_72 = 2;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	struct<8> Local_75[32];
	struct<178> Local_332 = { 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0 } ;
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
	sLocal_19 = "NULL";
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
	if (unk_0x4B69FB3A5B09A1BA())
	{
		func_102(ScriptParam_0);
	}
	else
	{
		func_99();
	}
	while (true)
	{
		func_98();
		func_90();
		if (func_79() || unk_0x4F0283431254A343())
		{
			func_99();
		}
		if (unk_0x4B69FB3A5B09A1BA())
		{
			if (func_17())
			{
				func_99();
			}
			if (((((!Global_1573335 && !func_16(2)) && !func_13(unk_0xCFC72E446B0B3AD7(), 0)) && !unk_0x2D8FCFBC4E01FF7C()) && unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7())) && !func_11(unk_0xCFC72E446B0B3AD7()))
			{
				if (func_10(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), 3, 1000, 0) || func_9(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), 1000))
				{
					if (!unk_0x94E72F17611BCD3C(Global_2446533.f_4391, 0))
					{
						if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
						{
							if (unk_0xC438EC3E56EB640E(unk_0x9F92518438215DD0()) || unk_0x8524DF00FC9C3785(unk_0x9F92518438215DD0()))
							{
								if (func_10(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), 3, 0, 0) || func_9(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), 0))
								{
									if (unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) < 4)
									{
										unk_0x777AE0DF0ACDFB88(unk_0xCFC72E446B0B3AD7(), 36, (unk_0x857DD3231F8FBD70(4) - unk_0x857DD3231F8FBD70(unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()))));
									}
									else
									{
										unk_0xF912A3B3E4B4658A(unk_0xCFC72E446B0B3AD7());
									}
								}
								else if (!func_8(&(Local_332.f_3)))
								{
									func_5(&(Local_332.f_3));
								}
								else if (func_2(&(Local_332.f_3)) > 20f || Local_332.f_177)
								{
									if (unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) < 4)
									{
										unk_0x777AE0DF0ACDFB88(unk_0xCFC72E446B0B3AD7(), 36, (unk_0x857DD3231F8FBD70(4) - unk_0x857DD3231F8FBD70(unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()))));
									}
									else
									{
										unk_0xF912A3B3E4B4658A(unk_0xCFC72E446B0B3AD7());
									}
								}
							}
							else if (unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) < 4)
							{
								unk_0x777AE0DF0ACDFB88(unk_0xCFC72E446B0B3AD7(), 36, (unk_0x857DD3231F8FBD70(4) - unk_0x857DD3231F8FBD70(unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()))));
							}
							else
							{
								unk_0xF912A3B3E4B4658A(unk_0xCFC72E446B0B3AD7());
							}
						}
						else
						{
							if (func_8(&(Local_332.f_3)))
							{
								func_1(&(Local_332.f_3));
							}
							if (Local_332.f_177)
							{
								Local_332.f_177 = 0;
							}
						}
					}
					else if (!Local_332.f_177)
					{
						Local_332.f_177 = 1;
					}
				}
				else if (Local_332.f_177)
				{
					Local_332.f_177 = 0;
				}
			}
		}
		else
		{
			func_99();
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
			return (func_3(unk_0x94E72F17611BCD3C(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_3(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x17103F66FBB44C3C()) / 1000f);
	}
	if (unk_0x4B69FB3A5B09A1BA())
	{
		iVar0 = unk_0x6A8628B6E9F055B3();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x17103F66FBB44C3C()) / 1000f);
}

bool func_4(var uParam0)
{
	return unk_0x94E72F17611BCD3C(*uParam0, 2);
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
	uParam0->f_1 = (func_3(unk_0x94E72F17611BCD3C(*uParam0, 4)) - fParam1);
	unk_0xEDB9A377CD8B7F03(uParam0, 1);
	unk_0xF76EE56D3E7DAF1B(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_8(var uParam0)
{
	return unk_0x94E72F17611BCD3C(*uParam0, 1);
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
		if (unk_0xABDC7B22D1A3C451(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], iVar110, 1))
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
		if (unk_0xABDC7B22D1A3C451(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], iVar110, 1))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

int func_11(int iParam0)
{
	if (func_13(iParam0, 0))
	{
		return 1;
	}
	if (func_12())
	{
		if (iParam0 == unk_0xCFC72E446B0B3AD7())
		{
			return 1;
		}
	}
	if (unk_0x94E72F17611BCD3C(Global_2414035[iParam0 /*254*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_12()
{
	return unk_0x94E72F17611BCD3C(Global_2359301, 3);
}

bool func_13(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xCFC72E446B0B3AD7())
	{
		bVar0 = func_14(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582869[iParam0 /*332*/].f_188 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xCB29E1C3D086FBAE(iParam0))
		{
			bVar0 = unk_0x59A4BF97B76AD953(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_14(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_15();
	}
	if (Global_1315877[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312731[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_15()
{
	return Global_1312737;
}

bool func_16(int iParam0)
{
	return unk_0x94E72F17611BCD3C(Global_1573334, iParam0);
}

int func_17()
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x7EF90A4891193127())
	{
		if (func_58())
		{
			iVar0 = 1;
		}
	}
	if (func_18())
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_18()
{
	int iVar0;
	
	switch (Local_332.f_6)
	{
		case 0:
			func_57();
			if (func_54(unk_0xCFC72E446B0B3AD7(), 1) && func_53())
			{
				unk_0x60DAE84D0B296FD2(joaat("rhino"), 1);
			}
			func_51(&(Local_75[unk_0x9725084D4DFE8258() /*8*/]), 1);
			Local_332.f_176 = 1;
			Local_332.f_6 = 1;
			break;
		
		case 1:
			if (func_50())
			{
				func_51(&(Local_75[unk_0x9725084D4DFE8258() /*8*/]), 2);
				Local_332.f_6 = 2;
			}
			break;
		
		case 2:
			if (func_49(Local_48.f_20, 1))
			{
				Local_332.f_6 = 3;
			}
			break;
		
		case 3:
			if (!func_54(unk_0xCFC72E446B0B3AD7(), 1) && !func_53())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_26(iVar0);
					iVar0++;
				}
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				func_19(iVar0);
				iVar0++;
			}
			if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
			{
				Local_332.f_6 = 4;
			}
			break;
		
		case 4:
			if (func_54(unk_0xCFC72E446B0B3AD7(), 1) && func_53())
			{
				unk_0x60DAE84D0B296FD2(joaat("rhino"), 0);
			}
			return 1;
			break;
	}
	return 0;
}

void func_19(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (Local_48.f_3[iParam0 /*5*/].f_2 > 2 && unk_0x62FC9AA71A0BB8DB(Local_48.f_3[iParam0 /*5*/]))
	{
		if (unk_0x0BA451447C3B1A8D(unk_0x1349078BE884A8E7(Local_48.f_3[iParam0 /*5*/])))
		{
			if (unk_0x2E6E8D325977B3EC(Local_332.f_172[iParam0]))
			{
				unk_0x0451B5D93A4BDAA0(&(Local_332.f_172[iParam0]));
			}
		}
		else if (!unk_0x2E6E8D325977B3EC(Local_332.f_172[iParam0]) && unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) >= 2)
		{
			Local_332.f_172[iParam0] = unk_0x5304FE8A2CED6AE8(unk_0x6394B7AC14B39864(Local_48.f_3[iParam0 /*5*/]));
			unk_0x016722B6E0559A9A(Local_332.f_172[iParam0], 1);
		}
	}
	else if (unk_0x2E6E8D325977B3EC(Local_332.f_172[iParam0]))
	{
		unk_0x0451B5D93A4BDAA0(&(Local_332.f_172[iParam0]));
	}
	switch (Local_48.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (!func_25(Local_75[unk_0x9725084D4DFE8258() /*8*/].f_4[iParam0], 16))
			{
				Local_75[unk_0x9725084D4DFE8258() /*8*/].f_4[iParam0] = 0;
				func_24(&(Local_75[unk_0x9725084D4DFE8258() /*8*/].f_4[iParam0]), 16);
			}
			break;
		
		case 1:
			if (!func_25(Local_75[unk_0x9725084D4DFE8258() /*8*/].f_4[iParam0], 1))
			{
				if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
				{
					if (unk_0xC438EC3E56EB640E(unk_0x9F92518438215DD0()) || unk_0x8524DF00FC9C3785(unk_0x9F92518438215DD0()))
					{
						if (unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) >= 4)
						{
							if (func_10(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), 3, 500, 0))
							{
								func_24(&(Local_75[unk_0x9725084D4DFE8258() /*8*/].f_4[iParam0]), 1);
							}
						}
					}
				}
			}
			break;
		
		case 2:
			break;
		
		case 3:
			if (!func_25(Local_75[unk_0x9725084D4DFE8258() /*8*/].f_4[iParam0], 2))
			{
				if (func_23(iParam0))
				{
					uVar2 = unk_0x4E6043D225B9C75F(Local_48.f_3[iParam0 /*5*/].f_4);
					uVar0 = unk_0x3CD0885BEAA1EC4B(Local_48.f_3[iParam0 /*5*/].f_1);
					uVar1 = unk_0x1349078BE884A8E7(Local_48.f_3[iParam0 /*5*/]);
					if (!unk_0x0BA451447C3B1A8D(uVar2))
					{
						if (unk_0xC438EC3E56EB640E(uVar2))
						{
							uVar3 = unk_0x1161215F69587BDA(uVar2, 0);
							if ((!unk_0x0BA451447C3B1A8D(uVar0) && !unk_0x0BA451447C3B1A8D(uVar1)) && !unk_0x0BA451447C3B1A8D(uVar3))
							{
								unk_0x6A3A0F12B1081E17(uVar0, uVar1, uVar3, uVar2, unk_0x77009B1C011405A9(uVar2, 1), 6, 70f, -1f, 30f, 500, 50);
								unk_0x65653252F1467F42(uVar0, joaat("vehicle_weapon_space_rocket"));
								unk_0xF48CD04AB4222AD4(uVar0, 0);
							}
						}
					}
				}
				if (func_22(iParam0))
				{
					uVar0 = unk_0x3CD0885BEAA1EC4B(Local_48.f_3[iParam0 /*5*/].f_1);
					iVar2 = unk_0x4E6043D225B9C75F(Local_48.f_3[iParam0 /*5*/].f_4);
					if (!unk_0x0BA451447C3B1A8D(iVar2))
					{
						if (unk_0xC438EC3E56EB640E(iVar2))
						{
							unk_0xEEDE753852DA35A9(uVar0, iVar2, unk_0x77009B1C011405A9(iVar2, 1));
						}
					}
				}
				if (func_21(iParam0, 6))
				{
					func_24(&(Local_75[unk_0x9725084D4DFE8258() /*8*/].f_4[iParam0]), 2);
				}
			}
			break;
		
		case 4:
			break;
		
		case 5:
			if (!func_25(Local_75[unk_0x9725084D4DFE8258() /*8*/].f_4[iParam0], 8))
			{
				if (func_23(iParam0))
				{
					uVar0 = unk_0x3CD0885BEAA1EC4B(Local_48.f_3[iParam0 /*5*/].f_1);
					uVar1 = unk_0x1349078BE884A8E7(Local_48.f_3[iParam0 /*5*/]);
					if (!unk_0x0BA451447C3B1A8D(uVar0) && !unk_0x0BA451447C3B1A8D(uVar1))
					{
						unk_0x6A3A0F12B1081E17(iVar0, iVar1, 0, 0, -2076.374f, 3112.294f, 33.13584f, 9, 70f, -1f, 30f, 500, 50);
					}
				}
				if (func_21(iParam0, 9))
				{
					func_24(&(Local_75[unk_0x9725084D4DFE8258() /*8*/].f_4[iParam0]), 8);
				}
			}
			break;
		
		case 6:
			if (unk_0x53C457DC61CBEBCA(Local_48.f_3[iParam0 /*5*/]) || unk_0x53C457DC61CBEBCA(Local_48.f_3[iParam0 /*5*/].f_1))
			{
				if (!unk_0xE298336AB6E66F7E(unk_0x77009B1C011405A9(unk_0x6394B7AC14B39864(Local_48.f_3[iParam0 /*5*/]), 0), 10f) && !unk_0x83EA7E3BB22A37FF(unk_0x77009B1C011405A9(unk_0x6394B7AC14B39864(Local_48.f_3[iParam0 /*5*/]), 0), 10f))
				{
					if (unk_0x62FC9AA71A0BB8DB(Local_48.f_3[iParam0 /*5*/].f_1) && unk_0x34CE5EC4D87561E4(Local_48.f_3[iParam0 /*5*/].f_1))
					{
						uVar4 = unk_0x6394B7AC14B39864(Local_48.f_3[iParam0 /*5*/].f_1);
						unk_0xAB5ECB7EFE6A4784(&uVar4);
					}
					if (unk_0x62FC9AA71A0BB8DB(Local_48.f_3[iParam0 /*5*/]) && unk_0x34CE5EC4D87561E4(Local_48.f_3[iParam0 /*5*/]))
					{
						uVar5 = unk_0x6394B7AC14B39864(Local_48.f_3[iParam0 /*5*/]);
						unk_0xAB5ECB7EFE6A4784(&uVar5);
					}
				}
			}
			else if (func_25(Local_75[unk_0x9725084D4DFE8258() /*8*/].f_4[iParam0], 16))
			{
				func_20(&(Local_75[unk_0x9725084D4DFE8258() /*8*/].f_4[iParam0]), 16);
			}
			break;
	}
}

void func_20(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_21(int iParam0, int iParam1)
{
	var uVar0;
	
	if (!unk_0x62FC9AA71A0BB8DB(Local_48.f_3[iParam0 /*5*/]))
	{
		return 1;
	}
	uVar0 = unk_0x1349078BE884A8E7(Local_48.f_3[iParam0 /*5*/]);
	if (unk_0x0BA451447C3B1A8D(uVar0))
	{
		return 1;
	}
	if (unk_0x1A948771377D072A(iVar0) != iParam1)
	{
		return 0;
	}
	return 1;
}

int func_22(int iParam0)
{
	var uVar0;
	
	if (!unk_0x62FC9AA71A0BB8DB(Local_48.f_3[iParam0 /*5*/].f_1))
	{
		return 0;
	}
	uVar0 = unk_0x3CD0885BEAA1EC4B(Local_48.f_3[iParam0 /*5*/].f_1);
	if (unk_0x0BA451447C3B1A8D(uVar0))
	{
		return 0;
	}
	if (!unk_0x88A3865085DFB7AD(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_23(int iParam0)
{
	var uVar0;
	
	if (!unk_0x62FC9AA71A0BB8DB(Local_48.f_3[iParam0 /*5*/]))
	{
		return 0;
	}
	uVar0 = unk_0x1349078BE884A8E7(Local_48.f_3[iParam0 /*5*/]);
	if (unk_0x0BA451447C3B1A8D(uVar0))
	{
		return 0;
	}
	if (!unk_0x88A3865085DFB7AD(iVar0))
	{
		return 0;
	}
	return 1;
}

void func_24(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_25(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_26(int iParam0)
{
	var uVar0;
	
	if (!unk_0x62FC9AA71A0BB8DB(Local_48[iParam0]))
	{
		return;
	}
	uVar0 = unk_0x3CD0885BEAA1EC4B(Local_48[iParam0]);
	if (unk_0x0BA451447C3B1A8D(uVar0))
	{
		return;
	}
	switch (Local_48.f_21[iParam0])
	{
		case 0:
			if (!func_25(Local_75[unk_0x9725084D4DFE8258() /*8*/].f_1[iParam0], 64))
			{
				Local_75[unk_0x9725084D4DFE8258() /*8*/].f_1[iParam0] = 0;
				func_24(&(Local_75[unk_0x9725084D4DFE8258() /*8*/].f_1[iParam0]), 64);
			}
			break;
		
		case 1:
			if (!func_25(Local_75[unk_0x9725084D4DFE8258() /*8*/].f_1[iParam0], 1))
			{
				if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(iVar0, 1)) <= 900f)
					{
						func_24(&(Local_75[unk_0x9725084D4DFE8258() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 2:
			if (!func_25(Local_75[unk_0x9725084D4DFE8258() /*8*/].f_1[iParam0], 2) && unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(iVar0, 1)) <= 900f)
			{
				func_48(&(Local_332.f_7), 4, iVar0, "ARMY_Guard01", 0, 1);
				func_31(&(Local_332.f_7), "ARMYAUD", "ARMY_WRN1", 12, 0, 0, 0);
				func_24(&(Local_75[unk_0x9725084D4DFE8258() /*8*/].f_1[iParam0]), 2);
			}
			break;
		
		case 3:
			if (!func_25(Local_75[unk_0x9725084D4DFE8258() /*8*/].f_1[iParam0], 4))
			{
				if (func_30(iParam0))
				{
					unk_0xF58859AEB2D983FE(iVar0, func_29(iParam0), -1, 0);
				}
				if (func_28(iParam0, 1630799643))
				{
					func_24(&(Local_75[unk_0x9725084D4DFE8258() /*8*/].f_1[iParam0]), 4);
				}
			}
			break;
		
		case 4:
			if ((!func_25(Local_75[unk_0x9725084D4DFE8258() /*8*/].f_1[iParam0], 8) && unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), unk_0x77009B1C011405A9(iVar0, 1)) <= 900f) && unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) < 1)
			{
				if (!func_8(&Local_332))
				{
					func_5(&Local_332);
				}
				if (func_2(&Local_332) >= 7f)
				{
					func_24(&(Local_75[unk_0x9725084D4DFE8258() /*8*/].f_1[iParam0]), 8);
					func_31(&(Local_332.f_7), "ARMYAUD", "ARMY_WRN1a", 12, 0, 0, 0);
				}
			}
			else if (func_8(&Local_332))
			{
				func_1(&Local_332);
			}
			if (!func_25(Local_75[unk_0x9725084D4DFE8258() /*8*/].f_1[iParam0], 16))
			{
				if (func_27(iParam0) && unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), unk_0x77009B1C011405A9(iVar0, 1)) <= 900f)
				{
					func_24(&(Local_75[unk_0x9725084D4DFE8258() /*8*/].f_1[iParam0]), 16);
					unk_0x777AE0DF0ACDFB88(unk_0xCFC72E446B0B3AD7(), 36, unk_0x857DD3231F8FBD70(4));
				}
			}
			if (func_25(Local_75[unk_0x9725084D4DFE8258() /*8*/].f_1[iParam0], 1))
			{
				if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(iVar0, 1)) > 900f)
					{
						func_20(&(Local_75[unk_0x9725084D4DFE8258() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 5:
			if (!func_25(Local_75[unk_0x9725084D4DFE8258() /*8*/].f_1[iParam0], 16))
			{
				if (func_27(iParam0) && unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), unk_0x77009B1C011405A9(iVar0, 1)) <= 900f)
				{
					func_24(&(Local_75[unk_0x9725084D4DFE8258() /*8*/].f_1[iParam0]), 16);
					unk_0x777AE0DF0ACDFB88(unk_0xCFC72E446B0B3AD7(), 36, (unk_0x857DD3231F8FBD70(4) - unk_0x857DD3231F8FBD70(unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()))));
				}
			}
			if (func_25(Local_75[unk_0x9725084D4DFE8258() /*8*/].f_1[iParam0], 1))
			{
				if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(iVar0, 1)) > 900f)
					{
						func_20(&(Local_75[unk_0x9725084D4DFE8258() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			if (!func_28(iParam0, 1630799643))
			{
				if (func_30(iParam0))
				{
					unk_0xF58859AEB2D983FE(iVar0, func_29(iParam0), -1, 0);
				}
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (func_25(Local_75[unk_0x9725084D4DFE8258() /*8*/].f_1[iParam0], 4))
			{
				if (func_30(iParam0))
				{
					unk_0x32D18ECD9E6F9BE2(iVar0);
				}
				if (!func_28(iParam0, 1435919172))
				{
					func_20(&(Local_75[unk_0x9725084D4DFE8258() /*8*/].f_1[iParam0]), 4);
					func_20(&(Local_75[unk_0x9725084D4DFE8258() /*8*/].f_1[iParam0]), 64);
				}
			}
			break;
	}
}

int func_27(int iParam0)
{
	var uVar0;
	
	if (!unk_0x62FC9AA71A0BB8DB(Local_48[iParam0]))
	{
		return 0;
	}
	uVar0 = unk_0x3CD0885BEAA1EC4B(Local_48[iParam0]);
	if (unk_0x0BA451447C3B1A8D(uVar0))
	{
		return 0;
	}
	if (unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
	{
		return 0;
	}
	if (unk_0x4A4902C6AC8DCB7E(unk_0x9F92518438215DD0()))
	{
		return 1;
	}
	if (unk_0xB7F4FC4B0BBF8285(unk_0xCFC72E446B0B3AD7(), iVar0))
	{
		return 1;
	}
	if (unk_0xEA02B89C167BF0E3(unk_0xCFC72E446B0B3AD7(), iVar0))
	{
		return 1;
	}
	if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(iVar0, 1)) <= 64f)
	{
		return 1;
	}
	return 0;
}

int func_28(int iParam0, int iParam1)
{
	var uVar0;
	
	if (!unk_0x62FC9AA71A0BB8DB(Local_48[iParam0]))
	{
		return 1;
	}
	uVar0 = unk_0x3CD0885BEAA1EC4B(Local_48[iParam0]);
	if (unk_0x0BA451447C3B1A8D(uVar0))
	{
		return 1;
	}
	if (unk_0xE962BD784DD0E442(iVar0, iParam1) != 1 && unk_0xE962BD784DD0E442(iVar0, iParam1) != 0)
	{
		return 0;
	}
	return 1;
}

var func_29(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	float fVar3;
	float fVar4;
	
	fVar3 = 1E+11f;
	iVar0 = 0;
	while (iVar0 < unk_0x0C20B275AC51DD95())
	{
		if (unk_0xD3AFE733DFF53CF5(unk_0x7DB5D4F6F4C81C82(iVar0)))
		{
			uVar2 = unk_0x4E6043D225B9C75F(unk_0xA6118988A879C889(unk_0x7DB5D4F6F4C81C82(iVar0)));
			if (!unk_0x0BA451447C3B1A8D(uVar2))
			{
				fVar4 = unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(iVar2, 1), unk_0x77009B1C011405A9(unk_0x6394B7AC14B39864(Local_48[iParam0]), 1));
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

int func_30(int iParam0)
{
	var uVar0;
	
	if (!unk_0x62FC9AA71A0BB8DB(Local_48[iParam0]))
	{
		return 0;
	}
	uVar0 = unk_0x3CD0885BEAA1EC4B(Local_48[iParam0]);
	if (unk_0x0BA451447C3B1A8D(uVar0))
	{
		return 0;
	}
	if (!unk_0x88A3865085DFB7AD(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_31(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_47(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15699 = 0;
	Global_15701 = 0;
	Global_15706 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_2621441 = 1;
	return func_32(sParam2, iParam3, 0);
}

int func_32(char* sParam0, int iParam1, bool bParam2)
{
	Global_15693 = 0;
	if (Global_15692 == 0 || Global_15694 == 2)
	{
		if (Global_15692 != 0)
		{
			if (iParam1 > Global_15694)
			{
				if (Global_15699 == 0)
				{
					unk_0xC318E8D9E0AA1394(0);
					Global_14393.f_1 = 3;
					Global_15692 = 0;
					Global_15693 = 1;
					Global_15745 = 0;
					Global_15688 = 0;
					Global_15689 = 0;
					Global_15703 = 0;
					Global_15702 = 0;
					Global_14392 = 0;
				}
				else
				{
					func_46();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xDFF00E8709AA7095())
		{
			return 0;
		}
		if (func_45(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_44();
		Global_14981 = { Global_15146 };
		Global_15698 = Global_15699;
		Global_15705 = Global_15706;
		Global_2621442 = Global_2621441;
		Global_15707 = { Global_15723 };
		Global_15700 = Global_15701;
		Global_16682 = Global_16683;
		Global_16690 = { Global_16696 };
		Global_16684 = Global_16685;
		Global_16686 = Global_16687;
		Global_16688 = Global_16689;
		Global_15311.f_370 = Global_16681;
		Global_15311.f_368 = Global_16679;
		Global_15311.f_369 = Global_16680;
		Global_15688 = Global_15689;
		if (Global_15698)
		{
			unk_0xF76EE56D3E7DAF1B(&Global_2263, 20);
			unk_0xF76EE56D3E7DAF1B(&Global_2264, 17);
			unk_0xF76EE56D3E7DAF1B(&Global_2265, 0);
			if (bParam2)
			{
				func_37();
				if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14393.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14359 == 1)
			{
				return 0;
			}
			if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
			{
				if (unk_0xF9AED6291438A448(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (func_36())
				{
					return 0;
				}
				if (unk_0x29652A1660936FDB(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (unk_0xA75CD3E8519BDC0D(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (unk_0x963737771EA06D79(unk_0x9F92518438215DD0(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68245)
				{
					if (unk_0x5BFFEED2EB6664D5(unk_0x9F92518438215DD0()))
					{
						return 0;
					}
					if (unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7()))
					{
						return 0;
					}
					if (unk_0x5EE181A2C8679F09(unk_0x9F92518438215DD0()))
					{
						return 0;
					}
					if (unk_0x2AD403FEE60639F3(unk_0xCFC72E446B0B3AD7()))
					{
						return 0;
					}
				}
			}
			if (func_35())
			{
				return 0;
			}
			else
			{
				switch (Global_14393.f_1)
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
				if (unk_0x94E72F17611BCD3C(Global_2263, 9))
				{
					return 0;
				}
			}
			func_34();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_33();
		return 1;
	}
	if (Global_15692 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15694 || iParam1 == Global_15694)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_46();
	}
	return 0;
}

void func_33()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xC318E8D9E0AA1394(0);
	Global_15692 = 1;
}

void func_34()
{
	Global_15745 = Global_15744;
	Global_15739 = Global_15740;
	Global_15786 = { Global_15774 };
	Global_15792 = { Global_15780 };
	Global_15747 = Global_15746;
	Global_15816 = { Global_15798 };
	Global_15822 = { Global_15804 };
	Global_15828 = { Global_15810 };
	Global_15834 = { Global_15840 };
	Global_1578 = Global_1579;
	Global_1580 = Global_1581;
	Global_15703 = Global_15704;
	Global_15705 = Global_15706;
	Global_15707 = { Global_15723 };
	Global_15696 = Global_15697;
	Global_16708 = 0;
	Global_15741 = 0;
	Global_15742 = 0;
	unk_0xF76EE56D3E7DAF1B(&Global_2264, 16);
}

int func_35()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_36()
{
	int iVar0;
	int iVar1;
	
	if (Global_68245)
	{
		iVar0 = 0;
		unk_0x9DA0F3A686A566A6(unk_0x9F92518438215DD0(), &iVar1, 1);
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5CC26ADF98AA54C9() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		if (unk_0xD1C0C220414EB327(unk_0x9F92518438215DD0(), 78, 1))
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

void func_37()
{
	if (func_43(14))
	{
		if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
		{
			if (unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[2 /*29*/])
			{
				Global_14393 = 2;
			}
			else
			{
				Global_14393 = 0;
			}
		}
	}
	else
	{
		Global_14393 = func_38();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68245)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

var func_38()
{
	func_39();
	return Global_97358.f_1729.f_539.f_3213;
}

void func_39()
{
	int iVar0;
	
	if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
	{
		if (func_42(Global_97358.f_1729.f_539.f_3213) != unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()))
		{
			iVar0 = func_41(unk_0x9F92518438215DD0());
			if (func_40(iVar0) && (!func_43(14) || Global_96311))
			{
				if (Global_97358.f_1729.f_539.f_3213 != iVar0 && func_40(Global_97358.f_1729.f_539.f_3213))
				{
					Global_97358.f_1729.f_539.f_3214 = Global_97358.f_1729.f_539.f_3213;
				}
				Global_97358.f_1729.f_539.f_3215 = iVar0;
				Global_97358.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97358.f_1729.f_539.f_3213 != 145)
			{
				Global_97358.f_1729.f_539.f_3215 = Global_97358.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97358.f_1729.f_539.f_3213 = 145;
}

bool func_40(int iParam0)
{
	return iParam0 < 3;
}

int func_41(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x746960881FB19A89(uParam0))
	{
		iVar1 = unk_0xB6A50C909A8FABC3(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_42(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_42(int iParam0)
{
	if (func_40(iParam0))
	{
		return Global_97358.f_29774[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_43(int iParam0)
{
	return Global_34913 == iParam0;
}

void func_44()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14981[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14981[iVar0 /*10*/].f_1), "", 24);
		Global_14981[iVar0 /*10*/].f_7 = 0;
		Global_14981[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14981.f_161 = -99;
	Global_14981.f_162 = { 0f, 0f, 0f };
}

bool func_45(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327593.f_203[iParam1];
			}
			break;
	}
	return unk_0x94E72F17611BCD3C(Global_1327593.f_949, iParam0);
}

void func_46()
{
	unk_0xAD3949CD5FADCA61();
	Global_16703 = 0;
	if ((unk_0x71F866C9C77F9B9F() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xC318E8D9E0AA1394(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0xDFF00E8709AA7095())
	{
		unk_0xC318E8D9E0AA1394(1);
		Global_15692 = 6;
		return;
	}
}

void func_47(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = uParam5;
	if (iParam3 == 0)
	{
		Global_16679 = 1;
		Global_16677 = 0;
	}
	else
	{
		Global_16679 = 0;
		Global_16677 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
}

void func_48(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68245)
	{
		if (!unk_0x3E0478C40AB5B38D(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xF25BFC104A163677(uParam2, 0);
			}
			else
			{
				unk_0xF25BFC104A163677(uParam2, 1);
			}
		}
		if (!unk_0x3E0478C40AB5B38D(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x12977F077B942364(uParam2, 0);
			}
			else
			{
				unk_0x12977F077B942364(uParam2, 1);
			}
		}
	}
}

bool func_49(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_50()
{
	if (!unk_0x149162179DBAEDB0(joaat("s_m_y_marine_01")))
	{
		return 0;
	}
	if (!unk_0x149162179DBAEDB0(joaat("lazer")))
	{
		return 0;
	}
	if (!unk_0x149162179DBAEDB0(joaat("s_m_y_pilot_01")))
	{
		return 0;
	}
	return 1;
}

void func_51(var uParam0, int iParam1)
{
	func_52(uParam0, iParam1);
}

void func_52(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_53()
{
	return unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_39.f_18, 0);
}

int func_54(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_55(iParam0))
		{
			return 1;
		}
	}
	if (Global_1582869[iParam0 /*332*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_55(int iParam0)
{
	return func_56(iParam0);
}

bool func_56(int iParam0)
{
	return unk_0x94E72F17611BCD3C(Global_1582869[iParam0 /*332*/].f_13.f_1, 0);
}

void func_57()
{
	unk_0x3BC6D217451D6BB7(joaat("s_m_y_marine_01"));
	unk_0x3BC6D217451D6BB7(joaat("lazer"));
	unk_0x3BC6D217451D6BB7(joaat("s_m_y_pilot_01"));
}

int func_58()
{
	int iVar0;
	
	switch (Local_48.f_19)
	{
		case 0:
			if (func_78())
			{
				Local_48.f_19 = 1;
			}
			break;
		
		case 1:
			if (func_77())
			{
				Local_48.f_19 = 2;
			}
			break;
		
		case 2:
			if (func_54(unk_0xCFC72E446B0B3AD7(), 1) || func_53())
			{
				func_51(&(Local_48.f_20), 1);
				Local_48.f_19 = 3;
			}
			else if (func_75())
			{
				func_51(&(Local_48.f_20), 1);
				Local_48.f_19 = 3;
			}
			break;
		
		case 3:
			if (!func_54(unk_0xCFC72E446B0B3AD7(), 1) && !func_53())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_72(iVar0);
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 < 3)
				{
					func_61(iVar0);
					iVar0++;
				}
			}
			if (func_60())
			{
				Local_48.f_19 = 4;
			}
			break;
		
		case 4:
			func_59();
			return 1;
			break;
	}
	return 0;
}

void func_59()
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x62FC9AA71A0BB8DB(Local_48[iVar0]))
		{
			uVar1 = unk_0x3CD0885BEAA1EC4B(Local_48[iVar0]);
			if (!unk_0x0BA451447C3B1A8D(uVar1))
			{
				unk_0x995B3705D02B0401(&iVar1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x62FC9AA71A0BB8DB(Local_48.f_3[iVar0 /*5*/].f_1))
		{
			iVar1 = unk_0x3CD0885BEAA1EC4B(Local_48.f_3[iVar0 /*5*/].f_1);
			if (!unk_0x0BA451447C3B1A8D(iVar1))
			{
				unk_0x995B3705D02B0401(&iVar1);
			}
		}
		if (unk_0x62FC9AA71A0BB8DB(Local_48.f_3[iVar0 /*5*/]))
		{
			uVar2 = unk_0x1349078BE884A8E7(Local_48.f_3[iVar0 /*5*/]);
			if (!unk_0x0BA451447C3B1A8D(uVar2))
			{
				unk_0x9187463EB4918A4D(&iVar2);
			}
		}
		iVar0++;
	}
}

int func_60()
{
	if (unk_0xFD5830093F5D6BD4() > 1)
	{
		return 0;
	}
	if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
	{
		return 1;
	}
	return 0;
}

void func_61(int iParam0)
{
	var uVar0;
	struct<3> Var1;
	var uVar4;
	struct<3> Var5;
	var uVar8;
	
	if (Local_48.f_3[iParam0 /*5*/].f_2 > 2)
	{
		if (unk_0x62FC9AA71A0BB8DB(Local_48.f_3[iParam0 /*5*/].f_1))
		{
			if (!unk_0x0BA451447C3B1A8D(unk_0x3CD0885BEAA1EC4B(Local_48.f_3[iParam0 /*5*/].f_1)))
			{
				uVar0 = unk_0x3CD0885BEAA1EC4B(Local_48.f_3[iParam0 /*5*/].f_1);
				Var1 = { unk_0x77009B1C011405A9(uVar0, 1) };
				if (Var1.f_2 <= -150f)
				{
					unk_0x995B3705D02B0401(&iVar0);
					if (unk_0x62FC9AA71A0BB8DB(Local_48.f_3[iParam0 /*5*/]))
					{
						if (!unk_0x0BA451447C3B1A8D(unk_0x1349078BE884A8E7(Local_48.f_3[iParam0 /*5*/])))
						{
							uVar4 = unk_0x1349078BE884A8E7(Local_48.f_3[iParam0 /*5*/]);
							unk_0x9187463EB4918A4D(&uVar4);
						}
					}
				}
			}
		}
	}
	switch (Local_48.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (func_71(iParam0, 16))
			{
				Local_48.f_3[iParam0 /*5*/].f_4 = -1;
				Local_48.f_3[iParam0 /*5*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (func_69(iParam0))
			{
				Local_48.f_3[iParam0 /*5*/].f_2 = 2;
			}
			break;
		
		case 2:
			Var5 = { func_68(iParam0) };
			if (!func_67(Var5))
			{
				if (!unk_0x83EA7E3BB22A37FF(Var5, 20f) && !unk_0xE298336AB6E66F7E(Var5, 20f))
				{
					if (func_64(Var5, unk_0xE691E4EA6B4440C6(unk_0x4E6043D225B9C75F(Local_48.f_3[iParam0 /*5*/].f_4)), iParam0))
					{
						Local_48.f_3[iParam0 /*5*/].f_2 = 3;
					}
				}
			}
			break;
		
		case 3:
			if (func_71(iParam0, 2))
			{
				Local_48.f_3[iParam0 /*5*/].f_2 = 4;
			}
			break;
		
		case 4:
			uVar8 = unk_0x4E6043D225B9C75F(Local_48.f_3[iParam0 /*5*/].f_4);
			if (!unk_0x746960881FB19A89(uVar8))
			{
				Local_48.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (unk_0x0BA451447C3B1A8D(uVar8))
			{
				Local_48.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (unk_0xC438EC3E56EB640E(iVar8) || unk_0x8524DF00FC9C3785(iVar8))
			{
				if (func_63(unk_0x1161215F69587BDA(iVar8, 0)))
				{
					Local_48.f_3[iParam0 /*5*/].f_2 = 5;
				}
			}
			break;
		
		case 5:
			if (func_71(iParam0, 8))
			{
				Local_48.f_3[iParam0 /*5*/].f_2 = 6;
				Local_48.f_3[iParam0 /*5*/].f_4 = -1;
			}
			break;
		
		case 6:
			if (!func_62(iParam0, 16))
			{
				Local_48.f_3[iParam0 /*5*/].f_2 = 0;
			}
			if (func_69(iParam0))
			{
				Local_48.f_3[iParam0 /*5*/].f_2 = 3;
			}
			break;
	}
}

int func_62(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x0C20B275AC51DD95())
	{
		if (unk_0xD3AFE733DFF53CF5(unk_0x7DB5D4F6F4C81C82(iVar0)))
		{
			if (func_25(Local_75[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_63(int iParam0)
{
	if (unk_0x746960881FB19A89(uParam0))
	{
		if (unk_0x0BA451447C3B1A8D(uParam0))
		{
			return 1;
		}
		else if (!unk_0xFC38B241541883D3(iParam0, 0))
		{
			if (!unk_0x0FC809E10EF0EAC3(iParam0))
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

int func_64(struct<3> Param0, var uParam3, int iParam4)
{
	int iVar0;
	
	if (!unk_0x7EF90A4891193127())
	{
		return 1;
	}
	iVar0 = 1;
	if (!unk_0x62FC9AA71A0BB8DB(Local_48.f_3[iParam4 /*5*/]))
	{
		if (!func_66(&(Local_48.f_3[iParam4 /*5*/]), joaat("lazer"), Param0, uParam3, 1, 1, 1, 0, 1, 1))
		{
			iVar0 = 0;
		}
		else
		{
			unk_0xDA06BD0F8C6042F9(unk_0x1349078BE884A8E7(Local_48.f_3[iParam4 /*5*/]), 3);
		}
	}
	if (unk_0x62FC9AA71A0BB8DB(Local_48.f_3[iParam4 /*5*/]))
	{
		if (!unk_0x62FC9AA71A0BB8DB(Local_48.f_3[iParam4 /*5*/].f_1))
		{
			if (!func_65(&(Local_48.f_3[iParam4 /*5*/].f_1), Local_48.f_3[iParam4 /*5*/], 29, joaat("s_m_y_pilot_01"), -1, 1, 1, 1))
			{
				iVar0 = 0;
			}
			else
			{
				unk_0x65653252F1467F42(unk_0x3CD0885BEAA1EC4B(Local_48.f_3[iParam4 /*5*/].f_1), joaat("vehicle_weapon_space_rocket"));
				unk_0xF48CD04AB4222AD4(unk_0x3CD0885BEAA1EC4B(Local_48.f_3[iParam4 /*5*/].f_1), 0);
			}
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_65(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x42A900287C0ACC6F(1))
	{
		return 0;
	}
	if (!unk_0x53C457DC61CBEBCA(uParam1))
	{
		return 0;
	}
	if (!unk_0xFC38B241541883D3(unk_0x1349078BE884A8E7(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xFC2961E139989126(unk_0xAD7526C9AA33EE39(unk_0x1349078BE884A8E7(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0x53C457DC61CBEBCA(*uParam0))
	{
		unk_0x185D18DA9BC98757(unk_0x3CD0885BEAA1EC4B(*uParam0), iParam7);
		if (unk_0xCD22EDB73BA42551(unk_0x3CD0885BEAA1EC4B(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x45A6B51275211E6D(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_66(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	
	if (!unk_0x9AD64775663C0BCF(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0x8F9D4AA83F37F6E2(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0xB0694AD0A3BB8936(iParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0xDBDB9A424A3C41D3(uVar0);
	if (unk_0x53C457DC61CBEBCA(*uParam0))
	{
		unk_0x185D18DA9BC98757(uVar0, iParam10);
		if (unk_0xCD22EDB73BA42551(uVar0))
		{
			if (bParam8)
			{
				unk_0x45A6B51275211E6D(*uParam0, 1);
			}
			else
			{
				unk_0x45A6B51275211E6D(*uParam0, 0);
			}
		}
		unk_0x042E8EAB80B3768F(uVar0, iParam9);
		return 1;
	}
	return 0;
}

int func_67(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_68(int iParam0)
{
	var uVar0;
	struct<3> Var1;
	
	uVar0 = unk_0x4E6043D225B9C75F(Local_48.f_3[iParam0 /*5*/].f_4);
	if (unk_0x0BA451447C3B1A8D(uVar0))
	{
		return 0f, 0f, 0f;
	}
	Var1 = { unk_0x81D32A4E7E765EA7(unk_0x77009B1C011405A9(iVar0, 1), unk_0xE691E4EA6B4440C6(iVar0), 0f, -250f, (40f * unk_0xBBDA792448DB5A89(iParam0))) };
	if (Var1.f_2 < 100f)
	{
		Var1.f_2 = 100f;
	}
	return Var1;
}

int func_69(int iParam0)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x0C20B275AC51DD95())
	{
		if (unk_0xD3AFE733DFF53CF5(unk_0x7DB5D4F6F4C81C82(iVar0)))
		{
			uVar1 = unk_0x4E6043D225B9C75F(unk_0xA6118988A879C889(unk_0x7DB5D4F6F4C81C82(iVar0)));
			if (!func_70(unk_0xA6118988A879C889(unk_0x7DB5D4F6F4C81C82(iVar0))))
			{
				if (unk_0xC438EC3E56EB640E(uVar1) || unk_0x8524DF00FC9C3785(iVar1))
				{
					if (unk_0xD092BBE40A1C72AA(unk_0xA6118988A879C889(unk_0x7DB5D4F6F4C81C82(iVar0))) >= 4)
					{
						Var2 = { unk_0x77009B1C011405A9(iVar1, 0) };
						if (func_10(Var2, 3, 1000, 0) && Var2.f_2 > 90f)
						{
							Local_48.f_3[iParam0 /*5*/].f_4 = unk_0xA6118988A879C889(unk_0x7DB5D4F6F4C81C82(iVar0));
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

int func_70(int iParam0)
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	uVar0 = unk_0x4E6043D225B9C75F(iParam0);
	if (!unk_0x746960881FB19A89(uVar0))
	{
		return 1;
	}
	if (unk_0x0BA451447C3B1A8D(uVar0))
	{
		return 1;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uVar2 = unk_0x4E6043D225B9C75F(Local_48.f_3[iVar1 /*5*/].f_4);
		if (unk_0x746960881FB19A89(uVar2))
		{
			if (iParam0 == Local_48.f_3[iVar1 /*5*/].f_4)
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_71(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x0C20B275AC51DD95())
	{
		if (unk_0xD3AFE733DFF53CF5(unk_0x7DB5D4F6F4C81C82(iVar0)))
		{
			if (!func_25(Local_75[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_72(int iParam0)
{
	switch (Local_48.f_21[iParam0])
	{
		case 0:
			if (func_74(iParam0, 64))
			{
				Local_48.f_21[iParam0] = 1;
			}
			break;
		
		case 1:
			if (func_73(iParam0, 1))
			{
				Local_48.f_21[iParam0] = 2;
			}
			break;
		
		case 2:
			if (func_73(iParam0, 2))
			{
				Local_48.f_21[iParam0] = 3;
			}
			break;
		
		case 3:
			if (func_74(iParam0, 4))
			{
				Local_48.f_21[iParam0] = 4;
			}
			break;
		
		case 4:
			if (func_73(iParam0, 8))
			{
				Local_48.f_21[iParam0] = 5;
			}
			if (!func_73(iParam0, 1))
			{
				Local_48.f_21[iParam0] = 7;
			}
			if (func_73(iParam0, 16))
			{
				Local_48.f_21[iParam0] = 6;
			}
			break;
		
		case 5:
			if (func_73(iParam0, 16))
			{
				Local_48.f_21[iParam0] = 6;
			}
			if (!func_73(iParam0, 1))
			{
				Local_48.f_21[iParam0] = 7;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!func_73(iParam0, 4))
			{
				Local_48.f_21[iParam0] = 0;
			}
			break;
	}
}

int func_73(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x0C20B275AC51DD95())
	{
		if (unk_0xD3AFE733DFF53CF5(unk_0x7DB5D4F6F4C81C82(iVar0)))
		{
			if (func_25(Local_75[iVar0 /*8*/].f_1[iParam0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_74(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x0C20B275AC51DD95())
	{
		if (unk_0xD3AFE733DFF53CF5(unk_0x7DB5D4F6F4C81C82(iVar0)))
		{
			if (!func_25(Local_75[iVar0 /*8*/].f_1[iParam0], iParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_75()
{
	int iVar0;
	
	if (!unk_0x7EF90A4891193127())
	{
		return 1;
	}
	iVar0 = 1;
	if (!func_76(&(Local_48[0]), 29, joaat("s_m_y_marine_01"), -2295.587f, 3377.288f, 30.0601f, 55.8214f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (unk_0x62FC9AA71A0BB8DB(Local_48[0]))
	{
		unk_0x46D3B8FF073CD238(unk_0x3CD0885BEAA1EC4B(Local_48[0]), joaat("weapon_assaultrifle"), 200, 1, 1);
	}
	if (!func_76(&(Local_48[1]), 29, joaat("s_m_y_marine_01"), -1597.432f, 2808.987f, 16.1385f, 229.437f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (unk_0x62FC9AA71A0BB8DB(Local_48[1]))
	{
		unk_0x46D3B8FF073CD238(unk_0x3CD0885BEAA1EC4B(Local_48[1]), joaat("weapon_assaultrifle"), 200, 1, 1);
	}
	return iVar0;
}

int func_76(var uParam0, int iParam1, int iParam2, struct<3> Param3, float fParam6, bool bParam7, int iParam8, int iParam9)
{
	var uVar0;
	
	if (!unk_0x42A900287C0ACC6F(1))
	{
		return 0;
	}
	uVar0 = unk_0xA00B5D954AD320BF(iParam1, iParam2, Param3, fParam6, iParam8, bParam7);
	*uParam0 = unk_0xFC2961E139989126(uVar0);
	if (unk_0x53C457DC61CBEBCA(*uParam0))
	{
		unk_0x185D18DA9BC98757(uVar0, iParam9);
		if (unk_0xCD22EDB73BA42551(uVar0))
		{
			if (bParam7)
			{
				unk_0x45A6B51275211E6D(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_77()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < unk_0x0C20B275AC51DD95())
	{
		if (unk_0xD3AFE733DFF53CF5(unk_0x7DB5D4F6F4C81C82(iVar1)))
		{
			if (!func_49(Local_75[iVar1 /*8*/], 2))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_78()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < unk_0x0C20B275AC51DD95())
	{
		if (unk_0xD3AFE733DFF53CF5(unk_0x7DB5D4F6F4C81C82(iVar1)))
		{
			if (!func_49(Local_75[iVar1 /*8*/], 1))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_79()
{
	bool bVar0;
	
	func_86(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315874 == 0)
	{
		if (!unk_0x4B69FB3A5B09A1BA())
		{
			return 1;
		}
	}
	if (func_85())
	{
		return 1;
	}
	if (Global_2437036)
	{
		return 1;
	}
	if (func_84())
	{
		return 1;
	}
	if (func_83(157))
	{
		if (!func_82())
		{
			return 1;
		}
	}
	if (func_83(155))
	{
		return 1;
	}
	if (!unk_0x6518D9FF7C996D2B())
	{
		return 1;
	}
	if (func_80() != 0)
	{
		if (unk_0x7B47A371E2D93C2C(func_80()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_80()
{
	switch (func_81())
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

int func_81()
{
	return Global_24444;
}

bool func_82()
{
	return Global_2428162.f_572;
}

int func_83(int iParam0)
{
	if (unk_0xAFB34077E5ACCBA7(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_84()
{
	return Global_2435128;
}

bool func_85()
{
	return Global_2428162.f_567;
}

void func_86(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x2FAEA355B623BA14(1))
	{
		iVar1 = unk_0x18F85CAA17F9F9A1(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x2E567DCD11FE0296(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 306:
					func_87(iVar0);
					break;
				
				case 2:
					unk_0x2E567DCD11FE0296(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 53)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_87(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x2E567DCD11FE0296(1, iParam0, &Var0, 3))
	{
		if (func_89(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x4E6043D225B9C75F(Var0.f_1);
			if (unk_0x746960881FB19A89(uVar3))
			{
				if (unk_0x827151D7B70CB853(uVar3, 0))
				{
					uVar4 = unk_0x1161215F69587BDA(uVar3, 0);
					if (unk_0x4A4FC7B76BEF1AC9(uVar4, Var0.f_2) && unk_0xD28DD58204E8F9D1())
					{
						if (func_88(uVar4, &bVar5))
						{
							unk_0xB3216D41373DA6C7(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x9187463EB4918A4D(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_88(int iParam0, var uParam1)
{
	if (unk_0x746960881FB19A89(uParam0))
	{
		if (!unk_0x34E74FF8690AA4B1(uParam0))
		{
			if (unk_0x1F298C7D5F6EEDBF(uParam0))
			{
				unk_0x336AE92FD68DEF98(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0xAD2C236C4A4B83C9(uParam0, 0))
		{
			if (unk_0x88A3865085DFB7AD(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_89(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (unk_0xCB29E1C3D086FBAE(uParam0))
	{
		if (bParam1)
		{
			if (!unk_0x378E80A2B7D7C8DF(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422166.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_90()
{
	if (unk_0x30F2E008CA509014(false) != 5)
	{
		if (func_97(5, 0, 1))
		{
			if (unk_0x14CC2B66D061F7ED(0) <= 5)
			{
				unk_0xD5DF0B4E41426D41(5);
			}
		}
	}
	if (unk_0x56DAB67AA00A12D9(false) != 3)
	{
		if (func_91(3, 0, 1))
		{
			if (unk_0x4528FB7EBF6A1D35(0) <= 3)
			{
				unk_0x2D0DCDC2641217B9(3);
			}
		}
	}
}

bool func_91(int iParam0, bool bParam1, bool bParam2)
{
	return func_92(1, iParam0, 1, bParam1, bParam2);
}

int func_92(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x94E72F17611BCD3C(Global_1336615, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_96(iParam0) - func_95(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_95(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_96(iParam0) - func_94(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_95(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_96(iParam0) - func_95(iParam0, 1));
		}
		if (!bParam4 && Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/] != 3)
		{
			iVar1 = (iVar1 - func_93(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_93(int iParam0)
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

int func_94(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1336615.f_1;
			break;
		
		case 1:
			return Global_1336615.f_2;
			break;
		
		case 2:
			return Global_1336615.f_3;
			break;
	}
	return 0;
}

int func_95(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xCFC72E446B0B3AD7();
	switch (iParam0)
	{
		case 0:
			if (!unk_0xD28DD58204E8F9D1())
			{
				return Global_2414035[iVar0 /*254*/].f_206;
			}
			else
			{
				return unk_0x30F2E008CA509014(!bParam1);
			}
			break;
		
		case 1:
			if (!unk_0xD28DD58204E8F9D1())
			{
				return Global_2414035[iVar0 /*254*/].f_207;
			}
			else
			{
				return unk_0x56DAB67AA00A12D9(!bParam1);
			}
			break;
		
		case 2:
			if (!unk_0xD28DD58204E8F9D1())
			{
				return Global_2414035[iVar0 /*254*/].f_208;
			}
			else
			{
				return unk_0x501C0D3244542A75(!bParam1);
			}
			break;
	}
	return 0;
}

int func_96(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1336623;
			break;
		
		case 1:
			return Global_1336624;
			break;
		
		case 2:
			return Global_1336625;
			break;
	}
	return 0;
}

bool func_97(int iParam0, bool bParam1, bool bParam2)
{
	return func_92(0, iParam0, 1, bParam1, bParam2);
}

void func_98()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_99()
{
	int iVar0;
	
	if (unk_0x4B69FB3A5B09A1BA())
	{
		if (unk_0x7EF90A4891193127())
		{
			if (func_60())
			{
				func_59();
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x2E6E8D325977B3EC(Local_332.f_172[iVar0]))
		{
			unk_0x0451B5D93A4BDAA0(&(Local_332.f_172[iVar0]));
		}
		iVar0++;
	}
	func_101();
	func_100();
}

void func_100()
{
	unk_0xE60DEFFB2A853900();
}

void func_101()
{
	if (!Local_332.f_176)
	{
		return;
	}
	if (unk_0x149162179DBAEDB0(joaat("s_m_y_marine_01")))
	{
		unk_0x0880E86251A44B7F(joaat("s_m_y_marine_01"));
	}
	if (unk_0x149162179DBAEDB0(joaat("lazer")))
	{
		unk_0x0880E86251A44B7F(joaat("lazer"));
	}
	if (unk_0x149162179DBAEDB0(joaat("s_m_y_pilot_01")))
	{
		unk_0x0880E86251A44B7F(joaat("s_m_y_pilot_01"));
	}
}

void func_102(struct<20> Param0)
{
	func_106(func_107(Param0.f_0), Param0);
	func_104(0, -1, 0);
	unk_0xD5DF0B4E41426D41(5);
	unk_0x2D0DCDC2641217B9(3);
	unk_0xA32DB9C55050112C(&Local_48, 27);
	unk_0x85862F9356411B89(&Local_75, 257);
	unk_0xE5556978B2858C53(0);
	if (!func_103())
	{
		func_99();
	}
	if (unk_0xD63E63DFACCEB80E(3))
	{
		func_99();
	}
}

int func_103()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x4B69FB3A5B09A1BA())
		{
			return 0;
		}
		if (unk_0xA3E98C97E459BD8E())
		{
			return 1;
		}
		if (func_85())
		{
			return 0;
		}
		if (func_83(155))
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

int func_104(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x56448188B27B0D1C();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_100();
			}
			else
			{
				return 0;
			}
		}
		if (!func_105())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x4B69FB3A5B09A1BA())
				{
					if (!bParam2)
					{
						func_100();
					}
					else
					{
						return 0;
					}
				}
				if (func_85())
				{
					if (!bParam2)
					{
						func_100();
					}
					else
					{
						return 0;
					}
				}
				if (func_83(155))
				{
					if (!bParam2)
					{
						func_100();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xB659F73755907B0D())
			{
				if (!bParam2)
				{
					func_100();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x56448188B27B0D1C();
	}
	if (iParam1 > -1)
	{
		Global_1312504 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x4B69FB3A5B09A1BA())
		{
			if (!bParam2)
			{
				func_100();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xB659F73755907B0D())
	{
		if (!bParam2)
		{
			func_100();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_105()
{
	return Global_1315874;
}

void func_106(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		func_100();
	}
	unk_0x097416E6C5CBD31B(uParam0, 0, Param1.f_16);
}

int func_107(int iParam0)
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
		
		case 36:
			return 32;
		
		case 37:
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
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 43:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 44:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 32;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 2;
		
		case 58:
			return 1;
		
		case 54:
			return 2;
		
		case 55:
			return 4;
		
		case 56:
			return 2;
		
		case 57:
			return 2;
		
		case 40:
			return 1;
		
		case 59:
			return 2;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			return 0;
		
		case 66:
			return 1;
		
		default:
	}
	return 0;
}

