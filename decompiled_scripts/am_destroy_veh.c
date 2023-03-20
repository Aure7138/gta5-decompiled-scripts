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
	if (unk_0x1DAD7CE53BEE7710() && func_163(unk_0x1788E93557766241(), 0, 1))
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
		if (unk_0x31EF25060710376C())
		{
			func_150();
		}
		switch (func_134(unk_0x044A481E863E2F6B()))
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
							if (!unk_0x2FDD93A1F5E63663(Local_55.f_10))
							{
								func_127("DSV_HELP1", -1);
							}
							else
							{
								func_127("DSV_HELP2", -1);
							}
						}
					}
					Local_104[unk_0x044A481E863E2F6B() /*3*/] = 1;
				}
				else if (func_133() == 4)
				{
					Local_104[unk_0x044A481E863E2F6B() /*3*/] = 3;
				}
				break;
			
			case 1:
				if (func_133() == 1)
				{
					func_38();
				}
				else if (func_133() == 4)
				{
					Local_104[unk_0x044A481E863E2F6B() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_37(&(Local_55.f_45));
				if (func_36(&(Local_55.f_45)))
				{
					Local_104[unk_0x044A481E863E2F6B() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_104[unk_0x044A481E863E2F6B() /*3*/] = 4;
			
			case 4:
				func_150();
				break;
		}
		if (unk_0xE9849174628A9C50())
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
			if (unk_0xE44A580B551C3645(unk_0x8CB435AA1E25DA51(Local_55.f_2)))
			{
				if (func_6(&(Local_55.f_47), 3000, 0))
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
			if (func_6(&(Local_55.f_43), Global_262145.f_8785, 0))
			{
				Var14.f_2 = 117;
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
	Param0.f_1 = unk_0x1788E93557766241();
	if (!iParam14 == 0)
	{
		unk_0xD311A006D41D0704(1, &Param0, 14, iParam14);
	}
}

int func_4(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x3F202553F90D4442())
	{
		if (unk_0x0AFA8C49D2EED33A(unk_0xCADBCF2AA9B38F40(iVar1)))
		{
			iVar2 = unk_0xCE0E12AD191025E5(unk_0xCADBCF2AA9B38F40(iVar1));
			if (func_163(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x1788E93557766241() || iParam0)
				{
					unk_0xD0E2BFCE93AE3ABD(&uVar0, iVar2);
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
	if (unk_0x1DAD7CE53BEE7710() && !bParam2)
	{
		if (unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x519586565311459B(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x09560C7DE2A384BD(), *uParam0)) >= iParam1)
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
		while (iLocal_203 < unk_0x3F202553F90D4442())
		{
			if (unk_0x0AFA8C49D2EED33A(unk_0xCADBCF2AA9B38F40(iLocal_203)))
			{
				uVar14 = unk_0xCE0E12AD191025E5(unk_0xCADBCF2AA9B38F40(iLocal_203));
				if (unk_0x889D01384B54BCE3(Local_104[iLocal_203 /*3*/].f_1, 0))
				{
					Var0.f_2 = 116;
					Var0.f_10 = uVar14;
					Local_55.f_8 = uVar14;
					func_3(Var0, func_4(1));
					Local_55.f_0 = 4;
					return;
				}
				if (!unk_0x889D01384B54BCE3(Local_55.f_1, 0))
				{
					if (unk_0x889D01384B54BCE3(Local_104[iLocal_203 /*3*/].f_1, 1))
					{
						unk_0xD0E2BFCE93AE3ABD(&(Local_55.f_1), 0);
					}
					if (unk_0x889D01384B54BCE3(Local_104[iLocal_203 /*3*/].f_1, 2))
					{
						unk_0xD0E2BFCE93AE3ABD(&(Local_55.f_1), 0);
					}
				}
				else
				{
					if (!unk_0x889D01384B54BCE3(Local_55.f_1, 1))
					{
						if (unk_0x889D01384B54BCE3(Local_104[iLocal_203 /*3*/].f_1, 3))
						{
							unk_0xD0E2BFCE93AE3ABD(&(Local_55.f_1), 1);
						}
					}
					if (!unk_0x889D01384B54BCE3(Local_55.f_1, 2))
					{
						if (unk_0x889D01384B54BCE3(Local_104[iLocal_203 /*3*/].f_1, 4))
						{
							unk_0xD0E2BFCE93AE3ABD(&(Local_55.f_1), 2);
						}
					}
					if (!unk_0x889D01384B54BCE3(Local_55.f_1, 3))
					{
						if (unk_0x889D01384B54BCE3(Local_104[iLocal_203 /*3*/].f_1, 5))
						{
							unk_0xD0E2BFCE93AE3ABD(&(Local_55.f_1), 3);
						}
					}
					if (!unk_0x889D01384B54BCE3(Local_55.f_1, 4))
					{
						if (unk_0x889D01384B54BCE3(Local_104[iLocal_203 /*3*/].f_1, 6))
						{
							unk_0xD0E2BFCE93AE3ABD(&(Local_55.f_1), 4);
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
		if (unk_0x1DAD7CE53BEE7710() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x519586565311459B();
			}
			else
			{
				*uParam0 = unk_0x4EAB1171B13C220B();
			}
		}
		else
		{
			*uParam0 = unk_0x09560C7DE2A384BD();
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
			unk_0xEA054561294AEC10(Local_55.f_10);
			unk_0xEA054561294AEC10(Local_55.f_11);
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
		if ((!unk_0x86CB59A6776A7C27(Local_55.f_4[iVar0]) && func_35(Local_55.f_11)) && unk_0x86CB59A6776A7C27(Local_55.f_2))
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
		if (!unk_0x86CB59A6776A7C27(Local_55.f_4[iVar0]))
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
	
	if (!unk_0x2013F7257D076F89(1))
	{
		return 0;
	}
	iVar0 = unk_0x6F9DE0DE8363ADF1(iParam1, uParam2, Param3, uParam6, iParam8, bParam7);
	*uParam0 = unk_0x6F85672CC2397A57(iVar0);
	if (unk_0x86CB59A6776A7C27(*uParam0))
	{
		unk_0x940C6B8BF42B190B(iVar0, iParam9);
		if (unk_0xF5F2A2EAFEFB36D2(iVar0))
		{
			if (bParam7)
			{
				unk_0x59262222326E6883(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

void func_13(var uParam0)
{
	int iVar0;
	
	unk_0xA9465591B42213AE(unk_0x7A16A8A755F44481(*uParam0), Global_1574082);
	unk_0x6F12B0DE0D6D7E2F(unk_0x7A16A8A755F44481(*uParam0), 0);
	unk_0x2686393074E14730(unk_0x7A16A8A755F44481(*uParam0), 1);
	unk_0x37BEBD1D516179CF(unk_0x7A16A8A755F44481(*uParam0), func_15(), 25000, 1);
	iVar0 = unk_0x444ECD635D5FD45F(0, 10);
	if (iVar0 == 0 || iVar0 == 1)
	{
		unk_0x0CB975C4C6AB2C13(unk_0x7A16A8A755F44481(*uParam0), 0);
	}
	else if ((iVar0 == 2 || iVar0 == 3) || iVar0 == 4)
	{
		unk_0x0CB975C4C6AB2C13(unk_0x7A16A8A755F44481(*uParam0), 2);
	}
	else
	{
		unk_0x0CB975C4C6AB2C13(unk_0x7A16A8A755F44481(*uParam0), 1);
	}
	iVar0 = unk_0x444ECD635D5FD45F(0, 10);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 2)
	{
		unk_0x15EBFEEB77BF84B7(unk_0x7A16A8A755F44481(*uParam0), 5, 1);
	}
	else if (iVar0 == 3)
	{
		unk_0x15EBFEEB77BF84B7(unk_0x7A16A8A755F44481(*uParam0), 17, 1);
	}
	else if ((iVar0 == 4 || iVar0 == 5) || iVar0 == 6)
	{
		unk_0x15EBFEEB77BF84B7(unk_0x7A16A8A755F44481(*uParam0), 13, 1);
	}
	if (func_14())
	{
		unk_0x15EBFEEB77BF84B7(unk_0x7A16A8A755F44481(*uParam0), 20, 1);
	}
	unk_0x15EBFEEB77BF84B7(unk_0x7A16A8A755F44481(*uParam0), 2, 1);
	iVar0 = unk_0x444ECD635D5FD45F(0, 4);
	if (iVar0 == 0)
	{
		unk_0x59FF47176A212235(unk_0x7A16A8A755F44481(*uParam0), 2);
	}
	else if (iVar0 == 1)
	{
		unk_0x59FF47176A212235(unk_0x7A16A8A755F44481(*uParam0), 1);
	}
	else if (iVar0 == 2)
	{
		unk_0x59FF47176A212235(unk_0x7A16A8A755F44481(*uParam0), 3);
	}
	unk_0x6C2788422CE5090B(unk_0x7A16A8A755F44481(*uParam0), 1);
	unk_0xCBCAAB1D0AE4D49A(unk_0x7A16A8A755F44481(*uParam0), 1);
	unk_0xA1478EBA54DDE31B(unk_0x7A16A8A755F44481(*uParam0), 29, 1);
	unk_0x4F0C83A389EC7C63(unk_0x7A16A8A755F44481(*uParam0), 3);
	unk_0x4C31C3561F937348(unk_0x7A16A8A755F44481(*uParam0), unk_0xF2DB717A73826179((200f * Global_262145.f_138)));
}

int func_14()
{
	if (unk_0x889D01384B54BCE3(unk_0x444ECD635D5FD45F(0, 65535), 0))
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
			switch (unk_0x444ECD635D5FD45F(0, 5))
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
			switch (unk_0x444ECD635D5FD45F(0, 5))
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
			switch (unk_0x444ECD635D5FD45F(0, 5))
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
			switch (unk_0x444ECD635D5FD45F(0, 5))
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
			switch (unk_0x444ECD635D5FD45F(0, 5))
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
			switch (unk_0x444ECD635D5FD45F(0, 5))
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
			switch (unk_0x444ECD635D5FD45F(0, 5))
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
			switch (unk_0x444ECD635D5FD45F(0, 5))
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
			switch (unk_0x444ECD635D5FD45F(0, 5))
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
	if (!unk_0x2013F7257D076F89(1))
	{
		return 0;
	}
	if (!unk_0x86CB59A6776A7C27(uParam1))
	{
		return 0;
	}
	if (!unk_0xECFECDAD51A6184F(unk_0x8CB435AA1E25DA51(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x6F85672CC2397A57(unk_0x793482A351850A4F(unk_0x8CB435AA1E25DA51(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0x86CB59A6776A7C27(*uParam0))
	{
		unk_0x940C6B8BF42B190B(unk_0x7A16A8A755F44481(*uParam0), iParam7);
		if (unk_0xF5F2A2EAFEFB36D2(unk_0x7A16A8A755F44481(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x59262222326E6883(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_17(var uParam0)
{
	if (unk_0x86CB59A6776A7C27(uParam0))
	{
		return !func_18(unk_0x8CB435AA1E25DA51(uParam0));
	}
	return 0;
}

int func_18(int iParam0)
{
	if (unk_0x538DF9E5B1DF01EB(iParam0))
	{
		if (unk_0xE44A580B551C3645(iParam0))
		{
			return 1;
		}
		else if (!unk_0xECFECDAD51A6184F(iParam0, 0))
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
	if ((!unk_0x86CB59A6776A7C27(Local_55.f_3) && func_35(Local_55.f_11)) && unk_0x86CB59A6776A7C27(Local_55.f_2))
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
	if (!unk_0x86CB59A6776A7C27(Local_55.f_3))
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
			unk_0x2B79CD6A5064FB19(unk_0x7A16A8A755F44481(Local_55.f_3), unk_0x8CB435AA1E25DA51(Local_55.f_2), unk_0x1E253A1A83763D22(7f, 18f), 786468);
		}
		else
		{
			unk_0x2B79CD6A5064FB19(unk_0x7A16A8A755F44481(Local_55.f_3), unk_0x8CB435AA1E25DA51(Local_55.f_2), unk_0x1E253A1A83763D22(7f, 18f), 786599);
		}
	}
	else if (Local_55.f_12 == 2)
	{
		func_132();
		unk_0x0891776D0327B77A(unk_0x7A16A8A755F44481(Local_55.f_3), uLocal_202);
	}
}

int func_21()
{
	int iVar0;
	
	if (!unk_0x86CB59A6776A7C27(Local_55.f_2))
	{
		if (func_35(Local_55.f_10))
		{
			if (func_23(&(Local_55.f_16), &(Local_55.f_19)))
			{
				if (func_22(&(Local_55.f_2), Local_55.f_10, Local_55.f_16, Local_55.f_19, 1, 1, 1, 1, 0, 1))
				{
					unk_0x3CC3106305C40A28(unk_0x8CB435AA1E25DA51(Local_55.f_2), 0);
					unk_0xC3C39B8BA6AC5807(unk_0x8CB435AA1E25DA51(Local_55.f_2), 1);
					unk_0xC4A1ED516488C8FC(unk_0x8CB435AA1E25DA51(Local_55.f_2));
					unk_0x6EBB9B0E214CCF0F(unk_0x8CB435AA1E25DA51(Local_55.f_2), 1, 1);
					unk_0x940C6B8BF42B190B(unk_0x8CB435AA1E25DA51(Local_55.f_2), 0);
					if (unk_0x67BE6A47B59A2390("Not_Allow_As_Saved_Veh", 3))
					{
						unk_0x0AB30E4FF0AE0C22(unk_0x8CB435AA1E25DA51(Local_55.f_2), "Not_Allow_As_Saved_Veh", 1);
					}
					if (unk_0x67BE6A47B59A2390("MPBitset", 3))
					{
						if (unk_0x53D28141CF743B83(unk_0x8CB435AA1E25DA51(Local_55.f_2), "MPBitset"))
						{
							iVar0 = unk_0xD0997DAAAB203234(unk_0x8CB435AA1E25DA51(Local_55.f_2), "MPBitset");
						}
						unk_0xD0E2BFCE93AE3ABD(&iVar0, 10);
						unk_0x0AB30E4FF0AE0C22(unk_0x8CB435AA1E25DA51(Local_55.f_2), "MPBitset", iVar0);
					}
					if (Local_55.f_12 == 0)
					{
						if (unk_0xE3C88401E17BFBB2(unk_0x8CB435AA1E25DA51(Local_55.f_2)) < Local_55.f_14)
						{
							Local_55.f_14 = unk_0xE3C88401E17BFBB2(unk_0x8CB435AA1E25DA51(Local_55.f_2));
						}
					}
				}
			}
		}
	}
	if (!unk_0x86CB59A6776A7C27(Local_55.f_2))
	{
		return 0;
	}
	return 1;
}

int func_22(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	
	if (!unk_0x6B2CA196CD4C58D1(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0x597CB55BA0825820(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0x9BB6F54E415071A1(uParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0x16645C5D9329E9F2(uVar0);
	if (unk_0x86CB59A6776A7C27(*uParam0))
	{
		unk_0x940C6B8BF42B190B(uVar0, iParam10);
		if (unk_0xF5F2A2EAFEFB36D2(iVar0))
		{
			if (bParam8)
			{
				unk_0x59262222326E6883(*uParam0, 1);
			}
			else
			{
				unk_0x59262222326E6883(*uParam0, 0);
			}
		}
		unk_0x4852ECC2C24A1A6C(iVar0, iParam9);
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
	
	Var5 = { func_34(unk_0x1788E93557766241()) };
	if (Local_55.f_12 == 1)
	{
		return 1;
	}
	if (!bVar0)
	{
		if (unk_0xB5038FBF5AE651AD(&Var5, uParam0, &uVar2, 0f, 180f, 150f, 0, 1, 1))
		{
			unk_0x8C4964C5036133AB(*uParam0, 1, uParam0, uParam1, &iVar1, 4, 1077936128, 0);
			if (iVar1 >= 1)
			{
				if (unk_0x4970185D4CC64616(-1367.557f, -3220.598f, 12.9448f, Var5, 1) >= 600f && unk_0x4970185D4CC64616(750f, -3200f, 6f, Var5, 1) >= 700f)
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
	Global_2404570 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x233BBF4CAB603F14(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xB04974FC0ED6E892(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xB04974FC0ED6E892(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x2F82A7CF030B6A1D(Param0, fParam5, 0))
		{
			return 0;
		}
	}
	Global_2404570++;
	if (bParam13)
	{
		if (unk_0xDBC834909DE748A2(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404570++;
	if (fParam14 > 0f)
	{
		if (func_30(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404570++;
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
	Global_2404570++;
	return 1;
}

int func_25(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_163(unk_0x1788E93557766241(), 1, 1))
		{
			if (!unk_0xF4C685E933068D23())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x4970185D4CC64616(func_34(unk_0x1788E93557766241()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x7A98E0DD2E6FAB7A(Param0, fParam3))
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
			if (!func_27(iVar1, 0) && unk_0x6871380D51134D0D(unk_0x1788E93557766241(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x1788E93557766241()))
				{
					if ((func_26(iVar1) || !bParam10) && !Global_2414327[iVar1 /*255*/].f_253)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xA2D6C1E24AF2E058(iVar1) == -1)
							{
								if (unk_0xA2D6C1E24AF2E058(iVar1) == unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xA2D6C1E24AF2E058(iVar1) != unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241()))) || unk_0xA2D6C1E24AF2E058(iVar1) == -1)
							{
								if (unk_0x4970185D4CC64616(func_34(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x0FC608B6B212C0E5(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xA2D6C1E24AF2E058(iVar1) != iParam8 || unk_0xA2D6C1E24AF2E058(iVar1) == -1)
						{
							if (unk_0x4970185D4CC64616(func_34(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x0FC608B6B212C0E5(iVar1, Param0, fParam3))
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
	if (unk_0x14D5064869773C21(unk_0xFF34D923BFB5E9FB(iParam0)) || Global_2414327[iParam0 /*255*/].f_239)
	{
		return 1;
	}
	return 0;
}

bool func_27(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1788E93557766241())
	{
		bVar0 = func_28(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1583725[iParam0 /*334*/].f_188 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x38FA37FE3518BA38(iParam0))
		{
			bVar0 = unk_0xA2D6C1E24AF2E058(iParam0) == 8;
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
	if (Global_1315869[iVar1] == 1)
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
		if ((iParam8 == 1 && unk_0x1788E93557766241() != iVar1) || iParam8 == 0)
		{
			if (func_163(iVar1, bParam4, bParam5))
			{
				if (unk_0x6871380D51134D0D(unk_0x1788E93557766241(), iVar1))
				{
					if (!bParam7 || (!unk_0x2DE0B96E966FD817(unk_0xFF34D923BFB5E9FB(iVar1)) && func_26(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241()) != unk_0xA2D6C1E24AF2E058(iVar1))) || unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241()) == -1)
						{
							if (((unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241()) == -1 && uParam9) && bParam6) && func_31(iVar1))
							{
							}
							else if (unk_0x538DF9E5B1DF01EB(unk_0xFF34D923BFB5E9FB(iVar1)))
							{
								if (unk_0x4970185D4CC64616(func_34(iVar1), Param0, 1) < fParam3)
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
	if (func_33(unk_0x1788E93557766241(), iParam0))
	{
		return 1;
	}
	Global_2446020 = { func_32(iParam0) };
	if (unk_0x765DD998E5AD03DC(&Global_2446020))
	{
		return 1;
	}
	return 0;
}

struct<13> func_32(int iParam0)
{
	struct<13> Var0;
	
	unk_0xBE9A3F2CD3728669(iParam0, &Var0, 13);
	return Var0;
}

int func_33(int iParam0, int iParam1)
{
	if (unk_0x70443014BEB6B15D())
	{
		Global_2446020 = { func_32(iParam0) };
		Global_2446033 = { func_32(iParam1) };
		if (unk_0x9A6FFB0772343488(&Global_2446020))
		{
			if (unk_0x9A6FFB0772343488(&Global_2446033))
			{
				unk_0x55FB44C9EE7B72D8(&Global_2445950, 35, &Global_2446020);
				unk_0x55FB44C9EE7B72D8(&Global_2445985, 35, &Global_2446033);
				if (Global_2445950 == Global_2445985)
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
	return unk_0xBF8499F46AD9093A(unk_0xFF34D923BFB5E9FB(iParam0), 0);
}

int func_35(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x939DA7EBCC6588FF(iParam0);
	return unk_0x5494F37F35C1D7D7(iParam0);
}

int func_36(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x519586565311459B(), *uParam0)) >= 1000)
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
		if (unk_0xE9849174628A9C50())
		{
			func_9(uParam0, 0, 0);
		}
	}
}

void func_38()
{
	switch (Local_104[unk_0x044A481E863E2F6B() /*3*/].f_2)
	{
		case 0:
			func_131();
			func_44();
			func_39();
			if (Local_55.f_42 > 0)
			{
				Local_104[unk_0x044A481E863E2F6B() /*3*/].f_2 = 1;
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
	
	func_40(Local_55.f_3, &uLocal_208, -1082130432, 0, 0, 0, 0);
	iVar0 = 0;
	while (iVar0 < Local_55.f_14)
	{
		func_40(Local_55.f_4[iVar0], &(Local_216[iVar0 /*8*/]), -1082130432, 0, 0, 0, 0);
		iVar0++;
	}
	if (unk_0x889D01384B54BCE3(Local_55.f_1, 0))
	{
		if (!unk_0x889D01384B54BCE3(Local_55.f_1, 1) && !unk_0x889D01384B54BCE3(Local_104[unk_0x044A481E863E2F6B() /*3*/].f_1, 3))
		{
			if (unk_0x86CB59A6776A7C27(Local_55.f_3))
			{
				if (unk_0x428E17610BCE75C2(Local_55.f_3) || (!unk_0x3D7D0EF6EB39605F(Local_55.f_3) && unk_0xE9849174628A9C50()))
				{
					unk_0xA9465591B42213AE(unk_0x7A16A8A755F44481(Local_55.f_3), Global_1574083);
					unk_0xD0E2BFCE93AE3ABD(&(Local_104[unk_0x044A481E863E2F6B() /*3*/].f_1), 3);
				}
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!unk_0x889D01384B54BCE3(Local_55.f_1, (2 + iVar0)) && !unk_0x889D01384B54BCE3(Local_104[unk_0x044A481E863E2F6B() /*3*/].f_1, (4 + iVar0)))
			{
				if (unk_0x86CB59A6776A7C27(Local_55.f_4[iVar0]))
				{
					if (unk_0x428E17610BCE75C2(Local_55.f_4[iVar0]) || (!unk_0x3D7D0EF6EB39605F(Local_55.f_4[iVar0]) && unk_0xE9849174628A9C50()))
					{
						unk_0xA9465591B42213AE(unk_0x7A16A8A755F44481(Local_55.f_4[iVar0]), Global_1574083);
						if (!unk_0x2DE0B96E966FD817(unk_0x7A16A8A755F44481(Local_55.f_4[iVar0])))
						{
							unk_0x28F7FDF6BC8BA514(unk_0x7A16A8A755F44481(Local_55.f_4[iVar0]), 100f, 0);
						}
						unk_0xD0E2BFCE93AE3ABD(&(Local_104[unk_0x044A481E863E2F6B() /*3*/].f_1), (4 + iVar0));
					}
				}
			}
			iVar0++;
		}
	}
}

void func_40(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	if (unk_0x86CB59A6776A7C27(uParam0))
	{
		if (func_43())
		{
			Global_2422491 = unk_0x1788E93557766241();
		}
		if (bParam3)
		{
			func_42(unk_0x7A16A8A755F44481(uParam0), uParam1, 1, Global_2422491, iParam4, iParam5, fParam2, iParam6);
		}
		else
		{
			func_42(unk_0x7A16A8A755F44481(uParam0), uParam1, -1, Global_2422491, iParam4, iParam5, fParam2, iParam6);
		}
	}
	else if (unk_0x5660C8AFDD9C1721(*uParam1))
	{
		func_41(uParam1);
	}
}

void func_41(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0x5660C8AFDD9C1721(*uParam0))
	{
		unk_0xB6FB9702660D84F6(uParam0);
		bVar0 = true;
	}
	if (unk_0x5660C8AFDD9C1721(uParam0->f_1))
	{
		unk_0xB6FB9702660D84F6(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x538DF9E5B1DF01EB(uParam0->f_7))
	{
		if (!unk_0x2DE0B96E966FD817(uParam0->f_7))
		{
			if (unk_0x06C73C7722DE6B93(uParam0->f_7))
			{
				unk_0xD2127E08F7ECC647(uParam0->f_7, 0);
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
		iParam3 = unk_0xA495B6AB6F2BF8C7();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x2DE0B96E966FD817(uParam0))
	{
		if (!unk_0x06C73C7722DE6B93(uParam0))
		{
			unk_0xD2127E08F7ECC647(uParam0, 1);
			uParam1->f_7 = uParam0;
			unk_0x684EAC33CF12840F(uParam0, iParam2);
			unk_0xA081E108449F36AF(uParam0, fParam6);
			if (unk_0x5660C8AFDD9C1721(*uParam1))
			{
				unk_0x85C00B9AEF9CC0BE(*uParam1, 7);
			}
		}
		unk_0xD8A5ADBA7F78DE98(uParam0, uParam4);
		unk_0x0E24447AB5E1E464(uParam0, uParam5);
		*uParam1 = unk_0xD02D41827B8C0615(uParam0);
		if (!unk_0x889D01384B54BCE3(uParam1->f_6, 2))
		{
			if (unk_0x5660C8AFDD9C1721(*uParam1))
			{
				if (!unk_0x06771AF7795B3ECF(uParam7))
				{
					unk_0xBF0178A0BBB67E93("MCUSTBLIP");
					unk_0x94E086BCAE8856C1(uParam7);
					unk_0x9658B68CC5D71D0C(*uParam1);
				}
				unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x202EF5D8203705EF(uParam0, 0))
		{
			uParam1->f_1 = unk_0xBA3EA247D2E688E5(uParam0);
			if (!unk_0x889D01384B54BCE3(uParam1->f_6, 3))
			{
				if (unk_0x5660C8AFDD9C1721(uParam1->f_1))
				{
					unk_0x85C00B9AEF9CC0BE(uParam1->f_1, 7);
					unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0x5660C8AFDD9C1721(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x29DB79DD4D939B38(&(uParam1->f_6), 3);
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
	return Global_1315866;
}

void func_44()
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (unk_0x86CB59A6776A7C27(Local_55.f_2))
	{
		if (!unk_0x889D01384B54BCE3(Local_104[unk_0x044A481E863E2F6B() /*3*/].f_1, 0))
		{
			if (!unk_0xECFECDAD51A6184F(unk_0x8CB435AA1E25DA51(Local_55.f_2), 0))
			{
			}
			if (unk_0xE44A580B551C3645(unk_0x8CB435AA1E25DA51(Local_55.f_2)))
			{
			}
			if (unk_0xE44A580B551C3645(unk_0x8CB435AA1E25DA51(Local_55.f_2)))
			{
				if (unk_0x1788E93557766241() == unk_0xAFED5B0023CB8973(Local_55.f_2, &uVar0))
				{
					func_124(2097, 1, -1);
					func_121(68, 1, -1);
					func_77(0, unk_0xA16EC202D9D35357(), "XPT_KAIE", -875716015, 1504756458, Global_262145.f_6413, 1, -1, 0, 0);
					func_73(Global_262145.f_6414, 1, 1, 1092616192);
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
						func_52(-1922554349, Global_262145.f_6414, &uVar1, 0, 0);
					}
					else
					{
						unk_0x7A7A166B0DDE10EE(Global_262145.f_6414, "AM_DESTROY_VEH", &uVar2);
					}
					Global_2437347 = Global_262145.f_6414;
					unk_0xD0E2BFCE93AE3ABD(&(Local_104[unk_0x044A481E863E2F6B() /*3*/].f_1), 0);
				}
			}
			else
			{
				if (!unk_0x889D01384B54BCE3(Local_55.f_1, 0))
				{
					if (!unk_0x889D01384B54BCE3(Local_104[unk_0x044A481E863E2F6B() /*3*/].f_1, 1))
					{
						if (func_51(unk_0xA16EC202D9D35357(), unk_0x8CB435AA1E25DA51(Local_55.f_2), 1))
						{
							unk_0xD0E2BFCE93AE3ABD(&(Local_104[unk_0x044A481E863E2F6B() /*3*/].f_1), 1);
						}
					}
					if (!unk_0x889D01384B54BCE3(Local_104[unk_0x044A481E863E2F6B() /*3*/].f_1, 2))
					{
						if (unk_0xBF8ADDCADFC4691E(unk_0x8CB435AA1E25DA51(Local_55.f_2), unk_0xA16EC202D9D35357(), 1))
						{
							unk_0xD0E2BFCE93AE3ABD(&(Local_104[unk_0x044A481E863E2F6B() /*3*/].f_1), 2);
						}
					}
				}
				if (func_163(unk_0x1788E93557766241(), 1, 1) && func_51(unk_0xA16EC202D9D35357(), unk_0x8CB435AA1E25DA51(Local_55.f_2), 0))
				{
					if (!unk_0x889D01384B54BCE3(Global_2446992.f_4406, 1))
					{
						unk_0xD0E2BFCE93AE3ABD(&(Global_2446992.f_4406), 1);
					}
				}
				else if (unk_0x889D01384B54BCE3(Global_2446992.f_4406, 1))
				{
					unk_0x29DB79DD4D939B38(&(Global_2446992.f_4406), 1);
				}
				func_45();
			}
		}
	}
}

void func_45()
{
	if (!unk_0x889D01384B54BCE3(uLocal_201, 0))
	{
		if (func_50(27, -1) == 0)
		{
			if (func_163(unk_0x1788E93557766241(), 1, 1))
			{
				if (func_51(unk_0xA16EC202D9D35357(), unk_0x8CB435AA1E25DA51(Local_55.f_2), 0))
				{
					if (func_6(&uLocal_241, 300000, 0))
					{
						func_48(27, 1, -1);
						unk_0xD0E2BFCE93AE3ABD(&iLocal_201, 0);
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
			unk_0xD0E2BFCE93AE3ABD(&iLocal_201, 0);
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
	
	uVar0 = Global_2473603[iParam0 /*5*/][func_49(iParam2)];
	unk_0xA65D74B65C28C5D7(uVar0, iParam1, 1);
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
			Global_2454959 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454959 = 1;
		}
	}
	return iVar0;
}

int func_50(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2473603[iParam0 /*5*/][func_49(iParam1)];
	if (unk_0xD7A6AA341268D26A(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_51(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x538DF9E5B1DF01EB(iParam0) && !unk_0xE44A580B551C3645(iParam0))
	{
		if (unk_0x538DF9E5B1DF01EB(iParam1) && !unk_0xE44A580B551C3645(iParam1))
		{
			if (unk_0xAD203DB71ADF6E57(iParam0, iParam1, iParam2))
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
		if (!unk_0xC9345B47FCA589CF(func_29()) || unk_0x4E4D77A008D3DA63())
		{
			Global_2538376 = 1;
			return 0;
		}
		if (Global_2436286)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2538377 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2537915[iVar1 /*69*/].f_2 == 0)
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
	if (bVar0 || unk_0xC9C87AEBA01C419B(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x625C87495B033820(iVar3))
		{
			*uParam0 = func_58(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2537915[*uParam0 /*69*/].f_62 = 1;
				}
			}
			Global_2538373 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2538375 = 1;
			Global_2538378 = iParam4;
			Global_2538380 = iParam3;
			Global_2538381 = 1;
			Global_2538379 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2538378 = iParam4;
			Global_2538380 = iParam3;
			Global_2538381 = 1;
			Global_2538379 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_57(1, iParam4);
			Global_2538375 = 0;
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
			unk_0xD0E2BFCE93AE3ABD(&(Global_2414327[unk_0x1788E93557766241() /*255*/].f_121.f_71), 0);
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
				unk_0xBDF871285913783C();
			}
		}
		else if (!bVar0)
		{
			unk_0xE4B5006C2633FD81(Global_2537915[iParam0 /*69*/]);
		}
		Var1 = 2147483647;
		Global_2537915[iParam0 /*69*/] = { Var1 };
	}
}

int func_56(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2537915[iParam0 /*69*/].f_5 == 1;
	}
	return 0;
}

void func_57(int iParam0, var uParam1)
{
	Global_2437461 = uParam1;
	Global_2437460 = iParam0;
}

int func_58(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2537915[iVar0 /*69*/].f_2 == 0)
		{
			if (!func_59())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2537915[iVar0 /*69*/].f_2 = 1;
			Global_2537915[iVar0 /*69*/].f_1 = uParam5;
			Global_2537915[iVar0 /*69*/].f_3 = uParam1;
			Global_2537915[iVar0 /*69*/].f_4 = uParam2;
			Global_2537915[iVar0 /*69*/].f_7 = uParam3;
			Global_2537915[iVar0 /*69*/].f_5 = 0;
			Global_2537915[iVar0 /*69*/] = iParam0;
			Global_2537915[iVar0 /*69*/].f_6 = iParam4;
			Global_2537915[iVar0 /*69*/].f_65 = uParam8;
			Global_2537915[iVar0 /*69*/].f_64 = uParam7;
			Global_2537915[iVar0 /*69*/].f_68 = 0;
			Global_2538373 = 0;
			if (bParam6)
			{
				Global_2537915[iVar0 /*69*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_59()
{
	if (unk_0xF6BAF9F0C2863FFE())
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
	
	if (unk_0x06771AF7795B3ECF(sParam1))
	{
		return;
	}
	if (unk_0xF2EC0D50FCCB3CE1(sParam1) > 15)
	{
		return;
	}
	if (!unk_0x06771AF7795B3ECF(sParam4))
	{
		if (unk_0xF2EC0D50FCCB3CE1(sParam4) > 31)
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
	if (unk_0x06771AF7795B3ECF(sParam4) && iParam6 == -99)
	{
		return;
	}
	func_66(iVar0);
	if (!unk_0x06771AF7795B3ECF(sParam4))
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
	Global_1321250.f_59[iParam0 /*16*/].f_15 = iParam1;
}

void func_64(int iParam0, char* sParam1, bool bParam2)
{
	StringCopy(&(Global_1321250.f_59[iParam0 /*16*/].f_7), sParam1, 32);
	if (!bParam2)
	{
		return;
	}
	func_65(iParam0);
}

void func_65(int iParam0)
{
	unk_0xD0E2BFCE93AE3ABD(&(Global_1321250.f_59[iParam0 /*16*/]), 5);
}

void func_66(int iParam0)
{
	unk_0xD0E2BFCE93AE3ABD(&(Global_1321250.f_59[iParam0 /*16*/]), 4);
}

void func_67(int iParam0, char* sParam1)
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam1, 16);
	Global_1321250.f_59[iParam0 /*16*/].f_3 = { Var0 };
}

void func_68(int iParam0, var uParam1, bool bParam2)
{
	Global_1321250.f_59[iParam0 /*16*/].f_2 = uParam1;
	if (bParam2)
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_1321250.f_59[iParam0 /*16*/]), 2);
		unk_0x29DB79DD4D939B38(&(Global_1321250.f_59[iParam0 /*16*/]), 3);
	}
	else
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_1321250.f_59[iParam0 /*16*/]), 3);
		unk_0x29DB79DD4D939B38(&(Global_1321250.f_59[iParam0 /*16*/]), 2);
	}
}

void func_69(int iParam0, var uParam1)
{
	Global_1321250.f_59[iParam0 /*16*/].f_1 = uParam1;
}

void func_70(int iParam0)
{
	unk_0xD0E2BFCE93AE3ABD(&(Global_1321250.f_59[iParam0 /*16*/]), 0);
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
	return unk_0x889D01384B54BCE3(Global_1321250.f_59[iParam0 /*16*/], 0);
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
	Global_1583725[unk_0x1788E93557766241() /*334*/].f_188.f_4 = iVar1;
	Global_1583725[unk_0x1788E93557766241() /*334*/].f_188.f_3 = (Global_1583725[unk_0x1788E93557766241() /*334*/].f_188.f_3 + iVar1);
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
		if (unk_0x538DF9E5B1DF01EB(iParam1))
		{
			if (unk_0xA34B85701D8A1FA8(iParam1))
			{
				uVar1 = unk_0xA7CC89FF539E1376(iParam1);
				func_84(unk_0xCDC62EA66023BC94(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8);
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
	if (iParam0 == func_81(unk_0xA16EC202D9D35357()))
	{
		func_80(1);
	}
	func_84(Var0, iParam1, 0, sParam2);
}

void func_80(int iParam0)
{
	Global_2422491.f_1320 = iParam0;
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
	
	if (iParam0 == func_83(unk_0xA16EC202D9D35357()) && unk_0x95AD511976EEFC6B(unk_0x862704CFD32408F9()) == 4)
	{
		Var0 = { unk_0xA783C6007920169C(iParam0, 0f, 2f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xBF8499F46AD9093A(iParam0, 0) };
	}
	fVar3 = 0f;
	if (!unk_0xE44A580B551C3645(iParam0))
	{
		fVar3 = unk_0xD1613577C809E98B(iParam0);
	}
	unk_0xD7CB63D07AABC54F(unk_0xA609E58449080951(iParam0), &Var4, &Var7);
	if (bParam1)
	{
		fVar10 = (Var7.f_2 + 0.18f);
	}
	else
	{
		fVar10 = (Var4.f_2 + 0.18f);
	}
	Var0 = { unk_0xCC6B7A025E72F529(Var0, fVar3, 0f, 0f, fVar10) };
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
			if (Global_2422491.f_739[iVar0 /*29*/].f_6 == 0 || Global_2422491.f_739[iVar0 /*29*/].f_6 == 6)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2422491.f_739[iVar1 /*29*/] = { Param0 };
			Global_2422491.f_739[iVar1 /*29*/].f_6 = 1;
			Global_2422491.f_739[iVar1 /*29*/].f_4 = func_87(Global_2422491.f_739[iVar1 /*29*/], &Global_1312317, &Global_1312318);
			Global_2422491.f_739[iVar1 /*29*/].f_7 = unk_0x519586565311459B();
			Global_2422491.f_739[iVar1 /*29*/].f_3 = iParam3;
			Global_2422491.f_739[iVar1 /*29*/].f_8 = iParam4;
			Global_2422491.f_739[iVar1 /*29*/].f_9 = func_86();
			Global_2422491.f_739[iVar1 /*29*/].f_10 = func_85();
			StringCopy(&(Global_2422491.f_739[iVar1 /*29*/].f_22), sParam5, 16);
		}
	}
}

int func_85()
{
	if (Global_2422491.f_1320)
	{
		Global_2422491.f_1320 = 0;
		return 1;
	}
	Global_2422491.f_1320 = 0;
	return 0;
}

var func_86()
{
	var uVar0;
	
	uVar0 = Global_2422491.f_1322;
	Global_2422491.f_1322 = 1;
	return uVar0;
}

float func_87(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x4970185D4CC64616(unk_0x8F759040B8D528AF(), Param0, 1);
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
	
	if (func_120(unk_0x1788E93557766241()) || func_119(unk_0x1788E93557766241()))
	{
		if (Global_262145.f_7316 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_7316;
		}
	}
	else if (Global_262145.f_4982 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_4982;
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
			func_124(1159, iVar1, -1);
			if (iParam1 == 0)
			{
				func_99((func_108(unk_0x1788E93557766241()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x449D2838B793CF3B(iVar1, iParam8, iParam9);
				if (Global_1583725[unk_0x1788E93557766241() /*334*/].f_39.f_2 != -1)
				{
					func_124(1160, iVar1, -1);
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
				func_90((func_92(unk_0x1788E93557766241()) + iVar1));
			}
			else
			{
				func_90((func_92(unk_0x1788E93557766241()) + iParam6));
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
		Global_1583725[unk_0x1788E93557766241() /*334*/].f_188.f_5 = iParam0;
		func_91(joaat("mpply_globalxp"), iParam0);
	}
}

void func_91(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x680350124CC21957(iVar0, uParam1, 1);
	}
}

int func_92(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_163(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x1788E93557766241())
			{
				return func_93(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1583725[iParam0 /*334*/].f_188.f_5;
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
	if (unk_0x3ED04C9A60CBD249(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_94(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_32(unk_0x1788E93557766241()) };
	if (unk_0x70443014BEB6B15D())
	{
		if (unk_0x9A6FFB0772343488(&Var0))
		{
			iVar13 = func_97(func_98(&Var0));
			if (iVar13 == 0)
			{
				func_96(&Global_1336376, iParam0);
				func_95(joaat("mpply_crew_local_xp_0"), Global_1336376);
			}
			else if (iVar13 == 1)
			{
				func_96(&Global_1336377, iParam0);
				func_95(joaat("mpply_crew_local_xp_1"), Global_1336377);
			}
			else if (iVar13 == 2)
			{
				func_96(&Global_1336378, iParam0);
				func_95(joaat("mpply_crew_local_xp_2"), Global_1336378);
			}
			else if (iVar13 == 3)
			{
				func_96(&Global_1336379, iParam0);
				func_95(joaat("mpply_crew_local_xp_3"), Global_1336379);
			}
			else if (iVar13 == 4)
			{
				func_96(&Global_1336380, iParam0);
				func_95(joaat("mpply_crew_local_xp_4"), Global_1336380);
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
		unk_0x680350124CC21957(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1336371 = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1336373 = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1336373 = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1336374 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1336375 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1336376 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1336377 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1336378 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1336379 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1336380 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1336381 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1336382 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1336383 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1336384 = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1336385 = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1336386 = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1336387 = uParam1;
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
	if (iParam0 == Global_1336371)
	{
		return 0;
	}
	else if (iParam0 == Global_1336372)
	{
		return 1;
	}
	else if (iParam0 == Global_1336373)
	{
		return 2;
	}
	else if (iParam0 == Global_1336374)
	{
		return 3;
	}
	else if (iParam0 == Global_1336375)
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
	if (unk_0x70443014BEB6B15D())
	{
		if (unk_0x9A6FFB0772343488(uParam0))
		{
			return Global_2435485;
		}
	}
	return Global_2435485;
}

void func_99(int iParam0, int iParam1, int iParam2)
{
	if (func_117())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7291 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1336491[func_49(-1)])
				{
					unk_0x449D2838B793CF3B(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1336491[func_49(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_7290 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x449D2838B793CF3B(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_7290 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x449D2838B793CF3B(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_107(unk_0x1788E93557766241()))
		{
			Global_1583725[unk_0x1788E93557766241() /*334*/].f_188.f_1 = iParam0;
			Global_1583725[unk_0x1788E93557766241() /*334*/].f_188.f_6 = func_105(iParam0, 1);
		}
		func_104(634, iParam0, -1, 1);
		func_103(635, func_105(iParam0, 1), -1, 1);
		Global_1336491[func_49(-1)] = iParam0;
		func_100(7, 0);
	}
}

void func_100(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_102(iParam0, iParam1))
	{
		iVar0 = func_101();
		Global_2435463[iVar0] = iParam0;
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
		if (Global_2435463[iVar1] == 0)
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
	if (Global_1315879)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315891) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
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
	
	iVar0 = Global_2455246[iParam0 /*5*/][func_49(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x680350124CC21957(iVar0, iParam1, iParam3);
	}
}

void func_104(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2455246[iParam0 /*5*/][func_49(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x680350124CC21957(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 782:
			Global_1336437[func_49(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1336443[func_49(iParam2)] = iParam1;
			break;
		
		case 784:
			Global_1336449[func_49(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1336455[func_49(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1336413[func_49(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1336419[func_49(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1336425[func_49(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1336431[func_49(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1336389[func_49(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1336395[func_49(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1336401[func_49(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1336407[func_49(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1336461[func_49(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1336467[func_49(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1336473[func_49(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1336479[func_49(iParam2)] = iParam1;
			break;
		
		case 1297:
			Global_1336485[func_49(iParam2)] = iParam1;
			break;
		
		case 634:
			Global_1336491[func_49(iParam2)] = iParam1;
			break;
		
		case 1272:
			Global_1336497[func_49(iParam2)] = iParam1;
			break;
		
		case 1869:
			Global_2473821[0 /*6*/][func_49(iParam2)] = iParam1;
			break;
		
		case 2260:
			Global_2473821[1 /*6*/][func_49(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1336503[func_49(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1336509[func_49(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1336515[func_49(iParam2)] = iParam1;
			break;
		
		case 1230:
			Global_1336521[func_49(iParam2)] = iParam1;
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
		if (Global_271370[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_271370[iVar3] < iParam0)
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
		return unk_0x889D01384B54BCE3(Global_2422491.f_1, iParam0);
	}
	return 1;
}

int func_108(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x1788E93557766241())
			{
				return Global_1336491[func_49(-1)];
			}
			else if (func_107(iParam0))
			{
				return Global_1583725[iParam0 /*334*/].f_188.f_1;
			}
		}
	}
	else
	{
		return Global_1336491[func_49(-1)];
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
	
	iVar1 = unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241());
	iVar0 = 0;
	while (iVar0 < unk_0x3F202553F90D4442())
	{
		iVar4 = unk_0xCADBCF2AA9B38F40(iVar0);
		if (unk_0x0AFA8C49D2EED33A(iVar4))
		{
			iVar5 = unk_0xCE0E12AD191025E5(iVar4);
			if (unk_0xA2D6C1E24AF2E058(iVar5) != -1)
			{
				if (unk_0xA2D6C1E24AF2E058(iVar5) == iVar1 || func_111(unk_0xA2D6C1E24AF2E058(iVar5), iVar1))
				{
					iVar2++;
					if (iVar5 != unk_0x1788E93557766241())
					{
						if (func_33(unk_0x1788E93557766241(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_110(*iParam0, 100) * (10f * Global_262145.f_4196)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_110(*iParam0, 100) * (20f * Global_262145.f_4189)));
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
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 0);
				
				case 1:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 1);
				
				case 2:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 2);
				
				case 3:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 4);
				
				case 1:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 5);
				
				case 2:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 6);
				
				case 3:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 8);
				
				case 1:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 9);
				
				case 2:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 10);
				
				case 3:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 12);
				
				case 1:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 13);
				
				case 2:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 14);
				
				case 3:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 15);
				
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
		while (iVar0 < unk_0x3F202553F90D4442())
		{
			iVar3 = iVar0;
			if (unk_0x0AFA8C49D2EED33A(iVar3))
			{
				iVar4 = unk_0xCE0E12AD191025E5(iVar3);
				if (func_163(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x1788E93557766241())
					{
						iVar1++;
						if (func_33(unk_0x1788E93557766241(), iVar4))
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
				if (iVar4 != unk_0x1788E93557766241())
				{
					if (func_113(unk_0x1788E93557766241(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_33(unk_0x1788E93557766241(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_110(*iParam1, 100) * (10f * Global_262145.f_4196)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_110(*iParam1, 100) * (20f * Global_262145.f_4189)));
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
	
	if (unk_0xE6226327EBCC990E() != 3)
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
		if (unk_0x045E73D0141F51B4(iParam0) > func_108(unk_0x1788E93557766241()))
		{
			iParam0 = -func_108(unk_0x1788E93557766241());
		}
	}
	if (func_116(8000, 0, 0) > 0)
	{
		if (func_116(8000, 0, 0) < (iParam0 + func_108(unk_0x1788E93557766241())))
		{
			iParam0 = (func_116(8000, 0, 0) - func_108(unk_0x1788E93557766241()));
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
	return Global_271370[iParam0];
}

int func_117()
{
	return 1;
}

int func_118(var uParam0)
{
	if (unk_0x8CD18E96F1984EE6(uParam0))
	{
		return 1;
	}
	else if (unk_0x9BA82E09A986BA4B(uParam0, "") || unk_0x9BA82E09A986BA4B(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_119(int iParam0)
{
	return Global_2414327[iParam0 /*255*/].f_114 == 2;
}

bool func_120(int iParam0)
{
	return Global_2414327[iParam0 /*255*/].f_114 == 7;
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
	
	iVar0 = Global_2473157[iParam0 /*5*/][func_49(uParam2)];
	unk_0x680350124CC21957(iVar0, iParam1, 1);
}

int func_123(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2473157[iParam0 /*5*/][func_49(iParam1)];
	if (unk_0x3ED04C9A60CBD249(uVar0, &uVar1, -1))
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
	if (Global_1336370)
	{
		switch (iParam0)
		{
			case 782:
			case 783:
			case 784:
			case 785:
			case 772:
			case 773:
			case 774:
			case 775:
			case 762:
			case 763:
			case 764:
			case 765:
			case 752:
			case 753:
			case 754:
			case 755:
			case 1297:
			case 634:
			case 1272:
			case 759:
			case 760:
			case 761:
			case 1230:
			case 1869:
			case 2260:
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
	uVar0 = Global_2455246[iParam0 /*5*/][func_49(iParam1)];
	if (unk_0x3ED04C9A60CBD249(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_127(char* sParam0, int iParam1)
{
	unk_0x5B4A49EA799C667F(sParam0);
	unk_0x644558F3AB755120(0, 0, 1, iParam1);
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
	
	uVar0 = func_126(2445, -1, 0);
	return unk_0x889D01384B54BCE3(uVar0, iParam0);
}

bool func_130(int iParam0)
{
	return unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(Global_2408672, unk_0x519586565311459B())) > iParam0;
}

void func_131()
{
	if (unk_0x5660C8AFDD9C1721(uLocal_204))
	{
		if (func_128())
		{
			unk_0x58063239A5B8FB80(uLocal_204, 0);
		}
		else
		{
			unk_0x58063239A5B8FB80(uLocal_204, 4);
		}
	}
	else if (unk_0xCB5D8B19B62A3B89(Local_55.f_2))
	{
		if (!unk_0xE44A580B551C3645(unk_0x8CB435AA1E25DA51(Local_55.f_2)))
		{
			uLocal_204 = unk_0xDF78B7F06503567E(unk_0x8CB435AA1E25DA51(Local_55.f_2));
			if (!unk_0x2FDD93A1F5E63663(Local_55.f_10))
			{
				unk_0x2025496D9184D312(uLocal_204, 225);
			}
			else
			{
				unk_0x2025496D9184D312(uLocal_204, 348);
			}
			unk_0x1AD45E3CF020D50D(uLocal_204, 1);
			unk_0x7EFDFE491DE8F67A(uLocal_204, 7000);
			unk_0x85C00B9AEF9CC0BE(uLocal_204, 6);
			unk_0xFDA1FE98ECD75505(uLocal_204, "DSV_BLIP");
			if (func_128())
			{
				unk_0x58063239A5B8FB80(uLocal_204, 0);
			}
		}
	}
}

void func_132()
{
	if (Local_55.f_12 == 2)
	{
		if (unk_0xCB5D8B19B62A3B89(Local_55.f_2))
		{
			if (unk_0xECFECDAD51A6184F(unk_0x8CB435AA1E25DA51(Local_55.f_2), 0))
			{
				unk_0x6D98AA46076A68BE(&uLocal_202);
				unk_0x0D750FA0D3B14993(0, unk_0x8CB435AA1E25DA51(Local_55.f_2), Local_55.f_20, 7f, iLocal_205, 3f);
				unk_0xBB5AA994E06B28E2(0, 0, 0);
				unk_0x353F4B963593F141(0, Local_55.f_24, 1f, -1, 1048576000, 0, Local_55.f_27);
				unk_0x963BB7C99350D827(uLocal_202);
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
			if (Global_262145.f_5006)
			{
				return 0;
			}
			if (func_138(unk_0x1788E93557766241(), 7))
			{
				return 0;
			}
			if (unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_244.f_4, 0) || unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_244.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_5007)
			{
				return 0;
			}
			if (func_138(unk_0x1788E93557766241(), 7))
			{
				return 0;
			}
			if (unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_244.f_4, 0) || unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_244.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_5008)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_5009)
			{
				return 0;
			}
			if (func_138(unk_0x1788E93557766241(), 7))
			{
				return 0;
			}
			if (unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_244.f_4, 0) || unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_244.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_137(4))
			{
				return 0;
			}
			if (func_138(unk_0x1788E93557766241(), 7))
			{
				return 0;
			}
			if (unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_244.f_4, 0) || unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_244.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_137(4))
			{
				return 0;
			}
			if (func_138(unk_0x1788E93557766241(), 7))
			{
				return 0;
			}
			if (unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_244.f_4, 0) || unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_244.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_137(4))
			{
				return 0;
			}
			if (func_138(unk_0x1788E93557766241(), 7))
			{
				return 0;
			}
			if (unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_244.f_4, 0) || unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_244.f_4, 1))
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
			if (func_138(unk_0x1788E93557766241(), 7))
			{
				return 0;
			}
			if (unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_244.f_4, 0) || unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_244.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_137(4))
			{
				return 0;
			}
			if (func_138(unk_0x1788E93557766241(), 7))
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
		if (func_163(unk_0x42C0B50857BF923B(iVar0), 0, 1))
		{
			if (unk_0x889D01384B54BCE3(Global_2414327[iVar0 /*255*/].f_205, iParam0))
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
	return unk_0x889D01384B54BCE3(Global_2414327[iParam0 /*255*/].f_205, iParam1);
}

int func_139()
{
	bool bVar0;
	
	func_146(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315866 == 0)
	{
		if (!unk_0x1DAD7CE53BEE7710())
		{
			return 1;
		}
	}
	if (func_145())
	{
		return 1;
	}
	if (Global_2437386)
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
	if (!unk_0x54CE0989F263D8A3())
	{
		return 1;
	}
	if (func_140() != 0)
	{
		if (unk_0x16CDA1894CFE0781(func_140()) == 0)
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
	return Global_24446;
}

bool func_142()
{
	return Global_2428577.f_572;
}

int func_143(int iParam0)
{
	if (unk_0xA519E4AC66148E87(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_144()
{
	return Global_2435556;
}

bool func_145()
{
	return Global_2428577.f_567;
}

void func_146(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x2C15B7979450724C(1))
	{
		iVar1 = unk_0x8B6CEAB2AD1BD1CD(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x6A4B863200ABAA44(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 307:
					func_147(iVar0);
					break;
				
				case 2:
					unk_0x6A4B863200ABAA44(1, iVar0, &Var4, 3);
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

void func_147(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x6A4B863200ABAA44(1, iParam0, &Var0, 3))
	{
		if (func_163(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xFF34D923BFB5E9FB(Var0.f_1);
			if (unk_0x538DF9E5B1DF01EB(uVar3))
			{
				if (unk_0x202EF5D8203705EF(iVar3, 0))
				{
					uVar4 = unk_0x6ADAC08D70C79DE5(iVar3, 0);
					if (unk_0xA7FB2A2F471A969B(uVar4, Var0.f_2) && unk_0x93C72DAC35C5D38C())
					{
						if (func_148(uVar4, &bVar5))
						{
							unk_0x2FC1F6BC6D0D9D77(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x3A3C5A6572B3C611(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_148(int iParam0, var uParam1)
{
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		if (!unk_0x22349EC06EA5B08B(iParam0))
		{
			if (unk_0xFD9706CAB35EA810(iParam0))
			{
				unk_0x7B9576B4E099FB1F(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0xD8233CB95CB48A7C(iParam0, 0))
		{
			if (unk_0xC7402AE8FD6AACA2(iParam0))
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
	if (unk_0x5660C8AFDD9C1721(uLocal_204))
	{
		unk_0xB6FB9702660D84F6(&uLocal_204);
	}
	func_153();
	if (func_133() == 4 && Local_55.f_10 != 0)
	{
		unk_0x32DC163A33A4AB6D(Local_55.f_10, 0);
	}
	unk_0x29DB79DD4D939B38(&(Global_2446992.f_4406), 1);
	func_152(17, 0);
	func_151();
}

void func_151()
{
	unk_0x82706E6C897B0FA1();
}

void func_152(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x889D01384B54BCE3(Global_2414327[unk_0x1788E93557766241() /*255*/].f_205, iParam0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_2414327[unk_0x1788E93557766241() /*255*/].f_205), iParam0);
		}
	}
	else if (unk_0x889D01384B54BCE3(Global_2414327[unk_0x1788E93557766241() /*255*/].f_205, iParam0))
	{
		unk_0x29DB79DD4D939B38(&(Global_2414327[unk_0x1788E93557766241() /*255*/].f_205), iParam0);
	}
}

void func_153()
{
	if (Local_55.f_12 == 2)
	{
		unk_0x2AF68ED52DC74B7D(&uLocal_202);
	}
}

void func_154(struct<20> Param0)
{
	func_161(func_162(Param0.f_0), Param0);
	unk_0x1EB75D4128DBB6C4(4);
	unk_0x29AA9A92BCC0F8E3(1);
	func_160(0, -1, 0);
	unk_0x241F80BF72379478(&Local_55, 49);
	unk_0x51FC2B81A21C009A(&Local_104, 97);
	if (!func_159())
	{
		func_150();
	}
	if (unk_0x1DAD7CE53BEE7710())
	{
		unk_0xFF9F94FD851C212A(0);
		if (unk_0xE9849174628A9C50())
		{
			func_155();
			Local_55.f_8 = func_5();
		}
		func_152(17, 1);
		Local_104[unk_0x044A481E863E2F6B() /*3*/] = 0;
	}
	else
	{
		func_150();
	}
}

void func_155()
{
	func_158();
	Local_55.f_12 = unk_0x444ECD635D5FD45F(0, 3);
	if (Local_55.f_12 == 1 || Local_55.f_12 == 2)
	{
		Local_55.f_15 = unk_0x444ECD635D5FD45F(0, 5);
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
	Local_55.f_14 = unk_0x444ECD635D5FD45F(0, 3);
	if (Global_262145.f_6417 >= 0 && Global_262145.f_6417 < 5)
	{
		Local_55.f_13 = Global_262145.f_6417;
	}
	else
	{
		Local_55.f_13 = unk_0x444ECD635D5FD45F(0, 5);
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
	
	iVar0 = unk_0x444ECD635D5FD45F(0, 8);
	if (Global_262145.f_6416 >= 0 && Global_262145.f_6416 < 8)
	{
		iVar0 = Global_262145.f_6416;
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
		if (!unk_0x1DAD7CE53BEE7710())
		{
			return 0;
		}
		if (unk_0x5D0D85F8A1CCEE45())
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
	
	iVar0 = unk_0x92078BBBAEFC7998();
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
				if (!unk_0x1DAD7CE53BEE7710())
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
			else if (!unk_0x0987AD2F87AA4427())
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
		iVar0 = unk_0x92078BBBAEFC7998();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x1DAD7CE53BEE7710())
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
	else if (!unk_0x0987AD2F87AA4427())
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
	if (!unk_0x1DAD7CE53BEE7710())
	{
		func_151();
	}
	unk_0x3005435C0CFEEE94(uParam0, 0, Param1.f_16);
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
		
		case 59:
			return 32;
		
		case 60:
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
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 56:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 32;
		
		case 65:
			return 2;
		
		case 70:
			return 1;
		
		case 66:
			return 2;
		
		case 67:
			return 4;
		
		case 68:
			return 2;
		
		case 69:
			return 2;
		
		case 52:
			return 1;
		
		case 71:
			return 2;
		
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
			return 0;
		
		case 78:
			return 1;
		
		default:
	}
	return 0;
}

int func_163(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0x38FA37FE3518BA38(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x2AF80829930084FD(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422491.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

