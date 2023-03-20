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
	struct<19> Local_55 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300000, 0, 0, 30000, 2, 0, 0 } ;
	var uLocal_74 = 0;
	struct<4> Local_75[32];
	int iLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
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
	if (unk_0x4B69FB3A5B09A1BA() && func_177(unk_0xCFC72E446B0B3AD7(), 0, 1))
	{
		func_169(ScriptParam_0);
	}
	else
	{
		func_166();
	}
	while (true)
	{
		func_165();
		if (func_155() || func_151(16))
		{
			func_166();
		}
		if (unk_0x4F0283431254A343())
		{
			func_166();
		}
		switch (func_150(unk_0x9725084D4DFE8258()))
		{
			case 0:
				if (func_149() == 1)
				{
					func_148();
					Local_75[unk_0x9725084D4DFE8258() /*4*/] = 1;
				}
				else if (func_149() == 4)
				{
					Local_75[unk_0x9725084D4DFE8258() /*4*/] = 3;
				}
				break;
			
			case 1:
				if (func_149() == 1)
				{
					func_50();
				}
				else if (func_149() == 4)
				{
					func_14();
					Local_75[unk_0x9725084D4DFE8258() /*4*/] = 3;
				}
				break;
			
			case 3:
				func_13(&(Local_55.f_18));
				if (func_12(&(Local_55.f_18)))
				{
					Local_75[unk_0x9725084D4DFE8258() /*4*/] = 4;
				}
				break;
			
			case 2:
				Local_75[unk_0x9725084D4DFE8258() /*4*/] = 4;
			
			case 4:
				func_166();
				break;
		}
		if (unk_0x7EF90A4891193127())
		{
			switch (func_149())
			{
				case 0:
					Local_55.f_0 = 1;
					break;
				
				case 1:
					func_11();
					func_3();
					if (func_1())
					{
						Local_55.f_0 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	if (Local_55.f_7 == 2)
	{
		return 1;
	}
	return 0;
}

void func_3()
{
	struct<14> Var0;
	
	switch (Local_55.f_7)
	{
		case 0:
			if (unk_0x94E72F17611BCD3C(Local_55.f_1, 0))
			{
				Local_55.f_7 = 1;
			}
			else if (func_9(&(Local_55.f_8), 480000, 0))
			{
				Var0.f_2 = 114;
				func_7(Var0, func_8(1));
				unk_0xEDB9A377CD8B7F03(&(Local_55.f_1), 1);
				Local_55.f_7 = 2;
			}
			break;
		
		case 1:
			func_4();
			break;
		
		case 2:
			break;
	}
}

void func_4()
{
	if (!func_9(&(Local_55.f_10), Local_55.f_12, 0))
	{
		if (func_9(&(Local_55.f_13), Local_55.f_15, 0))
		{
			Local_55.f_17++;
			Local_55.f_16 = func_6();
			func_5(&(Local_55.f_13));
		}
	}
	else
	{
		Local_55.f_7 = 2;
	}
}

void func_5(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_6()
{
	switch (Local_55.f_17)
	{
		case 0:
		case 1:
			return 2;
		
		case 2:
		case 3:
		case 4:
		case 5:
			return 3;
		
		case 6:
		case 7:
		case 8:
			return 4;
		
		case 9:
			return 5;
		
		default:
	}
	return Local_55.f_16;
}

void func_7(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0xCFC72E446B0B3AD7();
	if (!iParam14 == 0)
	{
		unk_0x0EA5A5773B9C09AE(1, &Param0, 14, iParam14);
	}
}

int func_8(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x0C20B275AC51DD95())
	{
		if (unk_0xD3AFE733DFF53CF5(unk_0x7DB5D4F6F4C81C82(iVar1)))
		{
			iVar2 = unk_0xA6118988A879C889(unk_0x7DB5D4F6F4C81C82(iVar1));
			if (func_177(iVar2, 0, 0))
			{
				if (iVar2 != unk_0xCFC72E446B0B3AD7() || iParam0)
				{
					unk_0xEDB9A377CD8B7F03(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_9(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_10(uParam0, bParam2, 0);
	if (unk_0x4B69FB3A5B09A1BA() && !bParam2)
	{
		if (unk_0xB65C49ABD0DAB270(unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xB65C49ABD0DAB270(unk_0xE1C532DCCBD8FED6(unk_0x17103F66FBB44C3C(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_10(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x4B69FB3A5B09A1BA() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x6A8628B6E9F055B3();
			}
			else
			{
				*uParam0 = unk_0x4FEA29C1086C638D();
			}
		}
		else
		{
			*uParam0 = unk_0x17103F66FBB44C3C();
		}
		uParam0->f_1 = 1;
	}
}

void func_11()
{
	int iVar0;
	
	if (Local_55.f_0 == 1)
	{
		if (unk_0xD3AFE733DFF53CF5(unk_0x7DB5D4F6F4C81C82(iLocal_210)))
		{
			iVar0 = unk_0xA6118988A879C889(unk_0x7DB5D4F6F4C81C82(iLocal_210));
			if (func_177(iVar0, 1, 1))
			{
				if (!unk_0x94E72F17611BCD3C(Local_55.f_1, 0))
				{
					if (unk_0x94E72F17611BCD3C(Local_75[iLocal_210 /*4*/].f_1, 0))
					{
						iLocal_211 = 1;
						unk_0xEDB9A377CD8B7F03(&(Local_55.f_1), 0);
					}
				}
			}
		}
	}
	iLocal_210++;
	if (iLocal_210 == unk_0x0C20B275AC51DD95())
	{
		if (iLocal_211 == 0)
		{
			if (unk_0x94E72F17611BCD3C(Local_55.f_1, 0))
			{
				unk_0xF76EE56D3E7DAF1B(&(Local_55.f_1), 0);
			}
		}
		else
		{
			iLocal_211 = 0;
		}
		iLocal_210 = 0;
	}
}

int func_12(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xB65C49ABD0DAB270(unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_13(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x7EF90A4891193127())
		{
			func_10(uParam0, 0, 0);
		}
	}
}

void func_14()
{
	int iVar0;
	var uVar1;
	var uVar5;
	
	if (!unk_0x94E72F17611BCD3C(iLocal_204, 1))
	{
		if ((unk_0x94E72F17611BCD3C(Local_75[unk_0x9725084D4DFE8258() /*4*/].f_1, 0) && unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) >= (Local_55.f_16 - 1)) && Local_75[unk_0x9725084D4DFE8258() /*4*/].f_2 < 10)
		{
			Local_75[unk_0x9725084D4DFE8258() /*4*/].f_2++;
		}
		if (Local_75[unk_0x9725084D4DFE8258() /*4*/].f_2 > 0)
		{
			iVar0 = (Local_75[unk_0x9725084D4DFE8258() /*4*/].f_2 * Global_262145.f_6407);
			func_47(iVar0, 1, 1, 0);
			if (func_46())
			{
				func_39(-2043695058, iVar0, &uVar5, 0, 0);
			}
			else
			{
				unk_0x3CF20856D3CFEB7E(iVar0, "AM_DISTRACT_COPS", &uVar1);
			}
			if (func_38())
			{
				func_25(12, "DSC_PASS0", 0, 0, -99);
			}
			else
			{
				func_25(12, "DSC_PASS1", 0, 0, -99);
			}
			func_20(49, iVar0, "DSC_CASH", "DSC_BIGM", 1, -1, -1082130432);
			if (unk_0x94E72F17611BCD3C(iLocal_204, 4))
			{
				if (!unk_0x94E72F17611BCD3C(iLocal_204, 5))
				{
					func_15(66, 1, -1);
				}
			}
		}
		unk_0xEDB9A377CD8B7F03(&iLocal_204, 1);
	}
}

void func_15(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_17(iParam0, func_18(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_16(iParam0, iVar0, iParam2);
}

void func_16(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2476020[iParam0 /*6*/][func_18(iParam2)];
	unk_0xC46BDC34976E9532(iVar0, iParam1, 1);
}

int func_17(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2476020[iParam0 /*6*/][func_18(iParam1)];
	if (unk_0x39496A55977AA312(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_18(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
		if (iVar1 > -1)
		{
			Global_2454301 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454301 = 1;
		}
	}
	return iVar0;
}

var func_19()
{
	return Global_1312737;
}

int func_20(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	struct<51> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_48 = 1;
	Var0.f_50 = -1;
	func_23(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_48 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	return func_21(&Var0);
}

int func_21(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2422166.f_2329)
		{
			return 0;
		}
	}
	if (func_22(uParam0->f_1))
	{
		if (Global_2422166.f_2123[0 /*51*/].f_2 == 0)
		{
			Global_2422166.f_2123[0 /*51*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2422166.f_2123[0 /*51*/].f_1 == 13 || Global_2422166.f_2123[0 /*51*/].f_1 == 51) || Global_2422166.f_2123[0 /*51*/].f_1 == 52) || Global_2422166.f_2123[0 /*51*/].f_1 == 56)
		{
			Global_2422166.f_2123[0 /*51*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2422166.f_2123[iVar0 + 1 /*51*/] = { Global_2422166.f_2123[iVar0 /*51*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2422166.f_2123[1 /*51*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2422166.f_2123[iVar0 /*51*/].f_2 == 0)
		{
			Global_2422166.f_2123[iVar0 /*51*/] = { *uParam0 };
			return 1;
		}
		else if (uParam0->f_1 == 1)
		{
			Global_2422166.f_2123[iVar0 /*51*/].f_2 = 5;
		}
		iVar0++;
	}
	return 0;
}

int func_22(int iParam0)
{
	if ((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 54) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10)
	{
		return 1;
	}
	return 0;
}

void func_23(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)
{
	uParam1->f_16 = func_24();
	uParam1->f_17 = func_24();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_18), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_3 = uParam2;
	uParam1->f_48 = 1;
}

int func_24()
{
	return -1;
}

void func_25(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)
{
	func_26(1, iParam0, sParam1, sParam2, bParam3, iParam4);
}

void func_26(int iParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	var uVar0;
	bool bVar1;
	
	uVar0 = uParam1;
	bVar1 = false;
	func_27(iParam0, sParam2, uVar0, bVar1, sParam3, bParam4, iParam5);
}

void func_27(var uParam0, char* sParam1, var uParam2, bool bParam3, char* sParam4, bool bParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x9E9AFDBF482248F6(sParam1))
	{
		return;
	}
	if (unk_0x6BD5B77CFC3C9B4B(sParam1) > 15)
	{
		return;
	}
	if (!unk_0x9E9AFDBF482248F6(sParam4))
	{
		if (unk_0x6BD5B77CFC3C9B4B(sParam4) > 31)
		{
			return;
		}
	}
	iVar0 = func_36();
	if (iVar0 == -1)
	{
		return;
	}
	func_35(iVar0);
	func_34(iVar0, uParam0);
	func_33(iVar0, uParam2, bParam3);
	func_32(iVar0, sParam1);
	if (unk_0x9E9AFDBF482248F6(sParam4) && iParam6 == -99)
	{
		return;
	}
	func_31(iVar0);
	if (!unk_0x9E9AFDBF482248F6(sParam4))
	{
		func_29(iVar0, sParam4, bParam5);
	}
	if (!iParam6 == -99)
	{
		func_28(iVar0, iParam6);
	}
}

void func_28(int iParam0, int iParam1)
{
	Global_1321259.f_59[iParam0 /*16*/].f_15 = iParam1;
}

void func_29(int iParam0, char* sParam1, bool bParam2)
{
	StringCopy(&(Global_1321259.f_59[iParam0 /*16*/].f_7), sParam1, 32);
	if (!bParam2)
	{
		return;
	}
	func_30(iParam0);
}

void func_30(int iParam0)
{
	unk_0xEDB9A377CD8B7F03(&(Global_1321259.f_59[iParam0 /*16*/]), 5);
}

void func_31(int iParam0)
{
	unk_0xEDB9A377CD8B7F03(&(Global_1321259.f_59[iParam0 /*16*/]), 4);
}

void func_32(int iParam0, char* sParam1)
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam1, 16);
	Global_1321259.f_59[iParam0 /*16*/].f_3 = { Var0 };
}

void func_33(int iParam0, var uParam1, bool bParam2)
{
	Global_1321259.f_59[iParam0 /*16*/].f_2 = uParam1;
	if (bParam2)
	{
		unk_0xEDB9A377CD8B7F03(&(Global_1321259.f_59[iParam0 /*16*/]), 2);
		unk_0xF76EE56D3E7DAF1B(&(Global_1321259.f_59[iParam0 /*16*/]), 3);
	}
	else
	{
		unk_0xEDB9A377CD8B7F03(&(Global_1321259.f_59[iParam0 /*16*/]), 3);
		unk_0xF76EE56D3E7DAF1B(&(Global_1321259.f_59[iParam0 /*16*/]), 2);
	}
}

void func_34(int iParam0, var uParam1)
{
	Global_1321259.f_59[iParam0 /*16*/].f_1 = uParam1;
}

void func_35(int iParam0)
{
	unk_0xEDB9A377CD8B7F03(&(Global_1321259.f_59[iParam0 /*16*/]), 0);
}

int func_36()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_37(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_37(int iParam0)
{
	return unk_0x94E72F17611BCD3C(Global_1321259.f_59[iParam0 /*16*/], 0);
}

int func_38()
{
	if (unk_0x94E72F17611BCD3C(unk_0x073B65E051D2F03E(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_39(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_46())
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
				func_40(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_40(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_40(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_46())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xA549BE81FFC4288A(func_19()) || unk_0xADE1DFE09709BDB1())
		{
			Global_2541344 = 1;
			return 0;
		}
		if (Global_2435857)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2541345 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2540883[iVar1 /*69*/].f_2 == 0)
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
	if (bVar0 || unk_0x4C02C7B08F757BFA(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x4265811DC0390422(iVar3))
		{
			*uParam0 = func_45(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2540883[*uParam0 /*69*/].f_62 = 1;
				}
			}
			Global_2541341 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2541343 = 1;
			Global_2541346 = iParam4;
			Global_2541348 = iParam3;
			Global_2541349 = 1;
			Global_2541347 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2541346 = iParam4;
			Global_2541348 = iParam3;
			Global_2541349 = 1;
			Global_2541347 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_44(1, iParam4);
			Global_2541343 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_41(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_41(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xEDB9A377CD8B7F03(&(Global_2414035[unk_0xCFC72E446B0B3AD7() /*254*/].f_121.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_42(iParam0);
	}
}

void func_42(int iParam0)
{
	bool bVar0;
	struct<69> Var1;
	
	bVar0 = false;
	if (!func_46())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_43(iParam0))
		{
			if (!bVar0)
			{
				unk_0x57A7DB00C63E14B4();
			}
		}
		else if (!bVar0)
		{
			unk_0x3B8BE022876FFEA4(Global_2540883[iParam0 /*69*/]);
		}
		Var1 = 2147483647;
		Global_2540883[iParam0 /*69*/] = { Var1 };
	}
}

int func_43(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2540883[iParam0 /*69*/].f_5 == 1;
	}
	return 0;
}

void func_44(int iParam0, var uParam1)
{
	Global_2437111 = uParam1;
	Global_2437110 = iParam0;
}

int func_45(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2540883[iVar0 /*69*/].f_2 == 0)
		{
			if (!func_46())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2540883[iVar0 /*69*/].f_2 = 1;
			Global_2540883[iVar0 /*69*/].f_1 = uParam5;
			Global_2540883[iVar0 /*69*/].f_3 = uParam1;
			Global_2540883[iVar0 /*69*/].f_4 = uParam2;
			Global_2540883[iVar0 /*69*/].f_7 = uParam3;
			Global_2540883[iVar0 /*69*/].f_5 = 0;
			Global_2540883[iVar0 /*69*/] = iParam0;
			Global_2540883[iVar0 /*69*/].f_6 = iParam4;
			Global_2540883[iVar0 /*69*/].f_65 = uParam8;
			Global_2540883[iVar0 /*69*/].f_64 = uParam7;
			Global_2540883[iVar0 /*69*/].f_68 = 0;
			Global_2541341 = 0;
			if (bParam6)
			{
				Global_2540883[iVar0 /*69*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_46()
{
	if (unk_0x708CE249B4F97BF8())
	{
		return 1;
	}
	return 0;
}

void func_47(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_48(iParam0, iParam1, iParam2, fParam3);
}

void func_48(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = unk_0xF34EE736CF047844((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_188.f_4 = iVar1;
	Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_188.f_3 = (Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_188.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_49(iVar1, 0);
	}
}

void func_49(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_50()
{
	func_146();
	switch (Local_75[unk_0x9725084D4DFE8258() /*4*/].f_3)
	{
		case 0:
			if (unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), Local_55.f_2, Local_55.f_5, Local_55.f_5, 1000f, 0, 1, 0))
			{
				func_124();
				unk_0xEDB9A377CD8B7F03(&(Local_75[unk_0x9725084D4DFE8258() /*4*/].f_1), 0);
				unk_0xEDB9A377CD8B7F03(&(Global_2446533.f_4400), 0);
				Local_75[unk_0x9725084D4DFE8258() /*4*/].f_3 = 1;
			}
			if (Local_55.f_7 > 1)
			{
				Local_75[unk_0x9725084D4DFE8258() /*4*/].f_3 = 2;
			}
			break;
		
		case 1:
			func_111();
			func_51();
			if (Local_55.f_7 > 1)
			{
				Local_75[unk_0x9725084D4DFE8258() /*4*/].f_3 = 2;
			}
			break;
		
		case 2:
			func_14();
			break;
	}
}

void func_51()
{
	func_110();
	func_60();
	func_53();
	func_52();
}

void func_52()
{
	if (!unk_0x94E72F17611BCD3C(iLocal_204, 5))
	{
		if (!unk_0x94E72F17611BCD3C(iLocal_204, 4))
		{
			if (Local_55.f_17 == 0)
			{
				unk_0xEDB9A377CD8B7F03(&iLocal_204, 4);
			}
			else
			{
				unk_0xEDB9A377CD8B7F03(&iLocal_204, 5);
			}
		}
		else if (!func_177(unk_0xCFC72E446B0B3AD7(), 1, 1))
		{
			unk_0xEDB9A377CD8B7F03(&iLocal_204, 5);
		}
	}
}

void func_53()
{
	if (((unk_0xA77D66EDA4D3BE88() == 7 || unk_0xA77D66EDA4D3BE88() == 8) || unk_0xA77D66EDA4D3BE88() == 9) || unk_0xA77D66EDA4D3BE88() == 10)
	{
		func_59();
	}
	else
	{
		func_58();
	}
	if ((Local_55.f_12 - func_57(&(Local_55.f_10), 0, 0)) >= 0)
	{
		func_54((Local_55.f_12 - func_57(&(Local_55.f_10), 0, 0)), "DCP_TIMER", 0, 1, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0);
	}
	else
	{
		func_54(0, "DCP_TIMER", 0, 1, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0);
	}
}

void func_54(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		if (iVar0 == -1)
		{
			if (func_56(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1328872.f_1 = 1;
		func_55(7, iVar0);
		Global_1328872.f_3132[iVar0] = iParam0;
		StringCopy(&(Global_1328872.f_3132.f_9[iVar0 /*16*/]), sParam1, 64);
		Global_1328872.f_3132.f_138[iVar0] = iParam2;
		Global_1328872.f_3132.f_174[iVar0] = iParam3;
		Global_1328872.f_3132.f_147[iVar0] = iParam4;
		Global_1328872.f_3132.f_156[iVar0] = iParam5;
		Global_1328872.f_3132.f_201[iVar0] = iParam6;
		Global_1328872.f_3132.f_210[iVar0] = iParam7;
		Global_1328872.f_3132.f_165[iVar0] = iParam8;
		Global_1328872.f_3132.f_254[iVar0] = iParam9;
		Global_1328872.f_3132.f_263[iVar0] = iParam10;
		Global_1328872.f_3132.f_289[iVar0] = iParam11;
		Global_1328872.f_3132.f_192[iVar0] = iParam12;
		Global_1328872.f_3132.f_219[iVar0] = iParam13;
	}
}

void func_55(int iParam0, int iParam1)
{
	unk_0xEDB9A377CD8B7F03(&(Global_1328872.f_3613[iParam0]), iParam1);
}

bool func_56(int iParam0, int iParam1)
{
	return unk_0x94E72F17611BCD3C(Global_1328872.f_3613[iParam0], iParam1);
}

int func_57(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x4B69FB3A5B09A1BA() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), *uParam0);
		}
		else
		{
			return unk_0xE1C532DCCBD8FED6(unk_0x4FEA29C1086C638D(), *uParam0);
		}
	}
	return unk_0xE1C532DCCBD8FED6(unk_0x17103F66FBB44C3C(), *uParam0);
}

void func_58()
{
	Global_1328872.f_765 = 1;
}

void func_59()
{
	Global_1328872.f_764 = 1;
}

void func_60()
{
	if (func_9(&uLocal_206, 30000, 0))
	{
		switch (Local_55.f_16)
		{
			case 2:
				func_107(2093, 1, -1);
				break;
			
			case 3:
				func_107(2094, 1, -1);
				break;
			
			case 4:
				func_107(2095, 1, -1);
				break;
			
			case 5:
				func_107(2096, 1, -1);
				break;
		}
		func_61(0, unk_0x9F92518438215DD0(), "XPT_DSC", -1636175450, 2048546661, (Global_262145.f_6408 * Local_55.f_16), 1, -1, 0, 0);
		Local_75[unk_0x9725084D4DFE8258() /*4*/].f_2++;
		func_5(&uLocal_206);
	}
}

int func_61(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_71(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x746960881FB19A89(iParam1))
		{
			if (unk_0x4E178F5D4155391A(iParam1))
			{
				uVar1 = unk_0x240654B57CFFBFB3(iParam1);
				func_67(unk_0xAA04EEFB14FDE2E9(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8);
			}
		}
	}
	else
	{
		func_62(iParam1, iVar0, sParam8);
	}
	return iVar0;
}

void func_62(int iParam0, int iParam1, char* sParam2)
{
	struct<3> Var0;
	
	Var0 = { func_65(iParam0, 1) };
	if (iParam0 == func_64(unk_0x9F92518438215DD0()))
	{
		func_63(1);
	}
	func_67(Var0, iParam1, 0, sParam2);
}

void func_63(int iParam0)
{
	Global_2422166.f_1307 = iParam0;
}

int func_64(var uParam0)
{
	return uParam0;
}

Vector3 func_65(int iParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	float fVar10;
	
	if (iParam0 == func_66(unk_0x9F92518438215DD0()) && unk_0xB49A1BEB8771FD4C(unk_0xB14E47EA29D7193F()) == 4)
	{
		Var0 = { unk_0x20CBCBD58A2C73B4(iParam0, 0f, 2f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0x77009B1C011405A9(iParam0, 0) };
	}
	fVar3 = 0f;
	if (!unk_0x0BA451447C3B1A8D(iParam0))
	{
		fVar3 = unk_0xE691E4EA6B4440C6(iParam0);
	}
	unk_0x6BD8057B0B6EC46D(unk_0xB6A50C909A8FABC3(iParam0), &Var4, &Var7);
	if (bParam1)
	{
		fVar10 = (Var7.f_2 + 0.18f);
	}
	else
	{
		fVar10 = (Var4.f_2 + 0.18f);
	}
	Var0 = { unk_0x81D32A4E7E765EA7(Var0, fVar3, 0f, 0f, fVar10) };
	return Var0;
}

int func_66(var uParam0)
{
	return uParam0;
}

void func_67(struct<3> Param0, int iParam3, int iParam4, char* sParam5)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2422166.f_726[iVar0 /*29*/].f_6 == 0 || Global_2422166.f_726[iVar0 /*29*/].f_6 == 6)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2422166.f_726[iVar1 /*29*/] = { Param0 };
			Global_2422166.f_726[iVar1 /*29*/].f_6 = 1;
			Global_2422166.f_726[iVar1 /*29*/].f_4 = func_70(Global_2422166.f_726[iVar1 /*29*/], &Global_1312317, &Global_1312318);
			Global_2422166.f_726[iVar1 /*29*/].f_7 = unk_0x6A8628B6E9F055B3();
			Global_2422166.f_726[iVar1 /*29*/].f_3 = iParam3;
			Global_2422166.f_726[iVar1 /*29*/].f_8 = iParam4;
			Global_2422166.f_726[iVar1 /*29*/].f_9 = func_69();
			Global_2422166.f_726[iVar1 /*29*/].f_10 = func_68();
			StringCopy(&(Global_2422166.f_726[iVar1 /*29*/].f_22), sParam5, 16);
		}
	}
}

int func_68()
{
	if (Global_2422166.f_1307)
	{
		Global_2422166.f_1307 = 0;
		return 1;
	}
	Global_2422166.f_1307 = 0;
	return 0;
}

var func_69()
{
	var uVar0;
	
	uVar0 = Global_2422166.f_1309;
	Global_2422166.f_1309 = 1;
	return uVar0;
}

float func_70(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x91EAD4F2F9B5B38A(unk_0xDBEF9DC21C9E11B5(), Param0, 1);
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

var func_71(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_72(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_72(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_106(unk_0xCFC72E446B0B3AD7()) || func_105(unk_0xCFC72E446B0B3AD7()))
	{
		if (Global_262145.f_7295 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_7295;
		}
	}
	else if (Global_262145.f_4979 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_4979;
	}
	if (func_104(uParam2))
	{
	}
	if (func_103())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_101(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_100(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_97(0, &iVar1);
					break;
				
				case 3:
					func_97(1, &iVar1);
					break;
				
				case 1:
					func_93(&iVar1);
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
			func_107(1156, iVar1, -1);
			if (iParam1 == 0)
			{
				func_83((func_92(unk_0xCFC72E446B0B3AD7()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xA2895E3CE9FD15F8(iVar1, iParam8, iParam9);
				if (Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_39.f_2 != -1)
				{
					func_107(1157, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_77(iVar1);
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
				func_73((func_75(unk_0xCFC72E446B0B3AD7()) + iVar1));
			}
			else
			{
				func_73((func_75(unk_0xCFC72E446B0B3AD7()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_73(int iParam0)
{
	if (func_103())
	{
		Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_188.f_5 = iParam0;
		func_74(joaat("mpply_globalxp"), iParam0);
	}
}

void func_74(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xC46BDC34976E9532(iVar0, uParam1, 1);
	}
}

int func_75(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_177(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xCFC72E446B0B3AD7())
			{
				return func_76(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1582869[iParam0 /*332*/].f_188.f_5;
			}
		}
		else
		{
			return func_76(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_76(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x39496A55977AA312(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_77(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_82(unk_0xCFC72E446B0B3AD7()) };
	if (unk_0xEBD30B93B1EED82E())
	{
		if (unk_0x1F0B5C273160FECE(&Var0))
		{
			iVar13 = func_80(func_81(&Var0));
			if (iVar13 == 0)
			{
				func_79(&Global_1335490, iParam0);
				func_78(joaat("mpply_crew_local_xp_0"), Global_1335490);
			}
			else if (iVar13 == 1)
			{
				func_79(&Global_1335491, iParam0);
				func_78(joaat("mpply_crew_local_xp_1"), Global_1335491);
			}
			else if (iVar13 == 2)
			{
				func_79(&Global_1335492, iParam0);
				func_78(joaat("mpply_crew_local_xp_2"), Global_1335492);
			}
			else if (iVar13 == 3)
			{
				func_79(&Global_1335493, iParam0);
				func_78(joaat("mpply_crew_local_xp_3"), Global_1335493);
			}
			else if (iVar13 == 4)
			{
				func_79(&Global_1335494, iParam0);
				func_78(joaat("mpply_crew_local_xp_4"), Global_1335494);
			}
		}
	}
}

void func_78(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xC46BDC34976E9532(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1335485 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1335487 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1335487 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1335488 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1335489 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1335490 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1335491 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1335492 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1335493 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1335494 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1335495 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1335496 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1335497 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1335498 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1335499 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1335500 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1335501 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_79(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_80(int iParam0)
{
	if (iParam0 == Global_1335485)
	{
		return 0;
	}
	else if (iParam0 == Global_1335486)
	{
		return 1;
	}
	else if (iParam0 == Global_1335487)
	{
		return 2;
	}
	else if (iParam0 == Global_1335488)
	{
		return 3;
	}
	else if (iParam0 == Global_1335489)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_81(var uParam0)
{
	if (unk_0xEBD30B93B1EED82E())
	{
		if (unk_0x1F0B5C273160FECE(uParam0))
		{
			return Global_2435061;
		}
	}
	return Global_2435061;
}

struct<13> func_82(int iParam0)
{
	struct<13> Var0;
	
	unk_0x4DB2D434F7F3C6B1(iParam0, &Var0, 13);
	return Var0;
}

void func_83(int iParam0, int iParam1, int iParam2)
{
	if (func_103())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7270 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1335605[func_18(-1)])
				{
					unk_0xA2895E3CE9FD15F8(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1335605[func_18(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_7269 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0xA2895E3CE9FD15F8(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_7269 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0xA2895E3CE9FD15F8(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_91(unk_0xCFC72E446B0B3AD7()))
		{
			Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_188.f_1 = iParam0;
			Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_188.f_6 = func_89(iParam0, 1);
		}
		func_88(631, iParam0, -1, 1);
		func_87(632, func_89(iParam0, 1), -1, 1);
		Global_1335605[func_18(-1)] = iParam0;
		func_84(7, 0);
	}
}

void func_84(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_86(iParam0, iParam1))
	{
		iVar0 = func_85();
		Global_2435039[iVar0] = iParam0;
	}
}

int func_85()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2435039[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_86(int iParam0, var uParam1)
{
	if (Global_1315888)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315900) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_87(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2454588[iParam0 /*6*/][func_18(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC46BDC34976E9532(iVar0, iParam1, iParam3);
	}
}

void func_88(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2454588[iParam0 /*6*/][func_18(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC46BDC34976E9532(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 779:
			Global_1335551[func_18(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1335557[func_18(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1335563[func_18(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1335569[func_18(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1335527[func_18(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1335533[func_18(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1335539[func_18(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1335545[func_18(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1335503[func_18(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1335509[func_18(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1335515[func_18(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1335521[func_18(iParam2)] = iParam1;
			break;
		
		case 749:
			Global_1335575[func_18(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1335581[func_18(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1335587[func_18(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1335593[func_18(iParam2)] = iParam1;
			break;
		
		case 1294:
			Global_1335599[func_18(iParam2)] = iParam1;
			break;
		
		case 631:
			Global_1335605[func_18(iParam2)] = iParam1;
			break;
		
		case 1269:
			Global_1335611[func_18(iParam2)] = iParam1;
			break;
		
		case 1866:
			Global_2476789[0 /*6*/][func_18(iParam2)] = iParam1;
			break;
		
		case 2255:
			Global_2476789[1 /*6*/][func_18(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1335617[func_18(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1335623[func_18(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1335629[func_18(iParam2)] = iParam1;
			break;
		
		case 1227:
			Global_1335635[func_18(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_89(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_90(iParam0, 0);
}

int func_90(int iParam0, int iParam1)
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
		if (Global_270816[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_270816[iVar3] < iParam0)
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

int func_91(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x94E72F17611BCD3C(Global_2422166.f_1, iParam0);
	}
	return 1;
}

int func_92(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xCFC72E446B0B3AD7())
			{
				return Global_1335605[func_18(-1)];
			}
			else if (func_91(iParam0))
			{
				return Global_1582869[iParam0 /*332*/].f_188.f_1;
			}
		}
	}
	else
	{
		return Global_1335605[func_18(-1)];
	}
	return 0;
}

void func_93(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x59A4BF97B76AD953(unk_0xCFC72E446B0B3AD7());
	iVar0 = 0;
	while (iVar0 < unk_0x0C20B275AC51DD95())
	{
		iVar4 = unk_0x7DB5D4F6F4C81C82(iVar0);
		if (unk_0xD3AFE733DFF53CF5(iVar4))
		{
			iVar5 = unk_0xA6118988A879C889(iVar4);
			if (unk_0x59A4BF97B76AD953(iVar5) != -1)
			{
				if (unk_0x59A4BF97B76AD953(iVar5) == iVar1 || func_96(unk_0x59A4BF97B76AD953(iVar5), iVar1))
				{
					iVar2++;
					if (iVar5 != unk_0xCFC72E446B0B3AD7())
					{
						if (func_95(unk_0xCFC72E446B0B3AD7(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_94(*iParam0, 100) * (10f * Global_262145.f_4194)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_94(*iParam0, 100) * (20f * Global_262145.f_4187)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_94(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_95(int iParam0, int iParam1)
{
	if (unk_0xEBD30B93B1EED82E())
	{
		Global_2445561 = { func_82(iParam0) };
		Global_2445574 = { func_82(iParam1) };
		if (unk_0x1F0B5C273160FECE(&Global_2445561))
		{
			if (unk_0x1F0B5C273160FECE(&Global_2445574))
			{
				unk_0xFFB76AAE8F413B73(&Global_2445491, 35, &Global_2445561);
				unk_0xFFB76AAE8F413B73(&Global_2445526, 35, &Global_2445574);
				if (Global_2445491 == Global_2445526)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_96(int iParam0, int iParam1)
{
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
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 0);
				
				case 1:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 1);
				
				case 2:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 2);
				
				case 3:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 4);
				
				case 1:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 5);
				
				case 2:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 6);
				
				case 3:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 8);
				
				case 1:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 9);
				
				case 2:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 10);
				
				case 3:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 12);
				
				case 1:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 13);
				
				case 2:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 14);
				
				case 3:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_97(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0x0C20B275AC51DD95())
		{
			iVar3 = iVar0;
			if (unk_0xD3AFE733DFF53CF5(iVar3))
			{
				iVar4 = unk_0xA6118988A879C889(iVar3);
				if (func_177(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xCFC72E446B0B3AD7())
					{
						iVar1++;
						if (func_95(unk_0xCFC72E446B0B3AD7(), iVar4))
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
			if (func_177(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xCFC72E446B0B3AD7())
				{
					if (func_98(unk_0xCFC72E446B0B3AD7(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_95(unk_0xCFC72E446B0B3AD7(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_94(*iParam1, 100) * (10f * Global_262145.f_4194)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_94(*iParam1, 100) * (20f * Global_262145.f_4187)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_98(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_99(iParam0), func_99(iParam1));
	return 0f;
}

Vector3 func_99(var uParam0)
{
	return unk_0x77009B1C011405A9(unk_0x4E6043D225B9C75F(uParam0), 0);
}

int func_100(int iParam0)
{
	int iVar0;
	
	if (unk_0x9C3FBB2667EB8955() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_94(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_101(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xB65C49ABD0DAB270(iParam0) > func_92(unk_0xCFC72E446B0B3AD7()))
		{
			iParam0 = -func_92(unk_0xCFC72E446B0B3AD7());
		}
	}
	if (func_102(8000, 0, 0) > 0)
	{
		if (func_102(8000, 0, 0) < (iParam0 + func_92(unk_0xCFC72E446B0B3AD7())))
		{
			iParam0 = (func_102(8000, 0, 0) - func_92(unk_0xCFC72E446B0B3AD7()));
		}
	}
	return iParam0;
}

int func_102(int iParam0, bool bParam1, int iParam2)
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
	return Global_270816[iParam0];
}

int func_103()
{
	return 1;
}

int func_104(var uParam0)
{
	if (unk_0x471A7F8C908126F0(uParam0))
	{
		return 1;
	}
	else if (unk_0x6B08EC9A88700FBB(uParam0, "") || unk_0x6B08EC9A88700FBB(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_105(int iParam0)
{
	return Global_2414035[iParam0 /*254*/].f_114 == 2;
}

bool func_106(int iParam0)
{
	return Global_2414035[iParam0 /*254*/].f_114 == 7;
}

void func_107(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_109(iParam0, func_18(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_108(iParam0))
	{
		func_87(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_88(iParam0, iVar0, iParam2, 1);
	}
}

int func_108(int iParam0)
{
	if (Global_1335484)
	{
		switch (iParam0)
		{
			case 779:
			case 780:
			case 781:
			case 782:
			case 769:
			case 770:
			case 771:
			case 772:
			case 759:
			case 760:
			case 761:
			case 762:
			case 749:
			case 750:
			case 751:
			case 752:
			case 1294:
			case 631:
			case 1269:
			case 756:
			case 757:
			case 758:
			case 1227:
			case 1866:
			case 2255:
				return 1;
				break;
			}
	}
	return 0;
}

int func_109(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454588[iParam0 /*6*/][func_18(uParam1)];
	if (unk_0x39496A55977AA312(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_110()
{
	if (func_9(&uLocal_208, 10000, 0))
	{
		if (unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) < Local_55.f_16)
		{
			unk_0x6EAEC8403384110F(unk_0xCFC72E446B0B3AD7(), Local_55.f_16, 0);
			unk_0x4BAAF4A818239FFF(unk_0xCFC72E446B0B3AD7(), 0);
		}
		unk_0x1114B691B366040A(unk_0xCFC72E446B0B3AD7());
	}
}

void func_111()
{
	if (!unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), Local_55.f_2, Local_55.f_5, Local_55.f_5, 1000f, 0, 1, 0))
	{
		func_114();
		Local_75[unk_0x9725084D4DFE8258() /*4*/].f_3 = 0;
	}
	else if (!unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), Local_55.f_2, Local_55.f_6, Local_55.f_6, 950f, 0, 1, 0))
	{
		if (!unk_0x94E72F17611BCD3C(iLocal_204, 0) && unk_0x94E72F17611BCD3C(iLocal_204, 3))
		{
			if (!unk_0xC9EED58014EF1F40() && !func_113())
			{
				func_112("DCP_LEAVE", -1);
				unk_0xEDB9A377CD8B7F03(&iLocal_204, 0);
			}
		}
	}
	else
	{
		if (!unk_0x94E72F17611BCD3C(iLocal_204, 3))
		{
			unk_0xEDB9A377CD8B7F03(&iLocal_204, 3);
		}
		if (unk_0x94E72F17611BCD3C(iLocal_204, 0))
		{
			unk_0xF76EE56D3E7DAF1B(&iLocal_204, 0);
		}
	}
}

void func_112(char* sParam0, int iParam1)
{
	unk_0x21D4405986536E14(sParam0);
	unk_0x7BDC04B08D7A7FE0(0, 0, 1, iParam1);
}

bool func_113()
{
	return unk_0x17103F66FBB44C3C() <= Global_17236.f_5130 + 100;
}

void func_114()
{
	func_5(&uLocal_206);
	func_5(&uLocal_208);
	func_115();
	unk_0xF76EE56D3E7DAF1B(&(Local_75[unk_0x9725084D4DFE8258() /*4*/].f_1), 0);
	unk_0xF76EE56D3E7DAF1B(&iLocal_204, 3);
	unk_0xEDB9A377CD8B7F03(&(Global_2446533.f_4400), 0);
	if (!unk_0x94E72F17611BCD3C(iLocal_204, 5))
	{
		unk_0xEDB9A377CD8B7F03(&iLocal_204, 5);
	}
}

void func_115()
{
	if (unk_0x94E72F17611BCD3C(iLocal_204, 2))
	{
		func_116(1);
		unk_0xF76EE56D3E7DAF1B(&iLocal_204, 2);
	}
}

void func_116(bool bParam0)
{
	Global_2404554.f_39 = { Global_2406039 };
	if (bParam0)
	{
		func_123();
	}
	func_119(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077);
	func_118(0);
	func_117();
}

void func_117()
{
	struct<4> Var0;
	
	if (Global_2404554.f_408.f_1 == unk_0x81ACA1EEF1E4410D())
	{
		Global_2404554.f_408 = { Var0 };
	}
}

void func_118(bool bParam0)
{
	if (bParam0)
	{
		Global_2404554.f_550 = 0;
	}
	else
	{
		Global_2404554.f_550 = 1;
	}
}

void func_119(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	if (bParam0)
	{
		Global_2404554.f_1056 = iParam1;
		Global_2404554.f_1057 = iParam2;
		func_121();
		func_120(8, 0, 0);
		Global_2404554.f_551 = 1;
		Global_2404554.f_1060 = iParam3;
		Global_2404554.f_1061 = iParam4;
		Global_2404554.f_1058 = iParam5;
		Global_2404554.f_1059 = iParam6;
		Global_2404554.f_1062 = iParam7;
		Global_2404554.f_1063 = iParam8;
		Global_2404554.f_1064 = iParam9;
	}
	else
	{
		func_121();
		func_120(0, 0, 0);
		Global_2404554.f_551 = 0;
	}
}

void func_120(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2408511 = 0;
	}
	Global_2404554.f_408 = iParam0;
	Global_2404554.f_408.f_1 = unk_0x81ACA1EEF1E4410D();
	Global_2404554.f_408.f_2 = iParam1;
	Global_2404554.f_408.f_3 = iParam2;
}

void func_121()
{
	func_122();
	Global_2404554.f_552 = 0;
}

void func_122()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404554.f_553[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_123()
{
	Global_2404554.f_286 = { Global_2406286 };
}

void func_124()
{
	if (!unk_0x94E72F17611BCD3C(iLocal_204, 2))
	{
		func_142(Local_55.f_2, (Local_55.f_6 * 1.5f), 0, 0, 1, 0);
		func_126(Local_55.f_2, Local_55.f_6, 0, 1);
		func_125(Local_55.f_2, 1, 0);
		unk_0xEDB9A377CD8B7F03(&iLocal_204, 2);
	}
}

void func_125(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2404554.f_39.f_25 = { Param0 };
	Global_2404554.f_39.f_28 = iParam3;
	Global_2404554.f_39.f_29 = iParam4;
}

void func_126(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	func_129(Param0, 0f, 0f, 0f, uParam3, 0, iParam4, iParam5);
	func_127(0);
}

void func_127(bool bParam0)
{
	if (bParam0)
	{
		func_128(0, 1);
	}
	else
	{
		func_128(Global_2404554.f_39.f_28, 0);
	}
}

void func_128(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	switch (Global_2404554.f_286[0 /*12*/].f_10)
	{
		case 0:
			func_125(Global_2404554.f_286[0 /*12*/], iParam0, iParam1);
			break;
		
		case 1:
		case 2:
			Var0 = { Global_2404554.f_286[0 /*12*/] + Global_2404554.f_286[0 /*12*/].f_3 * Vector(0.5f, 0.5f, 0.5f) };
			func_125(Var0, iParam0, iParam1);
			break;
	}
}

void func_129(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, int iParam8, var uParam9)
{
	struct<12> Var0;
	
	if (func_138(unk_0xCFC72E446B0B3AD7(), 1) || uParam9)
	{
		if (Var0.f_10 == 1)
		{
			func_137(&Param0, &Param3);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param3 };
		Var0.f_6 = uParam6;
		Var0.f_10 = iParam7;
		if (func_132(Var0))
		{
			Global_2404554.f_39.f_40 = func_131(unk_0xCFC72E446B0B3AD7());
			func_130(Var0, iParam8);
		}
	}
}

void func_130(struct<12> Param0, int iParam12)
{
	Global_2404554.f_286[iParam12 /*12*/] = { Param0 };
	Global_2404554.f_286[iParam12 /*12*/].f_9 = 1;
}

int func_131(int iParam0)
{
	if (func_177(iParam0, 0, 1))
	{
		return Global_2414035[iParam0 /*254*/].f_1;
	}
	return 0;
}

int func_132(struct<12> Param0)
{
	struct<12> Var0[1];
	int iVar13;
	
	Var0[0 /*12*/] = { Param0 };
	Var0[0 /*12*/].f_9 = 1;
	iVar13 = 0;
	while (iVar13 < 2)
	{
		if (Global_2404554.f_39[iVar13 /*12*/].f_9 == 1)
		{
			if (!func_133(Global_2404554.f_39[iVar13 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar13++;
	}
	return 1;
}

int func_133(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam12)
	{
		if ((uParam12[iVar0 /*12*/])->f_9)
		{
			switch ((uParam12[iVar0 /*12*/])->f_10)
			{
				case 0:
					switch (Param0.f_10)
					{
						case 0:
							if (func_136(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_134(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 1:
					switch (Param0.f_10)
					{
						case 0:
							if (func_136(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_134(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 2:
					break;
				}
		}
		iVar0++;
	}
	if (unk_0x652D2EEEF1D3E62C(Param0) == 0f)
	{
		return 0;
	}
	return 1;
}

bool func_134(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	fVar6 = (fParam9 * 0.7071068f);
	Var0 = { Param6 - Vector(fVar6, fVar6, fVar6) };
	Var3 = { Param6 + Vector(fVar6, fVar6, fVar6) };
	return func_135(Param0, Param3, Var0, Var3);
}

int func_135(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
{
	if (((((Param0.f_0 >= Param6.f_0 && Param0.f_1 >= Param6.f_1) && Param0.f_2 >= Param6.f_2) && Param3.f_0 <= Param9.f_0) && Param3.f_1 <= Param9.f_1) && Param3.f_2 <= Param9.f_2)
	{
		return 1;
	}
	return 0;
}

int func_136(struct<3> Param0, float fParam3, struct<3> Param4, float fParam7)
{
	struct<3> Var0;
	
	Var0 = { Param4 - Param0 };
	if ((unk_0x652D2EEEF1D3E62C(Var0) + fParam3) < fParam7)
	{
		return 1;
	}
	return 0;
}

void func_137(var uParam0, var uParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (*uParam0 <= *uParam1)
	{
		Var0.f_0 = *uParam0;
		Var3.f_0 = *uParam1;
	}
	else
	{
		Var0.f_0 = *uParam1;
		Var3.f_0 = *uParam0;
	}
	if (uParam0->f_1 <= uParam1->f_1)
	{
		Var0.f_1 = uParam0->f_1;
		Var3.f_1 = uParam1->f_1;
	}
	else
	{
		Var0.f_1 = uParam1->f_1;
		Var3.f_1 = uParam0->f_1;
	}
	if (uParam0->f_2 <= uParam1->f_2)
	{
		Var0.f_2 = uParam0->f_2;
		Var3.f_2 = uParam1->f_2;
	}
	else
	{
		Var0.f_2 = uParam1->f_2;
		Var3.f_2 = uParam0->f_2;
	}
	*uParam0 = { Var0 };
	*uParam1 = { Var3 };
}

bool func_138(int iParam0, bool bParam1)
{
	if (Global_1312449 != 0)
	{
		return func_131(iParam0) != 0;
	}
	return func_139(iParam0, bParam1);
}

int func_139(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_140(iParam0))
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

bool func_140(int iParam0)
{
	return func_141(iParam0);
}

bool func_141(int iParam0)
{
	return unk_0x94E72F17611BCD3C(Global_1582869[iParam0 /*332*/].f_13.f_1, 0);
}

void func_142(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	func_143(Param0, 0f, 0f, 0f, fParam3, 0, iParam4, iParam6, iParam5, iParam7);
}

void func_143(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, int iParam8, var uParam9, var uParam10, var uParam11)
{
	struct<12> Var0;
	
	if (func_138(unk_0xCFC72E446B0B3AD7(), 1) || uParam9)
	{
		if (Global_2404554.f_551)
		{
			func_145();
		}
		if (Var0.f_10 == 1)
		{
			func_137(&Param0, &Param3);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param3 };
		Var0.f_6 = uParam6;
		Var0.f_10 = iParam7;
		Var0.f_11 = uParam10;
		Var0.f_8 = uParam11;
		if (Var0.f_8 < 0f)
		{
			Var0.f_8 = 0f;
		}
		Global_2404554.f_39.f_40 = func_131(unk_0xCFC72E446B0B3AD7());
		func_144(Var0, iParam8);
	}
}

void func_144(struct<12> Param0, int iParam12)
{
	Global_2404554.f_39[iParam12 /*12*/] = { Param0 };
	Global_2404554.f_39[iParam12 /*12*/].f_9 = 1;
}

void func_145()
{
	func_122();
	Global_2404554.f_551 = 0;
}

void func_146()
{
	if (!unk_0x94E72F17611BCD3C(iLocal_204, 6))
	{
		if (((((((func_147(60000) && func_149() == 1) && Local_55.f_7 <= 1) && !unk_0xC9EED58014EF1F40()) && !unk_0xC8557993A78C1B3E()) && func_177(unk_0xCFC72E446B0B3AD7(), 1, 1)) && !func_113()) && Local_55.f_16 != 5)
		{
			func_112("DCP_HELP1", -1);
			unk_0xEDB9A377CD8B7F03(&iLocal_204, 6);
		}
	}
}

bool func_147(int iParam0)
{
	return unk_0xB65C49ABD0DAB270(unk_0xE1C532DCCBD8FED6(Global_2408522, unk_0x6A8628B6E9F055B3())) > iParam0;
}

void func_148()
{
	if (!unk_0x2E6E8D325977B3EC(uLocal_205))
	{
		uLocal_205 = unk_0x08E544BD3FF6AB64(Local_55.f_2, Local_55.f_5);
		unk_0x016722B6E0559A9A(uLocal_205, 50);
		unk_0xFBF7E9E330FE936E(uLocal_205, 220);
		unk_0x49101D6A0E39441B(uLocal_205, 0);
		unk_0x2A8C2BEEA4F7041F(uLocal_205, "DCP_BLIPN");
	}
}

int func_149()
{
	return Local_55.f_0;
}

int func_150(int iParam0)
{
	return Local_75[iParam0 /*4*/];
}

bool func_151(int iParam0)
{
	return !func_152(iParam0);
}

int func_152(int iParam0)
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
			if (Global_262145.f_5003)
			{
				return 0;
			}
			if (func_154(unk_0xCFC72E446B0B3AD7(), 7))
			{
				return 0;
			}
			if (unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 0) || unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_5004)
			{
				return 0;
			}
			if (func_154(unk_0xCFC72E446B0B3AD7(), 7))
			{
				return 0;
			}
			if (unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 0) || unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_5005)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_5006)
			{
				return 0;
			}
			if (func_154(unk_0xCFC72E446B0B3AD7(), 7))
			{
				return 0;
			}
			if (unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 0) || unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_153(4))
			{
				return 0;
			}
			if (func_154(unk_0xCFC72E446B0B3AD7(), 7))
			{
				return 0;
			}
			if (unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 0) || unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_153(4))
			{
				return 0;
			}
			if (func_154(unk_0xCFC72E446B0B3AD7(), 7))
			{
				return 0;
			}
			if (unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 0) || unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_153(4))
			{
				return 0;
			}
			if (func_154(unk_0xCFC72E446B0B3AD7(), 7))
			{
				return 0;
			}
			if (unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 0) || unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 1))
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

int func_153(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_177(unk_0x7225A5A7A532BC7C(iVar0), 0, 1))
		{
			if (unk_0x94E72F17611BCD3C(Global_2414035[iVar0 /*254*/].f_205, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_154(int iParam0, int iParam1)
{
	return unk_0x94E72F17611BCD3C(Global_2414035[iParam0 /*254*/].f_205, iParam1);
}

int func_155()
{
	bool bVar0;
	
	func_162(&bVar0);
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
	if (func_161())
	{
		return 1;
	}
	if (Global_2437036)
	{
		return 1;
	}
	if (func_160())
	{
		return 1;
	}
	if (func_159(157))
	{
		if (!func_158())
		{
			return 1;
		}
	}
	if (func_159(155))
	{
		return 1;
	}
	if (!unk_0x6518D9FF7C996D2B())
	{
		return 1;
	}
	if (func_156() != 0)
	{
		if (unk_0x7B47A371E2D93C2C(func_156()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_156()
{
	switch (func_157())
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

int func_157()
{
	return Global_24444;
}

bool func_158()
{
	return Global_2428162.f_572;
}

int func_159(int iParam0)
{
	if (unk_0xAFB34077E5ACCBA7(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_160()
{
	return Global_2435128;
}

bool func_161()
{
	return Global_2428162.f_567;
}

void func_162(var uParam0)
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
					func_163(iVar0);
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

void func_163(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x2E567DCD11FE0296(1, iParam0, &Var0, 3))
	{
		if (func_177(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x4E6043D225B9C75F(Var0.f_1);
			if (unk_0x746960881FB19A89(uVar3))
			{
				if (unk_0x827151D7B70CB853(iVar3, 0))
				{
					uVar4 = unk_0x1161215F69587BDA(iVar3, 0);
					if (unk_0x4A4FC7B76BEF1AC9(uVar4, Var0.f_2) && unk_0xD28DD58204E8F9D1())
					{
						if (func_164(uVar4, &bVar5))
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

int func_164(int iParam0, var uParam1)
{
	if (unk_0x746960881FB19A89(uParam0))
	{
		if (!unk_0x34E74FF8690AA4B1(iParam0))
		{
			if (unk_0x1F298C7D5F6EEDBF(iParam0))
			{
				unk_0x336AE92FD68DEF98(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0xAD2C236C4A4B83C9(iParam0, 0))
		{
			if (unk_0x88A3865085DFB7AD(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_165()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_166()
{
	if (unk_0x2E6E8D325977B3EC(uLocal_205))
	{
		unk_0x0451B5D93A4BDAA0(&uLocal_205);
	}
	if (unk_0x94E72F17611BCD3C(Local_55.f_1, 1))
	{
		func_25(12, "DSC_FAIL", 0, 0, -99);
	}
	func_115();
	func_168(16, 0);
	unk_0xEDB9A377CD8B7F03(&(Global_2446533.f_4400), 0);
	func_167();
}

void func_167()
{
	unk_0xE60DEFFB2A853900();
}

void func_168(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x94E72F17611BCD3C(Global_2414035[unk_0xCFC72E446B0B3AD7() /*254*/].f_205, iParam0))
		{
			unk_0xEDB9A377CD8B7F03(&(Global_2414035[unk_0xCFC72E446B0B3AD7() /*254*/].f_205), iParam0);
		}
	}
	else if (unk_0x94E72F17611BCD3C(Global_2414035[unk_0xCFC72E446B0B3AD7() /*254*/].f_205, iParam0))
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_2414035[unk_0xCFC72E446B0B3AD7() /*254*/].f_205), iParam0);
	}
}

void func_169(struct<20> Param0)
{
	func_175(func_176(Param0.f_0), Param0);
	func_173(0, -1, 0);
	unk_0xA32DB9C55050112C(&Local_55, 20);
	unk_0x85862F9356411B89(&Local_75, 129);
	if (!func_172())
	{
		func_166();
	}
	if (unk_0x4B69FB3A5B09A1BA())
	{
		unk_0xE5556978B2858C53(0);
		if (unk_0x7EF90A4891193127())
		{
			func_170();
		}
		func_168(16, 1);
		Local_75[unk_0x9725084D4DFE8258() /*4*/] = 0;
	}
	else
	{
		func_166();
	}
}

void func_170()
{
	Local_55.f_2 = { func_171() };
	Local_55.f_5 = 200f;
	Local_55.f_6 = 180f;
}

Vector3 func_171()
{
	switch (unk_0x073B65E051D2F03E(0, 10))
	{
		case 0:
			return 1440f, -2135f, 60f;
		
		case 1:
			return 233f, -1725f, 30f;
		
		case 2:
			return -403f, -1207f, 38f;
		
		case 3:
			return -1060f, -1028f, 3f;
		
		case 4:
			return -2152f, -329f, 14f;
		
		case 5:
			return -1651f, 214f, 61f;
		
		case 6:
			return -527f, 662f, 142f;
		
		case 7:
			return -27f, -747f, 45f;
		
		case 8:
			return 1292f, -649f, 68f;
		
		case 9:
			return 978f, -3143f, 6f;
		
		default:
	}
	return 978f, -3143f, 6f;
}

int func_172()
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
		if (func_161())
		{
			return 0;
		}
		if (func_159(155))
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

int func_173(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x56448188B27B0D1C();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_167();
			}
			else
			{
				return 0;
			}
		}
		if (!func_174())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x4B69FB3A5B09A1BA())
				{
					if (!bParam2)
					{
						func_167();
					}
					else
					{
						return 0;
					}
				}
				if (func_161())
				{
					if (!bParam2)
					{
						func_167();
					}
					else
					{
						return 0;
					}
				}
				if (func_159(155))
				{
					if (!bParam2)
					{
						func_167();
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
					func_167();
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
				func_167();
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
			func_167();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_174()
{
	return Global_1315874;
}

void func_175(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		func_167();
	}
	unk_0x097416E6C5CBD31B(uParam0, 0, Param1.f_16);
}

int func_176(int iParam0)
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

int func_177(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xCB29E1C3D086FBAE(iParam0))
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

