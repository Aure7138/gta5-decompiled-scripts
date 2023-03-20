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
	struct<46> Local_55 = { 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, -808831384, 588969535, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_101 = 0;
	struct<3> Local_102[32];
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	int iLocal_203 = 0;
	int iLocal_204 = 0;
	int iLocal_205 = 0;
	int* iLocal_206 = NULL;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	struct<8> Local_214[3];
	var uLocal_239 = 0;
	var uLocal_240 = 0;
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
	iLocal_203 = 1076369579;
	iLocal_204 = 20;
	if (unk_0x10FAB35428CCC9D7() && func_161(unk_0x4F8644AF03D0E0D6(), 0, 1))
	{
		func_152(ScriptParam_0);
	}
	else
	{
		func_148();
	}
	while (true)
	{
		func_147();
		if (func_137() || func_133(18))
		{
			func_148();
		}
		if (unk_0xADA24309FE08DACF())
		{
			func_148();
		}
		switch (func_132(unk_0x57A3BDDAD8E5AA0A()))
		{
			case 0:
				if (func_131() == 1)
				{
					func_130();
					func_129();
					if (func_128(60000))
					{
						if (!unk_0xB50C0B0CEDC6CE84(Local_55.f_10))
						{
							func_127("DSV_HELP1", -1);
						}
						else
						{
							func_127("DSV_HELP2", -1);
						}
					}
					Local_102[unk_0x57A3BDDAD8E5AA0A() /*3*/] = 1;
				}
				else if (func_131() == 4)
				{
					Local_102[unk_0x57A3BDDAD8E5AA0A() /*3*/] = 3;
				}
				break;
			
			case 1:
				if (func_131() == 1)
				{
					func_38();
				}
				else if (func_131() == 4)
				{
					Local_102[unk_0x57A3BDDAD8E5AA0A() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_37(&(Local_55.f_43));
				if (func_36(&(Local_55.f_43)))
				{
					Local_102[unk_0x57A3BDDAD8E5AA0A() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_102[unk_0x57A3BDDAD8E5AA0A() /*3*/] = 4;
			
			case 4:
				func_148();
				break;
		}
		if (unk_0x83CD99A1E6061AB5())
		{
			switch (func_131())
			{
				case 0:
					if (func_10())
					{
						func_130();
						Local_55.f_0 = 1;
					}
					break;
				
				case 1:
					func_9();
					func_8();
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
	
	if (Local_55.f_42 == 0)
	{
		if (Local_55.f_0 != 4)
		{
			if (unk_0x5F9532F3B5CC2551(unk_0x367B936610BA360C(Local_55.f_2)))
			{
				if (func_6(&(Local_55.f_45), 3000, 0))
				{
					if (Local_55.f_8 == func_5())
					{
						Var0.f_2 = 115;
						func_3(Var0, func_4(1));
					}
					else
					{
						Var0.f_2 = 116;
						Var0.f_5 = Local_55.f_8;
						func_3(Var0, func_4(1));
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_3(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0x4F8644AF03D0E0D6();
	if (!iParam9 == 0)
	{
		unk_0x5AE99C571D5BBE5D(1, &Param0, 9, iParam9);
	}
}

int func_4(int iParam0)
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
			if (func_161(iVar2, 0, 0))
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
	func_7(uParam0, bParam2, 0);
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

void func_7(var uParam0, bool bParam1, bool bParam2)
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

void func_8()
{
	switch (Local_55.f_42)
	{
		case 0:
			break;
		
		case 1:
			break;
	}
}

void func_9()
{
	struct<9> Var0;
	int iVar9;
	
	if (Local_55.f_0 != 4)
	{
		iLocal_201 = 0;
		while (iLocal_201 < unk_0xA6C90FBC38E395EE())
		{
			if (unk_0x6FF8FF40B6357D45(unk_0x9EC6603812C24710(iLocal_201)))
			{
				iVar9 = unk_0x24FB80D107371267(unk_0x9EC6603812C24710(iLocal_201));
				if (unk_0xA921AA820C25702F(Local_102[iLocal_201 /*3*/].f_1, 0))
				{
					Var0.f_2 = 116;
					Var0.f_5 = iVar9;
					Local_55.f_8 = iVar9;
					func_3(Var0, func_4(1));
					Local_55.f_0 = 4;
					return;
				}
				if (!unk_0xA921AA820C25702F(Local_55.f_1, 0))
				{
					if (unk_0xA921AA820C25702F(Local_102[iLocal_201 /*3*/].f_1, 1))
					{
						unk_0x933D6A9EEC1BACD0(&(Local_55.f_1), 0);
					}
					if (unk_0xA921AA820C25702F(Local_102[iLocal_201 /*3*/].f_1, 2))
					{
						unk_0x933D6A9EEC1BACD0(&(Local_55.f_1), 0);
					}
				}
				else
				{
					if (!unk_0xA921AA820C25702F(Local_55.f_1, 1))
					{
						if (unk_0xA921AA820C25702F(Local_102[iLocal_201 /*3*/].f_1, 3))
						{
							unk_0x933D6A9EEC1BACD0(&(Local_55.f_1), 1);
						}
					}
					if (!unk_0xA921AA820C25702F(Local_55.f_1, 2))
					{
						if (unk_0xA921AA820C25702F(Local_102[iLocal_201 /*3*/].f_1, 4))
						{
							unk_0x933D6A9EEC1BACD0(&(Local_55.f_1), 2);
						}
					}
					if (!unk_0xA921AA820C25702F(Local_55.f_1, 3))
					{
						if (unk_0xA921AA820C25702F(Local_102[iLocal_201 /*3*/].f_1, 5))
						{
							unk_0x933D6A9EEC1BACD0(&(Local_55.f_1), 3);
						}
					}
					if (!unk_0xA921AA820C25702F(Local_55.f_1, 4))
					{
						if (unk_0xA921AA820C25702F(Local_102[iLocal_201 /*3*/].f_1, 6))
						{
							unk_0x933D6A9EEC1BACD0(&(Local_55.f_1), 4);
						}
					}
				}
			}
			iLocal_201++;
		}
	}
}

int func_10()
{
	if (func_35(Local_55.f_10) && func_35(Local_55.f_11))
	{
		if ((func_21() && func_19()) && func_11())
		{
			unk_0xE532F5D78798DAAB(Local_55.f_10);
			unk_0xE532F5D78798DAAB(Local_55.f_11);
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
		if ((!unk_0x38CE16C96BD11344(Local_55.f_4[iVar0]) && func_35(Local_55.f_11)) && unk_0x38CE16C96BD11344(Local_55.f_2))
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
		if (!unk_0x38CE16C96BD11344(Local_55.f_4[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_12(var uParam0, int iParam1, int iParam2, struct<3> Param3, float fParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	
	if (!unk_0xBCBF4FEF9FA5D781(1))
	{
		return 0;
	}
	iVar0 = unk_0xD49F9B0955C367DE(iParam1, iParam2, Param3, fParam6, bParam8, bParam7);
	*uParam0 = unk_0x0EDEC3C276198689(iVar0);
	if (unk_0x38CE16C96BD11344(*uParam0))
	{
		unk_0x3910051CCECDB00C(iVar0, bParam9);
		if (unk_0xC7827959479DCC78(iVar0))
		{
			if (bParam7)
			{
				unk_0xE05E81A888FA63C8(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

void func_13(var uParam0)
{
	int iVar0;
	
	unk_0xC80A74AC829DDD92(unk_0xBDCD95FC216A8B3E(*uParam0), Global_1574050);
	unk_0xC8A9481A01E63C28(unk_0xBDCD95FC216A8B3E(*uParam0), 0);
	unk_0x971D38760FBC02EF(unk_0xBDCD95FC216A8B3E(*uParam0), true);
	unk_0xB282DC6EBD803C75(unk_0xBDCD95FC216A8B3E(*uParam0), func_15(), 25000, true);
	iVar0 = unk_0xD53343AA4FB7DD28(0, 10);
	if (iVar0 == 0 || iVar0 == 1)
	{
		unk_0xC7622C0D36B2FDA8(unk_0xBDCD95FC216A8B3E(*uParam0), 0);
	}
	else if ((iVar0 == 2 || iVar0 == 3) || iVar0 == 4)
	{
		unk_0xC7622C0D36B2FDA8(unk_0xBDCD95FC216A8B3E(*uParam0), 2);
	}
	else
	{
		unk_0xC7622C0D36B2FDA8(unk_0xBDCD95FC216A8B3E(*uParam0), 1);
	}
	iVar0 = unk_0xD53343AA4FB7DD28(0, 10);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 2)
	{
		unk_0x9F7794730795E019(unk_0xBDCD95FC216A8B3E(*uParam0), 5, true);
	}
	else if (iVar0 == 3)
	{
		unk_0x9F7794730795E019(unk_0xBDCD95FC216A8B3E(*uParam0), 17, true);
	}
	else if ((iVar0 == 4 || iVar0 == 5) || iVar0 == 6)
	{
		unk_0x9F7794730795E019(unk_0xBDCD95FC216A8B3E(*uParam0), 13, true);
	}
	if (func_14())
	{
		unk_0x9F7794730795E019(unk_0xBDCD95FC216A8B3E(*uParam0), 20, true);
	}
	unk_0x9F7794730795E019(unk_0xBDCD95FC216A8B3E(*uParam0), 2, true);
	iVar0 = unk_0xD53343AA4FB7DD28(0, 4);
	if (iVar0 == 0)
	{
		unk_0x4D9CA1009AFBD057(unk_0xBDCD95FC216A8B3E(*uParam0), 2);
	}
	else if (iVar0 == 1)
	{
		unk_0x4D9CA1009AFBD057(unk_0xBDCD95FC216A8B3E(*uParam0), 1);
	}
	else if (iVar0 == 2)
	{
		unk_0x4D9CA1009AFBD057(unk_0xBDCD95FC216A8B3E(*uParam0), 3);
	}
	unk_0x49E50BDB8BA4DAB2(unk_0xBDCD95FC216A8B3E(*uParam0), true);
	unk_0xBC0ED94165A48BC2(unk_0xBDCD95FC216A8B3E(*uParam0), true);
	unk_0x1913FE4CBF41C463(unk_0xBDCD95FC216A8B3E(*uParam0), 29, true);
	unk_0x7A6535691B477C48(unk_0xBDCD95FC216A8B3E(*uParam0), 3);
	unk_0x6B76DC1F3AE6E6A3(unk_0xBDCD95FC216A8B3E(*uParam0), unk_0xF2DB717A73826179((200f * Global_262145.f_133)));
}

int func_14()
{
	if (unk_0xA921AA820C25702F(unk_0xD53343AA4FB7DD28(0, 65535), 0))
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
			switch (unk_0xD53343AA4FB7DD28(0, 5))
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
			switch (unk_0xD53343AA4FB7DD28(0, 5))
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
			switch (unk_0xD53343AA4FB7DD28(0, 5))
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
			switch (unk_0xD53343AA4FB7DD28(0, 5))
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
			switch (unk_0xD53343AA4FB7DD28(0, 5))
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
			switch (unk_0xD53343AA4FB7DD28(0, 5))
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
			switch (unk_0xD53343AA4FB7DD28(0, 5))
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
			switch (unk_0xD53343AA4FB7DD28(0, 5))
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
			switch (unk_0xD53343AA4FB7DD28(0, 5))
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

int func_16(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
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

int func_17(int iParam0)
{
	if (unk_0x38CE16C96BD11344(iParam0))
	{
		return !func_18(unk_0x367B936610BA360C(iParam0));
	}
	return 0;
}

int func_18(int iParam0)
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

int func_19()
{
	if ((!unk_0x38CE16C96BD11344(Local_55.f_3) && func_35(Local_55.f_11)) && unk_0x38CE16C96BD11344(Local_55.f_2))
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
	if (!unk_0x38CE16C96BD11344(Local_55.f_3))
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
			unk_0x480142959D337D00(unk_0xBDCD95FC216A8B3E(Local_55.f_3), unk_0x367B936610BA360C(Local_55.f_2), unk_0x313CE5879CEB6FCD(7f, 18f), 786468);
		}
		else
		{
			unk_0x480142959D337D00(unk_0xBDCD95FC216A8B3E(Local_55.f_3), unk_0x367B936610BA360C(Local_55.f_2), unk_0x313CE5879CEB6FCD(7f, 18f), 786599);
		}
	}
	else if (Local_55.f_12 == 2)
	{
		func_130();
		unk_0x5ABA3986D90D8A3B(unk_0xBDCD95FC216A8B3E(Local_55.f_3), iLocal_200);
	}
}

int func_21()
{
	if (!unk_0x38CE16C96BD11344(Local_55.f_2))
	{
		if (func_35(Local_55.f_10))
		{
			if (func_23(&(Local_55.f_16), &(Local_55.f_19)))
			{
				if (func_22(&(Local_55.f_2), Local_55.f_10, Local_55.f_16, Local_55.f_19, 1, 1, 1, 1, 0, 1))
				{
					unk_0x428CA6DBD1094446(unk_0x367B936610BA360C(Local_55.f_2), false);
					unk_0x1718DE8E3F2823CA(unk_0x367B936610BA360C(Local_55.f_2), true);
					unk_0x710311ADF0E20730(unk_0x367B936610BA360C(Local_55.f_2));
					unk_0x2497C4717C8B881E(unk_0x367B936610BA360C(Local_55.f_2), 1, 1);
					unk_0x3910051CCECDB00C(unk_0x367B936610BA360C(Local_55.f_2), false);
					if (unk_0x4F14F9F870D6FBC8("Not_Allow_As_Saved_Veh", 3))
					{
						unk_0x0CE3AA5E1CA19E10(unk_0x367B936610BA360C(Local_55.f_2), "Not_Allow_As_Saved_Veh", 1);
					}
					if (Local_55.f_12 == 0)
					{
						if (unk_0xA7C4F2C6E744A550(unk_0x367B936610BA360C(Local_55.f_2)) < Local_55.f_14)
						{
							Local_55.f_14 = unk_0xA7C4F2C6E744A550(unk_0x367B936610BA360C(Local_55.f_2));
						}
					}
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

int func_22(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
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

bool func_23(int iParam0, float* fParam1)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	struct<3> Var5;
	
	Var5 = { func_34(unk_0x4F8644AF03D0E0D6()) };
	if (Local_55.f_12 == 1)
	{
		return 1;
	}
	if (!bVar0)
	{
		if (unk_0xA4822F1CF23F4810(&Var5, iParam0, &uVar2, 0f, 180f, 150f, 0, 1, 1))
		{
			unk_0x80CA6A8B6C094CC4(*iParam0, 1, iParam0, fParam1, &iVar1, 4, 3f, 0f);
			if (iVar1 >= 1)
			{
				if (unk_0xF1B760881820C952(-1367.557f, -3220.598f, 12.9448f, Var5, true) >= 600f && unk_0xF1B760881820C952(750f, -3200f, 6f, Var5, true) >= 700f)
				{
					if (iLocal_205 <= 5)
					{
						if (func_24(*iParam0, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0))
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
		iLocal_204 += 4;
		if (iLocal_204 >= 80)
		{
			iLocal_204 = 20;
			iLocal_205++;
		}
	}
	return bVar0;
}

int func_24(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17)
{
	Global_2404546 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x61E1DD6125A3EEE6(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x083961498679DC9F(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x083961498679DC9F(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x397DC58FF00298D1(Param0, fParam5, false))
		{
			return 0;
		}
	}
	Global_2404546++;
	if (bParam13)
	{
		if (unk_0x50CAD495A460B305(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404546++;
	if (fParam14 > 0f)
	{
		if (func_30(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404546++;
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
	Global_2404546++;
	return 1;
}

int func_25(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_161(unk_0x4F8644AF03D0E0D6(), 1, 1))
		{
			if (!unk_0xB16FCE9DDC7BA182())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0xF1B760881820C952(func_34(unk_0x4F8644AF03D0E0D6()), Param0, true) <= (fVar2 + fParam3))
				{
					if (unk_0xE33D59DA70B58FDF(Param0, fParam3))
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
		if (func_161(iVar1, 1, 1))
		{
			if (!func_27(iVar1, 0) && unk_0x9DE986FC9A87C474(unk_0x4F8644AF03D0E0D6(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x4F8644AF03D0E0D6()))
				{
					if ((func_26(iVar1) || !bParam10) && !Global_2413868[iVar1 /*253*/].f_252)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x37039302F4E0A008(iVar1) == -1)
							{
								if (unk_0x37039302F4E0A008(iVar1) == unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x37039302F4E0A008(iVar1) != unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()))) || unk_0x37039302F4E0A008(iVar1) == -1)
							{
								if (unk_0xF1B760881820C952(func_34(iVar1), Param0, true) <= (fVar2 + fParam3))
								{
									if (unk_0xDC3A310219E5DA62(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x37039302F4E0A008(iVar1) != iParam8 || unk_0x37039302F4E0A008(iVar1) == -1)
						{
							if (unk_0xF1B760881820C952(func_34(iVar1), Param0, true) <= (fVar2 + fParam3))
							{
								if (unk_0xDC3A310219E5DA62(iVar1, Param0, fParam3))
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
	if (unk_0xD796CB5BA8F20E32(unk_0x43A66C31C68491C0(iParam0)) || Global_2413868[iParam0 /*253*/].f_239)
	{
		return 1;
	}
	return 0;
}

bool func_27(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x4F8644AF03D0E0D6())
	{
		bVar0 = func_28(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582048[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xB8DFD30D6973E135(iParam0))
		{
			bVar0 = unk_0x37039302F4E0A008(iParam0) == 8;
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
	if (Global_1315875[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_29()
{
	return Global_1312736;
}

int func_30(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x4F8644AF03D0E0D6() != iVar1) || iParam8 == 0)
		{
			if (func_161(iVar1, bParam4, bParam5))
			{
				if (unk_0x9DE986FC9A87C474(unk_0x4F8644AF03D0E0D6(), iVar1))
				{
					if (!bParam7 || (!unk_0x84A2DD9AC37C35C1(unk_0x43A66C31C68491C0(iVar1)) && func_26(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()) != unk_0x37039302F4E0A008(iVar1))) || unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()) == -1)
						{
							if (((unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()) == -1 && uParam9) && bParam6) && func_31(iVar1))
							{
							}
							else if (unk_0x7239B21A38F536BA(unk_0x43A66C31C68491C0(iVar1)))
							{
								if (unk_0xF1B760881820C952(func_34(iVar1), Param0, true) < fParam3)
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
	if (func_33(unk_0x4F8644AF03D0E0D6(), iParam0))
	{
		return 1;
	}
	Global_2445237 = { func_32(iParam0) };
	if (unk_0x1A24A179F9B31654(&Global_2445237))
	{
		return 1;
	}
	return 0;
}

struct<13> func_32(int iParam0)
{
	struct<13> Var0;
	
	unk_0x388EB2B86C73B6B3(iParam0, &Var0, 13);
	return Var0;
}

int func_33(int iParam0, int iParam1)
{
	if (unk_0x579CCED0265D4896())
	{
		Global_2445237 = { func_32(iParam0) };
		Global_2445250 = { func_32(iParam1) };
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

Vector3 func_34(int iParam0)
{
	return unk_0x3FEF770D40960D5A(unk_0x43A66C31C68491C0(iParam0), false);
}

bool func_35(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x963D27A58DF860AC(iParam0);
	return unk_0x98A4EB5D89A0C952(iParam0);
}

int func_36(var uParam0)
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

void func_37(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x83CD99A1E6061AB5())
		{
			func_7(uParam0, 0, 0);
		}
	}
}

void func_38()
{
	switch (Local_102[unk_0x57A3BDDAD8E5AA0A() /*3*/].f_2)
	{
		case 0:
			func_129();
			func_44();
			func_39();
			if (Local_55.f_42 > 0)
			{
				Local_102[unk_0x57A3BDDAD8E5AA0A() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_148();
			break;
	}
}

void func_39()
{
	int iVar0;
	
	func_40(Local_55.f_3, &iLocal_206, -1082130432, 0, 0, 0, 0);
	iVar0 = 0;
	while (iVar0 < Local_55.f_14)
	{
		func_40(Local_55.f_4[iVar0], &(Local_214[iVar0 /*8*/]), -1082130432, 0, 0, 0, 0);
		iVar0++;
	}
	if (unk_0xA921AA820C25702F(Local_55.f_1, 0))
	{
		if (!unk_0xA921AA820C25702F(Local_55.f_1, 1) && !unk_0xA921AA820C25702F(Local_102[unk_0x57A3BDDAD8E5AA0A() /*3*/].f_1, 3))
		{
			if (unk_0x38CE16C96BD11344(Local_55.f_3))
			{
				if (unk_0x4D36070FE0215186(Local_55.f_3) || (!unk_0xA1607996431332DF(Local_55.f_3) && unk_0x83CD99A1E6061AB5()))
				{
					unk_0xC80A74AC829DDD92(unk_0xBDCD95FC216A8B3E(Local_55.f_3), Global_1574051);
					unk_0x933D6A9EEC1BACD0(&(Local_102[unk_0x57A3BDDAD8E5AA0A() /*3*/].f_1), 3);
				}
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!unk_0xA921AA820C25702F(Local_55.f_1, (2 + iVar0)) && !unk_0xA921AA820C25702F(Local_102[unk_0x57A3BDDAD8E5AA0A() /*3*/].f_1, (4 + iVar0)))
			{
				if (unk_0x38CE16C96BD11344(Local_55.f_4[iVar0]))
				{
					if (unk_0x4D36070FE0215186(Local_55.f_4[iVar0]) || (!unk_0xA1607996431332DF(Local_55.f_4[iVar0]) && unk_0x83CD99A1E6061AB5()))
					{
						unk_0xC80A74AC829DDD92(unk_0xBDCD95FC216A8B3E(Local_55.f_4[iVar0]), Global_1574051);
						if (!unk_0x84A2DD9AC37C35C1(unk_0xBDCD95FC216A8B3E(Local_55.f_4[iVar0])))
						{
							unk_0x7BF835BB9E2698C8(unk_0xBDCD95FC216A8B3E(Local_55.f_4[iVar0]), 100f, 0);
						}
						unk_0x933D6A9EEC1BACD0(&(Local_102[unk_0x57A3BDDAD8E5AA0A() /*3*/].f_1), (4 + iVar0));
					}
				}
			}
			iVar0++;
		}
	}
}

void func_40(int iParam0, int* iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, char* sParam6)
{
	if (unk_0x38CE16C96BD11344(iParam0))
	{
		if (func_43())
		{
			Global_2421967 = unk_0x4F8644AF03D0E0D6();
		}
		if (bParam3)
		{
			func_42(unk_0xBDCD95FC216A8B3E(iParam0), iParam1, 1, Global_2421967, bParam4, bParam5, fParam2, sParam6);
		}
		else
		{
			func_42(unk_0xBDCD95FC216A8B3E(iParam0), iParam1, -1, Global_2421967, bParam4, bParam5, fParam2, sParam6);
		}
	}
	else if (unk_0xA6DB27D19ECBB7DA(*iParam1))
	{
		func_41(iParam1);
	}
}

void func_41(int* iParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xA6DB27D19ECBB7DA(*iParam0))
	{
		unk_0x86A652570E5F25DD(iParam0);
		bVar0 = true;
	}
	if (unk_0xA6DB27D19ECBB7DA(iParam0->f_1))
	{
		unk_0x86A652570E5F25DD(&(iParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x7239B21A38F536BA(iParam0->f_7))
	{
		if (!unk_0x84A2DD9AC37C35C1(iParam0->f_7))
		{
			if (unk_0x15B8ECF844EE67ED(iParam0->f_7))
			{
				unk_0xD30C50DF888D58B5(iParam0->f_7, false);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

int func_42(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, char* sParam7)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0xA5EDC40EF369B48D();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x84A2DD9AC37C35C1(iParam0))
	{
		if (!unk_0x15B8ECF844EE67ED(iParam0))
		{
			unk_0xD30C50DF888D58B5(iParam0, true);
			uParam1->f_7 = iParam0;
			unk_0xE52B8E7F85D39A08(iParam0, iParam2);
			unk_0x97C65887D4B37FA9(iParam0, fParam6);
			if (unk_0xA6DB27D19ECBB7DA(*uParam1))
			{
				unk_0xAE9FC9EF6A9FAC79(*uParam1, 7);
			}
		}
		unk_0x0C4BBF625CA98C4E(iParam0, bParam4);
		unk_0x3EED80DFF7325CAA(iParam0, bParam5);
		*uParam1 = unk_0x7CD934010E115C2C(iParam0);
		if (!unk_0xA921AA820C25702F(uParam1->f_6, 2))
		{
			if (unk_0xA6DB27D19ECBB7DA(*uParam1))
			{
				if (!unk_0xCA042B6957743895(sParam7))
				{
					unk_0xF9113A30DE5C6670("MCUSTBLIP");
					unk_0x6C188BE134E074AA(sParam7);
					unk_0xBC38B49BCB83BC9B(*uParam1);
				}
				unk_0x933D6A9EEC1BACD0(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x997ABD671D25CA0B(iParam0, false))
		{
			uParam1->f_1 = unk_0x56176892826A4FE8(iParam0);
			if (!unk_0xA921AA820C25702F(uParam1->f_6, 3))
			{
				if (unk_0xA6DB27D19ECBB7DA(uParam1->f_1))
				{
					unk_0xAE9FC9EF6A9FAC79(uParam1->f_1, 7);
					unk_0x933D6A9EEC1BACD0(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0xA6DB27D19ECBB7DA(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0xE80492A9AC099A93(&(uParam1->f_6), 3);
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
	return Global_1315872;
}

void func_44()
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (unk_0x38CE16C96BD11344(Local_55.f_2))
	{
		if (!unk_0xA921AA820C25702F(Local_102[unk_0x57A3BDDAD8E5AA0A() /*3*/].f_1, 0))
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
					func_124(2086, 1, -1);
					func_121(68, 1, -1);
					func_77(0, unk_0xD80958FC74E988A6(), "XPT_KAIE", -875716015, 1504756458, Global_262145.f_6385, 1, -1, 0, 0);
					func_73(Global_262145.f_6386, 1, 1, 1092616192);
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
						func_52(-1922554349, Global_262145.f_6386, &uVar1, 0, 0);
					}
					else
					{
						unk_0xFB6DB092FBAE29E6(Global_262145.f_6386, "AM_DESTROY_VEH", &uVar2);
					}
					unk_0x933D6A9EEC1BACD0(&(Local_102[unk_0x57A3BDDAD8E5AA0A() /*3*/].f_1), 0);
				}
			}
			else
			{
				if (!unk_0xA921AA820C25702F(Local_55.f_1, 0))
				{
					if (!unk_0xA921AA820C25702F(Local_102[unk_0x57A3BDDAD8E5AA0A() /*3*/].f_1, 1))
					{
						if (func_51(unk_0xD80958FC74E988A6(), unk_0x367B936610BA360C(Local_55.f_2), 1))
						{
							unk_0x933D6A9EEC1BACD0(&(Local_102[unk_0x57A3BDDAD8E5AA0A() /*3*/].f_1), 1);
						}
					}
					if (!unk_0xA921AA820C25702F(Local_102[unk_0x57A3BDDAD8E5AA0A() /*3*/].f_1, 2))
					{
						if (unk_0xC86D67D52A707CF8(unk_0x367B936610BA360C(Local_55.f_2), unk_0xD80958FC74E988A6(), true))
						{
							unk_0x933D6A9EEC1BACD0(&(Local_102[unk_0x57A3BDDAD8E5AA0A() /*3*/].f_1), 2);
						}
					}
				}
				if (func_161(unk_0x4F8644AF03D0E0D6(), 1, 1) && func_51(unk_0xD80958FC74E988A6(), unk_0x367B936610BA360C(Local_55.f_2), 0))
				{
					if (!unk_0xA921AA820C25702F(Global_2446208.f_4394, 1))
					{
						unk_0x933D6A9EEC1BACD0(&(Global_2446208.f_4394), 1);
					}
				}
				else if (unk_0xA921AA820C25702F(Global_2446208.f_4394, 1))
				{
					unk_0xE80492A9AC099A93(&(Global_2446208.f_4394), 1);
				}
				func_45();
			}
		}
	}
}

void func_45()
{
	if (!unk_0xA921AA820C25702F(iLocal_199, 0))
	{
		if (func_50(27, -1) == 0)
		{
			if (func_161(unk_0x4F8644AF03D0E0D6(), 1, 1))
			{
				if (func_51(unk_0xD80958FC74E988A6(), unk_0x367B936610BA360C(Local_55.f_2), 0))
				{
					if (func_6(&uLocal_239, 300000, 0))
					{
						func_48(27, 1, -1);
						unk_0x933D6A9EEC1BACD0(&iLocal_199, 0);
					}
				}
				else if (func_47(&uLocal_239))
				{
					func_46(&uLocal_239);
				}
			}
			else if (func_47(&uLocal_239))
			{
				func_46(&uLocal_239);
			}
		}
		else
		{
			unk_0x933D6A9EEC1BACD0(&iLocal_199, 0);
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

void func_48(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2474727[iParam0 /*6*/][func_49(iParam2)];
	unk_0x4B33C4243DE0C432(iVar0, bParam1, true);
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

int func_50(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2474727[iParam0 /*6*/][func_49(iParam1)];
	if (unk_0x11B5E6D2AE73F48E(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_51(int iParam0, int iParam1, bool bParam2)
{
	if (unk_0x7239B21A38F536BA(iParam0) && !unk_0x5F9532F3B5CC2551(iParam0))
	{
		if (unk_0x7239B21A38F536BA(iParam1) && !unk_0x5F9532F3B5CC2551(iParam1))
		{
			if (unk_0xA3EE4A07279BB9DB(iParam0, iParam1, bParam2))
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
		if (!unk_0xB24F0944DA203D9E(func_29()) || unk_0x810E8431C0614BF9())
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
			*uParam0 = func_58(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
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
			func_57(1, iParam4);
			Global_2539468 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_54(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_54(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x933D6A9EEC1BACD0(&(Global_2413868[unk_0x4F8644AF03D0E0D6() /*253*/].f_121.f_71), 0);
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
	struct<68> Var1;
	
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

int func_56(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2539058[iParam0 /*68*/].f_5 == 1;
	}
	return 0;
}

void func_57(int iParam0, int iParam1)
{
	Global_2436787 = iParam1;
	Global_2436786 = iParam0;
}

int func_58(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2539058[iVar0 /*68*/].f_2 == 0)
		{
			if (!func_59())
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

int func_59()
{
	if (unk_0x48AF36444B965238())
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
	iVar0 = func_71();
	if (iVar0 == -1)
	{
		return;
	}
	func_70(iVar0);
	func_69(iVar0, uParam0);
	func_68(iVar0, uParam2, bParam3);
	func_67(iVar0, sParam1);
	if (unk_0xCA042B6957743895(sParam4) && iParam6 == -99)
	{
		return;
	}
	func_66(iVar0);
	if (!unk_0xCA042B6957743895(sParam4))
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
	Global_1321257.f_59[iParam0 /*16*/].f_15 = iParam1;
}

void func_64(int iParam0, char* sParam1, bool bParam2)
{
	StringCopy(&(Global_1321257.f_59[iParam0 /*16*/].f_7), sParam1, 32);
	if (!bParam2)
	{
		return;
	}
	func_65(iParam0);
}

void func_65(int iParam0)
{
	unk_0x933D6A9EEC1BACD0(&(Global_1321257.f_59[iParam0 /*16*/]), 5);
}

void func_66(int iParam0)
{
	unk_0x933D6A9EEC1BACD0(&(Global_1321257.f_59[iParam0 /*16*/]), 4);
}

void func_67(int iParam0, char* sParam1)
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam1, 16);
	Global_1321257.f_59[iParam0 /*16*/].f_3 = { Var0 };
}

void func_68(int iParam0, var uParam1, bool bParam2)
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

void func_69(int iParam0, var uParam1)
{
	Global_1321257.f_59[iParam0 /*16*/].f_1 = uParam1;
}

void func_70(int iParam0)
{
	unk_0x933D6A9EEC1BACD0(&(Global_1321257.f_59[iParam0 /*16*/]), 0);
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
	return unk_0xA921AA820C25702F(Global_1321257.f_59[iParam0 /*16*/], 0);
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
	Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_180.f_4 = iVar1;
	Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_180.f_3 = (Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_180.f_3 + iVar1);
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

int func_78(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_88(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x7239B21A38F536BA(iParam1))
		{
			if (unk_0x524AC5ECEA15343E(iParam1))
			{
				iVar1 = unk_0x04A2A40C73395041(iParam1);
				func_84(unk_0x17C07FC640E86B4E(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8);
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
	if (iParam0 == func_81(unk_0xD80958FC74E988A6()))
	{
		func_80(1);
	}
	func_84(Var0, iParam1, 0, sParam2);
}

void func_80(int iParam0)
{
	Global_2421967.f_1306 = iParam0;
}

int func_81(int iParam0)
{
	return iParam0;
}

Vector3 func_82(int iParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	float fVar10;
	
	if (iParam0 == func_83(unk_0xD80958FC74E988A6()) && unk_0xEE778F8C7E1142E2(unk_0x19CAFA3C87F7C2FF()) == 4)
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

int func_83(int iParam0)
{
	return iParam0;
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
			Global_2421967.f_725[iVar1 /*29*/].f_4 = func_87(Global_2421967.f_725[iVar1 /*29*/], &Global_1312317, &Global_1312318);
			Global_2421967.f_725[iVar1 /*29*/].f_7 = unk_0x7A5487FE9FAA6B48();
			Global_2421967.f_725[iVar1 /*29*/].f_3 = iParam3;
			Global_2421967.f_725[iVar1 /*29*/].f_8 = iParam4;
			Global_2421967.f_725[iVar1 /*29*/].f_9 = func_86();
			Global_2421967.f_725[iVar1 /*29*/].f_10 = func_85();
			StringCopy(&(Global_2421967.f_725[iVar1 /*29*/].f_22), sParam5, 16);
		}
	}
}

int func_85()
{
	if (Global_2421967.f_1306)
	{
		Global_2421967.f_1306 = 0;
		return 1;
	}
	Global_2421967.f_1306 = 0;
	return 0;
}

var func_86()
{
	var uVar0;
	
	uVar0 = Global_2421967.f_1308;
	Global_2421967.f_1308 = 1;
	return uVar0;
}

float func_87(struct<3> Param0, var uParam3, var uParam4)
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

var func_88(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_89(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_89(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_120(unk_0x4F8644AF03D0E0D6()) || func_119(unk_0x4F8644AF03D0E0D6()))
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
	if (func_118(sParam2))
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
			func_124(1150, iVar1, -1);
			if (iParam1 == 0)
			{
				func_99((func_108(unk_0x4F8644AF03D0E0D6()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x46F917F6B4128FE4(iVar1, iParam8, iParam9);
				if (Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_31.f_2 != -1)
				{
					func_124(1151, iVar1, -1);
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
				func_90((func_92(unk_0x4F8644AF03D0E0D6()) + iVar1));
			}
			else
			{
				func_90((func_92(unk_0x4F8644AF03D0E0D6()) + iParam6));
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
		Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_180.f_5 = iParam0;
		func_91(joaat("mpply_globalxp"), iParam0);
	}
}

void func_91(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, iParam1, true);
	}
}

int func_92(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_161(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x4F8644AF03D0E0D6())
			{
				return func_93(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1582048[iParam0 /*324*/].f_180.f_5;
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
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_94(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_32(unk_0x4F8644AF03D0E0D6()) };
	if (unk_0x579CCED0265D4896())
	{
		if (unk_0xB124B57F571D8F18(&Var0))
		{
			iVar13 = func_97(func_98(&Var0));
			if (iVar13 == 0)
			{
				func_96(&Global_1333715, iParam0);
				func_95(joaat("mpply_crew_local_xp_0"), Global_1333715);
			}
			else if (iVar13 == 1)
			{
				func_96(&Global_1333716, iParam0);
				func_95(joaat("mpply_crew_local_xp_1"), Global_1333716);
			}
			else if (iVar13 == 2)
			{
				func_96(&Global_1333717, iParam0);
				func_95(joaat("mpply_crew_local_xp_2"), Global_1333717);
			}
			else if (iVar13 == 3)
			{
				func_96(&Global_1333718, iParam0);
				func_95(joaat("mpply_crew_local_xp_3"), Global_1333718);
			}
			else if (iVar13 == 4)
			{
				func_96(&Global_1333719, iParam0);
				func_95(joaat("mpply_crew_local_xp_4"), Global_1333719);
			}
		}
	}
}

void func_95(int iParam0, int iParam1)
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

void func_96(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_97(int iParam0)
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

int func_98(var* uParam0)
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

void func_99(int iParam0, int iParam1, int iParam2)
{
	if (func_117())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7228 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1333830[func_49(-1)])
				{
					unk_0x46F917F6B4128FE4(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1333830[func_49(-1)])
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
		if (func_107(unk_0x4F8644AF03D0E0D6()))
		{
			Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_180.f_1 = iParam0;
			Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_180.f_6 = func_105(iParam0, 1);
		}
		func_104(625, iParam0, -1, 1);
		func_103(626, func_105(iParam0, 1), -1, 1);
		Global_1333830[func_49(-1)] = iParam0;
		func_100(7, 0);
	}
}

void func_100(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_102(iParam0, iParam1))
	{
		iVar0 = func_101();
		Global_2434883[iVar0] = iParam0;
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
		if (Global_2434883[iVar1] == 0)
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

void func_103(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = Global_2454188[iParam0 /*6*/][func_49(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, iParam1, bParam3);
	}
}

void func_104(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = Global_2454188[iParam0 /*6*/][func_49(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 773:
			Global_1333776[func_49(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1333782[func_49(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1333788[func_49(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1333794[func_49(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1333752[func_49(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1333758[func_49(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1333764[func_49(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1333770[func_49(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1333728[func_49(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1333734[func_49(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1333740[func_49(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1333746[func_49(iParam2)] = iParam1;
			break;
		
		case 743:
			Global_1333800[func_49(iParam2)] = iParam1;
			break;
		
		case 744:
			Global_1333806[func_49(iParam2)] = iParam1;
			break;
		
		case 745:
			Global_1333812[func_49(iParam2)] = iParam1;
			break;
		
		case 746:
			Global_1333818[func_49(iParam2)] = iParam1;
			break;
		
		case 1288:
			Global_1333824[func_49(iParam2)] = iParam1;
			break;
		
		case 625:
			Global_1333830[func_49(iParam2)] = iParam1;
			break;
		
		case 1263:
			Global_1333836[func_49(iParam2)] = iParam1;
			break;
		
		case 1860:
			Global_2474967[0 /*6*/][func_49(iParam2)] = iParam1;
			break;
		
		case 2249:
			Global_2474967[1 /*6*/][func_49(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1333842[func_49(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1333848[func_49(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1333854[func_49(iParam2)] = iParam1;
			break;
		
		case 1221:
			Global_1333860[func_49(iParam2)] = iParam1;
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

int func_107(int iParam0)
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

int func_108(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x4F8644AF03D0E0D6())
			{
				return Global_1333830[func_49(-1)];
			}
			else if (func_107(iParam0))
			{
				return Global_1582048[iParam0 /*324*/].f_180.f_1;
			}
		}
	}
	else
	{
		return Global_1333830[func_49(-1)];
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
				if (unk_0x37039302F4E0A008(iVar5) == iVar1 || func_111(unk_0x37039302F4E0A008(iVar5), iVar1))
				{
					iVar2++;
					if (iVar5 != unk_0x4F8644AF03D0E0D6())
					{
						if (func_33(unk_0x4F8644AF03D0E0D6(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_110(*iParam0, 100) * (10f * Global_262145.f_4192)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_110(*iParam0, 100) * (20f * Global_262145.f_4185)));
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

int func_111(int iParam0, int iParam1)
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
		while (iVar0 < unk_0xA6C90FBC38E395EE())
		{
			iVar3 = iVar0;
			if (unk_0x6FF8FF40B6357D45(iVar3))
			{
				iVar4 = unk_0x24FB80D107371267(iVar3);
				if (func_161(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x4F8644AF03D0E0D6())
					{
						iVar1++;
						if (func_33(unk_0x4F8644AF03D0E0D6(), iVar4))
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
			if (func_161(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x4F8644AF03D0E0D6())
				{
					if (func_113(unk_0x4F8644AF03D0E0D6(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_33(unk_0x4F8644AF03D0E0D6(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_110(*iParam1, 100) * (10f * Global_262145.f_4192)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_110(*iParam1, 100) * (20f * Global_262145.f_4185)));
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
	
	if (unk_0xBB41AFBBBC0A0287() != 3)
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
		if (unk_0xF0D31AD191A74F87(iParam0) > func_108(unk_0x4F8644AF03D0E0D6()))
		{
			iParam0 = -func_108(unk_0x4F8644AF03D0E0D6());
		}
	}
	if (func_116(8000, 0, 0) > 0)
	{
		if (func_116(8000, 0, 0) < (iParam0 + func_108(unk_0x4F8644AF03D0E0D6())))
		{
			iParam0 = (func_116(8000, 0, 0) - func_108(unk_0x4F8644AF03D0E0D6()));
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
	return Global_270026[iParam0];
}

int func_117()
{
	return 1;
}

int func_118(char* sParam0)
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

bool func_119(int iParam0)
{
	return Global_2413868[iParam0 /*253*/].f_114 == 2;
}

bool func_120(int iParam0)
{
	return Global_2413868[iParam0 /*253*/].f_114 == 7;
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
	
	iVar0 = Global_2474198[iParam0 /*6*/][func_49(uParam2)];
	unk_0xB3271D7AB655B441(iVar0, iParam1, true);
}

int func_123(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2474198[iParam0 /*6*/][func_49(iParam1)];
	if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
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

int func_126(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2454188[iParam0 /*6*/][func_49(uParam1)];
	if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_127(char* sParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(sParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

bool func_128(int iParam0)
{
	return unk_0xF0D31AD191A74F87(unk_0xA2C6FC031D46FFF0(Global_2408441, unk_0x7A5487FE9FAA6B48())) > iParam0;
}

void func_129()
{
	if (!unk_0xA6DB27D19ECBB7DA(iLocal_202))
	{
		if (unk_0x18A47D074708FD68(Local_55.f_2))
		{
			if (!unk_0x5F9532F3B5CC2551(unk_0x367B936610BA360C(Local_55.f_2)))
			{
				iLocal_202 = unk_0x5CDE92C702A8FCE7(unk_0x367B936610BA360C(Local_55.f_2));
				if (!unk_0xB50C0B0CEDC6CE84(Local_55.f_10))
				{
					unk_0xDF735600A4696DAF(iLocal_202, 225);
				}
				else
				{
					unk_0xDF735600A4696DAF(iLocal_202, 348);
				}
				unk_0x03D7FB09E75D6B7E(iLocal_202, 1);
				unk_0xD3CD6FD297AE87CC(iLocal_202, 7000);
				unk_0xAE9FC9EF6A9FAC79(iLocal_202, 6);
				unk_0xEAA0FFE120D92784(iLocal_202, "DSV_BLIP");
			}
		}
	}
}

void func_130()
{
	if (Local_55.f_12 == 2)
	{
		if (unk_0x18A47D074708FD68(Local_55.f_2))
		{
			if (unk_0x4C241E39B23DF959(unk_0x367B936610BA360C(Local_55.f_2), false))
			{
				unk_0xE8854A4326B9E12B(&iLocal_200);
				unk_0x158BB33F920D360C(0, unk_0x367B936610BA360C(Local_55.f_2), Local_55.f_20, 7f, iLocal_203, 3f);
				unk_0x504D54DF3F6F2247(0, 0, 0);
				unk_0x15D3A79D4E44B913(0, Local_55.f_24, 1f, -1, 0.25f, false, Local_55.f_27);
				unk_0x39E72BC99E6360CB(iLocal_200);
			}
		}
	}
}

int func_131()
{
	return Local_55.f_0;
}

int func_132(int iParam0)
{
	return Local_102[iParam0 /*3*/];
}

bool func_133(int iParam0)
{
	return !func_134(iParam0);
}

int func_134(int iParam0)
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
			if (func_136(unk_0x4F8644AF03D0E0D6(), 7))
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
			if (func_136(unk_0x4F8644AF03D0E0D6(), 7))
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
			if (func_136(unk_0x4F8644AF03D0E0D6(), 7))
			{
				return 0;
			}
			if (unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_235.f_4, 0) || unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_135(4))
			{
				return 0;
			}
			if (func_136(unk_0x4F8644AF03D0E0D6(), 7))
			{
				return 0;
			}
			if (unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_235.f_4, 0) || unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 18:
			if (func_135(4))
			{
				return 0;
			}
			if (func_136(unk_0x4F8644AF03D0E0D6(), 7))
			{
				return 0;
			}
			if (unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_235.f_4, 0) || unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_135(4))
			{
				return 0;
			}
			if (func_136(unk_0x4F8644AF03D0E0D6(), 7))
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

int func_135(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_161(unk_0x41BD2A6B006AF756(iVar0), 0, 1))
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

bool func_136(int iParam0, int iParam1)
{
	return unk_0xA921AA820C25702F(Global_2413868[iParam0 /*253*/].f_205, iParam1);
}

int func_137()
{
	bool bVar0;
	
	func_144(&bVar0);
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
	if (func_143())
	{
		return 1;
	}
	if (Global_2436713)
	{
		return 1;
	}
	if (func_142())
	{
		return 1;
	}
	if (func_141(157))
	{
		if (!func_140())
		{
			return 1;
		}
	}
	if (func_141(155))
	{
		return 1;
	}
	if (!unk_0x1077788E268557C2())
	{
		return 1;
	}
	if (func_138() != 0)
	{
		if (unk_0x2C83A9DA6BFFC4F9(func_138()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_138()
{
	switch (func_139())
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

int func_139()
{
	return Global_24444;
}

bool func_140()
{
	return Global_2427935.f_570;
}

int func_141(int iParam0)
{
	if (unk_0x936E6168A9BCEDB5(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_142()
{
	return Global_2434971;
}

bool func_143()
{
	return Global_2427935.f_565;
}

void func_144(var uParam0)
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
					func_145(iVar0);
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

void func_145(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (unk_0x2902843FCD2B2D79(1, iParam0, &Var0, 3))
	{
		if (func_161(Var0.f_1, 1, 1))
		{
			iVar3 = unk_0x43A66C31C68491C0(Var0.f_1);
			if (unk_0x7239B21A38F536BA(iVar3))
			{
				if (unk_0x997ABD671D25CA0B(iVar3, false))
				{
					iVar4 = unk_0x9A9112A0FE9A4713(iVar3, false);
					if (unk_0x46E571A0E20D01F1(iVar4, Var0.f_2) && unk_0x2910669969E9535E())
					{
						if (func_146(iVar4, &bVar5))
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

int func_146(int iParam0, var uParam1)
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

void func_147()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_148()
{
	if (unk_0xA6DB27D19ECBB7DA(iLocal_202))
	{
		unk_0x86A652570E5F25DD(&iLocal_202);
	}
	func_151();
	if (func_131() == 4 && Local_55.f_10 != 0)
	{
		unk_0x0FC2D89AC25A5814(Local_55.f_10, false);
	}
	unk_0xE80492A9AC099A93(&(Global_2446208.f_4394), 1);
	func_150(18, 0);
	func_149();
}

void func_149()
{
	unk_0x1090044AD1DA76FA();
}

void func_150(int iParam0, bool bParam1)
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

void func_151()
{
	if (Local_55.f_12 == 2)
	{
		unk_0x3841422E9C488D8C(&iLocal_200);
	}
}

void func_152(struct<20> Param0)
{
	func_159(func_160(Param0.f_0), Param0);
	unk_0xB60FEBA45333D36F(4);
	unk_0x76B02E21ED27A469(1);
	func_158(0, -1, 0);
	unk_0x3E9B2F01C50DF595(&Local_55, 47);
	unk_0x3364AA97340CA215(&Local_102, 97);
	if (!func_157())
	{
		func_148();
	}
	if (unk_0x10FAB35428CCC9D7())
	{
		unk_0xAA391C728106F7AF(false);
		if (unk_0x83CD99A1E6061AB5())
		{
			func_153();
			Local_55.f_8 = func_5();
		}
		func_150(18, 1);
		Local_102[unk_0x57A3BDDAD8E5AA0A() /*3*/] = 0;
	}
	else
	{
		func_148();
	}
}

void func_153()
{
	func_156();
	Local_55.f_12 = unk_0xD53343AA4FB7DD28(0, 3);
	if (Local_55.f_12 == 1 || Local_55.f_12 == 2)
	{
		Local_55.f_15 = unk_0xD53343AA4FB7DD28(0, 5);
		if (Local_55.f_12 == 1)
		{
			func_155(&(Local_55.f_16), &(Local_55.f_19));
		}
		else
		{
			func_155(&(Local_55.f_20), &(Local_55.f_23));
		}
		func_154();
	}
	Local_55.f_14 = unk_0xD53343AA4FB7DD28(0, 3);
	if (Global_262145.f_6389 >= 0 && Global_262145.f_6389 < 5)
	{
		Local_55.f_13 = Global_262145.f_6389;
	}
	else
	{
		Local_55.f_13 = unk_0xD53343AA4FB7DD28(0, 5);
	}
}

void func_154()
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

void func_155(var uParam0, var uParam1)
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

void func_156()
{
	int iVar0;
	
	iVar0 = unk_0xD53343AA4FB7DD28(0, 8);
	if (Global_262145.f_6388 >= 0 && Global_262145.f_6388 < 8)
	{
		iVar0 = Global_262145.f_6388;
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

int func_157()
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
		if (func_143())
		{
			return 0;
		}
		if (func_141(155))
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

int func_158(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x57D158647A6BFABF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_149();
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
				if (!unk_0x10FAB35428CCC9D7())
				{
					if (!bParam2)
					{
						func_149();
					}
					else
					{
						return 0;
					}
				}
				if (func_143())
				{
					if (!bParam2)
					{
						func_149();
					}
					else
					{
						return 0;
					}
				}
				if (func_141(155))
				{
					if (!bParam2)
					{
						func_149();
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
					func_149();
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
				func_149();
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
			func_149();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_159(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		func_149();
	}
	unk_0x1CA59E306ECB80A5(iParam0, false, Param1.f_16);
}

int func_160(int iParam0)
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

int func_161(int iParam0, bool bParam1, bool bParam2)
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

