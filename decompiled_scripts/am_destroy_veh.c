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
	var uLocal_200 = 0;
	int iLocal_201 = 0;
	var uLocal_202 = 0;
	int iLocal_203 = 0;
	int iLocal_204 = 0;
	int iLocal_205 = 0;
	var uLocal_206 = 0;
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
	if (unk_0x4B69FB3A5B09A1BA() && func_161(unk_0xCFC72E446B0B3AD7(), 0, 1))
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
		if (func_137() || func_133(17))
		{
			func_148();
		}
		if (unk_0x4F0283431254A343())
		{
			func_148();
		}
		switch (func_132(unk_0x9725084D4DFE8258()))
		{
			case 0:
				if (func_131() == 1)
				{
					func_130();
					func_129();
					if (func_128(60000))
					{
						if (!unk_0x8D759C5DD707B910(Local_55.f_10))
						{
							func_127("DSV_HELP1", -1);
						}
						else
						{
							func_127("DSV_HELP2", -1);
						}
					}
					Local_102[unk_0x9725084D4DFE8258() /*3*/] = 1;
				}
				else if (func_131() == 4)
				{
					Local_102[unk_0x9725084D4DFE8258() /*3*/] = 3;
				}
				break;
			
			case 1:
				if (func_131() == 1)
				{
					func_38();
				}
				else if (func_131() == 4)
				{
					Local_102[unk_0x9725084D4DFE8258() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_37(&(Local_55.f_43));
				if (func_36(&(Local_55.f_43)))
				{
					Local_102[unk_0x9725084D4DFE8258() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_102[unk_0x9725084D4DFE8258() /*3*/] = 4;
			
			case 4:
				func_148();
				break;
		}
		if (unk_0x7EF90A4891193127())
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
	struct<14> Var0;
	
	if (Local_55.f_42 == 0)
	{
		if (Local_55.f_0 != 4)
		{
			if (unk_0x0BA451447C3B1A8D(unk_0x1349078BE884A8E7(Local_55.f_2)))
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
						Var0.f_10 = Local_55.f_8;
						func_3(Var0, func_4(1));
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_3(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0xCFC72E446B0B3AD7();
	if (!iParam14 == 0)
	{
		unk_0x0EA5A5773B9C09AE(1, &Param0, 14, iParam14);
	}
}

int func_4(int iParam0)
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
			if (func_161(iVar2, 0, 0))
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

void func_7(var uParam0, bool bParam1, bool bParam2)
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
	struct<14> Var0;
	var uVar14;
	
	if (Local_55.f_0 != 4)
	{
		iLocal_201 = 0;
		while (iLocal_201 < unk_0x0C20B275AC51DD95())
		{
			if (unk_0xD3AFE733DFF53CF5(unk_0x7DB5D4F6F4C81C82(iLocal_201)))
			{
				uVar14 = unk_0xA6118988A879C889(unk_0x7DB5D4F6F4C81C82(iLocal_201));
				if (unk_0x94E72F17611BCD3C(Local_102[iLocal_201 /*3*/].f_1, 0))
				{
					Var0.f_2 = 116;
					Var0.f_10 = uVar14;
					Local_55.f_8 = uVar14;
					func_3(Var0, func_4(1));
					Local_55.f_0 = 4;
					return;
				}
				if (!unk_0x94E72F17611BCD3C(Local_55.f_1, 0))
				{
					if (unk_0x94E72F17611BCD3C(Local_102[iLocal_201 /*3*/].f_1, 1))
					{
						unk_0xEDB9A377CD8B7F03(&(Local_55.f_1), 0);
					}
					if (unk_0x94E72F17611BCD3C(Local_102[iLocal_201 /*3*/].f_1, 2))
					{
						unk_0xEDB9A377CD8B7F03(&(Local_55.f_1), 0);
					}
				}
				else
				{
					if (!unk_0x94E72F17611BCD3C(Local_55.f_1, 1))
					{
						if (unk_0x94E72F17611BCD3C(Local_102[iLocal_201 /*3*/].f_1, 3))
						{
							unk_0xEDB9A377CD8B7F03(&(Local_55.f_1), 1);
						}
					}
					if (!unk_0x94E72F17611BCD3C(Local_55.f_1, 2))
					{
						if (unk_0x94E72F17611BCD3C(Local_102[iLocal_201 /*3*/].f_1, 4))
						{
							unk_0xEDB9A377CD8B7F03(&(Local_55.f_1), 2);
						}
					}
					if (!unk_0x94E72F17611BCD3C(Local_55.f_1, 3))
					{
						if (unk_0x94E72F17611BCD3C(Local_102[iLocal_201 /*3*/].f_1, 5))
						{
							unk_0xEDB9A377CD8B7F03(&(Local_55.f_1), 3);
						}
					}
					if (!unk_0x94E72F17611BCD3C(Local_55.f_1, 4))
					{
						if (unk_0x94E72F17611BCD3C(Local_102[iLocal_201 /*3*/].f_1, 6))
						{
							unk_0xEDB9A377CD8B7F03(&(Local_55.f_1), 4);
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
			unk_0x0880E86251A44B7F(Local_55.f_10);
			unk_0x0880E86251A44B7F(Local_55.f_11);
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
		if ((!unk_0x53C457DC61CBEBCA(Local_55.f_4[iVar0]) && func_35(Local_55.f_11)) && unk_0x53C457DC61CBEBCA(Local_55.f_2))
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
		if (!unk_0x53C457DC61CBEBCA(Local_55.f_4[iVar0]))
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
	
	if (!unk_0x42A900287C0ACC6F(1))
	{
		return 0;
	}
	iVar0 = unk_0xA00B5D954AD320BF(iParam1, uParam2, Param3, uParam6, iParam8, bParam7);
	*uParam0 = unk_0xFC2961E139989126(iVar0);
	if (unk_0x53C457DC61CBEBCA(*uParam0))
	{
		unk_0x185D18DA9BC98757(iVar0, iParam9);
		if (unk_0xCD22EDB73BA42551(iVar0))
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

void func_13(var uParam0)
{
	int iVar0;
	
	unk_0xA50AD6983D49A772(unk_0x3CD0885BEAA1EC4B(*uParam0), Global_1574054);
	unk_0xFF59B84B0722F68E(unk_0x3CD0885BEAA1EC4B(*uParam0), 0);
	unk_0xE8105B7E3908547D(unk_0x3CD0885BEAA1EC4B(*uParam0), 1);
	unk_0x3CD9EE39C1A990B1(unk_0x3CD0885BEAA1EC4B(*uParam0), func_15(), 25000, 1);
	iVar0 = unk_0x073B65E051D2F03E(0, 10);
	if (iVar0 == 0 || iVar0 == 1)
	{
		unk_0x55CB9E8ED151C9E9(unk_0x3CD0885BEAA1EC4B(*uParam0), 0);
	}
	else if ((iVar0 == 2 || iVar0 == 3) || iVar0 == 4)
	{
		unk_0x55CB9E8ED151C9E9(unk_0x3CD0885BEAA1EC4B(*uParam0), 2);
	}
	else
	{
		unk_0x55CB9E8ED151C9E9(unk_0x3CD0885BEAA1EC4B(*uParam0), 1);
	}
	iVar0 = unk_0x073B65E051D2F03E(0, 10);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 2)
	{
		unk_0x64277E0EB39C1162(unk_0x3CD0885BEAA1EC4B(*uParam0), 5, 1);
	}
	else if (iVar0 == 3)
	{
		unk_0x64277E0EB39C1162(unk_0x3CD0885BEAA1EC4B(*uParam0), 17, 1);
	}
	else if ((iVar0 == 4 || iVar0 == 5) || iVar0 == 6)
	{
		unk_0x64277E0EB39C1162(unk_0x3CD0885BEAA1EC4B(*uParam0), 13, 1);
	}
	if (func_14())
	{
		unk_0x64277E0EB39C1162(unk_0x3CD0885BEAA1EC4B(*uParam0), 20, 1);
	}
	unk_0x64277E0EB39C1162(unk_0x3CD0885BEAA1EC4B(*uParam0), 2, 1);
	iVar0 = unk_0x073B65E051D2F03E(0, 4);
	if (iVar0 == 0)
	{
		unk_0x9A43E575C1997EF8(unk_0x3CD0885BEAA1EC4B(*uParam0), 2);
	}
	else if (iVar0 == 1)
	{
		unk_0x9A43E575C1997EF8(unk_0x3CD0885BEAA1EC4B(*uParam0), 1);
	}
	else if (iVar0 == 2)
	{
		unk_0x9A43E575C1997EF8(unk_0x3CD0885BEAA1EC4B(*uParam0), 3);
	}
	unk_0x8BC1CFFF229697A8(unk_0x3CD0885BEAA1EC4B(*uParam0), 1);
	unk_0xC5E1B2288C6D4382(unk_0x3CD0885BEAA1EC4B(*uParam0), 1);
	unk_0x9001FCB58244C11D(unk_0x3CD0885BEAA1EC4B(*uParam0), 29, 1);
	unk_0x5204CFB0BCA6456D(unk_0x3CD0885BEAA1EC4B(*uParam0), 3);
	unk_0x5C66176FC9E6724C(unk_0x3CD0885BEAA1EC4B(*uParam0), unk_0xF2DB717A73826179((200f * Global_262145.f_136)));
}

int func_14()
{
	if (unk_0x94E72F17611BCD3C(unk_0x073B65E051D2F03E(0, 65535), 0))
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
			switch (unk_0x073B65E051D2F03E(0, 5))
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
			switch (unk_0x073B65E051D2F03E(0, 5))
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
			switch (unk_0x073B65E051D2F03E(0, 5))
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
			switch (unk_0x073B65E051D2F03E(0, 5))
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
			switch (unk_0x073B65E051D2F03E(0, 5))
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
			switch (unk_0x073B65E051D2F03E(0, 5))
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
			switch (unk_0x073B65E051D2F03E(0, 5))
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
			switch (unk_0x073B65E051D2F03E(0, 5))
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
			switch (unk_0x073B65E051D2F03E(0, 5))
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
	*uParam0 = unk_0xFC2961E139989126(unk_0xAD7526C9AA33EE39(unk_0x1349078BE884A8E7(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
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

int func_17(var uParam0)
{
	if (unk_0x53C457DC61CBEBCA(uParam0))
	{
		return !func_18(unk_0x1349078BE884A8E7(uParam0));
	}
	return 0;
}

int func_18(int iParam0)
{
	if (unk_0x746960881FB19A89(iParam0))
	{
		if (unk_0x0BA451447C3B1A8D(iParam0))
		{
			return 1;
		}
		else if (!unk_0xFC38B241541883D3(iParam0, 0))
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
	if ((!unk_0x53C457DC61CBEBCA(Local_55.f_3) && func_35(Local_55.f_11)) && unk_0x53C457DC61CBEBCA(Local_55.f_2))
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
	if (!unk_0x53C457DC61CBEBCA(Local_55.f_3))
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
			unk_0xAFFE01EF7078CAD9(unk_0x3CD0885BEAA1EC4B(Local_55.f_3), unk_0x1349078BE884A8E7(Local_55.f_2), unk_0x3250987ED5A577C0(7f, 18f), 786468);
		}
		else
		{
			unk_0xAFFE01EF7078CAD9(unk_0x3CD0885BEAA1EC4B(Local_55.f_3), unk_0x1349078BE884A8E7(Local_55.f_2), unk_0x3250987ED5A577C0(7f, 18f), 786599);
		}
	}
	else if (Local_55.f_12 == 2)
	{
		func_130();
		unk_0xC7EBE3C9AC83FAAA(unk_0x3CD0885BEAA1EC4B(Local_55.f_3), uLocal_200);
	}
}

int func_21()
{
	int iVar0;
	
	if (!unk_0x53C457DC61CBEBCA(Local_55.f_2))
	{
		if (func_35(Local_55.f_10))
		{
			if (func_23(&(Local_55.f_16), &(Local_55.f_19)))
			{
				if (func_22(&(Local_55.f_2), Local_55.f_10, Local_55.f_16, Local_55.f_19, 1, 1, 1, 1, 0, 1))
				{
					unk_0xD9B13F0A69759C12(unk_0x1349078BE884A8E7(Local_55.f_2), 0);
					unk_0x4EFB72476F8D3302(unk_0x1349078BE884A8E7(Local_55.f_2), 1);
					unk_0x3BD670EFDCBA8935(unk_0x1349078BE884A8E7(Local_55.f_2));
					unk_0x6FD45FA39DD18625(unk_0x1349078BE884A8E7(Local_55.f_2), 1, 1);
					unk_0x185D18DA9BC98757(unk_0x1349078BE884A8E7(Local_55.f_2), 0);
					if (unk_0xA27FA05139033EDE("Not_Allow_As_Saved_Veh", 3))
					{
						unk_0x865ACDDED75C1CC2(unk_0x1349078BE884A8E7(Local_55.f_2), "Not_Allow_As_Saved_Veh", 1);
					}
					if (unk_0xA27FA05139033EDE("MPBitset", 3))
					{
						if (unk_0xB4289912C78431FE(unk_0x1349078BE884A8E7(Local_55.f_2), "MPBitset"))
						{
							iVar0 = unk_0x70BD1F58B07BE0C1(unk_0x1349078BE884A8E7(Local_55.f_2), "MPBitset");
						}
						unk_0xEDB9A377CD8B7F03(&iVar0, 10);
						unk_0x865ACDDED75C1CC2(unk_0x1349078BE884A8E7(Local_55.f_2), "MPBitset", iVar0);
					}
					if (Local_55.f_12 == 0)
					{
						if (unk_0x95A70C0B34435CA8(unk_0x1349078BE884A8E7(Local_55.f_2)) < Local_55.f_14)
						{
							Local_55.f_14 = unk_0x95A70C0B34435CA8(unk_0x1349078BE884A8E7(Local_55.f_2));
						}
					}
				}
			}
		}
	}
	if (!unk_0x53C457DC61CBEBCA(Local_55.f_2))
	{
		return 0;
	}
	return 1;
}

int func_22(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
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
	uVar0 = unk_0xB0694AD0A3BB8936(uParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0xDBDB9A424A3C41D3(uVar0);
	if (unk_0x53C457DC61CBEBCA(*uParam0))
	{
		unk_0x185D18DA9BC98757(uVar0, iParam10);
		if (unk_0xCD22EDB73BA42551(iVar0))
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
		unk_0x042E8EAB80B3768F(iVar0, iParam9);
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
	
	Var5 = { func_34(unk_0xCFC72E446B0B3AD7()) };
	if (Local_55.f_12 == 1)
	{
		return 1;
	}
	if (!bVar0)
	{
		if (unk_0xF2980D52AF7AA97C(&Var5, uParam0, &uVar2, 0f, 180f, 150f, 0, 1, 1))
		{
			unk_0x1B75703EDFED9125(*uParam0, 1, uParam0, uParam1, &iVar1, 4, 1077936128, 0);
			if (iVar1 >= 1)
			{
				if (unk_0x91EAD4F2F9B5B38A(-1367.557f, -3220.598f, 12.9448f, Var5, 1) >= 600f && unk_0x91EAD4F2F9B5B38A(750f, -3200f, 6f, Var5, 1) >= 700f)
				{
					if (iLocal_205 <= 5)
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
	Global_2404554 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x65473DAE13685EEB(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x04F609D23DD56222(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x04F609D23DD56222(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0xDFE956DB96641937(Param0, fParam5, 0))
		{
			return 0;
		}
	}
	Global_2404554++;
	if (bParam13)
	{
		if (unk_0xFC096FF22FF07A48(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404554++;
	if (fParam14 > 0f)
	{
		if (func_30(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404554++;
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
	Global_2404554++;
	return 1;
}

int func_25(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_161(unk_0xCFC72E446B0B3AD7(), 1, 1))
		{
			if (!unk_0x2E9CF5C574019636())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x91EAD4F2F9B5B38A(func_34(unk_0xCFC72E446B0B3AD7()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0xE298336AB6E66F7E(Param0, fParam3))
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
			if (!func_27(iVar1, 0) && unk_0x7F0B9D2743F95A8F(unk_0xCFC72E446B0B3AD7(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xCFC72E446B0B3AD7()))
				{
					if ((func_26(iVar1) || !bParam10) && !Global_2414035[iVar1 /*254*/].f_253)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x59A4BF97B76AD953(iVar1) == -1)
							{
								if (unk_0x59A4BF97B76AD953(iVar1) == unk_0x59A4BF97B76AD953(unk_0xCFC72E446B0B3AD7()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x59A4BF97B76AD953(iVar1) != unk_0x59A4BF97B76AD953(unk_0xCFC72E446B0B3AD7()))) || unk_0x59A4BF97B76AD953(iVar1) == -1)
							{
								if (unk_0x91EAD4F2F9B5B38A(func_34(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x2C7D3FB84365CF4E(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x59A4BF97B76AD953(iVar1) != iParam8 || unk_0x59A4BF97B76AD953(iVar1) == -1)
						{
							if (unk_0x91EAD4F2F9B5B38A(func_34(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x2C7D3FB84365CF4E(iVar1, Param0, fParam3))
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
	if (unk_0x706AF1DFAF966E35(unk_0x4E6043D225B9C75F(iParam0)) || Global_2414035[iParam0 /*254*/].f_239)
	{
		return 1;
	}
	return 0;
}

bool func_27(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xCFC72E446B0B3AD7())
	{
		bVar0 = func_28(-1, 0) == 8;
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

int func_28(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_29();
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

int func_29()
{
	return Global_1312737;
}

int func_30(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0xCFC72E446B0B3AD7() != iVar1) || iParam8 == 0)
		{
			if (func_161(iVar1, bParam4, bParam5))
			{
				if (unk_0x7F0B9D2743F95A8F(unk_0xCFC72E446B0B3AD7(), iVar1))
				{
					if (!bParam7 || (!unk_0x3E0478C40AB5B38D(unk_0x4E6043D225B9C75F(iVar1)) && func_26(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x59A4BF97B76AD953(unk_0xCFC72E446B0B3AD7()) != unk_0x59A4BF97B76AD953(iVar1))) || unk_0x59A4BF97B76AD953(unk_0xCFC72E446B0B3AD7()) == -1)
						{
							if (((unk_0x59A4BF97B76AD953(unk_0xCFC72E446B0B3AD7()) == -1 && uParam9) && bParam6) && func_31(iVar1))
							{
							}
							else if (unk_0x746960881FB19A89(unk_0x4E6043D225B9C75F(iVar1)))
							{
								if (unk_0x91EAD4F2F9B5B38A(func_34(iVar1), Param0, 1) < fParam3)
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
	if (func_33(unk_0xCFC72E446B0B3AD7(), iParam0))
	{
		return 1;
	}
	Global_2445561 = { func_32(iParam0) };
	if (unk_0x9E1C8024B80AA59C(&Global_2445561))
	{
		return 1;
	}
	return 0;
}

struct<13> func_32(int iParam0)
{
	struct<13> Var0;
	
	unk_0x4DB2D434F7F3C6B1(iParam0, &Var0, 13);
	return Var0;
}

int func_33(int iParam0, int iParam1)
{
	if (unk_0xEBD30B93B1EED82E())
	{
		Global_2445561 = { func_32(iParam0) };
		Global_2445574 = { func_32(iParam1) };
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

Vector3 func_34(int iParam0)
{
	return unk_0x77009B1C011405A9(unk_0x4E6043D225B9C75F(iParam0), 0);
}

int func_35(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x3BC6D217451D6BB7(iParam0);
	return unk_0x149162179DBAEDB0(iParam0);
}

int func_36(var uParam0)
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

void func_37(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x7EF90A4891193127())
		{
			func_7(uParam0, 0, 0);
		}
	}
}

void func_38()
{
	switch (Local_102[unk_0x9725084D4DFE8258() /*3*/].f_2)
	{
		case 0:
			func_129();
			func_44();
			func_39();
			if (Local_55.f_42 > 0)
			{
				Local_102[unk_0x9725084D4DFE8258() /*3*/].f_2 = 1;
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
	
	func_40(Local_55.f_3, &uLocal_206, -1082130432, 0, 0, 0, 0);
	iVar0 = 0;
	while (iVar0 < Local_55.f_14)
	{
		func_40(Local_55.f_4[iVar0], &(Local_214[iVar0 /*8*/]), -1082130432, 0, 0, 0, 0);
		iVar0++;
	}
	if (unk_0x94E72F17611BCD3C(Local_55.f_1, 0))
	{
		if (!unk_0x94E72F17611BCD3C(Local_55.f_1, 1) && !unk_0x94E72F17611BCD3C(Local_102[unk_0x9725084D4DFE8258() /*3*/].f_1, 3))
		{
			if (unk_0x53C457DC61CBEBCA(Local_55.f_3))
			{
				if (unk_0x34CE5EC4D87561E4(Local_55.f_3) || (!unk_0x4792C62764008602(Local_55.f_3) && unk_0x7EF90A4891193127()))
				{
					unk_0xA50AD6983D49A772(unk_0x3CD0885BEAA1EC4B(Local_55.f_3), Global_1574055);
					unk_0xEDB9A377CD8B7F03(&(Local_102[unk_0x9725084D4DFE8258() /*3*/].f_1), 3);
				}
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!unk_0x94E72F17611BCD3C(Local_55.f_1, (2 + iVar0)) && !unk_0x94E72F17611BCD3C(Local_102[unk_0x9725084D4DFE8258() /*3*/].f_1, (4 + iVar0)))
			{
				if (unk_0x53C457DC61CBEBCA(Local_55.f_4[iVar0]))
				{
					if (unk_0x34CE5EC4D87561E4(Local_55.f_4[iVar0]) || (!unk_0x4792C62764008602(Local_55.f_4[iVar0]) && unk_0x7EF90A4891193127()))
					{
						unk_0xA50AD6983D49A772(unk_0x3CD0885BEAA1EC4B(Local_55.f_4[iVar0]), Global_1574055);
						if (!unk_0x3E0478C40AB5B38D(unk_0x3CD0885BEAA1EC4B(Local_55.f_4[iVar0])))
						{
							unk_0x3D43E25AD1B0AE83(unk_0x3CD0885BEAA1EC4B(Local_55.f_4[iVar0]), 100f, 0);
						}
						unk_0xEDB9A377CD8B7F03(&(Local_102[unk_0x9725084D4DFE8258() /*3*/].f_1), (4 + iVar0));
					}
				}
			}
			iVar0++;
		}
	}
}

void func_40(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	if (unk_0x53C457DC61CBEBCA(uParam0))
	{
		if (func_43())
		{
			Global_2422166 = unk_0xCFC72E446B0B3AD7();
		}
		if (bParam3)
		{
			func_42(unk_0x3CD0885BEAA1EC4B(uParam0), uParam1, 1, Global_2422166, iParam4, iParam5, fParam2, iParam6);
		}
		else
		{
			func_42(unk_0x3CD0885BEAA1EC4B(uParam0), uParam1, -1, Global_2422166, iParam4, iParam5, fParam2, iParam6);
		}
	}
	else if (unk_0x2E6E8D325977B3EC(*uParam1))
	{
		func_41(uParam1);
	}
}

void func_41(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0x2E6E8D325977B3EC(*uParam0))
	{
		unk_0x0451B5D93A4BDAA0(uParam0);
		bVar0 = true;
	}
	if (unk_0x2E6E8D325977B3EC(uParam0->f_1))
	{
		unk_0x0451B5D93A4BDAA0(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x746960881FB19A89(uParam0->f_7))
	{
		if (!unk_0x3E0478C40AB5B38D(uParam0->f_7))
		{
			if (unk_0x1E340411F75B44FE(uParam0->f_7))
			{
				unk_0x27C3EE559D11736B(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

int func_42(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, var uParam7)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0x2563F6EECD8726D3();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x3E0478C40AB5B38D(uParam0))
	{
		if (!unk_0x1E340411F75B44FE(uParam0))
		{
			unk_0x27C3EE559D11736B(uParam0, 1);
			uParam1->f_7 = uParam0;
			unk_0x133C33898A6B7C79(uParam0, iParam2);
			unk_0x6B5627EADD89528C(uParam0, fParam6);
			if (unk_0x2E6E8D325977B3EC(*uParam1))
			{
				unk_0x15DE80E4F3BF69A9(*uParam1, 7);
			}
		}
		unk_0x033F95F6DD2BC600(uParam0, uParam4);
		unk_0x9918D2663AD80E71(uParam0, uParam5);
		*uParam1 = unk_0xD7BCCE63E1CFE522(uParam0);
		if (!unk_0x94E72F17611BCD3C(uParam1->f_6, 2))
		{
			if (unk_0x2E6E8D325977B3EC(*uParam1))
			{
				if (!unk_0x9E9AFDBF482248F6(uParam7))
				{
					unk_0x6398AE6DC472AD55("MCUSTBLIP");
					unk_0x7FAFF3E791AF486A(uParam7);
					unk_0x6421BFEE42CFEB56(*uParam1);
				}
				unk_0xEDB9A377CD8B7F03(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x827151D7B70CB853(uParam0, 0))
		{
			uParam1->f_1 = unk_0xDB36DF958B95DEBD(uParam0);
			if (!unk_0x94E72F17611BCD3C(uParam1->f_6, 3))
			{
				if (unk_0x2E6E8D325977B3EC(uParam1->f_1))
				{
					unk_0x15DE80E4F3BF69A9(uParam1->f_1, 7);
					unk_0xEDB9A377CD8B7F03(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0x2E6E8D325977B3EC(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0xF76EE56D3E7DAF1B(&(uParam1->f_6), 3);
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
	return Global_1315874;
}

void func_44()
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (unk_0x53C457DC61CBEBCA(Local_55.f_2))
	{
		if (!unk_0x94E72F17611BCD3C(Local_102[unk_0x9725084D4DFE8258() /*3*/].f_1, 0))
		{
			if (!unk_0xFC38B241541883D3(unk_0x1349078BE884A8E7(Local_55.f_2), 0))
			{
			}
			if (unk_0x0BA451447C3B1A8D(unk_0x1349078BE884A8E7(Local_55.f_2)))
			{
			}
			if (unk_0x0BA451447C3B1A8D(unk_0x1349078BE884A8E7(Local_55.f_2)))
			{
				if (unk_0xCFC72E446B0B3AD7() == unk_0x3533780945E4A6B9(Local_55.f_2, &uVar0))
				{
					func_124(2092, 1, -1);
					func_121(68, 1, -1);
					func_77(0, unk_0x9F92518438215DD0(), "XPT_KAIE", -875716015, 1504756458, Global_262145.f_6409, 1, -1, 0, 0);
					func_73(Global_262145.f_6410, 1, 1, 1092616192);
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
						func_52(-1922554349, Global_262145.f_6410, &uVar1, 0, 0);
					}
					else
					{
						unk_0x3CF20856D3CFEB7E(Global_262145.f_6410, "AM_DESTROY_VEH", &uVar2);
					}
					unk_0xEDB9A377CD8B7F03(&(Local_102[unk_0x9725084D4DFE8258() /*3*/].f_1), 0);
				}
			}
			else
			{
				if (!unk_0x94E72F17611BCD3C(Local_55.f_1, 0))
				{
					if (!unk_0x94E72F17611BCD3C(Local_102[unk_0x9725084D4DFE8258() /*3*/].f_1, 1))
					{
						if (func_51(unk_0x9F92518438215DD0(), unk_0x1349078BE884A8E7(Local_55.f_2), 1))
						{
							unk_0xEDB9A377CD8B7F03(&(Local_102[unk_0x9725084D4DFE8258() /*3*/].f_1), 1);
						}
					}
					if (!unk_0x94E72F17611BCD3C(Local_102[unk_0x9725084D4DFE8258() /*3*/].f_1, 2))
					{
						if (unk_0xE99AF5B1B3F0BB7C(unk_0x1349078BE884A8E7(Local_55.f_2), unk_0x9F92518438215DD0(), 1))
						{
							unk_0xEDB9A377CD8B7F03(&(Local_102[unk_0x9725084D4DFE8258() /*3*/].f_1), 2);
						}
					}
				}
				if (func_161(unk_0xCFC72E446B0B3AD7(), 1, 1) && func_51(unk_0x9F92518438215DD0(), unk_0x1349078BE884A8E7(Local_55.f_2), 0))
				{
					if (!unk_0x94E72F17611BCD3C(Global_2446533.f_4400, 1))
					{
						unk_0xEDB9A377CD8B7F03(&(Global_2446533.f_4400), 1);
					}
				}
				else if (unk_0x94E72F17611BCD3C(Global_2446533.f_4400, 1))
				{
					unk_0xF76EE56D3E7DAF1B(&(Global_2446533.f_4400), 1);
				}
				func_45();
			}
		}
	}
}

void func_45()
{
	if (!unk_0x94E72F17611BCD3C(uLocal_199, 0))
	{
		if (func_50(27, -1) == 0)
		{
			if (func_161(unk_0xCFC72E446B0B3AD7(), 1, 1))
			{
				if (func_51(unk_0x9F92518438215DD0(), unk_0x1349078BE884A8E7(Local_55.f_2), 0))
				{
					if (func_6(&uLocal_239, 300000, 0))
					{
						func_48(27, 1, -1);
						unk_0xEDB9A377CD8B7F03(&iLocal_199, 0);
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
			unk_0xEDB9A377CD8B7F03(&iLocal_199, 0);
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
	
	uVar0 = Global_2476549[iParam0 /*6*/][func_49(iParam2)];
	unk_0xC715C0FD7A589EA7(uVar0, iParam1, 1);
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

int func_50(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2476549[iParam0 /*6*/][func_49(iParam1)];
	if (unk_0xF02F9C69623F2904(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_51(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x746960881FB19A89(iParam0) && !unk_0x0BA451447C3B1A8D(iParam0))
	{
		if (unk_0x746960881FB19A89(iParam1) && !unk_0x0BA451447C3B1A8D(iParam1))
		{
			if (unk_0x44E080690DA76A2A(iParam0, iParam1, iParam2))
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
		if (!unk_0xA549BE81FFC4288A(func_29()) || unk_0xADE1DFE09709BDB1())
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
			*uParam0 = func_58(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
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
			func_57(1, iParam4);
			Global_2541343 = 0;
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
			unk_0xEDB9A377CD8B7F03(&(Global_2414035[unk_0xCFC72E446B0B3AD7() /*254*/].f_121.f_71), 0);
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

int func_56(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2540883[iParam0 /*69*/].f_5 == 1;
	}
	return 0;
}

void func_57(int iParam0, var uParam1)
{
	Global_2437111 = uParam1;
	Global_2437110 = iParam0;
}

int func_58(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2540883[iVar0 /*69*/].f_2 == 0)
		{
			if (!func_59())
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

int func_59()
{
	if (unk_0x708CE249B4F97BF8())
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
	iVar0 = func_71();
	if (iVar0 == -1)
	{
		return;
	}
	func_70(iVar0);
	func_69(iVar0, uParam0);
	func_68(iVar0, uParam2, bParam3);
	func_67(iVar0, sParam1);
	if (unk_0x9E9AFDBF482248F6(sParam4) && iParam6 == -99)
	{
		return;
	}
	func_66(iVar0);
	if (!unk_0x9E9AFDBF482248F6(sParam4))
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
	Global_1321259.f_59[iParam0 /*16*/].f_15 = iParam1;
}

void func_64(int iParam0, char* sParam1, bool bParam2)
{
	StringCopy(&(Global_1321259.f_59[iParam0 /*16*/].f_7), sParam1, 32);
	if (!bParam2)
	{
		return;
	}
	func_65(iParam0);
}

void func_65(int iParam0)
{
	unk_0xEDB9A377CD8B7F03(&(Global_1321259.f_59[iParam0 /*16*/]), 5);
}

void func_66(int iParam0)
{
	unk_0xEDB9A377CD8B7F03(&(Global_1321259.f_59[iParam0 /*16*/]), 4);
}

void func_67(int iParam0, char* sParam1)
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam1, 16);
	Global_1321259.f_59[iParam0 /*16*/].f_3 = { Var0 };
}

void func_68(int iParam0, var uParam1, bool bParam2)
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

void func_69(int iParam0, var uParam1)
{
	Global_1321259.f_59[iParam0 /*16*/].f_1 = uParam1;
}

void func_70(int iParam0)
{
	unk_0xEDB9A377CD8B7F03(&(Global_1321259.f_59[iParam0 /*16*/]), 0);
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
	return unk_0x94E72F17611BCD3C(Global_1321259.f_59[iParam0 /*16*/], 0);
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
	Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_188.f_4 = iVar1;
	Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_188.f_3 = (Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_188.f_3 + iVar1);
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
		if (unk_0x746960881FB19A89(iParam1))
		{
			if (unk_0x4E178F5D4155391A(iParam1))
			{
				uVar1 = unk_0x240654B57CFFBFB3(iParam1);
				func_84(unk_0xAA04EEFB14FDE2E9(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8);
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
	if (iParam0 == func_81(unk_0x9F92518438215DD0()))
	{
		func_80(1);
	}
	func_84(Var0, iParam1, 0, sParam2);
}

void func_80(int iParam0)
{
	Global_2422166.f_1307 = iParam0;
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
	
	if (iParam0 == func_83(unk_0x9F92518438215DD0()) && unk_0xB49A1BEB8771FD4C(unk_0xB14E47EA29D7193F()) == 4)
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
			Global_2422166.f_726[iVar1 /*29*/].f_4 = func_87(Global_2422166.f_726[iVar1 /*29*/], &Global_1312317, &Global_1312318);
			Global_2422166.f_726[iVar1 /*29*/].f_7 = unk_0x6A8628B6E9F055B3();
			Global_2422166.f_726[iVar1 /*29*/].f_3 = iParam3;
			Global_2422166.f_726[iVar1 /*29*/].f_8 = iParam4;
			Global_2422166.f_726[iVar1 /*29*/].f_9 = func_86();
			Global_2422166.f_726[iVar1 /*29*/].f_10 = func_85();
			StringCopy(&(Global_2422166.f_726[iVar1 /*29*/].f_22), sParam5, 16);
		}
	}
}

int func_85()
{
	if (Global_2422166.f_1307)
	{
		Global_2422166.f_1307 = 0;
		return 1;
	}
	Global_2422166.f_1307 = 0;
	return 0;
}

var func_86()
{
	var uVar0;
	
	uVar0 = Global_2422166.f_1309;
	Global_2422166.f_1309 = 1;
	return uVar0;
}

float func_87(struct<3> Param0, var uParam3, var uParam4)
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
	
	if (func_120(unk_0xCFC72E446B0B3AD7()) || func_119(unk_0xCFC72E446B0B3AD7()))
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
			func_124(1156, iVar1, -1);
			if (iParam1 == 0)
			{
				func_99((func_108(unk_0xCFC72E446B0B3AD7()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xA2895E3CE9FD15F8(iVar1, iParam8, iParam9);
				if (Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_39.f_2 != -1)
				{
					func_124(1157, iVar1, -1);
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
				func_90((func_92(unk_0xCFC72E446B0B3AD7()) + iVar1));
			}
			else
			{
				func_90((func_92(unk_0xCFC72E446B0B3AD7()) + iParam6));
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
		Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_188.f_5 = iParam0;
		func_91(joaat("mpply_globalxp"), iParam0);
	}
}

void func_91(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xC46BDC34976E9532(iVar0, uParam1, 1);
	}
}

int func_92(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_161(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xCFC72E446B0B3AD7())
			{
				return func_93(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1582869[iParam0 /*332*/].f_188.f_5;
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
	if (unk_0x39496A55977AA312(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_94(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_32(unk_0xCFC72E446B0B3AD7()) };
	if (unk_0xEBD30B93B1EED82E())
	{
		if (unk_0x1F0B5C273160FECE(&Var0))
		{
			iVar13 = func_97(func_98(&Var0));
			if (iVar13 == 0)
			{
				func_96(&Global_1335490, iParam0);
				func_95(joaat("mpply_crew_local_xp_0"), Global_1335490);
			}
			else if (iVar13 == 1)
			{
				func_96(&Global_1335491, iParam0);
				func_95(joaat("mpply_crew_local_xp_1"), Global_1335491);
			}
			else if (iVar13 == 2)
			{
				func_96(&Global_1335492, iParam0);
				func_95(joaat("mpply_crew_local_xp_2"), Global_1335492);
			}
			else if (iVar13 == 3)
			{
				func_96(&Global_1335493, iParam0);
				func_95(joaat("mpply_crew_local_xp_3"), Global_1335493);
			}
			else if (iVar13 == 4)
			{
				func_96(&Global_1335494, iParam0);
				func_95(joaat("mpply_crew_local_xp_4"), Global_1335494);
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
		unk_0xC46BDC34976E9532(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1335485 = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1335487 = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1335487 = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1335488 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1335489 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1335490 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1335491 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1335492 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1335493 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1335494 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1335495 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1335496 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1335497 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1335498 = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1335499 = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1335500 = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1335501 = uParam1;
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

int func_98(var uParam0)
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

void func_99(int iParam0, int iParam1, int iParam2)
{
	if (func_117())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7270 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1335605[func_49(-1)])
				{
					unk_0xA2895E3CE9FD15F8(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1335605[func_49(-1)])
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
		if (func_107(unk_0xCFC72E446B0B3AD7()))
		{
			Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_188.f_1 = iParam0;
			Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_188.f_6 = func_105(iParam0, 1);
		}
		func_104(631, iParam0, -1, 1);
		func_103(632, func_105(iParam0, 1), -1, 1);
		Global_1335605[func_49(-1)] = iParam0;
		func_100(7, 0);
	}
}

void func_100(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_102(iParam0, iParam1))
	{
		iVar0 = func_101();
		Global_2435039[iVar0] = iParam0;
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
		if (Global_2435039[iVar1] == 0)
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

void func_103(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2454588[iParam0 /*6*/][func_49(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC46BDC34976E9532(iVar0, iParam1, iParam3);
	}
}

void func_104(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2454588[iParam0 /*6*/][func_49(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC46BDC34976E9532(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 779:
			Global_1335551[func_49(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1335557[func_49(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1335563[func_49(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1335569[func_49(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1335527[func_49(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1335533[func_49(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1335539[func_49(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1335545[func_49(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1335503[func_49(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1335509[func_49(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1335515[func_49(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1335521[func_49(iParam2)] = iParam1;
			break;
		
		case 749:
			Global_1335575[func_49(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1335581[func_49(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1335587[func_49(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1335593[func_49(iParam2)] = iParam1;
			break;
		
		case 1294:
			Global_1335599[func_49(iParam2)] = iParam1;
			break;
		
		case 631:
			Global_1335605[func_49(iParam2)] = iParam1;
			break;
		
		case 1269:
			Global_1335611[func_49(iParam2)] = iParam1;
			break;
		
		case 1866:
			Global_2476789[0 /*6*/][func_49(iParam2)] = iParam1;
			break;
		
		case 2255:
			Global_2476789[1 /*6*/][func_49(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1335617[func_49(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1335623[func_49(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1335629[func_49(iParam2)] = iParam1;
			break;
		
		case 1227:
			Global_1335635[func_49(iParam2)] = iParam1;
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

int func_107(int iParam0)
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

int func_108(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xCFC72E446B0B3AD7())
			{
				return Global_1335605[func_49(-1)];
			}
			else if (func_107(iParam0))
			{
				return Global_1582869[iParam0 /*332*/].f_188.f_1;
			}
		}
	}
	else
	{
		return Global_1335605[func_49(-1)];
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
				if (unk_0x59A4BF97B76AD953(iVar5) == iVar1 || func_111(unk_0x59A4BF97B76AD953(iVar5), iVar1))
				{
					iVar2++;
					if (iVar5 != unk_0xCFC72E446B0B3AD7())
					{
						if (func_33(unk_0xCFC72E446B0B3AD7(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_110(*iParam0, 100) * (10f * Global_262145.f_4194)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_110(*iParam0, 100) * (20f * Global_262145.f_4187)));
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
		while (iVar0 < unk_0x0C20B275AC51DD95())
		{
			iVar3 = iVar0;
			if (unk_0xD3AFE733DFF53CF5(iVar3))
			{
				iVar4 = unk_0xA6118988A879C889(iVar3);
				if (func_161(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xCFC72E446B0B3AD7())
					{
						iVar1++;
						if (func_33(unk_0xCFC72E446B0B3AD7(), iVar4))
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
				if (iVar4 != unk_0xCFC72E446B0B3AD7())
				{
					if (func_113(unk_0xCFC72E446B0B3AD7(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_33(unk_0xCFC72E446B0B3AD7(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_110(*iParam1, 100) * (10f * Global_262145.f_4194)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_110(*iParam1, 100) * (20f * Global_262145.f_4187)));
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
	
	if (unk_0x9C3FBB2667EB8955() != 3)
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
		if (unk_0xB65C49ABD0DAB270(iParam0) > func_108(unk_0xCFC72E446B0B3AD7()))
		{
			iParam0 = -func_108(unk_0xCFC72E446B0B3AD7());
		}
	}
	if (func_116(8000, 0, 0) > 0)
	{
		if (func_116(8000, 0, 0) < (iParam0 + func_108(unk_0xCFC72E446B0B3AD7())))
		{
			iParam0 = (func_116(8000, 0, 0) - func_108(unk_0xCFC72E446B0B3AD7()));
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
	return Global_270816[iParam0];
}

int func_117()
{
	return 1;
}

int func_118(var uParam0)
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

bool func_119(int iParam0)
{
	return Global_2414035[iParam0 /*254*/].f_114 == 2;
}

bool func_120(int iParam0)
{
	return Global_2414035[iParam0 /*254*/].f_114 == 7;
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
	
	iVar0 = Global_2476020[iParam0 /*6*/][func_49(uParam2)];
	unk_0xC46BDC34976E9532(iVar0, iParam1, 1);
}

int func_123(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2476020[iParam0 /*6*/][func_49(iParam1)];
	if (unk_0x39496A55977AA312(uVar0, &uVar1, -1))
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

int func_126(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454588[iParam0 /*6*/][func_49(uParam1)];
	if (unk_0x39496A55977AA312(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_127(char* sParam0, int iParam1)
{
	unk_0x21D4405986536E14(sParam0);
	unk_0x7BDC04B08D7A7FE0(0, 0, 1, iParam1);
}

bool func_128(int iParam0)
{
	return unk_0xB65C49ABD0DAB270(unk_0xE1C532DCCBD8FED6(Global_2408522, unk_0x6A8628B6E9F055B3())) > iParam0;
}

void func_129()
{
	if (!unk_0x2E6E8D325977B3EC(uLocal_202))
	{
		if (unk_0x62FC9AA71A0BB8DB(Local_55.f_2))
		{
			if (!unk_0x0BA451447C3B1A8D(unk_0x1349078BE884A8E7(Local_55.f_2)))
			{
				uLocal_202 = unk_0x5304FE8A2CED6AE8(unk_0x1349078BE884A8E7(Local_55.f_2));
				if (!unk_0x8D759C5DD707B910(Local_55.f_10))
				{
					unk_0xAFF0147EA2454485(uLocal_202, 225);
				}
				else
				{
					unk_0xAFF0147EA2454485(uLocal_202, 348);
				}
				unk_0x016722B6E0559A9A(uLocal_202, 1);
				unk_0x5DD980062843696A(uLocal_202, 7000);
				unk_0x15DE80E4F3BF69A9(uLocal_202, 6);
				unk_0x2A8C2BEEA4F7041F(uLocal_202, "DSV_BLIP");
			}
		}
	}
}

void func_130()
{
	if (Local_55.f_12 == 2)
	{
		if (unk_0x62FC9AA71A0BB8DB(Local_55.f_2))
		{
			if (unk_0xFC38B241541883D3(unk_0x1349078BE884A8E7(Local_55.f_2), 0))
			{
				unk_0xF87DA7F5BA8C7D0F(&uLocal_200);
				unk_0x181230122ADA68FA(0, unk_0x1349078BE884A8E7(Local_55.f_2), Local_55.f_20, 7f, iLocal_203, 3f);
				unk_0xF811299AF81DB581(0, 0, 0);
				unk_0x27DF0A5AA993D7B6(0, Local_55.f_24, 1f, -1, 1048576000, 0, Local_55.f_27);
				unk_0x3179CCC77CBAB31F(uLocal_200);
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
			if (Global_262145.f_5003)
			{
				return 0;
			}
			if (func_136(unk_0xCFC72E446B0B3AD7(), 7))
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
			if (func_136(unk_0xCFC72E446B0B3AD7(), 7))
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
			if (func_136(unk_0xCFC72E446B0B3AD7(), 7))
			{
				return 0;
			}
			if (unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 0) || unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_135(4))
			{
				return 0;
			}
			if (func_136(unk_0xCFC72E446B0B3AD7(), 7))
			{
				return 0;
			}
			if (unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 0) || unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_135(4))
			{
				return 0;
			}
			if (func_136(unk_0xCFC72E446B0B3AD7(), 7))
			{
				return 0;
			}
			if (unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 0) || unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_135(4))
			{
				return 0;
			}
			if (func_136(unk_0xCFC72E446B0B3AD7(), 7))
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

int func_135(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_161(unk_0x7225A5A7A532BC7C(iVar0), 0, 1))
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

bool func_136(int iParam0, int iParam1)
{
	return unk_0x94E72F17611BCD3C(Global_2414035[iParam0 /*254*/].f_205, iParam1);
}

int func_137()
{
	bool bVar0;
	
	func_144(&bVar0);
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
	if (func_143())
	{
		return 1;
	}
	if (Global_2437036)
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
	if (!unk_0x6518D9FF7C996D2B())
	{
		return 1;
	}
	if (func_138() != 0)
	{
		if (unk_0x7B47A371E2D93C2C(func_138()) == 0)
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
	return Global_2428162.f_572;
}

int func_141(int iParam0)
{
	if (unk_0xAFB34077E5ACCBA7(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_142()
{
	return Global_2435128;
}

bool func_143()
{
	return Global_2428162.f_567;
}

void func_144(var uParam0)
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
					func_145(iVar0);
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

void func_145(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x2E567DCD11FE0296(1, iParam0, &Var0, 3))
	{
		if (func_161(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x4E6043D225B9C75F(Var0.f_1);
			if (unk_0x746960881FB19A89(uVar3))
			{
				if (unk_0x827151D7B70CB853(iVar3, 0))
				{
					uVar4 = unk_0x1161215F69587BDA(iVar3, 0);
					if (unk_0x4A4FC7B76BEF1AC9(uVar4, Var0.f_2) && unk_0xD28DD58204E8F9D1())
					{
						if (func_146(uVar4, &bVar5))
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

int func_146(int iParam0, var uParam1)
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

void func_147()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_148()
{
	if (unk_0x2E6E8D325977B3EC(uLocal_202))
	{
		unk_0x0451B5D93A4BDAA0(&uLocal_202);
	}
	func_151();
	if (func_131() == 4 && Local_55.f_10 != 0)
	{
		unk_0x60DAE84D0B296FD2(Local_55.f_10, 0);
	}
	unk_0xF76EE56D3E7DAF1B(&(Global_2446533.f_4400), 1);
	func_150(17, 0);
	func_149();
}

void func_149()
{
	unk_0xE60DEFFB2A853900();
}

void func_150(int iParam0, bool bParam1)
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

void func_151()
{
	if (Local_55.f_12 == 2)
	{
		unk_0xCD02E3C29B8253A6(&uLocal_200);
	}
}

void func_152(struct<20> Param0)
{
	func_159(func_160(Param0.f_0), Param0);
	unk_0xD5DF0B4E41426D41(4);
	unk_0x2D0DCDC2641217B9(1);
	func_158(0, -1, 0);
	unk_0xA32DB9C55050112C(&Local_55, 47);
	unk_0x85862F9356411B89(&Local_102, 97);
	if (!func_157())
	{
		func_148();
	}
	if (unk_0x4B69FB3A5B09A1BA())
	{
		unk_0xE5556978B2858C53(0);
		if (unk_0x7EF90A4891193127())
		{
			func_153();
			Local_55.f_8 = func_5();
		}
		func_150(17, 1);
		Local_102[unk_0x9725084D4DFE8258() /*3*/] = 0;
	}
	else
	{
		func_148();
	}
}

void func_153()
{
	func_156();
	Local_55.f_12 = unk_0x073B65E051D2F03E(0, 3);
	if (Local_55.f_12 == 1 || Local_55.f_12 == 2)
	{
		Local_55.f_15 = unk_0x073B65E051D2F03E(0, 5);
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
	Local_55.f_14 = unk_0x073B65E051D2F03E(0, 3);
	if (Global_262145.f_6413 >= 0 && Global_262145.f_6413 < 5)
	{
		Local_55.f_13 = Global_262145.f_6413;
	}
	else
	{
		Local_55.f_13 = unk_0x073B65E051D2F03E(0, 5);
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
	
	iVar0 = unk_0x073B65E051D2F03E(0, 8);
	if (Global_262145.f_6412 >= 0 && Global_262145.f_6412 < 8)
	{
		iVar0 = Global_262145.f_6412;
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
		if (!unk_0x4B69FB3A5B09A1BA())
		{
			return 0;
		}
		if (unk_0xA3E98C97E459BD8E())
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
	
	iVar0 = unk_0x56448188B27B0D1C();
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
				if (!unk_0x4B69FB3A5B09A1BA())
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
			else if (!unk_0xB659F73755907B0D())
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
				func_149();
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
			func_149();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_159(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		func_149();
	}
	unk_0x097416E6C5CBD31B(uParam0, 0, Param1.f_16);
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

