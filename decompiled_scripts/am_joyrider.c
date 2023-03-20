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
	var uLocal_55 = 8;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 2;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 8;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 8;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	struct<11> Local_85 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_96 = 0;
	struct<3> Local_97[32];
	int iLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
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
	iLocal_199 = 20;
	if (unk_0x1C6DF6AD69BE853E() && func_62(unk_0x1329891157A54C63(), 0, 1))
	{
		func_55(ScriptParam_0);
	}
	else
	{
		func_51();
	}
	while (true)
	{
		func_50();
		if (func_40() || func_36(9))
		{
			func_51();
		}
		if (unk_0x9B20331E99DD1C1C())
		{
			func_51();
		}
		switch (func_35(unk_0x519AAFF77CC141DF()))
		{
			case 0:
				if (func_34() == 1)
				{
					func_33();
					Local_97[unk_0x519AAFF77CC141DF() /*3*/] = 1;
				}
				else if (func_34() == 4)
				{
					Local_97[unk_0x519AAFF77CC141DF() /*3*/] = 3;
				}
				break;
			
			case 1:
				if (func_34() == 1)
				{
					func_31();
				}
				else if (func_34() == 4)
				{
					Local_97[unk_0x519AAFF77CC141DF() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_29(&(Local_85.f_10));
				if (func_28(&(Local_85.f_10)))
				{
					Local_97[unk_0x519AAFF77CC141DF() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_97[unk_0x519AAFF77CC141DF() /*3*/] = 4;
			
			case 4:
				func_51();
				break;
		}
		if (unk_0x1C7D9BFDF15A02B4())
		{
			switch (func_34())
			{
				case 0:
					if (func_27())
					{
						if (func_8())
						{
							Local_85.f_0 = 1;
						}
					}
					break;
				
				case 1:
					func_7();
					func_6();
					if (func_1())
					{
						Local_85.f_0 = 4;
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
	if (Local_85.f_9 == 0)
	{
		if (!func_4(Local_85.f_2))
		{
			return 1;
		}
		else if (func_3(Local_85.f_3))
		{
			return 1;
		}
		else
		{
			if (iLocal_202 == 1)
			{
				if (unk_0x236D8AD7EE179F46(Local_85.f_1, 0))
				{
					return 1;
				}
			}
			if (!unk_0x04C377C10639B842(unk_0xCFD52BB67CC0A98F(Local_85.f_3), unk_0x1D1DAF7F94D5FE77(Local_85.f_2), 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_3(var uParam0)
{
	if (unk_0x250A8F68F67CA19A(uParam0))
	{
		return unk_0x5FEB513A4402FD59(unk_0xCFD52BB67CC0A98F(uParam0));
	}
	return 1;
}

int func_4(var uParam0)
{
	if (unk_0x250A8F68F67CA19A(uParam0))
	{
		return !func_5(unk_0x1D1DAF7F94D5FE77(uParam0));
	}
	return 0;
}

int func_5(var uParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		if (unk_0x930F8FBB8E9537CC(uParam0))
		{
			return 1;
		}
		else if (!unk_0x7404950238A154C2(uParam0, 0))
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

void func_6()
{
	switch (Local_85.f_9)
	{
		case 0:
			break;
		
		case 1:
			break;
	}
}

void func_7()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iLocal_201 == 0)
	{
		iLocal_202 = 0;
		unk_0xF3148AAF69AF9CBC(&(Local_85.f_1), 0);
	}
	if (func_4(Local_85.f_2))
	{
		iVar0 = 1;
	}
	if (unk_0xC4FEBC724D547D78(unk_0xC3904F8771F37B7F(iLocal_201)))
	{
		iVar1 = unk_0x29A638E7EEEE6B16(unk_0xC3904F8771F37B7F(iLocal_201));
		uVar2 = unk_0xE495E987CB2BE7EF(iVar1);
		if (func_62(iVar1, 1, 1))
		{
			if (unk_0x236D8AD7EE179F46(Local_85.f_1, 0))
			{
				if (iVar0 == 1)
				{
					if (unk_0x8D28631AAAEFC957(uVar2, unk_0x1D1DAF7F94D5FE77(Local_85.f_2), 250f, 250f, 250f, 0, 1, 0))
					{
						unk_0xC69E84EBBD7166E6(&(Local_85.f_1), 0);
					}
				}
				else
				{
					unk_0xC69E84EBBD7166E6(&(Local_85.f_1), 0);
				}
			}
		}
	}
	iLocal_201++;
	if (iLocal_201 == unk_0x945535897333587B())
	{
		iLocal_201 = 0;
		iLocal_202 = 1;
	}
}

int func_8()
{
	if (unk_0xC390CE355F131C83(1, 1, 0, 0))
	{
		if (func_26(Local_85.f_4) && func_26(Local_85.f_5))
		{
			if (func_12() && func_9())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_9()
{
	int iVar0;
	
	if ((!unk_0x250A8F68F67CA19A(Local_85.f_3) && func_26(Local_85.f_5)) && unk_0x250A8F68F67CA19A(Local_85.f_2))
	{
		if (func_4(Local_85.f_2))
		{
			if (func_11(&(Local_85.f_3), Local_85.f_2, 22, Local_85.f_5, -1, 1, 1, 1))
			{
				unk_0x6BC3C6046951661E(unk_0xCFD52BB67CC0A98F(Local_85.f_3), 0);
				if (func_10())
				{
					unk_0x506A601663C5417C(unk_0xCFD52BB67CC0A98F(Local_85.f_3), Global_1574216);
				}
				else
				{
					unk_0x506A601663C5417C(unk_0xCFD52BB67CC0A98F(Local_85.f_3), Global_1574219);
				}
				unk_0x6CB332CB31E9FA96(unk_0xCFD52BB67CC0A98F(Local_85.f_3), 1);
				if (func_10())
				{
					iVar0 = unk_0x2E0A9E3291F398E3(0, 10);
					if (iVar0 < 5)
					{
						unk_0xA8190B0CB5814D75(unk_0xCFD52BB67CC0A98F(Local_85.f_3), joaat("weapon_pistol"), 25000, func_10());
					}
					else if (iVar0 > 6)
					{
						unk_0xA8190B0CB5814D75(unk_0xCFD52BB67CC0A98F(Local_85.f_3), joaat("weapon_microsmg"), 25000, func_10());
					}
					else
					{
						unk_0xA8190B0CB5814D75(unk_0xCFD52BB67CC0A98F(Local_85.f_3), joaat("weapon_pumpshotgun"), 25000, func_10());
					}
				}
				iVar0 = unk_0x2E0A9E3291F398E3(0, 10);
				if (iVar0 == 0 || iVar0 == 1)
				{
					unk_0xA161142D1C595060(unk_0xCFD52BB67CC0A98F(Local_85.f_3), 0);
				}
				else if ((iVar0 == 2 || iVar0 == 3) || iVar0 == 4)
				{
					unk_0xA161142D1C595060(unk_0xCFD52BB67CC0A98F(Local_85.f_3), 2);
				}
				else
				{
					unk_0xA161142D1C595060(unk_0xCFD52BB67CC0A98F(Local_85.f_3), 1);
				}
				iVar0 = unk_0x2E0A9E3291F398E3(0, 4);
				if (iVar0 == 0)
				{
					unk_0x4B9FA68A3AC8C29D(unk_0xCFD52BB67CC0A98F(Local_85.f_3), 5, 1);
				}
				else if (iVar0 == 1)
				{
					unk_0x4B9FA68A3AC8C29D(unk_0xCFD52BB67CC0A98F(Local_85.f_3), 17, 1);
				}
				else if (iVar0 == 2)
				{
					unk_0x4B9FA68A3AC8C29D(unk_0xCFD52BB67CC0A98F(Local_85.f_3), 13, 1);
				}
				if (func_10())
				{
					unk_0x4B9FA68A3AC8C29D(unk_0xCFD52BB67CC0A98F(Local_85.f_3), 20, 1);
				}
				if (func_10())
				{
					unk_0x4B9FA68A3AC8C29D(unk_0xCFD52BB67CC0A98F(Local_85.f_3), 2, 1);
				}
				iVar0 = unk_0x2E0A9E3291F398E3(0, 4);
				if (iVar0 == 0)
				{
					unk_0xA97FB3A1E6744863(unk_0xCFD52BB67CC0A98F(Local_85.f_3), 2);
				}
				else if (iVar0 == 1)
				{
					unk_0xA97FB3A1E6744863(unk_0xCFD52BB67CC0A98F(Local_85.f_3), 1);
				}
				else if (iVar0 == 2)
				{
					unk_0xA97FB3A1E6744863(unk_0xCFD52BB67CC0A98F(Local_85.f_3), 3);
				}
				unk_0xFD93F0AB65149DF3(unk_0xCFD52BB67CC0A98F(Local_85.f_3), 1);
				unk_0x36C8C9789AEE2A5D(unk_0xCFD52BB67CC0A98F(Local_85.f_3), 1);
				unk_0xCE566DBDCACD245E(unk_0xCFD52BB67CC0A98F(Local_85.f_3), 29, 1);
				unk_0x150101BCDC17D828(unk_0xCFD52BB67CC0A98F(Local_85.f_3), 3);
				unk_0x9765BF567DB87B5F(unk_0xCFD52BB67CC0A98F(Local_85.f_3), unk_0xF2DB717A73826179((200f * Global_262145.f_149)));
				unk_0x39AD461928A70C5A(unk_0x1D1DAF7F94D5FE77(Local_85.f_2), 1);
				unk_0x0E465BF3FB5C8001(unk_0x1D1DAF7F94D5FE77(Local_85.f_2), 1);
				func_33();
				unk_0xC65002CAA1212AF9(unk_0xCFD52BB67CC0A98F(Local_85.f_3), uLocal_195);
				unk_0x887F4488DA99FD21(Local_85.f_5);
			}
		}
	}
	if (!unk_0x250A8F68F67CA19A(Local_85.f_3))
	{
		return 0;
	}
	return 1;
}

int func_10()
{
	if (unk_0x236D8AD7EE179F46(unk_0x2E0A9E3291F398E3(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_11(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
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

int func_12()
{
	struct<3> Var0;
	var uVar3;
	
	if (!unk_0x250A8F68F67CA19A(Local_85.f_2))
	{
		if (func_26(Local_85.f_4))
		{
			if (func_14(&Var0, &uVar3))
			{
				if (func_13(&(Local_85.f_2), Local_85.f_4, Var0, uVar3, 1, 1, 1, 0, 1, 1))
				{
					unk_0x686D6CDC14C4BA6C(unk_0x1D1DAF7F94D5FE77(Local_85.f_2), 1, 1);
					unk_0x0175D90DBB1149FA(unk_0x1D1DAF7F94D5FE77(Local_85.f_2), 1);
					unk_0xF239D177F4EB07F9(unk_0x1D1DAF7F94D5FE77(Local_85.f_2), 1);
					unk_0x80E2E482FDBC2DD9(unk_0x1D1DAF7F94D5FE77(Local_85.f_2), "JOYRIDER_GROUP", 0f);
					unk_0x887F4488DA99FD21(Local_85.f_4);
				}
			}
		}
	}
	if (!unk_0x250A8F68F67CA19A(Local_85.f_2))
	{
		return 0;
	}
	return 1;
}

int func_13(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
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
		if (unk_0xE682D8146CB90267(uVar0))
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
		unk_0xF239D177F4EB07F9(uVar0, iParam9);
		return 1;
	}
	return 0;
}

bool func_14(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	if (!bVar0)
	{
		if (unk_0xB33B007FE6F38B89(&(Local_85.f_6), uParam0, &uVar2, 0f, 180f, 40f, 0, 1, 1))
		{
			unk_0x9F7E94EEF720E913(*uParam0, 1, uParam0, uParam1, &iVar1, 4, 1077936128, 0);
			if (iVar1 >= 1 || unk_0xEACAEA0D2783E66F(*uParam0) == joaat("City"))
			{
				if (unk_0x0D6E79537424BACE(-1367.557f, -3220.598f, 12.9448f, Local_85.f_6, 1) >= 600f && unk_0x0D6E79537424BACE(750f, -3200f, 6f, Local_85.f_6, 1) >= 700f)
				{
					if (unk_0x0D6E79537424BACE(func_25(unk_0x1329891157A54C63()), *uParam0, 1) <= (250f - 50f))
					{
						if (iLocal_200 <= 5)
						{
							if (func_15(*uParam0, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0))
							{
								bVar0 = true;
							}
						}
						else
						{
							Local_85.f_0 = 4;
						}
					}
				}
			}
		}
	}
	if (!bVar0)
	{
		iLocal_199 += 4;
		if (iLocal_199 >= 80)
		{
			iLocal_199 = 20;
			iLocal_200++;
		}
	}
	return bVar0;
}

int func_15(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17)
{
	Global_2404607 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x8201B8E256A0E8AB(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xBAE0934DE3A0C108(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xBAE0934DE3A0C108(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x2EBFC992EF940536(Param0, fParam5, 0))
		{
			return 0;
		}
	}
	Global_2404607++;
	if (bParam13)
	{
		if (unk_0x7781EEE3B32C0EBF(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404607++;
	if (fParam14 > 0f)
	{
		if (func_21(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404607++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_16(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404607++;
	return 1;
}

int func_16(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_62(unk_0x1329891157A54C63(), 1, 1))
		{
			if (!unk_0x29AFA2493D7C23D0())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x0D6E79537424BACE(func_25(unk_0x1329891157A54C63()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x547A2AA158CA2804(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_62(iVar1, 1, 1))
		{
			if (!func_18(iVar1, 0) && unk_0x4F5BEB9A4097F301(unk_0x1329891157A54C63(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x1329891157A54C63()))
				{
					if ((func_17(iVar1) || !bParam10) && !Global_2414506[iVar1 /*255*/].f_253)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xCCFDB2B968281FE8(iVar1) == -1)
							{
								if (unk_0xCCFDB2B968281FE8(iVar1) == unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xCCFDB2B968281FE8(iVar1) != unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()))) || unk_0xCCFDB2B968281FE8(iVar1) == -1)
							{
								if (unk_0x0D6E79537424BACE(func_25(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x30EC451ADA231853(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xCCFDB2B968281FE8(iVar1) != iParam8 || unk_0xCCFDB2B968281FE8(iVar1) == -1)
						{
							if (unk_0x0D6E79537424BACE(func_25(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x30EC451ADA231853(iVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_17(int iParam0)
{
	if (unk_0x3C965174F280226D(unk_0xE495E987CB2BE7EF(iParam0)) || Global_2414506[iParam0 /*255*/].f_239)
	{
		return 1;
	}
	return 0;
}

bool func_18(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1329891157A54C63())
	{
		bVar0 = func_19(-1, 0) == 8;
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

int func_19(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_20();
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

int func_20()
{
	return Global_1312729;
}

int func_21(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x1329891157A54C63() != iVar1) || iParam8 == 0)
		{
			if (func_62(iVar1, bParam4, bParam5))
			{
				if (unk_0x4F5BEB9A4097F301(unk_0x1329891157A54C63(), iVar1))
				{
					if (!bParam7 || (!unk_0x5FEB513A4402FD59(unk_0xE495E987CB2BE7EF(iVar1)) && func_17(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()) != unk_0xCCFDB2B968281FE8(iVar1))) || unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()) == -1)
						{
							if (((unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()) == -1 && uParam9) && bParam6) && func_22(iVar1))
							{
							}
							else if (unk_0x86CCCD2FAE9D5E65(unk_0xE495E987CB2BE7EF(iVar1)))
							{
								if (unk_0x0D6E79537424BACE(func_25(iVar1), Param0, 1) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_22(int iParam0)
{
	if (func_24(unk_0x1329891157A54C63(), iParam0))
	{
		return 1;
	}
	Global_2450501 = { func_23(iParam0) };
	if (unk_0x5762EE910D467202(&Global_2450501))
	{
		return 1;
	}
	return 0;
}

struct<13> func_23(var uParam0)
{
	struct<13> Var0;
	
	unk_0x73231AB7B8BD1CD1(uParam0, &Var0, 13);
	return Var0;
}

int func_24(int iParam0, var uParam1)
{
	if (unk_0x80622F5ED5957337())
	{
		Global_2450501 = { func_23(iParam0) };
		Global_2450514 = { func_23(uParam1) };
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

Vector3 func_25(int iParam0)
{
	return unk_0xB6AE0DAE06D56288(unk_0xE495E987CB2BE7EF(iParam0), 0);
}

int func_26(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x32A12757CBF48A33(iParam0);
	return unk_0x33ACB874CECA2D4B(iParam0);
}

bool func_27()
{
	if (!unk_0x236D8AD7EE179F46(uLocal_194, 1))
	{
		if (unk_0x6FF90B691E3204B1(func_25(unk_0x1329891157A54C63()), iLocal_198, &(Local_85.f_6), 4, 1077936128, 0))
		{
			unk_0xF3148AAF69AF9CBC(&iLocal_194, 1);
		}
		else
		{
			iLocal_198++;
		}
	}
	return unk_0x236D8AD7EE179F46(iLocal_194, 1);
}

int func_28(var uParam0)
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

void func_29(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x1C7D9BFDF15A02B4())
		{
			func_30(uParam0, 0, 0);
		}
	}
}

void func_30(var uParam0, bool bParam1, bool bParam2)
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

void func_31()
{
	switch (Local_97[unk_0x519AAFF77CC141DF() /*3*/].f_2)
	{
		case 0:
			func_33();
			func_32();
			if (Local_85.f_9 > 0)
			{
				Local_97[unk_0x519AAFF77CC141DF() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_51();
			break;
	}
}

void func_32()
{
	int iVar0;
	float fVar1;
	
	if (!unk_0x236D8AD7EE179F46(Local_97[unk_0x519AAFF77CC141DF() /*3*/].f_1, 0))
	{
		if (func_4(Local_85.f_2) && !func_3(Local_85.f_3))
		{
			iVar0 = unk_0x4DC6EF945236C0F7(unk_0x1D1DAF7F94D5FE77(Local_85.f_2));
			fVar1 = unk_0xA04824262F150982(unk_0x1D1DAF7F94D5FE77(Local_85.f_2));
			if (iVar0 < 200)
			{
				func_33();
				unk_0xC65002CAA1212AF9(unk_0xCFD52BB67CC0A98F(Local_85.f_3), uLocal_197);
				unk_0xF3148AAF69AF9CBC(&(Local_97[unk_0x519AAFF77CC141DF() /*3*/].f_1), 0);
			}
			else if (fVar1 < 3f)
			{
				if ((((unk_0x69F59C68E86FDF3D(unk_0x1D1DAF7F94D5FE77(Local_85.f_2)) || unk_0x088B9F587DA37464(unk_0x1D1DAF7F94D5FE77(Local_85.f_2), 3, 10000)) || unk_0x088B9F587DA37464(unk_0x1D1DAF7F94D5FE77(Local_85.f_2), 1, 10000)) || unk_0x088B9F587DA37464(unk_0x1D1DAF7F94D5FE77(Local_85.f_2), 0, 10000)) || unk_0x088B9F587DA37464(unk_0x1D1DAF7F94D5FE77(Local_85.f_2), 2, 10000))
				{
					func_33();
					unk_0xC65002CAA1212AF9(unk_0xCFD52BB67CC0A98F(Local_85.f_3), uLocal_196);
					unk_0xF3148AAF69AF9CBC(&(Local_97[unk_0x519AAFF77CC141DF() /*3*/].f_1), 0);
				}
			}
		}
	}
}

void func_33()
{
	if (!unk_0x236D8AD7EE179F46(iLocal_194, 0))
	{
		if (func_4(Local_85.f_2))
		{
			unk_0xEAD984C2869B8B7C(&uLocal_195);
			unk_0x73FD8D43B37C0615(0, unk_0x1D1DAF7F94D5FE77(Local_85.f_2), Local_85.f_6, 14, 30f, 786468, 15f, 1f, 0);
			unk_0x2D7E8CD6F4101CAB(0, unk_0x1D1DAF7F94D5FE77(Local_85.f_2), 30f, 786468);
			unk_0x56D9ED1541046AF6(uLocal_195);
			unk_0xEAD984C2869B8B7C(&uLocal_196);
			unk_0x98046F3D16B9CF76(0, 0, 1);
			unk_0x56D9ED1541046AF6(uLocal_196);
			unk_0xEAD984C2869B8B7C(&uLocal_197);
			unk_0x73FD8D43B37C0615(0, unk_0x1D1DAF7F94D5FE77(Local_85.f_2), Local_85.f_6, 5, 30f, 786468, 99999f, 1f, 0);
			unk_0x98046F3D16B9CF76(0, 0, 1);
			unk_0x56D9ED1541046AF6(uLocal_197);
			unk_0xF3148AAF69AF9CBC(&iLocal_194, 0);
		}
	}
}

int func_34()
{
	return Local_85.f_0;
}

int func_35(int iParam0)
{
	return Local_97[iParam0 /*3*/];
}

bool func_36(int iParam0)
{
	return !func_37(iParam0);
}

int func_37(int iParam0)
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
			if (func_39(unk_0x1329891157A54C63(), 7))
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
			if (func_39(unk_0x1329891157A54C63(), 7))
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
			if (func_39(unk_0x1329891157A54C63(), 7))
			{
				return 0;
			}
			if (unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 0) || unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_38(4))
			{
				return 0;
			}
			if (func_39(unk_0x1329891157A54C63(), 7))
			{
				return 0;
			}
			if (unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 0) || unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_38(4))
			{
				return 0;
			}
			if (func_39(unk_0x1329891157A54C63(), 7))
			{
				return 0;
			}
			if (unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 0) || unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_38(4))
			{
				return 0;
			}
			if (func_39(unk_0x1329891157A54C63(), 7))
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
			if (func_38(4))
			{
				return 0;
			}
			if (func_39(unk_0x1329891157A54C63(), 7))
			{
				return 0;
			}
			if (unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 0) || unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 1))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_38(4))
			{
				return 0;
			}
			if (func_39(unk_0x1329891157A54C63(), 7))
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

int func_38(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_62(unk_0x6528B1497E4313F1(iVar0), 0, 1))
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

bool func_39(int iParam0, int iParam1)
{
	return unk_0x236D8AD7EE179F46(Global_2414506[iParam0 /*255*/].f_205, iParam1);
}

int func_40()
{
	bool bVar0;
	
	func_47(&bVar0);
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
	if (func_46())
	{
		return 1;
	}
	if (Global_2438897)
	{
		return 1;
	}
	if (func_45())
	{
		return 1;
	}
	if (func_44(157))
	{
		if (!func_43())
		{
			return 1;
		}
	}
	if (func_44(155))
	{
		return 1;
	}
	if (!unk_0x1F2C82EFDAD19C5D())
	{
		return 1;
	}
	if (func_41() != 0)
	{
		if (unk_0x968BF1C2C695B61A(func_41()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_41()
{
	switch (func_42())
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

int func_42()
{
	return Global_24946;
}

bool func_43()
{
	return Global_2428865.f_573;
}

int func_44(int iParam0)
{
	if (unk_0xE0A17F32C7C30546(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_45()
{
	return Global_2436988;
}

bool func_46()
{
	return Global_2428865.f_568;
}

void func_47(var uParam0)
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
					func_48(iVar0);
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

void func_48(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xDC8C46445C29336D(1, iParam0, &Var0, 3))
	{
		if (func_62(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xE495E987CB2BE7EF(Var0.f_1);
			if (unk_0x86CCCD2FAE9D5E65(uVar3))
			{
				if (unk_0xE5AB05962FA1FF3F(uVar3, 0))
				{
					uVar4 = unk_0xE68E6B44DABA9C05(uVar3, 0);
					if (unk_0x61B3150BF9145A92(uVar4, Var0.f_2) && unk_0xA360A5024482E898())
					{
						if (func_49(uVar4, &bVar5))
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

int func_49(var uParam0, var uParam1)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		if (!unk_0xE86442941AE40E75(uParam0))
		{
			if (unk_0x28BE3924E7CDB27F(uParam0))
			{
				unk_0xD768713E73165208(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x46AE53A47E5D03D5(uParam0, 0))
		{
			if (unk_0x4D2386673BCED434(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_50()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_51()
{
	func_54();
	if (func_34() == 4 && Local_85.f_4 != 0)
	{
		unk_0xB5A91586385F755B(Local_85.f_4, 0);
	}
	if (func_4(Local_85.f_2))
	{
		unk_0xA5F9A8EE8A45DD7E(unk_0x1D1DAF7F94D5FE77(Local_85.f_2), 0f);
	}
	unk_0x0C22E352114F699C("JOYRIDER_RADIO_SCENE");
	func_53(9, 0);
	func_52();
}

void func_52()
{
	unk_0xC23A229F78DAD92A();
}

void func_53(int iParam0, bool bParam1)
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

void func_54()
{
	unk_0xA3561415EB3DA3A3(&uLocal_195);
}

void func_55(struct<20> Param0)
{
	int iVar0;
	
	func_60(func_61(Param0.f_0), Param0);
	unk_0xAADD6AD1A7B6D4E2(1);
	unk_0xCD9A6588DBAF710A(1);
	func_58(0, -1, 0);
	unk_0x19F630B59442E836(&Local_85, 12);
	unk_0xCBCBE0D8DD0EF168(&Local_97, 97);
	if (!func_57())
	{
		func_51();
	}
	if (unk_0x1C6DF6AD69BE853E())
	{
		unk_0xE6E19E3BBABCBC24(0);
		if (unk_0x1C7D9BFDF15A02B4())
		{
			if (Global_2451473.f_4228 == 0)
			{
				iVar0 = unk_0x2E0A9E3291F398E3(0, 7);
				switch (iVar0)
				{
					case 0:
						Local_85.f_4 = joaat("stingergt");
						break;
					
					case 1:
						Local_85.f_4 = joaat("entityxf");
						break;
					
					case 2:
						Local_85.f_4 = joaat("feltzer2");
						break;
					
					case 3:
						Local_85.f_4 = joaat("monroe");
						break;
					
					case 4:
						Local_85.f_4 = joaat("cogcabrio");
						break;
					
					case 5:
						Local_85.f_4 = joaat("superd");
						break;
					
					case 6:
						Local_85.f_4 = joaat("infernus");
						break;
				}
			}
			else
			{
				Local_85.f_4 = Global_2451473.f_4228;
				Global_2451473.f_4228 = 0;
			}
			unk_0xB5A91586385F755B(Local_85.f_4, 1);
			Local_85.f_5 = func_56(1);
		}
		func_53(9, 1);
		unk_0xF2A6D4C99549CA85("JOYRIDER_RADIO_SCENE");
		Local_97[unk_0x519AAFF77CC141DF() /*3*/] = 0;
	}
	else
	{
		func_51();
	}
}

int func_56(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0x2E0A9E3291F398E3(0, 32);
	if (bParam0)
	{
		switch (iVar0)
		{
			case 0:
				return joaat("a_m_m_eastsa_01");
			
			case 1:
				return joaat("a_m_m_bevhills_01");
			
			case 2:
				return joaat("a_m_m_bevhills_02");
			
			case 3:
				return joaat("a_m_m_business_01");
			
			case 4:
				return joaat("a_m_m_malibu_01");
			
			case 5:
				return joaat("a_m_m_eastsa_02");
			
			case 6:
				return joaat("a_m_m_hillbilly_01");
			
			case 7:
				return joaat("a_m_m_hillbilly_02");
			
			case 8:
				return joaat("a_m_m_og_boss_01");
			
			case 9:
				return joaat("a_m_m_stlat_02");
			
			case 10:
				return joaat("a_m_y_beachvesp_01");
			
			case 11:
				return joaat("a_m_y_epsilon_01");
			
			case 12:
				return joaat("a_m_m_prolhost_01");
			
			case 13:
				return joaat("a_m_m_salton_01");
			
			case 14:
				return joaat("a_m_m_skater_01");
			
			case 15:
				return joaat("a_m_y_skater_02");
			
			case 16:
				return joaat("a_m_y_methhead_01");
			
			case 17:
				return joaat("a_m_m_skidrow_01");
			
			case 18:
				return joaat("a_m_m_soucent_01");
			
			case 19:
				return joaat("a_m_m_soucent_02");
			
			case 20:
				return joaat("a_m_m_soucent_03");
			
			case 21:
				return joaat("a_m_y_genstreet_02");
			
			case 22:
				return joaat("a_m_y_roadcyc_01");
			
			case 23:
				return joaat("a_m_m_afriamer_01");
			
			case 24:
				return joaat("a_m_m_beach_01");
			
			case 25:
				return joaat("a_m_m_farmer_01");
			
			case 26:
				return joaat("a_m_m_fatlatin_01");
			
			case 27:
				return joaat("a_m_m_genfat_01");
			
			case 28:
				return joaat("a_m_m_indian_01");
			
			case 29:
				return joaat("a_m_m_ktown_01");
			
			case 30:
				return joaat("a_m_m_socenlat_01");
			
			case 31:
				return joaat("a_m_m_mexlabor_01");
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return joaat("a_f_m_bevhills_01");
			
			case 1:
				return joaat("a_f_m_bevhills_02");
			
			case 2:
				return joaat("a_f_m_beach_01");
			
			case 3:
				return joaat("a_f_m_ktown_02");
			
			case 4:
				return joaat("a_f_m_prolhost_01");
			
			case 5:
				return joaat("a_f_m_bodybuild_01");
			
			case 6:
				return joaat("a_f_m_business_02");
			
			case 7:
				return joaat("a_f_m_downtown_01");
			
			case 8:
				return joaat("a_f_m_eastsa_01");
			
			case 9:
				return joaat("a_f_m_eastsa_02");
			
			case 10:
				return joaat("a_f_m_fatwhite_01");
			
			case 11:
				return joaat("a_f_m_ktown_01");
			
			case 12:
				return joaat("a_f_m_ktown_02");
			
			case 13:
				return joaat("a_f_m_salton_01");
			
			case 14:
				return joaat("a_f_m_skidrow_01");
			
			case 15:
				return joaat("a_f_m_soucent_01");
			
			case 16:
				return joaat("a_f_m_soucent_02");
			
			case 17:
				return joaat("a_f_m_soucentmc_01");
			
			case 18:
				return joaat("a_f_m_tramp_01");
			
			case 19:
				return joaat("a_f_m_trampbeac_01");
			
			case 20:
				return joaat("a_f_y_yoga_01");
			
			case 21:
				return joaat("a_f_y_vinewood_02");
			
			case 22:
				return joaat("a_f_y_vinewood_03");
			
			case 23:
				return joaat("a_f_y_vinewood_04");
			
			case 24:
				return joaat("a_f_y_tennis_01");
			
			case 25:
				return joaat("a_f_y_tourist_01");
			
			case 26:
				return joaat("a_f_y_hipster_01");
			
			case 27:
				return joaat("a_f_y_golfer_01");
			
			case 28:
				return joaat("a_f_y_fitness_01");
			
			case 29:
				return joaat("a_f_y_scdressy_01");
			
			case 30:
				return joaat("a_f_y_epsilon_01");
			
			case 31:
				return joaat("a_f_y_hiker_01");
			
			default:
		}
	}
	return joaat("a_f_m_bevhills_01");
}

int func_57()
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
		if (func_46())
		{
			return 0;
		}
		if (func_44(155))
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

int func_58(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x428E5E7D8B8CA428();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_52();
			}
			else
			{
				return 0;
			}
		}
		if (!func_59())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x1C6DF6AD69BE853E())
				{
					if (!bParam2)
					{
						func_52();
					}
					else
					{
						return 0;
					}
				}
				if (func_46())
				{
					if (!bParam2)
					{
						func_52();
					}
					else
					{
						return 0;
					}
				}
				if (func_44(155))
				{
					if (!bParam2)
					{
						func_52();
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
					func_52();
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
				func_52();
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
			func_52();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_59()
{
	return Global_1315867;
}

void func_60(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x1C6DF6AD69BE853E())
	{
		func_52();
	}
	unk_0xBA029707F4D8FFB0(uParam0, 0, Param1.f_16);
}

int func_61(int iParam0)
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

int func_62(int iParam0, bool bParam1, bool bParam2)
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

