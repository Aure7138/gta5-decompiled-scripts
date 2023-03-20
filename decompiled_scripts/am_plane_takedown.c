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
	int iLocal_182 = 0;
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
	if (unk_0x10FAB35428CCC9D7() && func_146(unk_0x4F8644AF03D0E0D6(), 0, 1))
	{
		func_133(ScriptParam_0);
	}
	else
	{
		func_129();
	}
	while (true)
	{
		func_128();
		if (func_118() || func_114(15))
		{
			func_129();
		}
		if (unk_0xADA24309FE08DACF())
		{
			func_129();
		}
		switch (func_113(unk_0x57A3BDDAD8E5AA0A()))
		{
			case 0:
				if (func_112() == 1)
				{
					if (func_111(60000))
					{
						if (unk_0x4C241E39B23DF959(unk_0x367B936610BA360C(Local_55.f_2), false))
						{
							if (!unk_0xA921AA820C25702F(Local_55.f_1, 0))
							{
								func_110("PTD_HELP1", -1);
							}
							else
							{
								func_110("PTD_HELP1H", -1);
							}
						}
					}
					Local_83[unk_0x57A3BDDAD8E5AA0A() /*3*/] = 1;
				}
				else if (func_112() == 4)
				{
					Local_83[unk_0x57A3BDDAD8E5AA0A() /*3*/] = 3;
				}
				break;
			
			case 1:
				if (func_112() == 1)
				{
					func_20();
				}
				else if (func_112() == 4)
				{
					Local_83[unk_0x57A3BDDAD8E5AA0A() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_19(&(Local_55.f_24));
				if (func_18(&(Local_55.f_24)))
				{
					Local_83[unk_0x57A3BDDAD8E5AA0A() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_83[unk_0x57A3BDDAD8E5AA0A() /*3*/] = 4;
			
			case 4:
				func_129();
				break;
		}
		if (unk_0x83CD99A1E6061AB5())
		{
			switch (func_112())
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
	struct<9> Var0;
	struct<9> Var9;
	
	if (func_7(Local_55.f_2))
	{
		if (Local_55.f_22 > 0)
		{
			if (!unk_0x51210CED3DA1C78A(unk_0x367B936610BA360C(Local_55.f_2), 400f, -3850f, -50f, 400f, 7950f, 1000f, 4050f, false, true, 0))
			{
				if (!unk_0xA921AA820C25702F(Local_55.f_1, 0))
				{
					Var0.f_2 = 110;
				}
				else
				{
					Var0.f_2 = 113;
				}
				func_5(Var0, func_6(1));
				unk_0x933D6A9EEC1BACD0(&(Local_55.f_1), 1);
				return 1;
			}
		}
	}
	if (Local_55.f_23 == 0)
	{
		if (Local_55.f_0 != 4)
		{
			if (unk_0x5F9532F3B5CC2551(unk_0x367B936610BA360C(Local_55.f_2)))
			{
				if (func_3(&(Local_55.f_26), 3000, 0))
				{
					if (!unk_0xA921AA820C25702F(Local_55.f_1, 0))
					{
						Var9.f_2 = 109;
					}
					else
					{
						Var9.f_2 = 112;
					}
					func_5(Var9, func_6(1));
					return 1;
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
	if (unk_0x10FAB35428CCC9D7() && !bParam2)
	{
		if (unk_0xF0D31AD191A74F87(unk_0xA2C6FC031D46FFF0(unk_0x7A5487FE9FAA6B48(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xF0D31AD191A74F87(unk_0xA2C6FC031D46FFF0(unk_0x9CD27B0045628463(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_4(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x10FAB35428CCC9D7() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x7A5487FE9FAA6B48();
			}
			else
			{
				*uParam0 = unk_0x89023FBBF9200E9F();
			}
		}
		else
		{
			*uParam0 = unk_0x9CD27B0045628463();
		}
		uParam0->f_1 = 1;
	}
}

void func_5(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0x4F8644AF03D0E0D6();
	if (!iParam9 == 0)
	{
		unk_0x5AE99C571D5BBE5D(1, &Param0, 9, iParam9);
	}
}

int func_6(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0xA6C90FBC38E395EE())
	{
		if (unk_0x6FF8FF40B6357D45(unk_0x9EC6603812C24710(iVar1)))
		{
			iVar2 = unk_0x24FB80D107371267(unk_0x9EC6603812C24710(iVar1));
			if (func_146(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x4F8644AF03D0E0D6() || iParam0)
				{
					unk_0x933D6A9EEC1BACD0(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_7(int iParam0)
{
	if (unk_0x38CE16C96BD11344(iParam0))
	{
		return !func_8(unk_0x367B936610BA360C(iParam0));
	}
	return 0;
}

int func_8(int iParam0)
{
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (unk_0x5F9532F3B5CC2551(iParam0))
		{
			return 1;
		}
		else if (!unk_0x4C241E39B23DF959(iParam0, false))
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
	struct<9> Var0;
	int iVar9;
	
	if (unk_0x5F9532F3B5CC2551(unk_0x367B936610BA360C(Local_55.f_2)))
	{
		if (Local_55.f_0 != 4)
		{
			iLocal_181 = 0;
			while (iLocal_181 < unk_0xA6C90FBC38E395EE())
			{
				if (unk_0x6FF8FF40B6357D45(unk_0x9EC6603812C24710(iLocal_181)))
				{
					iVar9 = unk_0x24FB80D107371267(unk_0x9EC6603812C24710(iLocal_181));
					if (unk_0xA921AA820C25702F(Local_83[iLocal_181 /*3*/].f_1, 0))
					{
						if (!unk_0xA921AA820C25702F(Local_55.f_1, 0))
						{
							Var0.f_2 = 108;
						}
						else
						{
							Var0.f_2 = 111;
						}
						Var0.f_5 = iVar9;
						func_5(Var0, func_6(1));
						Local_55.f_0 = 4;
						return;
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
			unk_0xE532F5D78798DAAB(Local_55.f_4);
			unk_0xE532F5D78798DAAB(Local_55.f_5);
			return 1;
		}
	}
	return 0;
}

int func_12()
{
	if ((!unk_0x38CE16C96BD11344(Local_55.f_3) && func_17(Local_55.f_5)) && unk_0x38CE16C96BD11344(Local_55.f_2))
	{
		if (func_7(Local_55.f_2))
		{
			if (func_13(&(Local_55.f_3), Local_55.f_2, 22, Local_55.f_5, -1, 1, 1, 1))
			{
				unk_0x9F8AA94D6D97DBF4(unk_0xBDCD95FC216A8B3E(Local_55.f_3), true);
				unk_0xC80A74AC829DDD92(unk_0xBDCD95FC216A8B3E(Local_55.f_3), Global_1574050);
				unk_0xC8A9481A01E63C28(unk_0xBDCD95FC216A8B3E(Local_55.f_3), 0);
				unk_0x971D38760FBC02EF(unk_0xBDCD95FC216A8B3E(Local_55.f_3), true);
			}
		}
	}
	if (!unk_0x38CE16C96BD11344(Local_55.f_3))
	{
		return 0;
	}
	return 1;
}

int func_13(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!unk_0xBCBF4FEF9FA5D781(1))
	{
		return 0;
	}
	if (!unk_0x38CE16C96BD11344(iParam1))
	{
		return 0;
	}
	if (!unk_0x4C241E39B23DF959(unk_0x367B936610BA360C(iParam1), false))
	{
		return 0;
	}
	*uParam0 = unk_0x0EDEC3C276198689(unk_0x7DD959874C1FD534(unk_0x367B936610BA360C(iParam1), iParam2, iParam3, iParam4, bParam6, bParam5));
	if (unk_0x38CE16C96BD11344(*uParam0))
	{
		unk_0x3910051CCECDB00C(unk_0xBDCD95FC216A8B3E(*uParam0), bParam7);
		if (unk_0xC7827959479DCC78(unk_0xBDCD95FC216A8B3E(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xE05E81A888FA63C8(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_14()
{
	if (!unk_0x38CE16C96BD11344(Local_55.f_2))
	{
		if (func_17(Local_55.f_4))
		{
			if (func_15(&(Local_55.f_2), Local_55.f_4, Local_55.f_6, func_16(Local_55.f_6, Local_55.f_9[0 /*3*/]), 1, 1, 1, 0, 1, 1))
			{
				unk_0xB664292EAECF7FA6(unk_0x367B936610BA360C(Local_55.f_2), 2);
				unk_0x428CA6DBD1094446(unk_0x367B936610BA360C(Local_55.f_2), false);
				unk_0x1718DE8E3F2823CA(unk_0x367B936610BA360C(Local_55.f_2), true);
				unk_0x710311ADF0E20730(unk_0x367B936610BA360C(Local_55.f_2));
				unk_0xAB54A438726D25D5(unk_0x367B936610BA360C(Local_55.f_2), 30f);
				unk_0xA178472EBB8AE60D(unk_0x367B936610BA360C(Local_55.f_2));
				unk_0x2497C4717C8B881E(unk_0x367B936610BA360C(Local_55.f_2), 1, 1);
				unk_0x983765856F2564F9(unk_0x367B936610BA360C(Local_55.f_2), false);
				unk_0x3910051CCECDB00C(unk_0x367B936610BA360C(Local_55.f_2), false);
				if (Local_55.f_4 == joaat("cuban800"))
				{
					unk_0xCFC8BE9A5E1FE575(unk_0x367B936610BA360C(Local_55.f_2), 3);
				}
			}
		}
	}
	if (!unk_0x38CE16C96BD11344(Local_55.f_2))
	{
		return 0;
	}
	return 1;
}

int func_15(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	
	if (!unk_0x7277F1F2E085EE74(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0x01C7B9B38428AEB6(Param2, 1f, 0, 0, 1, 1, 1);
	}
	iVar0 = unk_0xAF35D0D2583051B0(iParam1, Param2, fParam5, bParam7, bParam6);
	*uParam0 = unk_0xB4C94523F023419C(iVar0);
	if (unk_0x38CE16C96BD11344(*uParam0))
	{
		unk_0x3910051CCECDB00C(iVar0, bParam10);
		if (unk_0xC7827959479DCC78(iVar0))
		{
			if (bParam8)
			{
				unk_0xE05E81A888FA63C8(*uParam0, true);
			}
			else
			{
				unk_0xE05E81A888FA63C8(*uParam0, false);
			}
		}
		unk_0x67B2C79AA7FF5738(iVar0, bParam9);
		return 1;
	}
	return 0;
}

float func_16(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return unk_0x2FFB6B224F4B2926((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

bool func_17(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x963D27A58DF860AC(iParam0);
	return unk_0x98A4EB5D89A0C952(iParam0);
}

int func_18(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xF0D31AD191A74F87(unk_0xA2C6FC031D46FFF0(unk_0x7A5487FE9FAA6B48(), *uParam0)) >= 1000)
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
		if (unk_0x83CD99A1E6061AB5())
		{
			func_4(uParam0, 0, 0);
		}
	}
}

void func_20()
{
	switch (Local_83[unk_0x57A3BDDAD8E5AA0A() /*3*/].f_2)
	{
		case 0:
			func_109();
			func_21();
			if (Local_55.f_23 > 0)
			{
				Local_83[unk_0x57A3BDDAD8E5AA0A() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_129();
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
	
	if (unk_0x38CE16C96BD11344(Local_55.f_2))
	{
		if (!unk_0xA921AA820C25702F(Local_83[unk_0x57A3BDDAD8E5AA0A() /*3*/].f_1, 0))
		{
			if (!unk_0x4C241E39B23DF959(unk_0x367B936610BA360C(Local_55.f_2), false))
			{
			}
			if (unk_0x5F9532F3B5CC2551(unk_0x367B936610BA360C(Local_55.f_2)))
			{
			}
			if (unk_0x5F9532F3B5CC2551(unk_0x367B936610BA360C(Local_55.f_2)))
			{
				if (unk_0x4F8644AF03D0E0D6() == unk_0x7A1ADEEF01740A24(Local_55.f_2, &uVar0))
				{
					func_108(2043, -1);
					iVar1 = func_107(2043, -1, 0);
					iVar2 = iVar1;
					if (iVar2 > Global_262145.f_6381)
					{
						iVar2 = Global_262145.f_6381;
					}
					iVar3 = (Global_262145.f_6379 * iVar2);
					func_58(0, unk_0xD80958FC74E988A6(), "XPT_KAIE", -875716015, -1219286988, iVar3, 1, -1, 0, 0);
					if (iVar1 > Global_262145.f_6380)
					{
						iVar1 = Global_262145.f_6380;
					}
					iVar4 = (Global_262145.f_6378 * iVar1);
					func_54(iVar4, 1, 1, 1092616192);
					if (func_53())
					{
						func_46(1780666425, iVar4, &uVar9, 0, 0);
					}
					else
					{
						unk_0xFB6DB092FBAE29E6(iVar4, "AM_PLANE_TAKEDOWN", &uVar5);
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
					unk_0x933D6A9EEC1BACD0(&(Local_83[unk_0x57A3BDDAD8E5AA0A() /*3*/].f_1), 0);
				}
			}
			else
			{
				if (unk_0x83CD99A1E6061AB5())
				{
					if (Local_55.f_22 < 4)
					{
						if (unk_0x20B60995556D004F(unk_0x367B936610BA360C(Local_55.f_2), Local_55.f_9[Local_55.f_22 /*3*/], 50f, 50f, 500f, false, true, 0))
						{
							Local_55.f_22++;
						}
					}
				}
				if (unk_0x4D36070FE0215186(Local_55.f_2) || (!unk_0xA1607996431332DF(Local_55.f_2) && unk_0x83CD99A1E6061AB5()))
				{
					func_25();
					if (func_24())
					{
						if (func_23(Local_55.f_2) && func_23(Local_55.f_3))
						{
							unk_0x301A42153C9AD707(unk_0x367B936610BA360C(Local_55.f_2), true, true, 0);
							if (unk_0x18A47D074708FD68(Local_55.f_2))
							{
								func_22(&(Local_55.f_2));
							}
							if (unk_0x18A47D074708FD68(Local_55.f_3))
							{
								unk_0x971D38760FBC02EF(unk_0xBDCD95FC216A8B3E(Local_55.f_3), true);
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
	int iVar0;
	
	if (unk_0x18A47D074708FD68(*uParam0))
	{
		iVar0 = unk_0xBFFEAB45A9A9094A(*uParam0);
		unk_0xB736A491E64A32CF(&iVar0);
	}
}

int func_23(int iParam0)
{
	if (unk_0x38CE16C96BD11344(iParam0))
	{
		unk_0xA670B3662FAFFBD0(iParam0);
		return unk_0x4D36070FE0215186(iParam0);
	}
	return 0;
}

int func_24()
{
	if (unk_0x679BE1DAF71DA874(unk_0x367B936610BA360C(Local_55.f_2), 0, 7000))
	{
		return 1;
	}
	if (unk_0x679BE1DAF71DA874(unk_0x367B936610BA360C(Local_55.f_2), 1, 40000))
	{
		return 1;
	}
	if (unk_0x679BE1DAF71DA874(unk_0x367B936610BA360C(Local_55.f_2), 3, 30000))
	{
		return 1;
	}
	if (unk_0x679BE1DAF71DA874(unk_0x367B936610BA360C(Local_55.f_2), 2, 30000))
	{
		return 1;
	}
	return 0;
}

void func_25()
{
	struct<3> Var0;
	
	if (func_7(Local_55.f_2) && !func_26(Local_55.f_3))
	{
		if (unk_0xA3EE4A07279BB9DB(unk_0xBDCD95FC216A8B3E(Local_55.f_3), unk_0x367B936610BA360C(Local_55.f_2), false))
		{
			if (Local_55.f_22 < 4)
			{
				if (unk_0x77F1BEB8863288D5(unk_0xBDCD95FC216A8B3E(Local_55.f_3), -1817882002) != 1 && unk_0x77F1BEB8863288D5(unk_0xBDCD95FC216A8B3E(Local_55.f_3), -1817882002) != 0)
				{
					if (!unk_0xA921AA820C25702F(Local_55.f_1, 0))
					{
						unk_0x23703CD154E83B88(unk_0xBDCD95FC216A8B3E(Local_55.f_3), unk_0x367B936610BA360C(Local_55.f_2), 0, 0, Local_55.f_9[Local_55.f_22 /*3*/] + Vector(120f, 0f, 0f), 4, 20f, 50f, -1f, 90, 60);
					}
					else
					{
						unk_0xDAD029E187A2BEB4(unk_0xBDCD95FC216A8B3E(Local_55.f_3), unk_0x367B936610BA360C(Local_55.f_2), 0, 0, Local_55.f_9[Local_55.f_22 /*3*/] + Vector(120f, 0f, 0f), 4, 20f, 50f, -1f, 90, 60, -1f, 0);
					}
				}
			}
			else if (unk_0x77F1BEB8863288D5(unk_0xBDCD95FC216A8B3E(Local_55.f_3), -1273030092) != 1 && unk_0x77F1BEB8863288D5(unk_0xBDCD95FC216A8B3E(Local_55.f_3), -1273030092) != 0)
			{
				if (func_23(Local_55.f_2))
				{
					Var0 = { unk_0x1899F328B0E12848(unk_0x367B936610BA360C(Local_55.f_2), 0f, 12000f, 0f) };
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
					if (!unk_0xA921AA820C25702F(Local_55.f_1, 0))
					{
						unk_0x23703CD154E83B88(unk_0xBDCD95FC216A8B3E(Local_55.f_3), unk_0x367B936610BA360C(Local_55.f_2), 0, 0, Var0, 4, 20f, -1f, -1f, 100, 100);
					}
					else
					{
						unk_0xDAD029E187A2BEB4(unk_0xBDCD95FC216A8B3E(Local_55.f_3), unk_0x367B936610BA360C(Local_55.f_2), 0, 0, Var0, 4, 20f, -1f, -1f, 100, 100, -1f, 0);
					}
				}
			}
		}
	}
}

int func_26(int iParam0)
{
	if (unk_0x38CE16C96BD11344(iParam0))
	{
		return unk_0x84A2DD9AC37C35C1(unk_0xBDCD95FC216A8B3E(iParam0));
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
	
	if (unk_0xCA042B6957743895(sParam1))
	{
		return;
	}
	if (unk_0x43E4111189E54F0E(sParam1) > 15)
	{
		return;
	}
	if (!unk_0xCA042B6957743895(sParam4))
	{
		if (unk_0x43E4111189E54F0E(sParam4) > 31)
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
	if (unk_0xCA042B6957743895(sParam4) && iParam6 == -99)
	{
		return;
	}
	func_33(iVar0);
	if (!unk_0xCA042B6957743895(sParam4))
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
	Global_1321257.f_59[iParam0 /*16*/].f_15 = iParam1;
}

void func_31(int iParam0, char* sParam1, bool bParam2)
{
	StringCopy(&(Global_1321257.f_59[iParam0 /*16*/].f_7), sParam1, 32);
	if (!bParam2)
	{
		return;
	}
	func_32(iParam0);
}

void func_32(int iParam0)
{
	unk_0x933D6A9EEC1BACD0(&(Global_1321257.f_59[iParam0 /*16*/]), 5);
}

void func_33(int iParam0)
{
	unk_0x933D6A9EEC1BACD0(&(Global_1321257.f_59[iParam0 /*16*/]), 4);
}

void func_34(int iParam0, char* sParam1)
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam1, 16);
	Global_1321257.f_59[iParam0 /*16*/].f_3 = { Var0 };
}

void func_35(int iParam0, var uParam1, bool bParam2)
{
	Global_1321257.f_59[iParam0 /*16*/].f_2 = uParam1;
	if (bParam2)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_1321257.f_59[iParam0 /*16*/]), 2);
		unk_0xE80492A9AC099A93(&(Global_1321257.f_59[iParam0 /*16*/]), 3);
	}
	else
	{
		unk_0x933D6A9EEC1BACD0(&(Global_1321257.f_59[iParam0 /*16*/]), 3);
		unk_0xE80492A9AC099A93(&(Global_1321257.f_59[iParam0 /*16*/]), 2);
	}
}

void func_36(int iParam0, var uParam1)
{
	Global_1321257.f_59[iParam0 /*16*/].f_1 = uParam1;
}

void func_37(int iParam0)
{
	unk_0x933D6A9EEC1BACD0(&(Global_1321257.f_59[iParam0 /*16*/]), 0);
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
	return unk_0xA921AA820C25702F(Global_1321257.f_59[iParam0 /*16*/], 0);
}

int func_40()
{
	if (unk_0xA921AA820C25702F(unk_0xD53343AA4FB7DD28(0, 65535), 0))
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
	
	iVar0 = Global_2474198[iParam0 /*6*/][func_44(iParam2)];
	unk_0xB3271D7AB655B441(iVar0, iParam1, true);
}

int func_43(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2474198[iParam0 /*6*/][func_44(iParam1)];
	if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
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
			Global_2453901 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2453901 = 1;
		}
	}
	return iVar0;
}

var func_45()
{
	return Global_1312736;
}

void func_46(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
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
		if (!unk_0xB24F0944DA203D9E(func_45()) || unk_0x810E8431C0614BF9())
		{
			Global_2539469 = 1;
			return 0;
		}
		if (Global_2435610)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2539470 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2539058[iVar1 /*68*/].f_2 == 0)
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
	if (bVar0 || unk_0x3C5FD37B5499582E(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x39BE7CEA8D9CC8E6(iVar3))
		{
			*uParam0 = func_52(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2539058[*uParam0 /*68*/].f_62 = 1;
				}
			}
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2539468 = 1;
			Global_2539471 = iParam4;
			Global_2539473 = iParam3;
			Global_2539474 = 1;
			Global_2539472 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2539471 = iParam4;
			Global_2539473 = iParam3;
			Global_2539474 = 1;
			Global_2539472 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_51(1, iParam4);
			Global_2539468 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_48(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_48(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x933D6A9EEC1BACD0(&(Global_2413868[unk_0x4F8644AF03D0E0D6() /*253*/].f_121.f_71), 0);
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
	struct<68> Var1;
	
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
				unk_0xA65568121DF2EA26();
			}
		}
		else if (!bVar0)
		{
			unk_0xE2A99A9B524BEFFF(Global_2539058[iParam0 /*68*/]);
		}
		Var1 = 2147483647;
		Global_2539058[iParam0 /*68*/] = { Var1 };
	}
}

int func_50(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2539058[iParam0 /*68*/].f_5 == 1;
	}
	return 0;
}

void func_51(int iParam0, int iParam1)
{
	Global_2436787 = iParam1;
	Global_2436786 = iParam0;
}

int func_52(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2539058[iVar0 /*68*/].f_2 == 0)
		{
			if (!func_53())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2539058[iVar0 /*68*/].f_2 = 1;
			Global_2539058[iVar0 /*68*/].f_1 = iParam5;
			Global_2539058[iVar0 /*68*/].f_3 = uParam1;
			Global_2539058[iVar0 /*68*/].f_4 = iParam2;
			Global_2539058[iVar0 /*68*/].f_7 = iParam3;
			Global_2539058[iVar0 /*68*/].f_5 = 0;
			Global_2539058[iVar0 /*68*/] = iParam0;
			Global_2539058[iVar0 /*68*/].f_6 = iParam4;
			Global_2539058[iVar0 /*68*/].f_65 = uParam8;
			Global_2539058[iVar0 /*68*/].f_64 = iParam7;
			if (bParam6)
			{
				Global_2539058[iVar0 /*68*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_53()
{
	if (unk_0x48AF36444B965238())
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
	Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_180.f_4 = iVar1;
	Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_180.f_3 = (Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_180.f_3 + iVar1);
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

int func_59(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_69(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x7239B21A38F536BA(iParam1))
		{
			if (unk_0x524AC5ECEA15343E(iParam1))
			{
				iVar1 = unk_0x04A2A40C73395041(iParam1);
				func_65(unk_0x17C07FC640E86B4E(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8);
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
	if (iParam0 == func_62(unk_0xD80958FC74E988A6()))
	{
		func_61(1);
	}
	func_65(Var0, iParam1, 0, sParam2);
}

void func_61(int iParam0)
{
	Global_2421967.f_1306 = iParam0;
}

int func_62(int iParam0)
{
	return iParam0;
}

Vector3 func_63(int iParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	float fVar10;
	
	if (iParam0 == func_64(unk_0xD80958FC74E988A6()) && unk_0xEE778F8C7E1142E2(unk_0x19CAFA3C87F7C2FF()) == 4)
	{
		Var0 = { unk_0x1899F328B0E12848(iParam0, 0f, 2f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, false) };
	}
	fVar3 = 0f;
	if (!unk_0x5F9532F3B5CC2551(iParam0))
	{
		fVar3 = unk_0xE83D4F9BA2A38914(iParam0);
	}
	unk_0x03E8D3D5F549087A(unk_0x9F47B058362C84B5(iParam0), &Var4, &Var7);
	if (bParam1)
	{
		fVar10 = (Var7.f_2 + 0.18f);
	}
	else
	{
		fVar10 = (Var4.f_2 + 0.18f);
	}
	Var0 = { unk_0x163E252DE035A133(Var0, fVar3, 0f, 0f, fVar10) };
	return Var0;
}

int func_64(int iParam0)
{
	return iParam0;
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
			if (Global_2421967.f_725[iVar0 /*29*/].f_6 == 0 || Global_2421967.f_725[iVar0 /*29*/].f_6 == 6)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2421967.f_725[iVar1 /*29*/] = { Param0 };
			Global_2421967.f_725[iVar1 /*29*/].f_6 = 1;
			Global_2421967.f_725[iVar1 /*29*/].f_4 = func_68(Global_2421967.f_725[iVar1 /*29*/], &Global_1312317, &Global_1312318);
			Global_2421967.f_725[iVar1 /*29*/].f_7 = unk_0x7A5487FE9FAA6B48();
			Global_2421967.f_725[iVar1 /*29*/].f_3 = iParam3;
			Global_2421967.f_725[iVar1 /*29*/].f_8 = iParam4;
			Global_2421967.f_725[iVar1 /*29*/].f_9 = func_67();
			Global_2421967.f_725[iVar1 /*29*/].f_10 = func_66();
			StringCopy(&(Global_2421967.f_725[iVar1 /*29*/].f_22), sParam5, 16);
		}
	}
}

int func_66()
{
	if (Global_2421967.f_1306)
	{
		Global_2421967.f_1306 = 0;
		return 1;
	}
	Global_2421967.f_1306 = 0;
	return 0;
}

var func_67()
{
	var uVar0;
	
	uVar0 = Global_2421967.f_1308;
	Global_2421967.f_1308 = 1;
	return uVar0;
}

float func_68(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0xF1B760881820C952(unk_0x14D6F5678D8F1B37(), Param0, true);
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

var func_69(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_70(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_70(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_106(unk_0x4F8644AF03D0E0D6()) || func_105(unk_0x4F8644AF03D0E0D6()))
	{
		if (Global_262145.f_7253 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_7253;
		}
	}
	else if (Global_262145.f_4956 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_4956;
	}
	if (func_104(sParam2))
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
			func_91(1150, iVar1, -1);
			if (iParam1 == 0)
			{
				func_81((func_90(unk_0x4F8644AF03D0E0D6()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x46F917F6B4128FE4(iVar1, iParam8, iParam9);
				if (Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_31.f_2 != -1)
				{
					func_91(1151, iVar1, -1);
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
				func_71((func_73(unk_0x4F8644AF03D0E0D6()) + iVar1));
			}
			else
			{
				func_71((func_73(unk_0x4F8644AF03D0E0D6()) + iParam6));
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
		Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_180.f_5 = iParam0;
		func_72(joaat("mpply_globalxp"), iParam0);
	}
}

void func_72(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, iParam1, true);
	}
}

int func_73(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_146(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x4F8644AF03D0E0D6())
			{
				return func_74(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1582048[iParam0 /*324*/].f_180.f_5;
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
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_75(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_80(unk_0x4F8644AF03D0E0D6()) };
	if (unk_0x579CCED0265D4896())
	{
		if (unk_0xB124B57F571D8F18(&Var0))
		{
			iVar13 = func_78(func_79(&Var0));
			if (iVar13 == 0)
			{
				func_77(&Global_1333715, iParam0);
				func_76(joaat("mpply_crew_local_xp_0"), Global_1333715);
			}
			else if (iVar13 == 1)
			{
				func_77(&Global_1333716, iParam0);
				func_76(joaat("mpply_crew_local_xp_1"), Global_1333716);
			}
			else if (iVar13 == 2)
			{
				func_77(&Global_1333717, iParam0);
				func_76(joaat("mpply_crew_local_xp_2"), Global_1333717);
			}
			else if (iVar13 == 3)
			{
				func_77(&Global_1333718, iParam0);
				func_76(joaat("mpply_crew_local_xp_3"), Global_1333718);
			}
			else if (iVar13 == 4)
			{
				func_77(&Global_1333719, iParam0);
				func_76(joaat("mpply_crew_local_xp_4"), Global_1333719);
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
		unk_0xB3271D7AB655B441(iVar0, iParam1, true);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1333710 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1333712 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1333712 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1333713 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1333714 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1333715 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1333716 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1333717 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1333718 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1333719 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1333720 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1333721 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1333722 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1333723 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1333724 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1333725 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1333726 = iParam1;
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
	if (iParam0 == Global_1333710)
	{
		return 0;
	}
	else if (iParam0 == Global_1333711)
	{
		return 1;
	}
	else if (iParam0 == Global_1333712)
	{
		return 2;
	}
	else if (iParam0 == Global_1333713)
	{
		return 3;
	}
	else if (iParam0 == Global_1333714)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_79(var* uParam0)
{
	if (unk_0x579CCED0265D4896())
	{
		if (unk_0xB124B57F571D8F18(uParam0))
		{
			return Global_2434905;
		}
	}
	return Global_2434905;
}

struct<13> func_80(int iParam0)
{
	struct<13> Var0;
	
	unk_0x388EB2B86C73B6B3(iParam0, &Var0, 13);
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
		if (Global_262145.f_7228 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1333830[func_44(-1)])
				{
					unk_0x46F917F6B4128FE4(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1333830[func_44(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_7227 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x46F917F6B4128FE4(iParam0, -1158693853, -1345423847);
			}
		}
		if (func_89(unk_0x4F8644AF03D0E0D6()))
		{
			Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_180.f_1 = iParam0;
			Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_180.f_6 = func_87(iParam0, 1);
		}
		func_86(625, iParam0, -1, 1);
		func_85(626, func_87(iParam0, 1), -1, 1);
		Global_1333830[func_44(-1)] = iParam0;
		func_82(7, 0);
	}
}

void func_82(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_84(iParam0, iParam1))
	{
		iVar0 = func_83();
		Global_2434883[iVar0] = iParam0;
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
		if (Global_2434883[iVar1] == 0)
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
	if (Global_1315886)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315898) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_85(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = Global_2454188[iParam0 /*6*/][func_44(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, iParam1, bParam3);
	}
}

void func_86(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = Global_2454188[iParam0 /*6*/][func_44(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 773:
			Global_1333776[func_44(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1333782[func_44(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1333788[func_44(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1333794[func_44(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1333752[func_44(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1333758[func_44(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1333764[func_44(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1333770[func_44(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1333728[func_44(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1333734[func_44(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1333740[func_44(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1333746[func_44(iParam2)] = iParam1;
			break;
		
		case 743:
			Global_1333800[func_44(iParam2)] = iParam1;
			break;
		
		case 744:
			Global_1333806[func_44(iParam2)] = iParam1;
			break;
		
		case 745:
			Global_1333812[func_44(iParam2)] = iParam1;
			break;
		
		case 746:
			Global_1333818[func_44(iParam2)] = iParam1;
			break;
		
		case 1288:
			Global_1333824[func_44(iParam2)] = iParam1;
			break;
		
		case 625:
			Global_1333830[func_44(iParam2)] = iParam1;
			break;
		
		case 1263:
			Global_1333836[func_44(iParam2)] = iParam1;
			break;
		
		case 1860:
			Global_2474967[0 /*6*/][func_44(iParam2)] = iParam1;
			break;
		
		case 2249:
			Global_2474967[1 /*6*/][func_44(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1333842[func_44(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1333848[func_44(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1333854[func_44(iParam2)] = iParam1;
			break;
		
		case 1221:
			Global_1333860[func_44(iParam2)] = iParam1;
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
		if (Global_270026[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_270026[iVar3] < iParam0)
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
		return unk_0xA921AA820C25702F(Global_2421967.f_1, iParam0);
	}
	return 1;
}

int func_90(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x4F8644AF03D0E0D6())
			{
				return Global_1333830[func_44(-1)];
			}
			else if (func_89(iParam0))
			{
				return Global_1582048[iParam0 /*324*/].f_180.f_1;
			}
		}
	}
	else
	{
		return Global_1333830[func_44(-1)];
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
	if (Global_1333709)
	{
		switch (iParam0)
		{
			case 773:
			case 774:
			case 775:
			case 776:
			case 763:
			case 764:
			case 765:
			case 766:
			case 753:
			case 754:
			case 755:
			case 756:
			case 743:
			case 744:
			case 745:
			case 746:
			case 1288:
			case 625:
			case 1263:
			case 750:
			case 751:
			case 752:
			case 1221:
			case 1860:
			case 2249:
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
	
	iVar1 = unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6());
	iVar0 = 0;
	while (iVar0 < unk_0xA6C90FBC38E395EE())
	{
		iVar4 = unk_0x9EC6603812C24710(iVar0);
		if (unk_0x6FF8FF40B6357D45(iVar4))
		{
			iVar5 = unk_0x24FB80D107371267(iVar4);
			if (unk_0x37039302F4E0A008(iVar5) != -1)
			{
				if (unk_0x37039302F4E0A008(iVar5) == iVar1 || func_96(unk_0x37039302F4E0A008(iVar5), iVar1))
				{
					iVar2++;
					if (iVar5 != unk_0x4F8644AF03D0E0D6())
					{
						if (func_95(unk_0x4F8644AF03D0E0D6(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_94(*iParam0, 100) * (10f * Global_262145.f_4192)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_94(*iParam0, 100) * (20f * Global_262145.f_4185)));
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
	if (unk_0x579CCED0265D4896())
	{
		Global_2445237 = { func_80(iParam0) };
		Global_2445250 = { func_80(iParam1) };
		if (unk_0xB124B57F571D8F18(&Global_2445237))
		{
			if (unk_0xB124B57F571D8F18(&Global_2445250))
			{
				unk_0xEEE6EACBE8874FBA(&Global_2445167, 35, &Global_2445237);
				unk_0xEEE6EACBE8874FBA(&Global_2445202, 35, &Global_2445250);
				if (Global_2445167 == Global_2445202)
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
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 0);
				
				case 1:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 1);
				
				case 2:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 2);
				
				case 3:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 4);
				
				case 1:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 5);
				
				case 2:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 6);
				
				case 3:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 8);
				
				case 1:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 9);
				
				case 2:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 10);
				
				case 3:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 12);
				
				case 1:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 13);
				
				case 2:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 14);
				
				case 3:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 15);
				
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
		while (iVar0 < unk_0xA6C90FBC38E395EE())
		{
			iVar3 = iVar0;
			if (unk_0x6FF8FF40B6357D45(iVar3))
			{
				iVar4 = unk_0x24FB80D107371267(iVar3);
				if (func_146(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x4F8644AF03D0E0D6())
					{
						iVar1++;
						if (func_95(unk_0x4F8644AF03D0E0D6(), iVar4))
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
			if (func_146(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x4F8644AF03D0E0D6())
				{
					if (func_98(unk_0x4F8644AF03D0E0D6(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_95(unk_0x4F8644AF03D0E0D6(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_94(*iParam1, 100) * (10f * Global_262145.f_4192)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_94(*iParam1, 100) * (20f * Global_262145.f_4185)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_98(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_99(iParam0), func_99(iParam1));
	return 0f;
}

Vector3 func_99(int iParam0)
{
	return unk_0x3FEF770D40960D5A(unk_0x43A66C31C68491C0(iParam0), false);
}

int func_100(int iParam0)
{
	int iVar0;
	
	if (unk_0xBB41AFBBBC0A0287() != 3)
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
		if (unk_0xF0D31AD191A74F87(iParam0) > func_90(unk_0x4F8644AF03D0E0D6()))
		{
			iParam0 = -func_90(unk_0x4F8644AF03D0E0D6());
		}
	}
	if (func_102(8000, 0, 0) > 0)
	{
		if (func_102(8000, 0, 0) < (iParam0 + func_90(unk_0x4F8644AF03D0E0D6())))
		{
			iParam0 = (func_102(8000, 0, 0) - func_90(unk_0x4F8644AF03D0E0D6()));
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
	return Global_270026[iParam0];
}

int func_103()
{
	return 1;
}

int func_104(char* sParam0)
{
	if (unk_0xF22B6C47C6EAB066(sParam0))
	{
		return 1;
	}
	else if (unk_0x0C515FAB3FF9EA92(sParam0, "") || unk_0x0C515FAB3FF9EA92(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_105(int iParam0)
{
	return Global_2413868[iParam0 /*253*/].f_114 == 2;
}

bool func_106(int iParam0)
{
	return Global_2413868[iParam0 /*253*/].f_114 == 7;
}

int func_107(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2454188[iParam0 /*6*/][func_44(iParam1)];
	if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
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
	if (unk_0x38CE16C96BD11344(Local_55.f_2) && !unk_0x5F9532F3B5CC2551(unk_0x367B936610BA360C(Local_55.f_2)))
	{
		if (!unk_0xA6DB27D19ECBB7DA(iLocal_182))
		{
			iLocal_182 = unk_0x5CDE92C702A8FCE7(unk_0x367B936610BA360C(Local_55.f_2));
			if (!unk_0xA921AA820C25702F(Local_55.f_1, 0))
			{
				unk_0xDF735600A4696DAF(iLocal_182, 307);
				unk_0xEAA0FFE120D92784(iLocal_182, "PTD_BLIPN");
			}
			else
			{
				unk_0xDF735600A4696DAF(iLocal_182, 64);
				unk_0xEAA0FFE120D92784(iLocal_182, "PTD_BLIPH");
			}
			unk_0x03D7FB09E75D6B7E(iLocal_182, 1);
			unk_0xD3CD6FD297AE87CC(iLocal_182, 7000);
			unk_0xAE9FC9EF6A9FAC79(iLocal_182, 6);
		}
		else if (!unk_0xA921AA820C25702F(Local_55.f_1, 0))
		{
			unk_0xF87683CDF73C3F6E(iLocal_182, unk_0xF2DB717A73826179(unk_0xE83D4F9BA2A38914(unk_0x367B936610BA360C(Local_55.f_2))));
		}
	}
}

void func_110(char* sParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(sParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

bool func_111(int iParam0)
{
	return unk_0xF0D31AD191A74F87(unk_0xA2C6FC031D46FFF0(Global_2408441, unk_0x7A5487FE9FAA6B48())) > iParam0;
}

int func_112()
{
	return Local_55.f_0;
}

int func_113(int iParam0)
{
	return Local_83[iParam0 /*3*/];
}

bool func_114(int iParam0)
{
	return !func_115(iParam0);
}

int func_115(int iParam0)
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
			if (Global_262145.f_4980)
			{
				return 0;
			}
			if (func_117(unk_0x4F8644AF03D0E0D6(), 7))
			{
				return 0;
			}
			if (unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_235.f_4, 0) || unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_4981)
			{
				return 0;
			}
			if (func_117(unk_0x4F8644AF03D0E0D6(), 7))
			{
				return 0;
			}
			if (unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_235.f_4, 0) || unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_4982)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_4983)
			{
				return 0;
			}
			if (func_117(unk_0x4F8644AF03D0E0D6(), 7))
			{
				return 0;
			}
			if (unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_235.f_4, 0) || unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_116(4))
			{
				return 0;
			}
			if (func_117(unk_0x4F8644AF03D0E0D6(), 7))
			{
				return 0;
			}
			if (unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_235.f_4, 0) || unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 18:
			if (func_116(4))
			{
				return 0;
			}
			if (func_117(unk_0x4F8644AF03D0E0D6(), 7))
			{
				return 0;
			}
			if (unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_235.f_4, 0) || unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_116(4))
			{
				return 0;
			}
			if (func_117(unk_0x4F8644AF03D0E0D6(), 7))
			{
				return 0;
			}
			if (unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_235.f_4, 0) || unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_235.f_4, 1))
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

int func_116(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_146(unk_0x41BD2A6B006AF756(iVar0), 0, 1))
		{
			if (unk_0xA921AA820C25702F(Global_2413868[iVar0 /*253*/].f_205, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_117(int iParam0, int iParam1)
{
	return unk_0xA921AA820C25702F(Global_2413868[iParam0 /*253*/].f_205, iParam1);
}

int func_118()
{
	bool bVar0;
	
	func_125(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315872 == 0)
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			return 1;
		}
	}
	if (func_124())
	{
		return 1;
	}
	if (Global_2436713)
	{
		return 1;
	}
	if (func_123())
	{
		return 1;
	}
	if (func_122(157))
	{
		if (!func_121())
		{
			return 1;
		}
	}
	if (func_122(155))
	{
		return 1;
	}
	if (!unk_0x1077788E268557C2())
	{
		return 1;
	}
	if (func_119() != 0)
	{
		if (unk_0x2C83A9DA6BFFC4F9(func_119()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_119()
{
	switch (func_120())
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

int func_120()
{
	return Global_24444;
}

bool func_121()
{
	return Global_2427935.f_570;
}

int func_122(int iParam0)
{
	if (unk_0x936E6168A9BCEDB5(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_123()
{
	return Global_2434971;
}

bool func_124()
{
	return Global_2427935.f_565;
}

void func_125(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5F92A689A06620AA(1))
	{
		iVar1 = unk_0xD8F66A3A60C62153(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x2902843FCD2B2D79(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 305:
					func_126(iVar0);
					break;
				
				case 2:
					unk_0x2902843FCD2B2D79(1, iVar0, &Var4, 3);
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

void func_126(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (unk_0x2902843FCD2B2D79(1, iParam0, &Var0, 3))
	{
		if (func_146(Var0.f_1, 1, 1))
		{
			iVar3 = unk_0x43A66C31C68491C0(Var0.f_1);
			if (unk_0x7239B21A38F536BA(iVar3))
			{
				if (unk_0x997ABD671D25CA0B(iVar3, false))
				{
					iVar4 = unk_0x9A9112A0FE9A4713(iVar3, false);
					if (unk_0x46E571A0E20D01F1(iVar4, Var0.f_2) && unk_0x2910669969E9535E())
					{
						if (func_127(iVar4, &bVar5))
						{
							unk_0xA711568EEDB43069(iVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x629BFA74418D6239(&iVar4);
						}
					}
				}
			}
		}
	}
}

int func_127(int iParam0, var uParam1)
{
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (!unk_0x0A7B270912999B3C(iParam0))
		{
			if (unk_0x0991549DE4D64762(iParam0))
			{
				unk_0xAD738C3085FE7E11(iParam0, false, true);
				*uParam1 = 1;
			}
		}
		if (unk_0xDDE6DF5AE89981D2(iParam0, false))
		{
			if (unk_0x01BF60A500E28887(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_128()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_129()
{
	if (unk_0xA6DB27D19ECBB7DA(iLocal_182))
	{
		unk_0x86A652570E5F25DD(&iLocal_182);
	}
	if (unk_0xA921AA820C25702F(Local_55.f_1, 1))
	{
		func_27(2, "PTD_FAIL", 0, 0, -99);
	}
	func_132();
	if (func_112() == 4 && Local_55.f_4 != 0)
	{
		unk_0x0FC2D89AC25A5814(Local_55.f_4, false);
	}
	func_131(15, 0);
	func_130();
}

void func_130()
{
	unk_0x1090044AD1DA76FA();
}

void func_131(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xA921AA820C25702F(Global_2413868[unk_0x4F8644AF03D0E0D6() /*253*/].f_205, iParam0))
		{
			unk_0x933D6A9EEC1BACD0(&(Global_2413868[unk_0x4F8644AF03D0E0D6() /*253*/].f_205), iParam0);
		}
	}
	else if (unk_0xA921AA820C25702F(Global_2413868[unk_0x4F8644AF03D0E0D6() /*253*/].f_205, iParam0))
	{
		unk_0xE80492A9AC099A93(&(Global_2413868[unk_0x4F8644AF03D0E0D6() /*253*/].f_205), iParam0);
	}
}

void func_132()
{
	unk_0x3841422E9C488D8C(&uLocal_180);
}

void func_133(struct<20> Param0)
{
	int iVar0;
	
	func_144(func_145(Param0.f_0), Param0);
	unk_0xB60FEBA45333D36F(1);
	unk_0x76B02E21ED27A469(1);
	func_142(0, -1, 0);
	unk_0x3E9B2F01C50DF595(&Local_55, 28);
	unk_0x3364AA97340CA215(&Local_83, 97);
	if (!func_141())
	{
		func_129();
	}
	if (unk_0x10FAB35428CCC9D7())
	{
		unk_0xAA391C728106F7AF(false);
		if (unk_0x83CD99A1E6061AB5())
		{
			iVar0 = unk_0xD53343AA4FB7DD28(0, 6);
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
					unk_0x933D6A9EEC1BACD0(&(Local_55.f_1), 0);
					break;
				
				case 5:
					Local_55.f_4 = joaat("swift");
					Local_55.f_5 = joaat("a_m_y_busicas_01");
					unk_0x933D6A9EEC1BACD0(&(Local_55.f_1), 0);
					break;
			}
			if (Local_55.f_4 != 0)
			{
				unk_0x0FC2D89AC25A5814(Local_55.f_4, true);
			}
			func_140();
			func_134();
		}
		func_131(15, 1);
		Local_83[unk_0x57A3BDDAD8E5AA0A() /*3*/] = 0;
	}
	else
	{
		func_129();
	}
}

void func_134()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = unk_0xD53343AA4FB7DD28(0, 3);
		Local_55.f_9[iVar0 /*3*/] = { func_136(iVar1) };
		if (iVar0 > 0)
		{
			if (func_135(Local_55.f_9[iVar0 /*3*/], Local_55.f_9[(iVar0 - 1) /*3*/], 250f))
			{
				Local_55.f_9[iVar0 /*3*/] = { func_136(iVar1 + 1) };
			}
		}
		iVar0++;
	}
}

int func_135(struct<3> Param0, struct<3> Param3, float fParam6)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (unk_0x73D57CFFDD12C355((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x73D57CFFDD12C355((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			if (unk_0x73D57CFFDD12C355((Param0.f_2 - Param3.f_2)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
}

Vector3 func_136(int iParam0)
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
			return func_139();
		
		case 1:
			return func_138();
		
		case 2:
			return func_137();
		
		default:
	}
	return 3250f, 1500f, 0f;
}

Vector3 func_137()
{
	switch (unk_0xD53343AA4FB7DD28(0, 13))
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

Vector3 func_138()
{
	switch (unk_0xD53343AA4FB7DD28(0, 13))
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

Vector3 func_139()
{
	switch (unk_0xD53343AA4FB7DD28(0, 13))
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

void func_140()
{
	Local_55.f_6 = { func_136(unk_0xD53343AA4FB7DD28(0, 3)) };
	Local_55.f_6 = { Local_55.f_6 + Vector(120f, 0f, 0f) };
}

int func_141()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x10FAB35428CCC9D7())
		{
			return 0;
		}
		if (unk_0x5D10B3795F3FC886())
		{
			return 1;
		}
		if (func_124())
		{
			return 0;
		}
		if (func_122(155))
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

int func_142(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x57D158647A6BFABF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_130();
			}
			else
			{
				return 0;
			}
		}
		if (!func_143())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x10FAB35428CCC9D7())
				{
					if (!bParam2)
					{
						func_130();
					}
					else
					{
						return 0;
					}
				}
				if (func_124())
				{
					if (!bParam2)
					{
						func_130();
					}
					else
					{
						return 0;
					}
				}
				if (func_122(155))
				{
					if (!bParam2)
					{
						func_130();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xCA97246103B63917())
			{
				if (!bParam2)
				{
					func_130();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x57D158647A6BFABF();
	}
	if (iParam1 > -1)
	{
		Global_1312503 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			if (!bParam2)
			{
				func_130();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xCA97246103B63917())
	{
		if (!bParam2)
		{
			func_130();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_143()
{
	return Global_1315872;
}

void func_144(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		func_130();
	}
	unk_0x1CA59E306ECB80A5(iParam0, false, Param1.f_16);
}

int func_145(int iParam0)
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

int func_146(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xB8DFD30D6973E135(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x5E9564D8246B909A(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2421967.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

