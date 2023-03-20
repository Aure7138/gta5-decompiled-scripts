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
	struct<48> Local_55 = { 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, -808831384, 588969535, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_103 = 0;
	struct<3> Local_104[32];
	int iLocal_201 = 0;
	var uLocal_202 = 0;
	int iLocal_203 = 0;
	var uLocal_204 = 0;
	int iLocal_205 = 0;
	int iLocal_206 = 0;
	int iLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	struct<8> Local_216[3];
	var uLocal_241 = 0;
	var uLocal_242 = 0;
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
	iLocal_205 = 1076369579;
	iLocal_206 = 20;
	if (unk_0x1C6DF6AD69BE853E() && func_163(unk_0x1329891157A54C63(), 0, 1))
	{
		func_154(ScriptParam_0);
	}
	else
	{
		func_150();
	}
	while (true)
	{
		func_149();
		if (func_139() || func_135(17))
		{
			func_150();
		}
		if (unk_0x9B20331E99DD1C1C())
		{
			func_150();
		}
		switch (func_134(unk_0x519AAFF77CC141DF()))
		{
			case 0:
				if (func_133() == 1)
				{
					func_132();
					func_131();
					if (func_130(60000))
					{
						if (!func_128())
						{
							if (!unk_0xC5ABD699DDC9D5A0(Local_55.f_10))
							{
								func_127("DSV_HELP1", -1);
							}
							else
							{
								func_127("DSV_HELP2", -1);
							}
						}
					}
					Local_104[unk_0x519AAFF77CC141DF() /*3*/] = 1;
				}
				else if (func_133() == 4)
				{
					Local_104[unk_0x519AAFF77CC141DF() /*3*/] = 3;
				}
				break;
			
			case 1:
				if (func_133() == 1)
				{
					func_38();
				}
				else if (func_133() == 4)
				{
					Local_104[unk_0x519AAFF77CC141DF() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_37(&(Local_55.f_45));
				if (func_36(&(Local_55.f_45)))
				{
					Local_104[unk_0x519AAFF77CC141DF() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_104[unk_0x519AAFF77CC141DF() /*3*/] = 4;
			
			case 4:
				func_150();
				break;
		}
		if (unk_0x1C7D9BFDF15A02B4())
		{
			switch (func_133())
			{
				case 0:
					if (func_10())
					{
						func_132();
						func_9(&(Local_55.f_43), 0, 0);
						Local_55.f_0 = 1;
					}
					break;
				
				case 1:
					func_8();
					func_7();
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
	
	if (Local_55.f_42 == 0)
	{
		if (Local_55.f_0 != 4)
		{
			if (unk_0x930F8FBB8E9537CC(unk_0x1D1DAF7F94D5FE77(Local_55.f_2)))
			{
				if (func_6(&(Local_55.f_47), 3000, 0))
				{
					if (Local_55.f_8 == func_5())
					{
						Var0.f_2 = 116;
						func_3(Var0, func_4(1));
					}
					else
					{
						Var0.f_2 = 117;
						Var0.f_10 = Local_55.f_8;
						func_3(Var0, func_4(1));
					}
					return 1;
				}
			}
			if (func_6(&(Local_55.f_43), Global_262145.f_8900, 0))
			{
				Var14.f_2 = 118;
				func_3(Var14, func_4(1));
				return 1;
			}
		}
	}
	return 0;
}

void func_3(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0x1329891157A54C63();
	if (!iParam14 == 0)
	{
		unk_0x8DAD64B00B88FC2D(1, &Param0, 14, iParam14);
	}
}

int func_4(int iParam0)
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
			if (func_163(iVar2, 0, 0))
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

int func_5()
{
	return -1;
}

int func_6(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_9(uParam0, bParam2, 0);
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

void func_7()
{
	switch (Local_55.f_42)
	{
		case 0:
			break;
		
		case 1:
			break;
	}
}

void func_8()
{
	struct<14> Var0;
	var uVar14;
	
	if (Local_55.f_0 != 4)
	{
		iLocal_203 = 0;
		while (iLocal_203 < unk_0x945535897333587B())
		{
			if (unk_0xC4FEBC724D547D78(unk_0xC3904F8771F37B7F(iLocal_203)))
			{
				uVar14 = unk_0x29A638E7EEEE6B16(unk_0xC3904F8771F37B7F(iLocal_203));
				if (unk_0x236D8AD7EE179F46(Local_104[iLocal_203 /*3*/].f_1, 0))
				{
					Var0.f_2 = 117;
					Var0.f_10 = uVar14;
					Local_55.f_8 = uVar14;
					func_3(Var0, func_4(1));
					Local_55.f_0 = 4;
					return;
				}
				if (!unk_0x236D8AD7EE179F46(Local_55.f_1, 0))
				{
					if (unk_0x236D8AD7EE179F46(Local_104[iLocal_203 /*3*/].f_1, 1))
					{
						unk_0xF3148AAF69AF9CBC(&(Local_55.f_1), 0);
					}
					if (unk_0x236D8AD7EE179F46(Local_104[iLocal_203 /*3*/].f_1, 2))
					{
						unk_0xF3148AAF69AF9CBC(&(Local_55.f_1), 0);
					}
				}
				else
				{
					if (!unk_0x236D8AD7EE179F46(Local_55.f_1, 1))
					{
						if (unk_0x236D8AD7EE179F46(Local_104[iLocal_203 /*3*/].f_1, 3))
						{
							unk_0xF3148AAF69AF9CBC(&(Local_55.f_1), 1);
						}
					}
					if (!unk_0x236D8AD7EE179F46(Local_55.f_1, 2))
					{
						if (unk_0x236D8AD7EE179F46(Local_104[iLocal_203 /*3*/].f_1, 4))
						{
							unk_0xF3148AAF69AF9CBC(&(Local_55.f_1), 2);
						}
					}
					if (!unk_0x236D8AD7EE179F46(Local_55.f_1, 3))
					{
						if (unk_0x236D8AD7EE179F46(Local_104[iLocal_203 /*3*/].f_1, 5))
						{
							unk_0xF3148AAF69AF9CBC(&(Local_55.f_1), 3);
						}
					}
					if (!unk_0x236D8AD7EE179F46(Local_55.f_1, 4))
					{
						if (unk_0x236D8AD7EE179F46(Local_104[iLocal_203 /*3*/].f_1, 6))
						{
							unk_0xF3148AAF69AF9CBC(&(Local_55.f_1), 4);
						}
					}
				}
			}
			iLocal_203++;
		}
	}
}

void func_9(var uParam0, bool bParam1, bool bParam2)
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

int func_10()
{
	if (func_35(Local_55.f_10) && func_35(Local_55.f_11))
	{
		if ((func_21() && func_19()) && func_11())
		{
			unk_0x887F4488DA99FD21(Local_55.f_10);
			unk_0x887F4488DA99FD21(Local_55.f_11);
			return 1;
		}
	}
	return 0;
}

int func_11()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_55.f_14)
	{
		if ((!unk_0x250A8F68F67CA19A(Local_55.f_4[iVar0]) && func_35(Local_55.f_11)) && unk_0x250A8F68F67CA19A(Local_55.f_2))
		{
			if (func_17(Local_55.f_2))
			{
				if (Local_55.f_12 == 0)
				{
					if (func_16(&(Local_55.f_4[iVar0]), Local_55.f_2, 22, Local_55.f_11, iVar0, 1, 1, 1))
					{
						func_13(&(Local_55.f_4[iVar0]));
					}
				}
				else if (func_12(&(Local_55.f_4[iVar0]), 22, Local_55.f_11, Local_55.f_28[iVar0 /*3*/], Local_55.f_38[iVar0], 1, 1, 1))
				{
					func_13(&(Local_55.f_4[iVar0]));
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_55.f_14)
	{
		if (!unk_0x250A8F68F67CA19A(Local_55.f_4[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_12(var uParam0, int iParam1, var uParam2, struct<3> Param3, var uParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	
	if (!unk_0x9C32248B2352E183(1))
	{
		return 0;
	}
	iVar0 = unk_0x206897C6DBC12488(iParam1, uParam2, Param3, uParam6, iParam8, bParam7);
	*uParam0 = unk_0x39E5853480A5C856(iVar0);
	if (unk_0x250A8F68F67CA19A(*uParam0))
	{
		unk_0xEA89E72C99125D9C(iVar0, iParam9);
		if (unk_0xE682D8146CB90267(iVar0))
		{
			if (bParam7)
			{
				unk_0xE2F4428601519A00(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

void func_13(var uParam0)
{
	int iVar0;
	
	unk_0x506A601663C5417C(unk_0xCFD52BB67CC0A98F(*uParam0), Global_1574216);
	unk_0x6BC3C6046951661E(unk_0xCFD52BB67CC0A98F(*uParam0), 0);
	unk_0x6CB332CB31E9FA96(unk_0xCFD52BB67CC0A98F(*uParam0), 1);
	unk_0xA8190B0CB5814D75(unk_0xCFD52BB67CC0A98F(*uParam0), func_15(), 25000, 1);
	iVar0 = unk_0x2E0A9E3291F398E3(0, 10);
	if (iVar0 == 0 || iVar0 == 1)
	{
		unk_0xA161142D1C595060(unk_0xCFD52BB67CC0A98F(*uParam0), 0);
	}
	else if ((iVar0 == 2 || iVar0 == 3) || iVar0 == 4)
	{
		unk_0xA161142D1C595060(unk_0xCFD52BB67CC0A98F(*uParam0), 2);
	}
	else
	{
		unk_0xA161142D1C595060(unk_0xCFD52BB67CC0A98F(*uParam0), 1);
	}
	iVar0 = unk_0x2E0A9E3291F398E3(0, 10);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 2)
	{
		unk_0x4B9FA68A3AC8C29D(unk_0xCFD52BB67CC0A98F(*uParam0), 5, 1);
	}
	else if (iVar0 == 3)
	{
		unk_0x4B9FA68A3AC8C29D(unk_0xCFD52BB67CC0A98F(*uParam0), 17, 1);
	}
	else if ((iVar0 == 4 || iVar0 == 5) || iVar0 == 6)
	{
		unk_0x4B9FA68A3AC8C29D(unk_0xCFD52BB67CC0A98F(*uParam0), 13, 1);
	}
	if (func_14())
	{
		unk_0x4B9FA68A3AC8C29D(unk_0xCFD52BB67CC0A98F(*uParam0), 20, 1);
	}
	unk_0x4B9FA68A3AC8C29D(unk_0xCFD52BB67CC0A98F(*uParam0), 2, 1);
	iVar0 = unk_0x2E0A9E3291F398E3(0, 4);
	if (iVar0 == 0)
	{
		unk_0xA97FB3A1E6744863(unk_0xCFD52BB67CC0A98F(*uParam0), 2);
	}
	else if (iVar0 == 1)
	{
		unk_0xA97FB3A1E6744863(unk_0xCFD52BB67CC0A98F(*uParam0), 1);
	}
	else if (iVar0 == 2)
	{
		unk_0xA97FB3A1E6744863(unk_0xCFD52BB67CC0A98F(*uParam0), 3);
	}
	unk_0xFD93F0AB65149DF3(unk_0xCFD52BB67CC0A98F(*uParam0), 1);
	unk_0x36C8C9789AEE2A5D(unk_0xCFD52BB67CC0A98F(*uParam0), 1);
	unk_0xCE566DBDCACD245E(unk_0xCFD52BB67CC0A98F(*uParam0), 29, 1);
	unk_0x150101BCDC17D828(unk_0xCFD52BB67CC0A98F(*uParam0), 3);
	unk_0x9765BF567DB87B5F(unk_0xCFD52BB67CC0A98F(*uParam0), unk_0xF2DB717A73826179((200f * Global_262145.f_149)));
}

int func_14()
{
	if (unk_0x236D8AD7EE179F46(unk_0x2E0A9E3291F398E3(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_15()
{
	switch (Local_55.f_11)
	{
		case joaat("g_m_y_ballaorig_01"):
		case joaat("g_m_y_ballaeast_01"):
			switch (unk_0x2E0A9E3291F398E3(0, 5))
			{
				case 0:
					return joaat("weapon_combatpistol");
				
				case 1:
					return joaat("weapon_pumpshotgun");
				
				case 2:
					return joaat("weapon_microsmg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_assaultrifle");
				
				default:
			}
			break;
		
		case joaat("g_m_y_mexgoon_02"):
		case joaat("g_f_y_vagos_01"):
			switch (unk_0x2E0A9E3291F398E3(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_pumpshotgun");
				
				case 2:
					return joaat("weapon_microsmg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_assaultrifle");
				
				default:
			}
			break;
		
		case joaat("g_m_y_lost_01"):
		case joaat("g_f_y_lost_01"):
			switch (unk_0x2E0A9E3291F398E3(0, 5))
			{
				case 0:
					return joaat("weapon_combatpistol");
				
				case 1:
					return joaat("weapon_sawnoffshotgun");
				
				case 2:
					return joaat("weapon_smg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_assaultrifle");
				
				default:
			}
			break;
		
		case joaat("g_m_m_chigoon_02"):
		case joaat("g_m_m_chigoon_01"):
			switch (unk_0x2E0A9E3291F398E3(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_pumpshotgun");
				
				case 2:
					return joaat("weapon_advancedrifle");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_carbinerifle");
				
				default:
			}
			break;
		
		case joaat("g_m_m_armgoon_01"):
		case joaat("g_m_y_armgoon_02"):
			switch (unk_0x2E0A9E3291F398E3(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_sawnoffshotgun");
				
				case 2:
					return joaat("weapon_smg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_carbinerifle");
				
				default:
			}
			break;
		
		case joaat("a_m_m_hillbilly_02"):
		case joaat("a_m_m_hillbilly_01"):
			switch (unk_0x2E0A9E3291F398E3(0, 5))
			{
				case 0:
					return joaat("weapon_combatpistol");
				
				case 1:
					return joaat("weapon_sawnoffshotgun");
				
				case 2:
					return joaat("weapon_microsmg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_combatmg");
				
				default:
			}
			break;
		
		case joaat("g_m_y_salvagoon_01"):
		case joaat("g_m_y_salvagoon_02"):
			switch (unk_0x2E0A9E3291F398E3(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_pumpshotgun");
				
				case 2:
					return joaat("weapon_microsmg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_assaultrifle");
				
				default:
			}
			break;
		
		case joaat("g_m_y_strpunk_01"):
		case joaat("g_m_y_strpunk_02"):
			switch (unk_0x2E0A9E3291F398E3(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_sawnoffshotgun");
				
				case 2:
					return joaat("weapon_microsmg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_assaultrifle");
				
				default:
			}
			break;
		
		default:
			switch (unk_0x2E0A9E3291F398E3(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_pumpshotgun");
				
				case 2:
					return joaat("weapon_smg");
				
				case 3:
					return joaat("weapon_combatmg");
				
				case 4:
					return joaat("weapon_carbinerifle");
				
				default:
			}
			break;
	}
	return joaat("weapon_pistol");
}

int func_16(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
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

int func_17(var uParam0)
{
	if (unk_0x250A8F68F67CA19A(uParam0))
	{
		return !func_18(unk_0x1D1DAF7F94D5FE77(uParam0));
	}
	return 0;
}

int func_18(int iParam0)
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

int func_19()
{
	if ((!unk_0x250A8F68F67CA19A(Local_55.f_3) && func_35(Local_55.f_11)) && unk_0x250A8F68F67CA19A(Local_55.f_2))
	{
		if (func_17(Local_55.f_2))
		{
			if (Local_55.f_12 == 1)
			{
				if (func_12(&(Local_55.f_3), 22, Local_55.f_11, Local_55.f_24, Local_55.f_27, 1, 1, 1))
				{
					func_13(&(Local_55.f_3));
					func_20();
				}
			}
			else if (func_16(&(Local_55.f_3), Local_55.f_2, 22, Local_55.f_11, -1, 1, 1, 1))
			{
				func_13(&(Local_55.f_3));
				func_20();
			}
		}
	}
	if (!unk_0x250A8F68F67CA19A(Local_55.f_3))
	{
		return 0;
	}
	return 1;
}

void func_20()
{
	if (Local_55.f_12 == 0)
	{
		if (func_14())
		{
			unk_0x2D7E8CD6F4101CAB(unk_0xCFD52BB67CC0A98F(Local_55.f_3), unk_0x1D1DAF7F94D5FE77(Local_55.f_2), unk_0x3ECD26BA4F631EE2(7f, 18f), 786468);
		}
		else
		{
			unk_0x2D7E8CD6F4101CAB(unk_0xCFD52BB67CC0A98F(Local_55.f_3), unk_0x1D1DAF7F94D5FE77(Local_55.f_2), unk_0x3ECD26BA4F631EE2(7f, 18f), 786599);
		}
	}
	else if (Local_55.f_12 == 2)
	{
		func_132();
		unk_0xC65002CAA1212AF9(unk_0xCFD52BB67CC0A98F(Local_55.f_3), uLocal_202);
	}
}

int func_21()
{
	int iVar0;
	
	if (!unk_0x250A8F68F67CA19A(Local_55.f_2))
	{
		if (func_35(Local_55.f_10))
		{
			if (func_23(&(Local_55.f_16), &(Local_55.f_19)))
			{
				if (func_22(&(Local_55.f_2), Local_55.f_10, Local_55.f_16, Local_55.f_19, 1, 1, 1, 1, 0, 1))
				{
					unk_0xA8F22633ACC22189(unk_0x1D1DAF7F94D5FE77(Local_55.f_2), 0);
					unk_0x070978221B2E0085(unk_0x1D1DAF7F94D5FE77(Local_55.f_2), 1);
					unk_0x3729EADD1945A108(unk_0x1D1DAF7F94D5FE77(Local_55.f_2));
					unk_0x686D6CDC14C4BA6C(unk_0x1D1DAF7F94D5FE77(Local_55.f_2), 1, 1);
					unk_0xEA89E72C99125D9C(unk_0x1D1DAF7F94D5FE77(Local_55.f_2), 0);
					if (unk_0x9C1418C53B05D47B("Not_Allow_As_Saved_Veh", 3))
					{
						unk_0xEAE276D4D897C5F4(unk_0x1D1DAF7F94D5FE77(Local_55.f_2), "Not_Allow_As_Saved_Veh", 1);
					}
					if (unk_0x9C1418C53B05D47B("MPBitset", 3))
					{
						if (unk_0xCEC9D74C9FF51C8C(unk_0x1D1DAF7F94D5FE77(Local_55.f_2), "MPBitset"))
						{
							iVar0 = unk_0x8B4662A1D2DF932C(unk_0x1D1DAF7F94D5FE77(Local_55.f_2), "MPBitset");
						}
						unk_0xF3148AAF69AF9CBC(&iVar0, 10);
						unk_0xEAE276D4D897C5F4(unk_0x1D1DAF7F94D5FE77(Local_55.f_2), "MPBitset", iVar0);
					}
					if (Local_55.f_12 == 0)
					{
						if (unk_0x59D35AC211D17FAB(unk_0x1D1DAF7F94D5FE77(Local_55.f_2)) < Local_55.f_14)
						{
							Local_55.f_14 = unk_0x59D35AC211D17FAB(unk_0x1D1DAF7F94D5FE77(Local_55.f_2));
						}
					}
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

int func_22(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
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

bool func_23(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	struct<3> Var5;
	
	Var5 = { func_34(unk_0x1329891157A54C63()) };
	if (Local_55.f_12 == 1)
	{
		return 1;
	}
	if (!bVar0)
	{
		if (unk_0xB33B007FE6F38B89(&Var5, uParam0, &uVar2, 0f, 180f, 150f, 0, 1, 1))
		{
			unk_0x9F7E94EEF720E913(*uParam0, 1, uParam0, uParam1, &iVar1, 4, 1077936128, 0);
			if (iVar1 >= 1)
			{
				if (unk_0x0D6E79537424BACE(-1367.557f, -3220.598f, 12.9448f, Var5, 1) >= 600f && unk_0x0D6E79537424BACE(750f, -3200f, 6f, Var5, 1) >= 700f)
				{
					if (iLocal_207 <= 5)
					{
						if (func_24(*uParam0, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0))
						{
							bVar0 = true;
						}
					}
					else
					{
						Local_55.f_0 = 4;
					}
				}
			}
		}
	}
	if (!bVar0)
	{
		iLocal_206 += 4;
		if (iLocal_206 >= 80)
		{
			iLocal_206 = 20;
			iLocal_207++;
		}
	}
	return bVar0;
}

int func_24(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17)
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
		if (func_30(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404607++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_25(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404607++;
	return 1;
}

int func_25(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_163(unk_0x1329891157A54C63(), 1, 1))
		{
			if (!unk_0x29AFA2493D7C23D0())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x0D6E79537424BACE(func_34(unk_0x1329891157A54C63()), Param0, 1) <= (fVar2 + fParam3))
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
		if (func_163(iVar1, 1, 1))
		{
			if (!func_27(iVar1, 0) && unk_0x4F5BEB9A4097F301(unk_0x1329891157A54C63(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x1329891157A54C63()))
				{
					if ((func_26(iVar1) || !bParam10) && !Global_2414506[iVar1 /*255*/].f_253)
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
								if (unk_0x0D6E79537424BACE(func_34(iVar1), Param0, 1) <= (fVar2 + fParam3))
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
							if (unk_0x0D6E79537424BACE(func_34(iVar1), Param0, 1) <= (fVar2 + fParam3))
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

int func_26(int iParam0)
{
	if (unk_0x3C965174F280226D(unk_0xE495E987CB2BE7EF(iParam0)) || Global_2414506[iParam0 /*255*/].f_239)
	{
		return 1;
	}
	return 0;
}

bool func_27(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1329891157A54C63())
	{
		bVar0 = func_28(-1, 0) == 8;
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

int func_28(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_29();
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

int func_29()
{
	return Global_1312729;
}

int func_30(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x1329891157A54C63() != iVar1) || iParam8 == 0)
		{
			if (func_163(iVar1, bParam4, bParam5))
			{
				if (unk_0x4F5BEB9A4097F301(unk_0x1329891157A54C63(), iVar1))
				{
					if (!bParam7 || (!unk_0x5FEB513A4402FD59(unk_0xE495E987CB2BE7EF(iVar1)) && func_26(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()) != unk_0xCCFDB2B968281FE8(iVar1))) || unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()) == -1)
						{
							if (((unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()) == -1 && uParam9) && bParam6) && func_31(iVar1))
							{
							}
							else if (unk_0x86CCCD2FAE9D5E65(unk_0xE495E987CB2BE7EF(iVar1)))
							{
								if (unk_0x0D6E79537424BACE(func_34(iVar1), Param0, 1) < fParam3)
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

int func_31(int iParam0)
{
	if (func_33(unk_0x1329891157A54C63(), iParam0))
	{
		return 1;
	}
	Global_2450501 = { func_32(iParam0) };
	if (unk_0x5762EE910D467202(&Global_2450501))
	{
		return 1;
	}
	return 0;
}

struct<13> func_32(int iParam0)
{
	struct<13> Var0;
	
	unk_0x73231AB7B8BD1CD1(iParam0, &Var0, 13);
	return Var0;
}

int func_33(int iParam0, int iParam1)
{
	if (unk_0x80622F5ED5957337())
	{
		Global_2450501 = { func_32(iParam0) };
		Global_2450514 = { func_32(iParam1) };
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

Vector3 func_34(int iParam0)
{
	return unk_0xB6AE0DAE06D56288(unk_0xE495E987CB2BE7EF(iParam0), 0);
}

int func_35(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x32A12757CBF48A33(iParam0);
	return unk_0x33ACB874CECA2D4B(iParam0);
}

int func_36(var uParam0)
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

void func_37(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x1C7D9BFDF15A02B4())
		{
			func_9(uParam0, 0, 0);
		}
	}
}

void func_38()
{
	switch (Local_104[unk_0x519AAFF77CC141DF() /*3*/].f_2)
	{
		case 0:
			func_131();
			func_44();
			func_39();
			if (Local_55.f_42 > 0)
			{
				Local_104[unk_0x519AAFF77CC141DF() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_150();
			break;
	}
}

void func_39()
{
	int iVar0;
	
	func_40(Local_55.f_3, &uLocal_208, -1082130432, 0, 0, 0, 0, -1);
	iVar0 = 0;
	while (iVar0 < Local_55.f_14)
	{
		func_40(Local_55.f_4[iVar0], &(Local_216[iVar0 /*8*/]), -1082130432, 0, 0, 0, 0, -1);
		iVar0++;
	}
	if (unk_0x236D8AD7EE179F46(Local_55.f_1, 0))
	{
		if (!unk_0x236D8AD7EE179F46(Local_55.f_1, 1) && !unk_0x236D8AD7EE179F46(Local_104[unk_0x519AAFF77CC141DF() /*3*/].f_1, 3))
		{
			if (unk_0x250A8F68F67CA19A(Local_55.f_3))
			{
				if (unk_0x402F3F19221FF696(Local_55.f_3) || (!unk_0xB7CA313E589A2589(Local_55.f_3) && unk_0x1C7D9BFDF15A02B4()))
				{
					unk_0x506A601663C5417C(unk_0xCFD52BB67CC0A98F(Local_55.f_3), Global_1574217);
					unk_0xF3148AAF69AF9CBC(&(Local_104[unk_0x519AAFF77CC141DF() /*3*/].f_1), 3);
				}
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!unk_0x236D8AD7EE179F46(Local_55.f_1, (2 + iVar0)) && !unk_0x236D8AD7EE179F46(Local_104[unk_0x519AAFF77CC141DF() /*3*/].f_1, (4 + iVar0)))
			{
				if (unk_0x250A8F68F67CA19A(Local_55.f_4[iVar0]))
				{
					if (unk_0x402F3F19221FF696(Local_55.f_4[iVar0]) || (!unk_0xB7CA313E589A2589(Local_55.f_4[iVar0]) && unk_0x1C7D9BFDF15A02B4()))
					{
						unk_0x506A601663C5417C(unk_0xCFD52BB67CC0A98F(Local_55.f_4[iVar0]), Global_1574217);
						if (!unk_0x5FEB513A4402FD59(unk_0xCFD52BB67CC0A98F(Local_55.f_4[iVar0])))
						{
							unk_0xEC29A7F05A3AA03E(unk_0xCFD52BB67CC0A98F(Local_55.f_4[iVar0]), 100f, 0);
						}
						unk_0xF3148AAF69AF9CBC(&(Local_104[unk_0x519AAFF77CC141DF() /*3*/].f_1), (4 + iVar0));
					}
				}
			}
			iVar0++;
		}
	}
}

void func_40(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (unk_0x250A8F68F67CA19A(uParam0))
	{
		if (func_43())
		{
			Global_2422670 = unk_0x1329891157A54C63();
		}
		if (bParam3)
		{
			func_42(unk_0xCFD52BB67CC0A98F(uParam0), uParam1, 1, Global_2422670, iParam4, iParam5, fParam2, iParam6, iParam7);
		}
		else
		{
			func_42(unk_0xCFD52BB67CC0A98F(uParam0), uParam1, -1, Global_2422670, iParam4, iParam5, fParam2, iParam6, iParam7);
		}
	}
	else if (unk_0xFBACB273AA628CC5(*uParam1))
	{
		func_41(uParam1);
	}
}

void func_41(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xFBACB273AA628CC5(*uParam0))
	{
		unk_0x0A8175F24237A3D4(uParam0);
		bVar0 = true;
	}
	if (unk_0xFBACB273AA628CC5(uParam0->f_1))
	{
		unk_0x0A8175F24237A3D4(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x86CCCD2FAE9D5E65(uParam0->f_7))
	{
		if (!unk_0x5FEB513A4402FD59(uParam0->f_7))
		{
			if (unk_0xDBC7B8E3258E68CE(uParam0->f_7))
			{
				unk_0xCAE13BE6285A2562(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

int func_42(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, var uParam7, int iParam8)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0xEC537F0C0E8265EE();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x5FEB513A4402FD59(iParam0))
	{
		if (!unk_0xDBC7B8E3258E68CE(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0xCAE13BE6285A2562(iParam0, 1);
			}
			else
			{
				unk_0xB13DCB4C6FAAD238(iParam0, true, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x7E7BA9EA361385C5(iParam0, iParam2);
			unk_0x4C730676BE9DF375(iParam0, fParam6);
			if (unk_0xFBACB273AA628CC5(*uParam1))
			{
				unk_0xCB015C3E2E01CA1C(*uParam1, 7);
			}
		}
		unk_0x581873C8EB9FC73D(iParam0, uParam4);
		unk_0xE52713622089952D(iParam0, uParam5);
		*uParam1 = unk_0x8A4F3BFB34FAA5A8(iParam0);
		if (!unk_0x236D8AD7EE179F46(uParam1->f_6, 2))
		{
			if (unk_0xFBACB273AA628CC5(*uParam1))
			{
				if (!unk_0xB318FDA0D1ABDB20(uParam7))
				{
					unk_0xF8EE50B3E85D24B7("MCUSTBLIP");
					unk_0x6222A57F463E8EE7(uParam7);
					unk_0xE5C70EC67B67C35E(*uParam1);
				}
				unk_0xF3148AAF69AF9CBC(&(uParam1->f_6), 2);
			}
		}
		if (unk_0xE5AB05962FA1FF3F(iParam0, 0))
		{
			uParam1->f_1 = unk_0x18D49A1E7201D38E(iParam0);
			if (!unk_0x236D8AD7EE179F46(uParam1->f_6, 3))
			{
				if (unk_0xFBACB273AA628CC5(uParam1->f_1))
				{
					unk_0xCB015C3E2E01CA1C(uParam1->f_1, 7);
					unk_0xF3148AAF69AF9CBC(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0xFBACB273AA628CC5(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0xC69E84EBBD7166E6(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_43()
{
	return Global_1315867;
}

void func_44()
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (unk_0x250A8F68F67CA19A(Local_55.f_2))
	{
		if (!unk_0x236D8AD7EE179F46(Local_104[unk_0x519AAFF77CC141DF() /*3*/].f_1, 0))
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
					func_124(2092, 1, -1);
					func_121(68, 1, -1);
					func_77(0, unk_0x81873881071CD9FE(), "XPT_KAIE", -875716015, 1504756458, Global_262145.f_6434, 1, -1, 0, 0);
					func_73(Global_262145.f_6435, 1, 1, 1092616192);
					if (func_14())
					{
						func_60(86, "DSV_PASS0", 0, 0, -99);
					}
					else
					{
						func_60(86, "DSV_PASS1", 0, 0, -99);
					}
					if (func_59())
					{
						func_52(-1922554349, Global_262145.f_6435, &uVar1, 0, 0);
					}
					else
					{
						unk_0xFEF1B8BDBF81B2E4(Global_262145.f_6435, "AM_DESTROY_VEH", &uVar2);
					}
					Global_2438858 = Global_262145.f_6435;
					unk_0xF3148AAF69AF9CBC(&(Local_104[unk_0x519AAFF77CC141DF() /*3*/].f_1), 0);
				}
			}
			else
			{
				if (!unk_0x236D8AD7EE179F46(Local_55.f_1, 0))
				{
					if (!unk_0x236D8AD7EE179F46(Local_104[unk_0x519AAFF77CC141DF() /*3*/].f_1, 1))
					{
						if (func_51(unk_0x81873881071CD9FE(), unk_0x1D1DAF7F94D5FE77(Local_55.f_2), 1))
						{
							unk_0xF3148AAF69AF9CBC(&(Local_104[unk_0x519AAFF77CC141DF() /*3*/].f_1), 1);
						}
					}
					if (!unk_0x236D8AD7EE179F46(Local_104[unk_0x519AAFF77CC141DF() /*3*/].f_1, 2))
					{
						if (unk_0xBBEF8270CE27C0EE(unk_0x1D1DAF7F94D5FE77(Local_55.f_2), unk_0x81873881071CD9FE(), 1))
						{
							unk_0xF3148AAF69AF9CBC(&(Local_104[unk_0x519AAFF77CC141DF() /*3*/].f_1), 2);
						}
					}
				}
				if (func_163(unk_0x1329891157A54C63(), 1, 1) && func_51(unk_0x81873881071CD9FE(), unk_0x1D1DAF7F94D5FE77(Local_55.f_2), 0))
				{
					if (!unk_0x236D8AD7EE179F46(Global_2451473.f_4407, 1))
					{
						unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4407), 1);
					}
				}
				else if (unk_0x236D8AD7EE179F46(Global_2451473.f_4407, 1))
				{
					unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4407), 1);
				}
				func_45();
			}
		}
	}
}

void func_45()
{
	if (!unk_0x236D8AD7EE179F46(uLocal_201, 0))
	{
		if (func_50(27, -1) == 0)
		{
			if (func_163(unk_0x1329891157A54C63(), 1, 1))
			{
				if (func_51(unk_0x81873881071CD9FE(), unk_0x1D1DAF7F94D5FE77(Local_55.f_2), 0))
				{
					if (func_6(&uLocal_241, 300000, 0))
					{
						func_48(27, 1, -1);
						unk_0xF3148AAF69AF9CBC(&iLocal_201, 0);
					}
				}
				else if (func_47(&uLocal_241))
				{
					func_46(&uLocal_241);
				}
			}
			else if (func_47(&uLocal_241))
			{
				func_46(&uLocal_241);
			}
		}
		else
		{
			unk_0xF3148AAF69AF9CBC(&iLocal_201, 0);
		}
	}
}

void func_46(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_47(var uParam0)
{
	return uParam0->f_1;
}

void func_48(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = Global_2480209[iParam0 /*5*/][func_49(iParam2)];
	unk_0x20026873DF8DB72A(uVar0, iParam1, 1);
}

int func_49(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_29();
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

int func_50(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2480209[iParam0 /*5*/][func_49(iParam1)];
	if (unk_0xFD72912C9064BF1F(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_51(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x86CCCD2FAE9D5E65(iParam0) && !unk_0x930F8FBB8E9537CC(iParam0))
	{
		if (unk_0x86CCCD2FAE9D5E65(iParam1) && !unk_0x930F8FBB8E9537CC(iParam1))
		{
			if (unk_0x04C377C10639B842(iParam0, iParam1, iParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_52(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_59())
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
				func_53(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_53(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_53(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_59())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x077FF247AF837AEC(func_29()) || unk_0x2FABBA9E4D234344())
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
			*uParam0 = func_58(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
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
			func_57(1, iParam4);
			Global_2545974 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_54(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_54(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xF3148AAF69AF9CBC(&(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_121.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_55(iParam0);
	}
}

void func_55(int iParam0)
{
	bool bVar0;
	struct<69> Var1;
	
	bVar0 = false;
	if (!func_59())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_56(iParam0))
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

int func_56(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2545514[iParam0 /*69*/].f_5 == 1;
	}
	return 0;
}

void func_57(int iParam0, var uParam1)
{
	Global_2438972 = uParam1;
	Global_2438971 = iParam0;
}

int func_58(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2545514[iVar0 /*69*/].f_2 == 0)
		{
			if (!func_59())
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

int func_59()
{
	if (unk_0x913B1C01C1BA6C6F())
	{
		return 1;
	}
	return 0;
}

void func_60(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)
{
	func_61(1, iParam0, sParam1, sParam2, bParam3, iParam4);
}

void func_61(int iParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	var uVar0;
	bool bVar1;
	
	uVar0 = uParam1;
	bVar1 = false;
	func_62(iParam0, sParam2, uVar0, bVar1, sParam3, bParam4, iParam5);
}

void func_62(var uParam0, char* sParam1, var uParam2, bool bParam3, char* sParam4, bool bParam5, int iParam6)
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
	iVar0 = func_71();
	if (iVar0 == -1)
	{
		return;
	}
	func_70(iVar0);
	func_69(iVar0, uParam0);
	func_68(iVar0, uParam2, bParam3);
	func_67(iVar0, sParam1);
	if (unk_0xB318FDA0D1ABDB20(sParam4) && iParam6 == -99)
	{
		return;
	}
	func_66(iVar0);
	if (!unk_0xB318FDA0D1ABDB20(sParam4))
	{
		func_64(iVar0, sParam4, bParam5);
	}
	if (!iParam6 == -99)
	{
		func_63(iVar0, iParam6);
	}
}

void func_63(int iParam0, int iParam1)
{
	Global_1328429.f_59[iParam0 /*16*/].f_15 = iParam1;
}

void func_64(int iParam0, char* sParam1, bool bParam2)
{
	StringCopy(&(Global_1328429.f_59[iParam0 /*16*/].f_7), sParam1, 32);
	if (!bParam2)
	{
		return;
	}
	func_65(iParam0);
}

void func_65(int iParam0)
{
	unk_0xF3148AAF69AF9CBC(&(Global_1328429.f_59[iParam0 /*16*/]), 5);
}

void func_66(int iParam0)
{
	unk_0xF3148AAF69AF9CBC(&(Global_1328429.f_59[iParam0 /*16*/]), 4);
}

void func_67(int iParam0, char* sParam1)
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam1, 16);
	Global_1328429.f_59[iParam0 /*16*/].f_3 = { Var0 };
}

void func_68(int iParam0, var uParam1, bool bParam2)
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

void func_69(int iParam0, var uParam1)
{
	Global_1328429.f_59[iParam0 /*16*/].f_1 = uParam1;
}

void func_70(int iParam0)
{
	unk_0xF3148AAF69AF9CBC(&(Global_1328429.f_59[iParam0 /*16*/]), 0);
}

int func_71()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_72(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_72(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_1328429.f_59[iParam0 /*16*/], 0);
}

void func_73(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_74(iParam0, iParam1, iParam2, fParam3);
}

void func_74(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_75(iParam0, iParam1, iParam2, fParam3);
}

void func_75(int iParam0, int iParam1, int iParam2, float fParam3)
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
		func_76(iVar1, 0);
	}
}

void func_76(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

int func_77(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)
{
	return func_78(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9);
}

int func_78(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_88(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x86CCCD2FAE9D5E65(iParam1))
		{
			if (unk_0xCF0C46D719D5302C(iParam1))
			{
				uVar1 = unk_0x8F1CCE5AF629C4D3(iParam1);
				func_84(unk_0xC91EFAB304EB7DE6(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8);
			}
		}
	}
	else
	{
		func_79(iParam1, iVar0, sParam8);
	}
	return iVar0;
}

void func_79(int iParam0, int iParam1, char* sParam2)
{
	struct<3> Var0;
	
	Var0 = { func_82(iParam0, 1) };
	if (iParam0 == func_81(unk_0x81873881071CD9FE()))
	{
		func_80(1);
	}
	func_84(Var0, iParam1, 0, sParam2);
}

void func_80(int iParam0)
{
	Global_2422670.f_1321 = iParam0;
}

int func_81(var uParam0)
{
	return uParam0;
}

Vector3 func_82(int iParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	float fVar10;
	
	if (iParam0 == func_83(unk_0x81873881071CD9FE()) && unk_0x7FCE6803A3D23268(unk_0x60FC347BF9CAD1BD()) == 4)
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

int func_83(var uParam0)
{
	return uParam0;
}

void func_84(struct<3> Param0, int iParam3, int iParam4, char* sParam5)
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
			Global_2422670.f_740[iVar1 /*29*/].f_4 = func_87(Global_2422670.f_740[iVar1 /*29*/], &Global_1312317, &Global_1312318);
			Global_2422670.f_740[iVar1 /*29*/].f_7 = unk_0xD74C7D8D2E5E43D2();
			Global_2422670.f_740[iVar1 /*29*/].f_3 = iParam3;
			Global_2422670.f_740[iVar1 /*29*/].f_8 = iParam4;
			Global_2422670.f_740[iVar1 /*29*/].f_9 = func_86();
			Global_2422670.f_740[iVar1 /*29*/].f_10 = func_85();
			StringCopy(&(Global_2422670.f_740[iVar1 /*29*/].f_22), sParam5, 16);
		}
	}
}

int func_85()
{
	if (Global_2422670.f_1321)
	{
		Global_2422670.f_1321 = 0;
		return 1;
	}
	Global_2422670.f_1321 = 0;
	return 0;
}

var func_86()
{
	var uVar0;
	
	uVar0 = Global_2422670.f_1323;
	Global_2422670.f_1323 = 1;
	return uVar0;
}

float func_87(struct<3> Param0, var uParam3, var uParam4)
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

var func_88(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_89(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_89(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_120(unk_0x1329891157A54C63()) || func_119(unk_0x1329891157A54C63()))
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
	if (func_118(uParam2))
	{
	}
	if (func_117())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_115(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_114(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_112(0, &iVar1);
					break;
				
				case 3:
					func_112(1, &iVar1);
					break;
				
				case 1:
					func_109(&iVar1);
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
			func_124(1154, iVar1, -1);
			if (iParam1 == 0)
			{
				func_99((func_108(unk_0x1329891157A54C63()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xF1B1DC822A238E16(iVar1, iParam8, iParam9);
				if (Global_1585045[unk_0x1329891157A54C63() /*400*/].f_39.f_2 != -1)
				{
					func_124(1155, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_94(iVar1);
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
				func_90((func_92(unk_0x1329891157A54C63()) + iVar1));
			}
			else
			{
				func_90((func_92(unk_0x1329891157A54C63()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_90(int iParam0)
{
	if (func_117())
	{
		Global_1585045[unk_0x1329891157A54C63() /*400*/].f_192.f_5 = iParam0;
		func_91(joaat("mpply_globalxp"), iParam0);
	}
}

void func_91(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, uParam1, 1);
	}
}

int func_92(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_163(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x1329891157A54C63())
			{
				return func_93(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1585045[iParam0 /*400*/].f_192.f_5;
			}
		}
		else
		{
			return func_93(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_93(int iParam0)
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

void func_94(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_32(unk_0x1329891157A54C63()) };
	if (unk_0x80622F5ED5957337())
	{
		if (unk_0x464883E45616A088(&Var0))
		{
			iVar13 = func_97(func_98(&Var0));
			if (iVar13 == 0)
			{
				func_96(&Global_1343557, iParam0);
				func_95(joaat("mpply_crew_local_xp_0"), Global_1343557);
			}
			else if (iVar13 == 1)
			{
				func_96(&Global_1343558, iParam0);
				func_95(joaat("mpply_crew_local_xp_1"), Global_1343558);
			}
			else if (iVar13 == 2)
			{
				func_96(&Global_1343559, iParam0);
				func_95(joaat("mpply_crew_local_xp_2"), Global_1343559);
			}
			else if (iVar13 == 3)
			{
				func_96(&Global_1343560, iParam0);
				func_95(joaat("mpply_crew_local_xp_3"), Global_1343560);
			}
			else if (iVar13 == 4)
			{
				func_96(&Global_1343561, iParam0);
				func_95(joaat("mpply_crew_local_xp_4"), Global_1343561);
			}
		}
	}
}

void func_95(int iParam0, var uParam1)
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
			Global_1343552 = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1343554 = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1343554 = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1343555 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1343556 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1343557 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1343558 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1343559 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1343560 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1343561 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1343562 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1343563 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1343564 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1343565 = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1343566 = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1343567 = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1343568 = uParam1;
			break;
		
		default:
			break;
	}
}

void func_96(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_97(int iParam0)
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

int func_98(var uParam0)
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

void func_99(int iParam0, int iParam1, int iParam2)
{
	if (func_117())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7394 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1343672[func_49(-1)])
				{
					unk_0xF1B1DC822A238E16(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1343672[func_49(-1)])
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
		if (func_107(unk_0x1329891157A54C63()))
		{
			Global_1585045[unk_0x1329891157A54C63() /*400*/].f_192.f_1 = iParam0;
			Global_1585045[unk_0x1329891157A54C63() /*400*/].f_192.f_6 = func_105(iParam0, 1);
		}
		func_104(629, iParam0, -1, 1);
		func_103(630, func_105(iParam0, 1), -1, 1);
		Global_1343672[func_49(-1)] = iParam0;
		func_100(7, 0);
	}
}

void func_100(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_102(iParam0, iParam1))
	{
		iVar0 = func_101();
		Global_2436893[iVar0] = iParam0;
	}
}

int func_101()
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

int func_102(int iParam0, var uParam1)
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

void func_103(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2459767[iParam0 /*5*/][func_49(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, iParam1, iParam3);
	}
}

void func_104(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2459767[iParam0 /*5*/][func_49(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 777:
			Global_1343618[func_49(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1343624[func_49(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1343630[func_49(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1343636[func_49(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1343594[func_49(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1343600[func_49(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1343606[func_49(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1343612[func_49(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1343570[func_49(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1343576[func_49(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1343582[func_49(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1343588[func_49(iParam2)] = iParam1;
			break;
		
		case 747:
			Global_1343642[func_49(iParam2)] = iParam1;
			break;
		
		case 748:
			Global_1343648[func_49(iParam2)] = iParam1;
			break;
		
		case 749:
			Global_1343654[func_49(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1343660[func_49(iParam2)] = iParam1;
			break;
		
		case 1292:
			Global_1343666[func_49(iParam2)] = iParam1;
			break;
		
		case 629:
			Global_1343672[func_49(iParam2)] = iParam1;
			break;
		
		case 1267:
			Global_1343678[func_49(iParam2)] = iParam1;
			break;
		
		case 1864:
			Global_2480427[0 /*6*/][func_49(iParam2)] = iParam1;
			break;
		
		case 2255:
			Global_2480427[1 /*6*/][func_49(iParam2)] = iParam1;
			break;
		
		case 2899:
			Global_2480427[2 /*6*/][func_49(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1343684[func_49(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1343690[func_49(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1343696[func_49(iParam2)] = iParam1;
			break;
		
		case 1225:
			Global_1343702[func_49(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_105(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_106(iParam0, 0);
}

int func_106(int iParam0, int iParam1)
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

int func_107(int iParam0)
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

int func_108(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x1329891157A54C63())
			{
				return Global_1343672[func_49(-1)];
			}
			else if (func_107(iParam0))
			{
				return Global_1585045[iParam0 /*400*/].f_192.f_1;
			}
		}
	}
	else
	{
		return Global_1343672[func_49(-1)];
	}
	return 0;
}

void func_109(int iParam0)
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
				if (unk_0xCCFDB2B968281FE8(iVar5) == iVar1 || func_111(unk_0xCCFDB2B968281FE8(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x1329891157A54C63())
					{
						if (func_33(unk_0x1329891157A54C63(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_110(*iParam0, 100) * (10f * Global_262145.f_4208)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_110(*iParam0, 100) * (20f * Global_262145.f_4201)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_110(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_111(int iParam0, int iParam1, int iParam2)
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

void func_112(bool bParam0, int iParam1)
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
				if (func_163(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x1329891157A54C63())
					{
						iVar1++;
						if (func_33(unk_0x1329891157A54C63(), iVar4))
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
			if (func_163(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x1329891157A54C63())
				{
					if (func_113(unk_0x1329891157A54C63(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_33(unk_0x1329891157A54C63(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_110(*iParam1, 100) * (10f * Global_262145.f_4208)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_110(*iParam1, 100) * (20f * Global_262145.f_4201)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_113(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_34(iParam0), func_34(iParam1));
	return 0f;
}

int func_114(int iParam0)
{
	int iVar0;
	
	if (unk_0xF349F5727BA73619() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_110(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_115(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x013F97B9D88B92CA(iParam0) > func_108(unk_0x1329891157A54C63()))
		{
			iParam0 = -func_108(unk_0x1329891157A54C63());
		}
	}
	if (func_116(8000, 0, 0) > 0)
	{
		if (func_116(8000, 0, 0) < (iParam0 + func_108(unk_0x1329891157A54C63())))
		{
			iParam0 = (func_116(8000, 0, 0) - func_108(unk_0x1329891157A54C63()));
		}
	}
	return iParam0;
}

int func_116(int iParam0, bool bParam1, int iParam2)
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

int func_117()
{
	return 1;
}

int func_118(var uParam0)
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

bool func_119(int iParam0)
{
	return Global_2414506[iParam0 /*255*/].f_114 == 2;
}

bool func_120(int iParam0)
{
	return Global_2414506[iParam0 /*255*/].f_114 == 7;
}

void func_121(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_123(iParam0, func_49(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_122(iParam0, iVar0, iParam2);
}

void func_122(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = Global_2479763[iParam0 /*5*/][func_49(uParam2)];
	unk_0x123B783056E76C4E(iVar0, iParam1, 1);
}

int func_123(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2479763[iParam0 /*5*/][func_49(iParam1)];
	if (unk_0x85C45034BA638694(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_124(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_126(iParam0, func_49(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_125(iParam0))
	{
		func_103(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_104(iParam0, iVar0, iParam2, 1);
	}
}

int func_125(int iParam0)
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

int func_126(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2459767[iParam0 /*5*/][func_49(iParam1)];
	if (unk_0x85C45034BA638694(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_127(char* sParam0, int iParam1)
{
	unk_0x522099B37CAE9E12(sParam0);
	unk_0xC592EBAF1D879BDC(0, 0, 1, iParam1);
}

int func_128()
{
	if (func_129(17))
	{
		return 1;
	}
	if (func_129(0))
	{
		return 1;
	}
	return 0;
}

bool func_129(int iParam0)
{
	var uVar0;
	
	uVar0 = func_126(2452, -1, 0);
	return unk_0x236D8AD7EE179F46(uVar0, iParam0);
}

bool func_130(int iParam0)
{
	return unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(Global_2408782, unk_0xD74C7D8D2E5E43D2())) > iParam0;
}

void func_131()
{
	if (unk_0xFBACB273AA628CC5(uLocal_204))
	{
		if (func_128())
		{
			unk_0x885CCA7D7CA0FAE3(uLocal_204, 0);
		}
		else
		{
			unk_0x885CCA7D7CA0FAE3(uLocal_204, 4);
		}
	}
	else if (unk_0x335F574AD77E59CE(Local_55.f_2))
	{
		if (!unk_0x930F8FBB8E9537CC(unk_0x1D1DAF7F94D5FE77(Local_55.f_2)))
		{
			uLocal_204 = unk_0xE122DDAE9E94767B(unk_0x1D1DAF7F94D5FE77(Local_55.f_2));
			if (!unk_0xC5ABD699DDC9D5A0(Local_55.f_10))
			{
				unk_0x8F827BB0F6ED7AA8(uLocal_204, 225);
			}
			else
			{
				unk_0x8F827BB0F6ED7AA8(uLocal_204, 348);
			}
			unk_0x1B86E7A8766EA6B4(uLocal_204, 1);
			unk_0x4D2AF8274EB774A2(uLocal_204, 7000);
			unk_0xCB015C3E2E01CA1C(uLocal_204, 6);
			unk_0x2AB7C42FF2AF476D(uLocal_204, "DSV_BLIP");
			if (func_128())
			{
				unk_0x885CCA7D7CA0FAE3(uLocal_204, 0);
			}
		}
	}
}

void func_132()
{
	if (Local_55.f_12 == 2)
	{
		if (unk_0x335F574AD77E59CE(Local_55.f_2))
		{
			if (unk_0x7404950238A154C2(unk_0x1D1DAF7F94D5FE77(Local_55.f_2), 0))
			{
				unk_0xEAD984C2869B8B7C(&uLocal_202);
				unk_0xA4C909D4688EA08B(0, unk_0x1D1DAF7F94D5FE77(Local_55.f_2), Local_55.f_20, 7f, iLocal_205, 3f);
				unk_0x98046F3D16B9CF76(0, 0, 0);
				unk_0xD91194CE3D1E1D77(0, Local_55.f_24, 1f, -1, 1048576000, 0, Local_55.f_27);
				unk_0x56D9ED1541046AF6(uLocal_202);
			}
		}
	}
}

int func_133()
{
	return Local_55.f_0;
}

int func_134(int iParam0)
{
	return Local_104[iParam0 /*3*/];
}

bool func_135(int iParam0)
{
	return !func_136(iParam0);
}

int func_136(int iParam0)
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
			if (func_138(unk_0x1329891157A54C63(), 7))
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
			if (func_138(unk_0x1329891157A54C63(), 7))
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
			if (func_138(unk_0x1329891157A54C63(), 7))
			{
				return 0;
			}
			if (unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 0) || unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_137(4))
			{
				return 0;
			}
			if (func_138(unk_0x1329891157A54C63(), 7))
			{
				return 0;
			}
			if (unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 0) || unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_137(4))
			{
				return 0;
			}
			if (func_138(unk_0x1329891157A54C63(), 7))
			{
				return 0;
			}
			if (unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 0) || unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_137(4))
			{
				return 0;
			}
			if (func_138(unk_0x1329891157A54C63(), 7))
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
			if (func_137(4))
			{
				return 0;
			}
			if (func_138(unk_0x1329891157A54C63(), 7))
			{
				return 0;
			}
			if (unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 0) || unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 1))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_137(4))
			{
				return 0;
			}
			if (func_138(unk_0x1329891157A54C63(), 7))
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

int func_137(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_163(unk_0x6528B1497E4313F1(iVar0), 0, 1))
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

bool func_138(int iParam0, int iParam1)
{
	return unk_0x236D8AD7EE179F46(Global_2414506[iParam0 /*255*/].f_205, iParam1);
}

int func_139()
{
	bool bVar0;
	
	func_146(&bVar0);
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
	if (func_145())
	{
		return 1;
	}
	if (Global_2438897)
	{
		return 1;
	}
	if (func_144())
	{
		return 1;
	}
	if (func_143(157))
	{
		if (!func_142())
		{
			return 1;
		}
	}
	if (func_143(155))
	{
		return 1;
	}
	if (!unk_0x1F2C82EFDAD19C5D())
	{
		return 1;
	}
	if (func_140() != 0)
	{
		if (unk_0x968BF1C2C695B61A(func_140()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_140()
{
	switch (func_141())
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

int func_141()
{
	return Global_24946;
}

bool func_142()
{
	return Global_2428865.f_573;
}

int func_143(int iParam0)
{
	if (unk_0xE0A17F32C7C30546(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_144()
{
	return Global_2436988;
}

bool func_145()
{
	return Global_2428865.f_568;
}

void func_146(var uParam0)
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
					func_147(iVar0);
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

void func_147(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xDC8C46445C29336D(1, iParam0, &Var0, 3))
	{
		if (func_163(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xE495E987CB2BE7EF(Var0.f_1);
			if (unk_0x86CCCD2FAE9D5E65(uVar3))
			{
				if (unk_0xE5AB05962FA1FF3F(iVar3, 0))
				{
					uVar4 = unk_0xE68E6B44DABA9C05(iVar3, 0);
					if (unk_0x61B3150BF9145A92(uVar4, Var0.f_2) && unk_0xA360A5024482E898())
					{
						if (func_148(uVar4, &bVar5))
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

int func_148(int iParam0, var uParam1)
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

void func_149()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_150()
{
	if (unk_0xFBACB273AA628CC5(uLocal_204))
	{
		unk_0x0A8175F24237A3D4(&uLocal_204);
	}
	func_153();
	if (func_133() == 4 && Local_55.f_10 != 0)
	{
		unk_0xB5A91586385F755B(Local_55.f_10, 0);
	}
	unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4407), 1);
	func_152(17, 0);
	func_151();
}

void func_151()
{
	unk_0xC23A229F78DAD92A();
}

void func_152(int iParam0, bool bParam1)
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

void func_153()
{
	if (Local_55.f_12 == 2)
	{
		unk_0xA3561415EB3DA3A3(&uLocal_202);
	}
}

void func_154(struct<20> Param0)
{
	func_161(func_162(Param0.f_0), Param0);
	unk_0xAADD6AD1A7B6D4E2(4);
	unk_0xCD9A6588DBAF710A(1);
	func_160(0, -1, 0);
	unk_0x19F630B59442E836(&Local_55, 49);
	unk_0xCBCBE0D8DD0EF168(&Local_104, 97);
	if (!func_159())
	{
		func_150();
	}
	if (unk_0x1C6DF6AD69BE853E())
	{
		unk_0xE6E19E3BBABCBC24(0);
		if (unk_0x1C7D9BFDF15A02B4())
		{
			func_155();
			Local_55.f_8 = func_5();
		}
		func_152(17, 1);
		Local_104[unk_0x519AAFF77CC141DF() /*3*/] = 0;
	}
	else
	{
		func_150();
	}
}

void func_155()
{
	func_158();
	Local_55.f_12 = unk_0x2E0A9E3291F398E3(0, 3);
	if (Local_55.f_12 == 1 || Local_55.f_12 == 2)
	{
		Local_55.f_15 = unk_0x2E0A9E3291F398E3(0, 5);
		if (Local_55.f_12 == 1)
		{
			func_157(&(Local_55.f_16), &(Local_55.f_19));
		}
		else
		{
			func_157(&(Local_55.f_20), &(Local_55.f_23));
		}
		func_156();
	}
	Local_55.f_14 = unk_0x2E0A9E3291F398E3(0, 3);
	if (Global_262145.f_6438 >= 0 && Global_262145.f_6438 < 5)
	{
		Local_55.f_13 = Global_262145.f_6438;
	}
	else
	{
		Local_55.f_13 = unk_0x2E0A9E3291F398E3(0, 5);
	}
}

void func_156()
{
	switch (Local_55.f_15)
	{
		case 0:
			Local_55.f_24 = { -2195.782f, -420.2502f, 12.0819f };
			Local_55.f_27 = 117.3927f;
			Local_55.f_28[0 /*3*/] = { -2189.975f, -422.8502f, 12.0709f };
			Local_55.f_38[0] = 152.6699f;
			Local_55.f_28[1 /*3*/] = { -2184.031f, -400.948f, 12.2027f };
			Local_55.f_38[1] = 337.9892f;
			Local_55.f_28[2 /*3*/] = { -2175.282f, -426.3756f, 12.128f };
			Local_55.f_38[2] = 12.2947f;
			break;
		
		case 1:
			Local_55.f_24 = { -981.5774f, -1487.319f, 4.5867f };
			Local_55.f_27 = 300.0815f;
			Local_55.f_28[0 /*3*/] = { -977.8269f, -1494.568f, 4.5867f };
			Local_55.f_38[0] = 0.731f;
			Local_55.f_28[1 /*3*/] = { -977.7324f, -1491.717f, 4.5867f };
			Local_55.f_38[1] = 173.7717f;
			Local_55.f_28[2 /*3*/] = { -954.6693f, -1486.713f, 4.16f };
			Local_55.f_38[2] = 304.8721f;
			break;
		
		case 2:
			Local_55.f_24 = { 697.3923f, -1375.27f, 25.196f };
			Local_55.f_27 = 111.1953f;
			Local_55.f_28[0 /*3*/] = { 717.8624f, -1360.491f, 25.0461f };
			Local_55.f_38[0] = 55.1674f;
			Local_55.f_28[1 /*3*/] = { 703.9843f, -1361.094f, 24.6728f };
			Local_55.f_38[1] = 306.7133f;
			Local_55.f_28[2 /*3*/] = { 707.1707f, -1388.706f, 25.2759f };
			Local_55.f_38[2] = 204.5666f;
			break;
		
		case 3:
			Local_55.f_24 = { -258.5791f, 302.4799f, 91.0086f };
			Local_55.f_27 = 180.4109f;
			Local_55.f_28[0 /*3*/] = { -244.9193f, 299.3712f, 91.0424f };
			Local_55.f_38[0] = 43.0354f;
			Local_55.f_28[1 /*3*/] = { -248.7361f, 305.6155f, 91.1444f };
			Local_55.f_38[1] = 191.8736f;
			Local_55.f_28[2 /*3*/] = { -232.4524f, 299.4706f, 91.2088f };
			Local_55.f_38[2] = 199.8353f;
			break;
		
		case 4:
			Local_55.f_24 = { 862.7026f, 2875.148f, 56.9868f };
			Local_55.f_27 = 206.7217f;
			Local_55.f_28[0 /*3*/] = { 880.2893f, 2862.074f, 55.6697f };
			Local_55.f_38[0] = 191.0122f;
			Local_55.f_28[1 /*3*/] = { 865.2399f, 2853.536f, 56.2583f };
			Local_55.f_38[1] = 305.8056f;
			Local_55.f_28[2 /*3*/] = { 867.6559f, 2841.155f, 56.944f };
			Local_55.f_38[2] = 235.4465f;
			break;
	}
}

void func_157(var uParam0, var uParam1)
{
	switch (Local_55.f_15)
	{
		case 0:
			*uParam0 = { -2192.39f, -419.3334f, 12.0959f };
			*uParam1 = 71.2404f;
			break;
		
		case 1:
			*uParam0 = { -977.0366f, -1482.866f, 4.0099f };
			*uParam1 = 124.7807f;
			break;
		
		case 2:
			*uParam0 = { 702.5064f, -1370.477f, 25.0573f };
			*uParam1 = 279.9129f;
			break;
		
		case 3:
			*uParam0 = { -253.3582f, 299.4982f, 90.9592f };
			*uParam1 = 184.8169f;
			break;
		
		case 4:
			*uParam0 = { 868.8133f, 2868.439f, 55.9186f };
			*uParam1 = 200.5778f;
			break;
	}
}

void func_158()
{
	int iVar0;
	
	iVar0 = unk_0x2E0A9E3291F398E3(0, 8);
	if (Global_262145.f_6437 >= 0 && Global_262145.f_6437 < 8)
	{
		iVar0 = Global_262145.f_6437;
	}
	switch (iVar0)
	{
		case 0:
			if (func_14())
			{
				Local_55.f_10 = joaat("baller");
			}
			else
			{
				Local_55.f_10 = joaat("zion");
			}
			if (func_14())
			{
				Local_55.f_11 = joaat("g_m_y_ballaorig_01");
			}
			else
			{
				Local_55.f_11 = joaat("g_m_y_ballaeast_01");
			}
			break;
		
		case 1:
			if (func_14())
			{
				Local_55.f_10 = joaat("emperor");
			}
			else
			{
				Local_55.f_10 = joaat("cavalcade2");
			}
			if (func_14())
			{
				Local_55.f_11 = joaat("g_m_y_mexgoon_02");
			}
			else
			{
				Local_55.f_11 = joaat("g_f_y_vagos_01");
			}
			break;
		
		case 2:
			if (func_14())
			{
				Local_55.f_10 = joaat("daemon");
			}
			else
			{
				Local_55.f_10 = joaat("gburrito");
			}
			if (func_14())
			{
				Local_55.f_11 = joaat("g_m_y_lost_01");
			}
			else
			{
				Local_55.f_11 = joaat("g_f_y_lost_01");
			}
			break;
		
		case 3:
			if (func_14())
			{
				Local_55.f_10 = joaat("pcj");
			}
			else
			{
				Local_55.f_10 = joaat("bjxl");
			}
			if (func_14())
			{
				Local_55.f_11 = joaat("g_m_m_chigoon_02");
			}
			else
			{
				Local_55.f_11 = joaat("g_m_m_chigoon_01");
			}
			break;
		
		case 4:
			if (func_14())
			{
				Local_55.f_10 = joaat("rocoto");
			}
			else
			{
				Local_55.f_10 = joaat("emperor");
			}
			if (func_14())
			{
				Local_55.f_11 = joaat("g_m_m_armgoon_01");
			}
			else
			{
				Local_55.f_11 = joaat("g_m_y_armgoon_02");
			}
			break;
		
		case 5:
			if (func_14())
			{
				Local_55.f_10 = joaat("journey");
			}
			else
			{
				Local_55.f_10 = joaat("sandking");
			}
			if (func_14())
			{
				Local_55.f_11 = joaat("a_m_m_hillbilly_02");
			}
			else
			{
				Local_55.f_11 = joaat("a_m_m_hillbilly_01");
			}
			break;
		
		case 6:
			if (func_14())
			{
				Local_55.f_10 = joaat("habanero");
			}
			else
			{
				Local_55.f_10 = joaat("sanchez2");
			}
			if (func_14())
			{
				Local_55.f_11 = joaat("g_m_y_salvagoon_01");
			}
			else
			{
				Local_55.f_11 = joaat("g_m_y_salvagoon_02");
			}
			break;
		
		case 7:
			if (func_14())
			{
				Local_55.f_10 = joaat("buffalo2");
			}
			else
			{
				Local_55.f_10 = joaat("dubsta");
			}
			if (func_14())
			{
				Local_55.f_11 = joaat("g_m_y_strpunk_01");
			}
			else
			{
				Local_55.f_11 = joaat("g_m_y_strpunk_02");
			}
			break;
	}
}

int func_159()
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
		if (func_145())
		{
			return 0;
		}
		if (func_143(155))
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

int func_160(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x428E5E7D8B8CA428();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_151();
			}
			else
			{
				return 0;
			}
		}
		if (!func_43())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x1C6DF6AD69BE853E())
				{
					if (!bParam2)
					{
						func_151();
					}
					else
					{
						return 0;
					}
				}
				if (func_145())
				{
					if (!bParam2)
					{
						func_151();
					}
					else
					{
						return 0;
					}
				}
				if (func_143(155))
				{
					if (!bParam2)
					{
						func_151();
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
					func_151();
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
				func_151();
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
			func_151();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_161(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x1C6DF6AD69BE853E())
	{
		func_151();
	}
	unk_0xBA029707F4D8FFB0(uParam0, 0, Param1.f_16);
}

int func_162(int iParam0)
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

int func_163(int iParam0, bool bParam1, bool bParam2)
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

