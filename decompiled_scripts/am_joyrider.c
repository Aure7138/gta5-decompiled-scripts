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
	int iLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
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
	var uLocal_55 = 0;
	var uLocal_56 = 8;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 2;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 8;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 8;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	struct<11> Local_86 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_97 = 0;
	struct<3> Local_98[32];
	int iLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	int iLocal_203 = 0;
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
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_200 = 20;
	if (unk_0x00AAD79B42B3E036() && func_65(unk_0x3F80C6638E3A1A90(), 0, 1))
	{
		func_58(ScriptParam_0);
	}
	else
	{
		func_54();
	}
	while (true)
	{
		func_53();
		if (func_43() || func_39(9))
		{
			func_54();
		}
		if (unk_0x9321E9548CA02149())
		{
			func_54();
		}
		switch (func_38(unk_0xA1238458CB587858()))
		{
			case 0:
				if (func_37() == 1)
				{
					func_36();
					Local_98[unk_0xA1238458CB587858() /*3*/] = 1;
				}
				else if (func_37() == 4)
				{
					Local_98[unk_0xA1238458CB587858() /*3*/] = 3;
				}
				break;
			
			case 1:
				if (func_37() == 1)
				{
					func_34();
				}
				else if (func_37() == 4)
				{
					Local_98[unk_0xA1238458CB587858() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_32(&(Local_86.f_10));
				if (func_31(&(Local_86.f_10)))
				{
					Local_98[unk_0xA1238458CB587858() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_98[unk_0xA1238458CB587858() /*3*/] = 4;
			
			case 4:
				func_54();
				break;
		}
		if (unk_0xFA4B36553B2A7802())
		{
			switch (func_37())
			{
				case 0:
					if (func_30())
					{
						if (func_8())
						{
							Local_86.f_0 = 1;
						}
					}
					break;
				
				case 1:
					func_7();
					func_6();
					if (func_1())
					{
						Local_86.f_0 = 4;
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
	if (Local_86.f_9 == 0)
	{
		if (!func_4(Local_86.f_2))
		{
			return 1;
		}
		else if (func_3(Local_86.f_3))
		{
			return 1;
		}
		else
		{
			if (iLocal_203 == 1)
			{
				if (unk_0xB519E5386FBF69E5(Local_86.f_1, 0))
				{
					return 1;
				}
			}
			if (!unk_0x8AF655CC5761C7A2(unk_0x9F2866A966FBAE78(Local_86.f_3), unk_0xFE740C3B53EEBEE2(Local_86.f_2), 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_3(var uParam0)
{
	if (unk_0xDC1FDD911B88C6F2(uParam0))
	{
		return unk_0xAF437D7C802AB246(unk_0x9F2866A966FBAE78(uParam0));
	}
	return 1;
}

int func_4(var uParam0)
{
	if (unk_0xDC1FDD911B88C6F2(uParam0))
	{
		return !func_5(unk_0xFE740C3B53EEBEE2(uParam0));
	}
	return 0;
}

int func_5(var uParam0)
{
	if (unk_0xD51CFE69539DB6D8(uParam0))
	{
		if (unk_0x76B2D234F1895632(uParam0))
		{
			return 1;
		}
		else if (!unk_0xC45A34912542C4EB(uParam0, 0))
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
	switch (Local_86.f_9)
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
	
	if (iLocal_202 == 0)
	{
		iLocal_203 = 0;
		unk_0x9956FB0E4B50ECB8(&(Local_86.f_1), 0);
	}
	if (func_4(Local_86.f_2))
	{
		iVar0 = 1;
	}
	if (unk_0x7144266D2DB1A46F(unk_0x2A0D2AD241778491(iLocal_202)))
	{
		iVar1 = unk_0x39078CE05613D134(unk_0x2A0D2AD241778491(iLocal_202));
		uVar2 = unk_0x91B73D905EA38F6B(iVar1);
		if (func_65(iVar1, 1, 1))
		{
			if (unk_0xB519E5386FBF69E5(Local_86.f_1, 0))
			{
				if (iVar0 == 1)
				{
					if (unk_0x0E6C083BC5101C8B(uVar2, unk_0xFE740C3B53EEBEE2(Local_86.f_2), 250f, 250f, 250f, 0, 1, 0))
					{
						unk_0x73817D396768E4C6(&(Local_86.f_1), 0);
					}
				}
				else
				{
					unk_0x73817D396768E4C6(&(Local_86.f_1), 0);
				}
			}
		}
	}
	iLocal_202++;
	if (iLocal_202 == unk_0x2249EB1A59F7C407())
	{
		iLocal_202 = 0;
		iLocal_203 = 1;
	}
}

int func_8()
{
	if (unk_0x95FD4EFBB9668DCE(1, 1, 0, 0))
	{
		if (func_29(Local_86.f_4) && func_29(Local_86.f_5))
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
	
	if ((!unk_0xDC1FDD911B88C6F2(Local_86.f_3) && func_29(Local_86.f_5)) && unk_0xDC1FDD911B88C6F2(Local_86.f_2))
	{
		if (func_4(Local_86.f_2))
		{
			if (func_11(&(Local_86.f_3), Local_86.f_2, 22, Local_86.f_5, -1, 1, 1, 1))
			{
				unk_0xE88E7BF4F83B5AAC(unk_0x9F2866A966FBAE78(Local_86.f_3), 0);
				if (func_10())
				{
					unk_0x690C5239500171FE(unk_0x9F2866A966FBAE78(Local_86.f_3), Global_1574224);
				}
				else
				{
					unk_0x690C5239500171FE(unk_0x9F2866A966FBAE78(Local_86.f_3), Global_1574227);
				}
				unk_0x8D6671D78D1F569B(unk_0x9F2866A966FBAE78(Local_86.f_3), 1);
				if (func_10())
				{
					iVar0 = unk_0x0ADD324BC46177EF(0, 10);
					if (iVar0 < 5)
					{
						unk_0x5E9C818BB0BD51FB(unk_0x9F2866A966FBAE78(Local_86.f_3), joaat("weapon_pistol"), 25000, func_10());
					}
					else if (iVar0 > 6)
					{
						unk_0x5E9C818BB0BD51FB(unk_0x9F2866A966FBAE78(Local_86.f_3), joaat("weapon_microsmg"), 25000, func_10());
					}
					else
					{
						unk_0x5E9C818BB0BD51FB(unk_0x9F2866A966FBAE78(Local_86.f_3), joaat("weapon_pumpshotgun"), 25000, func_10());
					}
				}
				iVar0 = unk_0x0ADD324BC46177EF(0, 10);
				if (iVar0 == 0 || iVar0 == 1)
				{
					unk_0x4C7F1913EEA14A44(unk_0x9F2866A966FBAE78(Local_86.f_3), 0);
				}
				else if ((iVar0 == 2 || iVar0 == 3) || iVar0 == 4)
				{
					unk_0x4C7F1913EEA14A44(unk_0x9F2866A966FBAE78(Local_86.f_3), 2);
				}
				else
				{
					unk_0x4C7F1913EEA14A44(unk_0x9F2866A966FBAE78(Local_86.f_3), 1);
				}
				iVar0 = unk_0x0ADD324BC46177EF(0, 4);
				if (iVar0 == 0)
				{
					unk_0x7E3DC7ED30B648F0(unk_0x9F2866A966FBAE78(Local_86.f_3), 5, 1);
				}
				else if (iVar0 == 1)
				{
					unk_0x7E3DC7ED30B648F0(unk_0x9F2866A966FBAE78(Local_86.f_3), 17, 1);
				}
				else if (iVar0 == 2)
				{
					unk_0x7E3DC7ED30B648F0(unk_0x9F2866A966FBAE78(Local_86.f_3), 13, 1);
				}
				if (func_10())
				{
					unk_0x7E3DC7ED30B648F0(unk_0x9F2866A966FBAE78(Local_86.f_3), 20, 1);
				}
				if (func_10())
				{
					unk_0x7E3DC7ED30B648F0(unk_0x9F2866A966FBAE78(Local_86.f_3), 2, 1);
				}
				iVar0 = unk_0x0ADD324BC46177EF(0, 4);
				if (iVar0 == 0)
				{
					unk_0x79EE909282B7E387(unk_0x9F2866A966FBAE78(Local_86.f_3), 2);
				}
				else if (iVar0 == 1)
				{
					unk_0x79EE909282B7E387(unk_0x9F2866A966FBAE78(Local_86.f_3), 1);
				}
				else if (iVar0 == 2)
				{
					unk_0x79EE909282B7E387(unk_0x9F2866A966FBAE78(Local_86.f_3), 3);
				}
				unk_0x95FBF68F793EBB36(unk_0x9F2866A966FBAE78(Local_86.f_3), 1);
				unk_0x97432097EDCCE1DF(unk_0x9F2866A966FBAE78(Local_86.f_3), 1);
				unk_0x1C26C4B0DAB91B21(unk_0x9F2866A966FBAE78(Local_86.f_3), 29, 1);
				unk_0x5AD8036BAC7AF207(unk_0x9F2866A966FBAE78(Local_86.f_3), 3);
				unk_0x09714949CF524B00(unk_0x9F2866A966FBAE78(Local_86.f_3), unk_0xF2DB717A73826179((200f * Global_262145.f_149)));
				unk_0xE9E14B592139D8D4(unk_0xFE740C3B53EEBEE2(Local_86.f_2), 1);
				unk_0x8734A10B003ED2B6(unk_0xFE740C3B53EEBEE2(Local_86.f_2), 1);
				func_36();
				unk_0xC2C4A3A9FF2FBFFF(unk_0x9F2866A966FBAE78(Local_86.f_3), uLocal_196);
				unk_0x839E9476E54502A2(Local_86.f_5);
			}
		}
	}
	if (!unk_0xDC1FDD911B88C6F2(Local_86.f_3))
	{
		return 0;
	}
	return 1;
}

int func_10()
{
	if (unk_0xB519E5386FBF69E5(unk_0x0ADD324BC46177EF(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_11(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0xCD27031055508F43(1))
	{
		return 0;
	}
	if (!unk_0xDC1FDD911B88C6F2(uParam1))
	{
		return 0;
	}
	if (!unk_0xC45A34912542C4EB(unk_0xFE740C3B53EEBEE2(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x329C1BF0FA8F98E5(unk_0xF430A9686E704FA3(unk_0xFE740C3B53EEBEE2(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0xDC1FDD911B88C6F2(*uParam0))
	{
		unk_0xFD092FF761E54535(unk_0x9F2866A966FBAE78(*uParam0), iParam7);
		if (unk_0x49D76889EB33F5C6(unk_0x9F2866A966FBAE78(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xDBE1342300E4DF89(*uParam0, 1);
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
	
	if (!unk_0xDC1FDD911B88C6F2(Local_86.f_2))
	{
		if (func_29(Local_86.f_4))
		{
			if (func_14(&Var0, &uVar3))
			{
				if (func_13(&(Local_86.f_2), Local_86.f_4, Var0, uVar3, 1, 1, 1, 0, 1, 1))
				{
					unk_0xE9A614E9191BFB4A(unk_0xFE740C3B53EEBEE2(Local_86.f_2), 1, 1, 0);
					unk_0xDB02B6E5670FE719(unk_0xFE740C3B53EEBEE2(Local_86.f_2), 1);
					unk_0xB862D2A317F182C4(unk_0xFE740C3B53EEBEE2(Local_86.f_2), 1);
					unk_0x28EB71E26B7A2DE2(unk_0xFE740C3B53EEBEE2(Local_86.f_2), "JOYRIDER_GROUP", 0f);
					unk_0x839E9476E54502A2(Local_86.f_4);
				}
			}
		}
	}
	if (!unk_0xDC1FDD911B88C6F2(Local_86.f_2))
	{
		return 0;
	}
	return 1;
}

int func_13(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	
	if (!unk_0x272140262F5CF459(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0xC797AB6C3A6482E1(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0xD504D1FF5DD2FFD7(uParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0xC21FA68B68242B11(uVar0);
	if (unk_0xDC1FDD911B88C6F2(*uParam0))
	{
		unk_0xFD092FF761E54535(uVar0, iParam10);
		if (unk_0x49D76889EB33F5C6(uVar0))
		{
			if (bParam8)
			{
				unk_0xDBE1342300E4DF89(*uParam0, 1);
			}
			else
			{
				unk_0xDBE1342300E4DF89(*uParam0, 0);
			}
		}
		unk_0xB862D2A317F182C4(uVar0, iParam9);
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
		if (unk_0xD8D6AD49486DB74C(&(Local_86.f_6), uParam0, &uVar2, 0f, 180f, 40f, 0, 1, 1))
		{
			unk_0xE67882ADA97B9D94(*uParam0, 1, uParam0, uParam1, &iVar1, 4, 1077936128, 0);
			if (iVar1 >= 1 || unk_0xD822C91E0EF641FA(*uParam0) == joaat("City"))
			{
				if (unk_0xF18329472591CFE6(-1367.557f, -3220.598f, 12.9448f, Local_86.f_6, 1) >= 600f && unk_0xF18329472591CFE6(750f, -3200f, 6f, Local_86.f_6, 1) >= 700f)
				{
					if (unk_0xF18329472591CFE6(func_28(unk_0x3F80C6638E3A1A90()), *uParam0, 1) <= (250f - 50f))
					{
						if (iLocal_201 <= 5)
						{
							if (func_15(*uParam0, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0))
							{
								bVar0 = true;
							}
						}
						else
						{
							Local_86.f_0 = 4;
						}
					}
				}
			}
		}
	}
	if (!bVar0)
	{
		iLocal_200 += 4;
		if (iLocal_200 >= 80)
		{
			iLocal_200 = 20;
			iLocal_201++;
		}
	}
	return bVar0;
}

int func_15(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17)
{
	Global_2404919 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0xEEC849D5E3FC13E0(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xF0CC6299CE9D9124(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xF0CC6299CE9D9124(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0xDADCC8A8DA94F002(Param0, fParam5, 0))
		{
			return 0;
		}
	}
	Global_2404919++;
	if (bParam13)
	{
		if (unk_0x743D96D854EFA6C5(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404919++;
	if (fParam14 > 0f)
	{
		if (func_21(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404919++;
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
	Global_2404919++;
	return 1;
}

int func_16(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_65(unk_0x3F80C6638E3A1A90(), 1, 1))
		{
			if (!unk_0xAEF17BDE274A1247())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0xF18329472591CFE6(func_28(unk_0x3F80C6638E3A1A90()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x86ECD59CFE6143AC(Param0, fParam3))
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
		if (func_65(iVar1, 1, 1))
		{
			if (!func_18(iVar1, 0) && unk_0x55AD8BE0B6CDBEAE(unk_0x3F80C6638E3A1A90(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x3F80C6638E3A1A90()))
				{
					if ((func_17(iVar1) || !bParam10) && !Global_2416794[iVar1 /*303*/].f_254)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x2CC717AC6CF51F8F(iVar1) == -1)
							{
								if (unk_0x2CC717AC6CF51F8F(iVar1) == unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x2CC717AC6CF51F8F(iVar1) != unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()))) || unk_0x2CC717AC6CF51F8F(iVar1) == -1)
							{
								if (unk_0xF18329472591CFE6(func_28(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x0719BE80FE2477AB(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x2CC717AC6CF51F8F(iVar1) != iParam8 || unk_0x2CC717AC6CF51F8F(iVar1) == -1)
						{
							if (unk_0xF18329472591CFE6(func_28(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x0719BE80FE2477AB(iVar1, Param0, fParam3))
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
	if (unk_0x715CF32E4ACFA610(unk_0x91B73D905EA38F6B(iParam0)) || Global_2416794[iParam0 /*303*/].f_240)
	{
		return 1;
	}
	return 0;
}

bool func_18(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x3F80C6638E3A1A90())
	{
		bVar0 = func_19(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1586079[iParam0 /*408*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xD18C3CF631455087(iParam0))
		{
			bVar0 = unk_0x2CC717AC6CF51F8F(iParam0) == 8;
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
	if (Global_1315887[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312740[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_20()
{
	return Global_1312746;
}

int func_21(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x3F80C6638E3A1A90() != iVar1) || iParam8 == 0)
		{
			if (func_65(iVar1, bParam4, bParam5))
			{
				if (unk_0x55AD8BE0B6CDBEAE(unk_0x3F80C6638E3A1A90(), iVar1))
				{
					if (!bParam7 || (!unk_0xAF437D7C802AB246(unk_0x91B73D905EA38F6B(iVar1)) && func_17(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()) != unk_0x2CC717AC6CF51F8F(iVar1))) || unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()) == -1)
						{
							if (((unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()) == -1 && uParam9) && bParam6) && func_22(iVar1))
							{
							}
							else if (unk_0xD51CFE69539DB6D8(unk_0x91B73D905EA38F6B(iVar1)))
							{
								if (unk_0xF18329472591CFE6(func_28(iVar1), Param0, 1) < fParam3)
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
	if (func_27(unk_0x3F80C6638E3A1A90(), iParam0))
	{
		return 1;
	}
	Global_2456685 = { func_26(iParam0) };
	if (unk_0x74320D9FF94A9E7E(&Global_2456685))
	{
		return 1;
	}
	if (func_23(unk_0x3F80C6638E3A1A90(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_23(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_25(iParam0);
	if (!iVar0 == func_24())
	{
		if (iVar0 == func_25(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_24()
{
	return -1;
}

int func_25(int iParam0)
{
	if (iParam0 != func_24())
	{
		return Global_1607618[iParam0 /*106*/].f_8;
	}
	return func_24();
}

struct<13> func_26(var uParam0)
{
	struct<13> Var0;
	
	unk_0xD82458461B583D5D(uParam0, &Var0, 13);
	return Var0;
}

int func_27(int iParam0, var uParam1)
{
	if (unk_0xAB7778782580F313())
	{
		Global_2456685 = { func_26(iParam0) };
		Global_2456698 = { func_26(uParam1) };
		if (unk_0x89398BAF58AA485C(&Global_2456685))
		{
			if (unk_0x89398BAF58AA485C(&Global_2456698))
			{
				unk_0xB486161F8A7A8AFB(&Global_2456615, 35, &Global_2456685);
				unk_0xB486161F8A7A8AFB(&Global_2456650, 35, &Global_2456698);
				if (Global_2456615 == Global_2456650)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_28(int iParam0)
{
	return unk_0x1141852D07400777(unk_0x91B73D905EA38F6B(iParam0), 0);
}

int func_29(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x801429C020C467BA(iParam0);
	return unk_0x5053BF6D5604065B(iParam0);
}

bool func_30()
{
	if (!unk_0xB519E5386FBF69E5(uLocal_195, 1))
	{
		if (unk_0x534DA90AB4BE425C(func_28(unk_0x3F80C6638E3A1A90()), iLocal_199, &(Local_86.f_6), 4, 1077936128, 0))
		{
			unk_0x9956FB0E4B50ECB8(&iLocal_195, 1);
		}
		else
		{
			iLocal_199++;
		}
	}
	return unk_0xB519E5386FBF69E5(iLocal_195, 1);
}

int func_31(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xF073E12B43682F7D(unk_0x4B7B32731313EF0E(unk_0xC7F926248AF8587B(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_32(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xFA4B36553B2A7802())
		{
			func_33(uParam0, 0, 0);
		}
	}
}

void func_33(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x00AAD79B42B3E036() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xC7F926248AF8587B();
			}
			else
			{
				*uParam0 = unk_0xDBD31D1E0E5F2049();
			}
		}
		else
		{
			*uParam0 = unk_0x9D40BBF80D8F5E8A();
		}
		uParam0->f_1 = 1;
	}
}

void func_34()
{
	switch (Local_98[unk_0xA1238458CB587858() /*3*/].f_2)
	{
		case 0:
			func_36();
			func_35();
			if (Local_86.f_9 > 0)
			{
				Local_98[unk_0xA1238458CB587858() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_54();
			break;
	}
}

void func_35()
{
	int iVar0;
	float fVar1;
	
	if (!unk_0xB519E5386FBF69E5(Local_98[unk_0xA1238458CB587858() /*3*/].f_1, 0))
	{
		if (func_4(Local_86.f_2) && !func_3(Local_86.f_3))
		{
			iVar0 = unk_0x8219941CC4732B36(unk_0xFE740C3B53EEBEE2(Local_86.f_2));
			fVar1 = unk_0xD4F0FC8FFEDE152B(unk_0xFE740C3B53EEBEE2(Local_86.f_2));
			if (iVar0 < 200)
			{
				func_36();
				unk_0xC2C4A3A9FF2FBFFF(unk_0x9F2866A966FBAE78(Local_86.f_3), uLocal_198);
				unk_0x9956FB0E4B50ECB8(&(Local_98[unk_0xA1238458CB587858() /*3*/].f_1), 0);
			}
			else if (fVar1 < 3f)
			{
				if ((((unk_0xD1ED65515DA55794(unk_0xFE740C3B53EEBEE2(Local_86.f_2)) || unk_0xF675ACE4149620B8(unk_0xFE740C3B53EEBEE2(Local_86.f_2), 3, 10000)) || unk_0xF675ACE4149620B8(unk_0xFE740C3B53EEBEE2(Local_86.f_2), 1, 10000)) || unk_0xF675ACE4149620B8(unk_0xFE740C3B53EEBEE2(Local_86.f_2), 0, 10000)) || unk_0xF675ACE4149620B8(unk_0xFE740C3B53EEBEE2(Local_86.f_2), 2, 10000))
				{
					func_36();
					unk_0xC2C4A3A9FF2FBFFF(unk_0x9F2866A966FBAE78(Local_86.f_3), uLocal_197);
					unk_0x9956FB0E4B50ECB8(&(Local_98[unk_0xA1238458CB587858() /*3*/].f_1), 0);
				}
			}
		}
	}
}

void func_36()
{
	if (!unk_0xB519E5386FBF69E5(iLocal_195, 0))
	{
		if (func_4(Local_86.f_2))
		{
			unk_0x94026C1D1DB14225(&uLocal_196);
			unk_0x6187AAA1BF80C7C3(0, unk_0xFE740C3B53EEBEE2(Local_86.f_2), Local_86.f_6, 14, 30f, 786468, 15f, 1f, 0);
			unk_0xE81313E76FEC1E97(0, unk_0xFE740C3B53EEBEE2(Local_86.f_2), 30f, 786468);
			unk_0x911ECBCE73F8EC3F(uLocal_196);
			unk_0x94026C1D1DB14225(&uLocal_197);
			unk_0xCD7A5BCC47D00FB2(0, 0, 1);
			unk_0x911ECBCE73F8EC3F(uLocal_197);
			unk_0x94026C1D1DB14225(&uLocal_198);
			unk_0x6187AAA1BF80C7C3(0, unk_0xFE740C3B53EEBEE2(Local_86.f_2), Local_86.f_6, 5, 30f, 786468, 99999f, 1f, 0);
			unk_0xCD7A5BCC47D00FB2(0, 0, 1);
			unk_0x911ECBCE73F8EC3F(uLocal_198);
			unk_0x9956FB0E4B50ECB8(&iLocal_195, 0);
		}
	}
}

int func_37()
{
	return Local_86.f_0;
}

int func_38(int iParam0)
{
	return Local_98[iParam0 /*3*/];
}

bool func_39(int iParam0)
{
	return !func_40(iParam0);
}

int func_40(int iParam0)
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
			if (Global_262145.f_5029)
			{
				return 0;
			}
			if (func_42(unk_0x3F80C6638E3A1A90(), 7))
			{
				return 0;
			}
			if (unk_0xB519E5386FBF69E5(Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_248.f_6, 0) || unk_0xB519E5386FBF69E5(Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_248.f_6, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_5030)
			{
				return 0;
			}
			if (func_42(unk_0x3F80C6638E3A1A90(), 7))
			{
				return 0;
			}
			if (unk_0xB519E5386FBF69E5(Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_248.f_6, 0) || unk_0xB519E5386FBF69E5(Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_248.f_6, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_5031)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_5032)
			{
				return 0;
			}
			if (func_42(unk_0x3F80C6638E3A1A90(), 7))
			{
				return 0;
			}
			if (unk_0xB519E5386FBF69E5(Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_248.f_6, 0) || unk_0xB519E5386FBF69E5(Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_248.f_6, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_41(4))
			{
				return 0;
			}
			if (func_42(unk_0x3F80C6638E3A1A90(), 7))
			{
				return 0;
			}
			if (unk_0xB519E5386FBF69E5(Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_248.f_6, 0) || unk_0xB519E5386FBF69E5(Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_248.f_6, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_41(4))
			{
				return 0;
			}
			if (func_42(unk_0x3F80C6638E3A1A90(), 7))
			{
				return 0;
			}
			if (unk_0xB519E5386FBF69E5(Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_248.f_6, 0) || unk_0xB519E5386FBF69E5(Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_248.f_6, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_41(4))
			{
				return 0;
			}
			if (func_42(unk_0x3F80C6638E3A1A90(), 7))
			{
				return 0;
			}
			if (unk_0xB519E5386FBF69E5(Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_248.f_6, 0) || unk_0xB519E5386FBF69E5(Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_248.f_6, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_41(4))
			{
				return 0;
			}
			if (func_42(unk_0x3F80C6638E3A1A90(), 7))
			{
				return 0;
			}
			if (unk_0xB519E5386FBF69E5(Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_248.f_6, 0) || unk_0xB519E5386FBF69E5(Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_248.f_6, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_41(4))
			{
				return 0;
			}
			if (func_42(unk_0x3F80C6638E3A1A90(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_41(4))
			{
				return 0;
			}
			if (func_42(unk_0x3F80C6638E3A1A90(), 7))
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

int func_41(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_65(unk_0x0F810277E61B87AE(iVar0), 0, 1))
		{
			if (unk_0xB519E5386FBF69E5(Global_2416794[iVar0 /*303*/].f_206, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_42(int iParam0, int iParam1)
{
	return unk_0xB519E5386FBF69E5(Global_2416794[iParam0 /*303*/].f_206, iParam1);
}

int func_43()
{
	bool bVar0;
	
	func_50(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315884 == 0)
	{
		if (!unk_0x00AAD79B42B3E036())
		{
			return 1;
		}
	}
	if (func_49())
	{
		return 1;
	}
	if (Global_2442886)
	{
		return 1;
	}
	if (func_48())
	{
		return 1;
	}
	if (func_47(157))
	{
		if (!func_46())
		{
			return 1;
		}
	}
	if (func_47(155))
	{
		return 1;
	}
	if (!unk_0xC8FFCE1611C4F73B())
	{
		return 1;
	}
	if (func_44() != 0)
	{
		if (unk_0xFF6891E21E7FC193(func_44()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_44()
{
	switch (func_45())
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

int func_45()
{
	return Global_25034;
}

bool func_46()
{
	return Global_2432717.f_573;
}

int func_47(int iParam0)
{
	if (unk_0x957F04289F04E160(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_48()
{
	return Global_2440974;
}

bool func_49()
{
	return Global_2432717.f_568;
}

void func_50(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xE4E91039B15CA110(1))
	{
		iVar1 = unk_0xCEDD7FE4546BFC4F(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x0586E3C97DD61FE4(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 313:
					func_51(iVar0);
					break;
				
				case 2:
					unk_0x0586E3C97DD61FE4(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 55)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_51(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x0586E3C97DD61FE4(1, iParam0, &Var0, 3))
	{
		if (func_65(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x91B73D905EA38F6B(Var0.f_1);
			if (unk_0xD51CFE69539DB6D8(uVar3))
			{
				if (unk_0x51374A0BB2871E6E(uVar3, 0))
				{
					uVar4 = unk_0xF0295FF51F2D7803(uVar3, 0);
					if (unk_0x7DF549E9DDE0A2CE(uVar4, Var0.f_2) && unk_0x0D47370227E1A847())
					{
						if (func_52(uVar4, &bVar5))
						{
							unk_0x2C47D40CD2967A44(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xC1F2137782A816E9(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_52(var uParam0, var uParam1)
{
	if (unk_0xD51CFE69539DB6D8(uParam0))
	{
		if (!unk_0x28D33422BA6C479D(uParam0))
		{
			if (unk_0x4F9572356C55E94C(uParam0))
			{
				unk_0x20BB4B94CC6DDC9A(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x4C5CA989AEF3A14C(uParam0, 0))
		{
			if (unk_0x9B5F286CC8377932(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_53()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_54()
{
	func_57();
	if (func_37() == 4 && Local_86.f_4 != 0)
	{
		unk_0x7E38E815EF844C74(Local_86.f_4, 0);
	}
	if (func_4(Local_86.f_2))
	{
		unk_0xD1AE9D189CB65173(unk_0xFE740C3B53EEBEE2(Local_86.f_2), 0f);
	}
	unk_0x61B624BA2305D0E5("JOYRIDER_RADIO_SCENE");
	func_56(9, 0);
	func_55();
}

void func_55()
{
	unk_0x52F20802944F8DCE();
}

void func_56(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xB519E5386FBF69E5(Global_2416794[unk_0x3F80C6638E3A1A90() /*303*/].f_206, iParam0))
		{
			unk_0x9956FB0E4B50ECB8(&(Global_2416794[unk_0x3F80C6638E3A1A90() /*303*/].f_206), iParam0);
		}
	}
	else if (unk_0xB519E5386FBF69E5(Global_2416794[unk_0x3F80C6638E3A1A90() /*303*/].f_206, iParam0))
	{
		unk_0x73817D396768E4C6(&(Global_2416794[unk_0x3F80C6638E3A1A90() /*303*/].f_206), iParam0);
	}
}

void func_57()
{
	unk_0x33A90AD8FA327B72(&uLocal_196);
}

void func_58(struct<20> Param0)
{
	int iVar0;
	
	func_63(func_64(Param0.f_0), Param0);
	unk_0xB05CBEA790398181(1);
	unk_0x64CE3D093CEB0059(1);
	func_61(0, -1, 0);
	unk_0xF7B58B81A69E540F(&Local_86, 12);
	unk_0x1AC0E3669E60AAAD(&Local_98, 97);
	if (!func_60())
	{
		func_54();
	}
	if (unk_0x00AAD79B42B3E036())
	{
		unk_0x8A10FCF639EC0104(0);
		if (unk_0xFA4B36553B2A7802())
		{
			if (Global_2457699.f_4237 == 0)
			{
				iVar0 = unk_0x0ADD324BC46177EF(0, 7);
				switch (iVar0)
				{
					case 0:
						Local_86.f_4 = joaat("stingergt");
						break;
					
					case 1:
						Local_86.f_4 = joaat("entityxf");
						break;
					
					case 2:
						Local_86.f_4 = joaat("feltzer2");
						break;
					
					case 3:
						Local_86.f_4 = joaat("monroe");
						break;
					
					case 4:
						Local_86.f_4 = joaat("cogcabrio");
						break;
					
					case 5:
						Local_86.f_4 = joaat("superd");
						break;
					
					case 6:
						Local_86.f_4 = joaat("infernus");
						break;
				}
			}
			else
			{
				Local_86.f_4 = Global_2457699.f_4237;
				Global_2457699.f_4237 = 0;
			}
			unk_0x7E38E815EF844C74(Local_86.f_4, 1);
			Local_86.f_5 = func_59(1);
		}
		func_56(9, 1);
		unk_0x91523366B2FDCD40("JOYRIDER_RADIO_SCENE");
		Local_98[unk_0xA1238458CB587858() /*3*/] = 0;
	}
	else
	{
		func_54();
	}
}

int func_59(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0x0ADD324BC46177EF(0, 32);
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

int func_60()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x00AAD79B42B3E036())
		{
			return 0;
		}
		if (unk_0x2953FEB47CBA6611())
		{
			return 1;
		}
		if (func_49())
		{
			return 0;
		}
		if (func_47(155))
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

int func_61(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xD0642B91C061B527();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_55();
			}
			else
			{
				return 0;
			}
		}
		if (!func_62())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x00AAD79B42B3E036())
				{
					if (!bParam2)
					{
						func_55();
					}
					else
					{
						return 0;
					}
				}
				if (func_49())
				{
					if (!bParam2)
					{
						func_55();
					}
					else
					{
						return 0;
					}
				}
				if (func_47(155))
				{
					if (!bParam2)
					{
						func_55();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xAB63AB6154522A4E())
			{
				if (!bParam2)
				{
					func_55();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xD0642B91C061B527();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x00AAD79B42B3E036())
		{
			if (!bParam2)
			{
				func_55();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xAB63AB6154522A4E())
	{
		if (!bParam2)
		{
			func_55();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_62()
{
	return Global_1315884;
}

void func_63(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x00AAD79B42B3E036())
	{
		func_55();
	}
	unk_0xE1306BF06D83921B(uParam0, 0, Param1.f_16);
}

int func_64(int iParam0)
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
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
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
		
		case 65:
			return 32;
		
		case 66:
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
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 67:
			return 32;
		
		case 68:
			return 32;
		
		case 72:
			return 32;
		
		case 70:
			return 32;
		
		case 71:
			return 32;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 73:
			return 32;
		
		case 74:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 83:
			return 2;
		
		case 88:
			return 1;
		
		case 84:
			return 2;
		
		case 85:
			return 4;
		
		case 86:
			return 2;
		
		case 87:
			return 2;
		
		case 69:
			return 1;
		
		case 89:
			return 2;
		
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
			return 0;
		
		case 96:
			return 1;
		
		default:
	}
	return 0;
}

int func_65(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xD18C3CF631455087(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x2E6D4A0CE8AD9494(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2426494.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

