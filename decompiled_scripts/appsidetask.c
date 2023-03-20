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
	int iLocal_17[4] = { 0, 0, 0, 0 };
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	int iLocal_30 = 0;
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
	fLocal_26 = 0.72f;
	fLocal_27 = 0.42f;
	fLocal_28 = 0f;
	fLocal_29 = 0f;
	unk_0x20A629A7D3DC97F2();
	Global_16759 = 0;
	Global_14551 = 0;
	func_18();
	Global_14394.f_1 = 7;
	func_17(Global_14375, "DISPLAY_VIEW", 14f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_16(Global_14375, "SET_HEADER", "CELL_4", 0, 0, 0, 0);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (Global_14394.f_1 != 9)
		{
			switch (Global_14394.f_1)
			{
				case 7:
					if (Global_16759 == 0)
					{
						func_15();
						func_14();
						func_11();
					}
					break;
				
				case 8:
					if (Global_16759 == 1)
					{
						func_5();
					}
					break;
				
				case 3:
					unk_0x82706E6C897B0FA1();
					break;
				
				default:
					break;
			}
			if (Global_16759 == 0)
			{
				if (func_4())
				{
					func_3();
				}
			}
			else if (func_2(2, Global_14362, 0))
			{
				Global_14372 = 1;
				Global_16759 = 0;
				Global_14394.f_1 = 7;
				func_18();
				func_17(Global_14375, "DISPLAY_VIEW", 14f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_16(Global_14375, "SET_HEADER", "CELL_4", 0, 0, 0, 0);
			}
		}
		if (func_1())
		{
			func_3();
		}
	}
}

int func_1()
{
	if (((Global_14394.f_1 == 1 || Global_14394.f_1 == 3) || Global_14394.f_1 == 0) || Global_14338 == 1)
	{
		Global_14381 = 1;
		return 1;
	}
	return 0;
}

