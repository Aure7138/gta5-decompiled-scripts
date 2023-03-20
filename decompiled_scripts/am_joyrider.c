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
	if (unk_0x1DAD7CE53BEE7710() && func_62(unk_0x1788E93557766241(), 0, 1))
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
		if (unk_0x31EF25060710376C())
		{
			func_51();
		}
		switch (func_35(unk_0x044A481E863E2F6B()))
		{
			case 0:
				if (func_34() == 1)
				{
					func_33();
					Local_97[unk_0x044A481E863E2F6B() /*3*/] = 1;
				}
				else if (func_34() == 4)
				{
					Local_97[unk_0x044A481E863E2F6B() /*3*/] = 3;
				}
				break;
			
			case 1:
				if (func_34() == 1)
				{
					func_31();
				}
				else if (func_34() == 4)
				{
					Local_97[unk_0x044A481E863E2F6B() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_29(&(Local_85.f_10));
				if (func_28(&(Local_85.f_10)))
				{
					Local_97[unk_0x044A481E863E2F6B() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_97[unk_0x044A481E863E2F6B() /*3*/] = 4;
			
			case 4:
				func_51();
				break;
		}
		if (unk_0xE9849174628A9C50())
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
				if (unk_0x889D01384B54BCE3(Local_85.f_1, 0))
				{
					return 1;
				}
			}
			if (!unk_0xAD203DB71ADF6E57(unk_0x7A16A8A755F44481(Local_85.f_3), unk_0x8CB435AA1E25DA51(Local_85.f_2), 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_3(var uParam0)
{
	if (unk_0x86CB59A6776A7C27(uParam0))
	{
		return unk_0x2DE0B96E966FD817(unk_0x7A16A8A755F44481(uParam0));
	}
	return 1;
}

int func_4(var uParam0)
{
	if (unk_0x86CB59A6776A7C27(uParam0))
	{
		return !func_5(unk_0x8CB435AA1E25DA51(uParam0));
	}
	return 0;
}

int func_5(var uParam0)
{
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		if (unk_0xE44A580B551C3645(uParam0))
		{
			return 1;
		}
		else if (!unk_0xECFECDAD51A6184F(uParam0, 0))
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
		unk_0xD0E2BFCE93AE3ABD(&(Local_85.f_1), 0);
	}
	if (func_4(Local_85.f_2))
	{
		iVar0 = 1;
	}
	if (unk_0x0AFA8C49D2EED33A(unk_0xCADBCF2AA9B38F40(iLocal_201)))
	{
		iVar1 = unk_0xCE0E12AD191025E5(unk_0xCADBCF2AA9B38F40(iLocal_201));
		uVar2 = unk_0xFF34D923BFB5E9FB(iVar1);
		if (func_62(iVar1, 1, 1))
		{
			if (unk_0x889D01384B54BCE3(Local_85.f_1, 0))
			{
				if (iVar0 == 1)
				{
					if (unk_0x14F9932776F21CC2(uVar2, unk_0x8CB435AA1E25DA51(Local_85.f_2), 250f, 250f, 250f, 0, 1, 0))
					{
						unk_0x29DB79DD4D939B38(&(Local_85.f_1), 0);
					}
				}
				else
				{
					unk_0x29DB79DD4D939B38(&(Local_85.f_1), 0);
				}
			}
		}
	}
	iLocal_201++;
	if (iLocal_201 == unk_0x3F202553F90D4442())
	{
		iLocal_201 = 0;
		iLocal_202 = 1;
	}
}

int func_8()
{
	if (unk_0xA4D22CD12FD67154(1, 1, 0, 0))
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
	
	if ((!unk_0x86CB59A6776A7C27(Local_85.f_3) && func_26(Local_85.f_5)) && unk_0x86CB59A6776A7C27(Local_85.f_2))
	{
		if (func_4(Local_85.f_2))
		{
			if (func_11(&(Local_85.f_3), Local_85.f_2, 22, Local_85.f_5, -1, 1, 1, 1))
			{
				unk_0x6F12B0DE0D6D7E2F(unk_0x7A16A8A755F44481(Local_85.f_3), 0);
				if (func_10())
				{
					unk_0xA9465591B42213AE(unk_0x7A16A8A755F44481(Local_85.f_3), Global_1574082);
				}
				else
				{
					unk_0xA9465591B42213AE(unk_0x7A16A8A755F44481(Local_85.f_3), Global_1574085);
				}
				unk_0x2686393074E14730(unk_0x7A16A8A755F44481(Local_85.f_3), 1);
				if (func_10())
				{
					iVar0 = unk_0x444ECD635D5FD45F(0, 10);
					if (iVar0 < 5)
					{
						unk_0x37BEBD1D516179CF(unk_0x7A16A8A755F44481(Local_85.f_3), joaat("weapon_pistol"), 25000, func_10());
					}
					else if (iVar0 > 6)
					{
						unk_0x37BEBD1D516179CF(unk_0x7A16A8A755F44481(Local_85.f_3), joaat("weapon_microsmg"), 25000, func_10());
					}
					else
					{
						unk_0x37BEBD1D516179CF(unk_0x7A16A8A755F44481(Local_85.f_3), joaat("weapon_pumpshotgun"), 25000, func_10());
					}
				}
				iVar0 = unk_0x444ECD635D5FD45F(0, 10);
				if (iVar0 == 0 || iVar0 == 1)
				{
					unk_0x0CB975C4C6AB2C13(unk_0x7A16A8A755F44481(Local_85.f_3), 0);
				}
				else if ((iVar0 == 2 || iVar0 == 3) || iVar0 == 4)
				{
					unk_0x0CB975C4C6AB2C13(unk_0x7A16A8A755F44481(Local_85.f_3), 2);
				}
				else
				{
					unk_0x0CB975C4C6AB2C13(unk_0x7A16A8A755F44481(Local_85.f_3), 1);
				}
				iVar0 = unk_0x444ECD635D5FD45F(0, 4);
				if (iVar0 == 0)
				{
					unk_0x15EBFEEB77BF84B7(unk_0x7A16A8A755F44481(Local_85.f_3), 5, 1);
				}
				else if (iVar0 == 1)
				{
					unk_0x15EBFEEB77BF84B7(unk_0x7A16A8A755F44481(Local_85.f_3), 17, 1);
				}
				else if (iVar0 == 2)
				{
					unk_0x15EBFEEB77BF84B7(unk_0x7A16A8A755F44481(Local_85.f_3), 13, 1);
				}
				if (func_10())
				{
					unk_0x15EBFEEB77BF84B7(unk_0x7A16A8A755F44481(Local_85.f_3), 20, 1);
				}
				if (func_10())
				{
					unk_0x15EBFEEB77BF84B7(unk_0x7A16A8A755F44481(Local_85.f_3), 2, 1);
				}
				iVar0 = unk_0x444ECD635D5FD45F(0, 4);
				if (iVar0 == 0)
				{
					unk_0x59FF47176A212235(unk_0x7A16A8A755F44481(Local_85.f_3), 2);
				}
				else if (iVar0 == 1)
				{
					unk_0x59FF47176A212235(unk_0x7A16A8A755F44481(Local_85.f_3), 1);
				}
				else if (iVar0 == 2)
				{
					unk_0x59FF47176A212235(unk_0x7A16A8A755F44481(Local_85.f_3), 3);
				}
				unk_0x6C2788422CE5090B(unk_0x7A16A8A755F44481(Local_85.f_3), 1);
				unk_0xCBCAAB1D0AE4D49A(unk_0x7A16A8A755F44481(Local_85.f_3), 1);
				unk_0xA1478EBA54DDE31B(unk_0x7A16A8A755F44481(Local_85.f_3), 29, 1);
				unk_0x4F0C83A389EC7C63(unk_0x7A16A8A755F44481(Local_85.f_3), 3);
				unk_0x4C31C3561F937348(unk_0x7A16A8A755F44481(Local_85.f_3), unk_0xF2DB717A73826179((200f * Global_262145.f_138)));
				unk_0x822826B4A2067BB2(unk_0x8CB435AA1E25DA51(Local_85.f_2), 1);
				unk_0x165A87EB3ACA7978(unk_0x8CB435AA1E25DA51(Local_85.f_2), 1);
				func_33();
				unk_0x0891776D0327B77A(unk_0x7A16A8A755F44481(Local_85.f_3), uLocal_195);
				unk_0xEA054561294AEC10(Local_85.f_5);
			}
		}
	}
	if (!unk_0x86CB59A6776A7C27(Local_85.f_3))
	{
		return 0;
	}
	return 1;
}

int func_10()
{
	if (unk_0x889D01384B54BCE3(unk_0x444ECD635D5FD45F(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_11(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
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

int func_12()
{
	struct<3> Var0;
	var uVar3;
	
	if (!unk_0x86CB59A6776A7C27(Local_85.f_2))
	{
		if (func_26(Local_85.f_4))
		{
			if (func_14(&Var0, &uVar3))
			{
				if (func_13(&(Local_85.f_2), Local_85.f_4, Var0, uVar3, 1, 1, 1, 0, 1, 1))
				{
					unk_0x6EBB9B0E214CCF0F(unk_0x8CB435AA1E25DA51(Local_85.f_2), 1, 1);
					unk_0x2C7188DECD3E4909(unk_0x8CB435AA1E25DA51(Local_85.f_2), 1);
					unk_0x4852ECC2C24A1A6C(unk_0x8CB435AA1E25DA51(Local_85.f_2), 1);
					unk_0xA5F41F91908B2FCB(unk_0x8CB435AA1E25DA51(Local_85.f_2), "JOYRIDER_GROUP", 0f);
					unk_0xEA054561294AEC10(Local_85.f_4);
				}
			}
		}
	}
	if (!unk_0x86CB59A6776A7C27(Local_85.f_2))
	{
		return 0;
	}
	return 1;
}

int func_13(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
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
		if (unk_0xF5F2A2EAFEFB36D2(uVar0))
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
		unk_0x4852ECC2C24A1A6C(uVar0, iParam9);
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
		if (unk_0xB5038FBF5AE651AD(&(Local_85.f_6), uParam0, &uVar2, 0f, 180f, 40f, 0, 1, 1))
		{
			unk_0x8C4964C5036133AB(*uParam0, 1, uParam0, uParam1, &iVar1, 4, 1077936128, 0);
			if (iVar1 >= 1 || unk_0xCCD83ABF02190156(*uParam0) == joaat("City"))
			{
				if (unk_0x4970185D4CC64616(-1367.557f, -3220.598f, 12.9448f, Local_85.f_6, 1) >= 600f && unk_0x4970185D4CC64616(750f, -3200f, 6f, Local_85.f_6, 1) >= 700f)
				{
					if (unk_0x4970185D4CC64616(func_25(unk_0x1788E93557766241()), *uParam0, 1) <= (250f - 50f))
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
		if (func_21(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404570++;
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
	Global_2404570++;
	return 1;
}

int func_16(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_62(unk_0x1788E93557766241(), 1, 1))
		{
			if (!unk_0xF4C685E933068D23())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x4970185D4CC64616(func_25(unk_0x1788E93557766241()), Param0, 1) <= (fVar2 + fParam3))
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
		if (func_62(iVar1, 1, 1))
		{
			if (!func_18(iVar1, 0) && unk_0x6871380D51134D0D(unk_0x1788E93557766241(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x1788E93557766241()))
				{
					if ((func_17(iVar1) || !bParam10) && !Global_2414327[iVar1 /*255*/].f_253)
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
								if (unk_0x4970185D4CC64616(func_25(iVar1), Param0, 1) <= (fVar2 + fParam3))
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
							if (unk_0x4970185D4CC64616(func_25(iVar1), Param0, 1) <= (fVar2 + fParam3))
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

int func_17(int iParam0)
{
	if (unk_0x14D5064869773C21(unk_0xFF34D923BFB5E9FB(iParam0)) || Global_2414327[iParam0 /*255*/].f_239)
	{
		return 1;
	}
	return 0;
}

bool func_18(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1788E93557766241())
	{
		bVar0 = func_19(-1, 0) == 8;
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

int func_19(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_20();
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
		if ((iParam8 == 1 && unk_0x1788E93557766241() != iVar1) || iParam8 == 0)
		{
			if (func_62(iVar1, bParam4, bParam5))
			{
				if (unk_0x6871380D51134D0D(unk_0x1788E93557766241(), iVar1))
				{
					if (!bParam7 || (!unk_0x2DE0B96E966FD817(unk_0xFF34D923BFB5E9FB(iVar1)) && func_17(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241()) != unk_0xA2D6C1E24AF2E058(iVar1))) || unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241()) == -1)
						{
							if (((unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241()) == -1 && uParam9) && bParam6) && func_22(iVar1))
							{
							}
							else if (unk_0x538DF9E5B1DF01EB(unk_0xFF34D923BFB5E9FB(iVar1)))
							{
								if (unk_0x4970185D4CC64616(func_25(iVar1), Param0, 1) < fParam3)
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
	if (func_24(unk_0x1788E93557766241(), iParam0))
	{
		return 1;
	}
	Global_2446020 = { func_23(iParam0) };
	if (unk_0x765DD998E5AD03DC(&Global_2446020))
	{
		return 1;
	}
	return 0;
}

struct<13> func_23(var uParam0)
{
	struct<13> Var0;
	
	unk_0xBE9A3F2CD3728669(uParam0, &Var0, 13);
	return Var0;
}

int func_24(int iParam0, var uParam1)
{
	if (unk_0x70443014BEB6B15D())
	{
		Global_2446020 = { func_23(iParam0) };
		Global_2446033 = { func_23(uParam1) };
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

Vector3 func_25(int iParam0)
{
	return unk_0xBF8499F46AD9093A(unk_0xFF34D923BFB5E9FB(iParam0), 0);
}

int func_26(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x939DA7EBCC6588FF(iParam0);
	return unk_0x5494F37F35C1D7D7(iParam0);
}

bool func_27()
{
	if (!unk_0x889D01384B54BCE3(uLocal_194, 1))
	{
		if (unk_0x4555877B8D40F1EF(func_25(unk_0x1788E93557766241()), iLocal_198, &(Local_85.f_6), 4, 1077936128, 0))
		{
			unk_0xD0E2BFCE93AE3ABD(&iLocal_194, 1);
		}
		else
		{
			iLocal_198++;
		}
	}
	return unk_0x889D01384B54BCE3(iLocal_194, 1);
}

int func_28(var uParam0)
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

void func_29(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xE9849174628A9C50())
		{
			func_30(uParam0, 0, 0);
		}
	}
}

void func_30(var uParam0, bool bParam1, bool bParam2)
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

void func_31()
{
	switch (Local_97[unk_0x044A481E863E2F6B() /*3*/].f_2)
	{
		case 0:
			func_33();
			func_32();
			if (Local_85.f_9 > 0)
			{
				Local_97[unk_0x044A481E863E2F6B() /*3*/].f_2 = 1;
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
	
	if (!unk_0x889D01384B54BCE3(Local_97[unk_0x044A481E863E2F6B() /*3*/].f_1, 0))
	{
		if (func_4(Local_85.f_2) && !func_3(Local_85.f_3))
		{
			iVar0 = unk_0x6360D2FA3AD62AD1(unk_0x8CB435AA1E25DA51(Local_85.f_2));
			fVar1 = unk_0x5AF66EDEBFA76B9B(unk_0x8CB435AA1E25DA51(Local_85.f_2));
			if (iVar0 < 200)
			{
				func_33();
				unk_0x0891776D0327B77A(unk_0x7A16A8A755F44481(Local_85.f_3), uLocal_197);
				unk_0xD0E2BFCE93AE3ABD(&(Local_97[unk_0x044A481E863E2F6B() /*3*/].f_1), 0);
			}
			else if (fVar1 < 3f)
			{
				if ((((unk_0xF2530FE8E8353E7B(unk_0x8CB435AA1E25DA51(Local_85.f_2)) || unk_0x5E8694417D361328(unk_0x8CB435AA1E25DA51(Local_85.f_2), 3, 10000)) || unk_0x5E8694417D361328(unk_0x8CB435AA1E25DA51(Local_85.f_2), 1, 10000)) || unk_0x5E8694417D361328(unk_0x8CB435AA1E25DA51(Local_85.f_2), 0, 10000)) || unk_0x5E8694417D361328(unk_0x8CB435AA1E25DA51(Local_85.f_2), 2, 10000))
				{
					func_33();
					unk_0x0891776D0327B77A(unk_0x7A16A8A755F44481(Local_85.f_3), uLocal_196);
					unk_0xD0E2BFCE93AE3ABD(&(Local_97[unk_0x044A481E863E2F6B() /*3*/].f_1), 0);
				}
			}
		}
	}
}

void func_33()
{
	if (!unk_0x889D01384B54BCE3(iLocal_194, 0))
	{
		if (func_4(Local_85.f_2))
		{
			unk_0x6D98AA46076A68BE(&uLocal_195);
			unk_0x933DC7D168CD6A71(0, unk_0x8CB435AA1E25DA51(Local_85.f_2), Local_85.f_6, 14, 30f, 786468, 15f, 1f, 0);
			unk_0x2B79CD6A5064FB19(0, unk_0x8CB435AA1E25DA51(Local_85.f_2), 30f, 786468);
			unk_0x963BB7C99350D827(uLocal_195);
			unk_0x6D98AA46076A68BE(&uLocal_196);
			unk_0xBB5AA994E06B28E2(0, 0, 1);
			unk_0x963BB7C99350D827(uLocal_196);
			unk_0x6D98AA46076A68BE(&uLocal_197);
			unk_0x933DC7D168CD6A71(0, unk_0x8CB435AA1E25DA51(Local_85.f_2), Local_85.f_6, 5, 30f, 786468, 99999f, 1f, 0);
			unk_0xBB5AA994E06B28E2(0, 0, 1);
			unk_0x963BB7C99350D827(uLocal_197);
			unk_0xD0E2BFCE93AE3ABD(&iLocal_194, 0);
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
			if (Global_262145.f_5006)
			{
				return 0;
			}
			if (func_39(unk_0x1788E93557766241(), 7))
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
			if (func_39(unk_0x1788E93557766241(), 7))
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
			if (func_39(unk_0x1788E93557766241(), 7))
			{
				return 0;
			}
			if (unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_244.f_4, 0) || unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_244.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_38(4))
			{
				return 0;
			}
			if (func_39(unk_0x1788E93557766241(), 7))
			{
				return 0;
			}
			if (unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_244.f_4, 0) || unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_244.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_38(4))
			{
				return 0;
			}
			if (func_39(unk_0x1788E93557766241(), 7))
			{
				return 0;
			}
			if (unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_244.f_4, 0) || unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_244.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_38(4))
			{
				return 0;
			}
			if (func_39(unk_0x1788E93557766241(), 7))
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
			if (func_38(4))
			{
				return 0;
			}
			if (func_39(unk_0x1788E93557766241(), 7))
			{
				return 0;
			}
			if (unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_244.f_4, 0) || unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_244.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_38(4))
			{
				return 0;
			}
			if (func_39(unk_0x1788E93557766241(), 7))
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
		if (func_62(unk_0x42C0B50857BF923B(iVar0), 0, 1))
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

bool func_39(int iParam0, int iParam1)
{
	return unk_0x889D01384B54BCE3(Global_2414327[iParam0 /*255*/].f_205, iParam1);
}

int func_40()
{
	bool bVar0;
	
	func_47(&bVar0);
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
	if (func_46())
	{
		return 1;
	}
	if (Global_2437386)
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
	if (!unk_0x54CE0989F263D8A3())
	{
		return 1;
	}
	if (func_41() != 0)
	{
		if (unk_0x16CDA1894CFE0781(func_41()) == 0)
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
	return Global_24446;
}

bool func_43()
{
	return Global_2428577.f_572;
}

int func_44(int iParam0)
{
	if (unk_0xA519E4AC66148E87(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_45()
{
	return Global_2435556;
}

bool func_46()
{
	return Global_2428577.f_567;
}

void func_47(var uParam0)
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
					func_48(iVar0);
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

void func_48(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x6A4B863200ABAA44(1, iParam0, &Var0, 3))
	{
		if (func_62(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xFF34D923BFB5E9FB(Var0.f_1);
			if (unk_0x538DF9E5B1DF01EB(uVar3))
			{
				if (unk_0x202EF5D8203705EF(uVar3, 0))
				{
					uVar4 = unk_0x6ADAC08D70C79DE5(uVar3, 0);
					if (unk_0xA7FB2A2F471A969B(uVar4, Var0.f_2) && unk_0x93C72DAC35C5D38C())
					{
						if (func_49(uVar4, &bVar5))
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

int func_49(var uParam0, var uParam1)
{
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		if (!unk_0x22349EC06EA5B08B(uParam0))
		{
			if (unk_0xFD9706CAB35EA810(uParam0))
			{
				unk_0x7B9576B4E099FB1F(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0xD8233CB95CB48A7C(uParam0, 0))
		{
			if (unk_0xC7402AE8FD6AACA2(uParam0))
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
		unk_0x32DC163A33A4AB6D(Local_85.f_4, 0);
	}
	if (func_4(Local_85.f_2))
	{
		unk_0x9122271AF278554B(unk_0x8CB435AA1E25DA51(Local_85.f_2), 0f);
	}
	unk_0x124843CE93F39C27("JOYRIDER_RADIO_SCENE");
	func_53(9, 0);
	func_52();
}

void func_52()
{
	unk_0x82706E6C897B0FA1();
}

void func_53(int iParam0, bool bParam1)
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

void func_54()
{
	unk_0x2AF68ED52DC74B7D(&uLocal_195);
}

void func_55(struct<20> Param0)
{
	int iVar0;
	
	func_60(func_61(Param0.f_0), Param0);
	unk_0x1EB75D4128DBB6C4(1);
	unk_0x29AA9A92BCC0F8E3(1);
	func_58(0, -1, 0);
	unk_0x241F80BF72379478(&Local_85, 12);
	unk_0x51FC2B81A21C009A(&Local_97, 97);
	if (!func_57())
	{
		func_51();
	}
	if (unk_0x1DAD7CE53BEE7710())
	{
		unk_0xFF9F94FD851C212A(0);
		if (unk_0xE9849174628A9C50())
		{
			if (Global_2446992.f_4227 == 0)
			{
				iVar0 = unk_0x444ECD635D5FD45F(0, 7);
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
				Local_85.f_4 = Global_2446992.f_4227;
				Global_2446992.f_4227 = 0;
			}
			unk_0x32DC163A33A4AB6D(Local_85.f_4, 1);
			Local_85.f_5 = func_56(1);
		}
		func_53(9, 1);
		unk_0x3EF2F05E6EA65602("JOYRIDER_RADIO_SCENE");
		Local_97[unk_0x044A481E863E2F6B() /*3*/] = 0;
	}
	else
	{
		func_51();
	}
}

int func_56(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0x444ECD635D5FD45F(0, 32);
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
		if (!unk_0x1DAD7CE53BEE7710())
		{
			return 0;
		}
		if (unk_0x5D0D85F8A1CCEE45())
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
	
	iVar0 = unk_0x92078BBBAEFC7998();
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
				if (!unk_0x1DAD7CE53BEE7710())
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
			else if (!unk_0x0987AD2F87AA4427())
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
				func_52();
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
	return Global_1315866;
}

void func_60(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x1DAD7CE53BEE7710())
	{
		func_52();
	}
	unk_0x3005435C0CFEEE94(uParam0, 0, Param1.f_16);
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

int func_62(int iParam0, bool bParam1, bool bParam2)
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

