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
	struct<27> Local_55 = { 0, 0, 0, 0, -644710429, 32417469, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_82 = 0;
	struct<3> Local_83[32];
	var uLocal_180 = 0;
	int iLocal_181 = 0;
	var uLocal_182 = 0;
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
	if (unk_0x1C6DF6AD69BE853E() && func_148(unk_0x1329891157A54C63(), 0, 1))
	{
		func_135(ScriptParam_0);
	}
	else
	{
		func_131();
	}
	while (true)
	{
		func_130();
		if (func_120() || func_116(15))
		{
			func_131();
		}
		if (unk_0x9B20331E99DD1C1C())
		{
			func_131();
		}
		switch (func_115(unk_0x519AAFF77CC141DF()))
		{
			case 0:
				if (func_114() == 1)
				{
					if (func_113(60000))
					{
						if (unk_0x250A8F68F67CA19A(Local_55.f_2))
						{
							if (unk_0x7404950238A154C2(unk_0x1D1DAF7F94D5FE77(Local_55.f_2), 0))
							{
								if (!func_111())
								{
									if (!unk_0x236D8AD7EE179F46(Local_55.f_1, 0))
									{
										func_110("PTD_HELP1", -1);
									}
									else
									{
										func_110("PTD_HELP1H", -1);
									}
								}
							}
						}
					}
					Local_83[unk_0x519AAFF77CC141DF() /*3*/] = 1;
				}
				else if (func_114() == 4)
				{
					Local_83[unk_0x519AAFF77CC141DF() /*3*/] = 3;
				}
				break;
			
			case 1:
				if (func_114() == 1)
				{
					func_20();
				}
				else if (func_114() == 4)
				{
					Local_83[unk_0x519AAFF77CC141DF() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_19(&(Local_55.f_24));
				if (func_18(&(Local_55.f_24)))
				{
					Local_83[unk_0x519AAFF77CC141DF() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_83[unk_0x519AAFF77CC141DF() /*3*/] = 4;
			
			case 4:
				func_131();
				break;
		}
		if (unk_0x1C7D9BFDF15A02B4())
		{
			switch (func_114())
			{
				case 0:
					if (func_11())
					{
						Local_55.f_0 = 1;
					}
					break;
				
				case 1:
					func_10();
					func_9();
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
	struct<14> Var0;
	struct<14> Var14;
	
	if (func_7(Local_55.f_2))
	{
		if (Local_55.f_22 > 0)
		{
			if (unk_0x250A8F68F67CA19A(Local_55.f_2))
			{
				if (!unk_0xD1FFD959917D4ED8(unk_0x1D1DAF7F94D5FE77(Local_55.f_2), 400f, -3850f, -50f, 400f, 7950f, 1000f, 4050f, 0, 1, 0))
				{
					if (!unk_0x236D8AD7EE179F46(Local_55.f_1, 0))
					{
						Var0.f_2 = 111;
					}
					else
					{
						Var0.f_2 = 114;
					}
					func_5(Var0, func_6(1));
					unk_0xF3148AAF69AF9CBC(&(Local_55.f_1), 1);
					return 1;
				}
			}
		}
	}
	if (Local_55.f_23 == 0)
	{
		if (Local_55.f_0 != 4)
		{
			if (unk_0x250A8F68F67CA19A(Local_55.f_2))
			{
				if (unk_0x930F8FBB8E9537CC(unk_0x1D1DAF7F94D5FE77(Local_55.f_2)))
				{
					if (func_3(&(Local_55.f_26), 3000, 0))
					{
						if (!unk_0x236D8AD7EE179F46(Local_55.f_1, 0))
						{
							Var14.f_2 = 110;
						}
						else
						{
							Var14.f_2 = 113;
						}
						func_5(Var14, func_6(1));
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_3(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_4(uParam0, bParam2, 0);
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

void func_4(var uParam0, bool bParam1, bool bParam2)
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

void func_5(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0x1329891157A54C63();
	if (!iParam14 == 0)
	{
		unk_0x8DAD64B00B88FC2D(1, &Param0, 14, iParam14);
	}
}

int func_6(int iParam0)
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
			if (func_148(iVar2, 0, 0))
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

int func_7(var uParam0)
{
	if (unk_0x250A8F68F67CA19A(uParam0))
	{
		return !func_8(unk_0x1D1DAF7F94D5FE77(uParam0));
	}
	return 0;
}

int func_8(int iParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		if (unk_0x930F8FBB8E9537CC(iParam0))
		{
			return 1;
		}
		else if (!unk_0x7404950238A154C2(iParam0, 0))
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

void func_9()
{
	switch (Local_55.f_23)
	{
		case 0:
			break;
		
		case 1:
			break;
	}
}

void func_10()
{
	struct<14> Var0;
	var uVar14;
	
	if (unk_0x930F8FBB8E9537CC(unk_0x1D1DAF7F94D5FE77(Local_55.f_2)))
	{
		if (Local_55.f_0 != 4)
		{
			iLocal_181 = 0;
			while (iLocal_181 < unk_0x945535897333587B())
			{
				if (unk_0xC4FEBC724D547D78(unk_0xC3904F8771F37B7F(iLocal_181)))
				{
					uVar14 = unk_0x29A638E7EEEE6B16(unk_0xC3904F8771F37B7F(iLocal_181));
					if (unk_0x236D8AD7EE179F46(Local_83[iLocal_181 /*3*/].f_1, 0))
					{
						if (!unk_0x236D8AD7EE179F46(Local_55.f_1, 0))
						{
							Var0.f_2 = 109;
						}
						else
						{
							Var0.f_2 = 112;
						}
						Var0.f_10 = uVar14;
						func_5(Var0, func_6(1));
						Local_55.f_0 = 4;
						return;
					}
					if (unk_0x236D8AD7EE179F46(Local_83[iLocal_181 /*3*/].f_1, 1))
					{
						if (!unk_0x236D8AD7EE179F46(Local_55.f_1, 2))
						{
							unk_0xF3148AAF69AF9CBC(&(Local_55.f_1), 2);
						}
					}
				}
				iLocal_181++;
			}
		}
	}
}

int func_11()
{
	if (func_17(Local_55.f_4) && func_17(Local_55.f_5))
	{
		if (func_14() && func_12())
		{
			unk_0x887F4488DA99FD21(Local_55.f_4);
			unk_0x887F4488DA99FD21(Local_55.f_5);
			return 1;
		}
	}
	return 0;
}

int func_12()
{
	if ((!unk_0x250A8F68F67CA19A(Local_55.f_3) && func_17(Local_55.f_5)) && unk_0x250A8F68F67CA19A(Local_55.f_2))
	{
		if (func_7(Local_55.f_2))
		{
			if (func_13(&(Local_55.f_3), Local_55.f_2, 22, Local_55.f_5, -1, 1, 1, 1))
			{
				unk_0x1D15D99A10A15334(unk_0xCFD52BB67CC0A98F(Local_55.f_3), 1);
				unk_0x506A601663C5417C(unk_0xCFD52BB67CC0A98F(Local_55.f_3), Global_1574216);
				unk_0x6BC3C6046951661E(unk_0xCFD52BB67CC0A98F(Local_55.f_3), 0);
				unk_0x6CB332CB31E9FA96(unk_0xCFD52BB67CC0A98F(Local_55.f_3), 1);
			}
		}
	}
	if (!unk_0x250A8F68F67CA19A(Local_55.f_3))
	{
		return 0;
	}
	return 1;
}

int func_13(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x9C32248B2352E183(1))
	{
		return 0;
	}
	if (!unk_0x250A8F68F67CA19A(uParam1))
	{
		return 0;
	}
	if (!unk_0x7404950238A154C2(unk_0x1D1DAF7F94D5FE77(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x39E5853480A5C856(unk_0x4D135F3066A9BF9C(unk_0x1D1DAF7F94D5FE77(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0x250A8F68F67CA19A(*uParam0))
	{
		unk_0xEA89E72C99125D9C(unk_0xCFD52BB67CC0A98F(*uParam0), iParam7);
		if (unk_0xE682D8146CB90267(unk_0xCFD52BB67CC0A98F(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xE2F4428601519A00(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_14()
{
	var uVar0;
	
	if (!unk_0x250A8F68F67CA19A(Local_55.f_2))
	{
		if (func_17(Local_55.f_4))
		{
			if (func_15(&(Local_55.f_2), Local_55.f_4, Local_55.f_6, func_16(Local_55.f_6, Local_55.f_9[0 /*3*/]), 1, 1, 1, 0, 1, 1))
			{
				unk_0xC390A6485FB80923(unk_0x1D1DAF7F94D5FE77(Local_55.f_2), 2);
				unk_0xA8F22633ACC22189(unk_0x1D1DAF7F94D5FE77(Local_55.f_2), 0);
				unk_0x070978221B2E0085(unk_0x1D1DAF7F94D5FE77(Local_55.f_2), 1);
				unk_0x3729EADD1945A108(unk_0x1D1DAF7F94D5FE77(Local_55.f_2));
				unk_0x3D24414865131CB8(unk_0x1D1DAF7F94D5FE77(Local_55.f_2), 30f);
				unk_0x50638C188ABB218B(unk_0x1D1DAF7F94D5FE77(Local_55.f_2));
				unk_0x686D6CDC14C4BA6C(unk_0x1D1DAF7F94D5FE77(Local_55.f_2), 1, 1);
				unk_0xFB47FBE0A77BFB53(unk_0x1D1DAF7F94D5FE77(Local_55.f_2), 0);
				unk_0xEA89E72C99125D9C(unk_0x1D1DAF7F94D5FE77(Local_55.f_2), 0);
				if (Local_55.f_4 == joaat("cuban800"))
				{
					unk_0xDE113FA802D77FA6(unk_0x1D1DAF7F94D5FE77(Local_55.f_2), 3);
				}
				if (unk_0x9C1418C53B05D47B("MPBitset", 3))
				{
					if (unk_0xCEC9D74C9FF51C8C(unk_0x1D1DAF7F94D5FE77(Local_55.f_2), "MPBitset"))
					{
						uVar0 = unk_0x8B4662A1D2DF932C(unk_0x1D1DAF7F94D5FE77(Local_55.f_2), "MPBitset");
					}
					unk_0xF3148AAF69AF9CBC(&uVar0, 10);
					unk_0xEAE276D4D897C5F4(unk_0x1D1DAF7F94D5FE77(Local_55.f_2), "MPBitset", uVar0);
				}
			}
		}
	}
	if (!unk_0x250A8F68F67CA19A(Local_55.f_2))
	{
		return 0;
	}
	return 1;
}

int func_15(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	
	if (!unk_0x63A7F7D75B0E5FA9(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0xA450601E968044DB(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0xE00F8DEA9778FC87(uParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0x59FB930CD0E1CDFD(uVar0);
	if (unk_0x250A8F68F67CA19A(*uParam0))
	{
		unk_0xEA89E72C99125D9C(uVar0, iParam10);
		if (unk_0xE682D8146CB90267(iVar0))
		{
			if (bParam8)
			{
				unk_0xE2F4428601519A00(*uParam0, 1);
			}
			else
			{
				unk_0xE2F4428601519A00(*uParam0, 0);
			}
		}
		unk_0xF239D177F4EB07F9(iVar0, iParam9);
		return 1;
	}
	return 0;
}

var func_16(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return unk_0x097CA9356FED843D((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

int func_17(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x32A12757CBF48A33(iParam0);
	return unk_0x33ACB874CECA2D4B(iParam0);
}

int func_18(var uParam0)
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

void func_19(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x1C7D9BFDF15A02B4())
		{
			func_4(uParam0, 0, 0);
		}
	}
}

void func_20()
{
	switch (Local_83[unk_0x519AAFF77CC141DF() /*3*/].f_2)
	{
		case 0:
			func_109();
			func_21();
			if (Local_55.f_23 > 0)
			{
				Local_83[unk_0x519AAFF77CC141DF() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_131();
			break;
	}
}

void func_21()
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar9;
	
	if (unk_0x250A8F68F67CA19A(Local_55.f_2))
	{
		if (!unk_0x236D8AD7EE179F46(Local_83[unk_0x519AAFF77CC141DF() /*3*/].f_1, 0))
		{
			if (!unk_0x7404950238A154C2(unk_0x1D1DAF7F94D5FE77(Local_55.f_2), 0))
			{
			}
			if (unk_0x930F8FBB8E9537CC(unk_0x1D1DAF7F94D5FE77(Local_55.f_2)))
			{
			}
			if (unk_0x930F8FBB8E9537CC(unk_0x1D1DAF7F94D5FE77(Local_55.f_2)))
			{
				if (unk_0x1329891157A54C63() == unk_0x307C3DBD5DD02640(Local_55.f_2, &uVar0))
				{
					func_108(2049, -1);
					iVar1 = func_107(2049, -1, 0);
					iVar2 = iVar1;
					if (iVar2 > Global_262145.f_6430)
					{
						iVar2 = Global_262145.f_6430;
					}
					iVar3 = (Global_262145.f_6428 * iVar2);
					func_58(0, unk_0x81873881071CD9FE(), "XPT_KAIE", -875716015, -1219286988, iVar3, 1, -1, 0, 0);
					if (iVar1 > Global_262145.f_6429)
					{
						iVar1 = Global_262145.f_6429;
					}
					iVar4 = (Global_262145.f_6427 * iVar1);
					func_54(iVar4, 1, 1, 1092616192);
					Global_2438858 = iVar4;
					if (func_53())
					{
						func_46(1780666425, iVar4, &uVar9, 0, 0);
					}
					else
					{
						unk_0xFEF1B8BDBF81B2E4(iVar4, "AM_PLANE_TAKEDOWN", &uVar5);
					}
					func_41(65, 1, -1);
					if (func_40())
					{
						func_27(2, "PTD_PASS0", 0, 0, -99);
					}
					else
					{
						func_27(2, "PTD_PASS1", 0, 0, -99);
					}
					unk_0xF3148AAF69AF9CBC(&(Local_83[unk_0x519AAFF77CC141DF() /*3*/].f_1), 0);
				}
			}
			else
			{
				if (unk_0x1C7D9BFDF15A02B4())
				{
					if (Local_55.f_22 < 4)
					{
						if (unk_0x515B65C19A5CA9B1(unk_0x1D1DAF7F94D5FE77(Local_55.f_2), Local_55.f_9[Local_55.f_22 /*3*/], 50f, 50f, 500f, 0, 1, 0))
						{
							Local_55.f_22++;
						}
					}
				}
				if (unk_0x402F3F19221FF696(Local_55.f_2))
				{
					func_25();
					if (func_24())
					{
						if (func_23(Local_55.f_2) && func_23(Local_55.f_3))
						{
							unk_0x893021E5A96D97BA(unk_0x1D1DAF7F94D5FE77(Local_55.f_2), 1, 1, 0);
							if (unk_0x335F574AD77E59CE(Local_55.f_2))
							{
								func_22(&(Local_55.f_2));
							}
							if (unk_0x335F574AD77E59CE(Local_55.f_3))
							{
								unk_0x6CB332CB31E9FA96(unk_0xCFD52BB67CC0A98F(Local_55.f_3), 1);
								func_22(&(Local_55.f_3));
							}
						}
					}
				}
			}
		}
	}
}

void func_22(var uParam0)
{
	var uVar0;
	
	if (unk_0x335F574AD77E59CE(*uParam0))
	{
		uVar0 = unk_0x262EBD0AA0ED1D6D(*uParam0);
		unk_0x3C6E68D2D7F41A39(&uVar0);
	}
}

int func_23(var uParam0)
{
	if (unk_0x250A8F68F67CA19A(uParam0))
	{
		unk_0x3A6FE26AD5BF8C2E(uParam0);
		return unk_0x402F3F19221FF696(uParam0);
	}
	return 0;
}

int func_24()
{
	if (unk_0x250A8F68F67CA19A(Local_55.f_2))
	{
		if (unk_0x088B9F587DA37464(unk_0x1D1DAF7F94D5FE77(Local_55.f_2), 0, 7000))
		{
			return 1;
		}
		if (unk_0x088B9F587DA37464(unk_0x1D1DAF7F94D5FE77(Local_55.f_2), 1, 40000))
		{
			return 1;
		}
		if (unk_0x088B9F587DA37464(unk_0x1D1DAF7F94D5FE77(Local_55.f_2), 3, 30000))
		{
			return 1;
		}
		if (unk_0x088B9F587DA37464(unk_0x1D1DAF7F94D5FE77(Local_55.f_2), 2, 30000))
		{
			return 1;
		}
	}
	return 0;
}

void func_25()
{
	struct<3> Var0;
	
	if (func_7(Local_55.f_2) && !func_26(Local_55.f_3))
	{
		if (unk_0x04C377C10639B842(unk_0xCFD52BB67CC0A98F(Local_55.f_3), unk_0x1D1DAF7F94D5FE77(Local_55.f_2), 0))
		{
			if (Local_55.f_22 < 4)
			{
				if (!unk_0x236D8AD7EE179F46(Local_55.f_1, 0))
				{
					unk_0x0EF9ADF085D23B65(unk_0xCFD52BB67CC0A98F(Local_55.f_3), unk_0x1D1DAF7F94D5FE77(Local_55.f_2), 0, 0, Local_55.f_9[Local_55.f_22 /*3*/] + Vector(120f, 0f, 0f), 4, 20f, 50f, -1f, 90, 60);
				}
				else
				{
					unk_0x927A38D2A216C253(unk_0xCFD52BB67CC0A98F(Local_55.f_3), unk_0x1D1DAF7F94D5FE77(Local_55.f_2), 0, 0, Local_55.f_9[Local_55.f_22 /*3*/] + Vector(120f, 0f, 0f), 4, 20f, 50f, -1f, 90, 60, -1082130432, 0);
				}
			}
			else if (!unk_0x236D8AD7EE179F46(Local_55.f_1, 2) && !unk_0x236D8AD7EE179F46(Local_83[unk_0x519AAFF77CC141DF() /*3*/].f_1, 1))
			{
				Var0 = { unk_0xB07F27EC3B05E4EA(unk_0x1D1DAF7F94D5FE77(Local_55.f_2), 0f, 12000f, 0f) };
				if (Var0.f_0 < -3700f)
				{
					Var0.f_0 = -3700f;
				}
				else if (Var0.f_0 > 4500f)
				{
					Var0.f_0 = 4500f;
				}
				if (Var0.f_1 < -3900f)
				{
					Var0.f_1 = -3900f;
				}
				else if (Var0.f_1 > 8000f)
				{
					Var0.f_1 = 8000f;
				}
				Var0.f_2 = 100f;
				if (!unk_0x236D8AD7EE179F46(Local_55.f_1, 0))
				{
					unk_0x0EF9ADF085D23B65(unk_0xCFD52BB67CC0A98F(Local_55.f_3), unk_0x1D1DAF7F94D5FE77(Local_55.f_2), 0, 0, Var0, 4, 20f, -1f, -1f, 100, 100);
				}
				else
				{
					unk_0x927A38D2A216C253(unk_0xCFD52BB67CC0A98F(Local_55.f_3), unk_0x1D1DAF7F94D5FE77(Local_55.f_2), 0, 0, Var0, 4, 20f, -1f, -1f, 100, 100, -1082130432, 0);
				}
				unk_0xF3148AAF69AF9CBC(&(Local_83[unk_0x519AAFF77CC141DF() /*3*/].f_1), 1);
			}
		}
	}
}

int func_26(var uParam0)
{
	if (unk_0x250A8F68F67CA19A(uParam0))
	{
		return unk_0x5FEB513A4402FD59(unk_0xCFD52BB67CC0A98F(uParam0));
	}
	return 1;
}

void func_27(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)
{
	func_28(1, iParam0, sParam1, sParam2, bParam3, iParam4);
}

void func_28(int iParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	var uVar0;
	bool bVar1;
	
	uVar0 = uParam1;
	bVar1 = false;
	func_29(iParam0, sParam2, uVar0, bVar1, sParam3, bParam4, iParam5);
}

void func_29(var uParam0, char* sParam1, var uParam2, bool bParam3, char* sParam4, bool bParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0xB318FDA0D1ABDB20(sParam1))
	{
		return;
	}
	if (unk_0xA84EEA1DAC64D0D5(sParam1) > 15)
	{
		return;
	}
	if (!unk_0xB318FDA0D1ABDB20(sParam4))
	{
		if (unk_0xA84EEA1DAC64D0D5(sParam4) > 31)
		{
			return;
		}
	}
	iVar0 = func_38();
	if (iVar0 == -1)
	{
		return;
	}
	func_37(iVar0);
	func_36(iVar0, uParam0);
	func_35(iVar0, uParam2, bParam3);
	func_34(iVar0, sParam1);
	if (unk_0xB318FDA0D1ABDB20(sParam4) && iParam6 == -99)
	{
		return;
	}
	func_33(iVar0);
	if (!unk_0xB318FDA0D1ABDB20(sParam4))
	{
		func_31(iVar0, sParam4, bParam5);
	}
	if (!iParam6 == -99)
	{
		func_30(iVar0, iParam6);
	}
}

void func_30(int iParam0, int iParam1)
{
	Global_1328429.f_59[iParam0 /*16*/].f_15 = iParam1;
}

void func_31(int iParam0, char* sParam1, bool bParam2)
{
	StringCopy(&(Global_1328429.f_59[iParam0 /*16*/].f_7), sParam1, 32);
	if (!bParam2)
	{
		return;
	}
	func_32(iParam0);
}

void func_32(int iParam0)
{
	unk_0xF3148AAF69AF9CBC(&(Global_1328429.f_59[iParam0 /*16*/]), 5);
}

void func_33(int iParam0)
{
	unk_0xF3148AAF69AF9CBC(&(Global_1328429.f_59[iParam0 /*16*/]), 4);
}

void func_34(int iParam0, char* sParam1)
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam1, 16);
	Global_1328429.f_59[iParam0 /*16*/].f_3 = { Var0 };
}

void func_35(int iParam0, var uParam1, bool bParam2)
{
	Global_1328429.f_59[iParam0 /*16*/].f_2 = uParam1;
	if (bParam2)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_1328429.f_59[iParam0 /*16*/]), 2);
		unk_0xC69E84EBBD7166E6(&(Global_1328429.f_59[iParam0 /*16*/]), 3);
	}
	else
	{
		unk_0xF3148AAF69AF9CBC(&(Global_1328429.f_59[iParam0 /*16*/]), 3);
		unk_0xC69E84EBBD7166E6(&(Global_1328429.f_59[iParam0 /*16*/]), 2);
	}
}

void func_36(int iParam0, var uParam1)
{
	Global_1328429.f_59[iParam0 /*16*/].f_1 = uParam1;
}

void func_37(int iParam0)
{
	unk_0xF3148AAF69AF9CBC(&(Global_1328429.f_59[iParam0 /*16*/]), 0);
}

int func_38()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_39(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_39(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_1328429.f_59[iParam0 /*16*/], 0);
}

int func_40()
{
	if (unk_0x236D8AD7EE179F46(unk_0x2E0A9E3291F398E3(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_41(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_43(iParam0, func_44(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_42(iParam0, iVar0, iParam2);
}

void func_42(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2479763[iParam0 /*5*/][func_44(iParam2)];
	unk_0x123B783056E76C4E(iVar0, iParam1, 1);
}

int func_43(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2479763[iParam0 /*5*/][func_44(iParam1)];
	if (unk_0x85C45034BA638694(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_44(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_45();
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

var func_45()
{
	return Global_1312729;
}

void func_46(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_53())
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
				func_47(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_47(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_47(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_53())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x077FF247AF837AEC(func_45()) || unk_0x2FABBA9E4D234344())
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
			*uParam0 = func_52(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
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
			func_51(1, iParam4);
			Global_2545974 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_48(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_48(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xF3148AAF69AF9CBC(&(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_121.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_49(iParam0);
	}
}

void func_49(int iParam0)
{
	bool bVar0;
	struct<69> Var1;
	
	bVar0 = false;
	if (!func_53())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_50(iParam0))
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

int func_50(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2545514[iParam0 /*69*/].f_5 == 1;
	}
	return 0;
}

void func_51(int iParam0, var uParam1)
{
	Global_2438972 = uParam1;
	Global_2438971 = iParam0;
}

int func_52(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2545514[iVar0 /*69*/].f_2 == 0)
		{
			if (!func_53())
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

int func_53()
{
	if (unk_0x913B1C01C1BA6C6F())
	{
		return 1;
	}
	return 0;
}

void func_54(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_55(iParam0, iParam1, iParam2, fParam3);
}

void func_55(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_56(iParam0, iParam1, iParam2, fParam3);
}

void func_56(int iParam0, int iParam1, int iParam2, float fParam3)
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
	Global_1585045[unk_0x1329891157A54C63() /*400*/].f_192.f_4 = iVar1;
	Global_1585045[unk_0x1329891157A54C63() /*400*/].f_192.f_3 = (Global_1585045[unk_0x1329891157A54C63() /*400*/].f_192.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_57(iVar1, 0);
	}
}

void func_57(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

int func_58(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)
{
	return func_59(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9);
}

int func_59(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_69(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x86CCCD2FAE9D5E65(iParam1))
		{
			if (unk_0xCF0C46D719D5302C(iParam1))
			{
				uVar1 = unk_0x8F1CCE5AF629C4D3(iParam1);
				func_65(unk_0xC91EFAB304EB7DE6(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8);
			}
		}
	}
	else
	{
		func_60(iParam1, iVar0, sParam8);
	}
	return iVar0;
}

void func_60(int iParam0, int iParam1, char* sParam2)
{
	struct<3> Var0;
	
	Var0 = { func_63(iParam0, 1) };
	if (iParam0 == func_62(unk_0x81873881071CD9FE()))
	{
		func_61(1);
	}
	func_65(Var0, iParam1, 0, sParam2);
}

void func_61(int iParam0)
{
	Global_2422670.f_1321 = iParam0;
}

int func_62(var uParam0)
{
	return uParam0;
}

Vector3 func_63(int iParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	float fVar10;
	
	if (iParam0 == func_64(unk_0x81873881071CD9FE()) && unk_0x7FCE6803A3D23268(unk_0x60FC347BF9CAD1BD()) == 4)
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

int func_64(var uParam0)
{
	return uParam0;
}

void func_65(struct<3> Param0, int iParam3, int iParam4, char* sParam5)
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
			Global_2422670.f_740[iVar1 /*29*/].f_4 = func_68(Global_2422670.f_740[iVar1 /*29*/], &Global_1312317, &Global_1312318);
			Global_2422670.f_740[iVar1 /*29*/].f_7 = unk_0xD74C7D8D2E5E43D2();
			Global_2422670.f_740[iVar1 /*29*/].f_3 = iParam3;
			Global_2422670.f_740[iVar1 /*29*/].f_8 = iParam4;
			Global_2422670.f_740[iVar1 /*29*/].f_9 = func_67();
			Global_2422670.f_740[iVar1 /*29*/].f_10 = func_66();
			StringCopy(&(Global_2422670.f_740[iVar1 /*29*/].f_22), sParam5, 16);
		}
	}
}

int func_66()
{
	if (Global_2422670.f_1321)
	{
		Global_2422670.f_1321 = 0;
		return 1;
	}
	Global_2422670.f_1321 = 0;
	return 0;
}

var func_67()
{
	var uVar0;
	
	uVar0 = Global_2422670.f_1323;
	Global_2422670.f_1323 = 1;
	return uVar0;
}

float func_68(struct<3> Param0, var uParam3, var uParam4)
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

var func_69(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_70(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_70(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_106(unk_0x1329891157A54C63()) || func_105(unk_0x1329891157A54C63()))
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
			func_91(1154, iVar1, -1);
			if (iParam1 == 0)
			{
				func_81((func_90(unk_0x1329891157A54C63()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xF1B1DC822A238E16(iVar1, iParam8, iParam9);
				if (Global_1585045[unk_0x1329891157A54C63() /*400*/].f_39.f_2 != -1)
				{
					func_91(1155, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_75(iVar1);
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
				func_71((func_73(unk_0x1329891157A54C63()) + iVar1));
			}
			else
			{
				func_71((func_73(unk_0x1329891157A54C63()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_71(int iParam0)
{
	if (func_103())
	{
		Global_1585045[unk_0x1329891157A54C63() /*400*/].f_192.f_5 = iParam0;
		func_72(joaat("mpply_globalxp"), iParam0);
	}
}

void func_72(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, uParam1, 1);
	}
}

int func_73(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_148(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x1329891157A54C63())
			{
				return func_74(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1585045[iParam0 /*400*/].f_192.f_5;
			}
		}
		else
		{
			return func_74(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_74(int iParam0)
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

void func_75(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_80(unk_0x1329891157A54C63()) };
	if (unk_0x80622F5ED5957337())
	{
		if (unk_0x464883E45616A088(&Var0))
		{
			iVar13 = func_78(func_79(&Var0));
			if (iVar13 == 0)
			{
				func_77(&Global_1343557, iParam0);
				func_76(joaat("mpply_crew_local_xp_0"), Global_1343557);
			}
			else if (iVar13 == 1)
			{
				func_77(&Global_1343558, iParam0);
				func_76(joaat("mpply_crew_local_xp_1"), Global_1343558);
			}
			else if (iVar13 == 2)
			{
				func_77(&Global_1343559, iParam0);
				func_76(joaat("mpply_crew_local_xp_2"), Global_1343559);
			}
			else if (iVar13 == 3)
			{
				func_77(&Global_1343560, iParam0);
				func_76(joaat("mpply_crew_local_xp_3"), Global_1343560);
			}
			else if (iVar13 == 4)
			{
				func_77(&Global_1343561, iParam0);
				func_76(joaat("mpply_crew_local_xp_4"), Global_1343561);
			}
		}
	}
}

void func_76(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, uParam1, 1);
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

void func_77(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_78(int iParam0)
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

int func_79(var uParam0)
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

struct<13> func_80(int iParam0)
{
	struct<13> Var0;
	
	unk_0x73231AB7B8BD1CD1(iParam0, &Var0, 13);
	return Var0;
}

void func_81(int iParam0, int iParam1, int iParam2)
{
	if (func_103())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7394 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1343672[func_44(-1)])
				{
					unk_0xF1B1DC822A238E16(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1343672[func_44(-1)])
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
		if (func_89(unk_0x1329891157A54C63()))
		{
			Global_1585045[unk_0x1329891157A54C63() /*400*/].f_192.f_1 = iParam0;
			Global_1585045[unk_0x1329891157A54C63() /*400*/].f_192.f_6 = func_87(iParam0, 1);
		}
		func_86(629, iParam0, -1, 1);
		func_85(630, func_87(iParam0, 1), -1, 1);
		Global_1343672[func_44(-1)] = iParam0;
		func_82(7, 0);
	}
}

void func_82(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_84(iParam0, iParam1))
	{
		iVar0 = func_83();
		Global_2436893[iVar0] = iParam0;
	}
}

int func_83()
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

int func_84(int iParam0, var uParam1)
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

void func_85(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2459767[iParam0 /*5*/][func_44(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, iParam1, iParam3);
	}
}

void func_86(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2459767[iParam0 /*5*/][func_44(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 777:
			Global_1343618[func_44(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1343624[func_44(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1343630[func_44(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1343636[func_44(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1343594[func_44(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1343600[func_44(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1343606[func_44(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1343612[func_44(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1343570[func_44(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1343576[func_44(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1343582[func_44(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1343588[func_44(iParam2)] = iParam1;
			break;
		
		case 747:
			Global_1343642[func_44(iParam2)] = iParam1;
			break;
		
		case 748:
			Global_1343648[func_44(iParam2)] = iParam1;
			break;
		
		case 749:
			Global_1343654[func_44(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1343660[func_44(iParam2)] = iParam1;
			break;
		
		case 1292:
			Global_1343666[func_44(iParam2)] = iParam1;
			break;
		
		case 629:
			Global_1343672[func_44(iParam2)] = iParam1;
			break;
		
		case 1267:
			Global_1343678[func_44(iParam2)] = iParam1;
			break;
		
		case 1864:
			Global_2480427[0 /*6*/][func_44(iParam2)] = iParam1;
			break;
		
		case 2255:
			Global_2480427[1 /*6*/][func_44(iParam2)] = iParam1;
			break;
		
		case 2899:
			Global_2480427[2 /*6*/][func_44(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1343684[func_44(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1343690[func_44(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1343696[func_44(iParam2)] = iParam1;
			break;
		
		case 1225:
			Global_1343702[func_44(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_87(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_88(iParam0, 0);
}

int func_88(int iParam0, int iParam1)
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

int func_89(int iParam0)
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

int func_90(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x1329891157A54C63())
			{
				return Global_1343672[func_44(-1)];
			}
			else if (func_89(iParam0))
			{
				return Global_1585045[iParam0 /*400*/].f_192.f_1;
			}
		}
	}
	else
	{
		return Global_1343672[func_44(-1)];
	}
	return 0;
}

void func_91(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_107(iParam0, func_44(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_92(iParam0))
	{
		func_85(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_86(iParam0, iVar0, iParam2, 1);
	}
}

int func_92(int iParam0)
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
				if (unk_0xCCFDB2B968281FE8(iVar5) == iVar1 || func_96(unk_0xCCFDB2B968281FE8(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x1329891157A54C63())
					{
						if (func_95(unk_0x1329891157A54C63(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_94(*iParam0, 100) * (10f * Global_262145.f_4208)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_94(*iParam0, 100) * (20f * Global_262145.f_4201)));
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
	if (unk_0x80622F5ED5957337())
	{
		Global_2450501 = { func_80(iParam0) };
		Global_2450514 = { func_80(iParam1) };
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

int func_96(int iParam0, int iParam1, int iParam2)
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
		while (iVar0 < unk_0x945535897333587B())
		{
			iVar3 = iVar0;
			if (unk_0xC4FEBC724D547D78(iVar3))
			{
				iVar4 = unk_0x29A638E7EEEE6B16(iVar3);
				if (func_148(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x1329891157A54C63())
					{
						iVar1++;
						if (func_95(unk_0x1329891157A54C63(), iVar4))
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
			if (func_148(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x1329891157A54C63())
				{
					if (func_98(unk_0x1329891157A54C63(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_95(unk_0x1329891157A54C63(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_94(*iParam1, 100) * (10f * Global_262145.f_4208)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_94(*iParam1, 100) * (20f * Global_262145.f_4201)));
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
	return unk_0xB6AE0DAE06D56288(unk_0xE495E987CB2BE7EF(uParam0), 0);
}

int func_100(int iParam0)
{
	int iVar0;
	
	if (unk_0xF349F5727BA73619() != 3)
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
		if (unk_0x013F97B9D88B92CA(iParam0) > func_90(unk_0x1329891157A54C63()))
		{
			iParam0 = -func_90(unk_0x1329891157A54C63());
		}
	}
	if (func_102(8000, 0, 0) > 0)
	{
		if (func_102(8000, 0, 0) < (iParam0 + func_90(unk_0x1329891157A54C63())))
		{
			iParam0 = (func_102(8000, 0, 0) - func_90(unk_0x1329891157A54C63()));
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
	return Global_272182[iParam0];
}

int func_103()
{
	return 1;
}

int func_104(var uParam0)
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

bool func_105(int iParam0)
{
	return Global_2414506[iParam0 /*255*/].f_114 == 2;
}

bool func_106(int iParam0)
{
	return Global_2414506[iParam0 /*255*/].f_114 == 7;
}

int func_107(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2459767[iParam0 /*5*/][func_44(iParam1)];
	if (unk_0x85C45034BA638694(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_108(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_107(iParam0, func_44(iParam1), 0);
	iVar0++;
	if (!func_92(iParam0))
	{
		func_85(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_86(iParam0, iVar0, iParam1, 1);
	}
}

void func_109()
{
	if (unk_0x250A8F68F67CA19A(Local_55.f_2) && !unk_0x930F8FBB8E9537CC(unk_0x1D1DAF7F94D5FE77(Local_55.f_2)))
	{
		if (!unk_0xFBACB273AA628CC5(uLocal_182))
		{
			uLocal_182 = unk_0xE122DDAE9E94767B(unk_0x1D1DAF7F94D5FE77(Local_55.f_2));
			if (!unk_0x236D8AD7EE179F46(Local_55.f_1, 0))
			{
				unk_0x8F827BB0F6ED7AA8(uLocal_182, 307);
				unk_0x2AB7C42FF2AF476D(uLocal_182, "PTD_BLIPN");
			}
			else
			{
				unk_0x8F827BB0F6ED7AA8(uLocal_182, 64);
				unk_0x2AB7C42FF2AF476D(uLocal_182, "PTD_BLIPH");
			}
			unk_0x1B86E7A8766EA6B4(uLocal_182, 1);
			unk_0x4D2AF8274EB774A2(uLocal_182, 7000);
			unk_0xCB015C3E2E01CA1C(uLocal_182, 6);
			if (func_111())
			{
				unk_0x885CCA7D7CA0FAE3(uLocal_182, 0);
			}
		}
		else
		{
			if (!unk_0x236D8AD7EE179F46(Local_55.f_1, 0))
			{
				unk_0x0DDE461489ED7CFE(uLocal_182, unk_0xF2DB717A73826179(unk_0x3306AAAFE3B25098(unk_0x1D1DAF7F94D5FE77(Local_55.f_2))));
			}
			if (func_111())
			{
				unk_0x885CCA7D7CA0FAE3(uLocal_182, 0);
			}
			else
			{
				unk_0x885CCA7D7CA0FAE3(uLocal_182, 4);
			}
		}
	}
}

void func_110(char* sParam0, int iParam1)
{
	unk_0x522099B37CAE9E12(sParam0);
	unk_0xC592EBAF1D879BDC(0, 0, 1, iParam1);
}

int func_111()
{
	if (func_112(16))
	{
		return 1;
	}
	if (func_112(0))
	{
		return 1;
	}
	return 0;
}

bool func_112(int iParam0)
{
	var uVar0;
	
	uVar0 = func_107(2452, -1, 0);
	return unk_0x236D8AD7EE179F46(uVar0, iParam0);
}

bool func_113(int iParam0)
{
	return unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(Global_2408782, unk_0xD74C7D8D2E5E43D2())) > iParam0;
}

int func_114()
{
	return Local_55.f_0;
}

int func_115(int iParam0)
{
	return Local_83[iParam0 /*3*/];
}

bool func_116(int iParam0)
{
	return !func_117(iParam0);
}

int func_117(int iParam0)
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
			if (func_119(unk_0x1329891157A54C63(), 7))
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
			if (func_119(unk_0x1329891157A54C63(), 7))
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
			if (func_119(unk_0x1329891157A54C63(), 7))
			{
				return 0;
			}
			if (unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 0) || unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_118(4))
			{
				return 0;
			}
			if (func_119(unk_0x1329891157A54C63(), 7))
			{
				return 0;
			}
			if (unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 0) || unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_118(4))
			{
				return 0;
			}
			if (func_119(unk_0x1329891157A54C63(), 7))
			{
				return 0;
			}
			if (unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 0) || unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_118(4))
			{
				return 0;
			}
			if (func_119(unk_0x1329891157A54C63(), 7))
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
			if (func_118(4))
			{
				return 0;
			}
			if (func_119(unk_0x1329891157A54C63(), 7))
			{
				return 0;
			}
			if (unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 0) || unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 1))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_118(4))
			{
				return 0;
			}
			if (func_119(unk_0x1329891157A54C63(), 7))
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

int func_118(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_148(unk_0x6528B1497E4313F1(iVar0), 0, 1))
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

bool func_119(int iParam0, int iParam1)
{
	return unk_0x236D8AD7EE179F46(Global_2414506[iParam0 /*255*/].f_205, iParam1);
}

int func_120()
{
	bool bVar0;
	
	func_127(&bVar0);
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
	if (func_126())
	{
		return 1;
	}
	if (Global_2438897)
	{
		return 1;
	}
	if (func_125())
	{
		return 1;
	}
	if (func_124(157))
	{
		if (!func_123())
		{
			return 1;
		}
	}
	if (func_124(155))
	{
		return 1;
	}
	if (!unk_0x1F2C82EFDAD19C5D())
	{
		return 1;
	}
	if (func_121() != 0)
	{
		if (unk_0x968BF1C2C695B61A(func_121()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_121()
{
	switch (func_122())
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

int func_122()
{
	return Global_24946;
}

bool func_123()
{
	return Global_2428865.f_573;
}

int func_124(int iParam0)
{
	if (unk_0xE0A17F32C7C30546(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_125()
{
	return Global_2436988;
}

bool func_126()
{
	return Global_2428865.f_568;
}

void func_127(var uParam0)
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
					func_128(iVar0);
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

void func_128(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xDC8C46445C29336D(1, iParam0, &Var0, 3))
	{
		if (func_148(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xE495E987CB2BE7EF(Var0.f_1);
			if (unk_0x86CCCD2FAE9D5E65(uVar3))
			{
				if (unk_0xE5AB05962FA1FF3F(iVar3, 0))
				{
					uVar4 = unk_0xE68E6B44DABA9C05(iVar3, 0);
					if (unk_0x61B3150BF9145A92(uVar4, Var0.f_2) && unk_0xA360A5024482E898())
					{
						if (func_129(uVar4, &bVar5))
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

int func_129(int iParam0, var uParam1)
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

void func_130()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_131()
{
	if (unk_0xFBACB273AA628CC5(uLocal_182))
	{
		unk_0x0A8175F24237A3D4(&uLocal_182);
	}
	if (unk_0x236D8AD7EE179F46(Local_55.f_1, 1))
	{
		func_27(2, "PTD_FAIL", 0, 0, -99);
	}
	func_134();
	if (func_114() == 4 && Local_55.f_4 != 0)
	{
		unk_0xB5A91586385F755B(Local_55.f_4, 0);
	}
	func_133(15, 0);
	func_132();
}

void func_132()
{
	unk_0xC23A229F78DAD92A();
}

void func_133(int iParam0, bool bParam1)
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

void func_134()
{
	unk_0xA3561415EB3DA3A3(&uLocal_180);
}

void func_135(struct<20> Param0)
{
	int iVar0;
	
	func_146(func_147(Param0.f_0), Param0);
	unk_0xAADD6AD1A7B6D4E2(1);
	unk_0xCD9A6588DBAF710A(1);
	func_144(0, -1, 0);
	unk_0x19F630B59442E836(&Local_55, 28);
	unk_0xCBCBE0D8DD0EF168(&Local_83, 97);
	if (!func_143())
	{
		func_131();
	}
	if (unk_0x1C6DF6AD69BE853E())
	{
		unk_0xE6E19E3BBABCBC24(0);
		if (unk_0x1C7D9BFDF15A02B4())
		{
			iVar0 = unk_0x2E0A9E3291F398E3(0, 6);
			switch (iVar0)
			{
				case 0:
					Local_55.f_4 = joaat("cuban800");
					Local_55.f_5 = joaat("a_m_m_skidrow_01");
					break;
				
				case 1:
					Local_55.f_4 = joaat("stunt");
					Local_55.f_5 = joaat("a_m_y_eastsa_02");
					break;
				
				case 2:
					Local_55.f_4 = joaat("duster");
					Local_55.f_5 = joaat("a_m_m_prolhost_01");
					break;
				
				case 3:
					Local_55.f_4 = joaat("mammatus");
					Local_55.f_5 = joaat("a_m_y_vinewood_02");
					break;
				
				case 4:
					Local_55.f_4 = joaat("maverick");
					Local_55.f_5 = joaat("a_m_m_eastsa_02");
					unk_0xF3148AAF69AF9CBC(&(Local_55.f_1), 0);
					break;
				
				case 5:
					Local_55.f_4 = joaat("swift");
					Local_55.f_5 = joaat("a_m_y_busicas_01");
					unk_0xF3148AAF69AF9CBC(&(Local_55.f_1), 0);
					break;
			}
			if (Local_55.f_4 != 0)
			{
				unk_0xB5A91586385F755B(Local_55.f_4, 1);
			}
			func_142();
			func_136();
		}
		func_133(15, 1);
		Local_83[unk_0x519AAFF77CC141DF() /*3*/] = 0;
	}
	else
	{
		func_131();
	}
}

void func_136()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = unk_0x2E0A9E3291F398E3(0, 3);
		Local_55.f_9[iVar0 /*3*/] = { func_138(iVar1) };
		if (iVar0 > 0)
		{
			if (func_137(Local_55.f_9[iVar0 /*3*/], Local_55.f_9[(iVar0 - 1) /*3*/], 250f, 0))
			{
				Local_55.f_9[iVar0 /*3*/] = { func_138(iVar1 + 1) };
			}
		}
		iVar0++;
	}
}

int func_137(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0xB9AA84B14E04BC20((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0xB9AA84B14E04BC20((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0xB9AA84B14E04BC20((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xB9AA84B14E04BC20((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xB9AA84B14E04BC20((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_138(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 2;
	}
	else if (iParam0 > 2)
	{
		iParam0 = 0;
	}
	switch (iParam0)
	{
		case 0:
			return func_141();
		
		case 1:
			return func_140();
		
		case 2:
			return func_139();
		
		default:
	}
	return 3250f, 1500f, 0f;
}

Vector3 func_139()
{
	switch (unk_0x2E0A9E3291F398E3(0, 13))
	{
		case 0:
			return 1915.902f, 563.9669f, 174.4925f;
		
		case 1:
			return 1402.858f, -2148.418f, 57.9675f;
		
		case 2:
			return 1104.815f, -3142.335f, 4.901f;
		
		case 3:
			return 545.7347f, -3025.327f, 5.0591f;
		
		case 4:
			return 1376.037f, -740.2166f, 66.2331f;
		
		case 5:
			return 1147.162f, 126.3452f, 80.8693f;
		
		case 6:
			return -1731.085f, -989.8386f, 4.4152f;
		
		case 7:
			return 728.2132f, -1532.48f, 18.7348f;
		
		case 8:
			return 1140.923f, -1285.639f, 33.6091f;
		
		case 9:
			return 2811.453f, -668.671f, 1.581f;
		
		case 10:
			return -1706.013f, -183.4387f, 56.3712f;
		
		case 11:
			return -134.0402f, -869.4509f, 43.2175f;
		
		case 12:
			return 1098.246f, -544.2941f, 56.4061f;
		
		default:
	}
	return 1098.246f, -544.2941f, 56.4061f;
}

Vector3 func_140()
{
	switch (unk_0x2E0A9E3291F398E3(0, 13))
	{
		case 0:
			return 2312.707f, 1531.258f, 59.8792f;
		
		case 1:
			return 1069.58f, 2366.363f, 43.0396f;
		
		case 2:
			return -1979.781f, 2584.161f, 2.2587f;
		
		case 3:
			return 1458.393f, 1113.066f, 113.334f;
		
		case 4:
			return 817.5361f, 1316.57f, 362.0491f;
		
		case 5:
			return 1671.232f, 3041.176f, 53.0351f;
		
		case 6:
			return -3163.364f, 756.8276f, 2.1183f;
		
		case 7:
			return -799.6782f, 885.0139f, 202.1319f;
		
		case 8:
			return -401.2717f, 1211.677f, 324.9297f;
		
		case 9:
			return 2909.154f, 770.3181f, 21.1684f;
		
		case 10:
			return 2778.909f, 2853.266f, 34.7828f;
		
		case 11:
			return 585.3987f, 2893.778f, 38.5297f;
		
		case 12:
			return -498.3305f, 3006.906f, 27.4341f;
		
		default:
	}
	return -498.3305f, 3006.906f, 27.4341f;
}

Vector3 func_141()
{
	switch (unk_0x2E0A9E3291F398E3(0, 13))
	{
		case 0:
			return 1015.599f, 4350.668f, 41.484f;
		
		case 1:
			return -1731.06f, 4959.484f, 3.8134f;
		
		case 2:
			return -2436.25f, 4181.913f, 7.7719f;
		
		case 3:
			return 2463.142f, 3769.651f, 40.328f;
		
		case 4:
			return 1888.61f, 4626.815f, 37.4665f;
		
		case 5:
			return -388.8584f, 4353.478f, 54.3806f;
		
		case 6:
			return 3800f, 4462f, 5f;
		
		case 7:
			return 3350f, 5152f, 20f;
		
		case 8:
			return 2200f, 5600f, 54f;
		
		case 9:
			return 1410f, 6560f, 20f;
		
		case 10:
			return -330f, 6100f, 32f;
		
		case 11:
			return -1365f, 4380f, 42f;
		
		case 12:
			return 700f, 3900f, 30f;
		
		default:
	}
	return 700f, 3900f, 30f;
}

void func_142()
{
	Local_55.f_6 = { func_138(unk_0x2E0A9E3291F398E3(0, 3)) };
	Local_55.f_6 = { Local_55.f_6 + Vector(120f, 0f, 0f) };
}

int func_143()
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
		if (func_126())
		{
			return 0;
		}
		if (func_124(155))
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

int func_144(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x428E5E7D8B8CA428();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_132();
			}
			else
			{
				return 0;
			}
		}
		if (!func_145())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x1C6DF6AD69BE853E())
				{
					if (!bParam2)
					{
						func_132();
					}
					else
					{
						return 0;
					}
				}
				if (func_126())
				{
					if (!bParam2)
					{
						func_132();
					}
					else
					{
						return 0;
					}
				}
				if (func_124(155))
				{
					if (!bParam2)
					{
						func_132();
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
					func_132();
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
				func_132();
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
			func_132();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_145()
{
	return Global_1315867;
}

void func_146(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x1C6DF6AD69BE853E())
	{
		func_132();
	}
	unk_0xBA029707F4D8FFB0(uParam0, 0, Param1.f_16);
}

int func_147(int iParam0)
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

int func_148(int iParam0, bool bParam1, bool bParam2)
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

