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
	if (unk_0xD95428C8AA1DBBF2() && func_62(unk_0xAF65E5A58BE87D95(), 0, 1))
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
		if (unk_0x1965D5FB1AA96228())
		{
			func_51();
		}
		switch (func_35(unk_0x9DCF1243D4AAD942()))
		{
			case 0:
				if (func_34() == 1)
				{
					func_33();
					Local_97[unk_0x9DCF1243D4AAD942() /*3*/] = 1;
				}
				else if (func_34() == 4)
				{
					Local_97[unk_0x9DCF1243D4AAD942() /*3*/] = 3;
				}
				break;
			
			case 1:
				if (func_34() == 1)
				{
					func_31();
				}
				else if (func_34() == 4)
				{
					Local_97[unk_0x9DCF1243D4AAD942() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_29(&(Local_85.f_10));
				if (func_28(&(Local_85.f_10)))
				{
					Local_97[unk_0x9DCF1243D4AAD942() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_97[unk_0x9DCF1243D4AAD942() /*3*/] = 4;
			
			case 4:
				func_51();
				break;
		}
		if (unk_0x2CCDE625E685C339())
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
				if (unk_0x61D8FEAF64881CDA(Local_85.f_1, 0))
				{
					return 1;
				}
			}
			if (!unk_0x53170344050F2301(unk_0xE6286B95AEF7B8C2(Local_85.f_3), unk_0xDACD0CF3BB366AB6(Local_85.f_2), 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_3(var uParam0)
{
	if (unk_0x3D8BF0E3847B29E0(uParam0))
	{
		return unk_0x9F94F2CFDCA78C55(unk_0xE6286B95AEF7B8C2(uParam0));
	}
	return 1;
}

int func_4(var uParam0)
{
	if (unk_0x3D8BF0E3847B29E0(uParam0))
	{
		return !func_5(unk_0xDACD0CF3BB366AB6(uParam0));
	}
	return 0;
}

int func_5(var uParam0)
{
	if (unk_0xFD68187442384158(uParam0))
	{
		if (unk_0xE5D56342B0FF1D0D(uParam0))
		{
			return 1;
		}
		else if (!unk_0xCA8794CE207FC6D5(uParam0, 0))
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
		unk_0x3DBE2A7AF9E71C82(&(Local_85.f_1), 0);
	}
	if (func_4(Local_85.f_2))
	{
		iVar0 = 1;
	}
	if (unk_0xD0E2103B183CBA60(unk_0xC54850646145FF41(iLocal_201)))
	{
		iVar1 = unk_0x6E852073107AE8FE(unk_0xC54850646145FF41(iLocal_201));
		uVar2 = unk_0x687D51F360787909(iVar1);
		if (func_62(iVar1, 1, 1))
		{
			if (unk_0x61D8FEAF64881CDA(Local_85.f_1, 0))
			{
				if (iVar0 == 1)
				{
					if (unk_0x2F406E91B59DB558(uVar2, unk_0xDACD0CF3BB366AB6(Local_85.f_2), 250f, 250f, 250f, 0, 1, 0))
					{
						unk_0xCD27BF29FB9012E2(&(Local_85.f_1), 0);
					}
				}
				else
				{
					unk_0xCD27BF29FB9012E2(&(Local_85.f_1), 0);
				}
			}
		}
	}
	iLocal_201++;
	if (iLocal_201 == unk_0x0F0C172200951A9A())
	{
		iLocal_201 = 0;
		iLocal_202 = 1;
	}
}

int func_8()
{
	if (unk_0xDD4EF4723F36D8F0(1, 1, 0, 0))
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
	
	if ((!unk_0x3D8BF0E3847B29E0(Local_85.f_3) && func_26(Local_85.f_5)) && unk_0x3D8BF0E3847B29E0(Local_85.f_2))
	{
		if (func_4(Local_85.f_2))
		{
			if (func_11(&(Local_85.f_3), Local_85.f_2, 22, Local_85.f_5, -1, 1, 1, 1))
			{
				unk_0x146FCBEC0D4289BF(unk_0xE6286B95AEF7B8C2(Local_85.f_3), 0);
				if (func_10())
				{
					unk_0xE440546F94B26235(unk_0xE6286B95AEF7B8C2(Local_85.f_3), Global_1574050);
				}
				else
				{
					unk_0xE440546F94B26235(unk_0xE6286B95AEF7B8C2(Local_85.f_3), Global_1574053);
				}
				unk_0xA1E4BA3B17C6D931(unk_0xE6286B95AEF7B8C2(Local_85.f_3), 1);
				if (func_10())
				{
					iVar0 = unk_0x4D3E68F73B727E49(0, 10);
					if (iVar0 < 5)
					{
						unk_0x22E3FB128E67BC05(unk_0xE6286B95AEF7B8C2(Local_85.f_3), joaat("weapon_pistol"), 25000, func_10());
					}
					else if (iVar0 > 6)
					{
						unk_0x22E3FB128E67BC05(unk_0xE6286B95AEF7B8C2(Local_85.f_3), joaat("weapon_microsmg"), 25000, func_10());
					}
					else
					{
						unk_0x22E3FB128E67BC05(unk_0xE6286B95AEF7B8C2(Local_85.f_3), joaat("weapon_pumpshotgun"), 25000, func_10());
					}
				}
				iVar0 = unk_0x4D3E68F73B727E49(0, 10);
				if (iVar0 == 0 || iVar0 == 1)
				{
					unk_0x0E53A759D522CA83(unk_0xE6286B95AEF7B8C2(Local_85.f_3), 0);
				}
				else if ((iVar0 == 2 || iVar0 == 3) || iVar0 == 4)
				{
					unk_0x0E53A759D522CA83(unk_0xE6286B95AEF7B8C2(Local_85.f_3), 2);
				}
				else
				{
					unk_0x0E53A759D522CA83(unk_0xE6286B95AEF7B8C2(Local_85.f_3), 1);
				}
				iVar0 = unk_0x4D3E68F73B727E49(0, 4);
				if (iVar0 == 0)
				{
					unk_0x3A1E687904400847(unk_0xE6286B95AEF7B8C2(Local_85.f_3), 5, 1);
				}
				else if (iVar0 == 1)
				{
					unk_0x3A1E687904400847(unk_0xE6286B95AEF7B8C2(Local_85.f_3), 17, 1);
				}
				else if (iVar0 == 2)
				{
					unk_0x3A1E687904400847(unk_0xE6286B95AEF7B8C2(Local_85.f_3), 13, 1);
				}
				if (func_10())
				{
					unk_0x3A1E687904400847(unk_0xE6286B95AEF7B8C2(Local_85.f_3), 20, 1);
				}
				if (func_10())
				{
					unk_0x3A1E687904400847(unk_0xE6286B95AEF7B8C2(Local_85.f_3), 2, 1);
				}
				iVar0 = unk_0x4D3E68F73B727E49(0, 4);
				if (iVar0 == 0)
				{
					unk_0x48FFA098B5BE8ED0(unk_0xE6286B95AEF7B8C2(Local_85.f_3), 2);
				}
				else if (iVar0 == 1)
				{
					unk_0x48FFA098B5BE8ED0(unk_0xE6286B95AEF7B8C2(Local_85.f_3), 1);
				}
				else if (iVar0 == 2)
				{
					unk_0x48FFA098B5BE8ED0(unk_0xE6286B95AEF7B8C2(Local_85.f_3), 3);
				}
				unk_0xD9ED5246EF17B30F(unk_0xE6286B95AEF7B8C2(Local_85.f_3), 1);
				unk_0xEC19F55466DE878B(unk_0xE6286B95AEF7B8C2(Local_85.f_3), 1);
				unk_0x7FEDD088E489CE41(unk_0xE6286B95AEF7B8C2(Local_85.f_3), 29, 1);
				unk_0xAEC837DFD456FB5E(unk_0xE6286B95AEF7B8C2(Local_85.f_3), 3);
				unk_0x3E16CE93BAE616EE(unk_0xE6286B95AEF7B8C2(Local_85.f_3), unk_0xF2DB717A73826179((200f * Global_262145.f_133)));
				unk_0xE2519ECBDF6A0ECC(unk_0xDACD0CF3BB366AB6(Local_85.f_2), 1);
				unk_0x9BE3CF0D916E6F6A(unk_0xDACD0CF3BB366AB6(Local_85.f_2), 1);
				func_33();
				unk_0x8229311A391A4EC6(unk_0xE6286B95AEF7B8C2(Local_85.f_3), uLocal_195);
				unk_0xFF467904A8A12BBE(Local_85.f_5);
			}
		}
	}
	if (!unk_0x3D8BF0E3847B29E0(Local_85.f_3))
	{
		return 0;
	}
	return 1;
}

int func_10()
{
	if (unk_0x61D8FEAF64881CDA(unk_0x4D3E68F73B727E49(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_11(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x743224EE855B1894(1))
	{
		return 0;
	}
	if (!unk_0x3D8BF0E3847B29E0(uParam1))
	{
		return 0;
	}
	if (!unk_0xCA8794CE207FC6D5(unk_0xDACD0CF3BB366AB6(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x522900D6F6631F0E(unk_0xC68FBD37098CE438(unk_0xDACD0CF3BB366AB6(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0x3D8BF0E3847B29E0(*uParam0))
	{
		unk_0x5BA593EA32D0187E(unk_0xE6286B95AEF7B8C2(*uParam0), iParam7);
		if (unk_0xFD54DBFF23B29E98(unk_0xE6286B95AEF7B8C2(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x9459531F5B8A4A2F(*uParam0, 1);
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
	
	if (!unk_0x3D8BF0E3847B29E0(Local_85.f_2))
	{
		if (func_26(Local_85.f_4))
		{
			if (func_14(&Var0, &uVar3))
			{
				if (func_13(&(Local_85.f_2), Local_85.f_4, Var0, uVar3, 1, 1, 1, 0, 1, 1))
				{
					unk_0xE0E038A4E5C7727B(unk_0xDACD0CF3BB366AB6(Local_85.f_2), 1, 1);
					unk_0x7E6050AB562A74F2(unk_0xDACD0CF3BB366AB6(Local_85.f_2), 1);
					unk_0x464A1A49361CDE18(unk_0xDACD0CF3BB366AB6(Local_85.f_2), 1);
					unk_0x182B7266FFDC76F3(unk_0xDACD0CF3BB366AB6(Local_85.f_2), "JOYRIDER_GROUP", 0f);
					unk_0xFF467904A8A12BBE(Local_85.f_4);
				}
			}
		}
	}
	if (!unk_0x3D8BF0E3847B29E0(Local_85.f_2))
	{
		return 0;
	}
	return 1;
}

int func_13(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	
	if (!unk_0x4BB625F7911DD339(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0x407F91A831576A66(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0x546974B676313326(uParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0x61B4CBE0A0FF746E(uVar0);
	if (unk_0x3D8BF0E3847B29E0(*uParam0))
	{
		unk_0x5BA593EA32D0187E(uVar0, iParam10);
		if (unk_0xFD54DBFF23B29E98(uVar0))
		{
			if (bParam8)
			{
				unk_0x9459531F5B8A4A2F(*uParam0, 1);
			}
			else
			{
				unk_0x9459531F5B8A4A2F(*uParam0, 0);
			}
		}
		unk_0x464A1A49361CDE18(uVar0, iParam9);
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
		if (unk_0xF2AAB57248BA7736(&(Local_85.f_6), uParam0, &uVar2, 0f, 180f, 40f, 0, 1, 1))
		{
			unk_0x3D84F9AECFD58EB5(*uParam0, 1, uParam0, uParam1, &iVar1, 4, 1077936128, 0);
			if (iVar1 >= 1 || unk_0x23407968FA594DB9(*uParam0) == joaat("City"))
			{
				if (unk_0x8FE221761D524CFE(-1367.557f, -3220.598f, 12.9448f, Local_85.f_6, 1) >= 600f && unk_0x8FE221761D524CFE(750f, -3200f, 6f, Local_85.f_6, 1) >= 700f)
				{
					if (unk_0x8FE221761D524CFE(func_25(unk_0xAF65E5A58BE87D95()), *uParam0, 1) <= (250f - 50f))
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
	Global_2404546 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x1DB23BF4B2FFF9BA(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x98DDD45D8A6467D0(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x98DDD45D8A6467D0(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x3D4E28BCE4C60954(Param0, fParam5, 0))
		{
			return 0;
		}
	}
	Global_2404546++;
	if (bParam13)
	{
		if (unk_0xF97CA70F2DB85F21(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404546++;
	if (fParam14 > 0f)
	{
		if (func_21(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404546++;
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
	Global_2404546++;
	return 1;
}

int func_16(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_62(unk_0xAF65E5A58BE87D95(), 1, 1))
		{
			if (!unk_0xC2C705ED6124A7C2())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x8FE221761D524CFE(func_25(unk_0xAF65E5A58BE87D95()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x23A9305227426F8B(Param0, fParam3))
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
			if (!func_18(iVar1, 0) && unk_0x73AB522FB7F2E420(unk_0xAF65E5A58BE87D95(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xAF65E5A58BE87D95()))
				{
					if ((func_17(iVar1) || !bParam10) && !Global_2413868[iVar1 /*253*/].f_252)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x5805EAF13FC54BE6(iVar1) == -1)
							{
								if (unk_0x5805EAF13FC54BE6(iVar1) == unk_0x5805EAF13FC54BE6(unk_0xAF65E5A58BE87D95()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x5805EAF13FC54BE6(iVar1) != unk_0x5805EAF13FC54BE6(unk_0xAF65E5A58BE87D95()))) || unk_0x5805EAF13FC54BE6(iVar1) == -1)
							{
								if (unk_0x8FE221761D524CFE(func_25(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0xEDACD0E59C5E7D93(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x5805EAF13FC54BE6(iVar1) != iParam8 || unk_0x5805EAF13FC54BE6(iVar1) == -1)
						{
							if (unk_0x8FE221761D524CFE(func_25(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0xEDACD0E59C5E7D93(iVar1, Param0, fParam3))
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
	if (unk_0x1ACC4CD5A7C76F75(unk_0x687D51F360787909(iParam0)) || Global_2413868[iParam0 /*253*/].f_239)
	{
		return 1;
	}
	return 0;
}

bool func_18(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xAF65E5A58BE87D95())
	{
		bVar0 = func_19(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582048[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xB832D52B86777A35(iParam0))
		{
			bVar0 = unk_0x5805EAF13FC54BE6(iParam0) == 8;
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

int func_20()
{
	return Global_1312736;
}

int func_21(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0xAF65E5A58BE87D95() != iVar1) || iParam8 == 0)
		{
			if (func_62(iVar1, bParam4, bParam5))
			{
				if (unk_0x73AB522FB7F2E420(unk_0xAF65E5A58BE87D95(), iVar1))
				{
					if (!bParam7 || (!unk_0x9F94F2CFDCA78C55(unk_0x687D51F360787909(iVar1)) && func_17(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x5805EAF13FC54BE6(unk_0xAF65E5A58BE87D95()) != unk_0x5805EAF13FC54BE6(iVar1))) || unk_0x5805EAF13FC54BE6(unk_0xAF65E5A58BE87D95()) == -1)
						{
							if (((unk_0x5805EAF13FC54BE6(unk_0xAF65E5A58BE87D95()) == -1 && uParam9) && bParam6) && func_22(iVar1))
							{
							}
							else if (unk_0xFD68187442384158(unk_0x687D51F360787909(iVar1)))
							{
								if (unk_0x8FE221761D524CFE(func_25(iVar1), Param0, 1) < fParam3)
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
	if (func_24(unk_0xAF65E5A58BE87D95(), iParam0))
	{
		return 1;
	}
	Global_2445239 = { func_23(iParam0) };
	if (unk_0x8EF73C99D8AA61C0(&Global_2445239))
	{
		return 1;
	}
	return 0;
}

struct<13> func_23(var uParam0)
{
	struct<13> Var0;
	
	unk_0x0D7D678636A21203(uParam0, &Var0, 13);
	return Var0;
}

int func_24(int iParam0, var uParam1)
{
	if (unk_0x48005FE1241D4091())
	{
		Global_2445239 = { func_23(iParam0) };
		Global_2445252 = { func_23(uParam1) };
		if (unk_0x39606F3949DA3895(&Global_2445239))
		{
			if (unk_0x39606F3949DA3895(&Global_2445252))
			{
				unk_0x96899C28EF61DCA9(&Global_2445169, 35, &Global_2445239);
				unk_0x96899C28EF61DCA9(&Global_2445204, 35, &Global_2445252);
				if (Global_2445169 == Global_2445204)
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
	return unk_0xBF1B13057E5119A4(unk_0x687D51F360787909(iParam0), 0);
}

int func_26(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xCBE6AC5010E5CE5C(iParam0);
	return unk_0xD291857D0C9C7FEC(iParam0);
}

bool func_27()
{
	if (!unk_0x61D8FEAF64881CDA(uLocal_194, 1))
	{
		if (unk_0x28360C2B9B86505E(func_25(unk_0xAF65E5A58BE87D95()), iLocal_198, &(Local_85.f_6), 4, 1077936128, 0))
		{
			unk_0x3DBE2A7AF9E71C82(&iLocal_194, 1);
		}
		else
		{
			iLocal_198++;
		}
	}
	return unk_0x61D8FEAF64881CDA(iLocal_194, 1);
}

int func_28(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xEC8415598F0CAF4B(unk_0x88702B74B95C046D(unk_0xFACC0E85E40AD425(), *uParam0)) >= 1000)
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
		if (unk_0x2CCDE625E685C339())
		{
			func_30(uParam0, 0, 0);
		}
	}
}

void func_30(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0xD95428C8AA1DBBF2() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xFACC0E85E40AD425();
			}
			else
			{
				*uParam0 = unk_0x49BD9731DF21C969();
			}
		}
		else
		{
			*uParam0 = unk_0xF976C624234A4AA8();
		}
		uParam0->f_1 = 1;
	}
}

void func_31()
{
	switch (Local_97[unk_0x9DCF1243D4AAD942() /*3*/].f_2)
	{
		case 0:
			func_33();
			func_32();
			if (Local_85.f_9 > 0)
			{
				Local_97[unk_0x9DCF1243D4AAD942() /*3*/].f_2 = 1;
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
	
	if (!unk_0x61D8FEAF64881CDA(Local_97[unk_0x9DCF1243D4AAD942() /*3*/].f_1, 0))
	{
		if (func_4(Local_85.f_2) && !func_3(Local_85.f_3))
		{
			iVar0 = unk_0x5D422B4764FA2ACA(unk_0xDACD0CF3BB366AB6(Local_85.f_2));
			fVar1 = unk_0x11F6A4A45943670E(unk_0xDACD0CF3BB366AB6(Local_85.f_2));
			if (iVar0 < 200)
			{
				func_33();
				unk_0x8229311A391A4EC6(unk_0xE6286B95AEF7B8C2(Local_85.f_3), uLocal_197);
				unk_0x3DBE2A7AF9E71C82(&(Local_97[unk_0x9DCF1243D4AAD942() /*3*/].f_1), 0);
			}
			else if (fVar1 < 3f)
			{
				if ((((unk_0x932B30DC68C85A46(unk_0xDACD0CF3BB366AB6(Local_85.f_2)) || unk_0xD803509E70F20530(unk_0xDACD0CF3BB366AB6(Local_85.f_2), 3, 10000)) || unk_0xD803509E70F20530(unk_0xDACD0CF3BB366AB6(Local_85.f_2), 1, 10000)) || unk_0xD803509E70F20530(unk_0xDACD0CF3BB366AB6(Local_85.f_2), 0, 10000)) || unk_0xD803509E70F20530(unk_0xDACD0CF3BB366AB6(Local_85.f_2), 2, 10000))
				{
					func_33();
					unk_0x8229311A391A4EC6(unk_0xE6286B95AEF7B8C2(Local_85.f_3), uLocal_196);
					unk_0x3DBE2A7AF9E71C82(&(Local_97[unk_0x9DCF1243D4AAD942() /*3*/].f_1), 0);
				}
			}
		}
	}
}

void func_33()
{
	if (!unk_0x61D8FEAF64881CDA(iLocal_194, 0))
	{
		if (func_4(Local_85.f_2))
		{
			unk_0xB5DC017AFD430D1B(&uLocal_195);
			unk_0xFF2E41BCADB4BDD3(0, unk_0xDACD0CF3BB366AB6(Local_85.f_2), Local_85.f_6, 14, 30f, 786468, 15f, 1f, 0);
			unk_0xF40D4EBDC0BA2C26(0, unk_0xDACD0CF3BB366AB6(Local_85.f_2), 30f, 786468);
			unk_0x6EE8A5CF9AC75F12(uLocal_195);
			unk_0xB5DC017AFD430D1B(&uLocal_196);
			unk_0x48367A1F7C9A1041(0, 0, 1);
			unk_0x6EE8A5CF9AC75F12(uLocal_196);
			unk_0xB5DC017AFD430D1B(&uLocal_197);
			unk_0xFF2E41BCADB4BDD3(0, unk_0xDACD0CF3BB366AB6(Local_85.f_2), Local_85.f_6, 5, 30f, 786468, 99999f, 1f, 0);
			unk_0x48367A1F7C9A1041(0, 0, 1);
			unk_0x6EE8A5CF9AC75F12(uLocal_197);
			unk_0x3DBE2A7AF9E71C82(&iLocal_194, 0);
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
			if (Global_262145.f_4980)
			{
				return 0;
			}
			if (func_39(unk_0xAF65E5A58BE87D95(), 7))
			{
				return 0;
			}
			if (unk_0x61D8FEAF64881CDA(Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_235.f_4, 0) || unk_0x61D8FEAF64881CDA(Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_4981)
			{
				return 0;
			}
			if (func_39(unk_0xAF65E5A58BE87D95(), 7))
			{
				return 0;
			}
			if (unk_0x61D8FEAF64881CDA(Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_235.f_4, 0) || unk_0x61D8FEAF64881CDA(Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_235.f_4, 1))
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
			if (func_39(unk_0xAF65E5A58BE87D95(), 7))
			{
				return 0;
			}
			if (unk_0x61D8FEAF64881CDA(Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_235.f_4, 0) || unk_0x61D8FEAF64881CDA(Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_38(4))
			{
				return 0;
			}
			if (func_39(unk_0xAF65E5A58BE87D95(), 7))
			{
				return 0;
			}
			if (unk_0x61D8FEAF64881CDA(Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_235.f_4, 0) || unk_0x61D8FEAF64881CDA(Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 18:
			if (func_38(4))
			{
				return 0;
			}
			if (func_39(unk_0xAF65E5A58BE87D95(), 7))
			{
				return 0;
			}
			if (unk_0x61D8FEAF64881CDA(Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_235.f_4, 0) || unk_0x61D8FEAF64881CDA(Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_38(4))
			{
				return 0;
			}
			if (func_39(unk_0xAF65E5A58BE87D95(), 7))
			{
				return 0;
			}
			if (unk_0x61D8FEAF64881CDA(Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_235.f_4, 0) || unk_0x61D8FEAF64881CDA(Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_235.f_4, 1))
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
		if (func_62(unk_0xAE744CCC666ACB74(iVar0), 0, 1))
		{
			if (unk_0x61D8FEAF64881CDA(Global_2413868[iVar0 /*253*/].f_205, iParam0))
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
	return unk_0x61D8FEAF64881CDA(Global_2413868[iParam0 /*253*/].f_205, iParam1);
}

int func_40()
{
	bool bVar0;
	
	func_47(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315872 == 0)
	{
		if (!unk_0xD95428C8AA1DBBF2())
		{
			return 1;
		}
	}
	if (func_46())
	{
		return 1;
	}
	if (Global_2436715)
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
	if (!unk_0x0E4B4CA22DBCFA69())
	{
		return 1;
	}
	if (func_41() != 0)
	{
		if (unk_0x25531002BCF0D968(func_41()) == 0)
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
	return Global_24444;
}

bool func_43()
{
	return Global_2427935.f_570;
}

int func_44(int iParam0)
{
	if (unk_0x289D054E2E18C82E(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_45()
{
	return Global_2434971;
}

bool func_46()
{
	return Global_2427935.f_565;
}

void func_47(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xB301423C53556EA6(1))
	{
		iVar1 = unk_0xAAB64DCC229F922F(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x6EDD33D6B8546C95(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 305:
					func_48(iVar0);
					break;
				
				case 2:
					unk_0x6EDD33D6B8546C95(1, iVar0, &Var4, 3);
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
	
	if (unk_0x6EDD33D6B8546C95(1, iParam0, &Var0, 3))
	{
		if (func_62(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x687D51F360787909(Var0.f_1);
			if (unk_0xFD68187442384158(uVar3))
			{
				if (unk_0x2A24448FF232F834(uVar3, 0))
				{
					uVar4 = unk_0x78AB10B64129B3D5(uVar3, 0);
					if (unk_0x9067781626AA370D(uVar4, Var0.f_2) && unk_0x0D1738F09A13D367())
					{
						if (func_49(uVar4, &bVar5))
						{
							unk_0xA8B02A3D719BC7B0(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xB67623A401171555(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_49(var uParam0, var uParam1)
{
	if (unk_0xFD68187442384158(uParam0))
	{
		if (!unk_0x73E2404DC70203CD(uParam0))
		{
			if (unk_0x9ACF2D423F8B5749(uParam0))
			{
				unk_0xBAE5DF507EEC53C8(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x51BC2FF711F8CF71(uParam0, 0))
		{
			if (unk_0xFE0D96A75DA37EB0(uParam0))
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
		unk_0x941F924D5E9C2140(Local_85.f_4, 0);
	}
	if (func_4(Local_85.f_2))
	{
		unk_0x66685ABDD5A8BFC3(unk_0xDACD0CF3BB366AB6(Local_85.f_2), 0f);
	}
	unk_0xAB5C0FE0C680BC7F("JOYRIDER_RADIO_SCENE");
	func_53(9, 0);
	func_52();
}

void func_52()
{
	unk_0x883793591E631A3B();
}

void func_53(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x61D8FEAF64881CDA(Global_2413868[unk_0xAF65E5A58BE87D95() /*253*/].f_205, iParam0))
		{
			unk_0x3DBE2A7AF9E71C82(&(Global_2413868[unk_0xAF65E5A58BE87D95() /*253*/].f_205), iParam0);
		}
	}
	else if (unk_0x61D8FEAF64881CDA(Global_2413868[unk_0xAF65E5A58BE87D95() /*253*/].f_205, iParam0))
	{
		unk_0xCD27BF29FB9012E2(&(Global_2413868[unk_0xAF65E5A58BE87D95() /*253*/].f_205), iParam0);
	}
}

void func_54()
{
	unk_0x9F77DFFC61FCB68C(&uLocal_195);
}

void func_55(struct<20> Param0)
{
	int iVar0;
	
	func_60(func_61(Param0.f_0), Param0);
	unk_0x31C8FBE30948E037(1);
	unk_0xB5C67549F1765883(1);
	func_58(0, -1, 0);
	unk_0x661B032797391228(&Local_85, 12);
	unk_0xEF4D8ADC6645E7F7(&Local_97, 97);
	if (!func_57())
	{
		func_51();
	}
	if (unk_0xD95428C8AA1DBBF2())
	{
		unk_0xB43679BBB30F1391(0);
		if (unk_0x2CCDE625E685C339())
		{
			if (Global_2446210.f_4216 == 0)
			{
				iVar0 = unk_0x4D3E68F73B727E49(0, 7);
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
				Local_85.f_4 = Global_2446210.f_4216;
				Global_2446210.f_4216 = 0;
			}
			unk_0x941F924D5E9C2140(Local_85.f_4, 1);
			Local_85.f_5 = func_56(1);
		}
		func_53(9, 1);
		unk_0xD56AC40382654643("JOYRIDER_RADIO_SCENE");
		Local_97[unk_0x9DCF1243D4AAD942() /*3*/] = 0;
	}
	else
	{
		func_51();
	}
}

int func_56(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0x4D3E68F73B727E49(0, 32);
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
		if (!unk_0xD95428C8AA1DBBF2())
		{
			return 0;
		}
		if (unk_0x0483A743E1339A51())
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
	
	iVar0 = unk_0x2B79F83CAD49E762();
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
				if (!unk_0xD95428C8AA1DBBF2())
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
			else if (!unk_0xD5762A6870CA7430())
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
		iVar0 = unk_0x2B79F83CAD49E762();
	}
	if (iParam1 > -1)
	{
		Global_1312503 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0xD95428C8AA1DBBF2())
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
	else if (!unk_0xD5762A6870CA7430())
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
	return Global_1315872;
}

void func_60(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0xD95428C8AA1DBBF2())
	{
		func_52();
	}
	unk_0x4C2DEED020A287EF(uParam0, 0, Param1.f_16);
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

int func_62(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xB832D52B86777A35(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x52A84D9C3A400EA8(iParam0))
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

