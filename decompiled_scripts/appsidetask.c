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
	int iLocal_18[4] = { 0, 0, 0, 0 };
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	int iLocal_31 = 0;
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
	fLocal_27 = 0.72f;
	fLocal_28 = 0.42f;
	fLocal_29 = 0f;
	fLocal_30 = 0f;
	unk_0x6516E26C513581FA();
	Global_16778 = 0;
	Global_14570 = 0;
	func_18();
	Global_14413.f_1 = 7;
	func_17(Global_14394, "DISPLAY_VIEW", 14f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_16(Global_14394, "SET_HEADER", "CELL_4", 0, 0, 0, 0);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (Global_14413.f_1 != 9)
		{
			switch (Global_14413.f_1)
			{
				case 7:
					if (Global_16778 == 0)
					{
						func_15();
						func_14();
						func_11();
					}
					break;
				
				case 8:
					if (Global_16778 == 1)
					{
						func_5();
					}
					break;
				
				case 3:
					unk_0xF5DF8F3392CDD07B();
					break;
				
				default:
					break;
			}
			if (Global_16778 == 0)
			{
				if (func_4())
				{
					func_3();
				}
			}
			else if (func_2(2, Global_14381, 0))
			{
				Global_14391 = 1;
				Global_16778 = 0;
				Global_14413.f_1 = 7;
				func_18();
				func_17(Global_14394, "DISPLAY_VIEW", 14f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_16(Global_14394, "SET_HEADER", "CELL_4", 0, 0, 0, 0);
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
	if (((Global_14413.f_1 == 1 || Global_14413.f_1 == 3) || Global_14413.f_1 == 0) || Global_14357 == 1)
	{
		Global_14400 = 1;
		return 1;
	}
	return 0;
}

int func_2(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xD471C64C0898A7BF(iParam0, iParam1) || (iParam2 == 1 && unk_0x36017A82F80B1E0E(iParam0, iParam1)))
	{
		if (unk_0x55812CD5A331E1F8())
		{
			if (unk_0xB2E6456B1BD1C186() == 0 || (unk_0x28E650D9BD8DC870() && unk_0x4A1EAF6BB2C862EA(2)))
			{
				return 0;
			}
		}
		if (unk_0x3DC360442A11BB38() || unk_0x526F2ADD5C54B89E())
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
	unk_0xF5DF8F3392CDD07B();
}

int func_4()
{
	if (Global_2889 == 1 || Global_14413.f_1 < 7)
	{
		Global_14400 = 1;
		return 1;
	}
	return 0;
}

void func_5()
{
	unk_0xF2277E9F99F5ECC1(0.824f, 0.5f, 0.253f, 0.313f, 0, 0, 0, 155, 0);
	func_6();
}

void func_6()
{
	int iVar0;
	
	fLocal_29 = fLocal_27;
	fLocal_30 = fLocal_28;
	func_10(255, 255, 255, 205);
	func_9();
	func_8(fLocal_29, fLocal_30, &(Global_101186.f_32651[Global_17000[iLocal_25 /*9*/] /*29*/].f_3), 0);
	fLocal_29 = (fLocal_29 + 0.07f);
	func_10(255, 255, 255, 205);
	if (Global_17000[iLocal_25 /*9*/].f_2.f_1 < 10)
	{
		func_7(fLocal_29, fLocal_30, "CELL_506", Global_17000[iLocal_25 /*9*/].f_2.f_2, Global_17000[iLocal_25 /*9*/].f_2.f_1);
	}
	else
	{
		func_7(fLocal_29, fLocal_30, "CELL_503", Global_17000[iLocal_25 /*9*/].f_2.f_2, Global_17000[iLocal_25 /*9*/].f_2.f_1);
	}
	fLocal_29 = (fLocal_29 + 0.07f);
	func_10(255, 255, 255, 205);
	func_7(fLocal_29, fLocal_30, "CELL_505", Global_17000[iLocal_25 /*9*/].f_2.f_3, Global_17000[iLocal_25 /*9*/].f_2.f_4);
	fLocal_29 = fLocal_27;
	func_10(255, 255, 255, 205);
	fLocal_30 = (fLocal_30 + 0.02f);
	if (Global_16831[Global_17000[iLocal_25 /*9*/].f_1 /*42*/].f_8 == 0)
	{
		func_9();
	}
	unk_0x12CC1234B1B7BFC5(0f, 0.93f);
	func_8(fLocal_29, fLocal_30, &(Global_16831[Global_17000[iLocal_25 /*9*/].f_1 /*42*/].f_4), 0);
	fLocal_30 = (fLocal_30 + 0.07f);
	iVar0 = 1;
	while (iVar0 <= Global_16831[Global_17000[iLocal_25 /*9*/].f_1 /*42*/].f_9)
	{
		func_10(255, 255, 255, 255);
		fLocal_30 = (fLocal_30 + 0.04f);
		if (Global_16831[Global_17000[iLocal_25 /*9*/].f_1 /*42*/].f_32[iVar0] == -1)
		{
			func_8(fLocal_29, fLocal_30, &(Global_16831[Global_17000[iLocal_25 /*9*/].f_1 /*42*/].f_10[iVar0 /*4*/]), 0);
		}
		else
		{
			func_7(fLocal_29, fLocal_30, &(Global_16831[Global_17000[iLocal_25 /*9*/].f_1 /*42*/].f_10[iVar0 /*4*/]), Global_16831[Global_17000[iLocal_25 /*9*/].f_1 /*42*/].f_27[iVar0], Global_16831[Global_17000[iLocal_25 /*9*/].f_1 /*42*/].f_32[iVar0]);
		}
		iVar0++;
	}
}

void func_7(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	unk_0x049CCB8537E77D8B(sParam2);
	unk_0xD92C45283BCDA624(uParam3);
	unk_0xD92C45283BCDA624(uParam4);
	unk_0xBF7878373D9EA4E7(fParam0, fParam1, 0);
}

void func_8(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0x049CCB8537E77D8B(uParam2);
	unk_0xBF7878373D9EA4E7(fParam0, fParam1, iParam3);
}

void func_9()
{
	unk_0xE885E03E7032CE54(0.4f, 0.4f);
	unk_0x0D1D7FED407C809B(255, 128, 0, 255);
	unk_0x8A3F04304575D6B1(1, 0, 78, 255, 255);
}

void func_10(int iParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0xE885E03E7032CE54(0.3f, 0.3f);
	unk_0x8A3F04304575D6B1(0, 0, 0, 0, 0);
	unk_0x0E14ECE9ADDF3B75(1, 0, 0, 0, 205);
	unk_0x171F777EE7483A5A(1);
	unk_0xC5AD19EFC0358776(0);
	unk_0x0D1D7FED407C809B(iParam0, iParam1, iParam2, iParam3);
}

void func_11()
{
	if (func_2(2, Global_14382, 0))
	{
		iLocal_25 = iLocal_18[iLocal_24];
		Global_16778 = 1;
		func_12(Global_14394, "SET_DATA_SLOT", 15f, 0f, -1f, -1f, -1f, "CELL_287", "CELL_280", "CELL_285", "CELL_284", 0);
		func_17(Global_14394, "DISPLAY_VIEW", 15f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_16(Global_14394, "SET_HEADER", "CELL_4", 0, 0, 0, 0);
		Global_14413.f_1 = 8;
		Global_16778 = 1;
	}
}

void func_12(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0x2B859AD680983623(uParam0, sParam1);
	unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x226FA58470A21AEF(sParam7))
	{
		func_13(sParam7);
	}
	if (!unk_0x226FA58470A21AEF(sParam8))
	{
		func_13(sParam8);
	}
	if (!unk_0x226FA58470A21AEF(iParam9))
	{
		func_13(iParam9);
	}
	if (!unk_0x226FA58470A21AEF(iParam10))
	{
		func_13(iParam10);
	}
	if (!unk_0x226FA58470A21AEF(iParam11))
	{
		func_13(iParam11);
	}
	unk_0xE97F1B22C5E8989F();
}

void func_13(var uParam0)
{
	unk_0x7291E2F821FCFC04(uParam0);
	unk_0xD6360E18957BCDD3();
}

void func_14()
{
	if (iLocal_31)
	{
		if (unk_0x83666F9FB8FEBD4B() > 50)
		{
			iLocal_31 = 0;
		}
	}
	if (unk_0x4A1EAF6BB2C862EA(2))
	{
		if (func_2(2, 181, 0))
		{
			if (iLocal_24 > 0)
			{
				iLocal_24 = (iLocal_24 - 1);
			}
		}
		if (func_2(2, 180, 0))
		{
			iLocal_24++;
			if (iLocal_24 == iLocal_23)
			{
				iLocal_24 = 0;
			}
		}
	}
	if (iLocal_31 == 0)
	{
		if (func_2(2, Global_14389, 0))
		{
			if (iLocal_24 > 0)
			{
				iLocal_24 = (iLocal_24 - 1);
			}
			iLocal_31 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_2(2, Global_14390, 0))
		{
			iLocal_24++;
			if (iLocal_24 == iLocal_23)
			{
				iLocal_24 = 0;
			}
			iLocal_31 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_15()
{
	int iVar0;
	
	iVar0 = 0;
	fLocal_29 = fLocal_27;
	fLocal_30 = fLocal_28;
	iLocal_26 = iLocal_23;
	while (iVar0 < iLocal_26)
	{
		func_10(255, 255, 255, 205);
		if (iVar0 == iLocal_24)
		{
			func_9();
		}
		func_8(fLocal_29, fLocal_30, &(Global_101186.f_32651[Global_17000[iLocal_18[iVar0] /*9*/] /*29*/].f_3), 0);
		fLocal_29 = (fLocal_29 + 0.07f);
		func_10(255, 255, 255, 205);
		if (Global_17000[iLocal_18[iVar0] /*9*/].f_2.f_1 < 10)
		{
			func_7(fLocal_29, fLocal_30, "CELL_506", Global_17000[iLocal_18[iVar0] /*9*/].f_2.f_2, Global_17000[iLocal_18[iVar0] /*9*/].f_2.f_1);
		}
		else
		{
			func_7(fLocal_29, fLocal_30, "CELL_503", Global_17000[iLocal_18[iVar0] /*9*/].f_2.f_2, Global_17000[iLocal_18[iVar0] /*9*/].f_2.f_1);
		}
		fLocal_29 = (fLocal_29 + 0.07f);
		func_10(255, 255, 255, 205);
		func_7(fLocal_29, fLocal_30, "CELL_505", Global_17000[iLocal_18[iVar0] /*9*/].f_2.f_3, Global_17000[iLocal_18[iVar0] /*9*/].f_2.f_4);
		fLocal_29 = fLocal_27;
		func_10(255, 255, 255, 205);
		if (iVar0 == iLocal_24)
		{
			func_9();
		}
		fLocal_30 = (fLocal_30 + 0.02f);
		unk_0x12CC1234B1B7BFC5(0f, 0.93f);
		func_8(fLocal_29, fLocal_30, &(Global_16831[Global_17000[iLocal_18[iVar0] /*9*/].f_1 /*42*/]), 0);
		fLocal_30 = (fLocal_30 + 0.05f);
		iVar0++;
	}
}

void func_16(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	unk_0x2B859AD680983623(uParam0, sParam1);
	func_13(sParam2);
	if (!unk_0x226FA58470A21AEF(iParam3))
	{
		func_13(iParam3);
	}
	if (!unk_0x226FA58470A21AEF(iParam4))
	{
		func_13(iParam4);
	}
	if (!unk_0x226FA58470A21AEF(iParam5))
	{
		func_13(iParam5);
	}
	if (!unk_0x226FA58470A21AEF(iParam6))
	{
		func_13(iParam6);
	}
	unk_0xE97F1B22C5E8989F();
}

void func_17(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x2B859AD680983623(uParam0, sParam1);
	unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xE97F1B22C5E8989F();
}

void func_18()
{
	int iVar0[4];
	int iVar5;
	int iVar6;
	int iVar7;
	
	iLocal_23 = 0;
	iVar5 = 0;
	while (iVar5 < 4)
	{
		iVar6 = 0;
		iVar7 = 3;
		Global_17000[iVar7 /*9*/].f_2 = -1;
		Global_17000[iVar7 /*9*/].f_2.f_1 = 0;
		Global_17000[iVar7 /*9*/].f_2.f_2 = 0;
		Global_17000[iVar7 /*9*/].f_2.f_3 = 0;
		Global_17000[iVar7 /*9*/].f_2.f_5 = 0;
		while (iVar6 < 4)
		{
			if (iVar0[iVar6] == 0)
			{
				if (Global_17000[iVar6 /*9*/].f_8 != 0)
				{
					if (func_19(Global_17000[iVar6 /*9*/].f_2, Global_17000[iVar7 /*9*/].f_2))
					{
						iVar7 = iVar6;
					}
				}
			}
			iVar6++;
		}
		iLocal_18[iVar5] = iVar7;
		iVar0[iVar7] = 1;
		if (Global_17000[iVar5 /*9*/].f_8 != 0)
		{
			iLocal_23++;
		}
		iVar5++;
	}
	func_12(Global_14394, "SET_DATA_SLOT", 14f, 0f, 25f, -1f, -1f, "CELL_287", "CELL_280", 0, 0, 0);
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