int func_2(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x1453F50088A91E4E(iParam0, iParam1) || (iParam2 == 1 && unk_0x63D2949B11643BBA(iParam0, iParam1)))
	{
		if (unk_0xF6BAF9F0C2863FFE())
		{
			if (unk_0xCB70128095B6956E() == 0 || (unk_0x6E6ED37B068198D0() && unk_0x3E512F3AB14225D6(2)))
			{
				return 0;
			}
		}
		if (unk_0x2B0FFD431FD5A9FA() || unk_0x34CC8D9406FED489())
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

void func_3()
{
	unk_0x82706E6C897B0FA1();
}

int func_4()
{
	if (Global_2870 == 1 || Global_14394.f_1 < 7)
	{
		Global_14381 = 1;
		return 1;
	}
	return 0;
}

void func_5()
{
	unk_0x7EEA32490EAB9FA4(0.824f, 0.5f, 0.253f, 0.313f, 0, 0, 0, 155, 0);
	func_6();
}

void func_6()
{
	int iVar0;
	
	fLocal_28 = fLocal_26;
	fLocal_29 = fLocal_27;
	func_10(255, 255, 255, 205);
	func_9();
	func_8(fLocal_28, fLocal_29, &(Global_97439.f_29795[Global_16981[iLocal_24 /*9*/] /*29*/].f_3), 0);
	fLocal_28 = (fLocal_28 + 0.07f);
	func_10(255, 255, 255, 205);
	if (Global_16981[iLocal_24 /*9*/].f_2.f_1 < 10)
	{
		func_7(fLocal_28, fLocal_29, "CELL_506", Global_16981[iLocal_24 /*9*/].f_2.f_2, Global_16981[iLocal_24 /*9*/].f_2.f_1);
	}
	else
	{
		func_7(fLocal_28, fLocal_29, "CELL_503", Global_16981[iLocal_24 /*9*/].f_2.f_2, Global_16981[iLocal_24 /*9*/].f_2.f_1);
	}
	fLocal_28 = (fLocal_28 + 0.07f);
	func_10(255, 255, 255, 205);
	func_7(fLocal_28, fLocal_29, "CELL_505", Global_16981[iLocal_24 /*9*/].f_2.f_3, Global_16981[iLocal_24 /*9*/].f_2.f_4);
	fLocal_28 = fLocal_26;
	func_10(255, 255, 255, 205);
	fLocal_29 = (fLocal_29 + 0.02f);
	if (Global_16812[Global_16981[iLocal_24 /*9*/].f_1 /*42*/].f_8 == 0)
	{
		func_9();
	}
	unk_0x8C9F4BAAC8A43A07(0f, 0.93f);
	func_8(fLocal_28, fLocal_29, &(Global_16812[Global_16981[iLocal_24 /*9*/].f_1 /*42*/].f_4), 0);
	fLocal_29 = (fLocal_29 + 0.07f);
	iVar0 = 1;
	while (iVar0 <= Global_16812[Global_16981[iLocal_24 /*9*/].f_1 /*42*/].f_9)
	{
		func_10(255, 255, 255, 255);
		fLocal_29 = (fLocal_29 + 0.04f);
		if (Global_16812[Global_16981[iLocal_24 /*9*/].f_1 /*42*/].f_32[iVar0] == -1)
		{
			func_8(fLocal_28, fLocal_29, &(Global_16812[Global_16981[iLocal_24 /*9*/].f_1 /*42*/].f_10[iVar0 /*4*/]), 0);
		}
		else
		{
			func_7(fLocal_28, fLocal_29, &(Global_16812[Global_16981[iLocal_24 /*9*/].f_1 /*42*/].f_10[iVar0 /*4*/]), Global_16812[Global_16981[iLocal_24 /*9*/].f_1 /*42*/].f_27[iVar0], Global_16812[Global_16981[iLocal_24 /*9*/].f_1 /*42*/].f_32[iVar0]);
		}
		iVar0++;
	}
}

void func_7(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	unk_0xC428E1247B8480C3(sParam2);
	unk_0x53B64327E3305DCB(uParam3);
	unk_0x53B64327E3305DCB(uParam4);
	unk_0x68E2B15AC7135C83(fParam0, fParam1, 0);
}

void func_8(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0xC428E1247B8480C3(uParam2);
	unk_0x68E2B15AC7135C83(fParam0, fParam1, iParam3);
}

void func_9()
{
	unk_0x892A8C0426DC3D40(0.4f, 0.4f);
	unk_0xB8662CE6B21E98E9(255, 128, 0, 255);
	unk_0x3547043C94E650B3(1, 0, 78, 255, 255);
}

void func_10(int iParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0x892A8C0426DC3D40(0.3f, 0.3f);
	unk_0x3547043C94E650B3(0, 0, 0, 0, 0);
	unk_0x5FC53677129F4597(1, 0, 0, 0, 205);
	unk_0x3EDCEDE9C739FA86(1);
	unk_0xDF9D373BEABBC157(0);
	unk_0xB8662CE6B21E98E9(iParam0, iParam1, iParam2, iParam3);
}

void func_11()
{
	if (func_2(2, Global_14363, 0))
	{
		iLocal_24 = iLocal_17[iLocal_23];
		Global_16759 = 1;
		func_12(Global_14375, "SET_DATA_SLOT", 15f, 0f, -1f, -1f, -1f, "CELL_287", "CELL_280", "CELL_285", "CELL_284", 0);
		func_17(Global_14375, "DISPLAY_VIEW", 15f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_16(Global_14375, "SET_HEADER", "CELL_4", 0, 0, 0, 0);
		Global_14394.f_1 = 8;
		Global_16759 = 1;
	}
}

void func_12(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xB067107D878E9585(uParam0, sParam1);
	unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x06771AF7795B3ECF(sParam7))
	{
		func_13(sParam7);
	}
	if (!unk_0x06771AF7795B3ECF(sParam8))
	{
		func_13(sParam8);
	}
	if (!unk_0x06771AF7795B3ECF(iParam9))
	{
		func_13(iParam9);
	}
	if (!unk_0x06771AF7795B3ECF(iParam10))
	{
		func_13(iParam10);
	}
	if (!unk_0x06771AF7795B3ECF(iParam11))
	{
		func_13(iParam11);
	}
	unk_0xD3DF251F2DF3B257();
}

void func_13(var uParam0)
{
	unk_0xEBC0B3BDAD1250BE(uParam0);
	unk_0x9F94C7B5E8C04AB3();
}

void func_14()
{
	if (iLocal_30)
	{
		if (unk_0x83666F9FB8FEBD4B() > 50)
		{
			iLocal_30 = 0;
		}
	}
	if (unk_0x3E512F3AB14225D6(2))
	{
		if (func_2(2, 181, 0))
		{
			if (iLocal_23 > 0)
			{
				iLocal_23 = (iLocal_23 - 1);
			}
		}
		if (func_2(2, 180, 0))
		{
			iLocal_23++;
			if (iLocal_23 == iLocal_22)
			{
				iLocal_23 = 0;
			}
		}
	}
	if (iLocal_30 == 0)
	{
		if (func_2(2, Global_14370, 0))
		{
			if (iLocal_23 > 0)
			{
				iLocal_23 = (iLocal_23 - 1);
			}
			iLocal_30 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_2(2, Global_14371, 0))
		{
			iLocal_23++;
			if (iLocal_23 == iLocal_22)
			{
				iLocal_23 = 0;
			}
			iLocal_30 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_15()
{
	int iVar0;
	
	iVar0 = 0;
	fLocal_28 = fLocal_26;
	fLocal_29 = fLocal_27;
	iLocal_25 = iLocal_22;
	while (iVar0 < iLocal_25)
	{
		func_10(255, 255, 255, 205);
		if (iVar0 == iLocal_23)
		{
			func_9();
		}
		func_8(fLocal_28, fLocal_29, &(Global_97439.f_29795[Global_16981[iLocal_17[iVar0] /*9*/] /*29*/].f_3), 0);
		fLocal_28 = (fLocal_28 + 0.07f);
		func_10(255, 255, 255, 205);
		if (Global_16981[iLocal_17[iVar0] /*9*/].f_2.f_1 < 10)
		{
			func_7(fLocal_28, fLocal_29, "CELL_506", Global_16981[iLocal_17[iVar0] /*9*/].f_2.f_2, Global_16981[iLocal_17[iVar0] /*9*/].f_2.f_1);
		}
		else
		{
			func_7(fLocal_28, fLocal_29, "CELL_503", Global_16981[iLocal_17[iVar0] /*9*/].f_2.f_2, Global_16981[iLocal_17[iVar0] /*9*/].f_2.f_1);
		}
		fLocal_28 = (fLocal_28 + 0.07f);
		func_10(255, 255, 255, 205);
		func_7(fLocal_28, fLocal_29, "CELL_505", Global_16981[iLocal_17[iVar0] /*9*/].f_2.f_3, Global_16981[iLocal_17[iVar0] /*9*/].f_2.f_4);
		fLocal_28 = fLocal_26;
		func_10(255, 255, 255, 205);
		if (iVar0 == iLocal_23)
		{
			func_9();
		}
		fLocal_29 = (fLocal_29 + 0.02f);
		unk_0x8C9F4BAAC8A43A07(0f, 0.93f);
		func_8(fLocal_28, fLocal_29, &(Global_16812[Global_16981[iLocal_17[iVar0] /*9*/].f_1 /*42*/]), 0);
		fLocal_29 = (fLocal_29 + 0.05f);
		iVar0++;
	}
}

void func_16(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	unk_0xB067107D878E9585(uParam0, sParam1);
	func_13(sParam2);
	if (!unk_0x06771AF7795B3ECF(iParam3))
	{
		func_13(iParam3);
	}
	if (!unk_0x06771AF7795B3ECF(iParam4))
	{
		func_13(iParam4);
	}
	if (!unk_0x06771AF7795B3ECF(iParam5))
	{
		func_13(iParam5);
	}
	if (!unk_0x06771AF7795B3ECF(iParam6))
	{
		func_13(iParam6);
	}
	unk_0xD3DF251F2DF3B257();
}

void func_17(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xB067107D878E9585(uParam0, sParam1);
	unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xD3DF251F2DF3B257();
}

void func_18()
{
	int iVar0[4];
	int iVar5;
	int iVar6;
	int iVar7;
	
	iLocal_22 = 0;
	iVar5 = 0;
	while (iVar5 < 4)
	{
		iVar6 = 0;
		iVar7 = 3;
		Global_16981[iVar7 /*9*/].f_2 = -1;
		Global_16981[iVar7 /*9*/].f_2.f_1 = 0;
		Global_16981[iVar7 /*9*/].f_2.f_2 = 0;
		Global_16981[iVar7 /*9*/].f_2.f_3 = 0;
		Global_16981[iVar7 /*9*/].f_2.f_5 = 0;
		while (iVar6 < 4)
		{
			if (iVar0[iVar6] == 0)
			{
				if (Global_16981[iVar6 /*9*/].f_8 != 0)
				{
					if (func_19(Global_16981[iVar6 /*9*/].f_2, Global_16981[iVar7 /*9*/].f_2))
					{
						iVar7 = iVar6;
					}
				}
			}
			iVar6++;
		}
		iLocal_17[iVar5] = iVar7;
		iVar0[iVar7] = 1;
		if (Global_16981[iVar5 /*9*/].f_8 != 0)
		{
			iLocal_22++;
		}
		iVar5++;
	}
	func_12(Global_14375, "SET_DATA_SLOT", 14f, 0f, 25f, -1f, -1f, "CELL_287", "CELL_280", 0, 0, 0);
}

int func_19(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

